#include<stdio.h>
#include<iostream>

int main()
{
    int B[5] = {10,12,14,16,18};
    int i;

    std::cout<<"Displaying elements using for loop"<<std::endl;
    for(i=0;i<5;i++)
    {
        std::cout<<("%d", B[i])<<std::endl;
    }

    std::cout<<"Displaying elements using for-each loop"<<std::endl;
    for(int x:B)
    {
        std::cout<<x<<std::endl;
    }

    std::cout<<"Size of the array: "<<sizeof(B)<<std::endl;  //one integer consists 4 bytes

    //displaying elements at 0 index value
    std::cout<<B[0]<<std::endl;

    //displaying elements at 2 index value using printf function of C
    printf("%d""\n", B[2]);

    //creating a dynamic array named "size" and at its 0 index, value is stored as 1 statically
    int size;
    std::cout<<"Enter the size of the array: ";
    std::cin>>size;
    int A[size];
    A[0] = 1;

    for(int y:A)
    {
        std::cout<<y<<std::endl;
    }

    return 0;
}