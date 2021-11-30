// Тема 6 Задание 5 Яковлев21Д 
// Найти номер первого элемента, который больше 
//

#include <iostream>
using namespace std;

int length;
int* arr;

void initLength();
void fillArray();
int findNumOne(int* arr);
void deleteArray();

int main()
{

	setlocale(LC_ALL, "russian");

	initLength();
	fillArray();
	cout << "Номер первого числа, больше единицы (если считать от единицы): " << findNumOne(arr);
	deleteArray();
}

void initLength()
{
	cout << "Введите длину массива: ";
	cin >> length;
}

void fillArray()
{
	cout << endl << "Массив заполняется...";
	cout << endl << "Числа массива:";
	arr = new int[length];

	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << " ";
	}
}

int findNumOne(int* arr)
{
	int firstOne = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] > 1)
		{
			firstOne = i + 1;
			break;
		}
	}
	return firstOne;
}

void deleteArray()
{
	delete[] arr;
	cout << "\nМассив удалён!";
}