#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    vector<string> arr,ans;
    string s;
    while(cin >> s){
        if(s=="q" or s=="Q"){
            break;
        }
        else{
            arr.push_back(s);
        }
    }
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            string a = arr[i];
            a+=" vs ";
            a+=arr[j];
            ans.push_back(a);
        }
    }
    cout<<"Total Matches: "<<ans.size()<<endl;
    for(string a: ans){
        cout<<a<<endl;
    }


}