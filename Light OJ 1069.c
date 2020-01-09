#include<stdio.h>
int main()
{
    int i,T,a,b,c,e,f;
    scanf("%d",&T);
    for(i=1;i<=T;i++){

        scanf("%d%d",&a,&b);

        if(b>a){

            printf("Case %d: %d\n",i,19+(4*b));

        }
        else{

            c=19+(2*a-b)*4;
            printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}
