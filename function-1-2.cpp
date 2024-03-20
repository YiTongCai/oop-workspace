#include <iostream>
#include "person.h"
PersonList createPersonList (int n){
    PersonList List;
    List.numPeople = n;
    List.people = new Person[n];
    for (int i = 0; i < n ;i++){
        List.people[i].name = "John Doe";
        List.people[i].age = 1;
    }
    return List;
}
