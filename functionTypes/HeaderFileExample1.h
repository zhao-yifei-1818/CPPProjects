#ifndef HEADERFILEEXAMPLE1_H
#define HEADERFILEEXAMPLE1_H
//Header files should generally not contain function and variable definitions, so as not to violate the one definition rule. An exception is made for symbolic constants (which we cover in lesson 4.13 -- Const variables and symbolic constants).
// 1) We really should have a header guard here, but will omit it for simplicity (we'll cover header guards in the next lesson)

// 2) This is the content of the .h file, which is where the declarations go
int add(int x, int y); // function prototype for add.h -- don't forget the semicolon!


#endif // HEADERFILEEXAMPLE1_H
