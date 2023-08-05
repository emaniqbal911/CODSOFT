#include<iostream>
using namespace std;
int main()
{
    int rand=rand % 100+1;
    int guess;
    int attempts=0;
    cout << "*****NUMBER GUESSING GAME*****" <<endl;
while(true){
    cout << "Enter your guess (between 1 and 100): ";
    cin >>guess;
    attempts++;
    if (guess == rand) {
    cout << "Congratulations! You guessed the correct number " <<rand<< " in " <<attempts << " attempts!!! " <<endl;
    break;
}
    else if (guess < rand) {
    cout << "Too low! Try again." << endl;
    }
    else if(guess>rand){
    cout << "Too high! Try again." << endl;
    }
    else 
    { 
    return 0;
	}
}
}

