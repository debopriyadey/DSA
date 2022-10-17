#include <bits/stdc++.h>  
using namespace std;  
  
  
int minCoinsFunc(int coins[], int total_coins, int N)   
{  
        if (N == 0)   
        return 0;  
  
    int result = INT_MAX; 
    for (int i = 0; i < total_coins; i++) // run until availability of coins  
    {  
        if (coins[i] <= N) { // Add to the list of counting   
            int sub_res = 1 + minCoinsFunc(coins, total_coins, N - coins[i]); // add 1 due to the coin inclusion  
            // Check if result can minimize  
            if (sub_res < result)  
                result = sub_res;  
        }  
    }  
    return result;  
}  
  
int main()  
{  
    int coins[] = { 10, 25, 5 };  
    int Coin_sum = 30; //Money to be equivalent to entered coins 
    int totalCoins = 3; //Total number of coins  
    cout << "Minimum coins needed are " << minCoinsFunc(coins, totalCoins, Coin_sum);  
}  