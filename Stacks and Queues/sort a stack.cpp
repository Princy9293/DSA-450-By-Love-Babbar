#include<iostream>
#include<stack>
using namespace std;
void sortedInsert(stack<int>& s, int num) {
	if(s.empty()  ||  ( !s.empty() && s.top()<num)) {
        s.push(num);
		return;
	}
	int n=s.top();
	s.pop();
	sortedInsert(s,num);
	s.push(n);
	
	
}
void sortStack(stack<int>& s) {
	if(s.empty()) {
		return;
	}
	
	int num=s.top();
	s.pop();
	sortStack(s);
	
	sortedInsert(s,num);
	
}
void display(stack<int>s) {
	while(!s.empty()) {
		cout<<s.top()<<" ";
		s.pop();
	}
}
int main() {
	stack<int> s;
	s.push(8);
	s.push(6);
	s.push(9);
	s.push(1);
	s.push(3);

	cout<<"before sorting: ";
	display(s);
	cout<<endl<<"after sorting: ";
	sortStack(s);
	display(s);
	return 0;
}
