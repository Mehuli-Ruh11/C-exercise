#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the superDigit function below.
int superDigit(string n, int k) {
    int sum=0;
    int m = stoi(n);
    while (m != 0)
    {
        sum += m % 10;
        m = m / 10;
    }
    sum=sum*k;
    while(sum/10!=0)
    {
      sum= superDigit(to_string(sum), 1);  
    }
return sum;
}
