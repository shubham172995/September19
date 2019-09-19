#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	scanf("%d", &q);
	while(q--){
		int n;
		scanf("%d", &n);
		vector<long long int> a(n);
		bool flag=false;
		vector<int> b(2100);
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=2048)
				++b[a[i]];
			if(a[i]==2048)
				flag=true;
		}
		if(flag){
			cout<<"YES\n";
			continue;
		}
		int i=1;
		/*while(i<4096){
			cout<<i<<" "<<b[i]<<endl;
			i*=2;
		}*/
		i=1;
		while(i<2048){
			b[i]=b[i]-(b[i]%2);
			//cout<<b[i]<<" "<<i<<endl;
			long long int temp=i*2;
			b[temp]+=b[i]/2;
			//cout<<temp<<" "<<b[temp]<<endl;
			i*=2;
		}
		if(b[2048])
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}