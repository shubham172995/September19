#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long int a, b;a=b=0;
		for(int i=0;i<n;i++){
			int x, y, z;
			scanf("%d %d %d", &x, &y, &z);
			//cout<<a<<" "<<b<<endl;
			if(x==1){
				a=y;
				b=z;
				cout<<"YES\n";
				continue;
			}
			else{
				if(z==y){
					a=y;
					b=z;
					cout<<"YES\n";
					continue;
				}
				else if(a==0&&b==0){
					cout<<"NO\n";
					continue;
				}
				else{
					int min, max;
					min=y<z?y:z;
					max=y>z?y:z;
					if(a<=min&&b<=min){
						cout<<"NO\n";
						continue;
					}
					else{
						int min, max;
						min=y<z?y:z;
						max=y>z?y:z;
						//cout<<a<<" "<<b<<" "<<min<<" "<<max<<endl;
						if(a<b){
							a=min;
							b=max;
							cout<<"YES\n";
							continue;
						}
						else{
							a=max;
							b=min;
							cout<<"YES\n";
							continue;
						}
					}
				}
			}
		}
	}
	return 0;
}