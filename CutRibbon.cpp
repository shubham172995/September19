#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	vector<int> a(3);
	scanf("%d %d %d %d", &n, &a[0], &a[1], &a[2]);
	sort(a.begin(), a.end());
	vector<int> c(n+1,  -1e5);
	c[0]=0;
	for(int i=a[0];i<=n;i++){
		c[i]=c[i]>(c[i-a[0]]+1)?c[i]:(c[i-a[0]]+1);
	}
	for(int i=a[1];i<=n;i++){
		c[i]=c[i]>(c[i-a[1]]+1)?c[i]:(c[i-a[1]]+1);
	}
	for(int i=a[2];i<=n;i++){
		c[i]=c[i]>(c[i-a[2]]+1)?c[i]:(c[i-a[2]]+1);
	}
	cout<<c[n]<<endl;
	return 0;
}
