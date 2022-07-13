#include"header.h"
void my_isr(int n)
{
	printf("in isr\n");
}
void main()
{
	struct sigaction new;
	new.sa_handler=my_isr;
	sigemptyset(&new.sa_mask);
	new.sa_flags=0;

	printf("hello  \n");
	sigaction(2,&new,0);
	while(1);
}

