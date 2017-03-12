//
//  f-c.c
//  learn
//
//  Created by Jane Yuan on 17/3/2.
//  Copyright © 2017年 Jane Yuan. All rights reserved.
//

#include <stdio.h>

int main()
{
    int fahr,celsius;
    int lower,upper,step;
    
    lower=0;
    upper=300;
    step=20;
    
    fahr=lower;
    while(fahr<=upper) {
        celsius= 5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr = fahr + step;
    }
    
    return 0;

}
