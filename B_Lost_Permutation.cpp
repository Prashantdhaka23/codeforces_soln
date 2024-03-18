
#include<bits/stdc++.h>
#include<iostream>

using namespace std;
# define ll long long 
# define  fo(i,n) for(ll i=0;i<n;i++)
#include<unordered_map>
ll gcd(ll a, ll b)
{
    ll result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}
int isSubstring(string s1, string s2)
{
    int M = s1.length();

    int N = 50;
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}
 

int main(){
ll t;

cin>>t;
while(t--){
     long long  n,m;
	   cin>>n>>m;
	   long long  arr[n];
	   set<int>st;
	   int mi=INT_MIN;
	   for(int i=0; i<n; i++){
	       cin>>arr[i];
	       st.insert(arr[i]);
	   }
	   for(int i=0; i<n; i++){
	       if(mi<arr[i])
	       mi=arr[i];
	   }
	   int p=1;
	   int sum=0;
	   while(p){
	       if(st.find(p)!=st.end()){
	           p++;
	           continue;
                
	       }
	       sum+=p;
	       if(sum>m){
	           cout<<"NO"<<endl;
	           break;
	       }
	       st.insert(p);
	       if(sum==m){
	           int temp=0;
	           for(int j=1; j<=mi; j++){
	               if(st.find(j)!=st.end())
	               continue;
	               temp=1;
	               break;
	           }
	           if(!temp) cout<<"YES"<<endl;
	           else cout<<"NO"<<endl;
	           break;
	       }
	       p++;
	   }


}}