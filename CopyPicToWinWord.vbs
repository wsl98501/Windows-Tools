'��E:\PORTABLE\ppt2doc\pic������ͼƬ���浽E:\PORTABLE\ppt2doc\Mypic.doc


'�󶨵����ؼ����
strComputer = "."
'����������󣬼���ִ��
on error resume next 

Set objWMIService = GetObject("winmgmts:" _
    & "{impersonationLevel=impersonate}!\\" & strComputer & "\root\cimv2")

	
'����һ��word����
Set objWord = CreateObject("Word.Application")
objWord.visible = true
'����һ��ppt����
'Set pptApp = CreateObject("PowerPoint.application")
'Set pptApp = CreateObject("PowerPoint.application")
'���c:\Ŀ¼�µ��ļ�����
Set FileList = objWMIService.ExecQuery _
    ("ASSOCIATORS OF {Win32_Directory.Name='E:\PORTABLE\ppt2doc\pic'} Where " _
        & "ResultClass = CIM_DataFile")

Set objDoc = objWord.Documents.Add()
Set objSelection = objWord.Selection


For Each objFile In FileList
'����ļ�����չ����ppt
    If objFile.Extension = "jpg" or objFile.Extension = "png" Then
	
		'pptApp.visible = true
		'�����ppt�ļ�
		'Set pptSelection = pptApp.Presentations.Open("E:\PORTABLE\ppt2doc\" & objFile.FileName & "." & objFile.Extension)
		'������ýű�����ÿ�Щ��������һ�и�Ϊ��objWord.Visible = false��,���Ƽ���
		
		'�½�һ��word���Ա���ppt�е��ı�
		
		ObjSelection.InlineShapes.AddPicture("E:\PORTABLE\ppt2doc\pic\" & objFile.FileName & "." & objFile.Extension)
		
		pptSelection.close
		'��ppt�ĵ�һҳ��ʼѭ����Slides.Count���õ�Ƭ������
		
		'�ر����ppt�ļ�
		'pptSelection.close
		'����word�ļ���
		
		'�������Ҫ�ر�word����������һ��ɾ��
		'objDoc.close
		'������뵯����Ϣ�򣬰�������һ��ɾ��
		'msgbox "ת�����word�ѱ�����e:\" & objFile.FileName & ".doc"
		'else  'û��ppt�ļ�
		'msgbox "����c:\��û�з���ppt�ļ���"
	End If
Next
msgbox "ת�����word�ѱ���"
objDoc.SaveAs("E:\PORTABLE\ppt2doc\" & "Mypic" & ".doc")

objWord.quit
