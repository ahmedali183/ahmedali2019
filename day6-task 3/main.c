#include <stdio.h>
#include <stdlib.h>
//Merge Sort is a Divide and Conquer algorithm.
//It divides array in two halves, calls itself for the two halves and then merges the two sorted halves.
//Recursive algorithm used for merge sort comes under the category of divide and conquer technique.
//An array of n elements is split around its center producing two smaller arrays.
//After these two arrays are sorted independently, they can be merged to produce the final sorted array.
//The process of splitting and merging can be carried recursively till there is only one element in the array.
//First divide the list into the smallest unit (1 element),then compare each element with the adjacent list to
//sort and merge the two adjacent lists.Finally all the elements are sorted and merged.

void devide_array(int a[],int i,int j) //i=0, j=n-1
{
	int mid;

	if(i<j) //this statement is for when i reach 1-number array just stop(that you can't divide it anymore).
	{
		mid=(i+j)/2; //to divide array into 2 sub-array, we determine mid(middle of the array).
		devide_array(a,i,mid);	//left recursion //take first sub-array and divide it to another sub-arrays
		devide_array(a,mid+1,j);  //right recursion //take other sub-array and divide it to another sub-arrays
		merge(a,i,mid,mid+1,j);	//merging of two sorted sub-arrays
	}
}

void merge(int a[],int i1,int j1,int i2,int j2) //i1=i, j1=mid, i2=mid+1, j2=j
{
	int temp[50];	//array used for merging
	int i,j,k;
	i=i1;	//beginning of the first sub-array
	j=i2;	//beginning of the second sub-array
	k=0;

	while(i<=j1 && j<=j2)	 //while start of sub-array smaller than end of sub-array in both sub-arrays.
	{
		if(a[i]<a[j]) //check if start of first sub-array smaller than start of second sub-array
			temp[k++]=a[i++]; //if true, start of first sub-array would be taken to temp-array
		else
			temp[k++]=a[j++]; //if start of first sub-array bigger than start of second sub-array,
                              //start of second sub-array would be taken to temp-array
	}

	while(i<=j1)	//copy remaining elements of the first list
		temp[k++]=a[i++];

	while(j<=j2)	//copy remaining elements of the second list
		temp[k++]=a[j++];

	//Transfer elements from temp[] back to a[]
	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}

int main()
{
	int a[100],n,i;

	printf("enter number of elements:");
	scanf("%i",&n);

	printf("enter array elements:");
	for(i=0;i<n;i++)
    scanf("%i",&a[i]);

	devide_array(a,0,n-1); //make i=0 to start from first number of array till the last number of array(j=(n-1)).

	printf("\n sorted array is: \n");
	for(i=0;i<n;i++)
    printf("%i ",a[i]);

	return 0;
}
