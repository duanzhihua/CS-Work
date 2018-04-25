using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {

            string line;
            bool isn = false;
            double r = 0.0;
            double total = 0;
            string current = "";
            while ((line = Console.ReadLine()) != null)
            {
                
                total = 0;
                for (int j = 0; j < line.Length; j++)
                {
                    if (line.Substring(j, 1) != " ")
                    {
                        current = string.Concat(current, line.Substring(j, 1));
                    }
                    else
                    {
                        isn = double.TryParse(current, out r);
                        if (isn)
                        {
                            total = total + r;
                        }
                        current = "";
                    }
                }
                isn = double.TryParse(current, out r);
                if (isn)
                {
                    total = total + r;
                }
                total = total / 2;
                Console.WriteLine(total);
                current = "";
                total = 0;
            }
        }
    }
}
