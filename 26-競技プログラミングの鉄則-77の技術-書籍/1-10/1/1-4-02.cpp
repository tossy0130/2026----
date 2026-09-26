#include <iostream>
using namespace std;

int main() {

    // 入力
    int N, K, ans = 0;
    cin >> N >> K;

    // 全探索 実行
    for(int x = 1; x <= N; x++) {
        for (int y = 1; y <= N; y++) {
            int z = K - x - y; // 2枚のカードで計算して、残り1枚を算出
            if(z >= 1 && z <= K) ans += 1;
        }
    }

    // 枚数 出力
    cout << ans << endl;
    return 0;

}
