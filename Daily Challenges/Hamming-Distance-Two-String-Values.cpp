#include <bits/stdc++.h>
 
using namespace std;
int change(string s1,string s2){
    int cnt=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            cnt++;
        }
    }
    return cnt;
}
int main(int argc, char** argv)
{
    string s1,s2;
    cin>>s1>>s2;
    int a=change(s1,s2);
    int b=change(s2,s1);
    cout<<min(a,b);

}
