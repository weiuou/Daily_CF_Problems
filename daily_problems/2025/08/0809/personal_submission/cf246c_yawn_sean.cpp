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

    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (auto &v: nums)
        cin >> v;
    
    sort(nums.rbegin(), nums.rend());

    for (int i = 0; i < n; i ++) {
        for (int j = i; j < n; j ++) {
    
            cout << i + 1 << ' ';
            for (int k = 0; k < i; k ++) cout << nums[k] << ' ';
            cout << nums[j] << '\n';

            if (--k == 0) return 0;
        }
    }

    return 0;
}