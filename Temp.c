#include <stdio.h>
//        rename("", "")
// check filelist.txt

int 1.00_1.03() {
rename("1.03/_frenchpatch103.big", "BFME/_frenchpatch103.big");
rename("1.03/_patch103.big", "BFME/_patch103.big");
rename("1.03/_frenchpatch102.big", "BFME/_frenchpatch102.big");
rename("1.03/_patch102.big", "BFME/_patch102.big");
rename("1.03/_frenchpatch101.big", "BFME/_frenchpatch101.big");
rename("1.03/_patch101.big", "BFME/_patch101.big");
rename("1.03/assets.dat", "BFME/assets.dat") // edit
rename("1.03/Bases.big", "BFME/Bases.big") //edit
rename("1.03/game.dat", "BFME/game.dat") //remplacer en 1.00
rename("1.03/INI.big", "BFME/INI.big") // edit
rename("1.03/Librairies.big", "BFME/Librairies.big") //edit
rename("1.03/Maps.big", "BFME/Maps.big") //edit
rename("1.03/patch.doc", "BFME/patch.doc")
rename("1.03/worldbuilder.exe", "BFME/worldbuilder.exe") //edit
return 0
}


int 1.03_1.06() {
//regarder les 
rename("1.06/_frenchpatch106.big", "BFME/_frenchpatch106.big");
rename("1.06/_patch105.big", "BFME/_patch105.big");
rename("1.06/_patch106.big", "BFME/_patch106.big");
rename("1.06/_patch106french.big", "BFME/_patch106french.big");
rename("1.06/_patch106textures.big", "BFME/_patch106textures.big");
rename("1.06/_WSMaps.big", "BFME/_WSMaps.big");
rename("1.06/launcher.txt", "BFME/launcher.txt");
rename("1.06/mss32.dll", "BFME/mss32.dll");
rename("1.06/px2xdll.dll", "BFME/px2xdll.dll");
rename("1.06/patch.doc", "BFME/patch.doc");
rename("1.06/patchget.dat", "BFME/patchget.dat");
rename("1.06/patchw32.dll", "BFME/patchw32.dll");
rename("1.06/unins000.dat", "BFME/unins000.dat");
rename("1.06/unins000.exe", "BFME/unins000.exe");
rename("1.06/unins001.dat", "BFME/unins001.dat");
rename("1.06/unins001.exe", "BFME/unins001.exe");
rename("1.06/unins002.dat", "BFME/unins002.dat");
rename("1.06/unins002.exe", "BFME/unins002.exe");
return 0
}

int 1.06_1.08() {
rename("1.08/asset.dat", "BFME/asset.dat")
rename("1.08/_WSMaps2", "BFME/_WSMaps2.big") //ajout
rename("1.08/_patch108.big", "BFME/_patch108.big")
rename("1.08/_patch108french.big", "BFME/_patch108french.big")
return 0
}

int 1.08_1.06() {
remove("BFME/_WSMaps2.big")
remove("BFME/_patch108french.big")
remove("BFME/_patch108.big")
rename("1.06/asset.dat", "BFME/asset.dat")
}


int 1.06_1.03() {
remove("_frenchpatch106.big");
remove("_patch105.big");
remove("_patch106.big");
remove("_patch106french.big");
remove("_patch106textures.big");
remove("_WSMaps.big");
remove("px2xdll.dll");
remove("patch.doc");
remove("patchget.dat");
remove("patchw32.dll");
remove("unins000.dat");
remove("unins000.exe");
remove("unins001.dat");
remove("unins001.exe");
remove("unins002.dat");
remove("unins002.exe");
rename("1.03/mss32.dll", "BFME/mss32.dll");
rename("1.03/launcher.txt", "BFME/launcher.txt");
return 0
}

int 1.03_1.00() {
remove("1.03/_frenchpatch103.big")
remove("1.03/_patch103.big")
remove("1.03/_frenchpatch102.big")
remove("1.03/_patch102.big")
remove("1.03/_frenchpatch101.big")
remove("1.03/_patch101.big")
rename("1.00/assets.dat", "BFME/assets.dat") // edit
rename("1.00/Bases.big", "BFME/Bases.big") //edit
rename("1.00/INI.big", "BFME/INI.big") // edit
rename("1.00/Librairies.big", "BFME/Librairies.big") //edit
rename("1.00/Maps.big", "BFME/Maps.big") //edit
remove("1.03/patch.doc")
rename("1.00/worldbuilder.exe", "BFME/worldbuilder.exe") //edit
return 0
}
