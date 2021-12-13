#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include <iostream>
using namespace std;

class Human
{
public:
    Human();
    Human(int id, string middlename, string name, string lastname,
          string adress);
    virtual void input();
    virtual void output();
protected:
    int id;
    string middlename;
    string name;
    string lastname;
    string adress;
};

#endif // HUMAN_H
