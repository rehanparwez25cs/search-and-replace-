#include<stdio.h>
#include<string.h>
struct day{
    char day[50];
    int date;
    char activity[100];
};
typedef struct day Day;

void create(Day[],int );
void read(Day[],int );
void display(Day[],int );

int main(){
#define SZ 3

    Day planner[SZ];
    create(planner,SZ);
    read(planner,SZ);
    display(planner,SZ);

    return 0;

}


void create(Day planner[],int size){
    for(int i=0;i<size;i++){
        strcpy(planner[i].day,"");
        planner[i].date=0;
        strcpy(planner[i].activity,"");

    }
}

void read(Day planner[],int size){
    for(int i=0;i<size;i++){
        printf("day %d:\n",i+1);

        printf("enter day:");
        scanf("%49s",planner[i].day);

        printf("enter date:");
        scanf("%d",&planner[i].date);

        printf("enter activity:");
        scanf("%99s",planner[i].activity);

    }
}
void display(Day planner[],int size){
    printf("\n-------weekly report-------\n");

    printf("%-10s%-6s%-30s\n","day","date","activity");

    printf("----------------------------------------\n");

    for(int i=0;i<size;i++){

        printf("%-10s%-9d%-30s\n",
            planner[i].day,
            planner[i].date,
            planner[i].activity);
    }
}