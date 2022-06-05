#include<iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid) {
	int studentCount=1;
	int pageCount=0;
	for(int i=0;i<n;i++) {
		if(pageCount+arr[i] <= mid) {
			pageCount=pageCount+arr[i];
		}
		else {
			studentCount++;
			if(studentCount>m || mid<arr[i] ) {
				return false;
			}
			pageCount=arr[i];
		}
	}
	return true;
}
int bookAllocation(int arr[], int n, int m) {
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
	cout<<"enter number of students : ";
	cin>>m;
	cout<<"enter elements : ";
	for(int i=0;i<n;i++ ) {
		cin>>arr[i];
	}
	cout<<bookAllocation(arr, n, m);
	

	return 0;
}
