#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
printf("hello....pid=%d\n",getpid());
fork();
fork();
printf("hiiiii.....pid=%d\n",getpid());
}

