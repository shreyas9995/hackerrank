#include<iostream>
using namespace std;

int main()
{
	int a[5][5]={0}, i, j;

	for(i=0; i<5; i++){
		for(j=0; j<=i; j++)
			if(j==0) a[i][0] = 1; 
			else a[i][j] = a[i-1][j-1] + a[i-1][j];	
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<=i; j++){
			cout<<a[i][j] << " ";
		}
		cout<<endl;
	}
return 0;
}
