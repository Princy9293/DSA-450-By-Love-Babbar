#include<iostream>
using namespace std;
void merge(int arr[], int s, int mid, int e) {
	int n1=mid-s+1;
	int n2=e-mid;
	
	int a[n1];
	int b[n2];
	
	for(int i=0;i<n1;i++) {
		a[i]=arr[i+s];
	}
	for(int j=0;j<n2;j++) {
		b[j]=arr[mid+1+j];
	}
	
	int i=0,j=0,k=s;
	
	while(i<n1 && j<n2) {
		if(a[i]>b[j] ) {
			arr[k] = b[j];
			k++;
			j++;
		}
		else {
			arr[k]=a[i];
			k++;
			i++;
		}
	}
	
	while(i<n1) {
		arr[k]=a[i];
			k++;
			i++;
	}
	
	while(j<n2) {
		arr[k] = b[j];
			k++;
			j++;	
	}
}
void mergeSort(int arr[], int s, int e) {
   if(s<e) {
    int mid=(s+e)/2;
	mergeSort(arr,s, mid);
	mergeSort(arr,mid+1,e);
	merge(arr,s,mid,e);
}
}
void find3Numbers(int A[], int n, int sum)
{

    int l,r;
    mergeSort(A,0,n-1);
    bool element=0;
    for (int i = 0; i < n - 2; i++) {
        l = i + 1; 
        r = n- 1; 
     
        while (l < r) {
            if (A[i] + A[l] + A[r] == sum) {
               element=1;
                cout<<"("<<A[i]<<","<<A[l]<<","<<A[r]<<")"<<endl;
                break;
                
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else
                r--;
        }
    }
    if(element==0) {
    	cout<<"no such pair"<<endl;
	}

    
}

int main() {
		int n;
	cout<<"enter size of array: ";
	cin>>n;
	cout<<"enter elements of array : ";
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<"enter K : ";
	int k;
	cin>>k;
	cout<<"pairs : "<<endl;
	find3Numbers(arr, n, k);
}
