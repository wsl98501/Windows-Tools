#include <windows.h>
#include <stdio.h>    // for printf
void help();

int main(int argc, char const *argv[])
{
    HANDLE hFile;
    DWORD fileSize, readSize;
    char *buffer;

    if (argc == 2)
    {
        hFile = CreateFile(
            argv[1],                // �ļ���
            GENERIC_READ,           // ��ȡȨ��
            0,                      // ��ֹ�������̷���
            NULL,                   // �ӽ��̲��ɼ̳б����
            OPEN_EXISTING,          // �������ļ����豸����ʱ������
            FILE_ATTRIBUTE_NORMAL,  // ��ͨ�ļ�
            NULL);                  // ������ģ���ļ�

        if (hFile == INVALID_HANDLE_VALUE)
        {
            printf("�޷����ļ� \"%s\"\n", argv[1]);
            return;
        }

        fileSize = GetFileSize(hFile,NULL); // ��ȡ�ļ���С
        buffer = (char *)malloc(fileSize + 1); // ��ȡһ���ڴ�
        buffer[fileSize] = '\0'; // ���ý�β

        ReadFile(
            hFile,      // �ļ����
            buffer,     // ��ȡ�����ļ�����ŵĻ�����
            fileSize,   // Ҫ��ȡ���ֽ���
            &readSize,  // ʵ�ʶ�ȡ���ֽ���
            NULL        // �� FILE_FLAG_OVERLAPPED ��ʱ�����
        );

        printf(buffer);

        CloseHandle(hFile);
        free(buffer);
    } else
    {
        help();
    }

    return 0;
}

void help()
{
    printf("����ļ���");
    printf("cat <�ļ���>");
}
