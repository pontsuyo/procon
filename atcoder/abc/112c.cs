using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;
using System.Globalization;
using System.Diagnostics;

class Myon
{
    public Myon() {}
    public static int Main()
    {
        new Myon().calc();
        return 0;
    }

    Scanner cin;

    void calc()
    {
        cin = new Scanner();
        int N = cin.nextInt();
        int[] x = new int[N];
        int[] y = new int[N];
        int[] h = new int[N];

        for (int i = 0; i < N; i++)
        {
            x[i]=cin.nextInt();
            y[i]=cin.nextInt();
            h[i]=cin.nextInt();
        }

        for (int Y=0; Y<101; Y++)
        {
            for (int X=0; X<101; X++)
            {
                int needH = -1;
                for (int i=0; i<N; i++)
                {
                    if (h[i]==0) continue;
                    int dist = Math.Abs(Y-y[i]) + Math.Abs(X-x[i]);
                    int tmp = Math.Abs(h[i] + dist);
                    if(needH == -1) needH = tmp;
                    else if(needH != tmp)
                    {
                        needH=-2;break;
                    }
                }

                for (int i=0; i<N; i++)
                {
                    if (h[i] != 0) continue;
                    int dist = Math.Abs(Y-y[i]) + Math.Abs(X-x[i]);
                    
                    if(needH > dist)
                    {
                        needH=-2;break;
                    }
                }
                if (needH >0)
                {
                    Console.WriteLine("{0} {1} {2}", X, Y, needH);
                }
            }
        }
    }
}

class Scanner
{
    string[] s;
    int i;

    char[] cs = new char[] {' '};

    public Scanner()
    {
        s = new string[0];
        i = 0;
    }

    public string next()
    {
        if (i < s.Length) return s[i++];
        string st = Console.ReadLine();
        while (st == "") st = Console.ReadLine();
        s = st.Split(cs, StringSplitOptions.RemoveEmptyEntries);
        if (s.Length == 0) return next();
        i = 0;
        return s[i++];
    }

    public int nextInt()
    {
        return int.Parse(next());
    }
    public int[] ArrayInt(int N, int add = 0)
    {
        int[] Array = new int[N];
        for (int i = 0; i < N; i++)
        {
            Array[i] = nextInt() + add;
        }
        return Array;
    }

    public long nextLong()
    {
        return long.Parse(next());
    }

    public long[] ArrayLong(int N, long add = 0)
    {
        long[] Array = new long[N];
        for (int i = 0; i < N; i++)
        {
            Array[i] = nextLong() + add;
        }
        return Array;
    }

    public double nextDouble()
    {
        return double.Parse(next());
    }

    public double[] ArrayDouble(int N, double add = 0)
    {
        double[] Array = new double[N];
        for (int i = 0; i < N; i++)
        {
            Array[i] = nextDouble() + add;
        }
        return Array;
    }
}

class XRand
{
    uint x, y, z, w;

    public XRand()
    {
        init();
    }

    public XRand(uint s)
    {
        init();
        init_xor128(s);
    }

    void init()
    {
        x = 314159265; y = 358979323; z = 846264338; w = 327950288;
    }

    public void init_xor128(uint s)
    {
        z ^= s;
        z ^= z >> 21; z ^= z << 35; z ^= z >> 4;
        z *= 736338717;
    }

    uint next()
    {
        uint t = x^x << 11; x=y; y=z; z=w; return w = w^w >> 19^t^t>>8;
    }

    public long nextLong(long m)
    {
        return (long)((((ulong)next() << 32) + next()) % (ulong)m);
    }

    public int nextInt(int m)
    {
        return (int) (next() % m);
    }

    public int nextIntP(int a)
    {
        return (int)Math.Pow(a, nextDouble());
    }

    public int nextInt(int min, int max)
    {
        return min + nextInt(max - min + 1);
    }

    public double nextDouble()
    {
        return (double)next()/uint.MaxValue;
    }

    public double nextDoubleP(double a)
    {
        return Math.Pow(a, nextDouble());
    }
}