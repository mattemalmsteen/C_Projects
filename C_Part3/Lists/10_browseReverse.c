/*
You have at your disposal a void _log(int data) function, allowing you to log values in a precise order.
Code a void log_sll_reverse(Link* sll) function taking as input the head of an LSC, and which will log the values of the LSC in reverse.
*/

void _log(int data){

}

void log_sll_reverse(struct Link* sll) {
    if (sll == NULL) {
        return; // Base case: empty list
    }

    // Recursive call to log the rest of the list in reverse order
    log_sll_reverse(sll->next);

    // Log the current node's data
    _log(sll->data);
}

