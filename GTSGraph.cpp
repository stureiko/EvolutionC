//
// Created by stureyko on 24.05.2018.
//
#include <iostream>
#include "GTSGraph.h"
using namespace std;

const map<int, GTSNode> &GTSGraph::getNodes() const {
    return nodeList;
}

int GTSGraph::addNode(int &key, const GTSNode &node) {
    if (nodeList.count(key)){
        cerr << "Failure adding new node. This key = "<< key << " already exists.\n";
        return -1;
    }
    else{
        nodeList.insert({key, node});
        return 0;
    }
}

int GTSGraph::getNodesCount() {
    return nodeList.size();
}
