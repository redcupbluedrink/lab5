#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 1
int main() {

    float pi = 0; 
	float del = 1;     
    int a = 1;        
    
    while (del >= 0.00001){
        del =  1.0 / (2 * a - 1);
        if ((a % 2) == 0)
            pi -= del;
        else 
			pi += del;		
        a += 1;
    }
    
    pi = pi * 4;
printf("%f", pi);
}
*/


/* 2
int main() {
	
	float y, a = 2.14, b = -4.21, c = 3.25, x = -4.5, xcon = -13.5;
	float h = 0.5;
	float mini = 0, maxi = 0;
	
	while(x >= xcon){
		printf("x = %f ", x);
		y = (a * x*x + b * x + c) * sin(x);
		printf("y = %f ", y);
		
		if (mini > y)
			mini = y;
			printf("mini = %f ", mini);
			
		if (maxi < y)
			maxi = y;
			printf("maxi = %f\n ", maxi);
			
		x -= h;
	}
	
	printf("max = %.3f, min = %.3f ", maxi, mini);
}
*/

/* 3
int main() {
	
    int i, N, prov, start,count;
    printf("Vvedite N: ");
    scanf("%d", &N);
    count = 0;
    
    for (start = 2; start <= N; start++) {
        i = 2;
        prov = 0;
        while (i < start) {
            
            if (start % i == 0) {
                prov += 1;
            }
            i += 1;
        }
        if (prov == 0) {
            printf("%d  ", start);
            count += 1 ;
            
        }
        
    }
    printf("\nKoli4estvo: %d ", count);
}

*/
