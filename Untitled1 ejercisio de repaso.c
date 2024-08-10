# include <stdio.h>

int max_comun_div (int, int);

int main(){
    float fnum1, fnum2;
    int num1, num2;

    do{
        printf("Ingrese el PRIMER n%cmero NATURAL entre 100 y 1000\n", 163);
        fflush(stdin);
        scanf("%f",&fnum1);
        num1=(int)fnum1;
    }while(fnum1<100 || fnum1>1000 || fnum1-(float)num1!=0);

    do{
        printf("Ingrese el SEGUNDO n%cmero NATURAL entre 100 y 1000\n", 163);
        fflush(stdin);
        scanf("%f",&fnum2);
        num2=(int)fnum2;
    }while(fnum2<100 || fnum2>1000 || fnum2-(float)num2!=0);

    //CORRECCIÓN: ESTA LÍNEA ESTÁ DE MÁS:
    //num2=(int)fnum2;

    printf("El m%cximo com%cn divisor es %d\n", 160,163, max_comun_div(num1, num2));

    return 0;
}

int max_comun_div (int num1, int num2){
    int mcd=1, div, exponente1=0, exponente2=0, i=1, menor, mayor;

    if(num1<=num2){
        menor=num1;
        mayor=num2;
    }
    else{
        menor=num2;
        mayor=num1;
    }

    for(div=2;div<=menor;div++){ //si div es divisor, cuál es su exponente?
        if((menor%div)==0){
            while((menor%div)==0){
                exponente1++;
                menor=menor/div;
            }

            if((mayor%div)==0){ //si div tambien es divisor del otro, cuál es su exponente?
                while((mayor%div)==0){
                    exponente2++;
                    mayor=mayor/div;
                }

            if(exponente2>=exponente1){ //marmo el mcd usando el div de menor exponente
                while(i<=exponente1){
                    mcd=mcd*div;
                    i++;
                }
            }
            else
                while(i<=exponente2){
                    mcd=mcd*div;
                    i++;/*CORRECCIÓN: ME FALTÓ ESTA LÍNEA*/
                }
            }

            exponente1=0;
            exponente2=0;
            i=1;
        }
    }
    return mcd;
}
