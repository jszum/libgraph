#include "include/graph.h"

#include <algorithm>

#include <map>

template <class T>
Graph<T>::Graph(int Nodes)
{
    nNodes = Nodes;
    adjacents = new std::list<std::pair<int, T>>[nNodes];
}

template <class T>
void Graph<T>::addEdge(int node1, int node2, T weight)
{
    adjacents[node1].push_back(std::make_pair(node2, weight));
    adjacents[node2].push_back(std::make_pair(node1, weight));
}

template<class T>
void Graph<T>::shortestPath(int src, int dst)
{

}

template class Graph<int>;

