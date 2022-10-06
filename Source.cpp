#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	/*int day;
	cin >> day;
	switch (day) {
		case 1:cout << "" << endl; break;
		case 2:cout << "" << endl; break;
		case 3:cout << "" << endl; break;
		case 4:cout << "" << endl; break;
		case 5:cout << "" << endl; break;
		case 6:cout << "" << endl; break;
		case 7:cout << "" << endl; break;
	}*/
	//2
	/*int day;
	cin >> day;
	switch (day) {
	case 1:cout << "плохо" << endl; break;
	case 2:cout << "неудовлетворительно" << endl; break;
	case 3:cout << "удовлетворительно" << endl; break;
	case 4:cout << "хорошо" << endl; break;
	case 5:cout << "отлично" << endl; break;
	}*/
	//3
	/*int day;
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 12:cout << "зима" << endl; break;
	case 3:
	case 4:
	case 5:cout << "весна" << endl; break;
	case 6:
	case 7:
	case 8:cout << "лето" << endl; break;
	case 9:
	case 10:
	case 11:cout << "осень" << endl; break;
	}*/
	//4
	/*int day;
	cin >> day;
	switch (day) {
	case 2:cout << "28" << endl; break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:cout << "31" << endl; break;
	case 6:
	case 4:
	case 9:
	case 11:cout << "30" << endl; break;
	}*/
	//5
	/*int dey, a, b, c;
	cin >> dey >> a >> b;
	switch (dey) {
	case 1:c = a + b;break;
	case 2:c = a - b;break;
	case 3:c = a * b;break;
	case 4:c = a / b;break;
	}
	cout << c << endl;*/

	//CM-----------------------------------------------------------------------------------
	/*int a, b, c;
	cin >> a>> b>> c;
	bool s = a == b and b == c and a == c;
	cout<<boolalpha<<s;*/

	/*int a;
	cin >> a;
	bool s = ((a>9 and a<100) and a%2==0);
	cout << boolalpha << s;*/

	/*int a, b, c;
	cin >> a >> b >> c;
	bool s = (a == b and a!=c) or (b == c and b != a) or (c == a and c != b);
	cout << boolalpha << s;*/

	/*int a, b;
	cin >> a >> b ;
	if ((180 - a - b > 0 ) and (a+b==90)) {
		cout << "прямоугольный" << endl;
	}
	if (180 - a - b > 0) {
		cout << "возможен" << endl;
	}
	else {
		cout << "невозможен" << endl;
	}*/
	/*int a, b;
	cin >> a >> b;
	if (a>0 and b>0) {
		cout << "1" << endl;
	}
	if (a < 0 and b > 0) {
		cout << "2" << endl;
	}
	if (a < 0 and b < 0) {
		cout << "3" << endl;
	}
	if (a > 0 and b < 0) {
		cout << "4" << endl;
	}*/
	/*int a, b, c;
	cin >> a >> b >> c;
	if (a<b and b<c)  {
		int s = a + c;
		cout << s << endl;
	}
	if (c < a and a < b) {
		int s = b + c;
		cout << s << endl;
	}
	if (b < a and a < c) {
		int s = a + b;
		cout << s << endl;
	}

	if (a < c and c < b) {
		int s = a + c;
		cout << s << endl;
	}
	if (b < c and c < a) {
		int s = b + c;
		cout << s << endl;
	}
	if (c < b and b < a) {
		int s = a + b;
		cout << s << endl;
	}*/

	/*int day;
	cin >> day;
	switch (day) {
	case 0:cout << "zero" << endl; break;
	case 1:cout << "one" << endl; break;
	case 2:cout << "two" << endl; break;
	case 3:cout << "three" << endl; break;
	case 4:cout << "four" << endl; break;
	case 5:cout << "five" << endl; break;
	case 6:cout << "six" << endl; break;
	case 7:cout << "seven" << endl; break;
	case 8:cout << "eight" << endl; break;
	case 9:cout << "nine" << endl; break;
	}*/
	return 0;
}