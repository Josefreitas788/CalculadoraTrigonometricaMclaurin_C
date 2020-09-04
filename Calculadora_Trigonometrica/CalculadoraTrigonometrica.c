#include<stdio.h>
#include"cos.h"
#include"sen.h"
#define tam 1000
int main(){
	int escolha;
	long i,k,j=1/*y é o numerador*/;
	long double cos=1,l,y=1,x,sen,tan,sec,cotg,cosec,z;
	while(1){   
	printf("########################################\nEscolha uma função trigonométrica:\n\n1) Cosseno\n2) Seno\n3) Tangente\n4) Secante\n5) Cossecante\n6) Cotangente\n7) Sair do programa\n########################################\nOpção:");
	scanf("%d",&escolha);
	switch(escolha){
	    case 1:
			printf("Cos ");
			scanf("%Lf",&x);
			cos=cosseno(&x);
	    	printf("%Lf\n",cos);
	    	break;
	    case 2:
	    	printf("sen ");
	    	scanf("%Lf",&x);
	    	sen=seno(&x);
	    	printf("%Lf\n",sen);  	
        	break;
    	case 3:
        	printf("Tan " );
        	scanf("%Lf",&x);
			z=x;
			cos=cosseno(&x);
			sen=seno(&z);
	    	tan=sen/cos;
			printf("%Lf\n",tan);
			break;
        case 4: 
        	printf("sec\n");
			scanf("%Lf",&x);
			cos=cosseno(&x);
	    	sec=1/cos;
	    	printf("%Lf\n",sec);
	    	break;
	    case 5:
	    	printf("cosec\n");
	     	scanf("%Lf",&x);
	        sen=seno(&x);
	        cosec=1/sen;
	        printf("%Lf\n",cosec);
	        break;
	 	case 6:
        	printf("cotg\n");      
        	scanf("%Lf",&x);
			z=x;
	    	cos=cosseno(&x);
			sen=seno(&z);
	    	cotg=cos/sen;
	    	printf("%Lf\n",cotg);
	    case 7:
	    	return 0;
  }
 }
}    