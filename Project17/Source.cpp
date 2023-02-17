/*#include <iostream>
#include <Windows.h>
#include <time.h>
#include <stdalign.h>

using namespace std;
int main()

/*


	{
		SetConsoleOutputCP(1251);
		SetConsoleCP(1251);


		long deley = 400;
		for (int i = 1; i <= 100000000000000; i++)
		{
			cout << "a";
			Sleep(deley);
		}
	}

/Написати програму, яка виводить на екран
лінію заданим символом, вертикальну або горизонтальну, причому лінія може виводитися швидко, нормально
і повільно.Спілкування з користувачем організувати
через меню.
{
	char sim;
	int a;
	int b;
	do
	{


		cout << "pro ved ch sim\n";
		cin >> a;
		cout << "ved akak lin 1- ,2|";
		cin >> b;
		cout << "ved simvol";
		cin >> sim;
		switch (a)
		{
		case 1:
			while (a != 0)
			{
				cout << sim << "\n";
				a--;
			}
			break;
		case 2:
			while (a != 0)
			{
				cout << sim;
				a--;
			}
			break;
		default:
			cout << "ochibka\n";
		}



	} while (a == 1);
}


{
	double mas[12];
	double min, max;
	for (int i = 0; i < 12; i++) 
	{
		cin >> mas[i];
	}
	min = mas[0];
	max = mas[0];
	for (int i = 1; i < 12; i++)
	{
		if (mas[i] > max) { max = mas[i]; }
		if (mas[i] < min) { min = mas[i]; }
	}
	
}
*/
#include <iostream>

#include <cstdlib>

#include <time.h>

using namespace std;

void randarr(float* arr, int n) {

	for (int i = 0; i < n; i++) {

		arr[i] = rand() % 10 - 5;

	}

}

void printarr(float* arr, int n) {

	for (int i = 0; i < n; i++) {

		cout << arr[i] << " ";

	}

}

void sumnegative(float* arr, int n) {

	float sumneg = 0;

	for (int i = 0; i < n; i++) {

		if (arr[i] < 0)

			sumneg += arr[i];

	}

	cout << "Сума вiд'ємних елементiв = " << sumneg << endl;

}



void summintomax(float* arr, int n) {

	int max = 0, min = 0, p = 1;

	for (int i = 1; i < n; i++) {

		if (arr[i] < arr[min])

			min = i;

		if (arr[i] > arr[max])

			max = i;

	}

	for (int i = max + 1; i < min; i++)

		p *= arr[i];

	cout << "Сума елементiв мiж min та max = " << p << endl;

}

void sumpair(float* arr, int n) {

	int sumpairelements = arr[1];

	for (int i = 1; i < n; i++) {

		if (i % 2 != 0) {

			sumpairelements *= arr[i];

		}

	}

	cout << "Сума елементiв на парних мiсцях = " << sumpairelements << endl;

}

void sumnegtoneg(float* arr, int n) {

	int sum = 0, acc = 0;

	bool started = false;

	for (int i = 0; i < n; i++) {

		if (arr[i] < 0) {

			if (!started) {

				acc = 0;

				started = true;

			}

			else {

				sum += acc;

				acc = arr[i];

			}

		}

		else

			acc += arr[i];

	}

	cout << sum << endl;

}

int main() {

	srand(time(NULL));

	setlocale(LC_ALL, "Ukrainian");

	int n;

	cout << "Введiть кiлькiсть елементiв масиву: ";

	cin >> n;

	float* arr = new float[n];

	randarr(arr, n);

	cout << "Масив :" << endl;

	printarr(arr, n);

	cout << "\nЗнаходимо суму вiд'ємних елементiв..." << endl;

	sumnegative(arr, n);

	cout << "\nЗнаходимо добуток елементiв мiж min i max..." << endl;

	summintomax(arr, n);

	cout << "\nЗнаходимо добуток елементiв з парними номерами..." << endl;

	sumpair(arr, n);

	cout << "\nЗнаходимо добуток елементiв мiж першим i останнiм вiд'ємним елементом..." << endl;

	sumnegtoneg(arr, n);

	delete[] arr;

	return 0;

}