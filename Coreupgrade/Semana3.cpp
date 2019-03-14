#include <iostream>
#include <cstdio> 
using namespace std;
int count=0,count1=0; 
// A function to merge the two half into a sorted data.
void Merge(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	cout<<"temp size: "<<high-low+1<<endl;
	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		//printf("(i=%d ,j=%d)\n",i,j);
		if (a[i] < a[j])
		{
			//printf("(a[i]=%d ,a[j]=%d)\n",a[i],a[j]);
			temp[k] = a[i];
			k++;
			i++;
			//cout<<"pass1"<<endl;
		}
		else
		{
			printf("(a[%d]=%d ,a[%d]=%d)\n",i,a[i],j,a[j]);
			temp[k] = a[j];
			k++;
			if((j-i)>1)
			{ 
				count=count+j-i-1;
			}	
			j++;
			if(count1>0)
			{
				count=count-count1;
			}	
			count++;
			count1++;
			printf("count is: %d\n",count);
			printf("count1 is: %d\n",count1);
			//cout<<"pass2"<<endl;
			//printf("(%d,%d)\n",a[i],a[j]);
		}
		//printf("(%d,%d)\n",a[i],a[j]);
	}
	count1=0;
	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		//printf("a[i]=%d\n",a[i]);
		temp[k] = a[i];
		k++;
		i++;
		//cout<<"pass4"<<endl;
	}
	/*
	for (i = 0; i < high-low+1; i++)
	{	
		cout<<"->"<<temp[i];
	}
	*/
	//cout<<endl;
	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		//printf("a[i]=%d\n",a[i]);
		temp[k] = a[j];
		k++;
		j++;
		//cout<<"pass5"<<endl;
	}
	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
	
	for (i = 0; i < 10; i++)
	{	
		cout<<"->"<<a[i];
	}
	cout<<endl;
	
}
// A function to split array into two parts.
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		//printf("i=%d   j=%d   k=%d\n",low,mid,high);
		MergeSort(a, low, mid);
		//printf("i=%d   j=%d   k=%d\n",low,mid,high);
		MergeSort(a, mid+1, high);
		//printf("low=%d   mid=%d   high=%d\n",low,mid,high);
		// Merge them to get sorted output.
		Merge(a, low, high, mid);
		
	}
	//cout<<"pass"<<endl;
}
int main()
{
	/*
	int n,i=0,elem[10000000];
	while(cin>>n)
	{
		scanf("%d",&elem[i]);
		i++;
	}
	*/	
	int n, i;
	//cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
	int arr[n];
	for(i = 0; i < n; i++)
	{
		//cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	} 
	MergeSort(arr, 0, n-1);
	//cout<<count<<endl;
	// Printing the sorted data.
	//cout<<"\nSorted Data ";
	//for (i = 0; i < n; i++)
		//cout<<"->"<<arr[i];
}