#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    int n=a.size();
    
    vector<int> res(n);
    for(int i=0;i<n;i++)
        {
            res[(i-d+n)%n]=a[i];
            
        }  
return res;

}
