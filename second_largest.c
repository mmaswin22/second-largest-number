#include<stdio.h>
int main()
{
	int tot,arr[tot],a,k,i,j;
	scanf("%d",&tot);
	for(i=0;i<tot;i++)
	scanf("%d",&arr[i]);
	for(j=0;j<tot;j++)
	{
		int count=0;
		for (k=0;k<tot;k++)
		{
			if (arr[j]>arr[k])
			count+=1;
		}
		if (count==tot-2)
		a=arr[j];
	}
	printf("%d",a);
	return 0;
}
