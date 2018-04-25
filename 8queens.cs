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
            char[,] data = new char[8, 8];
            int[] column = { 0, 0, 0, 0, 0, 0, 0, 0 };
            int c = 0;
            bool queen = false;
            bool not = false;
            int numQ = 0;
            while (c < 8)
            {
                line = Console.ReadLine();
                for (int j = 0; j < 8; j++)
                {


                    if (line[j] == '*')
                    {
                        numQ++;
                        if (data[c, j] == 'L' || data[c, j] == 'R') { not = true; }
                        column[j]++;
                        if (column[j] > 1)
                        {
                            not = true;
                        }
                        //Console.WriteLine(not);
                        data[c, j] = line[j];
                        if (c < 7)
                        {
                            if (j > 0 && j < 7)
                            {
                                data[c + 1, j + 1] = 'R';
                                data[c + 1, j - 1] = 'L';
                            }
                            else if (j == 0)
                            {
                                data[c + 1, j + 1] = 'R';
                            }
                            else
                            {
                                data[c + 1, j - 1] = 'L';
                            }
                        }

                        if (queen == true)
                        {
                            not = true;
                            //Console.WriteLine(not);
                        }
                        else
                        {
                            queen = true;
                        }


                    }
                    else
                    {
                        if (c > 0 && c < 7)
                        {
                            if (data[c - 1, j] == 'L')
                            {
                                if (j > 0)
                                {
                                    if (data[c, j - 1] == '*')
                                    {
                                        not = true;
                                    }
                                    else
                                    {
                                        data[c, j - 1] = 'L';
                                    }

                                }
                            }
                            else if (data[c - 1, j] == 'R')
                            {
                                if (j < 7)
                                {
                                    data[c, j + 1] = 'R';
                                }

                            }
                        }
                    }

                }

                queen = false;
                c++;
            }
            if (not == true || numQ<8)
            {
                Console.WriteLine("invalid");
            }
            else
            {
                Console.WriteLine("valid");
            }
            //Console.ReadLine();
        }
    }
}