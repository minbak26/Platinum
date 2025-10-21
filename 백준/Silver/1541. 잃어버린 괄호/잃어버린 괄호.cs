string input = Console.ReadLine();

if (string.IsNullOrEmpty(input))
{
    Console.WriteLine(0);
    return;
}

int ans = 0;
int tmp = 0;

int sign = 1;

foreach (char c in input)
{
    if (c == '+' || c == '-')
    {

        ans += tmp * sign;

        if (c == '-')
        {
            sign = -1;
        }

        tmp = 0;
    }
    else
    {
    
        tmp = tmp * 10 + (c - '0');
    }
}

ans += tmp * sign;

Console.WriteLine(ans);