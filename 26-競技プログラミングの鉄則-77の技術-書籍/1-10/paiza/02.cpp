#include <iostream>
using namespace std;

int H, W, X[109][109], Q, A[109];

int main(void){
    // Your code here!
    
    int ans = 0;
    
    cin >> H >> W;
    
    for (int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> X[i][j];
            
        }
    }
    
    cin >> Q;
    
    // ===　Q 以下 の累積和
    for(int i = 0; i < Q; i++) {
      
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            
            cout << a << b << c << d << endl;
            ans += a + b + c + d;
        
    }
    
    cout << ans;
    
}
