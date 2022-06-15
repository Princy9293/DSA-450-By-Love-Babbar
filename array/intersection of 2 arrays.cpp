#include<iostream>
using namespace std;
void intersection(int arr1[], int arr2[],  int n1, int n2) {
	
	
	for(int i=0;i<n1;i++) {
		int element=arr1[i];
		for(int j=0;j<n2;j++) {
			if(arr2[j]==element) {
				cout<<element<<" ";
				arr2[j]=INT_MIN;
				break;
			}
		}
	}
	
} 
int main() {
	int n1, n2;
	cout<<"enter size of n1 : ";
	cin>>n1;
	cout<<"enter element of arr1 : ";
	int arr1[n1];
	for(int i=0;i<n1;i++) {
		cin>>arr1[i];
	}
	cout<<"enter size of n2 : ";
	cin>>n2;
	cout<<"enter element of arr2 : ";
	int arr2[n2];
	for(int i=0;i<n2;i++) {
		cin>>arr2[i];
	}
	cout<<"intersection : ";
	intersection(arr1,arr2,n1,n2);
	return 0;
}
