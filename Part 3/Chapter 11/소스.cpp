#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int arr[20] = { 0 }, count = 0, sum = 0;
	cin >> str;
	
	for(int i = 0; i < str.length(); i++){
		arr[i] = str[i] - 48;
		count++;
	}

	for (int i = 0; i < count; i++) {
		if (arr[i] == 0 || arr[i] == 1) { // 0이 맨 앞에 있는 경우
			sum += arr[i];
		}
		else {
			if (i == 0) sum += arr[i];
			else if (i != 0 && sum == 0) {
				sum = 1;
				sum *= arr[i];
			}
			else sum *= arr[i];
		}
	}

	cout << sum;

	return 0;
}