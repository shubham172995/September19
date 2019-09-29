#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		vector<int> a(n+1);
		int min=INT_MAX, max=0;
		bool flag=false;
		for(int i=0;i<m;i++){
			min=INT_MAX;
			int temp;
			scanf("%d", &temp);
			++a[temp];
			for(int j=1;j<=n;j++){
				min=min<a[j]?min:a[j];
				if(min==0)
					break;
			}
			max=max>a[temp]?max:a[temp];
			if(max-min>=2)
				flag=true;
		}
		if(!flag)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}