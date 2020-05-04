
int findComplement( int num ) {
	int mask = 0, temp=num;
	while( temp ) {
		temp = temp >> 1;
		mask = mask << 1;
		mask = mask | 1;
	}
	return ~num & mask;
}
