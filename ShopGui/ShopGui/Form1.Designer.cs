
namespace ShopGui
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.button1 = new System.Windows.Forms.Button();
            this.richTextBox1 = new System.Windows.Forms.RichTextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.EingezahlterBetrag = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.GesammtBetrag = new System.Windows.Forms.RichTextBox();
            this.Ruekgeld = new System.Windows.Forms.RichTextBox();
            this.EinzahlClick = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(135, 128);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(112, 34);
            this.button1.TabIndex = 0;
            this.button1.Text = "Cola";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // richTextBox1
            // 
            this.richTextBox1.Location = new System.Drawing.Point(404, 128);
            this.richTextBox1.Name = "richTextBox1";
            this.richTextBox1.Size = new System.Drawing.Size(227, 207);
            this.richTextBox1.TabIndex = 1;
            this.richTextBox1.Text = "";
            this.richTextBox1.TextChanged += new System.EventHandler(this.richTextBox1_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Segoe UI", 16F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.label1.Location = new System.Drawing.Point(404, 80);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(183, 45);
            this.label1.TabIndex = 2;
            this.label1.Text = "Warenkorb:";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // EingezahlterBetrag
            // 
            this.EingezahlterBetrag.Location = new System.Drawing.Point(404, 410);
            this.EingezahlterBetrag.Name = "EingezahlterBetrag";
            this.EingezahlterBetrag.Size = new System.Drawing.Size(170, 31);
            this.EingezahlterBetrag.TabIndex = 3;
            this.EingezahlterBetrag.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(306, 416);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(96, 25);
            this.label2.TabIndex = 4;
            this.label2.Text = "Eingezahlt:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(306, 376);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(92, 25);
            this.label3.TabIndex = 5;
            this.label3.Text = "Gesammt:";
            // 
            // GesammtBetrag
            // 
            this.GesammtBetrag.Location = new System.Drawing.Point(404, 376);
            this.GesammtBetrag.Name = "GesammtBetrag";
            this.GesammtBetrag.Size = new System.Drawing.Size(170, 28);
            this.GesammtBetrag.TabIndex = 6;
            this.GesammtBetrag.Text = "";
            this.GesammtBetrag.TextChanged += new System.EventHandler(this.GesammtBetrag_TextChanged);
            // 
            // Ruekgeld
            // 
            this.Ruekgeld.Location = new System.Drawing.Point(404, 457);
            this.Ruekgeld.Name = "Ruekgeld";
            this.Ruekgeld.Size = new System.Drawing.Size(170, 28);
            this.Ruekgeld.TabIndex = 7;
            this.Ruekgeld.Text = "";
            this.Ruekgeld.TextChanged += new System.EventHandler(this.Ruekgeld_TextChanged);
            // 
            // EinzahlClick
            // 
            this.EinzahlClick.Location = new System.Drawing.Point(577, 410);
            this.EinzahlClick.Name = "EinzahlClick";
            this.EinzahlClick.Size = new System.Drawing.Size(107, 31);
            this.EinzahlClick.TabIndex = 8;
            this.EinzahlClick.Text = "Einzahlen";
            this.EinzahlClick.UseVisualStyleBackColor = true;
            this.EinzahlClick.Click += new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(135, 185);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(112, 34);
            this.button3.TabIndex = 9;
            this.button3.Text = "Rakija";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(135, 243);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(112, 34);
            this.button4.TabIndex = 10;
            this.button4.Text = "Vodka 99%";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(135, 301);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(112, 34);
            this.button5.TabIndex = 11;
            this.button5.Text = "Bitcoin";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(10F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1010, 585);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.EinzahlClick);
            this.Controls.Add(this.Ruekgeld);
            this.Controls.Add(this.GesammtBetrag);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.EingezahlterBetrag);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.richTextBox1);
            this.Controls.Add(this.button1);
            this.Name = "Form1";
            this.Text = "Shop Simulation";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.RichTextBox richTextBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox EingezahlterBetrag;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.RichTextBox GesammtBetrag;
        private System.Windows.Forms.RichTextBox Ruekgeld;
        private System.Windows.Forms.Button EinzahlClick;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
    }
}

