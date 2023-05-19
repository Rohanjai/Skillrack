#include <bits/stdc++.h>
 
using namespace std;
int ans(int n){
    int digi,result=0,power=1;
    while(n>0){
        digi=n%10;
        if(digi&1){
            digi--;
        }
        else{
            digi++;
        }
        result += digi * power;
        power*=10;
        n/=10;
    }
    return result;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    cout<<ans(n);


}
