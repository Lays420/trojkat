#define USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <stdio.h>
int wybor, x, y, z;
using namespace std;

int main()
{
label1:
	cout << "Funkcjie trójkąta\n";
	cout << "Wybierz jedną z opcji\n" << endl;
	cout << "[1]obwód [2]pole [3]funkcje [4]wzory [5]tabela [6]oczyść ekran [7]opuść\n" << endl;
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		goto label2; //obwod
	case 2:
		goto label3; //pole
	case 3:
		goto label4; //funkcje
	case 4:
		goto label5; //wzory
	}
label2:

}