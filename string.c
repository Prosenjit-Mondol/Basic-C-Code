#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=0,j=0,k=0,count=0,co=0,cou=0;
    char v[500],na[50],name[50]="prosenjit mondol",pro[30]={'p','s','t','u','\0'};
    //gets(v);
    printf("%d\n",'v');
    scanf("%s",&v);
    //puts(v);
    printf("%s\n",v);
    //printf("%10.6s\n",na);
    printf("\n%s\n%5.4s\n",&name[3],pro);
    count=strlen(v);
    //puts(count);
    printf("the string length is %d\n",count);
    /*for(v[k]=='\0'){
        cou++;
        k++;
    }
    printf("using if loop the string length is %d\n",cou);
    */while(v[j]!='\0'){
        co++;
        j++;
    }
    printf("using while loop the string length is %d\n",co);
    return 0;
}
