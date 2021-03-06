//Paxston Gulledge
//Get a word, set all to lowercase, add to stack and queue, check if palindrome

#include "stdafx.h"
#include <iostream> 
#include <string> 
#include <cctype> 
#include <stack> 
#include <queue> 
using namespace std;
int main()
{
	string word;
	// Input 
	cout << "Please enter a word." << endl;
	getline(cin, word);

	// Convert word to lowercase 
	for	(int i = 0; i <	word.length(); i++)
	{
		word[i]	= tolower(word[i]);
	}
	cout << word << endl;

	// Place word in a queue and onto a stack 
	stack<string> theStack;
	queue<string> theQueue;
	theStack.push(word);
	theQueue.push(word);

	// Verify whether the line of text is a palindrome 
	//initially sets bool to true, then does a comparison of the first and last letters moving in one letter on both sides, if it is false once it
	//sets the bool to false
	bool palindrome	= true;
	for	(int i = 0;	i <	word.length(); i++)
	{
		palindrome *= word[i] == word[word.length() -	1 -	i];
	}
	if (palindrome)
		{
		cout <<	"The entered word is a palindrome!";
		}
	else
		{
		cout <<	"The entered word isn't a palindrome!";
	}
	
	// Force the console to stay open until a key is pressed
	cout << endl;
	system("pause");
	return 0;
}
