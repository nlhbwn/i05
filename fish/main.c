#include <stdio.h>


struct fish {
	const char *name;
	const char *species;
	int teeth;
	int  age;
};

void catalog(struct fish f) {
	printf("%s - this %s c %d teeth. him %d age\n",
		f.name, f.species, f.teath, f.age);
}

int main () {
	struct fish snappy = {"nibbler", "piranha", 69, 4};
	catalog(snappy);
	return 0;
}

