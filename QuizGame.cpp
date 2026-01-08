#include <iostream>


int main() {


        std::string questions[] = {"1. What year was Khaled Born?: ",
                                    "2. Who invented Mario?: ",
                                    "3. What was the first GPU in the world?: ",
                                    "4. Why is the world changing so fast?: "
                                   };

        std::string options[][4] = {{"A. 2008", "B. 2009", "C. 2011", "D. 1987"},
                                   {"A. Albert Einstein", "B. Epic Games", "C. Shigeru MiyaMoto", "D. Elon Musk"},
                                   {"A. RTX 3060 Ti", "B. RTX 3090", "C. GTX 1050", "D. GeForce 256"},
                               {"A. exponential technological growths", "B. because it has to", "C. because of better lifestyle", "D. because climate change"}
        };


        char key[] = {'A', 'C', 'D', 'A'};

        int size = sizeof(questions)/sizeof(questions[0]);

        char guess;
        int score;

        for(int i = 0; i < size; i++) {

            std::cout << "**********************************\n";
            std::cout << questions[i] << '\n';
            std::cout << "**********************************\n";


            for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
                std::cout << options[i][j] << '\n';
            }

            std::cin >> guess;
            guess = toupper(guess);

            if(guess == 'A' || guess == 'B' || guess == 'C' || guess == 'D'){
                if(guess == key[i]) {
                    std::cout << "Correct!\n";
                    score++;


                }
                else{
                    std::cout << "Wrong!\n";
                    std::cout << "****************************\n";
                    std::cout << "Answer: " << key[i] << '\n';
                }
            }


            else{
                break;
                std::cout << "Error 404 WORNG!";
            }

           


        }

         std::cout << "RESULTS\n";
            std::cout << "****************************\n";
            std::cout << "Your Scored" << " " << ((double)score/size) * 100 << "%";


        return 0;
    }