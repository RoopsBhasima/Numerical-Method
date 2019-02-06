#include<stdio.h>
#include<math.h>
float f(float x)
{
	return (1/(1+x*x));
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
	{   if(i%2==0)
		IV=IV+2*y[i];
		else
		IV=IV+4*y[i];
	}
	IV=h*IV/3;
	printf("The solution of integral value of simpsons 1/3 rule is %f",IV);
}
