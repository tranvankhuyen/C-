#include <iostream>
using std::string;

int Max(int b[], int size_b)
{
	int MAX = b[0];
	for (int i = 0; i < size_b; i++)
	{
		MAX = std::max(MAX, b[i]);
	}
	return MAX;
}
string split_words(string &a, int &i)
{
	// Initialize an empty c string..
	string c;
	// A loop runs until end of a word..
	while (a[i] != ' ')
	{
		// if not end, add a[i] into c string..
		if (a[i] != '\0')
		{
			c += a[i];
			i++;
		}
		if (a[i] == '\0')
			break;
	}
	// Add a value to ignore spaces..
	if (a[i] == ' ')
		i++;
	return c;
}
// Count_repeats function
int Count_repeats(string &a)
{
	int count = 0;
	int len = a.length();
	// Initialize an Array and Assign 1 value..
	int b[100];
	for (int i = 0; i < len; i++)		
		b[i] = 1;
	// check repeats word.. 
	for (int i = 0; i < len; i++)
	{
		if (a[i] != '*')
		{
			for (int j = i + 1; j < len; j++)
			{
				if (a[i] == a[j])
				{
					b[i]++;
					a[j] = '*'; // "aaabcad" -> "a**bc*d" , don't repeat count.. 
				}
			}
		}
	}
	// "aaabbca" -> 4 1 1 2 1 1 1
	for (int i = 0; i < len; i++)
	{
		if (b[i] > 1)
			count++; // -> count = 2 -> 2 characters are repeated..
	}
	return count;
}
// Result function
string result(string &a)
{
	int i = 0;
	int len = a.length();
	int b[len];
	for (int i = 0; i < len; i++)
		b[i] = 0;
	while (a[i] != '\0')
	{
		// Initialize i to save location..
		int j = i;
		// Split word and assign to word string..
		string word = split_words(a, i);
		// Count number of repeat words in word string and save to Array b at location i..
		b[j] = Count_repeats(word);
	}
	int MAX = Max(b, len); // find max i Array b
	string str;
	if(MAX == 0)
	{
		str = "-1";
	}
	else
	{
	for (int i = 0; i < len; i++)
	{
		if (b[i] == MAX)
		{
			// Get string
			str = split_words(a, i);
		}
	}
	}
	return str;
}
// main function
int main()
{
	string a = "ijklop 1234";
	std::cout << result(a) << std::endl;

	return 0;
}