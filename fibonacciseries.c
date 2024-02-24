#include<stdio.h>
int main(void)
{
	long x,y,z;
	int i,n;
	x=0;
	y=1;
	printf("enter any number \n ");
	scanf("%d",&n);
	printf("%ld \n",y);
	
	for (i=1;i<=n;i++)
	{
		z=x+y;
		printf("%ld\n",z);
		x=y;
		y=z;
		
	}
	printf("\n");
	//return 0;
}
