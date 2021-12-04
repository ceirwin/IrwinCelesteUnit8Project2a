//
//  main.cpp
//  IrwinCelesteUnit8Project2a
//
//  Created by Celeste Irwin on 12/3/21.
//
//Celeste Irwin
//CIS 1202 800
//12-03-2021

#include <iostream>

using namespace std;

char character(char, int);

int main(int argc, const char * argv[])
{
    
    return 0;
}

char character(char start, int offset)
{
    if (!isalpha(start))
        throw "invalidCharacterException\n";
    else if (!isalpha((char)((int)start+offset)))
        throw "invalidRangeException";
    else if(start<'A' && ((char)((int)start+offset))>'z')
        throw "invalidCaseException";
    else if(start>'z' && ((char)((int)start+offset))<'A')
        throw "invalidCaseException";
    else
        return (char)((int)start+offset);
}
