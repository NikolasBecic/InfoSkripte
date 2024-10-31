using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace OsterEiSuche
{
    public partial class Form1 : Form
    {
        Button[,] Spielfeld = new Button[20, 20];
        int x = 0;
        int y = 0;

        int Zug = 0;

        Random rnd = new Random();


        public Form1()
        {
            InitializeComponent();

            int ranX = rnd.Next(0, 20);
            int ranY = rnd.Next(0, 20);

            x = ranX;
            y = ranY;

            for (int i = 0; i < 20; i++)
            {
                for (int j = 0; j < 20; j++)
                {


                    Spielfeld[i, j] = new Button();
                    Spielfeld[i, j].Location = new Point(i * 45, j * 45);
                    Spielfeld[i, j].Name = "HintSpace";
                    Spielfeld[i, j].Size = new Size(45, 45);
                    Spielfeld[i, j].TabIndex = 0;
                    Spielfeld[i, j].Text = "";
                    Spielfeld[i, j].UseVisualStyleBackColor = true;
                    Spielfeld[i, j].Click += new EventHandler(this.button1_Click);
                    Controls.Add(Spielfeld[i, j]);


                }
            }
            Spielfeld[ranX, ranY].Text = "";
            Spielfeld[ranX, ranY].Click += new EventHandler(this.button2_Click);

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {


            Button Knopf = (Button)sender;

            int aktX = Knopf.Location.X / 45;
            int aktY = Knopf.Location.Y / 45;

            int distanzX = 0;
            int distanzY = 0;
            int distanzgesamt = 0;

            if (aktX < x)
                distanzX = x - aktX;
            if (aktY < y)
                distanzY = y - aktY;

            if (aktX > x)
                distanzX = aktX - x;
            if (aktY > y)
                distanzY = aktY - y;

            distanzgesamt = (int)Math.Sqrt(Math.Pow(distanzX, 2) + Math.Pow(distanzY, 2));

            Spielfeld[aktX, aktY].Text = distanzgesamt.ToString();

            Zug++;

            label1.Text = ("Zug :" + Zug.ToString());
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Spielfeld[x, y].Text = "O";
            //Spielfeld[x, y].Image = 
            Spielfeld[x, y].ImageAlign = ContentAlignment.MiddleCenter;

        }

        private void restart_Click(object sender, EventArgs e)
        {
            Form1();
        }
    }
}
