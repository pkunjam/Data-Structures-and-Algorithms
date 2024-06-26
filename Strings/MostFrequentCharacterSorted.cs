using System;
using System.Text;

public class MostFrequentCharacterSorted
{
    //Returns a new string consisting of the most frequent letter(s) in str, ordered alphabetically.
    //str consists only of lower case characters (a-z).
    static string MostFrequent(string str)
    {
        int[] letterCount = new int[str.Length];
        string tempStr = "";

        tempStr = str;

        for (int i = 0; i < str.Length; i++)
        {
            for (int j = 0; j < letterCount.Length; j++)
            {
                if (str[i] == tempStr[j])
                {
                    letterCount[i]++;
                }
            }
        }

        int maxCount = 0;

        for (int i = 0; i < letterCount.Length; i++)
        {
            if (letterCount[i] > maxCount)
            {
                maxCount = letterCount[i];
            }
        }

        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < str.Length; i++)
        {
            if ((letterCount[i] == maxCount) && (!sb.ToString().Contains(str[i])))
            {
                sb.Append(str[i]);
            }
        }

        char[] arr = sb.ToString().ToCharArray();

        Array.Sort(arr);

        return new string(arr);
    }
    public static void Main()
    {
        Console.WriteLine(MostFrequent("eggs")); //"g"
        Console.WriteLine(MostFrequent("shoe")); //"ehos"
        Console.WriteLine(MostFrequent("vacuumcleaners")); //"aceu"
        Console.WriteLine(MostFrequent("weallleaveinayellowsubmarine")); //"el"
        Console.WriteLine(MostFrequent("")); //""
    }
}