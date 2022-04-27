# include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int dz = 0;

	while (dz < 5) {
		cout << "Введите № задания (1-4)" << endl; cin >> dz;
		cout << endl;

		system("cls");

		switch (dz)
		{
		case 1: {
			cout << "Задание № 1." << endl;
			cout << "Пользователь вводит с клавиатуры целое шестизначное число." << endl;
			cout << "Написать программу, которая определяет, является ли введенное число - счастливым(если сумма первых трех цифр равно сумме последних трех)." << endl;
			cout << "Если пользователь ввел не шестизначное число - сообщите об ошибке." << endl;

			int number = 0;
			cout << "Введите 6-значное число: "; cin >> number;

			if (number < 1000000 && number>99999) {



				int number_6;
				int number_5;
				int number_4;
				int number_3;
				int number_2;
				int number_1;

				//552332=5 * 100 000 + 5 * 10 000 + 2 * 1 000 + 3 * 100 + 3 * 10 + 2

				number_6 = number / 100000;//552332/100000=5 
				//cout << number_6 << endl;

				number_5 = number / 10000 % 10;//552332/10000=55%10=5
				//cout << number_5 << endl;

				number_4 = number / 1000 % 10;
				//cout << number_4 << endl;

				number_3 = number / 100 % 10;
				//cout << number_3 << endl;

				number_2 = number / 10 % 10;
				//cout << number_2 << endl;

				number_1 = number % 10;
				//cout << number_1 << endl;
				cout << endl;

				int sum_left;
				int sum_right;

				sum_left = number_6 + number_5 + number_4;
				sum_right = number_3 + number_2 + number_1;

				cout << "Сумма первых трех чисел - " << sum_left << endl;
				cout << "Сумма последних трех чисел - " << sum_right << endl;

				if (sum_left == sum_right)	cout << "Поздравляем! У вас счастливый билетик! :-)" << endl;
				else cout << "Введенное число не является счастливым" << endl;
				cout << endl;
			}

			else cerr << "Ошибка. Введите 6-тизначное число" << endl;
		}

			  break;

		case 2: {
			cout << "Задание № 2." << endl;
			cout << "Пользотватель вводит 4 - значное число." << endl;
			cout << "Необходимо поменять в этом числе 1 и 2 цифры, а так же 3 и 4 цифры." << endl;
			cout << "Если пользователь вводит не четырехзначное число - вывести сообщение об ошибке." << endl;

			int number = 0;
			cout << "Введите 4-значное число - "; cin >> number;

			if (number / 1000 <= 9 && number / 1000 > 0)
			{
				int number_4;
				int number_3;
				int number_2;
				int number_1;

				number_4 = number / 1000;
				//cout << number_4<<endl;

				number_3 = number / 100 % 10;
				//cout << number_3 << endl;

				number_2 = number / 10 % 10;
				//cout << number_2 << endl;

				number_1 = number % 10;
				//cout << number_1 << endl;

				int new_number;
				new_number = number_3 * 1000 + number_4 * 100 + number_1 * 10 + number_2;

				cout << "Новое число - " << new_number << endl;
			}
			else cerr << "Ошибка. Введите 4-значное число" << endl;

		}
			  break;

		case 3: {
			cout << "Задание № 3." << endl;
			cout << "Пользователь вводит с клавиатуры 7 целых чисел." << endl;
			cout << "Напишите прогрмамму, которая определяет максимальное из этих 7 чисел." << endl;

			int n1;
			int n2;
			int n3;
			int n4;
			int n5;
			int n6;
			int n7;

			cout << "Введите 7 чисел: \n";
			cin >> n1;
			cin >> n2;
			cin >> n3;
			cin >> n4;
			cin >> n5;
			cin >> n6;
			cin >> n7;

			int max;

			(n1 >= n2) ? max = n1 : max = n2;
			if (n3 >= max) max = n3;
			if (n4 >= max) max = n4;
			if (n5 >= max) max = n5;
			if (n6 >= max) max = n6;
			if (n7 >= max) max = n7;

			cout << "Максимальное число - " << max << endl;

		}
			  break;

		case 4:
		{
			cout << "Задание № 4." << endl;
			cout << "Грузовой самолет должен пролететь с грузом из пункта А в пункт С через точку В." << endl;
			cout << "Емкость бака для топлива у самолета - 300 литров." << endl;
			cout << "Потребление топлива на 1 км в зависимости от веса груза у самолета :" << endl;
			cout << "до 500 кг - 1л / км" << endl;
			cout << "до 1000 кг - 4л / км" << endl;
			cout << "до 1500 кг - 7л / км" << endl;
			cout << "до 2000 кг - 9л / км" << endl;
			cout << "свыше 2000 кг - самолет не поднимает." << endl;
			cout << "Пользовталеь вводит расстояние между пунктами А и В, и расстояние между пунктами В и С, а так же вес груза." << endl;
			cout << "Программа должна рассчитать, какое минимальное количество топлива необходимо для дозаправки самолету в пункте В, чтобы долететь из пункта А в пункт С." << endl;
			cout << "В случае невозможности преодолеть любое из расстояний - программа должна вывести сообщение о невозможности полета по введенному марштуру." << endl;
			cout << endl;
			cout << endl;

			system("pause");
			system("cls");

			double AB = 0;
			double BC = 0;
			double AC = 0;
			double weight = 0;
			double bak = 300; //в баке 300 литров
			double litr = 0; //литры
			double litrAB = 0;
			double litrBC = 0;
			double fuel_rate = 0;//расход топлива
			double bak_plus = 0; //дозаправка


			cout << "Введите расстояние от пункта А до пункта В, км - "; cin >> AB;
			cout << "Введите расстояние от пункта В до пункта С, км - "; cin >> BC;
			cout << "Введите массу груза, кг - "; cin >> weight; //масса
			cout << endl;

			while (AB >= 0 && BC >= 0 && (weight > 0 && weight < 2000)) {

				AC = AB + BC;

				cout << "Расстояние от пункта А до пункта С, км - " << AC << endl;

				if (weight < 500 && AB < (300 / fuel_rate) && BC < (300 / fuel_rate))
				{

					fuel_rate = 1;
					litrAB = AB * fuel_rate;
					litrBC = BC * fuel_rate;
					litr = litrAB + litrBC;

					cout << "Чтобы преодолеть расстояние " << AC << " км потребуется " << litr << " литров топлива.";

					if (bak > litr) cout << "Дозаправка в пункте В не требуется" << endl;
					if (bak < litr)
					{

						if (bak_plus > bak && bak_plus < 2 * bak)
						{
							cout << "B пункте В требуется дозаправка: ";
							bak_plus = litr - bak;
							cout << bak_plus << " литров" << endl;
						}

						else cout << "Самолет не сможет долететь до пункта С, т.к. требуемый объем топлива превышает объем бака. ";
						cout << endl;
					}

				}

				if (weight >= 500 && weight < 1000 && AB < (300 / fuel_rate) && BC < (300 / fuel_rate))
				{
					fuel_rate = 4;
					litrAB = AB * fuel_rate;
					litrBC = BC * fuel_rate;
					litr = litrAB + litrBC;

					cout << "Чтобы преодолеть расстояние " << AC << " км потребуется " << litr << " литров топлива." << endl;

					if (bak > litr) cout << "Дозаправка в пункте В не требуется" << endl;

					if (bak < litr)
					{

						if (bak_plus > bak && bak_plus < 2 * bak)
						{
							cout << "B пункте В требуется дозаправка: ";
							bak_plus = litr - bak;
							cout << bak_plus << " литров" << endl;
						}

						else cout << "Самолет не сможет долететь до пункта С, т.к. требуемый объем топлива превышает объем бака. ";
						cout << endl;
					}

				}

				if (weight >= 1000 && weight < 1500 && AB < (300 / fuel_rate) && BC < (300 / fuel_rate))
				{
					fuel_rate = 4;
					litrAB = AB * fuel_rate;
					litrBC = BC * fuel_rate;
					litr = litrAB + litrBC;

					cout << "Чтобы преодолеть расстояние " << AC << " км потребуется " << litr << " литров топлива." << endl;

					if (bak > litr) cout << "Дозаправка в пункте В не требуется" << endl;

					if (bak < litr)
					{

						if (bak_plus > bak && bak_plus < 2 * bak)
						{
							cout << "B пункте В требуется дозаправка: ";
							bak_plus = litr - bak;
							cout << bak_plus << " литров" << endl;
						}

						else cout << "Самолет не сможет долететь до пункта С, т.к. требуемый объем топлива превышает объем бака. ";
						cout << endl;
					}

				}

				if (weight >= 1500 && weight < 2000 && AB < (300 / fuel_rate) && BC < (300 / fuel_rate))
				{
					fuel_rate = 4;
					litrAB = AB * fuel_rate;
					litrBC = BC * fuel_rate;
					litr = litrAB + litrBC;

					cout << "Чтобы преодолеть расстояние " << AC << " км потребуется " << litr << " литров топлива." << endl;

					if (bak > litr) cout << "Дозаправка в пункте В не требуется" << endl;

					if (bak < litr)
					{

						if (bak_plus > bak && bak_plus < 2 * bak)
						{
							cout << "B пункте В требуется дозаправка: ";
							bak_plus = litr - bak;
							cout << bak_plus << " литров" << endl;
						}

						else cout << "Самолет не сможет долететь до пункта С, т.к. требуемый объем топлива превышает объем бака. ";
						cout << endl;
					}

				}

				system("pause");
				break;
			}

			if (weight >= 2000) cerr << "Груз слишком тяжелый. Самолет не сможет взлететь" << endl;
		}
		break;

		default:
			break;
		}

		if (dz > 5) cerr << "\t\t\tОшибка выбора № задания" << endl;

		system("pause");
		system("cls");
	}

	return 0;
}
