#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,sum=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool sw=false;
    for(int &i:arr){
        if(i==5 and !sw){
            sw=true;
        }
        else if(i==10 and sw){
            sw=false;
        }
        else if(sw){
            sum+=i;
            
        }
    }
    cout<<sum;

}