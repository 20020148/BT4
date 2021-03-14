#include<iostream>
using namespace std;

bool canBang(int a[], int n, int T) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < T; i++){
        sum1 += a[i];
    }
    for (int i = T + 1; i < n; i++){
        sum2 += a[i];
    }
    if (sum1 == sum2){
        return true;
    }
    if (T == 0 && sum2 == 0){
        return true;
        }
    if (T == (n - 1) && sum1 == 0){
        return true;
    }
    return false;
}

int main() {
    int x;
    cin >> x;
    while (x--) {
        int a[10000];
        int n, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            if (canBang(a, n, i)) {
                count++;
                break;
            }
        }
        if (count != 0)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
