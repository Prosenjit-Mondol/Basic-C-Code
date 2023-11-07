#include<stdio.h>

#include<conio.h>

typedef struct poly

{

int coeff;

int expo;

}p;

p p1[10],p2[10],p3[10];

void main()

{

int t1,t2,t3,k;

int read(p p1[10]);

int add(p p1[10],p p2[10],int t1,int t2,p p3[10]);

void print(p p2[10],int t2);

void printo(p pp[10],int t2);

t1=read(p1);

print(p1,t1);

t2=read(p2);

print(p2,t2);

t3=add(p1,p2,t1,t2,p3);

printo(p3,t3);

getch();

}

int read(p p[10])

{

int t1,i;

printf("\n Enter the total no of terms");

scanf("%d",&t1);

printf("\n Enter the coeff and expo in descending order");

for(i=0;i<t1;i++)

scanf("%d%d",&p[i].coeff,&p[i].expo);

return(t1);

}

int add(p p1[10],p p2[10],int t1,int t2,p p3[10])

{

int i,j,k;

int t3;

i=0,j=0,k=0;

while(i<t1 && j<t2)

{

if(p1[i].expo==p2[j].expo)

{

p3[k].coeff=p1[i].coeff+p2[j].coeff;

p3[k].expo=p1[i].expo;

i++;j++;k++;

}

else if(p1[1].expo>p2[j].expo)

{

p3[k].coeff=p1[i].coeff;

p3[k].expo=p1[i].expo;

i++;k++;

}

else

{

p3[k].coeff=p2[j].coeff;

p3[k].expo=p2[j].expo;

j++;k++;

}

}

while(i<t1)

{

p3[k].coeff=p1[i].coeff;

p3[k].expo=p1[i].expo;

i++;k++;

}

while(j<t2)

{

p3[k].coeff=p2[j].coeff;

p3[k].expo=p2[j].expo;

j++;k++;

}

t3=k;

return(t3);

}

void print(p pp[10],int term)

{

int k;

printf("\n\n Given Polynomial:");

for(k=0;k<term-1;k++)

printf("%dx^%d+",pp[k].coeff,pp[k].expo);

printf("%dx^%d",pp[k].coeff,pp[k].expo);

}

void printo(p pp[10],int term)

{

int k;

printf("\n\n The addition of polynomial:");

for(k=0;k<term-1;k++)

printf("%dx^%d+",pp[k].coeff,pp[k].expo);

printf("%dx^%d",pp[k].coeff,pp[k].expo);

}
