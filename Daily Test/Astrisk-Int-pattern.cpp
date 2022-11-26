#include <bits/stdc++.h>
 
using namespace std;
int digi(long long int n){
    int ctr=0;
    while(n>0){
        ctr++;
        n/=10;
    }
    return ctr;
}
int main(int argc, char** argv)
{
    long long int n;
    cin>>n;
    int ctr=digi(n);
    for(int i=0;i<ctr;i++){
        for(int j=0;j<i;j++){
            cout<<'*';
        }
        cout<<n<<endl;
        n/=10;
    }


}