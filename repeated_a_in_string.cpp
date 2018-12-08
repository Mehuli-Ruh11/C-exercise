#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
int p=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='a')
    {
        p++;
    }
}
long k=floor(n/s.size());
long res=k*p;
int r=n%s.size();
for(int j=0;j<r;j++)
{
  if (s[j] == 'a') {
    res++;
  }
}
return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
