' Crie um script em vbscript que crie um diretório c:\temp no computador 
' e armazene em um arquivo CSV o nome do usuário logado e o horário, 
' este arquivo devera ser atualizado a cada execução. (1,0)

Dim file, fs

' da acesso ao sistema de arquivos
Set fs = CreateObject("Scripting.FileSystemObject")
dir = "c:\Temp"

' verifica se a pasta já existe e a cria
If not fs.FolderExists (dir) Then
  	fs.CreateFolder dir
End if

' acessa os dados do PC 
set WshNetwork = Wscript.CreateObject("Wscript.Network")

' extrai o nome do usuário
user = WshNetwork.Username
Const ForReading=1

' cria o objeto arquivo no modo append
Set fs = CreateObject("Scripting.FileSystemObject")
Set file = fs.OpenTextFile("c:\Temp\q1.csv", ForAppending, True)

' grava as informações em csv
file.WriteLine("Usuario: "&user & "   Hora do acesso: " & now)
file.Close


