#include<bits/stdc++.h>
using namespace std;

void tower(int n, stack<int>* a, stack<int>* b, stack<int>* c){
	/*stack<int>* d=c;
	while(d->size()){
		cout<<d->top()<<endl;
		d->pop();
	}*/
	if(n==1){
		if(a->size()==1){
			c->push(a->top());
			a->pop();
		}
		else if(c->size()==1){
			c->push(b->top());
			b->pop();
		}
	}
	else{
		tower(n-1, a, c, b);
		tower(n-1, b, a, c);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	stack<int> a, b, c;
	for(int i=n;i>=1;i--)
		a.push(i);
	tower(n, &a, &b, &c);
	/*while(a.size()){
		cout<<a.top()<<endl;
		a.pop();
	}*/
	while(c.size()){
		cout<<c.top()<<endl;
		c.pop();
	}
	return 0;
}