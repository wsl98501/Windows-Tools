'�󶨵����ؼ����
strComputer = "."
'����������󣬼���ִ��
on error resume next 

Set objWMIService = GetObject("winmgmts:" _
    & "{impersonationLevel=impersonate}!\\" & strComputer & "\root\cimv2")
msgbox "�˽ű�����������ppt�ļ��е��ı�ת��Ϊword�ļ���ͼƬ��������������Զ�����" & vbcrlf & "ʹ��ʱ�������Ҫת����ppt�ļ����Ƶ�Ŀ¼c:\�¡�˫�����д��ļ����ɡ�" & vbcrlf & "���д˽ű���Ҫ�����ϰ�װ��office" 
'����һ��word����
Set objWord = CreateObject("Word.Application")
'����һ��ppt����
Set pptApp = CreateObject("PowerPoint.application")
'���c:\Ŀ¼�µ��ļ�����
Set FileList = objWMIService.ExecQuery _
    ("ASSOCIATORS OF {Win32_Directory.Name='c:'} Where " _
        & "ResultClass = CIM_DataFile")
For Each objFile In FileList
'����ļ�����չ����ppt
    If objFile.Extension = "ppt" Then
pptApp.visible = true
'�����ppt�ļ�
Set pptSelection = pptApp.Presentations.Open("c:\" & objFile.FileName & "." & objFile.Extension)
'������ýű������ÿ�Щ��������һ�и�Ϊ��objWord.Visible = false��,���Ƽ���
objWord.Visible = true
'�½�һ��word���Ա���ppt�е��ı�
Set objDoc = objWord.Documents.Add()
Set objSelection = objWord.Selection
'��ppt�ĵ�һҳ��ʼѭ����Slides.Count���õ�Ƭ������
For i = 1 To pptSelection.Slides.Count
'��ÿһ��ppt�ĵ�һ���ı���ʼѭ����Shapes.Count����ÿ�Żõ�Ƭ���ı��������
   For j = 1 To pptSelection.Slides(i).Shapes.Count
    '�����ÿҳ�ĵ�һ�У��Ͱ����⴦������ɺ�����      
    if i =1 then
        objSelection.Font.Name = "����"
           '���ı����е��������ӵ�word��
        objSelection.TypeText  pptSelection.Slides(i).Shapes(j).TextFrame.TextRange.text
        objSelection.TypeParagraph()
        objSelection.Font.Name = "����"
     end if
    objSelection.TypeText  pptSelection.Slides(i).Shapes(j).TextFrame.TextRange.text
      '��һ���س�
    objSelection.TypeText  vbcrlf
   Next
next
'�ر����ppt�ļ�
pptSelection.close
'����word�ļ���
objDoc.SaveAs("c:\" & objFile.FileName & ".doc")
'�������Ҫ�ر�word����������һ��ɾ��
'objDoc.close
'������뵯����Ϣ�򣬰�������һ��ɾ��
msgbox "ת�����word�ѱ�����c:\" & objFile.FileName & ".doc"
else  'û��ppt�ļ�
'msgbox "����c:\��û�з���ppt�ļ���"
    End If
Next
pptApp.quit