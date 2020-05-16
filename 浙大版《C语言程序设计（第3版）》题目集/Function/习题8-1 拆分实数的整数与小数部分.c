void splitfloat( float x, int *intpart, float *fracpart ) {
    for (int i = 0; i < 10000; i ++) {
        if (x - (float)i < 0) {
            *intpart = i - 1;
            *fracpart = x - (float)*intpart;
            break;
        } else if (x - (float)i == 0) {
            *intpart = i;
            *fracpart = 0;
            break;
        }
    }
   
}