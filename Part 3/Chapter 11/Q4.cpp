#include <iostream>
using namespace std;

int main()
{
	int num = 0, arr[1000] = { NULL }, flag = 0, t = 1;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				flag = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = flag;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		if (arr[i] <= t) t = t + arr[i];
		else if (i == num && arr[i] <= t) t += 1;
	}
	
	cout << t;

	return 0;
}
