#include <iostream>
using namespace std;

int main() {
  cout << "Hello User , \nWelcome to Guess the number Game..!! \nHere you have "
          "to guess a number between 1 to 100 in 5 chances"
       << endl;

  int randomNumber;
  randomNumber = rand() % 100;

  int userChoice;
  int chance = 1;
  string ans = "y";

  while (ans == "y") {
    cout << "Enter Number : ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 100) {
      cout << "Invalid Input..!!" << endl;
    } else if (userChoice > randomNumber) {
      cout << "Go lower.!" << endl;
    } else if (userChoice < randomNumber) {
      cout << "Go higher.!" << endl;
    } else if (userChoice == randomNumber) {
      cout << "Congrats..!! You guessed right number..!!" << endl;
      cout << "DO you want to play again.? (y/n) : ";
      cin >> ans;
      if (ans != "y") {
        cout << "Thanks for playing..!!" << endl;
        break;
      } else {
        chance = 1;
        randomNumber = rand() % 100;
        continue;
      }
    }
    chance++;

    if (chance == 6) {
      cout << "You lose..! The random number was " << randomNumber << endl;
      cout << "DO you want to play again.? (y/n) : ";
      cin >> ans;
      if (ans == "y") {
        chance = 1;
        randomNumber = rand() % 100;
      } else {
        cout << "Thanks for playing..!!" << endl;
      }
    }
  }
}