%ifndef __glaux_INC__
%define __glaux_INC__

IMPORT AllocateMemory
IMPORT AllocateZeroedMemory
IMPORT CleanUp
IMPORT ComponentFromIndex
IMPORT CreateCIPalette
IMPORT CreateRGBPalette
IMPORT DefaultHandleExpose
IMPORT DefaultHandleReshape
IMPORT DelayPaletteRealization
IMPORT DestroyThisWindow
IMPORT DibNumColors
IMPORT DisplayFunc
IMPORT ExposeFunc
IMPORT FillRgbPaletteEntries
IMPORT FindBestPixelFormat
IMPORT FindExactPixelFormat
IMPORT FindPixelFormat
IMPORT FlushPalette
IMPORT ForceRedraw
IMPORT FreeMemory
IMPORT GRD
IMPORT GetRegistrySysColors
IMPORT GrabStaticEntries
IMPORT IdleFunc
IMPORT IsPixelFormatValid
IMPORT KeyDown
IMPORT KeyDownFunc
IMPORT MouseDown
IMPORT MouseDownFunc
IMPORT MouseLoc
IMPORT MouseMoveFunc
IMPORT MouseUp
IMPORT MouseUpFunc
IMPORT PixelFormatDescriptorFromDc
IMPORT PrintMessage
IMPORT RawImageClose
IMPORT RawImageGetData
IMPORT RawImageGetRow
IMPORT RawImageOpenAW
IMPORT RealizePaletteNow
IMPORT ReleaseStaticEntries
IMPORT ReshapeFunc
IMPORT UpdateStaticMapping
IMPORT abOneToEight
IMPORT abThreeToEight
IMPORT abTwoToEight
IMPORT add3
IMPORT aiDefaultOverride
IMPORT apeDefaultPalEntry
IMPORT auxCloseWindow, 0
IMPORT auxCreateFont, 0
IMPORT auxDIBImageLoadA, 4
IMPORT auxDIBImageLoadW, 4
IMPORT auxDrawStrA, 4
IMPORT auxDrawStrAW, 8
IMPORT auxDrawStrW, 4
IMPORT auxExposeFunc, 4
IMPORT auxGetColorMapSize, 0
IMPORT auxGetDisplayMode, 0
IMPORT auxGetDisplayModeID, 0
IMPORT auxGetDisplayModePolicy, 0
IMPORT auxGetHDC, 0
IMPORT auxGetHGLRC, 0
IMPORT auxGetHWND, 0
IMPORT auxGetMouseLoc, 8
IMPORT auxIdleFunc, 4
IMPORT auxInitDisplayMode, 4
IMPORT auxInitDisplayModeID, 4
IMPORT auxInitDisplayModePolicy, 4
IMPORT auxInitPosition, 16
IMPORT auxInitWindowA, 4
IMPORT auxInitWindowAW, 8
IMPORT auxInitWindowW, 4
IMPORT auxKeyFunc, 8
IMPORT auxMainLoop, 4
IMPORT auxMouseFunc, 12
IMPORT auxQuit, 0
IMPORT auxRGBImageLoadA, 4
IMPORT auxRGBImageLoadW, 4
IMPORT auxRGBMap
IMPORT auxReshapeFunc, 4
IMPORT auxSetFogRamp, 8
IMPORT auxSetGreyRamp, 0
IMPORT auxSetOneColor, 16
IMPORT auxSetRGBMap, 8
IMPORT auxSolidBox, 24
IMPORT auxSolidCone, 16
IMPORT auxSolidCube, 8
IMPORT auxSolidCylinder, 16
IMPORT auxSolidDodecahedron, 8
IMPORT auxSolidIcosahedron, 8
IMPORT auxSolidOctahedron, 8
IMPORT auxSolidSphere, 8
IMPORT auxSolidTeapot, 8
IMPORT auxSolidTetrahedron, 8
IMPORT auxSolidTorus, 16
IMPORT auxSwapBuffers, 0
IMPORT auxWireBox, 24
IMPORT auxWireCone, 16
IMPORT auxWireCube, 8
IMPORT auxWireCylinder, 16
IMPORT auxWireDodecahedron, 8
IMPORT auxWireIcosahedron, 8
IMPORT auxWireOctahedron, 8
IMPORT auxWireSphere, 8
IMPORT auxWireTeapot, 8
IMPORT auxWireTetrahedron, 8
IMPORT auxWireTorus, 16
IMPORT bitmapBase
IMPORT bitmapFont
IMPORT colorMaps
IMPORT compareParams
IMPORT copy3
IMPORT copymat3
IMPORT cpdata
IMPORT crossprod
IMPORT diff3
IMPORT displayModeType
IMPORT dist3
IMPORT dodec
IMPORT dodecahedron
IMPORT dot3
IMPORT doughnut
IMPORT drawbox
IMPORT drawtriangle
IMPORT errfunc
IMPORT error
IMPORT filledFont
IMPORT findList
IMPORT gacrBlackAndWhite
IMPORT gacrSave
IMPORT gaiStaticIndex
IMPORT gaszSysClrNames
IMPORT icosahedron
IMPORT idata
IMPORT identifymat3
IMPORT identitymat
IMPORT index
IMPORT initdodec
IMPORT keyTable
IMPORT keyTableCount
IMPORT length3
IMPORT lists
IMPORT lpszClassName
IMPORT lpszClassNameW
IMPORT m_popmatrix
IMPORT m_pushmatrix
IMPORT m_scale
IMPORT m_translate
IMPORT m_xformpt
IMPORT m_xformptonly
IMPORT makeModelPtr
IMPORT matstack
IMPORT mattop
IMPORT mouseDownTable
IMPORT mouseDownTableCount
IMPORT mouseLocTable
IMPORT mouseLocTableCount
IMPORT mouseUpTable
IMPORT mouseUpTableCount
IMPORT normalize
IMPORT octahedron
IMPORT odata
IMPORT ondex
IMPORT outlineFont
IMPORT patchdata
IMPORT pentagon
IMPORT perpnorm
IMPORT recorditem
IMPORT samepoint
IMPORT scalarmult
IMPORT seterrorfunc
IMPORT solidTeapot
IMPORT strokeFont
IMPORT subdivide
IMPORT tdata
IMPORT teapots
IMPORT tetrahedron
IMPORT tex
IMPORT tkCloseWindow
IMPORT tkCreateBitmapFont
IMPORT tkCreateFilledFont
IMPORT tkCreateOutlineFont
IMPORT tkCreateStrokeFont
IMPORT tkDIBImageLoad
IMPORT tkDIBImageLoadAW
IMPORT tkDisplayFunc
IMPORT tkDrawStr
IMPORT tkErrorPopups
IMPORT tkExec
IMPORT tkExposeFunc
IMPORT tkGetColorMapSize
IMPORT tkGetDisplayMode
IMPORT tkGetDisplayModeID
IMPORT tkGetDisplayModePolicy
IMPORT tkGetHDC
IMPORT tkGetHRC
IMPORT tkGetHWND
IMPORT tkGetMouseLoc
IMPORT tkIdleFunc
IMPORT tkInitDisplayMode
IMPORT tkInitDisplayModeID
IMPORT tkInitDisplayModePolicy
IMPORT tkInitPosition
IMPORT tkInitWindow
IMPORT tkInitWindowAW
IMPORT tkKeyDownFunc
IMPORT tkMouseDownFunc
IMPORT tkMouseMoveFunc
IMPORT tkMouseUpFunc
IMPORT tkNumStaticColors
IMPORT tkOSVerInfo
IMPORT tkPopupEnable
IMPORT tkQuit
IMPORT tkRGBImageLoad
IMPORT tkRGBImageLoadAW
IMPORT tkReshapeFunc
IMPORT tkSetFogRamp
IMPORT tkSetGreyRamp
IMPORT tkSetOneColor
IMPORT tkSetRGBMap
IMPORT tkStaticColorsSaved
IMPORT tkSwapBuffers
IMPORT tkSystemColorsInUse
IMPORT tkUseStaticColors
IMPORT tkWndProc
IMPORT tkhdc
IMPORT tkhpalette
IMPORT tkhrc
IMPORT tkhwnd
IMPORT tndex
IMPORT windInfo
IMPORT wireTeapot
IMPORT xformvec3

%endif