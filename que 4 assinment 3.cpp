#include<stdio.h>
int main()
{
	int i ,array[10];
	for(i=0;i<10;i++)
	{
	printf("enter any number");
	scanf("%d",&array[i]);
    }
    int min=array[0];
    for(i=9;i>=0;i--)
    {
    	if (min<array[i]);
    	min=array[i];
    }
	printf("min=%d",min);
    }
    
    
