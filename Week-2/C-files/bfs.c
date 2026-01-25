#include <stdio.h>
#include <stdbool.h>
#define MAX_NODES 100
int queue[MAX_NODES];
int front = -1;
int rear = -1;
void enqueue(int data) {
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = data;
}
int dequeue() {
    int data;
    if (front == -1) {
        return -1;
    }
    data = queue[front];
    front++;
    if (front > rear) {
        front = rear = -1;
    }
    return data;
}
bool is_empty() {
    return front == -1;
}
void bfs(int graph[MAX_NODES][MAX_NODES], int num_nodes, int start_node) {
    bool visited[MAX_NODES] = {false};
    enqueue(start_node);
    visited[start_node] = true;
    printf("BFS Traversal starting from node %d: ", start_node);
    while (!is_empty()) {
        int current_node = dequeue();
        printf("%d ", current_node);
        for (int i = 0; i < num_nodes; i++) {
            if (graph[current_node][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = true;
            }
        }
    }
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
    printf("Enter the starting node for BFS (0 to %d): ", num_nodes - 1);
    scanf("%d", &start_node);
    bfs(graph, num_nodes, start_node);
    return 0;
}
