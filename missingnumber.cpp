#include<bits/stdc++.h>
using namespace std;

// Recursive Function
int minCoins(int coins[], int m, int N)
{
  // base case
  if (N == 0)
    return 0;

  // Initialize result
  int res = INT_MAX;

  // Try every coin that has smaller value than m
  for (int i=0; i<m; i++)
  {
    if (coins[i] <= N)
    {
      int sub_res = 1 + minCoins(coins, m, N-coins[i]);
      // see if result can minimized
      if (sub_res < res)
        res = sub_res;
    }
  }
  return res;
}

int main() {
  int sum ;
  int coins[sum];
  cout<<"Enter total coins: ";
  int total_coins = 5;

  cout<<"Enter Value: ";
  cin>>sum;
  for(int i = 0;i<total_coins;i++)
  {

      cin>>coins[i];
  }

  cout << minCoins(coins,total_coins,sum);
}
