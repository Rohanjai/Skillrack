#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int temp;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp&1){
            a.push_back(temp);
        }
        else{
            b.push_back(temp);
        }
    }
    for(int i: a){
        cout<<i<<" ";
    }
    for(int i: b){
        cout<<i<<" ";
    }


}