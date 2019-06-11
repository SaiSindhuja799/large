#include<stdio.h>
int main()
{
	int n,i,j,t,cnt=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		cnt++;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	if(cnt==n)
	printf("0");
	else
	{
	for(i=n-1;i>=0;i--)
	printf("%d ",a[i]);
	}	
		
}
