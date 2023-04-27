#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[20];
    int gpa;
}student;

typedef struct grade
{
    char name[20];
    float avg;
    student Students[5];
}grade;

int main()
{
    int num;
    printf("enter the number of grade that are in this school: ");
    scanf("%d", &num);
    grade Class[num];
    float gpa_of_all = 0;

    for(int i = 0; i<num; ++i){
        printf("enter the name for class %d: ", i+1);
        scanf("%s", &Class[i].name);
        float gpa_of_class = 0;
        for(int j = 0; j<5; ++j){
            printf("enter a name for student %d: ", j+1);
            scanf("%s", &Class[i].Students[j].name);
            printf("enter the gpa for student: %s: ", Class[i].Students[j].name);
            scanf("%d", &Class[i].Students[j].gpa);
            gpa_of_class += Class[i].Students[j].gpa;
        }
        Class[i].avg = gpa_of_class/5;
        gpa_of_all += Class[i].avg;
    }
    float avg_all = gpa_of_all / num;

    for(int i = 0; i<num; ++i){
        printf("The average of class %s is: %.2f\n", Class[i].name, Class[i].avg);
    }
    printf("The average of all the classes is: %.2f", avg_all);



    return 0;
}

































