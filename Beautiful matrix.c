#include<stdio.h>
int main()
{
	int i,j,pi,pj,x[100][100];
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			scanf("%d",&x[i][j]);
			}
		}
		for(i=1;i<=5;i++){
		   for(j=1;j<=5;j++){
                if(x[i][j]==1)
                {
                    pi=i;
                    pj=j;
                    break;
                }
			}
		}
		if(pi==3&&pj==3)
        {
            printf("0\n");
        }
        else if(pi==3&&pj<3)
        {
            printf("%d\n",3-pj);
        }
        else if(pi==3&&pj>3)
        {
            printf("%d\n",pj-3);
        }
        else if(pi<3&&pj<3)
        {
            printf("%d\n",(3-pi)+(3-pj));
        }
        else if(pi<3&&pj==3)
        {
            printf("%d\n",3-pi);
        }
        else if(pi<3&&pj>3)
        {
            printf("%d\n",(3-pi)+(pj-3));
        }
        else if(pi>3&&pj<3)
        {
            printf("%d\n",(pi-3)+(3-pj));
        }
        else if(pi>3&&pj==3)
        {
            printf("%d\n",pi-3);
        }
        else if(pi>3&&pj>3)
        {
            printf("%d\n",(pi-3)+(pj-3));
        }
        printf("\n %d  %d",pi,pj);
		return 0;
}
