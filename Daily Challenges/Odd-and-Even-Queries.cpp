#include <bits/stdc++.h>
 
using namespace std;
vector<int>arr;
void pop(int x){
    auto it = find(arr.begin(),arr.end(),x);
    arr.erase(it);
    
}
void print(int x){
    bool f=false;
    for(int i:arr){
        if(i%2==x){
            cout<<i<<" ";
            f=true;
        }
    }
    if(!f){
        cout<<"-1";
    }
    cout<<endl;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    while(n--){
        char ch;
        int x;
        cin>>ch>>x;
        switch(ch){
            case '+':
                arr.push_back(x);
                break;
            case '-':
                pop(x);
                break;
            case '?':
                print(x);
                break;
                
        }
    }


}
