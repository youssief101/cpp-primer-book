void fcn1(const int i) {
    /* fcn can read but not write to i */
}

void fcn(int i) {
    /* error: redefines fcn (int)*/
}