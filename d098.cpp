#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		stringstream ss(s); //��string s ��ӥ�i�h 
		int sum = 0;
		string y;
		while (ss >> y){	//����(string y)��Ů檺�a�賣���}�� 
			stringstream sy(y);
			int c = 0;
			while (sy >> c){
				stringstream sx;
				sx << c;
				if (y==sx.str()){
					sum += c;
				}
			}
		}
		cout << sum << endl;
	}
} 
