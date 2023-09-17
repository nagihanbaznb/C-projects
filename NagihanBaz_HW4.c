//171805024 Nagihan Baz 

#include <stdio.h>
#pragma warning(disable:4996)

struct Student {
	char name[10];


	int number;
	int age;

};

struct Student;
void record(void);
void search(void);
void sort(void);

int main() {
	int system();
	int student();
	do {
		system("cls");
		printf("1-Record student.\n2-Search student (using its ID number).\n3-Sort the  records of students according to their ID numbers in an ascending order.\n4-Show the information of all students.\n5-Exit the program.");
		switch (getch()) {
		case 1: {
			system("cls");
			record student();
			break;
		}
		case 2: {
			system("cls");
			search student();
			break;
		}
		case 3: {
			system("cls");
			sort the record of students();
			break;
		}
		case 4: {
			system("cls");
			show the information of all students();
			break;
		
		}
		case 5: {
			system("cls");
			exit the program();
			return 0;
			break;
		}
		default: {
			printf("Incorrect entry.");
		}
		}
	} while (1);
	getch();
	return 0;
}
void record(void) {
	int i = 0;
	file = fopen("class.txt", "a+");
	if (file == NULL) {
		puts("File could not be opened.");
		exit(1);

	}
	while (!feof(file)) {
		fflush(stdout);
		fscanf(file, "%s %d %d\n", student.name, &student.number, &student.age);
		if (student.name != NULL) {
			printf("\n%s %d %d", student.name, student.number, student.age);
		}
	}
	fclose(file);
	puts("\nThe information has been saved, press a button to continue.");
	getch();
}
void search(void) {
	int number;
	int student.number = 0;
	fflush(stdin);
	printf("\nStudent name: ");
	gets(name);
	file = fopen("class.txt", "r");
	if (file == NULL) {
		puts("File could not be opened.");
		exit(1);
	}
	while (!feof(file)) {
		fscanf(file, "%s %d %d\n", student.name, &student.number, &student.age);
		if (strcmp(student.name, name) == 0) {
			printf("%s %d %d\n\nPress a key to coontinue.", student.name, student.number, student.age);
			student.number = 1;
		}
	}
	fclose(file);
	if (student.number == 0) {
		puts("Record not found press a key to continue.");
	}
	getch();

	}

void sort(void) {
	file = fopen("class.txt", "r");
	if (file == NULL) {
		puts("File could not be opened.");
		exit(1);
	}
	while (!feof(file)) {
		fflush(stdout);
		fscanf(file, "%s %d %d\n", student.name, &student.number, &student.age);
		if (student.name != NULL) {
			printf("\n%s %d %d", student.name, student.number, student.age);
		}
	}
	fclose(file);
	puts("\nInformation is listed press a key to continue.");
	getch();
}
   
if else;
return 0;


}






}

