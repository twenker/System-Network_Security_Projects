#include <stdio.h>
int main() {
	int studentId;
	char studentName[100], buffer[100], percentage[10];

	char* firstName = malloc(sizeof(char)*50);
	char* lastName = malloc(sizeof(char)*50);
	char* graduateLevel = NULL;

	printf("\n**********Welcome to Student Registration Service**********\n");
	printf("\nPlease enter your 10 digit Student ID: ");
	scanf("%d", &studentId);

	printf("\nPlease enter your first name: ");
	gets(firstName);

	printf("\nPlease enter your last name: ");
	gets(lastName);

	{
		char level[2];
		printf("\nPlease enter your graduate level (UG/PG): ");
		gets(level);
		graduateLevel = &level;
	}
	
	strcpy(studentName, firstName);
	strcat(studentName, lastName);
	
	printf("\nPlease enter your percentage in Highschool (like 85.50%): ");
	gets(percentage);
	// Student record saving in file
	updateStudentRecord();

	printf("\nStudent record saved with the following details: \n");
	printf("\nStudent ID: %d", studentId);
	printf("\nStudent Name: %s", studentName);
	printf("\nStudent percentage in Highschool: ");
	
	printf(percentage);

	free(firstName);
	free(firstName);
		
	return(0);
}