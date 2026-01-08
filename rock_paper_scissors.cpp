#include <iostream>
char getUserChoice();
char getComputerChoice();
void winner(char player, char computer);

int main() {

    char player;
    char computer;
    player = getUserChoice();
    computer = getComputerChoice();
    
    winner(player, computer);









    return 0;
}


char getUserChoice() {
    char player;
    std::cout << "Welcome to the Rock, paper Scissors game!\n";
    std::cout << "****************************************\n";
    do{
        std::cout << "Choose your option:\n";
        std::cout << "'r' for rock\n ";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";

        std::cin >> player;


        
    }while(player != 'r' && player != 's' && player != 'p');


        return player;



}

char getComputerChoice() {
    char computer;
    srand(time(NULL));


    int val = (rand() % 3) + 1;

    switch(val) {

        case 1:
        computer = 'r';
        break;

        case 2:
        computer = 'p';
        break;
        
        case 3:
        computer = 's';
        break;

    }




  return computer;



    }


void winner(char player, char computer){

    if(player == 'r' && computer == 'r'){
        std::cout << "It's a tie, you and the computer both chose rock!";
    }

    else if(player == 's' && computer == 's'){
        std::cout << "It's a tie, you and the computer both chose scissors!";

    }

    else if(player == 'p' && computer == 'p'){
        std::cout << "It's a tie, you and the computer both chose paper!";

    }

    else{

        if(player == 'r' && computer == 's') {
            std::cout << "You Win! (Computer choose scissors)";
        }
       
        else if(player == 's' && computer == 'r') {
            std::cout << "You Lose! (Computer choose rock)";
        }
        
        else if(player == 's' && computer == 'p'){
            std::cout << "You Win! (Computer chose paper)";
        }
        else if(player == 'p' && computer == 's'){
            std::cout << "You Lose! (Computer chose scissors)";
        }
        else if(player == 'r' && computer == 'p'){
            std::cout << "You Lose! (Computer chose paper)";

        }
        else{
            std::cout << "You Win! (Computer chose rock)";
        }
       
    }






}


    
