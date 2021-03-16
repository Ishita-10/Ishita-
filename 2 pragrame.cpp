public class Solution
{
    public static void answer(String s1, String s2, String s) {

        int[] Str1 = new int[256];
        int[] Str2 = new int[256];
        int[] Str = new int[256];

        for (int i = 0; i < str1.length(); i++)
        {
            Str1[str1.charAt(i)]++;
        }
        for (int i = 0; i < str2.length(); i++)
        {
            Str2[str2.charAt(i)]++;
        }
        for (int i = 0; i < str.length(); i++)
        {
            Str[str.charAt(i)]++;
        }
        for (int i = 0; i < 256; i++)
        {
            if (Str[i] != Str1[i] + Str2[i])
            {

                System.out.println("NO");

                return;
            }
        }
        System.out.println("YES");
    }

}
