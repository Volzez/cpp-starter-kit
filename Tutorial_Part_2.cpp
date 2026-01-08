#include <iostream>
#include <ctime>
#include <string>


/*
int main() {


    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;



    std::cout << num1 << '\n';
    std::cout << num2 << '\n';





    return 0;
}




int main() {

    int c_val;
    int tries;
    int guess;

    srand(time(NULL));

    c_val = (rand() % 100) + 1;
     

    std::cout << "******* WELCOME TO THE GUESSING GAME *******\n";
    

    do{

        std::cout << "Enter guess from (1 to 100)\n";
        std::cin >> guess;
        tries++;

        if(guess > c_val){
            std::cout << "Your guess is high\n";
        }

        else if(guess < c_val) {
            std::cout << "Your guess is low\n";
        }

        else{

            std::cout << "Thats the correct guess, Here are your number of tries" << tries; 
        }


    }
        while(guess != c_val);






    return 0;
}

*/

/*
// USER DEFINED FUNCTIONS

void nameAge(std::string name, int age); // defining/initalizing the function so you don't have to define the user-defined function before the main function
 // this can be used for declaring the function below the main function 




int main() {

    // function a block of reusable code

    std::string name = "volzez";
    int age = 17;


     nameAge(name, age);

    return 0;
}

void nameAge(std::string name, int age) {

    std::cout << "Your name is " << name << '\n';
    std::cout << "And your age is " << age << '\n';
}

*/

/*
#include <iostream>
#include <iomanip>
#include <limits> // Needed for numeric_limits

void showAccountBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 1243.00;
    int option = 0;
    bool restart = true;

    while(restart) {
        std::cout << "\n_________________\n";
        std::cout << "Enter your choice:\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "_________________\n";
        std::cout << "Choice: ";
        
        // Check if input is a valid integer
        if (!(std::cin >> option)) {
            std::cout << "Invalid input. Please enter a number.\n";
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard bad input
            continue; // Restart the loop
        }

        switch(option) {
            case 1:
                showAccountBalance(balance);
                break;
            case 2:
                balance += deposit();
                showAccountBalance(balance); // Show new balance
                break;
            case 3:
                balance -= withdraw(balance);
                showAccountBalance(balance); // Show new balance
                break;
            case 4:
                restart = false;
                std::cout << "Goodbye!\n";
                break;
            default: 
                std::cout << "Invalid choice. Please pick 1-4.\n";
        }
    }

    return 0;
}

// --- Implementation of Functions ---

void showAccountBalance(double balance) {
    std::cout << "Your balance is: $" << std::fixed << std::setprecision(2) << balance << "\n";
}

double deposit() {
    double amount = 0;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;
    if (amount < 0) {
        std::cout << "Invalid amount!\n";
        return 0;
    }
    return amount;
}

double withdraw(double balance) {
    double amount = 0;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    if (amount > balance) {
        std::cout << "Insufficient funds!\n";
        return 0;
    } else if (amount < 0) {
        std::cout << "Invalid amount!\n";
        return 0;
    }
    return amount;
}




*/



// Arrays in C++
/*
int main() {

   // dataType arrayName[arraySize];

    std::string car[] = {"BMW", "Mustang", "Lambo"};

    std::cout << car[0];






    return 0;
}

*/


// sizeof() = determines the size in bytes if a variable, data type, class, objects, ect.
/*
int main(){
    // characters (char) takes 1 byte of memory 
    std::string name = "Khaled JKKSDAJSDHKA";

    std::cout << sizeof(name) << "Bytes";


    return 0;
}

*/


// *NOTE* - to display all elements in the array use a for loop

// to calculate the total number of elements use sizeof(arrayName) / sizeof(DATATYPE OF ARRAY) this will give you the length of the array



// For each loop, ex.

/* 

for(std::string student : students) {
    
    std::cout << student << '\n';

}



*/
/*
double getTotal(double values[], int s);
int main() {


    double values[] = {324242.453, 433.453, 12.253, 9.009873, 9853.324, 8.21, 9.0, 4385834.53453};
    int size = sizeof(values)/sizeof(double);
    double Total = getTotal(values, size);
    std::cout << Total;

  
    return 0;
}



double getTotal(double values[], int s){

    double sum = 0;
    for(int i = 0; i < s; i++) {

        sum += values[i];


    }

    return sum;




}

*/

