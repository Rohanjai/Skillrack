#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    string s,word;
    scanf("%d\n",&n);
    getline(cin,s);
    stringstream ss(s);
    vector<string>arr;
    while (ss >> word){
        arr.push_back(word);
    }
    reverse(arr.begin(),arr.begin()+n);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


}