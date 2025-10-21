#include <bits/stdc++.h>
#pragma GCC optimize("O3,Ofast,unroll-loops")
// #include "atcoder/all"

using namespace std;
auto rng = mt19937(random_device()());
auto rngl = mt19937_64(random_device()());

// Let's set a bit and flow!
// I came, I divided, I conquered!
// using namespace __gnu_cxx;
// using namespace __gnu_pbds;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<long double> nums(n + 1);
    for (auto &v: nums) cin >> v;

    long double ans = nums[n / 2];

    for (int i = 0; i <= n; i ++) {
        for (int j = 0; j <= n; j ++) {
            int wi = 2 * i - n, wj = 2 * j - n;
            if (wi < 0 && wj > 0) {
                ans = max(ans, (wj * nums[i] - wi * nums[j]) / (wj - wi));
            }
        }
    }

    cout << fixed << setprecision(15) << ans;

    return 0;
}