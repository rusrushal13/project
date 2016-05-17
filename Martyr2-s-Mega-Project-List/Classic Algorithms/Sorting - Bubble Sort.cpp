// Sorting - Bubble Sort
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
template<class T>
void BubbleSort(vector<T> &v)
{	for(T i=0;i<v.size()-1;++i)
	{	for(T j=i+1;j<v.size();++j)
		{	if(v[i]>v[j])
			{	T temp =v[i];
				v[i] =v[j];
				v[j] =temp;
			}	
		}
	}
}

int main()
{	ll n,x;
	cout<<"Enter no of integers: ";
	cin>>n;
	vector<ll> v(n);
	cout<<"\nEnter elements: ";
	for(ll i=0;i<n;++i)
		cin>>v[i];	
	BubbleSort(v);
	cout<<"\nSorted Array: ";
	for(ll i=0;i<n;++i)
		cout<<v[i]<<" ";
return 0;	
}