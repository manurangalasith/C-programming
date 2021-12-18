#include<stdio.h>


int main (){
    int players,sum,r;

    printf("How many players are in the race :");
    scanf ("%d",&players);

    for (int i=0;i<players;i++)
    {

        printf("Enter scores of player %d (between 0-7)\n",i+1);

       for(int j=0;j<2;j++){

        printf("   round %d -",j+1);
        scanf("%d",&r);
        if (r<0 || r>7){

            printf("Invalid input try again\n");
            --j;
            r=0;
        }
         sum+=r;

       }
     printf("Average score %.1f\n\n",(float)sum/2);
     sum=0;

    }
}

/*include<stdio.h>


int main (){
    int players;
    float a=0;
    printf("How many players are in the race :");
    scanf ("%d",&players);

    for (int i=0;i<players;i++)
    {

        printf("Enter scores of player %d (between 0-7)\n",i+1);

       for(int j=0;j<2;j++){

        float r;
        float sum;

        printf("round %d -",j+1);
        scanf("%f",&r);
         sum+=r;

       }
     printf("Average score %.1f\n\n",(float)sum/2);

    }
}







/*#include<stdio.h>
int main(){
int myArray [5]={1,2,3,30,0};
int max;
max=myArray[0];
for (int i=1;i<5;i++){

    if (max <myArray[i]){
        max =myArray[i];
    }

}
printf("%d",max);







}*/
