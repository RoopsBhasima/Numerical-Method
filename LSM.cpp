#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n,i,j,k;
	float x[20],y[20],sx=0,sy=0,sxy=0,sx2=0,a,b;
	printf("Enter no of set of data: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter x[%d]:",i);
		scanf("%f",&x[i]);
		printf("Enter y[%d]:",i);
		scanf("%f",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		sx=sx+x[i];
		sy=sy+y[i];
		sxy=sxy+(x[i]*y[i]);
		sx2=sx2+(x[i]*x[i]);
	}
b=((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
a=(sy-(b*sx))/n;
printf("\n\n\n");
printf("Y=%0.3f+%0.3fx",a,b);
}
