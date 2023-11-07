#include<stdio.h>
struct stores
{
    char name[50];
    float price;
    int quantity;
};
struct stores update(struct stores product, float p,int q);
float mul(struct stores stock);
int main()
{
    float p_increment,value;
    int q_increment;
    struct stores item={"XYZ" , 85.25 , 4};
    printf("price increment and quantity increment\n");
    scanf("%f %d",&p_increment,&q_increment);
    item=update(item,p_increment,q_increment);
    printf("Update values of item\n\n");
    printf("Name     :%s\n",item.name);
    printf("Price    :%f\n",item.price);
    printf("Quantity :%s\n",item.quantity);
    value=mul(item);
    printf("Value of item = %f\n",value);
    return 0;
}
struct stores update(struct stores product, float p,int q)
{
    product.price+=p;
    product.quantity+=q;
    return(product);
}
float mul(struct stores stock)
{
    return(stock.price*stock.quantity);
}


