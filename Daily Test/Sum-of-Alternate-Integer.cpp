#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<j){
        cout<<arr[i++]+arr[j--]<<" ";
    }


}
