#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maxSubsetSum function below.
int maxSubsetSum(vector<int> arr) {
    int n=arr.size();
    int max = arr[0]; 
  int count = 0; 
  int count_new; 
  int i; 
  
  for (i = 1; i < n; i++) 
  { 
     count_new = (max > count)? max: count; 
     max = count + arr[i]; 
     count = count_new; 
  } 
 
   return ((max > count)? max : count); 
}
