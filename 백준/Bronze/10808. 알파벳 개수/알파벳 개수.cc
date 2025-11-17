#include<iostream>
using namespace std;

int main()
{
	int arr[26]{};
	string str;
	cin >> str;
	for (int j = 0; j < str.length(); j++)
	{
		for(int k=0;k<=26;k++)
		if (str[j] == 'a' + k) arr[k] += 1;
	}
	for (int i = 0; i < 26; i++)
		cout << arr[i] << " "; 

}