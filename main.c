#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*bir ucgenin acilarini girdi olarak alip ücgenin eskenar ikizkenar
     ve cesitkenar ucgen olup olmadigini belirleyen program*/

     int aci1,aci2,aci3;

     printf("ucgenin ic acilar toplami 180 bunu unutma\n");
     printf("3 adet aci giriniz:");
     scanf("%d%d%d",&aci1,&aci2,&aci3);

     if(aci1 + aci2 + aci3 == 180){
        if(aci1 == aci2 && aci1 == aci3){
            printf("Girilen degerlere gore bu es kenar ucgen");
        }else if(aci1 == aci2 || aci1 == aci3){
            printf("Girilen degerlere gore bu ikiz kenar ucgen");
        }else if(aci2 == aci1 || aci2 == aci3){
            printf("Girilen degerlere gore bu ikiz kenar ucgen");
        }else if(aci3 == aci1 || aci3 == aci2){
            printf("Girilen degerlere gore bu ikiz kenar ucgen");
        }else{
            printf("Girilen degerlere gore bu cesit kenar ucgen");
        }
     }else{
       printf("Girilen acilarin toplami 180 degil tekrar dene\n\n\n");
     }

    return 0;
}
