#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){

	srand(time(NULL));
	int random = 1 + rand() % 100; // Número aleatorio entre 1 y 100
	cout<<random;
	return 0;
	
}

