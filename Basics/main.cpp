/* Basic tutorial from https://www.youtube.com/watch?v=vLnPwxZdW4Y */


#include <iostream>
#include <cmath>
#include <string>

void printPattern();
void getInput();
double additionCalculator();
double power();
void pointers();
void classExample();

/**
 * Class is similar to a blueprint or specifications
 * Fields are the variables or data structures it can store
 * Methods are used to manipulate the state or fields or perform an operation
 */
class Book {
/**********************************Header(.h) is used for field declarations and method signatures*********************/
    // Public Fields of the class Book are accessible by everyone
public:
    std::string title;
    std::string author;
    int pages;
    static int size; // needs to be initialized outside of the scope / class.
    char *_title;
    size_t sizeOfText;

    // Constructor for the class
    Book() {
        std::cout << "Calling the constructor for the Book class.\n\t" << ++size <<" Book(s) created!" << std::endl;
    }

    // Constructor 2 is used for the Destructor example. source: https://msdn.microsoft.com/en-us/library/6t4fe76c.aspx
    Book(char *ch) {
        sizeOfText = strlen( ch ) + 1;

        // Dynamically allocate the correct amount of memory.
        _title = new char[ sizeOfText ];

        // If the allocation succeeds, copy the initialization string.
        if( _title )
            strcpy( _title, ch );
    }

    /**
     * Destructor is used to deallocate the memory that was previosly reserved. and gets called when the object is destroyed.
     * do not accept args
     * can't specify any return value (including void)
     * can't return a value using the return statement
     * can't be const, volatile, or static
     * can be declared as virtual.
     */
    ~Book() {
        std::cout << "De-allocating the memory that was previously reserved for _title!" <<std::endl;

        if (_title)
            delete[] _title;
    }

};

class GfG
{
public:
    static int i;

    GfG()
    {
        // Do nothing
    };
};

/** Static fields / variables
 * a static variable inside a class should be initialized explicitly by the user using the class name and scope
 * resolution operator outside the class as shown below.
 * Source: https://www.geeksforgeeks.org/static-keyword-cpp/
 */
int Book::size = 0;
int GfG::i = 1;

/** some code runs before main and some code runs after main.
 * Main has a return for that reason
 * 0 - everything ran fine
 * @return
 */
int main() {
    std::cout << "----------------------------------Main----------------------------------------------\n";
    std::cout << "Hello, World!" << std::endl;
    std::cout << "My name is William Caballero." << std::endl;

//    printPattern();
//    getInput();
//    additionCalculator();
//    power();
//    pointers();
    classExample();

    return 0;
}

void classExample() {
    std::cout << "----------------------------------Class-----------------------------------------------------------\n";
    // How to create an instance of a class
//    Book book1;
//    Book book2;
//    std::cout << "class Book field size: " << book2.size <<std::endl;

    GfG obj;
    std::cout << "class GfG field i: " << obj.i << std::endl;

    // Making use of constructor and destructor
    Book book3("Programming: Principles and Practice Using C++");
    std::cout << "The title of the book is " << book3._title << std::endl;
}

/**
 * Playing around with the basics of pointers
 */
void pointers() {
    std::cout << "----------------------------------Pointers--------------------------------------------------------\n";
    int age = 19;
    // save the address of age into a pointer
    int *pAge = &age;
    // dereference the pointer to get the value
    std::cout << "The address of pAge is " << pAge << " and the value is (dereference) " << *pAge <<std::endl;
}

/**
 * Find the power(baseNum, expNum)
 * @return
 */
double power() {
    std::cout << "----------------------------------Power-----------------------------------------------------------\n";
    int one = -3;
    int two = 4;
    int result = 1;

    for (int i = 0; i < two; i++){
        result *= one;
    }
    std::cout << "The result is " << result << std::endl;
    std::cout << "Result using math.pow " << pow(one, two) << std::endl;
    return result;
}

/**
 * Calculator takes in 2 numbers from the user and outputs a value
 * @param numOne
 * @param numTwo
 * @return
 */
double additionCalculator() {
    std::cout << "----------------------------------additionCalculator----------------------------------------------\n";
    double numOne, numTwo;
    std::cout << "1st Number: ";
    std::cin >> numOne;
    std::cin.ignore();
    std::cout << "2nd Number: ";
    std::cin >> numTwo;
    std::cin.ignore();

    std::cout << numOne << " + " << numTwo << " = " << numOne + numTwo << std::endl;
    return numOne + numTwo;
}

/**
 * Function to get user input using cin
 */
void getInput() {
    std::cout << "----------------------------------getInput--------------------------------------------------------\n";
    int age;

    std::cout << "(int age) Enter your age: ";
    /** cin only grabs the first couple of characters before a space **/
    std::cin >> age;
    std::cin.ignore(); // ignore the \n character not grabbed by cin
    std::cout << "Your age is " << age << std::endl;


    std::string name;
    std::cout << "(string name) Enter your name: ";
    /** getline - reads the entire line */
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << std::endl;
}

/**
 * Function prints 2 different patterns
 * 1. one in ascending order
 * 2. second in descending order
 */
void printPattern() {
    std::cout << "----------------------------------printPattern----------------------------------------------------\n";
    char star = '*';
    /** Programs prints in ascending order
     *  *
     *  **
     *  ***
     *  ****
     */
    for ( int i = 0; i < 4; i++ ) {
        for ( int j = 0; j <= i; j++ ) {
            std::cout << star;
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    /** Programs prints in descending order
     *  ****
     *  ***
     *  **
     *  *
     */
    for ( int i = 4; i >= 0; i-- ) {
        for ( int j = 0; j <= i; j++ ) {
            std::cout << star;
        }
        std::cout << std::endl;
    }
}