#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int min=8*60;
    int x;
    int sum=0,dd=0;
    int o=0;
    cin>>x;
    while(x--){
        char s;
        int h,m;
        scanf(" %c %d:%d",&s,&h,&m);
        if(s=='E'){
            if(h>12){
                h=h-12;
            }sum=h*60 + m;
        }else{
            if(h>12){
                h=h-12;
            }dd=h*60 +m;
            o+=abs(dd-sum);
            sum=0;
            dd=0;
        }
    }if(o>=min){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}