#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int N = 5000;

int makeNameRecord(string state[], string gender[], int year[], string name[], int count[])
{
    ifstream infile("babyname.txt");

    if (!infile)
    {
        cout << "Error: could not open babyname.txt" << endl;
        return 0;
    }

    int cnt = 0;

    while (infile >> state[cnt] >> gender[cnt] >> year[cnt] >> name[cnt] >> count[cnt])
    {
        cnt++;
        if (cnt >= N)
            break;
    }

    infile.close();
    return cnt;
}

void printoutcontents(string state, string gender, int year, string name, int count)
{
    cout << "State: "  << state  << "  "
         << "Gender: " << gender << "  "
         << "Year: "   << year   << "  "
         << "Name: "   << name   << "  "
         << "Count: "  << count  << endl;
}

void printoutallrecords(int cnt, string state[], string gender[], int year[], string name[], int count[])
{
    cout << "=== All Records (" << cnt << " total) ===" << endl;

    for (int i = 0; i < cnt; i++)
    {
        printoutcontents(state[i], gender[i], year[i], name[i], count[i]);
    }
}

int findNames(int cnt,
              string state[], string gender[], int year[],
              string name[],  int count[],
              char starting,  string stname)
{
    int found = 0;

    cout << "=== Names starting with '" << starting
         << "' in state '" << stname << "' ===" << endl;

    for (int i = 0; i < cnt; i++)
    {
        if (state[i] == stname && name[i][0] == starting)
        {
            printoutcontents(state[i], gender[i], year[i], name[i], count[i]);
            found++;
        }
    }

    cout << "Total records found: " << found << endl;
    return found;
}

int main()
{
    string state[N], gender[N], name[N];
    int    year[N],  count[N];

    int cnt = makeNameRecord(state, gender, year, name, count);
    cout << "Records loaded: " << cnt << endl << endl;

    printoutallrecords(cnt, state, gender, year, name, count);
    cout << endl;

    findNames(cnt, state, gender, year, name, count, 'J', "CA");

    return 0;
}

#endif