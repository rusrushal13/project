/*Find PI to the Nth Digit - 
Enter a number and have the program generate PI up to 
that many decimal places. Keep a limit to how far the 
program will go.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{	ll n;
	cout<<"Enter n(max 51): ";
	cin>>n;
	cout<<fixed<<setprecision(n)<<4*(4*atan(1.0/5.0) - atan(1.0/239.0));
return 0;	
}