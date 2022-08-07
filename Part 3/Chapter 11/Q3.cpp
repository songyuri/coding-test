#include <iostream>
using namespace std;

int zto(string str1)
{
	int zto_count = 0;
	for (int i = 0; i < str1.length(); i++) {
		if (i == 0 && str1[i] == '1') {
			zto_count++;
		} 
		else if (i >= 1 && str1[i - 1] == '0' && str1[i] == '1') {
			zto_count++;
		}
		else if (str1[i] == '0') {
			str1[i] == '1';
		}
	}
	return zto_count;
}

int otz(string str2) 
{
	int otz_count = 0;
	for (int i = 0; i < str2.length(); i++) {
		if (i == 0 && str2[i] == '0') {
			otz_count++;
		}
		else if (i >= 1 && str2[i - 1] == '1' && str2[i] == '0') {
			otz_count++;
		}
		else if (str2[i] == '1') {
			str2[i] == '0';
		}
	}
	return otz_count;
}

int main()
{
	string str;
	cin >> str;
	int otz_count = 0, zto_count = 0;

	zto_count = zto(str);
	otz_count = otz(str);

	if (zto_count > otz_count) cout << otz_count;
	else cout << zto_count;

	return 0;
}
