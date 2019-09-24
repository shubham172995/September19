#include<bits/stdc++.h>
int main(){
	std::vector<double> a;
	long long int n;
	while((scanf("%lld", &n))!=EOF){
		a.push_back((double)sqrt(n*1.0));
	}
	reverse(a.begin(), a.end());
	std::vector<double>::iterator it=a.begin();
	for(;it!=a.end();it++)
		printf("%.4lf\n", *it);
	return 0;
}