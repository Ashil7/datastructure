#include<stdio.h>
#include<string.h>
void uni(char*,char*,char*);
void inter(char*,char*,char*);
void diff(char*,char*,char*);

void main()
{
	char a[20],b[20],c[20];
	printf("Enter String 1 :\n");
	scanf("%s",a);
	printf("Enter String 2 :\n");
	scanf("%s",b);
	
	uni(a,b,c);
		printf("\n Union :  %s",c);
	inter(a,b,c);
		printf("\n Intersection : %s ",c);
	diff(a,b,c);
		printf("\n Difference : %s ",c);
		printf("\n");
}

void uni(char*a,char*b,char*c)
{
	int i,l;
	l= strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]=='0' && b[i]=='0')
		c[i]='0';
		else
		c[i]='1';
	}
	c[i]='\0';
}

void inter(char*a,char*b,char*c)
{
	int i,l;
	l= strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]=='1' && b[i]=='1')
		c[i]='1';
		else
		c[i]='0';
	}
	c[i]='\0';
}

void diff(char*a,char*b,char*c)
{
	int i,l;
	l= strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]=='1' && b[i]=='0')
		c[i]='1';
		else
		c[i]='0';
	}
	c[i]='\0';
}


