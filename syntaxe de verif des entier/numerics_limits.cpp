

#include <iostream>
#include <limits>

using namespace std;

int main() {

	double nombre;


	while (true) {

		cout << "entrer le nombre " << endl;
		cin >> nombre;

		if (cin.fail()) {

			cout << "la valeur entrer n'est pas correct" << endl;

			cin.clear();

			cin.ignore(numeric_limits<streamsize>::max(), '\n');


		}
		else
		{
			break;
		}

	
	}
	
	cout << "le nombre est:" << nombre << endl;

	return 0;


}

