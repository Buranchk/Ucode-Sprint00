void multiplyByPointer(int* ptr, int mult){
    if (ptr && *ptr)
        *ptr *= mult;
}

void multiplyByReference(int& ref, int mult){
    ref *= mult;
}
