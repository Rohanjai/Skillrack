#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    vector<int>arr;
    while(n>0){
        arr.push_back(n%2);
        n/=2;
    }
    if(arr.size()>x){
        cout<<-1;
        return 0;
    }
    else{
        while(arr.size()<x){
            arr.push_back(0);
        }
    }
    reverse(arr.begin(),arr.end());
    for(int i:arr){
        cout<<i;
    }


}
