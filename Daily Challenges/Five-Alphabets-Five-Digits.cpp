#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    bool sw=true;
    for(int i=0;i<s.size();i+=5){
        for(int j=i;j<i+5;j++){
            if(sw){
                
                if(!isalpha(s[j])){
                    cout<<"NO";
                    return 0;
                }
            }
            else{
                
                if(!isdigit(s[j])){
                    cout<<"NO";
                    return 0;
                }
            }
            
        }
        sw = !sw;
    }
    cout<<"YES";
    


}