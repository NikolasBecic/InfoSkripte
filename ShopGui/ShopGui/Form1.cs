using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ShopGui
{
   
    public partial class Form1 : Form
    {
        public double gesamtPreis = 0;
        public int cola = 0;
        public int goennergy = 0;
        public int rakija = 0;
        public int vodka = 0;
        public int bitcoin = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            richTextBox1.AppendText("Cola\n");
            gesamtPreis = gesamtPreis+1.20;
            GesammtBetrag.Text= Math.Round(gesamtPreis,2).ToString("0.00");
            cola++;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            richTextBox1.AppendText("Rakija\n");
            gesamtPreis = gesamtPreis + 30.24;
            GesammtBetrag.Text = Math.Round(gesamtPreis,2).ToString("0.00");
            rakija++;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            richTextBox1.AppendText("Vodka 99%\n");
            gesamtPreis = gesamtPreis + 13.40;
            GesammtBetrag.Text = Math.Round(gesamtPreis,2).ToString("0.00");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            richTextBox1.AppendText("Bitcoin\n");
            gesamtPreis = gesamtPreis + 40100.56;
            GesammtBetrag.Text = Math.Round(gesamtPreis,2).ToString("0.00");
        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void button2_Click(object sender, EventArgs e)
        {


            if (EingezahlterBetrag.Text != "")
            {
                double gesamtbetrag = double.Parse(GesammtBetrag.Text);
                double gezahlterBetrag = double.Parse(EingezahlterBetrag.Text);

                double ruekgeld = gesamtbetrag - gezahlterBetrag;

                if (ruekgeld < -0.01)
                    Ruekgeld.Text = ruekgeld.ToString("0.00");
                else
                    Ruekgeld.Text = "Du bist zu Arm!";

            }
            else
            {
                Ruekgeld.Text = "Bitte zahlen sie!";
            }
        }

        private void GesammtBetrag_TextChanged(object sender, EventArgs e)
        {

        }

        private void Ruekgeld_TextChanged(object sender, EventArgs e)
        {

        }

       
    }
}
