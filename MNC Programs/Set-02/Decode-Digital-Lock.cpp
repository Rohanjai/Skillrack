#include <bits/stdc++.h>
 
using namespace std;
bool isamstr(string s){
    int n=s.length(),sum=0;
    for(int i=0;i<n;i++){
        int t = s[i] - '0';
        sum+=pow(t,n);
    }
    int x=stoi(s);
    return sum==x;
}
int main(int argc, char** argv)
{
    string s;
    cin>>s;
    bool x=isamstr(s);
    int sum=0;
    for(int i=0;i<s.length();i++){
        int t=s[i]-'0';
        if(x and t%2==0){
           sum+=t;
            
            
        }
        else if(!x and t%2!=0){
            sum+=t;
            
        }
        
    }
    cout<<sum;

}