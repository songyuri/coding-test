#include <iostream>
using namespace std;

int main()
{
	int ball = 0, weight = 0, arr[1000] = { NULL }, count = 0, flag = 0;

	cin >> ball >> weight;
	for (int i = 0; i < ball; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < ball; i++) {
		flag = arr[i];
		for (int j = 0; j < ball; j++) {
			if (flag != arr[j]) count++;
		}
	}
	
	cout << count / 2;

	return 0;
}
