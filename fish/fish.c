#include <stdio.h>
#include "fish.h"

void catalog(struct fish f) {
	printf("%s - this %s c %d teeth. him %d age\n",
			f.name, f.species, f.teeth, f.age);
}
