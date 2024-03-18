
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
ll t=1;

// cin>>t;
while(t--){
     int n;
     cin>>n;
    int arr[n];
    fo(i,n) cin>>arr[i];
    sort(arr,arr+n);
    ll m=arr[n-1];
    ll ans=360;
    for(int i=0;i<n-1;i++){
ans=min(abs(180-m)*2,ans);
ans=min(360-(abs(180-m)*2),ans);

m+=arr[i];
    }

ans=min(abs(180-m)*2,ans);


cout<<ans<<endl;



}
	return 0;

}
