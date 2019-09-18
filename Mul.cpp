#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<vector<long long int> > a(n);
	for(int i=0;i<n;i++){
		a[i].resize(n);
		for(int j=0;j<n;j++)
			scanf("%l64d", &a[i][j]);
	}
	vector<long long int> b(n);
	b[0]=a[0][1]*a[0][2];
	b[0]/=a[1][2];
	b[0]=sqrt(b[0]);
	for(int i=1;i<n;i++)
		b[i]=a[i][0]/b[0];
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	cout<<endl;
	return 0;
}