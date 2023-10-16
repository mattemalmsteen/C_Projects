/*Code a function int sll_nOccs(Link* sll, int val) taking as input the head of an LSC and returning 
the number of occurrences of an element val via an iterative algorithm.*/

int sll_nOccs(Link* sll, int val){
    int count = 0;
    while (sll != NULL){
        if (sll->value == val){
            count++;
        }
        sll = sll->next;
    }
    return count;
}