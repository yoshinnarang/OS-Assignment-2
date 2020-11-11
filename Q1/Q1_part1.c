 Name: Yoshin Narang
   Roll_Number: 2019221

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int i = 10;

int main()
{
    pid_t process = fork();
    if (process>0){
        // printf("%s","Yoshin");
    while (i <= 100)
    {
        
        printf("pid = %d, i = %d\n", getpid(), i);
        i++;
    }
    }
    else{
    while(i>=-90){
         
        printf("pid = %d, i = %d\n", getpid(), i);
        i--;

    }
    }
    
    
    return 0;
}
