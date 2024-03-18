
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
     long long  l,r,x,a,b;
	   cin>>l>>r>>x;
        cin>>a>>b;
        if(a>b)swap(a,b);
        if(a==b){
          cout<<"0"<<endl;

        }
        else if(b-a>=x)cout<<1<<endl;
        else if(r-b>=x || (a-l)>=x){
          cout<<2<<endl;
        }else if(r-a>=x && r-l>=x && b-l>=x){
          cout<<3<<endl;
        }
        else{
          cout<<-1<<endl;
        }
        
	   

}
}