#include <bits/stdc++.h>
 
using namespace std;
bool isEven(int n){
    while(n>0){
        if((n%10)&1){
            return false;
        }
        n/=10;
    }
    return true;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool print=false;
    for(int i=0;i<n;i++){
        if(isEven(arr[i])){
            cout<<arr[i]<<" ";
            print=true;
        }
    }
    if(!print){
        cout<<-1;
    }


}