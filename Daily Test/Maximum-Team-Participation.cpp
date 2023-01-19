#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n],ctr=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=50){
            ctr++;
        }
    }
    cout<<ctr/3;
    


}