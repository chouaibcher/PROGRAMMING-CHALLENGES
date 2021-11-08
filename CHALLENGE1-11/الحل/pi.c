#include <stdio.h>
#include <stdlib.h>
float calcpi(int e){
    int i;
    float pi=1,rule;
    for(i=0;i<e;i++){
        rule=(i*2)+3;
        if((i%2)==0)/* even numbre */
            pi-=(1/rule);/* pi=pi-(1/rule) */
        else/* odd numbre */
            pi+=(1/rule);/* pi=pi+(1/rule) */
        
    }
    return pi*=4;/* pi=pi*4 */
}

main(){
    int e;
    printf(" e = "); /* كلما زادت قمية المعطاة اقتربنا اكثر للقيمة الفعلية ل بي */
    scanf("%i",&e);
    printf(" pi= %f \n ",calcpi(e));
}

/*
--!-----------------------
---?> Coded by chouaibcher
--!-----------------------
*/
