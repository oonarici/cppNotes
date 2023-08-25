//------>>> Initilization <<<----------

/*
// when static life time aritmatic type objects initiliza by default, it is initilize by zero
//zero initilization 
int z;

//if it is boolean, it starts with false
bool flag;

//when object is pointer, it start with nullptr
int* p; 

int main()
{
    int x; // default initilization, value is undetermined.
    //const int y; arithmatic cons variables cannot be initiliza by default 

    int h = 10; // copy initilization
    int u(20);  // direct initilization
    int p{10};  //uniform initilization or brace initilization. While using unifor initilization, 

    double dVal = 3.14;
    int iVal1 = 3.14; // >>> iVal1 is 3
    // int iVal2 {dVal}; // >>> uniform initilization with narrowing conversion syntax error

    //Why brace initilization added?
    // - Because it is uniform, it can be used eveywhere
    // - Narrowing conversion protected
    // - Most vaxing parse protexted

    int d{}; //Value initilization, value is zero.
    bool f{}; //fasle
    int* ptr{}; //nulptr
}
*/
//------------------------------------------------------------------------------------
/*
#include <iostream>

int x = 10;

int main()
{
    int x = x;    
    std::cout << x << "\n";
    //is it syntax error?
    //is local variable x initilized with global variable x?
    // Is it undefined behaviour?
    //it is undefined behaviour. When we initilize local x variable, we are in the scope of local x. We are trying to initilize local x with, local x garbage value.
}
*/

//--------------------------------------------------------------------------------------
/*
#include <iostream>

int x = 10;

int main()
{
    int x = 40;
    std::cout << x << "\n" 
              << ::x << "\n";

    return 0;
}
*/