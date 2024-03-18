// Here's one possible solution to the problem in C++:

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

const double INF = 1e18; // a very large number to represent infinity

int main() {
int t;
cin >> t;
while (t--) {
int n, m;
cin >> n >> m;
vector<int> lines(n);
for (int i = 0; i < n; i++) {
cin >> lines[i];
}
sort(lines.begin(),lines.end());
for (int i = 0; i < m; i++) {
long long   a, b, c;
cin >> a >> b >> c;
bool found = false;

// check if the line is the best so far
int x=upper_bound(lines.begin(),lines.end(),b)-lines.begin();


if (x<n && ((b-lines[x])*(b-lines[x])-4*a*c<0 )){
found = true;
cout << "YES" << endl;
cout << lines[x] << endl;
// break;
}
 if( !found && (     x-1>=0 && ((b-lines[x-1])*(b-lines[x-1])-4*a*c<0          ) )){
found = true;
cout << "YES" << endl;
cout << lines[x-1] << endl;

}

if (!found) {
cout << "NO" << endl;
}

}
cout<<endl;
}
return 0;
}