#include<bits/stdc++.h>
using namespace std;

int minsubarraysum(int a[], int n) {
    int min_sum = INT_MAX;
    int curr_sum = 0;
    for (int i = 0 ; i < n; i++) {
        curr_sum = curr_sum + a[i];
        if (curr_sum < min_sum)
            min_sum = curr_sum;
        if (curr_sum > 0)
            curr_sum  = 0;
    }
    return min_sum;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int min_sum = minsubarraysum(a, n);
    int ans = sum + (min_sum * (-2));
    cout << ans;
}