// Alphabet index finder
/*

int findIndex(char alphabet[], int size, char character);

int main() {

    char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    int size = sizeof(alphabet)/sizeof(char);

    int index;
    char character;


    std::cout << "Enter character to search for in the alphabet(A-Z): " << "\n";
    std::cin >> character;

    index = findIndex(alphabet, size, character);


    if(index != -1){

        std::cout << character << " is found at index " << index;
    }

    else{
        std::cout << "Character is not found!";
    }







    return 0;
}




int findIndex(char alphabet[], int size, char character) {



    for(int i = 0; i < size; i++) {


        if(alphabet[i] == character) {
            return i;
        }
    }


    return -1;




    
}

*/

/*
int main() {




    // fill() = Fills a range of elements with a specified value fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods +(SIZE/3)*2, "Burger");
    fill(foods +(SIZE/3)*2, foods + SIZE, "shawarma");

    for(std::string food : foods) {

        std::cout << food << '\n';
    }


    return 0;
}

    */



    // Entering User Input 

/*

    int main() {

        std::string favFoods[5];
        int s = sizeof(favFoods)/sizeof(std::string);

        for(int i = 0; i < s; i++) {

            std::cout << "Enter your #" << i + 1 << "  " << "top favorite food you like!" << " ";
            std::getline(std::cin, favFoods[i]);





        }

       std::cout << "You like the following food!\n";

        for(std::string f : favFoods) {

            std::cout << f << '\n';
        }







        return 0;
    }


    */



    // 2D Arrays in C++

/*

    int main() {


        std::string cars[][3] = {{"Ferrari", "BMW", "Nissan"},
                                {"Mustang", "Honda", "Mazda"},
                                {"Mercedez", "Range Rover", "Ford"}};

        int rows = sizeof(cars)/sizeof(cars[0]);
        int columns = sizeof(cars[0])/sizeof(cars[0][0]);

        for(int i = 0; i < rows; i++) {


            for(int j = 0; j < columns; j++) {

                std::cout << cars[i][j] << "\n";
            }
        }
 


                            





        return 0;

    }

    */ 
   


    // ******** MEMORY ADDRESSES ********
/*
    int main() {

        
        // memory address = a location in memory where data is stored
        // a memory address can be accessed with the & (adresss-of operator)
        std::string name = "Khaled Sayed Ali";
        int age = 17;
        bool inUni = true;


        std::cout << &name << '\n';
        std::cout << &age << '\n';
        std::cout << &inUni << '\n';








        return 0;
    }

    */


    // swapping values by using a function, first we need to pass memory references in the parameter of both values in the function

    // To modify the original variables inside a function, the function must know where they live in
    // memory, not just their current values. That’s why we pass memory references/addresses.

    // 4. Short summary
    /*
Passing values: function works with copies → original variables don’t change.
Passing references/addresses: function works with the original memory locations → original variables can be modified (e.g., swapped).
*/


/*
void swap(std::string &x, std::string &y);

int main() {

    std::string x = "Hello World!";
    std::string y = "Bye World!";

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';


    return 0;
}


void swap(std::string &x, std::string &y) {

    std::string temp;

    temp = x;
    x = y;
    y = temp;


}

*/

// const parameter = is a parameter that is effectively read-only code is more secure & conveys intent useful for references and pointers


// Pointers 

// pointers = a variable that stores a memory address of another variable sometimes its easier to work with an address

// & address-of operator 
// * dereference operator (obtain the address of a data item held in another location from a pointer)

/*
int main() {

    std::string name = "khaled Alsayed";

    std::string *pName = &name;

    std::cout << *pName;





    return 0;
}

*/


/* Null value = a special value that means something has no value.

    when a pointer is holding a null value that pointer is not pointing at anything (null pointer)


    nullptr = keyword that represents a null pointer literal 

    nullptrs are helpful when determining if an address was successfully assigned to a pointer


    *IMPORTANT* When using pointers, be careful that your code isn't dereferencing a nullptr or pointing to free memory because this
     will cause undefined behavior.







*/


