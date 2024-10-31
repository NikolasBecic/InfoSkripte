using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Minigame
{
    public partial class Form1 : Form
    {
        Button[,] Spielfeld = new Button[25, 25];
        int x = 0; int y = 0;
        public Form1()
        {
            InitializeComponent();
           
                for (int i = 0; i < 25; i++)
                {
                    for (int j = 0; j < 25; j++)
                    {
                        Spielfeld[i, j] = new Button();

                          Spielfeld[i, j].Location = new Point(i*20, j*20);
                          Spielfeld[i, j].Name = "GameTile";
                          Spielfeld[i, j].Size = new Size(i*20, j*20);
                          Spielfeld[i, j].TabIndex = 0;
                          Spielfeld[i, j].Text = "";
                          Spielfeld[i, j].UseVisualStyleBackColor = true;
                          Spielfeld[i, j].Click += new EventHandler(this.button1_Click);
                          Controls.Add(Spielfeld[i, j]);

                    }
                }
            Spielfeld[0, 0].Text = "X";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Button Knopf = (Button)sender;
            Knopf.Text = "X";

            Spielfeld[x, y].Text = "";
            int aktx = Knopf.Location.X / 20;
            int akty = Knopf.Location.Y / 20;

            if (!(aktx == x && akty == y))
            {
                if (Math.Sqrt(Math.Pow(aktx, -x, 2)) + (Math.Pow(akty, -y, 2)) <=3)
                {

                }
            }

        }
    }
}
