#include<bits/stdc++.h>
using namespace std;

vector<long long int> unique(vector<long long int> a, int n){
	vector<long long int> temp;
	sort(a.begin(), a.end());
	int i=0;
	while(i<n-1){
		if(a[i]==a[i+1]){
			temp.push_back(a[i]+a[i+1]);
			i+=2;
		}
		else if(a[i]!=a[i+1]){
			temp.push_back(a[i]);
			i+=1;
		}
	}
	if(a[n-2]!=a[n-1])
		temp.push_back(a[n-1]);
	/*for(int i=0;i<temp.size();i++)
		cout<<temp[i]<<" ";
	cout<<endl;*/
	if(temp.size()==n)
		return temp;
	return unique(temp, temp.size());
}

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
		vector<long long int> b=unique(a, n);
		for(int i=0;i<b.size();i++)
			if(b[i]==2048){
				flag=true;
				break;
			}
		if(flag)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}