//
// Created by stureyko on 24.05.2018.
//
#include <iostream>
#include <string>
#include "GTSNode.h"
using namespace std;

int GTSNode::getX() const {
    return x;}

int GTSNode::getY() const {
    return y;}

void GTSNode::setX(int x) {
    GTSNode::x = x;}

void GTSNode::setY(int y) {
    GTSNode::y = y;}

GTSNode::GTSNode() {
    x = 0;
    y = 0;
    name = "";
}

void GTSNode::PrintCoordinates() {
    cout << x << endl;
    cout << y << endl;
}

string GTSNode::getName() const {
    return name;}

void GTSNode::setName(string name) {
    GTSNode::name = name;}

void GTSNode::ToString() {
    cout << getName() << endl;
}

GTSNode::GTSNode(int x, int y, const string &name, const int id) : x(x), y(y), name(name), id(id) {}

int GTSNode::getId() const {
    return id;
}

void GTSNode::setId(int id) {
    GTSNode::id = id;
}
