using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Taschenrechner
{
    public partial class Taschenrechner : Form
    {
        public bool geloest = false;
        public Taschenrechner()
        {
            InitializeComponent();
            Rechenbox.KeyPress += Rechenbox_KeyPress;
            Rechenbox.KeyDown += Rechenbox_KeyDown;
            FormBorderStyle = FormBorderStyle.FixedSingle;
            MaximizeBox = false;
            MinimizeBox = true;
        }

        private void Rechenbox_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar) &&
                e.KeyChar != '+' && e.KeyChar != '-' &&
                e.KeyChar != 'x' && e.KeyChar != '/' &&
                e.KeyChar != '(' && e.KeyChar != ')' &&
                e.KeyChar != ',')
            {
                e.Handled = true;
            }
        }

        private void Rechenbox_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                equals_Click(sender, e);
            }
        }


        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void equals_Click(object sender, EventArgs e)
        {
            try
            {
                string ausdruck = Rechenbox.Text;

                ausdruck = ausdruck.Replace("x", "*");
                ausdruck = ausdruck.Replace(",", ".");
                if (!string.IsNullOrWhiteSpace(ausdruck))
                {
                    DataTable Tabelle = new DataTable();
                    var ergebnis = Tabelle.Compute(ausdruck, "");
                    Rechenbox.Text = ergebnis.ToString();
                }
                else
                {
                    Rechenbox.Text = "Error: Ausdruck Fehlt!";
                }
            }
            catch (Exception Fehler)
            {
                Rechenbox.Text = "Error: " + Fehler.Message;
            }
            geloest = true;
        }

        private void RightBracket_Click(object sender, EventArgs e)
        {
            Rechenbox.AppendText(")");
            geloest = false;
        }

        private void LeftBracket_Click(object sender, EventArgs e)
        {
            Rechenbox.AppendText("(");
            geloest = false;
        }

        private void Divide_Click(object sender, EventArgs e)
        {
            Rechenbox.AppendText("/");
            geloest = false;
        }

        private void Multiply_Click(object sender, EventArgs e)
        {
            Rechenbox.AppendText("x");
            geloest = false;
        }

        private void Minus_Click(object sender, EventArgs e)
        {
            Rechenbox.AppendText("-");
            geloest = false;
        }

        private void Plus_Click(object sender, EventArgs e)
        {
            Rechenbox.AppendText("+");
            geloest = false;
        }

        private void Comma_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText(",");
            geloest = false;
        }

        private void Three_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("3");
            geloest = false;
        }

        private void Six_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("6");
            geloest = false;
        }

        private void Nine_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("9");
            geloest = false;
        }

        private void Eight_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("8");
            geloest = false;
        }

        private void Five_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("5");
            geloest = false;
        }

        private void Two_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("2");
            geloest = false;
        }

        private void ZeroZero_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("00");
            geloest = false;
        }

        private void Zero_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("0");
            geloest = false;
        }

        private void One_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("1");
            geloest = false;
        }

        private void Four_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("4");
            geloest = false;
        }

        private void Seven_Click(object sender, EventArgs e)
        {
            if (geloest)
                Rechenbox.Text = "";
            Rechenbox.AppendText("7");
            geloest = false;
        }

        private void AllClear_Click(object sender, EventArgs e)
        {
            Rechenbox.Text = "";
        }
    }
}
