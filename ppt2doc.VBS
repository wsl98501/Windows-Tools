'绑定到本地计算机
strComputer = "."
'如果发生错误，继续执行
on error resume next 

Set objWMIService = GetObject("winmgmts:" _
    & "{impersonationLevel=impersonate}!\\" & strComputer & "\root\cimv2")
msgbox "此脚本可以批量将ppt文件中的文本转换为word文件。图片、表格等内容则自动跳过" & vbcrlf & "使用时请把所有要转换的ppt文件复制到目录c:\下。双击运行此文件即可。" & vbcrlf & "运行此脚本需要本机上安装了office" 
'创建一个word对象
Set objWord = CreateObject("Word.Application")
'创建一个ppt对象
Set pptApp = CreateObject("PowerPoint.application")
'获得c:\目录下的文件集合
Set FileList = objWMIService.ExecQuery _
    ("ASSOCIATORS OF {Win32_Directory.Name='c:'} Where " _
        & "ResultClass = CIM_DataFile")
For Each objFile In FileList
'如果文件的扩展名是ppt
    If objFile.Extension = "ppt" Then
pptApp.visible = true
'打开这个ppt文件
Set pptSelection = pptApp.Presentations.Open("c:\" & objFile.FileName & "." & objFile.Extension)
'如果想让脚本处理得快些，把下面一行改为“objWord.Visible = false”,不推荐。
objWord.Visible = true
'新建一个word，以保存ppt中的文本
Set objDoc = objWord.Documents.Add()
Set objSelection = objWord.Selection
'从ppt的第一页开始循环。Slides.Count即幻灯片的数量
For i = 1 To pptSelection.Slides.Count
'从每一张ppt的第一个文本框开始循环，Shapes.Count，即每张幻灯片中文本框的数量
   For j = 1 To pptSelection.Slides(i).Shapes.Count
    '如果是每页的第一行，就按标题处理，变成黑体字      
    if i =1 then
        objSelection.Font.Name = "黑体"
           '把文本框中的文字添加到word中
        objSelection.TypeText  pptSelection.Slides(i).Shapes(j).TextFrame.TextRange.text
        objSelection.TypeParagraph()
        objSelection.Font.Name = "宋体"
     end if
    objSelection.TypeText  pptSelection.Slides(i).Shapes(j).TextFrame.TextRange.text
      '加一个回车
    objSelection.TypeText  vbcrlf
   Next
next
'关闭这个ppt文件
pptSelection.close
'保存word文件。
objDoc.SaveAs("c:\" & objFile.FileName & ".doc")
'如果不需要关闭word，把下面这一行删掉
'objDoc.close
'如果不想弹出消息框，把下面这一行删掉
msgbox "转换后的word已保存在c:\" & objFile.FileName & ".doc"
else  '没有ppt文件
'msgbox "错误：c:\下没有发现ppt文件！"
    End If
Next
pptApp.quit
