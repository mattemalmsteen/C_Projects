typedef struct node{
    int value;
    struct node *next;
} node;

void add_node_at_end_of_list(node *sll, node *new);