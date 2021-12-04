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
#include <string>

using namespace std;

char character(char, int);

int main(int argc, const char * argv[])
{
    try//should display 'b'
    {
        cout<<endl <<character('a',1);
    }
    catch (const char *ex)
    {
        cout<<endl <<ex;
    }
    
    try//should throw invalidRangeException
    {
        cout<<endl <<character('a',-1);
    }
    catch (const char *ex)
    {
        cout<<endl <<ex;
    }
    
    try//should display 'Y'
    {
        cout<<endl <<character('Z',-1);
    }
    catch (const char *ex)
    {
        cout<<endl <<ex;
    }
    
    try//should throw invalidCharacterException
    {
        cout<<endl <<character('?', 5);
    }
    catch (const char *ex)
    {
        cout<<endl <<ex;
    }
    
    try//should throw invalidCaseException
    {
        cout<<endl <<character('A', 32);
    }
    catch (const char *ex)
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
    else if(islower(start) && isupper((char)((int)start+offset)))
        throw "invalidCaseException";
    else if(isupper(start) && islower((char)((int)start+offset)))
        throw "invalidCaseException";
    else
        return (char)((int)start+offset);
}
