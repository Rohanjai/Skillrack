#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
char s[1001],*res;
string k;
cin>>s;
res = s;
int d=-1,l,i=0;
for(i=0;i<strlen(s);i++){
    if(s[i] == '.'){
        d=i;
    }
    if(d != -1 ){
        if(s[i] == '/')
        break; 
        k+=s[i];
    }
}
for(int j=d;j<i;j++){
    cout<<s[j];
}

}
