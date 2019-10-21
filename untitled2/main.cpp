#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(NULL)));

    string userChoice;
    int computerNumber = rand() % 3 + 1; //computer picking a number which has names such as rock paper or scissors attached to each at random
    string computerChoice;

    if (computerNumber == 1) {
        computerChoice = "rock"; //1 is rock
    } else if (computerNumber == 2) {
        computerChoice = "paper"; //2 is paper
    } else {
        computerChoice = "scissors"; //3 is scissors
    }


    std::cout << "Hello! What do you choose? Rock? Paper or Scissors?: " << endl; //displayed when run
    getline (cin,userChoice);

    for (int i=0;i<userChoice.length();i++){
        userChoice[i]=tolower(userChoice[i]);
    }

    while (userChoice != "rock" && userChoice != "paper" && userChoice != "scissors") {
        std::cout << "Re-enter your choice: " << endl; //displayed when rock paper or scissors isnt entered
        getline(cin, userChoice);
        for (int i=0;i<userChoice.length();i++){
            userChoice[i]=tolower(userChoice[i]);
        }
    }

    if(computerChoice == "rock" && userChoice == "rock") {
        std::cout << "Tie!" << endl; //tie messaged, displayed if both user and computer picked the same thing
    } else if (computerChoice == "rock" && userChoice == "scissors") {
        std::cout << "You lost!" << endl; //loss messaged, displayed if computer picks something that beats user
    } else if (computerChoice == "paper" && userChoice == "paper") {
        std::cout << "Tie!" << endl; //tie messaged, displayed if both user and computer picked the same thing
    } else if (computerChoice == "paper" && userChoice == "rock") {
        std::cout << "You lost!" << endl; //loss messaged, displayed if computer picks something that beats user
    } else if (computerChoice == "scissors" && userChoice == "scissors") {
        std::cout << "Tie!" << endl; //tie messaged, displayed if both user and computer picked the same thing
    } else if (computerChoice == "scissors" && userChoice == "paper") {
        std::cout << "You lost!" << endl; //loss messaged, displayed if computer picks something that beats user
    } else {
        std::cout << "You won!" << endl; //win messaged, displayed when user picks something to beat computer
    }
    cout << "\nGame Over! Would you like to try again? ";
    return 0;
}
