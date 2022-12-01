#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
#include <math.h>
int main(){

	int op;//Datos de entrada
	float n1,n2,n3;
    printf("\t----------------------------------------------------------------------\n");
    printf("\t---------------BIENVENIDO ESPERO QUE TE ENCUENTRES BIEN---------------\n");
    printf("\t----------------------------------------------------------------------\n");

    printf("\n\tSeleccione un programa a correr\n\n\t1)De sistema binario a octal, decimal y hexadecimal\n\t2)De sistema octal a binario, decimal y hexadecimal\n\t3)De sistema decimal a binario, octal y hexadecimal\n\t4)De sistema hexadecimal a binario, octal y decimal\n\t5)De sistema base n a binario, octal, decimal y hexadecimal y viseversa\n\t6)SALIR\n\t") ;
	scanf("%d", &op);

	while(op<6 && op>0){//utilice un ciclo do while para realizar el menu
            fflush(stdin);
		while(op<1 || op>6){

			printf("InserciOn no vAlida\nValores vAlidos: 1 - 6");
            printf("\n\tSeleccione un programa a correr\n\n\t1)De sistema binario a octal, decimal y hexadecimal\n\t2)De sistema octal a binario, decimal y hexadecimal\n\t3)De sistema decimal a binario, octal y hexadecimal\n\t4)De sistema hexadecimal a binario, octal y decimal\n\t5)De sistema base n a binario, octal, decimal y hexadecimal y viseversa\n\t6)SALIR\n\t") ;
            scanf("%d", &op);
        }

        while(op==1){//Esra es la ejecución del primer problema

            printf("\n\t------CONVERCIONES DE SISTEMA BINARIO----------\n");
            printf("\n\t1)De sistema binario a octal\n\t2)De sistema binario a decimal\n\t3)De sistema binario a hexadecimal\n\t");
            printf("\n\t---------------------------------------------\n\t");
long exp=0,decimal=0,num,digito,aux;
    bool esBinario;
    int j;
    int i=0;

 do {
printf("Ingresa el numero en binario:\n");//Pedimos el numero binario
scanf("%llu",&num);//leer

          esBinario = true;
          aux = num;
          while (aux != 0) {
                     digito = aux % 10;//Separa digitos

                     if (digito != 0 && digito != 1) { //If valida que no es binario
                          esBinario = false;
                     }
                aux = aux / 10;//elimina los digitos
           }
      } while (!esBinario);//si no es verdadero vuelve a solicitar el numero

    while(num !=0){
        digito=num %10; //separando
        num=num/10;//eliminando
        decimal=decimal+digito*(pow(2,exp));//multiplica por la potencia correspondiente de acuerdo a la posicion
        exp++;

 }
    printf("El numero en decimal es: %i",decimal);
    printf("\n");
    printf("--------------------------------------------------------------------- \n");
    int n=decimal;
    int octal[999]; //Declaramos nuestras variables a usar.


	while(n)
	{
		octal[i]=n%8; //separando digitos
		n=n/8;//eliminando
		i++;
	}
	printf("El numero en octal es: ");
	for(j=i-1;j>=0;j--)//imprimir el arreglo como habia sido guardado de derecha a izquierda j disminuye y escribe de izquierda a derecha
		printf("%d",octal[j]);

    printf("\n");
    printf("---------------------------------------------------------------------\n");

    int h=decimal;
	char hexa[100],numH[17]={"0123456789ABCDEF"}; //creamos un arreglo con los numeros en hexadecimal y uno para guardar las variables

	while(h){
		hexa[i]=numH[h%16];//separando digitos y guardando en el arreglo hexa
		h=h/16;//eliminando
		i++;
	}
	printf("El numero en hexadecimal es: ");
	for(j=i-1;j>0;j--)
		printf("%c",hexa[j]);//imprimir el arreglo como habia sido guardado de derecha a izquierda j disminuye y escribe de izquierda a derecha
    printf("\n---------------------------------------------------------------------\n");


			printf("\n\tDesea Repetir la ejeciciOn de PROBLEMA1? (1 = Si || 2 = No)\n\tELECCION: ");
			scanf("%d", &op);
			if(op==1){
				//		//Repetimos la ejeciciOn del Programa Actual
			}else if(op==2){
				op=6;	//Salimos al MenU Inicial
			}

		}
        while(op==2){
            fflush(stdin);//Borrar memoria

            printf("\n\t------CONVERCIONES DE SISTEMA OCTAL----------\n\t");
            printf("\n\t1)De sistema octal a binario\n\t2)De sistema octal a decimal\n\t3)De sistema octal a hexadecimal\n\t");
            printf("\n\t---------------------------------------------\n\t");

            int n,b[50],d=0,h[50];
            int i=0;
            int s;
            inicio:
            //pedir y almacenar numero octal//
            printf("//////////////////////////////\n");
            printf("ingresa valor en sistema octal\n");
            printf("//////////////////////////////\n");
            scanf("%i",&n);
        //separar el numero en sus cifras individuales
                while(n!=0)
                    {
                    b[i]=n%10;//se almacena el residuo de n/10
                        if(b[i]<0 || b[i]>7)//se comparan las cifras para verificar que esten en sistema octal
                        {
                        printf("el numero ingresado no esta en sistema octal,ingresa otro \n");
                        goto inicio;//regresa al inicio del programa
                        }
                    n=n/10;//se quita la ultima cifra de n
                    i++;
                    }//se guardan mis cifras empezando por la ultima

            printf("//////////////////////////////\n");
            printf("tu conversion a numero binario es\n");
            printf("//////////////////////////////\n");
                //convertir cada cifra a su binario equivalente
                if(i==0)
                {
                    printf("000");
                }
            for(s=i-1;s>=0;s--)//i-1 seria el valor de mi ultima cifra,se hace un decremento para que i disminuya en 1 y asi mostrar mis cifras anteriores
            {
                if(b[s]==0)
                {
                    printf("000");
                }
                if(b[s]==1)
                {
                    printf("001");
                }
                if(b[s]==2)
                {
                    printf("010");
                }
                if(b[s]==3)
                {
                    printf("011");
                }
                if(b[s]==4)
                {
                    printf("100");
                }
                if(b[s]==5)
                {
                    printf("101");
            }
                if(b[s]==6)
                {
                    printf("110");
                }
                if(b[s]==7)
                {
                    printf("111");
                }
            }

            printf("\n");
            printf("//////////////////////////////\n");
            printf("tu conversion a numero decimal es\n");
            printf("//////////////////////////////\n");
                for(s=i-1;s>=0;s--)//i-1 seria el valor de mi ultima cifra,se hace un decremento para que i disminuya en 1 y asi mostrar mis cifras anteriores
                {
                    d=d+(b[s]*pow(8,s));/*convertir octal a decimal,donde pow es 8 elevado a la potencia s,donde s es el indice que corresponde al numero multiplicado
                                por el valor de la cifra almacenada en ese indice*/
                }
            printf("%i",d);//mostrar el valor decimal

            printf("\n");
            printf("//////////////////////////////\n");
            printf("tu conversion a numero hexadecimal es\n");
            printf("//////////////////////////////\n");
            i=0;
            while(d!=0)
                    {
                    h[i]=d%16;//se almacena el residuo de d/16 por ser base hexadecimal
                    d=d/16;//se quita la ultima cifra de d
                    i++;
                    }//se guardan mis cifras empezando por la ultima
            for(s=i-1;s>=0;s--)//i-1 seria el valor de mi ultima cifra,se hace un decremento para que i disminuya en 1 y asi mostrar mis cifras anteriores
            {
                if(h[s]==10)
                {
                    printf("A");
                }
                if(h[s]==11)
                {
                    printf("B");
                }
                if(h[s]==12)
                {
                    printf("C");
                }
                if(h[s]==13)
                {
                    printf("D");
                }
                if(h[s]==14)
                {
                    printf("E");
                }
                if(h[s]==15)
                {
                    printf("F");
                }
                else
                {
                    printf("%i",h[s]);
                }
            }



            printf("\n\tDesea Repetir la ejecicion de PROBLEMA2? (1 = Si || 2 = No)\n\tELECCION: ");
			scanf("%d", &op);
			if(op==1){
                op=2;	//Repetimos la ejeciciOn del Programa Actual
			}else if(op==2){
				op=6;	//Salimos al MenU Inicial
			}

		}
        while(op==3){
            fflush(stdin);//Borrar memoria

            printf("\n\t------CONVERCIONES DE SISTEMA DECIMAL----------\n\t");
            printf("\n\t1)De sistema decimal a binario\n\t2)De sistema decimal a octal\n\t3)De sistema decimal a hexadecimal\n\t");
            printf("\n\t---------------------------------------------\n\t");
            int n,i=0,h,oc, binario[999],hexadecimal[999],octal[999];//Datos de entrada
            printf("\n\tDame un numero en sistema decimal=\n\t");
                scanf("%i",&n);
                oc=n;
                h=n;
                printf("\n\t---------------------------------------------\n\t");

                    binario[999];{ //Declaramos nuestras variables a usar.
                    printf("\n\tDe sistema decimal a binario\n\t");
                    while (n!=0){
                                    binario[i] = n%2; //Esta linea es para guardar el residuo del valor de n entre 2. En un arreglo.
                                    n=n/2; // Esta division es para modificar en valor de n en la proxima repeticion del while.
                                    i++; // Para moficicar el valor de i en el arreglo hexadecimal en la siguiente repeticion del while.
                                }
                                    i--;
                                    printf("\n\tTu resultado en binario es:\n\t ");

                while (i>=0){//Este while se usa para imprimir los valores guardados en el arreglo hexadecimal.
                      switch(binario[i]){/*Este switch sirve evaluar los diferentes casos posibles, si el numero guardado en el arreglo es 2,3, se imprimira la correspondiente letra para cada caso*/
                                        case 2:
                                                printf("0");
                                        break;
                                        case 3:
                                                printf("1");
                                        break;
                                        default:
                                                printf("%i",binario[i]); /*Si es un numero diferente del 10 al 15 solamente pone lo que hay en el arreglo osea uno que va del 0 al 9.*/
                                                break;}
                                                i--;}
                                    printf("\n");}
                    octal[999];{ //Declaramos nuestras variables a usar.
                        i=0;
                    while (oc!=0){
                                octal[i]=oc%8; //Esta linea es para guardar el residuo del valor de n entre 8. En un arreglo.
                                oc=oc/8; //Esta division es para modificar en valor de n en la proxima repeticion del while.
                                i++;} // Para moficicar el valor de i en el arreglo hexadecimal en la siguiente repeticion del while.
                                i--;
                                printf("\n\tTu resultado en octal es:\n\t ");

                while (i>=0){ //Este while se usa para imprimir los valores guardados en el arreglo octal.
                        switch(octal[i]){/*Este switch sirve evaluar los diferentes casos posibles, si el numero guardado en el arreglo es 8, se imprimira la correspondiente de un numero*/
                                    case 8:
                                            printf("0");
                                    break;
                                    default:
                                            printf("%i",octal[i]); /*Si es un numero diferente del 10 al 15 solamente pone lo que hay en el arreglo osea uno que va del 0 al 9.*/
                                    break;}
                                    i--;}
                        printf("\n");}

                hexadecimal[999];{ //Declaramos nuestras variables a usar.
                    i=0;
                while (h!=0){
                                hexadecimal[i] = h%16; //Esta linea es para guardar el residuo del valor de n entre 16. En un arreglo.
                                h=h/16; // Esta division es para modificar en valor de n en la proxima repeticion del while.
                                i++;}// Para moficicar el valor de i en el arreglo hexadecimal en la siguiente repeticion del while.
                                i--;
                                printf("\n\tTu resultado en hexadecimal es:\n\t ");

                while (i>=0){ //Este while se usa para imprimir los valores guardados en el arreglo hexadecimal.
                            switch(hexadecimal[i]){/*Este switch sirve evaluar los diferentes casos posibles, si el numero guardado en el arreglo es 10,11,12,13,14 0 15, se imprimira la correspondiente letra para cada caso*/
                                    case 10:
                                            printf("A");
                                    break;
                                    case 11:
                                            printf("B");
                                    break;
                                    case 12:
                                            printf("C");
                                    break;
                                    case 13:
                                            printf("D");
                                    break;
                                    case 14:
                                            printf("E");
                                    break;
                                    case 15:
                                            printf("F");
                                    break;
                                    default:
                                            printf("%i",hexadecimal[i]); /*Si es un numero diferente del 10 al 15 solamente pone lo que hay en el arreglo osea uno que va del 0 al 9.*/
                                    break;}
                                    i--;}
                            printf("\n");}
            printf("\n\tDesea Repetir la ejeciciOn de PROBLEMA3? (1 = Si || 2 = No)\n\tELECCION: ");
			scanf("%d", &op);
			if(op==1){
                op=3;	//Repetimos la ejeciciOn del Programa Actual
			}else if(op==2){
				op=6;	//Salimos al MenU Inicial
			}

		}
        while(op==4){
            fflush(stdin);//Borrar memoria

            printf("\n\t------CONVERCIONES DE SISTEMA HEXADECIMAL------\n\t");
            printf("\n\t1)De sistema hexadecimal a binario\n\t2)De sistema hexadecimal a octal\n\t3)De sistema hexadecimal a decimal\n\t");
            printf("\n\t---------------------------------------------\n\t");

int i,l,j;
	int octal[999],potencia=1, decimal=0;
	char n[999];//El octal se rrecibbe como cadena
	printf("Este programa resice un nummero en hexadecimal  lo pasa a sistema binario, octal y  decimal\n");

	do{//whhile que controla que se iongrese un numero en hexadecimmal
	fflush(stdin);//liemmpia la entrada
	printf("Dame un numero en hexadecimal  :");
	scanf("%s",n);//lee una cadena sin espacios
	l=strlen(n);//optiene la longitd de la cadena

	for(i=l-1;i>=0;i--)//fpr que recorre la cadena de izquierda a derecha
	{
	switch (n[i])//switch que recorre cada elemento del areglo
	{
					case '0':
						j=0;
	 		 			break;

	 		 		case '1':
	 		 			j=0;
	 		 			break;

					case '2':
						j=0;
	 		 			break;

	 		 		case '3':
	 		 			j=0;
	 		 			break;

					case '4':
						j=0;
	 		 			break;

	 		 		case '5':
	 		 			j=0;
	 		 			break;
	 		 		case '6':
	 		 			j=0;
	 		 			break;

					case '7':
						j=0;
	 		 			break;

	 		 		case '8':
	 		 			j=0;
	 		 			break;

	 		 		case '9':
	 		 			j=0;
	 		 			break;

	 		 		case 'A':
	 		 			j=0;
	 		 			break;
	 		 		case'a':
	 		 			j=0;
	 		 			break;

	 		 		case 'B':
	 		 			j=0;
	 		 			break;
	 		 		case'b':
	 		 			j=0;
	 		 			break;

	 		 		case 'C':
	 		 			j=0;
	 		 			break;
	 		 		case 'c':
	 		 			j=0;
	 		 			break;

					case 'D':
						j=0;
	 		 			break;
	 		 		case 'd':
	 		 			j=0;
	 		 			break;

	 		 		case 'E':
	 		 			j=0;
	 		 			break;
	 		 		case'e':
	 		 			j=0;
	 		 			break;

	 		 		case 'F':
	 		 			j=0;
	 		 			break;
					case 'f':
						j=0;
						break;
					default:
						printf("Numero no valido\n ");
						printf("-----------------------\n");
						j=1;// sirve para repetir el ciclo en caso de que ingren un digito invvalido
					break;

	}//cierre swtch que reconoce los digitos

	}//cierre for que recorre cada elemento del arreglo del meno

	}while(j==1);// while que repite el menu en caso de ingresar un digito invalido
	fflush(stdin);
	int b[l][4];//matriz para binario

	//codigo de Hexadecimal a binario//
	//***************************************
	//************************************

	 		 		for (i=l;i>=0;i--)//este for recorre de izquierda a deracha la cadena dada para conversion a codigo bbbinario
					  {
						switch (n[i])//switch para cada caso del elemnto del areglo para binario
					{
						case '0':
							b[i][0]=0;//se hace una matris de l filas y 4 columnas para
							b[i][1]=0;//Se pone el valor que corresponde a cada valor del elemnto Hexadecimal
							b[i][2]=0;
							b[i][3]=0;
						 break;
						 case '1':

							b[i][0]=0;
							b[i][1]=0;
							b[i][2]=0;
							b[i][3]=1;

						 break;
						 case '2':

							b[i][0]=0;
							b[i][1]=0;
							b[i][2]=1;
							b[i][3]=0;

						 break;
						 case '3':

							b[i][0]=0;
							b[i][1]=0;
							b[i][2]=1;
							b[i][3]=1;

						 break;
						 case '4':
						    b[i][0]=0;
							b[i][1]=1;
							b[i][2]=0;
							b[i][3]=0;

						 break;
						 case '5':
						    b[i][0]=0;
							b[i][1]=1;
							b[i][2]=0;
							b[i][3]=1;

						 break;
						 case '6':

							b[i][0]=0;
							b[i][1]=1;
							b[i][2]=1;
							b[i][3]=0;

						 break;
						 case '7':

							b[i][0]=0;
							b[i][1]=1;
							b[i][2]=1;
							b[i][3]=1;

						 break;
						 case '8':
							b[i][0]=1;
							b[i][1]=0;
							b[i][2]=0;
							b[i][3]=0;

						 break;
						 case '9':
							b[i][0]=1;
							b[i][1]=0;
							b[i][2]=0;
							b[i][3]=1;

						 break;
						 case 'A':

							b[i][0]=1;
							b[i][1]=0;
							b[i][2]=1;
							b[i][3]=0;

						 break;
						 case 'a':

							b[i][0]=1;
							b[i][1]=0;
							b[i][2]=1;
							b[i][3]=0;

						 break;
						 case 'B':

							b[i][0]=1;
							b[i][1]=0;
							b[i][2]=1;
							b[i][3]=1;

						 break;
						 case 'b':

							b[i][0]=1;
							b[i][1]=0;
							b[i][2]=1;
							b[i][3]=1;

						 break;
						 case 'C':

							b[i][0]=1;
							b[i][1]=1;
							b[i][2]=0;
							b[i][3]=0;

						 break;
						 case 'c':

							b[i][0]=1;
							b[i][1]=1;
							b[i][2]=0;
							b[i][3]=0;


						 break;
						 case 'D':

							b[i][0]=1;
							b[i][1]=1;
							b[i][2]=0;
							b[i][3]=1;

						 break;
						 case 'd':

						    b[i][0]=1;
							b[i][1]=1;
							b[i][2]=0;
							b[i][3]=1;

						 break;
						 case 'E':

							b[i][0]=1;
							b[i][1]=1;
							b[i][2]=1;
							b[i][3]=0;

						 break;
						 case 'e':

						    b[i][0]=1;
							b[i][1]=1;
							b[i][2]=1;
							b[i][3]=0;

						 break;
						 case 'F':

							b[i][0]=1;
							b[i][1]=1;
							b[i][2]=1;
							b[i][3]=1;

						 break;
						 case 'f':

						    b[i][0]=1;
							b[i][1]=1;
							b[i][2]=1;
							b[i][3]=1;

						 break;

					}//cierre swich de binario

					   } //cierre for de binario
					   printf("\n---------------------------------\n");
					   printf("El numero en sistema binario es : \t");
	 		 		for(i=0;i<l;i++)// for para impimir la matriz que solo controla las filas
					  {
					  	printf("%i",b[i][0]);
						printf("%i",b[i][1]);
						printf("%i",b[i][2]);
						printf("%i",b[i][3]);
					  	printf("   ");// espacio para imprimir un espacio cada 4 digitos
					   }


			//codigo para converison a octal
//************************
//************************
fflush(stdin);
//Dado que es una cadena no se pueden realizar operaciones asi que primero se converite en decimal y luego a octal
				for (i=l;i>=0;i--)//fpr que recorre la cadena de izquierda a derecha
				{

				switch (n[i])//switch que lee cada elemento del numero hexadecimal
					{

						case '0':
						// decimal+=   ==   decimal=decimal+
						 decimal += 0*potencia;// Dado que el elemnto es base 16 se multiplica cada digito por 16
						 potencia *= 16;//la potencia en la primer vuelta vale 1 que despues de entrar en un caso se multiplica por 16
						 				// y asi sucesivvamente hasta reccorere todos los digitos de la cadena
						 break;
						 case '1':
						 decimal += 1*potencia;
						 potencia *= 16;

						 break;
						 case '2':
						 decimal += 2*potencia;
						 potencia *= 16;

						 break;
						 case '3':
						 decimal += 3*potencia;
						 potencia *= 16;

						 break;
						 case '4':
						 decimal += 4*potencia;
						 potencia *= 16;

						 break;
						 case '5':
						 decimal += 5*potencia;
						 potencia *= 16;

						 break;
						 case '6':
						 decimal += 6*potencia;
						 potencia *= 16;

						 break;
						 case '7':
						 decimal += 7*potencia;
						 potencia *= 16;

						 break;
						 case '8':
						 decimal += 8*potencia;
						 potencia *= 16;

						 break;
						 case '9':
						 decimal += 9*potencia;
						 potencia *= 16;

						 break;
						 case 'A':
						 decimal +=  10*potencia;
						 potencia *= 16;

						 break;
						 case 'a':
						 decimal +=  10*potencia;
						 potencia *= 16;

						 break;
						 case 'B':
						 decimal +=  11*potencia;
						 potencia *= 16;

						 break;
						 case 'b':
						 decimal +=  11*potencia;
						 potencia *= 16;

						 break;
						 case 'C':
						 decimal +=  12*potencia;
						 potencia *= 16;

						 break;
						 case 'c':
						 decimal +=  12*potencia;
						 potencia *= 16;

						 break;
						 case 'D':
						 decimal +=  13*potencia;
						 potencia *= 16;

						 break;
						 case 'd':
						 decimal +=  13*potencia;
						 potencia *= 16;

						 break;
						 case 'E':
						 decimal +=  14*potencia;
						 potencia *= 16;

						 break;
						 case 'e':
						 decimal +=  14*potencia;
						 potencia *= 16;

						 break;
						 case 'F':
						 decimal +=  15*potencia;
						 potencia *= 16;

						 break;
						 case 'f':
						 decimal +=  15*potencia;
						 potencia *= 16;

						 break;


					}//cierre swich
				}	//cierre for
				i=0;

				 while (decimal!=0){
                            octal[i] = decimal%8; //Esta linea es para guardar el residuo del valor de n entre 8. En un arreglo.
                            decimal = decimal /8; //Esta division es para modificar en valor de n en la proxima repeticion del while.
                            i++;} // Para moficicar el valor de i en el arreglo hexadecimal en la siguiente repeticion del while.
                      i--;

                      printf("\n---------------------------------\n");
					printf("El numero en sistema octal es :\t\t");

                      while (i>=0) //Este while se usa para imprimir los valores guardados en el arreglo octal.
                      {
                           switch(octal[i]){
                            /*Este switch sirve evaluar los diferentes casos posibles, si el numero guardado en el arreglo
                            es 8, se imprimira la correspondiente de un numero*/

                                case 8:
                                        printf("0");
                                break;
                                default:
                                        printf("%i",octal[i]); /*Si es un numero diferente del 10 al 15 solamente pone lo que hay en el arreglo osea uno que va del 0 al 9.*/
                                break;
                                                }
                                i--;}

//codigo para convertir a sistema decimal
//***************
//*******************************************************
fflush(stdin);
			 potencia=1;//reestablece valores de variables utilizadas anteriormente
			  decimal=0;// reestablece valores utilizados
				for (i=l;i>=0;i--)//for para recorrer cadena de izquirda a deracha para sistema decimal
				{

					switch (n[i])//swicht para leer el valor del elemento de la cadena para decimal
					{

					case '0':

						 decimal += 0*potencia;// dado que hexadecimal es base 16 se multiplica cada elemnto por 16
						 potencia *= 16;//cada vuelta la potencia se multiplica por 16

						 break;
						 case '1':
						 decimal += 1*potencia;
						 potencia *= 16;


						 break;
						 case '2':
						 decimal += 2*potencia;
						 potencia *= 16;

						 break;
						 case '3':
						 decimal += 3*potencia;
						 potencia *= 16;

						 break;
						 case '4':
						 decimal += 4*potencia;
						 potencia *= 16;

						 break;
						 case '5':
						 decimal += 5*potencia;
						 potencia *= 16;

						 break;
						 case '6':
						 decimal += 6*potencia;
						 potencia *= 16;

						 break;
						 case '7':
						 decimal += 7*potencia;
						 potencia *= 16;

						 break;
						 case '8':
						 decimal += 8*potencia;
						 potencia *= 16;

						 break;
						 case '9':
						 decimal += 9*potencia;
						 potencia *= 16;

						 break;
						 case 'A':
						 decimal +=  10*potencia;
						 potencia *= 16;

						 break;
						 case 'a':
						 decimal +=  10*potencia;
						 potencia *= 16;

						 break;
						 case 'B':
						 decimal +=  11*potencia;
						 potencia *= 16;

						 break;
						 case 'b':
						 decimal +=  11*potencia;
						 potencia *= 16;

						 break;
						 case 'C':
						 decimal +=  12*potencia;
						 potencia *= 16;

						 break;
						 case 'c':
						 decimal +=  12*potencia;
						 potencia *= 16;

						 break;
						 case 'D':
						 decimal +=  13*potencia;
						 potencia *= 16;

						 break;
						 case 'd':
						 decimal +=  13*potencia;
						 potencia *= 16;

						 break;
						 case 'E':
						 decimal +=  14*potencia;
						 potencia *= 16;

						 break;
						 case 'e':
						 decimal +=  14*potencia;
						 potencia *= 16;

						 break;
						 case 'F':
						 decimal +=  15*potencia;
						 potencia *= 16;

						 break;
						 case 'f':
						 decimal +=  15*potencia;
						 potencia *= 16;

						 break;

					}//cierre swich

				}//cierre for
				printf("\n---------------------------------\n");
				printf("El numero en sistema decimal es:\t%d",decimal);
            printf("\n\tDesea Repetir la ejeciciOn de PROBLEMA4? (1 = Si || 2 = No)\n\tELECCION: ");
			scanf("%d", &op);
			if(op==1){
                op=4;	//Repetimos la ejeciciOn del Programa Actual
			}else if(op==2){
				op=6;	//Salimos al MenU Inicial
			}

		}
		   while(op==5){
            fflush(stdin);//Borrar memoria

            printf("\n\t------CONVERCIONES DE SISTEMA BASE N------\n\t");
            printf("\n\t1)De sistema base n a binario\n\t2)De sistema base n a octal\n\t3)De sistema base n a hexadecimal\n\t4)De sistema base n a decimal\n\t");
            printf("\n\t---------------------------------------------\n\t");


            printf("\n\tDesea Repetir la ejeciciOn de PROBLEMA4? (1 = Si || 2 = No)\n\tELECCION: ");
			scanf("%d", &op);
			if(op==1){
                op=5;	//Repetimos la ejeciciOn del Programa Actual
			}else if(op==2){
				op=6;	//Salimos al MenU Inicial
			}

		}
        printf("\n\tSeleccione un programa a correr\n\n\t1)De sistema binario a octal, decimal y hexadecimal\n\t2)De sistema octal a binario, decimal y hexadecimal\n\t3)De sistema decimal a binario, octal y hexadecimal\n\t4)De sistema hexadecimal a binario, octal y decimal\n\t5)De sistema base n a binario, octal, decimal y hexadecimal y viseversa\n\t6)SALIR\n\t") ;
        scanf("%d", &op);

	}
	printf("\n\t--------------HASTA LUEGO QUE TENGAS BUEN DIA---------------\n");//fin del ejecutable
}
