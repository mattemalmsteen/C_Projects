/*
Code a function int sll_increasing(Link* sll) taking as input the head of an LSC and returning 1 if the values of the LSC 
are strictly increasing and 0 otherwise.

Examples:
    sll_increasing( < > ) => 1
    sll_increasing( < 1 > ) => 1
    sll_increasing( < 1 → 2 → 3 → 4 > ) => 1
    sll_increasing( < 1 → 2 → 2 → 3 > ) => 0
    sll_increasing( < -10 → 12 → 22 → 34 > ) => 1
    sll_increasing( < -10 → 12 → 11 → 34 → 64 > ) => 0

*/

int sll_increasing(Link* sll){
    if (sll == NULL || sll->next == NULL ){
        return 1;
    }else{
        while(sll->next != NULL){
            if(sll->value > sll->next->value){
                return 0;
            }
            sll->next = sll->next->next;
        }
        return 1;
    }
}