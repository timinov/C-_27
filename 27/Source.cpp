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
		cout << "������� �����: "; cin >> num;
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
	cout << "�����: " << answer; cin >> num;
	return answer;
}

double subtraction() 
{
	system("cls");
	double num;
	double fnum;
	double answer;
	cout << "������� ����� �� �������� ��������: "; cin >> fnum; answer = fnum;
	while (true)
	{
		system("cls");
		cout << "������� ����� ������� ��������: "; cin >> num;
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
	cout << "�����: " << answer; cin >> num;
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
		cout << "������� ����� ��� ���������: "; cin >> num;
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
	cout << "�����: " << answer; cin >> num;
	return answer;
}

double division()
{
	system("cls");
	double num;
	double fnum;
	double answer;
	cout << "������� ����� ������� �����: "; cin >> fnum; answer = fnum;
	while (true)
	{
		system("cls");
		cout << "������� ����� �� ������� �����: "; cin >> num;
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
	cout << "�����: " << answer; cin >> num;
	return answer;
}

int multiplication_percent() 
{
	system("cls");
	int num;
	int fnum;
	int answer;
	cout << "������� ����� ������� �����: "; cin >> fnum; answer = fnum;
	while (true)
	{
		system("cls");
		cout << "������� ����� �� ������� �����: "; cin >> num;
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
	cout << "�����: " << answer; cin >> num;
	return answer;

}

double degree()
{
	system("cls");
	double num;
	double fnum;
	double answer = 0;
	cout << "������� �����: "; cin >> fnum;
		system("cls");
	cout << "������� �������: "; cin >> num; answer = fnum;
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
	cout << "�����: " << answer; cin >> num;
	return answer;

}

double square() 
{
	system("cls");
	double num;
	double fnum;
	double answer = 0;
	cout << "������� �����: "; cin >> fnum;
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
	cout << "������ �����: " << fnum << " ����� " << answer; cin >> num;
	return answer;
}

double degree3()
{
	system("cls");
	double fnum;
	double answer = 0;
	cout << "������� �����: "; cin >> fnum;
	system("cls");
	if (cin.fail())
	{
		cin.clear();
		cin.ignore();
	}
	else
	{
		answer = pow(fnum, 3);
	}
	system("cls");
	cout << "�����: " << answer; cin >> fnum;
	return answer;
}

double sinus() 
{
	system("cls");
	double num;
	double answer = 0;
	cout << "������� �����: "; cin >> num;
	system("cls");
	if (cin.fail())
	{
		cin.clear();
		cin.ignore();
	}
	else
	{
		answer = sin(num);
	}
	system("cls");
	cout << "�����: " << answer; cin >> num;
	return answer;
}

double cosinus()
{
	system("cls");
	double num;
	double answer = 0;
	cout << "������� �����: "; cin >> num;
	system("cls");
	if (cin.fail())
	{
		cin.clear();
		cin.ignore();
	}
	else
	{
		answer = cos(num);
	}
	system("cls");
	cout << "�����: " << answer; cin >> num;
	return answer;
}


int main() {
	setlocale(LC_ALL, "RUS");

	cout << "\t�����������\n" << endl;
	cout << "1  | �������" << endl;
	cout << "2  | ��������" << endl; 
	cout << "3  | ��������" << endl;
	cout << "4  | ������" << endl;
	cout << "5  | ������� �� �������" << endl;
	cout << "6  | �������" << endl;
	cout << "7  | ������" << endl;
	cout << "8  | ���" << endl;
	cout << "9  | �����" << endl;
	cout << "10 | �������\n" << endl;
	cout << "���� |<  "; cin >> UserNum;

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
		degree3();
		break;
	case 9:
		sinus();
		break;
	case 10:
		cosinus();
		break;
	}



	return 0;
};