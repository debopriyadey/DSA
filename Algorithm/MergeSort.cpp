#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r);

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}

void merge(int a[], int s, int mid, int e)
{

	int i=s;
	int j=mid+1;
	int k=s;
	int temp[1000000];
	while(i<=mid and j<=e)
	{
		if(a[i]>a[j])
			temp[k++]=a[j++];
		else
			temp[k++]=a[i++];
	}
	while(i<=mid)
		temp[k++]=a[i++];
	while(j<=e)
		temp[k++]=a[j++];
	for(i=s;i<=e;i++)
		a[i]=temp[i];
}
