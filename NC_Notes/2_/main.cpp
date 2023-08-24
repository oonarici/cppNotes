/*
                                ---> C Language Inside C++ <---

---> User defined Types <---
In C there are 3 types user-defined types
  - structures
  - unions
  - enumrations

In C++
  - structures ==> class
  - unions
  - enumrations

  In C user-defined must have at least one value. But not in C++ and its called empty class.


//Data, Nec, Color are called tag
struct Data{
    int x;
};

union Nec{
    int x;
    int y;
};

enum Color {Red, Black, White};


int main()
{
    //In C you should express typedef
    struct Data d;

    //In C++ there is no need
    Data myData;
}
*/

//-------------------------------------------------------------------------------------------------------

/*
---> Enumarations <---

//It is an int sub type, underlying type
enum Color {Red, Black, White};

//In modern C++ developer can defined underlying type.
enum Color : unsigned char {Red, Black, White};


//In C++ 
//scoped enum
enum class Color {Red, Black, White};
*/