#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int f=1;
	    int d=max(a,b);
	    d=max(a,c);
	    
	    for(int x=0;x<=d;x++){
	    if((a^x)<(x^b) && (x^b)<(x^c)){
	        cout<<x<<endl;
	        f=0;
	        break;
	    }
	    
	    }
	    if(f){
	        cout<<-1<<endl;
	    }
	}
	return 0;
}

     








