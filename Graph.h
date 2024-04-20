#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <unordered_set>
#include "Person.h"

class Graph {
private:
    std::vector<Person*> people;

public:
    void addPerson(Person* person);
    void addFriendship(Person* person1, Person* person2);
    void findFriendsOfFriendsWithinDepth(Person* person, int depth, std::unordered_set<Person*>& friendsSet);
    void findPairsWithinDepth(int depth);
};

#endif // GRAPH_H


