#include <iostream>
#include <vector>
using namespace std;

/*
全探索（1）
Liner Search

入力１
5 40
10 20 30 40 50

入力２
6 28
30 10 40 10 50 90

*/

int main(void){
    
    int N;
    int X;

    cin >> N;
    cin >> X;
    // cin >> N >> X  1行で書ける
    
    // 入力値の確認
    /*
    cout << "N = " << N << endl;
    cout << "X = " << X << endl;
    */
    
    // === 配列
    vector<int> A(N);
    
    bool flg = false; // 判定用
    
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
        
        if (A[i] == X) {
            flg = true;
        }
    }

    if(flg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    
    return 0;
    
}