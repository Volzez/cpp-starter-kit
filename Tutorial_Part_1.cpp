#include <iostream>
#include <vector>
#include <cmath>
/*
#include <iostream> is a C++ preprocessor directive that tells the compiler to insert
the contents of the iostream (input/output stream) header file into your program, giving
you access to essential tools like cin (for user input) and cout (for displaying output on
the screen). It's fundamental for creating interactive console applications in C++. 



int main() {

    // This is my first comment!

    
    My first multi line comment

    
    
    std::cout << "I eat a heavy lunch everyday." << "\n";
    std::cout << "I mean usually most of the time when i'm alone I don't really have the time to make food";

    return 0;

}

*/

/*
int main() {

    const double PI = 3.14;
    double r = 12;

    double circum = 2 * PI * r;

    std::cout << circum << "cm";

    return 0;








}



*/


// Creating a namespace;
/*
namespace first {
    
    int x = 1;
}


namespace second {
    int x = 2;
}

int main() {

  using namespace std;
  using namespace std::string;
  using namespace std::cout;


   string x = "hello";
   cout << "hello" << x;

   return 0;

}

_____________Namespace = provides a solution for preventing name conflicts in large projects. Each entity has its unqiue name.
_____________A name space allows for identically named entities as long as the namespaces are different.


int main() {

    using namespace first;
    

    std::cout << x << std::endl;
    std::cout << second::x;


    return 0;






}

*/

/*

you can either use typedef or using both are similar 
typedef std::string str;
typedef int integer;

int main() {

    str name = "khaled";
    integer x = 5;

    std::cout << name << "\n";
    std::cout << x;





    return 0;
}


 

  // Casting 
 int main() {


    int points = 683;
    int points_gained = 65;

    double Percent_gained = points_gained / (double) points * 100;

    std::cout << Percent_gained << 

 
    return 0;

 }

 */



 // USER INPUT 

 // Tips to start making user input >> (used for extraction) and use std::cin for (character input)

 // Calculating BMI 
/*
using string = std::string;
 int main() {
    
    string name;
    double weight;
    double height;


    std::cout << "Please enter your Full Name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your weight in kg: ";
    std::cin >> weight;

    std::cout << "Enter your height in meters: ";
    std::cin >> height;

    double BMI = weight / (height * height);

    if(BMI < 18.5) {

        std::cout << name << "Your BMI is: " << BMI << " and you are underweight";


    }

    else if(BMI >= 18.5 && BMI <= 24.9) {

    std::cout << name << "Your BMI is: " << BMI << " and you are healthy";


    }

    else if(BMI >= 25.0 && BMI <= 29.9) {

        std::cout << name << "Your BMI is: " << BMI << " and you are overweight";

    }

    else {

        std::cout << name << "Your BMI is: " << BMI << " and you are obese";
    }

    return 0;


 }

 */


/*

 int main() {


    int distance;

    std::cout << "Enter distance in km!: ";
    std::cin >> distance;


    switch(distance) {

        case 3:
        std::cout << "Thats ok";
        break;

        case 1:
        std::cout << "Thats too close";
        break;

        case 2:
        std::cout << "Thats close";
        break;

        case 4:
        std::cout << "Thats far";
        break;

        case 5:
        std::cout << "Thats too far";
        break;

        default:
        std::cout << "(INCORRECT INPUT, Enter distance between (including) 1 and 5 ";



    }


        return 0;
 }

    

*/




// ****** TERNARY OPERATOR ****** 


// ternary operator ?: = replacment to an if/else statment 
// condition ? expression1 : expression2

/*

int main() {

    int iq;

    std::cout << "Enter your IQ (between 85 and 115)";
    std::cin >> iq;

    iq < 100 ? std::cout << "You have low IQ" : std::cout << "You have high IQ";






return 0;

}

    */


    

    // USEFUL STRING METHODS IN C++

   // In C++, std:: is a prefix used to access entities within the standard namespace
   // The std stands for "standard," and the :: is the scope resolution operator. This
   // mechanism organizes all the components of the C++ Standard Library, preventing
   // naming conflicts with your own code. 

/*
    int main() {

       // to be able to get methods use std:: (METHOD NAME)
        std::string name;
        std::getline(std::cin, name); // this is used to the input from the user (in strings) even when there is open spaces
         
        
       .length() used for getting length of the string
       .empty() used to check if a string is empty or not
       .clear() clears or deletes the string 
       .append() adds extra strings in a string
       .at() returns the character at a given position or index
       .insert() adds values to a string given the index ex. name.insert(1, '@)
       .find() finds the index/position of given the value in the string
       .erase() erases the string at a given index position beginning and end position


 



        return 0;
    }

*/



// do while loop = do some block of code first, THEN repeat again if condition is true

// while loop, if/else statments, for loop is same in Java

// break = break out of the loop
// countinue = skip current iteration 

/*

int main() {

for(int i = 1; i <=20; i++){

   if(i == 14){
    continue;
   }

std::cout << i << '\n';

}


--- output ---
1
2
3
4
5
6
7
8
9
10
11
12
13
15
16
17
18
19
20




 return 0;
}

*/


/*
int main() {


for(int i = 1; i <=20; i++){

   if(i == 14){
    break;
   }

std::cout << i << '\n';

}


---output---

1
2
3
4
5
6
7
8
9
10
11
12
13


}




*/


/*

#include <iostream>


int main() {


    srand(time(NULL));

    int num = (rand() % 6) + 1;

    std::cout << num;





    return 0;
}

*/