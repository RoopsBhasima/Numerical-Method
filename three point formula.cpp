#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265
int main()
{
	float x,h,f,fx,fy,df,val,df2,df3;
	val=PI/180;
	printf("Enter step size(h):");
	scanf("%f",&h);
	printf("Enter point where you have to evaluate derivation(x):");
	scanf("%f",&x);
	f=exp(x)*sin(x*val);
	fx=exp(x+h)*sin((x+h)*val);
	fy=exp(x-h)*sin((x-h)*val);
	df=(fx-fy)/(2*h);
	df2=(fx-f)/h;
	df3=(f-fy)/h;
	printf("\n\n");
	printf("The derivative of given function using three point formula is: %f\n\n",df);
	printf("The derivative of given function using two point formula is(forward): %f\n\n",df2);
	printf("The derivative of given function using two point formula is(backward): %f\n",df3);


	return 0;	
}
