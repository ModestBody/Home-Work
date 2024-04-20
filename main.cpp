#include <iostream>
#include "Person.h"
#include "Graph.h"

int main() {
    Graph socialGraph;

    Person* person1 = new Person("Bogdan");
    Person* person2 = new Person("Maksim");
    Person* person3 = new Person("Zurab");

    socialGraph.addPerson(person1);
    socialGraph.addPerson(person2);
    socialGraph.addPerson(person3);

    socialGraph.addFriendship(person1, person2);
    socialGraph.addFriendship(person2, person3);

    socialGraph.findPairsWithinDepth(3);

    delete person1;
    delete person2;
    delete person3;

    return 0;
}
