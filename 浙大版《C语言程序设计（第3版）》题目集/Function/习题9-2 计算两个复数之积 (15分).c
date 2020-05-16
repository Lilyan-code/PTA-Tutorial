struct complex multiply(struct complex x, struct complex y) {
    struct complex ans;
    ans.real = (x.real * y.real - x.imag * y.imag);
    ans.imag = (x.imag * y.real + x.real * y.imag);
    return ans;
}