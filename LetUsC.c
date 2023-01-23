#include <iostream.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char nfa[50][50], s[20], st[10][20], eclos[20], input[20];
int x, e, top = 0, topd = 0, n = 0, ns, nos, in;

int checke(char a)
{
    int i;
    for (i = 0; i < e; i++)
    {
        if (eclos[i] == a)
            return i;
    }
    return -1;
}

int check(char a)
{
    int i;
    for (i = 0; i < in; i++)
    {
        if (input[i] == a)
            return i;
    }
    return -1;
}

void push(char a)
{
    s[top] = a;
    top++;
}

char pop()
{
    top--;
    return s[top];
}

void pushd(char *a)
{
    strcpy(st[topd], a);
    topd++;
}

char *popd()
{
    topd--;
    return st[topd];
}

int ctoi(char a)
{
    int i = a - 48;
    return i;
}

char itoc(int a)
{
    char i = a + 48;
    return i;
}

char *eclosure(char *a)
{
    int i, j;
    char c;
    for (i = 0; i < strlen(a); i++)
        push(a[i]);
    e = strlen(a);
    strcpy(eclos, a);
    while (top != 0)
    {
        c = pop();
        for (j = 0; j < ns; j++)
        {
            if (nfa[ctoi(c)][j] == 'e')
            {
                if (check(itoc(j)) == -1)
                {
                    eclos[e] = itoc(j);
                    push(eclos[e]);
                    e++;
                }
            }
        }
    }
    eclos[e] = '\0';
    return eclos;
}

void main()
{
    int i, j, k, count;
    char ec[20], a[20], b[20], c[20], dstates[10][10];
    clrscr();
    cout << "Enter the number of states" << endl;
    cin >> ns;
    for (i = 0; i < ns; i++)
    {
        for (j = 0; j < ns; j++)
        {
            cout << "Move[" << i << "][" << j << "]";
            cin >> nfa[i][j];
            if (nfa[i][j] != '-' && nfa[i][j] != 'e')
            {
                if ((check(nfa[i][j])) == -1)
                    input[in++] = nfa[i][j];
            }
        }
    }
    topd = 0;
    nos = 0;
    c[0] = itoc(0);
    c[1] = '\0';
    pushd(eclosure(c));
    strcpy(dstates[nos], eclosure(c));
    for (x = 0; x < in; x++)
        cout << "\t" << input[x];
    cout << "\n";
    while (topd > 0)
    {
        strcpy(a, popd());
        cout << a << "\t";
        for (i = 0; i < in; i++)
        {
            int len = 0;
            for (j = 0; j < strlen(a); j++)
            {
                int x = ctoi(a[j]);
                for (k = 0; k < ns; k++)
                {
                    if (nfa[x][k] == input[i])
                        ec[len++] = itoc(k);
                }
            }
            ec[len] = '\0';
            strcpy(b, eclosure(ec));
            count = 0;
            for (j = 0; j <= nos; j++)
            {
                if (strcmp(dstates[j], b) == 0)
                    count++;
            }
            if (count == 0)
            {
                if (b[0] != '\0')
                {
                    nos++;
                    pushd(b);
                    strcpy(dstates[nos], b);
                }
            }
            cout << b << "\t";
        }
        cout << endl;
    }
    getch();
}

/*
OUTPUT:

Enter the number of states
5
Move[0][0]-
Move[0][1]e
Move[0][2]-
Move[0][3]e
Move[0][4]-
Move[1][0]-
Move[1][1]-
Move[1][2]a
Move[1][3]-
Move[1][4]-
Move[2][0]-
Move[2][1]e
Move[2][2]-
Move[2][3]e
Move[2][4]-
Move[3][0]-
Move[3][1]-
Move[3][2]-
Move[3][3]-
Move[3][4]b
Move[4][0]-
Move[4][1]-
Move[4][2]-
Move[4][3]-
Move[4][4]-
a b
013 213 4
4
213 213 4
*/