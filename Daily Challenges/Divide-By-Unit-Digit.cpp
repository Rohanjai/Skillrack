#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
            cout<<fixed<<setprecision(2);
    for(int i:arr){
        if(i%10!=0){
            cout<<(float)((float)i/(i%10))<<" ";
            
        }
        else{
            cout<<(float)i<<" ";
        }
    }
    


}
