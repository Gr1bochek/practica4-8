#ifndef DOCTOR_H
#define DOCTOR_H
#include<iostream>
#include <human.h>
using namespace std;

class Doctor : public Human
{
    string telefon;
    string specializing;
public:
    Doctor();
    void input() override;
    void output() override;
    void print() override;
};
#endif // DOCTOR_H
