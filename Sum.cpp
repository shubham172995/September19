#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	long long int ans=0;
	if(n<=0){
		ans=n*(n-1);
		ans/=2;
		ans*=-1;
		ans+=1;
	}
	else if(n>0){
		ans=n*(n+1);
		ans/=2;
	}
	std::cout<<ans<<std::endl;
	return 0;
}