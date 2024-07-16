// Lam quen voi Input file 

#include <bits/stdc++.h>
using namespace std;
const char *FN = "NUM.INP";

int Hexagon(long long x){
	if(x==0) return 0;
	if(x<0) return -1;
	double n = (1+sqrt(1+8*x))/4;
	return (n==(int)n) ? (int)n : -1;
}

void run(){
	ifstream f(FN);
	if (f.fail()){
	cerr << "\n Khong mo dc INPUT file" << FN;
	exit(1);
	}	
	long long x;
	while(1){
		f >> x; // shifting f components to x
		if(x<0) break;
		int n = Hexagon(x);
		cout << "\n H("<<x<<") = "<<n<< ((n>-1)?" La so Hexagon." : " Khong phai so Hexagon.");
	}
	f.close();
}


int main(){
	run();
	cout << "\n End";
	return 0;
}


