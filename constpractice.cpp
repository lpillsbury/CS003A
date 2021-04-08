// trying out constant char *
#include <iostream>

int main(){
    const char* c = "Hello";
    const char* d = "green eggs and ham";
    c = "Hi this is me";
    // this doesn't compile because they are constant *c = *d;
    std::cout << c << std::endl;
    // why doesn't this compile?  c[4] = 5;

    //*c is the first value in the array d+4 is the whole array starting with 5th position
    std::cout<< *c << std::endl << d + 4 << std::endl;

    //&c and &d are addresses
    std::cout<< &c << std::endl << &d << std::endl;
    
    // I can change the value of c
    c = d;
    std::cout << c << std::endl;

    // *c = 'M';   error: assignment of read-only location ‘* c’
    // std::cout << c << std::endl;

    // the address of c and d don't change
    std::cout<< &c << std::endl << &d << std::endl;

    char const* e = "what is this";  // this seems to be the same as const char* (don't believe what you read on the internet)
    // or maybe it's different for single letters?
    e = "its blue";
    std::cout << e << std::endl;
    // this doesn't work e = &d;
    e = d;
    std::cout << e << std::endl;

    /* this doesn't work either and I'm confused
    char* const f = "yet another constant";
    // f = d;  error: assignment of read-only variable ‘f’
    std::cout << f << std::endl;
    */

    const char f = 'i';
    d = &f;  // this does seem to work for a single character
    std::cout<< &f << std::endl << &d << std::endl;
    std::cout << d << std::endl;

    const* char f = "let's finish this";
    std::cout<< &f << std::endl << f << std::endl;
    
    // this is what I'd expect:
    // f = "something"; error
   // &f = d;
    /* does not work:
    f = d;
    std::cout<< &f << std::endl << f << std::endl;
    f = &d;
    std::cout<< &f << std::endl << f << std::endl; */

}