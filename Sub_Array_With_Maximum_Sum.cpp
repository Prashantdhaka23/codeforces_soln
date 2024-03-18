#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define int                     long long int
#define ld                      long double
#define pb                      push_back
#define MOD                     1000000007
#define inf                     3e18
#define vi                      vector<int>
#define vld                     vector<ld>
#define pii                     pair<int,int>
#define mii                     map<int,int>
#define fi                      first
#define se                      second
#define fastIO                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define db(...)                 _f(#VA_ARGS, __VA_ARGS_)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cerr << " "<< name << " : " << arg1 <<'\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}

mt19937 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());
        //  shuffle(arr.begin(), arr.end(), rng); 
        //  or rng() to generate random number

typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; 
		//order_of_key (k) : Number of items strictly smaller than k .
		//find_by_order(k) : K-th element in a set (counting from zero) (returns an iterator)           


void inp_out()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("debug.txt", "w", stderr);
	#endif
}

int32_t main()
{
	fastIO
//	inp_out();

    int n,m;
    cin>>n>>m;
    vi a(n);
    for(int i=0;i<n;++i)
        cin>>a[i];
    int low = 0, high = a[n-1]+a[n-1];
    int lowest=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int cnt=0,j=0;
        
        for(int i=n-1;i>=0;--i)
        {
            while(a[i]+a[j] < mid && j < n)
                ++j;
            if(j == n || j > i)
                break;
            cnt += 2 * (i - j) + 1;
        }
        if(cnt >= m)
        {
            lowest=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    
    int ans=0,j=0;
    vector<int> pre(n);
    
    pre[0]=a[0];
    for(int i=1;i<n;++i)
        pre[i] = pre[i-1]+a[i];
    int fa = 0;
    for(int i=n-1;i>=0;--i)
    {
        int ans=0;
        while(a[i]+a[j]<lowest)
        {
            ++ j;    
        }

        if((2*(i-j)+1)>=m)
        {
            ans+=pre[i];
            if(j > 0)
                ans -= pre[j-1];
            ans *= 2;
            ans += ((i-j)*a[i]);
            fa += ans;

            m -= ((2*(i-j))+1);
            
            if(m == 0)  break;
        }
        else
        {
            ans += a[i];
            ans += a[i];
            --m;
            
            for(int k = i-1;k>=j&&m>0;--k)
            {
                ans+=a[k];
                ans+=a[i];
                if(m>1)
                {
                    ans+=a[k];
                    ans+=a[i];
                }
                m-=2;
            }
            
            fa += ans;
            break;
        }
    }
    cout<<fa<<'\n';
	return 0;
}