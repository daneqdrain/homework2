#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "ru");
	
	int number = 0, digit1 = 0, digit2 = 0, digit3 = 0, digit4 = 0, digit5 = 0, digit6 = 0, summa1 = 0, summa2 = 0;

	std::cout << "-------������ 1-------";
	std::cout << "\n������� ����� ������������� �����: ";
	std::cin >> number;

	if (number < 100000 || number > 999999)
	{
		std::cerr << "Error! ���� ����� �� ������������";
		return 0;
	}

	digit1 = number / 100000; 
	digit2 = (number / 10000) % 10; 
	digit3 = (number / 1000) % 10; 
	digit4 = (number / 100) % 10; 
	digit5 = (number / 10) % 10; 
	digit6 = number % 10;

	summa1 = digit1 + digit2 + digit3;
	summa2 = digit4 + digit5 + digit6;

	if (summa1 == summa2)
	{
		std::cout << "����������! ���� ����� ����������!";
	}
	else
	{
		std::cout << "���� ����� �� �������� ����������!";
	}

	std::cout << "\n\n-------������ 2-------";

	std::cout << "\n������� �������������e �����: ";
	std::cin >> number;

	if (number < 999 || number > 9999)
	{
		std::cerr << "Error! ���� ����� �� ��������������";
		return 0;
	}

	digit1 = number / 1000;
	digit2 = (number / 100) % 10;
	digit3 = (number / 10) % 10;
	digit4 = number % 10;

	std::cout << digit2 << digit1 << digit4 << digit3;

	std::cout << "\n\n-------������ 3-------";

	int number2[7]{};
	int maxnumber = -2147483647;

	std::cout << "'\n������� 7 ����� �����: ";

	for (int i = 0; i < 7; i++)
	{
		std::cin >> number2[i];
	}
	for (int i = 0; i < 7; i++)
	{
		if (number2[i] > maxnumber)
		{
			maxnumber = number2[i];
		}
	}
	std::cout << "������������ �����: " << maxnumber;
}