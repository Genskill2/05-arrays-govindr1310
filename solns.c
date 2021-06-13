/* Enter your solutions in this file */
#include <stdio.h>
/*max function*/
int max(int a[],int n)
{
	int max=0;
	for (int i=0;i<n;i++)
	{
		if (a[i]>max)
			max=a[i];
		else
			continue;
	}
	return max;
}
/*min function*/
int min(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		else
			continue;
	}
	return min;
}

			
