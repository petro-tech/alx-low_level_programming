void print_diagsums(int *a, int size) {
    int sum_diag1 = 0;
    int sum_diag2 = 0;

    // Calculate the sum of the main diagonal (left to right)
    for (int i = 0; i < size; i++) {
        sum_diag1 += *(a + i * size + i);
    }

    // Calculate the sum of the secondary diagonal (right to left)
    for (int i = 0; i < size; i++) {
        sum_diag2 += *(a + i * size + (size - 1 - i));
    }

    // Print the sums
    printf("Sum of main diagonal: %d\n", sum_diag1);
    printf("Sum of secondary diagonal: %d\n", sum_diag2);
}
