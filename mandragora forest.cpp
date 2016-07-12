#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long H[100005];
int main() {
    
    int T;
    scanf("%d", &T);
    
    while(T--)
    {
        int N;
        scanf("%d", &N);
        
        for(int i=1; i<=N; i++)
            scanf("%lld", &H[i]);
        
        sort(H+1, H+1+N);
        
        for(int i=N-1; i>=1; i--)
            H[i] += H[i+1];
        
        long long ans = N;
        
        for(int i=1; i<=N; i++)
            ans = max(ans, H[i]*i);
        
        printf("%lld\n", ans);
    }
    
    return 0;
}

