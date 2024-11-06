#include <stdio.h>  
#include <string.h>
#include <stdlib.h>

int calculateSumOfProducts(int a, int b, int c) {  
    int p1 = a * b * c;  
	
    int min1, min2;  

    if (a <= b && a <= c) {  
        min1 = a;  
        min2 = (b <= c) ? b : c;  
    } else if (b <= a && b <= c) {  
        min1 = b;  
        min2 = (a <= c) ? a : c;  
    } else {  
        min1 = c;  
        min2 = (a <= b) ? a : b;  
    }  

    int p2 = min1 * min2;  
	
    return p1 + p2;  
}

int present(char input[])
{
    char snum[4];
    int sofar;
    int nums[3];
    for (int i = 0; input[i] != 'x'; i++) // i was right: https://stackoverflow.com/questions/22736348/char-comparison-in-c
    {
        snum[i] = input[i];
        sofar++;
    }
    nums[0] = atoi(snum);
    strcpy(snum, "");
    for (int i = sofar + 1; input[i] != 'x'; i++)
    {
        snum[i-sofar] = input[i];
    }
    nums[1] = atoi(snum);
    strcpy(snum, "");
    for (int i = sofar + 1; input[i] != 'x'; i++)
    {
        snum[i - sofar] = input[i];
    }
    nums[2] = atoi(snum);
    return num
    
}

int main(void)  
{  
    int present(char input[]);
    int total;
    char input[16];  
    while (1)  
    {  
        scanf("%31[^\n]", input); 
        getchar(); 
     
        if (strcmp(input, "no") == 0) 
        {  
            break;
        }
        else
        {
            //printf("%s\n", input);
        }
    }  

    return 0;  
}
