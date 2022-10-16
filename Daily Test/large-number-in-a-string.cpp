#include<bits/stdc++.h>
using namespace std;
int maxele(string str){
    string temp="";
    int min=0,x;
    for(char ch:str){
        if(isdigit(ch)){
            temp+=ch;
        }
        else{
            x=atoi(temp.c_str());
            if(x>min){
                min=x;
            }
            temp="";
        }
    }
    
    x=atoi(temp.c_str());
    return min > x ? min : x;
}
int main(){
    string s;
    cin>>s;
    cout<<maxele(s);
}