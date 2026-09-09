#include <iostream>
using namespace std;

int N;

int main() {

    cin >> N;

    // 上の桁から
    for (int x = 9; x >= 0; x--) {
        
        // ※  右ビットシフト演算子
        int wari = (1 << x); // 2　の x 乗　
        cout << (N / wari) % 2; // 0 または、 1 をいれる
        
    }
    
    cout << endl;
    return 0;

}

