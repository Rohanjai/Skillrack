#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int>arr,q1,q2;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    for(int i:arr){
        if(i>100 or i<10){
            cout<<"INVALID INPUT";
            return 0;
        }
    }
    for(int i:arr){
        if(i>60 and q2.size()!=5){
            q2.push_back(i);
        }
        else{
            q1.push_back(i);
        }
    }
    cout<<"Q1:"<<q1.size()*15<<" minutes"<<endl<<"Q2:"<<q2.size()*15<<" minutes";
    // for(int i:q1){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(int i:q2){
    //     cout<<i<<" ";
    // }


}