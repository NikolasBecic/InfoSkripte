
namespace GraphLine
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
            this.Graph = new System.Windows.Forms.Panel();
            this.Line = new System.Windows.Forms.Button();
            this.ZickZack = new System.Windows.Forms.Button();
            this.Sinus = new System.Windows.Forms.Button();
            this.Cosinus = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Graph
            // 
            this.Graph.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Graph.Location = new System.Drawing.Point(12, 12);
            this.Graph.Name = "Graph";
            this.Graph.Size = new System.Drawing.Size(645, 450);
            this.Graph.TabIndex = 0;
            // 
            // Line
            // 
            this.Line.Location = new System.Drawing.Point(672, 12);
            this.Line.Name = "Line";
            this.Line.Size = new System.Drawing.Size(112, 34);
            this.Line.TabIndex = 1;
            this.Line.Text = "Strich";
            this.Line.UseVisualStyleBackColor = true;
            this.Line.Click += new System.EventHandler(this.Line_Click);
            // 
            // ZickZack
            // 
            this.ZickZack.Location = new System.Drawing.Point(672, 52);
            this.ZickZack.Name = "ZickZack";
            this.ZickZack.Size = new System.Drawing.Size(112, 34);
            this.ZickZack.TabIndex = 2;
            this.ZickZack.Text = "ZickZack";
            this.ZickZack.UseVisualStyleBackColor = true;
            this.ZickZack.Click += new System.EventHandler(this.ZickZack_Click);
            // 
            // Sinus
            // 
            this.Sinus.Location = new System.Drawing.Point(672, 92);
            this.Sinus.Name = "Sinus";
            this.Sinus.Size = new System.Drawing.Size(112, 34);
            this.Sinus.TabIndex = 3;
            this.Sinus.Text = "Sinus";
            this.Sinus.UseVisualStyleBackColor = true;
            this.Sinus.Click += new System.EventHandler(this.Sinus_Click);
            // 
            // Cosinus
            // 
            this.Cosinus.Location = new System.Drawing.Point(672, 132);
            this.Cosinus.Name = "Cosinus";
            this.Cosinus.Size = new System.Drawing.Size(112, 34);
            this.Cosinus.TabIndex = 4;
            this.Cosinus.Text = "Cosinus";
            this.Cosinus.UseVisualStyleBackColor = true;
            this.Cosinus.Click += new System.EventHandler(this.Cosinus_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(10F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.ClientSize = new System.Drawing.Size(808, 474);
            this.Controls.Add(this.Cosinus);
            this.Controls.Add(this.Sinus);
            this.Controls.Add(this.ZickZack);
            this.Controls.Add(this.Line);
            this.Controls.Add(this.Graph);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel Graph;
        private System.Windows.Forms.Button Line;
        private System.Windows.Forms.Button ZickZack;
        private System.Windows.Forms.Button Sinus;
        private System.Windows.Forms.Button Cosinus;
    }
}

