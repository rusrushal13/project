//Sieve of Eratosthenes - 
//The sieve of Eratosthenes is one of the most efficient ways 
//to find all of the smaller primes (below 10 million or so).
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<bool> sieve(ll n)
{	ll i,p;
	vector<bool> prime(n+1,true);
	for(i =2;i*i<=n;++i)
		if(prime[i])
			for(p =i*2;p<=n;p+=i)
				prime[p] =0;
	return prime;
}
int main()
{	ll n,i,count =0;
	cout<<"Enter n: ";
	cin>>n;
	vector<bool> sieveoferathosthenes;
	sieveoferathosthenes =sieve(n);
	cout<<"\nPrimes under "<<n<<": ";
	for(i =2;i<sieveoferathosthenes.size();++i)
		if(sieveoferathosthenes[i])	
		{	cout<<i<<" ";	
			count++;
		}
	cout<<"\nNumber of Primes: "<<count;
return 0;	
}