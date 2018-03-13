#include "include/graph.h"

template <class T>
Graph<T>::Graph()
{
}

template <class T>
void Graph<T>::addEdge(int node1, int node2, T weight)
{
    std::tuple<int, int, T> new_edge(node1,node2,weight);
    edges.push_back(new_edge);
}

template class Graph<int>;

