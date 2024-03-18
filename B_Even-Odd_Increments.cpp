 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back 
#define popb pop_back

 
const ll mod = 1000000007;
const ll inf = 1e18;
 
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll a[n];
        ll o=0,e=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                e++;
            }else{
                o++;
            }
             
            sum+=a[i];
        }
        for(int i=0;i<q;i++){
            ll k,x;
            cin>>k>>x;
            if(k==0){
                cout<<sum+e*x<<endl;
                sum=sum+e*x;
                if(x%2==0){
                    
                }else{
                    o=o+e;
                    e=0;
                }
            }else{
                cout<<sum+o*x<<endl;
                sum=sum+o*x;
                if(x%2==0){}

else{
                    e=e+o;
                    o=0;
                }
            }
            
        }
        
 
    }
}