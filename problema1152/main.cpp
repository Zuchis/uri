#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>
#include <utility>
#include <unordered_map>
#include <algorithm>

struct edge {
    int x;
    int y;
    int weight;

    edge (int _x, int _y, int _weight) {
        x = _x;
        y = _y;
        weight = _weight;
    }
};

bool edge_comp (edge e1, edge e2) {
    return e1.weight < e2.weight;
}

int main(int argc, const char *argv[])
{
    int nodes, edges;
    int n1,n2,weight, total_weight = 0;
    std::vector<edge> graph;

    scanf("%i",&nodes);
    scanf("%i",&edges);

    n1 = n2 = nodes;

    while (true) {
        scanf("%i",&n1);
        scanf("%i",&n2);
        if (n1 != 0 || n2 != 0) {
            scanf("%i",&weight);
            total_weight += weight;
        } else {
            break;
        }
        edge k(n1,n2,weight);
        graph.push_back(k);
    }

    std::sort(graph.begin(), graph.end(), edge_comp);
    std::cout << graph[0].weight << std::endl;

    return 0;
}
