#ifndef GRAPH_H
#define GRAPH_H

#include <list>


template <class T>
class Graph
{
public:
    Graph(int Nodes);

    void addEdge(int node1, int node2, T weight);
    void shortestPath(int src, int dst);

private:
    int nNodes;
    std::list<std::pair<int, T>> *adjacents;
};

#endif // GRAPH_H
