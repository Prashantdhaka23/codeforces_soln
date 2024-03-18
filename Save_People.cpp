#include<iostream>
using namespace std;
int maxi(int x[3], int min[3], int max[3])
{
	for(int i=0;i<3;i++)
		if(x[i]<min[i] || x[i]>max[i])
			return -1;

	int largest = x[0];
			
	if(largest<x[1])
		largest = x[1];
	else if(largest<x[2])
		largest = x[2];
	
	return largest;
}

void boundary(int n)
{
	int min[10], max[10], avg[10];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the min & max value of the variable "<<(i+1)<<": "<<endl;
		cin>>min[i]>>max[i];
		avg[i] = (max[i]+min[i])/2;
	}
	
	int testCases[4*n+1][n];
	for(int i=0;i<n;i++)
		testCases[0][i] = avg[i];

	for(int i=0;i<n;i++)
	{
		int flag=0;
		for(int j=1;j<=4*n;j++)
		{
			if(j > ((4*n)-((i+1)*4)) && j <= ((4*n)-(i*4)))
			{
				flag++;
				switch(flag)
				{
					case 1: testCases[j][i] = min[i];
						break;
					case 2: testCases[j][i] = min[i]+1;
						break;
					case 3: testCases[j][i] = max[i];
						break;
					case 4: testCases[j][i] = max[i]-1;
						break;
				}          	
			}
			else
				testCases[j][i] = avg[i];
		}
	}
	
	cout<<"\nTest Cases...";
	cout<<"\n+";	for(int i=0;i<63;i++)	cout<<"-";	cout<<"+";
	cout<<"\n|\t\t      Input\t\t\t|     Expected\t|";
	cout<<"\n|\ta\t\tb\t\tc\t|     Output\t|";
	cout<<"\n+";	for(int i=0;i<63;i++)	cout<<"-";	cout<<"+\n";
	for(int i=0;i<4*n+1;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==0)		cout<<"|\t";
			cout<<testCases[i][j]<<"\t|\t";        
		}
		int expOut = maxi(testCases[i],min,max);
		if(expOut<0)
			 cout<<"--";
		else cout<<expOut;
		cout<<"\t|"<<endl;
	}
	cout<<"+";	for(int i=0;i<63;i++)	cout<<"-";	cout<<"+";
	cout<<"\n>>No. of Test Cases = "<<4*n+1;
}


int main()
{
	
	boundary(3);
return 0;
}
