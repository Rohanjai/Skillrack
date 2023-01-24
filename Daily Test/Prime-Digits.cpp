#include <bits/stdc++.h>
 
using namespace std;
bool isPrime(int x){
    if(x==1 || x==0){
        return false;
    }
    if(x==2){
        return true;
    }
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        int x = stoi(s);
        bool print=false;
        while(x>0){
            if(isPrime(x%10)){
                cout<<x%10;
                print=true;
            }
            x/=10;
        }
        if(!print){
            cout<<"-1 ";
        }
        else
            cout<<" ";
    }


}