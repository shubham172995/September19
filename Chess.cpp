#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<vector<char> >a(n);
	for(int i=0;i<n;i++){
		a[i].resize(n);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j])
				continue;
			a[i][j]='W';
			if(i-2>=0){
				if(j-1>=0)
					if(a[i-2][j-1]!='B')
						a[i-2][j-1]='B';
				if(j+1<=n-1)
					if(a[i-2][j+1]!='B')
						a[i-2][j+1]='B';
			}
			else if(i-1>=0){
				if(j-2>=0)
					if(a[i-1][j-2]!='B')
						a[i-1][j-2]='B';
				if(j+2<=n-1)
					if(a[i-1][j+2]!='B')
						a[i-1][j+2]='B';
			}
			else if(i+2<=n-1){
				if(j-1>=0)
					if(a[i+2][j-1]!='B')
						a[i+2][j-1]='B';
				if(j+1<=n-1)
					if(a[i+2][j+1]!='B')
						a[i+2][j+1]='B';
			}
			else if(i+1<=n-1){
				if(j-2>=0)
					if(a[i+1][j-2]!='B')
						a[i+1][j-2]='B';
				if(j+2<=n-1)
					if(a[i+1][j+2]!='B')
						a[i+1][j+2]='B';
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}