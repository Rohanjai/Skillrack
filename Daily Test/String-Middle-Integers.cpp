#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,temp="";
    cin>>s;
    vector<string> arr;
    for(char &c:s){
        if(isdigit(c)){
            temp+=c;
        }
        else if(temp.size()>0){
            arr.push_back(temp);
            temp="";
        }
    }
    if(temp.size()>0){
        arr.push_back(temp);
    }
    int l=arr.size();
    
    if(l%2!=0){
        cout<<arr[l/2];
    }
    else{
        cout<<arr[l/2 - 1]<<" "<<arr[(l/2)];
    }


}