#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s1,ans;
    char s2;
    cin>>s1>>s2;
    if(count(s1.begin(),s1.end(),s2)==0){
        cout<<-1;
        return 0;
    }
    else{
        size_t found=s1.find(s2);
        ans=s1.substr(0,found+1);
        reverse(ans.begin(),ans.end());
        cout<<ans;
    }


}