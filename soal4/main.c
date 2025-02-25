#include "matrix.h"

/* 
 * Membuat matrix baru dengan nilai a, b, c, d
 */
Matrix newMatrix(int a, int b, int c, int d) {
    Matrix m;
    m.a = a;
    m.b = b;
    m.c = c;
    m.d = d;
    return m;
}

/* 
 * Menampilkan matrix ke layar dengan format:
 * [a b]
 * [c d]
 */
void printMatrix(Matrix m) {
    printf("[%d %d]\n", m.a, m.b);
    printf("[%d %d]\n", m.c, m.d);
}

/* 
 * Menambahkan dua matrix m1 dan m2
 */
Matrix add(Matrix m1, Matrix m2) {
    Matrix result;
    result.a = m1.a + m2.a;
    result.b = m1.b + m2.b;
    result.c = m1.c + m2.c;
    result.d = m1.d + m2.d;
    return result;
}

/* 
 * Mengurangkan m2 dari m1
 */
Matrix subtract(Matrix m1, Matrix m2) {
    Matrix result;
    result.a = m1.a - m2.a;
    result.b = m1.b - m2.b;
    result.c = m1.c - m2.c;
    result.d = m1.d - m2.d;
    return result;
}

/* 
 * Mentranspose matrix m secara in-place
 */
void transpose(Matrix *m) {
    int temp = m->b;
    m->b = m->c;
    m->c = temp;
}

/* 
 * Menghitung determinan matrix m
 */
int determinant(Matrix m) {
    return m.a * m.d - m.b * m.c;
}

int main()
{
	Matrix m1 = newMatrix(1, 6, 3, 4);
	Matrix m2 = newMatrix(4, 4, 8, 13);
	Matrix m3 = add(m1, m2);
	Matrix m4 = subtract(m2, m1);
	int d_m4 = determinant(m4);
	transpose(&m3);
	printMatrix(m4);
	printf("%d\n", d_m4);
	return 0;
}