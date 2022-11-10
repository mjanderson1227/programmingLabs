//Include Header
#include "student.h"

//Get lines of the CSV file
int getLines( FILE* file ) {
    int numLines = 1;
    while(!feof(file)) 
        if ( fgetc(file) == '\n' ) 
            numLines++;
    rewind(file);
    return numLines;
}

//Memory Allocation function
Student* makeArray( FILE* file, int lines ) {
    int i;
    Student* studentArr = (Student*) malloc(sizeof( Student ) * lines);
    Student curStudent;

    for ( i=0 ; i < lines; i++ ) {
        fscanf(file, "%d,%s", &curStudent.id, curStudent.name);
        studentArr[i] = curStudent;
    }
    return studentArr;
}

//Sort Function - Using Insertion sort.
void sortStudents( Student* studentArr, int size ) {
    //References to the sorted and unsorted parts of the array
    int i;
    int j;
    //Swap variable
    Student swap;
    for (i = 0; i < size; i++) {
        //Set j=i
        j = i;
        //move the smaller elements down the array with repeated swaps.
        while (j > 0 && studentArr[j].id < studentArr[j-1].id) {
            swap = studentArr[j];
            studentArr[j] = studentArr[j-1];
            studentArr[j-1] = swap;
            j--;
        }
    }
}

//Print studentArr
void print( Student* studentArr, int size ) {
    int i;
    for(i=0;i<size;i++) {
        printf("(%d,%s) -> ", studentArr[i].id, studentArr[i].name);
    }
    printf("\n");
}

//Binary Search studentArr for the desired key - searches by id
Student searchStudent( Student* studentArr, int size, int key ) {
	int mid, low=0, high=size-1;
	while(low <= high)
	{
		mid = (high + low) / 2;
		if(studentArr[mid].id < key)
			low = mid + 1;
		else if(studentArr[mid].id > key)
			high = mid - 1;
		else
			return studentArr[mid];
	}
    return studentArr[0];
}