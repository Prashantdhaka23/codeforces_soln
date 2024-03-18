#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)

int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}


 int main(){
int t;
cin>>t;
while(t--){
long long  n,c,d,e,fl=1;

// string s;
cin>>n;
vector<long long> a(n,0);
// cin>>s;
// cout<<s[0]-'0'+s[2]-'0'<<endl;
long long g=0,s=0,m1=INT_MIN,m2=INT_MAX;

for(int i=0;i<n;i++){
cin>>a[i];



}
vector<int> b = a, c = a;
        

        sort(b.begin(), b.end());

        
        sort(c.begin(), c.end(), greater<int>());
        

        if (!(a != b))
        {
            
            cout << 0 << endl;
            
        }
        else if (!(c != a))
        {
            
            cout << c[0] << endl;
            
        }
        else
        {
            
            int answer = 0;
            

            for (int i = 0; i < n - 1; i++)
            {
                
                if (!(a[i + 1] >= a[i]))
                {
                    
                    int tmpp = abs(a[i + 1] - a[i]);
                    
                    int tmp = tmpp / 2;
                    
                    tmp = a[i] - tmp;
                    
                    answer = max(answer, tmp);
                   
                }
            }

            for (int i = 0; i < n; i++)
            {
                
                int tmp = abs(a[i] - answer);
                
                a[i] = tmp;
                
            }

            vector<int> vec4 = a;
            
            sort(vec4.begin(), vec4.end());
            
            if (!(vec4 != a))
            {
                
                cout << answer << endl;
                
            }
            else
            {
                
                cout << -1 << endl;
                
            }
        }
    }
}




