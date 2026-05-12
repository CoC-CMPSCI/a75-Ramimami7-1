#ifndef MAIN_HPP
#define MAIN_HPP


#include <iostream>
#include <cstring>
using namespace std;

int finduserstring(char[], int, char[], int);

int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen)
{
    for (int i = 0; i <= cstrlen - userlen; i++)
    {
        int j = 0;

        while (j < userlen && cstr[i + j] == userstr[j])
        {
            j++;
        }

        if (j == userlen)
        {
            return i;
        }
    }

    // userstr was not found in cstr
    return -1;
}

#endif