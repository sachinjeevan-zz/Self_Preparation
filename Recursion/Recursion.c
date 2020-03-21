// Types of Recursion

// 1. Head Recursion
// 2. Tail Recursion
// 3. Tree Recursion
// 4. Indirect Recursion
// 5. Nested Recursion

/* 
Return Type Function_name(arg1,arg2,...,argn){
    if(base condition){
        statement
        recursive call
        statement
    }
   
} */


// 1. Head Recursion
/* 
void func(int n)
{
    if(n>0){
        func(n-1);
        printf("%d ",n);
    }
}

void func(int n)
{
    if(n>0){
        printf("%d ",n);
        func(n-1);
    }
}


*/
#include<stdio.h>
void func(int n)
{
    if(n>0){
        func(n-1);
        printf("%d ",n);
    }
}
int main()
{
    int x=3;
    func(x);
}

