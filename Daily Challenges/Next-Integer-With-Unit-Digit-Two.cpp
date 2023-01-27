#include <bits/stdc++.h>
 
using namespace std;
bool check(int n){
    if(n%10==2){
        return true;
    }
    
    return false;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    while(!check(++n));
    cout<<n;

}