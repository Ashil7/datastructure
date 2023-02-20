#include<stdio.h>
#include<stdlib.h>
 
void insertion();
void deletion();
void display();
int F=-1,R=-1,item,size=8,A[30];
void main()
{
int opt;
printf("enter your size of queue:...\t");
scanf("%d",&size);
do
{
printf("\nenter your option\n1.insertion\n2.deletion\n3.display\n4.exit\n");
scanf("%d",&opt);
switch(opt)
{
case 1:
     insertion();
     break;
case 2:
     deletion();
     break;
case 3:
	 display();
	 break;
case 4:
	 exit;
}
}
while(opt!=4);
}


void insertion()
{
if(F==(R+1)%size)
{
printf("\nqueue is full\n");
}
else
{
printf("\nenter the data to be inserted...:");
scanf("%d",&item);
}
if(F==-1&&R==-1)
{
F=0;
R=0;
A[R]=item;
}
else
{
R=(R+1)%size;
A[R]=item;
}
}

 void deletion()
{
if(F==-1)
{
printf("\nqueue is empty");
}
else if(F==0&&R==0)
{
printf("\ndeleted elements...: %d",A[F]);
F=R=-1;
}
else
{
printf("\nitem to be deleted...: %d",A[F]);
F=(F+1)%size;
}
} 


void display()
{
int i;
i=F;
if(i==-1&&R==-1)
{
printf("\nqueue is empty");
}
else
{
printf("\nelemets are...:\t");
while(i>-1)
{
printf("%d\t",A[i]);
if(i==r)
break;
i=(i+1)%size;
}
}}

