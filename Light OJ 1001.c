#include<stdio.h>
int main()
{
    int T,n,i,e;
    scanf("%d",&T);
    for(i=0;i<T;i++){

        scanf("%d",&n);
        if(n>10){

            e= n-10;
            printf("%d 10\n",e);

        }
        else{

            printf("0 %d\n",n);

        }



    }
    return 0;













}

