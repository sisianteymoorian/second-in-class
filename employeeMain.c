#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void){
	PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
	PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind);
	PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char *phoneToFind);
	PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
	
	extern Employee EmployeeTable[];
	extern const int EmployeeTableEntries;

	PtrToEmployee matchPtr;
	matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

	if(matchPtr != NULL)
		printf("Employee ID 1045 is in record %d\n" , matchPtr - EmployeeTable);
	else
		printf("Employee ID is NOT found in the record\n");

	matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
	if(matchPtr !=NULL)
		printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
	else
		printf("Employee Tony Bobcat is NOT found in the record\n");
	
  matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "213-555-1212");
	if(matchPtr !=NULL)
		printf("Employee phone 213-555-1212 is in record %d\n", matchPtr - EmployeeTable);
	else
		printf("Employee phone 213-555-1212 is NOT found in the record\n");
  
  matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.68);
	if(matchPtr != NULL)
		printf("Employee salary 8.68 is in record %d\n" , matchPtr - EmployeeTable);
	else
		printf("Employee salary 8.68 is NOT found in the record\n");
  

	return EXIT-SUCCESS;
}
