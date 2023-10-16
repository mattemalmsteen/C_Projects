/*
Code a function Link* sll_reverse(Link* sll) taking as input the head of an LSC and returning the inverse of the list 
(tail becomes head and head becomes tail).
Attention: pointers must be inverted directly, and no new pointers must be created.
Examples:
    sll_reverse( < 1 → 2 → 3 → 4 > ) => < 4 → 3 → 2 → 1 >
    sll_reverse( < 5 → 12 → 42 → 55 → 42 > ) => < 42 → 55 → 42 → 12 → 5 >
    sll_reverse( < > ) => < >
*/

Link* sll_reverse(Link* sll){
    Link *temp1;
    Link *temp2;
    temp1 = sll;
    temp2 = sll->next;
    if(temp2 == NULL){
        return;
    }else{
        while (temp2->next != NULL){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        temp2->next = temp1;
        temp1->next = NULL;
        log_sll_reverse(sll);
    }   
}