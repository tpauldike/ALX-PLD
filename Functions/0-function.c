// A program to Divide any two Integers and give the remainder //

int divide(int a, int b)
{
	int c = a % b; // Remainder after division //
	int d = a / b; // Value gotten in integer type
	printf("%d / %d = %d\n", a, b, d); // This prints the
	printf("Remainder is %d\n", c);

	return c;
}

int main()
{
	divide(200, 7);
	divide(45, 6);
	divide(90, 9);
	divide(5, 3);

	return 0;
}