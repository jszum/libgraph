#include <iostream>
#include <include/graph.h>

using namespace std;

int main()
{
    Graph<int> graph(5);
    graph.addEdge(0,1,6);
    graph.addEdge(0,3,1);
    graph.addEdge(1,2,5);
    graph.addEdge(1,3,2);
    graph.addEdge(1,4,2);
    graph.addEdge(2,4,5);
    graph.addEdge(4,5,1);


    graph.shortestPath(0,4);

    return 0;
}
