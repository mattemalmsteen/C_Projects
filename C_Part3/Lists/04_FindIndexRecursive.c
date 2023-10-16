/*
Code a function int sll_indexOf(Link* sll, int value) taking as input the head of an LSC and an integer val, returning the index (position) 
of the first appearance of val in the list (or -1 if val is not in the list) via an iterative algorithm.

Attention: the initial index is assumed to be 1. 
(Chained lists are represented as follows: < val → val → val → val  > and the return value of a function by =>)
Examples:
    sll_indexOf( < >, 12) => -1
    sll_indexOf( < 1 → 2 → 3 → 4 >, 1) => 1
    sll_indexOf( < 1 → 2 → 3 → 4 >, 6) => -1
    sll_indexOf( < 5 → 73 → 14 → -223 >, -223) => 4
    sll_indexOf( < 2 → 3 → 3 → 4 → 3 >, 3) => 2
*/

int sll_indexOf_recur(Link* sll, int value){
    if (sll == NULL){
        return -1;
    }else if(sll->value == value){
        return 1;
    }else{
        int count = sll_indexOf_recur(sll->next, value);
        if (count == -1){//if I traversed all the list I am counting each step with the recursive, with this I cech if the node is the last one an then in this case I return -1 instead of the sum of the steps -1
            return -1;
        }else{
            return 1 + count;
        }
    }
}