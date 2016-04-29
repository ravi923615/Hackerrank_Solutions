 #include <iostream>
    #include <algorithm>

    using namespace std;

    const int MAXN = 100000 + 5;

    long long a[MAXN], x, y, ret;
    int n, qn;

    int main(int argc, const char * argv[]) {
        ios_base::sync_with_stdio(false);
        cin >> n >> qn;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] = a[i] * a[i];
        }
        sort(a + 1, a + n + 1);
        reverse(a + 1, a + n + 1);
        while (qn--) {
            cin >> x >> y;
            long long dist = x * x + y * y;
            if (a[1] < dist)
                continue;
            int l = 1, r = n, mid;
            while (l < r) {
                mid = (l + r + 1) / 2;
                if (a[mid] >= dist)
                    l = mid;
                else
                    r = mid - 1;
            }
            ret += l;
        }
        cout << ret << endl;
        return 0;
    }