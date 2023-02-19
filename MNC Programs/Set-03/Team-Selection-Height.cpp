#include <bits/stdc++.h>

using namespace std;
bool sort_sec(const pair<string,float> &a,const pair<string,float> &b){
    return (a.second>b.second);
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<pair<string,float>> arr;
    string s;
    float x;
    while(cin >> s){
        if(s=="q" or s=="Q"){
            break;
        }
        else{
            cin>>x;
            arr.push_back(make_pair(s,x));
        }
    }
    vector<pair<string,float>> temp(arr.begin(),arr.end());
    stable_sort(arr.begin(),arr.end(),sort_sec);
    vector<string> t;
    for(auto a: arr){
        //cout<<a.first<<" "<<a.second<<endl;
        t.push_back(a.first);
    }
    int ctr=0;
    for(int i=0;i<temp.size();i++){
        auto it = find(t.begin(),t.end(),temp[i].first);
        if(it != t.end() ){
            int j = it-t.begin();
            if(j>=n){
                continue;
            }
            else if(ctr==n){
                break;
            }
            cout<<temp[i].first<<endl;
            ctr++;
        }
    }


}