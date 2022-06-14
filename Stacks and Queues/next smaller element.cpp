#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void nextMinimum(int arr[], int n) {
	
	stack<int> s;
	vector<int> v(n);
	s.push(-1);
	int x;
	for(int i=n-1;i>=0;i--) {
		int curr=arr[i];
			while(!s.empty() && s.top()>=curr) {
				s.pop();
			}
			x=s.top();
		v[i]= s.top();
	
		s.push(curr);
		
	}
	for(int i=0;i<v.size();i++) {
		cout<<v.at(i)<<" ";
	}
	
}

int main() {
	int n=5;
	int arr[]={3, 8, 5, 2, 25};
	nextMinimum(arr, n);

	return 0;
}
