#include <iostream>
using namespace std;

class Fraction
{
private://реализация - инкапсулированная часть класса !!!
	//поля класса fraction
	int top;
	int bot;
	int selection;
	int res;
	
public://интерфейс класса

	//методы класса fraction
	

	Fraction Result()
	{
		int choice;
		cout << "Меню выбора действий." << endl;
		cout << "1. Сложить дроби" << endl;
		cout << "2. Вычесть дроби" << endl;
		cout << "3. Умножить дроби" << endl;
		cout << "4. Поделить дроби" << endl;
		cout << "Что вы хотите сделать с этими дробями?" << endl;
		cin >> choice;

		if (choice == 1)
		{

		}

		else if (choice == 2)
		{

		}

		else if (choice == 3)
		{

		}

		else if (choice == 4)
		{

		}

		else
		cout << "Введено некоректное значение!" << endl;


	}

	void Print()
	{
		cout << top << endl << "-" << endl << bot << endl << endl;
	}
	void Init()
	{
		system("cls");
		cout << "Введите числитель: ";
		cin >> top;

		cout << "Введите знаменатель: ";
		cin >> bot;
	}

	void Add(Fraction1,)
	{
		
	};

	void Subtract()
	{

	};

	void Multiply()
	{

	};

	void Divide()
	{

	};



	
	
	
	/// методы аксессоры
	/*void SetX(int v)  //модификатор (сеттер)
	{
		if (v > 0)
		{
			x = v;
		}
	}
	void SetY(int v) //модификатор (сеттер)
	{
		if (y > 0)
		{
			y = v;
		}
	}

	int GetX() //инспектор (геттер)
	{
		return x;
	}
	int GetY() //инспектор (геттер)
	{
		return y;
	}
	void Add(int a)
	{
		x += a;
		y += a;
	}
	Point Sum(Point b)
	{
		Point rez;
		rez.x = x + b.x;
		rez.y = y + b.y;
		return rez;
	}*/

};

int main()
{
	setlocale(LC_ALL, "ru");
	Fraction Fraction1;
	Fraction Fraction2;
	Fraction1.Init();
	Fraction2.Init();
	system("cls");
	Fraction1.Print();
	Fraction2.Print();
	

	/*Point a;
	a.Init(10, 20);
	a.Print();
	a.Add(5);
	a.Print();
	Point b;
	b.Init(1, 2);
	a.Sum(b);
	Point rez = a.Sum(b);
	rez.Print();*/


}