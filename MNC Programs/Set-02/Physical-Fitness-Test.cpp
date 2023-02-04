#include <bits/stdc++.h>
 
using namespace std;
void getinput(vector<int> &arr){
    for(int i=0;i<3;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
}
int main(int argc, char** argv)
{
    vector<int>c1,c2,c3;
    getinput(c1);
    getinput(c2);
    getinput(c3);
    int a=c1[0]+c2[0]+c3[0],b=c1[1]+c2[1]+c3[1],c=c1[2]+c2[2]+c3[2];
    double x=a/3.0,y=b/3.0,z=c/3.0;
    double m=max(x,max(y,z));
    if(m==x){
        cout<<"Candidate Number: 1"<<endl;
    }
    if(m==y){
        cout<<"Candidate Number: 2\n";
    }
    if(m==z){
        cout<<"Candidate Number: 3";
    }
    
}