#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n;
vl ans;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  ans = vl{};

  for (auto i = 1; i <= n; ++i) {
    auto now = vl{n};
    auto x = i;
    auto j = 0;
    while (0 <= x) {
      now.push_back(x);

      x = now[j] - x;
      ++j;
    }

    if (ans.size() < now.size()) {
      ans = vl(now);
    }
  }

  cout << ans.size() << '\n';
  for (const auto& x : ans) {
    cout << x << ' ';
  }

  return 0;
}