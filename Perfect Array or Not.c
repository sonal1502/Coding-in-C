//Array is perfect if all numbers from 1 to n exist in the array 
#include <stdio.h>
int compare (const void *a, const void *b) 
{return (*(int*)a-*(int*)b);
}

int check(int a[20],int n)
{int temp=0;
    for(int i=0;i<n;i++)
    {for(int j=i+1;j<n;j++)
    {if(a[i]==i+1)
    temp=1;
    else if ((a[i]==a[j])||(a[i!=i+1]))
    temp=0;
    }}
return temp;
}
int main() 
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
qsort(a,n,sizeof(int),compare);
for(int i=0;i<n;i++)
printf("%d ",a[i]);
int x=check(a,n);
if(x==0)
printf("Not a perfect array");
else printf("Perfect array");
return 0;
}
