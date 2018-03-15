#include "include/graph.h"

#include <algorithm>
#include <map>
#include <numeric>
#include <queue>
#include <vector>

template <class T>
Graph<T>::Graph(int Nodes)
{
    nNodes = Nodes+1;
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
    //taken for float as for int, the return is 0
    const T INF = std::numeric_limits<float>::infinity();

    typedef std::pair<int, T> graph_pair;

    std::priority_queue<graph_pair, std::vector<graph_pair>, std::greater<graph_pair>> pq;


    std::vector<T> dist(nNodes, INF);
    std::vector<int> previous(nNodes, -1);

    T init = 0;
    pq.push(std::make_pair(init, src));
    dist[src] = init;

    //going in loop until priority queue (kłełe) will be empty
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto i = adjacents[u].begin(); i != adjacents[u].end(); ++i)
        {
            int v = (*i).first;
            int weight = (*i).second;

            // check if maybe there is shorter path

            //Let's use lambda!
            auto lambda_check = [&dist](int v, int u, T w) {
                return (dist[v] > dist[u] + w);
            };

            if (lambda_check(v,u,weight))
            {
                dist[v] = dist[u] + weight;
                previous[v] = u;
                pq.push(std::make_pair(dist[v], v));
            }
        }
    }


    //I don't like this, but I don't want to write separate function/class for printing.
    // would be better just to return a vector, but then need to print it. ARGH!
    int current = dst;
    while(current != src) {
        printf("%d-->",current);
        current = previous[current];
    }
    printf("%d\n",src);
}

template class Graph<int>;
template class Graph<float>;
