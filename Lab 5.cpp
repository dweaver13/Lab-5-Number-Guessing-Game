
//Dale Weaver
//C++ Fall 2020
//Due: Novemeber 2nd 2020
//Lab 5 Number Guessing Game



#include <iostream>
#include <time.h>
#include <cassert>
#include <stdlib.h>

using namespace std;

void game(int winNum, int loseNum);
void numGuess(int guess);
void winner();
void loser(int num);
void playAgain();

int main()
{
	int winNum = 0;
	int loseNum = 0;
	int again;

	cout << "You have stumbbled upon the hardest guessing game in the world!\n"
		"You have 20 guesses to guess the number correctly.\n"
		"...If you dare...\n";

	do
	{
		cout << "Good luck...\n";

		game(winNum, loseNum);
		playAgain();

		cin >> again;
		cout << endl;
	} while (again == 1);
	cout << "Your record is" << winNum << "and" << loseNum << "\n";
	return 0;
}

void game(int winNum, int loseNum)
{
	srand(time(NULL));
	int num = rand() % 100 + 0;
	int input;

	for (int guess = 1; guess <= 20; guess++)
	{
		numGuess(guess);
		cout << "Then please hit enter. ";
		cin >> input;

		if (!cin)
		{
			cout << "\n The value you entered is invalid. Please make sure there are no decimals or character. \n";
			cout << "\n You must restart the program. \n";
			abort();
		}

		if (input < 0 && input > 100)
		{
			guess;
			cout << "\n Plese make sure that your number is between 0 and 100. \n";
			cout << "\n You must restart the program. \n";
			abort();
		}

		else if (input != num && guess != 20)
		{
			cout << "In the words of DJ Khalid, 'Another one'. \n";
		}

		else if (input == num)
		{
			winner();
			guess = 21;
		}

		else
		{
			loser(num);
		}

	}
}
void numGuess(int guess)
{

	switch (guess)
	{
	case 1: cout << "What is your first guess? ";
		break;
	case 2: cout << "What is your second guess? ";
		break;
	case 3: cout << "What is your third guess? ";
		break;
	case 4: cout << "What is your fourth guess? ";
		break;
	case 5: cout << "What is your fifth guess? ";
		break;
	case 6: cout << "What is your sixth guess? ";
		break;
	case 7: cout << "What is your seventh guess? ";
		break;
	case 8: cout << "What is your eighth guess? ";
		break;
	case 9: cout << "What is your ninth guess? ";
		break;
	case 10: cout << "What is your tenth guess? ";
		break;
	case 11: cout << "What is your eleventh guess? ";
		break;
	case 12: cout << "What is your twelfth guess? ";
		break;
	case 13: cout << "What is your thirteenth guess? ";
		break;
	case 14: cout << "What is your fourteenth guess? ";
		break;
	case 15: cout << "What is your fifteenth guess? ";
		break;
	case 16: cout << "What is your sixteenth guess? ";
		break;
	case 17: cout << "What is your seventeenth guess? ";
		break;
	case 18: cout << "What is your eighteenth guess? ";
		break;
	case 19: cout << "What is your nineteenth guess? ";
		break;
	case 20: cout << "What is your twentyith guess? ";
		break;
	}
}
void winner()
{
	int winnerNum;

	srand(time(NULL));
	winnerNum = rand() % 11;

	if(winnerNum == 1)
	{
		cout << "\n Congrats. You win. \n";
	}
	else if(winnerNum == 2)
	{
		cout << "\n You win. Barely... \n";
	}
	else if (winnerNum == 3)
	{
		cout << "\n Very good. You guessed correctly. \n";
	}
	else if (winnerNum == 4)
	{
		cout << "\n You're smarter than I thought. Good job. \n";
	}
	else if (winnerNum == 5)
	{
		cout << "\n Just because you won this time, doesn't mean youre smart... \n";
	}
	else if (winnerNum == 6)
	{
		cout << "\n Don't let this win get to your head. \n";
	}
	else if (winnerNum == 7)
	{
		cout << "\n You got lucky. Maybe you should try the lottery. \n";
	}
	else if (winnerNum == 8)
	{
		cout << "\n You must have found a 4 leaf clover. You got lucky. \n";
	}
	else if (winnerNum == 9)
	{
		cout << "\n Good thing this game requires no skill. You win. \n";
	}
	else if (winnerNum == 10)
	{
		cout << "\n There must be an error in my code because you won... \n";
	}
	cout << endl;
	playAgain();
}
void loser(int num)
{
	srand(time(NULL));
	int loserNum = rand() % 11;
	switch (loserNum)
	{
	case 10: cout << "\n Haha. You lose. The anser was: " << num << endl;
		break;

	case 9: cout << "\n Better luck next time. If you dare.. The anser was: " << num << endl;
		break;

	case 8: cout << "\n You get nothing! You lose!. The anser was: " << num << endl;
		break;

	case 7: cout << "\n Just as I suspected. You lose. The anser was: " << num << endl;
		break;

	case 6: cout << "\n Better luck next time... probably not though. The anser was: " << num << endl;
		break;

	case 5: cout << "\n Maybe guessing isn't your forte. The anser was: " << num << endl;
		break;

	case 4: cout << "\n Stay out of casinos. You have bad luck. You lose. The anser was: " << num << endl;
		break;

	case 3: cout << "\n Did you break a mirror? Because you have bad luck. You lose. The anser was: " << num << endl;
		break;

	case 2: cout << "\n Take the 'L'... The anser was: " << num << endl;
		break;

	case 1: cout << "\n This game is too hard for you. You lose. The anser was: " << num << endl;
		break;
	}
	cout << endl;
	playAgain();
}
void playAgain()
{
	srand(time(NULL));
	int ranPlayAgain = rand() % 10;
	switch (ranPlayAgain)
	{
	case 10: cout << "\n Want to play again? Enter 1 to play again. Enter 2 to exit. ";
		break;
	case 9: cout << "\n Enter 1 to play again... If your dare... Enter 2 to exit. ";
		break;
	case 8: cout << "\n Enter 1 to play again. Enter 2 to exit the program if you're weak. ";
		break;
	case 7: cout << "\n 1 allows you to play again. 2 exits. ";
		break;
	case 6: cout << "\n Press 1 to play again. Press 2 to exit. ";
		break;
	case 5: cout << "\n Enter 1 to play again. Enter 2 to exit. ";
		break;
	case 4: cout << "\n Enter 1 to play again. Enter 2 to exit. ";
		break;
	case 3: cout << "\n Enter 1 to play again. Enter 2 to exit. ";
		break;
	case 2: cout << "\n Enter 1 to play again. Enter 2 to exit. ";
		break;
	case 1: cout << "\n Enter 1 to play again. Enter 2 to exit. ";
		break;
	}
}
