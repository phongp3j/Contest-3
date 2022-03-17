#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> res;
        queue<string> q;
        q.push("");
        while(q.front().size() < n){
            string x = q.front();
            res.push_back(x+"6");
            res.push_back(x+"8");
            q.push(x+"6");
            q.push(x+"8");
            q.pop();
        }
        cout<<res.size()<<endl;
        for(int i = res.size() - 1; i >= 0 ; i--){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}