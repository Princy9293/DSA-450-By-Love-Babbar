#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int size, int count) {
	
	if(count==size/2) {
		s.pop();
		return;
	}
	
	int num=s.top();
	s.pop();
	
	solve(s,size,count+1);
	s.push(num);
	
}
void deleteMiddle(stack<int>&s, int size) {
	int count=0;
	solve(s,size,count);
	
}
int main() {
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	int size=s.size();
	deleteMiddle(s,size);
	while(!s.empty()) {
		cout<<s.top()<<" ";
		s.pop();
	}
 	return 0;
}
