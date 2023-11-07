#include<stdio.h>
main()
{
    FILE *f1,*f2,*f3;
    int num,i;
    f1=fopen("DATA","w");
    for(i=0;i<50;i++)
    {
        scanf("%d",&num);
        if(num==-1)
            break;
        putw(num,f1);
    }
    fclose(f1);

    f1=fopen("DATA","r");
    f2=fopen("ODD","w");
    f3=fopen("EVEN","w");

    while((num=getw(f1))!=EOF)
    {
        if(num%2==0)
            putw(num,f3);
        else
            putw(num,f2);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    f3=fopen("EVEN","r");
    f2=fopen("ODD","r");
    printf("ODD NUM ARE\n");
    while((num=getw(f2))!=EOF)
        printf("%4d\n",num);
    printf("EVEN NUM ARE\n");
    while((num=getw(f3))!=EOF)
        printf("%4d",num);

        fclose(f2);
        fclose(f3);
}
