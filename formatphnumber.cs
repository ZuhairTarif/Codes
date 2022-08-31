using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;

class Solution
{
  
        
class PhoneFormatter {
  public static string formatPhNumber(string phoneNum, string phoneFormat)
  {
    if (phoneFormat == "")
    {
    phoneFormat = "(##) ###-####";
    }
    Regex regex = new Regex(@"[^\d]");
    phoneNum = regex.Replace(phoneNum, "");
    if (phoneNum.Length > 0)
    {
    phoneNum = Convert.ToInt64(phoneNum).ToString(phoneFormat);
    }
    return phoneNum;
  }
  static void Main() {
    
    string phNumber = Console.ReadLine();
    Console.WriteLine(formatPhNumber(phNumber,""));
  }
}
}