switch(option){
        case "1":
        Console.WriteLine("Create File");
        Console.WriteLine("This creates a file only if it does not exist.");
        Console.Write("\nFile name (e.g. mytext.txt): ");
        file = Console.ReadLine();
        if(File.Exists(file)){
          Console.WriteLine("File already exists. Use option 3 instead.");
        }else{
          Console.WriteLine("\nFile does not exist!");
          Console.Write("What would you like the contents to be? ");
          input = Console.ReadLine();
          System.IO.File.WriteAllText(file, input);
        }
        break;
        case "2":
        Console.WriteLine("Read File");
        Console.WriteLine("This will display all the text in a file.");
        Console.Write("\nFile name (e.g. mytext.txt): ");
        file = Console.ReadLine();
        if(File.Exists(file)){
          System.IO.StreamReader redf = new System.IO.StreamReader(file);
          while((line = redf.ReadLine()) != null){
            System.Console.WriteLine((currline+1) + "| "+ line);
            currline++;
          }
          redf.Close();
          Console.WriteLine();
          Console.Write("Press any key to continue.");
          Console.ReadKey();
          currline = 0;
          line = "";
        }else{
          Console.WriteLine("\nFile does not exist!");
          Console.WriteLine("Please create it first.");
          Console.Write("Press any key to continue.");
          Console.ReadKey();
        }
        break;
        case "3":
        Console.WriteLine("Replace File Contents");
        Console.WriteLine("This will completely change a file's contents to something else. Useful for clearing large files");
        Console.Write("\nFile name (e.g. mytext.txt): ");
        file = Console.ReadLine();
        if(File.Exists(file)){
          Console.WriteLine("\nFile exists!");
          Console.Write("What would you like the contents to be? ");
          input = Console.ReadLine();
          System.IO.File.WriteAllText(file, input);
        }else{
          Console.WriteLine("\nFile does not exist. Use option 1 instead.");
          Console.Write("Press any key to continue.");
          Console.ReadKey();
        }
        break;
        case "4":
        Console.Write("Press any key to exit.");
        Console.ReadKey();
        run = false;
        break;
        default:
        Console.WriteLine("Invalid input!");
        Console.WriteLine("\nType in 1, 2, 3, or 4 as your option.");
        Console.Write("Press any key to continue.");
        Console.ReadKey();
        break;
      }
