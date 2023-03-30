#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define READ_SIZE 0x32

volatile void flag() {
    printf("pwned");
    return;
}

volatile void pwn() {
  char buf[0x20] = {0};
  fputs(
      "For my first trick, I will attempt to fit 50 bytes of user input into 32 bytes of stackbuffer;\nWhat could possibly go wrong?",
      stderr
  );
  fputs(
      "You there madam, may I have your input please? And don\'t worry about null bytes, we\'reusing fgets!\n",
      stderr
  );
  fputs("> ", stderr);
  fgets(buf, READ_SIZE, stdin);
  return;
}

int main()
{
  pwn();
  return 0;
}

