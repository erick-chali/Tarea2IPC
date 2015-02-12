//
//  main.c
//  Calculadora
//
//  Created by Erick Chali on 2/12/15.
//  Copyright (c) 2015 erickdemon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Erick Gustavo Chali - 201314457\n");
    printf("-----CALCULADORA-----\ns");
    menuOpciones();
    return 0;
}

int operaciones(int n){
    int op=0;
    op=n;
    int a=0,b=0,calculo=0;
        switch (op) {
            case 1:
                puts("Ingrese los 2 numeros que desea operar");
                scanf("%d%d", &a,&b);
                calculo=a+b;
                printf("El resultado de la suma es: %d\n", calculo);
                menuOpciones();
                break;
            case 2:
                puts("Ingrese los 2 numeros que desea operar");
                scanf("%d%d", &a,&b);
                calculo=a-b;
                printf("El resultado de la resta es: %d\n", calculo);
                menuOpciones();
                
                break;
            case 3:
                puts("Ingrese los 2 numeros que desea operar");
                scanf("%d%d", &a,&b);
                calculo=a*b;
                printf("El resultado del producto es: %d\n", calculo);
                menuOpciones();
                break;
            case 4:
                puts("Ingrese los 2 numeros que desea operar");
                scanf("%d%d", &a,&b);
                if (b!=0) {
                    calculo=a/b;
                    printf("El resultado de la division es: %d\n", calculo);
                    menuOpciones();
                }else{
                    printf("La variable b no puede ser 0\n");
                    menuOpciones();
                }
                break;
            case 5:
                exit(0);
                break;
            default:
                break;
        }
    
    return 0;
}
int menuOpciones(){
    int op=0;
    printf("Seleccione una opcion del menu\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Producto\n");
    printf("4. Division\n");
    printf("5. Salir\n");
    scanf("%d", &op);
    if (op<1 || op>5) {
        menuOpciones();
    }else{
        operaciones(op);
    }
    return op;
}