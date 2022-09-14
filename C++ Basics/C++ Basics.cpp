//Sebastian Diaz
//9/12/2022
/*
1) a function that outputs all numbers from 0 to 1000 that are divisible by two different numbers, 
   which should be passed into the function.
2) a function to reverse the letters in a string("hello world" = > "dlrow olleh")
3) a function that returns a string with the vowels removed("the cake is a lie" = > "th ck s  l"
*/

#include <iostream>
#include <string>

using namespace std;

void divisibleBy(int n1, int n2);
void reverseLetters(string s1);
string removeVowels(string s2);

int main()
{
	int n1;
	int n2;
	string sentence1;
	string sentence2;

	cout << "Enter a number from 1 to 1000: ";
	cin >> n1;
	cout << endl;

	cout << "Enter a different number from 1 to 1000: ";
	cin >> n2;
	cout << endl;

	divisibleBy(n1, n2);

	cout << "\nEnter a sentence to reverse: ";
	getline(cin.ignore(), sentence1);
	cout << endl;

	reverseLetters(sentence1);

	cout << endl << "\nEnter a sentence to remove vowels: ";
	getline(cin, sentence2);
	cout << endl;

	cout << removeVowels(sentence2) << endl;
}

void divisibleBy(int n1, int n2)
{
	int i = 1;

	while (i <= 1000)
	{
		if ((i % n1) + (i % n2) == 0)
		{
			cout << i << endl;
		}

		i++;
	}
}
void reverseLetters(string s1)
{
	int n = s1.length();
	const char *letters = s1.c_str();

	while (0 <= n)
	{
		cout << letters[n--];
	}
}
string removeVowels(string s2)
{
	string vowels = "aeiou";

	while (s2.find_first_of(vowels) != s2.npos)
	{
		int v = s2.find_first_of(vowels);
		s2.replace(v, 1, "");
		cout << s2 << endl;
	}

	return s2;
}