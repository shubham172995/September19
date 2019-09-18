#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

int main(){
	int n;
	scanf("%d", &n);
	vector<vector<long long int> > a(n);
	for(int i=0;i<n;i++){
		a[i].resize(n);
		for(int j=0;j<n;j++)
			scanf("%lld", &a[i][j]);
	}
	vector<long long int> b(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)continue;
			b[i]=gcd(b[i], a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	cout<<endl;
	return 0;
}