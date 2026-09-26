#include <iostream>
using namespace std;

int N, K, P[109], Q[109];
bool HanteiFlg = false;

int main() {

    // 入力値取得
    cin >> N >> K; 

    // 入力値取得
    for(int i = 0; i < N; i++) {
        cin >> P[i];
        cin >> Q[i];
    }

    // 比較
    for(int i = N; i < N; i++) {

        for(int j = N; j < N; j++) {

            if(K == (P[i] + Q[j])) {
                HanteiFlg = true;
            }

        }

    }

    // 結果出力
    if(HanteiFlg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;

}