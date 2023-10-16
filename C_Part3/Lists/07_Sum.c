/*Code a function int sll_sum(Link* sll) taking as input the head of an LSC and returning the sum of the list's elements
via an iterative algorithmOR recursive algorithm.*/

int sll_sum(Link* sll){
    int sum = 0;
    while (sll != NULL){
        sum = sum + sll->value;
        sll = sll->next;
    }
    return sum;
}