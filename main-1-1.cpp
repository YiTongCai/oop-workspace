#include <iostream>
#include "Person.h"
extern Person* createPersonArray (int n);

int main(){
    int n = 2;
    Person* PersonArray = createPersonArray(n);
    for (int i = 0; i < n; ++i){
        std::cout << "Name : " << PersonArray[i].name << "Age : " << PersonArray[i].age << std::endl;
    }
    delete [] PersonArray;
    return 0;
}