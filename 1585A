#include <iostream>
#include <vector>
 
int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::vector<int> a;
        while (n--) {
            int x;
            std::cin >> x;
            a.push_back(x);
        }
        int res = 1;
        int fl = 1;
        a[0] == 1 ? res += 1 : res;;
        for (int i = 1; i < a.size(); i++) {
            if (a[i] == 1 && a[i-1] == 1) {
                res += 5;
            } else if (a[i] == 1) {
                res += 1;
            } else if (a[i] == 0 && a[i-1] == 0) {
                fl = 0;
                break;
            }
        }
        fl == 1 ? std::cout << res << '\n' : std::cout << -1 << '\n';
    }
 
}
