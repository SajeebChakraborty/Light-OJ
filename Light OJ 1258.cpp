nclude<bits/stdc++.h>
using namespace std;
int lps[1000005];
void find_lps(string pat){

    int i=1,j=0,x;
    x = pat.size();
    while(i<x){

        if(pat[i]==pat[j]){

            j++;
            lps[i]=j;


        }
        else{

          while(j!=0)
            {
                j=lps[j-1];
                if(pat[i]==pat[j])
                {
                    j++;
                    lps[i]=j;

                    break;
                }
            }



        }
        i++;





    }



}
int matching(string pat,string txt){

    int i=0,j=0,x,y;
    x = pat.size();
    y = txt.size();

    while(i<y){

        if(txt[i]==pat[j]){

            j++;


        }
        else{

            while(j!=0)
            {
                j=lps[j-1];
                if(txt[i]==pat[j])
                {
                    j++;

                    break;
                }
            }


        }
        i++;
    }
    return j;


}

int main()
{

    int n,p,q;
    string pat,txt;
    cin >> n;
    for(int i=1;i<=n;i++){

        cin >> txt;
        pat = txt;
        reverse(pat.begin(),pat.end());
        find_lps(pat);
        p = matching(pat,txt);
        q = txt.size();
        q = 2*q - p;

        cout << "Case " << i << ": " << q << endl;

    }

    return 0;


}
