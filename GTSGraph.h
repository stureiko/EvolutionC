//
// Created by stureyko on 24.05.2018.
//
#include <map>
#include "GTSNode.h"

#ifndef EVOLUTION_GTSGRAPH_H
#define EVOLUTION_GTSGRAPH_H
using namespace std;

class GTSGraph {
private:
    map<int, GTSNode> nodeList;
public:
    const map<int, GTSNode> &getNodes() const;
    int addNode(int &key, const GTSNode &node);
    int getNodesCount();
};


#endif //EVOLUTION_GTSGRAPH_H
