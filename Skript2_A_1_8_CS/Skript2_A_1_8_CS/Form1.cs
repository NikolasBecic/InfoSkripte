using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Skript2_A_1_8_CS
{
    static class Program
    {
        static void DrawHistogram(int[] eingabe)
        {
            int maxWert = GetMaxValue(eingabe);

            for (int row = maxWert; row > 0; row--)
            {
                for (int col = 0; col < eingabe.Length; col++)
                {
                    if (eingabe[col] >= row)
                        Console.Write("# ");
                    else
                        Console.Write("  ");
                }
                Console.WriteLine();
            }

            for (int i = 0; i < eingabe.Length; i++)
            {
                Console.Write($"{i} ");
            }

            Console.WriteLine();
        }

        static int GetMaxValue(int[] eingabe)
        {
            int max = int.MinValue;
            foreach (var wert in eingabe)
            {
                if (wert > max)
                    max = wert;
            }
            return max;
        }

        static void main()
        {
             int[] haeufigkeit = new int[256];

            Random random = new Random();

            for (int i = 0; i < 100000; ++i)
            {
                int wert = random.Next(256);
                haeufigkeit[wert]++;
            }

            Console.WriteLine("Werte Hauefigkeit:");
            DrawHistogram(haeufigkeit);

            Console.ReadLine();
        }
    }

}
        }
        public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

}
