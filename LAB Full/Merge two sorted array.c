#include<stdio.h>
void main()
{
int i,j,k,n,m,a[20],b[20],c[50],p;
printf("Enter limit:");
scanf("%d",&n);
printf("Enter the elements in ascending order:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter limit:");
scanf("%d",&m);
printf("Enter the elements in ascending order:\n");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
k=0;
while(i<n && j<m)
{
if (a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else if(a[i]>b[j])
{
c[k]=b[j];
j++;
k++;
}
else
{
c[k]=a[i];
i++;
j++;
k++;
}
}
while(i<n)
{
c[k]=a[i];
i++;
k++;
}
while(j<m)
{
c[k]=b[j];
j++;
k++;
}
p=k;
printf("Elements of merged array is :\n");
for(k=0;k<p;k++)
{
printf("%d",c[k]);
}
}

