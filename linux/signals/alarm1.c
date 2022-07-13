#include"header.h"
void my_isr(int n)
{
	printf("in isr pid=%d\n",getpid());
}
int main()
{
	printf("hello..\n");
	signal(14,my_isr);
	alarm(10);
	printf("hii..\n");
	while(1);
}

