char c = '\x01';
short int p =10;

    int x = p + 3;               // short int (car p est de type short int) , x prendra la valeur 10 + 3, donc x = 13
    int y = c + 1;               // int (car c est de type char, mais sera promu à int lors de l'addition) , y prendra la valeur de c (qui est '\x01') plus 1, donc y = 1 + 1 = 2
    int z = p + c;               // int (car c est de type char, mais sera promu à int lors de l'addition) , z prendra la valeur de p (qui est 10) plus la valeur de c (qui est '\x01'), donc z = 10 + 1 = 11
    int w = 3 * p + 5 * c;       // int (car c est de type char, mais sera promu à int lors de l'addition) , w prendra la valeur de 3 fois p (qui est 10) plus 5 fois c (qui est '\x01'), donc w = (3 * 10) + (5 * 1) = 30 + 5 = 35