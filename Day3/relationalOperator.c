#include<stdio.h>
#include<stdbool.h>

bool equal(int operand1,int operand2){
    if(operand1==operand2){
        return true;
    }
    return false;
}

bool notequal(int operand1,int operand2){
    if(operand1!=operand2){
        return true;
    }
    return false;
}

bool greaterthan(int operand1,int operand2){
    if(operand1>operand2){
        return true;
    }
    return false;
}

bool lesserthan(int operand1,int operand2){
    if(operand1<operand2){
        return true;
    }
    return false;
}

bool greaterthanorequal(int operand1,int operand2){
    if(operand1>=operand2){
        return true;
    }
    return false;
}

bool lesserthanequal(int operand1,int operand2){
    if(operand1<=operand2){
        return true;
    }
    return false;
}


int main(){

    int operand1, operand2;

    printf("Enter the operand 1: ");
    scanf("%d", &operand1);

    printf("Enter the operand 2: ");
    scanf("%d", &operand2);

    equal(operand1,operand2);
    notequal(operand1,operand2);
    greaterthan(operand1,operand2);
    lesserthan(operand1,operand2);
    greaterthanorequal(operand1,operand2);
    lesserthanorequal(operand1,operand2);

    return 0;
}
