
void strlower (char *a)//手写函数，将大写字母转换成小写字母
{
	for(int i = 0; a[i]; i ++ ) 
	{
		if(isupper(a[i])) 
		a[i] = tolower(a[i]);//isupper是判断是否是大写字母的系统函数，tolower是将其转换成小写字母的函数
	}
}