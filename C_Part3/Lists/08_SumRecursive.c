/*Code a function int sll_sum(Link* sll) taking as input the head of an LSC and returning the sum of the list's elements
via an iterative algorithmOR recursive algorithm.*/

int sll_product(Link* sll) {
    if (sll == NULL){
        return 1;
    }else{
        return (sll->value) * (sll_product(sll->next));
    }
}