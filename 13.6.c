#include<stdio.h>

struct invent_record
{
    char name[100];
    int number;
    float price;
    int quantity;
};
main()
{
    struct invent_record item;
    char filename[100];
    int response;
    FILE *fp;
    long n;
    void append (struct invent_record*x, file*y);
    printf("Type filename:");
    scanf("%s",filename);
    fp=fopen(filename,"a+");
    do
    {
        append(&item,fp);
        printf("\n Item %s appended.\n",item.name);
        printf("\nDo you want to add another item\(1 for YES/ 0 for NO)?");
        scanf("%d",&response);

    }
    while(response==1);

    n=ftell(fp);
    fclose(fp);

    fp=fopen(filename,"r");

    while(ftell(fp)<n)
    {
        fscanf(fp,"%s%d%f%d",item.name,&item.number,&item.price,&item.quantity);
        fscanf(stdout,"%-8s %7d %8.2f %8d\n",item.name,item.number,item.price,item.quantity);
    }
    fclose(fp);

}

void append(struct invent_record*product, File*ptr)
{
    printf("Item name:");
    scanf("%s",product_>name);
    printf("Item number:");
    scanf("%d",&product_>price);
    printf("Item quantity:");
    scanf("%d",&product_>quantity);
    fprintf(ptr,"%s %d %.2f %d",product_>name,product_>number,product_>price,product_>quantity);

}
