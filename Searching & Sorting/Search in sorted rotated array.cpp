#include<iostream>
using namespace std;
int findPeak(int arr[], int n) {
	int s=0;
	int e=n-1;
	int mid;
	while(s<e) {
		mid=s+(e-s)/2;
		if(arr[mid]>=arr[0]) {
			s=mid+1;
			
		}
		else {
			e=mid;
		}
		
	}
	return s;
}
int binarySearch( int  arr[], int key, int n, int s, int e) {
	int mid;

	while(s<=e) {
		mid=(s+e)/2;
	if(key==arr[mid]) {
		return mid;
	}
	else if(key<arr[mid]) {
		e=mid-1;
	}
	else {
		s=mid+1;
	}
}
}
int Search(int arr[], int n, int key) {
	int s=0;
	int e=n-1;
	int mid;
	int pivot=findPeak(arr, n);
	while(s<e) {
		int mid=s+(e-s)/2;
		if(key>=arr[pivot] && key<arr[e ]) {
		return binarySearch(arr, key, n, pivot, e);
	}
	else {
		return binarySearch(arr, key, n, 0, pivot-1);
	}
	}
}
int main() {
	int arr[7]={4,5,6,7,0,1,2};
	cout<<Search(arr, 7, 5);
	return 0;
}
