#include <iostream>
using namespace std;

int main(){
    int n, cnt=0, count=0;
    int a=100, b=100;
    cin >> n;
    int m = n-1;
    do{
        int x;
        int y;
        cin >> x >> y;
        if(a==x) cnt++;
        if(b==y) count++;
        a = x;
        b = y;
    }while(m--);
   	cout<<cnt<<" "<<count<<endl;
    if(cnt==n-1 || count==n-1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
