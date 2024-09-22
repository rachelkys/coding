int main()
{
	int k=0,i=0;
	char str[101];
	
	scanf("%s %d",str,&k);
	
	for(i=0;str[i]!='\0';i++)
		if((str[i]>='A'&&str[i]<='Z')&&str[i]+k<='Z' ||(str[i]>='a' && str[i]<='z')&&str[i]+k<='z')
			str[i]=str[i]+k;
      else if ((str[i]>='A'&&str[i]<='Z')&&str[i]+k>'Z')
				str[i]='A'+k-'Z'+str[i]-1;
		else if((str[i]>='a' && str[i]<='z')&&str[i]+k>'z')
				str[i]='a'+k-'z'+str[i]-1;
		else
			str[i]=str[i];
				
	printf("%s",str);
		
	return 0;
}
