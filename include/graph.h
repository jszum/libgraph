#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <tuple>

template <class T>
class Graph
{
public:
    Graph();

    void addEdge(int node1, int node2, T weight);

private:
    std::vector<std::tuple<int, int, T>> edges;
};

#endif // GRAPH_H
