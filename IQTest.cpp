#include<bits/stdc++.h>
int main(){
	std::vector<std::string> a(4);
	for(int i=0;i<4;i++){
		std::cin>>a[i];
	}
	/*for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			printf("%c", a[i][j]);
		printf("\n");
	}*/
	bool flag=true;
	int p, d;p=d=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			p=d=0;
			//std::cout<<a[i][j]<<a[i+1][j]<<a[i][j+1]<<a[i+1][j+1]<<std::endl;
			if(a[i][j]=='#')
				++p;
			else ++d;
			if(a[i][j+1]=='#')
				++p;
			else ++d;
			if(a[i+1][j+1]=='#')
				++p;
			else ++d;
			if(a[i+1][j]=='#')
				++p;
			else ++d;
			//std::cout<<p<<" "<<d<<std::endl;
			if(d==1||p==1){
				flag=false;
				break;
			}
			if(d==0||p==0){
				flag=false;
				break;
			}
		}
		if(!flag)
			break;
	}
	if(!flag)
		std::cout<<"YES\n";
	else std::cout<<"NO\n";
	return 0;
}