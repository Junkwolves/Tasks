<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()>
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.L_Num_1 = New System.Windows.Forms.Label()
        Me.L_Num_2 = New System.Windows.Forms.Label()
        Me.Num_1 = New System.Windows.Forms.TextBox()
        Me.Num_2 = New System.Windows.Forms.TextBox()
        Me.RB_P = New System.Windows.Forms.RadioButton()
        Me.RB_M = New System.Windows.Forms.RadioButton()
        Me.RB_DI = New System.Windows.Forms.RadioButton()
        Me.RB_MU = New System.Windows.Forms.RadioButton()
        Me.result_label = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'L_Num_1
        '
        Me.L_Num_1.AutoSize = True
        Me.L_Num_1.Location = New System.Drawing.Point(13, 13)
        Me.L_Num_1.Name = "L_Num_1"
        Me.L_Num_1.Size = New System.Drawing.Size(53, 13)
        Me.L_Num_1.TabIndex = 1
        Me.L_Num_1.Text = "Number 1"
        '
        'L_Num_2
        '
        Me.L_Num_2.AutoSize = True
        Me.L_Num_2.Location = New System.Drawing.Point(277, 9)
        Me.L_Num_2.Name = "L_Num_2"
        Me.L_Num_2.Size = New System.Drawing.Size(53, 13)
        Me.L_Num_2.TabIndex = 2
        Me.L_Num_2.Text = "Number 2"
        '
        'Num_1
        '
        Me.Num_1.BorderStyle = System.Windows.Forms.BorderStyle.None
        Me.Num_1.Cursor = System.Windows.Forms.Cursors.WaitCursor
        Me.Num_1.Location = New System.Drawing.Point(12, 33)
        Me.Num_1.Name = "Num_1"
        Me.Num_1.Size = New System.Drawing.Size(117, 13)
        Me.Num_1.TabIndex = 3
        Me.Num_1.UseWaitCursor = True
        '
        'Num_2
        '
        Me.Num_2.BorderStyle = System.Windows.Forms.BorderStyle.None
        Me.Num_2.Cursor = System.Windows.Forms.Cursors.UpArrow
        Me.Num_2.Location = New System.Drawing.Point(280, 33)
        Me.Num_2.Name = "Num_2"
        Me.Num_2.Size = New System.Drawing.Size(116, 13)
        Me.Num_2.TabIndex = 4
        '
        'RB_P
        '
        Me.RB_P.AutoSize = True
        Me.RB_P.BackColor = System.Drawing.SystemColors.ActiveCaption
        Me.RB_P.Cursor = System.Windows.Forms.Cursors.WaitCursor
        Me.RB_P.Location = New System.Drawing.Point(135, 32)
        Me.RB_P.Name = "RB_P"
        Me.RB_P.Size = New System.Drawing.Size(31, 17)
        Me.RB_P.TabIndex = 7
        Me.RB_P.TabStop = True
        Me.RB_P.Text = "+"
        Me.RB_P.UseVisualStyleBackColor = False
        Me.RB_P.UseWaitCursor = True
        '
        'RB_M
        '
        Me.RB_M.AutoSize = True
        Me.RB_M.BackColor = System.Drawing.SystemColors.WindowFrame
        Me.RB_M.Cursor = System.Windows.Forms.Cursors.WaitCursor
        Me.RB_M.Location = New System.Drawing.Point(173, 31)
        Me.RB_M.Name = "RB_M"
        Me.RB_M.Size = New System.Drawing.Size(28, 17)
        Me.RB_M.TabIndex = 8
        Me.RB_M.TabStop = True
        Me.RB_M.Text = "-"
        Me.RB_M.UseVisualStyleBackColor = False
        Me.RB_M.UseWaitCursor = True
        '
        'RB_DI
        '
        Me.RB_DI.AutoSize = True
        Me.RB_DI.BackColor = System.Drawing.SystemColors.Info
        Me.RB_DI.Location = New System.Drawing.Point(208, 31)
        Me.RB_DI.Name = "RB_DI"
        Me.RB_DI.Size = New System.Drawing.Size(30, 17)
        Me.RB_DI.TabIndex = 9
        Me.RB_DI.TabStop = True
        Me.RB_DI.Text = "/"
        Me.RB_DI.UseVisualStyleBackColor = False
        Me.RB_DI.UseWaitCursor = True
        '
        'RB_MU
        '
        Me.RB_MU.AutoSize = True
        Me.RB_MU.BackColor = System.Drawing.SystemColors.GradientInactiveCaption
        Me.RB_MU.Location = New System.Drawing.Point(245, 31)
        Me.RB_MU.Name = "RB_MU"
        Me.RB_MU.Size = New System.Drawing.Size(29, 17)
        Me.RB_MU.TabIndex = 10
        Me.RB_MU.TabStop = True
        Me.RB_MU.Text = "*"
        Me.RB_MU.UseVisualStyleBackColor = False
        Me.RB_MU.UseWaitCursor = True
        '
        'result_label
        '
        Me.result_label.AutoSize = True
        Me.result_label.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.result_label.Cursor = System.Windows.Forms.Cursors.No
        Me.result_label.Location = New System.Drawing.Point(9, 75)
        Me.result_label.Name = "result_label"
        Me.result_label.Size = New System.Drawing.Size(15, 15)
        Me.result_label.TabIndex = 12
        Me.result_label.Text = "0"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(403, 115)
        Me.Controls.Add(Me.result_label)
        Me.Controls.Add(Me.RB_MU)
        Me.Controls.Add(Me.RB_DI)
        Me.Controls.Add(Me.RB_M)
        Me.Controls.Add(Me.RB_P)
        Me.Controls.Add(Me.Num_2)
        Me.Controls.Add(Me.Num_1)
        Me.Controls.Add(Me.L_Num_2)
        Me.Controls.Add(Me.L_Num_1)
        Me.Cursor = System.Windows.Forms.Cursors.Cross
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents L_Num_1 As Label
    Friend WithEvents L_Num_2 As Label
    Friend WithEvents Num_1 As TextBox
    Friend WithEvents Num_2 As TextBox
    Friend WithEvents RB_P As RadioButton
    Friend WithEvents RB_M As RadioButton
    Friend WithEvents RB_DI As RadioButton
    Friend WithEvents RB_MU As RadioButton
    Friend WithEvents result_label As Label
End Class
