#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 

//member functions :
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set

//=======================================================================
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int> 
#define vpi vector<pair<int,int>> 
#define all(x) (x).begin(),(x).end()
#define countbits(x) __builtin_popcount(x)
#define vpi vector<pair<int,int>>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back

int mod = 1e9+7;

int max(int a,int b){return a>b ? a : b ;}

int min(int a,int b){return a<b ? a : b ;}

void printarray(vector<int> &a){
    for(int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int primeFactors(int n)
{
    int even=0;
    int odd=0;
    while (n % 2 == 0)
    {
        n = n/2;
        even++;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            n = n/i;
            if(i&1){
                odd++;
            }
            else{
                even++;
            }
        }
    }

    if (n > 2){
        if(n&1){
            odd++;
        }
        else{
            even++;
        }
    }

    return even+odd;
}

int gcd(int a,int b){
    return b==0 ? a : gcd(b,a%b);
}

#define MAXN 2000002
 
// stores smallest prime factor for every number
int spf[MAXN];
 
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
 
    for (int i = 3; i * i < MAXN; i++) {
        // checking if i is prime
        if (spf[i] == i) {
            // marking SPF for all numbers divisible by i
            for (int j = i * i; j < MAXN; j += i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
int getFactorization(int x)
{
    int l=0;
    
    while (x != 1) {
       
        x = x / spf[x];
        l++;
        if(l>=2)return l;
    }
    return l;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int g=a[0];
    for(int i=1 ; i<n ; i++){
        g=gcd(g,a[i]);
    }
    // int p=primeFactors(g);
    // if(g==1){
    //     cout<<"DRAW"<<endl;
    //     return;
    // }
  vector<int> v1(n,0);
  vector<int> v2(n,0);

  int g1=a[0];


    for(int i=0;i<n;i++){
        g1=__gcd(g1,a[i]);
        v1[i]=g1;
    }
    g1=a[n-1];
    for(int i=n-1;i>=0;i--){
        g1=__gcd(g1,a[i]);
        v2[i]=g1;
    }
     int ok=0;
     int l1=0;
     for(int i=0;i<n;i++){
        int x=0;
       if(i>0) x=v1[i-1];
       int y=0;
        if(i<n-1)  y=v2[i+1];
          if( getFactorization(__gcd(x,y))==1){
            ok=1;
            // return ;
          }
          if(__gcd(x,y)==1){
            ok=1;
          }
     }
     if(ok ){
         cout<<"DRAW"<<endl;
        return;

     }
      cout<<"BOB"<<endl;
        return;
     
  
}

int32_t main(){
    int t;
    t=1;
    sieve();
	cin>>t;
    while(t--){
        solve();
    }

    return 0;
}