/* Author: Девятов Анатолий
Group: СББ-901
Task# 5.18
Description: Вводится n предложений, найти все являющиеся палиндромами
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

 
void palindrome (){
    cout << "Введите предложение: \n";
    const int startSize = 256;
	char s[startSize];
	char s_1[startSize];
	cin.getline(s, 256);
	int j = 0;
	for (int i = 0; i < startSize; i++)
	{
		if (s[i] == ' ') continue; 
		s_1[j] = s[i];
		j++;
	}
	int resSize = strlen(s_1);
	char * s_2 = new char[resSize + 1];
	for (int i = 0; i < resSize; i++)
	{
		s_2[i] = s_1[resSize - 1 - i];
	}
	s_2[resSize] = '\0';
	if (!strcmp(s_1, s_2))
	{
		cout << "Предложение является ПАЛИНДРОМОМ\n";
	}
	else
	{
		cout << "Предложение не является ПАЛИНДРОМОМ\n";
	}
} 

int main () 
{
int n,i,a;
cout << "Введите количество предложений: ";
cin >> n;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
for (i=0;i<n;i++){
    palindrome();
}
}
