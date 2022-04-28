#include <stdio.h>
#include <winbase.h>
#include <stdbool.h>
#include <stdlib.h>
#include<unistd.h>
//        rename("", "")
// check filelist.txt
//copy /Y

int doFileExist(char filename[])
{
    FILE *file;
    file = fopen(filename, "r");
    if (file != NULL)
    {
        fclose(file);
        return 1;
    }
    return 0;
}

void main() {
    int command;
    int v103 = doFileExist("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch103.big");
    int v106 = doFileExist("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106.big");
    int v108 = doFileExist("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch108.big");
    int sum = v103 + v106 + v108;
    printf("103: %d \n", v103);
    printf("106: %d \n", v106);
    printf("108: %d \n", v108);
    switch (sum) {
        case 0:
            printf("Which version ? \n\n1.03 = 1\n1.06 = 2\n1.08 = 3\n");
            scanf("%d", &command);
            switch (command) {
                case 1: ;
                    system("copy /Y 1.03\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    printf("done");
                    break;
                case 2: ;
                    system("copy /Y 1.03\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    system("copy /Y 1.06\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    printf("done");
                    break;
                case 3: ;
                    system("copy /Y 1.03\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    system("copy /Y 1.06\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    system("copy /Y 1.08\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    printf("done");
                    break;
            }
            break;
        case 1: ;
            printf("Which version ? \n\n100 = 1\n1.06 = 2\n1.08 = 3\n");
            scanf("%d", &command);
            switch (command) {
                case 1: ;
                    system("copy /Y 1.00\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch103.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch103.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch102.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch102.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch101.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch101.big");
                    printf("done");
                    break;
                case 2: ;
                    system("copy /Y 1.06\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    printf("done");
                    break;
                case 3: ;
                    system("copy /Y 1.06\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    system("copy /Y 1.08\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    printf("done");
                    break;
            }
            break;
        case 2: ;
            printf("Which version ? \n\n1.00 = 1\n1.03 = 2\n1.08 = 3\n");
            scanf("%d", &command);
            switch (command) {
                case 1: ;
                    system("copy /Y 1.00\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch103.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch103.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch102.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch102.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch101.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch101.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch106.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch105.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106french.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106textures.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_WSMaps.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/px2xdll.dll");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patch.doc");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patchget.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patchw32.dll");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins000.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins000.exe");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins001.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins001.exe");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins002.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins002.exe");
                    printf("done");
                    break;
                case 2: ;
                    system("copy /Y 1.03\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch106.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch105.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106french.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106textures.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_WSMaps.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/px2xdll.dll");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patch.doc");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patchget.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patchw32.dll");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins000.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins000.exe");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins001.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins001.exe");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins002.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins002.exe");
                    printf("done");
                    break;
                case 3: ;
                    system("copy /Y 1.08\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    printf("done");
                    break;
            }
            break;
        case 3: ;
            printf("Which version ? \n\n1.00 = 1\n1.03 = 2\n1.06 = 3\n");
            scanf("%d", &command);
            switch (command) {
                case 1: ;
                    system("copy /Y 1.00\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch103.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch103.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch102.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch102.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch101.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch101.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch106.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch105.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106french.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106textures.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_WSMaps.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/px2xdll.dll");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patch.doc");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patchget.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patchw32.dll");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins000.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins000.exe");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins001.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins001.exe");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins002.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins002.exe");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_WSMaps2.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch108french.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch108.big");

                    printf("done");
                    break;
                case 2: ;
                    system("copy /Y 1.03\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch106.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch105.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106french.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106textures.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_WSMaps.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/px2xdll.dll");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patch.doc");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patchget.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patchw32.dll");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins000.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins000.exe");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins001.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins001.exe");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins002.dat");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins002.exe");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_WSMaps2.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch108french.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch108.big");

                    printf("done");
                    break;
                case 3: ;
                    system("copy /Y 1.06\\* C:\\\"Program Files (x86)\"\\\"EA GAMES\"\\\"La Bataille pour la Terre du Milieu(tm)\"");
                    remove("C:/Program Files (x86)\EA GAMES/La Bataille pour la Terre du Milieu(tm)/_WSMaps2.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch108french.big");
                    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch108.big");
                    printf("done");
                    break;
            }
            break;
    }
}
