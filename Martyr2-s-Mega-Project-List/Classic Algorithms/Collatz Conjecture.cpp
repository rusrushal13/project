/*
Collatz Conjecture - Start with a number n > 1. Find the number of steps it takes to reach one using
the following process: If n is even, divide it by 2. If n is odd, multiply it by 3 and add 1.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{	ll n,count =0;
	cout<<"Enter an integer(Integer>1): ";
	try
	{cin>>n;
	}
	while(n>1)
	{	if(!(n&1))	n/=2;
		else		n =3*n+1;
		count++;
	}
	cout<<"Steps taken to Reach one: "<<count<<endl;
return 0;	
}