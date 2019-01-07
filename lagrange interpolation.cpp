#include <stdio.h>
int main()
{
	float x[20],y[20],a,L[20],sum,temp;
	int i,j,n;
	printf("Enter number of data: ");
	scanf("%d",&n);
	printf("Enter value of interpolation: ");
	scanf("%f",&a);
	for(i=0;i<n;i++)
	{
		printf("Enter x[%d]=",i);
		scanf("%f",&x[i]);
		printf("Enter y[%d]=",i);
		scanf("%f",&y[i]);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		temp=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				temp=temp*((a-x[j])/(x[i]-x[j]));
			}
		}
		L[i]=temp;
		printf("L[%d]=%f\n",i,L[i]);
	}
	printf("\n\n");
	sum=0;
	for(i=0;i<n;i++)
	sum=sum+y[i]*L[i];
	printf("The interpolation value is: %f",sum);
	return 0;
}
