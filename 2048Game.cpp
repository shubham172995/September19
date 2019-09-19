#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	scanf("%d", &q);
	while(q--){
		int n;
		scanf("%d", &n);
		vector<long long int> a(n);bool flag=false;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==2048)
				flag=true;
		}
		if(flag){
			cout<<"YES\n";
			continue;
		}
		sort(a.begin(), a.end());
		vector<long long int> b;
		int temp=1;
		for(int i=1;i<n;){
			if(a[i]==a[i-1])
				continue;
			else ++temp;
		}
		if(!flag&&temp==n){
			cout<<"NO\n";
			continue;
		}
		while(temp!=a.size()){
			int i=0;
			while(i<n){
				if(a[i]!=a[i+1]){
					b.push_back(a[i]);
					++i;
					vector<long long int>::iterator it=b.end();
					--it;
					if(*it==2048){
						flag=true;
						break;
					}
					continue;
				}
				else{
					b.push_back(a[i]+a[i+1]);
					i+=2;
				}
			}
			a.resize(0);
			a=b;
			temp=0;
			for(int i=1;i<n;){
			if(a[i]==a[i-1])
				continue;
			else ++temp;
			}
		}
		for(int i=0;i<)
	}
	return 0;
}