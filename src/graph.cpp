#include "include/graph.h"

#include <algorithm>

template <class T>
Graph<T>::Graph()
{
}

template <class T>
void Graph<T>::addEdge(int node1, int node2, T weight)
{
    if(node1 > node2) {
        int tmp = node1;
        node1 = node2;
        node2 = tmp;
    }
    std::tuple<int, int, T> new_edge(node1,node2,weight);

    if(edgeExists(new_edge))
            return;

    edges.push_back(new_edge);
}

template<class T>
std::tuple<int, int, T> Graph<T>::getEdge(int num)
{
    auto edge = edges[num];
    return edge;
}

template<class T>
bool Graph::edgeExists(std::tuple<int, int, T> edge)
{
    return std::find(edges.begin(), edges.end(), edge) != edges.end();
}

template class Graph<int>;

