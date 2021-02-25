// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
     cout << "Start: " << a << " " << b << endl;
    while (a != 0 && b != 0)
        if (a > b)
            a = a % b, cout << "Out: " << a << " " << b << endl;
    else 
        b = b % a, cout << "Out: " << a << " " << b << endl;
    return 0;
}
