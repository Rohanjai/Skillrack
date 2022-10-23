#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
int a;
cin>>a;
int evecount=0;
int oddcount=0;
while(a>0){
    if((a%10)%2==0){
        evecount++;
    }
    else oddcount++;
    a/=10;
}
if(evecount>oddcount){
    cout<<"even";
    return 0;
}
else if(evecount < oddcount){
    cout<<"odd";
    return 0;
}
else cout<<"-1";
return 0;

}