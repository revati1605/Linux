#include"header.h"
void isr(int n)
{
	printf("in isr n=%d,pid=%d\n",n,getpid());
}
main()
{
printf("hello\n");
signal(2,isr);
printf("hii\n");
while(1);
}
