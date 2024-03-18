#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)

    

 int main(){
ll t;
cin>>t;
while(t--){
long long  n,m;
//  long long  m=1e9+7;
cin>>n;


int x=-100,y=-10;
int a,b;
int cnt=0;
int p=-1;
int l=0;

vector<int> v(n,0);
vector<int> mp(n+1,0);


for(int i=0;i<n;i++){
cin>>v[i];
mp[v[i]]=(i+1);

}
 

 int mx = 1, s = 1, e = 1;
 int currs = 1, curre = 1;
 int ans = (n + 1) / 2;
int mid = (n + 1) / 2; // 3
int a1=mid - min(mid, curre);
int b1=(n - max(mid, curre));
int val = max( a1, b1);

 ans = min(ans, val);
 for (int i = 2; i <= n; i++)
{
if (mp[i] > mp[curre])
curre++;
else
 {
int tmp = curre - currs + 1;
if (tmp > mx)
{
mx = tmp;
s = currs;
 e = curre;
 }
curre = i;
currs = i;
}
a1=mid - min(mid, curre);
 b1=(n - max(mid, curre));
val = max( a1, b1);

ans = min(ans, val);
}
cout << ans << endl;





     







}

}