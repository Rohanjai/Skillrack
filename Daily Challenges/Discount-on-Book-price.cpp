#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x,y;
    cin>>x>>y;
    int price=x*y;
    if(x>=2 && x<=4){
        cout<<price-((x*y)*0.1);
    }
    else if(x==5){
        cout<<price-((x*y)*0.2);
    }
    else if(x>5){
        cout<<price-((x*y)*0.5);
    }
    else{
        cout<<price;
    }


}