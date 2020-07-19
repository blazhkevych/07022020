#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int k = 0;
	int a, c, res = 0;
	cin >> a;
	do
	{
		c = a % 10;
		if (c != 3)
			res = c * pow(10, k++) + res;
	} while (a = a / 10);
	cout << "res= " << res << endl;
	return 0;
}



/*int k = 0;
	int a, c, res = 0;
	cin >> a;
	do
	{
		c = a % 10;
		if (c != 3)
			res = c * pow(10, k++) + res;
	} while (a = a / 10);
	cout << "res= " << res << endl;
	return 0;*/

	/*SetConsoleOutputCP(1251);
		int a, c, res = 0;
		cin >> a;
		do
		{
			c = a % 10;
			res = res * 10 + c;
		} while (a = a / 10);

		cout << "res= " << res << endl;
		return 0;*/

		/*SetConsoleOutputCP(1251);
			int a, k = 0;
			cin >> a;
			do
				k++;
			while (a = a / 10);
			cout << "sum= " << k << endl;
			return 0;*/

			/*SetConsoleOutputCP(1251);
				int a, s = 0;
				cin >> a;
				do
				s = s + a % 10;
				while (a=a/10);
				cout << "sum= " << s << endl;
				return 0;*/

				/*SetConsoleOutputCP(1251);

					int c1, c2, c3, k = 0;
					for (int i = 100; i < 1000; i = i++)
					{
						c1 = i % 10;
						c2 = i / 10 % 10;
						c3 = i / 100;
						if (c1 != c2 && c1 != c3 && c2 != c3)
						{
							cout << i << '\t';
							k++;
						}
					}
						cout << k ;

					return 0;*/

					/*int c1, c2, c3, k = 0;
						for (int i = 100; i < 1000; i = i++)
						{
							c1 = i % 10;
							c2 = i / 10 % 10;
							c3 = i / 100;
							if (c1 == c2 || c1 == c3 || c2 == c3)
							{
								cout << i << '\t';
								k++;
							}
						}
							cout << k ;

						return 0;*/

						/*SetConsoleOutputCP(1251);
							int kilkist;
							for (int i = 100; i < 1000; i = i++)
							{
								int c1, c2, c3;
								c1 = i % 10;
								c2 = i / 10 % 10;
								c3 = i / 100;
								if(c1==c2||c1==c3||c2==c3)
								cout << i << '\t';
							}
							return 0;*/


							/*SetConsoleOutputCP(1251);
								for (int i = 10; i < 100; i = i++)
								{
									if (i % 10 == i / 10)
										cout << i << '\t';
								}
								return 0;*/