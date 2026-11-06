#include <iostream>
using namespace std;
int main(void){
   
    // ==== 入力値
    /**
     * 
     16
     1 1 2 2 1 2 2 2 2 2 1 1 2 1 1 2
     * 
     */

    int N, arr1[109], num1 = 0;
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> arr1[i];
        
     //   cout << arr1[i];
    }
    
    for(int i = 0; i < N; i++) 
    {
        // === 判定箇所 === 
        if((arr1[i] == 1) && (arr1[i + 1] == 1) && (arr1[i + 2] == 2)) 
        {
            num1 += 1;
        }
    }
    
    cout << num1;
   
    return 0;
}