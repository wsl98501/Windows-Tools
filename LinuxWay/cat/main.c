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
            argv[1],                // 文件名
            GENERIC_READ,           // 读取权限
            0,                      // 阻止其他进程访问
            NULL,                   // 子进程不可继承本句柄
            OPEN_EXISTING,          // 仅当该文件或设备存在时，打开它
            FILE_ATTRIBUTE_NORMAL,  // 普通文件
            NULL);                  // 不适用模板文件

        if (hFile == INVALID_HANDLE_VALUE)
        {
            printf("无法打开文件 \"%s\"\n", argv[1]);
            return;
        }

        fileSize = GetFileSize(hFile,NULL); // 获取文件大小
        buffer = (char *)malloc(fileSize + 1); // 获取一块内存
        buffer[fileSize] = '\0'; // 设置结尾

        ReadFile(
            hFile,      // 文件句柄
            buffer,     // 读取到的文件所存放的缓冲区
            fileSize,   // 要读取的字节数
            &readSize,  // 实际读取的字节数
            NULL        // 用 FILE_FLAG_OVERLAPPED 打开时所需的
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
    printf("浏览文件：");
    printf("cat <文件名>");
}
