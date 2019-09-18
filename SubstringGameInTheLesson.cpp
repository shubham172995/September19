#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	vector<string> a(s.length());
	a[0]="Mike";
	for(int i=1;i<s.length();i++){
		if(s[i]>s[i-1])
			a[i]=a[i-1]=="Mike"?"Ann":"Mike";
		else a[i]=a[i-1];
	}
	for(int i=0;i<s.length();i++)
		cout<<a[i]<<endl;
	return 0;
}