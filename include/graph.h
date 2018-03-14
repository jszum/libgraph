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
    std::tuple<int, int, T> getEdge(int num);

private:
    std::vector<std::tuple<int, int, T>> edges;
    bool edgeExists(std::tuple<int, int, T> edge);
};

#endif // GRAPH_H
