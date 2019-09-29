#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, Q;
		scanf("%d %d", &n, &Q);
		vector<long int> b(n);
		for(int i=1;i<n;i++)
			scanf("%ld", &b[i]);
		while(Q--){
			int p, q;
			scanf("%d %d", &p, &q);
			if(p>q)
				swap(p, q);
			if((q-p)%2==0){
				cout<<"UNKNOWN\n";
				continue;
			}
			long int ans=0;
			ans=b[p];
			for(int i=p+1;i<q;i++){
				ans+=pow(-1, i-p)*b[i];
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}