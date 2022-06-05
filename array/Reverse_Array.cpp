#include<iostream>
using namespace std;
void reverse(int a[], int n) {
	int c;
	for(int i=0;i<n/2;i++){
		c=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=c;
	}
	cout<<"reversed array:";
	for(int j=0;j<n;j++) {
		cout<<a[j]<<" ";
	}
	return;
}
int main() {
	int n;
	cout<<"Enter size of array ";
	cin>>n;
	
	int a[n];
	cout<<"Enter all the elements with spaces between them: ";
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	reverse(a,n);
	return 0;
}