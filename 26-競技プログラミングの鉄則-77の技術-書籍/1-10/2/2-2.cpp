#include <iostream>

using namespace std;

int D, N, L[100009], R[100009], Ans[100009], B[100009];


int main(void) {

    cin >> D;
    cin >> N;

    for(int i = 0; i < N; i++) {

        cin >> L[i];
        cin >> R[i];

        // 日付を 0 始まりの index に変換
        L[i]--;
        R[i]--;

    }

    // デバッグ出力
    /*
    1 2
    2 5
    4 6
    2 6
    0 4
    */

   /*
    for(int i = 0; i < 5; i++) {
        cout << L[i];
        cout << R[i] << endl;
    }
    */

    // 各参加者の増減
    for(int i = 0; i < N; i++) {

        B[L[i]] += 1;     // 参加開始日に１人増える
        B[R[i] + 1] -= 1; // 最終参加日の翌日に1人減る 
    }

    // 累積和で求める
    Ans[0] = B[0]; // 1日目
             // B = {1, 1, 2, -1, 1, -1, -1, -2};
    
    for (int i = 1; i < D; i++) {

        Ans[i] = Ans[i - 1] + B[i];
       // cout << Ans[i];
    }

    // 回答
    for (int i = 0; i < D; i++) {
        cout << Ans[i] << endl;
    }

    

}