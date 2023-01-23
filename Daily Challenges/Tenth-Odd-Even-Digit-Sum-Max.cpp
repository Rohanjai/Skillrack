#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    vector<int> arr;
    int t;
    while(cin>>t){
        arr.push_back(t);
    }
    int a=0,b=0;
    for(int i:arr){
        int x=i/10%10;
        if(x&1){
            a+=x;
        }
        else{
            b+=x;
        }
    }
    cout<<max(a,b);


}