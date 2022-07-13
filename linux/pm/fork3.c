#include"header.h"
void main()
{
	int r;
	r=fork();
	if(r==0)
	{
		printf("child process\n");
	}
	else
	{
		printf("parent process\n");
	}
	while(1);
}


