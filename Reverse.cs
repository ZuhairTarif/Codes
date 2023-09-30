using System;
using System.Collections.Generic;
using System.Linq;

namespace ConsoleApp1
{
    class Program
    {
        public static List<int> rArray(List<int> a)
        {
            for (int i = 0; i < a.Count / 2; i++)
            {
                int swap = a[i];
                a[i] = a[a.Count - 1 - i];
                a[a.Count - 1 - i] = swap;
            }
            return a;
        }

        public static string sArray(string s)
        {
            char[] charArray = s.ToCharArray();
            for (int i = 0; i < s.Length / 2; i++)
            {
                char swap = charArray[i];
                charArray[i] = charArray[s.Length - 1 - i];
                charArray[s.Length - 1 - i] = swap;
            }
            return new string(charArray);
        }

        static void Main()
        {
            int[] A = { 2,3,4,5,6 };
            var b = rArray(A.ToList());
            foreach (int i in b)
            {
                Console.WriteLine(i);
            }

            string str = Console.ReadLine();
            string reversedStr = sArray(str);
            Console.WriteLine(reversedStr);
        }
    }
}
