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

#include <iostream>

void func(int = 10, int = 20, int = 30);

int main()
{
    func(7, 8, 9);
    func(7, 8);
    func(7);
    func();
}

void func(int x, int y, int z)
{
    std::cout << "x = " << x << " y = " << y << " z = " << z << "\n";
}