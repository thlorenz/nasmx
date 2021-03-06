%ifndef __dbghelp_INC__
%define __dbghelp_INC__

IMPORT DbgHelpCreateUserDump, 12
IMPORT DbgHelpCreateUserDumpW, 12
IMPORT EnumDirTree, 24
IMPORT EnumerateLoadedModules64, 12
IMPORT EnumerateLoadedModules, 12
IMPORT ExtensionApiVersion, 0
IMPORT FindDebugInfoFile, 12
IMPORT FindDebugInfoFileEx, 20
IMPORT FindExecutableImage, 12
IMPORT FindExecutableImageEx, 20
IMPORT FindFileInPath, 32
IMPORT FindFileInSearchPath, 28
IMPORT GetTimestampForLoadedLibrary, 4
IMPORT ImageDirectoryEntryToData, 16
IMPORT ImageDirectoryEntryToDataEx, 20
IMPORT ImageNtHeader, 4
IMPORT ImageRvaToSection, 12
IMPORT ImageRvaToVa, 16
IMPORT ImagehlpApiVersion, 0
IMPORT ImagehlpApiVersionEx, 4
IMPORT MakeSureDirectoryPathExists, 4
IMPORT MapDebugInformation, 16
IMPORT MiniDumpReadDumpStream, 20
IMPORT MiniDumpWriteDump, 28
IMPORT SearchTreeForFile, 12
IMPORT StackWalk64, 36
IMPORT StackWalk, 36
IMPORT SymAddSymbol, 32
IMPORT SymCleanup, 4
IMPORT SymDeleteSymbol, 28
IMPORT SymEnumLines, 28
IMPORT SymEnumSourceFiles, 24
IMPORT SymEnumSym, 20
IMPORT SymEnumSymbols, 24
IMPORT SymEnumSymbolsForAddr, 20
IMPORT SymEnumTypes, 20
IMPORT SymEnumerateModules64, 12
IMPORT SymEnumerateModules, 12
IMPORT SymEnumerateSymbols64, 20
IMPORT SymEnumerateSymbols, 16
IMPORT SymEnumerateSymbolsW64, 20
IMPORT SymEnumerateSymbolsW, 16
IMPORT SymFindFileInPath, 40
IMPORT SymFromAddr, 20
IMPORT SymFromName, 12
IMPORT SymFromToken, 20
IMPORT SymFunctionTableAccess64, 12
IMPORT SymFunctionTableAccess, 8
IMPORT SymGetHomeDirectory, 12
IMPORT SymGetLineFromAddr64, 20
IMPORT SymGetLineFromAddr, 16
IMPORT SymGetLineFromName64, 24
IMPORT SymGetLineFromName, 24
IMPORT SymGetLineNext64, 8
IMPORT SymGetLineNext, 8
IMPORT SymGetLinePrev64, 8
IMPORT SymGetLinePrev, 8
IMPORT SymGetModuleBase64, 12
IMPORT SymGetModuleBase, 8
IMPORT SymGetModuleInfo64, 16
IMPORT SymGetModuleInfo, 12
IMPORT SymGetModuleInfoW64, 16
IMPORT SymGetModuleInfoW, 12
IMPORT SymGetOptions, 0
IMPORT SymGetSearchPath, 12
IMPORT SymGetSymFromAddr64, 20
IMPORT SymGetSymFromAddr, 16
IMPORT SymGetSymFromName64, 12
IMPORT SymGetSymFromName, 12
IMPORT SymGetSymNext64, 8
IMPORT SymGetSymNext, 8
IMPORT SymGetSymPrev64, 8
IMPORT SymGetSymPrev, 8
IMPORT SymGetTypeFromName, 20
IMPORT SymGetTypeInfo, 24
IMPORT SymInitialize, 12
IMPORT SymLoadModule64, 28
IMPORT SymLoadModule, 24
IMPORT SymLoadModuleEx, 36
IMPORT SymMatchFileName, 16
IMPORT SymMatchString, 12
IMPORT SymRegisterCallback64, 16
IMPORT SymRegisterCallback, 12
IMPORT SymRegisterFunctionEntryCallback64, 16
IMPORT SymRegisterFunctionEntryCallback, 12
IMPORT SymSetContext, 12
IMPORT SymSetHomeDirectory, 4
IMPORT SymSetOptions, 4
IMPORT SymSetParentWindow, 4
IMPORT SymSetSearchPath, 8
IMPORT SymUnDName64, 12
IMPORT SymUnDName, 12
IMPORT SymUnloadModule64, 12
IMPORT SymUnloadModule, 8
IMPORT UnDecorateSymbolName, 16
IMPORT UnmapDebugInformation, 4
IMPORT WinDbgExtensionDllInit, 12
IMPORT dbghelp, 8
IMPORT dh, 24
IMPORT fptr, 24
IMPORT lm, 24
IMPORT lmi, 24
IMPORT omap, 24
IMPORT srcfiles, 24
IMPORT stackdbg, 24
IMPORT sym, 24
IMPORT symsrv, 24
IMPORT vc7fpo, 24

%endif