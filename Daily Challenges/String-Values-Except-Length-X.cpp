#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n>>x;
    string temp;
    bool print=false;
    vector<string> arr;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=0;i<n;i++){
        if(arr[i].length()!=x){
            cout<<arr[i]<<endl;
            print=true;
        }
    }
    if(!print){
        cout<<-1;
    }

}