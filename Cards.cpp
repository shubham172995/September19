#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	string s;
	cin>>s;
	int o, z;o=z=0;
	for(int i=0;i<n;i++){
		if(s[i]=='n')
			++o;
		else if(s[i]=='z')
			++z;
	}
	for(int i=0;i<o;i++)
		cout<<"1 ";
	for(int i=0;i<z;i++)
		cout<<"0 ";
	cout<<endl;
	return 0;
}