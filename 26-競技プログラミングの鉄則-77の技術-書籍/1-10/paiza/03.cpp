#include <iostream>
#include <cmath>

using namespace std;
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int N,nbox = 0,d1[109],ans;
    
    cin >> N;
    
    for(int i = 0; i < N; i++) 
    {
        cin >> d1[i];
        nbox += d1[i]; // 総数
    }
    
    ans = (int)ceil((double)nbox / N); // 切り上げ
    
    cout << ans;
    
    return 0;
}

