unsigned int maxSum(int value, int maxint) {
    unsigned int result=0;
    for (int i=0; i <= abs(value); i++)
        result=result+i;
     if (result > maxint)
         result=-1;
     if (result== -1)
         throw string("Exception");
     return result;
}