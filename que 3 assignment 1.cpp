#include<stdio.h>
int main()
{
	int i,max,array[10];
	for(i=0;i<10;i++)
    {
		scanf("%d",&array[i]);
	}
	max=array[0];
	for(i=0;i<10;i++)
	{
		if (max>array[i]) 
		max=array[i];
    }
    printf("max=%d",max);
}
