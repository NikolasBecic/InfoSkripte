
namespace Taschenrechner
{
    partial class Taschenrechner
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
            this.Rechenbox = new System.Windows.Forms.RichTextBox();
            this.equals = new System.Windows.Forms.Button();
            this.Plus = new System.Windows.Forms.Button();
            this.Minus = new System.Windows.Forms.Button();
            this.Multiply = new System.Windows.Forms.Button();
            this.Divide = new System.Windows.Forms.Button();
            this.One = new System.Windows.Forms.Button();
            this.Nine = new System.Windows.Forms.Button();
            this.Six = new System.Windows.Forms.Button();
            this.Three = new System.Windows.Forms.Button();
            this.Eight = new System.Windows.Forms.Button();
            this.Two = new System.Windows.Forms.Button();
            this.Seven = new System.Windows.Forms.Button();
            this.Five = new System.Windows.Forms.Button();
            this.Four = new System.Windows.Forms.Button();
            this.Zero = new System.Windows.Forms.Button();
            this.ZeroZero = new System.Windows.Forms.Button();
            this.Comma = new System.Windows.Forms.Button();
            this.AllClear = new System.Windows.Forms.Button();
            this.RightBracket = new System.Windows.Forms.Button();
            this.LeftBracket = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Rechenbox
            // 
            this.Rechenbox.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Left | System.Windows.Forms.AnchorStyles.Right)));
            this.Rechenbox.BackColor = System.Drawing.SystemColors.ControlDarkDark;
            this.Rechenbox.Font = new System.Drawing.Font("Segoe UI", 26F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Rechenbox.Location = new System.Drawing.Point(10, 12);
            this.Rechenbox.Name = "Rechenbox";
            this.Rechenbox.ReadOnly = true;
            this.Rechenbox.Size = new System.Drawing.Size(496, 127);
            this.Rechenbox.TabIndex = 0;
            this.Rechenbox.Text = "";
            this.Rechenbox.TextChanged += new System.EventHandler(this.richTextBox1_TextChanged);
            // 
            // equals
            // 
            this.equals.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.equals.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.equals.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.equals.Location = new System.Drawing.Point(386, 653);
            this.equals.Name = "equals";
            this.equals.Size = new System.Drawing.Size(120, 120);
            this.equals.TabIndex = 1;
            this.equals.Text = "=";
            this.equals.UseVisualStyleBackColor = false;
            this.equals.Click += new System.EventHandler(this.equals_Click);
            // 
            // Plus
            // 
            this.Plus.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Plus.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Plus.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Plus.Location = new System.Drawing.Point(386, 527);
            this.Plus.Name = "Plus";
            this.Plus.Size = new System.Drawing.Size(120, 120);
            this.Plus.TabIndex = 2;
            this.Plus.Text = "+";
            this.Plus.UseVisualStyleBackColor = false;
            this.Plus.Click += new System.EventHandler(this.Plus_Click);
            // 
            // Minus
            // 
            this.Minus.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Minus.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Minus.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Minus.Location = new System.Drawing.Point(386, 401);
            this.Minus.Name = "Minus";
            this.Minus.Size = new System.Drawing.Size(120, 120);
            this.Minus.TabIndex = 3;
            this.Minus.Text = "-";
            this.Minus.UseVisualStyleBackColor = false;
            this.Minus.Click += new System.EventHandler(this.Minus_Click);
            // 
            // Multiply
            // 
            this.Multiply.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Multiply.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Multiply.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Multiply.Location = new System.Drawing.Point(386, 275);
            this.Multiply.Name = "Multiply";
            this.Multiply.Size = new System.Drawing.Size(120, 120);
            this.Multiply.TabIndex = 4;
            this.Multiply.Text = "x";
            this.Multiply.UseVisualStyleBackColor = false;
            this.Multiply.Click += new System.EventHandler(this.Multiply_Click);
            // 
            // Divide
            // 
            this.Divide.AutoSize = true;
            this.Divide.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Divide.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Divide.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Divide.Location = new System.Drawing.Point(386, 149);
            this.Divide.Name = "Divide";
            this.Divide.Size = new System.Drawing.Size(120, 120);
            this.Divide.TabIndex = 5;
            this.Divide.Text = "/";
            this.Divide.UseVisualStyleBackColor = false;
            this.Divide.Click += new System.EventHandler(this.Divide_Click);
            // 
            // One
            // 
            this.One.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.One.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.One.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.One.Location = new System.Drawing.Point(9, 527);
            this.One.Name = "One";
            this.One.Size = new System.Drawing.Size(120, 120);
            this.One.TabIndex = 6;
            this.One.Text = "1";
            this.One.UseVisualStyleBackColor = false;
            this.One.Click += new System.EventHandler(this.One_Click);
            // 
            // Nine
            // 
            this.Nine.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Nine.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Nine.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Nine.Location = new System.Drawing.Point(260, 275);
            this.Nine.Name = "Nine";
            this.Nine.Size = new System.Drawing.Size(120, 120);
            this.Nine.TabIndex = 7;
            this.Nine.Text = "9";
            this.Nine.UseVisualStyleBackColor = false;
            this.Nine.Click += new System.EventHandler(this.Nine_Click);
            // 
            // Six
            // 
            this.Six.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Six.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Six.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Six.Location = new System.Drawing.Point(260, 401);
            this.Six.Name = "Six";
            this.Six.Size = new System.Drawing.Size(120, 120);
            this.Six.TabIndex = 8;
            this.Six.Text = "6";
            this.Six.UseVisualStyleBackColor = false;
            this.Six.Click += new System.EventHandler(this.Six_Click);
            // 
            // Three
            // 
            this.Three.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Three.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Three.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Three.Location = new System.Drawing.Point(260, 526);
            this.Three.Name = "Three";
            this.Three.Size = new System.Drawing.Size(120, 120);
            this.Three.TabIndex = 9;
            this.Three.Text = "3";
            this.Three.UseVisualStyleBackColor = false;
            this.Three.Click += new System.EventHandler(this.Three_Click);
            // 
            // Eight
            // 
            this.Eight.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Eight.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Eight.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Eight.Location = new System.Drawing.Point(134, 275);
            this.Eight.Name = "Eight";
            this.Eight.Size = new System.Drawing.Size(120, 120);
            this.Eight.TabIndex = 10;
            this.Eight.Text = "8";
            this.Eight.UseVisualStyleBackColor = false;
            this.Eight.Click += new System.EventHandler(this.Eight_Click);
            // 
            // Two
            // 
            this.Two.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Two.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Two.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Two.Location = new System.Drawing.Point(134, 527);
            this.Two.Name = "Two";
            this.Two.Size = new System.Drawing.Size(120, 120);
            this.Two.TabIndex = 11;
            this.Two.Text = "2";
            this.Two.UseVisualStyleBackColor = false;
            this.Two.Click += new System.EventHandler(this.Two_Click);
            // 
            // Seven
            // 
            this.Seven.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Seven.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Seven.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Seven.Location = new System.Drawing.Point(8, 275);
            this.Seven.Name = "Seven";
            this.Seven.Size = new System.Drawing.Size(120, 120);
            this.Seven.TabIndex = 12;
            this.Seven.Text = "7";
            this.Seven.UseVisualStyleBackColor = false;
            this.Seven.Click += new System.EventHandler(this.Seven_Click);
            // 
            // Five
            // 
            this.Five.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Five.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Five.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Five.Location = new System.Drawing.Point(134, 401);
            this.Five.Name = "Five";
            this.Five.Size = new System.Drawing.Size(120, 120);
            this.Five.TabIndex = 13;
            this.Five.Text = "5";
            this.Five.UseVisualStyleBackColor = false;
            this.Five.Click += new System.EventHandler(this.Five_Click);
            // 
            // Four
            // 
            this.Four.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Four.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Four.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Four.Location = new System.Drawing.Point(9, 401);
            this.Four.Name = "Four";
            this.Four.Size = new System.Drawing.Size(120, 120);
            this.Four.TabIndex = 14;
            this.Four.Text = "4";
            this.Four.UseVisualStyleBackColor = false;
            this.Four.Click += new System.EventHandler(this.Four_Click);
            // 
            // Zero
            // 
            this.Zero.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Zero.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Zero.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Zero.Location = new System.Drawing.Point(8, 652);
            this.Zero.Name = "Zero";
            this.Zero.Size = new System.Drawing.Size(120, 120);
            this.Zero.TabIndex = 15;
            this.Zero.Text = "0";
            this.Zero.UseVisualStyleBackColor = false;
            this.Zero.Click += new System.EventHandler(this.Zero_Click);
            // 
            // ZeroZero
            // 
            this.ZeroZero.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.ZeroZero.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.ZeroZero.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.ZeroZero.Location = new System.Drawing.Point(134, 652);
            this.ZeroZero.Name = "ZeroZero";
            this.ZeroZero.Size = new System.Drawing.Size(120, 120);
            this.ZeroZero.TabIndex = 16;
            this.ZeroZero.Text = "00";
            this.ZeroZero.UseVisualStyleBackColor = false;
            this.ZeroZero.Click += new System.EventHandler(this.ZeroZero_Click);
            // 
            // Comma
            // 
            this.Comma.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.Comma.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Comma.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Comma.Location = new System.Drawing.Point(260, 652);
            this.Comma.Name = "Comma";
            this.Comma.Size = new System.Drawing.Size(120, 120);
            this.Comma.TabIndex = 17;
            this.Comma.Text = ",";
            this.Comma.UseVisualStyleBackColor = false;
            this.Comma.Click += new System.EventHandler(this.Comma_Click);
            // 
            // AllClear
            // 
            this.AllClear.AutoSize = true;
            this.AllClear.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.AllClear.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.AllClear.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.AllClear.Location = new System.Drawing.Point(260, 149);
            this.AllClear.Name = "AllClear";
            this.AllClear.Size = new System.Drawing.Size(120, 120);
            this.AllClear.TabIndex = 18;
            this.AllClear.Text = "AC";
            this.AllClear.UseVisualStyleBackColor = false;
            this.AllClear.Click += new System.EventHandler(this.AllClear_Click);
            // 
            // RightBracket
            // 
            this.RightBracket.AutoSize = true;
            this.RightBracket.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.RightBracket.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.RightBracket.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.RightBracket.Location = new System.Drawing.Point(134, 149);
            this.RightBracket.Name = "RightBracket";
            this.RightBracket.Size = new System.Drawing.Size(120, 120);
            this.RightBracket.TabIndex = 19;
            this.RightBracket.Text = ")";
            this.RightBracket.UseVisualStyleBackColor = false;
            this.RightBracket.Click += new System.EventHandler(this.RightBracket_Click);
            // 
            // LeftBracket
            // 
            this.LeftBracket.AutoSize = true;
            this.LeftBracket.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.LeftBracket.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.LeftBracket.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.LeftBracket.Location = new System.Drawing.Point(8, 149);
            this.LeftBracket.Name = "LeftBracket";
            this.LeftBracket.Size = new System.Drawing.Size(120, 120);
            this.LeftBracket.TabIndex = 20;
            this.LeftBracket.Text = "(";
            this.LeftBracket.UseVisualStyleBackColor = false;
            this.LeftBracket.Click += new System.EventHandler(this.LeftBracket_Click);
            // 
            // Taschenrechner
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(10F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlText;
            this.ClientSize = new System.Drawing.Size(518, 778);
            this.Controls.Add(this.LeftBracket);
            this.Controls.Add(this.RightBracket);
            this.Controls.Add(this.AllClear);
            this.Controls.Add(this.Comma);
            this.Controls.Add(this.ZeroZero);
            this.Controls.Add(this.Rechenbox);
            this.Controls.Add(this.Zero);
            this.Controls.Add(this.equals);
            this.Controls.Add(this.Four);
            this.Controls.Add(this.Plus);
            this.Controls.Add(this.Five);
            this.Controls.Add(this.Minus);
            this.Controls.Add(this.Seven);
            this.Controls.Add(this.Multiply);
            this.Controls.Add(this.Two);
            this.Controls.Add(this.Divide);
            this.Controls.Add(this.Eight);
            this.Controls.Add(this.One);
            this.Controls.Add(this.Three);
            this.Controls.Add(this.Nine);
            this.Controls.Add(this.Six);
            this.Name = "Taschenrechner";
            this.Text = "NiggoRechner";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.RichTextBox Rechenbox;
        private System.Windows.Forms.Button equals;
        private System.Windows.Forms.Button Plus;
        private System.Windows.Forms.Button Minus;
        private System.Windows.Forms.Button Multiply;
        private System.Windows.Forms.Button Divide;
        private System.Windows.Forms.Button One;
        private System.Windows.Forms.Button Nine;
        private System.Windows.Forms.Button Six;
        private System.Windows.Forms.Button Three;
        private System.Windows.Forms.Button Eight;
        private System.Windows.Forms.Button Two;
        private System.Windows.Forms.Button Seven;
        private System.Windows.Forms.Button Five;
        private System.Windows.Forms.Button Four;
        private System.Windows.Forms.Button Zero;
        private System.Windows.Forms.Button ZeroZero;
        private System.Windows.Forms.Button Comma;
        private System.Windows.Forms.Button AllClear;
        private System.Windows.Forms.Button RightBracket;
        private System.Windows.Forms.Button LeftBracket;
    }
}

