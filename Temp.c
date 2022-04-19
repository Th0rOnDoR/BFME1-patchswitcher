#include <stdio.h>
//        rename("", "")
// check filelist.txt

int doFileExist(str filename)
{
    FILE *file;
    
    if (file = fopen(filename, "r")) 
    {
        fclose(file);
        return 1;
    }
    return 0;


int 1.00_1.03() {
    a = rename("1.03/_frenchpatch103.big", "BFME/_frenchpatch103.big");
    b = rename("1.03/_patch103.big", "BFME/_patch103.big");
    c = rename("1.03/_frenchpatch102.big", "BFME/_frenchpatch102.big");
    d = rename("1.03/_patch102.big", "BFME/_patch102.big");
    e = rename("1.03/_frenchpatch101.big", "BFME/_frenchpatch101.big");
    f = rename("1.03/_patch101.big", "BFME/_patch101.big");
    g = rename("1.03/assets.dat", "BFME/assets.dat"); // edit
    h = rename("1.03/Bases.big", "BFME/Bases.big"); //edit
    i = rename("1.03/game.dat", "BFME/game.dat"); //remplacer en 1.00
    j = rename("1.03/INI.big", "BFME/INI.big"); // edit
    k = rename("1.03/Librairies.big", "BFME/Librairies.big"); //edit
    l = rename("1.03/Maps.big", "BFME/Maps.big"); //edit
    m = rename("1.03/patch.doc", "BFME/patch.doc");
    n = rename("1.03/worldbuilder.exe", "BFME/worldbuilder.exe"); //edit
    
    
    if(a+b+c+d+e+f+g+h+i+j+k+l+m+n != 0) {
        
        printf("Something went wrongl during 1.00 to 1.03, please try again or ask support");
        return 1;
    }
    
    else {
        return 0;
    }

}


int 1.03_1.06() {
    //regarder les 
    a = rename("1.06/_frenchpatch106.big", "BFME/_frenchpatch106.big");
    b = rename("1.06/_patch105.big", "BFME/_patch105.big");
    c = rename("1.06/_patch106.big", "BFME/_patch106.big");
    d = rename("1.06/_patch106french.big", "BFME/_patch106french.big");
    e = rename("1.06/_patch106textures.big", "BFME/_patch106textures.big");
    f = rename("1.06/_WSMaps.big", "BFME/_WSMaps.big");
    g = rename("1.06/launcher.txt", "BFME/launcher.txt");
    h = rename("1.06/mss32.dll", "BFME/mss32.dll");
    i = rename("1.06/px2xdll.dll", "BFME/px2xdll.dll");
    j = rename("1.06/patch.doc", "BFME/patch.doc");
    k = rename("1.06/patchget.dat", "BFME/patchget.dat");
    l = rename("1.06/patchw32.dll", "BFME/patchw32.dll");
    m = rename("1.06/unins000.dat", "BFME/unins000.dat");
    n = rename("1.06/unins000.exe", "BFME/unins000.exe");
    o = rename("1.06/unins001.dat", "BFME/unins001.dat");
    p = rename("1.06/unins001.exe", "BFME/unins001.exe");
    q = rename("1.06/unins002.dat", "BFME/unins002.dat");
    r = rename("1.06/unins002.exe", "BFME/unins002.exe");


    if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r != 0) {
        
        printf("Something went wrongl during 1.03 to 1.06, please try again or ask support");
        return 1;
    }
    
    else {
        return 0;
    }
}

int 1.06_1.08() {
    a = rename("1.08/asset.dat", "BFME/asset.dat");
    b = rename("1.08/_WSMaps2", "BFME/_WSMaps2.big"); //ajout
    c = rename("1.08/_patch108.big", "BFME/_patch108.big");
    d = rename("1.08/_patch108french.big", "BFME/_patch108french.big");
    
    if(a+b+c+d != 0) {
        
        printf("Something went wrongl during 1.06 to 1.08, please try again or ask support");
        return 1;
    }
    
    else {
        return 0;
    }
}

