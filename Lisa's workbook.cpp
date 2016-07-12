#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int ch, ppg;
	int count=0, pages, no_page;
    cin >> ch >> ppg;
    int problem[ch], ch_begin[ch]; 
    ch_begin[0] = 1;
    for(int i=0; i<ch; i++) cin >> problem[i];
   	for(int i=1; i<ch; i++){
    	if(problem[i-1]%ppg==0) no_page = problem[i-1]/ppg;
    	else no_page = (problem[i-1]/ppg) + 1;
        ch_begin[i] = ch_begin[i-1] + no_page;    
	}
    for(int i=0; i<ch; i++){
        pages = ch_begin[i];
        if(ch_begin[i] > problem[i]) continue;
        for(int j=1; j<=problem[i]; j++){
            if(j==pages) count++;
            if(j%ppg==0) pages++;
        }
    }
    cout <<count;
    return 0;
}

