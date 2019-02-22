#include<stdio.h>
#include<math.h>
#include<conio.h>
float f(float x,float y );
int main()
{
	float h,x0,y0,P,m1,x[30],y[30],E[30],m,m2;
	int i=0;
	printf("Enter step size:");
	scanf("%f",&h);
	printf("Enter intial condition x0 and y0:");
	scanf("%f %f",&x0,&y0);
	printf("Enter evaluation of solution:");
	scanf("%f",&P);
	x[0]=x0,y[0]=y0;
	do{
		E[i]=y[i];
		m1=f(x[i],y[i]);
		x[i+1]=x[i]+h;
		E[i+1]=E[i]+m1*h;
		m2=f(x[i+1],E[i+1]);
		m=(m1+m2)/2;
		y[i+1]=y[i]+m*h;
		i=i+1;
	}
	while(x[i]<P);
	printf("\n\nRequired value of y[%d]=%f",i,y[i]);
	return 0;
}
float f(float x,float y)
{
	return ((2*y)/x);
}
