/*****************************************************************************
 * Lab 11
 * CS1050
 * FS 2022
 * Aditya Ramakrishnan
 * AR4BW
 *****************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct _Team
{
    char city[256];
    char name[256];
} Team;


typedef struct _Player
{
	char firstName[256];
    char lastName[256];
    long salary;
    Team team;
} Player;


void display(Player m[], int s);
void sortLastName(Player m[], int s);
void sortFirstName(Player m[], int s);
void sortSalary(Player m[], int s);

 int main(void)
 {
	Player players[] = 
    {
		{"Corey","Seager",32500000,{"Texas","Rangers"}},
		{"Stephen","Strasburg",35000000,{"Washington","Nationals"}},
		{"Gerrit","Cole",36000000, {"New York","Yankees"}},
		{"Mike","Trout",35500000, {"Los Angeles","Angels"}},
		{"Carlos","Correa",35100000,{"Minnesota","Twins"}},
		{"Anthony","Rendon",35000000,{"Los Angeles","Angels"}},
		{"Francisco","Lindor",34100000,{"New York","Mets"}},
		{"Trevor","Bauer",34000000,{"Los Angeles","Dodgers"}},
		{"Nolan","Arenado",32500000,{"St. Louis","Cardinals"}},
		{"Max","Scherzer",43300000,{"New York","Mets"}},
    };

	int size = sizeof(players)/sizeof(players[0]);
	printf("Players: \n");
	display(players, size);
	printf("Players by last name: \n");
	sortLastName(players,size);
	display(players, size);
	printf("Players by first name: \n");
	sortFirstName(players,size);
	display(players, size);
	printf("Players by Salary: \n");
	sortSalary(players,size);
	display(players, size);
 }

void display(Player m[], int s){

	 printf("%28s\t%28s\t%28s\t%28s\t%28s\n","First Name", "Last Name", "Salary", "Team City", "Team Name");
    for (int i = 0; i < s; i++)
    {
        printf("%28s\t%28s\t%28ld\t%28s\t%28s\n", m[i].firstName, m[i].lastName, m[i].salary, m[i].team.city, m[i].team.name);
    } 
}

void sortLastName(Player m[], int s){
	int i, j;
    Player temp;
    for(i = 0; i < s; i++) {
        for(j = i+1; j < s; j++) {
            if(strcmp(m[i].lastName, m[j].lastName) > 0) {
                temp = m[i];
				m[i] = m[j];
				m[j] = temp;
            }
        }
    }
}
void sortFirstName(Player m[], int s){
	int i, j;
    Player temp;
    for(i = 0; i < s; i++) {
        for(j = i+1; j < s; j++) {
            if(strcmp(m[i].firstName, m[j].firstName) > 0) {
                temp = m[i];
				m[i] = m[j];
				m[j] = temp;
            }
        }
    }
}

void sortSalary(Player m[], int s){
	int i, j;
    Player temp;
    for(i = 0; i < s; i++) {
        for(j = i+1; j < s; j++) {
            if(m[i].salary > m[j].salary) {
                temp = m[i];
				m[i] = m[j];
				m[j] = temp;
            }
        }
    }
}


