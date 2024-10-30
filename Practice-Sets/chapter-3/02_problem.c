#include<stdio.h>

int main(){
     
    float Math_marks;
    float Physics_marks;
    float Chemistry_marks;
    printf("Did You pass?\nDon't Know? Check it now !\n");
    printf("There are three Subjects\n");
    
    printf("Enter your Maths Marks(out of 100): ");
    scanf("%f",&Math_marks);

    printf("\nEnter your Physics Marks(out of 100): ");
    scanf("%f",&Physics_marks);

    printf("\nEnter your Chemistry Marks(out of 100): ");
    scanf("%f",&Chemistry_marks);

    int total_score = 300;
    float percentage = ((Math_marks + Physics_marks + Chemistry_marks)/300)*100;

    printf("\nYou scored %f Percent\n",percentage);

    if (Math_marks>=33 && Physics_marks>=33 && Chemistry_marks>=33 && percentage>=40.0){
        if (percentage>=90.0){
            printf("You Passed with amazing score, Well Done!");
        }
        else if(percentage>=40.0){
            printf("\n-----------------------> You Passed the exam <-----------------------\n");
        }
        else{
            printf("\n-----------------------> You failed the Exam <-----------------------\n");
        }
    }
    else{
        printf("\n-----------------------> You failed the Exam <-----------------------\n\nCriteria for Passing the exam is\nMinimum 33 percent is each subject and minimum 40 percent overall");
    }


    return 0;
}