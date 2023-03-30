vuln:
	gcc main.c -g -no-pie -mno-accumulate-outgoing-args -fno-stack-protector -z execstack -o ret2pwn
