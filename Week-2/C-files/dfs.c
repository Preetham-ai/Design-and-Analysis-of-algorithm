#include <stdio.h>
#include <stdbool.h>
#define MAX_NODES 100
bool visited[MAX_NODES];
void dfs_recursive(int graph[MAX_NODES][MAX_NODES], int num_nodes, int current_node) {
    visited[current_node] = true;
    printf("%d ", current_node);
    for (int i = 0; i < num_nodes; i++) {
        if (graph[current_node][i] == 1 && !visited[i]) {
            dfs_recursive(graph, num_nodes, i);
        }
    }
}
void dfs(int graph[MAX_NODES][MAX_NODES], int num_nodes, int start_node) {
    for (int i = 0; i < num_nodes; i++) {
        visited[i] = false;
    }

    printf("DFS Traversal starting from node %d: ", start_node);
    dfs_recursive(graph, num_nodes, start_node);
    printf("\n");
}
int main() {
    printf("CH.SC.U4CSE24139\n");
    int num_nodes;
    int graph[MAX_NODES][MAX_NODES];
    int start_node;
    printf("Enter the number of nodes: ");
    scanf("%d", &num_nodes);
    printf("Enter the adjacency matrix (%d x %d). Enter 1 for an edge, 0 otherwise:\n", num_nodes, num_nodes);
    for (int i = 0; i < num_nodes; i++) {
        for (int j = 0; j < num_nodes; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    printf("Enter the starting node for DFS (0 to %d): ", num_nodes - 1);
    scanf("%d", &start_node);
    dfs(graph, num_nodes, start_node);
    return 0;
}
