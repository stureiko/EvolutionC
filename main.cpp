#include <iostream>
#include "GTSNode.h"
#include "GTSGraph.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    GTSGraph graph;

    for (int i = 0; i < 3; i++){
        if (graph.addNode(i, GTSNode(0, 0, "name", i))!=0) {
            cout << "Failure adding new node. This key already exists.";
            break;
        }
    }
    cout << graph.getNodesCount();
    return 0;

}