#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    vector<string> arr;
    while(getline(cin,s)){
        arr.push_back(s);
    }
    for(int i=0;i<arr.size();i++){
        stringstream ss(arr[i]);
        string word;
        while(ss >> word){
            char ch='a'-1;
            cout<<(char)(ch+count(word.begin(),word.end(),'1'));
        }
        cout<<" ";
    }


}