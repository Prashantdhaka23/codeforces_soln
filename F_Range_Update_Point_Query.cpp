#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"YES"<<endl;
# define pn cout<<"NO"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }
int ok(int x){
      string y=to_string(x);
          int sum=0;
          for(int i=0;i<y.size();i++){
               sum+=y[i]-'0';
          }
         return sum;
}


 int main(){
    

ll t=1;
cin>>t;
while(t--){
int n,m=0,r;
cin>>n>>m;
vector<int> v(n,0);
  set<int> st;



for(int i=0;i<n;i++){
     cin>>v[i];
     if(v[i]>9){
         st.insert(i);
          
     }
}


while(m>0){
   int k;
   cin>>k;
   if(k==1){
     int l, r; cin >> l >> r; --l, --r;
            int lst = l;
            while(!st.empty()) {
std::set<int>::iterator it;

               it = st.lower_bound(lst);
                if(it == st.end() || *it > r) break;
                v[*it] = ok(v[*it]);
                int paiu = *it;
                st.erase(it);
                if(v[paiu] > 9) st.insert(paiu);
                lst = paiu + 1;
            }

   } 
   else{
int a;
cin>>a;
cout<<v[a-1]<<endl;

   } 




     m--;
}





     }

}





     







 

 
 




