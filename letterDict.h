class LetterDict {
    private:
    //Just use charmap to find the values, if bugs will occur, just go check the other UNICODE charecter values on other machines
    // it might sound strange BUT maybe different compilers behave differently on different machines knowing different idntifying charecter codes
    string Keys[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    string Values[26] = {"α"};

    public:
};

int StringLenght(string x) {
    int len;
    for (int i = 0; x[i] != 0; i++){
        len = i;
    }
    return len;
}

char LastStringChar(string x, int index) {
    int Length = StringLenght(x);
    //Here the code needs completition
}