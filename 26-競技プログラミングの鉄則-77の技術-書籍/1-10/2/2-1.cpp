#include <iostream>

using namespace std;

int N, Q, A[109], L[109], R[109], RUI[109];

/*

【入力値】
15 3
62 65 41 13 20 11 18 44 53 12 18 17 14 10 39
4 13
3 10
2 15

*/

int main(void) {

    // 値取得
    cin >> N >> Q;

    // 値取得
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // 値取得
    for(int i = 0; i < Q; i++) {
        cin >> L[i];
        cin >> R[i];
    }

    // 累積和の計算
    RUI[0] = A[0];
    for(int i = 1; i < N; i++) {
     //   cout << RUI[i - 1] << endl;  // テスト出力
        RUI[i] = RUI[i - 1] + A[i];
    }
    
    // 結果
    for(int j = 0; j < Q; j++) {
        int left  = L[j] - 1;
        int right = R[j] - 1;

        if(left == 0) {
            cout << RUI[right] << endl; 
        } else {
            cout << RUI[right] - RUI[left - 1] << endl;
        }
        
    }


}