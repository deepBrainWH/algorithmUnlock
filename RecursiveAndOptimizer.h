//
// Created by wangheng on 2018-10-11.
//

#ifndef ALGORITHMUNLOCK_RECURSIVEANDOPTIMIZER_H
#define ALGORITHMUNLOCK_RECURSIVEANDOPTIMIZER_H


class RecursiveAndOptimizer {

public:

    /**
     * Using recursive method implement factorial(n!)
     */
    long factorial(long n){
        if(n>1)
            return n*factorial(n-1);
        else
            return 1;
    }

    /**
     * 使用递归方法求解斐波那契数列第n项的值
     * Using recursive method to get the value of Nth term in the Fibonacci sequence.
     */
    long fib(int n){

    }

};


#endif //ALGORITHMUNLOCK_RECURSIVEANDOPTIMIZER_H