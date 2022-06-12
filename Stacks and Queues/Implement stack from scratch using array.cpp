#include<iostream>
using namespace std;
class stack{
	public:
	int *arr;
	int top;
	int size;
	stack(int length) {
		size=length;
		arr= new int(size);
		top=-1;
	}
	
	void push(int x) {
	if(size-top>1) {
	top++;
	arr[top]=x;	
	cout<<"pushed "<<x<<endl;
	}
	else {
		cout<<"stack overflow"<<endl;
	}
}

 	void pop() {
 		if(top==-1) {
 			cout<<"stack underflow"<<endl;
		 }
		 else {
		 	cout<<"element popped: "<<arr[top]<<endl;
		 	top--;
		 	
		 }
	 }
	 
	 void peek() {
	 	cout<<"peek "<<arr[top]<<endl;
	 }
	 
	 void isempty() {
	 	if(top==-1) {
	 		cout<<"stack is empty"<<endl;
		 }
		 else {
		 	cout<<"stack is not empty"<<endl;
		 }
	 }
};

int main() {
	stack s(5);
	s.isempty();
	s.push(1);
	s.push(2);
	s.peek();
	s.pop();
	s.peek();
	return 0;
}
