#include <bits/stdc++.h>
using namespace std;
#define ll                                  long long

ll pwrl(ll a, ll b) { ll res = 1; while (b > 0) {if (b & 1) res = res * a ; a = a * a ; b >>= 1;} return res;}


std::string check_snowflake_existence(long long  n) {
  if(n<=6) return "NO";
  for(long long i=2;i<=65;i++){
  long long  d=1;
  long long low=2;
  long long high=1e9;
  while(low<=high){
  long long mid=(low+high)/2;
   long  long  ans=mid*((pwrl(mid,i)-1)/(mid-1));
   
  if(ans+1==n)return "YES";
  if(ans>n){
    high=mid-1;
  }else{
    low=mid+1;
  }

  }
  }


    return "NO";

}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        long long  n;
        std::cin >> n;

        // Check if snowflake with n vertices exists
        std::string result = check_snowflake_existence(n);

        // Print the result
        std::cout << result << std::endl;
    }

    return 0;
}
