

typedef struct {
	long number;
	char *name;
	char *phone;
	double salary;
} Employee, *PtrToConstEmployee;

typedef const Employee *PtrToConstEmployee;