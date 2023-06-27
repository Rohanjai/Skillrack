#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    char ch1,ch2;
    getline(cin,s);
    cin>>ch1>>ch2;
    int dis,min=999;
    for(int i=0;i<s.size();i++){
        if(s[i]==ch1){
            for(int j=i+1;j<s.size();j++){
                if(s[j]==ch2){
                    dis=j-i-1;
                    break;
                }
            }
            if(dis<min){
                min=dis;
            }
        }
    }
    cout<<min;


}
