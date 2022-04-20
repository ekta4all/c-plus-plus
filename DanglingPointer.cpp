#include<iostream>

using namespace std;

int main()
{

    int *ptr=(int *)malloc(sizeof(int));

    free(ptr); //after free call ptr becomes a dangling pointer

    ptr=NULL;//no more a dangling pointer
}