/*
int main() {

    int *pointer = nullptr;

    int x = 100;

    pointer = &x;
   

    if(pointer == nullptr) {


        std::cout << "The address was not assigned\n";
        
    }

    else{
        std::cout << "The address was assigned!\n";
        std::cout << *pointer;
    }






    return 0;
}

*/



// Dynmaic Memory = memory that is allocted after the program
 //                 is already compiled and running.
 //                 use the 'new' operator to allocate memory in the heap rather than a stack. 
 //                   

// usefuk when we do not know how much memory we will need. Makes our program more flexible, 
// especially when accepting user input.

 // ____________________________EXAMPLE____________________________
 /*
int main() {
    
    char *pGrades = NULL;
    int size;

    std::cout << "Enter size of your grade array: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++) {
        std::cout << "Add your # " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int j = 0; j < size; j++) {
        std::cout << pGrades[j] << " ";
    }
    

    delete[] pGrades;




    return 0;
}

*/


// _______________________________________RECURSION_______________________________________


// recursion = a programming technique where a function
//             invokes itself from within
//             break a complex concept into a repeatable single step
// advantages = less code and is cleaner
//              useful for sorting and searching algorithms
// disadvantages = uses more memory
//                 slower

/*
int factorial(int n);

int main() {


   std::cout << factorial(13);


    return 0;
}

int factorial(int n) {
    
    if(n > 1) {
        return n * factorial(n-1);
    }
    else{

        return 1;
    }
}
*/



// Function template 

// Describes how a function looks like, can be used to generate 
// as many overloaded functions each using different data types
/**
template <typename T>


T max(T x, T y){
    return (x > y) ? x : y;

}


int main() {
    std::cout << max("1", "7") << '\n';



    return 0;
}

*/

// struct = a group of related variables under one name that contain different data types
/*

struct house {
std::string location;
double price;
int area;
}


*/


// enums = a user defined data type that consists of paired named integer constants 


/*

int main() {
    enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3,
          thursday = 4, friday = 5, saturday = 6};

    Day today = sunday;

    switch(today){
    case sunday:    std::cout << "It is Sunday!\n";
                    break;
    case monday:    std::cout << "It is Monday!\n";
                    break;
    case tuesday:   std::cout << "It is Tuesday!\n";
                    break;
    case wednesday: std::cout << "It is Wednesday!\n";
                    break;
    case thursday:  std::cout << "It is Thursday!\n";
                    break;
    case friday:    std::cout << "It is Friday!\n";
                    break;
    case saturday:  std::cout << "It is Saturday!\n";
                    break;
}



    return 0;
}

*/

//USING OBJECTS 

// always remember to add a semi-colon in the end of a class
/*
class water{
    public:
    double ph;
    std::string waterType;
    double volume;

    void use(){
        std::cout << "Water is being used\n";
    }

    void stop() {
        std::cout << "The process is being stopped!\n";
    }






};


int main() {
    
    water bottle1; // making an object 
    bottle1.ph = 7.0;
    bottle1.waterType = "Mineral Water";
    bottle1.volume = 750.50;

    std::cout << bottle1.ph << '\n';
    std::cout << bottle1.waterType << '\n';
    std::cout << bottle1.volume << '\n';

    bottle1.use();
    bottle1.stop();






    return 0;
}

*/



// ***********CONSTRUCTORS***********


// constructor = a special method that is automatically called when an object is instantiated 
//               useful for assigning values to attributes as arguments


