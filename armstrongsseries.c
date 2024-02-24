#include<stdio.h>

int main(){

	int n,m,sum;
	int s,num;

	printf("armstrong  numbers are :\n");
	for( num=100;num<=999;num++){
	n=num;
	sum=0;
	while(n>0)
	{
	s=n%10;
	m=s*s*s;
	sum=sum+m;
	n=n/10;	 
	}
	if(num==sum){
		printf("%d \n",num);
	}}
	return 0;
}
