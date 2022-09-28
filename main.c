#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("This is a grading system\n");
    int grd;
    printf("Enter your score\n");
    scanf("%d",&grd);

    if(grd < 20){
        printf("You failed");
    }
    else if(grd ==21 || grd <= 40){
        printf("You try sha\n");
    }
    else if(grd ==41 || grd<= 60){
        printf("You pass\n");
    }
    else if(grd ==61 || grd<= 80){
        printf("average\n");
    }
    else if(grd ==81 || grd<= 100){
        printf("above average\n");
    }



    return 0;
}
