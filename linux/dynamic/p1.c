#include<stdio.h>
void print(char *);
int sum(int,int);
int mul(int,int);
void main()
{
int i=10,j=20,k;
print("hello world");
k=sum(i,j);
printf("k=%d\n",k);
k=mul(i,j);
printf("k=%d\n",k);
}

