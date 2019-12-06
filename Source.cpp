#include <iostream>;

using namespace std;
int sect(int k) {
	if (k <= 36) {
		return (k - 1) / 4;
	}
	else {
		return 8 - (k - 37) / 2;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	string menu;
	while (true) {
		cout << "Меню:\n1 - Спинеры\n2 - Снова спинеры\n3 - Не про спинеры\n4 - Плацкартный вагон\n5 - Кинотеатр\n1227 - выход\n>> ";
		cin >> menu;
		if (atoi(menu.c_str()) == 1227) {
			break;
		}
		switch (atoi(menu.c_str()))
		{
		case 1: {
			int a, b, c;
			cin >> a >> b >> c;
			cout << (c - a)/b;
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 2: {
			int m; cin >> m;
			int n3, n4;
			n4 = m % 3;
			n3 = (m - 4 * n4) / 3;
			if (n3 >= 0) { cout << n3 << "\n" << n4; }
			else { cout << "0\n0"; }

			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 3: {
			int n, m, nn = 0, mm = 0;
			cin >> n >> m;
			for (int i = 0; i < n; i++) {
				nn += n - i;
			}
			for (int j = 0; j < m; j++) {
				mm += m - j;
			}
			cout << nn * mm;
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 4: {
			int n, m, arr[9] = {0,0,0,0,0,0,0,0,0};
			cin >> n;
			for (int i = 0; i < n; i++) {
				cin >> m;
				arr[sect(m)] += 1;
			}
			int otv = 0, curr = 0;
			for (int i = 0; i < n; i++) {
				if (arr[i] == 6) {
					curr++;
					if (otv < curr) { otv = curr; }
				}
				else { curr = 0; }
			}
			cout << otv;
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		case 5: {
			int n, k;
			cin >> n >> k;
			while (k != 1) {
				n = (n - k % 2) / 2;
				k /= 2;
			}
			cout << (n - 1) / 2 << endl << n / 2;
			cout << "\n----------------------Работа программы-задания завершена----------------------\n\n";
			break;
		}
		default: {
			cout << "Команда не распознана\n";
			break;
		}
		}
		cin.get(); cout << ">> Enter <<"; cin.get();
		system("cls");
	}
	cout << "\n\n\n----------------------Работа корневой программы завершена----------------------";
	return 0;
}
