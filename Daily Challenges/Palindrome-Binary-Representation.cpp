#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int>arr;
    while(n>0){
        arr.insert(arr.begin(),n%2);
        n/=2;
    }
    for(int i=0,j=arr.size()-1;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;


}
