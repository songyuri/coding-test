#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int size = str.size(), p1_sum = 0, p2_sum = 0, part1[1000] = { 0 }, part2[1000] = { 0 };

	for (int i = 0; i < size / 2; i++) {
		p1_sum += str[i] - 48;
	}
	for (int i = size / 2; i < size; i++) {
		p2_sum += str[i] - 48;
	}

	if (p1_sum == p2_sum) cout << "LUCKY";
	else cout << "READY";

	return 0;
}
