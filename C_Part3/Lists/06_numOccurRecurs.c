/*Code a function int sll_nOccs(Link* sll, int val) taking as input the head of an LSC and returning 
the number of occurrences of an element val via an iterative algorithm.*/

int sll_nOccs_recur(Link* sll, int val) {
    if (sll == NULL){
        return 0;
    }else if (sll->value == val){
        return 1 + sll_nOccs_recur(sll->next, val);
    }else{
        sll_nOccs_recur(sll->next, val);
    }
}