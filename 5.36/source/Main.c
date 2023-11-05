#include <stdio.h>

void hanoi(int n, char from_peg, char to_peg, char aux_peg) {
	if (n == 1) {
		printf("Move disk 1 from peg %c to peg %c\n", from_peg, to_peg);
		return;
	}

	hanoi(n - 1, from_peg, aux_peg, to_peg);
	printf("Move disk %d from peg %c to peg %c\n", n, from_peg, to_peg);
	hanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main() {
	int num_disks = 64;
	hanoi(num_disks, 'A', 'C', 'B'); 
	return 0;
}

