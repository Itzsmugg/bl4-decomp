// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b57850 FUN_140b57850 body=328 status=ok
// SIG undefined FUN_140b57850(void)

void FUN_140b57850(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140b578ba;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140b578ba:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x58)) {
      uVar5 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x58,8);
  }
  return;
}



// FUNCTION 140b57998 FUN_140b57998 body=93 status=ok
// SIG undefined FUN_140b57998(void)

undefined8 * FUN_140b57998(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403d8100(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b57a8a(param_1,iVar1);
      FUN_140b579f5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140b579f5 FUN_140b579f5 body=148 status=ok
// SIG undefined FUN_140b579f5(void)

void FUN_140b579f5(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14034cca6(param_1,param_2);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
    iVar1 = *(int *)(param_2 + 0x48);
    _Src = *(void **)(param_2 + 0x40);
    *(int *)(param_1 + 0x48) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x40),iVar1,0);
      memcpy(*(void **)(param_1 + 0x40),_Src,(longlong)iVar1 * 2);
    }
    *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 140b57a8a FUN_140b57a8a body=330 status=ok
// SIG undefined FUN_140b57a8a(void)

void FUN_140b57a8a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b57af8;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140b57af8:
    iVar5 = (int)(uVar4 / 0x58);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x58,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b57bd4 FUN_140b57bd4 body=150 status=ok
// SIG undefined FUN_140b57bd4(void)

undefined8 * FUN_140b57bd4(undefined8 *param_1)

{
  FUN_140b57c6a();
  *param_1 = &PTR_FUN_14a5a1be0;
  param_1[5] = &PTR_LAB_14a5a1ef0;
  param_1[6] = &PTR_FUN_14a5a2000;
  param_1[0x42] = &PTR_FUN_14a5a2020;
  param_1[0x94] = &PTR_LAB_14a5a2050;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined2 *)(param_1 + 0x99) = 0x101;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  return param_1;
}



// FUNCTION 140b57c6a FUN_140b57c6a body=581 status=ok
// SIG undefined FUN_140b57c6a(void)

undefined8 * FUN_140b57c6a(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  FUN_140b57eb0(param_1 + 5);
  *param_1 = &PTR_FUN_14a48cf60;
  param_1[5] = &PTR_LAB_14a48d260;
  param_1[6] = &PTR_FUN_14a48d370;
  param_1[0x42] = &PTR_FUN_14a48d390;
  param_1[0x43] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(uint *)((longlong)param_1 + 0x294) = *(uint *)((longlong)param_1 + 0x294) & 0xffffffc0 | 0x20;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(byte *)((longlong)param_1 + 0x2b4) = *(byte *)((longlong)param_1 + 0x2b4) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x2bd) = 0;
  param_1[0x57] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c5) = 1;
  param_1[0x59] = 0x3f800000;
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xc0;
  *(undefined1 *)((longlong)param_1 + 0x2d4) = 0;
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) & 0xfffffff8 | 2;
  param_1[0x5e] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5f) = DAT_14cab2cd4;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 99) = 1;
  *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0x3f800000;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 2;
  *(undefined1 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x90) = 2;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x93] = 2;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0;
  return param_1;
}



// FUNCTION 140b57eb0 FUN_140b57eb0 body=1583 status=ok
// SIG undefined FUN_140b57eb0(void)

undefined8 * FUN_140b57eb0(undefined8 *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  
  *param_1 = &PTR_LAB_14a487070;
  param_1[1] = &PTR_LAB_14a487180;
  param_1[2] = &PTR_FUN_14a490480;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffff;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x2e] = &PTR_FUN_14a4904a0;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cab3658);
  lVar1 = DAT_14cab3660;
  if (DAT_14cab3688 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = -1;
    puVar2 = &DAT_14cab3670;
    if (DAT_14cab3680 != (undefined *)0x0) {
      puVar2 = DAT_14cab3680;
    }
    uVar10 = (ulonglong)(DAT_14cab3688 + 0x1fU >> 5);
    iVar9 = -0x3e - (DAT_14cab3688 + 0x1fU & 0xffffffe0);
    uVar8 = 0xffffffff >> (-(char)DAT_14cab3688 & 0x1fU);
    do {
      bVar13 = uVar10 == 0;
      uVar10 = uVar10 - 1;
      if (bVar13) goto LAB_140b58079;
      iVar9 = iVar9 + 0x20;
      uVar11 = uVar8 & *(uint *)(puVar2 + uVar10 * 4);
      uVar8 = 0xffffffff;
    } while (uVar11 == 0);
    uVar10 = (ulonglong)uVar11 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = -(((uint)lVar12 ^ 0x3f) + iVar9);
  }
LAB_140b58079:
  uVar8 = iVar4 + 1;
  if ((int)uVar8 < (int)DAT_14cab3668) {
    if (0 < DAT_14cab3694) {
      uVar10 = (ulonglong)DAT_14cab3690;
      uVar11 = DAT_14cab3690;
      while (uVar11 != 0xffffffff) {
        lVar12 = (longlong)(int)uVar10;
        if (iVar4 < (int)uVar10) {
          iVar9 = *(int *)(lVar1 + lVar12 * 8);
          uVar11 = *(uint *)(lVar1 + 4 + lVar12 * 8);
          uVar10 = (ulonglong)(int)uVar11;
          if (uVar10 != 0xffffffffffffffff) {
            *(int *)(lVar1 + uVar10 * 8) = iVar9;
          }
          if (iVar9 != -1) {
            *(uint *)(lVar1 + 4 + (longlong)iVar9 * 8) = uVar11;
            uVar11 = DAT_14cab3690;
          }
          DAT_14cab3690 = uVar11;
          DAT_14cab3694 = DAT_14cab3694 + -1;
        }
        else {
          uVar10 = (ulonglong)*(uint *)(lVar1 + 4 + lVar12 * 8);
        }
        uVar11 = (uint)uVar10;
      }
    }
    if (DAT_14cab3668 != uVar8) {
      DAT_14cab3668 = uVar8;
    }
    FUN_144a6134a(&DAT_14cab3670,uVar8,DAT_14cab3688 - uVar8);
  }
  if (DAT_14cab366c != DAT_14cab3668) {
    FUN_140b584e0(&DAT_14cab3660,DAT_14cab3668);
  }
  uVar11 = DAT_14cab3690;
  uVar8 = DAT_14cab3668;
  if (DAT_14cab3694 == 0) {
    uVar11 = DAT_14cab3668 + 1;
    bVar13 = DAT_14cab366c == DAT_14cab3668;
    DAT_14cab3668 = uVar11;
    if (bVar13) {
      FUN_14055ddfe(&DAT_14cab3660,uVar8);
    }
    iVar4 = DAT_14cab3688;
    if (DAT_14cab3688 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = DAT_14cab3688 + 0x1e;
      if (-1 < DAT_14cab3688 + -1) {
        iVar9 = DAT_14cab3688 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    iVar6 = DAT_14cab3688 + 1;
    iVar7 = DAT_14cab3688 + 0x1f;
    if (-1 < DAT_14cab3688) {
      iVar7 = DAT_14cab3688;
    }
    if (iVar7 >> 5 != iVar9) {
      if (DAT_14cab368c <= DAT_14cab3688) {
        if (DAT_14cab3688 + 0x20U < 0xa0) {
          DAT_14cab368c = 0x80;
        }
        else {
          uVar11 = DAT_14cab3688 + 0x20U >> 5;
          if (DAT_14cab368c + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar11) {
              uVar5 = uVar11;
            }
          }
          else {
            uVar5 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar5 << 2,0);
          iVar9 = (int)(uVar10 >> 2);
          DAT_14cab368c = -0x20;
          if ((int)uVar11 <= iVar9) {
            DAT_14cab368c = iVar9 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cab3670,DAT_14cab3688);
        iVar6 = DAT_14cab3688 + 1;
      }
      iVar9 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar9 = iVar6;
      }
      if (iVar6 % 0x20 != 0) {
        puVar2 = &DAT_14cab3670;
        if (DAT_14cab3680 != (undefined *)0x0) {
          puVar2 = DAT_14cab3680;
        }
        bVar3 = -(char)(iVar6 % 0x20);
        DAT_14cab3688 = iVar6;
        *(uint *)(puVar2 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)(puVar2 + (longlong)(iVar9 >> 5) * 4) << (bVar3 & 0x1f)) >>
             (bVar3 & 0x1f);
        iVar6 = DAT_14cab3688;
      }
    }
    DAT_14cab3688 = iVar6;
    lVar1 = (longlong)(int)uVar8;
    puVar2 = &DAT_14cab3670;
    if (DAT_14cab3680 != (undefined *)0x0) {
      puVar2 = DAT_14cab3680;
    }
    bVar3 = (byte)iVar4 & 0x1f;
    *(uint *)(puVar2 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar2 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  }
  else {
    lVar1 = (longlong)(int)DAT_14cab3690;
    DAT_14cab3690 = *(uint *)(DAT_14cab3660 + 4 + lVar1 * 8);
    DAT_14cab3694 = DAT_14cab3694 + -1;
    uVar8 = uVar11;
    if (DAT_14cab3694 != 0) {
      *(undefined4 *)(DAT_14cab3660 + (longlong)(int)DAT_14cab3690 * 8) = 0xffffffff;
    }
  }
  puVar2 = &DAT_14cab3670;
  if (DAT_14cab3680 != (undefined *)0x0) {
    puVar2 = DAT_14cab3680;
  }
  uVar11 = uVar8 + 0x1f;
  if (-1 < (int)uVar8) {
    uVar11 = uVar8;
  }
  *(uint *)(puVar2 + (longlong)((int)uVar11 >> 5) * 4) =
       *(uint *)(puVar2 + (longlong)((int)uVar11 >> 5) * 4) | 1 << ((byte)uVar8 & 0x1f);
  *(undefined8 **)(DAT_14cab3660 + lVar1 * 8) = param_1;
  *(short *)(param_1 + 0x3c) = (short)uVar8;
  iVar9 = DAT_14cab36b0;
  uVar11 = uVar8 & 0xffff;
  iVar4 = uVar11 + 1;
  iVar6 = iVar4 - DAT_14cab36b0;
  if (iVar6 == 0 || iVar4 < DAT_14cab36b0) goto LAB_140b58138;
  if (DAT_14cab36b0 == 0) {
LAB_140b582b4:
    if (DAT_14cab36b4 <= (int)uVar11) {
      if (uVar11 < 0x80) {
        DAT_14cab36b4 = 0x80;
      }
      else {
        uVar8 = uVar11 + 0x20 >> 5;
        if (DAT_14cab36b4 + 0x1fU < 0xa0) {
          uVar11 = 4;
          if (4 < uVar8) {
            uVar11 = uVar8;
          }
        }
        else {
          uVar11 = (uVar8 * 3 >> 3) + uVar8 + 0x10;
        }
        uVar10 = FUN_144a3809e(uVar11 << 2,0);
        iVar4 = (int)(uVar10 >> 2);
        DAT_14cab36b4 = -0x20;
        if ((int)uVar8 <= iVar4) {
          DAT_14cab36b4 = iVar4 << 5;
        }
      }
      FUN_1446efbd8(&DAT_14cab3698,DAT_14cab36b0);
      iVar4 = DAT_14cab36b0 + iVar6;
    }
    iVar7 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar4 % 0x20 != 0) {
      puVar2 = &DAT_14cab3698;
      if (DAT_14cab36a8 != (undefined *)0x0) {
        puVar2 = DAT_14cab36a8;
      }
      bVar3 = -(char)(iVar4 % 0x20);
      DAT_14cab36b0 = iVar4;
      *(uint *)(puVar2 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(puVar2 + (longlong)(iVar7 >> 5) * 4) << (bVar3 & 0x1f)) >> (bVar3 & 0x1f)
      ;
      iVar4 = DAT_14cab36b0;
    }
  }
  else {
    iVar7 = DAT_14cab36b0 + 0x1e;
    if (-1 < DAT_14cab36b0 + -1) {
      iVar7 = DAT_14cab36b0 + -1;
    }
    if ((uVar8 >> 5 & 0x7ff) != iVar7 >> 5) goto LAB_140b582b4;
  }
  DAT_14cab36b0 = iVar4;
  FUN_1447c6044(&DAT_14cab3698,iVar9,iVar6,0);
  uVar8 = (uint)*(ushort *)(param_1 + 0x3c);
LAB_140b58138:
  puVar2 = &DAT_14cab3698;
  if (DAT_14cab36a8 != (undefined *)0x0) {
    puVar2 = DAT_14cab36a8;
  }
  bVar3 = (byte)(uVar8 & 0xffff) & 0x1f;
  *(uint *)(puVar2 + (ulonglong)((uVar8 & 0xffff) >> 5) * 4) =
       *(uint *)(puVar2 + (ulonglong)((uVar8 & 0xffff) >> 5) * 4) &
       (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14cab3658);
  return param_1;
}



// FUNCTION 140b584e0 FUN_140b584e0 body=306 status=ok
// SIG undefined FUN_140b584e0(void)

void FUN_140b584e0(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140b58549;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140b58549:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140b58620 FUN_140b58620 body=158 status=ok
// SIG undefined FUN_140b58620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b58620(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b04c460;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b586be FUN_140b586be body=16077 status=ok
// SIG undefined FUN_140b586be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140b586be(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6,char *param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  double *pdVar19;
  double *pdVar20;
  undefined8 *puVar21;
  double *pdVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  char cVar26;
  float fVar27;
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  double dVar28;
  undefined8 uVar29;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auStack_628 [32];
  undefined1 local_608;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  undefined4 local_550;
  undefined4 local_54c;
  double local_548;
  double dStack_540;
  undefined8 *local_538;
  undefined8 *local_530;
  undefined1 local_528 [16];
  double local_518;
  double dStack_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double local_410 [41];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double adStack_290 [52];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_628;
  local_550 = param_3;
  puVar9 = (undefined8 *)FUN_14001cc68(0x5d0);
  FUN_140b5c6e4(puVar9);
  *puVar9 = &PTR_LAB_14a1e1390;
  local_538 = puVar9 + 0x5c;
  puVar9[0x56] = 0;
  puVar9[0x57] = 0;
  puVar9[0x58] = 0;
  puVar9[0x59] = 0;
  puVar9[0x5a] = 0;
  puVar18 = &DAT_14c846480;
  puVar21 = local_538;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar21 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar21 = puVar21 + 1;
  }
  *(undefined4 *)(puVar9 + 0x68) = 0xffffffff;
  puVar9[0x6d] = 0;
  puVar9[0x6e] = 0;
  puVar9[0x6b] = 0;
  puVar9[0x6c] = 0;
  puVar9[0x69] = 0;
  puVar9[0x6a] = 0;
  dVar44 = DAT_14c8464e8;
  puVar9[0x6f] = DAT_14c8464e0;
  puVar9[0x70] = dVar44;
  puVar9[0x71] = DAT_14c8464f0;
  puVar9[0x74] = DAT_14c8464f0;
  dVar44 = DAT_14c8464e8;
  puVar9[0x72] = DAT_14c8464e0;
  puVar9[0x73] = dVar44;
  memset(puVar9 + 0x75,0,0x220);
  *(byte *)(puVar9 + 4) = *(byte *)(puVar9 + 4) & 0xf7;
  local_478 = param_1[8];
  uStack_470 = param_1[9];
  local_468 = param_1[10];
  puVar9[1] = param_6;
  if (param_2 == 0) {
    cVar26 = true;
  }
  else {
    FUN_140b5cb3a(adStack_290 + 0x23,param_2 + 0x38,&DAT_14c846480);
    FUN_140b5c58c(puVar9 + 0x40,adStack_290 + 0x23);
    if (adStack_290[0x2b] != 0.0) {
      FUN_1400020a8();
    }
    FUN_140074ac0(adStack_290[0x29],(ulonglong)adStack_290[0x2a] & 0xffffffff);
    if (adStack_290[0x29] != 0.0) {
      FUN_1400020a8();
    }
    if (adStack_290[0x27] != 0.0) {
      FUN_1400020a8();
    }
    if (adStack_290[0x25] != 0.0) {
      FUN_1400020a8();
    }
    if (adStack_290[0x23] != 0.0) {
      FUN_1400020a8();
    }
    FUN_140b5c816(puVar9 + 0x40,&local_478);
    cVar26 = *(char *)(param_2 + 0x30) == '\x01';
  }
  bVar1 = param_7[1];
  if (bVar1 == 1) {
    cVar26 = *param_7;
  }
  if (cVar26 == '\0') {
    bVar11 = *(byte *)(puVar9 + 4) & 0xfe;
  }
  else {
    bVar11 = *(byte *)(puVar9 + 4) | 1;
  }
  *(byte *)(puVar9 + 4) = bVar11;
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_2 + 0x150);
    *(byte *)(puVar9 + 4) = bVar1 >> 1 & 2 | bVar11 & 0xfd;
    *(byte *)(puVar9 + 0x4e) = (bVar1 & 0x20) >> 5 ^ 1;
    if ((bVar1 & 0x20) != 0) {
      puVar9[0x4d] = (double)puVar9[0x4f] * 10.0;
    }
    if ((bVar1 & 2) == 0) {
      lVar14 = FUN_14034b308(param_2 + 0x148);
      if (lVar14 == 0) {
        dVar44 = 1.0;
      }
      else {
        fVar27 = *(float *)(lVar14 + 0x3c) * 0.001;
        fVar5 = 9e-05;
        if (9e-05 <= fVar27) {
          fVar5 = fVar27;
        }
        dVar44 = (double)fVar5;
      }
      local_578 = (double)FUN_14499beaa(puVar9 + 0x40,&DAT_14c846510);
      local_578 = local_578 * dVar44;
    }
    else {
      local_578 = (double)*(float *)(param_2 + 0x1e4);
    }
    local_578 = local_578 * 100.0;
    puVar9[0xc] = local_578;
    puVar9[0xd] = local_578;
    puVar9[0xe] = local_578;
    dVar28 = DAT_14c8464e0;
    dVar37 = DAT_14c8464f0;
    dVar44 = DAT_14c8464e8;
    if (9.99999993922529e-09 < local_578) {
      dVar28 = 1.0 / local_578;
      dVar37 = dVar28;
      dVar44 = dVar28;
    }
    puVar9[0x12] = dVar28;
    puVar9[0x13] = dVar44;
    puVar9[0x14] = dVar37;
    uVar29 = FUN_14499beaa(puVar9 + 0x40,&DAT_14c846510);
    local_598._0_8_ = uVar29;
    lVar14 = puVar9[0x42];
    iVar17 = *(int *)(puVar9 + 0x43);
    lVar25 = (longlong)iVar17 * 0x58;
    dVar44 = DAT_14c8464f0;
    dVar28 = DAT_14c8464e0;
    dStack_580 = DAT_14c8464e8;
    if ((longlong)iVar17 != 0) {
      lVar10 = 0;
      do {
        dVar28 = *(double *)(lVar14 + 0x10 + lVar10) + dVar28;
        dStack_580 = dStack_580 + *(double *)(lVar14 + 0x18 + lVar10);
        dVar44 = dVar44 + *(double *)(lVar14 + 0x20 + lVar10);
        lVar10 = lVar10 + 0x58;
      } while (lVar25 - lVar10 != 0);
    }
    lVar10 = puVar9[0x40];
    iVar12 = *(int *)(puVar9 + 0x41);
    lVar16 = (longlong)iVar12;
    if (lVar16 != 0) {
      lVar15 = 0;
      do {
        dVar28 = *(double *)(lVar10 + 0x10 + lVar15) + dVar28;
        dStack_580 = dStack_580 + *(double *)(lVar10 + 0x18 + lVar15);
        dVar44 = dVar44 + *(double *)(lVar10 + 0x20 + lVar15);
        lVar15 = lVar15 + 0x30;
      } while (lVar16 * 0x30 != lVar15);
    }
    iVar2 = *(int *)(puVar9 + 0x45);
    if ((longlong)iVar2 != 0) {
      lVar15 = puVar9[0x44];
      lVar23 = 0;
      do {
        dVar28 = *(double *)(lVar15 + 0x10 + lVar23) + dVar28;
        dStack_580 = dStack_580 + *(double *)(lVar15 + 0x18 + lVar23);
        dVar44 = dVar44 + *(double *)(lVar15 + 0x20 + lVar23);
        lVar23 = lVar23 + 0x50;
      } while ((longlong)iVar2 * 0x50 != lVar23);
    }
    iVar3 = *(int *)(puVar9 + 0x47);
    if ((longlong)iVar3 != 0) {
      lVar15 = puVar9[0x46];
      lVar23 = 0;
      do {
        dVar28 = *(double *)(lVar15 + 0x20 + lVar23) + dVar28;
        dStack_580 = dStack_580 + *(double *)(lVar15 + 0x28 + lVar23);
        dVar44 = dVar44 + *(double *)(lVar15 + 0x30 + lVar23);
        lVar23 = lVar23 + 0x60;
      } while ((longlong)iVar3 * 0x60 != lVar23);
    }
    iVar4 = *(int *)(puVar9 + 0x49);
    if ((longlong)iVar4 != 0) {
      lVar15 = puVar9[0x48];
      lVar23 = 0;
      do {
        dVar28 = *(double *)(lVar15 + 0x10 + lVar23) + dVar28;
        dStack_580 = dStack_580 + *(double *)(lVar15 + 0x18 + lVar23);
        dVar44 = dVar44 + *(double *)(lVar15 + 0x20 + lVar23);
        lVar23 = lVar23 + 0x58;
      } while ((longlong)iVar4 * 0x58 - lVar23 != 0);
    }
    dVar37 = 1.0 / (double)(iVar2 + iVar3 + iVar12 + iVar17 + iVar4);
    local_568 = dVar28 * dVar37 + *(double *)(param_2 + 0x210);
    local_588 = dStack_580 * dVar37 + *(double *)(param_2 + 0x218);
    local_5a8._0_8_ = dVar37 * dVar44 + *(double *)(param_2 + 0x220);
    local_5a8._8_8_ = 0;
    puVar9[0x36] = local_568;
    puVar9[0x37] = local_588;
    puVar9[0x38] = local_5a8._0_8_;
    puVar9[0x39] = 0;
    pdVar19 = (double *)&DAT_14c846400;
    pdVar20 = local_410 + 0x13;
    for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
      *pdVar20 = *pdVar19;
      pdVar19 = pdVar19 + 1;
      pdVar20 = pdVar20 + 1;
    }
    dStack_560 = dStack_580;
    local_54c = param_4;
    local_530 = param_1;
    if (iVar17 != 0) {
      lVar25 = lVar25 + lVar14;
      do {
        dVar44 = *(double *)(lVar14 + 0x50);
        dVar28 = *(double *)(lVar14 + 0x40);
        dVar37 = *(double *)(lVar14 + 0x48);
        dVar39 = DAT_14c846510;
        if (DAT_14c846518 <= DAT_14c846510) {
          dVar39 = DAT_14c846518;
        }
        if (DAT_14c846520 <= dVar39) {
          dVar39 = DAT_14c846520;
        }
        local_5b8 = ((dVar39 * dVar44 * dVar37 * dVar39 * dVar28 * dVar39) / (double)local_598._0_8_
                    ) * local_578;
        dVar51 = local_5b8 * 0.08333333333333333;
        local_5e8 = *(double *)(lVar14 + 0x20);
        local_5d8 = *(double *)(lVar14 + 0x10);
        local_5c8 = *(double *)(lVar14 + 0x18);
        auVar41 = *(undefined1 (*) [16])(lVar14 + 0x28);
        auVar32 = divpd(auVar41,_DAT_1499387d0);
        auVar34._8_8_ = 0;
        auVar34._0_8_ = *(double *)(lVar14 + 0x38);
        auVar34 = divpd(auVar34,_DAT_1499387d0);
        auVar32 = roundpd(auVar32,auVar32,3);
        auVar34 = roundpd(auVar34,auVar34,3);
        dVar48 = (auVar41._0_8_ - auVar32._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar50 = (auVar41._8_8_ - auVar32._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar36 = (*(double *)(lVar14 + 0x38) - auVar34._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        dVar38 = (0.0 - auVar34._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar39 = sin(dVar48);
        dVar46 = sin(dVar50);
        local_5f8 = sin(dVar36);
        sin(dVar38);
        dVar48 = cos(dVar48);
        dVar50 = cos(dVar50);
        dVar36 = cos(dVar36);
        cos(dVar38);
        dVar43 = -(dVar50 * dVar39 * local_5f8) + dVar46 * dVar48 * dVar36;
        dVar45 = dVar46 * dVar39 * local_5f8 + dVar50 * dVar48 * dVar36;
        dVar38 = dVar39 * dVar46 * dVar36 - dVar48 * dVar50 * local_5f8;
        dVar39 = -(dVar39 * dVar50 * dVar36) - dVar48 * dVar46 * local_5f8;
        adStack_290[3] = (dVar44 * dVar44 + dVar37 * dVar37) * dVar51;
        adStack_290[6] = 0.0;
        adStack_290[7] = 0.0;
        adStack_290[4] = 0.0;
        adStack_290[5] = 0.0;
        adStack_290[8] = (dVar28 * dVar28 + dVar44 * dVar44) * dVar51;
        adStack_290[0xb] = 0.0;
        adStack_290[0xc] = 0.0;
        adStack_290[9] = 0.0;
        adStack_290[10] = 0.0;
        adStack_290[0xd] = dVar51 * (dVar37 * dVar37 + dVar28 * dVar28);
        adStack_290[0x10] = 0.0;
        adStack_290[0x11] = 0.0;
        adStack_290[0xe] = 0.0;
        adStack_290[0xf] = 0.0;
        adStack_290[0x12] = 0.0;
        dVar44 = dVar43 * -1.0;
        dVar28 = dVar45 * 1.0;
        lVar10 = 0x10;
        do {
          dVar37 = *(double *)((longlong)adStack_290 + lVar10 + 8);
          dVar46 = *(double *)((longlong)adStack_290 + lVar10 + 0x10);
          dVar48 = *(double *)((longlong)adStack_290 + lVar10 + 0x18);
          dVar50 = *(double *)((longlong)adStack_290 + lVar10 + 0x20);
          dVar36 = dVar46 * dVar43 * -1.0 +
                   dVar38 * dVar50 * 1.0 + dVar45 * dVar37 + dVar39 * dVar48;
          dVar51 = dVar37 * dVar43 * 1.0 +
                   dVar38 * dVar48 * -1.0 + dVar45 * dVar46 + dVar39 * dVar50;
          dVar47 = dVar50 * dVar43 * 1.0 +
                   ((dVar38 * dVar46 * 1.0 + dVar45 * dVar48) - dVar39 * dVar37);
          dVar37 = dVar48 * dVar43 * -1.0 +
                   ((dVar38 * dVar37 * -1.0 + dVar45 * dVar50) - dVar39 * dVar46);
          *(double *)((longlong)adStack_290 + lVar10 + 0x108) =
               dVar47 * -dVar39 * -1.0 + dVar44 * dVar51 + (dVar28 * dVar36 * 1.0 - dVar37 * dVar38)
          ;
          *(double *)((longlong)adStack_290 + lVar10 + 0x110) =
               dVar47 * -dVar38 * 1.0 + dVar28 * dVar51 + (dVar44 * dVar36 * -1.0 - dVar37 * dVar39)
          ;
          *(double *)((longlong)adStack_290 + lVar10 + 0x118) =
               dVar28 * dVar47 * 1.0 + dVar51 * dVar38 + dVar36 * -dVar39 * 1.0 + dVar44 * dVar37;
          *(double *)((longlong)adStack_290 + lVar10 + 0x120) =
               dVar44 * dVar47 * -1.0 + dVar51 * dVar39 + dVar36 * -dVar38 * -1.0 + dVar28 * dVar37;
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != 0x90);
        local_5f8 = (double)local_5a8._0_8_ - local_5e8;
        dStack_5f0 = (double)local_5a8._8_8_;
        local_5e8 = local_588 - local_5c8;
        dStack_5e0 = dStack_580;
        local_5d8 = local_568 - local_5d8;
        dStack_5d0 = dStack_560;
        dVar37 = -dVar38;
        dVar39 = -dVar39;
        dVar49 = dVar39 + dVar39;
        dVar51 = dVar44 + dVar44;
        dVar47 = (dVar37 - dVar38) * dVar37;
        dVar43 = (dVar37 - dVar38) * dVar28;
        dVar46 = 1.0 - (dVar39 * dVar49 + dVar44 * dVar51);
        dVar48 = dVar37 * dVar49 - dVar28 * dVar51;
        dVar45 = dVar49 * dVar28 + dVar51 * dVar37;
        dVar50 = dVar28 * dVar51 + dVar37 * dVar49;
        dVar36 = 1.0 - (dVar44 * dVar51 + dVar47);
        dVar38 = dVar39 * dVar51 - dVar43;
        dVar37 = dVar51 * dVar37 - dVar49 * dVar28;
        dVar43 = dVar43 + dVar39 * dVar51;
        dVar28 = 1.0 - (dVar39 * dVar49 + dVar47);
        dVar44 = adStack_290[0x2a] * 1.0 +
                 adStack_290[0x29] * 0.0 + adStack_290[0x28] * 0.0 + adStack_290[0x27] * 0.0;
        local_410[0x23] =
             DAT_14c8464e0 * adStack_290[0x26] +
             dVar45 * adStack_290[0x25] + dVar48 * adStack_290[0x24] + dVar46 * adStack_290[0x23];
        local_410[0x24] =
             DAT_14c8464e8 * adStack_290[0x26] +
             dVar38 * adStack_290[0x25] + dVar36 * adStack_290[0x24] + dVar50 * adStack_290[0x23];
        local_410[0x25] =
             adStack_290[0x26] * DAT_14c8464f0 +
             adStack_290[0x25] * dVar28 + adStack_290[0x24] * dVar43 + adStack_290[0x23] * dVar37;
        local_410[0x26] =
             adStack_290[0x26] * 1.0 +
             adStack_290[0x25] * 0.0 + adStack_290[0x24] * 0.0 + adStack_290[0x23] * 0.0;
        local_410[0x27] =
             DAT_14c8464e0 * adStack_290[0x2a] +
             dVar45 * adStack_290[0x29] + dVar48 * adStack_290[0x28] + dVar46 * adStack_290[0x27];
        local_410[0x28] =
             DAT_14c8464e8 * adStack_290[0x2a] +
             dVar38 * adStack_290[0x29] + dVar36 * adStack_290[0x28] + dVar50 * adStack_290[0x27];
        local_2c8._8_4_ = SUB84(dVar44,0);
        local_2c8._0_8_ =
             adStack_290[0x2a] * DAT_14c8464f0 +
             adStack_290[0x29] * dVar28 + adStack_290[0x28] * dVar43 + adStack_290[0x27] * dVar37;
        local_2c8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        local_2b8 = DAT_14c8464e0 * adStack_290[0x2e] +
                    dVar45 * adStack_290[0x2d] +
                    dVar48 * adStack_290[0x2c] + dVar46 * adStack_290[0x2b];
        dStack_2b0 = DAT_14c8464e8 * adStack_290[0x2e] +
                     dVar38 * adStack_290[0x2d] +
                     dVar36 * adStack_290[0x2c] + dVar50 * adStack_290[0x2b];
        local_2a8 = adStack_290[0x2e] * DAT_14c8464f0 +
                    adStack_290[0x2d] * dVar28 +
                    adStack_290[0x2c] * dVar43 + adStack_290[0x2b] * dVar37;
        dStack_2a0 = adStack_290[0x2e] * 1.0 +
                     adStack_290[0x2d] * 0.0 + adStack_290[0x2c] * 0.0 + adStack_290[0x2b] * 0.0;
        local_298 = DAT_14c8464e0 * adStack_290[0x32] +
                    dVar45 * adStack_290[0x31] +
                    dVar48 * adStack_290[0x30] + dVar46 * adStack_290[0x2f];
        adStack_290[0] =
             DAT_14c8464e8 * adStack_290[0x32] +
             dVar38 * adStack_290[0x31] + dVar36 * adStack_290[0x30] + dVar50 * adStack_290[0x2f];
        adStack_290[1] =
             DAT_14c8464f0 * adStack_290[0x32] +
             dVar28 * adStack_290[0x31] + dVar43 * adStack_290[0x30] + dVar37 * adStack_290[0x2f];
        adStack_290[2] =
             adStack_290[0x32] * 1.0 +
             adStack_290[0x31] * 0.0 + adStack_290[0x30] * 0.0 + adStack_290[0x2f] * 0.0;
        dVar44 = -local_5d8;
        local_5c8 = local_5e8 * -0.0;
        dStack_5c0 = dStack_580;
        dVar28 = local_5d8 * 0.0;
        adStack_290[0x26] = local_5e8 * 0.0 + (0.0 - local_5f8 * 0.0) + 0.0;
        adStack_290[0x2a] = ((local_5f8 * 0.0 + 0.0) - dVar28) + 0.0;
        adStack_290[0x2e] = (local_5d8 * 0.0 - local_5e8 * 0.0) + 0.0;
        adStack_290[0x2f] = local_5f8 * -0.0 + 0.0 + local_5e8 * 0.0 + 0.0;
        adStack_290[0x30] = local_5f8 * 0.0 + 0.0 + dVar44 * 0.0 + 0.0;
        adStack_290[0x31] = dVar28 + local_5c8 + 0.0;
        adStack_290[0x32] = 0.0;
        adStack_290[0x23] =
             local_5b8 * (local_5e8 * local_5e8 + (0.0 - -local_5f8 * local_5f8) + 0.0);
        adStack_290[0x27] =
             local_5b8 * (((local_5f8 * 0.0 + local_5f8 * -0.0) - local_5e8 * local_5d8) + 0.0);
        adStack_290[0x2b] =
             local_5b8 * ((-local_5f8 * local_5d8 - local_5e8 * 0.0) + local_5e8 * 0.0 + 0.0);
        adStack_290[0x24] =
             (dVar44 * local_5e8 + (local_5f8 * 0.0 - local_5f8 * 0.0) + 0.0) * local_5b8;
        adStack_290[0x28] = (((local_5f8 * local_5f8 + 0.0) - dVar44 * local_5d8) + 0.0) * local_5b8
        ;
        adStack_290[0x2c] =
             ((local_5d8 * 0.0 - local_5f8 * local_5e8) + dVar44 * 0.0 + 0.0) * local_5b8;
        adStack_290[0x25] =
             (local_5e8 * 0.0 + (local_5c8 - local_5f8 * local_5d8) + 0.0) * local_5b8;
        adStack_290[0x29] = (((dVar28 + local_5f8 * -local_5e8) - dVar28) + 0.0) * local_5b8;
        adStack_290[0x2d] = ((local_5d8 * local_5d8 - -local_5e8 * local_5e8) + 0.0) * local_5b8;
        lVar10 = 0x18;
        do {
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x108);
          *(double *)((longlong)adStack_290 + lVar10 + 0x80) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x100) +
               *(double *)((longlong)local_410 + lVar10 + 0x100);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 0x110);
          *(double *)((longlong)adStack_290 + lVar10 + 0x88) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x108) + dVar44;
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x118);
          *(double *)((longlong)adStack_290 + lVar10 + 0x90) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x110) + dVar28;
          *(double *)((longlong)adStack_290 + lVar10 + 0x98) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x118) + dVar44;
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != 0x98);
        pdVar19 = adStack_290 + 0x13;
        pdVar20 = local_410 + 0x23;
        for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar20 = *pdVar19;
          pdVar19 = pdVar19 + 1;
          pdVar20 = pdVar20 + 1;
        }
        lVar10 = 0x18;
        do {
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x88);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 0x108);
          *(double *)((longlong)adStack_290 + lVar10 + 0x100) =
               *(double *)((longlong)local_410 + lVar10 + 0x80) +
               *(double *)((longlong)local_410 + lVar10 + 0x100);
          dVar37 = *(double *)((longlong)local_410 + lVar10 + 0x90);
          dVar39 = *(double *)((longlong)local_410 + lVar10 + 0x110);
          *(double *)((longlong)adStack_290 + lVar10 + 0x108) = dVar44 + dVar28;
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x98);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 0x118);
          *(double *)((longlong)adStack_290 + lVar10 + 0x110) = dVar37 + dVar39;
          *(double *)((longlong)adStack_290 + lVar10 + 0x118) = dVar44 + dVar28;
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != 0x98);
        pdVar19 = adStack_290 + 0x23;
        pdVar20 = local_410 + 0x13;
        for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar20 = *pdVar19;
          pdVar19 = pdVar19 + 1;
          pdVar20 = pdVar20 + 1;
        }
        lVar14 = lVar14 + 0x58;
      } while (lVar14 != lVar25);
      lVar10 = puVar9[0x40];
      iVar12 = *(int *)(puVar9 + 0x41);
      lVar16 = (longlong)iVar12;
    }
    if (iVar12 != 0) {
      lVar14 = lVar16 * 0x30 + lVar10;
      pdVar19 = adStack_290 + 0x23;
      do {
        dVar39 = local_578;
        dVar37 = dStack_580;
        dVar28 = local_588;
        dVar44 = DAT_14c846510;
        if (DAT_14c846518 <= DAT_14c846510) {
          dVar44 = DAT_14c846518;
        }
        if (DAT_14c846520 <= dVar44) {
          dVar44 = DAT_14c846520;
        }
        dVar46 = *(double *)(lVar10 + 0x28);
        dVar44 = pow(dVar44 * dVar46,3.0);
        dVar39 = ((dVar44 * 4.188685417175293) / (double)local_598._0_8_) * dVar39;
        local_410[0x23] = dVar39 * 0.4000000059604645 * dVar46 * dVar46;
        local_5f8 = (double)local_5a8._0_8_ - *(double *)(lVar10 + 0x20);
        dStack_5f0 = (double)local_5a8._8_8_;
        local_5e8 = dVar28 - *(double *)(lVar10 + 0x18);
        local_5b8 = local_568 - *(double *)(lVar10 + 0x10);
        dStack_5b0 = dStack_560;
        local_410[0x26] = 0.0;
        local_410[0x27] = 0.0;
        local_410[0x24] = 0.0;
        local_410[0x25] = 0.0;
        local_2b8 = 0.0;
        dStack_2b0 = 0.0;
        local_2c8 = ZEXT816(0);
        adStack_290[2] = 0.0;
        adStack_290[0] = 0.0;
        adStack_290[1] = 0.0;
        dStack_2a0 = 0.0;
        local_298 = 0.0;
        dStack_5e0 = dVar37;
        local_410[0x28] = local_410[0x23];
        local_2a8 = local_410[0x23];
        FUN_144a613c6(&DAT_14c8463d0,pdVar19,local_410 + 0x23);
        dVar50 = -DAT_14c8463d0;
        dVar36 = -DAT_14c8463d8;
        dVar44 = DAT_14c8463e0 * -1.0;
        dVar28 = DAT_14c8463e8 * 1.0;
        dVar46 = dVar36 + dVar36;
        dVar37 = dVar44 + dVar44;
        dVar48 = (dVar50 - DAT_14c8463d0) * dVar50;
        adStack_290[0x19] = (dVar50 - DAT_14c8463d0) * dVar28;
        adStack_290[0x13] = 1.0 - (dVar36 * dVar46 + dVar44 * dVar37);
        adStack_290[0x17] = dVar50 * dVar46 - dVar28 * dVar37;
        adStack_290[0x1b] = dVar46 * dVar28 + dVar37 * dVar50;
        local_5d8 = DAT_14c8464e0;
        dStack_5d0 = DAT_14c8464e8;
        adStack_290[0x14] = dVar28 * dVar37 + dVar50 * dVar46;
        adStack_290[0x18] = 1.0 - (dVar44 * dVar37 + dVar48);
        adStack_290[0x1c] = dVar36 * dVar37 - adStack_290[0x19];
        adStack_290[0x15] = dVar37 * dVar50 - dVar46 * dVar28;
        adStack_290[0x19] = adStack_290[0x19] + dVar36 * dVar37;
        adStack_290[0x1d] = 1.0 - (dVar36 * dVar46 + dVar48);
        adStack_290[0x16] = 0.0;
        adStack_290[0x1a] = 0.0;
        adStack_290[0x1e] = 0.0;
        adStack_290[0x1f] = DAT_14c8464e0;
        adStack_290[0x20] = DAT_14c8464e8;
        adStack_290[0x21] = DAT_14c8464f0;
        adStack_290[0x22] = 1.0;
        FUN_1447fea8d(local_410 + 3,pdVar19,adStack_290 + 0x13);
        adStack_290[9] = -local_5b8;
        adStack_290[4] = -local_5f8;
        adStack_290[0xb] = -local_5e8;
        adStack_290[0x23] = 0.0;
        adStack_290[0x24] = local_5f8;
        adStack_290[0x26] = 0.0;
        adStack_290[0x28] = 0.0;
        adStack_290[0x29] = local_5b8;
        adStack_290[0x2a] = 0.0;
        adStack_290[0x2b] = local_5e8;
        adStack_290[0x31] = 0.0;
        adStack_290[0x32] = 0.0;
        adStack_290[0x2f] = 0.0;
        adStack_290[0x30] = 0.0;
        adStack_290[0x2d] = 0.0;
        adStack_290[0x2e] = 0.0;
        adStack_290[3] = 0.0;
        adStack_290[5] = local_5e8;
        adStack_290[6] = 0.0;
        adStack_290[7] = local_5f8;
        adStack_290[8] = 0.0;
        adStack_290[10] = 0.0;
        adStack_290[0xc] = local_5b8;
        adStack_290[0x11] = 0.0;
        adStack_290[0x12] = 0.0;
        adStack_290[0xf] = 0.0;
        adStack_290[0x10] = 0.0;
        adStack_290[0xd] = 0.0;
        adStack_290[0xe] = 0.0;
        adStack_290[0x25] = adStack_290[0xb];
        adStack_290[0x27] = adStack_290[4];
        adStack_290[0x2c] = adStack_290[9];
        FUN_1447fea8d(adStack_290 + 0x13,adStack_290 + 3,pdVar19);
        adStack_290[0x13] = adStack_290[0x13] * dVar39;
        adStack_290[0x17] = adStack_290[0x17] * dVar39;
        adStack_290[0x1b] = adStack_290[0x1b] * dVar39;
        adStack_290[0x14] = adStack_290[0x14] * dVar39;
        adStack_290[0x18] = adStack_290[0x18] * dVar39;
        adStack_290[0x1c] = adStack_290[0x1c] * dVar39;
        adStack_290[0x15] = adStack_290[0x15] * dVar39;
        adStack_290[0x19] = adStack_290[0x19] * dVar39;
        adStack_290[0x1d] = dVar39 * adStack_290[0x1d];
        lVar25 = 0x18;
        do {
          dVar44 = *(double *)((longlong)local_410 + lVar25 + 8);
          *(double *)((longlong)adStack_290 + lVar25) =
               *(double *)((longlong)adStack_290 + lVar25 + 0x80) +
               *(double *)((longlong)local_410 + lVar25);
          dVar28 = *(double *)((longlong)local_410 + lVar25 + 0x10);
          *(double *)((longlong)adStack_290 + lVar25 + 8) =
               *(double *)((longlong)adStack_290 + lVar25 + 0x88) + dVar44;
          dVar44 = *(double *)((longlong)local_410 + lVar25 + 0x18);
          *(double *)((longlong)adStack_290 + lVar25 + 0x10) =
               *(double *)((longlong)adStack_290 + lVar25 + 0x90) + dVar28;
          *(double *)((longlong)adStack_290 + lVar25 + 0x18) =
               *(double *)((longlong)adStack_290 + lVar25 + 0x98) + dVar44;
          lVar25 = lVar25 + 0x20;
        } while (lVar25 != 0x98);
        pdVar20 = adStack_290 + 3;
        pdVar22 = local_410 + 3;
        for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
          *pdVar22 = *pdVar20;
          pdVar20 = pdVar20 + 1;
          pdVar22 = pdVar22 + 1;
        }
        lVar25 = 0x18;
        do {
          dVar44 = *(double *)((longlong)local_410 + lVar25 + 0x88);
          dVar28 = *(double *)((longlong)local_410 + lVar25 + 8);
          *(double *)((longlong)adStack_290 + lVar25 + 0x100) =
               *(double *)((longlong)local_410 + lVar25 + 0x80) +
               *(double *)((longlong)local_410 + lVar25);
          dVar37 = *(double *)((longlong)local_410 + lVar25 + 0x90);
          dVar39 = *(double *)((longlong)local_410 + lVar25 + 0x10);
          *(double *)((longlong)adStack_290 + lVar25 + 0x108) = dVar44 + dVar28;
          dVar44 = *(double *)((longlong)local_410 + lVar25 + 0x98);
          dVar28 = *(double *)((longlong)local_410 + lVar25 + 0x18);
          *(double *)((longlong)adStack_290 + lVar25 + 0x110) = dVar37 + dVar39;
          *(double *)((longlong)adStack_290 + lVar25 + 0x118) = dVar44 + dVar28;
          lVar25 = lVar25 + 0x20;
        } while (lVar25 != 0x98);
        pdVar20 = pdVar19;
        pdVar22 = local_410 + 0x13;
        for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
          *pdVar22 = *pdVar20;
          pdVar20 = pdVar20 + 1;
          pdVar22 = pdVar22 + 1;
        }
        lVar10 = lVar10 + 0x30;
      } while (lVar10 != lVar14);
    }
    if ((longlong)*(int *)(puVar9 + 0x45) != 0) {
      lVar14 = puVar9[0x44];
      lVar25 = (longlong)*(int *)(puVar9 + 0x45) * 0x50 + lVar14;
      do {
        dVar44 = *(double *)(lVar14 + 0x40);
        dVar28 = *(double *)(lVar14 + 0x48);
        dVar37 = DAT_14c846510;
        if (DAT_14c846518 <= DAT_14c846510) {
          dVar37 = DAT_14c846518;
        }
        if (DAT_14c846520 <= dVar37) {
          dVar37 = DAT_14c846520;
        }
        dVar39 = dVar44 * dVar37;
        dVar37 = (dVar39 * 1.333299994468689 + dVar37 * dVar28) *
                 dVar39 * dVar39 * 3.1415927410125732;
        local_5b8 = (dVar37 / (double)local_598._0_8_) * local_578;
        dVar36 = ((dVar44 * 3.1415927410125732 * dVar44 * dVar28) / dVar37) * local_5b8;
        dVar38 = ((dVar44 * 4.188790321350098 * dVar44 * dVar44) / dVar37) * local_5b8;
        dVar43 = ((dVar44 + dVar44) * dVar44) / 5.0;
        dVar45 = (dVar44 * dVar44 * 0.25 + (dVar28 * dVar28) / 12.0) * dVar36 +
                 (dVar28 * 3.0 * dVar44 * 0.125 + dVar28 * dVar28 * 0.5 + dVar43) * dVar38;
        local_5e8 = *(double *)(lVar14 + 0x20);
        local_5d8 = *(double *)(lVar14 + 0x10);
        auVar41 = *(undefined1 (*) [16])(lVar14 + 0x28);
        auVar32 = divpd(auVar41,_DAT_1499387d0);
        auVar32 = roundpd(auVar32,auVar32,3);
        auVar33._8_8_ = 0;
        auVar33._0_8_ = *(double *)(lVar14 + 0x38);
        auVar34 = divpd(auVar33,_DAT_1499387d0);
        auVar34 = roundpd(auVar34,auVar34,3);
        local_5c8 = *(double *)(lVar14 + 0x18);
        dVar46 = (auVar41._0_8_ - auVar32._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar48 = (auVar41._8_8_ - auVar32._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar50 = (*(double *)(lVar14 + 0x38) - auVar34._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        dVar51 = (0.0 - auVar34._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar28 = sin(dVar46);
        dVar37 = sin(dVar48);
        dVar39 = sin(dVar50);
        sin(dVar51);
        dVar46 = cos(dVar46);
        dVar48 = cos(dVar48);
        dVar50 = cos(dVar50);
        cos(dVar51);
        dVar47 = -(dVar48 * dVar28 * dVar39) + dVar37 * dVar46 * dVar50;
        dVar49 = dVar37 * dVar28 * dVar39 + dVar48 * dVar46 * dVar50;
        dVar51 = dVar28 * dVar37 * dVar50 - dVar46 * dVar48 * dVar39;
        dVar28 = -(dVar28 * dVar48 * dVar50) - dVar46 * dVar37 * dVar39;
        adStack_290[3] = dVar45;
        adStack_290[6] = 0.0;
        adStack_290[7] = 0.0;
        adStack_290[4] = 0.0;
        adStack_290[5] = 0.0;
        adStack_290[8] = dVar45;
        adStack_290[0xb] = 0.0;
        adStack_290[0xc] = 0.0;
        adStack_290[9] = 0.0;
        adStack_290[10] = 0.0;
        adStack_290[0xd] = dVar44 * dVar44 * 0.5 * dVar36 + dVar43 * dVar38;
        adStack_290[0x10] = 0.0;
        adStack_290[0x11] = 0.0;
        adStack_290[0xe] = 0.0;
        adStack_290[0xf] = 0.0;
        adStack_290[0x12] = 0.0;
        dVar44 = dVar47 * -1.0;
        dVar37 = dVar49 * 1.0;
        lVar10 = 0x10;
        do {
          dVar39 = *(double *)((longlong)adStack_290 + lVar10 + 8);
          dVar46 = *(double *)((longlong)adStack_290 + lVar10 + 0x10);
          dVar48 = *(double *)((longlong)adStack_290 + lVar10 + 0x18);
          dVar50 = *(double *)((longlong)adStack_290 + lVar10 + 0x20);
          dVar36 = dVar46 * dVar47 * -1.0 +
                   dVar51 * dVar50 * 1.0 + dVar49 * dVar39 + dVar28 * dVar48;
          dVar38 = dVar39 * dVar47 * 1.0 +
                   dVar51 * dVar48 * -1.0 + dVar49 * dVar46 + dVar28 * dVar50;
          dVar43 = dVar50 * dVar47 * 1.0 +
                   ((dVar51 * dVar46 * 1.0 + dVar49 * dVar48) - dVar28 * dVar39);
          dVar39 = dVar48 * dVar47 * -1.0 +
                   ((dVar51 * dVar39 * -1.0 + dVar49 * dVar50) - dVar28 * dVar46);
          *(double *)((longlong)adStack_290 + lVar10 + 0x108) =
               dVar43 * -dVar28 * -1.0 + dVar44 * dVar38 + (dVar37 * dVar36 * 1.0 - dVar39 * dVar51)
          ;
          *(double *)((longlong)adStack_290 + lVar10 + 0x110) =
               dVar43 * -dVar51 * 1.0 + dVar37 * dVar38 + (dVar44 * dVar36 * -1.0 - dVar39 * dVar28)
          ;
          *(double *)((longlong)adStack_290 + lVar10 + 0x118) =
               dVar37 * dVar43 * 1.0 + dVar38 * dVar51 + dVar36 * -dVar28 * 1.0 + dVar44 * dVar39;
          *(double *)((longlong)adStack_290 + lVar10 + 0x120) =
               dVar44 * dVar43 * -1.0 + dVar38 * dVar28 + dVar36 * -dVar51 * -1.0 + dVar37 * dVar39;
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != 0x90);
        local_5f8 = (double)local_5a8._0_8_ - local_5e8;
        dStack_5f0 = (double)local_5a8._8_8_;
        local_5e8 = local_588 - local_5c8;
        dStack_5e0 = dStack_580;
        local_5d8 = local_568 - local_5d8;
        dStack_5d0 = dStack_560;
        dVar39 = -dVar51;
        dVar28 = -dVar28;
        dVar49 = dVar28 + dVar28;
        dVar43 = dVar44 + dVar44;
        dVar47 = (dVar39 - dVar51) * dVar39;
        dVar51 = (dVar39 - dVar51) * dVar37;
        dVar46 = 1.0 - (dVar28 * dVar49 + dVar44 * dVar43);
        dVar48 = dVar39 * dVar49 - dVar37 * dVar43;
        dVar45 = dVar49 * dVar37 + dVar43 * dVar39;
        dVar50 = dVar37 * dVar43 + dVar39 * dVar49;
        dVar36 = 1.0 - (dVar44 * dVar43 + dVar47);
        dVar38 = dVar28 * dVar43 - dVar51;
        dVar37 = dVar43 * dVar39 - dVar49 * dVar37;
        dVar51 = dVar51 + dVar28 * dVar43;
        dVar28 = 1.0 - (dVar28 * dVar49 + dVar47);
        dVar44 = adStack_290[0x2a] * 1.0 +
                 adStack_290[0x29] * 0.0 + adStack_290[0x28] * 0.0 + adStack_290[0x27] * 0.0;
        local_410[0x23] =
             DAT_14c8464e0 * adStack_290[0x26] +
             dVar45 * adStack_290[0x25] + dVar48 * adStack_290[0x24] + dVar46 * adStack_290[0x23];
        local_410[0x24] =
             DAT_14c8464e8 * adStack_290[0x26] +
             dVar38 * adStack_290[0x25] + dVar36 * adStack_290[0x24] + dVar50 * adStack_290[0x23];
        local_410[0x25] =
             adStack_290[0x26] * DAT_14c8464f0 +
             adStack_290[0x25] * dVar28 + adStack_290[0x24] * dVar51 + adStack_290[0x23] * dVar37;
        local_410[0x26] =
             adStack_290[0x26] * 1.0 +
             adStack_290[0x25] * 0.0 + adStack_290[0x24] * 0.0 + adStack_290[0x23] * 0.0;
        local_410[0x27] =
             DAT_14c8464e0 * adStack_290[0x2a] +
             dVar45 * adStack_290[0x29] + dVar48 * adStack_290[0x28] + dVar46 * adStack_290[0x27];
        local_410[0x28] =
             DAT_14c8464e8 * adStack_290[0x2a] +
             dVar38 * adStack_290[0x29] + dVar36 * adStack_290[0x28] + dVar50 * adStack_290[0x27];
        local_2c8._8_4_ = SUB84(dVar44,0);
        local_2c8._0_8_ =
             adStack_290[0x2a] * DAT_14c8464f0 +
             adStack_290[0x29] * dVar28 + adStack_290[0x28] * dVar51 + adStack_290[0x27] * dVar37;
        local_2c8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        local_2b8 = DAT_14c8464e0 * adStack_290[0x2e] +
                    dVar45 * adStack_290[0x2d] +
                    dVar48 * adStack_290[0x2c] + dVar46 * adStack_290[0x2b];
        dStack_2b0 = DAT_14c8464e8 * adStack_290[0x2e] +
                     dVar38 * adStack_290[0x2d] +
                     dVar36 * adStack_290[0x2c] + dVar50 * adStack_290[0x2b];
        local_2a8 = adStack_290[0x2e] * DAT_14c8464f0 +
                    adStack_290[0x2d] * dVar28 +
                    adStack_290[0x2c] * dVar51 + adStack_290[0x2b] * dVar37;
        dStack_2a0 = adStack_290[0x2e] * 1.0 +
                     adStack_290[0x2d] * 0.0 + adStack_290[0x2c] * 0.0 + adStack_290[0x2b] * 0.0;
        local_298 = DAT_14c8464e0 * adStack_290[0x32] +
                    dVar45 * adStack_290[0x31] +
                    dVar48 * adStack_290[0x30] + dVar46 * adStack_290[0x2f];
        adStack_290[0] =
             DAT_14c8464e8 * adStack_290[0x32] +
             dVar38 * adStack_290[0x31] + dVar36 * adStack_290[0x30] + dVar50 * adStack_290[0x2f];
        adStack_290[1] =
             DAT_14c8464f0 * adStack_290[0x32] +
             dVar28 * adStack_290[0x31] + dVar51 * adStack_290[0x30] + dVar37 * adStack_290[0x2f];
        adStack_290[2] =
             adStack_290[0x32] * 1.0 +
             adStack_290[0x31] * 0.0 + adStack_290[0x30] * 0.0 + adStack_290[0x2f] * 0.0;
        dVar44 = -local_5d8;
        local_5c8 = local_5e8 * -0.0;
        dStack_5c0 = dStack_580;
        dVar28 = local_5d8 * 0.0;
        adStack_290[0x26] = local_5e8 * 0.0 + (0.0 - local_5f8 * 0.0) + 0.0;
        adStack_290[0x2a] = ((local_5f8 * 0.0 + 0.0) - dVar28) + 0.0;
        adStack_290[0x2e] = (local_5d8 * 0.0 - local_5e8 * 0.0) + 0.0;
        adStack_290[0x2f] = local_5f8 * -0.0 + 0.0 + local_5e8 * 0.0 + 0.0;
        adStack_290[0x30] = local_5f8 * 0.0 + 0.0 + dVar44 * 0.0 + 0.0;
        adStack_290[0x31] = dVar28 + local_5c8 + 0.0;
        adStack_290[0x32] = 0.0;
        adStack_290[0x23] =
             local_5b8 * (local_5e8 * local_5e8 + (0.0 - -local_5f8 * local_5f8) + 0.0);
        adStack_290[0x27] =
             local_5b8 * (((local_5f8 * 0.0 + local_5f8 * -0.0) - local_5e8 * local_5d8) + 0.0);
        adStack_290[0x2b] =
             local_5b8 * ((-local_5f8 * local_5d8 - local_5e8 * 0.0) + local_5e8 * 0.0 + 0.0);
        adStack_290[0x24] =
             (dVar44 * local_5e8 + (local_5f8 * 0.0 - local_5f8 * 0.0) + 0.0) * local_5b8;
        adStack_290[0x28] = (((local_5f8 * local_5f8 + 0.0) - dVar44 * local_5d8) + 0.0) * local_5b8
        ;
        adStack_290[0x2c] =
             ((local_5d8 * 0.0 - local_5f8 * local_5e8) + dVar44 * 0.0 + 0.0) * local_5b8;
        adStack_290[0x25] =
             (local_5e8 * 0.0 + (local_5c8 - local_5f8 * local_5d8) + 0.0) * local_5b8;
        adStack_290[0x29] = (((dVar28 + local_5f8 * -local_5e8) - dVar28) + 0.0) * local_5b8;
        adStack_290[0x2d] = ((local_5d8 * local_5d8 - -local_5e8 * local_5e8) + 0.0) * local_5b8;
        lVar10 = 0x18;
        do {
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x108);
          *(double *)((longlong)adStack_290 + lVar10 + 0x80) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x100) +
               *(double *)((longlong)local_410 + lVar10 + 0x100);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 0x110);
          *(double *)((longlong)adStack_290 + lVar10 + 0x88) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x108) + dVar44;
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x118);
          *(double *)((longlong)adStack_290 + lVar10 + 0x90) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x110) + dVar28;
          *(double *)((longlong)adStack_290 + lVar10 + 0x98) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x118) + dVar44;
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != 0x98);
        pdVar19 = adStack_290 + 0x13;
        pdVar20 = local_410 + 0x23;
        for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar20 = *pdVar19;
          pdVar19 = pdVar19 + 1;
          pdVar20 = pdVar20 + 1;
        }
        lVar10 = 0x18;
        do {
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x88);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 0x108);
          *(double *)((longlong)adStack_290 + lVar10 + 0x100) =
               *(double *)((longlong)local_410 + lVar10 + 0x80) +
               *(double *)((longlong)local_410 + lVar10 + 0x100);
          dVar37 = *(double *)((longlong)local_410 + lVar10 + 0x90);
          dVar39 = *(double *)((longlong)local_410 + lVar10 + 0x110);
          *(double *)((longlong)adStack_290 + lVar10 + 0x108) = dVar44 + dVar28;
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x98);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 0x118);
          *(double *)((longlong)adStack_290 + lVar10 + 0x110) = dVar37 + dVar39;
          *(double *)((longlong)adStack_290 + lVar10 + 0x118) = dVar44 + dVar28;
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != 0x98);
        pdVar19 = adStack_290 + 0x23;
        pdVar20 = local_410 + 0x13;
        for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar20 = *pdVar19;
          pdVar19 = pdVar19 + 1;
          pdVar20 = pdVar20 + 1;
        }
        lVar14 = lVar14 + 0x50;
      } while (lVar14 != lVar25);
    }
    if ((longlong)*(int *)(puVar9 + 0x47) != 0) {
      lVar14 = puVar9[0x46];
      lVar25 = (longlong)*(int *)(puVar9 + 0x47) * 0x60 + lVar14;
      pdVar19 = adStack_290 + 0x23;
      do {
        dVar44 = local_578;
        local_608 = 0;
        FUN_14711cf28(lVar14,&local_438,&DAT_14c846480,0x3ff0000000000000);
        dVar46 = (local_410[0] - local_428) * 0.5;
        dVar28 = (local_418 - dStack_430) * 0.5;
        dVar39 = (dStack_420 - local_438) * 0.5;
        dVar39 = dVar39 * dVar39;
        dVar28 = dVar28 * dVar28;
        dVar46 = dVar46 * dVar46;
        dVar37 = (double)FUN_140418f70(lVar14,0x3ff0000000000000);
        dVar44 = (dVar37 / (double)local_598._0_8_) * dVar44;
        local_2a8 = dVar44 * 0.08333333333333333;
        local_410[0x23] = (dVar46 + dVar28) * local_2a8;
        local_410[0x28] = (dVar39 + dVar46) * local_2a8;
        local_2a8 = local_2a8 * (dVar28 + dVar39);
        local_5f8 = (double)local_5a8._0_8_ - *(double *)(lVar14 + 0x30);
        dStack_5f0 = (double)local_5a8._8_8_;
        local_5e8 = local_588 - *(double *)(lVar14 + 0x28);
        dStack_5e0 = dStack_580;
        local_5b8 = local_568 - *(double *)(lVar14 + 0x20);
        dStack_5b0 = dStack_560;
        local_458 = *(double *)(lVar14 + 0x40);
        dStack_450 = *(double *)(lVar14 + 0x48);
        local_448 = *(double *)(lVar14 + 0x50);
        dStack_440 = *(double *)(lVar14 + 0x58);
        local_410[0x24] = 0.0;
        local_410[0x25] = 0.0;
        local_410[0x26] = 0.0;
        local_410[0x27] = 0.0;
        local_2c8 = ZEXT816(0);
        local_2b8 = 0.0;
        dStack_2b0 = 0.0;
        dStack_2a0 = 0.0;
        local_298 = 0.0;
        adStack_290[0] = 0.0;
        adStack_290[1] = 0.0;
        adStack_290[2] = 0.0;
        FUN_144a613c6(&local_458,pdVar19,local_410 + 0x23);
        dVar48 = -local_458;
        dVar50 = -dStack_450;
        dVar28 = local_448 * -1.0;
        dVar37 = dStack_440 * 1.0;
        dVar36 = dVar50 + dVar50;
        dVar39 = dVar28 + dVar28;
        dVar46 = (dVar48 - local_458) * dVar48;
        adStack_290[0x19] = (dVar48 - local_458) * dVar37;
        adStack_290[0x13] = 1.0 - (dVar50 * dVar36 + dVar28 * dVar39);
        adStack_290[0x17] = dVar48 * dVar36 - dVar37 * dVar39;
        adStack_290[0x1b] = dVar36 * dVar37 + dVar39 * dVar48;
        local_5d8 = DAT_14c8464e0;
        dStack_5d0 = DAT_14c8464e8;
        adStack_290[0x14] = dVar37 * dVar39 + dVar48 * dVar36;
        adStack_290[0x18] = 1.0 - (dVar28 * dVar39 + dVar46);
        adStack_290[0x1c] = dVar50 * dVar39 - adStack_290[0x19];
        adStack_290[0x15] = dVar39 * dVar48 - dVar36 * dVar37;
        adStack_290[0x19] = adStack_290[0x19] + dVar50 * dVar39;
        adStack_290[0x1d] = 1.0 - (dVar50 * dVar36 + dVar46);
        adStack_290[0x16] = 0.0;
        adStack_290[0x1a] = 0.0;
        adStack_290[0x1e] = 0.0;
        adStack_290[0x1f] = DAT_14c8464e0;
        adStack_290[0x20] = DAT_14c8464e8;
        adStack_290[0x21] = DAT_14c8464f0;
        adStack_290[0x22] = 1.0;
        FUN_1447fea8d(local_410 + 3,pdVar19,adStack_290 + 0x13);
        adStack_290[9] = -local_5b8;
        adStack_290[4] = -local_5f8;
        adStack_290[0xb] = -local_5e8;
        adStack_290[0x23] = 0.0;
        adStack_290[0x24] = local_5f8;
        adStack_290[0x26] = 0.0;
        adStack_290[0x28] = 0.0;
        adStack_290[0x29] = local_5b8;
        adStack_290[0x2a] = 0.0;
        adStack_290[0x2b] = local_5e8;
        adStack_290[0x2d] = 0.0;
        adStack_290[0x2e] = 0.0;
        adStack_290[0x2f] = 0.0;
        adStack_290[0x30] = 0.0;
        adStack_290[0x31] = 0.0;
        adStack_290[0x32] = 0.0;
        adStack_290[3] = 0.0;
        adStack_290[5] = local_5e8;
        adStack_290[6] = 0.0;
        adStack_290[7] = local_5f8;
        adStack_290[8] = 0.0;
        adStack_290[10] = 0.0;
        adStack_290[0xc] = local_5b8;
        adStack_290[0xd] = 0.0;
        adStack_290[0xe] = 0.0;
        adStack_290[0xf] = 0.0;
        adStack_290[0x10] = 0.0;
        adStack_290[0x11] = 0.0;
        adStack_290[0x12] = 0.0;
        adStack_290[0x25] = adStack_290[0xb];
        adStack_290[0x27] = adStack_290[4];
        adStack_290[0x2c] = adStack_290[9];
        FUN_1447fea8d(adStack_290 + 0x13,adStack_290 + 3,pdVar19);
        adStack_290[0x13] = adStack_290[0x13] * dVar44;
        adStack_290[0x17] = adStack_290[0x17] * dVar44;
        adStack_290[0x1b] = adStack_290[0x1b] * dVar44;
        adStack_290[0x14] = adStack_290[0x14] * dVar44;
        adStack_290[0x18] = adStack_290[0x18] * dVar44;
        adStack_290[0x1c] = adStack_290[0x1c] * dVar44;
        adStack_290[0x15] = adStack_290[0x15] * dVar44;
        adStack_290[0x19] = adStack_290[0x19] * dVar44;
        adStack_290[0x1d] = dVar44 * adStack_290[0x1d];
        lVar10 = 0x18;
        do {
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 8);
          *(double *)((longlong)adStack_290 + lVar10) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x80) +
               *(double *)((longlong)local_410 + lVar10);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 0x10);
          *(double *)((longlong)adStack_290 + lVar10 + 8) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x88) + dVar44;
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x18);
          *(double *)((longlong)adStack_290 + lVar10 + 0x10) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x90) + dVar28;
          *(double *)((longlong)adStack_290 + lVar10 + 0x18) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x98) + dVar44;
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != 0x98);
        pdVar20 = adStack_290 + 3;
        pdVar22 = local_410 + 3;
        for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar22 = *pdVar20;
          pdVar20 = pdVar20 + 1;
          pdVar22 = pdVar22 + 1;
        }
        lVar10 = 0x18;
        do {
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x88);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 8);
          *(double *)((longlong)adStack_290 + lVar10 + 0x100) =
               *(double *)((longlong)local_410 + lVar10 + 0x80) +
               *(double *)((longlong)local_410 + lVar10);
          dVar37 = *(double *)((longlong)local_410 + lVar10 + 0x90);
          dVar39 = *(double *)((longlong)local_410 + lVar10 + 0x10);
          *(double *)((longlong)adStack_290 + lVar10 + 0x108) = dVar44 + dVar28;
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x98);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 0x18);
          *(double *)((longlong)adStack_290 + lVar10 + 0x110) = dVar37 + dVar39;
          *(double *)((longlong)adStack_290 + lVar10 + 0x118) = dVar44 + dVar28;
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != 0x98);
        pdVar20 = pdVar19;
        pdVar22 = local_410 + 0x13;
        for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar22 = *pdVar20;
          pdVar20 = pdVar20 + 1;
          pdVar22 = pdVar22 + 1;
        }
        lVar14 = lVar14 + 0x60;
      } while (lVar14 != lVar25);
    }
    if ((longlong)*(int *)(puVar9 + 0x49) != 0) {
      lVar14 = puVar9[0x48];
      lVar25 = (longlong)*(int *)(puVar9 + 0x49) * 0x58 + lVar14;
      pdVar19 = adStack_290 + 0x23;
      do {
        dVar46 = local_578;
        dVar44 = *(double *)(lVar14 + 0x40);
        dVar28 = *(double *)(lVar14 + 0x48);
        dVar37 = *(double *)(lVar14 + 0x50);
        dVar39 = dVar44 * dVar44;
        dVar45 = dVar28 * dVar28;
        dVar48 = (double)FUN_14711d828(lVar14);
        dVar50 = (dVar37 * dVar37) / 12.0;
        dVar36 = ((dVar44 + dVar44) * dVar44) / 5.0;
        dVar38 = dVar37 * dVar37 * 0.5;
        dVar47 = ((dVar28 + dVar28) * dVar28) / 5.0;
        dVar46 = (dVar48 / (double)local_598._0_8_) * dVar46;
        dVar51 = (((dVar44 * dVar28 + dVar39 + dVar45) * 1.0471975803375244 * dVar37) / dVar48) *
                 dVar46;
        dVar43 = ((dVar44 * 4.188790321350098 * dVar44 * dVar44) / dVar48) * dVar46;
        dVar48 = ((dVar28 * 4.188790321350098 * dVar28 * dVar28) / dVar48) * dVar46;
        dVar44 = (dVar37 * 3.0 * dVar28 * 0.125 + dVar38 + dVar47 +
                 dVar44 * dVar37 * 3.0 * 0.125 + dVar36 + dVar38) * 0.25;
        local_5f8 = (double)local_5a8._0_8_ - *(double *)(lVar14 + 0x20);
        dStack_5f0 = (double)local_5a8._8_8_;
        dVar44 = dVar44 * dVar48 +
                 (dVar45 * 0.25 + dVar50 + dVar39 * 0.25 + dVar50) * 0.25 * dVar51 + dVar43 * dVar44
        ;
        local_5e8 = local_588 - *(double *)(lVar14 + 0x18);
        dStack_5e0 = dStack_580;
        local_5b8 = local_568 - *(double *)(lVar14 + 0x10);
        dStack_5b0 = dStack_560;
        FUN_144a7484c(lVar14 + 0x28,pdVar19);
        local_428 = adStack_290[0x25];
        dStack_420 = adStack_290[0x26];
        local_438 = adStack_290[0x23];
        dStack_430 = adStack_290[0x24];
        local_410[0x24] = 0.0;
        local_410[0x25] = 0.0;
        local_410[0x26] = 0.0;
        local_410[0x27] = 0.0;
        local_2c8 = ZEXT816(0);
        local_2b8 = 0.0;
        dStack_2b0 = 0.0;
        dStack_2a0 = 0.0;
        local_298 = 0.0;
        adStack_290[0] = 0.0;
        adStack_290[1] = 0.0;
        adStack_290[2] = 0.0;
        local_410[0x23] = dVar44;
        local_410[0x28] = dVar44;
        local_2a8 = dVar47 * dVar48 + (dVar45 + dVar39) * 0.25 * dVar51 + dVar36 * dVar43;
        FUN_144a613c6(&local_438,pdVar19,local_410 + 0x23);
        dVar39 = -local_438;
        dVar48 = -dStack_430;
        dVar44 = local_428 * -1.0;
        dVar28 = dStack_420 * 1.0;
        dVar50 = dVar48 + dVar48;
        dVar36 = dVar44 + dVar44;
        dVar37 = (dVar39 - local_438) * dVar39;
        adStack_290[0x19] = (dVar39 - local_438) * dVar28;
        adStack_290[0x13] = 1.0 - (dVar48 * dVar50 + dVar44 * dVar36);
        adStack_290[0x17] = dVar39 * dVar50 - dVar28 * dVar36;
        adStack_290[0x1b] = dVar50 * dVar28 + dVar36 * dVar39;
        local_5d8 = DAT_14c8464e0;
        dStack_5d0 = DAT_14c8464e8;
        adStack_290[0x14] = dVar28 * dVar36 + dVar39 * dVar50;
        adStack_290[0x18] = 1.0 - (dVar44 * dVar36 + dVar37);
        adStack_290[0x1c] = dVar48 * dVar36 - adStack_290[0x19];
        adStack_290[0x15] = dVar36 * dVar39 - dVar50 * dVar28;
        adStack_290[0x19] = adStack_290[0x19] + dVar48 * dVar36;
        adStack_290[0x1d] = 1.0 - (dVar48 * dVar50 + dVar37);
        adStack_290[0x16] = 0.0;
        adStack_290[0x1a] = 0.0;
        adStack_290[0x1e] = 0.0;
        adStack_290[0x1f] = DAT_14c8464e0;
        adStack_290[0x20] = DAT_14c8464e8;
        adStack_290[0x21] = DAT_14c8464f0;
        adStack_290[0x22] = 1.0;
        FUN_1447fea8d(local_410 + 3,pdVar19,adStack_290 + 0x13);
        adStack_290[9] = -local_5b8;
        adStack_290[4] = -local_5f8;
        adStack_290[0xb] = -local_5e8;
        adStack_290[0x23] = 0.0;
        adStack_290[0x24] = local_5f8;
        adStack_290[0x26] = 0.0;
        adStack_290[0x28] = 0.0;
        adStack_290[0x29] = local_5b8;
        adStack_290[0x2a] = 0.0;
        adStack_290[0x2b] = local_5e8;
        adStack_290[0x2d] = 0.0;
        adStack_290[0x2e] = 0.0;
        adStack_290[0x2f] = 0.0;
        adStack_290[0x30] = 0.0;
        adStack_290[0x31] = 0.0;
        adStack_290[0x32] = 0.0;
        adStack_290[3] = 0.0;
        adStack_290[5] = local_5e8;
        adStack_290[6] = 0.0;
        adStack_290[7] = local_5f8;
        adStack_290[8] = 0.0;
        adStack_290[10] = 0.0;
        adStack_290[0xc] = local_5b8;
        adStack_290[0xd] = 0.0;
        adStack_290[0xe] = 0.0;
        adStack_290[0xf] = 0.0;
        adStack_290[0x10] = 0.0;
        adStack_290[0x11] = 0.0;
        adStack_290[0x12] = 0.0;
        adStack_290[0x25] = adStack_290[0xb];
        adStack_290[0x27] = adStack_290[4];
        adStack_290[0x2c] = adStack_290[9];
        FUN_1447fea8d(adStack_290 + 0x13,adStack_290 + 3,pdVar19);
        adStack_290[0x13] = adStack_290[0x13] * dVar46;
        adStack_290[0x17] = adStack_290[0x17] * dVar46;
        adStack_290[0x1b] = adStack_290[0x1b] * dVar46;
        adStack_290[0x14] = adStack_290[0x14] * dVar46;
        adStack_290[0x18] = adStack_290[0x18] * dVar46;
        adStack_290[0x1c] = adStack_290[0x1c] * dVar46;
        adStack_290[0x15] = adStack_290[0x15] * dVar46;
        adStack_290[0x19] = adStack_290[0x19] * dVar46;
        adStack_290[0x1d] = dVar46 * adStack_290[0x1d];
        lVar10 = 0x18;
        do {
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 8);
          *(double *)((longlong)adStack_290 + lVar10) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x80) +
               *(double *)((longlong)local_410 + lVar10);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 0x10);
          *(double *)((longlong)adStack_290 + lVar10 + 8) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x88) + dVar44;
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x18);
          *(double *)((longlong)adStack_290 + lVar10 + 0x10) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x90) + dVar28;
          *(double *)((longlong)adStack_290 + lVar10 + 0x18) =
               *(double *)((longlong)adStack_290 + lVar10 + 0x98) + dVar44;
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != 0x98);
        pdVar20 = adStack_290 + 3;
        pdVar22 = local_410 + 3;
        for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar22 = *pdVar20;
          pdVar20 = pdVar20 + 1;
          pdVar22 = pdVar22 + 1;
        }
        lVar10 = 0x18;
        do {
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x88);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 8);
          *(double *)((longlong)adStack_290 + lVar10 + 0x100) =
               *(double *)((longlong)local_410 + lVar10 + 0x80) +
               *(double *)((longlong)local_410 + lVar10);
          dVar37 = *(double *)((longlong)local_410 + lVar10 + 0x90);
          dVar39 = *(double *)((longlong)local_410 + lVar10 + 0x10);
          *(double *)((longlong)adStack_290 + lVar10 + 0x108) = dVar44 + dVar28;
          dVar44 = *(double *)((longlong)local_410 + lVar10 + 0x98);
          dVar28 = *(double *)((longlong)local_410 + lVar10 + 0x18);
          *(double *)((longlong)adStack_290 + lVar10 + 0x110) = dVar37 + dVar39;
          *(double *)((longlong)adStack_290 + lVar10 + 0x118) = dVar44 + dVar28;
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != 0x98);
        pdVar20 = pdVar19;
        pdVar22 = local_410 + 0x13;
        for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar22 = *pdVar20;
          pdVar20 = pdVar20 + 1;
          pdVar22 = pdVar22 + 1;
        }
        lVar14 = lVar14 + 0x58;
      } while (lVar14 != lVar25);
    }
    param_1 = local_530;
    param_4 = local_54c;
    auVar41._8_8_ = DAT_14c8463d8;
    auVar41._0_8_ = DAT_14c8463d0;
    auVar32._8_8_ = DAT_14c8463e8;
    auVar32._0_8_ = DAT_14c8463e0;
    local_498 = local_410[0x13];
    dStack_490 = local_410[0x14];
    local_4a8 = local_410[0x15];
    dStack_4a0 = local_410[0x16];
    local_5c8 = local_410[0x17];
    dStack_5c0 = local_410[0x18];
    local_588 = local_410[0x19];
    dStack_580 = local_410[0x1a];
    local_4b8 = local_410[0x1b];
    dStack_4b0 = local_410[0x1c];
    local_578 = local_410[0x1d];
    dStack_570 = local_410[0x1e];
    local_4c8 = local_410[0x1f];
    dStack_4c0 = local_410[0x20];
    local_508 = local_410[0x1b] * 0.0 + local_410[0x17] * 0.0 + local_410[0x13] * 0.0 +
                local_410[0x1f];
    local_4e8 = local_410[0x1c] * 0.0 + local_410[0x18] * 0.0 + local_410[0x14] * 0.0 +
                local_410[0x20];
    local_4d8 = local_410[0x21];
    dStack_4d0 = local_410[0x22];
    local_518 = local_410[0x1d] * 0.0 + local_410[0x19] * 0.0 + local_410[0x15] * 0.0 +
                local_410[0x21];
    local_4f8 = local_410[0x1e] * 0.0 + local_410[0x1a] * 0.0 + local_410[0x16] * 0.0 +
                local_410[0x22];
    iVar17 = 0x18;
    dStack_510 = local_518;
    dStack_500 = local_508;
    dStack_4f0 = local_4f8;
    dStack_4e0 = local_4e8;
    do {
      local_5a8._0_8_ = auVar41._0_8_;
      dVar39 = auVar41._8_8_;
      dVar46 = dVar39 + dVar39;
      dVar37 = auVar32._0_8_;
      local_548 = auVar32._8_8_;
      dVar28 = dVar37 + dVar37;
      dVar44 = (double)local_5a8._0_8_ * ((double)local_5a8._0_8_ + (double)local_5a8._0_8_);
      local_528._8_4_ = auVar41._8_4_;
      local_528._0_8_ = dVar39;
      local_528._12_4_ = auVar41._12_4_;
      dVar36 = ((double)local_5a8._0_8_ + (double)local_5a8._0_8_) * local_548;
      local_5b8 = 1.0 - (dVar37 * dVar28 + dVar39 * dVar46);
      local_488 = (double)local_5a8._0_8_ * dVar46 - dVar28 * local_548;
      local_5d8 = (double)local_5a8._0_8_ * dVar28 + dVar46 * local_548;
      dStack_5b0 = dVar28 * local_548 + (double)local_5a8._0_8_ * dVar46;
      dStack_480 = 1.0 - (dVar37 * dVar28 + dVar44);
      dStack_5d0 = dVar39 * dVar28 - dVar36;
      local_5e8 = (double)local_5a8._0_8_ * dVar28 - dVar46 * local_548;
      dVar36 = dVar36 + dVar39 * dVar28;
      local_568 = 1.0 - (dVar39 * dVar46 + dVar44);
      dStack_560 = 0.0;
      dVar49 = DAT_14c8464e0 * local_4c8 +
               local_5d8 * local_4b8 + local_5c8 * local_488 + local_498 * local_5b8;
      dVar53 = DAT_14c8464e0 * dStack_4c0 +
               local_5d8 * dStack_4b0 + dStack_5c0 * local_488 + dStack_490 * local_5b8;
      dVar37 = DAT_14c8464e0 * local_4d8 +
               local_5d8 * local_578 + local_488 * local_588 + local_5b8 * local_4a8;
      dVar46 = DAT_14c8464e0 * dStack_4d0 +
               local_5d8 * dStack_570 + local_488 * dStack_580 + local_5b8 * dStack_4a0;
      local_5f8 = DAT_14c8464e0;
      dStack_5f0 = DAT_14c8464e8;
      dVar48 = DAT_14c8464e8 * local_4c8 +
               dStack_5d0 * local_4b8 + local_5c8 * dStack_480 + local_498 * dStack_5b0;
      dVar50 = DAT_14c8464e8 * dStack_4c0 +
               dStack_5d0 * dStack_4b0 + dStack_5c0 * dStack_480 + dStack_490 * dStack_5b0;
      dVar51 = DAT_14c8464e8 * local_4d8 +
               dStack_5d0 * local_578 + dStack_480 * local_588 + dStack_5b0 * local_4a8;
      dVar43 = DAT_14c8464e8 * dStack_4d0 +
               dStack_5d0 * dStack_570 + dStack_480 * dStack_580 + dStack_5b0 * dStack_4a0;
      dVar44 = DAT_14c8464f0 * local_4c8 +
               local_568 * local_4b8 + local_5c8 * dVar36 + local_498 * local_5e8;
      dVar28 = DAT_14c8464f0 * dStack_4c0 +
               local_568 * dStack_4b0 + dStack_5c0 * dVar36 + dStack_490 * local_5e8;
      dVar45 = DAT_14c8464f0 * local_4d8 +
               local_568 * local_578 + dVar36 * local_588 + local_5e8 * local_4a8;
      dVar47 = DAT_14c8464f0 * dStack_4d0 +
               local_568 * dStack_570 + dVar36 * dStack_580 + local_5e8 * dStack_4a0;
      dStack_5e0 = 0.0;
      dVar52 = DAT_14c8464e0 * dVar46 + local_5d8 * dVar37 + local_488 * dVar53 + local_5b8 * dVar49
      ;
      adStack_290[0x24] =
           DAT_14c8464e8 * dVar46 + dStack_5d0 * dVar37 + dStack_480 * dVar53 + dStack_5b0 * dVar49;
      adStack_290[0x25] =
           dVar46 * DAT_14c8464f0 + dVar37 * local_568 + dVar53 * dVar36 + dVar49 * local_5e8;
      dVar38 = DAT_14c8464e8 * dVar43 +
               dStack_5d0 * dVar51 + dStack_480 * dVar50 + dStack_5b0 * dVar48;
      adStack_290[0x29] =
           dVar43 * DAT_14c8464f0 + dVar51 * local_568 + dVar50 * dVar36 + dVar48 * local_5e8;
      adStack_290[0x23] = dVar52;
      adStack_290[0x26] = dVar46 * 1.0 + dVar37 * 0.0 + dVar53 * 0.0 + dVar49 * 0.0;
      adStack_290[0x27] =
           DAT_14c8464e0 * dVar43 + local_5d8 * dVar51 + local_488 * dVar50 + local_5b8 * dVar48;
      adStack_290[0x28] = dVar38;
      adStack_290[0x2a] = dVar43 * 1.0 + dVar51 * 0.0 + dVar50 * 0.0 + dVar48 * 0.0;
      dVar46 = ABS(adStack_290[0x25]);
      dVar37 = ABS(adStack_290[0x24]);
      dVar48 = ABS(adStack_290[0x29]);
      uVar8 = (dVar46 <= dVar37) + 1;
      uVar24 = (ulonglong)uVar8;
      if (dVar37 < dVar48) {
        uVar24 = 0;
      }
      dVar37 = dVar47 * DAT_14c8464f0 + dVar45 * local_568 + dVar28 * dVar36 + dVar44 * local_5e8;
      adStack_290[0x2b] =
           DAT_14c8464e0 * dVar47 + local_5d8 * dVar45 + local_488 * dVar28 + local_5b8 * dVar44;
      adStack_290[0x2c] =
           DAT_14c8464e8 * dVar47 + dStack_5d0 * dVar45 + dStack_480 * dVar28 + dStack_5b0 * dVar44;
      adStack_290[0x2d] = dVar37;
      adStack_290[0x2e] = dVar47 * 1.0 + dVar45 * 0.0 + dVar28 * 0.0 + dVar44 * 0.0;
      adStack_290[0x2f] =
           DAT_14c8464e0 * local_4f8 +
           local_5d8 * local_518 + local_488 * local_4e8 + local_5b8 * local_508;
      adStack_290[0x30] =
           DAT_14c8464e8 * dStack_4f0 +
           dStack_5d0 * dStack_510 + dStack_480 * dStack_4e0 + dStack_5b0 * dStack_500;
      if (dVar48 <= dVar46) {
        uVar24 = (ulonglong)uVar8;
      }
      adStack_290[0x31] =
           DAT_14c8464f0 * local_4f8 +
           local_568 * local_518 + dVar36 * local_4e8 + local_5e8 * local_508;
      adStack_290[0x32] = dStack_4f0 * 1.0 + dStack_510 * 0.0 + dStack_4e0 * 0.0 + dStack_500 * 0.0;
      iVar12 = (int)(uVar24 >> 1);
      uVar8 = iVar12 + (int)uVar24 + 1U & 3;
      uVar13 = (int)uVar24 + iVar12 + (uVar8 >> 1) + 2 & 3;
      dVar44 = *(double *)
                ((longlong)adStack_290 + (ulonglong)uVar13 * 8 + (ulonglong)(uVar8 << 5) + 0x118);
      dVar28 = (double)local_5a8._0_8_;
      auVar34 = auVar41;
      local_598 = auVar32;
      dStack_540 = local_548;
      if ((dVar44 == 0.0) && (!NAN(dVar44))) break;
      dVar46 = *(double *)
                ((longlong)adStack_290 + (ulonglong)uVar8 * 8 + (ulonglong)(uVar8 << 5) + 0x118) -
               *(double *)
                ((longlong)adStack_290 + (ulonglong)uVar13 * 8 + (ulonglong)(uVar13 << 5) + 0x118);
      if (ABS(dVar44 + dVar44) * 2000000.0 < ABS(dVar46)) break;
      dVar46 = dVar46 / (dVar44 + dVar44);
      if (1000.0 < ABS(dVar46)) {
        adStack_290[0x13] = 0.0;
        adStack_290[0x14] = 0.0;
        adStack_290[0x15] = 0.0;
        adStack_290[uVar24 + 0x13] = 1.0 / (dVar46 * 4.0);
        dVar44 = 1.0;
      }
      else {
        dVar44 = 1.0 / (ABS(dVar46) + SQRT(dVar46 * dVar46 + 1.0));
        dVar28 = 1.0 / SQRT(dVar44 * dVar44 + 1.0);
        dVar44 = (dVar28 + 1.0) * 0.5;
        local_5a8 = auVar41;
        if (dVar44 < 0.0) {
          dVar44 = sqrt(dVar44);
        }
        else {
          dVar44 = SQRT(dVar44);
        }
        dVar28 = (1.0 - dVar28) * 0.5;
        if (dVar28 < 0.0) {
          dVar28 = sqrt(dVar28);
        }
        else {
          dVar28 = SQRT(dVar28);
        }
        adStack_290[0x13] = 0.0;
        adStack_290[0x14] = 0.0;
        adStack_290[0x15] = 0.0;
        adStack_290[uVar24 + 0x13] =
             (double)(-(ulonglong)(0.0 < dVar46) & 0x3ff0000000000000 |
                     ~-(ulonglong)(0.0 < dVar46) & -(ulonglong)(dVar46 < 0.0) & 0xbff0000000000000)
             * dVar28;
        auVar41 = local_5a8;
      }
      local_5a8 = auVar41;
      dVar28 = (double)local_5a8._0_8_ * dVar44;
      dVar46 = (double)local_5a8._0_8_ * adStack_290[0x15];
      dVar48 = (double)local_5a8._0_8_ * adStack_290[0x14];
      dVar50 = (double)local_5a8._0_8_ * adStack_290[0x13];
      dVar28 = adStack_290[0x14] * (double)local_598._0_8_ * -1.0 +
               dVar28 * 1.0 + local_548 * adStack_290[0x13] + dVar39 * adStack_290[0x15];
      dVar46 = adStack_290[0x13] * (double)local_598._0_8_ * 1.0 +
               dVar46 * -1.0 + dStack_540 * adStack_290[0x14] + dVar39 * dVar44;
      dVar48 = dVar44 * (double)local_598._0_8_ * 1.0 +
               ((dVar48 * 1.0 + local_548 * adStack_290[0x15]) - dVar39 * adStack_290[0x13]);
      dVar44 = adStack_290[0x15] * (double)local_598._0_8_ * -1.0 +
               ((dVar50 * -1.0 + dStack_540 * dVar44) - dVar39 * adStack_290[0x14]);
      dVar39 = dVar48 * dVar48 + dVar28 * dVar28;
      dVar50 = dVar44 * dVar44 + dVar46 * dVar46;
      auVar40._0_8_ = dVar39 + dVar50;
      auVar40._8_8_ = dVar39 + dVar50;
      auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
      auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
      auVar41 = sqrtpd(auVar40,auVar40);
      auVar41 = divpd(_DAT_149934d80,auVar41);
      auVar42._0_8_ = auVar41._0_8_ * dVar48;
      auVar42._8_8_ = auVar41._8_8_ * dVar44;
      dVar28 = (double)((ulonglong)(dVar28 * auVar41._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
      dVar39 = (double)((ulonglong)(dVar46 * auVar41._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
      auVar32 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar35);
      auVar41._8_8_ = dVar39;
      auVar41._0_8_ = dVar28;
      iVar17 = iVar17 + -1;
      auVar34 = local_5a8;
    } while (iVar17 != 0);
    local_5a8 = auVar34;
    puVar9[0x32] = dVar28;
    puVar9[0x33] = dVar39;
    *(undefined1 (*) [16])(puVar9 + 0x34) = auVar32;
    dVar37 = dVar37 * *(double *)(param_2 + 0x240);
    dVar38 = dVar38 * *(double *)(param_2 + 0x238);
    dVar52 = dVar52 * *(double *)(param_2 + 0x230);
    puVar9[9] = dVar52;
    puVar9[10] = dVar38;
    puVar9[0xb] = dVar37;
    dVar44 = DAT_14c8464e0;
    dVar28 = DAT_14c8464e8;
    dVar39 = DAT_14c8464f0;
    if (9.99999993922529e-09 < dVar37 * dVar37 + dVar52 * dVar52 + dVar38 * dVar38) {
      dVar44 = (double)(~-(ulonglong)(dVar52 != 0.0) & 0x47eff933c0000000 |
                       (ulonglong)(1.0 / dVar52) & -(ulonglong)(dVar52 != 0.0));
      dVar28 = (double)(~-(ulonglong)(dVar38 != 0.0) & 0x47eff933c0000000 |
                       (ulonglong)(1.0 / dVar38) & -(ulonglong)(dVar38 != 0.0));
      dVar39 = (double)(~-(ulonglong)(dVar37 != 0.0) & 0x47eff933c0000000 |
                       (ulonglong)(1.0 / dVar37) & -(ulonglong)(dVar37 != 0.0));
    }
    puVar9[0xf] = dVar44;
    puVar9[0x10] = dVar28;
    puVar9[0x11] = dVar39;
    auVar30._4_8_ = 0;
    auVar30._0_4_ = *(float *)(param_2 + 500);
    if (1.0 <= *(float *)(param_2 + 500)) {
      auVar30 = ZEXT412(0x3f800000);
    }
    if (auVar30._0_4_ <= 0.0) {
      auVar6._8_4_ = 0;
      auVar6._0_8_ = auVar30._4_8_;
      auVar30 = auVar6 << 0x20;
    }
    puVar9[0x21] = (double)auVar30._0_4_;
    auVar31._4_8_ = 0;
    auVar31._0_4_ = *(float *)(param_2 + 0x1f0);
    if (1.0 <= *(float *)(param_2 + 0x1f0)) {
      auVar31 = ZEXT412(0x3f800000);
    }
    if (auVar31._0_4_ <= 0.0) {
      auVar7._8_4_ = 0;
      auVar7._0_8_ = auVar31._4_8_;
      auVar31 = auVar7 << 0x20;
    }
    puVar9[0x22] = (double)auVar31._0_4_;
    puVar9[0x3e] = *(undefined8 *)(param_2 + 0x28);
    lVar14 = *(longlong *)(param_2 + 0xc0);
    if ((lVar14 == 0) && (DAT_14cb0d2b0 != 0)) {
      lVar14 = *(longlong *)(DAT_14cb0d2b0 + 0x898);
    }
    if (lVar14 != 0) {
      puVar9[0x23] = (double)*(float *)(lVar14 + 0x34);
      puVar9[0x24] = (double)*(float *)(lVar14 + 0x28);
    }
    *(bool *)(puVar9 + 0x4a) = *(char *)(param_2 + 0x32) == '\0';
    FUN_144875afe(param_2 + 0x38,adStack_290 + 0x23,&DAT_14c846480);
    dVar44 = (adStack_290[0x28] - adStack_290[0x25]) * 0.5;
    dVar37 = (adStack_290[0x27] - adStack_290[0x24]) * 0.5;
    dVar28 = (adStack_290[0x26] - adStack_290[0x23]) * 0.5;
    puVar9[0x4b] = SQRT(dVar44 * dVar44 + dVar28 * dVar28 + dVar37 * dVar37);
    bVar1 = param_7[1];
  }
  *(undefined4 *)(puVar9 + 0x3f) = local_550;
  *(undefined4 *)((longlong)puVar9 + 0x1fc) = param_4;
  puVar18 = puVar9 + 0x26;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar18 = *param_1;
    param_1 = param_1 + 1;
    puVar18 = puVar18 + 1;
  }
  puVar18 = local_538;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar18 = *param_5;
    param_5 = param_5 + 1;
    puVar18 = puVar18 + 1;
  }
  if ((bVar1 & 1) != 0) {
    param_7[1] = '\0';
  }
  if ((local_f0 ^ (ulonglong)auStack_628) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar9;
}



// FUNCTION 140b5c58c FUN_140b5c58c body=263 status=ok
// SIG undefined FUN_140b5c58c(void)

longlong * FUN_140b5c58c(longlong *param_1,longlong *param_2)

{
  if (param_1 == param_2) {
    FUN_140b5c694(param_1 + 6,param_2 + 6);
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    FUN_140b5c694(param_1 + 6,param_2 + 6);
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = param_2[8];
    param_2[8] = 0;
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
  }
  return param_1;
}



// FUNCTION 140b5c694 FUN_140b5c694 body=80 status=ok
// SIG undefined FUN_140b5c694(void)

longlong * FUN_140b5c694(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140074ac0(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 140b5c6e4 FUN_140b5c6e4 body=306 status=ok
// SIG undefined FUN_140b5c6e4(void)

undefined8 * FUN_140b5c6e4(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_LAB_14a1dfcd0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0xb;
  *(undefined1 *)(param_1 + 8) = 0;
  memset(param_1 + 9,0,0xd0);
  param_1[0x23] = 0x3fc99999a0000000;
  param_1[0x24] = 0x3fe6666660000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x26;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x32;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0xffffffffffffffff;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  param_1[0x4b] = 0xbff0000000000000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0x4059000000000000;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  return param_1;
}



// FUNCTION 140b5c816 FUN_140b5c816 body=802 status=ok
// SIG undefined FUN_140b5c816(void)

void FUN_140b5c816(longlong *param_1,double *param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (0 < (int)param_1[1]) {
    lVar5 = 0x28;
    lVar6 = 0;
    do {
      dVar1 = *param_2;
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      dVar10 = dVar2;
      if ((ABS(dVar2) <= ABS(dVar1)) && (dVar10 = dVar1, ABS(dVar1) < ABS(dVar3))) {
        dVar10 = dVar3;
      }
      lVar4 = *param_1;
      dVar10 = dVar10 * *(double *)(lVar4 + lVar5);
      if (dVar10 <= 0.009999999776482582) {
        dVar10 = 0.009999999776482582;
      }
      *(double *)(lVar4 + lVar5) = dVar10;
      *(double *)(lVar4 + -0x20 + lVar5) = dVar10;
      if ((char)param_3 != '\0') {
        *(double *)(lVar4 + -0x18 + lVar5) = dVar1 * *(double *)(lVar4 + -0x18 + lVar5);
        *(double *)(lVar4 + -0x10 + lVar5) = dVar2 * *(double *)(lVar4 + -0x10 + lVar5);
        *(double *)(lVar4 + -8 + lVar5) = dVar3 * *(double *)(lVar4 + -8 + lVar5);
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x30;
    } while (lVar6 < (int)param_1[1]);
  }
  if (0 < (int)param_1[3]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      local_68 = param_2[2];
      local_78 = *param_2;
      dStack_70 = param_2[1];
      FUN_140418cba(param_1[2] + lVar6,&local_78,0x3f847ae140000000,param_3);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x58;
    } while (lVar5 < (int)param_1[3]);
  }
  if (0 < (int)param_1[5]) {
    lVar5 = 0x48;
    lVar6 = 0;
    do {
      lVar4 = param_1[4];
      dVar1 = *param_2;
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      dVar10 = *(double *)(lVar4 + -8 + lVar5);
      dVar9 = (double)(~-(ulonglong)(ABS(dVar1) < ABS(dVar2)) & (ulonglong)dVar1 |
                      -(ulonglong)(ABS(dVar1) < ABS(dVar2)) & (ulonglong)dVar2) * dVar10;
      if (dVar9 <= 0.009999999776482582) {
        dVar9 = 0.009999999776482582;
      }
      dVar8 = (dVar10 - dVar9) + *(double *)(lVar4 + lVar5) * dVar3;
      dVar10 = 0.0;
      if (0.0 <= dVar8) {
        dVar10 = dVar8;
      }
      *(double *)(lVar4 + -8 + lVar5) = dVar9;
      *(double *)(lVar4 + lVar5) = dVar10;
      *(double *)(lVar4 + -0x40 + lVar5) = dVar10 + dVar9;
      if ((char)param_3 != '\0') {
        *(double *)(lVar4 + -0x38 + lVar5) = dVar1 * *(double *)(lVar4 + -0x38 + lVar5);
        *(double *)(lVar4 + -0x30 + lVar5) = dVar2 * *(double *)(lVar4 + -0x30 + lVar5);
        *(double *)(lVar4 + -0x28 + lVar5) = dVar3 * *(double *)(lVar4 + -0x28 + lVar5);
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (lVar6 < (int)param_1[5]);
  }
  if (0 < (int)param_1[9]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      local_88 = param_2[2];
      local_98 = *param_2;
      dStack_90 = param_2[1];
      FUN_14711d8c6(param_1[8] + lVar6,&local_98,0x3f847ae140000000,param_3);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x58;
    } while (lVar5 < (int)param_1[9]);
  }
  if (0 < (int)param_1[7]) {
    lVar5 = 0;
    iVar7 = 0;
    do {
      local_a8 = param_2[2];
      local_b8 = *param_2;
      dStack_b0 = param_2[1];
      FUN_140b5f2ca(param_1[6] + lVar5,&local_b8,0x3f847ae140000000,param_3);
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 0x60;
    } while (iVar7 < (int)param_1[7]);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b5cb3a FUN_140b5cb3a body=10127 status=ok
// SIG undefined FUN_140b5cb3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140b5cb3a(longlong *param_1,longlong *param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 extraout_EAX;
  int iVar7;
  undefined4 extraout_EAX_00;
  undefined4 uVar8;
  void *_Dst;
  uint uVar9;
  longlong *plVar10;
  double *pdVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  longlong *plVar17;
  undefined8 *puVar18;
  bool bVar19;
  longlong lVar20;
  longlong *plVar21;
  double *pdVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined1 auStack_398 [32];
  undefined1 *local_378;
  undefined4 local_370;
  undefined4 local_368;
  undefined4 local_360;
  double local_358;
  double local_350;
  longlong *local_348;
  double dStack_340;
  double local_338;
  undefined8 uStack_330;
  double local_328;
  undefined8 uStack_320;
  double local_310;
  double local_308;
  double local_300;
  undefined **local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  longlong *local_2b0;
  double local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar7 = (int)param_2[3];
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  plVar10 = param_1;
  if (iVar7 != 0) {
    plVar10 = param_1 + 2;
    local_348 = plVar10;
    FUN_140418e28();
    auVar41 = _DAT_1499387d0;
    if ((longlong)(int)param_2[3] != 0) {
      pauVar16 = (undefined1 (*) [16])(param_2[2] + 0x48);
      dVar27 = (double)((longlong)(int)param_2[3] * 0x70);
      dVar43 = (double)DAT_1499387d0;
      dVar26 = DAT_1499387d0._8_8_;
      while( true ) {
        uVar8 = SUB84(plVar10,0);
        local_2a8 = (double)*(float *)pauVar16[2];
        local_2b0 = (longlong *)(double)*(float *)(pauVar16[1] + 0xc);
        local_2b8 = (double)*(float *)(pauVar16[1] + 8);
        dStack_2f0 = SQRT(local_2a8 * local_2a8 +
                          local_2b8 * local_2b8 + (double)local_2b0 * (double)local_2b0);
        local_2f8 = &PTR_LAB_14a1e1978;
        local_2d8 = *(double *)(pauVar16[-1] + 8);
        local_2e8._0_8_ = *(undefined8 *)(pauVar16[-2] + 8);
        local_2e8._8_8_ = *(undefined8 *)pauVar16[-1];
        local_2c0 = *(double *)pauVar16[1];
        local_2d0 = *(double *)*pauVar16;
        dStack_2c8 = *(double *)(*pauVar16 + 8);
        auVar31 = *pauVar16;
        auVar40 = divpd(auVar31,auVar41);
        auVar49._8_8_ = 0;
        auVar49._0_8_ = *(double *)pauVar16[1];
        auVar49 = divpd(auVar49,auVar41);
        auVar40 = roundpd(auVar40,auVar40,3);
        auVar49 = roundpd(auVar49,auVar49,3);
        dVar30 = (auVar31._0_8_ - auVar40._0_8_ * dVar43) * 0.008726646259971648;
        dVar60 = (auVar31._8_8_ - auVar40._8_8_ * dVar26) * 0.008726646259971648;
        dVar23 = (*(double *)pauVar16[1] - auVar49._0_8_ * dVar43) * 0.008726646259971648;
        dVar47 = (0.0 - auVar49._8_8_ * dVar26) * 0.008726646259971648;
        sin(dVar30);
        sin(dVar60);
        sin(dVar23);
        sin(dVar47);
        cos(dVar30);
        cos(dVar60);
        cos(dVar23);
        cos(dVar47);
        local_358 = *(double *)param_3[5];
        local_338 = *(double *)param_3[4];
        local_328 = *(double *)(param_3[4] + 8);
        auVar31._8_8_ = dStack_2c8;
        auVar31._0_8_ = local_2d0;
        auVar31 = divpd(auVar31,auVar41);
        auVar40._8_8_ = 0;
        auVar40._0_8_ = local_2c0;
        auVar40 = divpd(auVar40,auVar41);
        auVar31 = roundpd(auVar31,auVar31,3);
        auVar40 = roundpd(auVar40,auVar40,3);
        dVar23 = (local_2d0 - auVar31._0_8_ * dVar43) * 0.008726646259971648;
        dVar47 = (dStack_2c8 - auVar31._8_8_ * dVar26) * 0.008726646259971648;
        dVar60 = (local_2c0 - auVar40._0_8_ * dVar43) * 0.008726646259971648;
        dVar63 = (0.0 - auVar40._8_8_ * dVar26) * 0.008726646259971648;
        dVar30 = sin(dVar23);
        dVar24 = sin(dVar47);
        dVar25 = sin(dVar60);
        sin(dVar63);
        dVar23 = cos(dVar23);
        dVar47 = cos(dVar47);
        dVar28 = cos(dVar60);
        cos(dVar63);
        auVar40 = _DAT_149934d80;
        dVar60 = -(dVar47 * dVar30 * dVar25) + dVar24 * dVar23 * dVar28;
        dVar63 = dVar24 * dVar30 * dVar25 + dVar47 * dVar23 * dVar28;
        dVar29 = dVar30 * dVar24 * dVar28 - dVar23 * dVar47 * dVar25;
        dVar24 = -(dVar30 * dVar47 * dVar28) - dVar23 * dVar24 * dVar25;
        auVar31 = param_3[4];
        dVar23 = auVar31._0_8_;
        dVar30 = auVar31._8_8_;
        dVar47 = SUB168(param_3[5],0);
        auVar31 = minpd(_DAT_149934d80,auVar31);
        auVar49 = minpd(ZEXT816(0x3ff0000000000000),param_3[5]);
        auVar48._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
        auVar48._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
        iVar7 = movmskpd(extraout_EAX_00,auVar48);
        auVar53._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
        auVar53._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
        uVar9 = movmskpd(uVar8,auVar53);
        local_350 = dVar27;
        if ((uVar9 & 0x3fffffff) == 0 && iVar7 == 0) {
          dVar25 = *(double *)(param_3[1] + 8);
          dVar28 = *(double *)(param_3[1] + 8);
          dVar27 = *(double *)(*param_3 + 8);
          dVar66 = *(double *)(*param_3 + 8);
          dVar65 = SUB168(*param_3,0);
          dVar67 = SUB168(*param_3,8);
          dVar59 = *(double *)param_3[1];
          dVar64 = *(double *)param_3[1];
          dVar58 = *(double *)param_3[1];
          local_178._0_8_ =
               dVar24 * dVar64 * -1.0 +
               dVar60 * dVar27 + dVar63 * *(double *)*param_3 * 1.0 + dVar29 * dVar25;
          local_178._8_8_ =
               dVar29 * dVar58 * 1.0 +
               dVar63 * dVar66 + dVar60 * *(double *)*param_3 * -1.0 + dVar24 * dVar28;
          local_168._0_8_ =
               dVar63 * dVar64 * 1.0 +
               ((*(double *)*param_3 * dVar24 * 1.0 + dVar60 * dVar25) - dVar29 * dVar27);
          local_168._8_8_ =
               dVar60 * dVar58 * -1.0 +
               ((*(double *)*param_3 * dVar29 * -1.0 + dVar63 * dVar28) - dVar24 * dVar66);
          dVar23 = dVar23 * (double)local_2e8._0_8_;
          dVar30 = dVar30 * (double)local_2e8._8_8_;
          dVar47 = local_2d8 * dVar47;
          dVar60 = dVar30 * dVar65 - dVar23 * dVar67;
          dVar63 = dVar47 * dVar67 - dVar30 * dVar59;
          dVar24 = dVar23 * dVar59 - dVar47 * dVar65;
          dVar63 = dVar63 + dVar63;
          dVar24 = dVar24 + dVar24;
          dVar60 = dVar60 + dVar60;
          dVar27 = (dVar60 * dVar67 - dVar59 * dVar24) + dVar25 * dVar63 + dVar23 +
                   *(double *)param_3[2];
          dVar23 = (dVar63 * dVar59 - dVar60 * dVar65) + dVar28 * dVar24 + dVar30 +
                   *(double *)(param_3[2] + 8);
          dVar47 = (dVar24 * dVar65 - dVar67 * dVar63) + dVar25 * dVar60 + dVar47 +
                   *(double *)param_3[3];
        }
        else {
          dVar28 = *(double *)*param_3;
          dVar66 = *(double *)(*param_3 + 8);
          dVar58 = *(double *)param_3[1];
          dVar64 = dVar66 + dVar66;
          dVar65 = dVar58 + dVar58;
          dVar61 = dVar28 * (dVar28 + dVar28);
          dVar25 = (1.0 - (dVar58 * dVar65 + dVar61)) * dVar30;
          dVar62 = *(double *)*param_3 * dVar65;
          dVar27 = *(double *)(param_3[1] + 8);
          dVar67 = dVar65 * dVar27;
          dVar59 = (dVar28 + dVar28) * *(double *)(param_3[1] + 8);
          dVar27 = dVar64 * dVar27;
          dStack_1b0 = (dVar65 * dVar66 - dVar59) * dVar47;
          local_1b8 = (dVar27 + dVar62) * dVar47;
          local_1a8 = (longlong *)((1.0 - (dVar61 + dVar66 * dVar64)) * dVar47);
          local_1c8 = (dVar65 * dVar66 + dVar59) * dVar30;
          local_1e8 = (dVar62 - dVar27) * dVar23;
          local_1f8._8_8_ = (dVar64 * dVar28 + dVar67) * dVar23;
          local_1f8._0_8_ = (1.0 - (dVar58 * dVar65 + dVar66 * dVar64)) * dVar23;
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar25,0);
          local_1d8._0_8_ = (dVar64 * dVar28 - dVar67) * dVar30;
          local_1d8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = *(undefined8 *)param_3[2];
          uStack_190 = *(undefined8 *)(param_3[2] + 8);
          local_188 = *(undefined8 *)param_3[3];
          uStack_180 = 0x3ff0000000000000;
          dVar25 = dVar24 + dVar24;
          dVar28 = dVar60 + dVar60;
          dVar27 = dVar29 * (dVar29 + dVar29);
          dStack_250 = DAT_149934d80._8_8_ - (dVar60 * dVar28 + dVar27);
          local_228 = 1.0 - (dVar27 + dVar24 * dVar25);
          dVar27 = (dVar29 + dVar29) * dVar63;
          local_248 = dVar28 * dVar24 + dVar27;
          local_258 = dVar25 * dVar29 - dVar28 * dVar63;
          dVar27 = dVar28 * dVar24 - dVar27;
          local_268 = dVar29 * dVar28 - dVar25 * dVar63;
          local_278._8_8_ = dVar25 * dVar29 + dVar28 * dVar63;
          local_278._0_8_ = (double)DAT_149934d80 - (dVar60 * dVar28 + dVar24 * dVar25);
          uStack_260 = 0;
          uStack_240 = 0;
          local_238._8_4_ = SUB84(dVar27,0);
          local_238._0_8_ = dVar25 * dVar63 + dVar29 * dVar28;
          local_238._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
          uStack_220 = 0;
          local_218 = (double)local_2e8._0_8_;
          dStack_210 = (double)local_2e8._8_8_;
          local_208._8_8_ = 0x3ff0000000000000;
          local_208._0_8_ = local_2d8;
          FUN_1447fea8d(local_178);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar36._8_8_ = -(ulonglong)(0.0 <= dVar30);
          auVar36._0_8_ = -(ulonglong)(0.0 <= dVar23);
          auVar31 = blendvpd(_DAT_149936790,auVar40,auVar36);
          dVar27 = (double)(~-(ulonglong)(0.0 <= dVar47) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= dVar47) & 0x3ff0000000000000);
          dVar23 = auVar31._0_8_;
          local_178._8_8_ = (double)local_178._8_8_ * dVar23;
          local_178._0_8_ = (double)local_178._0_8_ * dVar23;
          local_168._0_8_ = (double)local_168._0_8_ * dVar23;
          dVar23 = auVar31._8_8_;
          local_148 = local_148 * dVar23;
          local_158._8_8_ = (double)local_158._8_8_ * dVar23;
          local_158._0_8_ = dVar23 * (double)local_158._0_8_;
          local_128 = local_128 * dVar27;
          dStack_130 = dStack_130 * dVar27;
          local_138 = dVar27 * local_138;
          FUN_14481fd10(&local_298,local_178);
          dVar27 = local_288 * local_288 + local_298 * local_298;
          dVar23 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar46._0_8_ = dVar27 + dVar23;
          auVar46._8_8_ = dVar27 + dVar23;
          auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_);
          auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_);
          auVar31 = sqrtpd(auVar46,auVar46);
          auVar31 = divpd(auVar40,auVar31);
          auVar68._0_8_ = auVar31._0_8_ * local_288;
          auVar68._8_8_ = auVar31._8_8_ * dStack_280;
          local_178._0_8_ =
               (ulonglong)(local_298 * auVar31._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_);
          local_178._8_8_ =
               (ulonglong)(dStack_290 * auVar31._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_);
          local_168 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar68,auVar37);
          dVar27 = local_118;
          dVar23 = dStack_110;
          dVar47 = local_108;
        }
        FUN_1448052ee(local_178,&local_2d0);
        local_2e8._8_4_ = SUB84(dVar23,0);
        local_2e8._0_8_ = dVar27;
        local_2e8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        local_310 = local_338;
        local_308 = local_328;
        local_300 = local_358;
        local_2d8 = dVar47;
        FUN_140418cba(&local_2f8,&local_310,0,0);
        local_158 = ZEXT816(0);
        local_168 = ZEXT816(0);
        local_178 = ZEXT816(0);
        local_148 = (double)((ulonglong)local_148 & 0xffffffffffffff00);
        local_360 = *(undefined4 *)pauVar16[2];
        local_370 = *(undefined4 *)(pauVar16[1] + 8);
        local_368 = *(undefined4 *)(pauVar16[1] + 0xc);
        local_378 = pauVar16[-2] + 8;
        FUN_142414030(local_178,&DAT_14c846480);
        dVar27 = local_350;
        dVar23 = ((double)local_158._8_8_ - (double)local_168._0_8_) * 0.5;
        dVar30 = ((double)local_158._0_8_ - (double)local_178._8_8_) * 0.5;
        dVar47 = ((double)local_168._8_8_ - (double)local_178._0_8_) * 0.5;
        dVar23 = dVar23 * dVar23 + dVar47 * dVar47 + dVar30 * dVar30;
        iVar7 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar7 + 1U;
        dStack_2f0 = dVar23;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar7 + 1U) {
          FUN_1471029fa(local_348,iVar7);
        }
        puVar18 = (undefined8 *)(*local_348 + (longlong)iVar7 * 0x58);
        puVar18[1] = dVar23;
        *puVar18 = &PTR_LAB_14a1e1978;
        puVar15 = (undefined8 *)local_2e8;
        puVar18 = puVar18 + 2;
        for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar18 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar18 = puVar18 + 1;
        }
        pauVar16 = pauVar16 + 7;
        dVar27 = (double)((longlong)dVar27 + -0x70);
        plVar10 = (longlong *)0x0;
        if (dVar27 == 0.0) break;
        plVar10 = (longlong *)0x0;
      }
    }
  }
  iVar7 = (int)param_2[5];
  iVar12 = (int)param_1[5] + iVar7;
  if (-1 < iVar12) {
    plVar17 = param_1 + 4;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar12) {
      plVar10 = plVar17;
      FUN_14499bdc2();
      iVar7 = (int)param_2[5];
    }
    if (iVar7 != 0) {
      pauVar16 = (undefined1 (*) [16])(param_2[4] + 0x48);
      lVar14 = (longlong)iVar7 * 0x68;
      do {
        uVar8 = SUB84(plVar10,0);
        local_348 = (longlong *)(double)*(float *)(pauVar16[1] + 8);
        local_350 = (double)*(float *)(pauVar16[1] + 0xc);
        dVar47 = *(double *)(pauVar16[-2] + 8);
        dVar30 = *(double *)pauVar16[-1];
        auVar41 = *pauVar16;
        auVar31 = divpd(auVar41,_DAT_1499387d0);
        auVar39._8_8_ = 0;
        auVar39._0_8_ = *(double *)pauVar16[1];
        auVar40 = divpd(auVar39,_DAT_1499387d0);
        auVar31 = roundpd(auVar31,auVar31,3);
        auVar40 = roundpd(auVar40,auVar40,3);
        dVar26 = (auVar41._0_8_ - auVar31._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar27 = (auVar41._8_8_ - auVar31._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar60 = (*(double *)pauVar16[1] - auVar40._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        dVar63 = (0.0 - auVar40._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar43 = *(double *)(pauVar16[-1] + 8);
        sin(dVar26);
        sin(dVar27);
        sin(dVar60);
        sin(dVar63);
        cos(dVar26);
        cos(dVar27);
        cos(dVar60);
        cos(dVar63);
        local_358 = *(double *)param_3[5];
        local_338 = *(double *)param_3[4];
        uStack_330 = 0;
        local_328 = *(double *)(param_3[4] + 8);
        uStack_320 = 0;
        dVar23 = sin(dVar26);
        dVar24 = sin(dVar27);
        dVar25 = sin(dVar60);
        sin(dVar63);
        dVar26 = cos(dVar26);
        dVar27 = cos(dVar27);
        dVar28 = cos(dVar60);
        cos(dVar63);
        auVar31 = _DAT_149934d80;
        dVar60 = -(dVar27 * dVar23 * dVar25) + dVar24 * dVar26 * dVar28;
        dVar63 = dVar24 * dVar23 * dVar25 + dVar27 * dVar26 * dVar28;
        dVar29 = dVar23 * dVar24 * dVar28 - dVar26 * dVar27 * dVar25;
        dVar24 = -(dVar23 * dVar27 * dVar28) - dVar26 * dVar24 * dVar25;
        auVar41 = param_3[4];
        dVar26 = auVar41._0_8_;
        dVar23 = auVar41._8_8_;
        dVar27 = SUB168(param_3[5],0);
        auVar41 = minpd(_DAT_149934d80,auVar41);
        auVar40 = minpd(ZEXT816(0x3ff0000000000000),param_3[5]);
        auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
        auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
        iVar7 = movmskpd(extraout_EAX,auVar42);
        auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
        auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
        uVar9 = movmskpd(uVar8,auVar41);
        if ((uVar9 & 0x3fffffff) == 0 && iVar7 == 0) {
          dVar28 = *(double *)(param_3[1] + 8);
          dVar25 = *(double *)(param_3[1] + 8);
          dVar58 = *(double *)(*param_3 + 8);
          dVar66 = *(double *)(*param_3 + 8);
          dVar67 = *(double *)*param_3;
          dVar59 = *(double *)(*param_3 + 8);
          dVar61 = *(double *)param_3[1];
          dVar64 = *(double *)param_3[1];
          dVar65 = *(double *)param_3[1];
          local_178._0_8_ =
               dVar24 * dVar64 * -1.0 +
               dVar60 * dVar58 + dVar63 * *(double *)*param_3 * 1.0 + dVar29 * dVar28;
          local_178._8_8_ =
               dVar29 * dVar65 * 1.0 +
               dVar63 * dVar66 + dVar60 * *(double *)*param_3 * -1.0 + dVar24 * dVar25;
          local_168._0_8_ =
               dVar63 * dVar64 * 1.0 +
               ((*(double *)*param_3 * dVar24 * 1.0 + dVar60 * dVar28) - dVar29 * dVar58);
          local_168._8_8_ =
               dVar60 * dVar65 * -1.0 +
               ((*(double *)*param_3 * dVar29 * -1.0 + dVar63 * dVar25) - dVar24 * dVar66);
          dVar47 = dVar47 * dVar26;
          dVar30 = dVar30 * dVar23;
          dVar43 = dVar43 * dVar27;
          dVar23 = dVar30 * dVar67 - dVar47 * dVar59;
          dVar60 = dVar43 * dVar59 - dVar30 * dVar61;
          dVar63 = dVar47 * dVar61 - dVar43 * dVar67;
          dVar60 = dVar60 + dVar60;
          dVar63 = dVar63 + dVar63;
          dVar23 = dVar23 + dVar23;
          dVar26 = (dVar23 * dVar59 - dVar61 * dVar63) + dVar28 * dVar60 + dVar47 +
                   *(double *)param_3[2];
          dVar27 = (dVar60 * dVar61 - dVar23 * dVar67) + dVar25 * dVar63 + dVar30 +
                   *(double *)(param_3[2] + 8);
          dVar43 = (dVar63 * dVar67 - dVar59 * dVar60) + dVar28 * dVar23 + dVar43 +
                   *(double *)param_3[3];
        }
        else {
          dVar28 = *(double *)*param_3;
          dVar66 = *(double *)(*param_3 + 8);
          dVar58 = *(double *)param_3[1];
          dVar64 = dVar66 + dVar66;
          dVar65 = dVar58 + dVar58;
          dVar61 = dVar28 * (dVar28 + dVar28);
          dVar62 = *(double *)*param_3 * dVar65;
          dVar25 = *(double *)(param_3[1] + 8);
          dVar67 = dVar65 * dVar25;
          dVar59 = (dVar28 + dVar28) * *(double *)(param_3[1] + 8);
          dVar25 = dVar64 * dVar25;
          dStack_1b0 = (dVar65 * dVar66 - dVar59) * dVar27;
          local_1b8 = (dVar25 + dVar62) * dVar27;
          local_1a8 = (longlong *)((1.0 - (dVar61 + dVar66 * dVar64)) * dVar27);
          local_1c8 = (dVar65 * dVar66 + dVar59) * dVar23;
          local_1e8 = (dVar62 - dVar25) * dVar26;
          local_1f8._8_8_ = (dVar64 * dVar28 + dVar67) * dVar26;
          local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar58 * dVar65 + dVar66 * dVar64)) * dVar26;
          uStack_1e0 = 0;
          local_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar58 * dVar65 + dVar61)) * dVar23;
          local_1d8._0_8_ = (dVar64 * dVar28 - dVar67) * dVar23;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = *(undefined8 *)param_3[2];
          uStack_190 = *(undefined8 *)(param_3[2] + 8);
          local_188 = *(undefined8 *)param_3[3];
          uStack_180 = 0x3ff0000000000000;
          dVar25 = dVar24 + dVar24;
          dVar66 = dVar60 + dVar60;
          dVar28 = dVar29 * (dVar29 + dVar29);
          dStack_250 = DAT_149934d80._8_8_ - (dVar60 * dVar66 + dVar28);
          local_228 = 1.0 - (dVar28 + dVar24 * dVar25);
          dVar28 = (dVar29 + dVar29) * dVar63;
          local_248 = dVar66 * dVar24 + dVar28;
          local_258 = dVar25 * dVar29 - dVar66 * dVar63;
          local_268 = dVar29 * dVar66 - dVar25 * dVar63;
          local_278._8_8_ = dVar25 * dVar29 + dVar66 * dVar63;
          local_278._0_8_ = (double)DAT_149934d80 - (dVar60 * dVar66 + dVar24 * dVar25);
          uStack_260 = 0;
          uStack_240 = 0;
          local_238._8_8_ = dVar66 * dVar24 - dVar28;
          local_238._0_8_ = dVar25 * dVar63 + dVar29 * dVar66;
          uStack_220 = 0;
          local_208._8_4_ = 0;
          local_208._0_8_ = dVar43;
          local_208._12_4_ = 0x3ff00000;
          local_218 = dVar47;
          dStack_210 = dVar30;
          FUN_1447fea8d(local_178);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar34._8_8_ = -(ulonglong)(0.0 <= dVar23);
          auVar34._0_8_ = -(ulonglong)(0.0 <= dVar26);
          auVar41 = blendvpd(_DAT_149936790,auVar31,auVar34);
          dVar43 = (double)(~-(ulonglong)(0.0 <= dVar27) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= dVar27) & 0x3ff0000000000000);
          dVar26 = auVar41._0_8_;
          local_178._8_8_ = (double)local_178._8_8_ * dVar26;
          local_178._0_8_ = (double)local_178._0_8_ * dVar26;
          local_168._0_8_ = (double)local_168._0_8_ * dVar26;
          dVar26 = auVar41._8_8_;
          local_148 = local_148 * dVar26;
          local_158._8_8_ = (double)local_158._8_8_ * dVar26;
          local_158._0_8_ = dVar26 * (double)local_158._0_8_;
          local_128 = local_128 * dVar43;
          dStack_130 = dStack_130 * dVar43;
          local_138 = dVar43 * local_138;
          FUN_14481fd10(&local_2f8,local_178);
          dVar43 = (double)local_2e8._0_8_ * (double)local_2e8._0_8_ +
                   (double)local_2f8 * (double)local_2f8;
          dVar26 = (double)local_2e8._8_8_ * (double)local_2e8._8_8_ + dStack_2f0 * dStack_2f0;
          auVar52._0_8_ = dVar43 + dVar26;
          auVar52._8_8_ = dVar43 + dVar26;
          auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
          auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
          auVar41 = sqrtpd(auVar52,auVar52);
          auVar41 = divpd(auVar31,auVar41);
          auVar55._0_8_ = auVar41._0_8_ * (double)local_2e8._0_8_;
          auVar55._8_8_ = auVar41._8_8_ * (double)local_2e8._8_8_;
          local_178._0_8_ =
               (ulonglong)((double)local_2f8 * auVar41._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
          local_178._8_8_ =
               (ulonglong)(dStack_2f0 * auVar41._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
          local_168 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar35);
          dVar26 = local_118;
          dVar27 = dStack_110;
          dVar43 = local_108;
        }
        FUN_1448052ee(local_178,local_1f8);
        dVar30 = local_1e8;
        uVar5 = local_1f8._0_8_;
        uVar6 = local_1f8._8_8_;
        local_158 = ZEXT816(0);
        local_168 = ZEXT816(0);
        local_178 = ZEXT816(0);
        local_148 = (double)((ulonglong)local_148 & 0xffffffffffffff00);
        local_370 = *(undefined4 *)(pauVar16[1] + 8);
        local_368 = *(undefined4 *)(pauVar16[1] + 0xc);
        local_378 = pauVar16[-2] + 8;
        FUN_142414180(local_178,&DAT_14c846480);
        dVar23 = (double)local_158._8_8_ - (double)local_168._0_8_;
        dVar47 = (double)local_158._0_8_ - (double)local_178._8_8_;
        dVar60 = (double)local_168._8_8_ - (double)local_178._0_8_;
        iVar7 = (int)param_1[5];
        *(uint *)(param_1 + 5) = iVar7 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2c) < iVar7 + 1U) {
          FUN_147102a90(plVar17,iVar7);
        }
        dVar63 = (double)(~-(ulonglong)(ABS(local_338) < ABS(local_328)) & (ulonglong)local_338 |
                         (ulonglong)local_328 & -(ulonglong)(ABS(local_338) < ABS(local_328))) *
                 (double)local_348;
        if (dVar63 <= 0.0) {
          dVar63 = 0.0;
        }
        dVar25 = ((double)local_348 - dVar63) + local_358 * local_350;
        dVar24 = 0.0;
        if (0.0 <= dVar25) {
          dVar24 = dVar25;
        }
        dVar47 = dVar47 * 0.5;
        dVar60 = dVar60 * 0.5;
        dVar23 = dVar23 * 0.5;
        lVar13 = *plVar17;
        plVar10 = (longlong *)((longlong)iVar7 * 0x50);
        *(double *)(lVar13 + 8 + (longlong)plVar10) =
             dVar23 * dVar23 + dVar60 * dVar60 + dVar47 * dVar47;
        *(undefined ***)(lVar13 + (longlong)plVar10) = &PTR_LAB_14a1e1948;
        auVar4._8_4_ = SUB84(dVar27,0);
        auVar4._0_8_ = dVar26;
        auVar4._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        *(undefined1 (*) [16])(lVar13 + 0x10 + (longlong)plVar10) = auVar4;
        *(double *)(lVar13 + 0x20 + (longlong)plVar10) = dVar43;
        *(undefined8 *)(lVar13 + 0x28 + (longlong)plVar10) = uVar5;
        *(undefined8 *)(lVar13 + 0x30 + (longlong)plVar10) = uVar6;
        *(double *)(lVar13 + 0x38 + (longlong)plVar10) = dVar30;
        *(double *)(lVar13 + 0x40 + (longlong)plVar10) = dVar63;
        *(double *)(lVar13 + 0x48 + (longlong)plVar10) = dVar24;
        pauVar16 = (undefined1 (*) [16])(pauVar16[6] + 8);
        lVar14 = lVar14 + -0x68;
      } while (lVar14 != 0);
    }
    iVar7 = (int)param_2[1];
    iVar12 = (int)param_1[1] + iVar7;
    if (-1 < iVar12) {
      if (*(int *)((longlong)param_1 + 0xc) < iVar12) {
        plVar10 = param_1;
        FUN_1404186bc();
        iVar7 = (int)param_2[1];
      }
      if (iVar7 != 0) {
        lVar14 = *param_2;
        lVar13 = (longlong)iVar7 * 0x10;
        lVar20 = (longlong)iVar7 * 0x50;
        do {
          fVar1 = *(float *)(lVar14 + 0x48);
          auVar41 = param_3[4];
          dVar26 = auVar41._0_8_;
          dVar23 = auVar41._8_8_;
          auVar31 = param_3[5];
          dVar27 = auVar31._0_8_;
          dVar43 = *(double *)(param_3[4] + 8);
          uVar8 = SUB84(dVar43,0);
          uVar69 = (undefined4)((ulonglong)dVar43 >> 0x20);
          auVar40 = minpd(_DAT_149934d80,auVar41);
          auVar49 = minpd(ZEXT816(0x3ff0000000000000),auVar31);
          auVar44._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
          auVar44._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
          iVar7 = movmskpd((int)lVar13,auVar44);
          auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
          auVar50._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
          uVar9 = movmskpd((int)plVar10,auVar50);
          if ((uVar9 & 0x3fffffff) == 0 && iVar7 == 0) {
            dVar24 = *(double *)*param_3;
            dVar25 = *(double *)(*param_3 + 8);
            dVar28 = *(double *)param_3[1];
            dVar30 = *(double *)(param_3[1] + 8);
            dVar63 = *(double *)(lVar14 + 0x30) * dVar26;
            dVar23 = *(double *)(lVar14 + 0x38) * dVar23;
            dVar47 = *(double *)(lVar14 + 0x40) * dVar27;
            dVar29 = dVar23 * dVar24 - dVar63 * dVar25;
            dVar66 = dVar47 * dVar25 - dVar23 * dVar28;
            dVar60 = dVar63 * dVar28 - dVar47 * dVar24;
            dVar66 = dVar66 + dVar66;
            dVar60 = dVar60 + dVar60;
            dVar29 = dVar29 + dVar29;
            dVar47 = (dVar60 * dVar24 - dVar25 * dVar66) + dVar30 * dVar29 + dVar47 +
                     *(double *)param_3[3];
            dVar30 = (dVar29 * dVar25 - dVar28 * dVar60) + dVar30 * dVar66 + dVar63 +
                     *(double *)param_3[2];
            dVar23 = (dVar66 * dVar28 - dVar29 * dVar24) +
                     *(double *)(param_3[1] + 8) * dVar60 + dVar23 + *(double *)(param_3[2] + 8);
          }
          else {
            dVar60 = *(double *)*param_3;
            dVar63 = *(double *)(*param_3 + 8);
            dVar24 = *(double *)param_3[1];
            dVar66 = dVar63 + dVar63;
            dVar25 = dVar24 + dVar24;
            dVar47 = dVar60 * (dVar60 + dVar60);
            dVar58 = dVar63 * dVar66;
            dVar30 = (1.0 - (dVar24 * dVar25 + dVar47)) * dVar23;
            local_348 = (longlong *)((1.0 - (dVar47 + dVar58)) * dVar27);
            dStack_340 = (0.0 - (dVar47 + dVar58)) * auVar31._8_8_;
            dVar64 = *(double *)*param_3 * dVar25;
            dVar47 = *(double *)(param_3[1] + 8);
            dVar28 = dVar25 * dVar47;
            dVar29 = (dVar60 + dVar60) * *(double *)(param_3[1] + 8);
            dVar47 = dVar66 * dVar47;
            local_1c8 = (dVar25 * dVar63 + dVar29) * dVar23;
            local_1b8 = (dVar47 + dVar64) * dVar27;
            dStack_1b0 = (dVar25 * dVar63 - dVar29) * dVar27;
            local_1e8 = (dVar64 - dVar47) * dVar26;
            local_1f8._8_8_ = (dVar66 * dVar60 + dVar28) * dVar26;
            local_1f8._0_8_ = (1.0 - (dVar24 * dVar25 + dVar58)) * dVar26;
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar30,0);
            local_1d8._0_8_ = (dVar66 * dVar60 - dVar28) * dVar23;
            local_1d8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = *(undefined8 *)param_3[2];
            uStack_190 = *(undefined8 *)(param_3[2] + 8);
            local_188 = *(undefined8 *)param_3[3];
            uStack_180 = 0x3ff0000000000000;
            local_278 = ZEXT816(0x3ff0000000000000);
            local_268 = 0.0;
            uStack_260 = 0;
            local_258 = 0.0;
            dStack_250 = 1.0;
            local_248 = 0.0;
            uStack_240 = 0;
            local_238 = ZEXT816(0);
            local_228 = 1.0;
            uStack_220 = 0;
            local_208._8_8_ = 0x3ff0000000000000;
            local_208._0_8_ = *(double *)(lVar14 + 0x40);
            local_218 = *(double *)(lVar14 + 0x30);
            dStack_210 = *(double *)(lVar14 + 0x38);
            local_1a8 = local_348;
            FUN_1447fea8d(local_178);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar38._8_8_ = -(ulonglong)(0.0 <= dVar23);
            auVar38._0_8_ = -(ulonglong)(0.0 <= dVar26);
            auVar40 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar38);
            dVar23 = (double)(~-(ulonglong)(0.0 <= dVar27) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= dVar27) & 0x3ff0000000000000);
            dVar47 = auVar40._0_8_;
            local_178._8_8_ = (double)local_178._8_8_ * dVar47;
            local_178._0_8_ = (double)local_178._0_8_ * dVar47;
            local_168._0_8_ = (double)local_168._0_8_ * dVar47;
            dVar47 = auVar40._8_8_;
            local_148 = local_148 * dVar47;
            local_158._8_8_ = (double)local_158._8_8_ * dVar47;
            local_158._0_8_ = dVar47 * (double)local_158._0_8_;
            local_128 = local_128 * dVar23;
            dStack_130 = dStack_130 * dVar23;
            local_138 = dVar23 * local_138;
            FUN_14481fd10(&local_2f8,local_178);
            dVar47 = local_108;
            dVar30 = local_118;
            dVar23 = dStack_110;
          }
          if (ABS(dVar43) <= ABS(dVar26)) {
            uVar8 = auVar41._0_4_;
            uVar69 = auVar41._4_4_;
            if (ABS(dVar26) < ABS(dVar27)) {
              uVar8 = auVar31._0_4_;
              uVar69 = auVar31._4_4_;
            }
          }
          FUN_14016be34(lVar14,local_178);
          dVar26 = (double)local_158._8_8_ - (double)local_168._0_8_;
          dVar43 = (double)local_158._0_8_ - (double)local_178._8_8_;
          dVar27 = (double)local_168._8_8_ - (double)local_178._0_8_;
          iVar7 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
            FUN_14174450c(param_1,iVar7);
          }
          dVar60 = (double)CONCAT44(uVar69,uVar8) * (double)fVar1;
          if (dVar60 <= 0.0) {
            dVar60 = 0.0;
          }
          dVar26 = dVar26 * 0.5;
          dVar43 = dVar43 * 0.5;
          dVar27 = dVar27 * 0.5;
          lVar13 = *param_1;
          plVar10 = (longlong *)((longlong)iVar7 * 0x30);
          *(double *)(lVar13 + 8 + (longlong)plVar10) =
               dVar26 * dVar26 + dVar27 * dVar27 + dVar43 * dVar43;
          *(undefined ***)(lVar13 + (longlong)plVar10) = &PTR_LAB_14a1e1938;
          pdVar22 = (double *)(lVar13 + 0x10 + (longlong)plVar10);
          *pdVar22 = dVar30;
          pdVar22[1] = dVar23;
          *(double *)(lVar13 + 0x20 + (longlong)plVar10) = dVar47;
          *(double *)(lVar13 + 0x28 + (longlong)plVar10) = dVar60;
          lVar14 = lVar14 + 0x50;
          lVar20 = lVar20 + -0x50;
        } while (lVar20 != 0);
      }
      iVar7 = (int)param_2[9];
      iVar12 = (int)param_1[9] + iVar7;
      if (-1 < iVar12) {
        plVar10 = param_1 + 8;
        if (*(int *)((longlong)param_1 + 0x4c) < iVar12) {
          FUN_147102b2a(plVar10);
          iVar7 = (int)param_2[9];
        }
        if (iVar7 != 0) {
          lVar14 = (longlong)iVar7 * 0x70;
          pdVar22 = (double *)(param_2[8] + 0x48);
          do {
            fVar1 = *(float *)(pdVar22 + 3);
            fVar2 = *(float *)((longlong)pdVar22 + 0x1c);
            dVar43 = (double)fVar1;
            if (fVar1 <= fVar2) {
              fVar1 = fVar2;
            }
            dStack_2f0 = (double)(fVar1 + *(float *)(pdVar22 + 4));
            local_2f8 = &PTR_LAB_14a1e1968;
            local_2d8 = pdVar22[-1];
            local_2e8._0_8_ = pdVar22[-3];
            local_2e8._8_8_ = pdVar22[-2];
            local_2c0 = pdVar22[2];
            pdVar11 = &local_2d0;
            local_2d0 = *pdVar22;
            dStack_2c8 = pdVar22[1];
            local_348 = (longlong *)(double)fVar2;
            local_358 = (double)*(float *)(pdVar22 + 4);
            local_2b8 = dVar43;
            local_2b0 = local_348;
            local_2a8 = local_358;
            FUN_144a7484c(pdVar22,local_178);
            local_350 = *(double *)param_3[5];
            dVar26 = *(double *)param_3[4];
            dVar27 = *(double *)(param_3[4] + 8);
            uVar8 = FUN_144a7484c(pdVar11,local_178);
            auVar41 = param_3[4];
            dVar23 = auVar41._0_8_;
            dVar30 = auVar41._8_8_;
            dVar47 = SUB168(param_3[5],0);
            auVar41 = minpd(_DAT_149934d80,auVar41);
            auVar31 = minpd(ZEXT816(0x3ff0000000000000),param_3[5]);
            auVar54._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
            auVar54._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
            iVar7 = movmskpd(uVar8,auVar54);
            auVar57._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
            auVar57._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
            uVar9 = movmskpd((int)pdVar11,auVar57);
            if ((uVar9 & 0x3fffffff) == 0 && iVar7 == 0) {
              dVar63 = *(double *)(param_3[1] + 8);
              dVar60 = *(double *)(param_3[1] + 8);
              dVar25 = *(double *)(*param_3 + 8);
              dVar24 = *(double *)(*param_3 + 8);
              dVar66 = *(double *)*param_3;
              dVar58 = *(double *)(*param_3 + 8);
              dVar64 = *(double *)param_3[1];
              dVar29 = *(double *)param_3[1];
              dVar28 = *(double *)param_3[1];
              dVar59 = (double)local_168._0_8_ * dVar28;
              dVar65 = (double)local_178._8_8_ * dVar29 * -1.0 +
                       (double)local_168._0_8_ * dVar25 +
                       (double)local_168._8_8_ * *(double *)*param_3 * 1.0 +
                       (double)local_178._0_8_ * dVar63;
              dVar67 = (double)local_178._0_8_ * dVar28 * 1.0 +
                       (double)local_168._8_8_ * dVar24 +
                       (double)local_168._0_8_ * *(double *)*param_3 * -1.0 +
                       (double)local_178._8_8_ * dVar60;
              local_168._0_8_ =
                   (double)local_168._8_8_ * dVar29 * 1.0 +
                   ((*(double *)*param_3 * (double)local_178._8_8_ * 1.0 +
                    (double)local_168._0_8_ * dVar63) - (double)local_178._0_8_ * dVar25);
              local_168._8_8_ =
                   dVar59 * -1.0 +
                   ((*(double *)*param_3 * (double)local_178._0_8_ * -1.0 +
                    (double)local_168._8_8_ * dVar60) - (double)local_178._8_8_ * dVar24);
              dVar23 = dVar23 * (double)local_2e8._0_8_;
              dVar30 = dVar30 * (double)local_2e8._8_8_;
              dVar47 = local_2d8 * dVar47;
              dVar28 = dVar30 * dVar66 - dVar23 * dVar58;
              dVar29 = dVar47 * dVar58 - dVar30 * dVar64;
              dVar24 = dVar23 * dVar64 - dVar47 * dVar66;
              dVar29 = dVar29 + dVar29;
              dVar24 = dVar24 + dVar24;
              dVar28 = dVar28 + dVar28;
              dVar25 = (dVar28 * dVar58 - dVar64 * dVar24) + dVar63 * dVar29 + dVar23 +
                       *(double *)param_3[2];
              dVar30 = (dVar29 * dVar64 - dVar28 * dVar66) + dVar60 * dVar24 + dVar30 +
                       *(double *)(param_3[2] + 8);
              dVar23 = (dVar24 * dVar66 - dVar58 * dVar29) + dVar63 * dVar28 + dVar47 +
                       *(double *)param_3[3];
            }
            else {
              dVar28 = *(double *)*param_3;
              dVar29 = *(double *)(*param_3 + 8);
              dVar66 = *(double *)param_3[1];
              dVar58 = dVar29 + dVar29;
              dVar64 = dVar66 + dVar66;
              dVar25 = dVar28 * (dVar28 + dVar28);
              dVar24 = (1.0 - (dVar66 * dVar64 + dVar25)) * dVar30;
              dVar63 = *(double *)*param_3 * dVar64;
              dVar60 = *(double *)(param_3[1] + 8);
              dVar65 = dVar64 * dVar60;
              dVar67 = (dVar28 + dVar28) * *(double *)(param_3[1] + 8);
              dVar60 = dVar58 * dVar60;
              dStack_1b0 = (dVar64 * dVar29 - dVar67) * dVar47;
              local_1b8 = (dVar60 + dVar63) * dVar47;
              local_1c8 = (dVar64 * dVar29 + dVar67) * dVar30;
              local_1f8._8_8_ = (dVar58 * dVar28 + dVar65) * dVar23;
              local_1f8._0_8_ = (1.0 - (dVar66 * dVar64 + dVar29 * dVar58)) * dVar23;
              local_1a8 = (longlong *)((1.0 - (dVar25 + dVar29 * dVar58)) * dVar47);
              local_1e8 = (dVar63 - dVar60) * dVar23;
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar24,0);
              local_1d8._0_8_ = (dVar58 * dVar28 - dVar65) * dVar30;
              local_1d8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = *(undefined8 *)param_3[2];
              uStack_190 = *(undefined8 *)(param_3[2] + 8);
              local_188 = *(undefined8 *)param_3[3];
              uStack_180 = 0x3ff0000000000000;
              dVar24 = (double)local_178._8_8_ + (double)local_178._8_8_;
              dVar63 = (double)local_168._0_8_ + (double)local_168._0_8_;
              dVar60 = (double)local_178._0_8_ * ((double)local_178._0_8_ + (double)local_178._0_8_)
              ;
              dStack_250 = 1.0 - ((double)local_168._0_8_ * dVar63 + dVar60);
              local_228 = 1.0 - (dVar60 + (double)local_178._8_8_ * dVar24);
              dVar60 = ((double)local_178._0_8_ + (double)local_178._0_8_) * (double)local_168._8_8_
              ;
              local_248 = dVar63 * (double)local_178._8_8_ + dVar60;
              local_258 = dVar24 * (double)local_178._0_8_ - dVar63 * (double)local_168._8_8_;
              dVar60 = dVar63 * (double)local_178._8_8_ - dVar60;
              local_268 = (double)local_178._0_8_ * dVar63 - dVar24 * (double)local_168._8_8_;
              local_278._8_8_ = dVar24 * (double)local_178._0_8_ + dVar63 * (double)local_168._8_8_;
              local_278._0_8_ =
                   1.0 - ((double)local_168._0_8_ * dVar63 + (double)local_178._8_8_ * dVar24);
              uStack_260 = 0;
              uStack_240 = 0;
              local_238._8_4_ = SUB84(dVar60,0);
              local_238._0_8_ = dVar24 * (double)local_168._8_8_ + (double)local_178._0_8_ * dVar63;
              local_238._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
              uStack_220 = 0;
              local_218 = (double)local_2e8._0_8_;
              dStack_210 = (double)local_2e8._8_8_;
              local_208._8_8_ = 0x3ff0000000000000;
              local_208._0_8_ = local_2d8;
              FUN_1447fea8d(local_178,local_278,local_1f8);
              FUN_144a1c686(local_178,0x3e45798ee0000000);
              auVar41 = _DAT_149934d80;
              auVar32._8_8_ = -(ulonglong)(0.0 <= dVar30);
              auVar32._0_8_ = -(ulonglong)(0.0 <= dVar23);
              auVar31 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
              dVar23 = (double)(~-(ulonglong)(0.0 <= dVar47) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= dVar47) & 0x3ff0000000000000);
              dVar47 = auVar31._0_8_;
              local_178._8_8_ = (double)local_178._8_8_ * dVar47;
              local_178._0_8_ = (double)local_178._0_8_ * dVar47;
              local_168._0_8_ = (double)local_168._0_8_ * dVar47;
              dVar47 = auVar31._8_8_;
              local_148 = local_148 * dVar47;
              local_158._8_8_ = (double)local_158._8_8_ * dVar47;
              local_158._0_8_ = dVar47 * (double)local_158._0_8_;
              local_128 = local_128 * dVar23;
              dStack_130 = dStack_130 * dVar23;
              local_138 = dVar23 * local_138;
              FUN_14481fd10(&local_298,local_178);
              dVar23 = local_288 * local_288 + local_298 * local_298;
              dVar47 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar45._0_8_ = dVar23 + dVar47;
              auVar45._8_8_ = dVar23 + dVar47;
              auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
              auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
              auVar31 = sqrtpd(auVar45,auVar45);
              auVar41 = divpd(auVar41,auVar31);
              auVar51._0_8_ = auVar41._0_8_ * local_288;
              auVar51._8_8_ = auVar41._8_8_ * dStack_280;
              dVar65 = (double)((ulonglong)(local_298 * auVar41._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
              dVar67 = (double)((ulonglong)(dStack_290 * auVar41._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
              local_168 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar33);
              dVar23 = local_108;
              dVar25 = local_118;
              dVar30 = dStack_110;
            }
            local_178._8_8_ = dVar67;
            local_178._0_8_ = dVar65;
            FUN_1448052ee(local_178,&local_2d0);
            local_2e8._8_8_ = dVar30;
            local_2e8._0_8_ = dVar25;
            local_2b8 = dVar26 * dVar43;
            if (local_2b8 <= 0.0) {
              local_2b8 = 0.0;
            }
            local_2b0 = (longlong *)(dVar27 * (double)local_348);
            if ((double)local_2b0 <= 0.0) {
              local_2b0 = (longlong *)0.0;
            }
            dVar43 = ((dVar43 - local_2b8) + ((double)local_348 - (double)local_2b0)) * 0.5 +
                     local_350 * local_358;
            local_2a8 = 0.0;
            if (0.0 <= dVar43) {
              local_2a8 = dVar43;
            }
            local_2d8 = dVar23;
            FUN_1479b057c(pdVar22 + -9,local_178);
            dVar43 = ((double)local_158._8_8_ - (double)local_168._0_8_) * 0.5;
            dVar27 = ((double)local_158._0_8_ - (double)local_178._8_8_) * 0.5;
            dVar26 = ((double)local_168._8_8_ - (double)local_178._0_8_) * 0.5;
            dVar43 = dVar43 * dVar43 + dVar26 * dVar26 + dVar27 * dVar27;
            iVar7 = (int)param_1[9];
            *(uint *)(param_1 + 9) = iVar7 + 1U;
            dStack_2f0 = dVar43;
            if (*(uint *)((longlong)param_1 + 0x4c) < iVar7 + 1U) {
              FUN_147102b9e(plVar10,iVar7);
            }
            puVar18 = (undefined8 *)(*plVar10 + (longlong)iVar7 * 0x58);
            puVar18[1] = dVar43;
            *puVar18 = &PTR_LAB_14a1e1968;
            puVar15 = (undefined8 *)local_2e8;
            puVar18 = puVar18 + 2;
            for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
              *puVar18 = *puVar15;
              puVar15 = puVar15 + 1;
              puVar18 = puVar18 + 1;
            }
            pdVar22 = pdVar22 + 0xe;
            lVar14 = lVar14 + -0x70;
          } while (lVar14 != 0);
        }
        iVar7 = (int)param_2[7];
        iVar12 = (int)param_1[7] + iVar7;
        if (-1 < iVar12) {
          plVar10 = param_1 + 6;
          if (*(int *)((longlong)param_1 + 0x3c) < iVar12) {
            FUN_140acb1ca(plVar10);
            iVar7 = (int)param_2[7];
          }
          if (iVar7 != 0) {
            plVar17 = (longlong *)param_2[6];
            plVar21 = plVar17 + (longlong)iVar7 * 0x20;
            do {
              if ((int)plVar17[7] != 0) {
                FUN_140acae00(local_178);
                if ((int)local_168._8_4_ < 1) {
LAB_140b5dfb2:
                  dVar47 = 0.0;
                  bVar19 = false;
                  dVar23 = 0.0;
                  dVar43 = 0.0;
                  dVar26 = 0.0;
                  dVar27 = 0.0;
                  dVar30 = 0.0;
                }
                else {
                  lVar14 = 0x10;
                  lVar13 = 0;
                  do {
                    pdVar22 = (double *)(local_168._0_8_ + -0x10 + lVar14);
                    dVar60 = *pdVar22 * *(double *)param_3[4];
                    dVar63 = pdVar22[1] * *(double *)(param_3[4] + 8);
                    dVar30 = *(double *)(local_168._0_8_ + lVar14) * *(double *)param_3[5];
                    dVar27 = *(double *)*param_3;
                    dVar23 = *(double *)(*param_3 + 8);
                    dVar47 = *(double *)param_3[1];
                    dVar26 = *(double *)(param_3[1] + 8);
                    dVar43 = *(double *)(param_3[1] + 8);
                    dVar24 = dVar63 * dVar27 - dVar60 * dVar23;
                    dVar25 = dVar30 * dVar23 - dVar63 * dVar47;
                    dVar28 = dVar60 * dVar47 - dVar27 * dVar30;
                    dVar25 = dVar25 + dVar25;
                    dVar28 = dVar28 + dVar28;
                    dVar24 = dVar24 + dVar24;
                    pdVar22 = (double *)(local_168._0_8_ + -0x10 + lVar14);
                    *pdVar22 = (dVar24 * dVar23 - dVar28 * dVar47) + dVar26 * dVar25 + dVar60;
                    pdVar22[1] = (dVar47 * dVar25 - dVar27 * dVar24) + dVar43 * dVar28 + dVar63;
                    *(double *)(local_168._0_8_ + lVar14) =
                         dVar24 * dVar26 + dVar30 + (dVar28 * dVar27 - dVar25 * dVar23);
                    lVar13 = lVar13 + 1;
                    lVar14 = lVar14 + 0x18;
                  } while (lVar13 < (int)local_168._8_4_);
                  if ((int)local_168._8_4_ < 1) goto LAB_140b5dfb2;
                  bVar19 = true;
                  dVar47 = 0.0;
                  lVar14 = 0;
                  dVar23 = 0.0;
                  dVar26 = 0.0;
                  dVar27 = 0.0;
                  auVar56 = ZEXT816(0);
                  dVar60 = 0.0;
                  do {
                    dVar43 = *(double *)(local_168._0_8_ + lVar14);
                    if (bVar19) {
                      dVar26 = *(double *)(local_168._0_8_ + 8 + lVar14);
                      dVar27 = *(double *)(local_168._0_8_ + 0x10 + lVar14);
                      auVar56._8_8_ = 0;
                      auVar56._0_8_ = dVar43;
                      dVar23 = dVar27;
                      dVar47 = dVar26;
                    }
                    else {
                      if (dVar43 <= auVar56._0_8_) {
                        auVar56._0_8_ = dVar43;
                      }
                      dVar30 = *(double *)(local_168._0_8_ + 8 + lVar14);
                      dVar63 = *(double *)(local_168._0_8_ + 0x10 + lVar14);
                      if (dVar30 <= dVar47) {
                        dVar47 = dVar30;
                      }
                      if (dVar63 <= dVar23) {
                        dVar23 = dVar63;
                      }
                      if (dVar60 <= dVar43) {
                        dVar60 = dVar43;
                      }
                      dVar43 = dVar60;
                      if (dVar26 <= dVar30) {
                        dVar26 = dVar30;
                      }
                      if (dVar27 <= dVar63) {
                        dVar27 = dVar63;
                      }
                    }
                    dVar30 = auVar56._0_8_;
                    lVar14 = lVar14 + 0x18;
                    bVar19 = false;
                    dVar60 = dVar43;
                  } while ((longlong)(int)local_168._8_4_ * 0x18 != lVar14);
                  bVar19 = true;
                }
                dVar25 = *(double *)param_3[2];
                dVar60 = *(double *)(param_3[2] + 8);
                dVar28 = *(double *)param_3[3];
                local_148 = (dVar23 + dVar27) * 0.5;
                dVar63 = (dVar47 + dVar26) * 0.5;
                dVar24 = (dVar43 + dVar30) * 0.5;
                if (bVar19) {
                  lVar14 = 0;
                  do {
                    *(double *)(local_168._0_8_ + lVar14) =
                         *(double *)(local_168._0_8_ + lVar14) - dVar24;
                    *(double *)(local_168._0_8_ + 8 + lVar14) =
                         *(double *)(local_168._0_8_ + 8 + lVar14) - dVar63;
                    *(double *)(local_168._0_8_ + 0x10 + lVar14) =
                         *(double *)(local_168._0_8_ + 0x10 + lVar14) - local_148;
                    lVar14 = lVar14 + 0x18;
                  } while ((ulonglong)(uint)local_168._8_4_ * 0x18 != lVar14);
                }
                dVar60 = dVar60 + dVar63;
                local_148 = local_148 + dVar28;
                local_158._8_4_ = SUB84(dVar60,0);
                local_158._0_8_ = dVar25 + dVar24;
                local_158._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
                local_128 = DAT_14c8463e0;
                dStack_120 = DAT_14c8463e8;
                local_138 = DAT_14c8463d0;
                dStack_130 = DAT_14c8463d8;
                dVar27 = (dVar27 - dVar23) * 0.5;
                dVar26 = (dVar26 - dVar47) * 0.5;
                dVar43 = (dVar43 - dVar30) * 0.5;
                dVar43 = dVar27 * dVar27 + dVar43 * dVar43 + dVar26 * dVar26;
                iVar7 = (int)param_1[7];
                *(uint *)(param_1 + 7) = iVar7 + 1U;
                local_348 = plVar21;
                local_178._8_8_ = dVar43;
                if (*(uint *)((longlong)param_1 + 0x3c) < iVar7 + 1U) {
                  FUN_147102c2e(plVar10,iVar7);
                }
                lVar14 = *plVar10;
                lVar20 = (longlong)iVar7 * 0x60;
                *(undefined8 *)(lVar14 + 8 + lVar20) = local_178._8_8_;
                *(undefined ***)(lVar14 + lVar20) = &PTR_LAB_14a1e27b0;
                auVar3._8_8_ = 0;
                auVar3._0_8_ = (longlong)(int)local_168._8_4_;
                lVar13 = SUB168(auVar3 * ZEXT816(0x18),0);
                lVar13 = lVar13 + (ulonglong)(lVar13 == 0);
                if (SUB168(auVar3 * ZEXT816(0x18),8) != 0) {
                  lVar13 = -1;
                }
                _Dst = (void *)FUN_14001cc68(lVar13,0x10);
                *(void **)(lVar14 + 0x10 + lVar20) = _Dst;
                *(undefined4 *)(lVar14 + 0x18 + lVar20) = local_168._8_4_;
                *(double *)(lVar14 + 0x30 + lVar20) = local_148;
                puVar18 = (undefined8 *)(lVar14 + 0x20 + lVar20);
                *puVar18 = local_158._0_8_;
                puVar18[1] = local_158._8_8_;
                pdVar22 = (double *)(lVar14 + 0x40 + lVar20);
                *pdVar22 = local_138;
                pdVar22[1] = dStack_130;
                pdVar22 = (double *)(lVar14 + 0x50 + lVar20);
                *pdVar22 = local_128;
                pdVar22[1] = dStack_120;
                uVar5 = local_168._0_8_;
                memcpy(_Dst,(void *)local_168._0_8_,(longlong)(int)local_168._8_4_ * 0x18);
                local_178._0_8_ = &PTR_LAB_14a1e27b0;
                plVar21 = local_348;
                if ((void *)uVar5 != (void *)0x0) {
                  FUN_1400020a8(uVar5);
                  plVar21 = local_348;
                }
              }
              plVar17 = plVar17 + 0x20;
            } while (plVar17 != plVar21);
          }
          if ((local_f0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return param_1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar12);
}



// FUNCTION 140b5f2ca FUN_140b5f2ca body=701 status=ok
// SIG undefined FUN_140b5f2ca(void)

void FUN_140b5f2ca(longlong param_1,double *param_2,double param_3,char param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (param_4 != '\0') {
    *(double *)(param_1 + 0x20) = *param_2 * *(double *)(param_1 + 0x20);
    *(double *)(param_1 + 0x28) = param_2[1] * *(double *)(param_1 + 0x28);
    *(double *)(param_1 + 0x30) = param_2[2] * *(double *)(param_1 + 0x30);
  }
  dVar11 = *param_2;
  dVar12 = param_2[1];
  dVar8 = 0.0;
  dVar10 = ABS(dVar11);
  if (ABS(dVar11) <= param_3) {
    dVar10 = param_3;
  }
  *param_2 = dVar10 * (double)(-(ulonglong)(0.0 < dVar11) & 0x3ff0000000000000 |
                              ~-(ulonglong)(0.0 < dVar11) &
                              -(ulonglong)(dVar11 < 0.0) & 0xbff0000000000000);
  dVar11 = ABS(dVar12);
  if (ABS(dVar12) <= param_3) {
    dVar11 = param_3;
  }
  param_2[1] = dVar11 * (double)(-(ulonglong)(0.0 < dVar12) & 0x3ff0000000000000 |
                                (ulonglong)
                                (~(uint)(-(ulonglong)(0.0 < dVar12) >> 0x20) &
                                (uint)(-(ulonglong)(dVar12 < 0.0) >> 0x20) & 0xbff00000) << 0x20);
  dVar11 = param_2[2];
  dVar12 = ABS(dVar11);
  if (ABS(dVar11) <= param_3) {
    dVar12 = param_3;
  }
  param_2[2] = dVar12 * (double)(-(ulonglong)(0.0 < dVar11) & 0x3ff0000000000000 |
                                ~-(ulonglong)(0.0 < dVar11) &
                                (ulonglong)((uint)(-(ulonglong)(dVar11 < 0.0) >> 0x20) & 0xbff00000)
                                << 0x20);
  if (*(int *)(param_1 + 0x18) < 1) {
    dVar12 = 0.0;
    dVar11 = 0.0;
    dVar10 = 0.0;
    dVar9 = 0.0;
    dVar13 = 0.0;
  }
  else {
    lVar5 = 0x10;
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x10);
      *(double *)(lVar4 + -0x10 + lVar5) = *param_2 * *(double *)(lVar4 + -0x10 + lVar5);
      *(double *)(lVar4 + -8 + lVar5) = param_2[1] * *(double *)(lVar4 + -8 + lVar5);
      *(double *)(lVar4 + lVar5) = param_2[2] * *(double *)(lVar4 + lVar5);
      lVar6 = lVar6 + 1;
      iVar3 = *(int *)(param_1 + 0x18);
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < iVar3);
    dVar12 = 0.0;
    dVar11 = 0.0;
    dVar10 = 0.0;
    dVar9 = 0.0;
    dVar13 = 0.0;
    if (0 < iVar3) {
      lVar5 = *(longlong *)(param_1 + 0x10);
      bVar7 = true;
      dVar8 = 0.0;
      lVar6 = 0;
      uVar14 = 0;
      uVar16 = 0;
      dVar9 = 0.0;
      do {
        dVar11 = *(double *)(lVar5 + lVar6);
        uVar15 = SUB84(dVar11,0);
        uVar17 = (undefined4)((ulonglong)dVar11 >> 0x20);
        if (bVar7) {
          dVar8 = *(double *)(lVar5 + 8 + lVar6);
          dVar12 = *(double *)(lVar5 + 0x10 + lVar6);
          dVar10 = dVar8;
          dVar13 = dVar11;
          dVar9 = dVar12;
        }
        else {
          if (dVar11 <= dVar13) {
            dVar13 = dVar11;
          }
          dVar1 = *(double *)(lVar5 + 8 + lVar6);
          dVar2 = *(double *)(lVar5 + 0x10 + lVar6);
          if (dVar1 <= dVar8) {
            dVar8 = dVar1;
          }
          if (dVar2 <= dVar12) {
            dVar12 = dVar2;
          }
          if ((double)CONCAT44(uVar16,uVar14) <= dVar11) {
            uVar14 = uVar15;
            uVar16 = uVar17;
          }
          if (dVar10 <= dVar1) {
            dVar10 = dVar1;
          }
          if (dVar9 <= dVar2) {
            dVar9 = dVar2;
          }
          dVar11 = (double)CONCAT44(uVar16,uVar14);
          uVar15 = uVar14;
          uVar17 = uVar16;
        }
        lVar6 = lVar6 + 0x18;
        bVar7 = false;
        uVar14 = uVar15;
        uVar16 = uVar17;
      } while ((longlong)iVar3 * 0x18 != lVar6);
    }
  }
  dVar12 = (dVar9 - dVar12) * 0.5 + (dVar12 + dVar9) * 0.5;
  dVar8 = (dVar10 - dVar8) * 0.5 + (dVar8 + dVar10) * 0.5;
  dVar11 = (dVar11 - dVar13) * 0.5 + (dVar11 + dVar13) * 0.5;
  *(double *)(param_1 + 8) = SQRT(dVar12 * dVar12 + dVar11 * dVar11 + dVar8 * dVar8);
  return;
}



// FUNCTION 140b5f596 FUN_140b5f596 body=156 status=ok
// SIG undefined FUN_140b5f596(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b5f596(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b198220;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b5f632 FUN_140b5f632 body=84 status=ok
// SIG undefined FUN_140b5f632(void)

void FUN_140b5f632(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_140b5f688(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b5f688 FUN_140b5f688 body=84 status=ok
// SIG undefined FUN_140b5f688(void)

void FUN_140b5f688(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f774(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f80c(param_2 + 0x30,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f6dc(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 140b5f6dc FUN_140b5f6dc body=151 status=ok
// SIG undefined FUN_140b5f6dc(void)

void FUN_140b5f6dc(short *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_1) goto LAB_140b5f70f;
      plVar7 = plVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_140b5f70f:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 6);
  uVar5 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)
           (*plVar7 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar7 + 0x1c));
  *puVar1 = *(undefined4 *)(param_1 + 2);
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if ((char)param_1[10] == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140b5f762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140b5f774 FUN_140b5f774 body=151 status=ok
// SIG undefined FUN_140b5f774(void)

void FUN_140b5f774(short *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_1) goto LAB_140b5f7a7;
      plVar7 = plVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_140b5f7a7:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 6);
  uVar5 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)
           (*plVar7 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar7 + 0x1c));
  *puVar1 = *(undefined4 *)(param_1 + 2);
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if ((char)param_1[10] == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140b5f7fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140b5f80c FUN_140b5f80c body=151 status=ok
// SIG undefined FUN_140b5f80c(void)

void FUN_140b5f80c(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_140b5f83f;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_140b5f83f:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 4);
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140b5f892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140b5f8a4 FUN_140b5f8a4 body=233 status=ok
// SIG undefined FUN_140b5f8a4(void)

undefined8 * FUN_140b5f8a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140b5f98e(param_1 + 0x58,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if (local_28 == 0) {
    puVar3 = &DAT_14cb84e30;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb84e40) {
      FUN_144b3d300(&DAT_14cb84e40);
      if (DAT_14cb84e40 == -1) {
        DAT_14cb84e30 = 0;
        uRam000000014cb84e38 = 0;
        atexit((_func_5014 *)&LAB_143dbe244);
        _Init_thread_footer(&DAT_14cb84e40);
      }
    }
  }
  else {
    puVar3 = (undefined8 *)(local_28 + 0x68);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b5f98e FUN_140b5f98e body=83 status=ok
// SIG undefined FUN_140b5f98e(void)

longlong * FUN_140b5f98e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1409388d8();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140b5f9e2 FUN_140b5f9e2 body=791 status=ok
// SIG undefined FUN_140b5f9e2(void)

void FUN_140b5f9e2(longlong param_1,longlong *param_2,float param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cacbb10 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463a1b5a;
      local_58 = &LAB_147903fa7;
      local_60 = &LAB_1459b1fdd;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x1e8;
      FUN_14081cfa3(L"/Script/Engine",L"AnimMontage",&DAT_14cacbb10,FUN_1463a4b6e);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cacbb10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cacbb10 + 0x38) * 8) !=
        DAT_14cacbb10 + 0x30)) {
      fVar6 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
      if (0.0 < fVar6) {
        *(undefined8 *)(param_1 + 8) = 0;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        *(longlong **)(param_1 + 0x28) = param_2;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        uVar7 = (**(code **)(*param_2 + 0x2b0))(param_2);
        *(undefined4 *)(param_1 + 0x20) = uVar7;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
      }
    }
    else if (0 < (int)param_2[0x2e]) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong **)(param_1 + 8) = param_2;
      *(int *)(param_1 + 0x10) = param_4;
      plVar4 = (longlong *)(param_2[0x2d] + (longlong)param_4 * 0x18 + 8);
      iVar2 = FUN_140cc2d5e(plVar4,param_3);
      *(int *)(param_1 + 0x14) = iVar2;
      if (iVar2 == -1) {
        *(float *)(param_1 + 0x24) = param_3;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x1c) = 0xbf800000bf800000;
        *(undefined2 *)(param_1 + 0x18) = 0;
      }
      else {
        lVar3 = *plVar4;
        plVar4 = (longlong *)(lVar3 + (longlong)iVar2 * 0x40);
        lVar3 = *(longlong *)(lVar3 + (longlong)iVar2 * 0x40);
        if (DAT_14c950c29 == '\x01') {
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar3 = *plVar4;
          }
        }
        *(longlong *)(param_1 + 0x28) = lVar3;
        fVar6 = *(float *)(plVar4 + 1);
        *(float *)(param_1 + 0x1c) = fVar6;
        if (*plVar4 == 0) {
          fVar8 = 1.0;
        }
        else {
          fVar8 = *(float *)(*plVar4 + 0xb0);
        }
        fVar8 = ABS(fVar8 * *(float *)((longlong)plVar4 + 0x14));
        uVar5 = -(uint)(fVar8 <= 1e-08);
        fVar8 = ((float)(int)plVar4[3] *
                (*(float *)(plVar4 + 2) - *(float *)((longlong)plVar4 + 0xc))) /
                (float)(uVar5 & 0x3f800000 | ~uVar5 & (uint)fVar8);
        *(float *)(param_1 + 0x20) = fVar8;
        cVar1 = *(char *)(param_1 + 0x19);
        if (cVar1 != '\0') {
          if (cVar1 == '\x02') {
            if ((fVar8 == 0.0) && (!NAN(fVar8))) {
              *(undefined4 *)(param_1 + 0x24) = 0;
              goto LAB_140b5fbb3;
            }
            param_3 = (param_3 - fVar6) / fVar8;
          }
          else {
            if (cVar1 != '\x01') goto LAB_140b5fbb3;
            param_3 = param_3 - fVar6;
          }
        }
        *(float *)(param_1 + 0x24) = param_3;
      }
    }
  }
LAB_140b5fbb3:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b5fd22 FUN_140b5fd22 body=81 status=ok
// SIG undefined FUN_140b5fd22(void)

undefined4 FUN_140b5fd22(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  uVar6 = FUN_140b5fd74();
  uVar5 = FUN_1448093f4(uVar3,uVar6);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return uVar5;
}



// FUNCTION 140b5fd74 FUN_140b5fd74 body=57 status=ok
// SIG undefined FUN_140b5fd74(void)

void FUN_140b5fd74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a9f0 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a9f0 = FUN_140002ddd(FUN_14641941c,uVar1,L"SpawnerStyleDef_Bunch");
  }
  return;
}



// FUNCTION 140b5fdae FUN_140b5fdae body=592 status=ok
// SIG undefined FUN_140b5fdae(void)

longlong * FUN_140b5fdae(longlong *param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = 0;
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  lVar5 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar5 + local_24;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < local_24) {
    FUN_1447403be(param_1);
  }
  (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_24);
  iVar7 = FUN_1448332aa(param_2,&DAT_14aba4b38);
  *(int *)((longlong)param_1 + 0x34) = iVar7;
  *(bool *)((longlong)param_1 + 0x39) = 0 < iVar7;
  if ((0 < iVar7) && (FUN_140b60062(param_2,param_1 + 2), (int)param_1[3] != param_3)) {
    *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  }
  cVar6 = FUN_140b5ffff();
  *(char *)(param_1 + 7) = cVar6;
  if (cVar6 == '\0') goto LAB_140b5ff12;
  plVar8 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14aba4b50;
  plVar8[10] = 0;
  plVar8[0xb] = 0x400000000;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[0xc] = 0;
  if (plVar8 + 2 != param_1) {
    plVar8[2] = *param_1;
    *param_1 = 0;
    *(int *)(plVar8 + 3) = (int)param_1[1];
    *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
  }
  if (plVar8 == (longlong *)0x0) {
    param_1[4] = 0x10;
    plVar9 = (longlong *)param_1[5];
    if (plVar9 == (longlong *)0x0) goto LAB_140b5ff12;
    param_1[5] = 0;
LAB_140b5ff78:
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_140b5ff12;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[4] = (longlong)(plVar8 + 2);
    plVar9 = (longlong *)param_1[5];
    if (plVar8 == plVar9) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    else {
      param_1[5] = (longlong)plVar8;
      if (plVar9 != (longlong *)0x0) goto LAB_140b5ff78;
    }
  }
  LOCK();
  plVar9 = plVar8 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar3 = (int *)((longlong)plVar8 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_140b5ff12:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b5ffff FUN_140b5ffff body=97 status=ok
// SIG undefined FUN_140b5ffff(void)

ulonglong FUN_140b5ffff(void)

{
  ulonglong uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446f470e(&local_18,L"HavokWin64",1);
  uVar1 = FUN_1402ca054(local_18,L"HavokGeneric",0xc);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b60062 FUN_140b60062 body=374 status=ok
// SIG undefined FUN_140b60062(void)

longlong * FUN_140b60062(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140b60414(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_140b60221(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_140b60414(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_140b601da(param_2);
        FUN_140b60221(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b601da FUN_140b601da body=70 status=ok
// SIG undefined FUN_140b601da(void)

longlong FUN_140b601da(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147e4b622(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_140b60220(lVar2,1);
  return lVar2;
}



// FUNCTION 140b60220 FUN_140b60220 body=1 status=ok
// SIG undefined FUN_140b60220(void)

void FUN_140b60220(void)

{
  return;
}



// FUNCTION 140b60221 FUN_140b60221 body=499 status=ok
// SIG undefined FUN_140b60221(void)

longlong * FUN_140b60221(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_1 + 5) & 4) == 0) {
      return param_1;
    }
    (**(code **)(*param_1 + 0x218))(param_1,&DAT_14ab6777c);
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
      }
      else {
        thunk_FUN_14572512c(param_1,param_2);
      }
    }
    else {
      *param_2 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      param_2[1] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  else {
    iVar2 = FUN_1448332aa(param_1,&DAT_14ab6777c);
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
      }
      else {
        thunk_FUN_14572512c(param_1,param_2);
      }
    }
    else {
      *param_2 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      param_2[1] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    if (iVar2 < 1) {
      param_2[2] = 0;
      return param_1;
    }
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140b60414 FUN_140b60414 body=332 status=ok
// SIG undefined FUN_140b60414(void)

void FUN_140b60414(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140b60482;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_140b60482:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0xc)) {
      uVar5 = uVar3 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0xc,4);
  }
  return;
}



// FUNCTION 140b6056e FUN_140b6056e body=40 status=ok
// SIG undefined FUN_140b6056e(void)

undefined8 FUN_140b6056e(undefined8 param_1,int param_2)

{
  FUN_140b60596();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b60596 FUN_140b60596 body=69 status=ok
// SIG undefined FUN_140b60596(void)

void FUN_140b60596(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0376a0;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_140b605dc(param_1);
  return;
}



// FUNCTION 140b605dc FUN_140b605dc body=302 status=ok
// SIG undefined FUN_140b605dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b605dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b039520;
  param_1[0x1f] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (*(int *)((longlong)param_1 + 0x114) != 0) {
    FUN_140115c12(param_1 + 0x21,0);
  }
  param_1[0x20] = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140b606d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140b6070a FUN_140b6070a body=269 status=ok
// SIG undefined FUN_140b6070a(void)

longlong FUN_140b6070a(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined **local_88;
  undefined8 local_80;
  undefined1 local_50 [24];
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  uVar2 = FUN_140b60818();
  uVar3 = FUN_140b6087d();
  local_a8 = &local_a0;
  FUN_140b6096c(local_50,param_2 + 0x10,uVar3,uVar2);
  if (local_38 == '\x01') {
    local_98 = DAT_14c758c44;
    iStack_94 = DAT_14c758c48;
    iStack_90 = DAT_14c758c4c;
    iStack_8c = DAT_14c758c50;
    local_88 = &PTR_FUN_149e1d520;
    local_80 = local_a0;
    FUN_140079082(param_2,local_50,&local_98);
    if ((((((iStack_94 != 0 || local_98 != 0) || iStack_90 != 0) || iStack_8c != 0) &&
         (pcVar1 = (code *)*local_88, pcVar1 != FUN_1400791ec)) && (pcVar1 != FUN_14477b052)) &&
       (pcVar1 != FUN_1400791cc)) {
      (*pcVar1)(&local_88,0);
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b60818 FUN_140b60818 body=101 status=ok
// SIG undefined FUN_140b60818(void)

undefined * FUN_140b60818(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8443b0) {
    FUN_144b3d300(&DAT_14c8443b0);
    if (DAT_14c8443b0 == -1) {
      FUN_140b616d6();
      atexit((_func_5014 *)&LAB_14275ea17);
      _Init_thread_footer(&DAT_14c8443b0);
    }
  }
  return &DAT_14c844308;
}



// FUNCTION 140b6087d FUN_140b6087d body=207 status=ok
// SIG undefined FUN_140b6087d(void)

undefined8 FUN_140b6087d(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  local_28 = &DAT_14c872b08;
  FUN_14052bb08(DAT_14c872ce0,L"Internationalization",L"ShouldUseLocalizedNumericInput",&local_19);
  if (local_19 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  lVar5 = FUN_140d5712e();
  puVar3 = *(undefined8 **)(lVar5 + 0x38);
  plVar4 = *(longlong **)(lVar5 + 0x40);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar6 = (**(code **)(*(longlong *)*puVar3 + 0x80))();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 140b6096c FUN_140b6096c body=472 status=ok
// SIG undefined FUN_140b6096c(void)

ulonglong *
FUN_140b6096c(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  uint *local_98;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_7c = 0;
  local_88 = param_4;
  uVar2 = FUN_140b60b46();
  local_68 = 0;
  local_78 = 0xffefffffffffffff;
  local_70 = 0x7fefffffffffffff;
  local_a8 = &local_78;
  local_a0 = &local_68;
  local_98 = &local_7c;
  FUN_140b60baa(param_2[2],param_2[1] - param_2[2] >> 1,param_3,uVar2);
  uVar2 = local_68;
  local_80 = 0;
  uVar3 = FUN_140b60b46();
  local_68 = 0;
  local_78 = 0xffefffffffffffff;
  local_70 = 0x7fefffffffffffff;
  local_a8 = &local_78;
  local_a0 = &local_68;
  local_98 = &local_80;
  FUN_140b60baa(param_2[2],param_2[1] - param_2[2] >> 1,local_88,uVar3);
  if ((int)local_7c < (int)local_80) {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = local_68;
    }
    if (0 < (int)local_80) {
      uVar4 = param_2[2];
      if ((*param_2 <= uVar4) && (uVar4 <= param_2[1] + (ulonglong)local_80 * -2)) {
        uVar6 = uVar4 - *param_2;
        uVar5 = uVar4 + (ulonglong)local_80 * 2;
        goto LAB_140b60aa6;
      }
    }
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = uVar2;
    }
    if (0 < (int)local_7c) {
      uVar4 = param_2[2];
      if ((*param_2 <= uVar4) && (uVar4 <= param_2[1] + (ulonglong)local_7c * -2)) {
        uVar6 = uVar4 - *param_2;
        uVar5 = uVar4 + (ulonglong)local_7c * 2;
LAB_140b60aa6:
        *param_1 = uVar4;
        param_1[1] = uVar5;
        *(undefined4 *)(param_1 + 2) = 0;
        *(int *)((longlong)param_1 + 0x14) = (int)(uVar6 >> 1);
        uVar1 = 1;
        goto LAB_140b60abd;
      }
    }
  }
  uVar1 = 0;
LAB_140b60abd:
  *(undefined1 *)(param_1 + 3) = uVar1;
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b60b46 FUN_140b60b46 body=100 status=ok
// SIG undefined FUN_140b60b46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b60b46(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844838) {
    FUN_144b3d300(&DAT_14c844838);
    if (DAT_14c844838 == -1) {
      _DAT_14c844834 = 0;
      DAT_14c844836 = 0;
      _Init_thread_footer(&DAT_14c844838);
    }
  }
  return &DAT_14c844834;
}



// FUNCTION 140b60baa FUN_140b60baa body=1308 status=ok
// SIG undefined FUN_140b60baa(void)

ulonglong FUN_140b60baa(ulonglong param_1,int param_2,ulonglong param_3,char *param_4,
                       double *param_5,double *param_6,int *param_7)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_378 [32];
  wchar_t **local_358;
  wchar_t **local_350;
  ulonglong *local_348;
  byte *local_340;
  wchar_t **local_338;
  byte *local_330;
  ulonglong local_320;
  undefined1 local_313;
  byte local_312;
  byte local_311;
  ulonglong local_310;
  byte local_301;
  wchar_t *local_300;
  byte local_2f2;
  byte local_2f1;
  wchar_t *local_2f0 [4];
  longlong local_2d0;
  longlong local_2c0;
  longlong local_2b0;
  longlong local_2a0;
  longlong local_270;
  longlong local_260;
  longlong local_250;
  longlong local_240;
  longlong local_210;
  longlong local_200;
  longlong local_1f0;
  longlong local_1e0;
  longlong local_1b0;
  longlong local_1a0;
  longlong local_190;
  longlong local_180;
  ulonglong local_170;
  wchar_t *local_168;
  wchar_t *local_160;
  ulonglong *local_158;
  undefined1 local_150;
  wchar_t local_148 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  lVar1 = param_1 + (longlong)param_2 * 2;
  local_320 = param_1;
  local_170 = param_1;
  FUN_140b610c8(local_2f0,param_3);
  local_348 = (ulonglong *)&local_2f1;
  local_2f1 = 0;
  local_340 = &local_2f2;
  local_2f2 = 0;
  local_338 = &local_300;
  local_300 = (wchar_t *)0x0;
  local_330 = &local_301;
  local_301 = 0;
  local_168 = (wchar_t *)
              (CONCAT71(local_168._1_7_,*param_4 << 3 | param_4[1] << 4 | param_4[2] << 5) | 7);
  local_350 = (wchar_t **)CONCAT44(local_350._4_4_,0x14);
  local_358 = &local_168;
  bVar2 = FUN_140b61119(&local_170,lVar1,param_3,local_2f0);
  bVar4 = local_2f2 ^ 1;
  if ((bVar4 == 0) && (DAT_14c758768 != 0)) {
    local_310 = local_320;
    local_168 = local_148;
    local_150 = 0;
    local_158 = &local_48;
    local_358 = local_2f0;
    local_350 = &local_168;
    local_160 = local_168;
    cVar3 = FUN_1467c5800(&local_310,lVar1,param_3,param_4);
    if (cVar3 != '\0') {
      dVar5 = wcstod(local_168,(wchar_t **)0x0);
      *param_6 = dVar5;
      *param_7 = param_2;
      FUN_144724f3c(&local_168);
      param_3 = CONCAT71((int7)(param_3 >> 8),1);
      goto LAB_140b60d83;
    }
    FUN_144724f3c(&local_168);
  }
  cVar3 = '\0';
  local_310 = local_310 & 0xffffffffffffff00;
  local_168 = (wchar_t *)0x0;
  local_312 = 0;
  if ((bVar2 & bVar4) == 0) {
LAB_140b60cc1:
    bVar2 = 0;
  }
  else {
    cVar3 = '\x01';
    if ((local_170 <= local_320) || (*(short *)(local_170 - 2) != *(short *)(param_3 + 0x72)))
    goto LAB_140b60cc1;
    local_358 = (wchar_t **)&local_313;
    local_313 = 2;
    local_330 = &local_312;
    local_340 = &local_311;
    local_348 = &local_310;
    local_350 = (wchar_t **)CONCAT44(local_350._4_4_,0x12);
    local_338 = &local_168;
    cVar3 = FUN_140b61119(&local_170,lVar1,param_3,local_2f0);
    bVar2 = (byte)local_310;
  }
  auVar6._8_4_ = (int)((ulonglong)local_168 >> 0x20);
  auVar6._0_8_ = local_168;
  auVar6._12_4_ = 0x45300000;
  dVar5 = (((double)CONCAT44(0x43300000,(int)local_168) - 4503599627370496.0) +
          (auVar6._8_8_ - 1.9342813113834067e+25)) /
          (((double)CONCAT44(0x43300000,(int)(&DAT_149e17340)[local_312]) - 4503599627370496.0) +
          ((double)CONCAT44(0x45300000,(int)((ulonglong)(&DAT_149e17340)[local_312] >> 0x20)) -
          1.9342813113834067e+25)) +
          ((double)CONCAT44(0x43300000,(int)local_300) - 4503599627370496.0) +
          ((double)CONCAT44(0x45300000,(int)((ulonglong)local_300 >> 0x20)) - 1.9342813113834067e+25
          );
  if (((bVar2 | local_2f1) & 1) != 0) {
    dVar5 = -dVar5;
  }
  *param_6 = dVar5;
  if (cVar3 == '\x01' && local_301 != (byte)-local_312) {
    if (((param_4[1] != '\x01') || ((param_3 = 0, *param_5 <= dVar5 && (dVar5 <= param_5[1])))) &&
       (param_3 = CONCAT71((int7)(param_3 >> 8),1), param_4[2] == '\x01')) {
      if (param_5[1] <= dVar5) {
        dVar5 = param_5[1];
      }
      if (dVar5 <= *param_5) {
        dVar5 = *param_5;
      }
      *param_6 = dVar5;
    }
  }
  else {
    param_3 = 0;
  }
  if ((param_7 != (int *)0x0) && (local_301 != (byte)-local_312)) {
    *param_7 = (int)(local_170 - local_320 >> 1);
  }
LAB_140b60d83:
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
  if (local_1f0 != 0) {
    FUN_1400020a8();
  }
  if (local_200 != 0) {
    FUN_1400020a8();
  }
  if (local_210 != 0) {
    FUN_1400020a8();
  }
  if (local_240 != 0) {
    FUN_1400020a8();
  }
  if (local_250 != 0) {
    FUN_1400020a8();
  }
  if (local_260 != 0) {
    FUN_1400020a8();
  }
  if (local_270 != 0) {
    FUN_1400020a8();
  }
  if (local_2a0 != 0) {
    FUN_1400020a8();
  }
  if (local_2b0 != 0) {
    FUN_1400020a8();
  }
  if (local_2c0 != 0) {
    FUN_1400020a8();
  }
  if (local_2d0 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return param_3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b610c8 FUN_140b610c8 body=81 status=ok
// SIG undefined FUN_140b610c8(void)

longlong FUN_140b610c8(longlong param_1,undefined8 param_2)

{
  FUN_140236862(param_1,param_2,0);
  FUN_140236862(param_1 + 0x60,param_2,1);
  FUN_140236862(param_1 + 0xc0,param_2,2);
  FUN_140236862(param_1 + 0x120,param_2,3);
  return param_1;
}



// FUNCTION 140b61119 FUN_140b61119 body=518 status=ok
// SIG undefined FUN_140b61119(void)

ulonglong FUN_140b61119(undefined8 *param_1,short *param_2,longlong param_3,undefined8 param_4,
                       byte *param_5,int param_6,undefined1 *param_7,undefined1 *param_8,
                       ulonglong *param_9,byte *param_10)

{
  byte bVar1;
  short sVar2;
  short *psVar3;
  char cVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  *param_10 = 0;
  uVar6 = (undefined7)((ulonglong)param_9 >> 8);
  if (*(short *)*param_1 == 0) {
    uVar5 = CONCAT71(uVar6,1);
    goto LAB_140b61268;
  }
  cVar4 = FUN_140b61320(param_4,param_1,param_7);
  bVar1 = *param_5;
  if ((cVar4 == '\0') || ((bVar1 & 1) != 0)) {
    psVar3 = (short *)*param_1;
    while ((psVar3 < param_2 && (sVar2 = *psVar3, sVar2 != *(short *)(param_3 + 0x72)))) {
      if (sVar2 == *(short *)(param_3 + 0x70)) {
        if ((*param_5 & 8) == 0) goto LAB_140b612f4;
        *param_1 = psVar3 + 1;
      }
      else {
        lVar9 = 0;
        lVar8 = 0;
        while ((sVar2 != *(short *)(param_3 + 0x78 + lVar9) &&
               (sVar2 != *(short *)((longlong)&DAT_149e173e0 + lVar9)))) {
          lVar8 = lVar8 + -1;
          lVar9 = lVar9 + 2;
          if (lVar8 == -10) {
            uVar5 = CONCAT71(uVar6,1);
            goto LAB_140b6123f;
          }
        }
        *param_1 = psVar3 + 1;
        if ((int)(uint)*param_10 < param_6) {
          *param_10 = *param_10 + 1;
          uVar5 = *param_9;
          uVar7 = uVar5 * 10 - lVar8;
          if (((bVar1 & 0x30) != 0) &&
             (((uVar5 != 0 && (uVar7 <= uVar5)) && (*param_8 = 1, (*param_5 & 0x10) != 0))))
          goto LAB_140b612f4;
          *param_9 = uVar7;
        }
        else if (((bVar1 & 0x30) != 0) && (*param_8 = 1, (*param_5 & 0x10) != 0))
        goto LAB_140b612f4;
      }
      psVar3 = (short *)*param_1;
    }
    uVar5 = 0;
LAB_140b6123f:
    if (*psVar3 == *(short *)(param_3 + 0x72)) {
      if ((*param_5 & 4) == 0) goto LAB_140b612f4;
      *param_1 = psVar3 + 1;
    }
    cVar4 = FUN_140b61532(param_4,param_1,param_7);
    if ((cVar4 == '\0') || (uVar5 = 0, (*param_5 & 2) != 0)) {
      uVar5 = uVar5 ^ 1;
    }
  }
  else {
LAB_140b612f4:
    uVar5 = 0;
  }
LAB_140b61268:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140b61320 FUN_140b61320 body=298 status=ok
// SIG undefined FUN_140b61320(void)

undefined1 FUN_140b61320(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar1 = FUN_14023676e();
  cVar2 = FUN_140b6144a(param_2,param_3,uVar1,0);
  if (cVar2 == '\0') {
    uVar1 = FUN_140b614b8(param_1);
    cVar2 = FUN_140b6144a(param_2,param_3,uVar1,1);
    if (cVar2 == '\0') {
      uVar1 = FUN_14023676e(param_1 + 0x60);
      cVar2 = FUN_140b6144a(param_2,param_3,uVar1,0);
      if (cVar2 == '\0') {
        uVar1 = FUN_140b614b8(param_1 + 0x60);
        cVar2 = FUN_140b6144a(param_2,param_3,uVar1,1);
        if (cVar2 == '\0') {
          uVar1 = FUN_14023676e(param_1 + 0xc0);
          cVar2 = FUN_140b6144a(param_2,param_3,uVar1,0);
          if (cVar2 == '\0') {
            uVar1 = FUN_140b614b8(param_1 + 0xc0);
            cVar2 = FUN_140b6144a(param_2,param_3,uVar1,1);
            if (cVar2 == '\0') {
              uVar1 = FUN_14023676e(param_1 + 0x120);
              cVar2 = FUN_140b6144a(param_2,param_3,uVar1,0);
              if (cVar2 == '\0') {
                uVar1 = FUN_140b614b8(param_1 + 0x120);
                uVar3 = FUN_140b6144a(param_2,param_3,uVar1,1);
                return uVar3;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140b6144a FUN_140b6144a body=110 status=ok
// SIG undefined FUN_140b6144a(void)

undefined8 FUN_140b6144a(longlong *param_1,byte *param_2,undefined8 *param_3,byte param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  wchar_t *_Str2;
  
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = 0;
  uVar3 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  if (0 < (int)uVar3) {
    if (iVar1 == 0) {
      _Str2 = L"";
    }
    else {
      _Str2 = (wchar_t *)*param_3;
    }
    iVar1 = wcsncmp((wchar_t *)*param_1,_Str2,(ulonglong)uVar3);
    uVar2 = 0;
    if (iVar1 == 0) {
      *param_2 = *param_2 | param_4;
      iVar1 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar1 = 0;
      }
      *param_1 = *param_1 + (longlong)iVar1 * 2;
      uVar2 = CONCAT71((int7)((ulonglong)((longlong)iVar1 * 2) >> 8),1);
    }
  }
  return uVar2;
}



// FUNCTION 140b614b8 FUN_140b614b8 body=121 status=ok
// SIG undefined FUN_140b614b8(void)

undefined8 * FUN_140b614b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8449c0) {
    FUN_144b3d300(&DAT_14c8449c0);
    if (DAT_14c8449c0 == -1) {
      DAT_14c8449b0 = 0;
      uRam000000014c8449b8 = 0;
      atexit((_func_5014 *)&LAB_14276140c);
      _Init_thread_footer(&DAT_14c8449c0);
    }
  }
  puVar1 = &DAT_14c8449b0;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
  }
  return puVar1;
}



// FUNCTION 140b61532 FUN_140b61532 body=298 status=ok
// SIG undefined FUN_140b61532(void)

undefined1 FUN_140b61532(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar1 = FUN_1402367e8();
  cVar2 = FUN_140b6144a(param_2,param_3,uVar1,0);
  if (cVar2 == '\0') {
    uVar1 = FUN_140b6165c(param_1);
    cVar2 = FUN_140b6144a(param_2,param_3,uVar1,1);
    if (cVar2 == '\0') {
      uVar1 = FUN_1402367e8(param_1 + 0x60);
      cVar2 = FUN_140b6144a(param_2,param_3,uVar1,0);
      if (cVar2 == '\0') {
        uVar1 = FUN_140b6165c(param_1 + 0x60);
        cVar2 = FUN_140b6144a(param_2,param_3,uVar1,1);
        if (cVar2 == '\0') {
          uVar1 = FUN_1402367e8(param_1 + 0xc0);
          cVar2 = FUN_140b6144a(param_2,param_3,uVar1,0);
          if (cVar2 == '\0') {
            uVar1 = FUN_140b6165c(param_1 + 0xc0);
            cVar2 = FUN_140b6144a(param_2,param_3,uVar1,1);
            if (cVar2 == '\0') {
              uVar1 = FUN_1402367e8(param_1 + 0x120);
              cVar2 = FUN_140b6144a(param_2,param_3,uVar1,0);
              if (cVar2 == '\0') {
                uVar1 = FUN_140b6165c(param_1 + 0x120);
                uVar3 = FUN_140b6144a(param_2,param_3,uVar1,1);
                return uVar3;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140b6165c FUN_140b6165c body=122 status=ok
// SIG undefined FUN_140b6165c(void)

undefined8 * FUN_140b6165c(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8449f0) {
    FUN_144b3d300(&DAT_14c8449f0);
    if (DAT_14c8449f0 == -1) {
      DAT_14c8449e0 = 0;
      uRam000000014c8449e8 = 0;
      atexit((_func_5014 *)&LAB_14276142e);
      _Init_thread_footer(&DAT_14c8449f0);
    }
  }
  puVar1 = &DAT_14c8449e0;
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return puVar1;
}



// FUNCTION 140b616d6 FUN_140b616d6 body=116 status=ok
// SIG undefined FUN_140b616d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b616d6(void)

{
  FUN_1467d5d88(&DAT_14c844308);
  FUN_14020fad6(&DAT_14c844308,&DAT_149e18940);
  FUN_14020fad6(&DAT_14c844318,&DAT_149e1419a);
  FUN_14020fad6(&DAT_14c844358,&DAT_149e06124);
  FUN_14020fad6(&DAT_14c844368,&DAT_149e1419a);
  _DAT_14c844378 = 0x2e002c;
  _DAT_14c84437c = 0x303;
  return;
}



// FUNCTION 140b6174a FUN_140b6174a body=206 status=ok
// SIG undefined FUN_140b6174a(void)

bool FUN_140b6174a(longlong param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  float extraout_XMM0_Da;
  
  if (param_2 == 0) {
    lVar2 = 0x4a0;
    lVar3 = 0x28;
  }
  else {
    lVar2 = 0x920;
    lVar3 = 0x4a8;
  }
  if (*(char *)(param_1 + lVar2) != '\x01') {
    return false;
  }
  lVar3 = lVar3 + param_1;
  if (lVar3 == 0) {
    return false;
  }
  cVar1 = *(char *)(lVar3 + 0x460);
  if (cVar1 == '\x03') {
    cVar1 = FUN_140b61818(param_1);
    if (cVar1 == '\0') {
      return false;
    }
    if (*(char *)(lVar3 + 0x470) == '\x01') {
      lVar2 = *(longlong *)(param_1 + 0x928);
      if (lVar2 == 0) {
        return false;
      }
      fVar5 = (float)FUN_1489ae9f8(lVar2,*(undefined8 *)(lVar3 + 0x468));
      FUN_1489aeb88(lVar2,*(undefined8 *)(lVar3 + 0x468));
      bVar4 = extraout_XMM0_Da < fVar5;
      goto LAB_140b617cf;
    }
    if (*(char *)(lVar3 + 0x471) != '\0') {
      return false;
    }
  }
  else if (cVar1 == '\x02') {
    if (*(char *)(param_1 + 0x94c + (ulonglong)param_2 * 8) != '\x01') {
      return false;
    }
  }
  else if (cVar1 == '\0') {
    return false;
  }
  bVar4 = *(float *)(param_1 + 0x948 + (ulonglong)param_2 * 8) < *(float *)(lVar3 + 0x464);
LAB_140b617cf:
  return !bVar4;
}



// FUNCTION 140b61818 FUN_140b61818 body=64 status=ok
// SIG undefined FUN_140b61818(void)

bool FUN_140b61818(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
      (plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x18))(),
      plVar2 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2), lVar3 != 0)) {
    iVar1 = FUN_14490d72a(lVar3);
    return iVar1 != 3;
  }
  return false;
}



// FUNCTION 140b61858 FUN_140b61858 body=40 status=ok
// SIG undefined FUN_140b61858(void)

undefined8 FUN_140b61858(undefined8 param_1,int param_2)

{
  FUN_140b61880();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b61880 FUN_140b61880 body=130 status=ok
// SIG undefined FUN_140b61880(void)

void FUN_140b61880(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1d16f0;
  param_1[5] = &PTR_FUN_14b1d20f0;
  param_1[6] = &PTR_LAB_14b1d2130;
  param_1[0x55] = &PTR_FUN_14b1d2180;
  param_1[0x56] = &PTR_FUN_14b1d2200;
  param_1[0x57] = &PTR_FUN_14b1d2210;
  FUN_140b61902(param_1[0xc4],*(undefined4 *)(param_1 + 0xc5));
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140b61902 FUN_140b61902 body=47 status=ok
// SIG undefined FUN_140b61902(void)

void FUN_140b61902(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b6193a FUN_140b6193a body=755 status=ok
// SIG undefined FUN_140b6193a(void)

undefined8 * FUN_140b6193a(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_14ac47ef0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 4;
  *(undefined4 *)(param_1 + 0x11) = 0x40000000;
  *(undefined1 *)(param_1 + 0x15) = 3;
  *(char *)(param_1 + 0x16) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 4;
  *(undefined4 *)(param_1 + 0x19) = 0x40000000;
  *(undefined1 *)(param_1 + 0x1d) = 3;
  *(char *)(param_1 + 0x1e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined4 *)(param_1 + 0x21) = 0x40000000;
  *(undefined1 *)(param_1 + 0x25) = 3;
  *(char *)(param_1 + 0x26) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 4;
  *(undefined4 *)(param_1 + 0x29) = 0x40000000;
  *(undefined1 *)(param_1 + 0x2d) = 3;
  *(char *)(param_1 + 0x2e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x34) = 4;
  *(undefined4 *)(param_1 + 0x31) = 0x40000000;
  *(undefined1 *)(param_1 + 0x35) = 3;
  *(char *)(param_1 + 0x36) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 4;
  *(undefined4 *)(param_1 + 0x39) = 0x40000000;
  *(undefined1 *)(param_1 + 0x3d) = 3;
  *(char *)(param_1 + 0x3e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x44) = 4;
  *(undefined4 *)(param_1 + 0x41) = 0x40000000;
  *(undefined1 *)(param_1 + 0x45) = 3;
  *(char *)(param_1 + 0x46) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x4c) = 4;
  *(undefined4 *)(param_1 + 0x49) = 0x40000000;
  *(undefined1 *)(param_1 + 0x4d) = 3;
  *(char *)(param_1 + 0x4e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x54) = 4;
  *(undefined4 *)(param_1 + 0x51) = 0x40000000;
  *(undefined1 *)(param_1 + 0x55) = 3;
  *(char *)(param_1 + 0x56) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  *(undefined2 *)(param_1 + 0x5c) = 4;
  *(undefined4 *)(param_1 + 0x59) = 0x40000000;
  *(undefined1 *)(param_1 + 0x5d) = 3;
  *(char *)(param_1 + 0x5e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  *(undefined2 *)(param_1 + 100) = 4;
  *(undefined4 *)(param_1 + 0x61) = 0x40000000;
  *(undefined1 *)(param_1 + 0x65) = 3;
  *(char *)(param_1 + 0x66) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x67) = 0;
  FUN_140b61c2e(param_1);
  return param_1;
}



// FUNCTION 140b61c2e FUN_140b61c2e body=110 status=ok
// SIG undefined FUN_140b61c2e(void)

void FUN_140b61c2e(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (((((*(char *)(param_1 + 0xb8) == '\0') && (*(char *)(param_1 + 0xf8) == '\0')) &&
       (*(char *)(param_1 + 0x138) == '\0')) &&
      ((*(char *)(param_1 + 0x178) == '\0' && (*(char *)(param_1 + 0x1b8) == '\0')))) &&
     ((*(char *)(param_1 + 0x1f8) == '\0' &&
      ((*(char *)(param_1 + 0x238) == '\0' && (*(char *)(param_1 + 0x278) == '\0')))))) {
    uVar1 = *(undefined1 *)(param_1 + 0x2b8);
  }
  *(undefined1 *)(param_1 + 0x78) = uVar1;
  *(undefined1 *)(param_1 + 0x79) = *(undefined1 *)(param_1 + 0x2f8);
  *(undefined1 *)(param_1 + 0x7b) = *(undefined1 *)(param_1 + 0x338);
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 140b61c9c FUN_140b61c9c body=587 status=ok
// SIG undefined FUN_140b61c9c(void)

void FUN_140b61c9c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x84);
  if (iVar3 != *(int *)(param_1 + 0x80)) {
    FUN_145776648((longlong *)(param_1 + 0x78));
    iVar3 = *(int *)(param_1 + 0x80);
  }
  if (iVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    lVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0xf4 + lVar4) != *(int *)(lVar2 + 0xf0 + lVar4)) {
        FUN_1402b39de(lVar2 + lVar4 + 0xe8);
      }
      if (*(int *)(lVar2 + 0x104 + lVar4) != *(int *)(lVar2 + 0x100 + lVar4)) {
        FUN_14481578e(lVar2 + lVar4 + 0xf8);
      }
      if (*(int *)(lVar2 + 0x124 + lVar4) != *(int *)(lVar2 + 0x120 + lVar4)) {
        FUN_14481578e(lVar2 + lVar4 + 0x118);
      }
      lVar1 = lVar2 + lVar4;
      FUN_140b61f2e(lVar1 + 0x148);
      FUN_140b61ee8(lVar1 + 0x148,*(int *)(lVar1 + 0x150) - *(int *)(lVar1 + 0x17c));
      lVar1 = lVar2 + lVar4;
      FUN_140b61f2e(lVar1 + 0x198);
      FUN_140b61ee8(lVar1 + 0x198,*(int *)(lVar1 + 0x1a0) - *(int *)(lVar1 + 0x1cc));
      if (*(int *)(lVar1 + 0x26c) != *(int *)(lVar1 + 0x268)) {
        FUN_1487b6ffe(lVar2 + lVar4 + 0x260);
      }
      if (*(int *)(lVar2 + 0x27c + lVar4) != *(int *)(lVar2 + 0x278 + lVar4)) {
        FUN_140826346(lVar2 + lVar4 + 0x270);
      }
      lVar4 = lVar4 + 0x280;
    } while ((longlong)iVar3 * 0x280 != lVar4);
  }
  if (*(int *)(param_1 + 0x1a4) != *(int *)(param_1 + 0x1a0)) {
    FUN_1402b39de(param_1 + 0x198);
  }
  if (*(int *)(param_1 + 0xa4) != *(int *)(param_1 + 0xa0)) {
    FUN_14481578e(param_1 + 0x98);
  }
  FUN_145776796(param_1 + 0xa8);
  FUN_1457766ba(param_1 + 0xa8,*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xdc));
  FUN_145776864(param_1 + 0x148);
  FUN_1457766fe(param_1 + 0x148,*(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x17c));
  if (*(int *)(param_1 + 0x264) != *(int *)(param_1 + 0x260)) {
    FUN_140179e18(param_1 + 600);
  }
  FUN_145776932(param_1 + 0x1f8);
  FUN_14577674a(param_1 + 0x1f8,*(int *)(param_1 + 0x200) - *(int *)(param_1 + 0x22c));
  FUN_145776a00(param_1 + 0x288);
  FUN_14577660a(param_1 + 0x288,*(int *)(param_1 + 0x290) - *(int *)(param_1 + 700));
  return;
}



// FUNCTION 140b61ee8 FUN_140b61ee8 body=70 status=ok
// SIG undefined FUN_140b61ee8(void)

void FUN_140b61ee8(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1409c983a(param_1);
  return;
}



// FUNCTION 140b61f2e FUN_140b61f2e body=373 status=ok
// SIG undefined FUN_140b61f2e(void)

void FUN_140b61f2e(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  
  iVar1 = (int)param_1[5];
  if (iVar1 == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = -1;
    plVar8 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar8 = param_1 + 2;
    }
    uVar11 = (ulonglong)(iVar1 + 0x1fU >> 5);
    iVar9 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
    uVar6 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
    do {
      bVar12 = uVar11 == 0;
      uVar11 = uVar11 - 1;
      if (bVar12) goto LAB_140b61f9f;
      iVar9 = iVar9 + 0x20;
      uVar7 = uVar6 & *(uint *)((longlong)plVar8 + uVar11 * 4);
      uVar6 = 0xffffffff;
    } while (uVar7 == 0);
    uVar11 = (ulonglong)uVar7 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar5 = -(((uint)lVar3 ^ 0x3f) + iVar9);
  }
LAB_140b61f9f:
  iVar1 = iVar5 + 1;
  iVar9 = (int)param_1[1];
  if (iVar1 < iVar9) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar11 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar3 = *param_1;
      do {
        iVar9 = (int)uVar11;
        if (iVar5 < iVar9) {
          lVar10 = (longlong)iVar9 * 0x30;
          iVar9 = *(int *)(lVar3 + lVar10);
          iVar2 = *(int *)(lVar3 + 4 + lVar10);
          uVar11 = (ulonglong)iVar2;
          if (uVar11 != 0xffffffffffffffff) {
            *(int *)(lVar3 + uVar11 * 0x30) = iVar9;
          }
          if (iVar9 == -1) {
            *(int *)(param_1 + 6) = iVar2;
          }
          else {
            *(int *)(lVar3 + 4 + (longlong)iVar9 * 0x30) = iVar2;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar11 = (ulonglong)*(uint *)(lVar3 + 4 + (longlong)iVar9 * 0x30);
        }
      } while ((int)uVar11 != -1);
      iVar9 = (int)param_1[1];
    }
    if (iVar9 != iVar1) {
      *(int *)(param_1 + 1) = iVar1;
    }
    *(int *)(param_1 + 5) = iVar1;
    iVar5 = iVar5 + 0x20;
    if (-1 < iVar1) {
      iVar5 = iVar1;
    }
    iVar9 = iVar1;
    if (iVar1 % 0x20 != 0) {
      plVar8 = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[4];
      }
      bVar4 = -(char)(iVar1 % 0x20);
      *(uint *)((longlong)plVar8 + (longlong)(iVar5 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
      iVar9 = (int)param_1[1];
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
    FUN_14494313c(param_1);
    return;
  }
  return;
}



// FUNCTION 140b620a4 FUN_140b620a4 body=503 status=ok
// SIG undefined FUN_140b620a4(void)

void FUN_140b620a4(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  size_t sVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  code *local_70;
  longlong **local_68;
  longlong local_60;
  longlong *local_58;
  uint5 local_50;
  undefined3 uStack_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = DAT_14cb84f20;
  if ((DAT_14cb84f20 != 0) && ((longlong)(int)param_3[1] != 0)) {
    puVar9 = (undefined8 *)*param_3;
    puVar12 = puVar9 + (int)param_3[1];
    do {
      lVar1 = local_60;
      plVar5 = (longlong *)*puVar9;
      if (plVar5 == (longlong *)0x0) {
LAB_140b62203:
        uVar4 = 0;
        uVar13 = 0;
      }
      else {
        sVar3 = strlen((char *)plVar5);
        uVar2 = (uint)sVar3;
        if (uVar2 == 0) goto LAB_140b62203;
        lVar8 = (longlong)(int)uVar2;
        plVar10 = (longlong *)((longlong)plVar5 + lVar8 + -1);
        if (plVar10 < plVar5) {
          lVar15 = 0;
        }
        else {
          uVar7 = 0;
          do {
            if (9 < (byte)((char)*plVar10 - 0x30U)) break;
            uVar7 = uVar7 + 1;
            plVar10 = (longlong *)((longlong)plVar10 + -1);
          } while (plVar5 <= plVar10);
          if ((((uVar7 == 0) || ((int)uVar2 <= (int)uVar7)) || (10 < uVar7)) ||
             ((lVar11 = -(ulonglong)uVar7, *(char *)((longlong)plVar5 + lVar11 + lVar8 + -1) != '_'
              || ((uVar7 != 1 && (*(char *)((longlong)plVar5 + lVar11 + lVar8) == '0')))))) {
LAB_140b6215b:
            lVar15 = 0;
          }
          else {
            lVar14 = 0;
            do {
              lVar15 = (longlong)*(char *)((longlong)plVar5 + lVar11 + lVar8) + lVar14 * 10;
              lVar14 = lVar15 + -0x30;
              lVar11 = lVar11 + 1;
            } while (lVar11 != 0);
            if (0x7ffffffe < lVar14) goto LAB_140b6215b;
            uVar2 = ~uVar7 + uVar2;
            lVar15 = lVar15 + -0x2f;
          }
          if (uVar2 == 0) goto LAB_140b62203;
        }
        local_50 = (uint5)uVar2;
        local_58 = plVar5;
        uVar2 = FUN_14001a6c0(&local_58,1);
        uVar13 = lVar15 << 0x20;
        uVar4 = (ulonglong)uVar2;
      }
      local_58 = (longlong *)(uVar4 | uVar13);
      plVar5 = (longlong *)FUN_1456b230c(lVar1,&local_58);
      lVar1 = local_60;
      if (plVar5 != (longlong *)0x0) {
        local_58 = &local_60;
        local_70 = FUN_143e69944;
        local_68 = &local_58;
        _local_50 = param_1;
        uVar6 = (**(code **)(*plVar5 + 0x2c0))(plVar5);
        local_80 = *param_2;
        local_78 = *(undefined4 *)(param_2 + 1);
        FUN_140e9367e(lVar1,&local_80,uVar6,&local_70);
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b6229c FUN_140b6229c body=41 status=ok
// SIG undefined FUN_140b6229c(void)

void FUN_140b6229c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140b622c6(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 140b622c6 FUN_140b622c6 body=195 status=ok
// SIG undefined FUN_140b622c6(void)

void FUN_140b622c6(longlong param_1)

{
  FUN_140b62557(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_140b6251d(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140b62389(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140b623b1(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_140b625c0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_140b626ab(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140b62389 FUN_140b62389 body=40 status=ok
// SIG undefined FUN_140b62389(void)

void FUN_140b62389(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148603a84(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 140b623b1 FUN_140b623b1 body=41 status=ok
// SIG undefined FUN_140b623b1(void)

void FUN_140b623b1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140b623da(param_1);
    param_1 = param_1 + 0x210;
  }
  return;
}



// FUNCTION 140b623da FUN_140b623da body=323 status=ok
// SIG undefined FUN_140b623da(void)

void FUN_140b623da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined **)(param_1 + 400 + lVar1) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x200 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 400 + lVar1) = &PTR_FUN_14a177080;
    if (*(longlong *)(param_1 + 0x1e8 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0x1e0 + lVar1) = 0;
    if (*(longlong *)(param_1 + 0x1d8 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0x1a0 + lVar1) = 0;
    if (*(int *)(param_1 + 0x1a4 + lVar1) != 0) {
      FUN_14472eb64(param_1 + 0x198 + lVar1,0);
    }
    *(undefined8 *)(param_1 + 0x1c8 + lVar1) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c0 + lVar1) = 0;
    if (0x80 < *(uint *)(param_1 + 0x1c4 + lVar1)) {
      *(undefined4 *)(param_1 + 0x1c4 + lVar1) = 0x80;
      FUN_1446efbd8(param_1 + 0x1a8 + lVar1);
    }
    if (*(longlong *)(param_1 + 0x1b8 + lVar1) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x198 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x80;
  } while (lVar1 != -0x200);
  return;
}



// FUNCTION 140b6251d FUN_140b6251d body=58 status=ok
// SIG undefined FUN_140b6251d(void)

void FUN_140b6251d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_140b62557(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b62557 FUN_140b62557 body=77 status=ok
// SIG undefined FUN_140b62557(void)

void FUN_140b62557(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x10);
    do {
      plVar3 = (longlong *)*puVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      puVar4 = puVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b625a4 FUN_140b625a4 body=14 status=ok
// SIG undefined FUN_140b625a4(void)

void FUN_140b625a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 140b625b2 FUN_140b625b2 body=14 status=ok
// SIG undefined FUN_140b625b2(void)

void FUN_140b625b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 140b625c0 FUN_140b625c0 body=235 status=ok
// SIG undefined FUN_140b625c0(void)

void FUN_140b625c0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      plVar1[-0xd] = (longlong)&PTR_FUN_14a46be50;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xd] = (longlong)&PTR_FUN_14a177080;
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -3) = 0;
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -0xb) = 0;
      if (*(int *)((longlong)plVar1 + -0x54) != 0) {
        FUN_14472eb64(plVar1 + -0xc,0);
      }
      plVar1[-6] = 0xffffffff;
      *(undefined4 *)(plVar1 + -7) = 0;
      if (0x80 < *(uint *)((longlong)plVar1 + -0x34)) {
        *(undefined4 *)((longlong)plVar1 + -0x34) = 0x80;
        FUN_1446efbd8(plVar1 + -10);
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xc] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b626ab FUN_140b626ab body=237 status=ok
// SIG undefined FUN_140b626ab(void)

void FUN_140b626ab(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -4) = 0;
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -0xc) = 0;
      if (*(int *)((longlong)plVar1 + -0x5c) != 0) {
        FUN_14472eb64(plVar1 + -0xd,0);
      }
      plVar1[-7] = 0xffffffff;
      *(undefined4 *)(plVar1 + -8) = 0;
      if (0x80 < *(uint *)((longlong)plVar1 + -0x3c)) {
        *(undefined4 *)((longlong)plVar1 + -0x3c) = 0x80;
        FUN_1446efbd8(plVar1 + -0xb);
      }
      if (plVar1[-9] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xd] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b62798 FUN_140b62798 body=40 status=ok
// SIG undefined FUN_140b62798(void)

undefined8 FUN_140b62798(undefined8 param_1,int param_2)

{
  FUN_140b627c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b627c0 FUN_140b627c0 body=78 status=ok
// SIG undefined FUN_140b627c0(void)

void FUN_140b627c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae80b20;
  param_1[0x72] = &PTR_FUN_14ae811a0;
  FUN_140b6280e(param_1 + 0x80,1);
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140b6280e FUN_140b6280e body=124 status=ok
// SIG undefined FUN_140b6280e(void)

void FUN_140b6280e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140b6288a FUN_140b6288a body=2280 status=ok
// SIG undefined FUN_140b6288a(void)

void FUN_140b6288a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint *puVar19;
  undefined1 auStack_208 [32];
  uint *local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8 [8];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [32];
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_170 [32];
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_14009e37a(param_1 + 0x6a0,param_1);
  iVar15 = *(int *)(param_1 + 0x360);
  iVar9 = *(int *)(param_1 + 0x428);
  *(int *)(param_1 + 0x428) = iVar9 + 1;
  if (0 < iVar15) {
    lVar13 = 0x20;
    uVar16 = 0;
    do {
      lVar17 = *(longlong *)(param_1 + 0x378);
      if (*(longlong *)(param_1 + 0x378) == 0) {
        lVar17 = param_1 + 0x368;
      }
      if ((*(uint *)(lVar17 + (uVar16 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar16 & 0x1f) & 1) != 0) {
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x358) + lVar13);
        *(undefined8 *)(lVar17 + 0x28) = 0;
        *(undefined2 *)(lVar17 + 0x34) = 0xffff;
        iVar15 = *(int *)(param_1 + 0x360);
      }
      uVar16 = uVar16 + 1;
      lVar13 = lVar13 + 0x28;
    } while ((longlong)uVar16 < (longlong)iVar15);
    iVar9 = *(int *)(param_1 + 0x428) + -1;
  }
  *(int *)(param_1 + 0x428) = iVar9;
  local_1c8._0_4_ = 0;
  local_1d0 = 0;
  local_1c8 = 0x400000000;
  local_1b0 = 0;
  local_1a8 = 0x800000000;
  local_180 = 0;
  local_178 = 0x1000000000;
  local_150 = 0;
  local_148 = 0x1000000000;
  local_138 = 0;
  local_130 = 0x200000000;
  local_100 = 0;
  local_f8 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_f4 = 0x80;
  uStack_f0 = 0xffffffff;
  local_c8 = 0;
  local_c0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  local_dc = 0;
  uStack_bc = 0x80;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0x8000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (local_1d8 != (undefined1 *)(param_1 + 0x2a0)) {
    if (*(longlong *)(param_1 + 0x2a8) == 0) {
      local_1c8._4_4_ = 4;
      local_1d0 = 0;
    }
    else {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x2a8) = local_1d0;
    local_1d0 = 0;
    *(undefined4 *)(param_1 + 0x2b0) = (undefined4)local_1c8;
    *(undefined4 *)(param_1 + 0x2b4) = local_1c8._4_4_;
    local_1c8 = 0x400000000;
    if (local_1b0 == 0) {
      *(undefined4 *)(param_1 + 0x2b8) = local_1c0;
      *(undefined4 *)(param_1 + 700) = uStack_1bc;
      *(undefined4 *)(param_1 + 0x2c0) = uStack_1b8;
      *(undefined4 *)(param_1 + 0x2c4) = uStack_1b4;
    }
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x2c8) = local_1b0;
    *(undefined4 *)(param_1 + 0x2d0) = (undefined4)local_1a8;
    *(undefined4 *)(param_1 + 0x2d4) = local_1a8._4_4_;
  }
  local_1a8 = 0x800000000;
  local_1b0 = 0;
  FUN_140b63174(param_1 + 0x2d8,local_1a0);
  FUN_140b63174(param_1 + 0x308,local_170);
  if (local_1d8 != (undefined1 *)(param_1 + 0x2a0)) {
    if (local_138 == 0) {
      *(undefined4 *)(param_1 + 0x338) = local_140;
    }
    if (*(longlong *)(param_1 + 0x340) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x340) = local_138;
    uVar16 = 0;
    local_138 = 0;
    *(undefined4 *)(param_1 + 0x348) = (undefined4)local_130;
    *(undefined4 *)(param_1 + 0x34c) = local_130._4_4_;
    local_130 = 0x200000000;
    lVar13 = *(longlong *)(param_1 + 0x350);
    *(undefined8 *)(param_1 + 0x350) = local_128;
    local_128 = 0;
    if (lVar13 != 0) {
      FUN_140b63254(lVar13);
      FUN_1400020a8(lVar13);
    }
    puVar19 = (uint *)(param_1 + 0x368);
    uVar14 = *(uint *)(param_1 + 0x380);
    uVar18 = (ulonglong)uVar14;
    local_1e8 = puVar19;
    if (uVar14 == 0) {
      uVar12 = 1;
      uVar6 = 0;
      iVar15 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x378);
      if (*(uint **)(param_1 + 0x378) == (uint *)0x0) {
        puVar7 = puVar19;
      }
      uVar6 = *puVar7;
      if (uVar6 == 0) {
        iVar15 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar15 = uVar14 - 1;
        }
        uVar16 = 0;
        uVar12 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar12 = 0;
        }
        iVar15 = 0;
        do {
          if (uVar12 == uVar16) goto LAB_140b62d14;
          iVar15 = iVar15 + 0x20;
          uVar6 = puVar7[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar16 = 0;
        iVar15 = 0;
      }
      uVar12 = (ulonglong)(-uVar6 & uVar6);
      uVar3 = uVar12 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar6 = (iVar15 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)uVar14 <= (int)uVar6) {
        uVar6 = uVar14;
      }
    }
    if (uVar6 != uVar14) {
      uVar14 = 0xffffffff;
      local_1e0 = uVar18;
      do {
        lVar13 = *(longlong *)(param_1 + 0x358);
        plVar5 = *(longlong **)(lVar13 + 0x18 + (longlong)(int)uVar6 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            uVar18 = local_1e0;
            puVar19 = local_1e8;
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              uVar18 = local_1e0;
              puVar19 = local_1e8;
            }
          }
        }
        plVar5 = *(longlong **)(lVar13 + (longlong)(int)uVar6 * 0x28 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            uVar18 = local_1e0;
            puVar19 = local_1e8;
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              uVar18 = local_1e0;
              puVar19 = local_1e8;
            }
          }
        }
        uVar14 = uVar14 & ~(uint)uVar12;
        puVar7 = *(uint **)(param_1 + 0x378);
        if (*(uint **)(param_1 + 0x378) == (uint *)0x0) {
          puVar7 = puVar19;
        }
        uVar4 = *(uint *)(param_1 + 0x380);
        iVar9 = (int)uVar16;
        lVar13 = (longlong)iVar9;
        uVar6 = puVar7[lVar13] & uVar14;
        if (uVar6 == 0) {
          iVar10 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar10 = uVar4 - 1;
          }
          iVar10 = iVar10 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar9) {
            iVar11 = iVar9;
          }
          uVar18 = local_1e0;
          if (iVar9 < iVar10) {
            lVar17 = 0;
            do {
              uVar6 = puVar7[lVar13 + lVar17 + 1];
              if (uVar6 != 0) {
                uVar16 = (ulonglong)(iVar9 + (int)lVar17 + 1);
                uVar14 = 0xffffffff;
                goto LAB_140b62ce5;
              }
              iVar15 = iVar15 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar11 - lVar13 != lVar17);
            uVar14 = 0xffffffff;
            iVar9 = iVar11;
          }
          uVar16 = (ulonglong)(iVar9 + 1);
          puVar19 = local_1e8;
          uVar6 = uVar4;
        }
        else {
LAB_140b62ce5:
          uVar12 = (ulonglong)(-uVar6 & uVar6);
          uVar3 = uVar12 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar6 = (iVar15 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if ((int)uVar4 <= (int)uVar6) {
            uVar6 = uVar4;
          }
        }
      } while (uVar6 != (uint)uVar18);
    }
LAB_140b62d14:
    if (*(longlong *)(param_1 + 0x358) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x358) = uStack_120;
    uStack_120 = 0;
    *(undefined4 *)(param_1 + 0x360) = (undefined4)local_118;
    *(undefined4 *)(param_1 + 0x364) = local_118._4_4_;
    local_118 = 0;
    if (local_100 == 0) {
      *local_1e8 = local_110;
      local_1e8[1] = uStack_10c;
      local_1e8[2] = uStack_108;
      local_1e8[3] = uStack_104;
    }
    if (*(longlong *)(param_1 + 0x378) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x378) = local_100;
    local_100 = 0;
    *(undefined4 *)(param_1 + 0x380) = local_f8;
    *(undefined4 *)(param_1 + 900) = uStack_f4;
    local_f8 = 0;
    uStack_f4 = 0;
    *(undefined4 *)(param_1 + 0x388) = uStack_f0;
    *(undefined4 *)(param_1 + 0x38c) = uStack_ec;
    uStack_f0 = 0xffffffff;
    uStack_ec = 0;
    if (*(longlong *)(param_1 + 0x390) != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)(param_1 + 0x390) = CONCAT44(uStack_e4,uStack_e8);
    uStack_e8 = 0;
    uStack_e4 = 0;
    *(undefined4 *)(param_1 + 0x398) = uStack_e0;
    *(undefined4 *)(param_1 + 0x39c) = local_dc;
    uStack_e0 = 0;
    local_dc = 0;
    if (local_c8 == 0) {
      *(undefined4 *)(param_1 + 0x3a0) = local_d8;
      *(undefined4 *)(param_1 + 0x3a4) = uStack_d4;
      *(undefined4 *)(param_1 + 0x3a8) = uStack_d0;
      *(undefined4 *)(param_1 + 0x3ac) = uStack_cc;
    }
    if (*(longlong *)(param_1 + 0x3b0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x3b0) = local_c8;
    local_c8 = 0;
    *(undefined4 *)(param_1 + 0x3b8) = local_c0;
    *(undefined4 *)(param_1 + 0x3bc) = uStack_bc;
    local_c0 = 0;
    uStack_bc = 0;
    *(undefined4 *)(param_1 + 0x3c0) = uStack_b8;
    *(undefined4 *)(param_1 + 0x3c4) = uStack_b4;
    uStack_b8 = 0xffffffff;
    uStack_b4 = 0;
    if (local_a8 == 0) {
      *(undefined4 *)(param_1 + 0x3c8) = local_b0;
    }
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x3d0) = local_a8;
    local_a8 = 0;
    *(undefined4 *)(param_1 + 0x3d8) = local_a0;
    local_a0 = 0;
    if (local_88 == 0) {
      *(undefined4 *)(param_1 + 0x3e0) = local_98;
      *(undefined4 *)(param_1 + 0x3e4) = uStack_94;
      *(undefined4 *)(param_1 + 1000) = uStack_90;
      *(undefined4 *)(param_1 + 0x3ec) = uStack_8c;
    }
    if (*(longlong *)(param_1 + 0x3f0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x3f0) = local_88;
    local_88 = 0;
    *(undefined4 *)(param_1 + 0x3f8) = (undefined4)local_80;
    *(undefined4 *)(param_1 + 0x3fc) = local_80._4_4_;
    local_80 = 0;
    if (*(longlong *)(param_1 + 0x400) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x400) = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 0x408) = (undefined4)uStack_70;
    *(undefined4 *)(param_1 + 0x40c) = uStack_70._4_4_;
    uStack_70 = 0;
  }
  *(undefined1 *)(param_1 + 0x410) = local_68;
  *(undefined4 *)(param_1 + 0x418) = (undefined4)local_60;
  *(undefined4 *)(param_1 + 0x41c) = local_60._4_4_;
  *(undefined4 *)(param_1 + 0x420) = (undefined4)uStack_58;
  *(undefined4 *)(param_1 + 0x424) = uStack_58._4_4_;
  *(undefined4 *)(param_1 + 0x428) = local_50;
  FUN_140955db6();
  uVar8 = FUN_140b631de();
  FUN_140457ffc(uVar8,param_1);
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 140b63174 FUN_140b63174 body=106 status=ok
// SIG undefined FUN_140b63174(void)

undefined4 * FUN_140b63174(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_2 + 8) == 0) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      uVar5 = param_2[5];
      uVar6 = param_2[6];
      uVar7 = param_2[7];
      param_1[4] = param_2[4];
      param_1[5] = uVar5;
      param_1[6] = uVar6;
      param_1[7] = uVar7;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    *(undefined8 *)(param_2 + 10) = 0x1000000000;
  }
  return param_1;
}



// FUNCTION 140b631de FUN_140b631de body=117 status=ok
// SIG undefined FUN_140b631de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b631de(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964230) {
    FUN_144b3d300(&DAT_14c964230);
    if (DAT_14c964230 == -1) {
      DAT_14c964218 = 0;
      _DAT_14c964220 = 0;
      _DAT_14c964228 = 2;
      atexit(FUN_14283cd1c);
      _Init_thread_footer(&DAT_14c964230);
    }
  }
  return &DAT_14c964218;
}



// FUNCTION 140b63254 FUN_140b63254 body=256 status=ok
// SIG undefined FUN_140b63254(void)

void FUN_140b63254(longlong *param_1)

{
  longlong lVar1;
  
  do {
    lVar1 = FUN_140b633c4(param_1 + 0x20);
  } while (lVar1 != 0);
  FUN_1447d080c((uint)param_1[0x20] & 0x3ffffff);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140b63354(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6338c(param_1 + 9);
  FUN_1405c4362(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1405c4362(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1405c4362(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_1405c42dc(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140b63354 FUN_140b63354 body=55 status=ok
// SIG undefined FUN_140b63354(void)

void FUN_140b63354(longlong *param_1)

{
  FUN_140b637ec(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b6338c FUN_140b6338c body=55 status=ok
// SIG undefined FUN_140b6338c(void)

void FUN_140b6338c(longlong *param_1)

{
  FUN_140b635d0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b633c4 FUN_140b633c4 body=524 status=ok
// SIG undefined FUN_140b633c4(void)

undefined8 FUN_140b633c4(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  
  do {
    while( true ) {
      do {
        uVar5 = *param_1;
        uVar4 = param_1[8];
        uVar6 = (uint)uVar5;
        puVar8 = (ulonglong *)0x0;
        if ((uVar5 & 0x3ffffff) != 0) {
          puVar8 = (ulonglong *)
                   ((ulonglong)((uVar6 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar6 & 0x3ffffff) >> 0xe) * 8));
        }
        uVar1 = *puVar8;
      } while (uVar5 != *param_1);
      uVar7 = (uint)uVar1;
      if ((((uint)uVar4 ^ uVar6) & 0x3ffffff) != 0) break;
      if ((uVar1 & 0x3ffffff) == 0) {
        return 0;
      }
      uVar5 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
      if (uVar5 >> 0x1a < uVar4 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      LOCK();
      if (uVar4 == param_1[8]) {
        param_1[8] = uVar5 | uVar7 & 0x3ffffff;
      }
      UNLOCK();
    }
    if ((uVar1 & 0x3ffffff) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulonglong)((uVar7 & 0x3fff) * 0x18) +
              *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar7 & 0x3ffffff) >> 0xe) * 8);
    }
    uVar2 = *(undefined8 *)(lVar3 + 8);
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar5 == uVar1) {
      *param_1 = uVar4 | uVar7 & 0x3ffffff;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  FUN_1447d080c(uVar6 & 0x3ffffff);
  return uVar2;
}



// FUNCTION 140b635d0 FUN_140b635d0 body=539 status=ok
// SIG undefined FUN_140b635d0(void)

void FUN_140b635d0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140b636ce;
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x20;
      FUN_1405c4362(*(undefined8 *)(lVar11 + 8 + lVar10),*(undefined4 *)(lVar11 + 0x10 + lVar10));
      if (*(longlong *)(lVar11 + 8 + lVar10) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar7[lVar11 + lVar10 + 1];
          if (uVar3 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar11 == lVar10) goto LAB_140b636ce;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar10 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140b636ce:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140b637ec FUN_140b637ec body=583 status=ok
// SIG undefined FUN_140b637ec(void)

void FUN_140b637ec(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar8 == uVar14) goto LAB_140b6390c;
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar8 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar12 = *param_1;
      lVar10 = (longlong)iVar6 * 0x30;
      FUN_1405c4362(*(undefined8 *)(lVar12 + 0x18 + lVar10),*(undefined4 *)(lVar12 + 0x20 + lVar10))
      ;
      if (*(longlong *)(lVar12 + 0x18 + lVar10) != 0) {
        FUN_1400020a8();
      }
      plVar11 = (longlong *)(lVar10 + lVar12 + 8);
      FUN_1405c4362(*plVar11,*(undefined4 *)(lVar10 + lVar12 + 0x10));
      if (*plVar11 != 0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar14;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar13;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar7[lVar12 + lVar10 + 1];
          if (uVar3 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar12 == lVar10) goto LAB_140b6390c;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140b6390c:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar3 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140b63a3c FUN_140b63a3c body=133 status=ok
// SIG undefined FUN_140b63a3c(void)

undefined8 * FUN_140b63a3c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ac1c72(param_1,uVar1);
  *param_1 = &PTR_FUN_14b49c6c0;
  param_1[7] = &PTR_FUN_14b039460;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14020a6cc(param_1 + 8,1);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 140b63ac2 FUN_140b63ac2 body=277 status=ok
// SIG undefined FUN_140b63ac2(void)

undefined8 FUN_140b63ac2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140b63bd1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140b63bd1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140b63bd1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140b63b7f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_140b63b7f;
    }
  }
  uVar6 = 0;
LAB_140b63b7f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b63be8 FUN_140b63be8 body=825 status=ok
// SIG undefined FUN_140b63be8(void)

undefined8 FUN_140b63be8(undefined8 *param_1,undefined8 *param_2)

{
  void **ppvVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  void *_Src;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  ppvVar1 = (void **)(param_1 + 3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < 0) {
    FUN_1446f8c06(ppvVar1,0);
  }
  if (*ppvVar1 != (undefined2 *)0x0) {
    *(undefined2 *)*ppvVar1 = 0;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar7 = (longlong *)param_1[9];
  param_1[9] = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  pbVar5 = (byte *)*param_2;
  if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 3) == 1)) {
    uVar3 = *(ushort *)(pbVar5 + 0x20);
    iVar4 = *(int *)(pbVar5 + 0x24);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
    uVar11 = (ulonglong)(uint)(iVar4 % 0x199);
    lVar10 = *(longlong *)(DAT_14c9a1378 + (longlong)(iVar4 / 0x199) * 8);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
    iVar4 = *(int *)(lVar10 + uVar11 * 0x28);
    if ((iVar4 != 0) &&
       ((lVar10 = lVar10 + uVar11 * 0x28, *(int *)(lVar10 + 4) != 0 && (iVar4 != DAT_14c948000)))) {
      if (uVar3 == 0x7fff) {
        FUN_141710b0e(lVar10,&local_88,1);
        local_78 = 0;
        uStack_70 = 0;
        local_68 = (void *)0x0;
        uStack_60 = 0;
        local_50 = local_88;
        local_48 = local_80 + -1;
        if (local_80 == 0) {
          local_48 = 0;
        }
        FUN_14475bf92(&local_78);
        _Src = local_68;
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_78;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_78._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_70._4_4_;
        if (ppvVar1 != &local_68) {
          iVar4 = (int)uStack_60;
          lVar10 = (longlong)(int)uStack_60;
          *(int *)(param_1 + 4) = (int)uStack_60;
          if ((int)uStack_60 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
            *(undefined4 *)((longlong)param_1 + 0x24) = 0;
          }
          else {
            FUN_1446dd670(ppvVar1,uStack_60 & 0xffffffff);
            if (iVar4 != 0) {
              memcpy(*ppvVar1,_Src,lVar10 * 2);
            }
          }
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else if ((((DAT_14c9a1ab0 != 0) && (-1 < (short)uVar3)) &&
               (*(uint *)(DAT_14c9a1ab0 + 0xd0) != (uint)uVar3 &&
                (int)(uint)uVar3 <= (int)*(uint *)(DAT_14c9a1ab0 + 0xd0))) &&
              (lVar6 = *(longlong *)
                        (*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)(uint)uVar3 * 8),
              lVar6 != 0)) {
        plVar7 = &DAT_14c9a6180;
        if (DAT_14c9a6200 != (longlong *)0x0) {
          plVar7 = DAT_14c9a6200;
        }
        if ((longlong)DAT_14c9a6208 != 0) {
          lVar9 = (longlong)DAT_14c9a6208 << 4;
          do {
            if ((int)plVar7[1] == *(int *)(lVar6 + 0xb0)) {
              if ((plVar7 != (longlong *)0x0) && (lVar6 = *plVar7, lVar6 != 0)) {
                if (DAT_14c947fe0 == 0) {
                  lVar9 = FUN_14001cc68(0x140,0x10);
                  FUN_1456b2032(lVar9);
                  DAT_14c947fe0 = lVar9;
                }
                FUN_140045924(DAT_14c947fe0,&local_90,lVar10,1);
                if (param_1[5] != local_90) {
                  param_1[7] = 0;
                }
                param_1[5] = local_90;
                if (param_1[6] != lVar6) {
                  param_1[7] = 0;
                }
                uVar8 = FUN_14477b664(lVar6);
                uVar8 = FUN_14477b664(uVar8);
                param_1[6] = uVar8;
              }
              break;
            }
            plVar7 = plVar7 + 2;
            lVar9 = lVar9 + -0x10;
          } while (lVar9 != 0);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140b63f22 FUN_140b63f22 body=221 status=ok
// SIG undefined FUN_140b63f22(void)

void FUN_140b63f22(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  PSRWLOCK local_40;
  int local_38;
  longlong local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402815f4(param_1,&local_50);
  lVar3 = *(longlong *)(local_50 + 0x110);
  local_40 = (PSRWLOCK)(lVar3 + 0x100);
  local_38 = 1;
  AcquireSRWLockExclusive(local_40);
  *(int *)(lVar3 + 0xf8) = *(int *)(lVar3 + 0xf8) + 1;
  local_28 = 1;
  local_30 = lVar3;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  FUN_140b64f5a(param_1,&local_40);
  FUN_140b64000(param_1,&local_40);
  FUN_140b6786c(param_1,&local_40);
  if (local_38 == 0) {
    ReleaseSRWLockShared(local_40);
  }
  else {
    ReleaseSRWLockExclusive(local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b64000 FUN_140b64000 body=404 status=ok
// SIG undefined FUN_140b64000(void)

void FUN_140b64000(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_1408bb964(param_1 + 0x44);
  if (lVar5 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x10);
    *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 2;
    if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
      lVar8 = (longlong)*(int *)(lVar7 + 0x20) * 0x198;
      lVar7 = *(longlong *)(lVar7 + 0x18) + 0x108;
      do {
        if (*(char *)(lVar7 + 0x50) == '\0') {
          FUN_140cb2ecc(&local_68,lVar7 + -0xf8);
          if (local_68 != 0) {
            lVar6 = FUN_140b64196(lVar5);
            if ((lVar6 == 0) || (local_68 == 0)) {
              local_58 = 0;
              plStack_50 = (longlong *)0x0;
            }
            else {
              local_58 = local_68;
              plStack_50 = local_60;
              if (local_60 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_60 + 1) = (int)local_60[1] + 1;
                UNLOCK();
              }
              uVar4 = FUN_140b64372(lVar6,&local_58);
              plVar3 = plStack_50;
              if (plStack_50 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_50 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_50)(plStack_50);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              FUN_140b64332(&local_58,uVar4);
            }
            FUN_140775538(lVar7,&local_58);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
          plVar3 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        lVar7 = lVar7 + 0x198;
        lVar8 = lVar8 + -0x198;
      } while (lVar8 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b64196 FUN_140b64196 body=105 status=ok
// SIG undefined FUN_140b64196(void)

void FUN_140b64196(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140b6424c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140b64200(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b64200 FUN_140b64200 body=76 status=ok
// SIG undefined FUN_140b64200(void)

void FUN_140b64200(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140b6424c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140b6423d;
    }
  }
  lVar2 = 0;
LAB_140b6423d:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140b6424c FUN_140b6424c body=228 status=ok
// SIG undefined FUN_140b6424c(void)

longlong FUN_140b6424c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbd3e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14657f3fc;
    local_38 = &LAB_148ca1059;
    local_40 = &LAB_145c206ad;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x220;
    FUN_14081cfa3(L"/Script/OakGame",L"OakVoice",&DAT_14cbbd3e0,&DAT_148ca1058);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbd3e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b64332 FUN_140b64332 body=63 status=ok
// SIG undefined FUN_140b64332(void)

undefined8 * FUN_140b64332(undefined8 *param_1,int param_2)

{
  wchar_t *pwVar1;
  
  if (param_2 == 0) {
LAB_140b6433e:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (param_2 == 2) {
      pwVar1 = L"muted";
    }
    else {
      if (param_2 != 1) goto LAB_140b6433e;
      pwVar1 = L"talking";
    }
    FUN_140056680(param_1,pwVar1);
  }
  return param_1;
}



// FUNCTION 140b64372 FUN_140b64372 body=642 status=ok
// SIG undefined FUN_140b64372(void)

undefined8 FUN_140b64372(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_50);
  FUN_1446f470e(&local_40,L"SHIFT",1);
  lVar4 = *param_2;
  if (local_50 == local_40) {
    local_30 = (longlong *)param_2[1];
    local_38 = lVar4;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_140b6ec10(&local_38,uVar6,lVar4);
  }
  plVar2 = local_30;
  lVar4 = local_38;
  if (local_38 != 0) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x1f0) == 0)) {
LAB_140b64546:
      bVar5 = (byte)lVar7;
      bVar8 = 0;
    }
    else {
      lVar7 = FUN_141030f66();
      if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x30) == 0)) goto LAB_140b64546;
      bVar5 = FUN_140b645f6(*(longlong *)(lVar7 + 0x30),lVar4);
      bVar8 = 1;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    plVar2 = local_30;
    if ((bVar8 & bVar5) != 0) {
      uVar6 = 2;
      goto LAB_140b644d5;
    }
    local_60 = local_38;
    local_58 = local_30;
    if (local_30 == (longlong *)0x0) {
      FUN_140b647ca(param_1,&local_50,&local_60);
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      FUN_140b647ca(param_1,&local_50);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
    if ((local_50 != 0) && (*(char *)(local_50 + 0x2c) != '\0')) {
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar3 = (int *)((longlong)local_48 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      uVar6 = 1;
      goto LAB_140b644d5;
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_48 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar3 = (int *)((longlong)local_48 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  uVar6 = 0;
LAB_140b644d5:
  plVar2 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b645f6 FUN_140b645f6 body=468 status=ok
// SIG undefined FUN_140b645f6(void)

undefined1 FUN_140b645f6(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  iVar2 = *(int *)(param_1 + 0xd0);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar15 = 0;
    iVar6 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 200);
    if (*(uint **)(param_1 + 200) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0xb8);
    }
    uVar14 = *puVar5;
    if (uVar14 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar13 = uVar15;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar15) {
          return 0;
        }
        iVar9 = iVar9 + 0x20;
        uVar14 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar14 = 0xffffffff;
    do {
      cVar4 = FUN_140b64956(param_1,*(undefined4 *)
                                     (*(longlong *)(param_1 + 0xa8) + (longlong)iVar6 * 0xc),param_2
                           );
      if (cVar4 != '\0') {
        return 1;
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar5 = *(uint **)(param_1 + 200);
      if (*(uint **)(param_1 + 200) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0xb8);
      }
      iVar3 = *(int *)(param_1 + 0xd0);
      iVar6 = (int)uVar15;
      lVar11 = (longlong)iVar6;
      uVar10 = puVar5[lVar11] & uVar14;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar6) {
          iVar8 = iVar6;
        }
        if (iVar6 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = puVar5[lVar11 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar15 = (ulonglong)(iVar6 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140b6473e;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar14 = 0xffffffff;
          iVar6 = iVar8;
        }
        uVar15 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_140b6473e:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
  return 0;
}



// FUNCTION 140b647ca FUN_140b647ca body=395 status=ok
// SIG undefined FUN_140b647ca(void)

undefined8 FUN_140b647ca(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_48);
  FUN_1446f470e(&local_38,L"SHIFT",1);
  if (local_48 == local_38) {
    plVar2 = (longlong *)*param_3;
    plVar6 = (longlong *)param_3[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (plVar2 == (longlong *)0x0) {
LAB_140b64898:
      local_48 = (longlong *)0x0;
      plStack_40 = (longlong *)0x0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (cVar3 == '\0') goto LAB_140b64898;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_48);
    }
    FUN_1410bdc90(param_1,param_2,&local_48);
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (plVar6 == (longlong *)0x0) goto LAB_140b64930;
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_140b64930;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_140b64930;
    lVar5 = *plVar6;
  }
  else {
    lVar5 = *param_3;
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_140b6ec10(&local_48,uVar4,lVar5);
    if (local_48 == (longlong *)0x0) {
LAB_140b648e1:
      local_58[0] = 0;
      local_58[1] = 0;
    }
    else {
      cVar3 = (**(code **)(*local_48 + 0x28))();
      if (cVar3 == '\0') goto LAB_140b648e1;
      (**(code **)(*local_48 + 0x30))(local_48,local_58);
    }
    FUN_1410bdc90(param_1,param_2,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    plVar6 = plStack_40;
    if (plStack_40 == (longlong *)0x0) goto LAB_140b64930;
    LOCK();
    plVar2 = plStack_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_140b64930;
    (**(code **)*plStack_40)(plStack_40);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_140b64930;
    lVar5 = *plVar6;
  }
  (**(code **)(lVar5 + 0x10))(plVar6);
LAB_140b64930:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b64956 FUN_140b64956 body=857 status=ok
// SIG undefined FUN_140b64956(void)

bool FUN_140b64956(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_3 + 0x10))(param_3,&local_48);
  FUN_1446f470e(local_50,L"SHIFT",1);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar8 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xe8);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar7 != -1) {
      bVar9 = false;
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar7 * 0xc) == param_2) {
          FUN_140b64d6c(param_1,&local_60,param_2);
          plVar3 = local_58;
          if (local_60 == (longlong *)0x0) goto LAB_140b64b48;
          if (local_58 == (longlong *)0x0) {
            plStack_40 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_58 + 1) = (int)local_58[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(local_58 + 1) = (int)local_58[1] + 1;
            UNLOCK();
            plStack_40 = local_58;
            LOCK();
            *(int *)(local_58 + 1) = (int)local_58[1] + 1;
            UNLOCK();
          }
          local_48 = local_60;
          uVar6 = (**(code **)(*local_60 + 0x40))();
          iVar7 = FUN_140b64cb0((longlong *)(param_1 + 0x50),uVar6,&local_48);
          plVar2 = plStack_40;
          if (iVar7 == -1) {
            lVar8 = 0;
          }
          else {
            lVar8 = (longlong)iVar7 * 0x68 + *(longlong *)(param_1 + 0x50);
          }
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_40 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_40)();
              LOCK();
              piVar4 = (int *)((longlong)plVar2 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar2 + 0x10))();
              }
            }
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar3 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar3)();
              LOCK();
              piVar4 = (int *)((longlong)plVar3 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar3 + 0x10))();
              }
            }
            LOCK();
            plVar2 = plVar3 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar3)();
              LOCK();
              piVar4 = (int *)((longlong)plVar3 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar3 + 0x10))();
              }
            }
          }
          if (lVar8 == 0) goto LAB_140b64b48;
          plStack_40 = (longlong *)param_3[2];
          if (plStack_40 == (longlong *)0x0) goto LAB_140b64b95;
          iVar7 = (int)plStack_40[1];
          goto LAB_140b64ab4;
        }
        iVar7 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar7 * 0xc + 4);
      } while (iVar7 != -1);
      goto LAB_140b64b5e;
    }
  }
  bVar9 = false;
  goto LAB_140b64b5e;
LAB_140b64b95:
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  bVar9 = true;
  goto LAB_140b64ae3;
  while( true ) {
    LOCK();
    iVar5 = (int)plStack_40[1];
    bVar9 = iVar7 == iVar5;
    if (bVar9) {
      *(int *)(plStack_40 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
    if (bVar9) break;
LAB_140b64ab4:
    if (iVar7 == 0) goto LAB_140b64b95;
  }
  local_48 = (longlong *)param_3[1];
  LOCK();
  *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
  UNLOCK();
  bVar9 = false;
LAB_140b64ae3:
  plVar3 = plStack_40;
  uVar6 = (**(code **)(*local_48 + 0x40))();
  iVar7 = FUN_140b64ea2((longlong *)(lVar8 + 0x10),uVar6,&local_48);
  plVar2 = plStack_40;
  if (iVar7 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x20 + *(longlong *)(lVar8 + 0x10);
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar4 = (int *)((longlong)plVar2 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (!bVar9) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (lVar8 == 0) {
LAB_140b64b48:
    bVar9 = false;
  }
  else {
    bVar9 = *(char *)(lVar8 + 0x10) != '\0';
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar4 = (int *)((longlong)local_58 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
LAB_140b64b5e:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 140b64cb0 FUN_140b64cb0 body=187 status=ok
// SIG undefined FUN_140b64cb0(void)

int FUN_140b64cb0(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar6 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x68;
        puVar3 = *(undefined8 **)(lVar6 + lVar8);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar4 = '\x01';
        if (puVar3 != (undefined8 *)*param_3) {
          cVar4 = (**(code **)*puVar3)();
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (cVar4 != '\0') {
          return iVar7;
        }
        lVar6 = *param_1;
        iVar7 = *(int *)(lVar6 + 0x60 + lVar8);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 140b64d6c FUN_140b64d6c body=199 status=ok
// SIG undefined FUN_140b64d6c(void)

undefined8 * FUN_140b64d6c(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b64e34();
  local_28 = 0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x110))(local_38,param_2,param_3);
      bVar3 = false;
      goto LAB_140b64dd1;
    }
  }
  bVar3 = true;
LAB_140b64dd1:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (bVar3) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b64e34 FUN_140b64e34 body=110 status=ok
// SIG undefined FUN_140b64e34(void)

undefined8 FUN_140b64e34(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    uVar1 = *(uint *)(param_1 + 0xa0);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0xa4))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 140b64ea2 FUN_140b64ea2 body=183 status=ok
// SIG undefined FUN_140b64ea2(void)

int FUN_140b64ea2(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar6 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x20;
        puVar3 = *(undefined8 **)(lVar6 + lVar8);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (cVar4 != '\0') {
          return iVar7;
        }
        lVar6 = *param_1;
        iVar7 = *(int *)(lVar6 + 0x18 + lVar8);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 140b64f5a FUN_140b64f5a body=8182 status=ok
// SIG undefined FUN_140b64f5a(void)

void FUN_140b64f5a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  void *_Src;
  code *pcVar2;
  undefined4 **ppuVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int *piVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined **ppuVar18;
  undefined4 uVar19;
  undefined8 unaff_RSI;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  longlong *plVar28;
  undefined8 *puVar29;
  int iVar30;
  bool bVar31;
  undefined1 auStack_3f8 [32];
  undefined ***local_3d8;
  undefined4 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  wchar_t *local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  undefined ***local_3a0;
  undefined1 *local_398;
  code *local_390;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong local_368;
  uint local_35c;
  ulonglong local_358;
  longlong local_350;
  longlong *local_348;
  undefined4 local_33c;
  longlong local_338;
  undefined **local_330;
  longlong *local_328;
  undefined8 local_320;
  longlong *local_318;
  longlong local_310;
  undefined **local_308;
  longlong *local_300;
  undefined8 local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  longlong *local_2d0 [2];
  undefined **local_2c0;
  longlong *local_2b8;
  longlong local_2b0;
  undefined **local_2a8;
  longlong *plStack_2a0;
  undefined8 local_290;
  int local_288;
  int local_284;
  undefined1 local_280 [24];
  undefined1 local_268 [8];
  int local_260;
  int local_258;
  undefined1 local_250 [16];
  int local_240;
  undefined1 local_238 [16];
  int local_228;
  undefined1 local_220 [16];
  int local_210;
  longlong local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [16];
  int local_1c0;
  char local_1b8;
  int local_1b4;
  char local_1a8;
  int local_1a4;
  char local_198;
  int local_194;
  int local_190;
  int local_18c;
  char local_130;
  int local_12c;
  undefined1 local_110 [24];
  longlong *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 **local_e0;
  longlong local_d8;
  undefined4 *local_d0;
  longlong local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined ***local_a8;
  undefined1 *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined **local_88;
  longlong *plStack_80;
  longlong *local_78;
  uint local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_bc = 0;
  plVar16 = (longlong *)((longlong)param_1 + 0x44);
  lVar9 = FUN_1408bb964(plVar16);
  if (lVar9 == 0) goto LAB_140b661fc;
  if (param_1[0xc] != 0) {
    FUN_14127b3b4();
  }
  local_d0 = &local_bc;
  lVar20 = *(longlong *)(lVar9 + 0x48);
  uVar19 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  local_c8 = param_2;
  if (lVar20 == 0) {
LAB_140b6630f:
    local_350 = 0;
    bVar7 = 0;
  }
  else {
    lVar10 = FUN_140b6d0be();
    if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
         ) != lVar10 + 0x30)) goto LAB_140b6630f;
    lVar10 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar10 + 0x30) != (int)param_1[0x22]) ||
       (*(int *)(lVar10 + 0x34) != *(int *)((longlong)param_1 + 0x114))) {
      local_290 = param_1[0x22];
      cVar5 = FUN_1457778e0(&local_290,lVar10 + 0x30);
      iVar8 = *(int *)(lVar10 + 0x38);
      if (cVar5 == '\0') {
        if (iVar8 != 0) goto LAB_140b65031;
        iVar8 = 0;
      }
      *(longlong *)(lVar10 + 0x30) = local_290;
      *(int *)(lVar10 + 0x38) = iVar8 + 1;
    }
LAB_140b65031:
    local_350 = lVar20;
    if ((int)param_1[0x22] == 2) {
      bVar7 = *(byte *)(param_1 + 0x25);
    }
    else {
      uVar11 = FUN_14479d2ce(param_1 + 0x28);
      bVar7 = FUN_145777a9e(lVar20,uVar11);
    }
    uVar19 = 0;
  }
  local_e0 = &local_d0;
  local_380 = plVar16;
  local_368 = param_2;
  local_33c = uVar19;
  local_e8 = param_1;
  local_d8 = param_2;
  if ((int)param_1[0x22] == 2) {
    lVar20 = *(longlong *)(param_2 + 0x10);
    iVar8 = *(int *)(lVar20 + 0xbc);
    if ((int)param_1[0x24] == *(int *)(lVar20 + 0xb8)) {
      if (iVar8 == 0) {
        iVar8 = 0;
        goto LAB_140b66713;
      }
    }
    else {
LAB_140b66713:
      *(int *)(lVar20 + 0xb8) = (int)param_1[0x24];
      *(int *)(lVar20 + 0xbc) = iVar8 + 1;
      lVar20 = *(longlong *)(param_2 + 0x10);
    }
    iVar8 = *(int *)(lVar20 + 0xc4);
    if (*(int *)((longlong)param_1 + 300) == *(int *)(lVar20 + 0xc0)) {
      if (iVar8 == 0) {
        iVar8 = 0;
        goto LAB_140b666cf;
      }
    }
    else {
LAB_140b666cf:
      *(int *)(lVar20 + 0xc0) = *(int *)((longlong)param_1 + 300);
      *(int *)(lVar20 + 0xc4) = iVar8 + 1;
    }
    if ((longlong)(int)param_1[0x24] == 0) {
      iVar8 = 0;
    }
    else {
      lVar20 = 0;
      iVar8 = 0;
      do {
        iVar8 = iVar8 + (*(byte *)(param_1[0x23] + 0x10 + lVar20) ^ 1);
        lVar20 = lVar20 + 0x38;
      } while ((longlong)(int)param_1[0x24] * 0x38 - lVar20 != 0);
    }
    lVar20 = *(longlong *)(param_2 + 0x10);
    iVar27 = *(int *)(lVar20 + 0xcc);
    if (*(int *)(lVar20 + 200) == iVar8) {
      if (iVar27 == 0) {
        iVar27 = 0;
        goto LAB_140b6672d;
      }
    }
    else {
LAB_140b6672d:
      *(int *)(lVar20 + 200) = iVar8;
      *(int *)(lVar20 + 0xcc) = iVar27 + 1;
    }
    cVar5 = FUN_140b6c352(param_1);
    lVar10 = *(longlong *)(param_2 + 0x10);
    iVar8 = *(int *)(lVar10 + 0xdc);
    if (*(char *)(lVar10 + 0xd8) == cVar5) {
      if (iVar8 != 0) goto LAB_140b65151;
      iVar8 = 0;
    }
    *(char *)(lVar10 + 0xd8) = cVar5;
LAB_140b661b0:
    *(int *)(lVar10 + 0xdc) = iVar8 + 1;
    lVar10 = *(longlong *)(param_2 + 0x10);
  }
  else {
    iVar27 = FUN_140d01982(lVar9);
    iVar27 = iVar27 + (int)param_1[0x27];
    lVar20 = *(longlong *)(param_2 + 0x10);
    iVar8 = *(int *)(lVar20 + 0xbc);
    if (iVar27 == *(int *)(lVar20 + 0xb8)) {
      if (iVar8 == 0) {
        iVar8 = 0;
        goto LAB_140b66107;
      }
    }
    else {
LAB_140b66107:
      *(int *)(lVar20 + 0xb8) = iVar27;
      *(int *)(lVar20 + 0xbc) = iVar8 + 1;
    }
    plVar28 = (longlong *)FUN_145a8ba14();
    lVar20 = plVar28[0x22];
    if (lVar20 == 0) {
      (**(code **)(*plVar28 + 1000))(plVar28);
      lVar20 = plVar28[0x22];
    }
    lVar10 = *(longlong *)(param_2 + 0x10);
    iVar8 = *(int *)(lVar10 + 0xc4);
    if (*(int *)(lVar20 + 0x394) == *(int *)(lVar10 + 0xc0)) {
      param_2 = local_368;
      plVar16 = local_380;
      if (iVar8 == 0) {
        iVar8 = 0;
        goto LAB_140b6614a;
      }
    }
    else {
LAB_140b6614a:
      *(int *)(lVar10 + 0xc0) = *(int *)(lVar20 + 0x394);
      *(int *)(lVar10 + 0xc4) = iVar8 + 1;
      lVar10 = *(longlong *)(param_2 + 0x10);
    }
    iVar8 = *(int *)(lVar10 + 0xcc);
    if (((int)param_1[0x27] != *(int *)(lVar10 + 200)) || (bVar31 = iVar8 == 0, iVar8 = 0, bVar31))
    {
      *(int *)(lVar10 + 200) = (int)param_1[0x27];
      *(int *)(lVar10 + 0xcc) = iVar8 + 1;
      lVar10 = *(longlong *)(param_2 + 0x10);
    }
    iVar8 = *(int *)(lVar10 + 0xdc);
    if ((*(char *)(lVar10 + 0xd8) != '\0') || (bVar31 = iVar8 == 0, iVar8 = 0, bVar31)) {
      *(undefined1 *)(lVar10 + 0xd8) = 0;
      goto LAB_140b661b0;
    }
  }
LAB_140b65151:
  if (*(int *)(lVar10 + 0xb8) < 2) {
    bVar7 = 0;
  }
  local_f8 = (longlong *)0x0;
  local_f0 = *(int *)(lVar9 + 0x40);
  lVar20 = (longlong)local_f0;
  _Src = *(void **)(lVar9 + 0x38);
  if (lVar20 == 0) {
    local_ec = 0;
  }
  else {
    FUN_140e62166(&local_f8,local_f0,0);
    memcpy(local_f8,_Src,lVar20 << 3);
  }
  lVar9 = FUN_140059518(plVar16);
  uVar15 = (ulonglong)local_f0;
  if (0 < (longlong)uVar15) {
    uVar21 = 1;
    do {
      if ((uVar21 < uVar15) && (lVar9 == local_f8[uVar21])) {
        lVar20 = local_f8[uVar21 - 1];
        local_f8[uVar21 - 1] = local_f8[uVar21];
        local_f8[uVar21] = lVar20;
      }
      uVar22 = uVar21 + 1;
      uVar21 = uVar21 + 2;
    } while (uVar22 < uVar15);
    if (2 < local_f0) {
      local_358 = 2;
      do {
        iVar8 = (int)local_358;
        local_35c = iVar8 * 2;
        local_338 = (longlong)(int)local_35c;
        local_378 = (longlong *)0x0;
        do {
          uVar24 = local_f0 - (int)local_378;
          if ((int)local_35c <= local_f0 - (int)local_378) {
            uVar24 = local_35c;
          }
          local_370 = (longlong *)CONCAT44(local_370._4_4_,uVar24);
          if (iVar8 < (int)uVar24 && 0 < iVar8) {
            local_348 = local_f8 + (longlong)local_378;
            iVar27 = 0;
            uVar21 = local_358;
            while( true ) {
              iVar23 = (int)uVar21;
              iVar30 = 0;
              if (iVar23 - iVar27 != 0 && iVar27 <= iVar23) {
                iVar30 = 0;
                uVar25 = iVar23 - iVar27;
                do {
                  iVar4 = (uVar25 & 1) + (uVar25 >> 1) + iVar30;
                  if (lVar9 == local_348[iVar23]) {
                    iVar4 = iVar30;
                  }
                  iVar30 = iVar4;
                  bVar31 = 1 < uVar25;
                  uVar25 = uVar25 >> 1;
                } while (bVar31);
              }
              iVar30 = iVar30 + iVar27;
              if (iVar23 - iVar30 == 0 || iVar23 < iVar30) break;
              if (uVar24 - iVar23 == 0 || (int)uVar24 < iVar23) {
                iVar27 = 0;
              }
              else {
                plVar16 = local_348 + iVar30;
                iVar27 = 0;
                uVar21 = (ulonglong)(uVar24 - iVar23);
                do {
                  uVar26 = (int)(uVar21 >> 1) + iVar27;
                  uVar25 = (uint)uVar21;
                  if (lVar9 == (local_348 + iVar23)[uVar26]) {
                    iVar27 = uVar26 + (uVar25 & 1);
                  }
                  uVar21 = uVar21 >> 1;
                } while (1 < uVar25);
                uVar21 = (ulonglong)(uint)(iVar23 + iVar27);
                if (0 < iVar27) {
                  plVar28 = plVar16 + ((iVar23 + iVar27) - iVar30);
                  plVar17 = plVar16 + (iVar23 - iVar30);
                  plVar13 = plVar16 + (iVar23 - iVar30);
                  do {
                    while( true ) {
                      plVar1 = plVar17 + 1;
                      lVar20 = *plVar16;
                      *plVar16 = *plVar17;
                      plVar16 = plVar16 + 1;
                      *plVar17 = lVar20;
                      if (plVar1 == plVar28) break;
                      plVar17 = plVar1;
                      if (plVar16 == plVar13) {
                        plVar13 = plVar1;
                      }
                    }
                    plVar17 = plVar13;
                  } while (plVar16 != plVar13);
                }
              }
              if (((int)uVar24 <= (int)uVar21) ||
                 (iVar27 = iVar30 + iVar27 + 1, (int)uVar21 <= iVar27)) break;
            }
          }
          local_378 = (longlong *)((longlong)local_378 + local_338);
        } while ((longlong)local_378 < (longlong)uVar15);
        local_358 = (ulonglong)local_35c;
        param_2 = local_368;
      } while ((int)local_35c < local_f0);
    }
  }
  lVar9 = *(longlong *)(param_2 + 0x10);
  iVar8 = *(int *)(lVar9 + 0xd4);
  if (local_f0 == *(int *)(lVar9 + 0xd0)) {
    if (iVar8 == 0) {
      iVar8 = 0;
      goto LAB_140b666f1;
    }
  }
  else {
LAB_140b666f1:
    *(int *)(lVar9 + 0xd0) = local_f0;
    *(int *)(lVar9 + 0xd4) = iVar8 + 1;
  }
  if (local_f0 != 0) {
    local_370 = local_f8;
    local_378 = param_1 + 0x76;
    local_348 = (longlong *)((longlong)local_f0 << 3);
    plVar16 = (longlong *)0x0;
    do {
      plVar28 = *(longlong **)((longlong)local_370 + (longlong)plVar16);
      if (plVar28 != (longlong *)0x0) {
        FUN_140b6f1b6(&local_290);
        local_228 = local_228 + 1;
        local_2a8 = (undefined **)0x0;
        plStack_2a0 = (longlong *)0x0;
        local_258 = local_258 + 1;
        cVar5 = FUN_140b66fcc(plVar28,local_268,local_238,&local_2a8);
        if (cVar5 != '\0') {
          if (local_260 < 2) {
            FUN_144a5dc74(&local_88);
            FUN_140ac6c96(&DAT_14cbd7650,&local_88);
            uVar11 = FUN_1447a1f4a(&local_88);
            FUN_1449a0272(local_268,uVar11);
            if (local_88 != (undefined **)0x0) {
              (**(code **)(*local_88 + 0x10))();
            }
          }
          if (local_2a8 == (undefined **)0x0) {
            ppuVar18 = (undefined **)0x0;
            plVar17 = (longlong *)0x0;
          }
          else {
            lVar9 = param_1[0xc];
            if (lVar9 != 0) {
              local_88 = local_2a8;
              plStack_80 = plStack_2a0;
              if (plStack_2a0 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_2a0 + 1) = (int)plStack_2a0[1] + 1;
                UNLOCK();
              }
              FUN_140b716a0(lVar9,&local_88);
              plVar17 = plStack_80;
              if (plStack_80 != (longlong *)0x0) {
                LOCK();
                plVar13 = plStack_80 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)*plVar13 == 0) {
                  (**(code **)*plStack_80)(plStack_80);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar17 + 0xc);
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (*piVar12 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                  }
                }
              }
            }
            ppuVar18 = local_2a8;
            local_210 = local_210 + 1;
            local_240 = local_240 + 1;
            local_3d8 = (undefined ***)CONCAT71(local_3d8._1_7_,1);
            FUN_140b6ce58(param_1,local_2a8,local_250,local_220);
            (**(code **)(*ppuVar18 + 0x10))(ppuVar18,&local_98);
            FUN_1446f470e(&local_2b0,L"SHIFT",1);
            if (local_98 == local_2b0) {
              local_88 = ppuVar18;
              plStack_80 = plStack_2a0;
              if (plStack_2a0 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_2a0 + 1) = (int)plStack_2a0[1] + 1;
                UNLOCK();
                goto LAB_140b653b9;
              }
              bVar31 = true;
              plVar17 = (longlong *)0x0;
            }
            else {
              uVar11 = (**(code **)(*param_1 + 0x180))(param_1);
              FUN_140b6ec10(&local_88,uVar11,ppuVar18);
LAB_140b653b9:
              bVar31 = plStack_80 == (longlong *)0x0;
              plVar17 = plStack_80;
            }
            ppuVar18 = local_88;
            if (((param_1[0xc] != 0) && (local_88 != (undefined **)0x0)) &&
               (cVar5 = (**(code **)*local_88)(local_88,local_2a8), cVar5 == '\0')) {
              lVar9 = param_1[0xc];
              if (!bVar31) {
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
              }
              local_88 = ppuVar18;
              plStack_80 = plVar17;
              FUN_140b716a0(lVar9,&local_88);
              plVar13 = plStack_80;
              if (plStack_80 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_80 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_80)(plStack_80);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar13 + 0xc);
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (*piVar12 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
              }
            }
          }
          lVar9 = plVar28[6];
          if ((lVar9 != 0) && (lVar20 = *(longlong *)(lVar9 + 0x398), lVar20 != 0)) {
            if (DAT_14cbae3d8 == 0) {
              local_88 = (undefined **)FUN_141030f22;
              local_390 = FUN_14081d0ea;
              local_398 = &LAB_1464f5fc4;
              local_3a0 = &local_88;
              local_3a8 = &LAB_148c3dd26;
              local_3b0 = &LAB_1459673ba;
              local_3b8 = L"Engine";
              local_3c0 = 0;
              local_3c8 = 0x10000004;
              local_3d0 = 0x10;
              local_3d8 = (undefined ***)CONCAT44(local_3d8._4_4_,0x1360);
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
              lVar20 = *(longlong *)(lVar9 + 0x398);
              if (lVar20 == 0) goto LAB_140b655a3;
            }
            if (((DAT_14cbae3d8 != 0) && (lVar9 = *(longlong *)(lVar20 + 0x10), lVar9 != 0)) &&
               ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar9 + 0x38) &&
                (*(longlong *)
                  (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
                 DAT_14cbae3d8 + 0x30)))) {
              lVar9 = FUN_1403b0700(lVar20);
              if (local_200 == 0 || *(longlong *)(lVar9 + 0x38) != local_208) {
                local_200 = local_200 + 1;
                local_208 = *(longlong *)(lVar9 + 0x38);
              }
              uVar11 = FUN_1401e6c61();
              piVar12 = (int *)FUN_1409e484c(lVar20,uVar11);
              if (local_1f8 == 0 || *piVar12 != local_1fc) {
                local_1f8 = local_1f8 + 1;
                local_1fc = *piVar12;
              }
              FUN_140b6d790(param_1,&local_88,local_208);
              if ((local_1c0 == 0) || (cVar5 = FUN_144722c14(local_1d0,&local_88,0), cVar5 == '\0'))
              {
                FUN_140008f88(local_1d0,&local_88);
                local_1c0 = local_1c0 + 1;
              }
              if (local_88 != (undefined **)0x0) {
                (**(code **)(*local_88 + 0x10))();
              }
              bVar31 = *(char *)(lVar20 + 0xf18) == '\x03';
              if (local_12c == 0 || (bool)local_130 != bVar31) {
                local_12c = local_12c + 1;
                local_130 = bVar31;
              }
            }
          }
LAB_140b655a3:
          if ((bVar7 & 1) == 0) {
            cVar5 = '\0';
          }
          else {
            cVar5 = FUN_1406f1f80(plVar28);
          }
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
          }
          local_2c0 = ppuVar18;
          local_2b8 = plVar17;
          FUN_140b6cc08(param_1,&local_2c0,&local_290);
          if (local_2a8 == (undefined **)0x0) {
            local_88 = (undefined **)0x0;
            plStack_80 = (longlong *)0x0;
          }
          else {
            FUN_140b6c526(&local_88);
          }
          FUN_140775538(local_280,&local_88);
          if (local_88 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          if (ppuVar18 == (undefined **)0x0) {
            local_88 = (undefined **)0x0;
            plStack_80 = (longlong *)0x0;
          }
          else {
            FUN_140b6c526(&local_88,ppuVar18);
          }
          FUN_140775538(local_110,&local_88);
          plVar13 = local_380;
          if (local_88 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          if (local_1b4 == 0 || local_1b8 != cVar5) {
            local_1b4 = local_1b4 + 1;
            local_1b8 = cVar5;
          }
          if (local_194 == 0 || local_198 == '\0') {
            local_198 = '\x01';
            local_194 = local_194 + 1;
          }
          plVar13 = (longlong *)FUN_140059518(plVar13);
          if (plVar13 == plVar28) {
            iVar8 = (**(code **)(*plVar28 + 0x328))(plVar28);
            if (local_18c == 0 || iVar8 + 1 != local_190) {
              local_18c = local_18c + 1;
              local_190 = iVar8 + 1;
            }
          }
          plVar28 = (longlong *)(longlong)local_1fc;
          FUN_14023409e(&local_2e0,local_378,1);
          local_88 = (undefined **)((ulonglong)local_88 & 0xffffffff00000000);
          local_78 = (longlong *)0x0;
          local_70 = 0;
          local_a8 = &local_88;
          local_a0 = local_68;
          plStack_80 = plVar28;
          FUN_14010d304(&local_98,&local_a8);
          local_b8 = local_2e0;
          local_b0 = local_2d8;
          if (local_2d8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_2d8 + 1) = (int)local_2d8[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_2d0,&local_b8,&local_98);
          FUN_14007f2db(local_98,local_90);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 0x10))();
          }
          plVar28 = local_2d8;
          if (local_2d8 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_2d8 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*local_2d8)(local_2d8);
              LOCK();
              piVar12 = (int *)((longlong)plVar28 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (*piVar12 == 0) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
              }
            }
          }
          plVar28 = local_2d0[0];
          plVar13 = local_2d0[0];
          if (*(code **)(*local_2d0[0] + 0x50) != FUN_144828418) {
            plVar13 = (longlong *)(**(code **)(*local_2d0[0] + 0x50))(local_2d0[0]);
          }
          FUN_1447a1fc0(plVar13);
          pcVar2 = *(code **)(*plVar28 + 0x28);
          if (pcVar2 == FUN_14482841c) {
            plVar13 = (longlong *)(plVar28[5] + 8);
            if (plVar28[5] == 0) {
              plVar13 = plVar28 + 3;
            }
          }
          else if (pcVar2 == (code *)&LAB_14010c34c) {
            plVar13 = plVar28 + 2;
          }
          else {
            plVar13 = (longlong *)(*pcVar2)(plVar28);
          }
          FUN_1449a0272(local_1f0,plVar13);
          if (plVar28 != (longlong *)0x0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
          if (local_2a8 == (undefined **)0x0) {
            cVar6 = '\0';
          }
          else {
            cVar6 = FUN_140b670f4(param_1);
          }
          ppuVar3 = local_e0;
          if (local_1a4 == 0 || local_1a8 != cVar6) {
            local_1a4 = local_1a4 + 1;
            local_1a8 = cVar6;
          }
          **local_e0 = **local_e0 + 1;
          iVar8 = **local_e0;
          lVar9 = *(longlong *)(local_e0[1] + 4);
          if (*(int *)(lVar9 + 0x20) < iVar8) {
            FUN_140b66f52(lVar9 + 0x18);
            *(int *)(lVar9 + 0x28) = *(int *)(lVar9 + 0x28) + 1;
            iVar8 = **ppuVar3;
          }
          lVar9 = *(longlong *)(local_d8 + 0x10);
          piVar12 = (int *)(lVar9 + 0x28);
          *piVar12 = *piVar12 + 1;
          FUN_140b6f902((longlong)iVar8 * 0x198 + *(longlong *)(lVar9 + 0x18) + -0x198,&local_290);
          if (cVar5 != '\0') {
            bVar7 = 0;
          }
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar28 = plVar17 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar12 = (int *)((longlong)plVar17 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (*piVar12 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
        }
        plVar28 = plStack_2a0;
        if (plStack_2a0 != (longlong *)0x0) {
          LOCK();
          plVar17 = plStack_2a0 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plStack_2a0)(plStack_2a0);
            LOCK();
            piVar12 = (int *)((longlong)plVar28 + 0xc);
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (*piVar12 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
            }
          }
        }
        FUN_140b6c9ae(&local_290);
      }
      plVar16 = plVar16 + 1;
    } while (local_348 != plVar16);
  }
  if ((int)param_1[0x22] == 2) {
    if ((longlong)(int)param_1[0x24] != 0) {
      puVar29 = (undefined8 *)param_1[0x23];
      lVar9 = (longlong)(int)param_1[0x24] * 0x38;
      local_380 = param_1 + 0x76;
      do {
        if (*(char *)(puVar29 + 2) == '\0') {
          FUN_140b6f1b6(&local_290);
          local_2a8 = (undefined **)0x0;
          plStack_2a0 = (longlong *)0x0;
          local_228 = local_228 + 1;
          local_258 = local_258 + 1;
          uVar11 = (**(code **)(*param_1 + 0x180))(param_1);
          local_3d8 = &local_2a8;
          cVar5 = FUN_140b672a2(uVar11,puVar29,local_268,local_238);
          if (cVar5 != '\0') {
            if (local_2a8 == (undefined **)0x0) {
              ppuVar18 = (undefined **)0x0;
LAB_140b66743:
              plVar16 = (longlong *)0x0;
            }
            else {
              if ((char)local_33c == '\0') {
                FUN_140b6cfe6(local_350);
              }
              lVar20 = param_1[0xc];
              if (lVar20 != 0) {
                local_88 = local_2a8;
                plStack_80 = plStack_2a0;
                if (plStack_2a0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_2a0 + 1) = (int)plStack_2a0[1] + 1;
                  UNLOCK();
                }
                FUN_140b716a0(lVar20,&local_88);
                plVar16 = plStack_80;
                if (plStack_80 != (longlong *)0x0) {
                  LOCK();
                  plVar28 = plStack_80 + 1;
                  *(int *)plVar28 = (int)*plVar28 + -1;
                  UNLOCK();
                  if ((int)*plVar28 == 0) {
                    (**(code **)*plStack_80)(plStack_80);
                    LOCK();
                    piVar12 = (int *)((longlong)plVar16 + 0xc);
                    *piVar12 = *piVar12 + -1;
                    UNLOCK();
                    if (*piVar12 == 0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                    }
                  }
                }
              }
              local_210 = local_210 + 1;
              local_240 = local_240 + 1;
              local_3d8 = (undefined ***)((ulonglong)local_3d8 & 0xffffffffffffff00);
              FUN_140b6ce58(param_1,local_2a8,local_250,local_220);
              (**(code **)(*local_2a8 + 0x10))(local_2a8,&local_98);
              FUN_1446f470e(&local_2e8,L"SHIFT",1);
              ppuVar18 = local_2a8;
              if (local_98 == local_2e8) {
                plStack_80 = plStack_2a0;
                local_88 = local_2a8;
                if (plStack_2a0 == (longlong *)0x0) goto LAB_140b66743;
                LOCK();
                *(int *)(plStack_2a0 + 1) = (int)plStack_2a0[1] + 1;
                UNLOCK();
                plVar16 = plStack_2a0;
              }
              else {
                uVar11 = (**(code **)(*param_1 + 0x180))(param_1);
                FUN_140b6ec10(&local_88,uVar11,ppuVar18);
                plVar16 = plStack_80;
                ppuVar18 = local_88;
              }
            }
            lVar20 = (**(code **)(*param_1 + 0x180))(param_1);
            if (((lVar20 != 0) && (lVar20 = FUN_1400f6f32(lVar20), lVar20 != 0)) &&
               (lVar20 = *(longlong *)(lVar20 + 0x68), lVar20 != 0)) {
              local_88 = &PTR_FUN_14a184370;
              plStack_80 = (longlong *)*puVar29;
              local_78 = (longlong *)puVar29[1];
              if (local_78 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                UNLOCK();
              }
              local_70 = local_70 & 0xffffff00;
              FUN_140b6e764(lVar20,&local_98,&local_88);
              local_88 = &PTR_FUN_14a184370;
              (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(byte)local_70])(&plStack_80);
              lVar20 = FUN_140d71416(lVar20,&local_98);
              if (lVar20 != 0) {
                lVar10 = FUN_144a7b4ca();
                if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                  iVar8 = FUN_1457778b0(lVar20);
                  if (local_290._4_4_ == 0 || iVar8 != (int)local_290) {
                    local_290 = CONCAT44(local_290._4_4_ + 1,iVar8);
                  }
                  if (local_284 == 0 || *(int *)(lVar20 + 0x394) != local_288) {
                    local_284 = local_284 + 1;
                    local_288 = *(int *)(lVar20 + 0x394);
                  }
                  bVar31 = *(char *)(lVar20 + 0xf18) == '\x03';
                  if (local_12c == 0 || (bool)local_130 != bVar31) {
                    local_12c = local_12c + 1;
                    local_130 = bVar31;
                  }
                }
              }
            }
            if (local_2a8 == (undefined **)0x0) {
              local_88 = (undefined **)0x0;
              plStack_80 = (longlong *)0x0;
            }
            else {
              FUN_140b6c526(&local_88);
            }
            FUN_140775538(local_280,&local_88);
            if (local_88 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            if (ppuVar18 == (undefined **)0x0) {
              local_88 = (undefined **)0x0;
              plStack_80 = (longlong *)0x0;
            }
            else {
              FUN_140b6c526(&local_88,ppuVar18);
            }
            FUN_140775538(local_110,&local_88);
            if (local_88 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            if (local_1b4 == 0 || *(char *)((longlong)puVar29 + 0x11) != local_1b8) {
              local_1b4 = local_1b4 + 1;
              local_1b8 = *(char *)((longlong)puVar29 + 0x11);
            }
            if (local_200 == 0 || puVar29[3] != local_208) {
              local_200 = local_200 + 1;
              local_208 = puVar29[3];
            }
            if (local_1f8 == 0 || *(int *)(puVar29 + 6) != local_1fc) {
              local_1f8 = local_1f8 + 1;
              local_1fc = *(int *)(puVar29 + 6);
            }
            FUN_140b6d790(param_1,&local_88,local_208);
            FUN_14003c038(local_1d0,&local_88);
            if (local_88 != (undefined **)0x0) {
              (**(code **)(*local_88 + 0x10))();
            }
            plVar28 = (longlong *)(longlong)local_1fc;
            FUN_14023409e(&local_2f8,local_380,1);
            local_88 = (undefined **)((ulonglong)local_88 & 0xffffffff00000000);
            local_78 = (longlong *)0x0;
            local_70 = 0;
            local_a0 = local_68;
            local_a8 = &local_88;
            plStack_80 = plVar28;
            FUN_14010d304(&local_98,&local_a8);
            local_b8 = local_2f8;
            local_b0 = local_2f0;
            if (local_2f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_2d0,&local_b8,&local_98);
            FUN_14007f2db(local_98,local_90);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x10))();
            }
            plVar28 = local_2f0;
            if (local_2f0 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_2f0 + 1;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)*plVar17 == 0) {
                (**(code **)*local_2f0)(local_2f0);
                LOCK();
                piVar12 = (int *)((longlong)plVar28 + 0xc);
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (*piVar12 == 0) {
                  (**(code **)(*plVar28 + 0x10))(plVar28);
                }
              }
            }
            uVar11 = FUN_1447a1f4a(local_2d0);
            FUN_1449a0272(local_1f0,uVar11);
            if (local_2d0[0] != (longlong *)0x0) {
              (**(code **)(*local_2d0[0] + 0x10))();
            }
            if (local_2a8 == (undefined **)0x0) {
              cVar5 = '\0';
            }
            else {
              cVar5 = FUN_140b670f4(param_1);
            }
            if (local_1a4 == 0 || local_1a8 != cVar5) {
              local_1a4 = local_1a4 + 1;
              local_1a8 = cVar5;
            }
            local_308 = ppuVar18;
            local_300 = plVar16;
            if (plVar16 == (longlong *)0x0) {
              FUN_140b6cc08(param_1,&local_308,&local_290);
              FUN_140b67082(&local_e8,&local_290);
            }
            else {
              LOCK();
              *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
              UNLOCK();
              FUN_140b6cc08(param_1,&local_308,&local_290);
              FUN_140b67082(&local_e8,&local_290);
              LOCK();
              plVar28 = plVar16 + 1;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)*plVar28 == 0) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar12 = (int *)((longlong)plVar16 + 0xc);
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (*piVar12 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
            }
          }
          plVar16 = plStack_2a0;
          if (plStack_2a0 != (longlong *)0x0) {
            LOCK();
            plVar28 = plStack_2a0 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              (**(code **)*plStack_2a0)(plStack_2a0);
              LOCK();
              piVar12 = (int *)((longlong)plVar16 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (*piVar12 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          FUN_140b6c9ae(&local_290);
        }
        puVar29 = puVar29 + 7;
        lVar9 = lVar9 + -0x38;
      } while (lVar9 != 0);
    }
  }
  else if (((int)param_1[0x22] == 1) && ((longlong)(int)param_1[0x27] != 0)) {
    lVar9 = param_1[0x26];
    local_370 = param_1 + 0x76;
    local_380 = param_1 + 0x28;
    lVar20 = (longlong)(int)param_1[0x27] << 3;
    do {
      FUN_140b6f1b6(&local_290);
      local_228 = local_228 + 1;
      local_2a8 = (undefined **)0x0;
      plStack_2a0 = (longlong *)0x0;
      local_258 = local_258 + 1;
      uVar11 = FUN_14479d2ce(lVar9);
      cVar5 = FUN_141179052(uVar11,local_268,local_238,&local_2a8);
      if (cVar5 != '\0') {
        if (local_2a8 == (undefined **)0x0) {
          plVar16 = (longlong *)0x0;
          ppuVar18 = (undefined **)0x0;
        }
        else {
          lVar10 = param_1[0xc];
          if (lVar10 != 0) {
            local_88 = local_2a8;
            plStack_80 = plStack_2a0;
            if (plStack_2a0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_2a0 + 1) = (int)plStack_2a0[1] + 1;
              UNLOCK();
            }
            FUN_140b716a0(lVar10,&local_88);
            plVar16 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              plVar28 = plStack_80 + 1;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)*plVar28 == 0) {
                (**(code **)*plStack_80)(plStack_80);
                LOCK();
                piVar12 = (int *)((longlong)plVar16 + 0xc);
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (*piVar12 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
            }
          }
          ppuVar18 = local_2a8;
          local_210 = local_210 + 1;
          local_240 = local_240 + 1;
          local_3d8 = (undefined ***)((ulonglong)local_3d8 & 0xffffffffffffff00);
          FUN_140b6ce58(param_1,local_2a8,local_250,local_220);
          (**(code **)(*ppuVar18 + 0x10))(ppuVar18,&local_98);
          FUN_1446f470e(&local_310,L"SHIFT",1);
          if (local_98 == local_310) {
            local_88 = ppuVar18;
            plStack_80 = plStack_2a0;
            if (plStack_2a0 == (longlong *)0x0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_2a0 + 1) = (int)plStack_2a0[1] + 1;
              UNLOCK();
              plVar16 = plStack_2a0;
            }
          }
          else {
            uVar11 = (**(code **)(*param_1 + 0x180))(param_1);
            FUN_140b6ec10(&local_88,uVar11,ppuVar18);
            plVar16 = plStack_80;
            ppuVar18 = local_88;
          }
        }
        lVar10 = FUN_14479d2ce(lVar9);
        if (lVar10 != 0) {
          lVar14 = FUN_144a7b4ca();
          if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
            lVar14 = FUN_1403b0700(lVar10);
            local_a8 = *(undefined ****)(lVar14 + 0x38);
            FUN_1400021e4(&local_a8,&local_88);
            iVar8 = (int)plStack_80 + -1;
            if ((int)plStack_80 == 0) {
              iVar8 = 0;
            }
            FUN_1446f82e2(&local_98,iVar8,local_88,1);
            if (local_200 == 0 || local_98 != local_208) {
              local_208 = local_98;
              local_200 = local_200 + 1;
            }
            if (local_88 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            uVar11 = FUN_1401e6c61();
            piVar12 = (int *)FUN_1409e484c(lVar10,uVar11);
            if (local_1f8 == 0 || *piVar12 != local_1fc) {
              local_1f8 = local_1f8 + 1;
              local_1fc = *piVar12;
            }
            FUN_140b6d790(param_1,&local_88,local_208);
            FUN_14003c038(local_1d0,&local_88);
            if (local_88 != (undefined **)0x0) {
              (**(code **)(*local_88 + 0x10))();
            }
            plVar28 = (longlong *)(longlong)local_1fc;
            FUN_14023409e(&local_320,local_370,1);
            local_88 = (undefined **)((ulonglong)local_88 & 0xffffffff00000000);
            local_78 = (longlong *)0x0;
            local_70 = 0;
            local_a8 = &local_88;
            local_a0 = local_68;
            plStack_80 = plVar28;
            FUN_14010d304(&local_98,&local_a8);
            local_b8 = local_320;
            local_b0 = local_318;
            if (local_318 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_318 + 1) = (int)local_318[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_2d0,&local_b8,&local_98);
            FUN_14007f2db(local_98,local_90);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x10))();
            }
            plVar28 = local_318;
            if (local_318 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_318 + 1;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)*plVar17 == 0) {
                (**(code **)*local_318)(local_318);
                LOCK();
                piVar12 = (int *)((longlong)plVar28 + 0xc);
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (*piVar12 == 0) {
                  (**(code **)(*plVar28 + 0x10))(plVar28);
                }
              }
            }
            uVar11 = FUN_1447a1f4a(local_2d0);
            FUN_1449a0272(local_1f0,uVar11);
            if (local_2d0[0] != (longlong *)0x0) {
              (**(code **)(*local_2d0[0] + 0x10))();
            }
            bVar31 = *(char *)(lVar10 + 0xf18) == '\x03';
            if (local_12c == 0 || (bool)local_130 != bVar31) {
              local_12c = local_12c + 1;
              local_130 = bVar31;
            }
          }
        }
        if (local_2a8 == (undefined **)0x0) {
          local_88 = (undefined **)0x0;
          plStack_80 = (longlong *)0x0;
        }
        else {
          FUN_140b6c526(&local_88);
        }
        FUN_140775538(local_280,&local_88);
        if (local_88 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (ppuVar18 == (undefined **)0x0) {
          local_88 = (undefined **)0x0;
          plStack_80 = (longlong *)0x0;
        }
        else {
          FUN_140b6c526(&local_88,ppuVar18);
        }
        FUN_140775538(local_110,&local_88);
        if (local_88 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        cVar5 = FUN_14007c310(local_380,lVar9);
        if (local_1b4 == 0 || local_1b8 != cVar5) {
          local_1b4 = local_1b4 + 1;
          local_1b8 = cVar5;
        }
        local_330 = ppuVar18;
        local_328 = plVar16;
        if (plVar16 == (longlong *)0x0) {
          FUN_140b6cc08(param_1,&local_330,&local_290);
          FUN_140b67082(&local_e8,&local_290);
        }
        else {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
          FUN_140b6cc08(param_1,&local_330,&local_290);
          FUN_140b67082(&local_e8,&local_290);
          LOCK();
          plVar28 = plVar16 + 1;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)*plVar28 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar12 = (int *)((longlong)plVar16 + 0xc);
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (*piVar12 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
      }
      plVar16 = plStack_2a0;
      if (plStack_2a0 != (longlong *)0x0) {
        LOCK();
        plVar28 = plStack_2a0 + 1;
        *(int *)plVar28 = (int)*plVar28 + -1;
        UNLOCK();
        if ((int)*plVar28 == 0) {
          (**(code **)*plStack_2a0)(plStack_2a0);
          LOCK();
          piVar12 = (int *)((longlong)plVar16 + 0xc);
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (*piVar12 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      FUN_140b6c9ae(&local_290);
      lVar9 = lVar9 + 8;
      lVar20 = lVar20 + -8;
    } while (lVar20 != 0);
  }
  lVar9 = *(longlong *)(local_368 + 0x10);
  FUN_140b66f52(lVar9 + 0x18,local_bc);
  piVar12 = (int *)(lVar9 + 0x28);
  *piVar12 = *piVar12 + 1;
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140b661fc:
  if ((local_60 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b66f52 FUN_140b66f52 body=121 status=ok
// SIG undefined FUN_140b66f52(void)

void FUN_140b66f52(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145777a0a(param_1,iVar1);
    }
    FUN_1457778b7((longlong)iVar1 * 0x198 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_145777936(param_1,param_2,iVar1 - param_2);
    FUN_1457778f6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140b66fcc FUN_140b66fcc body=181 status=ok
// SIG undefined FUN_140b66fcc(void)

undefined8 FUN_140b66fcc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  short local_3c [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
        FUN_1409845a0(lVar1,local_3c,param_1);
        if (-1 < local_3c[0]) {
          local_58 = param_3;
          local_50 = param_4;
          uVar2 = FUN_140b673b8(lVar1,local_3c,1,param_2);
          goto LAB_140b67059;
        }
      }
    }
  }
  uVar2 = 0;
LAB_140b67059:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b67082 FUN_140b67082 body=113 status=ok
// SIG undefined FUN_140b67082(void)

void FUN_140b67082(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  *(int *)*puVar2 = *(int *)*puVar2 + 1;
  iVar4 = *(int *)*puVar2;
  lVar3 = *(longlong *)(puVar2[1] + 0x10);
  if (*(int *)(lVar3 + 0x20) < iVar4) {
    FUN_140b66f52(lVar3 + 0x18);
    *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + 1;
    iVar4 = *(int *)*puVar2;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  piVar1 = (int *)(lVar3 + 0x28);
  *piVar1 = *piVar1 + 1;
  FUN_140b6f902((longlong)iVar4 * 0x198 + *(longlong *)(lVar3 + 0x18) + -0x198,param_2);
  return;
}



// FUNCTION 140b670f4 FUN_140b670f4 body=429 status=ok
// SIG undefined FUN_140b670f4(void)

ulonglong FUN_140b670f4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = *(longlong **)(param_2 + 0x10);
  if (local_38 == (longlong *)0x0) {
LAB_140b6724d:
    local_38 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)local_38[1];
    do {
      if (iVar6 == 0) goto LAB_140b6724d;
      LOCK();
      iVar4 = (int)local_38[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(local_38 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
  }
  local_40 = (longlong *)0x0;
  if (local_38 != (longlong *)0x0) {
    local_40 = *(longlong **)(param_2 + 8);
  }
  uVar5 = (**(code **)(*local_40 + 0x40))();
  iVar6 = FUN_140b6c20e(param_1 + 0x3c,uVar5,&local_40);
  plVar2 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (iVar6 != -1) {
    uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    goto LAB_140b67229;
  }
  uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_140b6deae(&local_50,uVar7,param_2);
  if (local_50 == (longlong *)0x0) {
LAB_140b67200:
    uVar8 = 0;
  }
  else {
    local_60 = local_50;
    local_58 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    uVar5 = (**(code **)(*local_50 + 0x40))();
    iVar6 = FUN_140b6c20e(param_1 + 0x3c,uVar5,&local_60);
    plVar2 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (iVar6 == -1) goto LAB_140b67200;
    uVar8 = CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1);
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)local_48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_140b67229:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140b672a2 FUN_140b672a2 body=276 status=ok
// SIG undefined FUN_140b672a2(void)

byte FUN_140b672a2(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  short local_6c [2];
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_1 == 0) || (lVar2 = FUN_1400f6f32(), lVar2 == 0)) ||
     (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    puVar3 = &local_60;
    local_68 = &PTR_FUN_14a184370;
    local_60 = *param_2;
    local_58 = param_2[1];
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    local_50 = 0;
    FUN_140b6e764(lVar2,local_6c,&local_68);
    local_68 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(puVar3);
    bVar1 = (byte)puVar3;
    if (-1 < local_6c[0]) {
      local_80 = param_5;
      local_88 = param_4;
      bVar1 = FUN_140b673b8(lVar2,local_6c,*(undefined1 *)(param_2 + 2),param_3);
    }
    bVar1 = -1 < local_6c[0] & bVar1;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 140b673b8 FUN_140b673b8 body=1203 status=ok
// SIG undefined FUN_140b673b8(void)

ulonglong FUN_140b673b8(longlong param_1,short *param_2,undefined1 param_3,undefined ***param_4,
                       undefined ***param_5,undefined8 *param_6)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined8 unaff_RBX;
  longlong *plVar8;
  undefined **ppuVar9;
  longlong lVar10;
  undefined1 auStack_d8 [39];
  undefined1 local_b1;
  undefined2 *local_b0;
  int local_a8;
  undefined **local_a0;
  int local_98;
  undefined4 local_94;
  void *local_90;
  int local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  byte local_50;
  undefined7 uStack_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  sVar3 = *param_2;
  if (-1 >= sVar3 || param_1 == 0) goto LAB_140b67823;
  local_b1 = param_3;
  FUN_143d9c020(param_1,&local_70,param_2);
  FUN_1411d710c(param_1,&local_68,param_2,local_70);
  if (&local_68 == param_4) {
    if (local_68 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    *param_4 = local_68;
    local_68 = (undefined **)0x0;
    *(undefined4 *)(param_4 + 1) = local_60;
    *(undefined4 *)((longlong)param_4 + 0xc) = uStack_5c;
  }
  FUN_1413d9c32(param_1,&local_68,param_2,&local_70);
  if ((&DAT_149fc1b6e)[local_50] == '\x01') {
    uVar5 = CONCAT44(uStack_5c,local_60);
    if (local_58 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      plVar8 = local_58;
    }
  }
  else {
    plVar8 = (longlong *)0x0;
    uVar5 = 0;
  }
  *param_6 = uVar5;
  plVar6 = (longlong *)param_6[1];
  if (plVar8 == plVar6) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar8;
        goto joined_r0x000140b67516;
      }
    }
  }
  else {
    param_6[1] = plVar8;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000140b67516:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
  FUN_140b6e92a(&local_68,local_70);
  if (&local_68 == param_5) {
    if (local_68 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    *param_5 = local_68;
    local_68 = (undefined **)0x0;
    *(undefined4 *)(param_5 + 1) = local_60;
    *(undefined4 *)((longlong)param_5 + 0xc) = uStack_5c;
  }
  FUN_140056680(&local_68,L"(<.*?>)");
  plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149e18f40;
  plVar8 = plVar6 + 2;
  uVar5 = 0;
  FUN_140e202a6(DAT_14c8445d0,plVar8,&local_68,0);
  local_80 = plVar8;
  local_78 = plVar6;
  if (local_68 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140d5ff90(&local_68,&local_80,param_4);
  local_90 = (void *)0x0;
  local_88 = *(int *)(param_4 + 1);
  lVar10 = (longlong)local_88;
  ppuVar9 = *param_4;
  if (lVar10 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_88,0);
    memcpy(local_90,ppuVar9,lVar10 * 2);
  }
  cVar4 = FUN_140d5fc7a(&local_68);
  if (cVar4 != '\0') {
    do {
      FUN_140d5fd3a(&local_68,&local_a0,1);
      FUN_14475c2da(&local_a0,0x3c,0x20,1);
      FUN_14475c2da(&local_a0,0x3e,0x20,1);
      ppuVar9 = (undefined **)&DAT_149dfb77a;
      if (local_98 != 0) {
        ppuVar9 = local_a0;
      }
      FUN_140d5fd3a(&local_68,&local_b0,1);
      puVar7 = &DAT_149dfb77a;
      if (local_a8 != 0) {
        puVar7 = local_b0;
      }
      uVar5 = 0;
      FUN_1448097c4(&local_90,puVar7,ppuVar9,1);
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a0 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      cVar4 = FUN_140d5fc7a(&local_68);
    } while (cVar4 != '\0');
  }
  iVar2 = local_88 + -1;
  if (local_88 == 0) {
    iVar2 = 0;
  }
  FUN_1402980a2(param_4,local_90,iVar2);
  FUN_140b6e028(&local_a0,param_4,param_6,CONCAT71((int7)((ulonglong)uVar5 >> 8),local_b1) ^ 1);
  if (&local_a0 == param_4) {
    if (local_a0 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    *param_4 = local_a0;
    local_a0 = (undefined **)0x0;
    *(int *)(param_4 + 1) = local_98;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_94;
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar8 = (longlong *)CONCAT71(uStack_4f,local_50);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = (longlong *)CONCAT44(uStack_5c,local_60);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_78 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_140b67823:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),-1 < sVar3 && param_1 != 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6786c FUN_140b6786c body=18710 status=ok
// SIG undefined FUN_140b6786c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140b6786c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined *puVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined **ppuVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  uint uVar30;
  longlong lVar31;
  longlong *plVar32;
  longlong *plVar33;
  char cVar34;
  undefined8 *puVar35;
  char cVar36;
  int iVar37;
  undefined **ppuVar38;
  byte bVar39;
  bool bVar40;
  undefined1 auStack_458 [32];
  undefined ***local_438;
  undefined8 local_428;
  longlong *local_420;
  undefined8 local_418;
  undefined8 local_410;
  longlong *local_408;
  undefined8 *local_400;
  undefined8 *local_3f8;
  undefined8 *local_3f0;
  longlong local_3e8;
  int local_3dc;
  undefined8 *local_3d8;
  longlong local_3d0;
  longlong *local_3c8;
  longlong local_3c0;
  undefined8 *local_3b8;
  undefined8 *local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong *local_388;
  longlong *local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined8 *local_368;
  ulonglong uStack_360;
  longlong local_358;
  undefined8 uStack_350;
  longlong *local_348;
  ulonglong uStack_340;
  undefined8 *local_338;
  ulonglong uStack_330;
  longlong *local_320;
  longlong **local_318;
  longlong local_310;
  longlong *local_308;
  uint local_300;
  undefined4 local_2fc;
  undefined8 *local_2f8;
  undefined8 uStack_2f0;
  undefined **local_2e0;
  undefined **local_2d8;
  longlong *plStack_2d0;
  longlong *local_2c8 [2];
  longlong *local_2b8;
  undefined8 uStack_2b0;
  undefined **local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  int local_290;
  int local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  int local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  int local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong local_248;
  undefined8 uStack_240;
  undefined *local_238;
  undefined8 uStack_230;
  undefined **local_228;
  longlong *plStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong *local_208;
  undefined4 local_200;
  longlong *local_1f8;
  longlong *plStack_1f0;
  longlong local_1e8 [2];
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  int local_1c4;
  int local_1c0;
  longlong local_1b8;
  undefined4 local_1b0;
  int local_1a8;
  undefined1 local_1a0 [16];
  int local_190;
  undefined1 local_188 [16];
  int local_178;
  undefined **local_170;
  int local_168;
  int local_164;
  int local_160;
  undefined1 local_158 [24];
  int local_140;
  int local_13c;
  undefined1 local_138 [16];
  int local_128;
  char local_110;
  int local_10c;
  byte local_108;
  int local_104;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  char local_a8;
  int local_a4;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_3d0 = (longlong)param_1 + 0x44;
  lVar15 = FUN_1408bb964();
  if ((lVar15 == 0) || (local_3c0 = *(longlong *)(lVar15 + 0x48), local_3c0 == 0))
  goto LAB_140b6a85a;
  lVar15 = FUN_140b6d0be();
  if ((*(int *)(*(longlong *)(local_3c0 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(local_3c0 + 0x10) + 0x30) +
       (longlong)*(int *)(lVar15 + 0x38) * 8) != lVar15 + 0x30)) goto LAB_140b6a85a;
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  if (param_1[0xb] != 0) {
    FUN_14127b3b4();
  }
  plVar21 = param_1 + 0x50;
  local_3e8 = param_2;
  local_3c8 = plVar21;
  if ((int)param_1[0x51] != *(int *)((longlong)param_1 + 0x2b4)) {
    FUN_145778e5c(plVar21);
    FUN_145778b4c(plVar21);
  }
  local_308 = (longlong *)0x0;
  uVar12 = *(uint *)(param_1 + 0x2a);
  lVar15 = param_1[0x29];
  local_420 = param_1;
  if (uVar12 == 0) {
    local_2fc = 0;
    uVar30 = 0;
  }
  else {
    uVar30 = 0;
    local_300 = uVar12;
    FUN_148e52678(&local_308,uVar12,0);
    FUN_148e526ea(local_308,lVar15,uVar12);
    uVar14 = local_300;
    uVar25 = (ulonglong)(int)local_300;
    uVar12 = local_300;
    if (uVar25 != 0) {
      local_428 = local_308;
      uVar30 = 0;
      if ((longlong)(int)local_420[0x2c] != 0) {
        lVar15 = local_420[0x2b];
        lVar17 = (longlong)(int)local_420[0x2c] * 0x1a0;
        plVar21 = local_308 + 6;
        do {
          cVar8 = FUN_140ba41f1(local_428,lVar15);
          if (((cVar8 != '\0') && (cVar8 = FUN_140ba41f1(plVar21,lVar15 + 0x30), cVar8 != '\0')) &&
             (local_428[0x32] == *(longlong *)(lVar15 + 400))) goto LAB_140b68844;
          lVar15 = lVar15 + 0x1a0;
          lVar17 = lVar17 + -0x1a0;
        } while (lVar17 != 0);
      }
      lVar15 = 0;
LAB_140b68844:
      bVar40 = lVar15 != 0;
      uVar27 = 0;
LAB_140b6884f:
      do {
        uVar12 = (uint)uVar27;
        uVar28 = (ulonglong)(uVar12 + 1);
        local_408 = (longlong *)(longlong)(int)uVar12;
        if ((int)(uVar12 + 1) < (int)uVar14) {
          uVar28 = (longlong)local_408 + 1;
          local_410 = (longlong *)
                      CONCAT44(local_410._4_4_,(int)CONCAT71((int7)(int3)(uVar27 >> 8),1));
          do {
            lVar15 = 0;
            if ((longlong)(int)local_420[0x2c] != 0) {
              plVar21 = local_428 + uVar28 * 0x34;
              lVar17 = local_420[0x2b];
              lVar24 = (longlong)(int)local_420[0x2c] * 0x1a0;
              local_418 = plVar21 + 6;
              do {
                lVar15 = FUN_140ba41f1(plVar21,lVar17);
                if ((((char)lVar15 != '\0') &&
                    (lVar15 = FUN_140ba41f1(local_418,lVar17 + 0x30), (char)lVar15 != '\0')) &&
                   (lVar15 = plVar21[0x32], lVar15 == *(longlong *)(lVar17 + 400))) {
                  bVar39 = lVar17 != 0 ^ bVar40;
                  lVar15 = CONCAT71((int7)((ulonglong)lVar15 >> 8),bVar39);
                  if (bVar39 == 0) goto LAB_140b68901;
                  goto LAB_140b68921;
                }
                lVar17 = lVar17 + 0x1a0;
                lVar24 = lVar24 + -0x1a0;
              } while (lVar24 != 0);
            }
            if (bVar40 != false) {
              iVar23 = (int)uVar28 - uVar12;
              plVar21 = local_428 + (longlong)local_408 * 0x34;
              goto LAB_140b6894f;
            }
LAB_140b68901:
            uVar28 = uVar28 + 1;
            local_410 = (longlong *)
                        CONCAT44(local_410._4_4_,
                                 (int)CONCAT71((int7)((ulonglong)lVar15 >> 8),
                                               (longlong)uVar28 < (longlong)uVar25));
          } while (uVar28 != uVar25);
          uVar28 = (ulonglong)uVar14;
        }
        else {
          local_410 = (longlong *)((ulonglong)local_410._4_4_ << 0x20);
        }
LAB_140b68921:
        iVar23 = (int)uVar28 - uVar12;
        if (bVar40 == false) {
          if (uVar30 != uVar12) {
            memmove(local_428 + (longlong)(int)uVar30 * 0x34,local_428 + (longlong)local_408 * 0x34,
                    (longlong)iVar23 * 0x1a0);
          }
          uVar30 = uVar30 + iVar23;
          bVar40 = true;
          uVar12 = uVar30;
          uVar27 = uVar28;
          if (((ulonglong)local_410 & 1) == 0) break;
          goto LAB_140b6884f;
        }
        plVar21 = local_428 + (longlong)local_408 * 0x34;
LAB_140b6894f:
        FUN_140b6c454(plVar21,iVar23);
        bVar40 = false;
        uVar12 = uVar30;
        uVar27 = uVar28;
      } while (((ulonglong)local_410 & 1) != 0);
    }
  }
  local_300 = uVar12;
  plVar21 = local_420;
  local_320 = local_420;
  local_318 = &local_308;
  local_310 = local_3e8;
  if ((int)local_420[0x22] == 2) {
    lVar15 = *(longlong *)(local_3e8 + 0x10);
    iVar23 = *(int *)(lVar15 + 0x7c);
    if ((char)local_420[0x39] == '\0') {
      if (uVar30 == *(uint *)(lVar15 + 0x78)) {
        if (iVar23 != 0) goto LAB_140b679dc;
        iVar23 = 1;
      }
      else {
        iVar23 = iVar23 + 1;
      }
LAB_140b679d5:
      *(uint *)(lVar15 + 0x78) = uVar30;
      *(int *)(lVar15 + 0x7c) = iVar23;
    }
    else {
      if (*(uint *)(lVar15 + 0x78) != 0) {
        iVar23 = iVar23 + 1;
LAB_140b679d2:
        uVar30 = 0;
        goto LAB_140b679d5;
      }
      if (iVar23 == 0) {
        iVar23 = 1;
        goto LAB_140b679d2;
      }
    }
LAB_140b679dc:
    local_338 = (undefined8 *)0x0;
    uStack_330 = 0;
    local_348 = (longlong *)0x0;
    uStack_340 = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_368 = (undefined8 *)0x0;
    uStack_360 = 0;
    lVar15 = local_420[0x3b];
    if (lVar15 != 0) {
      if (*(int *)(lVar15 + 0x74) == 0) {
        FUN_140b6cdce(&local_338,lVar15 + 0xa0);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1f8 = (longlong *)0x0;
      plStack_1f0 = (longlong *)0x0;
      local_1cc = 0xffffffff00000080;
      local_1c4 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      lVar15 = plVar21[0x24];
      if ((longlong)(int)lVar15 != 0) {
        lVar17 = local_420[0x23];
        lVar24 = 0;
        do {
          uVar19 = *(undefined8 *)(lVar17 + lVar24);
          uVar16 = (**(code **)(*local_420 + 0x180))();
          FUN_140b6e166(&local_2a8,uVar16,uVar19);
          if (local_2a8 != (undefined **)0x0) {
            local_218 = local_2a8;
            uStack_210 = uStack_2a0;
            if (uStack_2a0 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_2a0 + 1) = (int)uStack_2a0[1] + 1;
              UNLOCK();
            }
            FUN_140b6d1a4(&local_1f8,&local_228,&local_218,0);
            plVar21 = uStack_210;
            if (uStack_210 != (longlong *)0x0) {
              LOCK();
              plVar18 = uStack_210 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*uStack_210)(uStack_210);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
          }
          plVar21 = uStack_2a0;
          if (uStack_2a0 != (longlong *)0x0) {
            LOCK();
            plVar18 = uStack_2a0 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*uStack_2a0)(uStack_2a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          lVar24 = lVar24 + 0x38;
        } while ((longlong)(int)lVar15 * 0x38 - lVar24 != 0);
      }
      puVar35 = local_338;
      iVar23 = (int)uStack_330;
      lVar15 = (longlong)(int)uStack_330;
      if (lVar15 != 0) {
        (**(code **)(*(longlong *)*local_338 + 8))((longlong *)*local_338,&local_2a8);
        uVar9 = (**(code **)(*local_2a8 + 0x40))();
        iVar10 = FUN_140b6c20e(&local_1f8,uVar9,&local_2a8);
        plVar21 = uStack_2a0;
        if (uStack_2a0 != (longlong *)0x0) {
          LOCK();
          plVar18 = uStack_2a0 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*uStack_2a0)(uStack_2a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        bVar39 = iVar10 != -1;
        local_400 = puVar35;
        local_408 = puVar35 + 2;
        iVar37 = 0;
        iVar10 = 0;
        do {
          local_410 = (longlong *)CONCAT44(local_410._4_4_,iVar37);
          local_428 = (longlong *)(CONCAT71(local_428._1_7_,bVar39) ^ 1);
          local_418 = (longlong *)CONCAT44(local_418._4_4_,iVar10);
          lVar17 = (longlong)iVar10;
          iVar37 = iVar10 + 1;
          if (iVar10 + 1 < iVar23) {
            iVar37 = iVar23;
          }
          local_3f0 = (undefined8 *)(lVar17 * 0x10);
          plVar21 = local_408 + lVar17 * 2;
          local_3f8 = (undefined8 *)CONCAT71(local_3f8._1_7_,bVar39);
          do {
            lVar17 = lVar17 + 1;
            iVar13 = iVar37;
            if (lVar15 <= lVar17) break;
            (**(code **)(*(longlong *)*plVar21 + 8))((longlong *)*plVar21,&local_2a8);
            uVar9 = (**(code **)(*local_2a8 + 0x40))();
            iVar11 = FUN_140b6c20e(&local_1f8,uVar9,&local_2a8);
            plVar18 = uStack_2a0;
            if (uStack_2a0 != (longlong *)0x0) {
              LOCK();
              plVar26 = uStack_2a0 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*uStack_2a0)(uStack_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            iVar10 = iVar10 + 1;
            plVar21 = plVar21 + 2;
            iVar13 = iVar10;
          } while ((bool)(bVar39 & 1) == (iVar11 != -1));
          iVar10 = iVar13;
          iVar37 = iVar10 - (int)local_418;
          if (((ulonglong)local_3f8 & 1) == 0) {
            iVar13 = (int)local_410;
            bVar39 = (byte)local_428;
            if ((int)local_410 != (int)local_418) {
              memmove(local_400 + (longlong)(int)local_410 * 2,
                      (void *)((longlong)local_3f0 + (longlong)local_400),(longlong)iVar37 << 4);
            }
            iVar37 = iVar13 + iVar37;
          }
          else {
            FUN_140b6c1c2((longlong)local_3f0 + (longlong)local_400,iVar37);
            bVar39 = (byte)local_428;
            iVar37 = (int)local_410;
          }
        } while (lVar17 < lVar15);
        uStack_330 = CONCAT44(uStack_330._4_4_,iVar37);
      }
      lVar15 = (**(code **)(*local_420 + 0x180))();
      if (((lVar15 == 0) || (*(longlong *)(lVar15 + 0x1f0) == 0)) ||
         (lVar15 = FUN_140d6e14c(), lVar15 == 0)) {
        lVar15 = 0;
      }
      else {
        lVar15 = *(longlong *)(lVar15 + 0x30);
      }
      lVar17 = FUN_140059518(local_3d0);
      puVar35 = local_338;
      if (lVar17 == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(lVar17 + 0xe0);
      }
      lVar17 = (longlong)(int)uStack_330;
      if (lVar17 != 0) {
        lVar24 = 0;
        do {
          plVar18 = (longlong *)FUN_14001cc68(0x88,0x10);
          plVar18[1] = (longlong)&DAT_100000001;
          *plVar18 = (longlong)&PTR_FUN_14b9b47d0;
          local_428 = plVar18 + 2;
          plVar18[2] = 0;
          plVar18[3] = 0;
          plVar18[4] = 0;
          plVar18[5] = 0;
          plVar18[6] = 0;
          plVar18[7] = 0;
          plVar18[8] = 0;
          plVar18[9] = 0;
          plVar18[10] = 0;
          *(undefined1 *)(plVar18 + 10) = 1;
          plVar18[0xb] = 0;
          plVar18[0xc] = 0;
          plVar18[0xd] = 0;
          plVar18[0xe] = 0;
          plVar18[0xf] = 0;
          plVar18[0x10] = 0;
          lVar31 = *(longlong *)((longlong)puVar35 + lVar24);
          plVar21 = *(longlong **)((longlong)puVar35 + lVar24 + 8);
          if (plVar21 == (longlong *)0x0) {
            *local_428 = lVar31;
          }
          else {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            plVar26 = (longlong *)plVar18[3];
            plVar18[2] = lVar31;
            if (plVar21 == plVar26) {
              LOCK();
              plVar26 = plVar21 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar31 = *plVar21;
LAB_140b68546:
                  (**(code **)(lVar31 + 0x10))(plVar21);
                }
              }
            }
            else {
              plVar18[3] = (longlong)plVar21;
              if (plVar26 != (longlong *)0x0) {
                LOCK();
                plVar21 = plVar26 + 1;
                *(int *)plVar21 = (int)*plVar21 + -1;
                UNLOCK();
                if ((int)*plVar21 == 0) {
                  (**(code **)*plVar26)(plVar26);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar26 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    lVar31 = *plVar26;
                    plVar21 = plVar26;
                    goto LAB_140b68546;
                  }
                }
              }
            }
          }
          (**(code **)(**(longlong **)((longlong)puVar35 + lVar24) + 8))
                    (*(longlong **)((longlong)puVar35 + lVar24),&local_2a8);
          plVar21 = uStack_2a0;
          if (uStack_2a0 == (longlong *)0x0) {
            plVar18[6] = (longlong)local_2a8;
            plVar26 = (longlong *)plVar18[7];
            if (plVar26 != (longlong *)0x0) {
              plVar18[7] = 0;
LAB_140b68567:
              LOCK();
              plVar21 = plVar26 + 1;
              *(int *)plVar21 = (int)*plVar21 + -1;
              UNLOCK();
              if ((int)*plVar21 == 0) {
                (**(code **)*plVar26)(plVar26);
                LOCK();
                piVar1 = (int *)((longlong)plVar26 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar23 = *piVar1;
                UNLOCK();
joined_r0x000140b685a4:
                if (iVar23 == 0) {
                  (**(code **)(*plVar26 + 0x10))(plVar26);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(uStack_2a0 + 1) = (int)uStack_2a0[1] + 1;
            UNLOCK();
            plVar18[6] = (longlong)local_2a8;
            plVar26 = (longlong *)plVar18[7];
            if (uStack_2a0 == plVar26) {
              LOCK();
              plVar26 = uStack_2a0 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*uStack_2a0)(uStack_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar23 = *piVar1;
                UNLOCK();
                plVar26 = plVar21;
                goto joined_r0x000140b685a4;
              }
            }
            else {
              plVar18[7] = (longlong)uStack_2a0;
              if (plVar26 != (longlong *)0x0) goto LAB_140b68567;
            }
          }
          plVar21 = uStack_2a0;
          if (uStack_2a0 != (longlong *)0x0) {
            LOCK();
            plVar26 = uStack_2a0 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*uStack_2a0)(uStack_2a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          (**(code **)(**(longlong **)((longlong)puVar35 + lVar24) + 8))
                    (*(longlong **)((longlong)puVar35 + lVar24),&local_218);
          ppuVar38 = local_218;
          uVar19 = (**(code **)(*local_420 + 0x180))();
          FUN_140b6ec10(&local_2a8,uVar19,ppuVar38);
          plVar26 = uStack_2a0;
          plVar18[8] = (longlong)local_2a8;
          local_2a8 = (undefined **)0x0;
          plVar21 = (longlong *)plVar18[9];
          if (uStack_2a0 == plVar21) {
LAB_140b68608:
            plVar21 = uStack_2a0;
            if (uStack_2a0 != (longlong *)0x0) {
              LOCK();
              plVar26 = uStack_2a0 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*uStack_2a0)(uStack_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
          }
          else {
            uStack_2a0 = (longlong *)0x0;
            plVar18[9] = (longlong)plVar26;
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              plVar26 = plVar21 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
              goto LAB_140b68608;
            }
          }
          plVar21 = uStack_210;
          if (uStack_210 != (longlong *)0x0) {
            LOCK();
            plVar26 = uStack_210 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*uStack_210)(uStack_210);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          if (lVar15 != 0) {
            (**(code **)(**(longlong **)((longlong)puVar35 + lVar24) + 8))
                      (*(longlong **)((longlong)puVar35 + lVar24),&local_218);
            FUN_140b6c480(lVar15,&local_2a8,uVar9,local_218);
            plVar26 = uStack_2a0;
            plVar18[0xb] = (longlong)local_2a8;
            local_2a8 = (undefined **)0x0;
            plVar21 = (longlong *)plVar18[0xc];
            if (uStack_2a0 == plVar21) {
LAB_140b68757:
              plVar21 = uStack_2a0;
              if (uStack_2a0 != (longlong *)0x0) {
                LOCK();
                plVar26 = uStack_2a0 + 1;
                *(int *)plVar26 = (int)*plVar26 + -1;
                UNLOCK();
                if ((int)*plVar26 == 0) {
                  (**(code **)*uStack_2a0)(uStack_2a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                }
              }
            }
            else {
              uStack_2a0 = (longlong *)0x0;
              plVar18[0xc] = (longlong)plVar26;
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                plVar26 = plVar21 + 1;
                *(int *)plVar26 = (int)*plVar26 + -1;
                UNLOCK();
                if ((int)*plVar26 == 0) {
                  (**(code **)*plVar21)(plVar21);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                }
                goto LAB_140b68757;
              }
            }
            plVar21 = uStack_210;
            if (uStack_210 != (longlong *)0x0) {
              LOCK();
              plVar26 = uStack_210 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*uStack_210)(uStack_210);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
            (**(code **)(**(longlong **)((longlong)puVar35 + lVar24) + 8))
                      (*(longlong **)((longlong)puVar35 + lVar24),&local_218);
            FUN_140b723e8(lVar15,&local_2a8,uVar9,local_218);
            plVar26 = uStack_2a0;
            plVar18[0xd] = (longlong)local_2a8;
            local_2a8 = (undefined **)0x0;
            plVar21 = (longlong *)plVar18[0xe];
            if (uStack_2a0 == plVar21) {
LAB_140b686f7:
              plVar21 = uStack_2a0;
              if (uStack_2a0 != (longlong *)0x0) {
                LOCK();
                plVar26 = uStack_2a0 + 1;
                *(int *)plVar26 = (int)*plVar26 + -1;
                UNLOCK();
                if ((int)*plVar26 == 0) {
                  (**(code **)*uStack_2a0)(uStack_2a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                }
              }
            }
            else {
              uStack_2a0 = (longlong *)0x0;
              plVar18[0xe] = (longlong)plVar26;
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                plVar26 = plVar21 + 1;
                *(int *)plVar26 = (int)*plVar26 + -1;
                UNLOCK();
                if ((int)*plVar26 == 0) {
                  (**(code **)*plVar21)(plVar21);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                }
                goto LAB_140b686f7;
              }
            }
            plVar21 = uStack_210;
            if (uStack_210 != (longlong *)0x0) {
              LOCK();
              plVar26 = uStack_210 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*uStack_210)(uStack_210);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
          }
          uVar25 = uStack_2f0;
          lVar31 = (longlong)(int)uStack_2f0;
          uVar12 = (int)uStack_2f0 + 1;
          uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar12);
          if (uStack_2f0._4_4_ < uVar12) {
            FUN_140b70bee(&local_2f8,uVar25 & 0xffffffff);
          }
          local_2f8[lVar31 * 2] = local_428;
          local_2f8[lVar31 * 2 + 1] = plVar18;
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
            LOCK();
            plVar21 = plVar18 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          lVar24 = lVar24 + 0x10;
        } while (lVar17 * 0x10 != lVar24);
      }
      local_1b0 = 0;
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
      FUN_140b6c31a(&local_1f8);
    }
    plVar21 = local_420;
    lVar15 = local_420[0x3a];
    if ((lVar15 != 0) && ((char)local_420[0x39] == '\0')) {
      if (*(int *)(lVar15 + 0x74) == 0) {
        FUN_140b6cdce(&local_348,lVar15 + 0xa0);
      }
      local_408 = (longlong *)(longlong)(int)uStack_340;
      if (local_408 != (longlong *)0x0) {
        local_410 = local_348;
        lVar15 = plVar21[0x24];
        if ((longlong)(int)lVar15 == 0) {
          local_428 = (longlong *)((ulonglong)local_428 & 0xffffffff00000000);
        }
        else {
          lVar17 = plVar21[0x23];
          uVar25 = 0;
          do {
            (**(code **)(*(longlong *)*local_410 + 8))((longlong *)*local_410,&local_1f8);
            cVar8 = (**(code **)**(undefined8 **)(lVar17 + uVar25))
                              (*(undefined8 **)(lVar17 + uVar25),local_1f8);
            plVar18 = plStack_1f0;
            if (plStack_1f0 != (longlong *)0x0) {
              LOCK();
              plVar26 = plStack_1f0 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*plStack_1f0)(plStack_1f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            if (cVar8 != '\0') {
              iVar23 = (int)(uVar25 >> 3) * -0x49249249;
              if (-1 < iVar23) {
                local_428 = (longlong *)
                            CONCAT44(local_428._4_4_,
                                     CONCAT31((int3)((uint)iVar23 >> 8),iVar23 < (int)plVar21[0x24])
                                    );
                goto LAB_140b6814f;
              }
              break;
            }
            uVar25 = uVar25 + 0x38;
          } while ((longlong)(int)lVar15 * 0x38 - uVar25 != 0);
          local_428 = (longlong *)((ulonglong)local_428._4_4_ << 0x20);
        }
LAB_140b6814f:
        puVar35 = (undefined8 *)0x0;
        plVar21 = (longlong *)0x0;
        puVar20 = puVar35;
LAB_140b68158:
        do {
          local_3f8 = puVar20;
          uVar12 = (int)plVar21 + 1;
          puVar20 = (undefined8 *)(longlong)(int)plVar21;
          local_400 = puVar20;
          if ((int)uVar12 < (int)local_408) {
            plVar26 = (longlong *)((longlong)puVar20 + 1);
            bVar40 = true;
            local_418 = (longlong *)((ulonglong)plVar21 & 0xffffffff);
            do {
              lVar15 = local_420[0x24];
              puVar20 = (undefined8 *)0x0;
              plVar21 = plVar26;
              if ((longlong)(int)lVar15 != 0) {
                plVar18 = local_410 + (longlong)plVar26 * 2;
                lVar17 = local_420[0x23];
                uVar25 = 0;
                do {
                  (**(code **)(*(longlong *)*plVar18 + 8))((longlong *)*plVar18,&local_1f8);
                  puVar20 = (undefined8 *)
                            (**(code **)**(undefined8 **)(lVar17 + uVar25))
                                      (*(undefined8 **)(lVar17 + uVar25),local_1f8);
                  plVar32 = plStack_1f0;
                  cVar8 = (char)puVar20;
                  if (plStack_1f0 != (longlong *)0x0) {
                    LOCK();
                    plVar29 = plStack_1f0 + 1;
                    *(int *)plVar29 = (int)*plVar29 + -1;
                    UNLOCK();
                    if ((int)*plVar29 == 0) {
                      puVar20 = (undefined8 *)(**(code **)*plStack_1f0)(plStack_1f0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar32 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        puVar20 = (undefined8 *)(**(code **)(*plVar32 + 0x10))(plVar32);
                      }
                    }
                  }
                  if (cVar8 != '\0') {
                    uVar12 = (int)(uVar25 >> 3) * -0x49249249;
                    puVar20 = (undefined8 *)(ulonglong)uVar12;
                    if (-1 < (int)uVar12) {
                      bVar39 = (int)uVar12 < (int)local_420[0x24] ^ (byte)local_428;
                      puVar20 = (undefined8 *)(ulonglong)CONCAT31((int3)(uVar12 >> 8),bVar39);
                      plVar18 = local_418;
                      puVar35 = local_3f8;
                      if ((bVar39 & 1) == 0) goto LAB_140b681fa;
                      goto LAB_140b68243;
                    }
                    break;
                  }
                  uVar25 = uVar25 + 0x38;
                } while ((longlong)(int)lVar15 * 0x38 - uVar25 != 0);
              }
              if (((ulonglong)local_428 & 1) != 0) {
                FUN_140b6c1c2(local_410 + (longlong)local_400 * 2,(int)plVar26 - (int)local_418);
                uVar12 = (uint)local_3f8;
                puVar35 = local_3f8;
                goto joined_r0x000140b68284;
              }
LAB_140b681fa:
              plVar26 = (longlong *)((longlong)plVar26 + 1);
              bVar40 = (longlong)plVar26 < (longlong)local_408;
              plVar18 = local_418;
              puVar35 = local_3f8;
              plVar21 = local_408;
            } while (plVar26 != local_408);
          }
          else {
            bVar40 = false;
            plVar18 = (longlong *)((ulonglong)plVar21 & 0xffffffff);
            plVar21 = (longlong *)(ulonglong)uVar12;
          }
LAB_140b68243:
          uVar12 = (uint)puVar35;
          iVar23 = (int)plVar21 - (uint)plVar18;
          if (((ulonglong)local_428 & 1) != 0) {
            FUN_140b6c1c2(local_410 + (longlong)local_400 * 2,iVar23);
joined_r0x000140b68284:
            local_428 = (longlong *)((ulonglong)local_428 & 0xffffffff00000000);
            puVar20 = local_3f8;
            if (!bVar40) break;
            goto LAB_140b68158;
          }
          if (uVar12 != (uint)plVar18) {
            puVar20 = memmove(local_410 + (longlong)(int)uVar12 * 2,
                              local_410 + (longlong)local_400 * 2,(longlong)iVar23 << 4);
          }
          uVar12 = uVar12 + iVar23;
          puVar35 = (undefined8 *)(ulonglong)uVar12;
          local_428 = (longlong *)
                      CONCAT44(local_428._4_4_,(int)CONCAT71((int7)((ulonglong)puVar20 >> 8),1));
          puVar20 = puVar35;
        } while (bVar40);
        uStack_340 = CONCAT44(uStack_340._4_4_,uVar12);
        plVar21 = local_420;
      }
      lVar15 = (**(code **)(*plVar21 + 0x180))(plVar21);
      if (((lVar15 == 0) || (*(longlong *)(lVar15 + 0x1f0) == 0)) ||
         (lVar15 = FUN_140d6e14c(), lVar15 == 0)) {
        plVar18 = (longlong *)0x0;
      }
      else {
        plVar18 = *(longlong **)(lVar15 + 0x30);
      }
      lVar15 = FUN_140059518(local_3d0);
      if (lVar15 == 0) {
        local_410._0_4_ = 0xffffffff;
      }
      else {
        local_410._0_4_ = *(undefined4 *)(lVar15 + 0xe0);
      }
      local_428 = plVar18;
      if ((longlong)(int)uStack_340 != 0) {
        plVar26 = local_348 + (longlong)(int)uStack_340 * 2;
        plVar18 = local_348;
        do {
          (**(code **)(*(longlong *)*plVar18 + 8))((longlong *)*plVar18,&local_1f8);
          plVar21 = local_1f8;
          puVar35 = local_2f8;
          lVar15 = (longlong)(int)uStack_2f0;
          if (lVar15 != 0) {
            lVar17 = 0;
            uVar12 = 0;
            do {
              lVar24 = *(longlong *)((longlong)puVar35 + lVar17);
              puVar20 = *(undefined8 **)(lVar24 + 0x30);
              if (puVar20 != (undefined8 *)0x0) {
                cVar8 = (**(code **)*puVar20)(puVar20,plVar21);
                if (cVar8 == '\0') {
                  lVar24 = *(longlong *)((longlong)puVar35 + lVar17);
                  goto LAB_140b68adb;
                }
LAB_140b68de9:
                if (-1 < (int)uVar12) {
                  plVar21 = (longlong *)0x0;
                  plVar32 = (longlong *)0x0;
                  if ((int)uStack_2f0 <= (int)uVar12) goto LAB_140b68b06;
                  plVar21 = (longlong *)local_2f8[(ulonglong)(uVar12 & 0x7fffffff) * 2];
                  plVar32 = (longlong *)local_2f8[(ulonglong)(uVar12 & 0x7fffffff) * 2 + 1];
                  if (plVar32 == (longlong *)0x0) goto LAB_140b68b03;
                  LOCK();
                  *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
                  UNLOCK();
                  goto LAB_140b68b06;
                }
                break;
              }
LAB_140b68adb:
              puVar20 = *(undefined8 **)(lVar24 + 0x20);
              if ((puVar20 != (undefined8 *)0x0) &&
                 (cVar8 = (**(code **)*puVar20)(puVar20,plVar21), cVar8 != '\0'))
              goto LAB_140b68de9;
              uVar12 = uVar12 + 1;
              lVar17 = lVar17 + 0x10;
            } while (lVar15 * 0x10 != lVar17);
          }
          plVar21 = (longlong *)0x0;
LAB_140b68b03:
          plVar32 = (longlong *)0x0;
LAB_140b68b06:
          plVar29 = plStack_1f0;
          if (plStack_1f0 != (longlong *)0x0) {
            LOCK();
            plVar4 = plStack_1f0 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plStack_1f0)(plStack_1f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar29 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar29 + 0x10))(plVar29);
              }
            }
          }
          if (plVar21 == (longlong *)0x0) {
            plVar21 = (longlong *)FUN_14001cc68(0x88,0x10);
            plVar29 = local_428;
            plVar21[1] = (longlong)&DAT_100000001;
            *plVar21 = (longlong)&PTR_FUN_14b9b47d0;
            plVar21[2] = 0;
            plVar21[3] = 0;
            plVar21[4] = 0;
            plVar21[5] = 0;
            plVar21[6] = 0;
            plVar21[7] = 0;
            plVar21[8] = 0;
            plVar21[9] = 0;
            plVar21[10] = 0;
            *(undefined1 *)(plVar21 + 10) = 1;
            plVar21[0xb] = 0;
            plVar21[0xc] = 0;
            plVar21[0xd] = 0;
            plVar21[0xe] = 0;
            plVar21[0xf] = 0;
            plVar21[0x10] = 0;
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
            }
            if (plVar21 == plVar32) {
              if (plVar32 == (longlong *)0x0) {
                plVar33 = (longlong *)0x0;
              }
              else {
                LOCK();
                plVar4 = plVar21 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                plVar33 = plVar32;
                if ((int)*plVar4 == 0) {
                  (**(code **)*plVar21)(plVar21);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar23 = *piVar1;
                  UNLOCK();
                  plVar4 = plVar21;
                  plVar29 = local_428;
                  goto joined_r0x000140b6c170;
                }
              }
            }
            else {
              plVar33 = plVar21;
              if (plVar32 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar32 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*plVar32)(plVar32);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar32 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar23 = *piVar1;
                  UNLOCK();
                  plVar4 = plVar32;
                  plVar32 = plVar21;
joined_r0x000140b6c170:
                  plVar33 = plVar32;
                  if (iVar23 == 0) {
                    (**(code **)(*plVar4 + 0x10))();
                  }
                }
              }
            }
            plVar32 = plVar33;
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar21 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
            (**(code **)(*(longlong *)*plVar18 + 8))((longlong *)*plVar18,&local_1f8);
            plVar4 = plStack_1f0;
            if (plStack_1f0 == (longlong *)0x0) {
              plVar21[8] = (longlong)local_1f8;
              plVar33 = (longlong *)plVar21[9];
              if (plVar33 != (longlong *)0x0) {
                plVar21[9] = 0;
LAB_140b6b1a6:
                LOCK();
                plVar4 = plVar33 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*plVar33)(plVar33);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar33 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar23 = *piVar1;
                  UNLOCK();
joined_r0x000140b6b1e2:
                  if (iVar23 == 0) {
                    (**(code **)(*plVar33 + 0x10))(plVar33);
                  }
                }
              }
            }
            else {
              LOCK();
              *(int *)(plStack_1f0 + 1) = (int)plStack_1f0[1] + 1;
              UNLOCK();
              plVar21[8] = (longlong)local_1f8;
              plVar33 = (longlong *)plVar21[9];
              if (plStack_1f0 == plVar33) {
                LOCK();
                plVar33 = plStack_1f0 + 1;
                *(int *)plVar33 = (int)*plVar33 + -1;
                UNLOCK();
                if ((int)*plVar33 == 0) {
                  (**(code **)*plStack_1f0)(plStack_1f0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar23 = *piVar1;
                  UNLOCK();
                  plVar33 = plVar4;
                  goto joined_r0x000140b6b1e2;
                }
              }
              else {
                plVar21[9] = (longlong)plStack_1f0;
                if (plVar33 != (longlong *)0x0) goto LAB_140b6b1a6;
              }
            }
            plVar4 = plStack_1f0;
            if (plStack_1f0 != (longlong *)0x0) {
              LOCK();
              plVar33 = plStack_1f0 + 1;
              *(int *)plVar33 = (int)*plVar33 + -1;
              UNLOCK();
              if ((int)*plVar33 == 0) {
                (**(code **)*plStack_1f0)(plStack_1f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            (**(code **)(*(longlong *)*plVar18 + 8))((longlong *)*plVar18,&local_2a8);
            ppuVar38 = local_2a8;
            uVar19 = (**(code **)(*local_420 + 0x180))();
            FUN_140b6e166(&local_1f8,uVar19,ppuVar38);
            plVar33 = plStack_1f0;
            plVar21[6] = (longlong)local_1f8;
            local_1f8 = (longlong *)0x0;
            plVar4 = (longlong *)plVar21[7];
            if (plStack_1f0 == plVar4) {
LAB_140b68e39:
              plVar4 = plStack_1f0;
              if (plStack_1f0 != (longlong *)0x0) {
                LOCK();
                plVar33 = plStack_1f0 + 1;
                *(int *)plVar33 = (int)*plVar33 + -1;
                UNLOCK();
                if ((int)*plVar33 == 0) {
                  (**(code **)*plStack_1f0)(plStack_1f0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
            }
            else {
              plStack_1f0 = (longlong *)0x0;
              plVar21[7] = (longlong)plVar33;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar33 = plVar4 + 1;
                *(int *)plVar33 = (int)*plVar33 + -1;
                UNLOCK();
                plVar29 = local_428;
                if ((int)*plVar33 == 0) {
                  (**(code **)*plVar4)(plVar4);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar29 = local_428;
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                    plVar29 = local_428;
                  }
                }
                goto LAB_140b68e39;
              }
            }
            plVar4 = uStack_2a0;
            if (uStack_2a0 != (longlong *)0x0) {
              LOCK();
              plVar33 = uStack_2a0 + 1;
              *(int *)plVar33 = (int)*plVar33 + -1;
              UNLOCK();
              if ((int)*plVar33 == 0) {
                (**(code **)*uStack_2a0)(uStack_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            uVar25 = uStack_2f0;
            *(undefined1 *)(plVar21 + 10) = 0;
            if (plVar32 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
              UNLOCK();
            }
            lVar15 = (longlong)(int)uStack_2f0;
            uVar12 = (int)uStack_2f0 + 1;
            uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar12);
            if (uStack_2f0._4_4_ < uVar12) {
              FUN_140b70bee(&local_2f8,uVar25 & 0xffffffff);
            }
            plVar21 = plVar21 + 2;
            local_2f8[lVar15 * 2] = plVar21;
            local_2f8[lVar15 * 2 + 1] = plVar32;
            if (plVar32 == (longlong *)0x0) {
              plVar32 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
              UNLOCK();
              LOCK();
              plVar4 = plVar32 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar32)(plVar32);
                LOCK();
                piVar1 = (int *)((longlong)plVar32 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) goto LAB_140b6b251;
              }
            }
          }
          else {
            (**(code **)(*(longlong *)*plVar18 + 8))((longlong *)*plVar18,&local_218);
            lVar15 = local_3c0;
            local_2a8 = local_218;
            uStack_2a0 = uStack_210;
            if (uStack_210 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_210 + 1) = (int)uStack_210[1] + 1;
              UNLOCK();
            }
            FUN_140b7124e(local_3c0,&local_1f8);
            FUN_140b74390(lVar15,&local_228);
            plVar29 = local_428;
            if ((int)plStack_1f0 == (int)plStack_220) {
              if ((int)plStack_1f0 < 2) {
                bVar40 = true;
              }
              else {
                lVar15 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)local_1f8 + lVar15);
                  uVar12 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)local_228 + lVar15);
                  uVar14 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_140b68f0b;
                    }
                    iVar23 = uVar12 - uVar14;
                    goto LAB_140b68f61;
                  }
                  if (uVar2 == 0) break;
LAB_140b68f0b:
                  lVar15 = lVar15 + 2;
                }
                iVar23 = 0;
LAB_140b68f61:
                bVar40 = iVar23 == 0;
              }
            }
            else {
              bVar40 = (int)plStack_220 + (int)plStack_1f0 == 1;
            }
            *(bool *)(plVar21 + 8) = bVar40;
            if (local_228 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            if (local_1f8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            plVar4 = uStack_2a0;
            if (uStack_2a0 != (longlong *)0x0) {
              LOCK();
              plVar33 = uStack_2a0 + 1;
              *(int *)plVar33 = (int)*plVar33 + -1;
              UNLOCK();
              if ((int)*plVar33 == 0) {
                (**(code **)*uStack_2a0)(uStack_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            plVar4 = uStack_210;
            if (uStack_210 != (longlong *)0x0) {
              LOCK();
              plVar33 = uStack_210 + 1;
              *(int *)plVar33 = (int)*plVar33 + -1;
              UNLOCK();
              if ((int)*plVar33 == 0) {
                (**(code **)*uStack_210)(uStack_210);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            if (((char)plVar21[8] == '\0') && (plVar29 = local_428, (char)local_420[0x39] == '\0'))
            {
              if (plVar32 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
                UNLOCK();
              }
              iVar23 = (int)uStack_2f0;
              lVar15 = (longlong)(int)uStack_2f0;
              if (lVar15 == 0) {
                local_400 = (undefined8 *)0x0;
              }
              else {
                local_3f8 = (undefined8 *)
                            CONCAT71(local_3f8._1_7_,(longlong *)*local_2f8 == plVar21);
                local_3d8 = local_2f8;
                local_3f0 = local_2f8 + 2;
                local_400 = (undefined8 *)0x0;
                iVar10 = 0;
                do {
                  puVar35 = local_3f8;
                  bVar39 = (byte)local_3f8;
                  local_3f8 = (undefined8 *)((ulonglong)local_3f8 ^ 1);
                  local_408 = (longlong *)CONCAT44(local_408._4_4_,iVar10);
                  lVar17 = (longlong)iVar10;
                  iVar37 = iVar10 + 1;
                  if (iVar10 + 1 < iVar23) {
                    iVar37 = iVar23;
                  }
                  puVar20 = local_3f0 + lVar17 * 2;
                  lVar24 = lVar17;
                  iVar13 = iVar10;
                  do {
                    lVar24 = lVar24 + 1;
                    iVar11 = iVar37;
                    if (lVar15 <= lVar24) break;
                    plVar29 = (longlong *)*puVar20;
                    iVar13 = iVar13 + 1;
                    puVar20 = puVar20 + 2;
                    iVar11 = iVar13;
                  } while ((bool)(bVar39 & 1) == (plVar29 == plVar21));
                  iVar37 = iVar11 - iVar10;
                  local_418 = (longlong *)CONCAT44(local_418._4_4_,iVar37);
                  if (((ulonglong)puVar35 & 1) == 0) {
                    if ((int)local_400 != iVar10) {
                      memmove(local_3d8 + (longlong)(int)local_400 * 2,local_3d8 + lVar17 * 2,
                              (longlong)iVar37 << 4);
                    }
                    local_400 = (undefined8 *)(ulonglong)(uint)((int)local_400 + (int)local_418);
                  }
                  else {
                    FUN_140b6d6d1(local_3d8 + lVar17 * 2,iVar37);
                  }
                  iVar10 = iVar11;
                } while (lVar24 < lVar15);
                uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(int)local_400);
              }
              if (plVar32 != (longlong *)0x0) {
                LOCK();
                plVar29 = plVar32 + 1;
                *(int *)plVar29 = (int)*plVar29 + -1;
                UNLOCK();
                if ((int)*plVar29 == 0) {
                  (**(code **)*plVar32)(plVar32);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar32 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar32 + 0x10))(plVar32);
                  }
                }
                LOCK();
                *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
                UNLOCK();
                local_400 = (undefined8 *)(uStack_2f0 & 0xffffffff);
              }
              uVar12 = (int)local_400 + 1;
              uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar12);
              if (uStack_2f0._4_4_ < uVar12) {
                FUN_140b70bee(&local_2f8,local_400);
              }
              local_2f8[(longlong)(int)local_400 * 2] = plVar21;
              local_2f8[(longlong)(int)local_400 * 2 + 1] = plVar32;
              plVar29 = local_428;
              if (plVar32 == (longlong *)0x0) {
                plVar32 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
                UNLOCK();
                LOCK();
                plVar4 = plVar32 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 != 0) goto LAB_140b68d02;
                (**(code **)*plVar32)(plVar32);
                LOCK();
                piVar1 = (int *)((longlong)plVar32 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar29 = local_428;
                if (*piVar1 != 0) goto LAB_140b68d02;
LAB_140b6b251:
                (**(code **)(*plVar32 + 0x10))(plVar32);
              }
            }
          }
LAB_140b68d02:
          lVar15 = *plVar18;
          plVar4 = (longlong *)plVar18[1];
          if (plVar4 == (longlong *)0x0) {
            plVar21[2] = lVar15;
            plVar33 = (longlong *)plVar21[3];
            if (plVar33 != (longlong *)0x0) {
              plVar21[3] = 0;
LAB_140b6b087:
              LOCK();
              plVar4 = plVar33 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar33)(plVar33);
                LOCK();
                piVar1 = (int *)((longlong)plVar33 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar23 = *piVar1;
                UNLOCK();
joined_r0x000140b6b0c3:
                if (iVar23 == 0) {
                  (**(code **)(*plVar33 + 0x10))(plVar33);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            plVar21[2] = lVar15;
            plVar33 = (longlong *)plVar21[3];
            if (plVar4 == plVar33) {
              LOCK();
              plVar33 = plVar4 + 1;
              *(int *)plVar33 = (int)*plVar33 + -1;
              UNLOCK();
              if ((int)*plVar33 == 0) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar23 = *piVar1;
                UNLOCK();
                plVar33 = plVar4;
                goto joined_r0x000140b6b0c3;
              }
            }
            else {
              plVar21[3] = (longlong)plVar4;
              if (plVar33 != (longlong *)0x0) goto LAB_140b6b087;
            }
          }
          if (plVar29 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar18 + 8))((longlong *)*plVar18,&local_2a8);
            FUN_140b6c480(plVar29,&local_1f8,(ulonglong)local_410 & 0xffffffff,local_2a8);
            plVar4 = plStack_1f0;
            plVar21[0xb] = (longlong)local_1f8;
            local_1f8 = (longlong *)0x0;
            plVar29 = (longlong *)plVar21[0xc];
            if (plStack_1f0 == plVar29) {
LAB_140b68f51:
              plVar21 = plStack_1f0;
              if (plStack_1f0 != (longlong *)0x0) {
                LOCK();
                plVar29 = plStack_1f0 + 1;
                *(int *)plVar29 = (int)*plVar29 + -1;
                UNLOCK();
                if ((int)*plVar29 == 0) {
                  (**(code **)*plStack_1f0)(plStack_1f0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                }
              }
            }
            else {
              plStack_1f0 = (longlong *)0x0;
              plVar21[0xc] = (longlong)plVar4;
              if (plVar29 != (longlong *)0x0) {
                LOCK();
                plVar21 = plVar29 + 1;
                *(int *)plVar21 = (int)*plVar21 + -1;
                UNLOCK();
                if ((int)*plVar21 == 0) {
                  (**(code **)*plVar29)(plVar29);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar29 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar29 + 0x10))(plVar29);
                  }
                }
                goto LAB_140b68f51;
              }
            }
            plVar21 = uStack_2a0;
            if (uStack_2a0 != (longlong *)0x0) {
              LOCK();
              plVar29 = uStack_2a0 + 1;
              *(int *)plVar29 = (int)*plVar29 + -1;
              UNLOCK();
              if ((int)*plVar29 == 0) {
                (**(code **)*uStack_2a0)(uStack_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
          }
          if (plVar32 != (longlong *)0x0) {
            LOCK();
            plVar21 = plVar32 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
              (**(code **)*plVar32)(plVar32);
              LOCK();
              piVar1 = (int *)((longlong)plVar32 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
              }
            }
          }
          plVar18 = plVar18 + 2;
          plVar21 = local_420;
        } while (plVar18 != plVar26);
      }
      FUN_140b6cdce(&local_368,plVar21 + 0x2d);
      iVar23 = (int)uStack_360;
      lVar15 = (longlong)(int)uStack_360;
      if (lVar15 != 0) {
        local_3b8 = local_368;
        (**(code **)(*(longlong *)*local_368 + 8))((longlong *)*local_368,&local_1f8);
        uVar9 = (**(code **)(*local_1f8 + 0x40))();
        local_408 = plVar21 + 0x2f;
        iVar10 = FUN_140b6c20e(plVar21 + 0x2f,uVar9,&local_1f8);
        plVar21 = plStack_1f0;
        if (plStack_1f0 != (longlong *)0x0) {
          LOCK();
          plVar18 = plStack_1f0 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plStack_1f0)(plStack_1f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        local_3f8 = (undefined8 *)CONCAT71(local_3f8._1_7_,iVar10 != -1);
        local_3b0 = local_3b8 + 2;
        local_3f0 = (undefined8 *)((ulonglong)local_3f0 & 0xffffffff00000000);
        iVar10 = 0;
        do {
          bVar39 = (byte)local_3f8;
          local_3f8 = (undefined8 *)((ulonglong)local_3f8 ^ 1);
          local_418 = (longlong *)CONCAT44(local_418._4_4_,iVar10);
          lVar17 = (longlong)iVar10;
          local_3dc = iVar10 + 1;
          if (iVar10 + 1 < iVar23) {
            local_3dc = iVar23;
          }
          local_3d8 = (undefined8 *)(lVar17 * 0x10);
          puVar35 = local_3b0 + lVar17 * 2;
          local_400 = (undefined8 *)CONCAT71(local_400._1_7_,bVar39);
          do {
            lVar17 = lVar17 + 1;
            iVar37 = local_3dc;
            if (lVar15 <= lVar17) break;
            (**(code **)(*(longlong *)*puVar35 + 8))((longlong *)*puVar35,&local_1f8);
            uVar9 = (**(code **)(*local_1f8 + 0x40))();
            iVar13 = FUN_140b6c20e(local_408,uVar9,&local_1f8);
            plVar21 = plStack_1f0;
            if (plStack_1f0 != (longlong *)0x0) {
              LOCK();
              plVar18 = plStack_1f0 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*plStack_1f0)(plStack_1f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
            iVar10 = iVar10 + 1;
            puVar35 = puVar35 + 2;
            iVar37 = iVar10;
          } while ((bool)(bVar39 & 1) == (iVar13 != -1));
          iVar10 = iVar37;
          iVar37 = iVar10 - (int)local_418;
          if (((ulonglong)local_400 & 1) == 0) {
            if ((int)local_3f0 != (int)local_418) {
              memmove(local_3b8 + (longlong)(int)local_3f0 * 2,
                      (void *)((longlong)local_3d8 + (longlong)local_3b8),(longlong)iVar37 << 4);
            }
            local_3f0 = (undefined8 *)CONCAT44(local_3f0._4_4_,(int)local_3f0 + iVar37);
          }
          else {
            FUN_140b6c1c2((longlong)local_3d8 + (longlong)local_3b8,iVar37);
          }
          plVar21 = local_428;
        } while (lVar17 < lVar15);
        uStack_360 = CONCAT44(uStack_360._4_4_,(int)local_3f0);
        if ((local_428 != (longlong *)0x0) && ((int)local_3f0 != 0)) {
          local_3f8 = local_368;
          (**(code **)(*(longlong *)*local_368 + 8))((longlong *)*local_368,&local_1f8);
          cVar8 = FUN_145cf80ce(plVar21,(ulonglong)local_410 & 0xffffffff,local_1f8);
          plVar21 = plStack_1f0;
          if (plStack_1f0 != (longlong *)0x0) {
            LOCK();
            plVar18 = plStack_1f0 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*plStack_1f0)(plStack_1f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          cVar36 = '\x01';
          if (cVar8 == '\0') {
            (**(code **)(*(longlong *)*local_3f8 + 8))((longlong *)*local_3f8,&local_2a8);
            ppuVar38 = local_2a8;
            uVar19 = (**(code **)(*local_420 + 0x180))();
            FUN_140b6deae(&local_1f8,uVar19,ppuVar38);
            plVar21 = uStack_2a0;
            if (uStack_2a0 != (longlong *)0x0) {
              LOCK();
              plVar18 = uStack_2a0 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*uStack_2a0)(uStack_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
            if (local_1f8 == (longlong *)0x0) {
LAB_140b6beff:
              cVar36 = '\0';
            }
            else {
              cVar8 = FUN_145cf80ce(local_428,(ulonglong)local_410 & 0xffffffff);
              cVar36 = '\x01';
              if (cVar8 == '\0') goto LAB_140b6beff;
            }
            plVar21 = plStack_1f0;
            if (plStack_1f0 != (longlong *)0x0) {
              LOCK();
              plVar18 = plStack_1f0 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*plStack_1f0)(plStack_1f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
          }
          local_408 = (longlong *)(longlong)(int)local_3f0;
          local_400 = (undefined8 *)-(longlong)local_408;
          local_3d8 = local_3f8 + 2;
          local_3dc = 0;
          plVar21 = (longlong *)0x0;
LAB_140b6b651:
          do {
            local_418 = plVar21;
            uVar12 = (int)local_418 + 1;
            plVar21 = (longlong *)(ulonglong)uVar12;
            if ((int)uVar12 < (int)local_3f0) {
              lVar24 = (longlong)(int)local_418;
              lVar17 = (longlong)local_400 + lVar24;
              lVar15 = lVar24 + 2;
              puVar35 = local_3d8 + lVar24 * 2;
              bVar40 = true;
              lVar24 = -1;
              do {
                (**(code **)(*(longlong *)*puVar35 + 8))((longlong *)*puVar35,&local_1f8);
                cVar8 = FUN_145cf80ce(local_428,(ulonglong)local_410 & 0xffffffff,local_1f8);
                plVar21 = plStack_1f0;
                if (plStack_1f0 != (longlong *)0x0) {
                  LOCK();
                  plVar18 = plStack_1f0 + 1;
                  *(int *)plVar18 = (int)*plVar18 + -1;
                  UNLOCK();
                  if ((int)*plVar18 == 0) {
                    (**(code **)*plStack_1f0)(plStack_1f0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar21 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar21 + 0x10))(plVar21);
                    }
                  }
                }
                iVar23 = (int)lVar24;
                if (cVar8 == '\0') {
                  (**(code **)(*(longlong *)*puVar35 + 8))((longlong *)*puVar35,&local_2a8);
                  ppuVar38 = local_2a8;
                  uVar19 = (**(code **)(*local_420 + 0x180))();
                  FUN_140b6deae(&local_1f8,uVar19,ppuVar38);
                  plVar21 = uStack_2a0;
                  if (uStack_2a0 != (longlong *)0x0) {
                    LOCK();
                    plVar18 = uStack_2a0 + 1;
                    *(int *)plVar18 = (int)*plVar18 + -1;
                    UNLOCK();
                    if ((int)*plVar18 == 0) {
                      (**(code **)*uStack_2a0)(uStack_2a0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar21 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar21 + 0x10))(plVar21);
                      }
                    }
                  }
                  if (local_1f8 == (longlong *)0x0) {
LAB_140b6b77b:
                    cVar34 = '\0';
                  }
                  else {
                    cVar8 = FUN_145cf80ce(local_428,(ulonglong)local_410 & 0xffffffff);
                    cVar34 = '\x01';
                    if (cVar8 == '\0') goto LAB_140b6b77b;
                  }
                  plVar21 = plStack_1f0;
                  if (plStack_1f0 != (longlong *)0x0) {
                    LOCK();
                    plVar18 = plStack_1f0 + 1;
                    *(int *)plVar18 = (int)*plVar18 + -1;
                    UNLOCK();
                    if ((int)*plVar18 == 0) {
                      (**(code **)*plStack_1f0)(plStack_1f0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar21 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar21 + 0x10))(plVar21);
                      }
                    }
                  }
                  if (cVar34 != cVar36) {
                    plVar21 = (longlong *)(ulonglong)(uint)((int)local_418 - iVar23);
                    goto LAB_140b6b7d5;
                  }
                }
                else if (cVar36 == '\0') {
                  plVar21 = (longlong *)(ulonglong)(uint)((int)local_418 - iVar23);
                  iVar23 = -iVar23;
                  goto LAB_140b6b828;
                }
                bVar40 = lVar15 < (longlong)local_408;
                lVar24 = lVar24 + -1;
                lVar15 = lVar15 + 1;
                puVar35 = puVar35 + 2;
              } while (lVar17 != lVar24);
              plVar21 = (longlong *)((ulonglong)local_3f0 & 0xffffffff);
            }
            else {
              bVar40 = false;
            }
LAB_140b6b7d5:
            iVar23 = (int)plVar21 - (int)local_418;
            if (cVar36 == '\0') {
LAB_140b6b828:
              if (local_3dc != (int)local_418) {
                memmove(local_3f8 + (longlong)local_3dc * 2,local_3f8 + (longlong)(int)local_418 * 2
                        ,(longlong)iVar23 << 4);
              }
              local_3dc = local_3dc + iVar23;
              cVar36 = '\x01';
              if (!bVar40) break;
              goto LAB_140b6b651;
            }
            FUN_140b6c1c2(local_3f8 + (longlong)(int)local_418 * 2,iVar23);
            cVar36 = '\0';
            local_418 = plVar21;
          } while (bVar40);
          uStack_360 = CONCAT44(uStack_360._4_4_,local_3dc);
        }
      }
    }
    uVar25 = uStack_2f0 & 0xffffffff;
    if (0 < (int)uStack_2f0) {
      iVar23 = 1;
      lVar17 = 0x10;
      lVar15 = 0;
      do {
        if (((*(longlong *)(local_2f8[lVar15 * 2] + 0x48) != 0) ||
            (*(longlong *)(local_2f8[lVar15 * 2] + 0x58) != 0)) &&
           (lVar15 + 1 < (longlong)(int)uVar25)) {
          plVar21 = local_2f8 + lVar15 * 2;
          lVar24 = lVar17;
          iVar10 = iVar23;
          do {
            puVar35 = local_2f8;
            lVar31 = *plVar21;
            if ((*(undefined8 **)(lVar31 + 0x48) == (undefined8 *)0x0) ||
               (*(longlong *)(*(longlong *)((longlong)local_2f8 + lVar24) + 0x48) == 0)) {
LAB_140b69063:
              if (((*(undefined8 **)(lVar31 + 0x58) != (undefined8 *)0x0) &&
                  (*(longlong *)(*(longlong *)((longlong)puVar35 + lVar24) + 0x58) != 0)) &&
                 (cVar8 = (**(code **)**(undefined8 **)(lVar31 + 0x58))(), cVar8 != '\0'))
              goto LAB_140b6ab22;
            }
            else {
              cVar8 = (**(code **)**(undefined8 **)(lVar31 + 0x48))();
              if (cVar8 == '\0') {
                lVar31 = *plVar21;
                goto LAB_140b69063;
              }
LAB_140b6ab22:
              puVar20 = *(undefined8 **)((longlong)puVar35 + lVar24);
              if (((longlong *)*puVar20 == (longlong *)0x0) || (*(char *)(puVar20 + 8) != '\x01')) {
                if (((longlong *)puVar20[2] != (longlong *)0x0) && ((char)local_420[0x39] == '\0'))
                {
                  local_428 = (longlong *)puVar20[3];
                  local_408 = (longlong *)puVar20[2];
                  goto LAB_140b6ab5a;
                }
              }
              else {
                local_428 = (longlong *)puVar20[1];
                local_408 = (longlong *)*puVar20;
LAB_140b6ab5a:
                if (local_428 == (longlong *)0x0) {
                  lVar31 = *plVar21;
                  local_410 = (longlong *)CONCAT44(local_410._4_4_,1);
                  local_428 = (longlong *)0x0;
                }
                else {
                  LOCK();
                  *(int *)(local_428 + 1) = (int)local_428[1] + 1;
                  UNLOCK();
                  lVar31 = *plVar21;
                  LOCK();
                  *(int *)(local_428 + 1) = (int)local_428[1] + 1;
                  UNLOCK();
                  local_410 = (longlong *)((ulonglong)local_410._4_4_ << 0x20);
                }
                plVar18 = (longlong *)(lVar31 + 0x68);
                iVar37 = *(int *)(lVar31 + 0x70);
                *(uint *)(lVar31 + 0x70) = iVar37 + 1U;
                if (*(uint *)(lVar31 + 0x74) < iVar37 + 1U) {
                  local_418 = plVar18;
                  FUN_140b722da(plVar18,iVar37);
                  plVar18 = local_418;
                }
                lVar31 = *plVar18;
                *(longlong **)(lVar31 + (longlong)iVar37 * 0x10) = local_408;
                *(longlong **)(lVar31 + 8 + (longlong)iVar37 * 0x10) = local_428;
                if ((char)local_410 == '\0') {
                  LOCK();
                  *(int *)(local_428 + 1) = (int)local_428[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar18 = local_428 + 1;
                  *(int *)plVar18 = (int)*plVar18 + -1;
                  UNLOCK();
                  if ((int)*plVar18 == 0) {
                    (**(code **)*local_428)(local_428);
                    LOCK();
                    piVar1 = (int *)((longlong)local_428 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_428 + 0x10))(local_428);
                    }
                  }
                }
                if (local_428 != (longlong *)0x0) {
                  LOCK();
                  plVar18 = local_428 + 1;
                  *(int *)plVar18 = (int)*plVar18 + -1;
                  UNLOCK();
                  if ((int)*plVar18 == 0) {
                    (**(code **)*local_428)(local_428);
                    LOCK();
                    piVar1 = (int *)((longlong)local_428 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_428 + 0x10))();
                    }
                  }
                }
              }
              puVar20 = (undefined8 *)*plVar21;
              if (((longlong *)*puVar20 == (longlong *)0x0) || (*(char *)(puVar20 + 8) != '\x01')) {
                if (((longlong *)puVar20[2] == (longlong *)0x0) || ((char)local_420[0x39] != '\0'))
                goto LAB_140b69086;
                local_428 = (longlong *)puVar20[3];
                local_408 = (longlong *)puVar20[2];
              }
              else {
                local_428 = (longlong *)puVar20[1];
                local_408 = (longlong *)*puVar20;
              }
              if (local_428 == (longlong *)0x0) {
                lVar31 = *(longlong *)((longlong)puVar35 + lVar24);
                local_410 = (longlong *)CONCAT44(local_410._4_4_,1);
                local_428 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(local_428 + 1) = (int)local_428[1] + 1;
                UNLOCK();
                lVar31 = *(longlong *)((longlong)puVar35 + lVar24);
                LOCK();
                *(int *)(local_428 + 1) = (int)local_428[1] + 1;
                UNLOCK();
                local_410 = (longlong *)((ulonglong)local_410._4_4_ << 0x20);
              }
              iVar37 = *(int *)(lVar31 + 0x70);
              *(uint *)(lVar31 + 0x70) = iVar37 + 1U;
              if (*(uint *)(lVar31 + 0x74) < iVar37 + 1U) {
                FUN_140b722da((longlong *)(lVar31 + 0x68),iVar37);
              }
              lVar31 = *(longlong *)(lVar31 + 0x68);
              *(longlong **)(lVar31 + (longlong)iVar37 * 0x10) = local_408;
              *(longlong **)(lVar31 + 8 + (longlong)iVar37 * 0x10) = local_428;
              if ((char)local_410 == '\0') {
                LOCK();
                *(int *)(local_428 + 1) = (int)local_428[1] + 1;
                UNLOCK();
                LOCK();
                plVar18 = local_428 + 1;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)*plVar18 == 0) {
                  (**(code **)*local_428)(local_428);
                  LOCK();
                  piVar1 = (int *)((longlong)local_428 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_428 + 0x10))(local_428);
                  }
                }
              }
              if (local_428 != (longlong *)0x0) {
                LOCK();
                plVar18 = local_428 + 1;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)*plVar18 == 0) {
                  (**(code **)*local_428)(local_428);
                  LOCK();
                  piVar1 = (int *)((longlong)local_428 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_428 + 0x10))();
                  }
                }
              }
            }
LAB_140b69086:
            uVar25 = uStack_2f0 & 0xffffffff;
            iVar10 = iVar10 + 1;
            lVar24 = lVar24 + 0x10;
          } while (iVar10 < (int)uStack_2f0);
        }
        lVar15 = lVar15 + 1;
        iVar23 = iVar23 + 1;
        lVar17 = lVar17 + 0x10;
      } while (lVar15 < (int)uVar25);
    }
    local_378 = 0;
    uStack_370 = 0;
    FUN_14127d7ae();
    puVar35 = local_2f8;
    plVar21 = local_420;
    lVar15 = (longlong)(int)uStack_2f0;
    if (lVar15 != 0) {
      lVar17 = 0;
      do {
        uVar25 = uStack_370;
        plVar18 = *(longlong **)((longlong)puVar35 + lVar17);
        lVar24 = *plVar18;
        if ((lVar24 == 0) || ((char)plVar18[8] != '\x01')) {
          lVar24 = plVar18[2];
          if ((lVar24 != 0) && ((char)plVar21[0x39] == '\0')) {
            plVar18 = (longlong *)plVar18[3];
            goto LAB_140b6911d;
          }
        }
        else {
          plVar18 = (longlong *)plVar18[1];
LAB_140b6911d:
          bVar40 = plVar18 == (longlong *)0x0;
          if (bVar40) {
            plVar18 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
          }
          lVar31 = (longlong)(int)uStack_370;
          uVar12 = (int)uStack_370 + 1;
          uStack_370 = CONCAT44(uStack_370._4_4_,uVar12);
          if (uStack_370._4_4_ < uVar12) {
            FUN_140b722da(&local_378,uVar25 & 0xffffffff);
          }
          *(longlong *)(local_378 + lVar31 * 0x10) = lVar24;
          *(longlong **)(local_378 + 8 + lVar31 * 0x10) = plVar18;
          if (!bVar40) {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
            LOCK();
            plVar26 = plVar18 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar26 = plVar18 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
        }
        lVar17 = lVar17 + 0x10;
      } while (lVar15 * 0x10 != lVar17);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1f8 = (longlong *)0x0;
    plStack_1f0 = (longlong *)0x0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    cVar8 = FUN_140b6c352(plVar21);
    if ((((cVar8 != '\0') && (lVar15 = (**(code **)(*plVar21 + 0x180))(plVar21), lVar15 != 0)) &&
        (*(longlong *)(lVar15 + 0x1f0) != 0)) &&
       ((lVar15 = FUN_140cb14ac(), lVar15 != 0 &&
        (lVar15 = *(longlong *)(lVar15 + 0x30), lVar15 != 0)))) {
      lVar17 = FUN_140059518(local_3d0);
      if (lVar17 == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(lVar17 + 0xe0);
      }
      FUN_140b6fd58(lVar15,&local_2a8,uVar9);
      ppuVar38 = local_2a8;
      lVar15 = (longlong)(int)uStack_2a0;
      if (lVar15 == 0) {
        uVar25 = 0;
      }
      else {
        lVar17 = 0;
        do {
          plVar18 = *(longlong **)((longlong)ppuVar38 + lVar17);
          if (plVar18 != (longlong *)0x0) {
            local_380 = *(longlong **)((longlong)ppuVar38 + lVar17 + 8);
            if (local_380 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_380 + 1) = (int)local_380[1] + 1;
              UNLOCK();
            }
            local_388 = plVar18;
            uVar9 = (**(code **)(*plVar18 + 0x40))();
            iVar23 = FUN_140b6c20e(plVar21 + 0x3c,uVar9,&local_388);
            plVar18 = local_380;
            if (local_380 != (longlong *)0x0) {
              LOCK();
              plVar26 = local_380 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*local_380)(local_380);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            if (iVar23 == -1) {
              local_218 = *(undefined ***)((longlong)ppuVar38 + lVar17);
              uStack_210 = *(longlong **)((longlong)ppuVar38 + lVar17 + 8);
              if (uStack_210 != (longlong *)0x0) {
                LOCK();
                *(int *)(uStack_210 + 1) = (int)uStack_210[1] + 1;
                UNLOCK();
              }
              FUN_140b6d1a4(&local_1f8,&local_228,&local_218,0);
              plVar18 = uStack_210;
              if (uStack_210 != (longlong *)0x0) {
                LOCK();
                plVar26 = uStack_210 + 1;
                *(int *)plVar26 = (int)*plVar26 + -1;
                UNLOCK();
                if ((int)*plVar26 == 0) {
                  (**(code **)*uStack_210)(uStack_210);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar18 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
              }
            }
          }
          plVar18 = *(longlong **)((longlong)ppuVar38 + lVar17 + 0x10);
          if (plVar18 != (longlong *)0x0) {
            local_390 = *(longlong **)((longlong)ppuVar38 + lVar17 + 0x18);
            if (local_390 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_390 + 1) = (int)local_390[1] + 1;
              UNLOCK();
            }
            local_398 = plVar18;
            uVar9 = (**(code **)(*plVar18 + 0x40))();
            iVar23 = FUN_140b6c20e(plVar21 + 0x3c,uVar9,&local_398);
            plVar18 = local_390;
            if (local_390 != (longlong *)0x0) {
              LOCK();
              plVar26 = local_390 + 1;
              *(int *)plVar26 = (int)*plVar26 + -1;
              UNLOCK();
              if ((int)*plVar26 == 0) {
                (**(code **)*local_390)(local_390);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            if (iVar23 == -1) {
              local_218 = *(undefined ***)((longlong)ppuVar38 + lVar17 + 0x10);
              uStack_210 = *(longlong **)((longlong)ppuVar38 + lVar17 + 0x18);
              if (uStack_210 != (longlong *)0x0) {
                LOCK();
                *(int *)(uStack_210 + 1) = (int)uStack_210[1] + 1;
                UNLOCK();
              }
              FUN_140b6d1a4(&local_1f8,&local_228,&local_218,0);
              plVar18 = uStack_210;
              if (uStack_210 != (longlong *)0x0) {
                LOCK();
                plVar26 = uStack_210 + 1;
                *(int *)plVar26 = (int)*plVar26 + -1;
                UNLOCK();
                if ((int)*plVar26 == 0) {
                  (**(code **)*uStack_210)(uStack_210);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar18 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
              }
            }
          }
          lVar17 = lVar17 + 0x38;
        } while (lVar15 * 0x38 - lVar17 != 0);
        uVar25 = (ulonglong)uStack_2a0 & 0xffffffff;
        plVar21 = local_420;
      }
      FUN_140cb1696(local_2a8,uVar25);
      if (local_2a8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_1c4 < (int)plStack_1f0) {
      local_2a8 = (undefined **)0x0;
      uStack_2a0 = (longlong *)0x0;
      if ((int)uStack_370 < 1) {
        uVar25 = 0;
      }
      else {
        uVar12 = 0;
        do {
          lVar15 = local_378;
          plVar21 = *(longlong **)(local_378 + (ulonglong)uVar12 * 0x10);
          (**(code **)(*plVar21 + 8))(plVar21,&local_3a8);
          uVar9 = (**(code **)(*local_3a8 + 0x40))();
          iVar23 = FUN_140b6c20e(&local_1f8,uVar9,&local_3a8);
          plVar21 = local_3a0;
          if (local_3a0 != (longlong *)0x0) {
            LOCK();
            plVar18 = local_3a0 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*local_3a0)(local_3a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          plVar21 = uStack_2a0;
          if (iVar23 != -1) {
            lVar17 = (longlong)(int)uStack_2a0;
            uVar14 = (int)uStack_2a0 + 1;
            uStack_2a0 = (longlong *)CONCAT44(uStack_2a0._4_4_,uVar14);
            if (uStack_2a0._4_4_ < uVar14) {
              FUN_140b722da(&local_2a8,(ulonglong)plVar21 & 0xffffffff);
            }
            plVar21 = (longlong *)(lVar15 + (ulonglong)uVar12 * 0x10);
            local_2a8[lVar17 * 2] = (undefined *)*plVar21;
            puVar7 = (undefined *)plVar21[1];
            local_2a8[lVar17 * 2 + 1] = puVar7;
            if (puVar7 != (undefined *)0x0) {
              LOCK();
              *(int *)(puVar7 + 8) = *(int *)(puVar7 + 8) + 1;
              UNLOCK();
            }
            FUN_145777c06(&local_378,uVar12);
            FUN_145777ad2(&local_378);
            uVar12 = uVar12 - 1;
          }
          plVar21 = local_420;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uStack_370);
        uVar25 = (ulonglong)uStack_2a0 & 0xffffffff;
        if (0 < (int)uStack_2a0) {
          FUN_14127d55e(&local_2a8,&local_378);
          FUN_14127e9aa(&local_378,&local_2a8);
          uVar25 = (ulonglong)uStack_2a0 & 0xffffffff;
        }
      }
      FUN_140b6c1c2(local_2a8,uVar25);
      if (local_2a8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    lVar15 = local_3e8;
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    FUN_140b6c31a(&local_1f8);
    plVar18 = local_418;
    local_418 = (longlong *)((ulonglong)local_418 & 0xffffffff00000000);
    if (*(int *)((longlong)plVar21 + 0x214) < (int)plVar21[0x3d]) {
      local_418._4_4_ = SUB84(plVar18,4);
      if ((int)uStack_370 < 1) {
        local_418 = (longlong *)((ulonglong)local_418._4_4_ << 0x20);
      }
      else {
        plVar21 = local_420 + 0x3c;
        local_418 = (longlong *)((ulonglong)local_418._4_4_ << 0x20);
        uVar12 = 0;
        do {
          lVar15 = local_378;
          plVar18 = *(longlong **)(local_378 + (ulonglong)uVar12 * 0x10);
          (**(code **)(*plVar18 + 8))(plVar18,&local_1f8);
          uVar9 = (**(code **)(*local_1f8 + 0x40))();
          iVar23 = FUN_140b6c20e(plVar21,uVar9,&local_1f8);
          plVar18 = plStack_1f0;
          if (plStack_1f0 != (longlong *)0x0) {
            LOCK();
            plVar26 = plStack_1f0 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*plStack_1f0)(plStack_1f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          uVar25 = uStack_350;
          if (iVar23 != -1) {
            lVar17 = (longlong)(int)uStack_350;
            uVar14 = (int)uStack_350 + 1;
            uStack_350 = CONCAT44(uStack_350._4_4_,uVar14);
            if (uStack_350._4_4_ < uVar14) {
              FUN_140b722da(&local_358,uVar25 & 0xffffffff);
            }
            puVar35 = (undefined8 *)(lVar15 + (ulonglong)uVar12 * 0x10);
            *(undefined8 *)(local_358 + lVar17 * 0x10) = *puVar35;
            lVar15 = puVar35[1];
            *(longlong *)(local_358 + 8 + lVar17 * 0x10) = lVar15;
            if (lVar15 != 0) {
              LOCK();
              *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              UNLOCK();
            }
            FUN_145777c06(&local_378,uVar12);
            FUN_145777ad2(&local_378);
            uVar12 = uVar12 - 1;
            local_418 = (longlong *)CONCAT44(local_418._4_4_,(int)local_418 + 1);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uStack_370);
      }
      lVar15 = local_3e8;
      plVar21 = local_420;
      if (0 < (int)uStack_350) {
        lVar17 = 0;
        uVar25 = 0;
        do {
          FUN_14127e87a(&local_378,local_358 + lVar17,uVar25 & 0xffffffff);
          uVar25 = uVar25 + 1;
          lVar17 = lVar17 + 0x10;
          lVar15 = local_3e8;
          plVar21 = local_420;
        } while ((longlong)uVar25 < (longlong)(int)uStack_350);
      }
    }
    uVar12 = 4;
    if ((char)plVar21[0x5a] != '\0') {
      uVar12 = 100;
    }
    if ((char)plVar21[0x39] == '\0') {
      lVar15 = *(longlong *)(lVar15 + 0x10);
      iVar23 = *(int *)(lVar15 + 0x84);
      if ((int)uStack_360 != *(int *)(lVar15 + 0x80)) {
LAB_140b6b9cf:
        *(int *)(lVar15 + 0x80) = (int)uStack_360;
        goto LAB_140b6b9d5;
      }
      if (iVar23 == 0) {
        iVar23 = 0;
        goto LAB_140b6b9cf;
      }
    }
    else {
      lVar15 = *(longlong *)(lVar15 + 0x10);
      iVar23 = *(int *)(lVar15 + 0x84);
      if (*(int *)(lVar15 + 0x80) == 0) {
        plVar21 = local_420;
        if (iVar23 != 0) goto LAB_140b69650;
        iVar23 = 0;
      }
      *(undefined4 *)(lVar15 + 0x80) = 0;
LAB_140b6b9d5:
      *(int *)(lVar15 + 0x84) = iVar23 + 1;
      plVar21 = local_420;
    }
LAB_140b69650:
    iVar23 = ((int)uStack_370 + -1) / (int)uVar12;
    lVar15 = 0;
    if (iVar23 < 1) {
      iVar23 = 0;
    }
    if ((int)plVar21[0x47] != *(int *)((longlong)plVar21 + 0x264)) {
      plVar18 = plVar21 + 0x4d;
      if ((longlong *)plVar21[0x4e] != (longlong *)0x0) {
        plVar18 = (longlong *)plVar21[0x4e];
      }
      iVar10 = (int)*plVar18;
      if (iVar10 == -1) {
        lVar15 = 0;
      }
      else {
        do {
          lVar15 = plVar21[0x46] + (longlong)iVar10 * 0x10;
          if (*(char *)(plVar21[0x46] + (longlong)iVar10 * 0x10) == '\0') break;
          iVar10 = *(int *)(lVar15 + 8);
          lVar15 = 0;
        } while (iVar10 != -1);
      }
    }
    iVar10 = *(int *)(lVar15 + 4);
    if (iVar23 < *(int *)(lVar15 + 4)) {
      *(int *)(lVar15 + 4) = iVar23;
      iVar10 = iVar23;
    }
    local_3f8 = (undefined8 *)(ulonglong)(iVar10 * uVar12);
    local_3f0 = (undefined8 *)CONCAT44(local_3f0._4_4_,uVar12);
    local_400 = (undefined8 *)(ulonglong)uVar12;
    puVar35 = (undefined8 *)0x0;
    plVar18 = (longlong *)0x0;
    do {
      lVar15 = local_378;
      if ((int)local_3f8 < 0) {
LAB_140b6a674:
        uVar12 = (uint)plVar18;
        break;
      }
      iVar23 = (int)((longlong)puVar35 + (longlong)local_3f8);
      if ((int)uStack_370 <= iVar23) goto LAB_140b6a674;
      local_408 = (longlong *)CONCAT71(local_408._1_7_,iVar23 < (int)local_418);
      lVar17 = ((longlong)puVar35 + (longlong)local_3f8) * 0x10;
      plVar26 = *(longlong **)(local_378 + lVar17);
      local_428 = plVar18;
      (**(code **)(*plVar26 + 8))(plVar26,&local_1f8);
      cVar8 = FUN_140b6cfe6(local_3c0,local_1f8);
      plVar18 = plStack_1f0;
      if (plStack_1f0 != (longlong *)0x0) {
        LOCK();
        plVar26 = plStack_1f0 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*plStack_1f0)(plStack_1f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      if (cVar8 == '\0') {
        uVar12 = (uint)local_428;
      }
      else {
        plVar18 = (longlong *)(lVar15 + lVar17);
        (**(code **)(*(longlong *)*plVar18 + 8))((longlong *)*plVar18,&local_1f8);
        plVar21 = local_1f8;
        puVar20 = local_2f8;
        lVar15 = (longlong)(int)uStack_2f0;
        if (lVar15 != 0) {
          lVar17 = 0;
          uVar12 = 0;
          do {
            lVar24 = *(longlong *)((longlong)puVar20 + lVar17);
            puVar5 = *(undefined8 **)(lVar24 + 0x30);
            if (puVar5 != (undefined8 *)0x0) {
              cVar8 = (**(code **)*puVar5)(puVar5,plVar21);
              if (cVar8 == '\0') {
                lVar24 = *(longlong *)((longlong)puVar20 + lVar17);
                goto LAB_140b697b1;
              }
LAB_140b6a3aa:
              if (-1 < (int)uVar12) {
                local_410 = (longlong *)0x0;
                lVar15 = 0;
                if ((int)uVar12 < (int)uStack_2f0) {
                  lVar15 = local_2f8[(ulonglong)(uVar12 & 0x7fffffff) * 2];
                  local_410 = (longlong *)local_2f8[(ulonglong)(uVar12 & 0x7fffffff) * 2 + 1];
                  if (local_410 == (longlong *)0x0) {
                    local_410 = (longlong *)0x0;
                  }
                  else {
                    LOCK();
                    *(int *)(local_410 + 1) = (int)local_410[1] + 1;
                    UNLOCK();
                  }
                }
                goto LAB_140b697db;
              }
              break;
            }
LAB_140b697b1:
            puVar5 = *(undefined8 **)(lVar24 + 0x20);
            if ((puVar5 != (undefined8 *)0x0) &&
               (cVar8 = (**(code **)*puVar5)(puVar5,plVar21), cVar8 != '\0')) goto LAB_140b6a3aa;
            uVar12 = uVar12 + 1;
            lVar17 = lVar17 + 0x10;
          } while (lVar15 * 0x10 != lVar17);
        }
        local_410 = (longlong *)0x0;
        lVar15 = 0;
LAB_140b697db:
        plVar21 = plStack_1f0;
        if (plStack_1f0 != (longlong *)0x0) {
          LOCK();
          plVar26 = plStack_1f0 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plStack_1f0)(plStack_1f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        if ((lVar15 != 0) && ((*(char *)(lVar15 + 0x40) != '\0' || ((char)local_420[0x39] == '\0')))
           ) {
          uVar19 = FUN_140059518(local_3d0);
          if ((longlong)*(int *)(lVar15 + 0x70) != 0) {
            puVar20 = *(undefined8 **)(lVar15 + 0x68);
            lVar17 = (longlong)*(int *)(lVar15 + 0x70) << 4;
            do {
              (**(code **)(*(longlong *)*puVar20 + 8))((longlong *)*puVar20,&local_1f8);
              cVar8 = FUN_140b6cfe6(local_3c0,local_1f8);
              plVar21 = plStack_1f0;
              if (plStack_1f0 != (longlong *)0x0) {
                LOCK();
                plVar26 = plStack_1f0 + 1;
                *(int *)plVar26 = (int)*plVar26 + -1;
                UNLOCK();
                if ((int)*plVar26 == 0) {
                  (**(code **)*plStack_1f0)(plStack_1f0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                }
              }
              if (cVar8 != '\0') {
                FUN_140056680(&local_1f8,&DAT_149dfb77a);
                FUN_140056680(local_1e8,&DAT_149dfb77a);
                local_2a8 = (undefined **)0x0;
                uStack_2a0 = (longlong *)0x0;
                local_438 = &local_2a8;
                local_3d8 = puVar20;
                cVar8 = FUN_140b6ca98(uVar19,puVar20,&local_1f8,local_1e8);
                if (cVar8 != '\0') {
                  (**(code **)(*(longlong *)*plVar18 + 8))((longlong *)*plVar18,&local_218);
                  uVar9 = (**(code **)(*local_218 + 0x40))();
                  plVar21 = (longlong *)FUN_145778506(local_3c8,uVar9,&local_218);
                  iVar23 = (int)plVar21[1];
                  *(uint *)(plVar21 + 1) = iVar23 + 1U;
                  if (*(uint *)((longlong)plVar21 + 0xc) < iVar23 + 1U) {
                    FUN_145777d1a(plVar21,iVar23);
                  }
                  FUN_145777c7e((longlong)iVar23 * 0x20 + *plVar21,&local_1f8);
                  plVar21 = uStack_210;
                  if (uStack_210 != (longlong *)0x0) {
                    LOCK();
                    plVar26 = uStack_210 + 1;
                    *(int *)plVar26 = (int)*plVar26 + -1;
                    UNLOCK();
                    if ((int)*plVar26 == 0) {
                      (**(code **)*uStack_210)(uStack_210);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar21 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar21 + 0x10))(plVar21);
                      }
                    }
                  }
                }
                plVar21 = uStack_2a0;
                if (uStack_2a0 != (longlong *)0x0) {
                  LOCK();
                  plVar26 = uStack_2a0 + 1;
                  *(int *)plVar26 = (int)*plVar26 + -1;
                  UNLOCK();
                  if ((int)*plVar26 == 0) {
                    (**(code **)*uStack_2a0)(uStack_2a0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar21 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar21 + 0x10))(plVar21);
                    }
                  }
                }
                puVar20 = local_3d8;
                if (local_1e8[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_1f8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
              puVar20 = puVar20 + 2;
              lVar17 = lVar17 + -0x10;
            } while (lVar17 != 0);
          }
        }
        FUN_140b6f1b6(&local_1f8);
        local_190 = local_190 + 1;
        local_228 = (undefined **)0x0;
        plStack_220 = (longlong *)0x0;
        local_1c0 = local_1c0 + 1;
        uVar19 = FUN_140059518(local_3d0);
        local_438 = &local_228;
        cVar8 = FUN_140b6ca98(uVar19,plVar18,&local_1d0,local_1a0);
        if (cVar8 == '\0') {
          uVar12 = (uint)local_428;
          plVar21 = local_420;
        }
        else {
          local_238 = (undefined *)0x0;
          uStack_230 = 0;
          local_248 = 0;
          uStack_240 = 0;
          if (local_228 == (undefined **)0x0) {
LAB_140b6acdf:
            plVar26 = (longlong *)0x0;
            ppuVar38 = (undefined **)0x0;
LAB_140b6ace4:
            local_2a8 = (undefined **)0x0;
            uStack_2a0 = (longlong *)0x0;
            plVar21 = local_420;
          }
          else {
            plVar21 = (longlong *)*plVar18;
            plVar26 = (longlong *)plVar18[1];
            if (plVar26 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
              UNLOCK();
            }
            plVar32 = plVar26;
            if (((lVar15 != 0) &&
                (plVar29 = *(longlong **)(lVar15 + 0x10), plVar29 != (longlong *)0x0)) &&
               (*(char *)(lVar15 + 0x40) == '\x01')) {
              plVar32 = *(longlong **)(lVar15 + 0x18);
              if (plVar32 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
                UNLOCK();
              }
              plVar21 = plVar29;
              if (plVar26 != (longlong *)0x0) {
                LOCK();
                plVar29 = plVar26 + 1;
                *(int *)plVar29 = (int)*plVar29 + -1;
                UNLOCK();
                if ((int)*plVar29 == 0) {
                  (**(code **)*plVar26)(plVar26);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar26 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar26 + 0x10))(plVar26);
                  }
                }
              }
            }
            plVar26 = local_420;
            iVar23 = 0;
            lVar15 = (**(code **)(*plVar21 + 0x38))(plVar21);
            if ((*(byte *)(lVar15 + 0x10) & 4) != 0) {
              local_2a8 = &PTR_FUN_14b9b3030;
              uStack_2a0 = (longlong *)0x0;
              local_298 = 0;
              local_288 = 0;
              uStack_280 = 0;
              local_270 = 0;
              uStack_268 = 0;
              local_258 = 0;
              uStack_250 = 0;
              cVar8 = FUN_140b726be(lVar15 + 0x20,&local_2a8);
              if (cVar8 != '\0') {
                iVar10 = (int)local_298 + -1;
                if ((int)local_298 == 0) {
                  iVar10 = iVar23;
                }
                FUN_1402980a2(&local_248,uStack_2a0,iVar10);
                if (local_b4 == 0 || local_290 != local_b8) {
                  local_b8 = local_290;
                  local_b4 = local_b4 + 1;
                }
                if (local_ac == 0 || local_28c != local_b0) {
                  local_b0 = local_28c;
                  local_ac = local_ac + 1;
                }
                iVar10 = (int)uStack_280 + -1;
                if ((int)uStack_280 == 0) {
                  iVar10 = iVar23;
                }
                FUN_1446f82e2(&local_218,iVar10,local_288,1);
                iVar10 = local_b0;
                if (local_168 == 0 || local_218 != local_170) {
                  local_170 = local_218;
                  local_168 = local_168 + 1;
                }
                if (local_160 == 0 || local_278 != local_164) {
                  local_164 = local_278;
                  local_160 = local_160 + 1;
                }
                if (local_13c == 0 || local_260 != local_140) {
                  local_140 = local_260;
                  local_13c = local_13c + 1;
                }
                if (local_b0 < 1) {
                  iVar10 = (int)uStack_240 + -1;
                  if ((int)uStack_240 == 0) {
                    iVar10 = iVar23;
                  }
                  FUN_1402980a2(&local_238,local_248,iVar10);
                }
                else {
                  if (local_a4 == 0 || local_a8 == '\0') {
                    local_a8 = '\x01';
                    local_a4 = local_a4 + 1;
                  }
                  local_2b8 = (longlong *)0x0;
                  uStack_2b0 = (longlong *)0x0;
                  local_2d8 = (undefined **)0x0;
                  plStack_2d0 = (longlong *)0x0;
                  FUN_1413a454c(local_2c8,local_b8,0,&local_2d8);
                  local_218 = (undefined **)CONCAT44(local_218._4_4_,4);
                  FUN_14023423e(&local_208,local_2c8);
                  uVar25 = (ulonglong)uStack_2b0;
                  lVar15 = (longlong)(int)uStack_2b0;
                  uVar12 = (int)uStack_2b0 + 1;
                  uStack_2b0 = (longlong *)CONCAT44(uStack_2b0._4_4_,uVar12);
                  if (uStack_2b0._4_4_ < uVar12) {
                    FUN_140188694(&local_2b8,uVar25 & 0xffffffff);
                  }
                  plVar21 = local_2b8 + lVar15 * 4;
                  *(undefined4 *)plVar21 = (undefined4)local_218;
                  *(undefined4 *)((longlong)plVar21 + 4) = local_218._4_4_;
                  *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_210;
                  *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_210._4_4_;
                  if (local_208 == (longlong *)0x0) {
                    local_2b8[lVar15 * 4 + 2] = 0;
                    *(undefined4 *)(local_2b8 + lVar15 * 4 + 3) = 0;
                  }
                  else {
                    FUN_14023423e(local_2b8 + lVar15 * 4 + 2,&local_208);
                  }
                  if (local_208 != (longlong *)0x0) {
                    (**(code **)(*local_208 + 0x10))();
                    local_208 = (longlong *)0x0;
                    local_200 = 0;
                  }
                  if (local_2c8[0] != (longlong *)0x0) {
                    (**(code **)(*local_2c8[0] + 0x10))();
                  }
                  plVar21 = plStack_2d0;
                  if (plStack_2d0 != (longlong *)0x0) {
                    LOCK();
                    plVar29 = plStack_2d0 + 1;
                    *(int *)plVar29 = (int)*plVar29 + -1;
                    UNLOCK();
                    if ((int)*plVar29 == 0) {
                      (**(code **)*plStack_2d0)(plStack_2d0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar21 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar21 + 0x10))(plVar21);
                      }
                    }
                  }
                  local_2d8 = (undefined **)0x0;
                  plStack_2d0 = (longlong *)0x0;
                  FUN_1413a454c(local_2c8,iVar10,0,&local_2d8);
                  local_218 = (undefined **)CONCAT44(local_218._4_4_,4);
                  FUN_14023423e(&local_208,local_2c8);
                  uVar25 = (ulonglong)uStack_2b0;
                  lVar15 = (longlong)(int)uStack_2b0;
                  uVar12 = (int)uStack_2b0 + 1;
                  uStack_2b0 = (longlong *)CONCAT44(uStack_2b0._4_4_,uVar12);
                  if (uStack_2b0._4_4_ < uVar12) {
                    FUN_140188694(&local_2b8,uVar25 & 0xffffffff);
                  }
                  plVar21 = local_2b8 + lVar15 * 4;
                  *(undefined4 *)plVar21 = (undefined4)local_218;
                  *(undefined4 *)((longlong)plVar21 + 4) = local_218._4_4_;
                  *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_210;
                  *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_210._4_4_;
                  if (local_208 == (longlong *)0x0) {
                    local_2b8[lVar15 * 4 + 2] = 0;
                    *(undefined4 *)(local_2b8 + lVar15 * 4 + 3) = 0;
                  }
                  else {
                    FUN_14023423e(local_2b8 + lVar15 * 4 + 2,&local_208);
                  }
                  if (local_208 != (longlong *)0x0) {
                    (**(code **)(*local_208 + 0x10))();
                    local_208 = (longlong *)0x0;
                    local_200 = 0;
                  }
                  if (local_2c8[0] != (longlong *)0x0) {
                    (**(code **)(*local_2c8[0] + 0x10))();
                  }
                  plVar21 = plStack_2d0;
                  if (plStack_2d0 != (longlong *)0x0) {
                    LOCK();
                    plVar29 = plStack_2d0 + 1;
                    *(int *)plVar29 = (int)*plVar29 + -1;
                    UNLOCK();
                    if ((int)*plVar29 == 0) {
                      (**(code **)*plStack_2d0)(plStack_2d0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar21 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar21 + 0x10))(plVar21);
                      }
                    }
                  }
                  FUN_140009b9a(local_2c8,&local_248);
                  local_218 = (undefined **)CONCAT44(local_218._4_4_,4);
                  FUN_14023423e(&local_208,local_2c8);
                  uVar25 = (ulonglong)uStack_2b0;
                  lVar15 = (longlong)(int)uStack_2b0;
                  uVar12 = (int)uStack_2b0 + 1;
                  uStack_2b0 = (longlong *)CONCAT44(uStack_2b0._4_4_,uVar12);
                  if (uStack_2b0._4_4_ < uVar12) {
                    FUN_140188694(&local_2b8,uVar25 & 0xffffffff);
                  }
                  plVar21 = local_2b8 + lVar15 * 4;
                  *(undefined4 *)plVar21 = (undefined4)local_218;
                  *(undefined4 *)((longlong)plVar21 + 4) = local_218._4_4_;
                  *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_210;
                  *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_210._4_4_;
                  if (local_208 == (longlong *)0x0) {
                    local_2b8[lVar15 * 4 + 2] = 0;
                    *(undefined4 *)(local_2b8 + lVar15 * 4 + 3) = 0;
                  }
                  else {
                    FUN_14023423e(local_2b8 + lVar15 * 4 + 2,&local_208);
                  }
                  if (local_208 != (longlong *)0x0) {
                    (**(code **)(*local_208 + 0x10))();
                    local_208 = (longlong *)0x0;
                    local_200 = 0;
                  }
                  if (local_2c8[0] != (longlong *)0x0) {
                    (**(code **)(*local_2c8[0] + 0x10))();
                  }
                  FUN_14023409e(local_2c8,plVar26 + (ulonglong)(1 < (int)uStack_240) * 2 + 0x78,1);
                  FUN_140188794(&local_218,local_2c8,&local_2b8);
                  ppuVar38 = local_218;
                  ppuVar22 = local_218;
                  if (*(code **)(*local_218 + 0x50) != FUN_144828418) {
                    ppuVar22 = (undefined **)(**(code **)(*local_218 + 0x50))(local_218);
                  }
                  FUN_1447a1fc0(ppuVar22);
                  pcVar6 = *(code **)(*ppuVar38 + 0x28);
                  if (pcVar6 == FUN_14482841c) {
                    ppuVar22 = (undefined **)(ppuVar38[5] + 8);
                    if (ppuVar38[5] == (undefined *)0x0) {
                      ppuVar22 = ppuVar38 + 3;
                    }
                  }
                  else if (pcVar6 == (code *)&LAB_14010c34c) {
                    ppuVar22 = ppuVar38 + 2;
                  }
                  else {
                    ppuVar22 = (undefined **)(*pcVar6)(ppuVar38);
                  }
                  if (&local_238 != ppuVar22) {
                    uVar12 = *(uint *)(ppuVar22 + 1);
                    puVar7 = *ppuVar22;
                    uStack_230 = CONCAT44(uStack_230._4_4_,uVar12);
                    if (uVar12 == 0 && uStack_230._4_4_ == 0) {
                      uStack_230 = (ulonglong)uVar12;
                    }
                    else {
                      FUN_1446dd670(&local_238,uVar12);
                      if (uVar12 != 0) {
                        memcpy(local_238,puVar7,(longlong)(int)uVar12 * 2);
                      }
                    }
                  }
                  if (ppuVar38 != (undefined **)0x0) {
                    (**(code **)(*ppuVar38 + 0x10))(ppuVar38);
                  }
                  FUN_14007f2db(local_2b8,(ulonglong)uStack_2b0 & 0xffffffff);
                  if (local_2b8 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                }
                FUN_140b6d790(plVar26,&local_218,local_170,local_164);
                if ((local_128 == 0) ||
                   (cVar8 = FUN_144722c14(local_138,&local_218,0), cVar8 == '\0')) {
                  FUN_140008f88(local_138,&local_218);
                  local_128 = local_128 + 1;
                }
                if (local_218 != (undefined **)0x0) {
                  (**(code **)(*local_218 + 0x10))();
                }
              }
              FUN_140b6c2c4(&local_2a8);
            }
            lVar15 = plVar26[0xb];
            if (lVar15 != 0) {
              local_2a8 = local_228;
              uStack_2a0 = plStack_220;
              if (plStack_220 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_220 + 1) = (int)plStack_220[1] + 1;
                UNLOCK();
              }
              FUN_140b716a0(lVar15,&local_2a8);
              plVar21 = uStack_2a0;
              if (uStack_2a0 != (longlong *)0x0) {
                LOCK();
                plVar29 = uStack_2a0 + 1;
                *(int *)plVar29 = (int)*plVar29 + -1;
                UNLOCK();
                if ((int)*plVar29 == 0) {
                  (**(code **)*uStack_2a0)(uStack_2a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                }
              }
            }
            ppuVar38 = local_228;
            local_178 = local_178 + 1;
            local_1a8 = local_1a8 + 1;
            local_438 = (undefined ***)((ulonglong)local_438 & 0xffffffffffffff00);
            FUN_140b6ce58(plVar26,local_228,&local_1b8,local_188);
            if (plVar32 != (longlong *)0x0) {
              LOCK();
              plVar21 = plVar32 + 1;
              *(int *)plVar21 = (int)*plVar21 + -1;
              UNLOCK();
              ppuVar38 = local_228;
              if ((int)*plVar21 == 0) {
                (**(code **)*plVar32)(plVar32);
                LOCK();
                piVar1 = (int *)((longlong)plVar32 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                ppuVar38 = local_228;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar32 + 0x10))(plVar32);
                  ppuVar38 = local_228;
                }
              }
            }
            if (ppuVar38 == (undefined **)0x0) goto LAB_140b6acdf;
            (**(code **)(*ppuVar38 + 0x10))(ppuVar38,&local_218);
            FUN_1446f470e(&local_2e0,L"SHIFT",1);
            plVar21 = local_420;
            if (local_218 == local_2e0) {
              uStack_2a0 = plStack_220;
              local_2a8 = ppuVar38;
              if (plStack_220 == (longlong *)0x0) {
                plVar26 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plStack_220 + 1) = (int)plStack_220[1] + 1;
                UNLOCK();
                plVar26 = plStack_220;
              }
            }
            else {
              uVar19 = (**(code **)(*local_420 + 0x180))(local_420);
              FUN_140b6ec10(&local_2a8,uVar19,ppuVar38);
              plVar26 = uStack_2a0;
            }
            ppuVar38 = local_2a8;
            if (local_228 == (undefined **)0x0) goto LAB_140b6ace4;
            FUN_140b6c526(&local_2a8);
          }
          FUN_140775538(local_1e8,&local_2a8);
          if (local_2a8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          if (ppuVar38 == (undefined **)0x0) {
            local_2a8 = (undefined **)0x0;
            uStack_2a0 = (longlong *)0x0;
          }
          else {
            FUN_140b6c526(&local_2a8,ppuVar38);
          }
          FUN_140775538(local_78,&local_2a8);
          if (local_2a8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          FUN_140775496(local_158,&local_238);
          iVar23 = local_c4;
          FUN_140b6c183(local_d0,local_c8);
          local_c8 = 0;
          if ((iVar23 < 0) && (local_c4 != 0)) {
            FUN_148e50124(&local_d0);
          }
          local_c0 = local_c0 + 1;
          if (local_10c == 0 || local_110 != (char)local_408) {
            local_110 = (char)local_408;
            local_10c = local_10c + 1;
          }
          (**(code **)(*(longlong *)*plVar18 + 8))((longlong *)*plVar18,&local_2b8);
          plVar18 = local_2b8;
          cVar8 = FUN_140b6c352(plVar21);
          if (cVar8 == '\0') {
            bVar39 = 0;
          }
          else {
            lVar15 = (**(code **)(*plVar21 + 0x180))(plVar21);
            if ((((lVar15 == 0) || (*(longlong *)(lVar15 + 0x1f0) == 0)) ||
                (lVar15 = FUN_140cb14ac(), lVar15 == 0)) ||
               (lVar15 = *(longlong *)(lVar15 + 0x30), lVar15 == 0)) {
              bVar40 = false;
            }
            else {
              (**(code **)(*plVar18 + 0x10))(plVar18,&local_2a8);
              FUN_1446f470e(&local_2d8,L"SHIFT",1);
              if (local_2a8 == local_2d8) {
                plVar32 = (longlong *)plVar18[2];
                if (plVar32 == (longlong *)0x0) {
LAB_140b6b29d:
                  plVar32 = (longlong *)0x0;
                }
                else {
                  iVar23 = (int)plVar32[1];
                  do {
                    if (iVar23 == 0) goto LAB_140b6b29d;
                    LOCK();
                    iVar10 = (int)plVar32[1];
                    bVar40 = iVar23 == iVar10;
                    if (bVar40) {
                      *(int *)(plVar32 + 1) = iVar23 + 1;
                      iVar10 = iVar23;
                    }
                    iVar23 = iVar10;
                    UNLOCK();
                  } while (!bVar40);
                }
                local_2a8 = (undefined **)0x0;
                if (plVar32 != (longlong *)0x0) {
                  local_2a8 = (undefined **)plVar18[1];
                }
                uStack_2a0 = plVar32;
                lVar17 = FUN_140059518(local_3d0);
                if (lVar17 == 0) {
                  uVar9 = 0xffffffff;
                }
                else {
                  uVar9 = *(undefined4 *)(lVar17 + 0xe0);
                }
                uVar12 = FUN_140b6d71a(lVar15,uVar9,&local_2a8);
                plVar18 = (longlong *)(ulonglong)uVar12;
                if (plVar32 != (longlong *)0x0) {
                  LOCK();
                  plVar29 = plVar32 + 1;
                  *(int *)plVar29 = (int)*plVar29 + -1;
                  UNLOCK();
                  if ((int)*plVar29 == 0) {
                    (**(code **)*plVar32)(plVar32);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar32 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar32 + 0x10))(plVar32);
                    }
                  }
                }
                bVar40 = true;
              }
              else {
                uVar19 = (**(code **)(*plVar21 + 0x180))(plVar21);
                FUN_140b6ec10(&local_2a8,uVar19,plVar18);
                bVar40 = local_2a8 != (undefined **)0x0;
                if (bVar40) {
                  local_218 = local_2a8;
                  uStack_210 = uStack_2a0;
                  if (uStack_2a0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(uStack_2a0 + 1) = (int)uStack_2a0[1] + 1;
                    UNLOCK();
                  }
                  lVar17 = FUN_140059518(local_3d0);
                  if (lVar17 == 0) {
                    uVar9 = 0xffffffff;
                  }
                  else {
                    uVar9 = *(undefined4 *)(lVar17 + 0xe0);
                  }
                  uVar12 = FUN_140b6d71a(lVar15,uVar9,&local_218);
                  plVar32 = uStack_210;
                  plVar18 = (longlong *)(ulonglong)uVar12;
                  if (uStack_210 != (longlong *)0x0) {
                    LOCK();
                    plVar29 = uStack_210 + 1;
                    *(int *)plVar29 = (int)*plVar29 + -1;
                    UNLOCK();
                    if ((int)*plVar29 == 0) {
                      (**(code **)*uStack_210)(uStack_210);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar32 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar32 + 0x10))(plVar32);
                      }
                    }
                  }
                }
                plVar32 = uStack_2a0;
                if (uStack_2a0 != (longlong *)0x0) {
                  LOCK();
                  plVar29 = uStack_2a0 + 1;
                  *(int *)plVar29 = (int)*plVar29 + -1;
                  UNLOCK();
                  if ((int)*plVar29 == 0) {
                    (**(code **)*uStack_2a0)(uStack_2a0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar32 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar32 + 0x10))(plVar32);
                    }
                  }
                }
              }
            }
            bVar39 = (byte)plVar18 & bVar40;
          }
          plVar18 = uStack_2b0;
          if (local_104 == 0 || local_108 != bVar39) {
            local_104 = local_104 + 1;
            local_108 = bVar39;
          }
          if (uStack_2b0 != (longlong *)0x0) {
            LOCK();
            plVar32 = uStack_2b0 + 1;
            *(int *)plVar32 = (int)*plVar32 + -1;
            UNLOCK();
            if ((int)*plVar32 == 0) {
              (**(code **)*uStack_2b0)(uStack_2b0);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          if (local_248 != 0) {
            FUN_1400020a8();
          }
          plVar18 = plStack_220;
          local_248 = 0;
          uStack_240 = 0;
          if (local_228 != (undefined **)0x0) {
            if (plStack_220 == (longlong *)0x0) {
              uStack_2a0 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_220 + 1) = (int)plStack_220[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plStack_220 + 1) = (int)plStack_220[1] + 1;
              UNLOCK();
              uStack_2a0 = plStack_220;
              LOCK();
              *(int *)(plStack_220 + 1) = (int)plStack_220[1] + 1;
              UNLOCK();
            }
            local_2a8 = local_228;
            uVar9 = (**(code **)(*local_228 + 0x40))();
            iVar23 = FUN_140b6cb4e(local_3c8,uVar9,&local_2a8);
            plVar32 = uStack_2a0;
            if (iVar23 == -1) {
              lVar15 = 0;
            }
            else {
              lVar15 = (longlong)iVar23 * 0x28 + *local_3c8;
            }
            if (uStack_2a0 != (longlong *)0x0) {
              LOCK();
              plVar29 = uStack_2a0 + 1;
              *(int *)plVar29 = (int)*plVar29 + -1;
              UNLOCK();
              if ((int)*plVar29 == 0) {
                (**(code **)*uStack_2a0)(uStack_2a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar32 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar32 + 0x10))(plVar32);
                }
              }
            }
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar32 = plVar18 + 1;
              *(int *)plVar32 = (int)*plVar32 + -1;
              UNLOCK();
              if ((int)*plVar32 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            if (lVar15 == 0) {
              local_2a8 = (undefined **)0x0;
              uStack_2a0 = (longlong *)0x0;
            }
            else {
              local_2a8 = (undefined **)0x0;
              iVar23 = *(int *)(lVar15 + 0x18);
              uVar19 = *(undefined8 *)(lVar15 + 0x10);
              uStack_2a0 = (longlong *)CONCAT44(uStack_2a0._4_4_,iVar23);
              if (iVar23 == 0) {
                uStack_2a0 = (longlong *)0x0;
              }
              else {
                FUN_145777ba4(&local_2a8,iVar23,0);
                FUN_145777b11(local_2a8,uVar19,iVar23);
              }
            }
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar32 = plVar18 + 1;
              *(int *)plVar32 = (int)*plVar32 + -1;
              UNLOCK();
              if ((int)*plVar32 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            uVar25 = 0;
            if ((longlong)(int)uStack_2a0 != 0) {
              lVar15 = (longlong)(int)uStack_2a0 << 5;
              ppuVar22 = local_2a8;
              do {
                FUN_145777d9e(&local_d0,ppuVar22);
                ppuVar22 = ppuVar22 + 4;
                lVar15 = lVar15 + -0x20;
              } while (lVar15 != 0);
              uVar25 = (ulonglong)uStack_2a0 & 0xffffffff;
            }
            FUN_140b6c183(local_2a8,uVar25);
            if (local_2a8 != (undefined **)0x0) {
              FUN_1400020a8();
            }
          }
          lVar15 = local_3e8;
          if (plVar26 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
            UNLOCK();
          }
          local_2a8 = ppuVar38;
          uStack_2a0 = plVar26;
          FUN_140b6cc08(plVar21,&local_2a8,&local_1f8);
          lVar15 = *(longlong *)(lVar15 + 0x10);
          uVar12 = (int)local_428 + 1;
          if (*(int *)(lVar15 + 0x48) <= (int)local_428) {
            FUN_140b66f52(lVar15 + 0x40,uVar12);
            *(int *)(lVar15 + 0x50) = *(int *)(lVar15 + 0x50) + 1;
            lVar15 = *(longlong *)(local_3e8 + 0x10);
          }
          *(int *)(lVar15 + 0x50) = *(int *)(lVar15 + 0x50) + 1;
          FUN_140b6f902((longlong)(int)uVar12 * 0x198 + *(longlong *)(lVar15 + 0x40) + -0x198,
                        &local_1f8);
          if (local_248 != 0) {
            FUN_1400020a8();
          }
          if (local_238 != (undefined *)0x0) {
            FUN_1400020a8();
          }
          if (plVar26 != (longlong *)0x0) {
            LOCK();
            plVar18 = plVar26 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*plVar26)(plVar26);
              LOCK();
              piVar1 = (int *)((longlong)plVar26 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar21 = local_420;
              if (*piVar1 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
                plVar21 = local_420;
              }
            }
          }
        }
        plVar18 = plStack_220;
        if (plStack_220 != (longlong *)0x0) {
          LOCK();
          plVar26 = plStack_220 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*plStack_220)(plStack_220);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
        FUN_140b6c9ae(&local_1f8);
        plVar18 = local_410;
        if (local_410 != (longlong *)0x0) {
          LOCK();
          plVar26 = local_410 + 1;
          *(int *)plVar26 = (int)*plVar26 + -1;
          UNLOCK();
          if ((int)*plVar26 == 0) {
            (**(code **)*local_410)(local_410);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar21 = local_420;
            if (*piVar1 == 0) {
              (**(code **)(*local_410 + 0x10))();
              plVar21 = local_420;
            }
          }
        }
      }
      puVar35 = (undefined8 *)((longlong)puVar35 + 1);
      plVar18 = (longlong *)(ulonglong)uVar12;
    } while (puVar35 != local_400);
    if ((int)plVar21[0x47] == *(int *)((longlong)plVar21 + 0x264)) {
      lVar15 = 0;
    }
    else {
      plVar18 = plVar21 + 0x4d;
      if ((longlong *)plVar21[0x4e] != (longlong *)0x0) {
        plVar18 = (longlong *)plVar21[0x4e];
      }
      iVar23 = (int)*plVar18;
      if (iVar23 == -1) {
        lVar15 = 0;
      }
      else {
        do {
          lVar15 = plVar21[0x46] + (longlong)iVar23 * 0x10;
          if (*(char *)(plVar21[0x46] + (longlong)iVar23 * 0x10) == '\0') break;
          iVar23 = *(int *)(lVar15 + 8);
          lVar15 = 0;
        } while (iVar23 != -1);
      }
    }
    lVar17 = *(longlong *)(local_3e8 + 0x10);
    if (*(int *)(lVar15 + 4) == *(int *)(lVar17 + 0x60)) {
      if (*(int *)(lVar17 + 100) == 0) {
        iVar23 = 1;
        goto LAB_140b6ba3f;
      }
    }
    else {
      iVar23 = *(int *)(lVar17 + 100) + 1;
LAB_140b6ba3f:
      *(int *)(lVar17 + 0x60) = *(int *)(lVar15 + 4);
      *(int *)(lVar17 + 100) = iVar23;
      lVar17 = *(longlong *)(local_3e8 + 0x10);
    }
    iVar10 = ((int)uStack_370 + -1) / (int)local_3f0;
    iVar23 = 0;
    if (0 < iVar10) {
      iVar23 = iVar10;
    }
    if (iVar23 == *(int *)(lVar17 + 0x68)) {
      if (*(int *)(lVar17 + 0x6c) == 0) {
        iVar10 = 1;
        goto LAB_140b6ba61;
      }
    }
    else {
      iVar10 = *(int *)(lVar17 + 0x6c) + 1;
LAB_140b6ba61:
      *(int *)(lVar17 + 0x68) = iVar23;
      *(int *)(lVar17 + 0x6c) = iVar10;
      lVar17 = *(longlong *)(local_3e8 + 0x10);
    }
    if ((int)uStack_370 == *(int *)(lVar17 + 0x58)) {
      if (*(int *)(lVar17 + 0x5c) == 0) {
        iVar23 = 1;
        goto LAB_140b6a892;
      }
    }
    else {
      iVar23 = *(int *)(lVar17 + 0x5c) + 1;
LAB_140b6a892:
      *(int *)(lVar17 + 0x58) = (int)uStack_370;
      *(int *)(lVar17 + 0x5c) = iVar23;
      lVar17 = *(longlong *)(local_3e8 + 0x10);
    }
    if (*(char *)(lVar17 + 0x70) == '\0') {
      if (*(int *)(lVar17 + 0x74) == 0) {
        iVar23 = 1;
        goto LAB_140b6acbd;
      }
    }
    else {
      iVar23 = *(int *)(lVar17 + 0x74) + 1;
LAB_140b6acbd:
      *(undefined1 *)(lVar17 + 0x70) = 0;
      *(int *)(lVar17 + 0x74) = iVar23;
    }
    FUN_140b6c1c2(local_378,uStack_370 & 0xffffffff);
    if (local_378 != 0) {
      FUN_1400020a8();
    }
    FUN_140b6c1c2(local_368,uStack_360 & 0xffffffff);
    if (local_368 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140b6c1c2(local_358,uStack_350 & 0xffffffff);
    if (local_358 != 0) {
      FUN_1400020a8();
    }
    FUN_140b6c1c2(local_348,uStack_340 & 0xffffffff);
    if (local_348 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_140b6c1c2(local_338,uStack_330 & 0xffffffff);
    if (local_338 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar15 = *(longlong *)(local_3e8 + 0x10);
    iVar23 = *(int *)(lVar15 + 0x74);
    if (*(char *)(lVar15 + 0x70) == '\0') {
LAB_140b6835b:
      *(undefined1 *)(lVar15 + 0x70) = 1;
      *(int *)(lVar15 + 0x74) = iVar23 + 1;
      lVar15 = *(longlong *)(local_3e8 + 0x10);
    }
    else if (iVar23 == 0) {
      iVar23 = 0;
      goto LAB_140b6835b;
    }
    if (*(int *)(lVar15 + 0x60) == 0) {
      iVar23 = 1;
      if (*(int *)(lVar15 + 100) == 0) goto LAB_140b6837e;
    }
    else {
      iVar23 = *(int *)(lVar15 + 100) + 1;
LAB_140b6837e:
      *(undefined4 *)(lVar15 + 0x60) = 0;
      *(int *)(lVar15 + 100) = iVar23;
      lVar15 = *(longlong *)(local_3e8 + 0x10);
    }
    if (*(int *)(lVar15 + 0x68) == 0) {
      iVar23 = 1;
      if (*(int *)(lVar15 + 0x6c) == 0) goto LAB_140b683a2;
    }
    else {
      iVar23 = *(int *)(lVar15 + 0x6c) + 1;
LAB_140b683a2:
      *(undefined4 *)(lVar15 + 0x68) = 0;
      *(int *)(lVar15 + 0x6c) = iVar23;
      lVar15 = *(longlong *)(local_3e8 + 0x10);
    }
    if (*(int *)(lVar15 + 0x58) == 0) {
      iVar23 = 1;
      if (*(int *)(lVar15 + 0x5c) == 0) goto LAB_140b683c6;
    }
    else {
      iVar23 = *(int *)(lVar15 + 0x5c) + 1;
LAB_140b683c6:
      *(undefined4 *)(lVar15 + 0x58) = 0;
      *(int *)(lVar15 + 0x5c) = iVar23;
    }
    lVar15 = *(longlong *)(local_3e8 + 0x10);
    iVar23 = *(int *)(lVar15 + 0x7c);
    if ((char)local_420[0x39] == '\0') {
      if (uVar30 != *(uint *)(lVar15 + 0x78)) {
        iVar10 = iVar23 + 1;
        goto LAB_140b683fa;
      }
      iVar10 = 1;
      if (iVar23 == 0) goto LAB_140b683fa;
    }
    else {
      if (*(uint *)(lVar15 + 0x78) == 0) {
        if (iVar23 != 0) goto LAB_140b68405;
        iVar10 = 1;
      }
      else {
        iVar10 = iVar23 + 1;
      }
      uVar30 = 0;
LAB_140b683fa:
      *(uint *)(lVar15 + 0x78) = uVar30;
      *(int *)(lVar15 + 0x7c) = iVar10;
      lVar15 = *(longlong *)(local_3e8 + 0x10);
    }
LAB_140b68405:
    if (*(int *)(lVar15 + 0x80) == 0) {
      iVar23 = 1;
      if (*(int *)(lVar15 + 0x84) == 0) goto LAB_140b68421;
    }
    else {
      iVar23 = *(int *)(lVar15 + 0x84) + 1;
LAB_140b68421:
      *(undefined4 *)(lVar15 + 0x80) = 0;
      *(int *)(lVar15 + 0x84) = iVar23;
    }
    FUN_140b74642(&local_320);
    uVar12 = 0;
  }
  lVar15 = *(longlong *)(local_3e8 + 0x10);
  FUN_140b66f52(lVar15 + 0x40,uVar12);
  piVar1 = (int *)(lVar15 + 0x50);
  *piVar1 = *piVar1 + 1;
  FUN_140b6c454(local_308,local_300);
  if (local_308 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140b6d6d1(local_2f8,uStack_2f0 & 0xffffffff);
  if (local_2f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140b6a85a:
  if ((local_60 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6c183 FUN_140b6c183 body=63 status=ok
// SIG undefined FUN_140b6c183(void)

void FUN_140b6c183(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b6c1c2 FUN_140b6c1c2 body=75 status=ok
// SIG undefined FUN_140b6c1c2(void)

void FUN_140b6c1c2(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b6c20e FUN_140b6c20e body=181 status=ok
// SIG undefined FUN_140b6c20e(void)

int FUN_140b6c20e(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x18);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x18);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x10 + lVar7 * 0x18);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 140b6c2c4 FUN_140b6c2c4 body=86 status=ok
// SIG undefined FUN_140b6c2c4(void)

void FUN_140b6c2c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9b3030;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140b6c31a FUN_140b6c31a body=55 status=ok
// SIG undefined FUN_140b6c31a(void)

void FUN_140b6c31a(longlong *param_1)

{
  FUN_140b6f6e8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b6c352 FUN_140b6c352 body=160 status=ok
// SIG undefined FUN_140b6c352(void)

ulonglong FUN_140b6c352(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 unaff_RSI;
  undefined7 uVar8;
  ulonglong uVar7;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_140cb14ac();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      lVar4 = FUN_140059518((longlong)param_1 + 0x44);
      lVar5 = 0;
      if (lVar4 == 0) {
LAB_140b6c3ea:
        bVar2 = (byte)lVar5;
        bVar6 = 0;
        uVar8 = 0;
      }
      else {
        lVar5 = FUN_14030d4a0();
        piVar1 = (int *)(lVar5 + 0x38);
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *piVar1) ||
           (lVar5 = lVar5 + 0x30,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*piVar1 * 8)
           != lVar5)) goto LAB_140b6c3ea;
        uVar8 = (undefined7)((ulonglong)unaff_RSI >> 8);
        bVar6 = 1;
        if ((int)param_1[0x22] == 2) {
          bVar2 = FUN_140b6c3f2(lVar3,*(undefined4 *)(lVar4 + 0xe0));
        }
        else {
          bVar2 = 0;
        }
      }
      uVar7 = CONCAT71(uVar8,bVar6 & bVar2);
      goto LAB_140b6c3da;
    }
  }
  uVar7 = 0;
LAB_140b6c3da:
  return uVar7 & 0xffffffff;
}



// FUNCTION 140b6c3f2 FUN_140b6c3f2 body=97 status=ok
// SIG undefined FUN_140b6c3f2(void)

bool FUN_140b6c3f2(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140b6fd58(param_1,&local_28,param_2);
  FUN_140cb1696(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6c454 FUN_140b6c454 body=43 status=ok
// SIG undefined FUN_140b6c454(void)

void FUN_140b6c454(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c5ce08(param_1);
    param_1 = param_1 + 0x1a0;
  }
  return;
}



// FUNCTION 140b6c480 FUN_140b6c480 body=165 status=ok
// SIG undefined FUN_140b6c480(void)

undefined8 * FUN_140b6c480(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b6c84e(param_1,&local_30);
  if (local_30 != (longlong *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*local_30 + 0x38))(local_30);
    *param_2 = *puVar4;
    lVar3 = puVar4[1];
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (local_30 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6c526 FUN_140b6c526 body=623 status=ok
// SIG undefined FUN_140b6c526(void)

undefined8 * FUN_140b6c526(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong **pplVar9;
  undefined2 *puVar10;
  bool bVar11;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  int local_78;
  undefined4 uStack_74;
  int local_70;
  longlong **local_68;
  int local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = (longlong *)param_2[2];
  if (local_50 == (longlong *)0x0) {
LAB_140b6c753:
    local_50 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)local_50[1];
    do {
      if (iVar5 == 0) goto LAB_140b6c753;
      LOCK();
      iVar3 = (int)local_50[1];
      bVar11 = iVar5 == iVar3;
      if (bVar11) {
        *(int *)(local_50 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar11);
  }
  local_58 = (longlong *)0x0;
  if (local_50 != (longlong *)0x0) {
    local_58 = (longlong *)param_2[1];
  }
  uVar4 = (**(code **)(*local_58 + 0x40))();
  iVar5 = FUN_140b6c796(&DAT_14cb97548,uVar4,&local_58);
  if ((iVar5 == -1) || (lVar6 = (longlong)iVar5, DAT_14cb97548 + lVar6 * 0x28 == 0)) {
    local_68 = &local_58;
    FUN_145777de6(&local_78,uVar4);
    lVar6 = (longlong)local_78;
  }
  plVar7 = local_50;
  lVar6 = DAT_14cb97548 + lVar6 * 0x28;
  pplVar8 = (longlong **)(lVar6 + 0x10);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  iVar5 = *(int *)(lVar6 + 0x18);
  if (iVar5 < 2) {
    (**(code **)(*param_2 + 0x30))(param_2,&local_68);
    puVar10 = &DAT_149dfb77a;
    pplVar9 = (longlong **)&DAT_149dfb77a;
    if (local_60 != 0) {
      pplVar9 = local_68;
    }
    (**(code **)(*param_2 + 0x10))(param_2,local_80);
    FUN_1400021e4(local_80,&local_78);
    if (local_70 != 0) {
      puVar10 = (undefined2 *)CONCAT44(uStack_74,local_78);
    }
    FUN_140002266(&local_58,L"%s:%s",puVar10,pplVar9);
    if (pplVar8 == &local_58) {
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*pplVar8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      *pplVar8 = local_58;
      local_58 = (longlong *)0x0;
      *(undefined4 *)(lVar6 + 0x18) = (undefined4)local_50;
      *(undefined4 *)(lVar6 + 0x1c) = local_50._4_4_;
      local_50 = (longlong *)0x0;
    }
    if (CONCAT44(uStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    iVar5 = *(int *)(lVar6 + 0x18);
    *param_1 = 0;
    plVar7 = *pplVar8;
    *(int *)(param_1 + 1) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      goto LAB_140b6c617;
    }
  }
  else {
    *param_1 = 0;
    plVar7 = *pplVar8;
    *(int *)(param_1 + 1) = iVar5;
  }
  FUN_1446dd670(param_1,iVar5,0);
  memcpy((void *)*param_1,plVar7,(longlong)iVar5 * 2);
LAB_140b6c617:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b6c796 FUN_140b6c796 body=183 status=ok
// SIG undefined FUN_140b6c796(void)

int FUN_140b6c796(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 140b6c84e FUN_140b6c84e body=350 status=ok
// SIG undefined FUN_140b6c84e(void)

undefined8 * FUN_140b6c84e(longlong param_1,undefined8 *param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar4 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_3) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 0xc) == param_3) {
          (**(code **)(*param_4 + 0x10))(param_4,&local_50);
          FUN_140b708a0(param_1);
          local_38 = local_50;
          plVar5 = (longlong *)FUN_1401e3228();
          if (plVar5 == (longlong *)0x0) {
            local_48 = (longlong *)0x0;
            plStack_40 = (longlong *)0x0;
LAB_140b6c990:
            bVar3 = true;
          }
          else {
            (**(code **)(*plVar5 + 0x28))(plVar5,&local_48);
            if (local_48 == (longlong *)0x0) goto LAB_140b6c990;
            local_58 = &DAT_14cb97068;
            (**(code **)(*local_48 + 0x1d0))(local_48,param_2,param_3,param_4);
            bVar3 = false;
          }
          plVar5 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_40 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_40)(plStack_40);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (!bVar3) goto LAB_140b6c94a;
          break;
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 0xc + 4);
      } while (iVar6 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140b6c94a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6c9ae FUN_140b6c9ae body=233 status=ok
// SIG undefined FUN_140b6c9ae(void)

void FUN_140b6c9ae(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c183(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140b6ca98 FUN_140b6ca98 body=181 status=ok
// SIG undefined FUN_140b6ca98(void)

undefined8
FUN_140b6ca98(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_38 = param_4;
  local_18 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    local_30 = param_5;
    FUN_140b70cf4(param_1,&local_20,1,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = param_5;
    FUN_140b70cf4(param_1,&local_20,1,param_3);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6cb4e FUN_140b6cb4e body=186 status=ok
// SIG undefined FUN_140b6cb4e(void)

int FUN_140b6cb4e(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar7 = *param_1;
      do {
        lVar8 = (longlong)iVar3;
        puVar4 = *(undefined8 **)(lVar7 + lVar8 * 0x28);
        plVar6 = *(longlong **)(lVar7 + 8 + lVar8 * 0x28);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_3) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (cVar5 != '\0') {
          return iVar3;
        }
        lVar7 = *param_1;
        iVar3 = *(int *)(lVar7 + 0x20 + lVar8 * 0x28);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 140b6cc08 FUN_140b6cc08 body=320 status=ok
// SIG undefined FUN_140b6cc08(void)

void FUN_140b6cc08(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    lVar6 = FUN_140059518((longlong)param_1 + 0x44);
    if (lVar6 != 0) {
      lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x1f0) != 0)) {
        lVar7 = FUN_140cb14ac();
        if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0)) {
          local_38 = *param_2;
          local_30 = (longlong *)param_2[1];
          if (local_30 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_30 + 1) = (int)local_30[1] + 1;
            UNLOCK();
          }
          cVar5 = FUN_140b6cd5c(lVar7,*(undefined4 *)(lVar6 + 0xe0),&local_38);
          plVar4 = local_30;
          if (*(int *)(param_3 + 0xe4) == 0 || *(char *)(param_3 + 0xe0) != cVar5) {
            *(char *)(param_3 + 0xe0) = cVar5;
            *(int *)(param_3 + 0xe4) = *(int *)(param_3 + 0xe4) + 1;
          }
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_30 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
      }
    }
  }
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6cd5c FUN_140b6cd5c body=114 status=ok
// SIG undefined FUN_140b6cd5c(void)

undefined8 FUN_140b6cd5c(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar1 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x68);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x70;
        if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x70) == param_2) {
          if (lVar1 == 0) {
            return 0;
          }
          if (lVar1 == -8) {
            return 0;
          }
          if (*(longlong *)(lVar1 + 0x18) == 0) {
            return 0;
          }
                    /* WARNING: Could not recover jumptable at 0x000140b6cdbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)**(undefined8 **)*param_3)();
          return uVar2;
        }
        iVar3 = *(int *)(lVar1 + 0x68);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 140b6cdce FUN_140b6cdce body=93 status=ok
// SIG undefined FUN_140b6cdce(void)

undefined8 * FUN_140b6cdce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b6c1c2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b6f604(param_1,iVar1);
      FUN_140b6ce2b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140b6ce2b FUN_140b6ce2b body=45 status=ok
// SIG undefined FUN_140b6ce2b(void)

void FUN_140b6ce2b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b6ce58 FUN_140b6ce58 body=396 status=ok
// SIG undefined FUN_140b6ce58(void)

void FUN_140b6ce58(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 unaff_RBP;
  int iVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = (**(code **)(*param_2 + 0x28))(param_2);
  if (cVar4 == '\0') goto LAB_140b6cfbd;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  local_88 = &local_68;
  local_80 = &local_78;
  cVar4 = FUN_140b6db2a(uVar5,param_2,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,&local_58);
  if ((cVar4 != '\0') && (local_78 != 0)) {
    lVar6 = FUN_1408bb964((longlong)param_1 + 0x44);
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x48), lVar6 != 0)) {
      lVar7 = FUN_140b6d0be();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        cVar4 = FUN_140b6cfe6(lVar6,local_78);
        if (cVar4 == '\0') goto LAB_140b6cf78;
      }
    }
    iVar8 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(param_3,local_58,iVar8);
    iVar8 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(param_4,local_68,iVar8);
  }
LAB_140b6cf78:
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_140b6cfbd:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6cfe6 FUN_140b6cfe6 body=120 status=ok
// SIG undefined FUN_140b6cfe6(void)

bool FUN_140b6cfe6(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_140b6d060();
  bVar2 = true;
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x10))(param_2,&local_20);
    FUN_1446f470e(&local_28,L"SHIFT",1);
    bVar2 = local_20 != local_28;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6d060 FUN_140b6d060 body=93 status=ok
// SIG undefined FUN_140b6d060(void)

bool FUN_140b6d060(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  plVar3 = (longlong *)FUN_1414a727e();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  cVar1 = *(char *)(lVar4 + 0x2a);
  iVar2 = FUN_141543b76(param_1);
  if ((iVar2 != 0) || (bVar5 = true, cVar1 == '\0')) {
    bVar5 = *(int *)(param_1 + 0x468) != *(int *)(param_1 + 0x494);
  }
  return bVar5;
}



// FUNCTION 140b6d0be FUN_140b6d0be body=228 status=ok
// SIG undefined FUN_140b6d0be(void)

longlong FUN_140b6d0be(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbad308 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14657f204;
    local_38 = &LAB_148c358cb;
    local_40 = &LAB_145ad2bb1;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x920;
    FUN_14081cfa3(L"/Script/OakGame",L"OakOnlineSessionClient",&DAT_14cbad308,&DAT_148c358ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbad308;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6d1a4 FUN_140b6d1a4 body=410 status=ok
// SIG undefined FUN_140b6d1a4(void)

undefined4 *
FUN_140b6d1a4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b6d4f8(param_1,local_48);
  plVar6 = (longlong *)*param_3;
  *local_40 = plVar6;
  lVar9 = param_3[1];
  local_40[1] = lVar9;
  if (lVar9 == 0) {
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
  }
  else {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
    plVar2 = (longlong *)local_40[1];
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
    plVar6 = (longlong *)*local_40;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      uVar4 = (**(code **)(*plVar6 + 0x40))();
      LOCK();
      plVar6 = plVar2 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      goto LAB_140b6d22e;
    }
  }
  local_4c = local_48[0];
  uVar4 = (**(code **)(*plVar6 + 0x40))();
LAB_140b6d22e:
  local_58 = param_4;
  cVar3 = FUN_140b6d340(param_1,uVar4,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar5 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140b713d0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6d340 FUN_140b6d340 body=295 status=ok
// SIG undefined FUN_140b6d340(void)

void FUN_140b6d340(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_50 = *param_3;
    local_48 = (longlong *)param_3[1];
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    iVar9 = FUN_140b6c20e(param_1,param_2,&local_50);
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x18);
      plVar4 = *(longlong **)(puVar3 + 2);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      *puVar3 = *(undefined4 *)param_3;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_140b6d468(param_1,*param_4,1);
      *param_4 = iVar9;
      uVar8 = 1;
      goto LAB_140b6d419;
    }
  }
  uVar8 = 0;
LAB_140b6d419:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6d468 FUN_140b6d468 body=144 status=ok
// SIG undefined FUN_140b6d468(void)

void FUN_140b6d468(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b6d4f8 FUN_140b6d4f8 body=473 status=ok
// SIG undefined FUN_140b6d4f8(void)

int * FUN_140b6d4f8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140b6d6d1 FUN_140b6d6d1 body=73 status=ok
// SIG undefined FUN_140b6d6d1(void)

void FUN_140b6d6d1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b6d71a FUN_140b6d71a body=118 status=ok
// SIG undefined FUN_140b6d71a(void)

undefined8 FUN_140b6d71a(ulonglong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar2 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
    }
    iVar5 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0x70;
        if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0x70) == param_2) {
          bVar1 = 0;
          uVar4 = 0;
          if (lVar2 == 0) goto LAB_140b6d780;
          if (lVar2 + 8 != 0) {
            uVar3 = FUN_140b6f528(param_1,lVar2 + 8);
            param_1 = uVar3 & 0xffffffff;
            uVar4 = (undefined7)(uVar3 >> 8);
            bVar1 = 1;
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 0x68);
        bVar1 = 0;
        uVar4 = 0;
      } while (iVar5 != -1);
      goto LAB_140b6d777;
    }
  }
LAB_140b6d780:
  bVar1 = 0;
  uVar4 = 0;
LAB_140b6d777:
  return CONCAT71(uVar4,bVar1 & (byte)param_1);
}



// FUNCTION 140b6d790 FUN_140b6d790 body=723 status=ok
// SIG undefined FUN_140b6d790(void)

longlong * FUN_140b6d790(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong local_e8 [3];
  longlong *local_d0 [2];
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 auStack_70 [2];
  undefined1 local_68 [14];
  undefined2 local_5a;
  undefined4 local_58;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b0 = param_3;
  FUN_140b6da64(&local_c0);
  if ((param_4 < 1) || (local_b8 < 2)) {
    plVar4 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar4;
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar4[1];
  }
  else {
    local_e8[0] = 0;
    local_e8[1] = 0;
    lVar3 = 0x1000000000;
    iVar6 = 0;
    puVar5 = &local_5a;
    do {
      lVar3 = lVar3 + -0x100000000;
      *puVar5 = *(undefined2 *)(&DAT_149e01586 + (longlong)(param_4 % 10) * 2);
      uVar7 = param_4 + 9;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + -1;
      param_4 = param_4 / 10;
    } while (0x12 < uVar7);
    FUN_1400020e8(local_e8,(longlong)&local_78 + (lVar3 >> 0x1f),iVar6);
    FUN_140233b1a(local_d0,local_e8);
    FUN_140009b9a(local_f8,&local_c0);
    FUN_14023409e(&local_108,param_1 + 0x370,1);
    local_78._0_4_ = 4;
    FUN_14023423e(local_68,local_f8);
    local_58 = 4;
    FUN_14023423e(local_48,local_d0);
    local_98 = &local_78;
    local_90 = &local_38;
    FUN_14010d304(&local_88);
    local_a8 = local_108;
    local_a0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_2,&local_a8,&local_88);
    FUN_14007f2db(local_88,local_80);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_78 + lVar3) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_78 + lVar3) + 0x10))();
        *(undefined8 *)((longlong)&local_78 + lVar3) = 0;
        *(undefined4 *)((longlong)auStack_70 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_100 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6da64 FUN_140b6da64 body=197 status=ok
// SIG undefined FUN_140b6da64(void)

undefined8 FUN_140b6da64(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(param_1,&DAT_149dfb77a);
  uVar1 = DAT_14cb1aeb8;
  if (*param_2 != 0) {
    FUN_1446dcdd4(local_50,param_2);
    plVar2 = (longlong *)FUN_144837462(uVar1,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar4 = FUN_1401548e0();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        FUN_140cac256(plVar2,param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6db2a FUN_140b6db2a body=785 status=ok
// SIG undefined FUN_140b6db2a(void)

undefined8
FUN_140b6db2a(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4,longlong *param_5,
             longlong **param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60 [2];
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    FUN_140b6deae(&local_40,param_1,param_2);
    plVar1 = local_38;
    if (&local_40 != param_6) {
      *param_6 = local_40;
      local_40 = (longlong *)0x0;
      plVar3 = param_6[1];
      if (local_38 != plVar3) {
        local_38 = (longlong *)0x0;
        param_6[1] = plVar1;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
    }
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if ((*param_6 != (longlong *)0x0) && (0 < *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x40))) {
      lVar4 = **(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
        FUN_14689c22e(lVar4);
      }
      else if (lVar4 == 0) goto LAB_140b6ddba;
      uVar5 = FUN_140b6de3c();
      FUN_140b6df48(uVar5,&local_40,lVar4,*param_6);
      plVar1 = local_38;
      if (local_40 != (longlong *)0x0) {
        local_78 = 0;
        uStack_70 = 0;
        (**(code **)(*local_40 + 0x18))(local_40,local_60);
        FUN_140b6e028(&local_50,local_60,param_6,param_3 ^ 1);
        if (&local_50 == param_4) {
          if (local_50 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_4 != 0) {
            FUN_1400020a8();
          }
          *param_4 = local_50;
          local_50 = 0;
          *(undefined4 *)(param_4 + 1) = (undefined4)local_48;
          *(undefined4 *)((longlong)param_4 + 0xc) = local_48._4_4_;
          local_48 = 0;
        }
        if (local_60[0] != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        (**(code **)(**param_6 + 0x10))(*param_6,&local_80);
        FUN_140b6e92a(&local_50,local_80);
        if (&local_50 == param_5) {
          if (local_50 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_5 != 0) {
            FUN_1400020a8();
          }
          *param_5 = local_50;
          local_50 = 0;
          *(undefined4 *)(param_5 + 1) = (undefined4)local_48;
          *(undefined4 *)((longlong)param_5 + 0xc) = local_48._4_4_;
        }
        plVar1 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_38 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        uVar5 = 1;
        goto LAB_140b6dd15;
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_38 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
  }
LAB_140b6ddba:
  uVar5 = 0;
LAB_140b6dd15:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6de3c FUN_140b6de3c body=113 status=ok
// SIG undefined FUN_140b6de3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b6de3c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb97970) {
    FUN_144b3d300(&DAT_14cb97970);
    if (DAT_14cb97970 == -1) {
      _DAT_14cb97960 = 0;
      DAT_14cb97968 = 0;
      DAT_14cb97950 = 0;
      _DAT_14cb97958 = 0;
      atexit((_func_5014 *)&LAB_143f49ed1);
      _Init_thread_footer(&DAT_14cb97970);
    }
  }
  return &DAT_14cb97950;
}



// FUNCTION 140b6deae FUN_140b6deae body=153 status=ok
// SIG undefined FUN_140b6deae(void)

undefined8 FUN_140b6deae(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_3 + 0x10))(param_3,&local_38);
  FUN_1446f470e(&local_40,L"SHIFT",1);
  if (local_38 == local_40) {
    FUN_140b6e166(param_1,param_2,param_3);
  }
  else {
    FUN_140b6ec10(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6df48 FUN_140b6df48 body=223 status=ok
// SIG undefined FUN_140b6df48(void)

undefined8 *
FUN_140b6df48(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_4 + 0x10))(param_4,&local_50);
  (**(code **)(*param_3 + 0x180))(param_3);
  local_30 = local_50;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0xb8))(plVar3,&local_48);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x38))(local_48,param_2,(int)param_3[0x1c],param_4);
      goto LAB_140b6dfcb;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140b6dfcb:
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6e028 FUN_140b6e028 body=312 status=ok
// SIG undefined FUN_140b6e028(void)

undefined8 *
FUN_140b6e028(undefined8 *param_1,undefined8 *param_2,longlong *param_3,ulonglong param_4)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_2 + 1);
  if ((longlong)iVar1 < 2) {
    *param_1 = 0;
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  else {
    param_3 = (longlong *)*param_3;
    if (param_3 == (longlong *)0x0) {
      local_30 = 0;
    }
    else {
      (**(code **)(*param_3 + 0x10))(param_3,&local_30);
    }
    uVar3 = DAT_14cb97609;
    if (((char)(param_4 & 0xffffffff) == '\x01') || (uVar3 = DAT_14cb97608, (param_4 & 0xff) == 0))
    {
      FUN_1400021e4(&local_30,local_40);
      FUN_143f3820c(param_1,param_2,local_40,CONCAT71((int7)((param_4 & 0xffffffff) >> 8),uVar3));
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_140b6e142;
    }
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
      goto LAB_140b6e142;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
LAB_140b6e142:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b6e166 FUN_140b6e166 body=674 status=ok
// SIG undefined FUN_140b6e166(void)

undefined8 * FUN_140b6e166(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [36];
  short local_74 [2];
  longlong *local_70;
  longlong *local_68;
  undefined **local_60;
  undefined **local_58;
  uint local_50;
  undefined4 uStack_4c;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_3 + 0x10))(param_3,&local_58);
  FUN_1446f470e(&local_60,L"SHIFT",1);
  if (local_58 == local_60) {
    lVar3 = FUN_140b6e4ba();
    if (lVar3 != 0) {
      (**(code **)(*param_3 + 0x30))(param_3,&local_70);
      FUN_140b6e409(&local_58,lVar3,&local_70);
      if (local_70 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (1 < (int)local_50) {
        plVar4 = (longlong *)FUN_140a68038(0);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x80))(plVar4,&local_70);
          if (local_70 != (longlong *)0x0) {
            (**(code **)(*local_70 + 0x120))(local_70,param_1,&local_58);
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_68 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar1 = (int *)((longlong)local_68 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_68 + 0x10))(local_68);
                }
              }
            }
            if (local_58 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            goto LAB_140b6e26d;
          }
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_68 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar1 = (int *)((longlong)local_68 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_68 + 0x10))(local_68);
              }
            }
          }
        }
      }
      if (local_58 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    if (param_2 != 0) {
      lVar3 = FUN_1400f6f32(param_2);
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 != 0)) {
        FUN_140b6e6be(&local_58,param_3);
        FUN_140b6e764(lVar3,local_74,&local_58);
        local_58 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
        if (-1 < local_74[0]) {
          plVar4 = (longlong *)FUN_140a68038(1);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,&local_70);
            FUN_1413d9c32(lVar3,&local_58,local_74,&local_70);
            uVar5 = (ulonglong)local_40;
            if ((&DAT_149fc1b6e)[uVar5] == '\x01') {
              if ((longlong *)CONCAT44(uStack_4c,local_50) != (longlong *)0x0) {
                cVar2 = (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x28))();
                if (cVar2 != '\0') goto LAB_140b6e3d5;
                uVar5 = (ulonglong)local_40;
              }
            }
            else if ((local_50 & 0xffffff) != 0) {
LAB_140b6e3d5:
              FUN_1408e4d18(&local_58,param_1);
              local_58 = &PTR_FUN_14a184370;
              (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
              goto LAB_140b6e26d;
            }
            local_58 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar5])(&local_50);
          }
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_140b6e26d:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6e409 FUN_140b6e409 body=175 status=ok
// SIG undefined FUN_140b6e409(void)

undefined8 * FUN_140b6e409(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  AccountId AVar1;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 **local_60;
  undefined8 *local_58 [2];
  longlong local_48;
  int local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1401e7e86(local_58,param_3);
  FUN_14482e566(local_58);
  local_30 = local_40 + local_48;
  local_38 = local_48;
  AVar1 = bifrost::users::findCachedByShiftId();
  FUN_1401e7e48(local_58);
  if (AVar1 != 0) {
    local_68 = FUN_143f00ac0;
    local_60 = local_58;
    local_58[0] = param_1;
    bifrost::users::cachedCompatibleServiceId(*(undefined8 *)(param_2 + 0x2b8),AVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6e4ba FUN_140b6e4ba body=440 status=ok
// SIG undefined FUN_140b6e4ba(void)

longlong FUN_140b6e4ba(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  int local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x108))(local_58,&local_68);
      lVar3 = local_68;
      lVar6 = (longlong)local_60;
      if (lVar6 == 0) {
        lVar5 = 0;
        local_60 = 0;
      }
      else {
        lVar7 = 0;
        do {
          if ((*(longlong *)(lVar3 + lVar7) != 0) &&
             (plVar4 = (longlong *)FUN_140773fe2(), plVar4 != (longlong *)0x0)) {
            plVar2 = *(longlong **)(lVar3 + lVar7);
            (**(code **)(*plVar2 + 8))(plVar2,&local_88);
            local_78 = local_88;
            local_70 = local_80;
            if (local_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_80 + 1) = (int)local_80[1] + 1;
              UNLOCK();
            }
            lVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4,&local_78);
            plVar4 = local_80;
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_80 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_80)(local_80);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            if (lVar5 != 0) goto LAB_140b6e5c2;
          }
          lVar7 = lVar7 + 0x10;
        } while (lVar6 * 0x10 != lVar7);
        lVar5 = 0;
      }
LAB_140b6e5c2:
      FUN_140b6e673(local_68,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      goto LAB_140b6e5db;
    }
  }
  lVar5 = 0;
LAB_140b6e5db:
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 140b6e673 FUN_140b6e673 body=75 status=ok
// SIG undefined FUN_140b6e673(void)

void FUN_140b6e673(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140b6e6be FUN_140b6e6be body=166 status=ok
// SIG undefined FUN_140b6e6be(void)

undefined8 * FUN_140b6e6be(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a184370;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  plVar7 = *(longlong **)(param_2 + 0x10);
  if (plVar7 == (longlong *)0x0) {
    uVar5 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    uVar5 = (ulonglong)*(byte *)(param_1 + 3);
  }
  uVar6 = 0;
  if (plVar7 != (longlong *)0x0) {
    uVar6 = *(undefined8 *)(param_2 + 8);
  }
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar5])(param_1 + 1);
  param_1[1] = uVar6;
  param_1[2] = plVar7;
  if (plVar7 == (longlong *)0x0) {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(undefined1 *)(param_1 + 3) = 0;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b6e764 FUN_140b6e764 body=348 status=ok
// SIG undefined FUN_140b6e764(void)

undefined2 * FUN_140b6e764(longlong param_1,undefined2 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined2 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined2 uVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140b6e8c2(param_3,&local_40);
  uVar10 = 0xffff;
  if ((local_40 != 0) && ((longlong)*(int *)(param_1 + 0x10) != 0)) {
    plVar9 = *(longlong **)(param_1 + 8);
    plVar1 = plVar9 + *(int *)(param_1 + 0x10);
    do {
      lVar2 = *plVar9;
      if (((lVar2 != 0) && (*(short *)(lVar2 + 4) < 0)) &&
         (*(int *)(lVar2 + 0x68) != *(int *)(lVar2 + 0x94))) {
        uVar3 = (uint)((ulonglong)local_40 >> 0x10);
        uVar7 = (uint)local_40 & 0xffff;
        lVar6 = lVar2 + 0x98;
        if (*(longlong *)(lVar2 + 0xa0) != 0) {
          lVar6 = *(longlong *)(lVar2 + 0xa0);
        }
        iVar8 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar2 + 0xa8) - 1U &
                                 (int)((ulonglong)local_40 >> 0x20) +
                                 ((uint)local_40 << 0x10 | uVar7) + (uVar3 << 0x13 | uVar3 & 0xffff)
                                 + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            lVar6 = *(longlong *)(lVar2 + 0x60) + (longlong)iVar8 * 0x30;
            if (*(longlong *)(*(longlong *)(lVar2 + 0x60) + (longlong)iVar8 * 0x30) == local_40) {
              if (((lVar6 != 0) && (lVar6 != -8)) && (cVar4 = FUN_140ba41f1(param_3), cVar4 != '\0')
                 ) {
                uVar10 = *(undefined2 *)(lVar2 + 2);
                uVar5 = *(undefined2 *)(lVar2 + 8);
                goto LAB_140b6e893;
              }
              break;
            }
            iVar8 = *(int *)(lVar6 + 0x28);
          } while (iVar8 != -1);
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  uVar5 = 0;
LAB_140b6e893:
  *param_2 = uVar10;
  param_2[1] = uVar5;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b6e8c2 FUN_140b6e8c2 body=103 status=ok
// SIG undefined FUN_140b6e8c2(void)

undefined8 * FUN_140b6e8c2(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  
  *param_2 = 0;
  bVar2 = (&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)];
  if (bVar2 == 1) {
    if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
      return param_2;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    if (cVar1 == '\0') {
      return param_2;
    }
    bVar2 = (&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)];
  }
  else if ((*(uint *)(param_1 + 8) & 0xffffff) == 0) {
    return param_2;
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2);
  }
  return param_2;
}



// FUNCTION 140b6e92a FUN_140b6e92a body=741 status=ok
// SIG undefined FUN_140b6e92a(void)

undefined8 FUN_140b6e92a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  undefined *puVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined8 **local_78;
  ulonglong *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = param_2;
  FUN_1446f470e(&local_68,L"SHIFT",1);
  if (local_68 == param_2) {
    pwVar7 = L"shift";
  }
  else if (param_2 == 0) {
    pwVar7 = L"none";
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb975e8) && (FUN_144b3d300(&DAT_14cb975e8), DAT_14cb975e8 == -1)) {
      FUN_1446f470e(local_80,&DAT_14b4367ec,1);
      local_58 = &DAT_14cb8e1d8;
      local_50 = local_80;
      FUN_1446f470e(local_88,&DAT_14b4367ec,1);
      local_40 = &DAT_14cb8e1d8;
      local_70 = &local_38;
      local_78 = &local_58;
      local_48 = local_88;
      FUN_1461f8c68();
      atexit(FUN_143f3817c);
      _Init_thread_footer(&DAT_14cb975e8);
    }
    if (DAT_14cb975a0 != DAT_14cb975cc) {
      uVar2 = (uint)((ulonglong)param_2 >> 0x10);
      uVar5 = (uint)param_2 & 0xffff;
      puVar6 = &DAT_14cb975d0;
      if (DAT_14cb975d8 != (undefined *)0x0) {
        puVar6 = DAT_14cb975d8;
      }
      iVar1 = *(int *)(puVar6 + (ulonglong)
                                (DAT_14cb975e0 - 1U &
                                (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5)
                                + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
      while (iVar1 != -1) {
        plVar4 = (longlong *)(DAT_14cb97598 + (longlong)iVar1 * 0x18);
        if (*plVar4 == param_2) goto LAB_140b6ea2f;
        iVar1 = (int)plVar4[2];
      }
    }
    plVar4 = (longlong *)0x0;
LAB_140b6ea2f:
    plVar8 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    cVar3 = FUN_140a68212(&local_60);
    if ((cVar3 != '\0') ||
       ((plVar8 != (longlong *)0x0 && (cVar3 = FUN_140a68212(plVar8), cVar3 != '\0')))) {
      if (local_60 == DAT_14cb8e468) {
        pwVar7 = L"steam";
        goto LAB_140b6eb39;
      }
      FUN_1446f470e(&local_90,L"EPIC",1);
      pwVar7 = L"epic";
      if ((local_60 == local_90) || (local_60 == DAT_14cb8e220)) goto LAB_140b6eb39;
      FUN_1446f470e(&local_98,&DAT_14b4367ec,1);
      pwVar7 = L"psn";
      if ((local_60 == local_98) || (local_60 == DAT_14cb8e1d8)) goto LAB_140b6eb39;
      FUN_1446f470e(&local_a0,&DAT_14b4367f4,1);
      if (local_60 == local_a0) {
        pwVar7 = L"xboxlive";
        goto LAB_140b6eb39;
      }
      if (local_60 == DAT_14cb8e210) {
        pwVar7 = L"sage";
        goto LAB_140b6eb39;
      }
    }
    pwVar7 = L"generic";
  }
LAB_140b6eb39:
  FUN_140056680(param_1,pwVar7);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6ec10 FUN_140b6ec10 body=1270 status=ok
// SIG undefined FUN_140b6ec10(void)

longlong * FUN_140b6ec10(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined **local_70;
  undefined **local_68;
  longlong lStack_60;
  undefined1 local_58;
  undefined7 uStack_57;
  byte local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  (**(code **)(*param_3 + 0x10))(param_3,&local_68);
  FUN_1446f470e(&local_70,L"SHIFT",1);
  if (local_68 == local_70) goto LAB_140b6ee7d;
  local_68 = (undefined **)0x0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0xb8))(plVar4,&local_88);
    plVar4 = local_88;
    if (local_88 != (longlong *)0x0) {
      local_68 = (undefined **)0x0;
      lStack_60 = 0;
      local_58 = 0;
      (**(code **)(*param_3 + 0x30))(param_3,local_a8);
      (**(code **)(*plVar4 + 0x58))(plVar4,&local_98,&local_68,local_a8);
      plVar4 = local_90;
      if (&local_98 != param_1) {
        *param_1 = local_98;
        local_98 = 0;
        plVar3 = (longlong *)param_1[1];
        if (local_90 != plVar3) {
          local_90 = (longlong *)0x0;
          param_1[1] = (longlong)plVar4;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar3 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
      }
      plVar4 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_90 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  plVar4 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (*param_1 != 0) goto LAB_140b6ee7d;
  lVar5 = FUN_140b6e4ba();
  if (lVar5 != 0) {
    (**(code **)(*param_3 + 0x30))(param_3,&local_88);
    FUN_140b6f107(&local_68,lVar5,&local_88);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (1 < (int)lStack_60) {
      local_98 = 0;
      plVar4 = (longlong *)FUN_1401e3228(&local_98);
      if (plVar4 == (longlong *)0x0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar4 + 0x80))(plVar4,&local_88);
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x120))(local_88,&local_98,&local_68);
          plVar4 = local_90;
          if (&local_98 != param_1) {
            *param_1 = local_98;
            local_98 = 0;
            plVar3 = (longlong *)param_1[1];
            if (local_90 != plVar3) {
              local_90 = (longlong *)0x0;
              param_1[1] = (longlong)plVar4;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar3 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
            }
          }
          plVar4 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_90 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
      }
      plVar4 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_80 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (local_68 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((((*param_1 != 0) || (param_2 == 0)) || (lVar5 = FUN_1400f6f32(param_2), lVar5 == 0)) ||
     (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 == 0)) goto LAB_140b6ee7d;
  FUN_140b6e6be(&local_68,param_3);
  FUN_140b6e764(lVar5,&local_98,&local_68);
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
  if ((short)local_98 < 0) goto LAB_140b6ee7d;
  FUN_1446f470e(&local_88,L"SHIFT",1);
  FUN_1413d9c32(lVar5,&local_68,&local_98,&local_88);
  if ((&DAT_149fc1b6e)[local_50] == '\x01') {
    plVar4 = (longlong *)CONCAT71(uStack_57,local_58);
    lVar5 = lStack_60;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
  }
  else {
    plVar4 = (longlong *)0x0;
    lVar5 = 0;
  }
  *param_1 = lVar5;
  plVar3 = (longlong *)param_1[1];
  if (plVar4 == plVar3) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar3 = plVar4;
        goto joined_r0x000140b6f0e2;
      }
    }
  }
  else {
    param_1[1] = (longlong)plVar4;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000140b6f0e2:
        if (iVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
LAB_140b6ee7d:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6f107 FUN_140b6f107 body=173 status=ok
// SIG undefined FUN_140b6f107(void)

undefined8 * FUN_140b6f107(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  AccountId AVar1;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined8 **local_58;
  undefined8 *local_50 [2];
  longlong local_40;
  int local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1401e7e86(local_50,param_3);
  FUN_14482e566(local_50);
  local_28 = local_38 + local_40;
  local_30 = local_40;
  AVar1 = bifrost::users::findCachedByThirdPartyId(*(undefined8 *)(param_2 + 0x2b8));
  FUN_1401e7e48(local_50);
  if (AVar1 != 0) {
    local_60 = FUN_143f00a36;
    local_58 = local_50;
    local_50[0] = param_1;
    bifrost::users::shiftId(AVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6f1b6 FUN_140b6f1b6 body=881 status=ok
// SIG undefined FUN_140b6f1b6(void)

undefined8 * FUN_140b6f1b6(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[2] = local_50;
  *(undefined4 *)(param_1 + 3) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x1c) = local_44;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[5] = local_50;
  *(undefined4 *)(param_1 + 6) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_44;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[8] = local_50;
  *(undefined4 *)(param_1 + 9) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_44;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0xb] = local_50;
  *(undefined4 *)(param_1 + 0xc) = local_48;
  *(undefined4 *)((longlong)param_1 + 100) = local_44;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0xe] = local_50;
  *(undefined4 *)(param_1 + 0xf) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x7c) = local_44;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x14] = local_50;
  *(undefined4 *)(param_1 + 0x15) = local_48;
  *(undefined4 *)((longlong)param_1 + 0xac) = local_44;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0xffffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x18] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x19) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x21] = local_50;
  *(undefined4 *)(param_1 + 0x22) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x114) = local_44;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x2d] = local_50;
  *(undefined4 *)(param_1 + 0x2e) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x174) = local_44;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x30] = local_50;
  *(undefined4 *)(param_1 + 0x31) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x18c) = local_44;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b6f528 FUN_140b6f528 body=220 status=ok
// SIG undefined FUN_140b6f528(void)

ulonglong FUN_140b6f528(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  undefined7 uVar10;
  longlong lVar11;
  
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)*param_2;
  lVar7 = (longlong)(int)param_2[1];
  if (lVar7 == 0) {
    bVar9 = 0;
    uVar10 = 0;
  }
  else {
    lVar11 = lVar7 * 0x38;
    plVar2 = plVar8 + lVar7 * 7;
    do {
      puVar5 = (undefined8 *)*plVar8;
      if (puVar5 != (undefined8 *)0x0) {
        cVar6 = (**(code **)*puVar5)(puVar5,uVar3);
        if (cVar6 != '\0') {
          uVar10 = (undefined7)((ulonglong)uVar3 >> 8);
          bVar9 = 1;
          goto LAB_140b6f582;
        }
      }
      plVar8 = plVar8 + 7;
      lVar11 = lVar11 + -0x38;
    } while (lVar11 != 0);
    bVar9 = 0;
    uVar10 = 0;
    plVar8 = plVar2;
  }
LAB_140b6f582:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return CONCAT71(uVar10,bVar9 & plVar8 != (longlong *)0x0) & 0xffffffff;
}



// FUNCTION 140b6f604 FUN_140b6f604 body=228 status=ok
// SIG undefined FUN_140b6f604(void)

void FUN_140b6f604(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b6f6e8 FUN_140b6f6e8 body=537 status=ok
// SIG undefined FUN_140b6f6e8(void)

void FUN_140b6f6e8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar7 = 0;
    iVar13 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar7 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_140b6f84c;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar4 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar7 < iVar5) {
    uVar16 = 0xffffffff;
    do {
      plVar6 = *(longlong **)(*param_1 + 8 + (longlong)iVar7 * 0x18);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = (int)param_1[5];
      iVar7 = (int)uVar17;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar11[lVar14] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar11[lVar14 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar14 == lVar12) goto LAB_140b6f84c;
        }
        uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_140b6f84c:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar8 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar8 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar8;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140b6f902 FUN_140b6f902 body=1110 status=ok
// SIG undefined FUN_140b6f902(void)

void FUN_140b6f902(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  
  FUN_1449a0272(param_1 + 0x10,param_2 + 0x10);
  FUN_1449a0272(param_1 + 0x28,param_2 + 0x28);
  FUN_1449a0272(param_1 + 0x40,param_2 + 0x40);
  FUN_1449a0272(param_1 + 0x70,param_2 + 0x70);
  FUN_1449a0272(param_1 + 0x58,param_2 + 0x58);
  if ((*(longlong *)(param_2 + 0x88) != *(longlong *)(param_1 + 0x88)) ||
     (*(int *)(param_1 + 0x90) == 0)) {
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_2 + 0x88);
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  }
  if ((*(int *)(param_2 + 0x94) != *(int *)(param_1 + 0x94)) || (*(int *)(param_1 + 0x98) == 0)) {
    *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x94);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  FUN_1449a0272(param_1 + 0xa0,param_2 + 0xa0);
  if ((*(int *)(param_2 + 0xb8) != *(int *)(param_1 + 0xb8)) || (*(int *)(param_1 + 0xbc) == 0)) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_2 + 0xb8);
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  }
  plVar6 = (longlong *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0xd0) != 0) {
    cVar5 = FUN_144722c14(plVar6,(longlong *)(param_2 + 0xc0),0);
    if (cVar5 != '\0') goto LAB_140b6f9f6;
  }
  plVar3 = *(longlong **)(param_2 + 0xc0);
  plVar4 = (longlong *)*plVar6;
  if (plVar4 != plVar3) {
    *plVar6 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
LAB_140b6f9f6:
  if ((*(char *)(param_2 + 0xd8) != *(char *)(param_1 + 0xd8)) || (*(int *)(param_1 + 0xdc) == 0)) {
    *(char *)(param_1 + 0xd8) = *(char *)(param_2 + 0xd8);
    *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  }
  if ((*(char *)(param_2 + 0xe0) != *(char *)(param_1 + 0xe0)) || (*(int *)(param_1 + 0xe4) == 0)) {
    *(char *)(param_1 + 0xe0) = *(char *)(param_2 + 0xe0);
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  }
  if ((*(char *)(param_2 + 0xe8) != *(char *)(param_1 + 0xe8)) || (*(int *)(param_1 + 0xec) == 0)) {
    *(char *)(param_1 + 0xe8) = *(char *)(param_2 + 0xe8);
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  }
  if ((*(char *)(param_2 + 0xf0) != *(char *)(param_1 + 0xf0)) || (*(int *)(param_1 + 0xf4) == 0)) {
    *(char *)(param_1 + 0xf0) = *(char *)(param_2 + 0xf0);
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  }
  if ((*(char *)(param_2 + 0xf8) != *(char *)(param_1 + 0xf8)) || (*(int *)(param_1 + 0xfc) == 0)) {
    *(char *)(param_1 + 0xf8) = *(char *)(param_2 + 0xf8);
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  }
  if ((*(int *)(param_2 + 0x100) != *(int *)(param_1 + 0x100)) || (*(int *)(param_1 + 0x104) == 0))
  {
    *(int *)(param_1 + 0x100) = *(int *)(param_2 + 0x100);
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  }
  FUN_1449a0272(param_1 + 0x108,param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  if (param_1 != param_2) {
    FUN_140b6c183(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
    iVar1 = *(int *)(param_2 + 0x130);
    uVar2 = *(undefined8 *)(param_2 + 0x128);
    *(int *)(param_1 + 0x130) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x134) == 0) {
      *(undefined4 *)(param_1 + 0x134) = 0;
    }
    else {
      FUN_145777ba4((undefined8 *)(param_1 + 0x128),iVar1);
      FUN_145777b11(*(undefined8 *)(param_1 + 0x128),uVar2,iVar1);
    }
  }
  if ((*(int *)(param_2 + 0x140) != *(int *)(param_1 + 0x140)) || (*(int *)(param_1 + 0x144) == 0))
  {
    *(int *)(param_1 + 0x140) = *(int *)(param_2 + 0x140);
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
  }
  if ((*(int *)(param_2 + 0x148) != *(int *)(param_1 + 0x148)) || (*(int *)(param_1 + 0x14c) == 0))
  {
    *(int *)(param_1 + 0x148) = *(int *)(param_2 + 0x148);
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
  }
  if ((*(char *)(param_2 + 0x150) != *(char *)(param_1 + 0x150)) || (*(int *)(param_1 + 0x154) == 0)
     ) {
    *(char *)(param_1 + 0x150) = *(char *)(param_2 + 0x150);
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
  }
  if ((*(char *)(param_2 + 0x158) != *(char *)(param_1 + 0x158)) || (*(int *)(param_1 + 0x15c) == 0)
     ) {
    *(char *)(param_1 + 0x158) = *(char *)(param_2 + 0x158);
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  }
  if ((*(char *)(param_2 + 0x160) != *(char *)(param_1 + 0x160)) || (*(int *)(param_1 + 0x164) == 0)
     ) {
    *(char *)(param_1 + 0x160) = *(char *)(param_2 + 0x160);
    *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
  }
  FUN_1449a0272(param_1 + 0x168,param_2 + 0x168);
  FUN_1449a0272(param_1 + 0x180,param_2 + 0x180);
  return;
}



// FUNCTION 140b6fd58 FUN_140b6fd58 body=1363 status=ok
// SIG undefined FUN_140b6fd58(void)

ulonglong * FUN_140b6fd58(longlong param_1,ulonglong *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  uint local_a8;
  int local_a4;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar16 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x68);
    }
    iVar18 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_3) * 4);
    if (iVar18 != -1) {
      do {
        lVar16 = *(longlong *)(param_1 + 0x28) + (longlong)iVar18 * 0x70;
        if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar18 * 0x70) == param_3) {
          if ((lVar16 != 0) && (lVar16 != -8)) {
            FUN_140b702ac(param_2);
            iVar18 = (int)param_2[1];
            lVar16 = (longlong)iVar18;
            if (lVar16 != 0) {
              uVar3 = *param_2;
              local_a8 = param_3;
              uVar11 = FUN_140b7030a(param_1,param_3,uVar3 + 0x10,uVar3);
              uVar12 = (ulonglong)uVar11;
              local_b0 = uVar3 + 0x38;
              iVar14 = 0;
              local_80 = uVar3;
              local_78 = param_2;
              iVar20 = 0;
              do {
                local_90 = CONCAT44(local_90._4_4_,iVar14);
                bVar7 = (byte)uVar12;
                local_98 = CONCAT71(local_98._1_7_,bVar7) ^ 1;
                lVar13 = (longlong)iVar20;
                iVar14 = iVar20 + 1;
                if (iVar20 + 1 < iVar18) {
                  iVar14 = iVar18;
                }
                local_88 = lVar13 * 0x38;
                lVar19 = local_b0 + local_88;
                iVar21 = iVar20;
                do {
                  lVar13 = lVar13 + 1;
                  iVar4 = iVar14;
                  if (lVar16 <= lVar13) break;
                  local_a0 = CONCAT71(local_a0._1_7_,(char)uVar12);
                  bVar8 = FUN_140b7030a(param_1,local_a8,lVar19 + 0x10,lVar19);
                  uVar12 = local_a0 & 0xff;
                  iVar21 = iVar21 + 1;
                  lVar19 = lVar19 + 0x38;
                  iVar4 = iVar21;
                } while ((bVar7 & 1) == bVar8);
                iVar14 = iVar4 - iVar20;
                if ((uVar12 & 1) == 0) {
                  FUN_140cb1696(local_88 + local_80,iVar14);
                  bVar7 = (byte)local_98;
                  iVar14 = (int)local_90;
                }
                else {
                  iVar21 = (int)local_90;
                  bVar7 = (byte)local_98;
                  if ((int)local_90 != iVar20) {
                    memmove((void *)((longlong)(int)local_90 * 0x38 + local_80),
                            (void *)(local_88 + local_80),(longlong)iVar14 * 0x38);
                  }
                  iVar14 = iVar21 + iVar14;
                }
                uVar12 = (ulonglong)bVar7;
                iVar20 = iVar4;
              } while (lVar13 < lVar16);
              *(int *)(local_78 + 1) = iVar14;
              param_2 = local_78;
              param_3 = local_a8;
            }
          }
          break;
        }
        iVar18 = *(int *)(lVar16 + 0x68);
      } while (iVar18 != -1);
    }
  }
  cVar6 = FUN_140b705ca(param_1);
  if ((cVar6 != '\0') && (local_98 = (ulonglong)(int)param_2[1], local_98 != 0)) {
    local_a0 = *param_2;
    local_a8 = param_3;
    local_90 = param_1;
    local_78 = param_2;
    uVar9 = FUN_140b70546(param_1);
    lVar16 = FUN_140b70372(uVar9);
    local_a4 = 0;
    if (lVar16 == 0) {
      bVar7 = 0;
    }
    else if (*(longlong *)(local_a0 + 0x10) == 0) {
      bVar7 = 1;
    }
    else {
      bVar7 = FUN_140b70752(lVar16,local_a8);
      bVar7 = bVar7 ^ 1;
    }
    local_88 = -local_98;
    local_70 = local_a0 + 0x48;
    uVar11 = 0;
LAB_140b70062:
    local_b0 = (ulonglong)uVar11;
LAB_140b70069:
    do {
      uVar11 = (int)local_b0 + 1;
      if ((int)uVar11 < (int)local_98) {
        lVar13 = (longlong)(int)local_b0;
        lVar16 = local_88 + lVar13;
        local_80 = lVar13 * 0x38;
        lVar13 = lVar13 + 2;
        plVar15 = (longlong *)(local_70 + local_80);
        bVar22 = true;
        lVar19 = -1;
        do {
          uVar9 = FUN_140b70546(local_90);
          lVar10 = FUN_140b70372(uVar9);
          iVar18 = (int)lVar19;
          if (lVar10 == 0) {
            if ((bVar7 & 1) != 0) {
              FUN_140cb1696(local_80 + local_a0,-iVar18);
              if (!bVar22) goto LAB_140b701e8;
              local_b0 = (local_b0 & 0xffffffff) - lVar19;
              bVar7 = 0;
              goto LAB_140b70069;
            }
          }
          else if (*plVar15 == 0) {
            if ((bVar7 & 1) == 0) {
              uVar11 = (int)local_b0 - iVar18;
              iVar18 = -iVar18;
              goto LAB_140b701a2;
            }
          }
          else {
            bVar8 = FUN_140b70752(lVar10,local_a8);
            if ((bVar7 & 1) == bVar8) {
              uVar11 = (int)local_b0 - iVar18;
              goto LAB_140b70110;
            }
          }
          bVar22 = lVar13 < (longlong)local_98;
          lVar19 = lVar19 + -1;
          lVar13 = lVar13 + 1;
          plVar15 = plVar15 + 7;
        } while (lVar16 != lVar19);
        uVar11 = (uint)local_98;
      }
      else {
        bVar22 = false;
      }
LAB_140b70110:
      iVar18 = uVar11 - (int)local_b0;
      if ((bVar7 & 1) == 0) goto LAB_140b701a2;
      FUN_140cb1696((longlong)(int)local_b0 * 0x38 + local_a0,iVar18);
      bVar7 = 0;
      local_b0 = (ulonglong)uVar11;
      if (!bVar22) goto LAB_140b701e8;
    } while( true );
  }
LAB_140b6fdfa:
  if ((*(longlong *)(param_1 + 0x18) != 0) && ((longlong)(int)param_2[1] != 0)) {
    plVar15 = (longlong *)*param_2;
    plVar17 = plVar15 + (longlong)(int)param_2[1] * 7;
    do {
      lVar16 = *plVar15;
      if (lVar16 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x18);
        local_60 = *(longlong **)(lVar16 + 0x10);
        if (local_60 == (longlong *)0x0) {
LAB_140b6ffcf:
          local_60 = (longlong *)0x0;
          local_68 = 0;
        }
        else {
          iVar18 = (int)local_60[1];
          do {
            if (iVar18 == 0) goto LAB_140b6ffcf;
            LOCK();
            iVar14 = (int)local_60[1];
            bVar22 = iVar18 == iVar14;
            if (bVar22) {
              *(int *)(local_60 + 1) = iVar18 + 1;
              iVar14 = iVar18;
            }
            iVar18 = iVar14;
            UNLOCK();
          } while (!bVar22);
          local_68 = *(undefined8 *)(lVar16 + 8);
        }
        FUN_140b7090e(uVar9,&local_58,&local_68);
        plVar5 = local_50;
        *(bool *)(plVar15 + 6) = local_58 != 0;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        plVar5 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      plVar15 = plVar15 + 7;
    } while (plVar15 != plVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_140b701a2:
  if (local_a4 != (int)local_b0) {
    memmove((void *)((longlong)local_a4 * 0x38 + local_a0),
            (void *)((longlong)(int)local_b0 * 0x38 + local_a0),(longlong)iVar18 * 0x38);
  }
  local_a4 = local_a4 + iVar18;
  bVar7 = 1;
  if (!bVar22) goto LAB_140b701e8;
  goto LAB_140b70062;
LAB_140b701e8:
  *(int *)(local_78 + 1) = local_a4;
  param_2 = local_78;
  param_1 = local_90;
  goto LAB_140b6fdfa;
}



// FUNCTION 140b702ac FUN_140b702ac body=93 status=ok
// SIG undefined FUN_140b702ac(void)

undefined8 * FUN_140b702ac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140cb1696(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b70aa4(param_1,iVar1);
      FUN_140b709f1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140b7030a FUN_140b7030a body=103 status=ok
// SIG undefined FUN_140b7030a(void)

undefined8 FUN_140b7030a(undefined8 param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_140b70546();
  lVar3 = FUN_140b70372(uVar2);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if (*param_4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_140b70752(lVar3,param_2);
      uVar4 = uVar4 & 0xffffffff;
    }
    if (*param_3 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = FUN_140b70752(lVar3,param_2);
    }
    uVar2 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar1);
  }
  return uVar2;
}



// FUNCTION 140b70372 FUN_140b70372 body=55 status=ok
// SIG undefined FUN_140b70372(void)

undefined8 FUN_140b70372(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    plVar1 = (longlong *)FUN_140b703aa();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140b7039b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140b703aa FUN_140b703aa body=105 status=ok
// SIG undefined FUN_140b703aa(void)

void FUN_140b703aa(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140b70460();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140b70414(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b70414 FUN_140b70414 body=76 status=ok
// SIG undefined FUN_140b70414(void)

void FUN_140b70414(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140b70460();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140b70451;
    }
  }
  lVar2 = 0;
LAB_140b70451:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140b70460 FUN_140b70460 body=228 status=ok
// SIG undefined FUN_140b70460(void)

longlong FUN_140b70460(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb96e80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148a68e1d;
    local_40 = FUN_14657efa2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxOnline",L"GbxFriendsSubsystem",&DAT_14cb96e80,&DAT_148a68e1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96e80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b70546 FUN_140b70546 body=132 status=ok
// SIG undefined FUN_140b70546(void)

undefined8 FUN_140b70546(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  cVar2 = FUN_14111b834((uint *)(param_1 + 0x10),0);
  if (cVar2 != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140b705a7;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(param_1 + 0x14) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))
       ) {
      lVar3 = *plVar4;
      goto LAB_140b705a7;
    }
  }
  lVar3 = 0;
LAB_140b705a7:
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
  }
  return uVar5;
}



// FUNCTION 140b705ca FUN_140b705ca body=162 status=ok
// SIG undefined FUN_140b705ca(void)

undefined8 FUN_140b705ca(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  cVar2 = FUN_14111b834((uint *)(param_1 + 0x10),0);
  if (cVar2 != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    lVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140b70628;
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((int)plVar6[2] == *(int *)(param_1 + 0x14) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))
       ) {
      lVar5 = *plVar6;
      goto LAB_140b70628;
    }
  }
  lVar5 = 0;
LAB_140b70628:
  lVar5 = *(longlong *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    lVar3 = FUN_140b7066c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar4 = FUN_140b6d060(lVar5);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140b7066c FUN_140b7066c body=228 status=ok
// SIG undefined FUN_140b7066c(void)

longlong FUN_140b7066c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb96f50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a86780;
    local_38 = &LAB_148a68e2d;
    local_40 = &LAB_14657f1fc;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x4b8;
    FUN_14081cfa3(L"/Script/GbxOnline",L"GbxOnlineSessionClient",&DAT_14cb96f50,&DAT_148a68e2c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96f50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b70752 FUN_140b70752 body=332 status=ok
// SIG undefined FUN_140b70752(void)

ulonglong FUN_140b70752(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar5 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xf0);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar7 * 0xc) == param_2) {
          (**(code **)(*param_3 + 0x10))(param_3,&local_50);
          FUN_140b708a0(param_1);
          local_30 = local_50;
          plVar6 = (longlong *)FUN_1401e3228();
          if (plVar6 == (longlong *)0x0) {
            local_48 = (longlong *)0x0;
            plStack_40 = (longlong *)0x0;
LAB_140b70882:
            bVar3 = true;
          }
          else {
            (**(code **)(*plVar6 + 0x28))(plVar6,&local_48);
            if (local_48 == (longlong *)0x0) goto LAB_140b70882;
            uVar4 = (**(code **)(*local_48 + 0x1d8))(local_48,param_2,param_3,&DAT_14cb97068);
            param_3 = (longlong *)(ulonglong)uVar4;
            bVar3 = false;
          }
          plVar6 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_40 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_40)(plStack_40);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          if (!bVar3) goto LAB_140b7083f;
          break;
        }
        iVar7 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar7 * 0xc + 4);
      } while (iVar7 != -1);
    }
  }
  param_3 = (longlong *)0x0;
LAB_140b7083f:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (ulonglong)param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b708a0 FUN_140b708a0 body=110 status=ok
// SIG undefined FUN_140b708a0(void)

undefined8 FUN_140b708a0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xac) != 0) {
    uVar1 = *(uint *)(param_1 + 0xa8);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0xac))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 140b7090e FUN_140b7090e body=227 status=ok
// SIG undefined FUN_140b7090e(void)

undefined8 * FUN_140b7090e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x70);
    lVar9 = 0;
    uVar10 = 0;
    do {
      puVar5 = *(undefined8 **)(lVar4 + lVar9);
      puVar6 = (undefined8 *)*puVar5;
      plVar7 = (longlong *)puVar5[1];
      if (plVar7 == (longlong *)0x0) {
        cVar8 = (**(code **)*puVar6)(puVar6,*param_3);
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        cVar8 = (**(code **)*puVar6)();
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (cVar8 != '\0') {
        if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_1 + 0x78))) {
          lVar4 = *(longlong *)(param_1 + 0x70);
          lVar9 = (ulonglong)(uVar10 & 0x7fffffff) * 0x10;
          *param_2 = *(undefined8 *)(lVar4 + lVar9);
          lVar4 = *(longlong *)(lVar4 + 8 + lVar9);
          param_2[1] = lVar4;
          if (lVar4 == 0) {
            return param_2;
          }
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
          return param_2;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar9);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140b709f1 FUN_140b709f1 body=178 status=ok
// SIG undefined FUN_140b709f1(void)

void FUN_140b709f1(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar3[-4] = *param_2;
      lVar2 = param_2[1];
      puVar3[-3] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar3[-2] = param_2[2];
      lVar2 = param_2[3];
      puVar3[-1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 5);
      _Src = (void *)param_2[4];
      *(int *)(puVar3 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar1,0);
        memcpy((void *)*puVar3,_Src,(longlong)iVar1 * 2);
      }
      *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_2 + 6);
      param_2 = param_2 + 7;
      puVar3 = puVar3 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b70aa4 FUN_140b70aa4 body=330 status=ok
// SIG undefined FUN_140b70aa4(void)

void FUN_140b70aa4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140b70b12;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140b70b12:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_1446f8d3c(param_1,0,iVar8,0x38,8);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b70bee FUN_140b70bee body=262 status=ok
// SIG undefined FUN_140b70bee(void)

void FUN_140b70bee(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b70cf4 FUN_140b70cf4 body=1369 status=ok
// SIG undefined FUN_140b70cf4(void)

undefined8
FUN_140b70cf4(longlong param_1,undefined8 *param_2,char param_3,wchar_t **param_4,wchar_t **param_5,
             undefined8 *param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [4];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  wchar_t *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == 0) {
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
LAB_140b70fac:
    local_88 = 0;
    uStack_80 = 0;
    (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_58);
    bVar4 = true;
  }
  else {
    uVar5 = FUN_140b6de3c();
    (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_58);
    FUN_140b6df48(uVar5,&local_68,param_1,local_58);
    plVar2 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_68 == (longlong *)0x0) goto LAB_140b70fac;
    local_78 = 0;
    uStack_70 = 0;
    (**(code **)(*local_68 + 0x18))(local_68,&local_58);
    bVar4 = false;
  }
  if (&local_58 == param_4) {
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    *param_4 = local_58;
    local_58 = (wchar_t *)0x0;
    *(undefined4 *)(param_4 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_50._4_4_;
    local_50 = (longlong *)0x0;
  }
  lVar6 = local_88;
  if (!bVar4) {
    lVar6 = local_78;
  }
  if (lVar6 != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_58);
  plVar2 = local_50;
  if (local_50 == (longlong *)0x0) {
    *param_6 = local_58;
    plVar7 = (longlong *)param_6[1];
    if (plVar7 == (longlong *)0x0) goto LAB_140b70e50;
    param_6[1] = 0;
LAB_140b71018:
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_140b70e50;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar2 = plVar7;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *param_6 = local_58;
    plVar7 = (longlong *)param_6[1];
    if (local_50 != plVar7) {
      param_6[1] = local_50;
      if (plVar7 == (longlong *)0x0) goto LAB_140b70e50;
      goto LAB_140b71018;
    }
    LOCK();
    plVar7 = local_50 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_140b70e50;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_140b70e50:
  plVar2 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_a0);
  (**(code **)(*local_a0 + 0x10))(local_a0,&local_90);
  FUN_140b6e92a(&local_58,local_90);
  if (&local_58 == param_5) {
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    *param_5 = local_58;
    local_58 = (wchar_t *)0x0;
    *(undefined4 *)(param_5 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_50._4_4_;
    local_50 = (longlong *)0x0;
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_98 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
      }
    }
  }
  if ((param_3 != '\0') && (*(int *)(param_4 + 1) < 2)) {
    (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_58);
    (**(code **)(*(longlong *)local_58 + 0x10))(local_58,&local_a0);
    FUN_1446f470e(&local_a8,L"SHIFT",1);
    plVar2 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_a0 == local_a8) {
      local_58 = L"DefaultShiftFriendDisplayName";
      local_50._0_4_ = 0x1d;
      FUN_1446e940c(&local_a0,&local_58);
      local_58 = L"GbxOnlineUIHelpers";
      local_50 = (longlong *)CONCAT44(local_50._4_4_,0x12);
      FUN_1446e940c(local_ac,&local_58);
      FUN_140208bae(&local_58,local_ac,&local_a0,L"DefaultSHiFTPlayer");
      uVar5 = FUN_1447a1f4a(&local_58);
      FUN_144a787a6(param_4,uVar5);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
    }
  }
  FUN_140b6e028(&local_58,param_4,param_6,1);
  if (&local_58 == param_4) {
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    *param_4 = local_58;
    local_58 = (wchar_t *)0x0;
    *(undefined4 *)(param_4 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_50._4_4_;
  }
  plVar2 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_60 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b7124e FUN_140b7124e body=214 status=ok
// SIG undefined FUN_140b7124e(void)

undefined8 * FUN_140b7124e(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 *local_40;
  code *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_38);
    FUN_1446f470e(&local_48,L"SHIFT",1);
    if (local_38 == local_48) {
      (**(code **)(*(longlong *)*param_3 + 0x30))((longlong *)*param_3,&local_38);
      uVar2 = FUN_140b71325(&local_38);
      if (local_38 != (code *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = 0;
      param_2[1] = 0;
      local_30 = &local_40;
      local_38 = FUN_143efd7ea;
      local_40 = param_2;
      bifrost::sessions::serviceName(uVar2);
      goto LAB_140b712f9;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140b712f9:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b71325 FUN_140b71325 body=170 status=ok
// SIG undefined FUN_140b71325(void)

undefined4 FUN_140b71325(undefined8 param_1)

{
  AccountId AVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 **local_60;
  undefined4 *local_58 [2];
  longlong local_48;
  int local_40;
  longlong local_38;
  longlong local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_24 = 0;
  FUN_1401e7e86(local_58,param_1);
  FUN_14482e566(local_58);
  local_30 = local_40 + local_48;
  local_38 = local_48;
  AVar1 = bifrost::users::findCachedByShiftId();
  FUN_1401e7e48(local_58);
  if (AVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_58[0] = &local_24;
    local_68 = &LAB_143efd72a;
    local_60 = local_58;
    bifrost::users::findCachedSessionIds(AVar1);
    uVar2 = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b713d0 FUN_140b713d0 body=720 status=ok
// SIG undefined FUN_140b713d0(void)

void FUN_140b713d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  plVar11 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar11,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar16 = *(uint *)(param_1 + 9);
  if (uVar16 == 1) {
    if (*plVar11 != 0) {
      FUN_1446efa72(plVar11,0,0,4);
    }
  }
  else {
    if (uVar16 == 0) {
      return;
    }
    FUN_1446efa72(plVar11,0,uVar16,4);
    if ((int)uVar16 < 1) goto LAB_140b7143b;
  }
  uVar4 = 0;
  do {
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = plVar1;
    }
    *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar16 != uVar4);
LAB_140b7143b:
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar12 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 2);
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar13 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar13 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar17) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar16 = puVar9[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar6 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar13 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar13) {
      iVar13 = iVar5;
    }
  }
  if (iVar13 < iVar5) {
    uVar16 = 0xffffffff;
    do {
      lVar14 = *param_1;
      lVar10 = (longlong)iVar13;
      plVar11 = *(longlong **)(lVar14 + lVar10 * 0x18);
      plVar3 = *(longlong **)(lVar14 + 8 + lVar10 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar14 = lVar14 + lVar10 * 0x18;
      iVar5 = (**(code **)(*plVar11 + 0x40))();
      uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
      iVar5 = (int)uVar6;
      *(int *)(lVar14 + 0x14) = iVar5;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar1;
      }
      *(undefined4 *)(lVar14 + 0x10) =
           *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar1;
      }
      *(int *)((longlong)plVar11 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar3 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 2);
      }
      iVar5 = (int)param_1[5];
      iVar13 = (int)uVar17;
      lVar14 = (longlong)iVar13;
      uVar4 = puVar9[lVar14] & uVar16;
      if (uVar4 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar13) {
          iVar8 = iVar13;
        }
        if (iVar7 <= iVar13) {
          return;
        }
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar4 = puVar9[lVar14 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar14 == lVar10) {
            return;
          }
        }
        uVar17 = (ulonglong)(iVar13 + (int)lVar10 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar6 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar5);
  }
  return;
}



// FUNCTION 140b716a0 FUN_140b716a0 body=2709 status=ok
// SIG undefined FUN_140b716a0(void)

void FUN_140b716a0(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined **ppuVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  byte bVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  longlong *plVar28;
  int iVar29;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_70);
  plVar18 = (longlong *)(param_1 + 8);
  uVar26 = (uint)((ulonglong)local_70 >> 0x10);
  uVar17 = (uint)local_70 & 0xffff;
  uVar26 = ((uint)local_70 << 0x10 | uVar17) + (int)((ulonglong)local_70 >> 0x20) +
           (uVar26 << 0x13 | uVar26 & 0xffff) + (uVar17 >> 4);
  iVar29 = *(int *)(param_1 + 0x10);
  iVar23 = *(int *)(param_1 + 0x3c);
  if (iVar29 != iVar23) {
    lVar24 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar24 = *(longlong *)(param_1 + 0x48);
    }
    iVar16 = *(int *)(lVar24 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar26) * 4);
    if (iVar16 != -1) {
      do {
        lVar24 = *plVar18 + (longlong)iVar16 * 0x20;
        if (*(undefined ***)(*plVar18 + (longlong)iVar16 * 0x20) == local_70) {
          if (lVar24 != 0) goto LAB_140b718d5;
          break;
        }
        iVar16 = *(int *)(lVar24 + 0x18);
      } while (iVar16 != -1);
    }
  }
  local_a8 = plVar18;
  if (iVar23 == 0) {
    *(int *)(param_1 + 0x10) = iVar29 + 1;
    if (*(int *)(param_1 + 0x14) == iVar29) {
      FUN_1447711aa(plVar18,iVar29);
    }
    iVar23 = *(int *)(param_1 + 0x30);
    if (iVar23 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar16 = iVar23 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    lVar22 = param_1 + 0x18;
    iVar21 = iVar23 + 1;
    iVar27 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar27 = iVar23;
    }
    if (iVar27 >> 5 == iVar16) {
      *(int *)(param_1 + 0x30) = iVar21;
    }
    else {
      if (*(int *)(param_1 + 0x34) <= iVar23) {
        if (iVar23 + 0x20U < 0xa0) {
          iVar21 = 0x80;
          iVar16 = iVar23;
        }
        else {
          uVar17 = iVar23 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x34) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar17) {
              uVar20 = uVar17;
            }
          }
          else {
            uVar20 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar25 = FUN_144a3809e(uVar20 << 2,0);
          iVar16 = (int)(uVar25 >> 2);
          iVar21 = -0x20;
          if ((int)uVar17 <= iVar16) {
            iVar21 = iVar16 << 5;
          }
          iVar16 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x34) = iVar21;
        FUN_1446efbd8(lVar22,iVar16);
        iVar21 = *(int *)(param_1 + 0x30) + 1;
      }
      iVar16 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar16 = iVar21;
      }
      *(int *)(param_1 + 0x30) = iVar21;
      if (iVar21 % 0x20 != 0) {
        lVar24 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar24 = lVar22;
        }
        bVar19 = -(char)(iVar21 % 0x20);
        *(uint *)(lVar24 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)(lVar24 + (longlong)(iVar16 >> 5) * 4) << (bVar19 & 0x1f)) >>
             (bVar19 & 0x1f);
      }
    }
    lVar24 = (longlong)iVar29;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar22 = *(longlong *)(param_1 + 0x28);
    }
    bVar19 = (byte)iVar23 & 0x1f;
    puVar1 = (uint *)(lVar22 + (longlong)(iVar27 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
  }
  else {
    iVar29 = *(int *)(param_1 + 0x38);
    lVar24 = (longlong)iVar29;
    iVar16 = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar24 * 0x20);
    *(int *)(param_1 + 0x38) = iVar16;
    *(int *)(param_1 + 0x3c) = iVar23 + -1;
    if (iVar23 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar16 * 0x20) = 0xffffffff;
    }
  }
  lVar22 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar22 = *(longlong *)(param_1 + 0x28);
  }
  iVar23 = iVar29 + 0x1f;
  if (-1 < iVar29) {
    iVar23 = iVar29;
  }
  puVar1 = (uint *)(lVar22 + (longlong)(iVar23 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar29 & 0x1f);
  iVar23 = 1;
  lVar22 = *(longlong *)(param_1 + 8);
  lVar24 = lVar24 * 0x20;
  plVar18 = (longlong *)(lVar24 + lVar22);
  *(undefined ***)(lVar22 + lVar24) = local_70;
  puVar4 = (undefined8 *)(lVar22 + 8 + lVar24);
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_14127bbf3(0,0);
  plVar28 = local_a8;
  *(undefined4 *)(lVar22 + 0x18 + lVar24) = 0xffffffff;
  uVar17 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
  if (uVar17 != 1) {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      lVar24 = param_1 + 0x40;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        lVar24 = *(longlong *)(param_1 + 0x48);
      }
      iVar16 = *(int *)(lVar24 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar26) * 4);
      if (iVar16 != -1) {
        do {
          puVar2 = (undefined4 *)(*local_a8 + (longlong)iVar16 * 0x20);
          if (*(longlong *)(*local_a8 + (longlong)iVar16 * 0x20) == *plVar18) {
            FUN_14127bbf3(*(undefined8 *)(puVar2 + 2),puVar2[4]);
            if (*(longlong *)(puVar2 + 2) != 0) {
              FUN_1400020a8();
            }
            plVar28 = local_a8;
            lVar24 = *plVar18;
            uVar7 = *(undefined4 *)((longlong)plVar18 + 4);
            lVar22 = plVar18[1];
            uVar8 = *(undefined4 *)((longlong)plVar18 + 0xc);
            *(longlong *)(puVar2 + 4) = plVar18[2];
            *puVar2 = (int)lVar24;
            puVar2[1] = uVar7;
            puVar2[2] = (int)lVar22;
            puVar2[3] = uVar8;
            FUN_148a9c22c(local_a8,iVar29);
            goto LAB_140b718b4;
          }
          iVar16 = puVar2[6];
        } while (iVar16 != -1);
      }
    }
    if (3 < uVar17) {
      uVar25 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar24 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar23 = 1 << ((byte)lVar24 & 0x1f);
    }
  }
  if (((int)uVar17 < 1) || (iVar23 <= *(int *)(param_1 + 0x50))) {
    uVar26 = *(int *)(param_1 + 0x50) - 1U & uVar26;
    *(uint *)((longlong)plVar18 + 0x1c) = uVar26;
    lVar24 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar24 = param_1 + 0x40;
    }
    *(undefined4 *)(plVar18 + 3) =
         *(undefined4 *)
          (lVar24 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar26) * 4);
    lVar24 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar24 = param_1 + 0x40;
    }
    *(int *)(lVar24 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar26) * 4) =
         iVar29;
  }
  else {
    *(int *)(param_1 + 0x50) = iVar23;
    FUN_145778138(local_a8);
  }
LAB_140b718b4:
  lVar24 = (longlong)iVar29 * 0x20 + *plVar28;
LAB_140b718d5:
  local_68 = &PTR_FUN_14a184370;
  uStack_60 = *param_2;
  local_58 = param_2[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  FUN_140b72136(lVar24 + 8,&local_68);
  local_68 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uStack_50 & 0xff])(&uStack_60);
  ppuVar15 = local_70;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    uVar26 = (uint)((ulonglong)local_70 >> 0x10);
    uVar17 = (uint)local_70 & 0xffff;
    lVar24 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar24 = *(longlong *)(param_1 + 200);
    }
    iVar29 = *(int *)(lVar24 + (ulonglong)
                               (*(int *)(param_1 + 0xd0) - 1U &
                               (int)((ulonglong)local_70 >> 0x20) +
                               ((uint)local_70 << 0x10 | uVar17) +
                               (uVar26 << 0x13 | uVar26 & 0xffff) + (uVar17 >> 4)) * 4);
    if (iVar29 != -1) {
      lVar24 = *(longlong *)(param_1 + 0x88);
      do {
        if (*(undefined ***)(lVar24 + (longlong)iVar29 * 0x30) == local_70) goto LAB_140b71d62;
        iVar29 = *(int *)((longlong)iVar29 * 0x30 + lVar24 + 0x28);
      } while (iVar29 != -1);
    }
  }
  FUN_14127b900(param_1);
  local_68 = ppuVar15;
  plVar18 = (longlong *)FUN_1401e3228();
  if (plVar18 == (longlong *)0x0) {
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
  }
  else {
    local_a8 = (longlong *)(param_1 + 0x88);
    (**(code **)(*plVar18 + 0xb8))(plVar18,&local_88);
    if (local_88 != (longlong *)0x0) {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = (undefined **)0x0;
      uStack_60 = 0;
      uVar25 = 0;
      do {
        ppuVar15 = local_70;
        plVar28 = local_88;
        uVar6 = *(undefined8 *)(param_1 + 0x68);
        plVar18 = *(longlong **)(param_1 + 0x70);
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
          UNLOCK();
        }
        local_a0 = (undefined8 *)0x0;
        local_98 = 0;
        FUN_1446efa72(&local_a0,0,4,0x10);
        local_98 = 4;
        *local_a0 = &PTR_LAB_14b438ab0;
        LOCK();
        UNLOCK();
        lVar22 = DAT_14c758608 + 1;
        lVar24 = DAT_14c758608 + 1;
        if (lVar22 == 0) {
          LOCK();
          UNLOCK();
          lVar22 = DAT_14c758608 + 2;
          lVar24 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar24;
        local_a0[2] = lVar22;
        *local_a0 = &PTR_FUN_14b4f01e0;
        local_a0[3] = param_1;
        local_a0[4] = uVar6;
        local_a0[5] = plVar18;
        local_a0[6] = ppuVar15;
        (**(code **)(*plVar28 + 0x10))(plVar28,&local_90,uVar25 & 0xffffffff,&local_a0);
        (&local_68)[uVar25] = local_90;
        if (local_98 == 0) {
LAB_140b71acc:
          if (local_a0 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_a0 != (undefined8 *)0x0) {
          (**(code **)*local_a0)();
          FUN_1446efa72(&local_a0,0,0,0x10);
          local_98 = 0;
          goto LAB_140b71acc;
        }
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          piVar3 = (int *)((longlong)plVar18 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
        plVar18 = local_a8;
        uVar25 = uVar25 + 1;
      } while (uVar25 != 4);
      if (*(int *)(param_1 + 0xbc) == 0) {
        iVar29 = *(int *)(param_1 + 0x90);
        *(int *)(param_1 + 0x90) = iVar29 + 1;
        if (*(int *)(param_1 + 0x94) == iVar29) {
          FUN_140044672(local_a8,iVar29);
        }
        iVar23 = *(int *)(param_1 + 0xb0);
        if (iVar23 == 0) {
          iVar16 = -1;
        }
        else {
          iVar16 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar16 = iVar23 + -1;
          }
          iVar16 = iVar16 >> 5;
        }
        lVar22 = param_1 + 0x98;
        iVar21 = iVar23 + 1;
        iVar27 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar27 = iVar23;
        }
        if (iVar27 >> 5 == iVar16) {
          *(int *)(param_1 + 0xb0) = iVar21;
        }
        else {
          if (*(int *)(param_1 + 0xb4) <= iVar23) {
            if (iVar23 + 0x20U < 0xa0) {
              iVar21 = 0x80;
              iVar16 = iVar23;
            }
            else {
              uVar26 = iVar23 + 0x20U >> 5;
              if (*(int *)(param_1 + 0xb4) + 0x1fU < 0xa0) {
                uVar17 = 4;
                if (4 < uVar26) {
                  uVar17 = uVar26;
                }
              }
              else {
                uVar17 = (uVar26 * 3 >> 3) + uVar26 + 0x10;
              }
              uVar25 = FUN_144a3809e(uVar17 << 2,0);
              iVar16 = (int)(uVar25 >> 2);
              iVar21 = -0x20;
              if ((int)uVar26 <= iVar16) {
                iVar21 = iVar16 << 5;
              }
              iVar16 = *(int *)(param_1 + 0xb0);
            }
            *(int *)(param_1 + 0xb4) = iVar21;
            FUN_1446efbd8(lVar22,iVar16);
            iVar21 = *(int *)(param_1 + 0xb0) + 1;
          }
          iVar16 = iVar21 + 0x1f;
          if (-1 < iVar21) {
            iVar16 = iVar21;
          }
          *(int *)(param_1 + 0xb0) = iVar21;
          if (iVar21 % 0x20 != 0) {
            lVar24 = *(longlong *)(param_1 + 0xa8);
            if (*(longlong *)(param_1 + 0xa8) == 0) {
              lVar24 = lVar22;
            }
            bVar19 = -(char)(iVar21 % 0x20);
            *(uint *)(lVar24 + (longlong)(iVar16 >> 5) * 4) =
                 (uint)(*(int *)(lVar24 + (longlong)(iVar16 >> 5) * 4) << (bVar19 & 0x1f)) >>
                 (bVar19 & 0x1f);
          }
        }
        lVar24 = (longlong)iVar29;
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          lVar22 = *(longlong *)(param_1 + 0xa8);
        }
        bVar19 = (byte)iVar23 & 0x1f;
        puVar1 = (uint *)(lVar22 + (longlong)(iVar27 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
      }
      else {
        iVar29 = *(int *)(param_1 + 0xb8);
        lVar24 = (longlong)iVar29;
        iVar23 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar24 * 0x30);
        *(int *)(param_1 + 0xb8) = iVar23;
        iVar16 = *(int *)(param_1 + 0xbc) + -1;
        *(int *)(param_1 + 0xbc) = iVar16;
        if (iVar16 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar23 * 0x30) = 0xffffffff;
        }
      }
      lVar22 = param_1 + 0x98;
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        lVar22 = *(longlong *)(param_1 + 0xa8);
      }
      iVar23 = iVar29 + 0x1f;
      if (-1 < iVar29) {
        iVar23 = iVar29;
      }
      puVar1 = (uint *)(lVar22 + (longlong)(iVar23 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar29 & 0x1f);
      iVar23 = 1;
      lVar22 = *(longlong *)(param_1 + 0x88);
      lVar24 = lVar24 * 0x30;
      puVar2 = (undefined4 *)(lVar22 + lVar24);
      *(undefined ***)(lVar22 + lVar24) = local_70;
      puVar5 = (undefined4 *)(lVar22 + 8 + lVar24);
      *puVar5 = (undefined4)local_68;
      puVar5[1] = local_68._4_4_;
      puVar5[2] = (undefined4)uStack_60;
      puVar5[3] = uStack_60._4_4_;
      puVar5 = (undefined4 *)(lVar22 + 0x18 + lVar24);
      *puVar5 = (undefined4)local_58;
      puVar5[1] = local_58._4_4_;
      puVar5[2] = (undefined4)uStack_50;
      puVar5[3] = uStack_50._4_4_;
      *(undefined4 *)(lVar22 + 0x28 + lVar24) = 0xffffffff;
      uVar26 = (uint)((ulonglong)local_70 >> 0x10);
      uVar17 = (uint)local_70 & 0xffff;
      uVar26 = ((uint)local_70 << 0x10 | uVar17) + (int)((ulonglong)local_70 >> 0x20) +
               (uVar26 << 0x13 | uVar26 & 0xffff) + (uVar17 >> 4);
      uVar17 = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0xbc);
      if (1 < uVar17) {
        lVar24 = param_1 + 0xc0;
        if (*(longlong *)(param_1 + 200) != 0) {
          lVar24 = *(longlong *)(param_1 + 200);
        }
        iVar16 = *(int *)(lVar24 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & uVar26) * 4);
        if (iVar16 != -1) {
          do {
            puVar5 = (undefined4 *)(*plVar18 + (longlong)iVar16 * 0x30);
            if (*(undefined ***)(*plVar18 + (longlong)iVar16 * 0x30) == local_70) {
              uVar7 = *puVar2;
              uVar8 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              uVar11 = puVar2[4];
              uVar12 = puVar2[5];
              uVar13 = puVar2[6];
              uVar14 = puVar2[7];
              *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar2 + 8);
              puVar5[4] = uVar11;
              puVar5[5] = uVar12;
              puVar5[6] = uVar13;
              puVar5[7] = uVar14;
              *puVar5 = uVar7;
              puVar5[1] = uVar8;
              puVar5[2] = uVar9;
              puVar5[3] = uVar10;
              FUN_148a9c29e(plVar18,iVar29);
              goto LAB_140b71d4e;
            }
            iVar16 = puVar5[10];
          } while (iVar16 != -1);
        }
      }
      if (3 < uVar17) {
        uVar25 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
        lVar24 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar23 = 1 << ((byte)lVar24 & 0x1f);
      }
      if (((int)uVar17 < 1) || (iVar23 <= *(int *)(param_1 + 0xd0))) {
        uVar26 = *(int *)(param_1 + 0xd0) - 1U & uVar26;
        puVar2[0xb] = uVar26;
        lVar24 = *(longlong *)(param_1 + 200);
        if (*(longlong *)(param_1 + 200) == 0) {
          lVar24 = param_1 + 0xc0;
        }
        puVar2[10] = *(undefined4 *)
                      (lVar24 + ((longlong)*(int *)(param_1 + 0xd0) - 1U & (longlong)(int)uVar26) *
                                4);
        lVar24 = *(longlong *)(param_1 + 200);
        if (*(longlong *)(param_1 + 200) == 0) {
          lVar24 = param_1 + 0xc0;
        }
        *(int *)(lVar24 + ((longlong)*(int *)(param_1 + 0xd0) - 1U & (longlong)(int)uVar26) * 4) =
             iVar29;
      }
      else {
        *(int *)(param_1 + 0xd0) = iVar23;
        FUN_14577831e(plVar18);
      }
    }
  }
LAB_140b71d4e:
  plVar18 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar28 = plStack_80 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar18 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
LAB_140b71d62:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b72136 FUN_140b72136 body=164 status=ok
// SIG undefined FUN_140b72136(void)

int FUN_140b72136(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 5;
    iVar4 = 0;
    do {
      cVar3 = FUN_140ba41f1(lVar5,param_2);
      if (cVar3 != '\0') {
        if (iVar4 != 1) {
          return -iVar4;
        }
        break;
      }
      lVar5 = lVar5 + 0x20;
      iVar4 = iVar4 + -1;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_140b721da(param_1,iVar4);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x20);
  *puVar1 = &PTR_FUN_14a184370;
  bVar2 = *(byte *)(param_2 + 0x18);
  *(byte *)(puVar1 + 3) = bVar2;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar2])(puVar1 + 1,param_2 + 8);
  return iVar4;
}



// FUNCTION 140b721da FUN_140b721da body=255 status=ok
// SIG undefined FUN_140b721da(void)

void FUN_140b721da(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b722da FUN_140b722da body=269 status=ok
// SIG undefined FUN_140b722da(void)

void FUN_140b722da(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140b723e8 FUN_140b723e8 body=543 status=ok
// SIG undefined FUN_140b723e8(void)

undefined8 * FUN_140b723e8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b6c84e(param_1,&local_50);
  bVar9 = true;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 8))(local_50,&local_60);
    plVar4 = local_58;
    if (local_58 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      local_38 = local_58;
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    uVar6 = (**(code **)(*local_60 + 0x40))();
    iVar7 = FUN_140b72608((longlong *)(param_1 + 0x560),uVar6,local_40);
    plVar2 = local_38;
    if (iVar7 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x560);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_58 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar3 = (int *)((longlong)local_58 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
    if (lVar8 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x10);
      plVar4 = *(longlong **)(lVar8 + 0x10);
      if (plVar4 == (longlong *)0x0) {
LAB_140b7254d:
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_140b7254d;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar9 = iVar7 == iVar5;
          if (bVar9) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar9);
        *param_2 = *(undefined8 *)(lVar8 + 8);
        param_2[1] = plVar4;
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      bVar9 = false;
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)local_48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (bVar9) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b72608 FUN_140b72608 body=181 status=ok
// SIG undefined FUN_140b72608(void)

int FUN_140b72608(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 140b726be FUN_140b726be body=2739 status=ok
// SIG undefined FUN_140b726be(void)

ulonglong FUN_140b726be(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b73172(&local_58);
  if ((wchar_t **)(param_2 + 8) == &local_58) {
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(wchar_t **)(param_2 + 8) = local_58;
    local_58 = (wchar_t *)0x0;
    *(int *)(param_2 + 0x10) = (int)uStack_50;
    *(undefined4 *)(param_2 + 0x14) = uStack_50._4_4_;
  }
  plVar5 = (longlong *)(param_1 + 0x18);
  iVar2 = DAT_14cb8e478 + -1;
  if (DAT_14cb8e478 == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  iVar2 = FUN_140dfa800(plVar5);
  uVar10 = 0;
  if ((iVar2 != -1) && ((longlong)iVar2 * 0x38 + *plVar5 != 0)) {
    FUN_140056680(&local_58);
    uVar10 = 0;
    iVar2 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      pwVar1 = local_58;
      if ((int)uStack_50 == 0) {
        pwVar1 = L"";
      }
      lVar7 = 0;
      uVar10 = 0;
      do {
        uVar3 = ((uint)(0x19 < (ushort)pwVar1[lVar7] - 0x61) * 0x20 + (uint)(ushort)pwVar1[lVar7]) -
                0x20;
        uVar8 = (uint)(uVar10 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar3) & 0xff) * 4);
        uVar10 = (ulonglong)
                 (uVar8 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar3 >> 8 & 0xff) * 4));
        lVar7 = lVar7 + 1;
      } while (iVar2 != (int)lVar7);
    }
    iVar2 = FUN_140dfa800(plVar5,uVar10,&local_58);
    lVar7 = 0;
    if (iVar2 != -1) {
      lVar7 = (longlong)iVar2 * 0x38 + *plVar5;
    }
    pcVar4 = (char *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      pcVar4 = (char *)0x0;
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = 0;
    if (pcVar4 != (char *)0x0) {
      FUN_140056680(&local_58);
      iVar2 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar2 = 0;
      }
      if (0 < iVar2) {
        pwVar1 = local_58;
        if ((int)uStack_50 == 0) {
          pwVar1 = L"";
        }
        lVar7 = 0;
        uVar10 = 0;
        do {
          uVar3 = ((uint)(0x19 < (ushort)pwVar1[lVar7] - 0x61) * 0x20 + (uint)(ushort)pwVar1[lVar7])
                  - 0x20;
          uVar8 = (uint)(uVar10 >> 8) ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar3) & 0xff) * 4);
          uVar10 = (ulonglong)
                   (uVar8 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar3 >> 8 & 0xff) * 4));
          lVar7 = lVar7 + 1;
        } while (iVar2 != (int)lVar7);
      }
      iVar2 = FUN_140dfa800(plVar5,uVar10,&local_58);
      lVar7 = 0;
      if (iVar2 != -1) {
        lVar7 = (longlong)iVar2 * 0x38 + *plVar5;
      }
      pcVar11 = (char *)(lVar7 + 0x10);
      if (lVar7 == 0) {
        pcVar11 = (char *)0x0;
      }
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      uVar10 = 0;
      if (pcVar11 != (char *)0x0) {
        FUN_140056680(&local_58);
        iVar2 = (int)uStack_50 + -1;
        if ((int)uStack_50 == 0) {
          iVar2 = 0;
        }
        if (0 < iVar2) {
          iVar6 = 0;
          do {
            iVar6 = iVar6 + 1;
          } while (iVar2 != iVar6);
        }
        iVar2 = FUN_140dfa800(plVar5);
        lVar7 = 0;
        if (iVar2 != -1) {
          lVar7 = (longlong)iVar2 * 0x38 + *plVar5;
        }
        lVar9 = lVar7 + 0x10;
        if (lVar7 == 0) {
          lVar9 = 0;
        }
        if (local_58 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        iVar2 = 0;
        uVar10 = 0;
        if (lVar9 != 0) {
          if (*pcVar4 == '\x01') {
            iVar2 = *(int *)(pcVar4 + 8);
          }
          else if (*pcVar4 == '\x06') {
            local_58 = (wchar_t *)0x0;
            uStack_50 = 0;
            FUN_140b74118(pcVar4,&local_58);
            pwVar1 = local_58;
            if ((int)uStack_50 == 0) {
              pwVar1 = L"";
            }
            iVar2 = _wtoi(pwVar1);
            if (local_58 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          *(int *)(param_2 + 0x18) = iVar2;
          if (*pcVar11 == '\x01') {
            iVar2 = *(int *)(pcVar11 + 8);
          }
          else if (*pcVar11 == '\x06') {
            local_58 = (wchar_t *)0x0;
            uStack_50 = 0;
            FUN_140b74118(pcVar11,&local_58);
            pwVar1 = local_58;
            if ((int)uStack_50 == 0) {
              pwVar1 = L"";
            }
            iVar2 = _wtoi(pwVar1);
            if (local_58 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            iVar2 = 0;
          }
          *(int *)(param_2 + 0x1c) = iVar2;
          FUN_140b74056(lVar9,&local_58);
          if ((wchar_t **)(param_2 + 0x50) == &local_58) {
            if (local_58 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(param_2 + 0x50) != 0) {
              FUN_1400020a8();
            }
            *(wchar_t **)(param_2 + 0x50) = local_58;
            local_58 = (wchar_t *)0x0;
            *(int *)(param_2 + 0x58) = (int)uStack_50;
            *(undefined4 *)(param_2 + 0x5c) = uStack_50._4_4_;
          }
          FUN_140056680(&local_58);
          iVar2 = (int)uStack_50 + -1;
          if ((int)uStack_50 == 0) {
            iVar2 = 0;
          }
          if (0 < iVar2) {
            iVar6 = 0;
            do {
              iVar6 = iVar6 + 1;
            } while (iVar2 != iVar6);
          }
          iVar2 = FUN_140dfa800(plVar5);
          lVar7 = 0;
          if (iVar2 != -1) {
            lVar7 = (longlong)iVar2 * 0x38 + *plVar5;
          }
          lVar9 = lVar7 + 0x10;
          if (lVar7 == 0) {
            lVar9 = 0;
          }
          if (local_58 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (lVar9 == 0) {
            if (*(longlong *)(param_2 + 0x20) != 0) {
              FUN_1400020a8();
            }
            *(undefined8 *)(param_2 + 0x20) = 0;
            *(undefined8 *)(param_2 + 0x28) = 0;
          }
          else {
            FUN_140b74056(lVar9,&local_58);
            if ((wchar_t **)(param_2 + 0x20) == &local_58) {
              if (local_58 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(param_2 + 0x20) != 0) {
                FUN_1400020a8();
              }
              *(wchar_t **)(param_2 + 0x20) = local_58;
              local_58 = (wchar_t *)0x0;
              *(int *)(param_2 + 0x28) = (int)uStack_50;
              *(undefined4 *)(param_2 + 0x2c) = uStack_50._4_4_;
            }
          }
          FUN_140056680(&local_58);
          iVar2 = (int)uStack_50 + -1;
          if ((int)uStack_50 == 0) {
            iVar2 = 0;
          }
          if (0 < iVar2) {
            iVar6 = 0;
            do {
              iVar6 = iVar6 + 1;
            } while (iVar2 != iVar6);
          }
          iVar2 = FUN_140dfa800(plVar5);
          lVar7 = 0;
          if (iVar2 != -1) {
            lVar7 = (longlong)iVar2 * 0x38 + *plVar5;
          }
          pcVar4 = (char *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            pcVar4 = (char *)0x0;
          }
          if (local_58 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          iVar2 = 0;
          if (pcVar4 != (char *)0x0) {
            if (*pcVar4 == '\x01') {
              iVar2 = *(int *)(pcVar4 + 8);
            }
            else {
              iVar2 = 0;
              if (*pcVar4 == '\x06') {
                local_58 = (wchar_t *)0x0;
                uStack_50 = 0;
                FUN_140b74118(pcVar4,&local_58);
                pwVar1 = local_58;
                if ((int)uStack_50 == 0) {
                  pwVar1 = L"";
                }
                iVar2 = _wtoi(pwVar1);
                if (local_58 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
          }
          *(int *)(param_2 + 0x30) = iVar2;
          FUN_140056680(&local_58);
          iVar2 = (int)uStack_50 + -1;
          if ((int)uStack_50 == 0) {
            iVar2 = 0;
          }
          if (0 < iVar2) {
            iVar6 = 0;
            do {
              iVar6 = iVar6 + 1;
            } while (iVar2 != iVar6);
          }
          iVar2 = FUN_140dfa800(plVar5);
          lVar7 = 0;
          if (iVar2 != -1) {
            lVar7 = (longlong)iVar2 * 0x38 + *plVar5;
          }
          lVar9 = lVar7 + 0x10;
          if (lVar7 == 0) {
            lVar9 = 0;
          }
          if (local_58 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (lVar9 == 0) {
            if (*(longlong *)(param_2 + 0x38) != 0) {
              FUN_1400020a8();
            }
            *(undefined8 *)(param_2 + 0x38) = 0;
            *(undefined8 *)(param_2 + 0x40) = 0;
          }
          else {
            FUN_140b74056(lVar9,&local_58);
            if ((wchar_t **)(param_2 + 0x38) == &local_58) {
              if (local_58 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(param_2 + 0x38) != 0) {
                FUN_1400020a8();
              }
              *(wchar_t **)(param_2 + 0x38) = local_58;
              local_58 = (wchar_t *)0x0;
              *(int *)(param_2 + 0x40) = (int)uStack_50;
              *(undefined4 *)(param_2 + 0x44) = uStack_50._4_4_;
            }
          }
          FUN_140056680(&local_58);
          uVar10 = 0;
          iVar2 = (int)uStack_50 + -1;
          if ((int)uStack_50 == 0) {
            iVar2 = 0;
          }
          if (0 < iVar2) {
            pwVar1 = local_58;
            if ((int)uStack_50 == 0) {
              pwVar1 = L"";
            }
            lVar7 = 0;
            uVar10 = 0;
            do {
              lVar9 = 0;
              uVar3 = ((uint)(0x19 < (ushort)pwVar1[lVar7] - 0x61) * 0x20 +
                      (uint)(ushort)pwVar1[lVar7]) - 0x20;
              uVar8 = (uint)(uVar10 >> 8) ^
                      *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar3) & 0xff) * 4);
              uVar10 = (ulonglong)
                       (uVar8 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar3 >> 8 & 0xff) * 4)
                       );
              lVar7 = lVar7 + 1;
            } while (iVar2 != (int)lVar7);
          }
          iVar2 = FUN_140dfa800(plVar5,uVar10,&local_58);
          lVar7 = 0;
          if (iVar2 != -1) {
            lVar7 = (longlong)iVar2 * 0x38 + *plVar5;
          }
          pcVar4 = (char *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            pcVar4 = (char *)0x0;
          }
          if (local_58 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (pcVar4 == (char *)0x0) {
            iVar2 = -1;
          }
          else if (*pcVar4 == '\x01') {
            iVar2 = *(int *)(pcVar4 + 8);
          }
          else if (*pcVar4 == '\x06') {
            local_58 = (wchar_t *)0x0;
            uStack_50 = 0;
            FUN_140b74118(pcVar4,&local_58);
            pwVar1 = local_58;
            if ((int)uStack_50 == 0) {
              pwVar1 = L"";
            }
            iVar2 = _wtoi(pwVar1);
            if (local_58 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            iVar2 = 0;
          }
          *(int *)(param_2 + 0x48) = iVar2;
          uVar10 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b73172 FUN_140b73172 body=3810 status=ok
// SIG undefined FUN_140b73172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

wchar_t * FUN_140b73172(wchar_t *param_1,longlong param_2,char param_3)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  void *pvVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [16];
  undefined2 *local_e0;
  int local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  wchar_t **local_b0;
  ulonglong *local_a8;
  undefined1 local_9c [4];
  longlong *local_98;
  ulonglong uStack_90;
  wchar_t **local_88;
  ulonglong *local_80;
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  longlong **local_60;
  longlong *local_58;
  wchar_t **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  param_1[6] = L'\0';
  param_1[7] = L'\0';
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbcebd0) && (FUN_144b3d300(&DAT_14cbcebd0), DAT_14cbcebd0 == -1)) {
    local_68 = L"PresenceKey_InMenus";
    local_60._0_4_ = 0x13;
    FUN_1446e940c(&local_c0,&local_68);
    local_68 = L"OakPresence";
    local_60 = (longlong **)CONCAT44(local_60._4_4_,0xb);
    FUN_1446e940c(&local_d0,&local_68);
    FUN_140208bae(&local_98,&local_d0,&local_c0,L"In Menus");
    local_68 = (wchar_t *)&DAT_14cbceb40;
    local_78 = L"PresenceKey_InGameplay_Full";
    local_70 = 0x1b;
    local_60 = &local_98;
    FUN_1446e940c(&local_e0,&local_78);
    local_78 = L"OakPresence";
    local_70 = 0xb;
    FUN_1446e940c(local_9c,&local_78);
    FUN_140208bae(&local_78,local_9c,&local_e0,L"Level {PlayerLevel} {CharacterName} in {ZoneName}")
    ;
    local_58 = &DAT_14cbceb50;
    local_80 = &local_48;
    local_88 = &local_68;
    local_50 = &local_78;
    FUN_1457788a2(&DAT_14cbceb80);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    atexit(FUN_1441de7cf);
    _Init_thread_footer(&DAT_14cbcebd0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbcec28) && (FUN_144b3d300(&DAT_14cbcec28), DAT_14cbcec28 == -1)) {
    local_68 = L"GameTypeKey_Oak2";
    local_60._0_4_ = 0x10;
    FUN_1446e940c(&local_c0,&local_68);
    local_68 = L"OakPresence";
    local_60 = (longlong **)CONCAT44(local_60._4_4_,0xb);
    FUN_1446e940c(&local_d0,&local_68);
    FUN_140208bae(&local_98,&local_d0,&local_c0,L"Kitten");
    local_68 = (wchar_t *)&DAT_14cbceb60;
    local_78 = L"GameTypeKey_Ozone";
    local_70 = 0x11;
    local_60 = &local_98;
    FUN_1446e940c(&local_e0,&local_78);
    local_78 = L"OakPresence";
    local_70 = 0xb;
    FUN_1446e940c(local_9c,&local_78);
    FUN_140208bae(&local_78,local_9c,&local_e0,L"Ozone");
    local_58 = &DAT_14cbceb70;
    local_a8 = &local_48;
    local_b0 = &local_68;
    local_50 = &local_78;
    FUN_1457788a2(&DAT_14cbcebd8);
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    atexit(FUN_1441de7fe);
    _Init_thread_footer(&DAT_14cbcec28);
  }
  plVar12 = (longlong *)(param_2 + 0x18);
  uVar10 = 0;
  iVar8 = DAT_14cb8e478 + -1;
  if (DAT_14cb8e478 == 0) {
    iVar8 = 0;
  }
  if (0 < iVar8) {
    puVar5 = DAT_14cb8e470;
    if (DAT_14cb8e478 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    lVar13 = 0;
    uVar10 = 0;
    do {
      uVar11 = ((uint)(0x19 < (ushort)puVar5[lVar13] - 0x61) * 0x20 + (uint)(ushort)puVar5[lVar13])
               - 0x20;
      uVar15 = (uint)(uVar10 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar11) & 0xff) * 4);
      uVar10 = (ulonglong)
               (uVar15 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
      lVar13 = lVar13 + 1;
    } while (iVar8 != (int)lVar13);
  }
  iVar8 = FUN_140dfa800(plVar12,uVar10,&DAT_14cb8e470);
  lVar13 = 0;
  if (iVar8 != -1) {
    lVar13 = (longlong)iVar8 * 0x38 + *plVar12;
  }
  if (lVar13 == 0) goto LAB_140b73806;
  lVar13 = lVar13 + 0x10;
  FUN_140b74056(lVar13);
  pwVar7 = local_68;
  iVar8 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iVar8 = 0;
  }
  if (0 < iVar8) {
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
    } while (iVar8 != iVar9);
  }
  iVar8 = FUN_140b74724(&DAT_14cbceb80);
  lVar14 = 0;
  if (iVar8 != -1) {
    lVar14 = (longlong)iVar8 * 0x28 + _DAT_14cbceb80;
  }
  plVar16 = (longlong *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    plVar16 = (longlong *)0x0;
  }
  if (pwVar7 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar7);
  }
  if (plVar16 == (longlong *)0x0) goto LAB_140b73806;
  local_78 = (wchar_t *)*plVar16;
  if (local_78 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_78 + 8))();
  }
  local_70 = (undefined4)plVar16[1];
  FUN_140b74056(lVar13,&local_68);
  if ((int)local_60 == DAT_14cbceb48) {
    if ((int)local_60 < 2) {
      bVar18 = true;
    }
    else {
      lVar14 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)local_68 + lVar14);
        uVar11 = (uint)uVar1;
        uVar2 = *(ushort *)(DAT_14cbceb40 + lVar14);
        uVar15 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140b7388a;
          }
          iVar8 = uVar11 - uVar15;
          goto LAB_140b7394c;
        }
        if (uVar1 == 0) break;
LAB_140b7388a:
        lVar14 = lVar14 + 2;
      }
      iVar8 = 0;
LAB_140b7394c:
      bVar18 = iVar8 == 0;
    }
  }
  else {
    bVar18 = DAT_14cbceb48 + (int)local_60 == 1;
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (bVar18) {
    plVar12 = (longlong *)*plVar16;
    if (*(code **)(*plVar12 + 0x50) != FUN_144828418) {
      plVar12 = (longlong *)(**(code **)(*plVar12 + 0x50))();
    }
    FUN_1447a1fc0(plVar12);
    plVar16 = (longlong *)*plVar16;
    pcVar3 = *(code **)(*plVar16 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      pwVar7 = (wchar_t *)(plVar16 + 3);
      if (plVar16[5] != 0) {
        pwVar7 = (wchar_t *)(plVar16[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      pwVar7 = (wchar_t *)(plVar16 + 2);
    }
    else {
      pwVar7 = (wchar_t *)(*pcVar3)(plVar16);
    }
    if (pwVar7 != param_1) {
      iVar8 = *(int *)(pwVar7 + 4);
      pvVar4 = *(void **)pwVar7;
      *(int *)(param_1 + 4) = iVar8;
      if (iVar8 == 0 && *(int *)(param_1 + 6) == 0) {
        param_1[6] = L'\0';
        param_1[7] = L'\0';
      }
      else {
        FUN_1446dd670(param_1,iVar8);
        if (iVar8 != 0) {
          memcpy(*(void **)param_1,pvVar4,(longlong)iVar8 * 2);
        }
      }
    }
  }
  else {
    FUN_140b74056(lVar13,&local_68);
    if ((int)local_60 == DAT_14cbceb58) {
      if ((int)local_60 < 2) {
        bVar18 = true;
      }
      else {
        lVar13 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)local_68 + lVar13);
          uVar11 = (uint)uVar1;
          uVar2 = *(ushort *)(DAT_14cbceb50 + lVar13);
          uVar15 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140b73456;
            }
            iVar8 = uVar11 - uVar15;
            goto LAB_140b73481;
          }
          if (uVar1 == 0) break;
LAB_140b73456:
          lVar13 = lVar13 + 2;
        }
        iVar8 = 0;
LAB_140b73481:
        bVar18 = iVar8 == 0;
      }
    }
    else {
      bVar18 = DAT_14cbceb58 + (int)local_60 == 1;
    }
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (bVar18) {
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      if (param_3 == '\0') {
        FUN_140056680(&local_68);
        uVar10 = 0;
        iVar8 = (int)local_60 + -1;
        if ((int)local_60 == 0) {
          iVar8 = 0;
        }
        if (0 < iVar8) {
          pwVar7 = local_68;
          if ((int)local_60 == 0) {
            pwVar7 = L"";
          }
          lVar13 = 0;
          uVar10 = 0;
          do {
            uVar11 = ((uint)(0x19 < (ushort)pwVar7[lVar13] - 0x61) * 0x20 +
                     (uint)(ushort)pwVar7[lVar13]) - 0x20;
            uVar15 = (uint)(uVar10 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar11) & 0xff) * 4);
            uVar10 = (ulonglong)
                     (uVar15 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar11 >> 8 & 0xff) * 4)
                     );
            lVar13 = lVar13 + 1;
          } while (iVar8 != (int)lVar13);
        }
        iVar8 = FUN_140dfa800(plVar12,uVar10,&local_68);
        lVar13 = 0;
        if (iVar8 != -1) {
          lVar13 = (longlong)iVar8 * 0x38 + *plVar12;
        }
        lVar14 = lVar13 + 0x10;
        if (lVar13 == 0) {
          lVar14 = 0;
        }
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        FUN_140056680(&local_68);
        iVar8 = (int)local_60 + -1;
        if ((int)local_60 == 0) {
          iVar8 = 0;
        }
        if (0 < iVar8) {
          iVar9 = 0;
          do {
            iVar9 = iVar9 + 1;
          } while (iVar8 != iVar9);
        }
        iVar8 = FUN_140dfa800(plVar12);
        lVar13 = 0;
        if (iVar8 != -1) {
          lVar13 = (longlong)iVar8 * 0x38 + *plVar12;
        }
        lVar17 = lVar13 + 0x10;
        if (lVar13 == 0) {
          lVar17 = 0;
        }
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if ((lVar14 != 0) && (lVar17 != 0)) {
          FUN_140b74056(lVar14,&local_68);
          FUN_140233b1a(&local_c0,&local_68);
          if (local_68 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          FUN_140b74056(lVar17,&local_e0);
          puVar5 = local_e0;
          if (local_d8 == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          FUN_1446f470e(&local_d0,puVar5,1);
          FUN_140b6da64(&local_68,&local_d0);
          FUN_140233b1a(&local_d0,&local_68);
          if (local_68 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_e0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
          local_58 = local_c0;
          if (local_c0 != (longlong *)0x0) {
            (**(code **)(*local_c0 + 8))();
          }
          local_50 = (wchar_t **)CONCAT44(local_50._4_4_,local_b8);
          FUN_140056680(&local_e0,L"PlayerLevel");
          FUN_140233eec(&local_98,&local_e0,&local_68);
          if (local_e0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 0x10))();
          }
          local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
          local_58 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            (**(code **)(*local_d0 + 8))();
          }
          local_50 = (wchar_t **)CONCAT44(local_50._4_4_,local_c8);
          FUN_140056680(&local_e0,L"CharacterName");
          FUN_140233eec(&local_98,&local_e0);
          if (local_e0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 0x10))();
          }
          if (local_d0 != (longlong *)0x0) {
            (**(code **)(*local_d0 + 0x10))();
          }
          goto LAB_140b73540;
        }
      }
      else {
        local_68 = L"PresenceKey_InGameplay_Zone_Only";
        local_60._0_4_ = 0x20;
        FUN_1446e940c(&local_d0,&local_68);
        local_68 = L"OakPresence";
        local_60._0_4_ = 0xb;
        FUN_1446e940c(&local_e0,&local_68);
        local_68 = L"in {ZoneName}";
        local_60 = (longlong **)CONCAT44(local_60._4_4_,0xd);
        FUN_140208c1e(&local_c0,&local_e0,&local_d0,&local_68);
        FUN_140008f88(&local_78,&local_c0);
LAB_140b73540:
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x10))();
        }
      }
      FUN_140056680(&local_68);
      uVar10 = 0;
      iVar8 = (int)local_60 + -1;
      if ((int)local_60 == 0) {
        iVar8 = 0;
      }
      if (0 < iVar8) {
        pwVar7 = local_68;
        if ((int)local_60 == 0) {
          pwVar7 = L"";
        }
        lVar13 = 0;
        uVar10 = 0;
        do {
          uVar11 = ((uint)(0x19 < (ushort)pwVar7[lVar13] - 0x61) * 0x20 +
                   (uint)(ushort)pwVar7[lVar13]) - 0x20;
          uVar15 = (uint)(uVar10 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar11) & 0xff) * 4);
          uVar10 = (ulonglong)
                   (uVar15 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
          lVar13 = lVar13 + 1;
        } while (iVar8 != (int)lVar13);
      }
      iVar8 = FUN_140dfa800(plVar12,uVar10,&local_68);
      lVar13 = 0;
      if (iVar8 != -1) {
        lVar13 = (longlong)iVar8 * 0x38 + *plVar12;
      }
      lVar14 = lVar13 + 0x10;
      if (lVar13 == 0) {
        lVar14 = 0;
      }
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (lVar14 != 0) {
        FUN_140b74056(lVar14,&local_d0);
        FUN_140b7416e(&local_68,&local_d0);
        FUN_140233b1a(&local_c0,&local_68);
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_d0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
        local_58 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 8))();
        }
        local_50 = (wchar_t **)CONCAT44(local_50._4_4_,local_b8);
        FUN_140056680(&local_d0,L"ZoneName");
        FUN_140233eec(&local_98,&local_d0,&local_68);
        if (local_d0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x10))();
        }
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x10))();
        }
      }
      FUN_14023409e(local_f0,&local_78,1);
      FUN_140233c04(&local_68,local_f0,&local_98);
      pwVar7 = local_68;
      pwVar6 = local_68;
      if (*(code **)(*(longlong *)local_68 + 0x50) != FUN_144828418) {
        pwVar6 = (wchar_t *)(**(code **)(*(longlong *)local_68 + 0x50))(local_68);
      }
      FUN_1447a1fc0(pwVar6);
      pcVar3 = *(code **)(*(longlong *)pwVar7 + 0x28);
      if (pcVar3 == FUN_14482841c) {
        pwVar6 = (wchar_t *)(*(longlong *)(pwVar7 + 0x14) + 8);
        if (*(longlong *)(pwVar7 + 0x14) == 0) {
          pwVar6 = pwVar7 + 0xc;
        }
      }
      else if (pcVar3 == (code *)&LAB_14010c34c) {
        pwVar6 = pwVar7 + 8;
      }
      else {
        pwVar6 = (wchar_t *)(*pcVar3)(pwVar7);
      }
      if (pwVar6 != param_1) {
        iVar8 = *(int *)(pwVar6 + 4);
        pvVar4 = *(void **)pwVar6;
        *(int *)(param_1 + 4) = iVar8;
        if (iVar8 == 0 && *(int *)(param_1 + 6) == 0) {
          param_1[6] = L'\0';
          param_1[7] = L'\0';
        }
        else {
          FUN_1446dd670(param_1,iVar8);
          if (iVar8 != 0) {
            memcpy(*(void **)param_1,pvVar4,(longlong)iVar8 * 2);
          }
        }
      }
      if (pwVar7 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)pwVar7 + 0x10))(pwVar7);
      }
      FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_78 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_78 + 0x10))();
  }
LAB_140b73806:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b74056 FUN_140b74056 body=193 status=ok
// SIG undefined FUN_140b74056(void)

undefined8 * FUN_140b74056(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  double dVar4;
  
  if (*param_1 == '\x06') {
switchD_140b74092_caseD_a:
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140b74118(0,param_2);
    return param_2;
  }
  switch(*param_1) {
  case '\x01':
  case '\x02':
    uVar1 = *(undefined4 *)(param_1 + 8);
    pwVar3 = L"%d";
    break;
  case '\x03':
  case '\x04':
    pwVar3 = *(wchar_t **)(param_1 + 8);
    pwVar2 = L"%lld";
    goto LAB_140b7410a;
  case '\x05':
    dVar4 = *(double *)(param_1 + 8);
    goto LAB_140b740ca;
  default:
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  case '\a':
    dVar4 = (double)*(float *)(param_1 + 8);
LAB_140b740ca:
    FUN_140002266(param_2,&DAT_149e02016,dVar4);
    return param_2;
  case '\b':
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    pwVar3 = L"%d byte blob";
    break;
  case '\t':
    pwVar3 = L"false";
    if (param_1[8] != '\0') {
      pwVar3 = L"true";
    }
    pwVar2 = L"%s";
LAB_140b7410a:
    FUN_140002266(param_2,pwVar2,pwVar3);
    return param_2;
  case '\n':
    goto switchD_140b74092_caseD_a;
  }
  FUN_140002266(param_2,pwVar3,uVar1);
  return param_2;
}



// FUNCTION 140b74118 FUN_140b74118 body=85 status=ok
// SIG undefined FUN_140b74118(void)

void FUN_140b74118(char *param_1,undefined8 *param_2)

{
  if (((*param_1 == '\x06') || (*param_1 == '\n')) && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_14020fad6(param_2);
    return;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1446f8c06(param_2,0);
  }
  if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
    *(undefined2 *)*param_2 = 0;
  }
  return;
}



// FUNCTION 140b7416e FUN_140b7416e body=544 status=ok
// SIG undefined FUN_140b7416e(void)

longlong * FUN_140b7416e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  void *_Src;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_88 [40];
  longlong *local_60 [2];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(local_60,puVar8,1);
  FUN_1446dcdd4(local_50,local_60);
  if ((DAT_14cb8df08 == 0) ||
     (plVar4 = (longlong *)FUN_144837462(DAT_14cb8df08,local_50), plVar4 == (longlong *)0x0)) {
    lVar5 = FUN_14073fae1();
    lVar7 = *(longlong *)(lVar5 + 0x188);
    if (lVar7 == 0) {
      uVar6 = FUN_141030812();
      lVar7 = FUN_14477b664(uVar6);
      *(longlong *)(lVar5 + 0x188) = lVar7;
    }
    plVar4 = *(longlong **)(lVar5 + 400);
    if (plVar4 == (longlong *)0x0) {
      if ((lVar7 == 0) || (*(longlong *)(lVar5 + 0x180) == 0)) goto LAB_140b742d2;
      plVar4 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
        *(undefined8 *)(lVar5 + 400) = 0;
        goto LAB_140b742d2;
      }
      uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
      plVar4 = (longlong *)FUN_144aff482(uVar6,(longlong *)(lVar5 + 0x180));
      *(longlong **)(lVar5 + 400) = plVar4;
      if (plVar4 == (longlong *)0x0) goto LAB_140b742d2;
    }
  }
  (**(code **)(*plVar4 + 0x18))(plVar4,local_60);
  plVar4 = local_60[0];
  if (*(code **)(*local_60[0] + 0x50) != FUN_144828418) {
    plVar4 = (longlong *)(**(code **)(*local_60[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar4);
  pcVar2 = *(code **)(*local_60[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar4 = local_60[0] + 3;
    if (local_60[0][5] != 0) {
      plVar4 = (longlong *)(local_60[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar4 = local_60[0] + 2;
  }
  else {
    plVar4 = (longlong *)(*pcVar2)(local_60[0]);
  }
  if (plVar4 != param_1) {
    iVar1 = (int)plVar4[1];
    _Src = (void *)*plVar4;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
LAB_140b742d2:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b74390 FUN_140b74390 body=689 status=ok
// SIG undefined FUN_140b74390(void)

/* WARNING: Removing unreachable block (ram,0x000140b745e4) */
/* WARNING: Removing unreachable block (ram,0x000140b745ee) */
/* WARNING: Removing unreachable block (ram,0x000140b74600) */

undefined8 * FUN_140b74390(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined **_Src;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  undefined **local_50;
  int local_48;
  int iStack_44;
  longlong *local_40;
  byte local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb974b4) && (FUN_144b3d300(&DAT_14cb974b4), DAT_14cb974b4 == -1)) {
    DAT_14cb974a0 = (undefined **)0x0;
    DAT_14cb974a8 = 0;
    DAT_14cb974b0 = -1;
    atexit(FUN_143f37f9b);
    _Init_thread_footer(&DAT_14cb974b4);
  }
  if (DAT_14cb974b0 == -1) {
    lVar5 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if ((lVar5 == 0) || (plVar4 = (longlong *)FUN_14119d4d6(lVar5), plVar4 == (longlong *)0x0)) {
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar4 + 0x350))(plVar4,&local_50);
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      if ((&DAT_149fc1b6e)[local_38] == '\x01') {
        local_68 = CONCAT44(iStack_44,local_48);
        if (local_40 == (longlong *)0x0) {
          plStack_60 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
          plStack_60 = local_40;
        }
      }
      local_50 = &PTR_FUN_14a5af930;
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      local_50 = &PTR_FUN_14a184370;
      uVar7 = (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])();
      if (local_68 != 0) {
        FUN_140b7124e(uVar7,&local_50,&local_68);
        if (DAT_14cb974a0 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        DAT_14cb974a0 = local_50;
        DAT_14cb974a8 = local_48;
        DAT_14cb974b0 = iStack_44;
      }
    }
    plVar4 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    bVar6 = DAT_14cb974b0 != -1;
    *param_2 = 0;
    if (bVar6) goto LAB_140b743e1;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    *param_2 = 0;
LAB_140b743e1:
    iVar3 = DAT_14cb974a8;
    _Src = DAT_14cb974a0;
    lVar5 = (longlong)DAT_14cb974a8;
    *(int *)(param_2 + 1) = DAT_14cb974a8;
    if (lVar5 != 0) {
      FUN_1446dd670(param_2,iVar3,0);
      memcpy((void *)*param_2,_Src,lVar5 * 2);
      goto LAB_140b7441e;
    }
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
LAB_140b7441e:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b74642 FUN_140b74642 body=95 status=ok
// SIG undefined FUN_140b74642(void)

void FUN_140b74642(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(char *)(*param_1 + 0x1c8) == '\0') {
    lVar1 = *(longlong *)(param_1[2] + 0x10);
    if (*(int *)(param_1[1] + 8) == *(int *)(lVar1 + 0x78)) {
      if (*(int *)(lVar1 + 0x7c) != 0) {
        return;
      }
      iVar2 = 1;
    }
    else {
      iVar2 = *(int *)(lVar1 + 0x7c) + 1;
    }
    *(int *)(lVar1 + 0x78) = *(int *)(param_1[1] + 8);
  }
  else {
    lVar1 = *(longlong *)(param_1[2] + 0x10);
    if (*(int *)(lVar1 + 0x78) == 0) {
      if (*(int *)(lVar1 + 0x7c) != 0) {
        return;
      }
      iVar2 = 1;
    }
    else {
      iVar2 = *(int *)(lVar1 + 0x7c) + 1;
    }
    *(undefined4 *)(lVar1 + 0x78) = 0;
  }
  *(int *)(lVar1 + 0x7c) = iVar2;
  return;
}



// FUNCTION 140b746a2 FUN_140b746a2 body=129 status=ok
// SIG undefined FUN_140b746a2(void)

undefined8 FUN_140b746a2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_140b74724(), iVar9 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
    if ((longlong *)plVar1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[2] + 0x10))();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(plVar1 + 2) = param_3[4];
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
    *(undefined4 *)(plVar1 + 3) = uVar7;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_148daf69e(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 140b74724 FUN_140b74724 body=199 status=ok
// SIG undefined FUN_140b74724(void)

int FUN_140b74724(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_140b7476a:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140b747d7;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140b747d7;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140b74784;
    }
  }
  return -1;
LAB_140b747d7:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140b74784:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140b7476a;
}



// FUNCTION 140b747ec FUN_140b747ec body=489 status=ok
// SIG undefined FUN_140b747ec(void)

int * FUN_140b747ec(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140549c28(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 140b749d6 FUN_140b749d6 body=501 status=ok
// SIG undefined FUN_140b749d6(void)

void FUN_140b749d6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b74bcc FUN_140b74bcc body=713 status=ok
// SIG undefined FUN_140b74bcc(void)

void FUN_140b74bcc(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar16 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_7c = iVar11;
        local_70 = uVar10;
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar17 * 0x28);
        iVar11 = *(int *)(puVar2 + 1);
        iVar4 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar4 = 0;
        }
        uVar5 = 0;
        if (0 < iVar4) {
          puVar15 = &DAT_149dfb77a;
          if (iVar11 != 0) {
            puVar15 = (undefined2 *)*puVar2;
          }
          lVar12 = 0;
          uVar5 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar15[lVar12] +
                    (uint)(0x19 < (ushort)puVar15[lVar12] - 0x61) * 0x20) - 0x20;
            uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar6) & 0xff) * 4)
            ;
            uVar5 = uVar5 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
            lVar12 = lVar12 + 1;
          } while (iVar4 != (int)lVar12);
        }
        uVar10 = (longlong)(int)uVar5 & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar10;
        *(int *)((longlong)puVar2 + 0x24) = iVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar2 + 4) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar14 = uVar14 & ~(uint)uVar16;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar4 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar12 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar14;
        uVar10 = local_70;
        iVar11 = local_7c;
        local_78 = local_60;
        if (uVar5 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar17) {
            iVar9 = iVar17;
          }
          if (iVar8 <= iVar17) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar9 - lVar12 == lVar13) goto LAB_140b74e57;
          }
          uVar14 = 0xffffffff;
          uVar10 = (ulonglong)(iVar17 + (int)lVar13 + 1);
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar17 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar4);
    }
  }
LAB_140b74e57:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b74e96 FUN_140b74e96 body=33 status=ok
// SIG undefined FUN_140b74e96(void)

undefined8 FUN_140b74e96(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140b74eb8();
  FUN_140056680(param_1,uVar1);
  return param_1;
}



// FUNCTION 140b74eb8 FUN_140b74eb8 body=236 status=ok
// SIG undefined FUN_140b74eb8(void)

undefined2 * FUN_140b74eb8(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  int local_38;
  longlong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1401af92e();
  lVar1 = *(longlong *)(lVar1 + 0x68);
  if (*(uint *)(lVar1 + 0x60) < 2) {
    puVar2 = (undefined8 *)FUN_14047ac8c();
    local_38 = (*(int *)(puVar2 + 1) == 0) + 0x16;
    local_30 = 0;
    FUN_14125bce8(&local_30,*puVar2,*(int *)(puVar2 + 1),0);
    FUN_1401aebe8(&local_30,L"PersistentDownloadDir",0x15);
    if ((longlong *)(lVar1 + 0x58) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      local_28 = *(int *)(lVar1 + 0x60);
    }
    else {
      if (*(longlong *)(lVar1 + 0x58) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar1 + 0x58) = local_30;
      *(int *)(lVar1 + 0x60) = local_28;
      *(undefined4 *)(lVar1 + 100) = local_24;
    }
    if (local_28 == 0) {
      puVar3 = &DAT_149dfb77a;
      goto LAB_140b74eeb;
    }
  }
  puVar3 = *(undefined2 **)(lVar1 + 0x58);
LAB_140b74eeb:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b74fa6 FUN_140b74fa6 body=1949 status=ok
// SIG undefined FUN_140b74fa6(void)

void FUN_140b74fa6(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  wchar_t *pwVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  size_t sVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  longlong *plStack_80;
  wchar_t *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a0 = param_2;
  if ((param_2 != 0) && (param_4 != 0)) {
    bVar6 = *(byte *)(param_1 + 0x38);
    local_b0 = param_1;
    local_a8 = param_3;
    if (bVar6 == 0) {
      lVar15 = FUN_140f7e331();
      if (*(char *)(lVar15 + 0x32) == '\x01') {
        FUN_14111d472(lVar15,&local_78);
        local_b8 = (longlong *)(param_1 + 0x28);
        FUN_145875f03(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
        *(undefined4 *)(param_1 + 0x30) = 0;
        if (*(int *)(param_1 + 0x34) != 0) {
          FUN_148d9a130(local_b8);
        }
        if ((longlong)(int)plStack_70 != 0) {
          pwVar14 = local_78 + (longlong)(int)plStack_70 * 4;
          pwVar13 = local_78;
          local_90 = pwVar14;
          do {
            lVar15 = *(longlong *)pwVar13;
            if ((longlong)*(int *)(lVar15 + 0x150) != 0) {
              local_c0 = *(longlong *)(lVar15 + 0x148);
              lVar16 = (longlong)*(int *)(lVar15 + 0x150) * 0xb0;
              local_98 = lVar15;
              do {
                lVar15 = local_98;
                plVar9 = (longlong *)FUN_14001cc68(0x140,0x10);
                plVar9[1] = (longlong)&DAT_100000001;
                *plVar9 = (longlong)&PTR_FUN_14b988be0;
                pwVar1 = (wchar_t *)(plVar9 + 2);
                FUN_145779198(pwVar1);
                local_88 = pwVar1;
                plStack_80 = plVar9;
                FUN_14577937a(&local_88,pwVar1);
                plVar11 = plStack_80;
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                  UNLOCK();
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    plVar4 = plStack_80 + 1;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)*plVar4 == 0) {
                      (**(code **)*plStack_80)(plStack_80);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar11 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar11 + 0x10))(plVar11);
                      }
                    }
                  }
                }
                lVar10 = local_b0;
                FUN_14577941c(pwVar1,local_c0,lVar15,local_b0);
                iVar7 = *(int *)(lVar10 + 0x30);
                *(uint *)(lVar10 + 0x30) = iVar7 + 1U;
                if (*(uint *)(lVar10 + 0x34) < iVar7 + 1U) {
                  FUN_1457792f4(local_b8,iVar7);
                }
                lVar15 = *local_b8;
                *(wchar_t **)(lVar15 + (longlong)iVar7 * 0x10) = pwVar1;
                *(longlong **)(lVar15 + 8 + (longlong)iVar7 * 0x10) = plVar9;
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar11 = plVar9 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar9 + 0x10))(plVar9);
                    }
                  }
                }
                local_c0 = local_c0 + 0xb0;
                lVar16 = lVar16 + -0xb0;
                lVar15 = local_98;
              } while (lVar16 != 0);
            }
            if ((longlong)*(int *)(lVar15 + 0x178) != 0) {
              local_c0 = *(longlong *)(lVar15 + 0x170);
              lVar16 = (longlong)*(int *)(lVar15 + 0x178) * 0x48;
              do {
                plVar9 = (longlong *)FUN_14001cc68(0x160);
                plVar9[1] = (longlong)&DAT_100000001;
                *plVar9 = (longlong)&PTR_FUN_14b988c00;
                pwVar14 = (wchar_t *)(plVar9 + 2);
                memset(pwVar14,0,0x150);
                FUN_145779198(pwVar14);
                plVar9[2] = (longlong)&PTR_FUN_14b988c20;
                plVar9[0x28] = 0;
                plVar9[0x29] = 0;
                plVar9[0x2a] = 0;
                local_88 = pwVar14;
                plStack_80 = plVar9;
                FUN_145779252(&local_88,pwVar14);
                plVar11 = plStack_80;
                lVar10 = local_b0;
                if (plVar9 == (longlong *)0x0) {
                  FUN_140b75974(0x10,local_c0,lVar15,local_b0);
                }
                else {
                  LOCK();
                  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                  UNLOCK();
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    plVar4 = plStack_80 + 1;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)*plVar4 == 0) {
                      (**(code **)*plStack_80)(plStack_80);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar11 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar11 + 0x10))(plVar11);
                      }
                    }
                  }
                  lVar10 = local_b0;
                  FUN_140b75974(pwVar14,local_c0,lVar15,local_b0);
                  LOCK();
                  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                  UNLOCK();
                }
                iVar7 = *(int *)(lVar10 + 0x30);
                *(uint *)(lVar10 + 0x30) = iVar7 + 1U;
                if (*(uint *)(lVar10 + 0x34) < iVar7 + 1U) {
                  FUN_1457792f4(local_b8,iVar7);
                }
                lVar10 = *local_b8;
                *(wchar_t **)(lVar10 + (longlong)iVar7 * 0x10) = pwVar14;
                *(longlong **)(lVar10 + 8 + (longlong)iVar7 * 0x10) = plVar9;
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar11 = plVar9 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar9 + 0x10))(plVar9);
                    }
                  }
                }
                local_c0 = local_c0 + 0x48;
                lVar16 = lVar16 + -0x48;
                pwVar14 = local_90;
              } while (lVar16 != 0);
            }
            pwVar13 = pwVar13 + 4;
          } while (pwVar13 != pwVar14);
        }
        param_1 = local_b0;
        *(undefined1 *)(local_b0 + 0x38) = 1;
        param_3 = local_a8;
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8(local_78);
          param_3 = local_a8;
        }
      }
      bVar6 = *(byte *)(param_1 + 0x38);
    }
    if ((bVar6 & 1) != 0) {
      local_78 = (wchar_t *)0x0;
      plStack_70 = (longlong *)0x0;
      if (param_3 != 0) {
        local_88 = (wchar_t *)0x0;
        plStack_80 = (longlong *)0x0;
        FUN_1401031ac(param_3,0);
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_78 = local_88;
        plStack_70 = plStack_80;
      }
      if ((longlong)*(int *)(param_1 + 0x30) != 0) {
        plVar11 = *(longlong **)(param_1 + 0x28);
        plVar9 = plVar11 + (longlong)*(int *)(param_1 + 0x30) * 2;
        bVar17 = false;
        do {
          plVar4 = (longlong *)*plVar11;
          plVar5 = (longlong *)plVar11[1];
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          if (plVar4 != (longlong *)0x0) {
            if (plVar4[0x14] != param_4) {
              FUN_1400021e4(plVar4 + 0x14,&local_88);
              pwVar14 = local_88;
              if ((int)plStack_80 == 0) {
                pwVar14 = L"";
              }
              if (pwVar14 == (wchar_t *)0x0) {
                bVar18 = false;
              }
              else {
                sVar8 = wcslen(pwVar14);
                local_d0 = 0xffffffff;
                local_d8 = 0;
                iVar7 = FUN_1447ee042(&local_78,pwVar14,sVar8 & 0xffffffff,1);
                bVar18 = iVar7 != -1;
              }
              if (local_88 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              if (!bVar18) goto LAB_140b75115;
            }
            FUN_140b75744(plVar4);
            bVar17 = true;
            if (((char)plVar4[0x18] != '\x04') &&
               (((char)plVar4[0x25] != '\0' || (iVar7 = FUN_14490d72a(local_a0), iVar7 != 3)))) {
              uVar3 = *(uint *)(local_a0 + 0xc);
              *(uint *)(plVar4 + 0x1c) = uVar3;
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar15 = 0;
              }
              iVar7 = *(int *)(lVar15 + 0x10);
              if (*(int *)(lVar15 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar12 = DAT_14c964868 + 1;
                bVar18 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar18) {
                  local_c0 = CONCAT44(local_c0._4_4_,iVar12);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar12);
                  iVar12 = (int)local_c0;
                }
                LOCK();
                iVar7 = *(int *)(lVar15 + 0x10);
                bVar18 = iVar7 == 0;
                if (bVar18) {
                  *(int *)(lVar15 + 0x10) = iVar12;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar18) {
                  iVar7 = iVar12;
                }
              }
              *(int *)((longlong)plVar4 + 0xe4) = iVar7;
              if (local_a8 == 0) {
                *(undefined4 *)(plVar4 + 0x1d) = 0;
                iVar7 = 0;
              }
              else {
                uVar3 = *(uint *)(local_a8 + 0xc);
                *(uint *)(plVar4 + 0x1d) = uVar3;
                if ((int)uVar3 < DAT_14c9647dc) {
                  lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                }
                else {
                  lVar15 = 0;
                }
                iVar7 = *(int *)(lVar15 + 0x10);
                if (*(int *)(lVar15 + 0x10) == 0) {
                  LOCK();
                  iVar7 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar12 = DAT_14c964868 + 1;
                  bVar18 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar7;
                  if (bVar18) {
                    local_c0 = CONCAT44(local_c0._4_4_,iVar12);
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar12);
                    iVar12 = (int)local_c0;
                  }
                  LOCK();
                  iVar7 = *(int *)(lVar15 + 0x10);
                  bVar18 = iVar7 == 0;
                  if (bVar18) {
                    *(int *)(lVar15 + 0x10) = iVar12;
                    iVar7 = 0;
                  }
                  UNLOCK();
                  if (bVar18) {
                    iVar7 = iVar12;
                  }
                }
              }
              *(int *)((longlong)plVar4 + 0xec) = iVar7;
              if ((char)plVar4[0x18] == '\x03') {
                (**(code **)(*plVar4 + 8))(plVar4,0);
              }
              else if ((char)plVar4[0x18] == '\0') {
                FUN_1457797b4(plVar4);
              }
            }
          }
LAB_140b75115:
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar5 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          plVar11 = plVar11 + 2;
        } while (plVar11 != plVar9);
        if (bVar17) {
          FUN_140b758c4(local_b0);
        }
      }
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b75744 FUN_140b75744 body=234 status=ok
// SIG undefined FUN_140b75744(void)

void FUN_140b75744(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    if (*(int *)(param_1 + 0xdc) != 0) {
      puVar1 = (uint *)(param_1 + 0xd8);
      uVar2 = *puVar1;
      if (((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
           (plVar6 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0)) &&
          (((int)plVar6[2] == *(int *)(param_1 + 0xdc) &&
           ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) && (*plVar6 != 0)) {
        cVar3 = FUN_140b7582e(param_1);
        if (cVar3 != '\0') {
          return;
        }
        plVar6 = (longlong *)FUN_14479d2ce(puVar1);
        (**(code **)(*plVar6 + 0x5c8))(plVar6,0);
        puVar1[0] = 0;
        puVar1[1] = 0;
      }
    }
  }
  else if (*(char *)(param_1 + 0xc0) == '\x01') {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 200);
  if (((lVar5 == 0) || (*(char *)(lVar5 + 0x68) != '\x01')) ||
     ((*(char *)(lVar5 + 0x69) != '\x01' ||
      ((*(char *)(lVar5 + 0x6a) != '\x01' || (lVar5 = FUN_14479d2ce(param_1 + 0xe0), lVar5 == 0)))))
     ) {
    bVar4 = 0;
  }
  else {
    bVar4 = FUN_140b7582e(param_1);
    bVar4 = bVar4 | 2;
  }
  *(byte *)(param_1 + 0xc0) = bVar4;
  return;
}



// FUNCTION 140b7582e FUN_140b7582e body=149 status=ok
// SIG undefined FUN_140b7582e(void)

undefined8 FUN_140b7582e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  undefined8 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    local_20[0] = 0;
    local_1c = 0;
    local_14 = 0;
    uVar1 = FUN_14479d2ce(param_1 + 0xe0);
    lVar2 = FUN_140149a73(uVar1,0);
    if (lVar2 != 0) {
      FUN_14039fc7b(param_1 + 0xf0,local_20,lVar2,0);
    }
    uVar1 = FUN_1412b46ca(local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b758c4 FUN_140b758c4 body=175 status=ok
// SIG undefined FUN_140b758c4(void)

void FUN_140b758c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *(undefined1 *)(param_1 + 0x39) = 0;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x28);
    plVar5 = plVar6 + (longlong)*(int *)(param_1 + 0x30) * 2;
    do {
      lVar3 = *plVar6;
      plVar4 = (longlong *)plVar6[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xc0) | 2) == 3)) {
        *(undefined1 *)(param_1 + 0x39) = 1;
        if (plVar4 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 != 0) {
          return;
        }
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000140b75956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar5);
  }
  return;
}



// FUNCTION 140b75974 FUN_140b75974 body=1272 status=ok
// SIG undefined FUN_140b75974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b75974(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined1 local_120;
  undefined1 local_118;
  longlong local_110 [4];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar14 = *param_2;
  if (*(longlong *)(param_1 + 0x130) != lVar14) {
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  *(longlong *)(param_1 + 0x130) = lVar14;
  if (*(longlong *)(param_1 + 0x138) != param_2[1]) {
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  uVar12 = FUN_14477b664();
  lVar13 = FUN_14477b664(uVar12);
  *(longlong *)(param_1 + 0x138) = lVar13;
  lVar14 = param_2[2];
  *(longlong *)(param_1 + 0x140) = lVar14;
  if (lVar13 == 0) {
    uVar12 = FUN_14050b070();
    lVar13 = FUN_14477b664(uVar12);
    *(longlong *)(param_1 + 0x138) = lVar13;
    lVar14 = *(longlong *)(param_1 + 0x140);
  }
  if (lVar14 == 0) {
    *(undefined8 *)(param_1 + 0x140) = 0;
    if ((lVar13 == 0) || (*(longlong *)(param_1 + 0x130) == 0)) goto LAB_140b75a85;
    plVar2 = *(longlong **)(lVar13 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar11 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar11 == '\0')) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      goto LAB_140b75a85;
    }
    uVar12 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar14 = FUN_144aff482(uVar12,param_1 + 0x130);
    *(longlong *)(param_1 + 0x140) = lVar14;
    if (lVar14 == 0) goto LAB_140b75a85;
  }
  lVar13 = *(longlong *)(lVar14 + 0x1b0);
  if (lVar13 != 0) {
    local_1a8 = 0;
    local_1a0 = 0x4000;
    local_198 = 0;
    local_188 = 0.0;
    dStack_180 = 0.0;
    local_178 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0x3ff0000000000000;
    uStack_140 = 0x3ff0000000000000;
    local_138 = 0x3ff0000000000000;
    uStack_130 = 0;
    local_118 = 0;
    local_128 = 0;
    local_120 = 0;
    FUN_140056680(local_110,L"World_P");
    local_118 = 0;
    if (local_1a8 != param_2[3]) {
      local_198 = 0;
    }
    auVar1 = *(undefined1 (*) [16])(lVar14 + 0x80);
    auVar16 = divpd(auVar1,_DAT_1499387d0);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(double *)(lVar14 + 0x90);
    auVar17 = divpd(auVar17,_DAT_1499387d0);
    auVar16 = roundpd(auVar16,auVar16,3);
    auVar17 = roundpd(auVar17,auVar17,3);
    dVar9 = (auVar1._0_8_ - auVar16._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar10 = (auVar1._8_8_ - auVar16._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar7 = (*(double *)(lVar14 + 0x90) - auVar17._0_8_ * (double)DAT_1499387d0) *
            0.008726646259971648;
    dVar8 = (0.0 - auVar17._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    local_1a8 = param_2[3];
    dVar4 = sin(dVar9);
    dVar5 = sin(dVar10);
    dVar6 = sin(dVar7);
    sin(dVar8);
    dVar9 = cos(dVar9);
    dVar10 = cos(dVar10);
    dVar7 = cos(dVar7);
    cos(dVar8);
    dVar8 = dVar5 * dVar4 * dVar6 + dVar10 * dVar9 * dVar7;
    local_188 = dVar4 * dVar5 * dVar7 - dVar9 * dVar10 * dVar6;
    dStack_180 = -(dVar4 * dVar10 * dVar7) - dVar9 * dVar5 * dVar6;
    local_168 = *(undefined8 *)(lVar14 + 0x68);
    uStack_160 = *(undefined8 *)(lVar14 + 0x70);
    local_158 = *(undefined8 *)(lVar14 + 0x78);
    local_178._8_4_ = SUB84(dVar8,0);
    local_178._0_8_ = -(dVar10 * dVar4 * dVar6) + dVar5 * dVar9 * dVar7;
    local_178._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    uStack_150 = 0;
    local_148 = 0x3ff0000000000000;
    uStack_140 = 0x3ff0000000000000;
    local_138 = 0x3ff0000000000000;
    uStack_130 = 0;
    local_120 = 0;
    lVar14 = param_2[6];
    if (param_2[6] == 0) {
      puVar3 = *(undefined4 **)(lVar13 + 8);
      puVar15 = &DAT_14c9485f0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar15 = puVar3;
      }
      if (DAT_14c947fe0 == 0) {
        lVar14 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar14);
        DAT_14c947fe0 = lVar14;
      }
      FUN_140045924(DAT_14c947fe0,&local_1b0,puVar15,1);
      lVar14 = local_1b0;
    }
    local_128 = lVar14;
    FUN_14577941c(param_1,&local_1a8,param_3,param_4);
    if (local_110[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_140b75a85:
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b75e6e FUN_140b75e6e body=8 status=ok
// SIG undefined FUN_140b75e6e(void)

undefined8 FUN_140b75e6e(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



// FUNCTION 140b75e76 FUN_140b75e76 body=162 status=ok
// SIG undefined FUN_140b75e76(void)

void FUN_140b75e76(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140b75f03;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140b75f03:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140b75f18 FUN_140b75f18 body=12 status=ok
// SIG undefined FUN_140b75f18(void)

void FUN_140b75f18(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140b75f21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140b75f24 FUN_140b75f24 body=31 status=ok
// SIG undefined FUN_140b75f24(void)

undefined8 FUN_140b75f24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b75f44 FUN_140b75f44 body=163 status=ok
// SIG undefined FUN_140b75f44(void)

void FUN_140b75f44(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x68);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0x68) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
    FUN_140b760e0(param_1 + 0x60,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = param_2[1];
  local_28 = param_2[2];
  *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x18) = local_28;
  local_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_140b75fe8(param_1 + 0x30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b75fe8 FUN_140b75fe8 body=247 status=ok
// SIG undefined FUN_140b75fe8(void)

void FUN_140b75fe8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar7 = uVar5 * 0x10 + -8;
      uVar8 = uVar5;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0))) {
        local_50 = *param_2;
        local_48 = param_2[1];
        local_40 = param_2[2];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_50);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar8 < 2;
        uVar8 = uVar8 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_140b760d1;
          goto LAB_140b7601e;
        }
      }
      uVar5 = uVar8 - 1;
      bVar6 = true;
    } while (1 < uVar8);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140b760d1:
    FUN_14474d06a(param_1,0);
  }
LAB_140b7601e:
  *param_2 = 0;
  param_2[1] = 0xffffffffffffffff;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b760e0 FUN_140b760e0 body=373 status=ok
// SIG undefined FUN_140b760e0(void)

void FUN_140b760e0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b76169;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140b76169:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140b76256 FUN_140b76256 body=2612 status=ok
// SIG undefined FUN_140b76256(void)

undefined8 FUN_140b76256(longlong *param_1,double *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  double *pdVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_1b8 [40];
  longlong *local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double *local_c8;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_1[0x148] != 0) {
    if ((((param_1[0x175] != 0) || (param_1[0x176] != 0)) || ((double)param_1[0x178] != 0.0)) ||
       (((NAN((double)param_1[0x178]) || ((double)param_1[0x179] != 0.0)) ||
        ((NAN((double)param_1[0x179]) ||
         (((double)param_1[0x17a] != 0.0 || (NAN((double)param_1[0x17a]))))))))) {
      lVar6 = (**(code **)(*param_1 + 0x48))(param_1);
      if (*(char *)(lVar6 + 0xb4) != '\0') {
        if (((char)param_1[-0x4b] == '\x03') &&
           (plVar8 = (longlong *)param_1[0x175], plVar8 != (longlong *)0x0)) {
          uVar7 = FUN_14069ce7c();
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar7);
          if (plVar8 != (longlong *)0x0) {
            uVar7 = FUN_14069ce7c();
            plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
            if (((((plVar8 != plVar9) && (plVar9 != (longlong *)0x0)) &&
                 (puVar10 = (uint *)(**(code **)(*plVar9 + 0x10))(plVar9), puVar10 != (uint *)0x0))
                && (((puVar10[1] != 0 && (uVar1 = *puVar10, -1 < (int)uVar1)) &&
                    (((int)uVar1 < DAT_14c9647dc &&
                     ((plVar8 = (longlong *)
                                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                      plVar8 != (longlong *)0x0 && (*(uint *)(plVar8 + 2) == puVar10[1])))))))) &&
               (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
                (plVar9 = (longlong *)*plVar8, plVar9 != (longlong *)0x0)))) {
              plVar15 = (longlong *)0x0;
              if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
                plVar15 = plVar9;
              }
              plVar2 = (longlong *)param_1[-0x44];
              if (plVar15 != plVar2) {
                plVar15 = (longlong *)0x0;
                if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
                  plVar15 = plVar9;
                }
                if (plVar15 != (longlong *)param_1[-0x4d]) {
                  if (plVar2 == (longlong *)0x0) goto LAB_140b76579;
                  pcVar3 = *(code **)(*plVar2 + 0x5e8);
                  if (pcVar3 == FUN_140972dde) {
                    lVar12 = plVar2[0x76];
                    if (lVar12 != 0) goto LAB_140b76901;
                    pcVar3 = *(code **)(*plVar2 + 0x5f8);
                    if (pcVar3 == FUN_144784df4) {
                      if (*(code **)(plVar2[0x784] + 0x18) != (code *)&LAB_144904684) {
                        lVar12 = (**(code **)(plVar2[0x784] + 0x18))(plVar2 + 0x784);
LAB_140b768db:
                        if (lVar12 != 0) {
                          lVar12 = *(longlong *)(lVar12 + 0x20);
                          goto LAB_140b768e8;
                        }
                        goto LAB_140b76579;
                      }
                      if (*(int *)((longlong)plVar2 + 0x75b4) == 0) goto LAB_140b76579;
                      uVar1 = *(uint *)(plVar2 + 0xeb6);
                      bVar17 = false;
                      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                        plVar8 = (longlong *)
                                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                        if ((plVar8 != (longlong *)0x0) &&
                           (((int)plVar8[2] == *(int *)((longlong)plVar2 + 0x75b4) &&
                            ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
                          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
                            lVar12 = *plVar8;
                          }
                          else {
                            lVar12 = 0;
                          }
                          lVar12 = lVar12 + 0x110;
                          goto LAB_140b768db;
                        }
                        goto LAB_140b76579;
                      }
                    }
                    else {
                      lVar12 = (*pcVar3)();
LAB_140b768e8:
                      if (lVar12 != 0) {
                        lVar12 = *(longlong *)(lVar12 + 0x3b0);
                        goto LAB_140b768f8;
                      }
LAB_140b76579:
                      bVar17 = false;
                    }
                  }
                  else {
                    lVar12 = (*pcVar3)();
LAB_140b768f8:
                    if (lVar12 == 0) goto LAB_140b76579;
LAB_140b76901:
                    bVar17 = (*(byte *)(lVar12 + 0x39a) & 8) == 0;
                  }
                  if ((char)puVar10[6] == '\x01') {
                    if (((char)puVar10[0x10] != '\0') || (!bVar17)) goto LAB_140b76a0f;
                  }
                  else if (bVar17) {
                    if ((puVar10[0x10] & 1) != 0) goto LAB_140b76a0f;
                  }
                  else if ((char)puVar10[0x20] == '\x01') {
LAB_140b76a0f:
                    if ((char)param_1[0x17b] == '\0') {
                      FUN_145779a26(param_1 + 0x182,1);
                    }
                    *(undefined1 *)(param_1 + 0x17b) = 1;
                    goto LAB_140b765a3;
                  }
                  *(undefined1 *)(param_1 + 0x17b) = 0;
                }
              }
            }
          }
        }
LAB_140b765a3:
        if ((char)param_1[0x17b] == '\x01') {
          if ((*(char *)(lVar6 + 0xb4) != '\x02') && ((char)param_1[0x180] == '\x01')) {
            dVar20 = (double)param_1[0x17f];
            param_2[2] = dVar20;
            dVar18 = (double)param_1[0x17e];
            *param_2 = (double)param_1[0x17d];
            param_2[1] = dVar18;
            uVar7 = CONCAT71((int7)((ulonglong)dVar20 >> 8),1);
            goto LAB_140b76338;
          }
          goto LAB_140b76336;
        }
      }
      lVar12 = param_1[0x177];
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(lVar6 + 0x60);
      }
      if (lVar12 == 0) {
LAB_140b765c9:
        dVar18 = *(double *)(lVar6 + 0x68);
        dVar19 = *(double *)(lVar6 + 0x70);
        dVar20 = *(double *)(lVar6 + 0x78);
        pdVar11 = (double *)param_1[0x176];
        if (pdVar11 == (double *)0x0) {
          if (param_1[0x175] != 0) {
            lVar6 = *(longlong *)(param_1[0x175] + 0x1c8);
            if (lVar6 == 0) {
              pdVar11 = (double *)&DAT_14c8464e0;
              dVar26 = DAT_14c8464f0;
            }
            else {
              pdVar11 = (double *)(lVar6 + 0x260);
              dVar26 = *(double *)(lVar6 + 0x270);
            }
            dVar24 = pdVar11[1];
            *param_2 = *pdVar11;
            param_2[1] = dVar24;
            param_2[2] = dVar26;
            goto LAB_140b7661c;
          }
          pdVar11 = (double *)param_1[0x17a];
          param_2[2] = (double)pdVar11;
          dVar26 = (double)param_1[0x179];
          *param_2 = (double)param_1[0x178];
          param_2[1] = dVar26;
        }
        else {
          dVar24 = pdVar11[0x4d];
          dVar26 = pdVar11[0x4e];
          *param_2 = pdVar11[0x4c];
          param_2[1] = dVar24;
          param_2[2] = dVar26;
LAB_140b7661c:
          if (((((double)param_1[0x178] != 0.0) || (NAN((double)param_1[0x178]))) ||
              ((double)param_1[0x179] != 0.0)) ||
             (((NAN((double)param_1[0x179]) || ((double)param_1[0x17a] != 0.0)) ||
              (NAN((double)param_1[0x17a]))))) {
            dVar18 = (double)param_1[0x178];
            dVar19 = (double)param_1[0x179];
            dVar20 = (double)param_1[0x17a];
          }
        }
        if (((dVar18 != 0.0) || (NAN(dVar18))) ||
           ((dVar19 != 0.0 || (((NAN(dVar19) || (dVar20 != 0.0)) || (NAN(dVar20))))))) {
          pdVar11 = (double *)param_1[0x176];
          if (pdVar11 == (double *)0x0) {
            pdVar11 = (double *)0x0;
            if (param_1[0x175] == 0) goto LAB_140b766a8;
            lVar6 = *(longlong *)(param_1[0x175] + 0x1c8);
            pdVar11 = (double *)&DAT_14c846480;
            if (lVar6 != 0) {
              pdVar11 = (double *)(lVar6 + 0x240);
            }
            dVar25 = pdVar11[8];
            dVar4 = pdVar11[9];
            dVar24 = pdVar11[10];
            dVar22 = *pdVar11;
            dVar23 = pdVar11[1];
            dVar21 = pdVar11[2];
            dVar26 = pdVar11[3];
            uVar27 = SUB84(dVar26,0);
            uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
            dVar26 = pdVar11[3];
            uVar29 = SUB84(dVar26,0);
            uVar30 = (undefined4)((ulonglong)dVar26 >> 0x20);
          }
          else {
            dVar25 = pdVar11[0x50];
            dVar4 = pdVar11[0x51];
            dVar24 = pdVar11[0x52];
            dVar22 = pdVar11[0x48];
            dVar23 = pdVar11[0x49];
            dVar21 = pdVar11[0x4a];
            dVar26 = pdVar11[0x4b];
            uVar27 = SUB84(dVar26,0);
            uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
            dVar26 = pdVar11[0x4b];
            uVar29 = SUB84(dVar26,0);
            uVar30 = (undefined4)((ulonglong)dVar26 >> 0x20);
          }
          dVar20 = dVar20 * dVar24;
          dVar19 = dVar19 * dVar4;
          dVar18 = dVar18 * dVar25;
          dVar24 = dVar19 * dVar22 - dVar18 * dVar23;
          dVar25 = dVar20 * dVar23 - dVar19 * dVar21;
          dVar26 = dVar18 * dVar21 - dVar22 * dVar20;
          dVar25 = dVar25 + dVar25;
          dVar26 = dVar26 + dVar26;
          dVar24 = dVar24 + dVar24;
          *param_2 = *param_2 +
                     (dVar24 * dVar23 - dVar26 * dVar21) +
                     (double)CONCAT44(uVar28,uVar27) * dVar25 + dVar18;
          param_2[1] = (dVar21 * dVar25 - dVar22 * dVar24) +
                       (double)CONCAT44(uVar30,uVar29) * dVar26 + dVar19 + param_2[1];
          param_2[2] = dVar24 * (double)CONCAT44(uVar28,uVar27) + dVar20 +
                       (dVar26 * dVar22 - dVar25 * dVar23) + param_2[2];
        }
      }
      else {
        plVar8 = param_1 + 0x17c;
        if (param_1[0x17c] == 0) {
          plVar8 = param_1 + 0x176;
        }
        plVar8 = (longlong *)*plVar8;
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)param_1[0x175];
          if (plVar8 == (longlong *)0x0) {
            param_1[0x17c] = 0;
            goto LAB_140b765c9;
          }
          local_c8 = (double *)0x0;
          local_c0 = 0x1800000000;
          local_190 = plVar8;
          FUN_140a44582(plVar8,&local_188,0);
          lVar14 = (longlong)(int)local_c0;
          pdVar11 = &local_188;
          if (local_c8 != (double *)0x0) {
            pdVar11 = local_c8;
          }
          if (lVar14 != 0) {
            lVar16 = 0;
            do {
              plVar8 = *(longlong **)((longlong)pdVar11 + lVar16);
              if ((plVar8 != (longlong *)0x0) &&
                 (cVar5 = (**(code **)(*plVar8 + 0x4c8))(plVar8,lVar12), cVar5 != '\0')) {
                if (local_c8 != (double *)0x0) {
                  FUN_1400020a8();
                }
                goto LAB_140b766fc;
              }
              lVar16 = lVar16 + 8;
            } while (lVar14 * 8 != lVar16);
          }
          if (local_c8 != (double *)0x0) {
            FUN_1400020a8();
          }
          if (*(code **)(*local_190 + 0x3a8) == (code *)&LAB_144a8179a) {
            plVar8 = (longlong *)local_190[0x39];
          }
          else {
            plVar8 = (longlong *)(**(code **)(*local_190 + 0x3a8))();
          }
        }
LAB_140b766fc:
        if ((plVar8 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
          param_1[0x17c] = (longlong)plVar8;
          if (plVar8 == (longlong *)0x0) goto LAB_140b765c9;
        }
        else {
          FUN_1456cec3c(plVar8);
          param_1[0x17c] = (longlong)plVar8;
        }
        cVar5 = (**(code **)(*plVar8 + 0x4c8))(plVar8,lVar12);
        if (cVar5 == '\0') goto LAB_140b765c9;
        (**(code **)(*(longlong *)param_1[0x17c] + 0x4a8))
                  ((longlong *)param_1[0x17c],&local_188,lVar12,0);
        *param_2 = local_168;
        param_2[1] = dStack_160;
        param_2[2] = local_158;
        pdVar11 = (double *)(param_1 + 0x178);
        if (((((double)param_1[0x178] == 0.0) && (!NAN((double)param_1[0x178]))) &&
            ((double)param_1[0x179] == 0.0)) && (!NAN((double)param_1[0x179]))) {
          pdVar13 = (double *)(lVar6 + 0x68);
          if ((double)param_1[0x17a] != 0.0) {
            pdVar13 = pdVar11;
          }
          if (!NAN((double)param_1[0x17a])) {
            pdVar11 = pdVar13;
          }
        }
        dVar18 = *pdVar11;
        dVar20 = pdVar11[2];
        if ((((dVar18 != 0.0) || (NAN(dVar18))) ||
            ((pdVar11[1] != 0.0 || ((NAN(pdVar11[1]) || (dVar20 != 0.0)))))) || (NAN(dVar20))) {
          dVar18 = dVar18 * local_148;
          dStack_140 = pdVar11[1] * dStack_140;
          dVar20 = dVar20 * local_138;
          dVar19 = dStack_140 * local_188 - dVar18 * dStack_180;
          dVar26 = dVar20 * dStack_180 - dStack_140 * local_178;
          dVar24 = dVar18 * local_178 - local_188 * dVar20;
          dVar26 = dVar26 + dVar26;
          dVar24 = dVar24 + dVar24;
          dVar19 = dVar19 + dVar19;
          *param_2 = local_168 +
                     (dVar19 * dStack_180 - dVar24 * local_178) + dStack_170 * dVar26 + dVar18;
          param_2[1] = dStack_160 +
                       (local_178 * dVar26 - local_188 * dVar19) + dStack_170 * dVar24 + dStack_140;
          param_2[2] = local_158 +
                       dVar19 * dStack_170 + dVar20 + (dVar24 * local_188 - dVar26 * dStack_180);
        }
      }
LAB_140b766a8:
      uVar7 = CONCAT71((int7)((ulonglong)pdVar11 >> 8),1);
      if ((double *)(param_1 + 0x17d) != param_2) {
        param_1[0x17f] = (longlong)param_2[2];
        dVar20 = param_2[1];
        param_1[0x17d] = (longlong)*param_2;
        param_1[0x17e] = (longlong)dVar20;
        *(undefined1 *)(param_1 + 0x180) = 1;
      }
      goto LAB_140b76338;
    }
    if ((char)param_1[0x180] == '\x01') {
      *(undefined1 *)(param_1 + 0x180) = 0;
    }
  }
LAB_140b76336:
  uVar7 = 0;
LAB_140b76338:
  if ((local_b0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 140b76caa FUN_140b76caa body=4500 status=ok
// SIG undefined FUN_140b76caa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b76caa(longlong *param_1,byte *param_2)

{
  LARGE_INTEGER *pLVar1;
  uint *puVar2;
  PSRWLOCK pRVar3;
  int *piVar4;
  byte *pbVar5;
  short *psVar6;
  byte bVar7;
  longlong lVar8;
  LARGE_INTEGER LVar9;
  LARGE_INTEGER LVar10;
  char cVar11;
  int iVar12;
  DWORD DVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  ushort uVar20;
  uint uVar21;
  longlong lVar22;
  byte bVar23;
  undefined1 uVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_a8 [32];
  DWORD local_88;
  int local_84;
  LARGE_INTEGER local_80;
  undefined8 local_78;
  LARGE_INTEGER local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pbVar5 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  local_84 = *(int *)pbVar5;
  if (local_84 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_84 = *(int *)pbVar5;
  }
  pbVar5[0] = 0x10;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0x40;
  cVar11 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (cVar11 == '\0') {
    if (DAT_14ca84f63 == '\x01') {
      if (param_1[2] == 0) {
        bVar25 = param_1[4] == 0;
      }
      else {
        bVar25 = false;
      }
    }
    else {
      bVar25 = param_1[2] == 0 || param_1[4] != 0;
    }
    if (DAT_14c872bd8 == '\x01') {
      bVar23 = (*(byte *)((longlong)param_1 + 0xd3) & 8) >> 3;
    }
    else {
      bVar23 = 0;
    }
    if (param_2 != (byte *)0x0) {
      uVar20 = 3;
      if (*param_2 < 3) {
        uVar20 = (ushort)*param_2;
      }
      *(ushort *)((longlong)param_1 + 0xd2) =
           *(ushort *)((longlong)param_1 + 0xd2) & 0x1fff |
           (uVar20 + ((char)uVar20 == '\0')) * 0x2000;
    }
    lVar8 = *param_1;
    QueryPerformanceCounter(&local_70);
    LVar9 = local_70;
    if (bVar25 || bVar23 != 0) {
      local_70.QuadPart = 0;
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x118))(DAT_14ca83900,&local_70,param_1 + 1);
    }
    pLVar1 = (LARGE_INTEGER *)(lVar8 + 0x38);
    if (pLVar1 == &local_70) {
LAB_140b76fd8:
      LVar10 = local_70;
      if (local_70.QuadPart != 0) {
        LOCK();
        puVar2 = (uint *)(local_70.QuadPart + 8);
        uVar21 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(local_70.QuadPart + 8);
          LOCK();
          uVar21 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar7 = *(byte *)(local_70.QuadPart + 0xd);
            plVar14 = (longlong *)FUN_14001cc68(0x10,8);
            ((LARGE_INTEGER *)(plVar14 + 1))->QuadPart = (LONGLONG)LVar10;
            plVar19 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            if ((bVar7 & 2) == 0) {
              do {
                *plVar14 = (longlong)plVar19;
                LOCK();
                bVar25 = plVar19 != DAT_14ca843c0;
                plVar18 = plVar14;
                if (bVar25) {
                  plVar19 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar25);
            }
            else {
              do {
                *plVar14 = (longlong)plVar18;
                LOCK();
                bVar25 = plVar18 != DAT_14ca843c8;
                plVar19 = plVar14;
                if (bVar25) {
                  plVar18 = DAT_14ca843c8;
                  plVar19 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar19;
                UNLOCK();
              } while (bVar25);
            }
          }
        }
      }
    }
    else {
      lVar16 = pLVar1->QuadPart;
      pLVar1->QuadPart = (LONGLONG)local_70;
      local_70.QuadPart = 0;
      if (lVar16 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar16 + 8);
        uVar21 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar16 + 8);
          LOCK();
          uVar21 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar7 = *(byte *)(lVar16 + 0xd);
            plVar14 = (longlong *)FUN_14001cc68(0x10,8);
            plVar14[1] = lVar16;
            plVar19 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            if ((bVar7 & 2) == 0) {
              do {
                *plVar14 = (longlong)plVar19;
                LOCK();
                bVar25 = plVar19 != DAT_14ca843c0;
                plVar18 = plVar14;
                if (bVar25) {
                  plVar19 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar25);
            }
            else {
              do {
                *plVar14 = (longlong)plVar18;
                LOCK();
                bVar25 = plVar18 != DAT_14ca843c8;
                plVar19 = plVar14;
                if (bVar25) {
                  plVar18 = DAT_14ca843c8;
                  plVar19 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar19;
                UNLOCK();
              } while (bVar25);
            }
          }
        }
        goto LAB_140b76fd8;
      }
    }
    lVar16 = DAT_14ca807a0;
    if ((*(byte *)((longlong)param_1 + 0xd3) & 0x18) == 0) {
      lVar22 = param_1[0x1c];
      iVar12 = *(int *)pbVar5;
      if (iVar12 == 0x40000002) {
        uVar15 = 0;
      }
      else {
        bVar25 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
          if (iVar12 == 1) {
            local_88 = FUN_140ad26c0();
            DVar13 = GetCurrentThreadId();
            bVar25 = local_88 == DVar13;
          }
          else {
            bVar25 = false;
          }
        }
        uVar15 = (ulonglong)(bVar25 ^ 1);
      }
      iVar12 = *(int *)(lVar16 + uVar15 * 4);
      QueryPerformanceCounter(&local_70);
      lVar16 = local_70.QuadPart - (longlong)LVar9;
      auVar27._8_4_ = (int)((ulonglong)lVar16 >> 0x20);
      auVar27._0_8_ = lVar16;
      auVar27._12_4_ = 0x45300000;
      if (((double)iVar12 <
           (((double)CONCAT44(0x43300000,(int)lVar16) - 4503599627370496.0) +
           (auVar27._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0) &&
         (_DAT_14ca8130c = _DAT_14ca8130c + 1, (int)lVar22 == 2)) {
        _DAT_14ca81314 = _DAT_14ca81314 + 1;
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca813b8) && (FUN_144b3d300(&DAT_14ca813b8), DAT_14ca813b8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca813b0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.PSOPrecache.Validation",1);
      _Init_thread_footer(&DAT_14ca813b8);
    }
    if (DAT_14ca813b0 != (longlong *)0x0) {
      (**(code **)(*DAT_14ca813b0 + 0xb0))();
    }
    plVar19 = param_1 + 1;
    if (pLVar1->QuadPart == 0) {
      if (bVar23 == 0) {
        FUN_1431e6f08(plVar19);
      }
    }
    else {
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(pLVar1->QuadPart + 0x10);
    }
    lVar8 = DAT_14ca811c8;
    if ((*(byte *)((longlong)param_1 + 0xd3) & 8) == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca813a8) && (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14ca813a0 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
        _Init_thread_footer(&DAT_14ca813a8);
      }
      bVar25 = false;
      if ((DAT_14ca84df4 == 0x10de) && (bVar25 = false, DAT_14ca813a0 != (longlong *)0x0)) {
        iVar12 = (**(code **)(*DAT_14ca813a0 + 0xb0))();
        bVar25 = 0 < iVar12;
      }
      if ((((!bVar25) && (DAT_14ca80860 != 0)) && (DAT_14ca84df4 == 0x10de)) &&
         (*(int *)(lVar8 + 0xa8) == 0)) {
        lVar16 = (**(code **)(*DAT_14ca83900 + 0x300))(DAT_14ca83900,plVar19);
        pRVar3 = (PSRWLOCK)(lVar8 + 8);
        AcquireSRWLockShared(pRVar3);
        if (*(int *)(lVar8 + 0x28) != *(int *)(lVar8 + 0x54)) {
          lVar22 = lVar8 + 0x58;
          if (*(longlong *)(lVar8 + 0x60) != 0) {
            lVar22 = *(longlong *)(lVar8 + 0x60);
          }
          iVar12 = *(int *)(lVar22 + (ulonglong)
                                     (*(int *)(lVar8 + 0x68) - 1U &
                                     (int)lVar16 + (int)((ulonglong)lVar16 >> 0x20) * 0x17) * 4);
          if (iVar12 != -1) {
LAB_140b77425:
            lVar22 = *(longlong *)(lVar8 + 0x20) + (longlong)iVar12 * 0x20;
            if (*(longlong *)(*(longlong *)(lVar8 + 0x20) + (longlong)iVar12 * 0x20) != lVar16)
            goto code_r0x000140b7743a;
            if ((lVar22 + 8U & 0xfffffffffffffff7) != 0) {
              bVar23 = *(byte *)(lVar22 + 0x14);
              do {
                LOCK();
                bVar7 = *(byte *)(lVar22 + 0x14);
                bVar25 = bVar23 == bVar7;
                if (bVar25) {
                  *(byte *)(lVar22 + 0x14) = bVar23 | 0x20;
                  bVar7 = bVar23;
                }
                bVar23 = bVar7;
                UNLOCK();
              } while (!bVar25);
              ReleaseSRWLockShared(pRVar3);
              if ((bVar23 & 0x20) == 0) {
                AcquireSRWLockExclusive(pRVar3);
                iVar12 = *(int *)(lVar8 + 0x88);
                *(uint *)(lVar8 + 0x88) = iVar12 + 1U;
                if (*(uint *)(lVar8 + 0x8c) < iVar12 + 1U) {
                  FUN_14479d316((longlong *)(lVar8 + 0x80),iVar12);
                }
                *(longlong *)(*(longlong *)(lVar8 + 0x80) + (longlong)iVar12 * 8) = lVar16;
                ReleaseSRWLockExclusive(pRVar3);
              }
              goto LAB_140b7745a;
            }
          }
        }
LAB_140b77d31:
        ReleaseSRWLockShared(pRVar3);
      }
    }
    else {
      FUN_144ad91ac(DAT_14ca811c8,plVar19,pLVar1->QuadPart != 0);
    }
LAB_140b7745a:
    iVar12 = local_84;
    if (param_1[4] != 0) {
      LOCK();
      psVar6 = (short *)(param_1[4] + 0x9e);
      *psVar6 = *psVar6 + -1;
      UNLOCK();
    }
    if (param_1[5] != 0) {
      LOCK();
      psVar6 = (short *)(param_1[5] + 0x9e);
      *psVar6 = *psVar6 + -1;
      UNLOCK();
    }
    if (param_1[2] != 0) {
      LOCK();
      psVar6 = (short *)(param_1[2] + 0x9e);
      *psVar6 = *psVar6 + -1;
      UNLOCK();
    }
    if (param_1[3] != 0) {
      LOCK();
      psVar6 = (short *)(param_1[3] + 0x9e);
      *psVar6 = *psVar6 + -1;
      UNLOCK();
    }
    if (param_1[6] != 0) {
      LOCK();
      psVar6 = (short *)(param_1[6] + 0x9e);
      *psVar6 = *psVar6 + -1;
      UNLOCK();
    }
    if (param_1[4] != 0) {
      LOCK();
      psVar6 = (short *)(param_1[4] + 0x9e);
      *psVar6 = *psVar6 + -1;
      UNLOCK();
      lVar8 = param_1[4];
      if (lVar8 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar8 + 8);
        uVar21 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar8 + 8);
          LOCK();
          uVar21 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar23 = *(byte *)(lVar8 + 0xd);
            plVar17 = (longlong *)FUN_14001cc68(0x10,8);
            plVar17[1] = lVar8;
            plVar18 = DAT_14ca843c0;
            plVar14 = DAT_14ca843c8;
            if ((bVar23 & 2) == 0) {
              do {
                *plVar17 = (longlong)plVar18;
                LOCK();
                bVar25 = plVar18 != DAT_14ca843c0;
                plVar14 = plVar17;
                if (bVar25) {
                  plVar18 = DAT_14ca843c0;
                  plVar14 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar14;
                UNLOCK();
              } while (bVar25);
            }
            else {
              do {
                *plVar17 = (longlong)plVar14;
                LOCK();
                bVar25 = plVar14 != DAT_14ca843c8;
                plVar18 = plVar17;
                if (bVar25) {
                  plVar14 = DAT_14ca843c8;
                  plVar18 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar18;
                UNLOCK();
              } while (bVar25);
            }
          }
        }
      }
    }
    lVar8 = param_1[5];
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar17 = (longlong *)FUN_14001cc68(0x10,8);
          plVar17[1] = lVar8;
          plVar18 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar17 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c0;
              plVar14 = plVar17;
              if (bVar25) {
                plVar18 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar17 = (longlong)plVar14;
              LOCK();
              bVar25 = plVar14 != DAT_14ca843c8;
              plVar18 = plVar17;
              if (bVar25) {
                plVar14 = DAT_14ca843c8;
                plVar18 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    lVar8 = *plVar19;
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar8;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    lVar8 = param_1[2];
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar8;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar8;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    lVar8 = param_1[6];
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar8;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    lVar8 = param_1[7];
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar8;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    lVar8 = param_1[8];
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar8;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    lVar8 = param_1[9];
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar8;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    lVar8 = param_1[7];
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar8;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    lVar8 = param_1[8];
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar8;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    lVar8 = param_1[9];
    if (lVar8 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar8 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar8 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar23 = *(byte *)(lVar8 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar8;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar23 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
    goto LAB_140b7796c;
  }
  lVar8 = *param_1;
  QueryPerformanceCounter(&local_70);
  LVar9 = local_70;
  local_70 = *(LARGE_INTEGER *)(lVar8 + 0x38);
  local_68 = (byte)(*(ushort *)((longlong)param_1 + 0xd2) >> 5) & 0xc0;
  if ((DAT_14c872bd8 == '\0') || ((*(ushort *)((longlong)param_1 + 0xd2) >> 0xb & 1) == 0)) {
    (**(code **)(*DAT_14ca83900 + 0x128))(DAT_14ca83900,&local_80,&local_70);
    bVar23 = 1;
  }
  else {
    local_80.QuadPart = 0;
    bVar23 = 0;
  }
  pLVar1 = (LARGE_INTEGER *)(lVar8 + 0x48);
  if (pLVar1 == &local_80) {
LAB_140b76e33:
    LVar10 = local_80;
    if (local_80.QuadPart != 0) {
      LOCK();
      puVar2 = (uint *)(local_80.QuadPart + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_80.QuadPart + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)(local_80.QuadPart + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          ((LARGE_INTEGER *)(plVar14 + 1))->QuadPart = (LONGLONG)LVar10;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
    }
  }
  else {
    lVar16 = pLVar1->QuadPart;
    pLVar1->QuadPart = (LONGLONG)local_80;
    local_80.QuadPart = 0;
    if (lVar16 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar16 + 8);
      uVar21 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar16 + 8);
        LOCK();
        uVar21 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)(lVar16 + 0xd);
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = lVar16;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar19;
              LOCK();
              bVar25 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar14;
              if (bVar25) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar25);
          }
          else {
            do {
              *plVar14 = (longlong)plVar18;
              LOCK();
              bVar25 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar14;
              if (bVar25) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar25);
          }
        }
      }
      goto LAB_140b76e33;
    }
  }
  lVar16 = DAT_14ca807a0;
  if ((*(byte *)((longlong)param_1 + 0xd3) & 0x18) == 0) {
    lVar22 = param_1[0x1c];
    iVar12 = *(int *)pbVar5;
    if (iVar12 == 0x40000002) {
      uVar15 = 0;
    }
    else {
      bVar25 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
        if (iVar12 == 1) {
          local_88 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar25 = local_88 == DVar13;
        }
        else {
          bVar25 = false;
        }
      }
      uVar15 = (ulonglong)(bVar25 ^ 1);
    }
    iVar12 = *(int *)(lVar16 + uVar15 * 4);
    QueryPerformanceCounter(&local_80);
    lVar16 = local_80.QuadPart - (longlong)LVar9;
    auVar26._8_4_ = (int)((ulonglong)lVar16 >> 0x20);
    auVar26._0_8_ = lVar16;
    auVar26._12_4_ = 0x45300000;
    if (((double)iVar12 <
         (((double)CONCAT44(0x43300000,(int)lVar16) - 4503599627370496.0) +
         (auVar26._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0) &&
       (_DAT_14ca81310 = _DAT_14ca81310 + 1, (int)lVar22 == 2)) {
      _DAT_14ca81314 = _DAT_14ca81314 + 1;
    }
  }
  uVar20 = *(ushort *)((longlong)param_1 + 0xd2);
  if ((bool)((uVar20 & 0x1800) == 0 & bVar23 & pLVar1->QuadPart == 0)) {
    FUN_140033559(".\\Runtime/RHI/Private/PipelineStateCache.cpp",0x27f,
                  L"Shader compilation failures are Fatal.");
    uVar20 = *(ushort *)((longlong)param_1 + 0xd2);
  }
  lVar16 = DAT_14ca811d0;
  LVar9 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(lVar8 + 0x38))->s;
  local_78 = *(undefined8 *)(lVar8 + 0x40);
  local_80 = LVar9;
  if ((uVar20 >> 0xb & 1) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca813a8) && (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca813a0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
      _Init_thread_footer(&DAT_14ca813a8);
    }
    bVar25 = false;
    if ((DAT_14ca84df4 == 0x10de) && (bVar25 = false, DAT_14ca813a0 != (longlong *)0x0)) {
      iVar12 = (**(code **)(*DAT_14ca813a0 + 0xb0))();
      bVar25 = 0 < iVar12;
    }
    if ((((!bVar25) && (DAT_14ca80860 != 0)) && (DAT_14ca84df4 == 0x10de)) &&
       (*(int *)(lVar16 + 0xa8) == 0)) {
      pRVar3 = (PSRWLOCK)(lVar16 + 8);
      AcquireSRWLockShared(pRVar3);
      if (*(int *)(lVar16 + 0x28) != *(int *)(lVar16 + 0x54)) {
        lVar22 = lVar16 + 0x58;
        if (*(longlong *)(lVar16 + 0x60) != 0) {
          lVar22 = *(longlong *)(lVar16 + 0x60);
        }
        iVar12 = *(int *)(lVar22 + (ulonglong)
                                   (*(int *)(lVar16 + 0x68) - 1U &
                                   LVar9.s.HighPart * 0x17 + LVar9.s.LowPart) * 4);
        if (iVar12 != -1) {
LAB_140b7721d:
          lVar22 = *(longlong *)(lVar16 + 0x20) + (longlong)iVar12 * 0x20;
          if (*(longlong *)(*(longlong *)(lVar16 + 0x20) + (longlong)iVar12 * 0x20) !=
              LVar9.QuadPart) goto code_r0x000140b77232;
          if ((lVar22 + 8U & 0xfffffffffffffff7) != 0) {
            bVar23 = *(byte *)(lVar22 + 0x14);
            do {
              LOCK();
              bVar7 = *(byte *)(lVar22 + 0x14);
              bVar25 = bVar23 == bVar7;
              if (bVar25) {
                *(byte *)(lVar22 + 0x14) = bVar23 | 0x20;
                bVar7 = bVar23;
              }
              bVar23 = bVar7;
              UNLOCK();
            } while (!bVar25);
            ReleaseSRWLockShared(pRVar3);
            if ((bVar23 & 0x20) == 0) {
              AcquireSRWLockExclusive(pRVar3);
              iVar12 = *(int *)(lVar16 + 0x88);
              *(uint *)(lVar16 + 0x88) = iVar12 + 1U;
              if (*(uint *)(lVar16 + 0x8c) < iVar12 + 1U) {
                FUN_14479d316((longlong *)(lVar16 + 0x80),iVar12);
              }
              ((LARGE_INTEGER *)(*(longlong *)(lVar16 + 0x80) + (longlong)iVar12 * 8))->s =
                   (_struct_19)LVar9;
              ReleaseSRWLockExclusive(pRVar3);
            }
            goto LAB_140b77956;
          }
        }
      }
LAB_140b77d17:
      ReleaseSRWLockShared(pRVar3);
    }
  }
  else {
    if (pLVar1->QuadPart == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined1 *)(pLVar1->QuadPart + 0x18);
    }
    FUN_14178ccba(DAT_14ca811d0,&local_80,uVar24);
  }
LAB_140b77956:
  iVar12 = local_84;
  if (*(longlong *)(lVar8 + 0x38) != 0) {
    LOCK();
    psVar6 = (short *)(*(longlong *)(lVar8 + 0x38) + 0x9e);
    *psVar6 = *psVar6 + -1;
    UNLOCK();
  }
LAB_140b7796c:
  uVar21 = 1;
  if ((*pbVar5 & 0x20) == 0) {
    uVar21 = DAT_14c760d80 ^ 1;
  }
  plVar19 = *(longlong **)(*param_1 + 0x18 + (ulonglong)(uVar21 << 4));
  if ((plVar19 != (longlong *)0x0) && (lVar8 = *plVar19, lVar8 != 0)) {
    LOCK();
    piVar4 = (int *)(lVar8 + 8);
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    local_70.s.LowPart._0_1_ = 1;
    FUN_1447439e4();
    *param_1 = 0;
  }
  *(int *)pbVar5 = iVar12;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140b7743a:
  iVar12 = *(int *)(lVar22 + 0x18);
  if (iVar12 == -1) goto LAB_140b77d31;
  goto LAB_140b77425;
code_r0x000140b77232:
  iVar12 = *(int *)(lVar22 + 0x18);
  if (iVar12 == -1) goto LAB_140b77d17;
  goto LAB_140b7721d;
}



// FUNCTION 140b77e40 FUN_140b77e40 body=159 status=ok
// SIG undefined FUN_140b77e40(void)

void FUN_140b77e40(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2 * 0x30;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar7 = (longlong)*(int *)(lVar2 + 0x2c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar7 * 4);
  if (iVar4 == param_2) {
    piVar6 = (int *)((longlong)plVar5 + lVar7 * 4);
  }
  else {
    do {
      piVar6 = (int *)(lVar2 + (longlong)iVar4 * 0x30 + 0x28);
      iVar4 = *piVar6;
    } while (iVar4 != param_2);
  }
  *piVar6 = *(int *)(lVar2 + lVar3 + 0x28);
  plVar5 = *(longlong **)(*param_1 + 0x20 + lVar3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_140b77ee0(param_1,param_2);
  return;
}



// FUNCTION 140b77ee0 FUN_140b77ee0 body=122 status=ok
// SIG undefined FUN_140b77ee0(void)

void FUN_140b77ee0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140b77f5a FUN_140b77f5a body=38 status=ok
// SIG undefined FUN_140b77f5a(void)

undefined8 FUN_140b77f5a(undefined8 param_1,int param_2)

{
  FUN_140b77f80();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b77f80 FUN_140b77f80 body=1291 status=ok
// SIG undefined FUN_140b77f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b77f80(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14b411640;
  plVar2 = param_1 + 0x11;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) < 0) {
    FUN_1446f8c06(plVar2,0);
  }
  if ((undefined2 *)*plVar2 != (undefined2 *)0x0) {
    *(undefined2 *)*plVar2 = 0;
  }
  plVar4 = param_1 + 0x37;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)((longlong)param_1 + 0x1c4) < 0) {
    FUN_1446f8c06(plVar4,0);
  }
  if ((undefined2 *)*plVar4 != (undefined2 *)0x0) {
    *(undefined2 *)*plVar4 = 0;
  }
  plVar3 = param_1 + 0x74;
  if (*(int *)(param_1 + 0x7d) < 2) {
    FUN_140b78798(plVar3);
    FUN_140b784bc(plVar3,0);
  }
  else {
    FUN_140b784bc(plVar3,0);
    *(undefined4 *)(param_1 + 0x7d) = 1;
    FUN_140a94ce2(plVar3);
  }
  FUN_14040be3e(param_1[0x83],*(undefined4 *)(param_1 + 0x84));
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (*(int *)((longlong)param_1 + 0x424) != 0) {
    FUN_140b7848c(param_1 + 0x83);
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
    param_1[0x7e] = 0;
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
    param_1[0x80] = 0;
  }
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_14040be3e(param_1[0x83],*(undefined4 *)(param_1 + 0x84));
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  FUN_140b784bc(plVar3,0);
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x66] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x66] + 0x50));
  }
  if ((param_1[0x60] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x60] + 0x50));
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  param_1[0x4e] = 0;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2a] + 0x10))();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x18];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x16];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar5 = (undefined8 *)param_1[1], puVar5 != (undefined8 *)0x0)) {
    if (puVar5[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar5 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar5;
                    /* WARNING: Could not recover jumptable at 0x000140b782ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140b7848c FUN_140b7848c body=48 status=ok
// SIG undefined FUN_140b7848c(void)

void FUN_140b7848c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 140b784bc FUN_140b784bc body=551 status=ok
// SIG undefined FUN_140b784bc(void)

void FUN_140b784bc(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar8 == uVar14) goto LAB_140b78660;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar8 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar9 = (longlong)iVar6 * 0x68;
      *(undefined4 *)(lVar10 + 0x58 + lVar9) = 0;
      if (*(longlong *)(lVar10 + 0x50 + lVar9) != 0) {
        FUN_1400020a8();
      }
      FUN_140b786e4(lVar10 + lVar9 + 0x10);
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar14;
      lVar10 = (longlong)iVar6;
      uVar3 = puVar7[lVar10] & uVar13;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar3 = puVar7[lVar10 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar10 == lVar9) goto LAB_140b78660;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140b78660:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14059f004(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar3 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140b786e4 FUN_140b786e4 body=55 status=ok
// SIG undefined FUN_140b786e4(void)

void FUN_140b786e4(longlong *param_1)

{
  FUN_140b7871c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b7871c FUN_140b7871c body=123 status=ok
// SIG undefined FUN_140b7871c(void)

void FUN_140b7871c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140b78798 FUN_140b78798 body=327 status=ok
// SIG undefined FUN_140b78798(void)

void FUN_140b78798(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 100 + (longlong)iVar4 * 0x68) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b788e0 FUN_140b788e0 body=432 status=ok
// SIG undefined FUN_140b788e0(void)

longlong * FUN_140b788e0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14029e8dd(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1409c5ac0(param_2,0);
      }
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x38e38 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar5 = 0x10;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      FUN_14011750a(lVar3 + lVar5 + -0x10,param_1);
      FUN_1403f5866(lVar3 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1409c50d2(param_2);
    if (0 < (int)local_3c) {
      iVar4 = 0;
      do {
        lVar5 = FUN_140b78a92(param_2);
        FUN_14011750a(lVar5,param_1);
        FUN_1403f5866(lVar5 + 0x10,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b78a92 FUN_140b78a92 body=65 status=ok
// SIG undefined FUN_140b78a92(void)

longlong FUN_140b78a92(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406251ee(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_140b78ad3(lVar2);
  return lVar2;
}



// FUNCTION 140b78ad3 FUN_140b78ad3 body=32 status=ok
// SIG undefined FUN_140b78ad3(void)

void FUN_140b78ad3(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



// FUNCTION 140b78b02 FUN_140b78b02 body=40 status=ok
// SIG undefined FUN_140b78b02(void)

undefined8 FUN_140b78b02(undefined8 param_1,int param_2)

{
  FUN_140b78b2a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b78b2a FUN_140b78b2a body=69 status=ok
// SIG undefined FUN_140b78b2a(void)

void FUN_140b78b2a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b038450;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_140b605dc(param_1);
  return;
}



// FUNCTION 140b78b7e FUN_140b78b7e body=64 status=ok
// SIG undefined FUN_140b78b7e(void)

undefined8 * FUN_140b78b7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afda8b0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140b78bbe FUN_140b78bbe body=898 status=ok
// SIG undefined FUN_140b78bbe(void)

void FUN_140b78bbe(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  undefined8 local_88;
  int local_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145779d52(&DAT_14cbcd900);
  FUN_145779d52(&DAT_14cbcd8b0);
  lVar5 = FUN_140fcbb85();
  local_88 = *(undefined8 *)(lVar5 + 0x38);
  FUN_1446dcdd4(&local_78);
  if (((DAT_14cb86df8 == 0) || (lVar5 = FUN_144837462(DAT_14cb86df8,&local_78), lVar5 == 0)) ||
     (*(char *)(lVar5 + 0x58) == '\0')) {
    lVar5 = 0;
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (lVar5 != 0) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_145779e36(&local_78);
    iVar9 = (int)uStack_70;
    if (0 < (int)uStack_70) {
      lVar7 = 0;
      bVar10 = false;
      do {
        while (cVar4 = FUN_140b78f42(local_78[lVar7],lVar5), cVar4 == '\0') {
          do {
            if ((int)uStack_70 - 1U != (uint)lVar7) {
              iVar9 = ~(uint)lVar7 + (int)uStack_70;
              if (0 < iVar9) {
                iVar9 = 1;
              }
              memmove(local_78 + lVar7,local_78 + ((int)uStack_70 - iVar9),(longlong)iVar9 << 3);
            }
            iVar9 = (int)uStack_70 + -1;
            uStack_70 = CONCAT44(uStack_70._4_4_,iVar9);
            if (iVar9 <= lVar7) goto LAB_140b78d4c;
            cVar4 = FUN_140b78f42(local_78[lVar7],lVar5);
          } while (cVar4 == '\0');
          lVar7 = lVar7 + 1;
          bVar10 = true;
          if ((int)uStack_70 <= lVar7) goto LAB_140b78d4c;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)uStack_70);
      iVar9 = (int)uStack_70;
      if (bVar10) {
LAB_140b78d4c:
        FUN_145779d98(&local_78);
        iVar9 = (int)uStack_70;
      }
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar9 + 1U);
    if (uStack_70._4_4_ < iVar9 + 1U) {
      FUN_14189fa44(&local_78,iVar9);
    }
    local_78[iVar9] = lVar5;
    if ((longlong)(int)uStack_70 != 0) {
      plVar1 = local_78 + (int)uStack_70;
      plVar8 = local_78;
      do {
        lVar5 = *plVar8;
        piVar6 = *(int **)(lVar5 + 8);
        if (piVar6 == (int *)0x0) {
          piVar6 = &DAT_14c9485f0;
        }
        if (((*piVar6 == 0) || (iVar9 = piVar6[1], iVar9 == 0)) || (*piVar6 == DAT_14c948000)) {
LAB_140b78ec9:
          local_80 = DAT_14c948620;
          local_88 = DAT_14c948618;
        }
        else {
          if ((iVar9 < 2) && (piVar6[9] < 1)) {
            piVar6 = piVar6 + 2;
          }
          else {
            piVar6 = *(int **)(piVar6 + 6);
          }
          if (iVar9 < 1) goto LAB_140b78ec9;
          local_80 = piVar6[2];
          local_88 = *(undefined8 *)piVar6;
        }
        FUN_1409612f0(&DAT_14cbcd8b0,local_8c,&local_88,0);
        iVar9 = *(int *)(lVar5 + 0x68);
        if ((longlong)iVar9 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x60);
          lVar7 = 0;
          do {
            lVar3 = *(longlong *)(lVar5 + lVar7);
            cVar4 = FUN_1407a73f8(lVar3 + 0x4f0,&DAT_14cbcdd98);
            if (cVar4 != '\0') {
              piVar6 = *(int **)(lVar3 + 8);
              if (piVar6 == (int *)0x0) {
                piVar6 = &DAT_14c9485f0;
              }
              if (((*piVar6 == 0) || (iVar2 = piVar6[1], iVar2 == 0)) || (*piVar6 == DAT_14c948000))
              {
LAB_140b78edf:
                local_80 = DAT_14c948620;
                local_88 = DAT_14c948618;
              }
              else {
                if ((iVar2 < 2) && (piVar6[9] < 1)) {
                  piVar6 = piVar6 + 2;
                }
                else {
                  piVar6 = *(int **)(piVar6 + 6);
                }
                if (iVar2 < 1) goto LAB_140b78edf;
                local_80 = piVar6[2];
                local_88 = *(undefined8 *)piVar6;
              }
              FUN_1409612f0(&DAT_14cbcd900,local_8c,&local_88,0);
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)iVar9 * 8 != lVar7);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b78f42 FUN_140b78f42 body=269 status=ok
// SIG undefined FUN_140b78f42(void)

ulonglong FUN_140b78f42(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong unaff_RBP;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x80), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    lVar5 = 0;
    do {
      if (*(int *)(lVar2 + 0x20 + lVar5) == 0x2000) {
        local_78 = *(undefined8 *)(lVar2 + 0x18 + lVar5);
        FUN_1446dcdd4(local_70,&local_78);
        if (DAT_14cb86df8 != 0) {
          lVar4 = FUN_144837462(DAT_14cb86df8,local_70);
          if ((lVar4 != 0) && (*(char *)(lVar4 + 0x58) != '\0')) {
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
            if (lVar4 != param_2) {
              cVar3 = FUN_140b78f42(lVar4,param_2);
              if (cVar3 == '\0') goto LAB_140b79038;
            }
            goto LAB_140b78ffd;
          }
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
LAB_140b79038:
      lVar5 = lVar5 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar5);
  }
  unaff_RBP = 0;
LAB_140b78ffd:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b79050 FUN_140b79050 body=325 status=ok
// SIG undefined FUN_140b79050(void)

void FUN_140b79050(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b79196 FUN_140b79196 body=1084 status=ok
// SIG undefined FUN_140b79196(void)

void FUN_140b79196(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  uint *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined8 local_cc;
  undefined1 local_c0 [24];
  longlong local_a8;
  undefined2 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_145779eb8(&DAT_14cbcd9f0,0);
  if (DAT_14cb86da8 != 0) {
    local_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    FUN_14577a30e(&local_e8);
    if ((longlong)(int)uStack_e0 != 0) {
      local_110 = local_e8 + (int)uStack_e0;
      plVar12 = local_e8;
      do {
        lVar4 = *plVar12;
        local_108 = plVar12;
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x750) == '\0')) {
          local_100 = (uint *)(lVar4 + 0x3b8);
          uVar3 = *(uint *)(lVar4 + 0x3d0);
          if (uVar3 == 0) {
            uVar19 = 1;
            uVar14 = 0;
            uVar6 = 0;
            iVar18 = 0;
          }
          else {
            puVar7 = *(uint **)(lVar4 + 0x3c8);
            if (*(uint **)(lVar4 + 0x3c8) == (uint *)0x0) {
              puVar7 = local_100;
            }
            uVar6 = *puVar7;
            if (uVar6 == 0) {
              iVar18 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar18 = uVar3 - 1;
              }
              uVar14 = 0;
              uVar19 = (ulonglong)(uint)(iVar18 >> 5);
              if (iVar18 >> 5 < 1) {
                uVar19 = uVar14;
              }
              iVar18 = 0;
              do {
                if (uVar19 == uVar14) goto LAB_140b793bf;
                iVar18 = iVar18 + 0x20;
                uVar6 = puVar7[uVar14 + 1];
                uVar14 = uVar14 + 1;
              } while (uVar6 == 0);
            }
            else {
              uVar14 = 0;
              iVar18 = 0;
            }
            uVar19 = (ulonglong)(-uVar6 & uVar6);
            uVar8 = uVar19 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar6 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if ((int)uVar3 <= (int)uVar6) {
              uVar6 = uVar3;
            }
          }
          if (uVar6 != uVar3) {
            uVar15 = 0xffffffff;
            local_128 = (ulonglong)uVar3;
            do {
              lVar16 = *(longlong *)
                        (*(longlong *)(lVar4 + 0x3a8) + 0x10 + (longlong)(int)uVar6 * 0x20);
              if (lVar16 != 0) {
                uVar8 = (ulonglong)*(ushort *)(lVar16 + 0x2ae);
                lVar16 = *(longlong *)(DAT_14cb86da8 + 0x340);
                lVar17 = *(longlong *)(lVar16 + uVar8 * 0x18);
                if (lVar17 != 0) {
                  uVar9 = FUN_140b795d4();
                  cVar5 = FUN_1448093f4(lVar17,uVar9);
                  if (cVar5 != '\0') {
                    plVar12 = (longlong *)(lVar16 + uVar8 * 0x18);
                    lVar16 = *plVar12;
                    plVar12 = (longlong *)plVar12[1];
                    if (plVar12 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                      UNLOCK();
                      LOCK();
                      plVar1 = plVar12 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*plVar12)(plVar12);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar12 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar12 + 0x10))(plVar12);
                        }
                      }
                    }
                    if ((lVar16 != 0) && ((longlong)*(int *)(lVar16 + 0x90) != 0)) {
                      local_118 = *(longlong *)(lVar16 + 0x88);
                      local_120 = (longlong)*(int *)(lVar16 + 0x90) * 0xc;
                      lVar16 = 0;
                      do {
                        local_98 = 0xb;
                        local_94 = 0;
                        local_88 = 0;
                        uStack_80 = 0;
                        local_78 = 0;
                        local_70 = 0;
                        uStack_68 = 0;
                        local_f0 = *(undefined4 *)(local_118 + 8 + lVar16);
                        local_f8 = *(undefined8 *)(local_118 + lVar16);
                        FUN_144928d62(&local_88,0,&local_f8);
                        FUN_140b7a400(lVar4,&local_d0,&local_98);
                        local_98 = CONCAT11(local_98._1_1_,local_d0);
                        local_d0 = 0;
                        local_94 = local_cc;
                        local_cc = 0;
                        FUN_1404e49fa(&local_88,local_c0);
                        local_98 = CONCAT11(local_cf,(undefined1)local_98);
                        local_cf = 0;
                        if (local_a8 != 0) {
                          FUN_1400020a8();
                        }
                        FUN_140f8d6d8(&DAT_14cbcd9f0,&local_d0,&local_98,0);
                        if (local_70 != 0) {
                          FUN_1400020a8();
                        }
                        lVar16 = lVar16 + 0xc;
                      } while (local_120 != lVar16);
                    }
                  }
                }
              }
              uVar15 = uVar15 & ~(uint)uVar19;
              puVar7 = *(uint **)(lVar4 + 0x3c8);
              if (*(uint **)(lVar4 + 0x3c8) == (uint *)0x0) {
                puVar7 = local_100;
              }
              uVar3 = *(uint *)(lVar4 + 0x3d0);
              iVar13 = (int)uVar14;
              lVar16 = (longlong)iVar13;
              uVar6 = puVar7[lVar16] & uVar15;
              if (uVar6 == 0) {
                iVar10 = uVar3 + 0x1e;
                if (-1 < (int)(uVar3 - 1)) {
                  iVar10 = uVar3 - 1;
                }
                iVar10 = iVar10 >> 5;
                iVar18 = iVar18 + 0x20;
                iVar11 = iVar10;
                if (iVar10 < iVar13) {
                  iVar11 = iVar13;
                }
                if (iVar13 < iVar10) {
                  lVar17 = 0;
                  do {
                    uVar6 = puVar7[lVar16 + lVar17 + 1];
                    if (uVar6 != 0) {
                      uVar14 = (ulonglong)(iVar13 + (int)lVar17 + 1);
                      uVar15 = 0xffffffff;
                      goto LAB_140b7938a;
                    }
                    iVar18 = iVar18 + 0x20;
                    lVar17 = lVar17 + 1;
                  } while (iVar11 - lVar16 != lVar17);
                  uVar15 = 0xffffffff;
                  iVar13 = iVar11;
                }
                uVar14 = (ulonglong)(iVar13 + 1);
                uVar6 = uVar3;
              }
              else {
LAB_140b7938a:
                uVar19 = (ulonglong)(-uVar6 & uVar6);
                uVar8 = uVar19 * 2 + 1;
                lVar16 = 0x3f;
                if (uVar8 != 0) {
                  for (; uVar8 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                uVar6 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                if ((int)uVar3 <= (int)uVar6) {
                  uVar6 = uVar3;
                }
              }
            } while (uVar6 != (uint)local_128);
          }
        }
LAB_140b793bf:
        plVar12 = local_108 + 1;
      } while (plVar12 != local_110);
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b795d4 FUN_140b795d4 body=57 status=ok
// SIG undefined FUN_140b795d4(void)

void FUN_140b795d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf630 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf630 = FUN_140002ddd(FUN_14661273c,uVar1,L"ObjectiveTypeSettings_OakLoot");
  }
  return;
}



// FUNCTION 140b7960e FUN_140b7960e body=1063 status=ok
// SIG undefined FUN_140b7960e(void)

void FUN_140b7960e(longlong *param_1,undefined8 *param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_a8 [39];
  char local_81;
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_81 = param_3;
  local_78 = param_2;
  cVar5 = (**(code **)(*param_1 + 0x300))();
  local_70 = param_1;
  if (cVar5 == '\0') {
    local_80 = param_1 + 0x51;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = local_80;
    if ((int)param_1[0x54] == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar13 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar11 = local_68 >> 0x20;
      iVar13 = (int)param_1[0x54];
    }
    plVar4 = local_60;
    iVar9 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar8 = local_58._4_4_;
    iVar14 = local_50;
    if (local_58._4_4_ != iVar13 || local_60 != local_80) {
      do {
        lVar6 = local_70[0x4f];
        lVar7 = *(longlong *)(lVar6 + 0x10 + (longlong)iVar8 * 0x20);
        if (lVar7 != 0) {
          if (local_81 != '\0') {
            FUN_144837e54(lVar7,0);
            lVar7 = *(longlong *)(lVar6 + (longlong)iVar8 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar7 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar7 + 0x48) & 0x6b) == 3)) &&
             (plVar15 = *(longlong **)(lVar7 + 0x30), plVar15 != (longlong *)0x0)) {
            lVar6 = (**(code **)(*plVar15 + 8))(plVar15);
            lVar7 = FUN_140b79a36();
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              (*(code *)*local_78)(local_78[1],plVar15);
            }
          }
        }
        uVar12 = uVar12 & ~(uint)uVar11;
        plVar15 = (longlong *)plVar4[2];
        if ((longlong *)plVar4[2] == (longlong *)0x0) {
          plVar15 = plVar4;
        }
        iVar2 = (int)plVar4[3];
        lVar6 = (longlong)iVar9;
        uVar10 = *(uint *)((longlong)plVar15 + lVar6 * 4) & uVar12;
        if (uVar10 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar3 = iVar8;
          if (iVar8 < iVar9) {
            iVar3 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar7 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar15 + lVar7 * 4 + lVar6 * 4 + 4);
              if (uVar10 != 0) {
                iVar9 = iVar9 + (int)lVar7 + 1;
                uVar12 = 0xffffffff;
                goto LAB_140b797ba;
              }
              iVar14 = iVar14 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar3 - lVar6 != lVar7);
            uVar12 = 0xffffffff;
            iVar9 = iVar3;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar2;
        }
        else {
LAB_140b797ba:
          uVar11 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar11 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar8 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar8) {
            iVar8 = iVar2;
          }
        }
      } while (iVar8 != iVar13 || plVar4 != local_80);
    }
  }
  else {
    local_80 = param_1 + 0x3b;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = local_80;
    if ((int)param_1[0x3e] == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar13 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar11 = local_68 >> 0x20;
      iVar13 = (int)param_1[0x3e];
    }
    plVar4 = local_60;
    iVar9 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar8 = local_58._4_4_;
    iVar14 = local_50;
    if (local_58._4_4_ != iVar13 || local_60 != local_80) {
      do {
        plVar15 = *(longlong **)(local_70[0x39] + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar15 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar15 + 8))(plVar15);
          lVar7 = FUN_140b79a36();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            (*(code *)*local_78)(local_78[1],plVar15);
          }
        }
        uVar12 = uVar12 & ~(uint)uVar11;
        plVar15 = (longlong *)plVar4[2];
        if ((longlong *)plVar4[2] == (longlong *)0x0) {
          plVar15 = plVar4;
        }
        iVar2 = (int)plVar4[3];
        lVar6 = (longlong)iVar9;
        uVar10 = *(uint *)((longlong)plVar15 + lVar6 * 4) & uVar12;
        if (uVar10 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar3 = iVar8;
          if (iVar8 < iVar9) {
            iVar3 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar7 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar15 + lVar7 * 4 + lVar6 * 4 + 4);
              if (uVar10 != 0) {
                iVar9 = iVar9 + (int)lVar7 + 1;
                uVar12 = 0xffffffff;
                goto LAB_140b7995e;
              }
              iVar14 = iVar14 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar3 - lVar6 != lVar7);
            uVar12 = 0xffffffff;
            iVar9 = iVar3;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar2;
        }
        else {
LAB_140b7995e:
          uVar11 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar11 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar8 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar8) {
            iVar8 = iVar2;
          }
        }
      } while (iVar8 != iVar13 || plVar4 != local_80);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b79a36 FUN_140b79a36 body=57 status=ok
// SIG undefined FUN_140b79a36(void)

void FUN_140b79a36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c8e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c8e8 = FUN_140002ddd(FUN_146532eca,uVar1,L"MissionSetDef");
  }
  return;
}



// FUNCTION 140b79a70 FUN_140b79a70 body=67 status=ok
// SIG undefined FUN_140b79a70(void)

void FUN_140b79a70(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b79ab4 FUN_140b79ab4 body=2320 status=ok
// SIG undefined FUN_140b79ab4(void)

void FUN_140b79ab4(void)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong lVar15;
  void *_Src;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int *piVar20;
  longlong lVar21;
  int *piVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong lVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  uint local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined1 local_c0 [8];
  longlong local_b8;
  int local_ac;
  longlong local_a8;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14577a36c();
  if (DAT_14cb86da8 != 0) {
    local_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    FUN_14577a30e(&local_e8);
    if ((longlong)(int)uStack_e0 != 0) {
      plVar25 = local_e8 + (int)uStack_e0;
      plVar16 = local_e8;
      local_110 = plVar25;
      do {
        lVar3 = *plVar16;
        if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x68) != 0)) {
          lVar15 = *(longlong *)(lVar3 + 0x60);
          lVar26 = (longlong)*(int *)(lVar3 + 0x68) * 0xc0 + lVar15;
          do {
            lVar4 = *(longlong *)(lVar15 + 0x70);
            if (lVar4 != 0) {
              uVar8 = FUN_140b7a3c6();
              cVar5 = FUN_1448093f4(lVar4,uVar8);
              if (cVar5 != '\0') {
                lVar4 = *(longlong *)(lVar15 + 0x70);
                local_120 = *(longlong **)(lVar15 + 0x78);
                if (local_120 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_120 + 1) = (int)local_120[1] + 1;
                  UNLOCK();
                }
                if (lVar4 != 0) {
                  local_98 = 0xb;
                  uStack_97 = 0;
                  uStack_94 = 0;
                  uStack_90 = 0;
                  local_88 = 0;
                  uStack_80 = 0;
                  local_78 = 0;
                  local_70 = 0;
                  uStack_68 = 0;
                  local_f0 = *(undefined4 *)(lVar4 + 0x20);
                  local_f8 = *(undefined8 *)(lVar4 + 0x18);
                  FUN_144928d62(&local_88,0,&local_f8);
                  FUN_140b7a400(lVar3,&local_d0,&local_98);
                  local_98 = (byte)local_d0;
                  local_d0 = local_d0 & 0xffffff00;
                  uStack_94 = (undefined4)local_cc;
                  uStack_90 = (undefined4)((ulonglong)local_cc >> 0x20);
                  local_cc = 0;
                  FUN_1404e49fa(&local_88,local_c0);
                  uStack_97 = local_d0._1_1_;
                  local_d0._0_2_ = (ushort)(byte)local_d0;
                  if (local_a8 != 0) {
                    FUN_1400020a8();
                  }
                  cVar5 = FUN_1401144ce(&local_98);
                  uVar12 = DAT_14cbcd958;
                  if (cVar5 != '\0') {
                    puVar9 = *(uint **)(lVar3 + 8);
                    if (puVar9 == (uint *)0x0) {
                      puVar9 = &DAT_14c9485f0;
                    }
                    if (((*puVar9 == 0) || (uVar6 = puVar9[1], uVar6 == 0)) ||
                       (*puVar9 == DAT_14c948000)) {
                      local_100 = DAT_14c948620;
                      local_108 = DAT_14c948618;
                    }
                    else {
                      if (((int)uVar6 < 2) && ((int)puVar9[9] < 1)) {
                        puVar9 = puVar9 + 2;
                      }
                      else {
                        puVar9 = *(uint **)(puVar9 + 6);
                      }
                      if ((int)uVar6 < 1) {
                        local_100 = DAT_14c948620;
                        local_108 = DAT_14c948618;
                      }
                      else {
                        local_100 = puVar9[2];
                        local_108 = *(undefined8 *)puVar9;
                      }
                    }
                    if (DAT_14cbcd984 == 0) {
                      uVar24 = (ulonglong)DAT_14cbcd958;
                      uVar6 = DAT_14cbcd958 + 1;
                      bVar28 = DAT_14cbcd95c == DAT_14cbcd958;
                      DAT_14cbcd958 = uVar6;
                      if (bVar28) {
                        FUN_1406fba42(&DAT_14cbcd950,uVar12);
                      }
                      iVar18 = DAT_14cbcd978;
                      if (DAT_14cbcd978 == 0) {
                        iVar7 = -1;
                      }
                      else {
                        iVar7 = DAT_14cbcd978 + 0x1e;
                        if (-1 < DAT_14cbcd978 + -1) {
                          iVar7 = DAT_14cbcd978 + -1;
                        }
                        iVar7 = iVar7 >> 5;
                      }
                      iVar13 = DAT_14cbcd978 + 1;
                      iVar17 = DAT_14cbcd978 + 0x1f;
                      if (-1 < DAT_14cbcd978) {
                        iVar17 = DAT_14cbcd978;
                      }
                      if (iVar17 >> 5 != iVar7) {
                        local_128 = uVar24;
                        if (DAT_14cbcd97c <= DAT_14cbcd978) {
                          if (DAT_14cbcd978 + 0x20U < 0xa0) {
                            DAT_14cbcd97c = 0x80;
                          }
                          else {
                            uVar12 = DAT_14cbcd978 + 0x20U >> 5;
                            if (DAT_14cbcd97c + 0x1fU < 0xa0) {
                              uVar6 = 4;
                              if (4 < uVar12) {
                                uVar6 = uVar12;
                              }
                            }
                            else {
                              uVar6 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
                            }
                            uVar24 = FUN_144a3809e(uVar6 << 2,0);
                            iVar7 = (int)(uVar24 >> 2);
                            DAT_14cbcd97c = iVar7 << 5;
                            if (iVar7 < (int)uVar12) {
                              DAT_14cbcd97c = -0x20;
                            }
                          }
                          FUN_1446efbd8(&DAT_14cbcd960,DAT_14cbcd978);
                          iVar13 = DAT_14cbcd978 + 1;
                        }
                        iVar7 = iVar13 + 0x1f;
                        if (-1 < iVar13) {
                          iVar7 = iVar13;
                        }
                        uVar24 = local_128;
                        if (iVar13 % 0x20 != 0) {
                          puVar14 = DAT_14cbcd970;
                          if (DAT_14cbcd970 == (undefined4 *)0x0) {
                            puVar14 = &DAT_14cbcd960;
                          }
                          bVar11 = -(char)(iVar13 % 0x20);
                          DAT_14cbcd978 = iVar13;
                          puVar14[iVar7 >> 5] =
                               (uint)(puVar14[iVar7 >> 5] << (bVar11 & 0x1f)) >> (bVar11 & 0x1f);
                          iVar13 = DAT_14cbcd978;
                        }
                      }
                      DAT_14cbcd978 = iVar13;
                      local_118 = (longlong)(int)uVar24;
                      puVar14 = DAT_14cbcd970;
                      if (DAT_14cbcd970 == (undefined4 *)0x0) {
                        puVar14 = &DAT_14cbcd960;
                      }
                      bVar11 = (byte)iVar18 & 0x1f;
                      puVar14[iVar17 >> 5] =
                           puVar14[iVar17 >> 5] & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
                    }
                    else {
                      uVar24 = (ulonglong)DAT_14cbcd980;
                      local_118 = (longlong)(int)DAT_14cbcd980;
                      DAT_14cbcd980 = *(uint *)(DAT_14cbcd950 + 4 + local_118 * 0x50);
                      DAT_14cbcd984 = DAT_14cbcd984 + -1;
                      if (DAT_14cbcd984 != 0) {
                        *(undefined4 *)(DAT_14cbcd950 + (longlong)(int)DAT_14cbcd980 * 0x50) =
                             0xffffffff;
                      }
                    }
                    iVar18 = (int)uVar24;
                    puVar14 = DAT_14cbcd970;
                    if (DAT_14cbcd970 == (undefined4 *)0x0) {
                      puVar14 = &DAT_14cbcd960;
                    }
                    iVar7 = iVar18 + 0x1f;
                    if (-1 < iVar18) {
                      iVar7 = iVar18;
                    }
                    puVar14[iVar7 >> 5] = puVar14[iVar7 >> 5] | 1 << ((byte)uVar24 & 0x1f);
                    lVar4 = DAT_14cbcd950;
                    local_118 = local_118 * 0x50;
                    pcVar2 = (char *)(local_118 + DAT_14cbcd950);
                    puVar9 = (uint *)(pcVar2 + 0x10);
                    pcVar2[0] = '\0';
                    pcVar2[1] = '\0';
                    pcVar2[4] = '\0';
                    pcVar2[5] = '\0';
                    pcVar2[6] = '\0';
                    pcVar2[7] = '\0';
                    pcVar2[8] = '\0';
                    pcVar2[9] = '\0';
                    pcVar2[10] = '\0';
                    pcVar2[0xb] = '\0';
                    puVar9[0] = 0;
                    puVar9[1] = 0;
                    pcVar2[0x18] = '\0';
                    pcVar2[0x19] = '\0';
                    pcVar2[0x1a] = '\0';
                    pcVar2[0x1b] = '\0';
                    pcVar2[0x1c] = '\0';
                    pcVar2[0x1d] = '\0';
                    pcVar2[0x1e] = '\0';
                    pcVar2[0x1f] = '\0';
                    pcVar2[0x20] = '\0';
                    pcVar2[0x21] = '\0';
                    pcVar2[0x22] = '\0';
                    pcVar2[0x23] = '\0';
                    pcVar2[0x28] = '\0';
                    pcVar2[0x29] = '\0';
                    pcVar2[0x2a] = '\0';
                    pcVar2[0x2b] = '\0';
                    pcVar2[0x2c] = '\0';
                    pcVar2[0x2d] = '\0';
                    pcVar2[0x2e] = '\0';
                    pcVar2[0x2f] = '\0';
                    pcVar2[0x30] = '\0';
                    pcVar2[0x31] = '\0';
                    pcVar2[0x32] = '\0';
                    pcVar2[0x33] = '\0';
                    pcVar2[0x34] = '\0';
                    pcVar2[0x35] = '\0';
                    pcVar2[0x36] = '\0';
                    pcVar2[0x37] = '\0';
                    *(undefined4 *)(pcVar2 + 8) = uStack_90;
                    *(ulonglong *)pcVar2 =
                         CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)));
                    local_128 = uVar24;
                    FUN_1447715ec(puVar9,&local_88);
                    *(undefined8 *)(pcVar2 + 0x38) = local_108;
                    *(uint *)(pcVar2 + 0x40) = local_100;
                    pcVar2[0x48] = -1;
                    pcVar2[0x49] = -1;
                    pcVar2[0x4a] = -1;
                    pcVar2[0x4b] = -1;
                    if (*pcVar2 == '\x01') {
                      FUN_1447a97f4(&local_d0,puVar9);
                      if (0 < (int)local_cc) {
                        lVar19 = 0;
                        uVar24 = 0;
                        uVar12 = DAT_14c948000;
                        iVar18 = (int)local_cc;
                        do {
                          lVar23 = (longlong)&local_cc + 4;
                          bVar28 = local_d0 != 0;
                          bVar27 = local_d0 != uVar12;
                          piVar20 = (int *)&DAT_14c948618;
                          piVar22 = (int *)&DAT_14c948620;
                          if (bVar27 && bVar28) {
                            lVar21 = lVar23;
                            if (0 < local_ac) {
                              lVar21 = local_b8;
                            }
                            if (1 < iVar18) {
                              lVar21 = local_b8;
                            }
                            piVar22 = (int *)(lVar21 + lVar19 + 8);
                            piVar20 = (int *)(lVar21 + lVar19);
                          }
                          if ((*piVar20 == DAT_14cb7beb0) && (*piVar22 == DAT_14cb7beb8)) {
LAB_140b79d2c:
                            FUN_1402b5374(&local_d0,uVar24 & 0xffffffff,0);
                            uVar12 = DAT_14c948000;
                            iVar18 = (int)local_cc;
                          }
                          else {
                            piVar20 = (int *)&DAT_14c948620;
                            piVar22 = (int *)&DAT_14c948618;
                            if (bVar27 && bVar28) {
                              lVar21 = lVar23;
                              if (0 < local_ac) {
                                lVar21 = local_b8;
                              }
                              if (1 < iVar18) {
                                lVar21 = local_b8;
                              }
                              piVar20 = (int *)(lVar21 + lVar19 + 8);
                              piVar22 = (int *)(lVar21 + lVar19);
                            }
                            if ((*piVar22 == DAT_14cb7bec8) && (*piVar20 == DAT_14cb7bed0))
                            goto LAB_140b79d2c;
                            piVar20 = (int *)&DAT_14c948620;
                            piVar22 = (int *)&DAT_14c948618;
                            if (bVar27 && bVar28) {
                              lVar21 = lVar23;
                              if (0 < local_ac) {
                                lVar21 = local_b8;
                              }
                              if (1 < iVar18) {
                                lVar21 = local_b8;
                              }
                              piVar20 = (int *)(lVar21 + lVar19 + 8);
                              piVar22 = (int *)(lVar21 + lVar19);
                            }
                            if ((*piVar22 == DAT_14cb7bee0) && (*piVar20 == DAT_14cb7bee8))
                            goto LAB_140b79d2c;
                            piVar20 = (int *)&DAT_14c948620;
                            piVar22 = (int *)&DAT_14c948618;
                            if (bVar27 && bVar28) {
                              lVar21 = lVar23;
                              if (0 < local_ac) {
                                lVar21 = local_b8;
                              }
                              if (1 < iVar18) {
                                lVar21 = local_b8;
                              }
                              piVar20 = (int *)(lVar21 + lVar19 + 8);
                              piVar22 = (int *)(lVar21 + lVar19);
                            }
                            if ((*piVar22 == DAT_14cb7bef8) && (*piVar20 == DAT_14cb7bf00))
                            goto LAB_140b79d2c;
                            piVar20 = (int *)&DAT_14c948620;
                            piVar22 = (int *)&DAT_14c948618;
                            if (bVar27 && bVar28) {
                              if (0 < local_ac) {
                                lVar23 = local_b8;
                              }
                              if (1 < iVar18) {
                                lVar23 = local_b8;
                              }
                              piVar20 = (int *)(lVar23 + lVar19 + 8);
                              piVar22 = (int *)(lVar23 + lVar19);
                            }
                            if ((*piVar22 == DAT_14cb7bf10) && (*piVar20 == DAT_14cb7bf18))
                            goto LAB_140b79d2c;
                          }
                          uVar24 = uVar24 + 1;
                          lVar19 = lVar19 + 0xc;
                        } while ((longlong)uVar24 < (longlong)iVar18);
                      }
                      uVar12 = local_d0;
                      if (local_b8 != 0) {
                        FUN_1400020a8();
                      }
                    }
                    else {
                      uVar12 = *puVar9;
                    }
                    _Src = (void *)(lVar4 + local_118);
                    iVar18 = 1;
                    if (DAT_14cbcd958 - DAT_14cbcd984 == 1) {
                      uVar6 = 1;
                    }
                    else {
                      iVar7 = FUN_140b7a4d8(uVar12,_Src);
                      lVar4 = DAT_14cbcd950;
                      if (iVar7 != -1) {
                        if (*(longlong *)(DAT_14cbcd950 + 0x28 + (longlong)iVar7 * 0x50) != 0) {
                          FUN_1400020a8();
                        }
                        memmove((void *)(lVar4 + (longlong)iVar7 * 0x50),_Src,0x48);
                        FUN_148d888f0(local_128);
                        plVar25 = local_110;
                        goto LAB_140b7a121;
                      }
                      uVar6 = DAT_14cbcd958 - DAT_14cbcd984;
                      if (3 < uVar6) {
                        uVar24 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
                        lVar4 = 0x3f;
                        if (uVar24 != 0) {
                          for (; uVar24 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                          }
                        }
                        iVar18 = 1 << ((byte)lVar4 & 0x1f);
                      }
                    }
                    if (((int)uVar6 < 1) || (iVar18 <= DAT_14cbcd998)) {
                      uVar12 = DAT_14cbcd998 - 1U & uVar12;
                      *(uint *)((longlong)_Src + 0x4c) = uVar12;
                      puVar10 = DAT_14cbcd990;
                      if (DAT_14cbcd990 == (undefined *)0x0) {
                        puVar10 = &DAT_14cbcd988;
                      }
                      *(undefined4 *)((longlong)_Src + 0x48) =
                           *(undefined4 *)
                            (puVar10 + ((longlong)DAT_14cbcd998 - 1U & (longlong)(int)uVar12) * 4);
                      puVar10 = DAT_14cbcd990;
                      if (DAT_14cbcd990 == (undefined *)0x0) {
                        puVar10 = &DAT_14cbcd988;
                      }
                      *(int *)(puVar10 + ((longlong)DAT_14cbcd998 - 1U & (longlong)(int)uVar12) * 4)
                           = (int)local_128;
                      plVar25 = local_110;
                    }
                    else {
                      DAT_14cbcd998 = iVar18;
                      FUN_140b7abe2();
                      plVar25 = local_110;
                    }
                  }
LAB_140b7a121:
                  if (local_70 != 0) {
                    FUN_1400020a8();
                  }
                }
                if (local_120 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_120 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_120)(local_120);
                    LOCK();
                    piVar20 = (int *)((longlong)local_120 + 0xc);
                    *piVar20 = *piVar20 + -1;
                    UNLOCK();
                    if (*piVar20 == 0) {
                      (**(code **)(*local_120 + 0x10))();
                    }
                  }
                }
              }
            }
            lVar15 = lVar15 + 0xc0;
          } while (lVar15 != lVar26);
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar25);
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8(local_e8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b7a3c6 FUN_140b7a3c6 body=57 status=ok
// SIG undefined FUN_140b7a3c6(void)

void FUN_140b7a3c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5a08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5a08 = FUN_140002ddd(FUN_1465c421a,uVar1,L"MissionGiverType_PoA");
  }
  return;
}



// FUNCTION 140b7a400 FUN_140b7a400 body=216 status=ok
// SIG undefined FUN_140b7a400(void)

undefined8 * FUN_140b7a400(longlong param_1,undefined8 *param_2,char *param_3)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  if (*param_3 == '\v') {
    piVar1 = (int *)&DAT_14c948618;
    if (((*(int *)(param_3 + 0x10) != 0) && (0 < (int)*(uint *)(param_3 + 0x14))) &&
       (*(int *)(param_3 + 0x10) != DAT_14c948000)) {
      piVar1 = (int *)(param_3 + 0x18);
      if (0 < *(int *)(param_3 + 0x34)) {
        piVar1 = *(int **)(param_3 + 0x28);
      }
      if (1 < *(uint *)(param_3 + 0x14)) {
        piVar1 = *(int **)(param_3 + 0x28);
      }
    }
    if ((longlong)*(int *)(param_1 + 0x98) != 0) {
      piVar2 = *(int **)(param_1 + 0x90);
      lVar3 = (longlong)*(int *)(param_1 + 0x98) * 0x48;
      do {
        if ((*piVar2 == *piVar1) && (piVar2[2] == piVar1[2])) {
          if (piVar2 != (int *)0x0) {
            FUN_14096c63a(piVar2 + 4,param_2);
            FUN_140b7a557(param_2,param_3);
            return param_2;
          }
          break;
        }
        piVar2 = piVar2 + 0x12;
        lVar3 = lVar3 + -0x48;
      } while (lVar3 != 0);
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = *(undefined8 *)param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 8);
  FUN_1447715ec(param_2 + 2,param_3 + 0x10);
  return param_2;
}



// FUNCTION 140b7a4d8 FUN_140b7a4d8 body=127 status=ok
// SIG undefined FUN_140b7a4d8(void)

int FUN_140b7a4d8(uint param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  
  if (DAT_14cbcd958 != DAT_14cbcd984) {
    puVar3 = &DAT_14cbcd988;
    if (DAT_14cbcd990 != (undefined *)0x0) {
      puVar3 = DAT_14cbcd990;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cbcd998 - 1U & param_1) * 4); iVar1 != -1;
        iVar1 = *(int *)(DAT_14cbcd950 + 0x48 + (longlong)iVar1 * 0x50)) {
      cVar2 = FUN_14493b798(DAT_14cbcd950 + (longlong)iVar1 * 0x50,param_2);
      if (cVar2 != '\0') {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 140b7a557 FUN_140b7a557 body=322 status=ok
// SIG undefined FUN_140b7a557(void)

void FUN_140b7a557(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_68 [44];
  undefined1 local_3c [12];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 == 0) {
    if ((int)DAT_14c948618 == 0) goto LAB_140b7a5f7;
LAB_140b7a661:
    local_28 = DAT_14c948620;
    local_30 = CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
LAB_140b7a63f:
    FUN_1402939f8(param_1,&local_30);
    iVar3 = *(int *)(param_2 + 0x10);
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x14);
    if (uVar1 < 2 || iVar3 == DAT_14c948000) {
      piVar4 = (int *)&DAT_14c948618;
    }
    else {
      lVar5 = param_2 + 0x18;
      if (0 < *(int *)(param_2 + 0x34)) {
        lVar5 = *(longlong *)(param_2 + 0x28);
      }
      if (1 < (int)uVar1) {
        lVar5 = *(longlong *)(param_2 + 0x28);
      }
      piVar4 = (int *)&DAT_14c948618;
      if (1 < (int)uVar1) {
        piVar4 = (int *)(lVar5 + 0xc);
      }
    }
    if (*piVar4 != 0) {
      if ((((iVar3 == 0) || (iVar2 = *(int *)(param_2 + 0x14), iVar2 == 0)) ||
          (iVar3 == DAT_14c948000)) || ((iVar2 == 1 || (iVar2 < 2)))) goto LAB_140b7a661;
      local_28 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0x14);
      local_30 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xc);
      goto LAB_140b7a63f;
    }
  }
  piVar4 = (int *)&DAT_14c948618;
  if (((iVar3 != 0) && (2 < *(int *)(param_2 + 0x14))) && (iVar3 != DAT_14c948000)) {
    piVar4 = (int *)(*(longlong *)(param_2 + 0x28) + 0x18);
  }
  if (*piVar4 != 0) {
    FUN_144a659ac((int *)(param_2 + 0x10),local_3c,2);
    FUN_1402939f8(param_1,local_3c);
  }
LAB_140b7a5f7:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b7a69a FUN_140b7a69a body=869 status=ok
// SIG undefined FUN_140b7a69a(void)

void FUN_140b7a69a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar5 = (**(code **)(*param_1 + 0x300))();
  local_a0 = param_1;
  if (cVar5 == '\0') {
    plVar1 = param_1 + 0x5f;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = plVar1;
    if ((int)param_1[0x62] == 0) {
      uVar13 = 1;
      uVar11 = 0xffffffff;
      iVar12 = 0;
      iVar15 = 0;
      iVar8 = 0;
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar13 = (ulonglong)local_90 >> 0x20;
      iVar12 = (int)param_1[0x62];
      iVar9 = (int)local_90;
      uVar11 = (uint)uStack_80;
      iVar8 = uStack_80._4_4_;
      iVar15 = (uint)local_78;
    }
    plVar2 = local_88;
    if (iVar8 != iVar12 || local_88 != plVar1) {
      do {
        local_a4 = iVar12;
        lVar6 = *(longlong *)(param_1[0x5d] + 0x10 + (longlong)iVar8 * 0x20);
        if ((lVar6 != 0) && (plVar14 = *(longlong **)(lVar6 + 0x30), plVar14 != (longlong *)0x0)) {
          lVar6 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar7 = FUN_14060ed7a();
          if ((lVar7 != 0) &&
             ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)))) {
            (*(code *)*local_98)(local_98[1],plVar14);
          }
        }
        uVar11 = uVar11 & ~(uint)uVar13;
        plVar14 = (longlong *)plVar2[2];
        if ((longlong *)plVar2[2] == (longlong *)0x0) {
          plVar14 = plVar2;
        }
        iVar12 = (int)plVar2[3];
        lVar6 = (longlong)iVar9;
        uVar10 = *(uint *)((longlong)plVar14 + lVar6 * 4) & uVar11;
        if (uVar10 == 0) {
          iVar8 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar8 = iVar12 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar4 = iVar8;
          if (iVar8 < iVar9) {
            iVar4 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar7 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar14 + lVar7 * 4 + lVar6 * 4 + 4);
              if (uVar10 != 0) {
                iVar9 = iVar9 + (int)lVar7 + 1;
                uVar11 = 0xffffffff;
                goto LAB_140b7a82e;
              }
              iVar15 = iVar15 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar4 - lVar6 != lVar7);
            uVar11 = 0xffffffff;
            iVar9 = iVar4;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar12;
        }
        else {
LAB_140b7a82e:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar3 = uVar13 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar8) {
            iVar8 = iVar12;
          }
        }
        param_1 = local_a0;
        iVar12 = local_a4;
      } while (iVar8 != local_a4 || plVar2 != plVar1);
    }
  }
  else {
    plVar1 = param_1 + 0x3f;
    plVar2 = param_1 + 0x41;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar2;
    if ((int)param_1[0x44] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = (int)local_a0[0x44];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar6 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar9 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (local_78 = lVar6, plStack_60 != plVar2)) {
      do {
        local_78 = lVar6;
        plVar14 = *(longlong **)(*local_90 + 0x10 + (longlong)iVar9 * 0x70);
        if (plVar14 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar7 = FUN_14060ed7a();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar14);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        lVar6 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar2 || local_78._4_4_ != iVar12));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b7aa00 FUN_140b7aa00 body=481 status=ok
// SIG undefined FUN_140b7aa00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b7aa00(void)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  undefined4 *local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0x100000000;
  local_48 = &DAT_14cbcd960;
  local_40 = 0xffffffff;
  local_38 = 0;
  if (DAT_14cbcd978 == 0) {
    uVar14 = 1;
    local_40._4_4_ = 0;
    uVar9 = 0xffffffff;
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    uVar14 = local_50 >> 0x20;
    uVar9 = (uint)local_40;
    iVar8 = (int)local_50;
  }
  puVar3 = local_48;
  iVar4 = local_48[6];
  lVar7 = DAT_14cbcd950;
  iVar6 = local_40._4_4_;
  iVar10 = local_38;
  if (local_40._4_4_ < iVar4) {
    do {
      if (*(longlong *)(lVar7 + 0x28 + (longlong)iVar6 * 0x50) != 0) {
        FUN_1400020a8();
        iVar4 = puVar3[6];
        lVar7 = DAT_14cbcd950;
      }
      uVar9 = uVar9 & ~(uint)uVar14;
      puVar11 = *(undefined4 **)(puVar3 + 4);
      if (*(undefined4 **)(puVar3 + 4) == (undefined4 *)0x0) {
        puVar11 = puVar3;
      }
      lVar13 = (longlong)iVar8;
      uVar5 = puVar11[lVar13] & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar8) {
          iVar2 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar11[lVar13 + lVar12 + 1];
          if (uVar5 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar2 - lVar13 == lVar12) goto LAB_140b7ab63;
        }
        iVar8 = iVar8 + (int)lVar12 + 1;
        uVar9 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_140b7ab63:
  DAT_14cbcd958 = 0;
  if (DAT_14cbcd95c != 0) {
    FUN_140e9549c(&DAT_14cbcd950,0);
  }
  _DAT_14cbcd980 = 0xffffffff;
  DAT_14cbcd978 = 0;
  if (0x80 < DAT_14cbcd97c) {
    DAT_14cbcd97c = 0x80;
    FUN_1446efbd8(&DAT_14cbcd960,0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b7abe2 FUN_140b7abe2 body=1159 status=ok
// SIG undefined FUN_140b7abe2(void)

void FUN_140b7abe2(void)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined4 **ppuVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_a8 [32];
  int local_88;
  uint local_84;
  undefined4 *local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cbcd990 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbcd990,0,0,4);
  }
  uVar11 = DAT_14cbcd998;
  if (DAT_14cbcd998 != 0) {
    FUN_144a1cbf0(&DAT_14cbcd988,0,DAT_14cbcd998,4);
    if (0 < (int)uVar11) {
      uVar2 = 0;
      do {
        puVar6 = DAT_14cbcd990;
        if (DAT_14cbcd990 == (undefined *)0x0) {
          puVar6 = &DAT_14cbcd988;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbcd998 + 0x7fffffff & uVar2) * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar11 != uVar2);
    }
    local_70 = 0x100000000;
    local_68 = &DAT_14cbcd960;
    local_60 = 0xffffffff;
    local_58 = 0;
    if (DAT_14cbcd978 == 0) {
      uVar10 = 1;
      uVar13 = 0xffffffff;
      local_60._4_4_ = 0;
      uVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      uVar9 = local_70 & 0xffffffff;
      uVar10 = local_70 >> 0x20;
      uVar13 = local_60 & 0xffffffff;
    }
    if (local_60._4_4_ < (int)local_68[6]) {
      iVar17 = local_60._4_4_;
      iVar8 = local_58;
      local_80 = local_68;
      do {
        local_84 = (uint)uVar13;
        lVar16 = DAT_14cbcd950 + (longlong)iVar17 * 0x50;
        local_88 = iVar8;
        local_78 = uVar9;
        if (*(char *)(DAT_14cbcd950 + (longlong)iVar17 * 0x50) == '\x01') {
          FUN_1447a97f4(&local_70,lVar16 + 0x10);
          if (0 < local_70._4_4_) {
            lVar18 = 0;
            uVar9 = 0;
            iVar8 = local_70._4_4_;
            iVar3 = DAT_14c948000;
            do {
              bVar19 = (int)local_70 != 0;
              bVar20 = (int)local_70 != iVar3;
              piVar12 = &DAT_14c948620;
              piVar14 = (int *)&DAT_14c948618;
              if (bVar20 && bVar19) {
                ppuVar15 = &local_68;
                if (0 < local_4c) {
                  ppuVar15 = (undefined4 **)CONCAT44(uStack_54,local_58);
                }
                if (1 < iVar8) {
                  ppuVar15 = (undefined4 **)CONCAT44(uStack_54,local_58);
                }
                piVar12 = (int *)((longlong)ppuVar15 + lVar18 + 8);
                piVar14 = (int *)((longlong)ppuVar15 + lVar18);
              }
              if ((*piVar14 == DAT_14cb7beb0) && (*piVar12 == DAT_14cb7beb8)) {
LAB_140b7aed9:
                FUN_1402b5374(&local_70,uVar9 & 0xffffffff,0);
                iVar8 = local_70._4_4_;
                iVar3 = DAT_14c948000;
              }
              else {
                piVar12 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  ppuVar15 = &local_68;
                  if (0 < local_4c) {
                    ppuVar15 = (undefined4 **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar8) {
                    ppuVar15 = (undefined4 **)CONCAT44(uStack_54,local_58);
                  }
                  piVar12 = (int *)((longlong)ppuVar15 + lVar18 + 8);
                  piVar14 = (int *)((longlong)ppuVar15 + lVar18);
                }
                if ((*piVar14 == DAT_14cb7bec8) && (*piVar12 == DAT_14cb7bed0)) goto LAB_140b7aed9;
                piVar12 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  ppuVar15 = &local_68;
                  if (0 < local_4c) {
                    ppuVar15 = (undefined4 **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar8) {
                    ppuVar15 = (undefined4 **)CONCAT44(uStack_54,local_58);
                  }
                  piVar12 = (int *)((longlong)ppuVar15 + lVar18 + 8);
                  piVar14 = (int *)((longlong)ppuVar15 + lVar18);
                }
                if ((*piVar14 == DAT_14cb7bee0) && (*piVar12 == DAT_14cb7bee8)) goto LAB_140b7aed9;
                piVar12 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  ppuVar15 = &local_68;
                  if (0 < local_4c) {
                    ppuVar15 = (undefined4 **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar8) {
                    ppuVar15 = (undefined4 **)CONCAT44(uStack_54,local_58);
                  }
                  piVar12 = (int *)((longlong)ppuVar15 + lVar18 + 8);
                  piVar14 = (int *)((longlong)ppuVar15 + lVar18);
                }
                if ((*piVar14 == DAT_14cb7bef8) && (*piVar12 == DAT_14cb7bf00)) goto LAB_140b7aed9;
                piVar12 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  ppuVar15 = &local_68;
                  if (0 < local_4c) {
                    ppuVar15 = (undefined4 **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar8) {
                    ppuVar15 = (undefined4 **)CONCAT44(uStack_54,local_58);
                  }
                  piVar12 = (int *)((longlong)ppuVar15 + lVar18 + 8);
                  piVar14 = (int *)((longlong)ppuVar15 + lVar18);
                }
                if ((*piVar14 == DAT_14cb7bf10) && (*piVar12 == DAT_14cb7bf18)) goto LAB_140b7aed9;
              }
              uVar9 = uVar9 + 1;
              lVar18 = lVar18 + 0xc;
            } while ((longlong)uVar9 < (longlong)iVar8);
          }
          iVar8 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar8 = *(int *)(lVar16 + 0x10);
        }
        uVar9 = (longlong)iVar8 & (longlong)(int)DAT_14cbcd998 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar16 + 0x4c) = iVar8;
        puVar6 = DAT_14cbcd990;
        if (DAT_14cbcd990 == (undefined *)0x0) {
          puVar6 = &DAT_14cbcd988;
        }
        *(undefined4 *)(lVar16 + 0x48) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbcd998 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbcd990;
        if (DAT_14cbcd990 == (undefined *)0x0) {
          puVar6 = &DAT_14cbcd988;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbcd998 - 1U) * 4) = iVar17;
        uVar11 = local_84 & ~(uint)uVar10;
        uVar13 = (ulonglong)uVar11;
        puVar7 = *(undefined4 **)(local_80 + 4);
        if (*(undefined4 **)(local_80 + 4) == (undefined4 *)0x0) {
          puVar7 = local_80;
        }
        iVar3 = local_80[6];
        iVar17 = (int)local_78;
        lVar16 = (longlong)iVar17;
        uVar11 = puVar7[lVar16] & uVar11;
        uVar9 = local_78;
        iVar8 = local_88;
        if (uVar11 == 0) {
          iVar4 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar4 = iVar3 + -1;
          }
          iVar4 = iVar4 >> 5;
          iVar5 = iVar4;
          if (iVar4 < iVar17) {
            iVar5 = iVar17;
          }
          if (iVar4 <= iVar17) break;
          lVar18 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar11 = puVar7[lVar16 + lVar18 + 1];
            if (uVar11 != 0) break;
            lVar18 = lVar18 + 1;
            if (iVar5 - lVar16 == lVar18) goto LAB_140b7b042;
          }
          uVar13 = 0xffffffff;
          uVar9 = (ulonglong)(iVar17 + (int)lVar18 + 1);
        }
        uVar10 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar10 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar17 = (iVar8 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar3);
    }
  }
LAB_140b7b042:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b7b06a FUN_140b7b06a body=2637 status=ok
// SIG undefined FUN_140b7b06a(void)

void FUN_140b7b06a(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 *puVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  int iVar35;
  longlong *plVar36;
  uint uVar37;
  longlong lVar38;
  bool bVar39;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  int local_a8;
  int local_a4;
  ulonglong local_a0;
  ulonglong local_98;
  longlong *local_90;
  longlong *local_88;
  uint *local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14577a51e();
  if (DAT_14cb86da8 != 0) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_14577a30e(&local_78);
    if ((longlong)(int)uStack_70 != 0) {
      local_90 = local_78 + (int)uStack_70;
      plVar36 = local_78;
      do {
        lVar5 = *plVar36;
        local_88 = plVar36;
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x750) == '\0')) {
          uVar14 = *(uint *)(lVar5 + 0x3d0);
          if (uVar14 == 0) {
            uVar28 = 1;
            uVar30 = 0;
            uVar22 = 0;
            iVar29 = 0;
          }
          else {
            puVar16 = *(uint **)(lVar5 + 0x3c8);
            if (*(uint **)(lVar5 + 0x3c8) == (uint *)0x0) {
              puVar16 = (uint *)(lVar5 + 0x3b8);
            }
            uVar22 = *puVar16;
            if (uVar22 == 0) {
              iVar29 = uVar14 + 0x1e;
              if (-1 < (int)(uVar14 - 1)) {
                iVar29 = uVar14 - 1;
              }
              uVar30 = 0;
              uVar28 = (ulonglong)(uint)(iVar29 >> 5);
              if (iVar29 >> 5 < 1) {
                uVar28 = uVar30;
              }
              iVar29 = 0;
              do {
                if (uVar28 == uVar30) goto LAB_140b7b6f4;
                iVar29 = iVar29 + 0x20;
                uVar22 = puVar16[uVar30 + 1];
                uVar30 = uVar30 + 1;
              } while (uVar22 == 0);
            }
            else {
              uVar30 = 0;
              iVar29 = 0;
            }
            uVar28 = (ulonglong)(-uVar22 & uVar22);
            uVar18 = uVar28 * 2 + 1;
            lVar31 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            uVar22 = (iVar29 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
            if ((int)uVar14 <= (int)uVar22) {
              uVar22 = uVar14;
            }
          }
          if (uVar22 != uVar14) {
            uVar37 = 0xffffffff;
            local_a0 = (ulonglong)uVar14;
            local_80 = (uint *)(lVar5 + 0x3b8);
            do {
              local_a8 = iVar29;
              lVar31 = *(longlong *)
                        (*(longlong *)(lVar5 + 0x3a8) + 0x10 + (longlong)(int)uVar22 * 0x20);
              if (lVar31 != 0) {
                uVar4 = *(ushort *)(lVar31 + 0x2ae);
                lVar32 = *(longlong *)(DAT_14cb86da8 + 0x340);
                lVar38 = *(longlong *)(lVar32 + (ulonglong)uVar4 * 0x18);
                if (lVar38 == 0) {
LAB_140b7b1e5:
                  uVar4 = *(ushort *)(lVar31 + 0x2ae);
                  lVar32 = *(longlong *)(DAT_14cb86da8 + 0x340);
                  lVar38 = *(longlong *)(lVar32 + (ulonglong)uVar4 * 0x18);
                  if (lVar38 != 0) {
                    uVar17 = FUN_140b7baf2();
                    cVar13 = FUN_1448093f4(lVar38,uVar17);
                    if (cVar13 != '\0') {
                      plVar36 = (longlong *)(lVar32 + (ulonglong)uVar4 * 0x18);
                      lVar32 = *plVar36;
                      plVar36 = (longlong *)plVar36[1];
                      if (plVar36 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
                        UNLOCK();
                        LOCK();
                        plVar1 = plVar36 + 1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)*plVar1 == 0) {
                          (**(code **)*plVar36)(plVar36);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar36 + 0xc);
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (*piVar2 == 0) {
                            (**(code **)(*plVar36 + 0x10))(plVar36);
                          }
                        }
                      }
                      if (lVar32 != 0) {
                        plVar36 = (longlong *)(lVar32 + 0x188);
                        goto LAB_140b7b305;
                      }
                    }
                  }
                }
                else {
                  uVar17 = FUN_140b7bab8();
                  cVar13 = FUN_1448093f4(lVar38,uVar17);
                  if (cVar13 == '\0') goto LAB_140b7b1e5;
                  plVar36 = (longlong *)(lVar32 + (ulonglong)uVar4 * 0x18);
                  lVar32 = *plVar36;
                  plVar36 = (longlong *)plVar36[1];
                  if (plVar36 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
                    UNLOCK();
                    LOCK();
                    plVar1 = plVar36 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar36)(plVar36);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar36 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar36 + 0x10))(plVar36);
                      }
                    }
                  }
                  if (lVar32 == 0) goto LAB_140b7b1e5;
                  plVar36 = (longlong *)(lVar32 + 0xd0);
LAB_140b7b305:
                  lVar38 = *plVar36;
                  lVar32 = plVar36[1];
                  if (lVar38 == 0 || lVar32 != 0) {
                    if (lVar38 == 0 || lVar32 == 0) goto LAB_140b7b21f;
                  }
                  else {
                    lVar32 = FUN_140b7bb2c();
                    lVar38 = *plVar36;
                  }
                  uVar18 = FUN_14477b664(lVar32);
                  uVar14 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
                  uVar22 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                  uVar22 = uVar22 >> 0x10 ^ uVar22;
                  uVar14 = (uint)((ulonglong)lVar38 >> 0x10);
                  uVar25 = (uint)lVar38 & 0xffff;
                  uVar14 = uVar22 >> 0xd ^
                           (((uint)lVar38 << 0x10 | uVar25) + (int)((ulonglong)lVar38 >> 0x20) +
                            (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar25 >> 4)) - uVar22;
                  uVar25 = uVar14 << 8 ^ (-0x61c88647 - uVar22) - uVar14;
                  uVar22 = uVar25 >> 0xd ^ (uVar22 - uVar14) - uVar25;
                  uVar14 = uVar22 >> 0xc ^ (uVar14 - uVar25) - uVar22;
                  uVar34 = uVar14 << 0x10 ^ (uVar25 - uVar22) - uVar14;
                  uVar22 = uVar34 >> 5 ^ (uVar22 - uVar14) - uVar34;
                  uVar25 = uVar22 >> 3 ^ (uVar14 - uVar34) - uVar22;
                  uVar14 = uVar25 << 10 ^ (uVar34 - uVar22) - uVar25;
                  iVar29 = FUN_140b7bb66(uVar14 >> 0xf ^ uVar22 - (uVar25 + uVar14),plVar36);
                  uVar14 = DAT_14cbcd9a8;
                  if (iVar29 == -1) {
                    if (DAT_14cbcd9d4 == 0) {
                      uVar18 = (ulonglong)DAT_14cbcd9a8;
                      uVar22 = DAT_14cbcd9a8 + 1;
                      bVar39 = DAT_14cbcd9ac == DAT_14cbcd9a8;
                      DAT_14cbcd9a8 = uVar22;
                      if (bVar39) {
                        FUN_140549c28(&DAT_14cbcd9a0,uVar14);
                      }
                      iVar29 = DAT_14cbcd9c8;
                      if (DAT_14cbcd9c8 == 0) {
                        iVar15 = -1;
                      }
                      else {
                        iVar15 = DAT_14cbcd9c8 + 0x1e;
                        if (-1 < DAT_14cbcd9c8 + -1) {
                          iVar15 = DAT_14cbcd9c8 + -1;
                        }
                        iVar15 = iVar15 >> 5;
                      }
                      iVar23 = DAT_14cbcd9c8 + 1;
                      iVar35 = DAT_14cbcd9c8 + 0x1f;
                      if (-1 < DAT_14cbcd9c8) {
                        iVar35 = DAT_14cbcd9c8;
                      }
                      iVar35 = iVar35 >> 5;
                      if (iVar35 != iVar15) {
                        local_b0 = uVar18;
                        if (DAT_14cbcd9cc <= DAT_14cbcd9c8) {
                          local_a4 = iVar35;
                          if (DAT_14cbcd9c8 + 0x20U < 0xa0) {
                            DAT_14cbcd9cc = 0x80;
                          }
                          else {
                            uVar14 = DAT_14cbcd9c8 + 0x20U >> 5;
                            if (DAT_14cbcd9cc + 0x1fU < 0xa0) {
                              uVar22 = 4;
                              if (4 < uVar14) {
                                uVar22 = uVar14;
                              }
                            }
                            else {
                              uVar22 = uVar14 + (uVar14 * 3 >> 3) + 0x10;
                            }
                            uVar18 = (ulonglong)(uVar22 * 4);
                            if (DAT_14c872d28 != (longlong *)0x0) {
                              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                uVar25 = (uint)(uVar18 + 0xf);
                                if (uVar22 < 0x1ffd) {
                                  uVar18 = (ulonglong)
                                           (ushort)(&DAT_14c841d90)
                                                   [0x32 - (byte)(&DAT_14c841e00)[uVar18 + 0xf >> 4]
                                                   ];
                                }
                                else {
                                  uVar24 = (ulonglong)(uVar25 & 0xfffffff0);
                                  if (uVar24 < 0x7ff1) {
                                    bVar21 = (&DAT_14c841e00)[uVar25 >> 4];
                                    uVar27 = 0x32;
                                    if (0x32 < bVar21) {
                                      uVar27 = (ulonglong)bVar21;
                                    }
                                    uVar33 = 0x32 - (ulonglong)bVar21;
                                    do {
                                      uVar18 = (ulonglong)
                                               (ushort)(&DAT_14c841d90)[uVar33 & 0xffffffff];
                                      if (((&DAT_14c841d90)[uVar33 & 0xffffffff] & 0xf) == 0)
                                      goto LAB_140b7b8cf;
                                      lVar32 = uVar27 + 1 + uVar33;
                                      uVar33 = uVar33 - 1;
                                    } while (lVar32 != 0x33);
                                  }
                                  uVar18 = (ulonglong)DAT_14c841df8;
                                  if (DAT_14c841df8 < 0x11) {
                                    uVar18 = 0x10;
                                  }
                                  uVar18 = -uVar18 & (uVar24 + uVar18) - 1;
                                }
                              }
                              else {
                                local_98 = (ulonglong)uVar14;
                                uVar18 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                   (DAT_14c872d28,uVar18,0);
                                uVar14 = (uint)local_98;
                              }
                            }
LAB_140b7b8cf:
                            iVar15 = (int)(uVar18 >> 2);
                            DAT_14cbcd9cc = iVar15 << 5;
                            if (iVar15 < (int)uVar14) {
                              DAT_14cbcd9cc = -0x20;
                            }
                          }
                          FUN_1446efbd8(&DAT_14cbcd9b0,DAT_14cbcd9c8);
                          iVar23 = DAT_14cbcd9c8 + 1;
                          iVar35 = local_a4;
                        }
                        iVar15 = iVar23 + 0x1f;
                        if (-1 < iVar23) {
                          iVar15 = iVar23;
                        }
                        uVar18 = local_b0;
                        if (iVar23 % 0x20 != 0) {
                          puVar26 = DAT_14cbcd9c0;
                          if (DAT_14cbcd9c0 == (undefined *)0x0) {
                            puVar26 = &DAT_14cbcd9b0;
                          }
                          bVar21 = -(char)(iVar23 % 0x20);
                          DAT_14cbcd9c8 = iVar23;
                          *(uint *)(puVar26 + (longlong)(iVar15 >> 5) * 4) =
                               (uint)(*(int *)(puVar26 + (longlong)(iVar15 >> 5) * 4) <<
                                     (bVar21 & 0x1f)) >> (bVar21 & 0x1f);
                          iVar23 = DAT_14cbcd9c8;
                        }
                      }
                      DAT_14cbcd9c8 = iVar23;
                      lVar32 = (longlong)(int)uVar18;
                      puVar26 = DAT_14cbcd9c0;
                      if (DAT_14cbcd9c0 == (undefined *)0x0) {
                        puVar26 = &DAT_14cbcd9b0;
                      }
                      bVar21 = (byte)iVar29 & 0x1f;
                      *(uint *)(puVar26 + (longlong)iVar35 * 4) =
                           *(uint *)(puVar26 + (longlong)iVar35 * 4) &
                           (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
                    }
                    else {
                      uVar18 = (ulonglong)DAT_14cbcd9d0;
                      lVar32 = (longlong)(int)DAT_14cbcd9d0;
                      DAT_14cbcd9d0 = *(uint *)(DAT_14cbcd9a0 + 4 + lVar32 * 0x28);
                      DAT_14cbcd9d4 = DAT_14cbcd9d4 + -1;
                      if (DAT_14cbcd9d4 != 0) {
                        *(undefined4 *)(DAT_14cbcd9a0 + (longlong)(int)DAT_14cbcd9d0 * 0x28) =
                             0xffffffff;
                      }
                    }
                    iVar29 = (int)uVar18;
                    puVar26 = DAT_14cbcd9c0;
                    if (DAT_14cbcd9c0 == (undefined *)0x0) {
                      puVar26 = &DAT_14cbcd9b0;
                    }
                    iVar15 = iVar29 + 0x1f;
                    if (-1 < iVar29) {
                      iVar15 = iVar29;
                    }
                    *(uint *)(puVar26 + (longlong)(iVar15 >> 5) * 4) =
                         *(uint *)(puVar26 + (longlong)(iVar15 >> 5) * 4) |
                         1 << ((byte)uVar18 & 0x1f);
                    lVar38 = DAT_14cbcd9a0;
                    puVar3 = (undefined8 *)(DAT_14cbcd9a0 + lVar32 * 0x28);
                    *puVar3 = 0;
                    puVar3[1] = 0;
                    *(undefined8 *)(lVar38 + 0x10 + lVar32 * 0x28) = 0;
                    *(longlong *)(lVar38 + lVar32 * 0x28) = *plVar36;
                    local_b0 = uVar18;
                    uVar17 = FUN_14477b664(plVar36[1]);
                    lVar19 = FUN_14477b664(uVar17);
                    *(longlong *)(lVar38 + 8 + lVar32 * 0x28) = lVar19;
                    *(longlong *)(lVar38 + 0x10 + lVar32 * 0x28) = plVar36[2];
                    *(longlong *)(lVar38 + 0x18 + lVar32 * 0x28) = lVar31;
                    *(undefined4 *)(lVar38 + 0x20 + lVar32 * 0x28) = 0xffffffff;
                    if (lVar19 == 0) {
                      lVar19 = FUN_140b7bb2c();
                    }
                    puVar3 = (undefined8 *)(lVar38 + lVar32 * 0x28);
                    uVar17 = *puVar3;
                    uVar18 = FUN_14477b664(lVar19);
                    uVar14 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
                    uVar22 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                    uVar22 = uVar22 >> 0x10 ^ uVar22;
                    uVar14 = (uint)((ulonglong)uVar17 >> 0x10);
                    uVar25 = (uint)uVar17 & 0xffff;
                    uVar14 = uVar22 >> 0xd ^
                             (((uint)uVar17 << 0x10 | uVar25) + (int)((ulonglong)uVar17 >> 0x20) +
                              (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar25 >> 4)) - uVar22;
                    uVar25 = uVar14 << 8 ^ (-0x61c88647 - uVar22) - uVar14;
                    uVar34 = uVar25 >> 0xd ^ (uVar22 - uVar14) - uVar25;
                    uVar14 = uVar34 >> 0xc ^ (uVar14 - uVar25) - uVar34;
                    uVar22 = uVar14 << 0x10 ^ (uVar25 - uVar34) - uVar14;
                    uVar25 = uVar22 >> 5 ^ (uVar34 - uVar14) - uVar22;
                    uVar34 = uVar25 >> 3 ^ (uVar14 - uVar22) - uVar25;
                    uVar14 = uVar34 << 10 ^ (uVar22 - uVar25) - uVar34;
                    uVar14 = uVar14 >> 0xf ^ uVar25 - (uVar34 + uVar14);
                    iVar29 = 1;
                    if (DAT_14cbcd9a8 - DAT_14cbcd9d4 == 1) {
                      uVar22 = 1;
                    }
                    else {
                      iVar15 = FUN_140b7bb66(uVar14,puVar3);
                      lVar31 = DAT_14cbcd9a0;
                      if (iVar15 != -1) {
                        uVar6 = *(undefined4 *)puVar3;
                        uVar7 = *(undefined4 *)((longlong)puVar3 + 4);
                        uVar8 = *(undefined4 *)(puVar3 + 1);
                        uVar9 = *(undefined4 *)((longlong)puVar3 + 0xc);
                        uVar10 = *(undefined4 *)((longlong)puVar3 + 0x14);
                        uVar11 = *(undefined4 *)(puVar3 + 3);
                        uVar12 = *(undefined4 *)((longlong)puVar3 + 0x1c);
                        puVar20 = (undefined4 *)(DAT_14cbcd9a0 + 0x10 + (longlong)iVar15 * 0x28);
                        *puVar20 = *(undefined4 *)(puVar3 + 2);
                        puVar20[1] = uVar10;
                        puVar20[2] = uVar11;
                        puVar20[3] = uVar12;
                        puVar20 = (undefined4 *)(lVar31 + (longlong)iVar15 * 0x28);
                        *puVar20 = uVar6;
                        puVar20[1] = uVar7;
                        puVar20[2] = uVar8;
                        puVar20[3] = uVar9;
                        FUN_148d80a4e(local_b0);
                        goto LAB_140b7b21f;
                      }
                      uVar22 = DAT_14cbcd9a8 - DAT_14cbcd9d4;
                      if (3 < uVar22) {
                        uVar18 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
                        lVar31 = 0x3f;
                        if (uVar18 != 0) {
                          for (; uVar18 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                          }
                        }
                        iVar29 = 1 << ((byte)lVar31 & 0x1f);
                      }
                    }
                    if (((int)uVar22 < 1) || (iVar29 <= DAT_14cbcd9e8)) {
                      uVar14 = DAT_14cbcd9e8 - 1U & uVar14;
                      *(uint *)((longlong)puVar3 + 0x24) = uVar14;
                      puVar20 = DAT_14cbcd9e0;
                      if (DAT_14cbcd9e0 == (undefined4 *)0x0) {
                        puVar20 = &DAT_14cbcd9d8;
                      }
                      *(undefined4 *)(puVar3 + 4) =
                           puVar20[(longlong)DAT_14cbcd9e8 - 1U & (longlong)(int)uVar14];
                      puVar20 = DAT_14cbcd9e0;
                      if (DAT_14cbcd9e0 == (undefined4 *)0x0) {
                        puVar20 = &DAT_14cbcd9d8;
                      }
                      puVar20[(longlong)DAT_14cbcd9e8 - 1U & (longlong)(int)uVar14] = (int)local_b0;
                    }
                    else {
                      DAT_14cbcd9e8 = iVar29;
                      FUN_140b7be04();
                    }
                  }
                }
LAB_140b7b21f:
                uVar14 = *(uint *)(lVar5 + 0x3d0);
              }
              uVar37 = uVar37 & ~(uint)uVar28;
              puVar16 = *(uint **)(lVar5 + 0x3c8);
              if (*(uint **)(lVar5 + 0x3c8) == (uint *)0x0) {
                puVar16 = local_80;
              }
              iVar15 = (int)uVar30;
              lVar31 = (longlong)iVar15;
              uVar22 = puVar16[lVar31] & uVar37;
              iVar29 = local_a8;
              if (uVar22 == 0) {
                iVar23 = uVar14 + 0x1e;
                if (-1 < (int)(uVar14 - 1)) {
                  iVar23 = uVar14 - 1;
                }
                iVar23 = iVar23 >> 5;
                iVar29 = local_a8 + 0x20;
                iVar35 = iVar23;
                if (iVar23 < iVar15) {
                  iVar35 = iVar15;
                }
                if (iVar15 < iVar23) {
                  lVar32 = 0;
                  do {
                    uVar22 = puVar16[lVar31 + lVar32 + 1];
                    if (uVar22 != 0) {
                      uVar30 = (ulonglong)(iVar15 + (int)lVar32 + 1);
                      uVar37 = 0xffffffff;
                      goto LAB_140b7b29b;
                    }
                    iVar29 = iVar29 + 0x20;
                    lVar32 = lVar32 + 1;
                  } while (iVar35 - lVar31 != lVar32);
                  uVar37 = 0xffffffff;
                  iVar15 = iVar35;
                }
                uVar30 = (ulonglong)(iVar15 + 1);
                uVar22 = uVar14;
              }
              else {
LAB_140b7b29b:
                uVar28 = (ulonglong)(-uVar22 & uVar22);
                uVar18 = uVar28 * 2 + 1;
                lVar31 = 0x3f;
                if (uVar18 != 0) {
                  for (; uVar18 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                  }
                }
                uVar22 = (iVar29 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                if ((int)uVar14 <= (int)uVar22) {
                  uVar22 = uVar14;
                }
              }
            } while (uVar22 != (uint)local_a0);
          }
        }
LAB_140b7b6f4:
        plVar36 = local_88 + 1;
      } while (plVar36 != local_90);
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b7bab8 FUN_140b7bab8 body=57 status=ok
// SIG undefined FUN_140b7bab8(void)

void FUN_140b7bab8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf750 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf750 = FUN_140002ddd(FUN_1466128f2,uVar1,L"ObjectiveTypeSettings_OakPickup");
  }
  return;
}



// FUNCTION 140b7baf2 FUN_140b7baf2 body=57 status=ok
// SIG undefined FUN_140b7baf2(void)

void FUN_140b7baf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf5a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf5a0 = FUN_140002ddd(FUN_1466124f2,uVar1,L"ObjectiveTypeSettings_OakExchangeItem");
  }
  return;
}



// FUNCTION 140b7bb2c FUN_140b7bb2c body=57 status=ok
// SIG undefined FUN_140b7bb2c(void)

void FUN_140b7bb2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa138 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa138 = FUN_140002ddd(FUN_1465d69e6,uVar1,L"OakEchoLogDef");
  }
  return;
}


