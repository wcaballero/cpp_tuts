//
// Created by William Caballero-Ramos on 12/7/18.
//

#include <iostream>
#include "Pointer.h"


void ptrExample1()
{
    std::cout << "----------------------------------Pointers--------------------------------------------------------\n";
    int var = 8;
    int* pVar = &var;
    std::cout << "The value of the variable is " << var << "\nThe address of the variable is " << pVar << std::endl;
}

/**
 * Playing around with the basics of pointers
 */
void ptrExample2() {
    std::cout << "----------------------------------Pointers--------------------------------------------------------\n";
    int age = 19;
    // save the address of age into a pointer
    int *pAge = &age;
    // dereference the pointer to get the value
    std::cout << "The address of pAge is " << pAge << " and the value is (dereference) " << *pAge <<std::endl;
}

/**
 *  References are similar to pointers but can not be NULL and have to be assigned when declared.
 *  They however do not create a new variable in memory
 *  int& - the & belongs to int the whole thing is part of the type
*/
void referenceExample1(int& value) {
    value++;
}

/**
 * If we did not make int& take in a reference we would have to use a pointer to pass by value
 */
// int a = 8;
// referenceExample1(a);

/**
 * It looks cleaner to use reference instead of pointers.
 * According to Cherno references are used frequently
 */
//void referenceExample1(int* value) {
//    // ++ has a higher precedence than dereferencing * so put parenthesis
//    (*value)++;
//}
//int a = 8;
//referenceExample1(&a);