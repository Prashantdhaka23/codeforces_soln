
/*

****************************************************************************************
*                                Jai Bajrangbali                                       *
*                             codechef-prashantdhaka                                   *
*                             cf-dhakaprashant666                                      *
*                         email-:dhakaprashant666@gmail.com                            *
****************************************************************************************                                                                         



*/




#include<bits/stdc++.h>
using namespace std;

 
#define endl                                "\n"
#define int                                 long long    //in case of mle ,tle high constraints
#define ll                                  long long
#define umap                                unordered_map
#define uset                                unordered_set
#define lb                                  lower_bound
#define ub                                  upper_bound


int m1=-1;
int f2=-1;
int fun(int node ,vector<vector<int> > & adj ,int par, set<int> & st ,int d){

  if(st.find(node)!=st.end()){
    if(d>m1){
        m1=d;
      f2=node;
    }
  }

int ans=-1e7;
  for(auto it : adj[node]){
    if(it!=par){
       ans=max(ans,1+ fun(it,adj,node,st,d+1));
    }
  }

return ans;

}

int dfs(int node ,vector<vector<int> > & adj ,int par, set<int> & st ){
  
 int k=0;
  if(st.find(node)!=st.end()){
k++;
  }

int ans=-1e7;
  for(auto it : adj[node]){
    if(it!=par){
       ans=max(ans,1+ dfs(it,adj,node,st));
    }
  }
if(k==1 && ans<0){
    return 0;
}
return ans;

}


int32_t main(){

int tc=1;
cin>>tc;
while(tc--){

int n,m;
cin>>m>>n;

set<int> st;
 vector<int> v(n);  for(int i=0;i<n;i++){   
        cin>>v[i];  
 st.insert(v[i]); 
  }


vector<vector<int> > adj(m+1);
for(int i=0;i<m-1;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
f2=-1;
m1=-1;
st.erase(v[0]);
fun(v[0],adj,-1,st,0);

if(f2==-1){
    cout<<0<<endl;
    
}else{

st.erase(f2);
st.insert(v[0]);
int ans=dfs(f2,adj,-1,st)+1;
cout<<(ans)/2<<endl;

}

}
return 0;
}

