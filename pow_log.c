#include <assert.h>
#include <math.h>

static int pow_lin(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * pow_lin(x, n - 1);
}

static int pow_log(int x, int n)
{
    if(n == 0 && x == 0)
    {
        return 1;
    }
    else if(n % 2 == 0)
    {
        return (x^(n/2) * x^(n/2));   
    }
    else
    {
        return x * pow_log(x, n-1);
    }
}

// static int go(int x, int n, int a)
// {
//     if()
// }

// static int pow_tail(int x, int n)
// {
    
// }

int main(void)
{
    int ns[] = {0, 1, 2, 3, 10};
    int t0[] = {1, 0, 0, 0, 0};
    int t2[] = {1, 2, 4, 8, 1024};
    int t5[] = {1, 5, 25, 125, 9765625};

    for (int i = 0; i < sizeof(ns) / sizeof(ns[0]); i++)
    {
        assert(pow_lin(0, ns[i]) == t0[i]);
        assert(pow_log(0, ns[i]) == t0[i]);
        //assert(pow_tail(0, ns[i]) == t0[i]);
        assert(pow_lin(2, ns[i]) == t2[i]);
        assert(pow_log(2, ns[i]) == t2[i]);
        //assert(pow_tail(2, ns[i]) == t2[i]);
        assert(pow_lin(5, ns[i]) == t5[i]);
        assert(pow_log(5, ns[i]) == t5[i]);
        //assert(pow_tail(5, ns[i]) == t5[i]);
    }
    return 0;
}
