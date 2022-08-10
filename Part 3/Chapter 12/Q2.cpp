#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1;
	char flag, str2[1000] = { NULL };
	int sum = 0, char_count = 0, sum_count = 0;

	cin >> str1;

	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] >= 65 && str1[i] <= 122) {
			str2[i - sum_count] = str1[i];
			char_count++;
		}
		else {
			sum += str1[i] - 48;
			sum_count++;
		}
	}

	for (int i = 0; i < char_count - 1; i++) {
		for (int j = 0; j < char_count - i - 1; j++) {
			if (str2[j] > str2[j + 1]) {
				flag = str2[j];
				str2[j] = str2[j + 1];
				str2[j + 1] = flag;
			}
		}
	}

	for (int i = 0; i < char_count; i++) {
		cout << str2[i];
	}
	cout << sum;

	return 0;
}
