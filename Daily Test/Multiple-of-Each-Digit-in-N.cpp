#include <bits/stdc++.h> 
using namespace std;
long long int check(int t,int x){
    while(t++){
        if(t%x==0){
            return t;
        }
    }
}
int main(int argc, char** argv)
{
    long long int n;
    cin>>n;
    long long int temp=n;
    vector<int>a;
    while(n>0){
        int t=n%10;
        if(t==0){
            a.push_back(check(temp,10));
        }
        else{
            a.push_back(check(temp,t));
        }
        n/=10;
    }
    reverse(a.begin(),a.end());
    for(int i: a){
        cout<<i<<" ";
    }


}