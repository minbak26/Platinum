long POW(long A, long B, long C)
{
    if (B == 1)
    {
        return A % C;
    }
    long val = POW(A, B / 2, C);
    val = (val * val) % C;  // 나누기(/) 대신 나머지(%) 연산 적용
    if (B % 2 == 0)
    {
        return val;
    }
    return (val * A) % C;  // 곱셈 후에도 % 연산 반드시 수행
}


string[] inputs = Console.ReadLine().Split(' ');
long A = long.Parse(inputs[0]);
long B = long.Parse(inputs[1]);
long C = long.Parse(inputs[2]);

Console.WriteLine(POW(A, B, C));