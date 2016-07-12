#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, min=1000, x=-1;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
       cin >> a[i];
       for(int j=0; j!=i; j++){
           if(a[i] == a[j] && (i-j) < min ){
               min = i-j;
               x = 1;
           }
       }
    }
    
    if(x==1) cout << min;
    else cout << x;
    return 0;
}

