#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,t;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        scanf("%d,",&t);
        if(t>0){
            arr.push_back(t);
        }
    }
    if(arr.size()==0){
        cout<<-1;
    }
    else{
        for(int i=0;i<arr.size()-1;i++){
            cout<<arr[i]<<",";
        }
        cout<<arr[arr.size()-1];
    }
    
    


}