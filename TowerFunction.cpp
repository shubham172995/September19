void tower(int n, stack<int>* a, stack<int>* b, stack<int>* c){
	stack<int>* d=c;
	/*while(d->size()){
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