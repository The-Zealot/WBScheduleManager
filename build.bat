@echo off
set MAJ=3
set MIN=0
set RLS=3a
set BLD=23062016
echo #include ^<windows.h^> >resource.rc
echo IDI_ICON1	ICON	"app.ico" >>resource.rc
echo VS_VERSION_INFO VERSIONINFO >>resource.rc
echo        FILEVERSION %MAJ%,%MIN%,%RLS%,%BLD%>>resource.rc
echo        PRODUCTVERSION %MAJ%,%MIN%,%RLS%,%BLD%>>resource.rc
echo        FILEFLAGSMASK 0x3fL>>resource.rc
echo #ifdef _DEBUG>>resource.rc
echo        FILEFLAGS VS_FF_DEBUG>>resource.rc
echo #else>>resource.rc
echo        FILEFLAGS 0x0L>>resource.rc
echo #endif>>resource.rc
echo        FILEOS VOS_NT_WINDOWS32>>resource.rc
echo        FILETYPE VFT_DLL>>resource.rc
echo        FILESUBTYPE VFT2_UNKNOWN>>resource.rc
echo        BEGIN>>resource.rc
echo                BLOCK "StringFileInfo">>resource.rc
echo                BEGIN>>resource.rc
echo                        BLOCK "040904b0">>resource.rc
echo                        BEGIN>>resource.rc
echo                                VALUE "CompanyName", "The_Zealot\0">>resource.rc
echo                                VALUE "FileDescription", "Managment the shifts of all employees involved in the WBPoint\0">>resource.rc
echo                                VALUE "FileVersion", "%MAJ%.%MIN%.%RLS%.%BLD%\0">>resource.rc
echo                                VALUE "LegalCopyright", "Yaroslav Solovev\0">>resource.rc
echo                                VALUE "OriginalFilename", "WBSchedleManager.exe\0">>resource.rc
echo                                VALUE "ProductName", "WBScheduleManager\0">>resource.rc
echo                                VALUE "ProductVersion", "%MAJ%.%MIN%.%RLS%.%BLD%\0">>resource.rc
echo                                VALUE "InternalName", "\0">>resource.rc
echo                                VALUE "Comments", "\0">>resource.rc
echo                                VALUE "LegalTrademarks", "\0">>resource.rc
echo                        END>>resource.rc
echo                END>>resource.rc
echo                BLOCK "VarFileInfo">>resource.rc
echo                BEGIN>>resource.rc
echo                        VALUE "Translation", 0x0409, 1200>>resource.rc
echo                END>>resource.rc
echo        END>>resource.rc
echo /* End of Version info */>>resource.rc
