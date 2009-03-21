int square(int x) {int y = x;
	/* This does some squaring */
	/* Update y to equal the result. */
	/* Question: what is the order of magnitude of this algorithm with respect to x? */
	for (int i = 0; i < x; i++) y += x;
	return y;
}

