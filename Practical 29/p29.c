#include <stdio.h>
#include <string.h>
struct Coach {
    char name[50];
    int age;
    int experience;
};
struct Team {
    char teamName[50];
    char sport[50];
    struct Coach coach;
};
int main() {
    struct Team t[50];
    int n = 0, choice;
    char searchName[50];
    while (1) {
        printf("\n1 Add Team\n2 Search Team\n3 Display All\n4 Exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Team Name: ");
            getchar();
            scanf("%s", t[n].teamName);
            printf("Sport: ");
            getchar();
            scanf("%s", t[n].sport);
            printf("Coach Name: ");
            getchar();
            scanf("%s", t[n].coach.name);
            printf("Coach Age: ");
            scanf("%d", &t[n].coach.age);
            printf("Coach Experience: ");
            scanf("%d", &t[n].coach.experience);
            n++;
        }
        else if (choice == 2) {
            printf("Enter team name: ");
            scanf("%s", searchName);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (strcmp(t[i].teamName, searchName) == 0) {
                printf("Team Name = %s\n", t[i].teamName);
                printf("Sport Name = %s\n", t[i].sport);
                printf("Coach Name = %s\n", t[i].coach.name);
                printf("Coach Age = %d yrs\n", t[i].coach.age);
                printf("Coach Experience = %d yrs\n", t[i].coach.experience);

                    found = 1;
                    break;
                }
            }
            if (!found) printf("Team not found\n");
        }
        else if (choice == 3) {
            for (int i = 0; i < n; i++){
                printf("Team Name = %s\n", t[i].teamName);
                printf("Sport Name = %s\n", t[i].sport);
                printf("Coach Name = %s\n", t[i].coach.name);
                printf("Coach Age = %d yrs\n", t[i].coach.age);
                printf("Coach Experience = %d yrs\n", t[i].coach.experience);
        }
        }
        else if (choice == 4) break;
    }
    printf("This program is made by Dev Bhatia 25CE007");
    return 0;
}

