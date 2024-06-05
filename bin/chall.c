#include <stdio.h>
#include <stdlib.h>

void lmao_pisan_kang()
{
    execve("/bin/sh", (char *[]){0}, (char *[]){0});
}

int main()
{
    char buf[16];
    puts("Selamat datang!");
    fflush(stdout);
    read(0, buf, 0x30);
    return 0;
}