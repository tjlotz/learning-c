#include <stdio.h>

int main()
{

    int myValue;           // Delcare an interger variable
    int *pointerToMyValue; // Delcare a pointer to an integer, where * indicates that pointerToMyValue will hold an address to an int

    myValue = 5; // Assign the value 5 to the variable myValue

    pointerToMyValue = &myValue; // Assign the address of myValue to the pointer using the address-of-operator

    int myNewValue = *pointerToMyValue + 5; // This does not change the value at the pointer's address because the operation uses dereferencing, meaning it only reads the value stored at the address

    printf("Value of myValue (myValue): %d\n", myValue);                                    // Prints the value stored in myValue
    printf("Address of myValue (&myValue): %p\n", &myValue);                                // Prints the address of the myValue variable
    printf("Pointer stores (pointerToMyValue): %p\n", pointerToMyValue);                    // Prints the address stored in the pointer
    printf("Value at pointer (dereferenced) (*pointerToMyValue): %d\n", *pointerToMyValue); // Prints the value at the address
    printf("My new value (myNewValue): %d\n", myNewValue);                                  // Prints the value of a variable storing the outcome of adding 5 to the number stored at the address

    *pointerToMyValue = 20;                                                                      // Changes the value at the address
    printf("myValue after changing the value at the assigned address (myValue): %d\n", myValue); // Prints the change to the value stored at the address

    return 0;
}
