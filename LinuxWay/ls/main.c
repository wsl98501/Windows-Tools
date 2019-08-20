#include <windows.h>
#include <stdio.h>    // for sprintf
#include <string.h>   // for memmove

int main(int argc, const char *argv[])
{
    CHAR path[MAX_PATH] = {0};  // ����·��
    CHAR szFilePath[MAX_PATH];  // �������·��
    HANDLE hListFile;           // ��ȡ�����ļ����
    WIN32_FIND_DATA fileData;   // ���ҵ����ļ�����


    if(argc == 1)   // ֻ�������������ʾ��ǰĿ¼
    {
        GetCurrentDirectory(MAX_PATH,path);
    }else if(argc == 2) // ָ����ʾĿ¼����ʾָ��Ŀ¼
    {
        memmove(path, argv[1], strlen(argv[1]));
    }

    // ����·�����������·��
    lstrcpy(szFilePath, path);
    // ·��ƴ��ͨ���
    lstrcat(szFilePath, "\*");

    // printf("�б�·���� [%s] n", szFilePath);

    // ����·���µ�һ���ļ�/Ŀ¼����þ��
    hListFile = FindFirstFile(szFilePath,&fileData);

    // �жϾ���Ƿ��ȡ��
    if(hListFile == INVALID_HANDLE_VALUE)
    {
        printf("����%d",GetLastError());
        return 1;
    } else {
        do
        {   // ����ҵ����ļ���
            printf("%s\t", fileData.cFileName );
        }   // ������һ���ļ�, ����ȡ����Ϣ
        while(FindNextFile(hListFile, &fileData));
    }
    return 0;
}
