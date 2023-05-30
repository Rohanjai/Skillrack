#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  char ch;
  int m;
  map<char,int>mp;
  for(char &c:s){
    if(isdigit(c)){
      mp[c]++;
    }
  }
  for(auto i:mp){
    if(m<i.second){
      m=i.second;
      ch=i.first;
    }
  }
  cout<<ch;
  return 0;
}
