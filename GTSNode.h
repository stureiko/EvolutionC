//
// Created by stureyko on 24.05.2018.
//
#include <string>
using namespace std;
#ifndef EVOLUTION_GTSNODE_H
#define EVOLUTION_GTSNODE_H


class GTSNode {
private:
    int x, y, id;
public:
    int getId() const;

    void setId(int id);

private:
    string name;
public:
    GTSNode();

    GTSNode(int x, int y, const string &name, const int id);

    void setX(int x);
    void setY(int y);
    int getX() const;
    int getY() const;
    string getName() const;
    void setName(string name);
    void PrintCoordinates();
    void ToString();
};

#endif //EVOLUTION_GTSNODE_H
