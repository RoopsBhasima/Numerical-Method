#include<stdio.h>
#include<math.h>
#include<conio.h>
float f(float x,float y );
int main()
{
	float h,x0,y0,P,m,x[30],y[30];
	int i=0;
	printf("Enter step size:");
	scanf("%f",&h);
	printf("Enter intial condition x0 and y0:");
	scanf("%f %f",&x0,&y0);
	printf("Enter evaluation of solution:");
	scanf("%f",&P);
	x[0]=x0,y[0]=y0;
	do{
		m=f(x[i],y[i]);
		x[i+1]=x[i]+h;
		y[i+1]=y[i]+m*h;
		i=i+1;
	}
	while(x[i]<P);
	printf("\n\nRequired value of y[%d]=%f",i,y[i]);
	return 0;
}
float f(float x,float y)
{
	return (x+y);
}
