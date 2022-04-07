include <stdio.h>

int 1.03_1.06() {
//edit BFME
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
