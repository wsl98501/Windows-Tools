'把E:\PORTABLE\ppt2doc\pic中所有图片保存到E:\PORTABLE\ppt2doc\Mypic.doc


'绑定到本地计算机
strComputer = "."
'如果发生错误，继续执行
on error resume next 

Set objWMIService = GetObject("winmgmts:" _
    & "{impersonationLevel=impersonate}!\\" & strComputer & "\root\cimv2")

	
'创建一个word对象
Set objWord = CreateObject("Word.Application")
objWord.visible = true
'创建一个ppt对象
'Set pptApp = CreateObject("PowerPoint.application")
'Set pptApp = CreateObject("PowerPoint.application")
'获得c:\目录下的文件集合
Set FileList = objWMIService.ExecQuery _
    ("ASSOCIATORS OF {Win32_Directory.Name='E:\PORTABLE\ppt2doc\pic'} Where " _
        & "ResultClass = CIM_DataFile")

Set objDoc = objWord.Documents.Add()
Set objSelection = objWord.Selection


For Each objFile In FileList
'如果文件的扩展名是ppt
    If objFile.Extension = "jpg" or objFile.Extension = "png" Then
	
		'pptApp.visible = true
		'打开这个ppt文件
		'Set pptSelection = pptApp.Presentations.Open("E:\PORTABLE\ppt2doc\" & objFile.FileName & "." & objFile.Extension)
		'如果想让脚本处理得快些，把下面一行改为“objWord.Visible = false”,不推荐。
		
		'新建一个word，以保存ppt中的文本
		
		ObjSelection.InlineShapes.AddPicture("E:\PORTABLE\ppt2doc\pic\" & objFile.FileName & "." & objFile.Extension)
		
		pptSelection.close
		'从ppt的第一页开始循环。Slides.Count即幻灯片的数量
		
		'关闭这个ppt文件
		'pptSelection.close
		'保存word文件。
		
		'如果不需要关闭word，把下面这一行删掉
		'objDoc.close
		'如果不想弹出消息框，把下面这一行删掉
		'msgbox "转换后的word已保存在e:\" & objFile.FileName & ".doc"
		'else  '没有ppt文件
		'msgbox "错误：c:\下没有发现ppt文件！"
	End If
Next
msgbox "转换后的word已保存"
objDoc.SaveAs("E:\PORTABLE\ppt2doc\" & "Mypic" & ".doc")

objWord.quit
