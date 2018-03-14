#include <iostream>
#include <include/graph.h>

using namespace std;

int main()
{
    Graph<int> graph;
    graph.addEdge(1,2,10);

    auto edge = graph.getEdge(0);
    //auto value = std::get<0>(edge);

    return 0;
}
