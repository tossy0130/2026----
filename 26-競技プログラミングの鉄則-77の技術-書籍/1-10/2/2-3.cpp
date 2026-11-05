/**
 * 
 * 
入力値

5 5
2 0 0 5 1
1 0 3 0 0
0 8 5 0 2
4 1 0 0 6
0 9 2 7 0
2
2 2 4 5
1 1 5 5
 * 
 * 
 */

 #include <iostream>
using namespace std;
int main(void){
    // Your code here!
        int arr1[109][109], arr2[109] , H, W, Q, ans2 = 0;
        
        cin >> H >> W;
        
        for(int i = 0; i < H; i++) {
            for(int j = 0; j < W; j++) {
                cin >> arr1[i][j];
            }
        }
        
        cin >> Q;
        
        int a = 0;
        while(a < Q) {
            
            for(int j = 0; j < 4; j++) {
                cin >> arr2[j];
                
                ans2 += arr2[j]; // 累積
            }
            
            
            a+=1;
            
        }
        
        cout << ans2;
        
        
        
}
