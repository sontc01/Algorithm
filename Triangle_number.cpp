#include <bits/stdc++.h>
using namespace std;

int Triangle(int x){
    int y = 2*x;
    int n = (int)sqrt(y);
    return (n*(n+1)==y) ? n:-1;
}

int main(){
	int x;
    while(true){
                cout << "\n Nap so am de dung chuong trinh x = " ;
                fflush(stdin);
                cin >> x;
                if(x<0) break;
                if (Triangle(x)>=0) cout << "YES";
                else cout << "NO";            
    }
    cout << "END";
    return 0;
}

