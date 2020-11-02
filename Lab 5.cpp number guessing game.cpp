
//Dale Weaver
//C++ Fall 2020
//Due: Novemeber 2nd 2020
//Lab 5 Number Guessing Game
//This code randomly picks a number betwen 0 and 100. Then the user gets 20 guesses to guess the 
//number correctly. If they don't, they lose the game then the game asks them if they want to play
//again and vise versa. If they don't want to play again, the code prints out the number of wins
//and losses they had. 


#include <iostream>
#include <time.h>
#include <cassert>
#include <stdlib.h>

using namespace std;
// this allows us to use the function names later
void game(int& winNum, int& loseNum);
void numGuess(int guess); 
void winner();
void loser(int num);
void playAgain();
void score(int num, int input, int& winNum, int& loseNum);

int main()
{
	int winNum = 0;
	int loseNum = 0;
	int again;

	cout << "You have stumbbled upon the hardest guessing game in the world!\n"
		"You have 20 guesses to guess the number correctly.\n"
		"...If you dare...\n";
	//do while loop
	do
	{
		cout << "Good luck...\n";

		game(winNum, loseNum); //calls game function
		playAgain();//calls playAgain function

		cin >> again;
		cout << endl;
	} while (again == 1);
	cout << "Your record is " << winNum << " win(s) and " << loseNum << " loss(es).\n"; //displays record
	return 0;
}

void game(int& winNum, int& loseNum)
{
	srand(time(NULL)); //picks a random nmber
	int num = rand() % 100 + 0;
	int input;

	for (int guess = 1; guess <= 20; guess++)
	{
		numGuess(guess); //calls the numGuess function
		cout << "Then please hit enter. ";
		cin >> input;
		// makes sure that what the user inputted is an integer 
		if (!cin)
		{
			cout << "\n The value you entered is invalid. Please make sure there are no decimals or character. \n";
			cout << "\n You must restart the program. \n";
			abort(); //closes program
		}
		// makes sure the number the user inpuitted is between 0 and 100
		if (input < 0 || input > 100)
		{
			guess;
			cout << "\n Plese make sure that your number is between 0 and 100. \n";
			cout << "\n You must restart the program. \n";
			abort(); //closes program
		}
		// moves on to the nuxt input if the number isn't guessed correctly or guess #21
		else if (input != num && guess != 20)
		{
			cout << "In the words of DJ Khalid, 'Another one'. \n"; //tells user they ddint get it right on that guess
		}
		// if the user guesses the number correctly
		else if (input == num)
		{
			winner(); // calls winner function
			guess = 21; // stops asking user for input
		}
		// if the user doesn't guess correctly and has already guessed 20 times
		else if (input != num && guess < 20)
		{
			loser(num); // calls loser function
		}

	}
	score(num, input, winNum, loseNum);
}
void numGuess(int guess)
{
	// asks the user for their 1st-20th guess
	switch (guess)
	{ //switch statement
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
	// chooses a randpom number between 1-10 and displays that if they guess correctly
	srand(time(NULL));
	winnerNum = rand() % 11; //randomizes
	// 10 different ways to say they win
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
	playAgain(); // calls playAgain funtion
}
void loser(int num)
{ //this function chooses a number between 1-10 and displays that line if they lose
	srand(time(NULL));
	int loserNum = rand() % 11; // randomly chooses a number between 1-10
	switch (loserNum)
	{ // 10 different ways to say they lose also a switch statement
	case 10: cout << "\n Haha. You lose. The answer was: " << num << endl;
		break;

	case 9: cout << "\n Better luck next time. If you dare.. The answer was: " << num << endl;
		break;

	case 8: cout << "\n You get nothing! You lose!. The answer was: " << num << endl;
		break;

	case 7: cout << "\n Just as I suspected. You lose. The answer was: " << num << endl;
		break;

	case 6: cout << "\n Better luck next time... probably not though. The answer was: " << num << endl;
		break;

	case 5: cout << "\n Maybe guessing isn't your forte. The answer was: " << num << endl;
		break;

	case 4: cout << "\n Stay out of casinos. You have bad luck. You lose. The answer was: " << num << endl;
		break;

	case 3: cout << "\n Did you break a mirror? Because you have bad luck. You lose. The answer was: " << num << endl;
		break;

	case 2: cout << "\n Take the 'L'... The answer was: " << num << endl;
		break;

	case 1: cout << "\n This game is too hard for you. You lose. The answer was: " << num << endl;
		break;
	}
	cout << endl;
	playAgain(); // calls playAgain function
}
void playAgain()
{ // this asks the user if they want to play again by choosing a random number and displaying what corresponds to it
	srand(time(NULL));
	int ranPlayAgain = rand() % 11; // chooses a random number between 1-10
	switch (ranPlayAgain)
	{ // 10 diffeent ways to ask to play again
	case 10: cout << "\nWant to play again? Enter 1 to play again. Enter 2 to exit. ";
		break;
	case 9: cout << "\nEnter 1 to play again... If your dare... Enter 2 to exit. ";
		break;
	case 8: cout << "\nEnter 1 to play again. Enter 2 to exit the program if you're weak. ";
		break;
	case 7: cout << "\n1 allows you to play again. 2 exits. ";
		break;
	case 6: cout << "\nPress 1 to play again. Press 2 to exit. ";
		break;
	case 5: cout << "\nPressing 1 starts the gameover. 2 exits the game. ";
		break;
	case 4: cout << "\nEnter 1 if you want to try your luck again. Enter 2 to exit. ";
		break;
	case 3: cout << "\nI'll give you another shot. Press 1 if you accept or 2 if you decline. ";
		break;
	case 2: cout << "\nIf you're done, press 2. Want another shot? press 1. ";
		break;
	case 1: cout << "\nYou'll get it next time. Press 1. Otherwise press 2 to exit. ";
		break;
	}
}
void score(int num, int input, int& winNum, int& loseNum)
{ // this function tallys up how many times the user wins or losses and displays it when they're done
	if (input == num)
	{
		winNum+=1; //adds 1 every time they win
	}
	else
	{
		loseNum+=1; // adds 1 every time they lose
	}
}