// 2839.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<stdio.h>

int arData[5001]{};
int main()
{
	int nN(0);

	for (int i = 0; i < 5001; i++)
	{
		arData[i] = -1;
	}
	arData[3] = 1;
	arData[5] = 1;

	for (int i = 6; i < 5001; i++)
	{
		if (arData[i-3] != -1 && arData[i-5] != -1)
		{
			if (arData[i - 3] > arData[i - 5])
			{
				arData[i] = arData[i - 5] + 1;
			}
			else
			{
				arData[i] = arData[i - 3] + 1;
			}
		}
		else if (arData[i - 3] != -1 && arData[i - 5] == -1)
		{
			arData[i] = arData[i - 3] + 1;
		}
		else if(arData[i - 5] != -1)
		{
			arData[i] = arData[i - 5] + 1;
		}
		else
		{
			arData[i] = -1;
		}
		
	}
	
	scanf_s("%d", &nN);

	printf("%d", arData[nN]);
    return 0;
}

