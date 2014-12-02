#include <stdio.h>

int main () {
	
	int count, first, last, middle, num_elements, numbers[100], search;

	printf("Enter Number of Elements\n");
	scanf("%d", &num_elements);

	printf("Enter %d integers\n", num_elements);

	for (count = 0; count < num_elements ; count++) {
		scanf("%d", &numbers[count]);
	}

	printf("Enter value to find\n");
	scanf("%d", &search);

	first = 0;
	last = num_elements - 1;
	middle = (first+last)/2;

	while( first <= last ) {

		if (search > numbers[middle]) {
			first = middle + 1;
		} else if (search == numbers[middle]) {
			printf("%d was found at position %d\n", search, middle);
			return 0;
		} else {
			last = middle - 1;
		}

		middle = (first + last)/2;
	}

	if (first > last) {
		printf("That value was not found\n");
	}

	return 0;

};