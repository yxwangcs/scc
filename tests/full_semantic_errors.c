
int global_a;
struct foo
{
    // redefinition in struct declaration
    int a;
    int a;
    float b;
};
// redefinition of foo
struct foo
{
    float a;
    int b;
};

int test()
{
    // return type 'void' doesn't match the function type 'int'
    return;
}

// redefinition in function arguments
int a_func(int a, int a)
{
    return 1;
}

int func(int c, int d, float f)
{
    int b = 1.0;
    float test_array[10];
    b = c;
    b = c * d + 6 * 7.0;
    // undefined variable 'h'
    h = !f;
    // '[]' used on non-array variable
    b[1] = 2;
    // undefined variable 'nono'
    nono[0] = 3;
    b = a_func(1, 1);

    return c * d;
}

// redefinition of func
int func()
{
    return 1;
}

void main()
{
    int aaa[10];
    // redefinition of 'duplicate'
    int duplicate[1];
    int duplicate;
    struct foo bar;
    // incomplete type
    struct b incomplete_type;
    bar.a = 1;
    // illegal member access
    bar.abc = 2;
    // '.' used on non-struct variables
    aaa.abc = 2;
    // undefined variable 'a'
    func(2.5, a, aaa[0]);
    // undefined function name
    b_func(1);
    // '()' used on non-function
    aaa(2);
    // return type 'int' doesn't match the function type 'void'
    return 1;
}

