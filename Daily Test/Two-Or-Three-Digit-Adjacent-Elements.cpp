#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    vector<string> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    bool print=false;
    if(arr[1].size()==2 or arr[1].size()==3){
        cout<<arr[0]<<" ";
        print=true;
    }
    for(int i=1;i<n-1;i++){
        if((arr[i-1].size()==2 or arr[i-1].size()==3) and (arr[i+1].size()==2 or arr[i+1].size()==3))
        {
            cout<<arr[i]<<" ";
            print=true;
        }
    }
    if(arr[n-2].size()==2 or arr[n-2].size()==3){
        cout<<arr[n-1];
        print=true;
    }
    if(!print){
        cout<<"-1";
    }


}