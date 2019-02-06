#include<stdio.h>
#include<math.h>
float f(float x)
{
	return ((x*x*x)+1);
}
int main()
{
	int i,n;
	float a,b,h,x[20],y[20],IV;
	printf("enter the value of a and b:");
	scanf("%f%f",&a,&b);
	printf("enter the number of segments:");
	scanf("%d",&n);
	h=(b-a)/n;
	x[0]=a;
	x[n]=b;
	for(i=1;i<n;i++)
	{
		x[i]=x[i-1]+h;
		y[i]=f(x[i]);
	}
	IV=f(a)+f(b);
	for(i=1;i<n;i++)
	{
		IV=IV+2*y[i];
	}
	IV=h*IV/2;
	printf("The solution of integral value of trapezoidal rule is %f",IV);
}
