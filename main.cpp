#include <iostream>
#include <patient.h>
#include <doctor.h>
#include "human.h"
#include <conio.h>

using namespace std;
const int Size=4;
int main()
{


    Human *mass[Size];
    Human *temp;
    int i=0;
    cout<<"Enter 1 or 2"<<endl;
    while (i<Size)
    {



        switch (_getch())
        {
        case '1':
            cout<<"Enter info"<<endl;
            temp= new Patient;
            temp->input();
            mass[i]=temp;
            i++;
            break;

        case '2':
            cout<<"Enter info"<<endl;
            temp= new Doctor;
            temp->input();
            mass[i]=temp;
            i++;
            break;
        }
    }
    for (int i=0;i<Size;i++)
    {
        mass [i]->output();
        mass[i]->print();
    }
    return 0;
}
