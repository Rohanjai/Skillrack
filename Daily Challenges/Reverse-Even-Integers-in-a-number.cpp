#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,rev=0;
    bool print=false;
    cin>>n;
    while(n>0){
        if((n%10)%2==0){
            rev=(n%10)+(rev*10);
            print=true;
        }
        n/=10;
    }
    printf("%d",print ? rev : -1);


}