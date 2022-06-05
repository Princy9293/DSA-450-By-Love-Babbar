#include<iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid) {
	int painterCount=1;
	int sum=0;
	for(int i=0;i<n;i++) {
		if(sum+arr[i] <= mid) {
			sum=sum+arr[i];
		}
		else {
			painterCount++;
			if(painterCount>m || mid<arr[i] ) {
				return false;
			}
			sum=arr[i];
		}
	}
	return true;
}
int painterAllocation(int arr[], int n, int m) {
	int s=0;
	int mid;
	int sum=0;
	for(int i=0;i<n;i++) {
		sum += arr[i];
	}
	int e=sum;
	int ans;
	while(s<=e) {
		mid=s+(e-s)/2;
		if( isPossible(arr,n,m,mid) ) {
			ans=mid;
			e=mid-1;
		}
		else {
			s=mid+1;
		}
	}
	return ans;
}
int main() {
	int n,m;
	cout<<"enter size of array : ";
	cin>>n;
	int arr[n];
	cout<<"enter number of Painters : ";
	cin>>m;
	cout<<"enter elements : ";
	for(int i=0;i<n;i++ ) {
		cin>>arr[i];
	}
	cout<<painterAllocation(arr, n, m);
	

	return 0;
}	
