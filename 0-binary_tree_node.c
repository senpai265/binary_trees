#include <stdio.h>
#include <stdlib.h>

typedef struct binary_tree {
    int value;
    struct binary_tree *parent;
    struct binary_tree *left;
    struct binary_tree *right;
} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL;  // Failed to allocate memory for the new node
    }

    new_node->value = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

int main() {
    // Example usage of binary_tree_node
    binary_tree_t *root = binary_tree_node(NULL, 5);
    if (root != NULL) {
        printf("New node value: %d\n", root->value);
        printf("Parent node: %p\n", root->parent);
        printf("Left child: %p\n", root->left);
        printf("Right child: %p\n", root->right);
    } else {
        printf("Failed to create a new node.\n");
    }

    return 0;
}
