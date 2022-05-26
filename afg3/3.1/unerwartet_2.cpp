# include < iostream >
int main () {
    int i = 0;
    {
        i = 3;
    }
    std :: cout << i << std :: endl ;
}

/*
 * i is 3 because the value of an variable defined in an enclosing scope can be changed.
 * This actually makes sense because e.g. you might want to change a variable in a function by its reference instead of passing it through.
 */

/*
 * 3.1
 * b) 8 and 7 and -1
 *
 * c) 12 and 6 and 27
 */

