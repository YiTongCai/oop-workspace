#include <iostream>
#include "person.h"
extern PersonList createPersonList (int n);

int main(){
    int n = 2;
    PersonList List = createPersonList(n);
    for (int i = 0; i < n; ++i){
        std::cout << "Name : " << List.people[i].name << "Age : " << List.people[i].age << std::endl;
    }
    delete [] List.people;
    return 0;
}