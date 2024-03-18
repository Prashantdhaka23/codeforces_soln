#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back 
#define popb pop_back
#define sza(x) ((int)x.size())
#define mp make_pair
#define ve vecto
#define vii vector < int >
#define vll vector < ll > 
#define pii pair < int , int >
#define pll pair < ll , ll >
#define vpl vector < pll >
#define fi first
#define fo(i,j,n) for(ll i=j;i<n;i++)
#define FO(i,j,n) for(ll i=n-1;i>=j;i--)
typedef long long int ll;
 
set<pll>ranges;
vector<vll>ansvec;
void solvekarle(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a[s.size()];
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            a[i]=1;
        }

        
        else{
            a[i]=0;
        }
    }
    
    int i=0,j=0,sum=0,ans=0;
    while(j<n){
        sum+=a[j];
        if(j-i+1==k){
            ans=max(ans,sum);
            if(a[i]==1){
                sum--;
            }
            i++;
        }
        j++;
    }
    cout<<k-ans<<endl;
}
 
 
int main(){
    int t;
    cin>>t;
   
     while(t--){
        solvekarle();
     }
}