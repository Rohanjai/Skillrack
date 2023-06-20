#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto i:arr){
        cout<<*min_element(i.begin(),i.end())<<" ";
    }


}
