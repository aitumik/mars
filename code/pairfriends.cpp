// Given n friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up. 
//
#include <iostream>
using namespace std;


int countpair(int n)
{
  int dp[n+1];
  for(int i=0; i<n; i++) {
    if(i <=2) {
      dp[i] = i;
    } else {
      dp[i] = dp[i - 1] + (i - 1) * dp[i-2];
    }
  }

  return dp[n];
}

int main()
{
  int n = 4;
  cout << countpair(n) << endl;
  return 0;
}

