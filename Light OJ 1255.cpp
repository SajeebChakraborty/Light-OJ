#include<iostream>
using namespace std;
int lps[1000005];
int main(){


    int i,j,len,len2,cnt=0,T;

    cin >> T;


    for(int t=1;t<=T;t++){
     string pat,txt;
    cin >> txt >> pat;
    len = pat.size();
    len2 = txt.size();

    i=1;
    j=0;
    cnt = 0;

    while(i<len){

        if(pat[i]==pat[j]){


            j++;
            lps[i] = j;
            i++;



        }
        else{

            if(j==0){

                lps[i] = 0;
                i++;

            }
            else{

                j = lps[j-1];


            }


        }



    }

    i=0;
    j=0;

    while(i<len2){

        if(txt[i]==pat[j]){

            i++;
            j++;
            if(j==len){

                cnt++;

            }



        }
        else{

            if(j==0){

                i++;

            }
            else{

                j = lps[j-1];


            }


        }



    }

    cout << "Case "<< t << ": " << cnt << endl;


    }

    return 0;



}

