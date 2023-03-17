
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <list>
#include <iterator>
#include <string>
using namespace std;

class ListDoSomthing {

public:
	void full(list <int> listok) {

		cout << "list with numbers : ";

		for (int i = 0; i < 10; i++) {

			int a = 10 + rand() % 90;

			listok.push_back(a);
		}

		list <int> ::iterator ItListok;

		int max = 0;

		for (ItListok = listok.begin();ItListok != listok.end();ItListok++) {

			if (max <= *ItListok) {

				max = *ItListok;

			}

			cout << *ItListok << " ";

		}

		cout << endl << "max value : " << max;

	}
};

int main(void) {

	srand(time(NULL));

	list <int> listok;
	auto block = new ListDoSomthing();
	block->full(listok);




}

