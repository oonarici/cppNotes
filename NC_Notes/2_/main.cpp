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
enum class Color {Red, Black, White}; //Red, Black, White are called enumarators

Why is enum class added?
 - underlying types differs according to compiler. If you use enum incomlete type, it is a syntax error
 - Altough other types cannot be converted to enum type,  enum type can be converted automatically to aritmatic types.

 int main()
 {
    int ival;
    Color myColor = Black;

    ival = myColor; //it is legal but it wrong.
 }

int main()
{
  enum ScreenColour {Red, Black, White};
  enum TrafficLight {Red, Yellow, Green};

  //Why Red is given to differen objects is syntax error both C and C++
}
//To fix this
int main()
{
  enum class ScreenColour :{Red, Black, White};
  enum class TrafficLight {Red, Yellow, Green};

  // "::" => scope resolution operator

  //ScreenColour myColour = Red; // is syntax error
  ScreenColour myColour = ScreeenColour::Red; // is legal

  int iVal = myColour; // is Syntax error
}
*/