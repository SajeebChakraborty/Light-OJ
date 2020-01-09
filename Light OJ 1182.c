#include<stdio.h>
int main()
{
    int n,i,a,count1=0,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
    while(a>0){
        d=a%2;
        if(d==1){
        count1=count1+1;}
        a=a/2;

    }
    if(count1%2==1){
    printf("Case %d: odd\n",i);}
    else{
    printf("Case %d: even\n",i);}
    count1=0;
    }
    return 0;
}
