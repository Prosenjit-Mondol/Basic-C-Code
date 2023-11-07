#include<stdio.h>
#include<math.h>
int main()
{
    float x,val=0.00;
    char t;
    printf("Enter angle--\n");
    scanf("%f",&x);
    printf("s or S for sin(x)\n");
    printf("c or C for cos(x)\n");
    printf("t or T for tan(x)\n");
    printf("Enter choice\n");
    //t=getch();
    scanf("%c",&t);
    if(t=='s' || t=='S'){
        val=sin(x);
    }
    else if(t=='c' || t=='C'){
            val=cos(x);
    }
    else if(t=='t' || t=='T'){
            val=tan(x);
    }
    else{
    printf("Worng input");
    }
    printf(" Vaslue is %lf",val);
    return 0;
}
