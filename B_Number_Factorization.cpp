#include<bits/stdc++.h>
using namespace std;
# define ll long long 




 int main(){




int t;
cin>>t;
while(t--){
  
int n;
int ans=0;

cin>>n;

map<int,int> mp;

vector<int> res;
while (n % 2 == 0) 
    { 
       mp[2]++;
        n = n/2; 
    } 

    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        
        while (n % i == 0) 
        { 
       mp[(i)]++;
       res.push_back(n/i);
n=n/i;

            } } if (n > 2) 
       mp[(n)]++;
      

// for(int i=0;i<v.size();i++){
//      mp[v[i]]++;
// }

while(mp.size()>0){
int res=1;
std::map<int,int>::iterator it;
for( it=mp.begin();it!= mp.end();it++){
int d=(it->first);

if(mp[it->first]==0)mp.erase(d);

res=res*(it->first);
mp[it->first]--;
cout<<mp[it->first]<<" ";
// break;
if(mp[it->first]==0)mp.erase(d);


}



// break;

ans+=res;

}






// cout<<ans<<endl;


}
return 0;

}





     









