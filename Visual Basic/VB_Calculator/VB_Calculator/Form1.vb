Public Class Form1

    Public Result As Double

    Private Sub ok_Click(sender As Object, e As EventArgs)



    End Sub

    Private Sub RB_P_CheckedChanged(sender As Object, e As EventArgs) Handles RB_P.CheckedChanged

        Result = Val(Num_1.Text) + Val(Num_2.Text)

        result_label.Text = ("     " + CStr(Num_1.Text) + " + " + CStr(Num_2.Text) + " = " + CStr(Result))

    End Sub

    Private Sub RB_M_CheckedChanged(sender As Object, e As EventArgs) Handles RB_M.CheckedChanged

        Result = Val(Num_1.Text) - Val(Num_2.Text)

        result_label.Text = ("     " + CStr(Num_1.Text) + " - " + CStr(Num_2.Text) + " = " + CStr(Result))

    End Sub

    Private Sub RB_DI_CheckedChanged(sender As Object, e As EventArgs) Handles RB_DI.CheckedChanged

        Result = Val(Num_1.Text) / Val(Num_2.Text)

        result_label.Text = ("     " + CStr(Num_1.Text) + " / " + CStr(Num_2.Text) + " = " + CStr(Result))

    End Sub

    Private Sub RB_MU_CheckedChanged(sender As Object, e As EventArgs) Handles RB_MU.CheckedChanged

        Result = Val(Num_1.Text) * Val(Num_2.Text)

        result_label.Text = ("     " + CStr(Num_1.Text) + " * " + CStr(Num_2.Text) + " = " + CStr(Result))

    End Sub
End Class
