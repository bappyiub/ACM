//
//  main.cpp
//  recursion
//
//  Created by manzoor on 2/9/19.
//  Copyright © 2019 manzoor. All rights reserved.
//

#include <iostream>
int i=0;
int print_inorder(int array[4])
{
    if (i<2)
    {
        i++;
        print_inorder(array);
        i=0;
        printf("%d\n%d*",array[i],i);
        
       
    }
    printf("xxxxx");
    return 0;
}
int array[4]={1,3,4,5};
int main(int argc, const char * argv[]) {
    // insert code here...
    print_inorder(array);
    return 0;
}
