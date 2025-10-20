int Number = 0;

Number = int.Parse(Console.ReadLine());

int[] ints = new int[Number];

for (int i=0; i<Number; i++)
{
    ints[i] = int.Parse(Console.ReadLine());
}
Array.Sort(ints);


for(int j=0; j<ints.Length; j++)
{
    Console.WriteLine(ints[j]);
}
