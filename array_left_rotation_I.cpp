#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    int n=a.size();
    int i=1;
    vector<int> res(n);
    for(int k=0;k<n;k++)
    {
        res[k]=a[k];
    }
    while(i<=d)
    {
        int temp=res[0];
        
        for(int j=1;j<n;j++)
        {
            res[j-1]=res[j];
        }
        res[n-1]=temp;
        i++;
    }
return res;

}
