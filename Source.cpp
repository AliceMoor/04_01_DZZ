# include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int dz = 0;

	while (dz < 5) {
		cout << "������� � ������� (1-4)" << endl; cin >> dz;
		cout << endl;

		system("cls");

		switch (dz)
		{
		case 1: {
			cout << "������� � 1." << endl;
			cout << "������������ ������ � ���������� ����� ������������ �����." << endl;
			cout << "�������� ���������, ������� ����������, �������� �� ��������� ����� - ����������(���� ����� ������ ���� ���� ����� ����� ��������� ����)." << endl;
			cout << "���� ������������ ���� �� ������������ ����� - �������� �� ������." << endl;

			int number = 0;
			cout << "������� 6-������� �����: "; cin >> number;

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

				cout << "����� ������ ���� ����� - " << sum_left << endl;
				cout << "����� ��������� ���� ����� - " << sum_right << endl;

				if (sum_left == sum_right)	cout << "�����������! � ��� ���������� �������! :-)" << endl;
				else cout << "��������� ����� �� �������� ����������" << endl;
				cout << endl;
			}

			else cerr << "������. ������� 6-��������� �����" << endl;
		}

			  break;

		case 2: {
			cout << "������� � 2." << endl;
			cout << "������������� ������ 4 - ������� �����." << endl;
			cout << "���������� �������� � ���� ����� 1 � 2 �����, � ��� �� 3 � 4 �����." << endl;
			cout << "���� ������������ ������ �� �������������� ����� - ������� ��������� �� ������." << endl;

			int number = 0;
			cout << "������� 4-������� ����� - "; cin >> number;

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

				cout << "����� ����� - " << new_number << endl;
			}
			else cerr << "������. ������� 4-������� �����" << endl;

		}
			  break;

		case 3: {
			cout << "������� � 3." << endl;
			cout << "������������ ������ � ���������� 7 ����� �����." << endl;
			cout << "�������� ����������, ������� ���������� ������������ �� ���� 7 �����." << endl;

			int n1;
			int n2;
			int n3;
			int n4;
			int n5;
			int n6;
			int n7;

			cout << "������� 7 �����: \n";
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

			cout << "������������ ����� - " << max << endl;

		}
			  break;

		case 4:
		{
			cout << "������� � 4." << endl;
			cout << "�������� ������� ������ ��������� � ������ �� ������ � � ����� � ����� ����� �." << endl;
			cout << "������� ���� ��� ������� � �������� - 300 ������." << endl;
			cout << "����������� ������� �� 1 �� � ����������� �� ���� ����� � �������� :" << endl;
			cout << "�� 500 �� - 1� / ��" << endl;
			cout << "�� 1000 �� - 4� / ��" << endl;
			cout << "�� 1500 �� - 7� / ��" << endl;
			cout << "�� 2000 �� - 9� / ��" << endl;
			cout << "����� 2000 �� - ������� �� ���������." << endl;
			cout << "������������ ������ ���������� ����� �������� � � �, � ���������� ����� �������� � � �, � ��� �� ��� �����." << endl;
			cout << "��������� ������ ����������, ����� ����������� ���������� ������� ���������� ��� ���������� �������� � ������ �, ����� �������� �� ������ � � ����� �." << endl;
			cout << "� ������ ������������� ���������� ����� �� ���������� - ��������� ������ ������� ��������� � ������������� ������ �� ���������� ��������." << endl;
			cout << endl;
			cout << endl;

			system("pause");
			system("cls");

			double AB = 0;
			double BC = 0;
			double AC = 0;
			double weight = 0;
			double bak = 300; //� ���� 300 ������
			double litr = 0; //�����
			double litrAB = 0;
			double litrBC = 0;
			double fuel_rate = 0;//������ �������
			double bak_plus = 0; //����������


			cout << "������� ���������� �� ������ � �� ������ �, �� - "; cin >> AB;
			cout << "������� ���������� �� ������ � �� ������ �, �� - "; cin >> BC;
			cout << "������� ����� �����, �� - "; cin >> weight; //�����
			cout << endl;

			while (AB >= 0 && BC >= 0 && (weight > 0 && weight < 2000)) {

				AC = AB + BC;

				cout << "���������� �� ������ � �� ������ �, �� - " << AC << endl;

				if (weight < 500 && AB < (300 / fuel_rate) && BC < (300 / fuel_rate))
				{

					fuel_rate = 1;
					litrAB = AB * fuel_rate;
					litrBC = BC * fuel_rate;
					litr = litrAB + litrBC;

					cout << "����� ���������� ���������� " << AC << " �� ����������� " << litr << " ������ �������.";

					if (bak > litr) cout << "���������� � ������ � �� ���������" << endl;
					if (bak < litr)
					{

						if (bak_plus > bak && bak_plus < 2 * bak)
						{
							cout << "B ������ � ��������� ����������: ";
							bak_plus = litr - bak;
							cout << bak_plus << " ������" << endl;
						}

						else cout << "������� �� ������ �������� �� ������ �, �.�. ��������� ����� ������� ��������� ����� ����. ";
						cout << endl;
					}

				}

				if (weight >= 500 && weight < 1000 && AB < (300 / fuel_rate) && BC < (300 / fuel_rate))
				{
					fuel_rate = 4;
					litrAB = AB * fuel_rate;
					litrBC = BC * fuel_rate;
					litr = litrAB + litrBC;

					cout << "����� ���������� ���������� " << AC << " �� ����������� " << litr << " ������ �������." << endl;

					if (bak > litr) cout << "���������� � ������ � �� ���������" << endl;

					if (bak < litr)
					{

						if (bak_plus > bak && bak_plus < 2 * bak)
						{
							cout << "B ������ � ��������� ����������: ";
							bak_plus = litr - bak;
							cout << bak_plus << " ������" << endl;
						}

						else cout << "������� �� ������ �������� �� ������ �, �.�. ��������� ����� ������� ��������� ����� ����. ";
						cout << endl;
					}

				}

				if (weight >= 1000 && weight < 1500 && AB < (300 / fuel_rate) && BC < (300 / fuel_rate))
				{
					fuel_rate = 4;
					litrAB = AB * fuel_rate;
					litrBC = BC * fuel_rate;
					litr = litrAB + litrBC;

					cout << "����� ���������� ���������� " << AC << " �� ����������� " << litr << " ������ �������." << endl;

					if (bak > litr) cout << "���������� � ������ � �� ���������" << endl;

					if (bak < litr)
					{

						if (bak_plus > bak && bak_plus < 2 * bak)
						{
							cout << "B ������ � ��������� ����������: ";
							bak_plus = litr - bak;
							cout << bak_plus << " ������" << endl;
						}

						else cout << "������� �� ������ �������� �� ������ �, �.�. ��������� ����� ������� ��������� ����� ����. ";
						cout << endl;
					}

				}

				if (weight >= 1500 && weight < 2000 && AB < (300 / fuel_rate) && BC < (300 / fuel_rate))
				{
					fuel_rate = 4;
					litrAB = AB * fuel_rate;
					litrBC = BC * fuel_rate;
					litr = litrAB + litrBC;

					cout << "����� ���������� ���������� " << AC << " �� ����������� " << litr << " ������ �������." << endl;

					if (bak > litr) cout << "���������� � ������ � �� ���������" << endl;

					if (bak < litr)
					{

						if (bak_plus > bak && bak_plus < 2 * bak)
						{
							cout << "B ������ � ��������� ����������: ";
							bak_plus = litr - bak;
							cout << bak_plus << " ������" << endl;
						}

						else cout << "������� �� ������ �������� �� ������ �, �.�. ��������� ����� ������� ��������� ����� ����. ";
						cout << endl;
					}

				}

				system("pause");
				break;
			}

			if (weight >= 2000) cerr << "���� ������� �������. ������� �� ������ ��������" << endl;
		}
		break;

		default:
			break;
		}

		if (dz > 5) cerr << "\t\t\t������ ������ � �������" << endl;

		system("pause");
		system("cls");
	}

	return 0;
}
