/*Code a function int sll_length_recur(Link* sll) taking as input the root of an LSC and returning
 the length of the list via a recursive algorithm. */

int sll_length_recur(Link* sll) {
    // Base case: If the current node is NULL, return 0
    if (sll == NULL) {
        return 0;
    }
    // Recursive case: Return 1 (for the current node) + length of the rest of the list
    else {
        return 1 + sll_length_recur(sll->next);
    }
}
