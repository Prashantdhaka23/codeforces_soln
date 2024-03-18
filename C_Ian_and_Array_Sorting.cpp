#include <iostream>
#include <vector>
#include <cmath>
# define ll long long 
# define py cout<<"Yes"<<endl;
# define pn cout<<"No"<<endl;

using namespace std;

bool can_make_non_decreasing(int n, vector<int>& a) {
     if (n == 2) {
        return (a[0] <= a[1]);
    }
    for (int i = 1; i < n-1; i++) {
        if (a[i]<a[i-1] && a[i]<a[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool f=true;
       for(int i = n-1;i>0;i-=2)
  {

     if(a[i]<a[i-1])

     {
        if(i-1==0) f = false;

        else a[i-2]-=(a[i-1]-a[i]);

       
     }
     else if(i-2>=0) 

     a[i-2]=a[i-2]+(a[i]-a[i-1]);
     
  }
  if(f) py
  else  cout<<"NO"<<endl;
}



        
       
        
    
    return 0;
}
