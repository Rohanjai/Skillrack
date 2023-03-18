#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i:arr){
        if(i&1){
            int x = i/10%10;
            if(x!=9){
                i+=10;
            }
            else{
                int t=i%10;
                i/=100;
                i=i*100+t;
            }
        }
        else{
            int x = i%10;
            if(x!=9){
                i++;
            }
            else{
                i/=10;
                i*=10;
            }
        }
        cout<<i<<" ";
    }


}