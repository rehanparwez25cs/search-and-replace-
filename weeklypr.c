#include<stdio.h>
#include<string.h>

struct day {
    char name[20];
    int date;
    char activity[50];
};

typedef struct day Day;

void create(Day[],int);
void read(Day[],int);
void display(Day[],int);

int main(){
    #define SZ 3
    Day planner[SZ];
    create(planner,SZ);
    read(planner,SZ);
    display(planner,SZ);

    return 0;

}

void create(Day planner[],int size){
    int i;
    for(i=0;i<size;i++){
        strcpy(planner[i].name,"");
        planner[i].date=0;
        strcpy(planner[i].activity,"");

    }
}

void read(Day planner[],int size){
    for(int i=0;i<size;i++){

        printf("Day:%d\n",i+1);

        printf("enter name of day:");
        scanf("%19s",planner[i].name);

        printf("enter date:");
        scanf("%d",&planner[i].date);

        printf("enter activity:");
        scanf("%49s",planner[i].activity);
    }
}

void display(Day planner[],int size){
    printf("\n---------weekly planner-------\n");

    printf("%-10s%-6s%-30s\n","day","date","activity");

    printf("-------------------------------------------\n");

    for(int i=0;i<size;i++){

        printf("%-10s%-9d%-30s\n",planner[i].name,planner[i].date,planner[i].activity);
    }
}