/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	
	//rand num b/w 0 & 1
	for(int i=0; i<10; i++){
		cout << rand()%2 << endl;
	}
}
