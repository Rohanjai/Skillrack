#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,digit="0";
    cin>>s;
    int sum=0;
    for(char c:s){
        
        if(isdigit(c)){
            digit+= c;
            
        }else{
            int x = stoi(digit);
            sum+=x;
            
            digit="0";
        }
    }
    sum+= stoi(digit);
    cout<<sum;
    


}