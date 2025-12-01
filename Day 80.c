#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student student;
    FILE *fp;
    int n, i;
    
    // Step 1: Write student records to file
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Cannot create students.txt\n");
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i+1);
        scanf("%s", student.name);
        printf("Enter roll number: ");
        scanf("%d", &student.roll_no);
        printf("Enter marks: ");
        scanf("%f", &student.marks);
        
        fprintf(fp, "%s %d %.2f\n", student.name, student.roll_no, student.marks);
    }
    fclose(fp);
    printf("Student records written to file.\n\n");
    
    // Step 2: Read and display from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open students.txt\n");
        return 1;
    }
    
    printf("Student Records:\n");
    printf("================\n");
    printf("Name\t\tRoll\tMarks\n");
    
    while (fscanf(fp, "%s %d %f", student.name, &student.roll_no, &student.marks) == 3) {
        printf("%-15s %4d\t%.2f\n", student.name, student.roll_no, student.marks);
    }
    
    fclose(fp);
    return 0;
}
