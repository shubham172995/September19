#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	stack<int> a, b, c;
	for(int i=n;i>=1;i--)
		a.push(i);
	for(int i=3;i<=n;i++){
		if(i==3){
			if(n%2){
				c.push(a.top());
				a.pop();
				b.push(a.top());
				a.pop();
				b.push(c.top());
				c.pop();
				c.push(a.to());
				a.pop();
				a.push(b.top());
				b.pop();
				c.push(b.top());
				b.pop();
				c.push(a.top());
				a.pop();
			}
			else{
				b.push(a.top());
				a.pop();
				c.push(a.top());
				a.pop();
				c.push(b.top());
				b.pop();
				b.push(a.to());
				a.pop();
				a.push(c.top());
				c.pop();
				b.push(c.top());
				c.pop();
				b.push(a.top());
				a.pop();
			}
			else{
				if(b.empty()){
					while(c.size()){
						b.push(a.top());
						a.pop();
					}
				}
			}
		}
	}
}