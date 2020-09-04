#ifndef COS_H
#define COS_H
#define tam 1000
long double cosseno(long double *x){
        long double cos=1,l,y=1;
        long i,k,j=1;
        *x=*x*(3.1415926535897932384659/180);
	        y=*x;
	    for(i=1;i<=tam;i++){ // loop pra mudar o termo da série
	    	j=i*2;//denominador das frações da série
	    	y=*x;
	    	l=1;
	    	for(k=j;k>1;k--){ //loop pra achar o fatorial
	    		l=l*k;
	    	}
	    	for(j=j;j>1;j--){//loop para determinar x^2k
	    		y=y*(*x);
	    	}
	    	if(i%2!=0){
	    		cos=cos-(y/l);
	    	}
	    	else{
	    		cos=cos+(y/l);
	    	}
	    }
	    return cos;
    }
#endif