#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string str;
    cin>>str;
    int len=str.length();
    int i=0;
    for(i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(abs(str[i]-str[j])==abs(i-j)){
                cout<<str[i]<<str[j];
            }
        }
    }


}