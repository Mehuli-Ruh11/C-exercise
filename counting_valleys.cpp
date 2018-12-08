#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
  int val = 0, res = 0;
  char c;
  for (int i = 0; i< n;i++) {
    c=s[i];
    if (c == 'U')
      val++;
    else
      val--;
    if (val == 0 && c == 'U')
      res++;
  }
  return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
