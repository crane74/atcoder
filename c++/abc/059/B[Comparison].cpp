#include <bits/stdc++.h>

// REP macro
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i, n) for (ll i = n - 1; i >= 0; i--)
#define rrepd(i, n) for (ll i = n; i >= 1; i--)

// define short
#define pb push_back
#define mp make_pair
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()
#define YesNo(bool)        \
  if (bool) {              \
    cout << "Yes" << endl; \
  } else {                 \
    cout << "No" << endl;  \
  }

// alias
using ull = unsigned long long;
using ll = long long;

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  if (a.size() > b.size()) {
    cout << "GREATER" << endl;
  } else if (a.size() < b.size()) {
    cout << "LESS" << endl;
  } else {
    rep(i, a.size()) {
      if (a[i] > b[i]) {
        cout << "GREATER" << endl;
        return 0;
      } else if (a[i] < b[i]) {
        cout << "LESS" << endl;
        return 0;
      } else
        continue;
    }
    cout << "EQUAL" << endl;
  }
}