int 1.08_1.06() {
    d = remove("BFME/_WSMaps2.big");
    c = remove("BFME/_patch108french.big");
    b = remove("BFME/_patch108.big");
    a = rename("1.06/asset.dat", "BFME/asset.dat");

    if(a+b+c+d != 0) {
        
        printf("Something went wrongl during 1.08 to 1.06, please try again or ask support");
        return 1;
    }
    
    else {
        return 0;
    }
}


int 1.06_1.03() {
    a = remove("_frenchpatch106.big");
    b = remove("_patch105.big");
    c = remove("_patch106.big");
    d = remove("_patch106french.big");
    e = remove("_patch106textures.big");
    f = remove("_WSMaps.big");
    g = remove("px2xdll.dll");
    h = remove("patch.doc");
    i = remove("patchget.dat");
    j = remove("patchw32.dll");
    k = remove("unins000.dat");
    l = remove("unins000.exe");
    m = remove("unins001.dat");
    n = remove("unins001.exe");
    o = remove("unins002.dat");
    p = remove("unins002.exe");
    q = rename("1.03/mss32.dll", "BFME/mss32.dll");
    r = rename("1.03/launcher.txt", "BFME/launcher.txt");


    if(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r != 0) {
        
        printf("Something went wrongl during 1.06 to 1.03, please try again or ask support");
        return 1;
    }
    
    else {
        return 0;
    }
}

int 1.03_1.00() {
    a = remove("1.03/_frenchpatch103.big");
    b = remove("1.03/_patch103.big");
    c = remove("1.03/_frenchpatch102.big");
    d = remove("1.03/_patch102.big");
    e = remove("1.03/_frenchpatch101.big");
    f = remove("1.03/_patch101.big");
    g = rename("1.00/assets.dat", "BFME/assets.dat"); // edit
    h = rename("1.00/Bases.big", "BFME/Bases.big"); //edit
    i = rename("1.00/INI.big", "BFME/INI.big"); // edit
    j = rename("1.00/Librairies.big", "BFME/Librairies.big"); //edit
    k = rename("1.00/Maps.big", "BFME/Maps.big"); //edit
    l = remove("1.03/patch.doc");
    m =rename("1.00/worldbuilder.exe", "BFME/worldbuilder.exe"); //edit

    if(a+b+c+d+e+f+g+h+i+j+k+l+m != 0) {
        
        printf("Something went wrongl during 1.00 to 1.03, please try again or ask support");
        return 1;
    }
    
    else {
        return 0;
    }
}



void main() {
    v103 = doFileExist("BFME/_patch103.big");
    v106 = doFileExist("BFME/_patch106.big");
    v108 = doFileExist("BFME/_patch108.big");
    sum = v103 + v106 + v108;
    switch (sum) {
        case 0:
            printf("Which version ? \n\n1.03 = a");
            gets(command);
            switch (command.tollwercqse) {
                case a:
                    k = 1.00_1.03();
                    if (k = 0) {
                        printf("done");
                    }
                    Break;
            Break;
        case 1:
            printf("Which version ? \n\n1.00 = a\n1.06 = b");
            gets(command);
            switch (command.tollwercqse) {
                case a:
                    k = 1.03_1.00();
                    if (k = 0) {
                        printf("done");
                    }
                    Break;
                case b:
                    k = 1.03_1.06();
                    if (k = 0) {
                        printf("done");
                    }
                    Break;
            Break;
        case 2:
            printf("Which version ? \n\n1.03 = a\n1.08 = b");
            gets(command);
            switch (command.tollwercqse) {
                case a:
                    k = 1.06_1.03();
                    if (k = 0) {
                        printf("done");
                    }
                    Break;
                case b:
                    k = 1.06_1.08();
                    if (k = 0) {
                        printf("done");
                    }
                    Break;
            Break;
        case 3:
            printf("Which version ? \n\n1.06 = a");
            gets(command);
            switch (command.tollwercqse) {
                case a:
                    k = 1.08_1.06();
                    if (k = 0) {
                        printf("done");
                    }
                    Break;
            Break;
    }
}
