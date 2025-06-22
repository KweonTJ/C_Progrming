#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define BUSINESS 0
#define ENGINEERING 1
#define COMPUTER_SCIENCE 2
#define ARTS 3
#define SCIENCE 4

typedef struct
{
    char name[20];
    int major, kor, eng, mat;
    int sum;
    double avg;
    int rank;

} Student;

int compare_students(const void* a, const void* b)
{
    int diff = ((Student*)b)->sum - ((Student*)a)->sum;
    if (diff > 0) 
    {
        return 1;
    }
    else if (diff < 0) 
    {
        return -1;
    }
    else 
    {
        return strcmp(((Student*)a)->name, ((Student*)b)->name);
    }
}

void calculate_scores(Student* students, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        students[i].sum = students[i].kor + students[i].eng + students[i].mat;
        students[i].avg = students[i].sum / 3.0;
    }
}

void sort_and_assign_rank(Student* students, size_t size)
{
    qsort(students, size, sizeof(Student), compare_students);

    int current_rank = 1;
    for (size_t i = 0; i < size; ++i)
    {
        if (i > 0 && students[i].sum < students[i - 1].sum)
        {
            current_rank = i + 1;
        }
        students[i].rank = current_rank;
    }
}

void show_list(const Student* students, size_t size)
{
    printf("%-5s %-20s %-20s %-5s %-5s %-5s %-5s  %-5s\n", "RANK", "NAME", "MAJOR", "KOR", "ENG", "MATH", "TOTAL", "AVG");
    printf("============================================================================\n");

    for (size_t i = 0; i < size; ++i)
    {
        const char* major_str = "";
        switch (students[i].major)
        {
        case BUSINESS:
            major_str = "BUSINESS";
            break;
        case ENGINEERING:
            major_str = "ENGINEERING";
            break;
        case COMPUTER_SCIENCE:
            major_str = "COMPUTER_SCIENCE";
            break;
        case ARTS:
            major_str = "ARTS";
            break;
        case SCIENCE:
            major_str = "SCIENCE";
            break;
        }


        printf("%-5d %-20s %-20s %-5d %-5d %-5d %-5d %-5.1lf\n",
            i + 1, students[i].name, major_str, students[i].kor, students[i].eng, students[i].mat, students[i].sum, students[i].avg);
    }
}


int main()
{
    Student students[5];
    students[0] = (Student){ "John", BUSINESS, 80, 70, 50 };
    students[1] = (Student){ "Jane", ENGINEERING, 86, 56, 52 };
    students[2] = (Student){ "Michael", COMPUTER_SCIENCE, 89, 99, 60 };
    students[3] = (Student){ "Sarah", ARTS, 20, 85, 99 };
    students[4] = (Student){ "David", SCIENCE, 43, 54, 31 };

    calculate_scores(students, sizeof(students) / sizeof(Student));
    sort_and_assign_rank(students, sizeof(students) / sizeof(Student));
    show_list(students, sizeof(students) / sizeof(Student));

    return 0;
}
