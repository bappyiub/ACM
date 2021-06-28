//
//  main.cpp
//  Maximum gap
//
//  Created by manzoor on 8/9/19.
//  Copyright © 2019 manzoor. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[]={3,6,9,1};
    int temp=0;
    int j,i,max=array[0];
    for(i=0;i<4;i++)
    {
        for( j=0;j<4;j++)
        {
            if(array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        
        
        }
        if(max > array[i]-array[i+1])
            max=array[i]-array[i+1];
        
    }
    printf("%d\n",max);
    
    
        return 0;
}
