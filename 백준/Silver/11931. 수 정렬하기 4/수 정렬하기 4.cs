using System;
using System.Text; 

public class Program
{
    public static void Main(string[] args)
    {
        const int MXN = 2_000_000;
        const int HALF = MXN / 2;

        // .NET에서 bool 배열은 자동으로 false로 초기화.
        bool[] isNum = new bool[MXN + 2];

        // C#에서는 Console.ReadLine()으로 한 줄을 읽고 int.Parse()로 변환.
        int N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            int t = int.Parse(Console.ReadLine());
            isNum[t + HALF] = true;
        }

        StringBuilder sb = new StringBuilder();

        for (int i = MXN; i >= 0; i--)
        {
            if (isNum[i])
            {
                // i - HALF 값을 문자열로 변환하여 StringBuilder에 추가
                sb.AppendLine((i - HALF).ToString());
            }
        }

        // 마지막에 결과 문자열을 한 번에 출력.
        Console.Write(sb.ToString());
    }
}