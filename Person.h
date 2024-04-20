#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

class Person {
public:
    std::string name;
    std::vector<Person*> friends;

    Person(std::string n);

    void addFriend(Person* friendPtr);
};

#endif // PERSON_H

