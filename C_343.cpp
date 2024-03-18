#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
//function to build the segment tree
void buildTree(vector<pair<pair<int,int>, pair<int,int> >> & tree,vector<int> & a,int index,int s,int e)
{
	//base case
	if(s>e)
		return;
	//reached leaf node
	if(s==e)
	{
		tree[index]={{a[s],1},{INT_MIN,0}}; //pair of max element and its frequency
		return ;
	}
	//now build the segment tree in bottom up manner
	int m = (s+e)/2;
	buildTree(tree,a,2*index,s,m);
	buildTree(tree,a,2*index+1,m+1,e);

    pair<pair<int,int>, pair<int,int> > a = tree[2*index];
	pair<pair<int,int>, pair<int,int> > b = tree[2*index+1];

       map<int,int> mp;
       mp[a.first.first]+=a.first.second;
       mp[a.second.first]+=a.second.second;
       mp[b.first.first]+=b.first.second;
       mp[b.second.first]+=b.second.second;
      vector<int> l={a.first.first,a.second.first,b.first.first,b.second.first};
       sort(l.begin(),l.end(),greater<int>());

	tree[index]= {{l[0],mp[l[0]]},{l[1],mp[l[1]]}};
	
	return;
}

//function to query the segment tree for RMQ
pair<pair<int,int>, pair<int,int> > query(vector<pair<pair<int,int>, pair<int,int> >> & tree ,int index,int s,int e,int qs,int qe)
{
	//base case: if query range is outside the node range
	if(qs>e || s>qe)
		return {{INT_MIN,0},{INT_MIN,0}};
	//complete overlap
	if(s>=qs && e<=qe)
		return tree[index];
	//now partial overlap case is executed
	int m = (s+e)/2;
	pair<pair<int,int>, pair<int,int> > a = query(tree,2*index,s,m,qs,qe);
	pair<pair<int,int>, pair<int,int> > b = query(tree,2*index+1,m+1,e,qs,qe);
       map<int,int> mp;
       mp[a.first.first]+=a.first.second;
       mp[a.second.first]+=a.second.second;
       mp[b.first.first]+=b.first.second;
       mp[b.second.first]+=b.second.second;
      vector<int> l={a.first.first,a.second.first,b.first.first,b.second.first};
       sort(l.begin(),l.end(),greater<int>());

	return  {{l[0],mp[l[0]]},{l[1],mp[l[1]]}};
}

//function to update a value at position to "pos"
void updateNode(vector<pair<pair<int,int>, pair<int,int> >> & tree ,int index,int s,int e,int pos,int val)
{
	if(pos<s || pos>e)
		return ;
	if(s==e)
	{
		tree[index] = {{val,1},{INT_MIN,0}};
		return ;
	}
	int m = (s+e)/2;
	updateNode(tree,2*index,s,m,pos,val);
	updateNode(tree,2*index+1,m+1,e,pos,val);
     pair<pair<int,int>, pair<int,int> > a = tree[2*index];
	pair<pair<int,int>, pair<int,int> > b = tree[2*index+1];

       map<int,int> mp;
       mp[a.first.first]+=a.first.second;
       mp[a.second.first]+=a.second.second;
       mp[b.first.first]+=b.first.second;
       mp[b.second.first]+=b.second.second;
      vector<int> l={a.first.first,a.second.first,b.first.first,b.second.first};
       sort(l.begin(),l.end(),greater<int>());

	tree[index]= {{l[0],mp[l[0]]},{l[1],mp[l[1]]}};
	return;
}

//function to update the values in a range
void updateRange(vector<int> & tree ,int index,int s,int e,int rs,int re,int inc)
{
	//query range outside the node range
	if(s>re || e<rs)
		return;
	if(s==e)
	{
		tree[index] += inc;
		return ;
	}
	int m = (s+e)/2;
	updateRange(tree,2*index,s,m,rs,re,inc);
	updateRange(tree,2*index+1,m+1,e,rs,re,inc);
	tree[index] = max(tree[2*index],tree[2*index+1]);
	return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   													//size of input array
    
    int n,q;
    cin>>n>>q;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)cin>>a[i];
  vector<pair<pair<int,int>, pair<int,int> >>  tree(4*n+1);  
                                     //array to store the segment tree
    
       int index = 1;													//index of 1st node
    int s =0,e=n-1;
    buildTree(tree,a,index,s,e);
    
    		
            for(int i=0;i<q;i++){
           int k;
           cin>>k;
           if(k==1){
int l,r;
cin>>l>>r;
pair<pair<int,int>, pair<int,int> > ans = query(tree,index,s,e,l-1,r-1);
cout<<ans.second.second<<endl;
           }else{

int pos,val;
cin>>pos>>val;

updateNode(tree,index,s,e,pos-1,val);

           }


            }							//now tree has been built
    return 0;
}