#include <iostream>
using namespace std;

int N, K, M, q[109];
int cnt = 0;
int numOK = 0;
bool flg = false;

int main(void){
    
    cin >> N;
    cin >> K >> M;
    
    for(int i = 0; i < N; i++) {
    
        cin >> q[i];
        
        if(q[i] > K) {
            cnt++;
        }
        
        numOK += q[i];
        
        // デバッグ出力
     //   cout << numOK << endl;
        
        if(i == N - 1) {
            if(numOK > M) {
                flg = true;
            }
        }
        
    }
    
    if(cnt >= 3 && flg == true) {
        cout << "silver";
    } else {
        cout << "bronze";
    }
   
    return 0;
}