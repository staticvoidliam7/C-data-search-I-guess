using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.IO;
  
class MainClass {
  public static void Main (string[] args) {
    Console.ForegroundColor = ConsoleColor.Black; 
    Console.BackgroundColor = ConsoleColor.Yellow;
    Console.Clear();
    Console.WriteLine("Menu\n 1). Search String\n 2). Add String\n 3). Delete String\n 4). Exit");
    string option = Console.ReadLine();
    string input;
   if(option == "1"){

   }
   else if(option == "2"){
     Console.WriteLine("Enter data to insert");
    input = Console.ReadLine();
     /*System.IO.File.WriteText("data.txt", "\n" + input);
     */
      using (StreamWriter sw = File.CreateText("data.txt"))
            {
                sw.WriteLine(input + Environment.NewLine);
              
            
   }



   
  }
}
}