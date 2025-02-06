// header file inclusion 
#include <stdio.h> 
#include <stdlib.h> 

// structure definition 
struct Date 
{
    int day; 
    int month; 
    int year; 
}; 

// Function declarations 
struct Date* createDateInstance(int _day, int _month, int _year); 
int getDay(struct Date* pDate); 
int getMonth(struct Date* pDate); 
int getYear(struct Date* pDate); 
void setDay(struct Date* pDate, int newDay); 
void setMonth(struct Date* pDate, int newMonth); 
void setYear(struct Date* pDate, int newYear); 
void showDate(struct Date* pDate); 
void releaseDateInstance(struct Date* pDate); 

// main function 
int main(void)
{
    // Client Side 
    struct Date* pNewDate = createDateInstance(25, 1, 2025); 
    showDate(pNewDate); 
    setDay(pNewDate, 30); 
    setMonth(pNewDate, 4); 
    setYear(pNewDate, 2026); 
    showDate(pNewDate); 
    printf(
        "%d/%d/%d\n", getDay(pNewDate), 
        getMonth(pNewDate), getYear(pNewDate)
    );
    releaseDateInstance(pNewDate) ; 
    pNewDate = NULL; 

    return (0); 
}

// Server side 

struct Date* createDateInstance(int _day, int _month, int _year)
{
    struct Date* pDate = NULL; 

    pDate = (struct Date*)malloc(sizeof(struct Date)); 
    if(NULL == pDate)
    {
        fprintf(stderr, "malloc():fatal:out of memory\n"); 
        exit(-1); 
    }

    pDate->day = _day; 
    pDate->month = _month; 
    pDate->year = _year; 

    return (pDate); 
} 

int getDay(struct Date* pDate)
{
    return (pDate->day); 
} 

int getMonth(struct Date* pDate)
{
    return (pDate->month); 
} 

int getYear(struct Date* pDate)
{
    return (pDate->year); 
} 

void setDay(struct Date* pDate, int newDay)
{
    pDate->day = newDay; 
}

void setMonth(struct Date* pDate, int newMonth)
{
    pDate->month = newMonth; 
}

void setYear(struct Date* pDate, int newYear)
{
    pDate->year = newYear; 
}

void showDate(struct Date* pDate)
{
    printf("%d/%d/%d\n", pDate->day, pDate->month, pDate->year); 
}

void releaseDateInstance(struct Date* pDate)
{
    free(pDate); 
    pDate = NULL; 
}
