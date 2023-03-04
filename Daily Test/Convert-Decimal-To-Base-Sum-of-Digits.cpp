#include <bits/stdc++.h>
 
using namespace std;
long long int convert(long long int n,int b){
    long long int ans=0,p=0;
    while(n>0){
        ans+=(n%b)*pow(10,p);
        p++;
        n/=b;
    }
    return ans;
}
int main(int argc, char** argv)
{
    long long int n1,n2;
    int b1,b2;
    cin>>n1>>b1>>n2>>b2;
    long long int x = convert(n1,b1);
    long long int y = convert(n2,b2);
    int sum=0;
    while(x>0){
        sum+=(x%10);
        x/=10;
    }
    while(y>0){
        sum+=(y%10);
        y/=10;
    }
    cout<<sum;

}