#include<bits/stdc++.h>

using namespace std;

void SieveOfEratosthenes(int n){
	
	bool prime[n+1] = {true};
	memset(prime, true, sizeof(prime));
	for(int i=2; i*i<=n; i++)
	{
		if(prime[i]==true)
		{
			for(int j=i*i; j<=n; j+=i)
			{
				prime[j]= false;
			}
		}
	}
	// Print all prime numbers
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            cout << p << " ";
        }
    }
}
 
// Driver Code
int main()
{
    int n = 30;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}
