#include <iostream> 
#include <stack>

using namespace std;

int main() {
    int n, x;
    stack <int> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (i == 0) {
            s.push(x);
        }
        if (i > 0) {
            if (x > s.top()) {
                s.push(x);
            }
        }
    }
    cout << s.size() << "\n";
    return 0;
}
