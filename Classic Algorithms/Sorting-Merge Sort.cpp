// Sorting - Merge Sort
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &v, int l, int m, int h)
{	int i, j, k, n1 =m-l+1, n2 =h-m;
	vector<int> Left(n1), Right(n2);
	for(i =0;i<n1;++i)
		Left[i] =v[i+l];
	for(j =0;j<n2;++j)
		Right[j] =v[m+1+j];
	i =0;	j =0;	k =l;
	while(i<n1 && j<n2)
	{	if(Left[i]<Right[j])
		{	v[k] =Left[i];
			k++;	i++;
		}
		else
		{	v[k] =Right[j];
			k++;	j++;
		}
	}
	while(i<n1)
	{	v[k] =Left[i];
		i++;	k++;
	}
	while(j<n2)
	{	v[k] =Right[j];
		j++;	k++;
	}
}
void mergesort(vector<int> &v, int low, int high)
{	if(low<high)
	{	int middle =low+(high-low)/2;
		mergesort(v, low, middle);
		mergesort(v, middle+1, high);
		merge(v, low, middle, high);
	}
}
int main()
{	int n,i;
	cout<<"\nEnter n: ";
	cin>>n;
	vector<int> v(n);
	cout<<"\nEnter Elements: ";
	for(int i =0;i<n;++i)
		cin>>v[i];
	mergesort(v, 0, n-1);
	cout<<"\nSorted Array: ";
	for(i =0;i<n;++i)
		cout<<v[i]<<" ";
return 0;
}