#include<stdio.h>
float caltofar(float c);
int main()
{
	float a;
printf("enter value of celsius :\n");
	scanf("%f",&a);
	printf("value is %f fahrenheit",caltofar(a));
	
}
float caltofar(float c){
	float f=(c*9/5)+32;
	return f;
}
