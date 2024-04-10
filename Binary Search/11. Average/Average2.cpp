#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int n, k;
vector<int> a;

// Hàm kiểm tra xem có đoạn nào có trung bình lớn hơn hoặc bằng 'mid' hay không
bool is_possible(double mid) {
    vector<double> prefix_sum(n + 1);
    double min_sum = 0;

    for (int i = 1; i <= n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i - 1] - mid;

        if (i >= k) {
            min_sum = min(min_sum, prefix_sum[i - k]);
        }

        if (i >= k && prefix_sum[i] - min_sum >= 0) {
            return true;
        }
    }

    return false;
}

// Tìm kiếm nhị phân để tìm trung bình lớn nhất
double max_average_segment() {
    double left = *min_element(a.begin(), a.end());
    double right = *max_element(a.begin(), a.end());
    double eps = 1e-6;

    while (right - left > eps) {
        double mid = (left + right) / 2;
        if (is_possible(mid)) {
            left = mid;
        } else {
            right = mid;
        }
    }

    return left;
}

int main() {
    freopen("Average.inp", "r", stdin);
    freopen("Average.out", "w", stdout);
    cin >> n >> k;
    a.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << fixed << setprecision(3) << max_average_segment() << endl;

    return 0;
}
