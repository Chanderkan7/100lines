#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
using namespace std ;
class contact
{
public:
long ph;
char name[20],add[20],email[30];
}
list;
char query[20],name[20];
FILE *fp, *ft;
int i,n,ch,l,found;
int main()
{
int x,y,z;
system("color 5f ");
main: 
system("cls");
cout<<"\n\t ------------------------------------"<<endl;
cout<<"\n\t Welcome to a contact Manager. "<<endl;
cout<<"\t ------------------------------------- "<<endl;
cout<<"\t 1.Main Menu. "<<endl;
cout<<"\t 2.Add a new Contact. "<<endl;
cout<<"\t 3.List all Contacts. "<<endl;
cout<<"\t 4.Search for contact. "<<endl;
cout<<"\t 5.Edit Contact: "<<endl;
cout<<"\t 6.Delete a Contact: "<<endl;
cout<<"\t 7.Exit "<<endl;
cout<<"\t Enter the choice:"; 
cin>>ch;
switch(ch)
{
case 7:
cout<<"\n\n\t\tAre you sure u want to exit?"<<endl;
break;
case 2:
system("cls");
fp=fopen("contact.dll","a");
for (;;)
{ fflush(stdin);
cout<<"To exit enter blank space in the name input"<<endl;
cout<<"Name :";
cin>>list.name;
if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)
break;
fflush(stdin);
cout<<"Phone:"<<endl;
cin>>list.ph;
fflush(stdin);
cout<<"address:"<<endl;
cin>>list.add;
fflush(stdin);
cout<<"email address:"<<endl;
cin>>list.email;
fwrite(&list,sizeof(list),1,fp);
}
fclose(fp);
break;
case 3:
system("cls");
cout<<"\n\t\t\n\t\t\tLIST OF CONTACTS\n\t\t\n\nName\t\tPhone No\t Address\t\tE-mail ad.\n \n\n"<<endl;
for(i=97;i<=122;i=i+1)
{
fp=fopen("contact.dll","r");
fflush(stdin);
found=0;
while(fread(&list,sizeof(list),1,fp)==1)
{
if(list.name[0]==i || list.name[0]==i-32)
{
cout<<"\nName\t: \nPhone\t: ld\nAddress\t: s\nEmail\t: s\n";
cin>>list.name;
cin>>list.ph;
cin>>list.add;
cin>>list.email;
found++;
}
}
if(found!=0)
{
printf("[%c]- (%d)\n\n",i-32,found);
getch();
}
fclose(fp);
}
break;
case 4:
system("cls");
do
{
found=0;
cout<<"\n\n\tCONTACT SEARCH\n\t\n\t Name of contact to search: ";
fflush(stdin);
cin>>query;
l=strlen(query);
fp=fopen("contact.dll","r");
system("cls");
cout<<"\n\nSearch result for 's' \n\n",query;
while(fread(&list,sizeof(list),1,fp)==1)
{
for(i=0;i<=l;i++)
name[i]=list.name[i];
name[l]='\0';
if(stricmp(name,query)==0)
{
cout<<"\n Name\t: s\nPhone\t: ld\n.Address\t: s\n.Email\t: s\n",list.name,list.ph,list.add,list.email;
found++;
if (found%4==0)
{
cout<<"Press any key to continue..."<<endl;
getch();
}
}
}
if(found==0)
cout<<"No match found"<<endl;
else
cout<<"\nd match(s) found!",found;
fclose(fp);
cout<<"Try again?\n\n\t.1 Yes\t\t7. No\n\t";
cin>>ch;
}
while(ch==1);
break;
case 5:
system("cls");
fp=fopen("contact.dll","r");
ft=fopen("temp.dat","w");
fflush(stdin);
cout<<"Edit contact\n\n\n\tEnter the name of contact to edit:";
cin>>name;
while(fread(&list,sizeof(list),1,fp)==1)
{
if(stricmp(name,list.name)!=0)
fwrite(&list,sizeof(list),1,ft);
}
fflush(stdin);
cout<<"\n\nEditing '%s'\n\n",name;
cout<<"Name(Use identical:";
cin>>list.name;
fflush(stdin);
cout<<"Phone:";
cin>>list.ph;
fflush(stdin);
cout<<"address:";
cin>>list.add;
fflush(stdin);
cout<<"email address:";
cin>>list.email;
fwrite(&list,sizeof(list),1,ft);
fclose(fp);
fclose(ft);
remove("contact.dll");
rename("temp.dat","contact.dll");
break;
case 6:
system("cls");
fflush(stdin);
cout<<"\n\n\tDelete a Contact\n\t\n\tEnter the Name of contact to delete:";
scanf("%[^\n]",&name);
fp=fopen("contact.dll","r");
ft=fopen("temp.dat","w");
while(fread(&list,sizeof(list),1,fp)!=0)
if (stricmp(name,list.name)!=0)
fwrite(&list,sizeof(list),1,ft);
fclose(fp);
fclose(ft);
remove("contact.dll");
rename("temp.dat","contact.dll");
break;
default: 
cout<<"Invalid choice"<<endl;
break;
}
cout<<"\n\n\Enter the Choice:"<<endl;
cout<<"\t1.Main Menu"<<endl;
cout<<"\t7.Exit"<<endl;
cin>>ch;
switch (ch)
{
case 1:
goto main;
case 7:
break;
default:
cout<<"Invalid choice"<<endl;
break;
}
return 0;
}
