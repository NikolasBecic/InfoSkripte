using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

//NIKOLAS BECIC

namespace GraphLine
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Line_Click(object sender, EventArgs e)
        {
            Graphics grafik = Graph.CreateGraphics();
            grafik.Clear(Color.White);
            Pen stift = new Pen(Color.Blue);
            stift.Width = 2;
            grafik.DrawLine(stift, 10, 10, 100, 10);
        }

        private void ZickZack_Click(object sender, EventArgs e)
        {
            Graphics grafik = Graph.CreateGraphics();
            grafik.Clear(Color.White);
            Pen stift = new Pen(Color.Blue);
            stift.Width = 2;
            grafik.DrawLine(stift, 0, 645, 100, 0);
            grafik.DrawLine(stift, 100, 0, 200, 645);
            grafik.DrawLine(stift, 200, 645, 300, 0 );
            grafik.DrawLine(stift, 300, 0, 400, 645);
            
        }

        private void Sinus_Click(object sender, EventArgs e)
        {
            Graphics grafik = Graph.CreateGraphics();
            grafik.Clear(Color.White);
            Pen stift = new Pen(Color.Blue);

            for (int i = 0; i < Graph.Width - 1; i++)
            {
                double sin = Math.Sin(i / 20.0) * Graph.Height / 2.0;
                double sin2 = Math.Sin((i + 1) / 20.0) * Graph.Height / 2.0;

                grafik.DrawLine(stift, i, (int)(Graph.Height / 2 + sin), i + 1, (int)(Graph.Height / 2 + sin2));
            }
        }

        private void Cosinus_Click(object sender, EventArgs e)
        {
            Graphics grafik = Graph.CreateGraphics();
            grafik.Clear(Color.White);
            Pen stift = new Pen(Color.Blue);

            for (int i = 0; i < Graph.Width - 1; i++)
            {
                double cos = Math.Cos(i / 20.0) * Graph.Height / 2.0;
                double cos2 = Math.Cos((i + 1) / 20.0) * Graph.Height / 2.0;

                grafik.DrawLine(stift, i, (int)(Graph.Height / 2 + cos), i + 1, (int)(Graph.Height / 2 + cos2));
            }
        }
    }
}
