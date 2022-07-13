#include"header.h"
void abc(void)
{
printf("in abc\n");
}
void main()
{
printf("hello\n");
atexit(abc);
printf("hiii\n");
sleep(10);
exit(0);
}


