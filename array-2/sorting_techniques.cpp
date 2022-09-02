#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int bubble_sort(vector<int> &v, int n){
	int swaps=0;
	for(int i=0;i<n-1;i++){
		int f=0;
		for(int j=0;j<n-i-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j], v[j+1]);
				f=1;
				swaps++;
			}
		}
		if(f==0){
			break;
		}
	}
	return swaps;
}

int selection_sort(vector<int> &v, int n){
	int swaps = 0;
	for(int i=0;i<n;i++){
		int min_idx = i;
		for(int j=i;j<n;j++){
			if(v[min_idx] > v[j]){
				swaps++;
				min_idx = j;
			}
		}
		swap(v[min_idx], v[i]);
	}
	return swaps;
}

void insertion_sort(vector<int> &v, int n){
	for(int i=1;i<n;i++){
		int j = i-1;
		int ele = v[i];
		while(j>=0 && v[j] > ele){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = ele;
	}
}

int partition(vector<int> &v, int l, int h){
	int i = l-1;
	int j = l;
	int pivot = v[h];
	while(j<h){
		if(v[j] < pivot){
			i++;
			swap(v[i],v[j]);
		}
		j++;
	}
	swap(v[i+1], pivot);
	return i+1;
}

//4 7 5 2 8 3 6
//4 5 7 2 8 3 6
//4 5 2 7 8 3 6
//4 5 2 3 8 7 6
//4 5 2 3 6 7 8

void merge(int arr[], int l, int m, int r){
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1], R[n2];
	for(int i=0;i<n1;i++){
		L[i] = arr[l+i];
	}
	for(int j=0;j<n2;j++){
		R[j] = arr[m+1+j];
	}

	int i=0,j=0,k=l;

	while(i<n1 && j<n2){
		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}
		else if(L[i] > R[j]){
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[], int l, int r){
	if(l<r){
		int m = l+(r-l)/2;
		merge_sort(arr, l, m);
		merge_sort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}


void quick_sort(vector<int> &v, int p, int q){
	if(p<q){
		int r = partition(v, p, q);
		quick_sort(v,p,r-1);
		quick_sort(v,r+1,q);
	}
}




int main(){
	vector<int> v = {4,7,5,2,8,3,6};
	int n = 7;
	int arr[n] = {4,7,5,2,8,3,6};

	merge_sort(arr, 0, n-1);
    


    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}

