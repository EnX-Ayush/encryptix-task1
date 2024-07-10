#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 1000 + 1;

	do
	{
		cout<<"Enter a guess between 1 and 1000 : ";
		cin>>guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " gueses!\n";
	} 
	while (guess != num);

	return 0;
}
