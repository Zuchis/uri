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

bool all_true(std::vector<bool> v) {
    for (bool el : v) {
        if (el == false)
            return false;
    }
    return true;
}


int main()
{
    int nodes, edges;
    int n1,n2,weight, total_weight = 0, mst_weight = 0;
    int in_mst = 2;

    std::vector<edge> graph;
    std::vector<bool> marked;

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

    for (int i = 0; i < nodes; i++) {
        marked.push_back(false);
    }

    std::sort(graph.begin(), graph.end(), edge_comp);

    marked[graph[0].x] = true;
    marked[graph[0].y] = true;
    mst_weight += graph[0].weight;

    while (!all_true(marked)) {
        for (edge e : graph) {
            if (marked[e.x] == true && marked[e.y] == false) {
                marked[e.y] = true;
                mst_weight += e.weight;
                in_mst++;
                break;
            }

            if (marked[e.y] == true && marked[e.x] == false) {
                marked[e.x] = true;
                mst_weight += e.weight;
                in_mst++;
                break;
            }
        }
    }

    std::cout << total_weight - mst_weight << std::endl;

    return 0;
}
