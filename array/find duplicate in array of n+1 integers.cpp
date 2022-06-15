#include<iostream>
using namespace std;
int findDuplicate(int arr[], int n) {
	int ans=0;
	for(int i=0;i<n;i++) {
		ans=ans^arr[i];
	}

	for(int i=1;i<n;i++) {
		ans=ans^i;
		
	}
	return ans;
}
int main() {
	int n;
	cout<<"enter n: ";
	cin>>n;
	int arr[n+1];
	cout<<"enter n+1 elements in correct format: ";
	for(int i=0;i<n+1;i++) {
		cin>>arr[i];
	}
	cout<<findDuplicate(arr, n+1);
	return 0;
}
