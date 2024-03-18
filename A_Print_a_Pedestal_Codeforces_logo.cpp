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

int main(){
ll t;

cin>>t;
while(t--){
     long long  n;
     cin>>n;



}
return 0;

}