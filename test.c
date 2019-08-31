#include <stdio.h>
int main(int argc,char **argv)
{
 int a=0x12345678;
int *pint=&a;
char *pchar=(char *)&a;
short *pshort=(short *)&a;
printf("*pint=%d *pch=%02x *psh=%x\n",*pint,*pchar,*pshort);
return 0;
}

