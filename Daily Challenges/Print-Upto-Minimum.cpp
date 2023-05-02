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
    int x = *min_element(arr.begin(),arr.end());
    for(int i:arr){
        cout<<i<<" ";
        if(i==x){
            break;
        }
    }


}
