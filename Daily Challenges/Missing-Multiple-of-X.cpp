#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,n;
    cin>>x>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=arr[0];
    for(int i=1;i<n;i++){
        s+=x;
        if(s!=arr[i]){
            cout<<s;
            break;
        }
    }


}