// LabaAbstractVirtual.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;



	
	// абстрактный класс. Класс оружие 
	class Weapon
	{
	public:
		//чисто виртуальная функция 
		virtual void Shoot() = 0;

	};
	// класс пистолет 
	class Gun : public Weapon
	{
	public:
		void Shoot() override
		{
			cout<< "BANG!"<< endl;
		}
	};

	//класс пистолет-пулемёт
	class SubmachineGun :public Gun
	{
	public:
		void Shoot() override
		{
			cout << "BANG! BANG! BANG!"<< endl;
		}
	};

	//класс базука 
	class Bazooka :public Weapon
	{
	public:
		void Shoot() override
		{
			cout << "BADABUB!!!" << endl;
		}
	};

	// класс нож
	class Knife :public Weapon
	{
	public:
		void Shoot() override
		{
			cout<< "VJUH!!!"<< endl;
		}

	};

	// класс игрок 
	class Player
	{
	public:
		void Shoot(Weapon *weapon)
		{
			weapon->Shoot();
		}
	};

	int main()
	{
		setlocale(LC_ALL, "ru");
		int g;
		cout << "Хотите начать игру?" << endl;
		cout << "Да? Нажмите единицу" << endl;
		cin >> g;
		while (g != 1)
		{
			cin >> g;
		}

		cout << "Что именно вы хотите выбрать" << endl;
		cout << "1. Пистолет?" << endl;
		cout << "2. Пистолет-пулемёт?" << endl;
		cout << "3. Базуку?" << endl;
		cout << "4. Нож?" << endl;
		int i;
		Player player;
		cin >> i;
		if (i == 1)
		{
			Gun gun;
			player.Shoot(&gun);

		}
		if (i == 2)
		{
			SubmachineGun machinegun;
			player.Shoot(&machinegun);

		}
		if (i == 3)
		{
			Bazooka bazooka;
			player.Shoot(&bazooka);

		}
		if (i == 4)
		{

			Knife knife;
			player.Shoot(&knife);

		}

		return 0;
		system("pause");
	}

