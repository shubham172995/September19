#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, Q;
		scanf("%d %d", &n, &Q);
		vector<long int> b(n), s(n+1);
		for(int i=1;i<n;i++)
			scanf("%ld", &b[i]);
		for(int j = 1 , c = 1 ; j <= n ; j++ , c*=-1)
            s[j] = c * b[j] + s[j-1];
		while(Q--){
			int p, q;
			scanf("%d %d", &p, &q);
			if(p>q)
				swap(p, q);
			if((q-p)%2==0){
				cout<<"UNKNOWN\n";
				continue;
			}
			if(p%2)cout<<s[q-1]-s[p-1]<<endl;
			else cout<<s[p-1]-s[q-1]<<endl;
		}
	}
	return 0;
}