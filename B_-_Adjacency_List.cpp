#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     t=1;

     while(t--){
          int n,m;
          cin>>n>>m;

          vector<int>b[n+1];
          for(int i=1;i<=m;i++){


               int x,y;
               cin>>x>>y;
               b[x].push_back(y);
               b[y].push_back(x);
          }
          
          for(int i=1;i<=n;i++){

               sort(b[i].begin(),b[i].end());

               cout<<b[i].size()<<" ";

               for (auto it:b[i]){

                    cout<<it<<" ";
               }

               cout<<endl;
          }
     }
}
