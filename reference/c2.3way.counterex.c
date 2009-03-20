int square(int x) {int y = x;
        y = 0;
        /* Update y to equal the result. */
        /* Question: what is the order of magnitude of this algorithm with respect to x? */
        for (int i = 0; i < x; i++) y += x; return y;
}

int very_slow_square(int x) {int y;
        y = 0;
        /* Update y to equal the result. */
        /* Question: what is the order of magnitude of this algorithm with respect to x? */
        for (int i = 0; i < x; i++)
                for (int j = 0; j < x; j++)
                        y += 1;
        return y;
}

int slow_square(int x) {int y = -3*x*x; x *= 2;
        /* This does some squaring */
        /* Update y to equal the result. */
        /* Question: what is the order of magnitude of this algorithm with respect to x? */
        for (int i = 0; i < x; i++) y += x;
        return y;
}

