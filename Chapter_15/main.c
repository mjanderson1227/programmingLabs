#include "student.h"

int main(int argc, char* argv[]) {
    FILE* file = NULL;
    Student* studentArr = NULL;
    int csvlines;
    int userinput;
    Student desiredStudent;

    if (argc != 2) {
        printf("ERROR NO ARGS\n");
        return 1;
    }

    file = fopen(argv[1], "r");

    if(file == NULL) {
        printf("ERROR FILE NOT OPEN\n");
        return 1;
    }

    fscanf(stdin, "%d", &userinput);
    csvlines = getLines(file);

    studentArr = makeArray(file, csvlines);
    print(studentArr, csvlines);

    sortStudents( studentArr, csvlines );
    print( studentArr, csvlines );

    desiredStudent = searchStudent(studentArr, csvlines, userinput);
    printf("(%d,%s)\n", desiredStudent.id, desiredStudent.name);

    return 0;
}