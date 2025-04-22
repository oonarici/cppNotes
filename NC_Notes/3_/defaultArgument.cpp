/*
//x is a formal parameter or it is called parameter
void func(int x)
{

}

int main()
{
    func(12); //12 is a argument
}
*/

/*

//variadic function
int printf(const char*, ...);  //... is called elipsis

int main()
{

}
*/

//-------------------------------------------------------------------
/*
#include <iostream>

//there is no extra cost for running time using default argument
void func(int = 10, int = 20, int = 30);

int main()
{
    func(7, 8, 9);
    func(7, 8);
    func(7);
    func();
}

//Default argument should be in decleration, if there is decleration. If there is just definition, it could be default argument.
void func(int x, int y, int z)
{
    std::cout << "x = " << x << " y = " << y << " z = " << z << "\n";
}
*/

//---------------------------------------------------------------

//>>>>>>>>>>>> function re-decleration <<<<<<<<<<<<

/*
#include "asd.h"

void foo(int, int, int = 10); //assume that its a function which is declared in asd.h header file and we can re-declera it without changing number of function parameter
                              //compiler evaluate it as cumulative.
int main(){ foo(1, 3); }
*/

//using just first argument as a syntax error, how can we do it? By wrapping the function
/*
#include "asd.h"

void foo(int x, int y, int y);

void call_foo(int y, int z, int x = 10)
{
    foo(x, y, z);
}


int main(){ call_foo(1, 3); }
*/