// **************** REMEMBER ALWAYS PUT SEMI-COLON AT THE END OF A CLASS ****************
/*

class Human{
    public:
    std::string name;
    int age;
    std::string gender;
    std::string ethnicity;
    std::string EmailAddr;


    Human(std::string name, int age, std::string gender, std::string ethnicity, std::string EmailAddr) {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->ethnicity = ethnicity;
        this->EmailAddr = EmailAddr;
    }







};


int main() {
    std::string name;
    int age;
    std::string gender;
    std::string ethnicity;
    std::string EmailAddr;

    std::cout << "Enter your name: " << '\n';
    std::cin >> name;
    std::cout << "Enter your age: " << '\n';
    std::cin >> age;
    std::cout << "Enter your gender: " << '\n';
    std::cin >> gender;
    std::cout << "Enter your ethnicity: " << '\n';
    std::cin >> ethnicity;
    std::cout << "Enter your Email Address: " << '\n';
    std::cin >> EmailAddr;

    

    Human person1(name, age, gender, ethnicity, EmailAddr);

    std::cout << "Your Name is: " << name << '\n';
    std::cout << "Your age is " << age << '\n';
    std::cout << "Your gender is " << gender << '\n';
    std::cout << "Your ethnicity is " << ethnicity << '\n';
    std::cout << "Your personal email address is " << EmailAddr << '\n';





    return 0;
}

*/



// Overloaded constructors


// overloaded constructors = multiple constructors w/ the same name but different parameters 
//                           allows for varying arguments when instantiating an object


/*
#include <iostream>
#include <string>

class Pizza {
    public:
        std::string topping1;
        std::string topping2;

        // Constructor with no parameters
        Pizza() {
            topping1 = "cheese";
            topping2 = "pepperoni";
        }

        // Constructor with one parameter
        Pizza(std::string topping1) {
            this->topping1 = topping1;
            this->topping2 = "pepperoni";
        }

        // Constructor with two parameters
        Pizza(std::string topping1, std::string topping2) {
            this->topping1 = topping1;
            this->topping2 = topping2;
        }
};

int main() {
    Pizza pizza1;                           // Uses no-parameter constructor
    Pizza pizza2("mushrooms");              // Uses one-parameter constructor
    Pizza pizza3("sausage", "olives");      // Uses two-parameter constructor

    std::cout << "Pizza 1: " << pizza1.topping1 << " and " << pizza1.topping2 << '\n';
    std::cout << "Pizza 2: " << pizza2.topping1 << " and " << pizza2.topping2 << '\n';
    std::cout << "Pizza 3: " << pizza3.topping1 << " and " << pizza3.topping2 << '\n';

    return 0;
}
*/




// __________________________________________
// Abstracton = hiding unnecessary data from outside the class
// getters = function that makes a private attribute READABLE
// setters = function that makes a private attribute WRITEABLE

// EXAMPLE OF GETTERS AND SETTERS
/*
class Stove{
    private:
    int temperature = 0;
    public:

    int getTemperature() {
        return temperature;
    }

    Stove(int temperature) {
        setTemperature(temperature);
    }


    void setTemperature(int temperature) {
        if(temperature < 0) {
            this->temperature = 0;

        }
        else if(temperature >= 10) {
            this->temperature = 10;

        }
        else{
            this->temperature = temperature;
        }

    }









};


int main() {

    Stove stove(54);

    stove.setTemperature(5);


    std::cout << "The settings is set to " << stove.getTemperature();





    return 0;
}

*/





// Inheritence

// inheritance = a class can receive attributes and methods from another class
//               children classes inherit from a parent class
//               helps to reuse similar code found within multiple classes


/*

class Animal {
    public:
        bool alive = true;

        void eat() {
            std::cout << "This animal is eating\n";
        }
};

// Derived class (child) - inherits from Animal
class Dog : public Animal {
    public:
        void bark() {
            std::cout << "The dog goes woof!\n";
        }
};

// Another derived class (child) - inherits from Animal
class Cat : public Animal {
    public:
        void meow() {
            std::cout << "The cat goes meow!\n";
        }
};

int main() {
    Dog dog;
    Cat cat;

    // Dog can use its own methods and inherited methods
    std::cout << "Dog is alive: " << dog.alive << '\n';
    dog.eat();      // Inherited from Animal
    dog.bark();     // Dog's own method

    std::cout << '\n';

    // Cat can use its own methods and inherited methods
    std::cout << "Cat is alive: " << cat.alive << '\n';
    cat.eat();      // Inherited from Animal
    cat.meow();     // Cat's own method

    return 0;
}
*/