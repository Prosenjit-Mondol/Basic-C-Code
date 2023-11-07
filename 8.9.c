#include<stdio.h>
int main()
{
int Str[10];
int i,Beg,End,Mid,Item;
Beg=0;
End=9;
Mid=(Beg+End)/2;
printf("Enetr Any Sorted Array:--\n");
for(i=0;i<10;i++)
scanf("%d",&Str[i]);
printf("Enter Item Which U want to Search:--\n");
scanf("%d",&Item);
while((Item!=Str[Mid])&&(Beg<=End))
{
if(Item<Str[Mid])
End=Mid-1;
else
Beg=Mid+1;
Mid=(Beg+End)/2;
}
if(Beg>End)
printf("Item Not Found\n");
else
printf("%d Found At Index %d\n",Item,Mid);
return 0;
}
