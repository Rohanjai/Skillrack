#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    char s1[101],s2[101];
    cin>>s1>>s2;
    for(int i=0;i<strlen(s1);i++){
        for(int j=0;j<strlen(s2);j++){
            if(i==j){
                cout<<s1[i];
                j++;
            }
            if(j<strlen(s2))
            cout<<s2[j];
        }
        cout<<" ";
    }

}