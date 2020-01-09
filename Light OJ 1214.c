#include <stdio.h>
int main()
{
    long long int tst, i, j, b, dcml;
    char a[1000];
    scanf("%lld", &tst);
    for(i=1; i<=tst; i++)
    {
        long long int mod_a=0, div_a=0;
        scanf("%s", a);
        scanf("%lld", &b);
        j=0;

        if(a[0]=='-') j=1;

        while(a[j])
        {
            dcml = a[j] - 48;
            div_a+=dcml;
            mod_a = div_a%b;
            div_a= mod_a*10;
            j++;
        }

        if(mod_a==0) {

                printf("Case %lld: divisible\n", i);

        }
        else{

                printf("Case %lld: not divisible\n", i);

        }
    }
    return 0;
}
