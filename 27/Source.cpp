#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int UserNum;

double Sum() 
{
	system("cls");
	double num;
	double answer = 0;
	while (true)
	{
		system("cls");
		cout << "Введите число: "; cin >> num;
		if (cin.fail()) 
		{
			cin.clear();
			cin.ignore();
			break;
		}
		else 
		{
			answer = num + answer;
		}
	}
	system("cls");
	cout << "Ответ: " << answer; cin >> num;
	return answer;
}

double subtraction() 
{
	system("cls");
	double num;
	double fnum;
	double answer;
	cout << "Введите число из которого вычитаем: "; cin >> fnum; answer = fnum;
	while (true)
	{
		system("cls");
		cout << "Введите число которое вычитаем: "; cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			break;
		}
		else
		{
			answer = answer - num;
		}
	}
	system("cls");
	cout << "Ответ: " << answer; cin >> num;
	return answer;
}

double multiplication()
{
	system("cls");
	double num;
	double answer = 1;
	while (true)
	{
		system("cls");
		cout << "Введите число для умножения: "; cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			break;
		}
		else
		{
			answer = num * answer;
		}
	}
	system("cls");
	cout << "Ответ: " << answer; cin >> num;
	return answer;
}

double division()
{
	system("cls");
	double num;
	double fnum;
	double answer;
	cout << "Введите число которое делим: "; cin >> fnum; answer = fnum;
	while (true)
	{
		system("cls");
		cout << "Введите число на которое делим: "; cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			break;
		}
		else
		{
			answer = answer / num;
		}
	}
	system("cls");
	cout << "Ответ: " << answer; cin >> num;
	return answer;
}

int multiplication_percent() 
{
	system("cls");
	int num;
	int fnum;
	int answer;
	cout << "Введите число которое делим: "; cin >> fnum; answer = fnum;
	while (true)
	{
		system("cls");
		cout << "Введите число на которое делим: "; cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			break;
		}
		else
		{
			answer = answer % num;
		}
	}
	system("cls");
	cout << "Ответ: " << answer; cin >> num;
	return answer;

}

double degree()
{
	system("cls");
	double num;
	double fnum;
	double answer = 0;
	cout << "Введите число: "; cin >> fnum;
		system("cls");
	cout << "Введите степень: "; cin >> num; answer = fnum;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore();
	}
	else
	{
		answer = pow(answer, num);
	}
	system("cls");
	cout << "Ответ: " << answer; cin >> num;
	return answer;

}

double square() 
{
	system("cls");
	double num;
	double fnum;
	double answer = 0;
	cout << "Введите число: "; cin >> fnum;
	system("cls");
	if (cin.fail())
	{
		cin.clear();
		cin.ignore();
	}
	else
	{
		answer = sqrt(fnum);
	}
	system("cls");
	cout << "Корень числа: " << fnum << " равен " << answer; cin >> num;
	return answer;
}

int main() {
	setlocale(LC_ALL, "RUS");

	cout << "\tКАЛЬКУЛЯТОР\n" << endl;
	cout << "1 | Сложить" << endl;
	cout << "2 | Вычитать" << endl; 
	cout << "3 | Умножать" << endl;
	cout << "4 | Делить" << endl;
	cout << "5 | Деление от остатка" << endl;
	cout << "6 | Степень" << endl;
	cout << "7 | Корень" << endl;
	cout << "8 | Куб" << endl;
	cout << "9 | Синус" << endl;
	cout << "10 | Косинус\n" << endl;
	cout << "Ввод |<  "; cin >> UserNum;

	switch (UserNum) {
	case 1:
		Sum();
		break;
	case 2:
		subtraction();
		break;
	case 3:
		multiplication();
		break;
	case 4:
		division();
		break;
	case 5:
		multiplication_percent();
		break;
	case 6:
		degree();
		break;
	case 7:
		square();
		break;
	case 8:
		break;
	case 9:
		break;
	case 10:
		break;
	}



	return 0;
};