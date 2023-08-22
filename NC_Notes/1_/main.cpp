/*
---> C++ is a multi-paradigm programming language. A mult,-paradigm languages allows developer to use single or mix parts of
different programming paradigm. C++ as a mult-paradigm programming language supports single or mixed approaches using Procedural
or OOP and mixing in utilization of Generic and even Functional programming programming concepts.
In bigger projects because of this colloboration of paradigms C++ is using.

---> C++ efficiency focused programming language
*/

//----------------------------------------------------------------------------------------------------

/*
                                ---> C Language Inside C++ <---

---> implicit int
There is a implicit type conversion in C.
Implicit int means that somehere type decleration is not written, compiler evaluates the type as signed int. 
func(void)
{
    //if type of return is not written, C language assume that it is int,
    //but not valid in C++. In C++ you must write return type, C++ does not support implicit int.
}
*/

//-------------------------------------------------------------------------------------------------------

/*
---> Function Parameters in C/C++ <---
In C language
int func(); does not mean func() does not have parameters, it means that parameters does not specified.

void foo(void)
{
    func(1, 2, 3); //it is valid in C.
}

void foo(void); means that foo doesn't have parameters.
*/

//-----------------------------------------------------------------------------------------------------------

/*
---> Scope Leakage <---
Whenever we need and variable, then we should declare it.

*/

//-----------------------------------------------------------------------------------------------------------

/*
---> C++ has got its own type casting operators <---
 - static_cast
 - const_cast
 - reinterpret_cast
 - dynamic_cast

 You can convert void type to any type in C, but you cannot do it in C++
*/

//-----------------------------------------------------------------------------------------------------------

/*
---> Character Literal <---
 
 int main()
 {
    'A' // it is called character constant int C and type is int
        // In C++ character literal and type is char. There is type difference between C and C++
        // It is important in function overloading for example
 }

 int main()
 {
    "asdfdc" // In C char char[7] or char*
             // In C++ const char[7] or const char*
 }
*/

//-----------------------------------------------------------------------------------------------------------

/*
---> Array Decay <---
int main()
{
    int a[10] = {0};

    //When we use name of array in an expression, Compiler convert array's name to address of first element's except two situations.
    //There is no difference betwee writin a or &a[0]. This is called array decay, or array to pointer converstion

    int *p = a;      //Same
    int *p = &a[0];  //Same
}
*/

//-----------------------------------------------------------------------------------------------------------

/*
---> const keyword Difference <---

*/