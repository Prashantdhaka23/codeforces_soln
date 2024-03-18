#include<bits/stdc++.h>
using namespace std;
# define ll long long 

 
 int main(){

ll tcc=1;
cin>>tcc;
while(tcc--){
int n ;
cin>>n;
vector<int > a1(n);
int res=0,aa=0,bb=0,cc=0;

for(int i=0;i<n;i++){
     cin>>a1[i];
if(a1[i]==1){
     aa++;cc++;
}
else{
res=max(res,aa+bb);
if(cc>=1)bb=max((cc)/2+1,bb);
aa=0;
aa=0;
}


}
if(res<aa+bb)res=aa+bb;


cout<<res<<endl;
}

return 0;
}



 



     








