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
    try//should display 'b'
    {
        cout<<endl <<character('a',1);
    }
    catch (string ex)
    {
        cout<<endl <<ex;
    }
    
    try//should throw invalidRangeException
    {
        cout<<endl <<character('a',-1);
    }
    catch (string ex)
    {
        cout<<endl <<ex;
    }
    
    try//should display 'Y'
    {
        cout<<endl <<character('Z',-1);
    }
    catch (string ex)
    {
        cout<<endl <<ex;
    }
    
    try//should throw invalidCharacterException
    {
        cout<<endl <<character('?', 5);
    }
    catch (string ex)
    {
        cout<<endl <<ex;
    }
    
    try//should throw invalidCaseException
    {
        cout<<endl <<character('A', 32);
    }
    catch (string ex)
    {
        cout<<endl <<ex;
    }
    
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
