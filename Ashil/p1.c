#include<stdio.h>
void main()
{
int i,n,a[20],p,v;
printf("Enter limit:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("position of number  to be entered:");
scanf("%d",&p);
printf("enter the value to be inserted:");
scanf("%d",&v);
for(i=n-1;i>=p-1;i--)

a[i+1]=a[i];
a[p-1]=v;

printf("final array:");
for(i=0;i<=n;i++)
printf("%d \n",a[i]);
 

}
