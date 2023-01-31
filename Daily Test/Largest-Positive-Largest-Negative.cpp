#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<long long int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            a++;
        }
        else if(arr[i]>0){
            b++;
        }
    }
    sort(arr.begin(),arr.end());
    if(a>b){
        int i=0;
        while(arr[i]<0){
            i++;
        }
        cout<<arr[i-1];
    }
    else if(b>=a and b!=0 ){
        cout<<arr[n-1];
    }
    else if(a==b){
        cout<<-1;
    }
    


}