/*
 * 功能：判断文件夹是否存在；创建文件夹
 * 
 * 
 */ 
#include <dirent.h>
#include <sys/types.h>
#include <memory.h>

#define MODE (S_IRWXU | S_IRWXG | S_IRWXO)
int mkDir(char *dir)
{
	DIR *mydir = NULL;
	if ((mydir = opendir(dir)) == NULL)
	{
		int ret = mkdir(dir, MODE);
		if (ret != 0) {
			return -1;
		}
	}
}

int mkDirTree(char *dir)
{
	bool flag = true;
	char *pDir = dir;
	while(flag) {
		char *pIndex = index(pDir, '/');
		if (pIndex != NULL && pIndex != dir) {
			char buffer[512] = {0};
			int msg_size = pIndex - dir;
			memcpy(buffer, dir, msg_size);
			int ret = mkDir(buffer);
			if (ret < 0) {
				printf("create dir: \"%s\" failed!\n", buffer);
				return -1;
			}
		}
		else if (pIndex == NULL && pDir != dir) {
			int ret = mkDir(dir);
			if (ret < 0 ) {
				printf("create dir: \"%s\" failed!\n", buffer);
			}
			break;
		}
		else if (pIndex == NULL && pDir == dir) {
			printf("dir is not directory!\n");
			return -1;
		}
		pDir = pIndex+1;
	}
	return 0;
}

int isDirExist(const char *dir)
{
	if (NULL == dir) {
		return -1;
	}

	DIR *pdir = NULL;
	if ((pdir = opendir(dir)) == NULL) {
		return -1;
	}
	closedir(pdir);
	return 0;
}


