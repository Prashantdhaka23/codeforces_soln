


#include<bits/stdc++.h>
using namespace std;



       
 
#define endl                                "\n"
#define int                                 long long    //in case of mle ,tle high constraints
#define ll                                  long long
#define umap                                unordered_map
#define uset                                unordered_set
#define lb                                  lower_bound
#define ub                                  upper_bound
#define fo(i,a,b)                           for(i=a;i<=b;i++)
#define all(v)                              (v).begin(),(v).end()
#define all1(v)                             (v).begin()+1,(v).end()
#define allr(v)                             (v).rbegin(),(v).rend()
#define allr1(v)                            (v).rbegin()+1,(v).rend()
#define sort0(v)                            sort(all(v))
typedef pair<int,int>                       pii;
typedef pair<char,int>                      pci;
typedef vector<int>                         vi;
typedef vector<ll>                          vll;
typedef pair<ll, ll>                        pll;


int32_t main(){
    // prashant;
int tc=1;
cin>>tc;
while(tc--){
string s;
        cin>>s;
        int pos;
        cin>>pos;
        stack<int>st;
       
        int tot=pos;
       int n=s.size();
        if(pos-n<=0){
            cout<<s[pos-1];
            continue;
        }
        pos-=n;
         vector<int>vis(s.size(),0);
         int cnt=s.size();
         int fl=1;
        for(int i=0;i<s.size();i++){
           
            while(st.size()>0&&s[st.top()]>s[i]){
                vis[st.top()]=1;
                cnt--;
                
                st.pop();
                if(pos-cnt<=0){
                    fl=0;
                    break;
                }
               
                pos-=cnt;
              
            }
            if(fl==0){
                break;
            }
            st.push(i);
        }
       

      while(st.size()>0  && fl ){
                cnt--;
                vis[st.top()]=1;
                st.pop();

                if(pos-cnt<=0){
                    fl=0;
                    break;
                }
                pos-=cnt;
     }

 
     
        for(int i=0;i<s.size();i++){
            if(vis[i]==0) {
                pos--;
                if(pos==0){
                    cout<<s[i];
                    break;
                }
            }
        }

}
return 0;
}

