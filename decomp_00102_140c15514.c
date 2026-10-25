// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140c15514 FUN_140c15514 body=115 status=ok
// SIG undefined FUN_140c15514(void)

void FUN_140c15514(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x294) != 0) {
    uVar1 = *(uint *)(param_1 + 0x290);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 != (longlong *)0x0) &&
         ((((int)plVar3[2] == *(int *)(param_1 + 0x294) &&
           ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)))) {
        return;
      }
    }
  }
  uVar2 = FUN_1447210f0(param_1 + -0x958);
  FUN_1406f625c(uVar2);
  return;
}



// FUNCTION 140c15588 FUN_140c15588 body=154 status=ok
// SIG undefined FUN_140c15588(void)

void FUN_140c15588(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c15624();
  plVar1 = (longlong *)FUN_140343d7a(param_1);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140bc1dde();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_140bc1dde();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != lVar4) goto LAB_140c155e7;
    }
  }
  lVar4 = 0;
LAB_140c155e7:
  FUN_140369bb4(&local_28,lVar4);
  *(undefined4 *)(param_1 + 0x268) = local_28;
  *(undefined4 *)(param_1 + 0x26c) = uStack_24;
  *(undefined4 *)(param_1 + 0x270) = uStack_20;
  *(undefined4 *)(param_1 + 0x274) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c15624 FUN_140c15624 body=141 status=ok
// SIG undefined FUN_140c15624(void)

void FUN_140c15624(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14066e964();
  (**(code **)(*param_1 + 0x108))(param_1);
  lVar1 = param_1[9];
  if (*(int *)(lVar1 + 0xb0) < 1) {
    FUN_140c156b2(lVar1);
  }
  if (lVar1 + 0x80 != 0) {
    lVar2 = FUN_140343d7a(param_1);
    if (lVar2 != 0) {
      FUN_140872e36(param_1 + 0x26,param_1);
      *(undefined1 *)((longlong)param_1 + 0x264) = *(undefined1 *)(param_1[8] + 0x134);
      FUN_1408f9d2c(param_1 + 0x26,lVar1 + 0x80,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140c156b2 FUN_140c156b2 body=284 status=ok
// SIG undefined FUN_140c156b2(void)

void FUN_140c156b2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar2 = param_1 + 0x10;
  FUN_14076be10(plVar2);
  if (*(int *)((longlong)param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_140b3dcb0(param_1 + 0x13,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (param_1[1] == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1[1] + 0x10);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar5);
    }
  }
  param_1[0x12] = lVar5;
  FUN_140b3ddec(plVar2);
  (**(code **)(*param_1 + 0x88))(param_1);
  FUN_140c15808(plVar2);
  lVar5 = param_1[0x30];
  if ((longlong)(int)lVar5 != 0) {
    lVar1 = param_1[0x2f];
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
        lVar4 = FUN_140c157ce();
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          FUN_140c156b2(plVar2);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar6);
  }
  return;
}



// FUNCTION 140c157ce FUN_140c157ce body=57 status=ok
// SIG undefined FUN_140c157ce(void)

void FUN_140c157ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21c48 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21c48 = FUN_140002ddd(FUN_146435a2e,uVar1,L"GbxBrainTaskSettings_Composite");
  }
  return;
}



// FUNCTION 140c15808 FUN_140c15808 body=556 status=ok
// SIG undefined FUN_140c15808(void)

void FUN_140c15808(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar5 = FUN_140a48832();
  lVar6 = FUN_140c47efa();
  lVar3 = *(longlong *)(param_1 + 0x28);
  iVar10 = *(int *)(param_1 + 0x30);
  lVar11 = (longlong)iVar10;
  if (lVar11 == 0) {
    iVar12 = 0;
    iVar9 = 0;
  }
  else {
    lVar13 = 0;
    iVar12 = 0;
    iVar9 = 0;
    do {
      lVar7 = (**(code **)(**(longlong **)(lVar3 + lVar13) + 8))();
      if (((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        if ((lVar6 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38))) {
          bVar14 = false;
        }
        else {
          bVar14 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                   == lVar6 + 0x30;
        }
        iVar9 = iVar9 + (uint)bVar14;
      }
      else {
        iVar12 = iVar12 + 1;
      }
      lVar13 = lVar13 + 8;
    } while (lVar11 * 8 - lVar13 != 0);
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
  }
  plVar1 = (longlong *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x104) < iVar12) {
    FUN_140c15a36(plVar1);
  }
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  plVar2 = (longlong *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) < iVar9) {
    FUN_140c15b76(plVar2,iVar9);
  }
  if (iVar10 != 0) {
    lVar13 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar13);
      lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
      if (((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          iVar10 = *(int *)(param_1 + 0x110);
          *(uint *)(param_1 + 0x110) = iVar10 + 1U;
          plVar8 = plVar2;
          if (*(uint *)(param_1 + 0x114) < iVar10 + 1U) {
            FUN_147f5b1f0(plVar2,iVar10);
          }
          goto LAB_140c159b2;
        }
      }
      else {
        iVar10 = *(int *)(param_1 + 0x100);
        *(uint *)(param_1 + 0x100) = iVar10 + 1U;
        plVar8 = plVar1;
        if (*(uint *)(param_1 + 0x104) < iVar10 + 1U) {
          FUN_147f5b16a(plVar1,iVar10);
        }
LAB_140c159b2:
        *(longlong **)(*plVar8 + (longlong)iVar10 * 8) = plVar4;
      }
      lVar13 = lVar13 + 8;
    } while (lVar11 * 8 != lVar13);
  }
  return;
}



// FUNCTION 140c15a36 FUN_140c15a36 body=320 status=ok
// SIG undefined FUN_140c15a36(void)

void FUN_140c15a36(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140c15a9f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140c15a9f:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 140c15b76 FUN_140c15b76 body=320 status=ok
// SIG undefined FUN_140c15b76(void)

void FUN_140c15b76(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140c15bdf;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140c15bdf:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 140c15cc4 FUN_140c15cc4 body=31 status=ok
// SIG undefined FUN_140c15cc4(void)

undefined8 FUN_140c15cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c15cec FUN_140c15cec body=1727 status=ok
// SIG undefined FUN_140c15cec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c15cec(undefined8 *param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  
  FUN_140c163ac();
  *param_1 = &PTR_FUN_14b635600;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  lVar3 = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(undefined2 *)(param_1 + 0xe1) = 0x101;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x726) = 0;
  *(undefined4 *)((longlong)param_1 + 0x722) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined1 *)(param_1 + 0xe7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x739) = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x755) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0x759) = 0x100;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  *(undefined2 *)((longlong)param_1 + 0x764) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77c) = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0xf00000d0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x804) = 0;
  *(undefined8 *)((longlong)param_1 + 0x834) = 0;
  *(undefined8 *)((longlong)param_1 + 0x864) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x116] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  *(undefined1 *)(param_1 + 0x117) = 1;
  param_1[0x118] = 0x3f00000041a00000;
  param_1[0x119] = 0x40400000437a0000;
  param_1[0x11e] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(undefined1 *)(param_1 + 0x11f) = 1;
  param_1[0x124] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined2 *)(param_1 + 0x125) = 1;
  *(undefined1 *)((longlong)param_1 + 0x92a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x952) = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined1 *)((longlong)param_1 + 0x95a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x95c) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x133] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x10101;
  *(undefined1 *)((longlong)param_1 + 0x9a4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9a9) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9a5) = 0x1010101;
  *(undefined8 *)((longlong)param_1 + 0x9cb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d3) = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  *(undefined1 *)((longlong)param_1 + 0x9db) = 1;
  memset(param_1 + 0x13c,0,0x140);
  *(undefined2 *)(param_1 + 0x164) = 1;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0xb38ec559;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0x4348000000000000;
  param_1[0x170] = 0;
  *(undefined1 *)(param_1 + 0x171) = 0;
  param_1[0x16f] = &PTR_FUN_14b023840;
  *(undefined2 *)(param_1 + 0x172) = 0;
  param_1[0x174] = 0;
  *(undefined1 *)(param_1 + 0x175) = 0;
  param_1[0x173] = &PTR_FUN_14b023870;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbd2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbda) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbcc) = 0;
  param_1[0x17e] = 0;
  *(undefined1 *)(param_1 + 0x17f) = 0;
  param_1[0x17d] = &PTR_FUN_14b023870;
  *(undefined1 *)(param_1 + 0x182) = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc22) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1c) = 0;
  param_1[0x188] = 0;
  *(undefined1 *)(param_1 + 0x189) = 0;
  param_1[0x187] = &PTR_FUN_14b0238b0;
  *(undefined1 *)(param_1 + 0x18a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc54) = 0x43b4000000000000;
  param_1[0x18c] = 0;
  *(undefined4 *)(param_1 + 0x18d) = 0xd;
  param_1[0x18e] = 0;
  *(undefined1 *)(param_1 + 399) = 1;
  param_1[0x192] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  *(undefined4 *)(param_1 + 0x193) = 0xc000;
  *(undefined4 *)((longlong)param_1 + 0xcbc) = 0;
  *(undefined1 *)(param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0xca9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcb1) = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x199] = &PTR_FUN_14affd590;
  *(undefined4 *)(param_1 + 0x19a) = 1;
  param_1[0x19b] = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0xf00d1e03;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  *(undefined1 *)(param_1 + 0x19f) = 1;
  *(undefined2 *)((longlong)param_1 + 0xcfa) = 0;
  param_1[0x1a0] = 0;
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x1a5) = 0;
  *(undefined1 *)(param_1 + 0x1a6) = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  *(undefined4 *)(param_1 + 0x1ad) = 0xaaad1010;
  param_1[0x1ae] = 0;
  *(undefined1 *)(param_1 + 0x1af) = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  *(undefined1 *)(param_1 + 0x1b3) = 1;
  *(undefined8 *)((longlong)param_1 + 0xda9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdb1) = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdd1) = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  *(undefined2 *)(param_1 + 0x1bf) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xdfa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdfc) = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  *(undefined2 *)(param_1 + 0x1c5) = 1;
  *(undefined1 *)((longlong)param_1 + 0xe2a) = 1;
  *(undefined2 *)((longlong)param_1 + 0xe2c) = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  *(undefined4 *)(param_1 + 0x1d2) = 0x304b452c;
  param_1[0x1d3] = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0x1010000;
  auVar2 = _DAT_149931e80;
  auVar4 = pmovsxbq(extraout_XMM0,0x100);
  auVar6 = pmovsxbq(in_XMM3,0x202);
  do {
    if (SUB168(auVar4 ^ auVar2,0) < -0x7ffffffffffffffa) {
      *(char *)((longlong)param_1 + lVar3 + 0xea4) = (char)lVar3;
    }
    if (SUB168(auVar4 ^ auVar2,8) < -0x7ffffffffffffffa) {
      *(char *)((longlong)param_1 + lVar3 + 0xea5) = (char)lVar3 + '\x01';
    }
    lVar3 = lVar3 + 2;
    lVar5 = auVar4._8_8_;
    auVar4._0_8_ = auVar4._0_8_ + auVar6._0_8_;
    auVar4._8_8_ = lVar5 + auVar6._8_8_;
  } while (lVar3 != 6);
  *(undefined2 *)((longlong)param_1 + 0xeaa) = 0x201;
  param_1[0x1d6] = 0;
  *(undefined4 *)(param_1 + 0x1d7) = 0x7401;
  param_1[0x1d8] = 0;
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  *(undefined4 *)(param_1 + 0x1de) = 0xf00000d0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0x42200000;
  param_1[0x1e1] = 0x3f40000000000000;
  memset(param_1 + 0x1e2,0,0x108);
  bVar1 = DAT_14c9a8874 & 0x20;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  *(undefined4 *)(param_1 + 0x207) = 0x7003;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  *(undefined2 *)(param_1 + 0x20d) = 4;
  *(undefined4 *)(param_1 + 0x20a) = 0x3fc00000;
  *(undefined1 *)(param_1 + 0x20e) = 3;
  *(char *)(param_1 + 0x20f) = (bVar1 == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x210) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1082) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1084) = 0x1000000;
  *(undefined1 *)(param_1 + 0x211) = 0;
  param_1[0x216] = 0;
  *(undefined8 *)((longlong)param_1 + 0x109b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10a3) = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  *(undefined4 *)(param_1 + 0x217) = 0x646c63;
  param_1[0x218] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1bb) = 1;
  *(undefined1 *)((longlong)param_1 + 0xeac) = 1;
  return param_1;
}



// FUNCTION 140c163ac FUN_140c163ac body=1028 status=ok
// SIG undefined FUN_140c163ac(void)

undefined8 * FUN_140c163ac(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c167b2();
  *param_1 = &PTR_FUN_14b0e7150;
  *(undefined4 *)(param_1 + 0x24) = 0x42c80000;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x4fc71eb4;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x10001;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d3) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  memset(param_1 + 0x3c,0,0x90);
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x5d] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x414e0001;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xf;
  param_1[0x69] = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  param_1[0x6d] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0x7000;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0x4fc71eb5;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 10;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  bVar1 = DAT_14c9a8874 & 0x20;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x79] = &PTR_FUN_14b157970;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  param_1[0x8b] = 0;
  *(undefined2 *)(param_1 + 0x8f) = 4;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x90) = 3;
  *(char *)(param_1 + 0x91) = (bVar1 == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x92) = 3;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0x1001f;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 2;
  *(undefined2 *)((longlong)param_1 + 0x50c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x50e) = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0x40400000;
  *(undefined4 *)(param_1 + 0xa3) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3f800000;
  param_1[0xa4] = 0x400000003f800000;
  *(undefined4 *)(param_1 + 0xa5) = 0x3f800000;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x532) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x582) = 1;
  param_1[0xb1] = &PTR_FUN_14affcd20;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x651) = 0;
  *(undefined8 *)((longlong)param_1 + 0x659) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  local_40 = "default";
  local_38 = 7;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  if (param_1[0x9e] != (ulonglong)uVar2) {
    param_1[0xa0] = 0;
  }
  param_1[0x9e] = (ulonglong)uVar2;
  lVar3 = FUN_140161d51();
  param_1[0x75] = *(undefined8 *)(lVar3 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x469c4000;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c167b2 FUN_140c167b2 body=457 status=ok
// SIG undefined FUN_140c167b2(void)

undefined8 * FUN_140c167b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ab51200;
  param_1[3] = 0x4461000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = local_48 + 2;
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(param_1 + 5,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_1 + 0x4b) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_14ab72890;
  *(undefined2 *)(param_1 + 0x12) = 0x100;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x201;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1697c FUN_140c1697c body=325 status=ok
// SIG undefined FUN_140c1697c(void)

void FUN_140c1697c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  FUN_140c16c10();
  iVar1 = *(int *)((longlong)param_1 + 0x8e4);
  FUN_140e5e08b(param_1[0x11b],(int)param_1[0x11c]);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x8e4) != 0)) {
    FUN_148957f72(param_1 + 0x11b);
  }
  *(undefined4 *)(param_1 + 0x13d) = 0;
  FUN_1448a8284(param_1 + 0x112);
  *(undefined1 *)(param_1 + 0x140) = 0;
  iVar1 = *(int *)((longlong)param_1 + 0x9fc);
  FUN_140e5e0b3(param_1[0x13e],(int)param_1[0x13f]);
  *(undefined4 *)(param_1 + 0x13f) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x9fc) != 0)) {
    FUN_148957fa2(param_1 + 0x13e);
  }
  FUN_140c16ac2(param_1);
  lVar2 = (**(code **)(param_1[5] + 0x78))(param_1 + 5);
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_140115352(lVar3);
    if (lVar3 != 0) {
      FUN_1411a2f3c(*(undefined8 *)(lVar3 + 0x48),lVar2);
    }
  }
  if (lVar2 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    plVar5 = (longlong *)FUN_1400f6f32(uVar4);
    if (plVar5 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))(plVar5);
      if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c16a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x30))(plVar5,lVar2,*(code **)(*plVar5 + 0x30));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c16ac2 FUN_140c16ac2 body=194 status=ok
// SIG undefined FUN_140c16ac2(void)

void FUN_140c16ac2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_140c16b86(param_1 + 0x8a8);
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*(longlong *)(param_1 + 0x5b8) + 0x10))(param_1 + 0x5b8);
    FUN_140e951a6(&local_28,uVar4);
    if (local_28 != 0) {
      FUN_14495448a(local_30,L"GbxLevelSequencePlayer",*(undefined4 *)(param_1 + 0xc));
      FUN_14621c628(local_28,local_30);
    }
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c16b86 FUN_140c16b86 body=136 status=ok
// SIG undefined FUN_140c16b86(void)

longlong FUN_140c16b86(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb75d80 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb75d80,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c16c10 FUN_140c16c10 body=280 status=ok
// SIG undefined FUN_140c16c10(void)

void FUN_140c16c10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c16dfe(param_1,0);
  if (*(int *)(param_1 + 0x664) < 0) {
    *(undefined4 *)(param_1 + 0x660) = 0;
    FUN_14895865e(param_1 + 0x5d8);
  }
  else {
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  FUN_140c16d2a(param_1,0);
  if (*(int *)(param_1 + 0x874) < 0) {
    *(undefined4 *)(param_1 + 0x870) = 0;
    FUN_1489586b8(param_1 + 0x668);
  }
  else {
    *(undefined4 *)(param_1 + 0x870) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x298);
  if (lVar1 != 0) {
    lVar2 = FUN_14098e070();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(char *)(lVar1 + 0xa2) == '\x01')) {
      FUN_14495448a(local_20,L"GbxMomentNodeState_PlayCutscene",*(undefined4 *)(param_1 + 0x878));
      FUN_1415b967e(1,local_20);
    }
  }
  FUN_14080e450(param_1,0);
  FUN_140a1aeca(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c16d2a FUN_140c16d2a body=212 status=ok
// SIG undefined FUN_140c16d2a(void)

void FUN_140c16d2a(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x298);
  if (lVar2 != 0) {
    lVar4 = FUN_14098e070();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = param_1 + 0x668;
      if (*(longlong *)(param_1 + 0x868) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x868);
      }
      if ((longlong)*(int *)(param_1 + 0x870) != 0) {
        lVar4 = lVar4 + 0x10;
        lVar6 = (longlong)*(int *)(param_1 + 0x870) << 5;
        do {
          plVar3 = *(longlong **)(lVar4 + -8);
          if ((((plVar3 != (longlong *)0x0) && (*(int *)(lVar4 + -0xc) != 0)) &&
              (uVar1 = *(uint *)(lVar4 + -0x10), -1 < (int)uVar1)) &&
             ((((int)uVar1 < DAT_14c9647dc &&
               (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0))
              && ((*(int *)(lVar5 + 0x10) == *(int *)(lVar4 + -0xc) &&
                  ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))))) {
            (**(code **)(*plVar3 + 0x20))(plVar3,lVar2,lVar4,param_2);
          }
          lVar4 = lVar4 + 0x20;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
    }
  }
  return;
}



// FUNCTION 140c16dfe FUN_140c16dfe body=323 status=ok
// SIG undefined FUN_140c16dfe(void)

void FUN_140c16dfe(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x298);
  if (lVar1 != 0) {
    lVar2 = FUN_14098e070();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = param_1 + 0x5d8;
      if (*(longlong *)(param_1 + 0x658) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x658);
      }
      if ((longlong)*(int *)(param_1 + 0x660) != 0) {
        lVar5 = (longlong)*(int *)(param_1 + 0x660) << 3;
        do {
          plVar3 = (longlong *)FUN_14479d2ce(lVar2);
          if (plVar3 != (longlong *)0x0) {
            if (*(char *)(lVar1 + 0xa0) == '\x01') {
              if (param_2 == '\0') {
                local_40 = *(undefined8 *)(lVar1 + 0x18);
                FUN_140d52e40(plVar3,&local_40,0,1);
                if (*(char *)(lVar1 + 0xa1) != '\0') {
LAB_140c16f29:
                  uVar4 = 0;
                  goto LAB_140c16eed;
                }
              }
              else {
                local_40 = *(undefined8 *)(lVar1 + 0x18);
                FUN_140d52e40(plVar3,&local_40,1,1);
                (**(code **)(*plVar3 + 0xcf0))(plVar3);
                uVar4 = 1;
                if (*(char *)(lVar1 + 0xa1) != '\0') {
LAB_140c16eed:
                  FUN_140c16f42(plVar3,uVar4);
                }
              }
            }
            else if (*(char *)(lVar1 + 0xa1) != '\0') {
              uVar4 = 1;
              if (param_2 == '\0') goto LAB_140c16f29;
              goto LAB_140c16eed;
            }
          }
          lVar2 = lVar2 + 8;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c16f42 FUN_140c16f42 body=62 status=ok
// SIG undefined FUN_140c16f42(void)

void FUN_140c16f42(longlong param_1,int param_2)

{
  (**(code **)(*(longlong *)(param_1 + 0x650) + 0x28))(param_1 + 0x650,param_2 + -1);
                    /* WARNING: Could not recover jumptable at 0x000140c16f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x650) + 0x30))(param_1 + 0x650,param_2 + -1);
  return;
}



// FUNCTION 140c16f80 FUN_140c16f80 body=71 status=ok
// SIG undefined FUN_140c16f80(void)

void FUN_140c16f80(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x650) + 0xa90))();
  iVar2 = 0;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 8);
  }
  iVar3 = param_2 + 1;
  if (iVar2 <= param_2 + 1) {
    iVar3 = iVar2;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 0x1f8) = iVar2;
  return;
}



// FUNCTION 140c16fc8 FUN_140c16fc8 body=118 status=ok
// SIG undefined FUN_140c16fc8(void)

void FUN_140c16fc8(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x1fc);
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x650) + 0xa90))();
  iVar4 = 0;
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 8);
  }
  iVar5 = param_2 + 1;
  if (iVar4 <= param_2 + 1) {
    iVar5 = iVar4;
  }
  iVar4 = 0;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  *(int *)(param_1 + 0x1fc) = iVar4;
  if (iVar1 != iVar4) {
    plVar3 = (longlong *)FUN_140083894();
                    /* WARNING: Could not recover jumptable at 0x000140c17031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x70))(plVar3,param_1 + -0x650,*(code **)(*plVar3 + 0x70));
    return;
  }
  return;
}



// FUNCTION 140c1703e FUN_140c1703e body=95 status=ok
// SIG undefined FUN_140c1703e(void)

ulonglong FUN_140c1703e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140c17080:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140c17080;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 140c1709e FUN_140c1709e body=194 status=ok
// SIG undefined FUN_140c1709e(void)

void FUN_140c1709e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((((*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0xdc))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(lVar2 + 0x144);
      FUN_140c175ce(lVar2,*(longlong *)(param_1 + 0x48) + 0x80,*(longlong *)(param_1 + 0x48) + 0x540
                   );
      FUN_140c17160(lVar2,&DAT_14cb94c28,*(longlong *)(param_1 + 0x48) + 0x540);
      *(undefined1 *)(param_1 + 0xec) = 1;
    }
  }
  return;
}



// FUNCTION 140c17160 FUN_140c17160 body=157 status=ok
// SIG undefined FUN_140c17160(void)

void FUN_140c17160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c17496();
  FUN_140c17710(param_1,&local_40,param_3);
  lVar1 = local_40;
  if ((longlong)local_38 != 0) {
    lVar2 = 0;
    do {
      FUN_140c171fe(param_1,param_2,1,*(undefined4 *)(lVar1 + lVar2));
      lVar2 = lVar2 + 4;
    } while ((longlong)local_38 * 4 != lVar2);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c171fe FUN_140c171fe body=177 status=ok
// SIG undefined FUN_140c171fe(void)

void FUN_140c171fe(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar5 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar5 = *(longlong *)(param_1 + 400);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & param_4) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x20) == param_4) {
          if (lVar5 == 0) {
            return;
          }
          lVar3 = *(longlong *)(lVar5 + 8);
          plVar4 = *(longlong **)(lVar5 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if (lVar3 != 0) {
            FUN_140c172b0();
          }
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140c172ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
        iVar6 = *(int *)(lVar5 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140c172b0 FUN_140c172b0 body=484 status=ok
// SIG undefined FUN_140c172b0(void)

ulonglong FUN_140c172b0(longlong param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  char cVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pcVar1 = (char *)(param_1 + 0x538);
  cVar9 = *(char *)(param_1 + 0x538);
  if (param_3 == '\0') {
    FUN_1400bc8c2(pcVar1);
  }
  else {
    FUN_1400bc96c();
  }
  uVar8 = (undefined7)((ulonglong)pcVar1 >> 8);
  if (*pcVar1 == '\x01' && cVar9 == '\0') {
    *(undefined1 *)(param_1 + 0x518) = 0;
    uVar7 = CONCAT71(uVar8,1);
    if (((*(int *)(param_1 + 0x1c) != 0) && (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0x1c))) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar3 = *plVar6, lVar3 != 0)))) {
        if (*(char *)(param_1 + 400) == '\x01') {
          local_90[0] = 0;
          local_68 = 0;
          FUN_1456bb102(local_90,*(undefined8 *)(lVar3 + 0x1b0));
          FUN_1448729ea(param_1 + 0x140,local_60,local_90);
          uVar5 = FUN_14005fbd2(local_60,0);
          *(undefined1 *)(param_1 + 0x518) = uVar5;
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
          if (pcVar4 != (code *)0x0) {
            ppppuVar10 = local_60;
            if (0x18 < local_48) {
              ppppuVar10 = (undefined8 ****)local_60[0];
            }
            (*pcVar4)(ppppuVar10);
          }
          if (0x18 < local_48) {
            FUN_1400020a8(local_60[0]);
          }
          FUN_144a5ac3a(local_90);
          cVar9 = *(char *)(param_1 + 0x518);
        }
        else {
          cVar9 = '\0';
        }
        if (cVar9 != *(char *)(lVar3 + 0xbd8)) {
          local_98 = 0;
          FUN_148a20d10(lVar3,0,cVar9,0);
        }
      }
    }
  }
  else if (cVar9 == '\x01' && *pcVar1 == '\0') {
    FUN_1408a2052(param_1);
    *(undefined4 *)(param_1 + 0x510) = 0x7f7fffff;
    *(undefined1 *)(param_1 + 0x519) = 0;
    *(undefined8 *)(param_1 + 0x520) = 0;
    uVar7 = CONCAT71(uVar8,1);
  }
  else {
    uVar7 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c17496 FUN_140c17496 body=311 status=ok
// SIG undefined FUN_140c17496(void)

ulonglong FUN_140c17496(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 unaff_R14;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
      (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) &&
     (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))(), lVar6 != 0)) {
    uVar7 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x40));
    FUN_140a702f6(&local_40,uVar7);
    if (local_38 != (longlong *)0x0) {
      iVar5 = (int)local_38[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_38[1];
        bVar10 = iVar5 == iVar3;
        if (bVar10) {
          *(int *)(local_38 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = local_38;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_40 == 0) {
          uVar9 = 0;
        }
        else {
          cVar4 = FUN_140bbb356(local_40,lVar6,*(undefined8 *)(param_1 + 0x40),0);
          uVar9 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
          if (cVar4 == '\0') {
            uVar9 = 0;
            cVar4 = FUN_14105eeda(local_40,lVar6,*(undefined8 *)(param_1 + 0x40),0);
            if (cVar4 != '\0') {
              FUN_141689bc8(param_1 + 0x88,lVar6);
              uVar9 = 1;
            }
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        goto LAB_140c174d8;
      }
    }
  }
  uVar9 = 0;
LAB_140c174d8:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 140c175ce FUN_140c175ce body=320 status=ok
// SIG undefined FUN_140c175ce(void)

void FUN_140c175ce(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  undefined1 auStack_78 [40];
  uint *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c17710(param_1,&local_50);
  if ((longlong)local_48 != 0) {
    puVar3 = local_50 + local_48;
    puVar8 = local_50;
    do {
      if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
        lVar6 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar6 = param_1 + 0x188;
        }
        iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & *puVar8) * 4);
        if (iVar7 != -1) {
          do {
            lVar6 = *(longlong *)(param_1 + 0x150) + (longlong)iVar7 * 0x20;
            if (*(uint *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar7 * 0x20) == *puVar8) {
              if (lVar6 != 0) {
                lVar4 = *(longlong *)(lVar6 + 8);
                plVar5 = *(longlong **)(lVar6 + 0x10);
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                  UNLOCK();
                }
                if (lVar4 != 0) {
                  FUN_140c17aa4(lVar4);
                  FUN_140c17fd8(lVar4 + 0x40,param_2);
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
              }
              break;
            }
            iVar7 = *(int *)(lVar6 + 0x18);
          } while (iVar7 != -1);
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar3);
  }
  if (local_50 != (uint *)0x0) {
    FUN_1400020a8(local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c17710 FUN_140c17710 body=914 status=ok
// SIG undefined FUN_140c17710(void)

longlong * FUN_140c17710(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  ulonglong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((param_3 == (longlong *)0x0) || (*param_3 == 0)) {
    uVar14 = *(uint *)(param_1 + 0x178);
    uVar11 = (ulonglong)uVar14;
    if (uVar14 == 0) {
      uVar17 = 1;
      uVar16 = 0;
      uVar6 = 0;
      iVar18 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x170);
      if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x160);
      }
      uVar6 = *puVar7;
      if (uVar6 == 0) {
        iVar18 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar18 = uVar14 - 1;
        }
        uVar16 = 0;
        uVar17 = (ulonglong)(uint)(iVar18 >> 5);
        if (iVar18 >> 5 < 1) {
          uVar17 = uVar16;
        }
        iVar18 = 0;
        do {
          if (uVar17 == uVar16) goto LAB_140c178ec;
          iVar18 = iVar18 + 0x20;
          uVar6 = puVar7[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar16 = 0;
        iVar18 = 0;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar17 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar6 = (iVar18 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)uVar14 <= (int)uVar6) {
        uVar6 = uVar14;
      }
    }
    if (uVar6 != uVar14) {
      uVar14 = 0xffffffff;
      do {
        uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x150) + (longlong)(int)uVar6 * 0x20);
        iVar15 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar15 + 1U) {
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,iVar18);
          local_98 = uVar11;
          FUN_1446f48e2(param_2,iVar15);
          uVar11 = local_98;
          iVar18 = (int)local_a0;
        }
        *(undefined4 *)(*param_2 + (longlong)iVar15 * 4) = uVar3;
        uVar14 = uVar14 & ~(uint)uVar17;
        puVar7 = *(uint **)(param_1 + 0x170);
        if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x160);
        }
        uVar4 = *(uint *)(param_1 + 0x178);
        iVar15 = (int)uVar16;
        lVar12 = (longlong)iVar15;
        uVar6 = puVar7[lVar12] & uVar14;
        if (uVar6 == 0) {
          iVar9 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar9 = uVar4 - 1;
          }
          iVar9 = iVar9 >> 5;
          iVar18 = iVar18 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar15) {
            iVar10 = iVar15;
          }
          if (iVar15 < iVar9) {
            lVar13 = 0;
            do {
              uVar6 = puVar7[lVar12 + lVar13 + 1];
              if (uVar6 != 0) {
                uVar16 = (ulonglong)(iVar15 + (int)lVar13 + 1);
                uVar14 = 0xffffffff;
                goto LAB_140c178bd;
              }
              iVar18 = iVar18 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar10 - lVar12 != lVar13);
            uVar14 = 0xffffffff;
            iVar15 = iVar10;
          }
          uVar16 = (ulonglong)(iVar15 + 1);
          uVar6 = uVar4;
        }
        else {
LAB_140c178bd:
          uVar17 = (ulonglong)(-uVar6 & uVar6);
          uVar2 = uVar17 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar6 = (iVar18 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar4 <= (int)uVar6) {
            uVar6 = uVar4;
          }
        }
      } while (uVar6 != (uint)uVar11);
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x1a0);
    lVar12 = param_1 + 0x1b0;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    local_a0 = param_2;
    uStack_60 = lVar12;
    if (*(int *)(param_1 + 0x1c8) == 0) {
      iVar18 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar18 = *(int *)(param_1 + 0x1c8);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar8 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar15 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar18) || (param_2 = local_a0, local_78 = uVar8, uStack_60 != lVar12)) {
      do {
        local_78 = uVar8;
        lVar13 = *local_90;
        lVar19 = (longlong)iVar15 * 0x14 + 4 + lVar13;
        cVar5 = FUN_144729dda(lVar19);
        if (cVar5 != '\0') {
          uVar8 = FUN_14479d2ce(lVar19);
          cVar5 = FUN_143893b9e(uVar8,param_3);
          if (cVar5 != '\0') {
            uVar3 = *(undefined4 *)((longlong)iVar15 * 0x14 + lVar13);
            iVar15 = (int)local_a0[1];
            *(uint *)(local_a0 + 1) = iVar15 + 1U;
            if (*(uint *)((longlong)local_a0 + 0xc) < iVar15 + 1U) {
              FUN_1446f48e2(local_a0,iVar15);
            }
            *(undefined4 *)(*local_a0 + (longlong)iVar15 * 4) = uVar3;
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        param_2 = local_a0;
        iVar15 = local_78._4_4_;
        uVar8 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar12 || local_78._4_4_ != iVar18));
    }
  }
LAB_140c178ec:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c17aa4 FUN_140c17aa4 body=1331 status=ok
// SIG undefined FUN_140c17aa4(void)

void FUN_140c17aa4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_9b8 [32];
  undefined4 local_998 [2];
  undefined8 local_990;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined4 local_960;
  undefined8 local_958;
  undefined4 local_950;
  undefined4 local_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined4 local_910;
  undefined8 local_908;
  undefined4 local_900;
  undefined1 local_8f8;
  undefined4 local_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined4 local_8b8;
  undefined8 local_8b0;
  undefined4 local_8a8;
  undefined1 local_8a0;
  undefined4 local_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined4 local_860;
  undefined8 local_858;
  undefined4 local_850;
  undefined1 local_848;
  undefined4 local_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined4 local_808;
  undefined8 local_800;
  undefined4 local_7f8;
  undefined1 local_7f0;
  undefined1 local_7ef;
  undefined1 local_7ee;
  undefined4 local_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined4 local_7b0;
  undefined8 local_7a8;
  undefined4 local_7a0;
  undefined1 local_798;
  undefined4 local_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined4 local_758;
  undefined8 local_750;
  undefined4 local_748;
  undefined1 local_740;
  undefined4 local_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined4 local_700;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined1 local_6e8;
  undefined4 local_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined4 local_6a8;
  undefined8 local_6a0;
  undefined4 local_698;
  undefined1 local_690;
  undefined4 local_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined4 local_650;
  undefined8 local_648;
  undefined4 local_640;
  undefined1 local_638;
  undefined4 local_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined4 local_5f8;
  undefined8 local_5f0;
  undefined4 local_5e8;
  undefined4 local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined1 local_590;
  undefined4 local_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined4 local_540;
  undefined1 local_538;
  undefined4 local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined1 local_4e0;
  undefined1 local_4d8 [1216];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_9b8;
  lVar2 = *(longlong *)(param_1 + 0x500);
  if ((((lVar2 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      local_970 = 0;
      uStack_968 = 0;
      local_980 = 0;
      uStack_978 = 0;
      local_990 = 0;
      uStack_988 = 0;
      local_960 = 0xf00000d0;
      local_958 = 0;
      local_950 = 0x3f800000;
      local_940 = 0;
      uStack_938 = 0;
      local_930 = 0;
      uStack_928 = 0;
      local_920 = 0;
      uStack_918 = 0;
      local_910 = 0xf00000d0;
      local_908 = 0;
      local_900 = 0x3f800000;
      local_8e8 = 0;
      uStack_8e0 = 0;
      local_8d8 = 0;
      uStack_8d0 = 0;
      local_8c8 = 0;
      uStack_8c0 = 0;
      local_8b8 = 0xf00000d0;
      local_8b0 = 0;
      local_8a8 = 0x3f800000;
      local_898 = 0;
      local_870 = 0;
      uStack_868 = 0;
      local_880 = 0;
      uStack_878 = 0;
      local_890 = 0;
      uStack_888 = 0;
      local_860 = 0xf00000d0;
      local_858 = 0;
      local_850 = 0x3f800000;
      local_838 = 0;
      uStack_830 = 0;
      local_828 = 0;
      uStack_820 = 0;
      local_818 = 0;
      uStack_810 = 0;
      local_808 = 0xf00000d0;
      local_800 = 0;
      local_7f8 = 0x3f800000;
      local_7e0 = 0;
      uStack_7d8 = 0;
      local_7d0 = 0;
      uStack_7c8 = 0;
      local_7c0 = 0;
      uStack_7b8 = 0;
      local_7b0 = 0xf00000d0;
      local_7a8 = 0;
      local_7a0 = 0x3f800000;
      local_768 = 0;
      uStack_760 = 0;
      local_778 = 0;
      uStack_770 = 0;
      local_788 = 0;
      uStack_780 = 0;
      local_758 = 0xf00000d0;
      local_750 = 0;
      local_748 = 0x3f800000;
      local_730 = 0;
      uStack_728 = 0;
      local_720 = 0;
      uStack_718 = 0;
      local_710 = 0;
      uStack_708 = 0;
      local_700 = 0xf00000d0;
      local_6f8 = 0;
      local_6f0 = 0x3f800000;
      local_6d8 = 0;
      uStack_6d0 = 0;
      local_6c8 = 0;
      uStack_6c0 = 0;
      local_6b8 = 0;
      uStack_6b0 = 0;
      local_6a8 = 0xf00000d0;
      local_6a0 = 0;
      local_698 = 0x3f800000;
      local_660 = 0;
      uStack_658 = 0;
      local_670 = 0;
      uStack_668 = 0;
      local_680 = 0;
      uStack_678 = 0;
      local_650 = 0xf00000d0;
      local_648 = 0;
      local_640 = 0x3f800000;
      local_608 = 0;
      uStack_600 = 0;
      local_618 = 0;
      uStack_610 = 0;
      local_628 = 0;
      uStack_620 = 0;
      local_5f8 = 0xf00000d0;
      local_5f0 = 0;
      local_5e8 = 0x3f800000;
      local_5b8 = 0;
      uStack_5b0 = 0;
      local_5c8 = 0;
      uStack_5c0 = 0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      local_5a8 = 0xf00000d0;
      local_5a0 = 0;
      local_598 = 0x3f800000;
      local_560 = 0;
      uStack_558 = 0;
      local_570 = 0;
      uStack_568 = 0;
      local_580 = 0;
      uStack_578 = 0;
      local_550 = 0xf00000d0;
      local_548 = 0;
      local_540 = 0x3f800000;
      local_508 = 0;
      uStack_500 = 0;
      local_518 = 0;
      uStack_510 = 0;
      local_528 = 0;
      uStack_520 = 0;
      local_4f8 = 0xf00000d0;
      local_4f0 = 0;
      local_4e8 = 0x3f800000;
      local_840 = 0x40a00000;
      local_7e8 = 0x3f800000;
      local_790 = 0x40a00000;
      local_738 = 0x3e4ccccd;
      local_6e0 = 0x40000000;
      local_688 = 0x3e800000;
      local_5e0 = 0x3f000000;
      local_630 = 0x3f800000;
      local_588 = 0x3f800000;
      local_530 = 0x40400000;
      local_998[0] = 0x459c4000;
      local_948 = 0x447a0000;
      local_8f0 = 0x44fa0000;
      local_7ef = 0;
      local_7f0 = 0;
      local_7ee = 0;
      local_798 = 0;
      local_740 = 0;
      local_6e8 = 0;
      local_690 = 0;
      local_638 = 0;
      local_590 = 0;
      local_538 = 0;
      local_4e0 = 0;
      local_8f8 = 0;
      local_8a0 = 0;
      local_848 = 0;
      if ((*(longlong *)(lVar2 + 0x48) != 0) &&
         (plVar3 = *(longlong **)(lVar2 + 0x50), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,local_4d8);
        FUN_140c18530(local_998,local_4d8);
      }
      FUN_140c18530(param_1 + 0x40,local_998);
      goto LAB_140c17ee7;
    }
  }
  *(undefined4 *)(param_1 + 0x198) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x1f0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x248) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x2a0) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x2f8) = 0x40000000;
  *(undefined4 *)(param_1 + 0x350) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x3f8) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3a8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x450) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4a8) = 0x40400000;
  *(undefined4 *)(param_1 + 0x40) = 0x459c4000;
  *(undefined4 *)(param_1 + 0x90) = 0x447a0000;
  *(undefined4 *)(param_1 + 0xe8) = 0x44fa0000;
  *(undefined2 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1ea) = 0;
  *(undefined1 *)(param_1 + 0x240) = 0;
  *(undefined1 *)(param_1 + 0x298) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 0x3a0) = 0;
  *(undefined1 *)(param_1 + 0x448) = 0;
  *(undefined1 *)(param_1 + 0x4a0) = 0;
  *(undefined1 *)(param_1 + 0x4f8) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 400) = 0;
LAB_140c17ee7:
  if ((local_18 ^ (ulonglong)auStack_9b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c17fd8 FUN_140c17fd8 body=1368 status=ok
// SIG undefined FUN_140c17fd8(void)

void FUN_140c17fd8(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x6a) == '\x01') {
    *(undefined1 *)(param_1 + 0x6a) = 1;
    param_1[0x56] = param_2[0x56];
    lVar1 = *(longlong *)(param_2 + 0x58);
    if (*(longlong *)(param_1 + 0x58) != lVar1) {
      *(undefined8 *)(param_1 + 0x5c) = 0;
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
    if (*(longlong *)(param_1 + 0x5a) != *(longlong *)(param_2 + 0x5a)) {
      *(undefined8 *)(param_1 + 0x5c) = 0;
    }
    uVar2 = FUN_14477b664();
    uVar2 = FUN_14477b664(uVar2);
    *(undefined8 *)(param_1 + 0x5a) = uVar2;
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_2 + 0x5e);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    if ((*(longlong *)(param_1 + 0x62) != *(longlong *)(param_2 + 0x62)) ||
       (param_1[100] != param_2[100])) {
      *(longlong *)(param_1 + 0x62) = *(longlong *)(param_2 + 0x62);
      param_1[100] = param_2[100];
      *(undefined8 *)(param_1 + 0x66) = 0;
    }
    param_1[0x68] = param_2[0x68];
  }
  if (*(char *)((longlong)param_2 + 0x1aa) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1aa) = 1;
    *(undefined1 *)((longlong)param_1 + 0x1a9) = *(undefined1 *)((longlong)param_2 + 0x1a9);
    FUN_140d02432(param_1 + 0x6c,param_2 + 0x6c);
    FUN_140d02432(param_1 + 0x82,param_2 + 0x82);
  }
  if (*(char *)(param_2 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 1;
    FUN_140d02432(param_1 + 0x6c,param_2 + 0x6c);
  }
  if (*(char *)(param_2 + 0x96) == '\x01') {
    *(undefined1 *)(param_1 + 0x96) = 1;
    FUN_140d02432(param_1 + 0x82,param_2 + 0x82);
  }
  if (*(char *)(param_2 + 0xac) == '\x01') {
    *(undefined1 *)(param_1 + 0xac) = 1;
    FUN_140d02432(param_1 + 0x98,param_2 + 0x98);
  }
  if (*(char *)(param_2 + 0xc2) == '\x01') {
    *(undefined1 *)(param_1 + 0xc2) = 1;
    FUN_140d02432(param_1 + 0xae,param_2 + 0xae);
  }
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 1;
    FUN_140d02432(param_1 + 0xc4,param_2 + 0xc4);
  }
  if (*(char *)(param_2 + 0x102) == '\x01') {
    *(undefined1 *)(param_1 + 0x102) = 1;
    FUN_140d02432(param_1 + 0xee,param_2 + 0xee);
    FUN_140d02432(param_1 + 0xda,param_2 + 0xda);
  }
  if (*(char *)(param_2 + 0x118) == '\x01') {
    *(undefined1 *)(param_1 + 0x118) = 1;
    FUN_140d02432(param_1 + 0x104,param_2 + 0x104);
  }
  if (*(char *)(param_2 + 0x12e) == '\x01') {
    *(undefined1 *)(param_1 + 0x12e) = 1;
    FUN_140d02432(param_1 + 0x11a,param_2 + 0x11a);
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
    param_1[0x14] = param_2[0x14];
    lVar1 = *(longlong *)(param_2 + 0x16);
    if (*(longlong *)(param_1 + 0x16) != lVar1) {
      *(undefined8 *)(param_1 + 0x1a) = 0;
    }
    *(longlong *)(param_1 + 0x16) = lVar1;
    if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) {
      *(undefined8 *)(param_1 + 0x1a) = 0;
    }
    uVar2 = FUN_14477b664();
    uVar2 = FUN_14477b664(uVar2);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
    uVar2 = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
       (param_1[0x22] != param_2[0x22])) {
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
      param_1[0x22] = param_2[0x22];
      *(undefined8 *)(param_1 + 0x24) = 0;
    }
    param_1[0x26] = param_2[0x26];
    *param_1 = *param_2;
    lVar1 = *(longlong *)(param_2 + 2);
    if (*(longlong *)(param_1 + 2) != lVar1) {
      *(undefined8 *)(param_1 + 6) = 0;
    }
    *(longlong *)(param_1 + 2) = lVar1;
    if (*(longlong *)(param_1 + 4) != *(longlong *)(param_2 + 4)) {
      *(undefined8 *)(param_1 + 6) = 0;
    }
    uVar2 = FUN_14477b664();
    uVar2 = FUN_14477b664(uVar2);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    uVar2 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = uVar2;
    if ((*(longlong *)(param_1 + 0xc) != *(longlong *)(param_2 + 0xc)) ||
       (param_1[0xe] != param_2[0xe])) {
      *(longlong *)(param_1 + 0xc) = *(longlong *)(param_2 + 0xc);
      param_1[0xe] = param_2[0xe];
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    param_1[0x12] = param_2[0x12];
  }
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *(undefined1 *)(param_1 + 0x3e) = 1;
    param_1[0x2a] = param_2[0x2a];
    lVar1 = *(longlong *)(param_2 + 0x2c);
    if (*(longlong *)(param_1 + 0x2c) != lVar1) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *(longlong *)(param_1 + 0x2c) = lVar1;
    if (*(longlong *)(param_1 + 0x2e) != *(longlong *)(param_2 + 0x2e)) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    uVar2 = FUN_14477b664();
    uVar2 = FUN_14477b664(uVar2);
    *(undefined8 *)(param_1 + 0x2e) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
    *(undefined8 *)(param_1 + 0x34) = uVar2;
    if ((*(longlong *)(param_1 + 0x36) != *(longlong *)(param_2 + 0x36)) ||
       (param_1[0x38] != param_2[0x38])) {
      *(longlong *)(param_1 + 0x36) = *(longlong *)(param_2 + 0x36);
      param_1[0x38] = param_2[0x38];
      *(undefined8 *)(param_1 + 0x3a) = 0;
    }
    param_1[0x3c] = param_2[0x3c];
  }
  if (*(char *)(param_2 + 0x54) != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
  FUN_140d02432(param_1 + 0x40,param_2 + 0x40);
  return;
}



// FUNCTION 140c18530 FUN_140c18530 body=3186 status=ok
// SIG undefined FUN_140c18530(void)

undefined4 * FUN_140c18530(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 2);
  if (*(longlong *)(param_1 + 2) != lVar1) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(longlong *)(param_1 + 2) = lVar1;
  if (*(longlong *)(param_1 + 4) != *(longlong *)(param_2 + 4)) {
    *(undefined8 *)(param_1 + 6) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar2;
  if ((*(longlong *)(param_1 + 0xc) != *(longlong *)(param_2 + 0xc)) ||
     (param_1[0xe] != param_2[0xe])) {
    *(longlong *)(param_1 + 0xc) = *(longlong *)(param_2 + 0xc);
    param_1[0xe] = param_2[0xe];
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  lVar1 = *(longlong *)(param_2 + 0x16);
  if (*(longlong *)(param_1 + 0x16) != lVar1) {
    *(undefined8 *)(param_1 + 0x1a) = 0;
  }
  *(longlong *)(param_1 + 0x16) = lVar1;
  if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) {
    *(undefined8 *)(param_1 + 0x1a) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  uVar2 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar2;
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (param_1[0x22] != param_2[0x22])) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    param_1[0x22] = param_2[0x22];
    *(undefined8 *)(param_1 + 0x24) = 0;
  }
  param_1[0x26] = param_2[0x26];
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  param_1[0x2a] = param_2[0x2a];
  lVar1 = *(longlong *)(param_2 + 0x2c);
  if (*(longlong *)(param_1 + 0x2c) != lVar1) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(longlong *)(param_1 + 0x2c) = lVar1;
  if (*(longlong *)(param_1 + 0x2e) != *(longlong *)(param_2 + 0x2e)) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x2e) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  if ((*(longlong *)(param_1 + 0x36) != *(longlong *)(param_2 + 0x36)) ||
     (param_1[0x38] != param_2[0x38])) {
    *(longlong *)(param_1 + 0x36) = *(longlong *)(param_2 + 0x36);
    param_1[0x38] = param_2[0x38];
    *(undefined8 *)(param_1 + 0x3a) = 0;
  }
  param_1[0x3c] = param_2[0x3c];
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  param_1[0x40] = param_2[0x40];
  lVar1 = *(longlong *)(param_2 + 0x42);
  if (*(longlong *)(param_1 + 0x42) != lVar1) {
    *(undefined8 *)(param_1 + 0x46) = 0;
  }
  *(longlong *)(param_1 + 0x42) = lVar1;
  if (*(longlong *)(param_1 + 0x44) != *(longlong *)(param_2 + 0x44)) {
    *(undefined8 *)(param_1 + 0x46) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x44) = uVar2;
  *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x46);
  uVar2 = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4a) = uVar2;
  if ((*(longlong *)(param_1 + 0x4c) != *(longlong *)(param_2 + 0x4c)) ||
     (param_1[0x4e] != param_2[0x4e])) {
    *(longlong *)(param_1 + 0x4c) = *(longlong *)(param_2 + 0x4c);
    param_1[0x4e] = param_2[0x4e];
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  param_1[0x52] = param_2[0x52];
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  param_1[0x56] = param_2[0x56];
  lVar1 = *(longlong *)(param_2 + 0x58);
  if (*(longlong *)(param_1 + 0x58) != lVar1) {
    *(undefined8 *)(param_1 + 0x5c) = 0;
  }
  *(longlong *)(param_1 + 0x58) = lVar1;
  if (*(longlong *)(param_1 + 0x5a) != *(longlong *)(param_2 + 0x5a)) {
    *(undefined8 *)(param_1 + 0x5c) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x5a) = uVar2;
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  if ((*(longlong *)(param_1 + 0x62) != *(longlong *)(param_2 + 0x62)) ||
     (param_1[100] != param_2[100])) {
    *(longlong *)(param_1 + 0x62) = *(longlong *)(param_2 + 0x62);
    param_1[100] = param_2[100];
    *(undefined8 *)(param_1 + 0x66) = 0;
  }
  param_1[0x68] = param_2[0x68];
  *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_2 + 0x6a);
  *(undefined1 *)((longlong)param_1 + 0x1aa) = *(undefined1 *)((longlong)param_2 + 0x1aa);
  param_1[0x6c] = param_2[0x6c];
  lVar1 = *(longlong *)(param_2 + 0x6e);
  if (*(longlong *)(param_1 + 0x6e) != lVar1) {
    *(undefined8 *)(param_1 + 0x72) = 0;
  }
  *(longlong *)(param_1 + 0x6e) = lVar1;
  if (*(longlong *)(param_1 + 0x70) != *(longlong *)(param_2 + 0x70)) {
    *(undefined8 *)(param_1 + 0x72) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  uVar2 = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x76) = uVar2;
  if ((*(longlong *)(param_1 + 0x78) != *(longlong *)(param_2 + 0x78)) ||
     (param_1[0x7a] != param_2[0x7a])) {
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_2 + 0x78);
    param_1[0x7a] = param_2[0x7a];
    *(undefined8 *)(param_1 + 0x7c) = 0;
  }
  param_1[0x7e] = param_2[0x7e];
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  param_1[0x82] = param_2[0x82];
  lVar1 = *(longlong *)(param_2 + 0x84);
  if (*(longlong *)(param_1 + 0x84) != lVar1) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(longlong *)(param_1 + 0x84) = lVar1;
  if (*(longlong *)(param_1 + 0x86) != *(longlong *)(param_2 + 0x86)) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x86) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x8a) = *(undefined8 *)(param_2 + 0x8a);
  *(undefined8 *)(param_1 + 0x8c) = uVar2;
  if ((*(longlong *)(param_1 + 0x8e) != *(longlong *)(param_2 + 0x8e)) ||
     (param_1[0x90] != param_2[0x90])) {
    *(longlong *)(param_1 + 0x8e) = *(longlong *)(param_2 + 0x8e);
    param_1[0x90] = param_2[0x90];
    *(undefined8 *)(param_1 + 0x92) = 0;
  }
  param_1[0x94] = param_2[0x94];
  *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)(param_2 + 0x96);
  param_1[0x98] = param_2[0x98];
  lVar1 = *(longlong *)(param_2 + 0x9a);
  if (*(longlong *)(param_1 + 0x9a) != lVar1) {
    *(undefined8 *)(param_1 + 0x9e) = 0;
  }
  *(longlong *)(param_1 + 0x9a) = lVar1;
  if (*(longlong *)(param_1 + 0x9c) != *(longlong *)(param_2 + 0x9c)) {
    *(undefined8 *)(param_1 + 0x9e) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x9c) = uVar2;
  *(undefined8 *)(param_1 + 0x9e) = *(undefined8 *)(param_2 + 0x9e);
  uVar2 = *(undefined8 *)(param_2 + 0xa2);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa2) = uVar2;
  if ((*(longlong *)(param_1 + 0xa4) != *(longlong *)(param_2 + 0xa4)) ||
     (param_1[0xa6] != param_2[0xa6])) {
    *(longlong *)(param_1 + 0xa4) = *(longlong *)(param_2 + 0xa4);
    param_1[0xa6] = param_2[0xa6];
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  param_1[0xaa] = param_2[0xaa];
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_2 + 0xac);
  param_1[0xae] = param_2[0xae];
  lVar1 = *(longlong *)(param_2 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) != lVar1) {
    *(undefined8 *)(param_1 + 0xb4) = 0;
  }
  *(longlong *)(param_1 + 0xb0) = lVar1;
  if (*(longlong *)(param_1 + 0xb2) != *(longlong *)(param_2 + 0xb2)) {
    *(undefined8 *)(param_1 + 0xb4) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0xb2) = uVar2;
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb6) = *(undefined8 *)(param_2 + 0xb6);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  if ((*(longlong *)(param_1 + 0xba) != *(longlong *)(param_2 + 0xba)) ||
     (param_1[0xbc] != param_2[0xbc])) {
    *(longlong *)(param_1 + 0xba) = *(longlong *)(param_2 + 0xba);
    param_1[0xbc] = param_2[0xbc];
    *(undefined8 *)(param_1 + 0xbe) = 0;
  }
  param_1[0xc0] = param_2[0xc0];
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  param_1[0xc4] = param_2[0xc4];
  lVar1 = *(longlong *)(param_2 + 0xc6);
  if (*(longlong *)(param_1 + 0xc6) != lVar1) {
    *(undefined8 *)(param_1 + 0xca) = 0;
  }
  *(longlong *)(param_1 + 0xc6) = lVar1;
  if (*(longlong *)(param_1 + 200) != *(longlong *)(param_2 + 200)) {
    *(undefined8 *)(param_1 + 0xca) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xca) = *(undefined8 *)(param_2 + 0xca);
  uVar2 = *(undefined8 *)(param_2 + 0xce);
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xce) = uVar2;
  if ((*(longlong *)(param_1 + 0xd0) != *(longlong *)(param_2 + 0xd0)) ||
     (param_1[0xd2] != param_2[0xd2])) {
    *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_2 + 0xd0);
    param_1[0xd2] = param_2[0xd2];
    *(undefined8 *)(param_1 + 0xd4) = 0;
  }
  param_1[0xd6] = param_2[0xd6];
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  param_1[0xda] = param_2[0xda];
  lVar1 = *(longlong *)(param_2 + 0xdc);
  if (*(longlong *)(param_1 + 0xdc) != lVar1) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  *(longlong *)(param_1 + 0xdc) = lVar1;
  if (*(longlong *)(param_1 + 0xde) != *(longlong *)(param_2 + 0xde)) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0xde) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar2 = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe2) = *(undefined8 *)(param_2 + 0xe2);
  *(undefined8 *)(param_1 + 0xe4) = uVar2;
  if ((*(longlong *)(param_1 + 0xe6) != *(longlong *)(param_2 + 0xe6)) ||
     (param_1[0xe8] != param_2[0xe8])) {
    *(longlong *)(param_1 + 0xe6) = *(longlong *)(param_2 + 0xe6);
    param_1[0xe8] = param_2[0xe8];
    *(undefined8 *)(param_1 + 0xea) = 0;
  }
  param_1[0xec] = param_2[0xec];
  param_1[0xee] = param_2[0xee];
  lVar1 = *(longlong *)(param_2 + 0xf0);
  if (*(longlong *)(param_1 + 0xf0) != lVar1) {
    *(undefined8 *)(param_1 + 0xf4) = 0;
  }
  *(longlong *)(param_1 + 0xf0) = lVar1;
  if (*(longlong *)(param_1 + 0xf2) != *(longlong *)(param_2 + 0xf2)) {
    *(undefined8 *)(param_1 + 0xf4) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0xf2) = uVar2;
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  uVar2 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf6) = *(undefined8 *)(param_2 + 0xf6);
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  if ((*(longlong *)(param_1 + 0xfa) != *(longlong *)(param_2 + 0xfa)) ||
     (param_1[0xfc] != param_2[0xfc])) {
    *(longlong *)(param_1 + 0xfa) = *(longlong *)(param_2 + 0xfa);
    param_1[0xfc] = param_2[0xfc];
    *(undefined8 *)(param_1 + 0xfe) = 0;
  }
  param_1[0x100] = param_2[0x100];
  *(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(param_2 + 0x102);
  param_1[0x104] = param_2[0x104];
  lVar1 = *(longlong *)(param_2 + 0x106);
  if (*(longlong *)(param_1 + 0x106) != lVar1) {
    *(undefined8 *)(param_1 + 0x10a) = 0;
  }
  *(longlong *)(param_1 + 0x106) = lVar1;
  if (*(longlong *)(param_1 + 0x108) != *(longlong *)(param_2 + 0x108)) {
    *(undefined8 *)(param_1 + 0x10a) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  *(undefined8 *)(param_1 + 0x10a) = *(undefined8 *)(param_2 + 0x10a);
  uVar2 = *(undefined8 *)(param_2 + 0x10e);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x10e) = uVar2;
  if ((*(longlong *)(param_1 + 0x110) != *(longlong *)(param_2 + 0x110)) ||
     (param_1[0x112] != param_2[0x112])) {
    *(longlong *)(param_1 + 0x110) = *(longlong *)(param_2 + 0x110);
    param_1[0x112] = param_2[0x112];
    *(undefined8 *)(param_1 + 0x114) = 0;
  }
  param_1[0x116] = param_2[0x116];
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  param_1[0x11a] = param_2[0x11a];
  lVar1 = *(longlong *)(param_2 + 0x11c);
  if (*(longlong *)(param_1 + 0x11c) != lVar1) {
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  *(longlong *)(param_1 + 0x11c) = lVar1;
  if (*(longlong *)(param_1 + 0x11e) != *(longlong *)(param_2 + 0x11e)) {
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x11e) = uVar2;
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x124);
  *(undefined8 *)(param_1 + 0x122) = *(undefined8 *)(param_2 + 0x122);
  *(undefined8 *)(param_1 + 0x124) = uVar2;
  if ((*(longlong *)(param_1 + 0x126) != *(longlong *)(param_2 + 0x126)) ||
     (param_1[0x128] != param_2[0x128])) {
    *(longlong *)(param_1 + 0x126) = *(longlong *)(param_2 + 0x126);
    param_1[0x128] = param_2[0x128];
    *(undefined8 *)(param_1 + 0x12a) = 0;
  }
  param_1[300] = param_2[300];
  *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)(param_2 + 0x12e);
  return param_1;
}



// FUNCTION 140c191a2 FUN_140c191a2 body=137 status=ok
// SIG undefined FUN_140c191a2(void)

longlong FUN_140c191a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_140c1922b();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_140c19730(param_2);
    }
  }
  return param_1;
}



// FUNCTION 140c1922b FUN_140c1922b body=797 status=ok
// SIG undefined FUN_140c1922b(void)

longlong * FUN_140c1922b(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar5 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_70 = local_48;
    local_6c = local_44;
    local_78 = local_50;
    uVar6 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar6;
      do {
        puVar7 = (undefined4 *)((longlong)iVar8 * 0x14 + *local_90);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7,4);
          }
          else {
            FUN_14572512c(param_1,puVar7);
          }
        }
        else {
          *puVar7 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        (**(code **)(*param_1 + 0x160))(param_1,puVar7 + 1);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar5,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar3;
    }
    FUN_1403dd62e(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar6 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_140c1954a(param_2,&local_90);
        puVar4 = local_88;
        *local_88 = 0;
        local_88[1] = 0xffffffff00000000;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_88,4);
          }
          else {
            FUN_14572512c(param_1,local_88);
          }
        }
        else {
          *(undefined4 *)local_88 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        (**(code **)(*param_1 + 0x160))(param_1,(longlong)puVar4 + 4);
        iVar8 = iVar8 + 1;
        uVar6 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar6;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140c1954a FUN_140c1954a body=485 status=ok
// SIG undefined FUN_140c1954a(void)

int * FUN_140c1954a(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 140c19730 FUN_140c19730 body=634 status=ok
// SIG undefined FUN_140c19730(void)

void FUN_140c19730(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140c19793;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_140c19793:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x14);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x10 + lVar12 * 0x14) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0xc + lVar12 * 0x14) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 140c199aa FUN_140c199aa body=143 status=ok
// SIG undefined FUN_140c199aa(void)

undefined8 FUN_140c199aa(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x40) * 2;
    do {
      lVar7 = (longlong)*(int *)(*plVar5 + 0x28);
      if (lVar7 != 0) {
        lVar1 = *(longlong *)(*plVar5 + 0x20);
        lVar6 = 0;
        do {
          plVar2 = *(longlong **)(lVar1 + lVar6);
          cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3);
          if (cVar3 != '\0') {
            return 1;
          }
          lVar6 = lVar6 + 0x10;
        } while (lVar7 * 0x10 != lVar6);
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  return 0;
}



// FUNCTION 140c19a3e FUN_140c19a3e body=305 status=ok
// SIG undefined FUN_140c19a3e(void)

void FUN_140c19a3e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140c19ad8;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140c19ab1:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140c19ab1;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140c19ad8;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140c19ad8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c19b70 FUN_140c19b70 body=101 status=ok
// SIG undefined FUN_140c19b70(void)

void FUN_140c19b70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8c4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ac8c470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 140c19bd6 FUN_140c19bd6 body=24 status=ok
// SIG undefined FUN_140c19bd6(void)

void FUN_140c19bd6(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_140c19bee();
  return;
}



// FUNCTION 140c19bee FUN_140c19bee body=264 status=ok
// SIG undefined FUN_140c19bee(void)

undefined4 * FUN_140c19bee(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    FUN_140c19cf6(param_1 + 2,param_2 + 2);
    iVar1 = param_2[8];
    pvVar2 = *(void **)(param_2 + 6);
    param_1[8] = iVar1;
    if (iVar1 == 0 && param_1[9] == 0) {
      param_1[9] = 0;
    }
    else {
      FUN_1447a127e(param_1 + 6,iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1);
      }
    }
    iVar1 = param_2[0xc];
    pvVar2 = *(void **)(param_2 + 10);
    param_1[0xc] = iVar1;
    if (iVar1 == 0 && param_1[0xd] == 0) {
      param_1[0xd] = 0;
    }
    else {
      FUN_1446dd670(param_1 + 10,iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = param_2[0x10];
    pvVar2 = *(void **)(param_2 + 0xe);
    param_1[0x10] = iVar1;
    if (iVar1 == 0 && param_1[0x11] == 0) {
      param_1[0x11] = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0xe,iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0xe),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 140c19cf6 FUN_140c19cf6 body=88 status=ok
// SIG undefined FUN_140c19cf6(void)

undefined8 * FUN_140c19cf6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140c19d4e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140c19d4e FUN_140c19d4e body=317 status=ok
// SIG undefined FUN_140c19d4e(void)

void FUN_140c19d4e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c19dbc;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140c19dbc:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140c19e8c FUN_140c19e8c body=279 status=ok
// SIG undefined FUN_140c19e8c(void)

undefined8 FUN_140c19e8c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60 [2];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x30);
  local_70 = param_3;
  local_68 = param_4;
  if ((longlong)iVar1 == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if ((((*(int *)(lVar4 + 0x74) != 0) && (uVar2 = *(uint *)(lVar4 + 0x70), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar6 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(lVar4 + 0x74))) &&
          (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))))) {
        if (*(int *)(param_2 + 0x20) != 0) {
          local_50 = 0;
          local_60[1] = 0;
          local_60[0] = param_2;
          cVar5 = FUN_14008db60(local_60,*plVar6 + 0x160);
          if (cVar5 == '\0') goto LAB_140c19f52;
        }
        FUN_140c19fa4(lVar4,local_70,local_68);
        uVar7 = 1;
      }
LAB_140c19f52:
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 140c19fa4 FUN_140c19fa4 body=422 status=ok
// SIG undefined FUN_140c19fa4(void)

void FUN_140c19fa4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 ****ppppuVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88 [8];
  undefined8 ***local_80 [3];
  ushort local_68;
  byte local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_2 != 0) && (*(char *)(param_1 + 0x148) == '\x01')) &&
     ((longlong)*(int *)(param_2 + 0x38) != 0)) {
    plVar7 = *(longlong **)(param_2 + 0x30);
    plVar1 = plVar7 + (longlong)*(int *)(param_2 + 0x38) * 3;
    do {
      if (*plVar7 != 0) {
        FUN_140c1a24c(*plVar7,&local_90,param_1);
        if (local_50 == '\x01') {
          plVar3 = (longlong *)*param_3;
          iVar8 = *(int *)(param_3 + 1);
          lVar9 = (longlong)iVar8;
          if (lVar9 != 0) {
            lVar6 = lVar9 << 6;
            plVar5 = plVar3;
            do {
              if (*plVar5 == local_90) {
                if (plVar5 != (longlong *)0x0) {
                  FUN_148995fc6(plVar5,&local_90);
                  iVar8 = 3;
                  goto LAB_140c1a076;
                }
                break;
              }
              plVar5 = plVar5 + 8;
              lVar6 = lVar6 + -0x40;
            } while (lVar6 != 0);
          }
          *(uint *)(param_3 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
            FUN_140c1a14c(param_3,iVar8);
            plVar3 = (longlong *)*param_3;
          }
          plVar3[lVar9 * 8] = local_90;
          FUN_14034cca6(plVar3 + lVar9 * 8 + 1,local_88);
          iVar8 = 0;
        }
        else {
          iVar8 = 1;
        }
LAB_140c1a076:
        if (local_50 == '\x01') {
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
          if (pcVar2 != (code *)0x0) {
            ppppuVar4 = local_80;
            if (0x18 < local_68) {
              ppppuVar4 = (undefined8 ****)local_80[0];
            }
            (*pcVar2)(ppppuVar4);
          }
          if (0x18 < local_68) {
            FUN_1400020a8(local_80[0]);
          }
        }
        if ((iVar8 != 0) && (iVar8 != 3)) break;
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c1a14c FUN_140c1a14c body=255 status=ok
// SIG undefined FUN_140c1a14c(void)

void FUN_140c1a14c(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c1a24c FUN_140c1a24c body=529 status=ok
// SIG undefined FUN_140c1a24c(void)

longlong * FUN_140c1a24c(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****_Src;
  uint uVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined8 ***local_90 [3];
  ushort local_78;
  byte local_70;
  undefined1 local_68;
  undefined1 local_60 [8];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))(param_1,local_60);
  if (local_38 == 0) {
    *(undefined1 *)(param_2 + 8) = 0;
    uVar3 = 0;
  }
  else {
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_98 = 0;
    local_a0 = param_1[1];
    if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(local_90), 0x18 < local_78)) {
      FUN_1400020a8(local_90[0]);
    }
    uVar3 = (uint)local_38;
    local_78 = local_40;
    if (local_40 < 0x19) {
      ppppuVar2 = local_90;
      _Src = local_58;
    }
    else {
      ppppuVar2 = (undefined8 ****)FUN_14001cc68(local_40,0);
      _Src = (undefined8 ****)local_58[0];
      local_90[0] = ppppuVar2;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar3 * 0x120));
    if (pcVar1 == (code *)0x0) {
      memcpy(ppppuVar2,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar3 * 0x120)));
    }
    else {
      (*pcVar1)();
    }
    local_70 = local_38;
    local_68 = local_30;
    *param_2 = local_a0;
    FUN_140382e86(param_2 + 1,&local_98);
    *(undefined1 *)(param_2 + 8) = 1;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar2 = local_90;
      if (0x18 < local_78) {
        ppppuVar2 = (undefined8 ****)local_90[0];
      }
      (*pcVar1)(ppppuVar2);
    }
    if (0x18 < local_78) {
      FUN_1400020a8(local_90[0]);
    }
    uVar3 = (uint)local_38;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar2 = (undefined8 ****)local_58[0];
    if (local_40 < 0x19) {
      ppppuVar2 = local_58;
    }
    (*pcVar1)(ppppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c1a45e FUN_140c1a45e body=207 status=ok
// SIG undefined FUN_140c1a45e(void)

undefined8 FUN_140c1a45e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ushort local_38;
  byte local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140785382(param_2,2);
  local_50 = (**(code **)(*param_3 + 0x18))(param_3);
  local_58 = 0;
  local_38 = 4;
  local_30 = 2;
  local_28 = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_1403719a4(param_2,&local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_38 < 0x19) {
      puVar2 = &local_50;
    }
    else {
      puVar2 = (undefined4 *)CONCAT44(uStack_4c,local_50);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(CONCAT44(uStack_4c,local_50));
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1a534 FUN_140c1a534 body=57 status=ok
// SIG undefined FUN_140c1a534(void)

void FUN_140c1a534(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aee8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aee8 = FUN_140002ddd(FUN_1464cd3e3,uVar1,L"GbxBrainAspect_UsePerch");
  }
  return;
}



// FUNCTION 140c1a574 FUN_140c1a574 body=57 status=ok
// SIG undefined FUN_140c1a574(void)

void FUN_140c1a574(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3f30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3f30 = FUN_140002ddd(FUN_1465bc22f,uVar1,L"GpsTest_IsCauser");
  }
  return;
}



// FUNCTION 140c1a5b6 FUN_140c1a5b6 body=1437 status=ok
// SIG undefined FUN_140c1a5b6(void)

undefined8 FUN_140c1a5b6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  bool bVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_7c;
  undefined1 local_78 [4];
  undefined1 local_74;
  longlong local_70;
  int local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_48;
  undefined4 uStack_44;
  int local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = DAT_14cb839b0;
  local_70 = DAT_14cb839a8;
  FUN_1448075d0(&local_48);
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar9 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar6[9];
      }
      iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar6[10] - 1U & local_48) * 4);
      if (iVar10 != -1) {
        do {
          lVar1 = *plVar6 + (longlong)iVar10 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar10 * 0x40) == local_48) {
            if ((((lVar1 != 0) &&
                 (puVar7 = (undefined8 *)(lVar1 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
            goto LAB_140c1a66e;
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x38);
        } while (iVar10 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_140c1a66e:
  if ((((byte *)*puVar7 == (byte *)0x0) || (bVar2 = *(byte *)*puVar7, (bVar2 & 3) == 0)) ||
     ((bVar2 & 0x68) != 0)) {
    local_90 = DAT_14cb839c8;
    local_98 = DAT_14cb839c0;
    FUN_1448075d0(&local_70);
    pbVar3 = (byte *)*param_2;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar6 = &DAT_14c9a1288;
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
        plVar9 = plVar6 + 8;
        if ((longlong *)plVar6[9] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar6[9];
        }
        iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar6[10] - 1U & (uint)local_70) * 4)
        ;
        if (iVar10 != -1) {
          do {
            lVar1 = *plVar6 + (longlong)iVar10 * 0x40;
            if (*(uint *)(*plVar6 + (longlong)iVar10 * 0x40) == (uint)local_70) {
              if (((lVar1 != 0) &&
                  (puVar7 = (undefined8 *)(lVar1 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar7 != (byte *)0x0 && ((*(byte *)*puVar7 & 0x40) == 0))))
              goto LAB_140c1a710;
              break;
            }
            iVar10 = *(int *)(lVar1 + 0x38);
          } while (iVar10 != -1);
        }
      }
    }
    puVar7 = &DAT_14c9a1308;
LAB_140c1a710:
    if ((byte *)*puVar7 == (byte *)0x0) {
      bVar8 = false;
    }
    else {
      bVar2 = *(byte *)*puVar7;
      bVar8 = (bVar2 & 0x68) == 0 && (bVar2 & 3) != 0;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (!bVar8) {
      local_68 = DAT_14cb83998;
      local_70 = DAT_14cb83990;
      FUN_1448075d0(&local_48);
      pbVar3 = (byte *)*param_2;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar6 = &DAT_14c9a1288;
        }
        else {
          plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
          plVar9 = plVar6 + 8;
          if ((longlong *)plVar6[9] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar6[9];
          }
          iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar6[10] - 1U & local_48) * 4);
          if (iVar10 != -1) {
            do {
              lVar1 = *plVar6 + (longlong)iVar10 * 0x40;
              if (*(uint *)(*plVar6 + (longlong)iVar10 * 0x40) == local_48) {
                if ((((lVar1 != 0) &&
                     (puVar7 = (undefined8 *)(lVar1 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                    ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
                goto LAB_140c1a7db;
                break;
              }
              iVar10 = *(int *)(lVar1 + 0x38);
            } while (iVar10 != -1);
          }
        }
      }
      puVar7 = &DAT_14c9a1308;
LAB_140c1a7db:
      if ((byte *)*puVar7 == (byte *)0x0) {
        bVar8 = false;
      }
      else {
        bVar2 = *(byte *)*puVar7;
        bVar8 = (bVar2 & 0x68) == 0 && (bVar2 & 3) != 0;
      }
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (bVar8) {
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_74 = 0;
        local_68 = DAT_14cb83998;
        local_70 = DAT_14cb83990;
        FUN_1448075d0(&local_48);
        pbVar3 = (byte *)*param_2;
        if (pbVar3 != (byte *)0x0) {
          if ((*pbVar3 & 2) == 0) {
            plVar6 = &DAT_14c9a1288;
          }
          else {
            plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
          }
          if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
            plVar9 = plVar6 + 8;
            if ((longlong *)plVar6[9] != (longlong *)0x0) {
              plVar9 = (longlong *)plVar6[9];
            }
            iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar6[10] - 1U & local_48) * 4);
            if (iVar10 != -1) {
              do {
                lVar1 = *plVar6 + (longlong)iVar10 * 0x40;
                if (*(uint *)(*plVar6 + (longlong)iVar10 * 0x40) == local_48) {
                  if ((((lVar1 != 0) &&
                       (puVar7 = (undefined8 *)(lVar1 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                      ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
                  goto LAB_140c1a8b1;
                  break;
                }
                iVar10 = *(int *)(lVar1 + 0x38);
              } while (iVar10 != -1);
            }
          }
        }
        puVar7 = &DAT_14c9a1308;
LAB_140c1a8b1:
        FUN_140008118(&local_70,puVar7,local_78,&local_98);
        if ((local_68 - 0x1010U < 0x31) &&
           ((0x1000100000001U >> ((ulonglong)(local_68 - 0x1010U) & 0x3f) & 1) != 0)) {
          if ((*(longlong *)(param_1 + 8) != local_70) || (*(int *)(param_1 + 0x10) != local_68)) {
            *(longlong *)(param_1 + 8) = local_70;
            *(int *)(param_1 + 0x10) = local_68;
            *(undefined8 *)(param_1 + 0x18) = 0;
          }
          *(undefined1 *)(param_1 + 0x20) = 0;
          FUN_140a3e398(param_1 + 0x28);
        }
        if (local_30 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        cVar4 = FUN_140c1ab54(param_2);
        if (cVar4 == '\0') goto LAB_140c1a979;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_7c = 0;
        FUN_140008118(&local_48,param_2);
        if (((local_40 == 0x1010) || (local_40 == 0x1040)) || (local_40 == 0x1030)) {
          if ((*(longlong *)(param_1 + 8) != CONCAT44(uStack_44,local_48)) ||
             (*(int *)(param_1 + 0x10) != local_40)) {
            *(longlong *)(param_1 + 8) = CONCAT44(uStack_44,local_48);
            *(int *)(param_1 + 0x10) = local_40;
            *(undefined8 *)(param_1 + 0x18) = 0;
          }
          *(undefined1 *)(param_1 + 0x20) = 0;
          FUN_140a3e398(param_1 + 0x28);
        }
      }
      uVar5 = 1;
      goto LAB_140c1a97b;
    }
  }
  else if (local_30 != 0) {
    FUN_1400020a8();
  }
LAB_140c1a979:
  uVar5 = 0;
LAB_140c1a97b:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140c1ab54 FUN_140c1ab54 body=21 status=ok
// SIG undefined FUN_140c1ab54(void)

undefined8 FUN_140c1ab54(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff6b;
    return CONCAT71((int7)(uVar2 >> 8),(char)uVar2 == '\x01');
  }
  return 0;
}



// FUNCTION 140c1ab70 FUN_140c1ab70 body=57 status=ok
// SIG undefined FUN_140c1ab70(void)

void FUN_140c1ab70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22b98 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22b98 = FUN_140002ddd(FUN_14643b03a,uVar1,L"GpsGenerator_TargetInfo");
  }
  return;
}



// FUNCTION 140c1abaa FUN_140c1abaa body=33 status=ok
// SIG undefined FUN_140c1abaa(void)

void FUN_140c1abaa(undefined8 param_1)

{
  FUN_1405f1eac();
  FUN_140c1abcc(&DAT_14caf6fc8,param_1);
  return;
}



// FUNCTION 140c1abcc FUN_140c1abcc body=162 status=ok
// SIG undefined FUN_140c1abcc(void)

void FUN_140c1abcc(longlong *param_1,undefined8 param_2)

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
        goto LAB_140c1ac59;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140c1ac59:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140c1ac6e FUN_140c1ac6e body=1925 status=ok
// SIG undefined FUN_140c1ac6e(void)

void FUN_140c1ac6e(undefined8 ******param_1,longlong param_2)

{
  undefined8 ****ppppuVar1;
  int *piVar2;
  undefined8 *****pppppuVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  undefined8 ***pppuVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *******pppppppuVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 ******local_128;
  undefined8 ***local_120;
  undefined8 local_118;
  ushort local_110;
  uint local_108 [2];
  byte local_100;
  undefined8 ******local_f8 [3];
  ushort local_e0;
  byte local_d8;
  undefined8 local_d0;
  undefined8 ******local_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****local_b8;
  ushort local_b0;
  byte local_a8;
  byte local_a0;
  undefined8 ******local_98;
  undefined8 local_90;
  undefined8 local_88;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_140323a4e();
  if (*(char *)(param_1 + 0x37) == '\x01') {
    local_b8 = param_1[0x36];
    local_c8 = (undefined8 ******)param_1[0x34];
    ppppuStack_c0 = param_1[0x35];
    local_d0 = 0;
    local_b0 = 0x18;
    local_a8 = 4;
    local_a0 = (byte)~DAT_14c9a8994 >> 3 & 4;
  }
  else {
    FUN_14034cca6(&local_d0,param_1[9] + 0x3d);
  }
  pppppuVar3 = param_1[8];
  if (pppppuVar3 == (undefined8 *****)0x0) {
    lVar14 = 0;
    local_128 = (undefined8 ******)0x0;
LAB_140c1b311:
    local_120 = (undefined8 ****)0x0;
    bVar16 = true;
  }
  else {
    if (*(int *)((longlong)pppppuVar3 + 0x4c) == 0) {
LAB_140c1b2b9:
      lVar14 = 0;
    }
    else {
      uVar9 = *(uint *)(pppppuVar3 + 9);
      lVar14 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)((longlong)pppppuVar3 + 0x4c) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_140c1b2b9;
        lVar14 = *plVar13;
      }
    }
    ppppuVar4 = pppppuVar3[0x23];
    local_128 = param_1;
    if (ppppuVar4 == (undefined8 ****)0x0) goto LAB_140c1b311;
    LOCK();
    *(int *)(ppppuVar4 + 1) = *(int *)(ppppuVar4 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)ppppuVar4 + 0xc) = *(int *)((longlong)ppppuVar4 + 0xc) + 1;
    UNLOCK();
    LOCK();
    ppppuVar1 = ppppuVar4 + 1;
    *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
    UNLOCK();
    if (*(int *)ppppuVar1 == 0) {
      (*(code *)**ppppuVar4)(ppppuVar4);
      LOCK();
      piVar2 = (int *)((longlong)ppppuVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppuVar4)[2])(ppppuVar4);
      }
    }
    LOCK();
    *(int *)((longlong)ppppuVar4 + 0xc) = *(int *)((longlong)ppppuVar4 + 0xc) + 1;
    UNLOCK();
    bVar16 = false;
    local_120 = ppppuVar4;
  }
  pppuVar6 = local_120;
  local_130 = CONCAT71(local_130._1_7_,3);
  local_108[0] = 0;
  local_118._0_4_ = 0;
  if (lVar14 == 0) {
    iVar8 = 0;
    uVar9 = (uint)local_118;
  }
  else {
    uVar9 = *(uint *)(lVar14 + 0xc);
    local_118 = (double)(ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar8 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar14 + 0x10);
      bVar17 = iVar8 == 0;
      if (bVar17) {
        *(int *)(lVar14 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar9 = (uint)local_118;
      if (bVar17) {
        iVar8 = iVar12;
      }
    }
  }
  local_118._0_4_ = uVar9;
  local_118 = (double)CONCAT44(iVar8,(uint)local_118);
  local_110 = CONCAT11(local_110._1_1_,2);
  if (local_108[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_108[0] - 1,1);
    local_108[0] = 0;
  }
  if (!bVar16) {
    LOCK();
    piVar2 = (int *)((longlong)pppuVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*pppuVar6)[2])(pppuVar6);
    }
  }
  FUN_1447c3578(&local_d0,local_f8,&local_130);
  if (local_d8 == 4) {
    uVar22 = SUB84(local_f8[1],0);
    uVar23 = (undefined4)((ulonglong)local_f8[1] >> 0x20);
    uVar9 = 4;
    uVar24 = SUB84(local_f8[2],0);
    uVar25 = (undefined4)((ulonglong)local_f8[2] >> 0x20);
    pppppppuVar10 = (undefined8 *******)local_f8[0];
  }
  else {
    FUN_1400b56fe(&local_98,local_f8,4);
    bVar16 = local_78 != 0;
    pppppppuVar10 = DAT_14c9ab228;
    if (bVar16) {
      pppppppuVar10 = (undefined8 *******)local_98;
    }
    puVar11 = &DAT_14c9ab230;
    if (bVar16) {
      puVar11 = &local_90;
    }
    uVar22 = (undefined4)*puVar11;
    uVar23 = (undefined4)((ulonglong)*puVar11 >> 0x20);
    puVar11 = &DAT_14c9ab238;
    if (bVar16) {
      puVar11 = &local_88;
    }
    uVar24 = (undefined4)*puVar11;
    uVar25 = (undefined4)((ulonglong)*puVar11 >> 0x20);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppppppuVar15 = &local_98;
      if (0x18 < local_80) {
        pppppppuVar15 = (undefined8 *******)local_98;
      }
      (*pcVar5)(pppppppuVar15);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98);
    }
    uVar9 = (uint)local_d8;
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
  if (pcVar5 != (code *)0x0) {
    pppppppuVar15 = local_f8;
    if (0x18 < local_e0) {
      pppppppuVar15 = (undefined8 *******)local_f8[0];
    }
    (*pcVar5)(pppppppuVar15);
  }
  if (0x18 < local_e0) {
    FUN_1400020a8(local_f8[0]);
  }
  FUN_1448173f8(local_108);
  if (((char)local_130 == '\x03') && ((undefined8 ****)local_120 != (undefined8 ****)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_120 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*local_120)[2])();
    }
  }
  fVar18 = (*(float *)(param_1 + 0x28) + *(float *)((longlong)param_1 + 0x144)) * 0.017453292;
  fVar18 = (float)(longlong)
                  (fVar18 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar18 < 0.0) * 4))
           * -6.2831855 + fVar18;
  if (1.5707964 < fVar18) {
    fVar19 = 3.1415927;
  }
  else {
    if (-1.5707964 <= fVar18) {
      fVar19 = 1.0;
      goto LAB_140c1af35;
    }
    fVar19 = -3.1415927;
  }
  fVar18 = fVar19 - fVar18;
  fVar19 = -1.0;
LAB_140c1af35:
  fVar21 = fVar18 * fVar18;
  dVar20 = (double)*(float *)((longlong)param_1 + 0x14c);
  local_120 = (undefined8 ***)
              ((double)CONCAT44(uVar23,uVar22) +
              (double)((((((fVar21 * -2.3889859e-08 + 2.7525562e-06) * fVar21 + -0.00019840874) *
                          fVar21 + 0.008333331) * fVar21 + -0.16666667) * fVar21 + 1.0) * fVar18) *
              dVar20);
  local_128 = (undefined8 ******)
              ((double)pppppppuVar10 +
              (double)((((((fVar21 * -2.6051615e-07 + 2.4760495e-05) * fVar21 + -0.0013888378) *
                          fVar21 + 0.041666638) * fVar21 + -0.5) * fVar21 + 1.0) * fVar19) * dVar20)
  ;
  local_118 = (double)CONCAT44(uVar25,uVar24) + (double)*(float *)(param_1 + 0x29) + dVar20 * 0.0;
  local_130 = 0;
  local_110 = 0x18;
  local_108[0] = CONCAT31(local_108[0]._1_3_,4);
  local_100 = (byte)~DAT_14c9a8994 >> 3 & 4;
  FUN_1405b72da(param_1,&local_130,param_2);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((local_108[0] & 0xff) * 0x120));
  if (pcVar5 != (code *)0x0) {
    pppppppuVar10 = (undefined8 *******)local_128;
    if (local_110 < 0x19) {
      pppppppuVar10 = &local_128;
    }
    (*pcVar5)(pppppppuVar10);
  }
  if (0x18 < local_110) {
    FUN_1400020a8(local_128);
  }
  cVar7 = FUN_140c1b3f4(param_1);
  if (cVar7 == '\0') {
    if (*(char *)((longlong)param_1 + 0x13d) == '\x01') {
      bVar16 = -*(float *)(param_1 + 0x25) <
               *(float *)((longlong)param_1 + 0x144) - *(float *)((longlong)param_1 + 300);
    }
    else {
      bVar16 = *(float *)((longlong)param_1 + 0x144) + *(float *)((longlong)param_1 + 300) <
               *(float *)(param_1 + 0x25);
    }
    *(bool *)(param_2 + 0xa9) = !bVar16;
  }
  else {
    *(undefined1 *)(param_2 + 0xa9) = 0;
  }
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x2a);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)((longlong)param_1 + 0x134);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
  if (pcVar5 != (code *)0x0) {
    pppppppuVar10 = (undefined8 *******)local_c8;
    if (local_b0 < 0x19) {
      pppppppuVar10 = &local_c8;
    }
    (*pcVar5)(pppppppuVar10);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(local_c8);
  }
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c1b3f4 FUN_140c1b3f4 body=889 status=ok
// SIG undefined FUN_140c1b3f4(void)

ulonglong FUN_140c1b3f4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  char local_b8 [8];
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  int local_90 [2];
  int local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  int local_60;
  undefined4 uStack_5c;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar11 = *(longlong *)(param_1 + 0x40);
  if (lVar11 == 0) {
    lVar10 = 0;
    param_1 = 0;
  }
  else {
    if (*(int *)(lVar11 + 0x4c) == 0) {
LAB_140c1b5e9:
      lVar10 = 0;
    }
    else {
      uVar5 = *(uint *)(lVar11 + 0x48);
      lVar10 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((plVar8 == (longlong *)0x0) ||
           (((int)plVar8[2] != *(int *)(lVar11 + 0x4c) ||
            ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_140c1b5e9;
        lVar10 = *plVar8;
      }
    }
    plVar8 = *(longlong **)(lVar11 + 0x118);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar9 = (int *)((longlong)plVar8 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      bVar12 = false;
      local_b0 = param_1;
      local_a8 = plVar8;
      goto LAB_140c1b4c8;
    }
  }
  local_a8 = (longlong *)0x0;
  bVar12 = true;
  local_b0 = param_1;
LAB_140c1b4c8:
  plVar8 = local_a8;
  local_90[0] = 0;
  local_b8[0] = '\x03';
  local_a0._0_4_ = 0;
  if (lVar10 == 0) {
    iVar4 = 0;
    uVar5 = (uint)local_a0;
  }
  else {
    uVar5 = *(uint *)(lVar10 + 0xc);
    local_a0 = (ulonglong)uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar4 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar11 + 0x10);
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(lVar11 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      uVar5 = (uint)local_a0;
      if (bVar13) {
        iVar4 = iVar6;
      }
    }
  }
  local_a0._0_4_ = uVar5;
  local_a0 = CONCAT44(iVar4,(uint)local_a0);
  local_98 = 2;
  if (local_90[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_90[0] + -1,1);
    local_90[0] = 0;
  }
  if (!bVar12) {
    LOCK();
    piVar9 = (int *)((longlong)plVar8 + 0xc);
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (*piVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  piVar9 = &local_88;
  FUN_1447c3578(lVar2 + 1000,piVar9,local_b8);
  if (local_68 == 1) {
    bVar12 = local_88 != 0;
    uVar5 = 1;
  }
  else {
    piVar7 = &local_60;
    FUN_1400b56fe(piVar7,&local_88,1);
    bVar12 = local_60 != 0;
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_48) {
        piVar7 = (int *)CONCAT44(uStack_5c,local_60);
      }
      (*pcVar3)(piVar7);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(CONCAT44(uStack_5c,local_60));
    }
    bVar12 = local_40 != 0 && bVar12;
    uVar5 = (uint)local_68;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_70) {
      piVar9 = (int *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar3)(piVar9);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  FUN_1448173f8(local_90);
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar9 = (int *)((longlong)local_a8 + 0xc);
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (*piVar9 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)plVar8 >> 8),bVar12) & 0xffffffff;
}



// FUNCTION 140c1b76e FUN_140c1b76e body=2596 status=ok
// SIG undefined FUN_140c1b76e(void)

void FUN_140c1b76e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  ulonglong local_98;
  int local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 local_78;
  int local_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_141499196();
  FUN_145786938(&DAT_14cb70de8);
  local_b8 = param_1 + 0x288;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  local_70 = 0;
  local_80 = local_b8;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    uVar18 = 1;
    local_78._0_4_ = 0xffffffff;
    iVar13 = 0;
    local_78._4_4_ = 0;
    local_88._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    uVar18 = local_88 >> 0x20;
    iVar13 = *(int *)(param_1 + 0x2a0);
  }
  lVar6 = local_80;
  local_d0 = param_1;
  if (local_78._4_4_ != iVar13 || local_80 != local_b8) {
    local_b0 = param_1 + 0x2b0;
    local_c0 = CONCAT44(local_c0._4_4_,iVar13);
    iVar13 = (int)local_88;
    uVar19 = (uint)local_78;
    iVar12 = local_78._4_4_;
    iVar17 = local_70;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x10 + (longlong)iVar12 * 0x20);
      if ((lVar10 != 0) && (plVar3 = *(longlong **)(lVar10 + 0x30), plVar3 != (longlong *)0x0)) {
        lVar8 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar9 = FUN_140c1c194();
        param_1 = local_d0;
        if ((lVar9 != 0) &&
           ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
             lVar9 + 0x30)))) {
          iVar12 = *(int *)((longlong)plVar3 + 0x74);
          FUN_1403d7755(plVar3[0xd],(int)plVar3[0xe]);
          *(undefined4 *)(plVar3 + 0xe) = 0;
          if ((iVar12 < 0) && (*(int *)((longlong)plVar3 + 0x74) != 0)) {
            FUN_1487c02c8(plVar3 + 0xd);
          }
          param_1 = local_d0;
          if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
            if (*(short *)((longlong)plVar3 + 0x2a) != -1) {
              while( true ) {
                lVar8 = local_d0;
                FUN_14030ff28(local_d0,&local_88,lVar10 + 0x48);
                lVar10 = FUN_144837462(lVar8,&local_88);
                if (CONCAT44(uStack_6c,local_70) != 0) {
                  FUN_1400020a8();
                }
                if (lVar10 == 0) goto LAB_140c1bb15;
                if (*(short *)(lVar10 + 0x2a) == *(short *)((longlong)plVar3 + 0x2a)) break;
                puVar14 = *(uint **)(lVar10 + 8);
                if (puVar14 == (uint *)0x0) {
                  puVar14 = &DAT_14c9485f0;
                }
                iVar12 = *(int *)(local_d0 + 0x2c8);
                uVar16 = *puVar14;
                if ((longlong)iVar12 == -1) {
                  if (((uVar16 != 0) && (puVar14[1] != 0)) &&
                     (puVar24 = &DAT_14c948028, uVar16 != DAT_14c948000)) goto LAB_140c1ba87;
LAB_140c1bb51:
                  puVar24 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
                  uVar16 = (uint)DAT_14c948618;
                }
                else {
                  if (((uVar16 == 0) || (uVar7 = puVar14[1], uVar7 == 0)) ||
                     (uVar16 == DAT_14c948000)) goto LAB_140c1bb51;
                  puVar20 = puVar14 + 2;
                  if (0 < (int)puVar14[9]) {
                    puVar20 = *(uint **)(puVar14 + 6);
                  }
                  if (1 < (int)uVar7) {
                    puVar20 = *(uint **)(puVar14 + 6);
                  }
                  if ((iVar12 < 1) || (uVar7 != 1)) {
                    if ((int)uVar7 <= iVar12) goto LAB_140c1bb51;
                    puVar24 = (ulonglong *)(puVar20 + (longlong)iVar12 * 3 + 1);
                    uVar16 = puVar20[(longlong)iVar12 * 3];
                  }
                  else {
                    puVar14 = (uint *)&DAT_14c948618;
                    if (*(int *)(local_d0 + 0x2cc) == 1) {
                      puVar14 = puVar20;
                    }
                    uVar16 = *puVar14;
                    puVar24 = (ulonglong *)(puVar14 + 1);
                  }
                }
LAB_140c1ba87:
                uVar1 = *puVar24;
                uVar23 = uVar1 >> 0x20;
                uVar7 = uVar16;
                if (uVar23 != 0) {
                  uVar7 = FUN_144a78877(uVar16,uVar23);
                }
                if (*(int *)(local_d0 + 0x280) == *(int *)(local_d0 + 0x2ac)) goto LAB_140c1bb15;
                lVar10 = *(longlong *)(local_d0 + 0x2b8);
                if (*(longlong *)(local_d0 + 0x2b8) == 0) {
                  lVar10 = local_b0;
                }
                iVar12 = *(int *)(lVar10 + (ulonglong)(*(int *)(local_d0 + 0x2c0) - 1U & uVar7) * 4)
                ;
                if (iVar12 == -1) goto LAB_140c1bb15;
                lVar10 = *(longlong *)(local_d0 + 0x278);
                while ((lVar8 = (longlong)iVar12 * 0x20, *(uint *)(lVar10 + lVar8) != uVar16 ||
                       (lVar9 = lVar10 + lVar8, *(int *)(lVar9 + 8) != (int)(uVar1 >> 0x20)))) {
                  iVar12 = *(int *)(lVar10 + 0x18 + lVar8);
                  if (iVar12 == -1) goto LAB_140c1bb15;
                }
                if ((lVar9 == 0) || (lVar10 = *(longlong *)(lVar9 + 0x10), lVar10 == 0))
                goto LAB_140c1bb15;
              }
              *(undefined4 *)(plVar3 + 5) = 0xffff0301;
              plVar3[4] = DAT_14cb70df8;
            }
LAB_140c1bb15:
            param_1 = local_d0;
            if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
              FUN_140c1c1ce(&DAT_14cb70de8,plVar3);
              param_1 = local_d0;
            }
          }
        }
      }
      uVar19 = uVar19 & ~(uint)uVar18;
      lVar10 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        lVar10 = lVar6;
      }
      iVar22 = *(int *)(lVar6 + 0x18);
      lVar8 = (longlong)iVar13;
      uVar16 = *(uint *)(lVar10 + lVar8 * 4) & uVar19;
      if (uVar16 == 0) {
        iVar12 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar12 = iVar22 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar2 = iVar12;
        if (iVar12 < iVar13) {
          iVar2 = iVar13;
        }
        if (iVar13 < iVar12) {
          lVar9 = 0;
          do {
            uVar16 = *(uint *)(lVar10 + lVar8 * 4 + 4 + lVar9 * 4);
            if (uVar16 != 0) {
              iVar13 = iVar13 + (int)lVar9 + 1;
              uVar19 = 0xffffffff;
              goto LAB_140c1b90d;
            }
            iVar17 = iVar17 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar2 - lVar8 != lVar9);
          uVar19 = 0xffffffff;
          iVar13 = iVar2;
        }
        iVar13 = iVar13 + 1;
        param_1 = local_d0;
        iVar12 = iVar22;
      }
      else {
LAB_140c1b90d:
        uVar18 = (ulonglong)(-uVar16 & uVar16);
        uVar1 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar12 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar12) {
          iVar12 = iVar22;
        }
      }
    } while (iVar12 != (int)local_c0 || lVar6 != local_b8);
    iVar13 = *(int *)(param_1 + 0x2a0);
  }
  local_88 = 0x100000000;
  local_80 = local_b8;
  local_78 = 0xffffffff;
  local_70 = 0;
  if (iVar13 == 0) {
    uVar18 = 1;
    local_78._0_4_ = 0xffffffff;
    iVar13 = 0;
    local_78._4_4_ = 0;
    local_88._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    uVar18 = local_88 >> 0x20;
    iVar13 = *(int *)(local_d0 + 0x2a0);
  }
  lVar6 = local_80;
  lVar10 = local_d0;
  if (local_78._4_4_ != iVar13 || local_80 != local_b8) {
    local_a0 = local_d0 + 0x2b0;
    iVar12 = (int)local_88;
    uVar19 = (uint)local_78;
    iVar17 = local_78._4_4_;
    iVar22 = local_70;
    local_a4 = iVar13;
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x278) + 0x10 + (longlong)iVar17 * 0x20);
      if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0x30), plVar3 != (longlong *)0x0)) {
        lVar8 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar9 = FUN_140c1c194();
        lVar10 = local_d0;
        if ((lVar9 != 0) &&
           (((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
              lVar9 + 0x30)) && ((longlong)(int)plVar3[0xc] != 0)))) {
          lVar8 = plVar3[0xb];
          local_b0 = (longlong)(int)plVar3[0xc] * 0x38 + lVar8;
          do {
            local_98 = *(ulonglong *)(lVar8 + 8);
            local_c0 = lVar8;
            FUN_1446dcdd4(&local_88,&local_98);
            uVar16 = FUN_144a62e5c(&local_98,&local_88,*(undefined4 *)(lVar10 + 0x2c8),
                                   *(undefined4 *)(lVar10 + 0x2cc));
            iVar17 = local_90;
            if (local_90 != 0) {
              uVar16 = FUN_144a78877(local_98 & 0xffffffff,local_90);
            }
            iVar13 = local_a4;
            if (*(int *)(lVar10 + 0x280) != *(int *)(lVar10 + 0x2ac)) {
              if (iVar17 == 0) {
                uVar16 = (uint)local_98;
              }
              lVar8 = *(longlong *)(lVar10 + 0x2b8);
              if (*(longlong *)(lVar10 + 0x2b8) == 0) {
                lVar8 = local_a0;
              }
              iVar17 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar10 + 0x2c0) - 1U & uVar16) * 4);
              if (iVar17 != -1) {
                lVar8 = *(longlong *)(lVar10 + 0x278);
                do {
                  lVar9 = (longlong)iVar17 * 0x20;
                  if ((*(uint *)(lVar8 + lVar9) == (uint)local_98) &&
                     (lVar21 = lVar8 + lVar9, *(int *)(lVar21 + 8) == local_90)) {
                    if ((lVar21 != 0) &&
                       ((*(longlong *)(lVar21 + 0x10) != 0 &&
                        (plVar4 = *(longlong **)(*(longlong *)(lVar21 + 0x10) + 0x30),
                        plVar4 != (longlong *)0x0)))) {
                      local_c8 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4);
                      lVar8 = FUN_140c1c194();
                      lVar10 = local_d0;
                      if ((lVar8 != 0) &&
                         ((*(int *)(lVar8 + 0x38) <= *(int *)((longlong)local_c8 + 0x38) &&
                          (*(longlong *)
                            (*(longlong *)((longlong)local_c8 + 0x30) +
                            (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)))) {
                        if (CONCAT44(uStack_6c,local_70) != 0) {
                          FUN_1400020a8();
                        }
                        local_c8 = (undefined8 *)(longlong)(int)plVar4[0xe];
                        uVar16 = (int)plVar4[0xe] + 1;
                        *(uint *)(plVar4 + 0xe) = uVar16;
                        if (*(uint *)((longlong)plVar4 + 0x74) < uVar16) {
                          FUN_140aa20d2(plVar4 + 0xd,local_c8);
                        }
                        puVar15 = (undefined8 *)((longlong)local_c8 * 0x38 + plVar4[0xd]);
                        local_c8 = puVar15 + 4;
                        *puVar15 = &PTR_FUN_14b082af8;
                        puVar15[1] = 0;
                        puVar15[2] = 0;
                        puVar15[3] = 0;
                        puVar15[1] = *(undefined8 *)(local_c0 + 8);
                        uVar11 = FUN_14477b664(*(undefined8 *)(local_c0 + 0x10));
                        uVar11 = FUN_14477b664(uVar11);
                        local_c8[-2] = uVar11;
                        local_c8[-1] = *(undefined8 *)(local_c0 + 0x18);
                        FUN_1401f3da4(local_c8,local_c0 + 0x20);
                        lVar8 = plVar4[0xd] + (longlong)((int)plVar4[0xe] + -1) * 0x38;
                        puVar24 = (ulonglong *)(lVar8 + 8);
                        if (*(longlong *)(lVar8 + 0x10) == 0) {
                          uVar11 = FUN_140c1c194();
                          uVar11 = FUN_14477b664(uVar11);
                          *(undefined8 *)(lVar8 + 0x10) = uVar11;
                        }
                        local_c8 = (undefined8 *)FUN_140c1c194();
                        uVar11 = FUN_140c1c194();
                        FUN_1402d1bfa(&local_88,uVar11,plVar3);
                        if (*puVar24 != local_88) {
                          *(undefined8 *)(lVar8 + 0x18) = 0;
                        }
                        *puVar24 = local_88;
                        puVar15 = (undefined8 *)FUN_140c1c194();
                        if (local_c8 == (undefined8 *)0x0) {
LAB_140c1c008:
                          puVar15 = local_c8;
                        }
                        else if (puVar15 == (undefined8 *)0x0) {
                          puVar15 = (undefined8 *)0x0;
                        }
                        else if ((*(int *)((longlong)puVar15 + 0x38) <=
                                  *(int *)((longlong)local_c8 + 0x38)) &&
                                (*(longlong *)
                                  (*(longlong *)((longlong)local_c8 + 0x30) +
                                  (longlong)*(int *)((longlong)puVar15 + 0x38) * 8) ==
                                 (longlong)puVar15 + 0x30)) goto LAB_140c1c008;
                        if ((undefined8 *)*(longlong *)(lVar8 + 0x10) != puVar15) {
                          *(undefined8 *)(lVar8 + 0x18) = 0;
                        }
                        uVar11 = FUN_14477b664(puVar15);
                        lVar9 = FUN_14477b664(uVar11);
                        *(longlong *)(lVar8 + 0x10) = lVar9;
                        lVar10 = local_d0;
                        if ((lVar9 != 0) && (*puVar24 != 0)) {
                          *(longlong **)(lVar8 + 0x18) = plVar3;
                        }
                        goto LAB_140c1bdf8;
                      }
                    }
                    break;
                  }
                  iVar17 = *(int *)(lVar8 + 0x18 + lVar9);
                } while (iVar17 != -1);
              }
            }
            if (CONCAT44(uStack_6c,local_70) != 0) {
              FUN_1400020a8();
              lVar10 = local_d0;
            }
LAB_140c1bdf8:
            lVar8 = local_c0 + 0x38;
          } while (lVar8 != local_b0);
        }
      }
      uVar19 = uVar19 & ~(uint)uVar18;
      lVar8 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        lVar8 = lVar6;
      }
      iVar2 = *(int *)(lVar6 + 0x18);
      lVar9 = (longlong)iVar12;
      uVar16 = *(uint *)(lVar8 + lVar9 * 4) & uVar19;
      if (uVar16 == 0) {
        iVar17 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar17 = iVar2 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar5 = iVar17;
        if (iVar17 < iVar12) {
          iVar5 = iVar12;
        }
        if (iVar12 < iVar17) {
          lVar21 = 0;
          do {
            uVar16 = *(uint *)(lVar8 + lVar9 * 4 + 4 + lVar21 * 4);
            if (uVar16 != 0) {
              iVar12 = iVar12 + (int)lVar21 + 1;
              uVar19 = 0xffffffff;
              goto LAB_140c1bcc8;
            }
            iVar22 = iVar22 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar5 - lVar9 != lVar21);
          uVar19 = 0xffffffff;
          iVar12 = iVar5;
        }
        iVar12 = iVar12 + 1;
        lVar10 = local_d0;
        iVar17 = iVar2;
      }
      else {
LAB_140c1bcc8:
        uVar18 = (ulonglong)(-uVar16 & uVar16);
        uVar1 = uVar18 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar17 = (iVar22 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar17) {
          iVar17 = iVar2;
        }
      }
    } while (iVar17 != iVar13 || lVar6 != local_b8);
  }
  FUN_145786fac(lVar10 + 0x390);
  FUN_14578713c(lVar10 + 0x3a0);
  FUN_1457872e8(lVar10 + 0x3b0);
  FUN_145786c96(lVar10 + 0x3c0);
  FUN_145786dc0(lVar10 + 0x3d0);
  FUN_145786eea(lVar10 + 0x3e0);
  FUN_145787482(lVar10 + 0x3f0);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c1c194 FUN_140c1c194 body=57 status=ok
// SIG undefined FUN_140c1c194(void)

void FUN_140c1c194(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb584c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb584c0 = FUN_140002ddd(FUN_1418490c1,uVar1,L"GbxActorPartBaseDef");
  }
  return;
}



// FUNCTION 140c1c1ce FUN_140c1c1ce body=345 status=ok
// SIG undefined FUN_140c1c1ce(void)

ulonglong FUN_140c1c1ce(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  longlong local_38;
  undefined8 *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  if (((param_2 != 0) &&
      (((4 < (ulonglong)*(byte *)(param_2 + 0x29) ||
        (piVar2 = (int *)(param_1 + 0x38 + (ulonglong)*(byte *)(param_2 + 0x29) * 4),
        *piVar2 = *piVar2 + 1, *(char *)(param_2 + 0x29) != '\0')) &&
       (*(char *)(param_2 + 0x28) == '\x01')))) &&
     (*(longlong *)(param_2 + 0x20) == *(longlong *)(param_1 + 0x10))) {
    piVar2 = &DAT_14c9485f0;
    if (*(int **)(param_2 + 8) != (int *)0x0) {
      piVar2 = *(int **)(param_2 + 8);
    }
    if (((*piVar2 == 0) || (iVar1 = piVar2[1], iVar1 == 0)) || (*piVar2 == DAT_14c948000)) {
LAB_140c1c309:
      local_40 = DAT_14c948620;
      local_48 = DAT_14c948618;
    }
    else {
      if ((iVar1 < 2) && (piVar2[9] < 1)) {
        piVar2 = piVar2 + 2;
      }
      else {
        piVar2 = *(int **)(piVar2 + 6);
      }
      if (iVar1 < 1) goto LAB_140c1c309;
      local_40 = piVar2[2];
      local_48 = *(undefined8 *)piVar2;
    }
    local_30 = &local_48;
    local_28 = &local_38;
    FUN_14096a31a(param_1 + 0xb0,local_1c,&local_30,0);
    uVar4 = CONCAT71((int7)((ulonglong)&local_38 >> 8),1);
    if (*(short *)(local_38 + 0x2a) < *(short *)(param_1 + 0x50)) goto LAB_140c1c2e9;
    plVar3 = (longlong *)
             FUN_1406fe82e(param_1 + 0x60,(int)*(short *)(local_38 + 0x2a),local_38 + 0x2a,&local_38
                          );
    if (((*plVar3 == 0) || (*plVar3 == local_38)) || (*(char *)(param_1 + 0x22) == '\x01'))
    goto LAB_140c1c2e9;
  }
  uVar4 = 0;
LAB_140c1c2e9:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1c328 FUN_140c1c328 body=112 status=ok
// SIG undefined FUN_140c1c328(void)

void FUN_140c1c328(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c1c398 FUN_140c1c398 body=132 status=ok
// SIG undefined FUN_140c1c398(void)

void FUN_140c1c398(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c1c41c FUN_140c1c41c body=72 status=ok
// SIG undefined FUN_140c1c41c(void)

void FUN_140c1c41c(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_1403de7ba(param_1,param_2);
    param_1 = param_1 + 4;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 140c1c464 FUN_140c1c464 body=72 status=ok
// SIG undefined FUN_140c1c464(void)

void FUN_140c1c464(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(param_2 + -0x10);
      *(undefined1 *)(param_1 + 0x30) = 0xff;
      FUN_140164444(param_1,param_2);
      param_1 = param_1 + 0x50;
      param_2 = param_2 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c1c4ac FUN_140c1c4ac body=311 status=ok
// SIG undefined FUN_140c1c4ac(void)

undefined8 FUN_140c1c4ac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140c1c5dc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140c1c5dc;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_140c1c5dc:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140c1c585;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140c1c585;
    }
  }
  uVar6 = 0;
LAB_140c1c585:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1c5e4 FUN_140c1c5e4 body=476 status=ok
// SIG undefined FUN_140c1c5e4(void)

void FUN_140c1c5e4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14011be0c(param_1 + 0x30);
  if (lVar4 == 0) {
LAB_140c1c7b0:
    lVar4 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140c1c7b0;
  }
  cVar3 = FUN_14011bf50(lVar4);
  if (cVar3 == '\0') {
    if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1403adc5e(&local_38,lVar4);
  lVar4 = *(longlong *)(local_38 + 0x60);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
  *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  cVar3 = FUN_140b038fa(param_2);
  if (*(char *)(lVar4 + 0x18) == cVar3) {
    if (*(int *)(lVar4 + 0x1c) != 0) goto LAB_140c1c6ba;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar4 + 0x1c) + 1;
  }
  *(char *)(lVar4 + 0x18) = cVar3;
  *(int *)(lVar4 + 0x1c) = iVar5;
LAB_140c1c6ba:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140c1c7d8 FUN_140c1c7d8 body=96 status=ok
// SIG undefined FUN_140c1c7d8(void)

void FUN_140c1c7d8(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  param_2[2] = 0;
  *(undefined1 *)puVar1 = 0;
  if (*param_1 != 0) {
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    FUN_140c1c83a();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1c83a FUN_140c1c83a body=196 status=ok
// SIG undefined FUN_140c1c83a(void)

void FUN_140c1c83a(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_3 + 4);
  if (*(int *)(param_3 + 4) < 1) {
    iVar3 = 0;
  }
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  param_2[2] = 0;
  *(undefined1 *)puVar2 = 0;
  local_38 = 0;
  local_48 = 1;
  local_40 = param_3;
  FUN_144850460(param_1,param_2,&local_38,iVar3);
  if ((ulonglong)param_2[3] < local_38) {
    lVar1 = param_2[2];
    FUN_140c1c900(param_2,local_38 - lVar1);
    param_2[2] = lVar1;
  }
  local_48 = 1;
  local_40 = param_3;
  FUN_144850460(param_1,param_2,0,iVar3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1c900 FUN_140c1c900 body=284 status=ok
// SIG undefined FUN_140c1c900(void)

undefined8 * FUN_140c1c900(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  void *_Src;
  void *_Dst;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  
  uVar5 = 0x7fffffffffffffff;
  lVar1 = param_1[2];
  if (0x7fffffffffffffffU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  param_2 = param_2 + lVar1;
  uVar2 = param_1[3];
  uVar3 = 0x8000000000000000;
  if ((-1 < (longlong)param_2) &&
     (uVar3 = 0x8000000000000000, uVar2 <= (uVar2 >> 1 ^ 0x7fffffffffffffff))) {
    uVar5 = (uVar2 >> 1) + uVar2;
    if (uVar5 < (param_2 | 0xf)) {
      uVar5 = param_2 | 0xf;
    }
    uVar3 = uVar5 + 1;
    if (uVar3 < 0x1000) {
      if (uVar3 == 0) {
        uVar5 = 0xffffffffffffffff;
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_14001cc68(uVar3,0x10);
      }
      goto LAB_140c1c97c;
    }
  }
  _Dst = (void *)FUN_140c1ca1d(uVar3);
LAB_140c1c97c:
  param_1[2] = param_2;
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,lVar1 + 1);
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,lVar1 + 1);
    pvVar4 = _Src;
    if ((uVar2 - 0xfff < 0xfffffffffffff000) &&
       (pvVar4 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(pvVar4);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 140c1ca1d FUN_140c1ca1d body=63 status=ok
// SIG undefined FUN_140c1ca1d(void)

ulonglong FUN_140c1ca1d(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0xffffffffffffffd8 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  lVar1 = FUN_14001cc68(param_1 + 0x27,0x10);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



// FUNCTION 140c1ca5e FUN_140c1ca5e body=53 status=ok
// SIG undefined FUN_140c1ca5e(void)

void FUN_140c1ca5e(longlong *param_1)

{
  FUN_140c1ca94();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c1ca94 FUN_140c1ca94 body=88 status=ok
// SIG undefined FUN_140c1ca94(void)

void FUN_140c1ca94(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140c1caf2 FUN_140c1caf2 body=57 status=ok
// SIG undefined FUN_140c1caf2(void)

void FUN_140c1caf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a9c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a9c8 = FUN_140002ddd(FUN_1464cb6d2,uVar1,L"GbxBrainAspect_ClaimPerch");
  }
  return;
}



// FUNCTION 140c1cb2c FUN_140c1cb2c body=130 status=ok
// SIG undefined FUN_140c1cb2c(void)

void FUN_140c1cb2c(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401b21c4();
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) {
      local_18 = 0;
      goto LAB_140c1cb67;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  local_18 = param_1 + 0x538;
LAB_140c1cb67:
  local_20 = param_1;
  FUN_140c1cbb0(param_1 + 0x5f8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1cbb0 FUN_140c1cbb0 body=307 status=ok
// SIG undefined FUN_140c1cbb0(void)

void FUN_140c1cbb0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  if (DAT_14c950c29 == '\x01') {
    if (*param_2 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(longlong *)(param_1 + 0x28) = param_2[1];
      plVar4 = (longlong *)0x0;
      goto LAB_140c1cbe2;
    }
    FUN_1456cec3c();
  }
  lVar3 = *param_2;
  *(longlong *)(param_1 + 0x20) = lVar3;
  plVar4 = (longlong *)param_2[1];
  *(longlong **)(param_1 + 0x28) = plVar4;
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
LAB_140c1cbe2:
  lVar3 = (**(code **)(*plVar4 + 8))();
  if ((*(uint *)(lVar3 + 8) & 0x10) != 0) {
    return;
  }
  *(bool *)(param_1 + 0x1d4) = *(char *)(lVar3 + 0x178) == '\x03';
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0xc);
    *(uint *)(param_1 + 0x1cc) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar2 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x1d0) = iVar2;
  FUN_140c1cce4(param_1,lVar3);
  return;
}



// FUNCTION 140c1cce4 FUN_140c1cce4 body=950 status=ok
// SIG undefined FUN_140c1cce4(void)

void FUN_140c1cce4(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = FUN_14487fd02(param_2);
  if ((param_2 == (longlong *)0x0) || (iVar3 - 3U < 0xfffffffe)) goto LAB_140c1cf26;
  uVar4 = FUN_140959fa0();
  lVar5 = (**(code **)(*param_2 + 0x288))(param_2,uVar4);
  if (lVar5 == 0) goto LAB_140c1cf26;
  uVar4 = FUN_140959fa0();
  lVar6 = FUN_144718840(lVar5,uVar4);
  if ((lVar5 == lVar6) || (lVar6 == 0)) goto LAB_140c1cf26;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar2 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b42c920;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_58[2] = lVar7;
  *local_58 = &PTR_FUN_14b42b4b0;
  local_58[3] = 0;
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)(local_58 + 3) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  iVar3 = *(int *)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar8 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar8);
    }
    LOCK();
    iVar3 = *(int *)(lVar5 + 0x10);
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(lVar5 + 0x10) = iVar8;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar3 = iVar8;
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar3;
  puVar2[4] = param_1;
  FUN_140c1d09c(lVar6 + 8,local_60,&local_58);
  if (local_50 == 0) {
LAB_140c1ce41:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_140c1ce41;
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar2 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b42c920;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_58[2] = lVar7;
  *local_58 = &PTR_FUN_14b42b520;
  local_58[3] = 0;
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)(local_58 + 3) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  iVar3 = *(int *)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar8 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar8);
    }
    LOCK();
    iVar3 = *(int *)(lVar5 + 0x10);
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(lVar5 + 0x10) = iVar8;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar3 = iVar8;
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar3;
  puVar2[4] = param_1;
  FUN_140c1d09c(lVar6 + 0x20,local_60,&local_58);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_140c1cf26;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140c1cf26:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c1d09c FUN_140c1d09c body=370 status=ok
// SIG undefined FUN_140c1d09c(void)

undefined8 * FUN_140c1d09c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c1d29c FUN_140c1d29c body=40 status=ok
// SIG undefined FUN_140c1d29c(void)

undefined8 FUN_140c1d29c(undefined8 param_1,int param_2)

{
  FUN_140c1d2c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c1d2c4 FUN_140c1d2c4 body=203 status=ok
// SIG undefined FUN_140c1d2c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c1d2c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b0416a0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140c1d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c1d390 FUN_140c1d390 body=79 status=ok
// SIG undefined FUN_140c1d390(void)

void FUN_140c1d390(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c1d3e0();
  local_28 = 0x15db08df;
  uStack_24 = 0x99294fec;
  uStack_20 = 0x8c1d6b4a;
  uStack_1c = 0x1924ee92;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1d3e0 FUN_140c1d3e0 body=91 status=ok
// SIG undefined FUN_140c1d3e0(void)

void FUN_140c1d3e0(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140ed7032();
  local_28 = 0xc88d257b;
  uStack_24 = 0xc185432e;
  uStack_20 = 0xa945f7f9;
  uStack_1c = 0xe75fa8b9;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 0) {
    FUN_143e16594(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1d43c FUN_140c1d43c body=816 status=ok
// SIG undefined FUN_140c1d43c(void)

int * FUN_140c1d43c(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  void *_Src;
  int *piVar2;
  void *_Dst;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_140c1d76c(param_1,iVar13);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar6 = iVar7 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar14 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar14 = iVar7;
    }
    if (iVar14 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar6 = iVar7;
        }
        else {
          uVar3 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar3) {
              uVar9 = uVar3;
            }
          }
          else {
            uVar9 = (uVar3 * 3 >> 3) + uVar3 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar9 << 2,0);
          iVar6 = (int)(uVar11 >> 2);
          iVar8 = -0x20;
          if ((int)uVar3 <= iVar6) {
            iVar8 = iVar6 << 5;
          }
          iVar6 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar10,iVar6);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar6 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar10;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar6 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar4 = (longlong)iVar13;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x150);
    *(int *)(param_1 + 6) = iVar7;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x150) = 0xffffffff;
    }
  }
  plVar10 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[4];
  }
  iVar7 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar7 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  iVar6 = 1;
  _Src = (void *)(*param_1 + lVar4 * 0x150);
  iVar7 = *(int *)*param_4;
  piVar2 = (int *)(*param_1 + lVar4 * 0x150);
  *piVar2 = iVar7;
  memset(piVar2 + 4,0,0x130);
  piVar2[0x50] = -1;
  uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar3 != 0) && (uVar3 != 1)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar8 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar8 * 0x150);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x150) == iVar7) {
          memmove(_Dst,_Src,0x140);
          FUN_1403e15da(param_1,iVar13);
          goto LAB_140c1d5a2;
        }
        iVar8 = *(int *)((longlong)_Dst + 0x140);
      } while (iVar8 != -1);
    }
  }
  if (3 < uVar3) {
    uVar11 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar3 < 1) || (iVar6 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    *(uint *)((longlong)_Src + 0x144) = param_3;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x140) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    FUN_140c1d880(param_1);
  }
LAB_140c1d5a2:
  *param_2 = iVar13;
  return param_2;
}



// FUNCTION 140c1d76c FUN_140c1d76c body=274 status=ok
// SIG undefined FUN_140c1d76c(void)

void FUN_140c1d76c(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x150;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x150,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c1d880 FUN_140c1d880 body=634 status=ok
// SIG undefined FUN_140c1d880(void)

void FUN_140c1d880(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140c1d8f2;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_140c1d8f2:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x150;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x144 + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x140 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 140c1dafa FUN_140c1dafa body=93 status=ok
// SIG undefined FUN_140c1dafa(void)

undefined8 * FUN_140c1dafa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c1db57(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140c1dc92(param_1,iVar1);
      FUN_140c1dbc9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140c1db57 FUN_140c1db57 body=114 status=ok
// SIG undefined FUN_140c1db57(void)

void FUN_140c1db57(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-5] = (longlong)&DAT_14a171d50;
      *(undefined4 *)(plVar1 + -2) = 0;
      if (*(int *)((longlong)plVar1 + -0xc) != 0) {
        FUN_140115c12(plVar1 + -3,0);
      }
      plVar1[-4] = 0;
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c1dbc9 FUN_140c1dbc9 body=200 status=ok
// SIG undefined FUN_140c1dbc9(void)

void FUN_140c1dbc9(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x28);
    piVar3 = (int *)(param_2 + 0x30);
    do {
      puVar2[-5] = &DAT_14a171d50;
      puVar2[-4] = 0;
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      puVar2[-4] = *(undefined8 *)(piVar3 + -10);
      FUN_1406022fe(puVar2 + -3,piVar3 + -8);
      puVar2[-5] = &PTR_FUN_14b1828b0;
      *(int *)(puVar2 + -1) = piVar3[-4];
      *puVar2 = 0;
      iVar1 = *piVar3;
      _Src = *(void **)(piVar3 + -2);
      *(int *)(puVar2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_14875f284(puVar2,iVar1,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 << 3);
      }
      puVar2 = puVar2 + 7;
      piVar3 = piVar3 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c1dc92 FUN_140c1dc92 body=330 status=ok
// SIG undefined FUN_140c1dc92(void)

void FUN_140c1dc92(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140c1dd00;
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
LAB_140c1dd00:
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



// FUNCTION 140c1dddc FUN_140c1dddc body=329 status=ok
// SIG undefined FUN_140c1dddc(void)

void FUN_140c1dddc(float *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(longlong **)(param_1 + 0x24) = param_2;
  puVar6 = param_3;
  pfVar7 = param_1 + 6;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pfVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pfVar7 = pfVar7 + 2;
  }
  uVar3 = param_3[0xc];
  lVar5 = param_3[0xd];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = uVar3;
  *(longlong *)(param_1 + 0x20) = lVar5;
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
  param_1[0x22] = *(float *)(param_3 + 0xe);
  *(undefined8 *)(param_1 + 2) = *param_4;
  *(undefined1 *)(param_1 + 0x26) = param_5;
  lVar5 = FUN_140c1dfa2(param_2,&local_39);
  if (lVar5 == 0) {
    *param_1 = 0.0;
    fVar8 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
  }
  else {
    if (*(char *)(lVar5 + 0x19) == '\x02') {
      fVar8 = *(float *)(lVar5 + 0x24) * *(float *)(lVar5 + 0x20) + *(float *)(lVar5 + 0x1c);
    }
    else if (*(char *)(lVar5 + 0x19) == '\x01') {
      fVar8 = *(float *)(lVar5 + 0x1c) + *(float *)(lVar5 + 0x24);
    }
    else {
      fVar8 = *(float *)(lVar5 + 0x24);
    }
    *param_1 = fVar8;
    fVar8 = (float)FUN_140c1df26(lVar5);
  }
  param_1[1] = fVar8;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1df26 FUN_140c1df26 body=124 status=ok
// SIG undefined FUN_140c1df26(void)

float FUN_140c1df26(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if (*(char *)(param_1 + 0x79) == '\x02') {
      fVar1 = *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x7c);
    }
    else if (*(char *)(param_1 + 0x79) == '\x01') {
      fVar1 = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x84);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x84);
    }
    if (*(char *)(param_1 + 0x19) == '\x02') {
      fVar2 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1c);
    }
    else if (*(char *)(param_1 + 0x19) == '\x01') {
      fVar2 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x24);
    }
    return fVar1 - fVar2;
  }
  return 0.0;
}



// FUNCTION 140c1dfa2 FUN_140c1dfa2 body=302 status=ok
// SIG undefined FUN_140c1dfa2(void)

longlong FUN_140c1dfa2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_1 != 0) {
    lVar3 = FUN_1402576f0();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) != lVar3 + 0x30)) {
      lVar3 = FUN_1405b04b6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
          ((longlong)*(int *)(param_1 + 0x118) != 0)))) {
        plVar6 = *(longlong **)(param_1 + 0x110);
        plVar1 = plVar6 + (longlong)*(int *)(param_1 + 0x118) * 5;
        do {
          lVar3 = *plVar6;
          if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x90) != 0)) {
            lVar5 = *(longlong *)(lVar3 + 0x88);
            lVar3 = (longlong)*(int *)(lVar3 + 0x90) * 0xb8;
            do {
              if ((*(longlong *)(lVar5 + 0x50) != 0) &&
                 (lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x10), lVar4 = FUN_140c1e0d0()
                 , lVar2 == lVar4)) {
                if (lVar5 != 0) {
                  return lVar5;
                }
                break;
              }
              lVar5 = lVar5 + 0xb8;
              lVar3 = lVar3 + -0xb8;
            } while (lVar3 != 0);
          }
          plVar6 = plVar6 + 5;
          if (plVar6 == plVar1) {
            return 0;
          }
        } while( true );
      }
    }
    else if ((longlong)*(int *)(param_1 + 0x90) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
      lVar5 = (longlong)*(int *)(param_1 + 0x90) * 0xb8;
      do {
        if ((*(longlong *)(lVar3 + 0x50) != 0) &&
           (lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x10), lVar4 = FUN_140c1e0d0(),
           lVar2 == lVar4)) {
          return lVar3;
        }
        lVar3 = lVar3 + 0xb8;
        lVar5 = lVar5 + -0xb8;
      } while (lVar5 != 0);
    }
  }
  return 0;
}



// FUNCTION 140c1e0d0 FUN_140c1e0d0 body=228 status=ok
// SIG undefined FUN_140c1e0d0(void)

longlong FUN_140c1e0d0(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1b5a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141116c3a;
    local_38 = &LAB_147e2d67f;
    local_40 = FUN_140751b9a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxNav",L"AnimNotifyState_GbxNavStretch",&DAT_14cb1b5a0,&DAT_147e2d67e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b5a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1e1b5 FUN_140c1e1b5 body=91 status=ok
// SIG undefined FUN_140c1e1b5(void)

void FUN_140c1e1b5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c1e210(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b80a0f0;
  puVar1[0x79] = &PTR_FUN_14b80a760;
  puVar1[0x7a] = &PTR_FUN_14b80a780;
  puVar1[0x7b] = &PTR_FUN_14b80a820;
  puVar1[0x7c] = &PTR_FUN_14b80a870;
  return;
}



// FUNCTION 140c1e210 FUN_140c1e210 body=434 status=ok
// SIG undefined FUN_140c1e210(void)

undefined8 * FUN_140c1e210(undefined8 *param_1)

{
  FUN_140c1e3c2();
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *param_1 = &PTR_FUN_14b2c4100;
  param_1[0x79] = &PTR_FUN_14b2c4770;
  param_1[0x7a] = &PTR_FUN_14b2c4790;
  param_1[0x7b] = &PTR_FUN_14b2c4830;
  param_1[0x7c] = &PTR_FUN_14b2c4880;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 1;
  param_1[0x84] = 0xbf80000000000000;
  *(undefined1 *)(param_1 + 0x85) = 1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 2;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0x200000000;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 2;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4cc) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bf) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x539) = 0;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xb9] = &DAT_14a171d50;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xba] = &DAT_14cb70058;
  return param_1;
}



// FUNCTION 140c1e3c2 FUN_140c1e3c2 body=168 status=ok
// SIG undefined FUN_140c1e3c2(void)

undefined8 * FUN_140c1e3c2(undefined8 *param_1)

{
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14aadcf60;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0bea8) {
    FUN_144b3d300(&DAT_14cb0bea8);
    if (DAT_14cb0bea8 == -1) {
      FUN_1446f470e(&DAT_14cb0bea0,L"Trigger",1);
      _Init_thread_footer(&DAT_14cb0bea8);
    }
  }
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cb0bea0,1);
  *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) | 1;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0xff64ff64;
  return param_1;
}



// FUNCTION 140c1e478 FUN_140c1e478 body=59 status=ok
// SIG undefined FUN_140c1e478(void)

undefined8 * FUN_140c1e478(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7cd7d0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c1e4c2 FUN_140c1e4c2 body=95 status=ok
// SIG undefined FUN_140c1e4c2(void)

undefined8 * FUN_140c1e4c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b316d10;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140c1e521(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140485ace(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c1e521 FUN_140c1e521 body=79 status=ok
// SIG undefined FUN_140c1e521(void)

void FUN_140c1e521(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x108) != 0) {
      FUN_1400020a8();
    }
    FUN_140485912(param_1);
    param_1 = param_1 + 0x128;
  }
  return;
}



// FUNCTION 140c1e570 FUN_140c1e570 body=125 status=ok
// SIG undefined FUN_140c1e570(void)

void FUN_140c1e570(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  if (lVar2 != param_1) {
    if (lVar2 != 0) {
      FUN_140897c66(lVar2,param_2);
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x10);
    *puVar4 = 0;
    puVar4[1] = param_2;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = *(undefined8 **)(param_1 + 0x270);
      *(undefined8 **)(param_1 + 0x270) = puVar4;
      UNLOCK();
      LOCK();
      *puVar1 = puVar4;
      UNLOCK();
    }
    *param_2 = param_1;
    lVar2 = param_2[2];
    if ((longlong)(int)lVar2 != 0) {
      lVar3 = param_2[1];
      lVar5 = 0;
      do {
        *(longlong *)(*(longlong *)(lVar3 + lVar5) + 8) = param_1;
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 140c1e5ee FUN_140c1e5ee body=40 status=ok
// SIG undefined FUN_140c1e5ee(void)

undefined8 FUN_140c1e5ee(undefined8 param_1,int param_2)

{
  FUN_140c1e616();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c1e616 FUN_140c1e616 body=2334 status=ok
// SIG undefined FUN_140c1e616(void)

void FUN_140c1e616(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14a3eba50;
  param_1[5] = &PTR_FUN_14a3ebed0;
  param_1[6] = &PTR_LAB_14a3ebf10;
  *(undefined4 *)(param_1 + 99) = 0;
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  plVar16 = param_1 + 0x5a;
  puVar1 = param_1 + 0x5c;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = puVar1;
  if (*(int *)(param_1 + 0x5f) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = plVar16;
  if (iStack_54 < *(int *)(local_60 + 3)) {
    do {
      if (*(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x60) != 0) {
        lVar8 = *local_90 + (longlong)iStack_74 * 0x60;
        plVar3 = *(longlong **)(lVar8 + 0x20);
        plVar9 = (longlong *)(lVar8 + 0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar9 = plVar3;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 3));
  }
  *(undefined4 *)(param_1 + 0x5b) = 0;
  if (*(int *)((longlong)param_1 + 0x2dc) != 0) {
    FUN_1401283f4(plVar16,0);
  }
  param_1[0x60] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2fc)) {
    *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (*plVar16 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  plVar16 = param_1 + 0x50;
  puVar1 = param_1 + 0x52;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = puVar1;
  if (*(int *)(param_1 + 0x55) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = plVar16;
  if (iStack_54 < *(int *)(local_60 + 3)) {
    do {
      if (*(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x60) != 0) {
        lVar8 = *local_90 + (longlong)iStack_74 * 0x60;
        plVar3 = *(longlong **)(lVar8 + 0x20);
        plVar9 = (longlong *)(lVar8 + 0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar9 = plVar3;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 3));
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (*(int *)((longlong)param_1 + 0x28c) != 0) {
    FUN_1401283f4(plVar16);
  }
  param_1[0x56] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2ac)) {
    *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x80;
    FUN_1446efbd8(puVar1);
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (*plVar16 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  plVar16 = param_1 + 0x46;
  puVar2 = (uint *)(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x4b);
  if (iVar4 == 0) {
    uVar18 = 0;
    uVar17 = 1;
    iVar14 = 0;
    iVar11 = 0;
  }
  else {
    puVar10 = (uint *)param_1[0x4a];
    if ((uint *)param_1[0x4a] == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar15 = *puVar10;
    if (uVar15 == 0) {
      iVar14 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar14 = iVar4 + -1;
      }
      uVar18 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar12 == uVar18) goto LAB_140c1e95c;
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar10[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar12 = uVar17 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar11 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar11) {
      iVar11 = iVar4;
    }
  }
  if (iVar11 < iVar4) {
    uVar15 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar16 + 0x10 + (longlong)iVar11 * 0x60) != 0) {
        lVar8 = *plVar16 + (longlong)iVar11 * 0x60;
        plVar3 = *(longlong **)(lVar8 + 0x20);
        plVar9 = (longlong *)(lVar8 + 0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar9 = plVar3;
        }
        (**(code **)(*plVar9 + 0x10))();
        iVar4 = *(int *)(param_1 + 0x4b);
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar10 = (uint *)param_1[0x4a];
      if ((uint *)param_1[0x4a] == (uint *)0x0) {
        puVar10 = puVar2;
      }
      iVar11 = (int)uVar18;
      lVar8 = (longlong)iVar11;
      uVar5 = puVar10[lVar8] & uVar15;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar11) {
          iVar7 = iVar11;
        }
        if (iVar6 <= iVar11) break;
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar10[lVar8 + lVar13 + 1];
          if (uVar5 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar7 - lVar8 == lVar13) goto LAB_140c1e95c;
        }
        uVar18 = (ulonglong)(iVar11 + (int)lVar13 + 1);
        uVar15 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar5 & uVar5);
      uVar12 = uVar17 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar11 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar4);
  }
LAB_140c1e95c:
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (*(int *)((longlong)param_1 + 0x23c) != 0) {
    FUN_1401283f4(plVar16,0);
  }
  param_1[0x4c] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x25c)) {
    *(undefined4 *)((longlong)param_1 + 0x25c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (*plVar16 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  plVar16 = param_1 + 0x3c;
  puVar2 = (uint *)(param_1 + 0x3e);
  iVar4 = *(int *)(param_1 + 0x41);
  if (iVar4 == 0) {
    uVar18 = 0;
    uVar17 = 1;
    iVar14 = 0;
    iVar11 = 0;
  }
  else {
    puVar10 = (uint *)param_1[0x40];
    if ((uint *)param_1[0x40] == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar15 = *puVar10;
    if (uVar15 == 0) {
      iVar14 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar14 = iVar4 + -1;
      }
      uVar18 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar12 == uVar18) goto LAB_140c1ea06;
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar10[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar12 = uVar17 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar11 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar11) {
      iVar11 = iVar4;
    }
  }
  if (iVar11 < iVar4) {
    uVar15 = 0xffffffff;
    local_98 = plVar16;
    do {
      lVar8 = *local_98;
      lVar13 = (longlong)iVar11 * 0x68;
      *(undefined4 *)(lVar8 + 0x58 + lVar13) = 0;
      if (*(longlong *)(lVar8 + 0x50 + lVar13) != 0) {
        FUN_1400020a8();
      }
      FUN_1400dbf0e(lVar8 + lVar13 + 0x10);
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar10 = (uint *)param_1[0x40];
      if ((uint *)param_1[0x40] == (uint *)0x0) {
        puVar10 = puVar2;
      }
      iVar4 = *(int *)(param_1 + 0x41);
      iVar11 = (int)uVar18;
      lVar8 = (longlong)iVar11;
      uVar5 = puVar10[lVar8] & uVar15;
      plVar16 = local_98;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar11) {
          iVar7 = iVar11;
        }
        if (iVar6 <= iVar11) break;
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar10[lVar8 + lVar13 + 1];
          if (uVar5 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar7 - lVar8 == lVar13) goto LAB_140c1ea06;
        }
        uVar18 = (ulonglong)(iVar11 + (int)lVar13 + 1);
        uVar15 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar5 & uVar5);
      uVar12 = uVar17 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar11 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar4);
  }
LAB_140c1ea06:
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (*(int *)((longlong)param_1 + 0x1ec) != 0) {
    FUN_14059f004(plVar16,0);
  }
  param_1[0x42] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x20c)) {
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (*plVar16 != 0) {
    FUN_1400020a8();
  }
  FUN_1447f6939(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1447f696d(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_140c1ef36(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_140c1ef36(param_1 + 0x23);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 140c1ef36 FUN_140c1ef36 body=118 status=ok
// SIG undefined FUN_140c1ef36(void)

void FUN_140c1ef36(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c1efac FUN_140c1efac body=507 status=ok
// SIG undefined FUN_140c1efac(void)

void FUN_140c1efac(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  uint local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c1f1a8();
  *(undefined1 *)(param_1 + 0x23) = 0;
  lVar4 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (((((lVar4 != 0) && (lVar4 = FUN_1407c8d60(lVar4), lVar4 != 0)) &&
       (*(char *)(lVar4 + 0x2e) == '\x01')) &&
      ((((*(int *)((longlong)param_1 + 0x2c) != 0 &&
         (uVar1 = *(uint *)(param_1 + 5), -1 < (int)uVar1)) &&
        (((int)uVar1 < DAT_14c9647dc &&
         ((plVar6 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x2c)))))))
       && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) && (lVar4 = *plVar6, lVar4 != 0)) {
    lVar5 = FUN_1408265b4();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && (*(undefined1 *)(param_1 + 0x23) = 1, param_1 != (longlong *)0x0)) {
      iStack_34 = 0;
      local_38 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)local_38 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((local_38 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar3 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar3 = *(int *)(lVar5 + 0x10);
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(lVar5 + 0x10) = iVar7;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar3 = iVar7;
        }
      }
      iVar7 = *(int *)(lVar4 + 0xb0);
      iStack_34 = iVar3;
      if ((longlong)iVar7 != 0) {
        lVar5 = *(longlong *)(lVar4 + 0xa8);
        uVar8 = 0;
        do {
          cVar2 = FUN_140825534(lVar5 + uVar8,&local_38);
          if (cVar2 != '\0') {
            if ((int)(~uVar8 >> 3) != 0) goto LAB_140c1efe6;
            break;
          }
          uVar8 = uVar8 + 8;
        } while ((longlong)iVar7 * 8 != uVar8);
      }
      iVar3 = *(int *)(lVar4 + 0xb0);
      *(uint *)(lVar4 + 0xb0) = iVar3 + 1U;
      if (*(uint *)(lVar4 + 0xb4) < iVar3 + 1U) {
        FUN_14578762e((longlong *)(lVar4 + 0xa8),iVar3);
      }
      *(ulonglong *)(*(longlong *)(lVar4 + 0xa8) + (longlong)iVar3 * 8) =
           CONCAT44(iStack_34,local_38);
    }
  }
LAB_140c1efe6:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c1f1a8 FUN_140c1f1a8 body=381 status=ok
// SIG undefined FUN_140c1f1a8(void)

void FUN_140c1f1a8(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  param_1[0x19] = param_2;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 0x1a) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar2;
  *(undefined4 *)(param_1 + 0x1b) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar4;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if (((param_2 == 0) && ((longlong *)param_1[0x1b] != (longlong *)0x0)) &&
     (*(int *)((longlong)param_1 + 0xd4) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x1a);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar7 != 0) &&
         ((*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0xd4) &&
          ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
        cVar5 = (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
        if (cVar5 != '\0') {
          uVar8 = (**(code **)(*(longlong *)param_1[0x1b] + 0x20))();
          lVar7 = FUN_14061177a(uVar8);
          if (lVar7 == 0) {
            bVar6 = 1;
          }
          else {
            bVar6 = *(byte *)(lVar7 + 0x92) ^ 1;
          }
          *(byte *)(param_1 + 0x1f) = bVar6;
        }
      }
    }
  }
  if ((((param_1[0x1b] != 0) && (*(int *)((longlong)param_1 + 0xd4) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x1a), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0xd4))) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      FUN_140826ba4(param_1,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
      (**(code **)(*param_1 + 0x3a0))(param_1);
    }
  }
  lVar7 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x90) == '\x01')) {
    FUN_140c1f326(param_1,1);
    return;
  }
  return;
}



// FUNCTION 140c1f326 FUN_140c1f326 body=329 status=ok
// SIG undefined FUN_140c1f326(void)

void FUN_140c1f326(longlong param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x110) != '\0') {
      *(undefined1 *)(param_1 + 0x110) = 0;
      if (((*(int *)(param_1 + 0x2c) != 0) && (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1))
         && ((int)uVar1 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x2c))) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar4 = *plVar5, lVar4 != 0)))) {
          lVar3 = FUN_140c1f470();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            uVar6 = 0;
            goto LAB_140c1f459;
          }
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x110) == '\0') {
    *(undefined1 *)(param_1 + 0x110) = 1;
    if (((*(int *)(param_1 + 0x2c) != 0) && (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x2c))) &&
         (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar4 = *plVar5, lVar4 != 0)))) {
        lVar3 = FUN_140c1f470();
        iVar2 = *(int *)(lVar3 + 0x38);
        if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
            == lVar3 + 0x30)) {
          uVar6 = CONCAT71((int7)(int3)((uint)iVar2 >> 8),1);
LAB_140c1f459:
          FUN_140c1f556(lVar4,uVar6,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140c1f470 FUN_140c1f470 body=228 status=ok
// SIG undefined FUN_140c1f470(void)

longlong FUN_140c1f470(void)

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
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5d2c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464da83c;
    local_38 = &LAB_1486962d1;
    local_40 = &LAB_1464daa67;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProvider_DiscoveryLocations",&DAT_14cb5d2c0,
                  &DAT_1486962d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d2c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1f556 FUN_140c1f556 body=1733 status=ok
// SIG undefined FUN_140c1f556(void)

void FUN_140c1f556(longlong param_1,char param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  ushort uVar5;
  ushort uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  longlong *plVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_88 [40];
  longlong *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_3 == 0) || (lVar28 = *(longlong *)(param_3 + 200), lVar28 == 0)) goto LAB_140c1fb41;
  local_58 = (void *)0x0;
  local_50 = *(int *)(lVar28 + 0x260);
  lVar24 = (longlong)local_50;
  pvVar7 = *(void **)(lVar28 + 600);
  if (lVar24 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar7,lVar24 * 2);
    if (1 < local_50) {
      plVar21 = (longlong *)(param_1 + 0x58);
      if (param_2 == '\0') {
        if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
          lVar28 = 0;
          uVar27 = 0;
          do {
            uVar5 = *(ushort *)((longlong)local_58 + lVar28 * 2);
            uVar22 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
            uVar27 = uVar27 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar27 ^ uVar22) & 0xff) * 4);
            uVar27 = uVar27 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar27 & 0xff ^ uVar22 >> 8 & 0xff) * 4)
            ;
            lVar28 = lVar28 + 1;
          } while (local_50 + -1 != (int)lVar28);
          lVar28 = param_1 + 0x90;
          if (*(longlong *)(param_1 + 0x98) != 0) {
            lVar28 = *(longlong *)(param_1 + 0x98);
          }
          iVar23 = *(int *)(lVar28 + ((longlong)(int)uVar27 &
                                     (longlong)*(int *)(param_1 + 0xa0) - 1U) * 4);
          if (iVar23 != -1) {
            lVar24 = *plVar21;
LAB_140c1f820:
            lVar25 = (longlong)iVar23 * 0x20;
            plVar3 = (longlong *)(lVar24 + lVar25);
            iVar17 = *(int *)(lVar24 + 8 + lVar25);
            if (iVar17 == local_50) {
              lVar29 = 0;
              do {
                uVar5 = *(ushort *)(*plVar3 + lVar29);
                uVar6 = *(ushort *)((longlong)local_58 + lVar29);
                if (uVar5 == uVar6) {
                  if (uVar5 == 0) goto LAB_140c1faf1;
                }
                else {
                  if (0x7f < (uVar6 | uVar5)) {
                    iVar17 = (uint)uVar5 - (uint)uVar6;
                    goto LAB_140c1f87f;
                  }
                  if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[(uint)uVar6])
                  goto code_r0x000140c1f87c;
                }
                lVar29 = lVar29 + 2;
              } while( true );
            }
            if (iVar17 + local_50 != 1) goto LAB_140c1f888;
            goto LAB_140c1faf1;
          }
        }
      }
      else {
        uVar27 = *(uint *)(param_3 + 0xc);
        if ((int)uVar27 < DAT_14c9647dc) {
          lVar28 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
        }
        else {
          lVar28 = 0;
        }
        iVar17 = *(int *)(lVar28 + 0x10);
        if (*(int *)(lVar28 + 0x10) == 0) {
          LOCK();
          iVar23 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar30 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar23;
          if (bVar30) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar17 = *(int *)(lVar28 + 0x10);
          bVar30 = iVar17 == 0;
          if (bVar30) {
            *(int *)(lVar28 + 0x10) = iVar13;
            iVar17 = 0;
          }
          UNLOCK();
          if (bVar30) {
            iVar17 = iVar13;
          }
        }
        local_60 = plVar21;
        if (*(int *)(param_1 + 0x8c) == 0) {
          iVar23 = *(int *)(param_1 + 0x60);
          *(int *)(param_1 + 0x60) = iVar23 + 1;
          if (*(int *)(param_1 + 100) == iVar23) {
            FUN_1447711aa(plVar21,iVar23);
          }
          iVar13 = *(int *)(param_1 + 0x80);
          if (iVar13 == 0) {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar12 = iVar13 + -1;
            }
            iVar12 = iVar12 >> 5;
          }
          lVar24 = param_1 + 0x68;
          iVar18 = iVar13 + 1;
          iVar26 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar26 = iVar13;
          }
          if (iVar26 >> 5 == iVar12) {
            *(int *)(param_1 + 0x80) = iVar18;
          }
          else {
            if (*(int *)(param_1 + 0x84) <= iVar13) {
              if (iVar13 + 0x20U < 0xa0) {
                iVar18 = 0x80;
                iVar12 = iVar13;
              }
              else {
                uVar22 = iVar13 + 0x20U >> 5;
                if (*(int *)(param_1 + 0x84) + 0x1fU < 0xa0) {
                  uVar19 = 4;
                  if (4 < uVar22) {
                    uVar19 = uVar22;
                  }
                }
                else {
                  uVar19 = (uVar22 * 3 >> 3) + uVar22 + 0x10;
                }
                uVar15 = FUN_144a3809e(uVar19 << 2,0);
                iVar12 = (int)(uVar15 >> 2);
                iVar18 = -0x20;
                if ((int)uVar22 <= iVar12) {
                  iVar18 = iVar12 << 5;
                }
                iVar12 = *(int *)(param_1 + 0x80);
              }
              *(int *)(param_1 + 0x84) = iVar18;
              FUN_1446efbd8(lVar24,iVar12);
              iVar18 = *(int *)(param_1 + 0x80) + 1;
            }
            iVar12 = iVar18 + 0x1f;
            if (-1 < iVar18) {
              iVar12 = iVar18;
            }
            *(int *)(param_1 + 0x80) = iVar18;
            if (iVar18 % 0x20 != 0) {
              lVar28 = *(longlong *)(param_1 + 0x78);
              if (*(longlong *)(param_1 + 0x78) == 0) {
                lVar28 = lVar24;
              }
              bVar16 = -(char)(iVar18 % 0x20);
              *(uint *)(lVar28 + (longlong)(iVar12 >> 5) * 4) =
                   (uint)(*(int *)(lVar28 + (longlong)(iVar12 >> 5) * 4) << (bVar16 & 0x1f)) >>
                   (bVar16 & 0x1f);
            }
          }
          lVar28 = (longlong)iVar23;
          if (*(longlong *)(param_1 + 0x78) != 0) {
            lVar24 = *(longlong *)(param_1 + 0x78);
          }
          bVar16 = (byte)iVar13 & 0x1f;
          puVar1 = (uint *)(lVar24 + (longlong)(iVar26 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
        }
        else {
          iVar23 = *(int *)(param_1 + 0x88);
          lVar28 = (longlong)iVar23;
          iVar13 = *(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar28 * 0x20);
          *(int *)(param_1 + 0x88) = iVar13;
          iVar12 = *(int *)(param_1 + 0x8c) + -1;
          *(int *)(param_1 + 0x8c) = iVar12;
          if (iVar12 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar13 * 0x20) = 0xffffffff;
          }
        }
        pvVar7 = local_58;
        lVar24 = param_1 + 0x68;
        if (*(longlong *)(param_1 + 0x78) != 0) {
          lVar24 = *(longlong *)(param_1 + 0x78);
        }
        iVar13 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar13 = iVar23;
        }
        puVar1 = (uint *)(lVar24 + (longlong)(iVar13 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar23 & 0x1f);
        lVar24 = *(longlong *)(param_1 + 0x58);
        lVar28 = lVar28 * 0x20;
        puVar2 = (undefined8 *)(lVar24 + lVar28);
        *(undefined8 *)(lVar24 + lVar28) = 0;
        lVar25 = (longlong)local_50;
        *(int *)(lVar24 + 8 + lVar28) = local_50;
        if (lVar25 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          iVar13 = 0;
        }
        else {
          FUN_1446dd670(puVar2,local_50,0);
          memcpy((void *)*puVar2,pvVar7,lVar25 * 2);
          iVar13 = *(int *)(puVar2 + 1);
        }
        plVar21 = local_60;
        puVar2[2] = CONCAT44(iVar17,uVar27);
        *(undefined4 *)(puVar2 + 3) = 0xffffffff;
        uVar27 = 0;
        iVar17 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar17 = 0;
        }
        if (0 < iVar17) {
          if (iVar13 == 0) {
            puVar14 = &DAT_149dfb77a;
          }
          else {
            puVar14 = (undefined2 *)*puVar2;
          }
          lVar28 = 0;
          uVar27 = 0;
          do {
            uVar22 = ((uint)(0x19 < (ushort)puVar14[lVar28] - 0x61) * 0x20 +
                     (uint)(ushort)puVar14[lVar28]) - 0x20;
            uVar27 = uVar27 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar27 ^ uVar22) & 0xff) * 4);
            uVar27 = uVar27 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar27 & 0xff ^ uVar22 >> 8 & 0xff) * 4)
            ;
            lVar28 = lVar28 + 1;
          } while (iVar17 != (int)lVar28);
        }
        uVar22 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c);
        iVar17 = 1;
        if (uVar22 != 1) {
          iVar13 = FUN_140c1fc8e(local_60,uVar27,puVar2);
          if (iVar13 != -1) {
            lVar28 = *plVar21;
            puVar4 = (undefined4 *)(lVar28 + (longlong)iVar13 * 0x20);
            if (*(longlong *)(lVar28 + (longlong)iVar13 * 0x20) != 0) {
              FUN_1400020a8();
            }
            uVar8 = *(undefined4 *)puVar2;
            uVar9 = *(undefined4 *)((longlong)puVar2 + 4);
            uVar10 = *(undefined4 *)(puVar2 + 1);
            uVar11 = *(undefined4 *)((longlong)puVar2 + 0xc);
            *(undefined8 *)(puVar4 + 4) = puVar2[2];
            *puVar4 = uVar8;
            puVar4[1] = uVar9;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            plVar21 = local_60;
            goto LAB_140c1fb2d;
          }
          if (3 < uVar22) {
            uVar15 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
            lVar28 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            iVar17 = 1 << ((byte)lVar28 & 0x1f);
          }
        }
        if (((int)uVar22 < 1) || (iVar17 <= *(int *)(param_1 + 0xa0))) {
          uVar27 = *(int *)(param_1 + 0xa0) - 1U & uVar27;
          *(uint *)((longlong)puVar2 + 0x1c) = uVar27;
          lVar28 = *(longlong *)(param_1 + 0x98);
          if (*(longlong *)(param_1 + 0x98) == 0) {
            lVar28 = param_1 + 0x90;
          }
          *(undefined4 *)(puVar2 + 3) =
               *(undefined4 *)
                (lVar28 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & (longlong)(int)uVar27) * 4);
          lVar28 = *(longlong *)(param_1 + 0x98);
          if (*(longlong *)(param_1 + 0x98) == 0) {
            lVar28 = param_1 + 0x90;
          }
          *(int *)(lVar28 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & (longlong)(int)uVar27) * 4) =
               iVar23;
        }
        else {
          *(int *)(param_1 + 0xa0) = iVar17;
          FUN_140c1fd48(plVar21);
        }
      }
    }
  }
  goto LAB_140c1fb32;
code_r0x000140c1f87c:
  iVar17 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar6];
LAB_140c1f87f:
  if (iVar17 != 0) {
LAB_140c1f888:
    iVar23 = (int)plVar3[3];
    if (iVar23 == -1) goto LAB_140c1fb32;
    goto LAB_140c1f820;
  }
LAB_140c1faf1:
  iVar17 = *(int *)(lVar28 + (longlong)*(int *)((longlong)plVar3 + 0x1c) * 4);
  if (iVar17 == iVar23) {
    piVar20 = (int *)(lVar28 + (longlong)*(int *)((longlong)plVar3 + 0x1c) * 4);
  }
  else {
    do {
      piVar20 = (int *)(lVar24 + (longlong)iVar17 * 0x20 + 0x18);
      iVar17 = *piVar20;
    } while (iVar17 != iVar23);
  }
  *piVar20 = (int)plVar3[3];
  if (*(longlong *)(*plVar21 + lVar25) != 0) {
    FUN_1400020a8();
  }
LAB_140c1fb2d:
  FUN_140c1fc1c(plVar21,iVar23);
LAB_140c1fb32:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_140c1fb41:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c1fc1c FUN_140c1fc1c body=114 status=ok
// SIG undefined FUN_140c1fc1c(void)

void FUN_140c1fc1c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 140c1fc8e FUN_140c1fc8e body=186 status=ok
// SIG undefined FUN_140c1fc8e(void)

int FUN_140c1fc8e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_140c1fcd1:
      lVar11 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar11);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar10 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar11) + lVar10);
          uVar9 = (ulonglong)uVar8;
          uVar6 = *(ushort *)(*param_3 + lVar10);
          if (uVar8 == uVar6) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar8)) goto LAB_140c1fd23;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_140c1fd23;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140c1fd29;
    }
  }
  return -1;
LAB_140c1fd23:
  if (uVar8 == uVar6) {
    return iVar1;
  }
LAB_140c1fd29:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar11);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140c1fcd1;
}



// FUNCTION 140c1fd48 FUN_140c1fd48 body=714 status=ok
// SIG undefined FUN_140c1fd48(void)

void FUN_140c1fd48(longlong *param_1)

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
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar17 * 0x20);
        iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar17 * 0x20);
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
        *(int *)((longlong)puVar2 + 0x1c) = iVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar2 + 3) =
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
            if (iVar9 - lVar12 == lVar13) goto LAB_140c1ffd4;
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
LAB_140c1ffd4:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2001a FUN_140c2001a body=57 status=ok
// SIG undefined FUN_140c2001a(void)

void FUN_140c2001a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aae0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aae0 = FUN_140002ddd(FUN_1464cba3e,uVar1,L"GbxBrainAspect_Event");
  }
  return;
}



// FUNCTION 140c2005c FUN_140c2005c body=289 status=ok
// SIG undefined FUN_140c2005c(void)

undefined8 * FUN_140c2005c(undefined8 *param_1)

{
  FUN_14067215e();
  *param_1 = &PTR_FUN_14b04c520;
  param_1[5] = &PTR_FUN_14b04cf80;
  param_1[6] = &PTR_LAB_14b04cfc0;
  param_1[0x55] = &PTR_FUN_14b04d010;
  param_1[0x56] = &PTR_FUN_14b04d090;
  param_1[0x57] = &PTR_FUN_14b04d0a0;
  param_1[0xc4] = &PTR_FUN_14b04d0d0;
  param_1[0xff] = &PTR_FUN_14b04d0e0;
  param_1[0x108] = &PTR_FUN_14b04d0f0;
  param_1[0x109] = &PTR_FUN_14b04d190;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 2;
  *(undefined1 *)(param_1 + 0x12d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 1;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x979) = 0;
  *(undefined8 *)((longlong)param_1 + 0x981) = 0;
  FUN_140c2017e(param_1 + 0x132);
  *(undefined1 *)(param_1 + 0x135) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf9 | 2;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 140c2017e FUN_140c2017e body=107 status=ok
// SIG undefined FUN_140c2017e(void)

longlong FUN_140c2017e(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30 [2];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  local_20 = 0xff;
  FUN_140513334(local_30);
  local_30[0] = 0;
  local_20 = 0;
  FUN_140513298(param_1,local_30);
  FUN_140513334(local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c201ea FUN_140c201ea body=151 status=ok
// SIG undefined FUN_140c201ea(void)

void FUN_140c201ea(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_2[1] != 0) && (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = FUN_1409059be();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_140457ffc(lVar2 + 0x6d0,param_1);
      }
    }
  }
  FUN_140c20282(param_1);
  return;
}



// FUNCTION 140c20282 FUN_140c20282 body=1220 status=ok
// SIG undefined FUN_140c20282(void)

void FUN_140c20282(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_140c203b2;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_140c202d7;
    if (iVar7 != 1) goto LAB_140c202d2;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_140c202d7;
  }
  else {
LAB_140c202d2:
    if (iVar7 == 0x10) goto LAB_140c202d7;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_140c202d7:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_140c202d7;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_140c20473;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_1446187fd);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_140c20473:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_140c204f3;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_140c204f3:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14be78830;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14be78810;
    local_68[0] = &LAB_14461b18a;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveInstanceData",&DAT_14cc265ac);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_140c203b2:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2075c FUN_140c2075c body=312 status=ok
// SIG undefined FUN_140c2075c(void)

void FUN_140c2075c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  
  lVar5 = *param_1;
  lVar3 = (longlong)param_2 * 0x88;
  plVar7 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[8];
  }
  lVar9 = (longlong)*(int *)(lVar5 + 0x84 + lVar3);
  iVar6 = *(int *)((longlong)plVar7 + lVar9 * 4);
  if (iVar6 == param_2) {
    piVar8 = (int *)((longlong)plVar7 + lVar9 * 4);
  }
  else {
    do {
      piVar8 = (int *)(lVar5 + (longlong)iVar6 * 0x88 + 0x80);
      iVar6 = *piVar8;
    } while (iVar6 != param_2);
  }
  *piVar8 = *(int *)(lVar5 + lVar3 + 0x80);
  lVar3 = *param_1 + lVar3;
  plVar7 = *(longlong **)(lVar3 + 0x70);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar8 = (int *)((longlong)plVar7 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = *(longlong **)(lVar3 + 0x60);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar8 = (int *)((longlong)plVar7 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (*(longlong *)(lVar3 + 0x38) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(lVar3 + 0x38) + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(lVar3 + 0x30) = 0;
  }
  if (*(longlong *)(lVar3 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140c20894(param_1,param_2);
  return;
}



// FUNCTION 140c20894 FUN_140c20894 body=128 status=ok
// SIG undefined FUN_140c20894(void)

void FUN_140c20894(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x88) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88 + 4) = uVar4;
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



// FUNCTION 140c20914 FUN_140c20914 body=165 status=ok
// SIG undefined FUN_140c20914(void)

undefined1 FUN_140c20914(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    iVar4 = *(int *)(param_2 + 1);
  }
  else {
    if ((longlong)puVar2 < 0) {
      local_10 = (uint)((ulonglong)puVar2 >> 0x20) & 0x7fffffff;
      local_c = SUB84(puVar2,0);
      local_28 = *(undefined4 *)param_2;
      uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_20 = *(undefined4 *)(param_2 + 1);
      uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = FUN_140c209ba();
      goto LAB_140c20958;
    }
    uVar1 = *(uint *)(puVar2 + 1);
    uVar3 = 0;
    iVar4 = uVar1 - 1;
    if (uVar1 == 0) {
      iVar4 = 0;
    }
    if ((iVar4 != *(int *)(param_2 + 1)) || (uVar3 = 1, *(int *)(param_2 + 1) == 0 || uVar1 < 2))
    goto LAB_140c20958;
    iVar4 = FUN_144a54874(*puVar2,*param_2);
  }
  uVar3 = iVar4 == 0;
LAB_140c20958:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c209ba FUN_140c209ba body=372 status=ok
// SIG undefined FUN_140c209ba(void)

undefined1 FUN_140c209ba(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 uVar7;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(&DAT_14c927ae8 + (ulonglong)*param_1 * 8);
  uVar3 = (ulonglong)(param_1[1] >> 3);
  switch(param_1[1] & 7) {
  case 1:
    puVar6 = (undefined2 *)
             ((longlong)*(int *)(*(longlong *)(lVar5 + 0x40) + uVar3 * 4) * 2 +
             *(longlong *)(lVar5 + 0x50));
    goto LAB_140c20aa0;
  case 2:
    goto LAB_140c20b27;
  case 3:
LAB_140c20b27:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  case 4:
    lVar5 = *(longlong *)(lVar5 + 0x80);
    lVar4 = uVar3 * 0x10;
    local_30 = 0;
    local_40 = (ulonglong)*(uint *)(lVar5 + lVar4);
    local_38 = (ulonglong)*(uint *)(lVar5 + 4 + lVar4);
    local_20 = (ulonglong)*(uint *)(lVar5 + 0xc + lVar4);
    local_28 = (ulonglong)*(uint *)(lVar5 + 8 + lVar4);
    uVar7 = FUN_140c20b51(param_2);
    goto LAB_140c20a1a;
  case 5:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  case 6:
    if (*(int *)(*(longlong *)(lVar5 + 0xa0) + 8 + uVar3 * 0x10) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(*(longlong *)(lVar5 + 0xa0) + uVar3 * 0x10);
    }
LAB_140c20aa0:
    iVar1 = *(int *)(param_2 + 1);
    iVar2 = FUN_144a54874(*param_2,puVar6,(longlong)iVar1);
    if (iVar2 == 0) {
      uVar7 = puVar6[iVar1] == 0;
      goto LAB_140c20a1a;
    }
    break;
  case 7:
    break;
  default:
    lVar5 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x20) + uVar3 * 4) +
            *(longlong *)(lVar5 + 0x30);
    iVar1 = *(int *)(param_2 + 1);
    iVar2 = FUN_144a6307c(*param_2,lVar5,(longlong)iVar1);
    if (iVar2 == 0) {
      uVar7 = *(char *)(lVar5 + iVar1) == '\0';
      goto LAB_140c20a1a;
    }
  }
  uVar7 = 0;
LAB_140c20a1a:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c20b51 FUN_140c20b51 body=283 status=ok
// SIG undefined FUN_140c20b51(void)

ulonglong FUN_140c20b51(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_238 = local_218;
  local_220 = '\0';
  local_228 = &local_18;
  local_230 = local_238;
  FUN_140af6cd0(param_2,&local_238);
  uVar4 = (longlong)local_230 - (longlong)local_238;
  iVar7 = (int)(uVar4 >> 1);
  if ((int)param_1[1] == iVar7) {
    if (iVar7 == 0) {
      uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    }
    else {
      if ((uVar4 & 0x1ffffffff) >> 1 != 0) {
        lVar3 = *param_1;
        lVar5 = (longlong)(uVar4 * 0x80000000) >> 0x20;
        lVar6 = 0;
        do {
          uVar1 = *(ushort *)(lVar3 + lVar6);
          uVar2 = *(ushort *)(local_238 + lVar6);
          param_1 = (longlong *)(ulonglong)uVar2;
          if (uVar1 == uVar2) {
            iVar7 = 0;
            if ((uVar1 == 0) || (lVar5 == 1)) goto LAB_140c20c2a;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) {
              iVar7 = (uint)uVar1 - (uint)uVar2;
              goto LAB_140c20c2a;
            }
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
              iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                      (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
              goto LAB_140c20c2a;
            }
            if (lVar5 == 1) break;
          }
          lVar5 = lVar5 + -1;
          lVar6 = lVar6 + 2;
        } while( true );
      }
      iVar7 = 0;
LAB_140c20c2a:
      uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),iVar7 == 0);
    }
  }
  else {
    uVar4 = 0;
  }
  if (local_220 == '\x01') {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c20c6e FUN_140c20c6e body=559 status=ok
// SIG undefined FUN_140c20c6e(void)

void FUN_140c20c6e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_140c20eb0(param_1,&local_30);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar6 = FUN_140b17e0c();
    cVar5 = FUN_1448093f4(lVar2,uVar6);
    if (cVar5 != '\0') {
      FUN_140c2104c(lVar2 + 0x888,param_1 + 0x458);
      FUN_140c2104c(lVar2 + 0x898,param_1 + 0x468);
      FUN_140c2104c(lVar2 + 0x8a8,param_1 + 0x478);
      FUN_140c2104c(lVar2 + 0x8b8,param_1 + 0x488);
      lVar3 = *(longlong *)(param_1 + 0x410);
      if (*(longlong *)(lVar2 + 0x840) != lVar3) {
        *(undefined8 *)(lVar2 + 0x850) = 0;
      }
      *(longlong *)(lVar2 + 0x840) = lVar3;
      if (*(longlong *)(lVar2 + 0x848) != *(longlong *)(param_1 + 0x418)) {
        *(undefined8 *)(lVar2 + 0x850) = 0;
      }
      uVar6 = FUN_14477b664();
      uVar6 = FUN_14477b664(uVar6);
      *(undefined8 *)(lVar2 + 0x848) = uVar6;
      *(undefined8 *)(lVar2 + 0x850) = *(undefined8 *)(param_1 + 0x420);
      lVar3 = *(longlong *)(param_1 + 0x428);
      if (*(longlong *)(lVar2 + 0x858) != lVar3) {
        *(undefined8 *)(lVar2 + 0x868) = 0;
      }
      *(longlong *)(lVar2 + 0x858) = lVar3;
      if (*(longlong *)(lVar2 + 0x860) != *(longlong *)(param_1 + 0x430)) {
        *(undefined8 *)(lVar2 + 0x868) = 0;
      }
      uVar6 = FUN_14477b664();
      uVar6 = FUN_14477b664(uVar6);
      *(undefined8 *)(lVar2 + 0x860) = uVar6;
      *(undefined8 *)(lVar2 + 0x868) = *(undefined8 *)(param_1 + 0x438);
      lVar3 = *(longlong *)(param_1 + 0x440);
      if (*(longlong *)(lVar2 + 0x870) != lVar3) {
        *(undefined8 *)(lVar2 + 0x880) = 0;
      }
      *(longlong *)(lVar2 + 0x870) = lVar3;
      if (*(longlong *)(lVar2 + 0x878) != *(longlong *)(param_1 + 0x448)) {
        *(undefined8 *)(lVar2 + 0x880) = 0;
      }
      uVar6 = FUN_14477b664();
      uVar6 = FUN_14477b664(uVar6);
      *(undefined8 *)(lVar2 + 0x878) = uVar6;
      *(undefined8 *)(lVar2 + 0x880) = *(undefined8 *)(param_1 + 0x450);
    }
  }
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c20eb0 FUN_140c20eb0 body=410 status=ok
// SIG undefined FUN_140c20eb0(void)

void FUN_140c20eb0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_14094b946(param_1,&local_38);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar6 = FUN_140b193ca();
    cVar5 = FUN_1448093f4(lVar3,uVar6);
    if (cVar5 != '\0') {
      FUN_140c2104c(lVar3 + 0x350,param_1 + 0x148);
      FUN_140c2104c(lVar3 + 0x360,param_1 + 0x158);
      FUN_140c2104c(lVar3 + 0x370,param_1 + 0x168);
      FUN_140c2104c(lVar3 + 0x380,param_1 + 0x178);
      FUN_140c2104c(lVar3 + 0x390,param_1 + 0x188);
      FUN_140c2104c(lVar3 + 0x3a0,param_1 + 0x198);
      FUN_140c2104c(lVar3 + 0x3b0,param_1 + 0x1a8);
      FUN_140c2104c(lVar3 + 0x3c0,param_1 + 0x1b8);
      FUN_140c212b6(lVar3 + 0x3d0,param_1 + 0x1c8);
      FUN_140c21364(lVar3 + 0x4f8,param_1 + 0x1d8);
      FUN_140c21306(lVar3 + 0x748,param_1 + 0x340);
      FUN_140ca9024(lVar3 + 0x770,param_1 + 0x350);
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2104c FUN_140c2104c body=93 status=ok
// SIG undefined FUN_140c2104c(void)

undefined8 * FUN_140c2104c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1405b087a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140c210aa(param_1,iVar1);
      FUN_140c21193(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140c210aa FUN_140c210aa body=233 status=ok
// SIG undefined FUN_140c210aa(void)

void FUN_140c210aa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x90);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x90,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140c21193 FUN_140c21193 body=291 status=ok
// SIG undefined FUN_140c21193(void)

void FUN_140c21193(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  if (param_3 != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x70);
    do {
      *(undefined8 *)((longlong)puVar10 + -0x62) = *(undefined8 *)((longlong)param_2 + 0xe);
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(puVar10 + -0xe) = *param_2;
      *(undefined4 *)((longlong)puVar10 + -0x6c) = uVar2;
      *(undefined4 *)(puVar10 + -0xd) = uVar3;
      *(undefined4 *)((longlong)puVar10 + -100) = uVar4;
      puVar10[-0xb] = 0;
      puVar10[-10] = 0;
      puVar10[-9] = 0;
      puVar10[-0xb] = *(undefined8 *)(param_2 + 6);
      uVar9 = FUN_14477b664(*(undefined8 *)(param_2 + 8));
      uVar9 = FUN_14477b664(uVar9);
      puVar10[-10] = uVar9;
      puVar10[-9] = *(undefined8 *)(param_2 + 10);
      *(undefined1 *)(puVar10 + -8) = *(undefined1 *)(param_2 + 0xc);
      puVar10[-5] = 0;
      puVar10[-7] = 0;
      puVar10[-6] = 0;
      puVar10[-7] = *(undefined8 *)(param_2 + 0xe);
      uVar9 = FUN_14477b664(*(undefined8 *)(param_2 + 0x10));
      uVar9 = FUN_14477b664(uVar9);
      puVar10[-6] = uVar9;
      puVar10[-5] = *(undefined8 *)(param_2 + 0x12);
      uVar2 = param_2[0x14];
      uVar3 = param_2[0x15];
      uVar4 = param_2[0x16];
      uVar5 = param_2[0x17];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x5e);
      uVar7 = *(undefined4 *)((longlong)param_2 + 0x62);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x66);
      *(undefined4 *)((longlong)puVar10 + -0x16) = *(undefined4 *)((longlong)param_2 + 0x5a);
      *(undefined4 *)((longlong)puVar10 + -0x12) = uVar6;
      *(undefined4 *)((longlong)puVar10 + -0xe) = uVar7;
      *(undefined4 *)((longlong)puVar10 + -10) = uVar8;
      *(undefined4 *)(puVar10 + -4) = uVar2;
      *(undefined4 *)((longlong)puVar10 + -0x1c) = uVar3;
      *(undefined4 *)(puVar10 + -3) = uVar4;
      *(undefined4 *)((longlong)puVar10 + -0x14) = uVar5;
      *puVar10 = 0;
      iVar1 = param_2[0x1e];
      _Src = *(void **)(param_2 + 0x1c);
      *(int *)(puVar10 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
      }
      else {
        FUN_1447a127e(puVar10,iVar1,0);
        memcpy((void *)*puVar10,_Src,(longlong)iVar1);
      }
      *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(param_2 + 0x20);
      *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(param_2 + 0x22);
      param_2 = param_2 + 0x24;
      puVar10 = puVar10 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c212b6 FUN_140c212b6 body=79 status=ok
// SIG undefined FUN_140c212b6(void)

undefined8 * FUN_140c212b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a102d2(param_1,iVar1);
      FUN_148a10345(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140c21306 FUN_140c21306 body=93 status=ok
// SIG undefined FUN_140c21306(void)

undefined8 * FUN_140c21306(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1405b08b0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a10382(param_1,iVar1);
      FUN_148a103f1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140c21364 FUN_140c21364 body=1420 status=ok
// SIG undefined FUN_140c21364(void)

longlong * FUN_140c21364(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  if (param_1[3] != lVar2) {
    param_1[5] = 0;
  }
  param_1[3] = lVar2;
  if (param_1[4] != param_2[4]) {
    param_1[5] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[4] = lVar2;
  param_1[5] = param_2[5];
  lVar2 = param_2[6];
  if (param_1[6] != lVar2) {
    param_1[8] = 0;
  }
  param_1[6] = lVar2;
  if (param_1[7] != param_2[7]) {
    param_1[8] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[7] = lVar2;
  param_1[8] = param_2[8];
  lVar2 = param_2[9];
  if (param_1[9] != lVar2) {
    param_1[0xb] = 0;
  }
  param_1[9] = lVar2;
  if (param_1[10] != param_2[10]) {
    param_1[0xb] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[10] = lVar2;
  param_1[0xb] = param_2[0xb];
  lVar2 = param_2[0xc];
  if (param_1[0xc] != lVar2) {
    param_1[0xe] = 0;
  }
  param_1[0xc] = lVar2;
  if (param_1[0xd] != param_2[0xd]) {
    param_1[0xe] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0xd] = lVar2;
  param_1[0xe] = param_2[0xe];
  lVar2 = param_2[0xf];
  if (param_1[0xf] != lVar2) {
    param_1[0x11] = 0;
  }
  param_1[0xf] = lVar2;
  if (param_1[0x10] != param_2[0x10]) {
    param_1[0x11] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x10] = lVar2;
  param_1[0x11] = param_2[0x11];
  lVar2 = param_2[0x12];
  if (param_1[0x12] != lVar2) {
    param_1[0x14] = 0;
  }
  param_1[0x12] = lVar2;
  if (param_1[0x13] != param_2[0x13]) {
    param_1[0x14] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x13] = lVar2;
  param_1[0x14] = param_2[0x14];
  lVar2 = param_2[0x15];
  if (param_1[0x15] != lVar2) {
    param_1[0x17] = 0;
  }
  param_1[0x15] = lVar2;
  if (param_1[0x16] != param_2[0x16]) {
    param_1[0x17] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x16] = lVar2;
  param_1[0x17] = param_2[0x17];
  lVar2 = param_2[0x18];
  if (param_1[0x18] != lVar2) {
    param_1[0x1a] = 0;
  }
  param_1[0x18] = lVar2;
  if (param_1[0x19] != param_2[0x19]) {
    param_1[0x1a] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x19] = lVar2;
  param_1[0x1a] = param_2[0x1a];
  lVar2 = param_2[0x1b];
  if (param_1[0x1b] != lVar2) {
    param_1[0x1d] = 0;
  }
  param_1[0x1b] = lVar2;
  if (param_1[0x1c] != param_2[0x1c]) {
    param_1[0x1d] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x1c] = lVar2;
  param_1[0x1d] = param_2[0x1d];
  lVar2 = param_2[0x1e];
  if (param_1[0x1e] != lVar2) {
    param_1[0x20] = 0;
  }
  param_1[0x1e] = lVar2;
  if (param_1[0x1f] != param_2[0x1f]) {
    param_1[0x20] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x1f] = lVar2;
  param_1[0x20] = param_2[0x20];
  lVar2 = param_2[0x21];
  if (param_1[0x21] != lVar2) {
    param_1[0x23] = 0;
  }
  param_1[0x21] = lVar2;
  if (param_1[0x22] != param_2[0x22]) {
    param_1[0x23] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x22] = lVar2;
  param_1[0x23] = param_2[0x23];
  lVar2 = param_2[0x24];
  if (param_1[0x24] != lVar2) {
    param_1[0x26] = 0;
  }
  param_1[0x24] = lVar2;
  if (param_1[0x25] != param_2[0x25]) {
    param_1[0x26] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x25] = lVar2;
  param_1[0x26] = param_2[0x26];
  lVar2 = param_2[0x27];
  if (param_1[0x27] != lVar2) {
    param_1[0x29] = 0;
  }
  param_1[0x27] = lVar2;
  if (param_1[0x28] != param_2[0x28]) {
    param_1[0x29] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x28] = lVar2;
  param_1[0x29] = param_2[0x29];
  lVar2 = param_2[0x2a];
  if (param_1[0x2a] != lVar2) {
    param_1[0x2c] = 0;
  }
  param_1[0x2a] = lVar2;
  if (param_1[0x2b] != param_2[0x2b]) {
    param_1[0x2c] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x2b] = lVar2;
  param_1[0x2c] = param_2[0x2c];
  return param_1;
}



// FUNCTION 140c218f0 FUN_140c218f0 body=462 status=ok
// SIG undefined FUN_140c218f0(void)

longlong FUN_140c218f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)(param_1 + -0x518);
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cb6fd58 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_1427b09ee;
      local_38 = &LAB_1487a9cc5;
      local_40 = FUN_14654339c;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10004001;
      local_60 = 8;
      local_68 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
    }
    lVar1 = (**(code **)(*plVar3 + 0x288))(plVar3,DAT_14cb6fd58);
    if (lVar1 != 0) {
      if (DAT_14cb6fd58 == 0) {
        local_30 = &local_18;
        local_18 = FUN_1449e2820;
        local_20 = FUN_14081d0ea;
        local_28 = FUN_1427b09ee;
        local_38 = &LAB_1487a9cc5;
        local_40 = FUN_14654339c;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10004001;
        local_60 = 8;
        local_68 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomValueProvider",&DAT_14cb6fd58,&DAT_1487a9cc4);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb6fd58);
      if (lVar1 != lVar2) goto LAB_140c2195c;
    }
  }
  lVar2 = 0;
LAB_140c2195c:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c21ac0 FUN_140c21ac0 body=53 status=ok
// SIG undefined FUN_140c21ac0(void)

void FUN_140c21ac0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = switchD_143c3d4dc::caseD_57();
  if (lVar1 != 0) {
    return;
  }
  FUN_144862176(param_1 + 0x5d8,param_2);
  return;
}



// FUNCTION 140c21b0e FUN_140c21b0e body=431 status=ok
// SIG undefined FUN_140c21b0e(void)

void FUN_140c21b0e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = FUN_14486f0b8();
  lVar7 = (longlong)iVar3 * 0x50 + *(longlong *)(param_1 + 0x200);
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar4 + 1) = 0xc;
    *puVar4 = &PTR_FUN_14a2e8208;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined8 **)(param_1 + 0x30) = puVar4;
  }
  uVar2 = *(ulonglong *)(lVar7 + 8);
  uVar6 = (ulonglong)((uint)uVar2 & 0x3f) - (ulonglong)((uint)(uVar2 >> 1) & 0x15);
  uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
  uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if ((uVar2 & 0x40) == 0) {
    local_34 = *(undefined4 *)(puVar4 + 5);
    *(byte *)(lVar7 + 0x14) = *(byte *)(lVar7 + 0x14) | 8;
    *(ulonglong *)(lVar7 + 8) = uVar2 | 0x40;
    FUN_1402a8efa(lVar7 + 0x20);
  }
  else {
    lVar5 = *(longlong *)(lVar7 + 0x40);
    if (*(longlong *)(lVar7 + 0x40) == 0) {
      lVar5 = lVar7 + 0x20;
    }
    iVar8 = *(int *)(lVar5 + uVar6 * 4);
    if (iVar8 != -1) goto LAB_140c21c45;
    uVar1 = *(undefined4 *)(puVar4 + 5);
    *(byte *)(lVar7 + 0x14) = *(byte *)(lVar7 + 0x14) | 8;
    lVar5 = lVar7 + 0x20;
    if (*(longlong *)(lVar7 + 0x40) != 0) {
      lVar5 = *(longlong *)(lVar7 + 0x40);
    }
    *(undefined4 *)(lVar5 + uVar6 * 4) = uVar1;
  }
  iVar8 = *(int *)(puVar4 + 5);
  *(uint *)(puVar4 + 5) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x2c) < iVar8 + 1U) {
    FUN_1446f48e2(puVar4 + 4,iVar8);
  }
  *(int *)(puVar4[4] + (longlong)iVar8 * 4) = iVar3;
  iVar8 = *(int *)(puVar4 + 3);
  *(uint *)(puVar4 + 3) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x1c) < iVar8 + 1U) {
    FUN_140c21cbe(puVar4 + 2,iVar8);
  }
LAB_140c21c45:
  lVar7 = puVar4[2];
  *(undefined4 *)(lVar7 + 8 + (longlong)iVar8 * 0xc) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar7 + (longlong)iVar8 * 0xc) = *param_3;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c21cbe FUN_140c21cbe body=373 status=ok
// SIG undefined FUN_140c21cbe(void)

void FUN_140c21cbe(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c21d47;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140c21d47:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140c21e34 FUN_140c21e34 body=510 status=ok
// SIG undefined FUN_140c21e34(void)

void FUN_140c21e34(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6ff1b8;
  plVar3 = (longlong *)param_1[0x62];
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
  FUN_140c22032(param_1[0x5f],*(undefined4 *)(param_1 + 0x60));
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x5b];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x59];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_144760e21(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4e],*(undefined4 *)(param_1 + 0x4f));
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4b],*(undefined4 *)(param_1 + 0x4c));
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x45],*(undefined4 *)(param_1 + 0x46));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_140c2206c(param_1);
  return;
}



// FUNCTION 140c22032 FUN_140c22032 body=58 status=ok
// SIG undefined FUN_140c22032(void)

void FUN_140c22032(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c2206c FUN_140c2206c body=477 status=ok
// SIG undefined FUN_140c2206c(void)

void FUN_140c2206c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b24d5f8;
  param_1[0x35] = &PTR_FUN_14b24d600;
  FUN_144760e21(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_140c22249(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x35] = &PTR_LAB_14b224350;
  FUN_144760e21(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_140c2234f(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_140c222a8(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140c222e0(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140c22318(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140c22272(param_1 + 0xb);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c22249 FUN_140c22249 body=40 status=ok
// SIG undefined FUN_140c22249(void)

void FUN_140c22249(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140e0f188(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 140c22272 FUN_140c22272 body=54 status=ok
// SIG undefined FUN_140c22272(void)

void FUN_140c22272(longlong *param_1)

{
  FUN_143c68294(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140c222a8 FUN_140c222a8 body=55 status=ok
// SIG undefined FUN_140c222a8(void)

void FUN_140c222a8(longlong *param_1)

{
  FUN_140c226de(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c222e0 FUN_140c222e0 body=55 status=ok
// SIG undefined FUN_140c222e0(void)

void FUN_140c222e0(longlong *param_1)

{
  FUN_140c2253c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c22318 FUN_140c22318 body=55 status=ok
// SIG undefined FUN_140c22318(void)

void FUN_140c22318(longlong *param_1)

{
  FUN_140c2239c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c2234f FUN_140c2234f body=77 status=ok
// SIG undefined FUN_140c2234f(void)

void FUN_140c2234f(longlong param_1,int param_2)

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



// FUNCTION 140c2239c FUN_140c2239c body=414 status=ok
// SIG undefined FUN_140c2239c(void)

void FUN_140c2239c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      FUN_144760e21(*(undefined8 *)(lVar2 + 8 + lVar4 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c2253c FUN_140c2253c body=416 status=ok
// SIG undefined FUN_140c2253c(void)

void FUN_140c2253c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      FUN_144760e21(*(undefined8 *)(lVar2 + 8 + lVar4 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c226de FUN_140c226de body=421 status=ok
// SIG undefined FUN_140c226de(void)

void FUN_140c226de(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar4 = *(longlong **)(*local_78 + 0x18 + (longlong)iStack_5c * 0x28);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c2288e FUN_140c2288e body=537 status=ok
// SIG undefined FUN_140c2288e(void)

undefined8 * FUN_140c2288e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  *param_1 = &PTR_FUN_14b1fca20;
  param_1[0x18] = 0;
  param_1[0x19] = 0x400000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x1a] = 0;
  param_1[0x51] = 0x600000000;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x5f] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x5d] = DAT_14c8464e0;
  param_1[0x5e] = uVar1;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x6d] = DAT_14c8464e0;
  param_1[0x6e] = uVar1;
  param_1[0x6f] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x3b2) = 1;
  uVar1 = DAT_14c8463e8;
  param_1[0x7a] = DAT_14c8463e0;
  param_1[0x7b] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  param_1[0x78] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  param_1[0x79] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0x7e] = DAT_14c8463e0;
  param_1[0x7f] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  param_1[0x7c] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  param_1[0x7d] = uVar1;
  param_1[0x82] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x80] = DAT_14c8464e0;
  param_1[0x81] = uVar1;
  *(undefined1 *)(param_1 + 0x88) = 0;
  uVar1 = DAT_14c8463e8;
  param_1[0x8c] = DAT_14c8463e0;
  param_1[0x8d] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  param_1[0x8a] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  param_1[0x8b] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0x90] = DAT_14c8463e0;
  param_1[0x91] = uVar1;
  uVar4 = DAT_14c8463d8._4_4_;
  uVar3 = (undefined4)DAT_14c8463d8;
  uVar2 = DAT_14c8463d0._4_4_;
  *(undefined4 *)(param_1 + 0x8e) = (undefined4)DAT_14c8463d0;
  *(undefined4 *)((longlong)param_1 + 0x474) = uVar2;
  *(undefined4 *)(param_1 + 0x8f) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x47c) = uVar4;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  FUN_140c22aa8(param_1 + 0xba);
  param_1[0x100] = 0;
  param_1[0x101] = 0x100000000;
  param_1[0x104] = 0;
  param_1[0x105] = 0x100000000;
  return param_1;
}



// FUNCTION 140c22aa8 FUN_140c22aa8 body=292 status=ok
// SIG undefined FUN_140c22aa8(void)

void FUN_140c22aa8(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0x100000000;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x100000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x100000000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x100000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x100000000;
  param_1[0x20] = 0x4334000000000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0x100000000;
  param_1[0x25] = 0x4334000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0x100000000;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x100000000;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x100000000;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x100000000;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x200000000;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0x200000000;
  *(byte *)(param_1 + 0x43) = (*(byte *)(param_1 + 0x43) & 0xfc) + 1;
  *(undefined1 *)((longlong)param_1 + 0x219) = 2;
  return;
}



// FUNCTION 140c22bcc FUN_140c22bcc body=82 status=ok
// SIG undefined FUN_140c22bcc(void)

void FUN_140c22bcc(longlong *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = (int)param_1[6] - *(int *)((longlong)param_1 + 0x5c);
  if (uVar1 != 0 && *(int *)((longlong)param_1 + 0x5c) <= (int)param_1[6]) {
    lVar3 = param_1[5];
    uVar4 = 1;
    if (1 < (int)uVar1) {
      uVar4 = (ulonglong)uVar1;
    }
    uVar2 = 0;
    do {
      if ((*(int *)(lVar3 + 0x20) == *param_2) && (*(int *)(lVar3 + 0x28) == param_2[2])) {
        if (lVar3 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000140c22c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x50))
                  (param_1,uVar2 & 0xffffffff,*(undefined8 *)(param_2 + 4),
                   *(code **)(*param_1 + 0x50));
        return;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x30;
    } while (uVar4 != uVar2);
  }
  return;
}



// FUNCTION 140c22c1e FUN_140c22c1e body=265 status=ok
// SIG undefined FUN_140c22c1e(void)

void FUN_140c22c1e(longlong param_1,uint param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x50))) {
    lVar2 = param_1 + 0x38;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    if (((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) &&
       (puVar6 = (ulonglong *)((ulonglong)param_2 * 0x30 + *(longlong *)(param_1 + 0x28)),
       puVar6 != (ulonglong *)0x0)) {
      uVar3 = 0x7fffffffffffffff;
      if (param_3 < 0x7fffffffffffffff) {
        uVar3 = param_3;
      }
      *puVar6 = uVar3;
      local_22 = (undefined2)param_2;
      FUN_140b25444(param_1 + 0x60);
      FUN_140b254aa(param_1,puVar6,param_2,0);
      if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0xc))) &&
           ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
            uVar4 = *puVar5;
          }
          else {
            uVar4 = 0;
          }
          FUN_1405f658a(uVar4);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c22d30 FUN_140c22d30 body=321 status=ok
// SIG undefined FUN_140c22d30(void)

longlong * FUN_140c22d30(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar1);
  *param_1 = (longlong)&PTR_FUN_14b19a4a0;
  param_1[5] = (longlong)&PTR_FUN_14b19aea0;
  param_1[6] = (longlong)&PTR_LAB_14b19aee0;
  param_1[0x55] = (longlong)&PTR_FUN_14b19af30;
  param_1[0x56] = (longlong)&PTR_FUN_14b19afb0;
  param_1[0x57] = (longlong)&PTR_FUN_14b19afc0;
  param_1[0xc4] = 0x447a000000000000;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  param_1[0xc6] = 0x408f400000000000;
  param_1[199] = 0x407f400000000000;
  param_1[200] = 0x4069000000000000;
  param_1[0xc9] = -0xff0100;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = DAT_14cad0ef0;
  param_1[0x96] = 0;
  *(byte *)((longlong)param_1 + 0x44d) = *(byte *)((longlong)param_1 + 0x44d) & 0xbf;
  *(undefined1 *)((longlong)param_1 + 0x425) = 0;
  FUN_1400bcfd8(param_1 + 0x82);
  (**(code **)(*param_1 + 0x940))(param_1,0);
  (**(code **)(*param_1 + 0x720))(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x2eb) = 0;
  if ((char)*(byte *)((longlong)param_1 + 0x9e) < '\0') {
    *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0x7f;
    FUN_140381836(param_1,0);
  }
  return param_1;
}



// FUNCTION 140c22e7a FUN_140c22e7a body=659 status=ok
// SIG undefined FUN_140c22e7a(void)

undefined8 * FUN_140c22e7a(undefined8 *param_1)

{
  char cVar1;
  byte bVar2;
  
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b0db840;
  FUN_140440628(param_1 + 0x33,&DAT_14cb7e530,0);
  param_1[0x3a] = 0;
  *(undefined2 *)(param_1 + 0x3e) = 4;
  *(undefined4 *)(param_1 + 0x3b) = 0x43480000;
  *(undefined1 *)(param_1 + 0x3f) = 3;
  *(char *)(param_1 + 0x40) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x45) = 4;
  *(undefined4 *)(param_1 + 0x42) = 0x42480000;
  *(undefined1 *)(param_1 + 0x46) = 3;
  *(char *)(param_1 + 0x47) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x4c) = 4;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 3;
  *(char *)(param_1 + 0x4e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x4f) = 0x101;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x54) = 4;
  *(undefined4 *)(param_1 + 0x51) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x55) = 3;
  *(char *)(param_1 + 0x56) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x57) = 0x100;
  *(undefined4 *)((longlong)param_1 + 700) = 0x41200000;
  *(undefined1 *)(param_1 + 0x58) = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined2 *)(param_1 + 0x60) = 4;
  *(undefined4 *)(param_1 + 0x5d) = 1;
  *(undefined1 *)(param_1 + 0x61) = 2;
  bVar2 = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(byte *)(param_1 + 0x62) = bVar2;
  param_1[99] = 0;
  *(undefined2 *)(param_1 + 0x67) = 4;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x68) = 3;
  *(char *)(param_1 + 0x69) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x6a) = 2;
  param_1[0x6b] = 0;
  *(undefined2 *)(param_1 + 0x6f) = 4;
  *(undefined4 *)(param_1 + 0x6c) = 0x42700000;
  *(undefined1 *)(param_1 + 0x70) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x71) = cVar1;
  param_1[0x72] = 0;
  *(undefined2 *)(param_1 + 0x76) = 4;
  *(undefined4 *)(param_1 + 0x73) = 0x42b40000;
  *(undefined1 *)(param_1 + 0x77) = 3;
  *(char *)(param_1 + 0x78) = cVar1;
  *(undefined2 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  *(undefined2 *)(param_1 + 0x7e) = 4;
  *(undefined4 *)(param_1 + 0x7b) = 1;
  *(undefined1 *)(param_1 + 0x7f) = 2;
  *(byte *)(param_1 + 0x80) = bVar2;
  FUN_140440628(param_1 + 0x81,&DAT_14cb7e568,0);
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0x100000000000001;
  *(undefined2 *)((longlong)param_1 + 0x44c) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x44e) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  return param_1;
}



// FUNCTION 140c2310e FUN_140c2310e body=486 status=ok
// SIG undefined FUN_140c2310e(void)

undefined8 * FUN_140c2310e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(undefined1 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14a1b6c40;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_1 + 0x1d,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x11] = param_1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c232fc FUN_140c232fc body=57 status=ok
// SIG undefined FUN_140c232fc(void)

void FUN_140c232fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21240 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21240 = FUN_140002ddd(FUN_14643264c,uVar1,L"GbxBrainAspect_ClaimCover");
  }
  return;
}



// FUNCTION 140c2333c FUN_140c2333c body=57 status=ok
// SIG undefined FUN_140c2333c(void)

void FUN_140c2333c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21988 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21988 = FUN_140002ddd(FUN_1464347eb,uVar1,L"GbxBrainAspect_UseCover");
  }
  return;
}



// FUNCTION 140c23384 FUN_140c23384 body=40 status=ok
// SIG undefined FUN_140c23384(void)

undefined8 FUN_140c23384(undefined8 param_1,int param_2)

{
  FUN_140c233ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c233ac FUN_140c233ac body=207 status=ok
// SIG undefined FUN_140c233ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c233ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b127ec0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_140c2347c(param_1 + 0x24);
  lVar2 = 0x80;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000140c23459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c2347c FUN_140c2347c body=55 status=ok
// SIG undefined FUN_140c2347c(void)

void FUN_140c2347c(longlong *param_1)

{
  FUN_140c234b4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c234b4 FUN_140c234b4 body=123 status=ok
// SIG undefined FUN_140c234b4(void)

void FUN_140c234b4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
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



// FUNCTION 140c2353e FUN_140c2353e body=224 status=ok
// SIG undefined FUN_140c2353e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c2353e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b746c80;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
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



// FUNCTION 140c2361e FUN_140c2361e body=41 status=ok
// SIG undefined FUN_140c2361e(void)

void FUN_140c2361e(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_140c23648(param_2);
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 140c23648 FUN_140c23648 body=1031 status=ok
// SIG undefined FUN_140c23648(void)

void FUN_140c23648(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar4 = 0;
    iVar13 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0x18);
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar13 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar13 = iVar2 + -1;
      }
      uVar4 = 0;
      uVar12 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar12 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar4) goto LAB_140c236df;
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar11[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar13 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar13) {
      iVar13 = iVar2;
    }
  }
  if (iVar13 < iVar2) {
    uVar8 = 0xffffffff;
    do {
      pbVar3 = *(byte **)(*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar13 * 0x10) + 0x20
                         );
      *pbVar3 = *pbVar3 & 0xfe;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x18);
      }
      iVar2 = *(int *)(param_1 + 0x30);
      iVar13 = (int)uVar4;
      lVar7 = (longlong)iVar13;
      uVar14 = puVar11[lVar7] & uVar8;
      if (uVar14 == 0) {
        iVar9 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar9 = iVar2 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar13) {
          iVar10 = iVar13;
        }
        if (iVar9 <= iVar13) break;
        lVar6 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar14 = puVar11[lVar7 + lVar6 + 1];
          if (uVar14 != 0) break;
          lVar6 = lVar6 + 1;
          if (iVar10 - lVar7 == lVar6) goto LAB_140c236df;
        }
        uVar4 = (ulonglong)(iVar13 + (int)lVar6 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar13 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar2);
  }
LAB_140c236df:
  iVar2 = *(int *)(param_1 + 0x88);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar4 = 0;
    iVar13 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0x70);
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar13 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar13 = iVar2 + -1;
      }
      uVar4 = 0;
      uVar14 = iVar13 >> 5;
      if (iVar13 >> 5 < 1) {
        uVar14 = 0;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) goto LAB_140c23772;
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar11[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar13 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar13) {
      iVar13 = iVar2;
    }
  }
  if (iVar13 < iVar2) {
    uVar8 = 0xffffffff;
    do {
      pbVar3 = *(byte **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar13 * 0x10) +
                         0x20);
      *pbVar3 = *pbVar3 & 0xfe;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = *(uint **)(param_1 + 0x80);
      if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x70);
      }
      iVar2 = *(int *)(param_1 + 0x88);
      iVar13 = (int)uVar4;
      lVar7 = (longlong)iVar13;
      uVar14 = puVar11[lVar7] & uVar8;
      if (uVar14 == 0) {
        iVar9 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar9 = iVar2 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar13) {
          iVar10 = iVar13;
        }
        if (iVar9 <= iVar13) break;
        lVar6 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar14 = puVar11[lVar7 + lVar6 + 1];
          if (uVar14 != 0) break;
          lVar6 = lVar6 + 1;
          if (iVar10 - lVar7 == lVar6) goto LAB_140c23772;
        }
        uVar4 = (ulonglong)(iVar13 + (int)lVar6 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar13 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar2);
  }
LAB_140c23772:
  for (lVar7 = *(longlong *)(param_1 + 0x58); lVar7 != 0;
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x20) + 0x18)) {
    **(byte **)(lVar7 + 0x20) = **(byte **)(lVar7 + 0x20) & 0xfe;
  }
  iVar2 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar2 != 0) {
    lVar7 = *(longlong *)(param_1 + 0xb0);
    lVar6 = 0;
    do {
      pbVar3 = *(byte **)(*(longlong *)(lVar7 + lVar6) + 0x20);
      *pbVar3 = *pbVar3 & 0xfe;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_140c23a50(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140c23a50(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_140c23a50(param_1 + 8);
  return;
}



// FUNCTION 140c23a50 FUN_140c23a50 body=55 status=ok
// SIG undefined FUN_140c23a50(void)

void FUN_140c23a50(longlong *param_1)

{
  FUN_140855494(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c23a88 FUN_140c23a88 body=96 status=ok
// SIG undefined FUN_140c23a88(void)

ulonglong FUN_140c23a88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140c23acb:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140c23acb;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 140c23aee FUN_140c23aee body=64 status=ok
// SIG undefined FUN_140c23aee(void)

void FUN_140c23aee(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447210f0(param_2);
  lVar2 = FUN_140c23b2e(param_1);
  if (lVar1 == lVar2) {
    FUN_140c23d9e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140c23b2e FUN_140c23b2e body=104 status=ok
// SIG undefined FUN_140c23b2e(void)

undefined8 FUN_140c23b2e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1400bd1c2(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
    }
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
  return uVar6;
}



// FUNCTION 140c23b96 FUN_140c23b96 body=518 status=ok
// SIG undefined FUN_140c23b96(void)

void FUN_140c23b96(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Dst;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_108 [36];
  undefined1 local_e4 [8];
  undefined4 local_dc;
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar2 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x60);
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(longlong *)(lVar4 + lVar6) + 0x20);
      if (lVar3 == param_2) {
        if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x68))) {
          cVar1 = FUN_14106ba28(param_1);
          if (cVar1 == '\0') {
            local_88 = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            local_d4 = 0;
            uStack_cc = 0;
            uStack_c8 = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            local_60 = DAT_14cb7bd68;
            uStack_58 = DAT_14cb7bd70;
            uStack_54 = DAT_14cb7bd80;
            uStack_4c = DAT_14cb7bd88;
            uStack_48 = 0;
            local_40 = 0;
            local_d8[0] = 4;
            FUN_140daa42e(param_1,&local_d4);
            FUN_14106b9aa(param_1,local_e4);
            uStack_c0 = local_dc;
            uStack_c8 = local_e4._0_4_;
            uStack_c4 = local_e4._4_4_;
            uVar5 = (ulonglong)(uVar7 & 0x7fffffff);
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar5 * 0x10);
            local_40 = *(undefined4 *)(lVar4 + 0x48);
            local_60 = *(undefined8 *)(lVar4 + 0x28);
            uStack_58 = *(undefined4 *)(lVar4 + 0x30);
            uStack_54 = *(undefined8 *)(lVar4 + 0x34);
            uStack_4c = *(undefined4 *)(lVar4 + 0x3c);
            uStack_48 = *(undefined8 *)(lVar4 + 0x40);
            FUN_140daa31a(param_1,local_d8);
            FUN_14105a12a(local_d8);
          }
          else {
            uVar5 = (ulonglong)(uVar7 & 0x7fffffff);
          }
          lVar4 = FUN_14479d2ce(*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar5 * 0x10) + 0x20);
          if (lVar4 != 0) {
            lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x3c0) + 0x40))(lVar4 + 0x3c0);
            FUN_140457ffc(lVar4 + 0x48,param_1);
          }
          _Dst = (void *)(uVar5 * 0x10 + *(longlong *)(param_1 + 0x60));
          FUN_14597589f(_Dst,1);
          iVar2 = *(int *)(param_1 + 0x68);
          if (iVar2 - 1U != uVar7) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar7 + iVar2) << 4);
            iVar2 = *(int *)(param_1 + 0x68);
          }
          *(int *)(param_1 + 0x68) = iVar2 + -1;
          FUN_14106ce2e(param_1);
        }
        break;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c23d9e FUN_140c23d9e body=1128 status=ok
// SIG undefined FUN_140c23d9e(void)

void FUN_140c23d9e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     (lVar6 = (**(code **)(*(longlong *)(param_2 + 0x2600) + 0x28))(param_2 + 0x2600),
     lVar6 != *(longlong *)(param_1 + 0x28))) goto LAB_140c23de4;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_140c23e1c:
    local_a8 = 0;
    uStack_a0 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_140c23e1c;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    local_a8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    uStack_a0 = plVar2;
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar7 = (longlong *)FUN_14001cc68(0x78,0x10);
  FUN_148d290b6(plVar7,&local_a8);
  plVar2 = plVar7 + 2;
  local_70 = plVar2;
  local_68 = plVar7;
  FUN_148d291d4(&local_70,plVar2);
  iVar5 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar5 + 1U) {
    FUN_148d29278((longlong *)(param_1 + 0x60),iVar5);
  }
  plVar3 = local_68;
  lVar6 = *(longlong *)(param_1 + 0x60);
  lVar8 = (longlong)iVar5 * 0x10;
  *(longlong **)(lVar6 + lVar8) = plVar2;
  *(longlong **)(lVar6 + 8 + lVar8) = plVar7;
  if (plVar7 == (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    local_80 = 0x10;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_80 = *(longlong *)(lVar6 + lVar8);
    local_78 = (longlong *)((longlong *)(lVar6 + lVar8))[1];
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar2 = uStack_a0;
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_a0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*uStack_a0)(uStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  lVar6 = local_80;
  FUN_14485c47a(local_80 + 0x20,param_2);
  (**(code **)(*(longlong *)(param_2 + 0x418) + 0x50))(param_2 + 0x418,&local_70);
  FUN_140ac173c(&local_a8,&local_70);
  *(undefined4 *)(lVar6 + 0x48) = local_88;
  *(undefined4 *)(lVar6 + 0x38) = local_98;
  *(undefined4 *)(lVar6 + 0x3c) = uStack_94;
  *(undefined4 *)(lVar6 + 0x40) = uStack_90;
  *(undefined4 *)(lVar6 + 0x44) = uStack_8c;
  *(undefined4 *)(lVar6 + 0x28) = (undefined4)local_a8;
  *(undefined4 *)(lVar6 + 0x2c) = local_a8._4_4_;
  *(undefined4 *)(lVar6 + 0x30) = (undefined4)uStack_a0;
  *(undefined4 *)(lVar6 + 0x34) = uStack_a0._4_4_;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_a8 = 0;
  uStack_a0 = *(longlong **)(param_1 + 0x20);
  if (uStack_a0 != (longlong *)0x0) {
    iVar5 = (int)uStack_a0[1];
    do {
      if (iVar5 == 0) {
        uStack_a0 = (longlong *)0x0;
        goto LAB_140c23f6d;
      }
      LOCK();
      iVar4 = (int)uStack_a0[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(uStack_a0 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    if (uStack_a0 != (longlong *)0x0) {
      local_a8 = *(undefined8 *)(param_1 + 0x18);
    }
  }
LAB_140c23f6d:
  plVar7 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b400bc0;
  plVar2 = plVar7 + 2;
  FUN_14105926a(plVar2,&local_a8);
  local_70 = plVar2;
  local_68 = plVar7;
  FUN_14105930c(&local_70,plVar2);
  plVar2 = local_68;
  if (local_68 == (longlong *)0x0) {
    *(longlong **)(local_80 + 0x50) = local_70;
    plVar7 = *(longlong **)(local_80 + 0x58);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(local_80 + 0x58) = 0;
LAB_140c241c4:
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x000140c241a6:
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    *(longlong **)(local_80 + 0x50) = local_70;
    plVar7 = *(longlong **)(local_80 + 0x58);
    if (local_68 == plVar7) {
      LOCK();
      plVar7 = local_68 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar7 = plVar2;
        goto joined_r0x000140c241a6;
      }
    }
    else {
      *(longlong **)(local_80 + 0x58) = local_68;
      if (plVar7 != (longlong *)0x0) goto LAB_140c241c4;
    }
  }
  plVar2 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = uStack_a0;
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_a0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*uStack_a0)(uStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  lVar6 = local_80;
  FUN_14106c8ae(*(undefined8 *)(local_80 + 0x50),param_2,DAT_14cb7cbe8);
  *(undefined1 *)(lVar6 + 0x60) = 0;
  FUN_148d1cd6e(lVar6);
  lVar6 = (**(code **)(*(longlong *)(param_2 + 0x3c0) + 0x40))(param_2 + 0x3c0);
  FUN_148d292fe(&local_70,&local_80);
  FUN_1412c5acc(lVar6 + 0x48,&local_a8,&local_70);
  FUN_1449db362(&local_70);
  plVar2 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_78 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_140c23de4:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2421c FUN_140c2421c body=2947 status=ok
// SIG undefined FUN_140c2421c(void)

void FUN_140c2421c(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  int *piVar20;
  int *piVar21;
  undefined1 *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  char local_122;
  char local_121;
  longlong *local_120;
  longlong *local_118;
  longlong local_110;
  int local_104;
  code *local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  code *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  code *local_c0;
  longlong *local_b8;
  int local_b0 [2];
  longlong local_a8;
  longlong local_98;
  int local_88;
  int local_84;
  undefined1 local_80 [16];
  undefined1 *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_122 = param_2;
  local_110 = param_1;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar23 = *(longlong **)(param_1 + 0x20);
    plVar14 = plVar23 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      lVar2 = *plVar23;
      if (0 < *(int *)(lVar2 + 0x18)) {
        plVar12 = (longlong *)(lVar2 + 0x10);
        uVar16 = 0;
LAB_140c24294:
        iVar15 = (int)uVar16;
        plVar18 = (longlong *)(uVar16 * 0x10 + *plVar12);
        if (local_122 == '\0') {
          lVar3 = *plVar18;
          if ((*(int *)(lVar3 + 0x84) == 0) || (uVar1 = *(uint *)(lVar3 + 0x80), (int)uVar1 < 0)) {
LAB_140c24c2a:
            plVar24 = (longlong *)0x0;
          }
          else {
            plVar24 = (longlong *)0x0;
            if ((int)uVar1 < DAT_14c9647dc) {
              puVar11 = (undefined8 *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if (((puVar11 == (undefined8 *)0x0) ||
                  (*(int *)(puVar11 + 2) != *(int *)(lVar3 + 0x84))) ||
                 ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_140c24c2a;
              plVar24 = (longlong *)*puVar11;
            }
          }
          local_d0 = *(undefined8 *)(lVar3 + 0x128);
          local_c8 = *(undefined4 *)(lVar3 + 0x130);
          local_f8 = plVar12;
          local_d8 = plVar18;
          FUN_1448075d0(&local_c0,&local_d0);
          lVar9 = FUN_14060eaf6(&local_c0);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          plVar12 = local_f8;
          plVar18 = local_d8;
          local_120 = plVar24;
          if ((plVar24 == (longlong *)0x0) || (lVar9 == 0)) goto LAB_140c245e2;
          if (((*(int *)(lVar3 + 0x84) != 0) &&
              ((uVar1 = *(uint *)(lVar3 + 0x80), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))))
             && ((puVar11 = (undefined8 *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 puVar11 != (undefined8 *)0x0 &&
                 ((*(int *)(puVar11 + 2) == *(int *)(lVar3 + 0x84) &&
                  ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))))) {
            for (plVar12 = (longlong *)*puVar11; plVar12 != (longlong *)0x0;
                plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2f0))(plVar12)) {
              if (plVar12[5] != 0) {
                lVar9 = *(longlong *)(plVar12[5] + 0x30);
                if (((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x360), lVar9 != 0)) &&
                   (0 < *(int *)(lVar9 + 0x238))) {
                  lVar19 = 0;
                  goto LAB_140c24431;
                }
                break;
              }
            }
          }
          goto LAB_140c244d8;
        }
        goto LAB_140c245e2;
      }
LAB_140c24280:
      plVar23 = plVar23 + 2;
    } while (plVar23 != plVar14);
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140c24431:
  do {
    iVar7 = *(int *)(*(longlong *)(lVar9 + 0x230) + 4 + lVar19 * 8);
    if ((((iVar7 != 0) &&
         (uVar1 = *(uint *)(*(longlong *)(lVar9 + 0x230) + lVar19 * 8), -1 < (int)uVar1)) &&
        (((int)uVar1 < DAT_14c9647dc &&
         ((plVar12 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar7)))))) &&
       (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
        ((*plVar12 != 0 && (lVar4 = *(longlong *)(*plVar12 + 0x3d0), lVar4 != 0)))))) {
      if (DAT_14cb5b388 == 0) {
        local_c0 = FUN_141864c34;
        local_130 = FUN_14081d0ea;
        local_138 = &LAB_146431698;
        local_140 = &local_c0;
        local_148 = &LAB_1486775cb;
        local_150 = &LAB_1464cee35;
        local_158 = &DAT_149e063b2;
        local_160 = 0;
        local_168 = 0x10000005;
        local_170 = 0x10;
        local_178 = 0x3a20;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      }
      if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
         (plVar12 = local_f8, *(char *)(lVar4 + 0x1990) != '\0')) goto LAB_140c2468b;
    }
    lVar19 = lVar19 + 1;
  } while ((int)lVar19 < *(int *)(lVar9 + 0x238));
LAB_140c244d8:
  plVar18 = local_120;
  plVar12 = local_f8;
  if (*(char *)(lVar3 + 0x180) != '\x01') goto LAB_140c2468b;
  lVar9 = (**(code **)(*local_120 + 0x2b8))(local_120);
  bVar25 = true;
  if (((lVar9 != 0) && (*(longlong **)(lVar9 + 0xe0) != (longlong *)0x0)) &&
     (plVar12 = (longlong *)(**(code **)(**(longlong **)(lVar9 + 0xe0) + 0xc0))(),
     plVar12 != (longlong *)0x0)) {
    lVar9 = (**(code **)(*plVar12 + 8))(plVar12,lVar3 + 0x134);
    bVar25 = lVar9 == 0;
  }
  local_121 = bVar25;
  iVar7 = FUN_140c24ea6(*(undefined8 *)(lVar3 + 0x68),plVar18);
  local_104 = *(int *)(lVar3 + 0x120);
  if ((*(int *)(lVar3 + 0x84) == 0) || (uVar1 = *(uint *)(lVar3 + 0x80), (int)uVar1 < 0)) {
LAB_140c24c6f:
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    if ((int)uVar1 < DAT_14c9647dc) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != *(int *)(lVar3 + 0x84))) ||
         ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_140c24c6f;
      uVar13 = *puVar11;
    }
  }
  FUN_140630e34(&local_c0,uVar13);
  if (local_b8 == (longlong *)0x0) {
LAB_140c24b9e:
    bVar25 = false;
  }
  else {
    iVar8 = (int)local_b8[1];
    do {
      if (iVar8 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar10 = (int)local_b8[1];
      bVar25 = iVar8 == iVar10;
      if (bVar25) {
        *(int *)(local_b8 + 1) = iVar8 + 1;
        iVar10 = iVar8;
      }
      iVar8 = iVar10;
      UNLOCK();
      plVar12 = local_b8;
    } while (!bVar25);
    LOCK();
    piVar20 = (int *)((longlong)local_b8 + 0xc);
    *piVar20 = *piVar20 + -1;
    UNLOCK();
    if (*piVar20 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    if (plVar12 == (longlong *)0x0) goto LAB_140c24b9e;
    if (local_c0 == (code *)0x0) {
      bVar25 = false;
    }
    else if (iVar7 < 0) {
      bVar25 = false;
      plVar18 = local_120;
    }
    else {
      local_118 = plVar12;
      if ((longlong)*(int *)(lVar3 + 0x120) != 0) {
        lVar9 = *(longlong *)(lVar3 + 0x118);
        local_f0 = (longlong)*(int *)(lVar3 + 0x120) * 0x38 + lVar9;
        local_100 = local_c0 + 0x148;
        local_e0 = local_c0;
LAB_140c246ee:
        local_e8 = lVar9;
        FUN_140c258c2(lVar9,&local_c0);
        iVar8 = local_b0[0];
        if ((char)local_c0 == '\x01') {
          FUN_1447a97f4(&local_88,local_b0);
          if (0 < local_84) {
            lVar9 = 0;
            uVar17 = 0;
            iVar8 = local_84;
            iVar10 = DAT_14c948000;
            do {
              bVar25 = local_88 != 0;
              bVar26 = local_88 != iVar10;
              piVar20 = &DAT_14c948620;
              piVar21 = (int *)&DAT_14c948618;
              if (bVar26 && bVar25) {
                puVar22 = local_80;
                if (0 < local_64) {
                  puVar22 = local_70;
                }
                if (1 < iVar8) {
                  puVar22 = local_70;
                }
                piVar20 = (int *)(puVar22 + lVar9 + 8);
                piVar21 = (int *)(puVar22 + lVar9);
              }
              if ((*piVar21 == DAT_14cb7beb0) && (*piVar20 == DAT_14cb7beb8)) {
LAB_140c24910:
                FUN_1402b5374(&local_88,uVar17 & 0xffffffff,0);
                iVar8 = local_84;
                iVar10 = DAT_14c948000;
              }
              else {
                piVar20 = &DAT_14c948620;
                piVar21 = (int *)&DAT_14c948618;
                if (bVar26 && bVar25) {
                  puVar22 = local_80;
                  if (0 < local_64) {
                    puVar22 = local_70;
                  }
                  if (1 < iVar8) {
                    puVar22 = local_70;
                  }
                  piVar20 = (int *)(puVar22 + lVar9 + 8);
                  piVar21 = (int *)(puVar22 + lVar9);
                }
                if ((*piVar21 == DAT_14cb7bec8) && (*piVar20 == DAT_14cb7bed0)) goto LAB_140c24910;
                piVar20 = &DAT_14c948620;
                piVar21 = (int *)&DAT_14c948618;
                if (bVar26 && bVar25) {
                  puVar22 = local_80;
                  if (0 < local_64) {
                    puVar22 = local_70;
                  }
                  if (1 < iVar8) {
                    puVar22 = local_70;
                  }
                  piVar20 = (int *)(puVar22 + lVar9 + 8);
                  piVar21 = (int *)(puVar22 + lVar9);
                }
                if ((*piVar21 == DAT_14cb7bee0) && (*piVar20 == DAT_14cb7bee8)) goto LAB_140c24910;
                piVar20 = &DAT_14c948620;
                piVar21 = (int *)&DAT_14c948618;
                if (bVar26 && bVar25) {
                  puVar22 = local_80;
                  if (0 < local_64) {
                    puVar22 = local_70;
                  }
                  if (1 < iVar8) {
                    puVar22 = local_70;
                  }
                  piVar20 = (int *)(puVar22 + lVar9 + 8);
                  piVar21 = (int *)(puVar22 + lVar9);
                }
                if ((*piVar21 == DAT_14cb7bef8) && (*piVar20 == DAT_14cb7bf00)) goto LAB_140c24910;
                piVar20 = &DAT_14c948620;
                piVar21 = (int *)&DAT_14c948618;
                if (bVar26 && bVar25) {
                  puVar22 = local_80;
                  if (0 < local_64) {
                    puVar22 = local_70;
                  }
                  if (1 < iVar8) {
                    puVar22 = local_70;
                  }
                  piVar20 = (int *)(puVar22 + lVar9 + 8);
                  piVar21 = (int *)(puVar22 + lVar9);
                }
                if ((*piVar21 == DAT_14cb7bf10) && (*piVar20 == DAT_14cb7bf18)) goto LAB_140c24910;
              }
              uVar17 = uVar17 + 1;
              lVar9 = lVar9 + 0xc;
            } while ((longlong)uVar17 < (longlong)iVar8);
          }
          iVar8 = local_88;
          if (local_70 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
        iVar8 = FUN_1402b3efe(local_100,iVar8,&local_c0);
        if (iVar8 != -1) {
          if ((*(longlong *)local_100 + (longlong)iVar8 * 0x48 != 0) &&
             (piVar20 = (int *)(*(longlong *)local_100 + (longlong)iVar8 * 0x48 + 0x38),
             piVar20 != (int *)0x0)) {
            iVar8 = *piVar20;
            if ((-1 < (longlong)iVar8) &&
               ((iVar8 < *(int *)(local_e0 + 0x80) && ((longlong)*(int *)(local_e0 + 0xa0) != 0))))
            {
              lVar9 = 0;
              do {
                if (*(int *)(*(longlong *)(local_e0 + 0x98) + lVar9) == iVar8) {
                  if (((((*(int *)(local_e0 + 0x74) != 0) &&
                        (uVar1 = *(uint *)(local_e0 + 0x70), -1 < (int)uVar1)) &&
                       ((int)uVar1 < DAT_14c9647dc)) &&
                      ((plVar12 = (longlong *)
                                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                       plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)(local_e0 + 0x74)))
                      )) && ((lVar9 = *(longlong *)(local_e0 + 0x78),
                             (*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
                             (plVar12 = (longlong *)*plVar12, plVar12 != (longlong *)0x0))))
                  goto LAB_140c24a33;
                  break;
                }
                lVar9 = lVar9 + 4;
              } while ((longlong)*(int *)(local_e0 + 0xa0) * 4 != lVar9);
            }
          }
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        goto LAB_140c24a73;
      }
LAB_140c24d4b:
      bVar25 = false;
      plVar12 = local_118;
      plVar18 = local_120;
    }
LAB_140c24bef:
    LOCK();
    plVar24 = plVar12 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar20 = (int *)((longlong)plVar12 + 0xc);
      *piVar20 = *piVar20 + -1;
      UNLOCK();
      if (*piVar20 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  uVar13 = FUN_140c255e6(*(undefined8 *)(lVar3 + 0x68),plVar18);
  cVar5 = FUN_144a630e2(lVar3,uVar13);
  uVar13 = FUN_1405d80fc(*(undefined8 *)(lVar3 + 0x68),plVar18);
  cVar6 = FUN_144a630e2(lVar3,uVar13);
  plVar12 = local_f8;
  plVar18 = local_d8;
  if (((local_104 == 0) || (cVar6 != '\0')) &&
     (((local_104 != 0 && (cVar5 == '\x01')) ||
      ((!bVar25 && (local_121 == '\0' && *(char *)(lVar3 + 0x169) == '\0') &&
       (2 < (byte)(*(char *)(lVar3 + 0x140) - 5U))))))) goto LAB_140c2468b;
LAB_140c245e2:
  FUN_140c2505a(local_110,plVar18,local_122);
  lVar3 = *plVar18;
  if ((*(int *)(lVar3 + 0x84) == 0) || (uVar1 = *(uint *)(lVar3 + 0x80), (int)uVar1 < 0)) {
LAB_140c24c32:
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    if ((int)uVar1 < DAT_14c9647dc) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != *(int *)(lVar3 + 0x84))) ||
         ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_140c24c32;
      uVar13 = *puVar11;
    }
  }
  iVar7 = FUN_1405d756c(*(undefined8 *)(lVar3 + 0x68),uVar13);
  *(int *)(local_110 + 0x230) = *(int *)(local_110 + 0x230) - iVar7;
  FUN_140c24da0(plVar12,uVar16);
  FUN_140c24e18(plVar12);
  iVar15 = iVar15 + -1;
LAB_140c2468b:
  uVar16 = (ulonglong)(iVar15 + 1U);
  if (*(int *)(lVar2 + 0x18) <= (int)(iVar15 + 1U)) goto LAB_140c24280;
  goto LAB_140c24294;
  while (plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2f0))(plVar12), plVar12 != (longlong *)0x0)
  {
LAB_140c24a33:
    if (plVar12[5] != 0) {
      lVar19 = *(longlong *)(plVar12[5] + 0x30);
      if ((lVar19 != 0) && (lVar19 = *(longlong *)(lVar19 + 0x360), lVar19 != 0)) {
        bVar25 = (double)iVar7 <=
                 *(double *)(lVar19 + 0x6d0) -
                 (double)*(float *)(lVar9 + 0xac + (longlong)iVar8 * 0x280);
        plVar12 = local_118;
        plVar18 = local_120;
        if (local_98 != 0) {
          FUN_1400020a8();
          plVar12 = local_118;
          plVar18 = local_120;
        }
        goto LAB_140c24bef;
      }
      break;
    }
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_140c24a73:
  lVar9 = local_e8 + 0x38;
  if (lVar9 == local_f0) goto LAB_140c24d4b;
  goto LAB_140c246ee;
}



// FUNCTION 140c24da0 FUN_140c24da0 body=120 status=ok
// SIG undefined FUN_140c24da0(void)

void FUN_140c24da0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 140c24e18 FUN_140c24e18 body=142 status=ok
// SIG undefined FUN_140c24e18(void)

void FUN_140c24e18(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 140c24ea6 FUN_140c24ea6 body=434 status=ok
// SIG undefined FUN_140c24ea6(void)

undefined4 FUN_140c24ea6(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  undefined1 auStack_a8 [40];
  char local_80 [16];
  longlong *local_70;
  int local_58;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = '\0';
  local_58 = 0;
  FUN_1456bb102(local_80);
  FUN_1447c3578(param_1 + 200,local_50,local_80);
  uVar5 = FUN_1405d5f74(local_50);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar11 = local_50;
    if (0x18 < local_38) {
      ppppuVar11 = (undefined8 ****)local_50[0];
    }
    (*pcVar2)(ppppuVar11);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_58 != 0) {
    lVar10 = (longlong)local_58 + -1;
    lVar8 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar4 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar4 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar3 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_58 = 0;
  }
  if ((local_80[0] == '\x03') && (local_70 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2505a FUN_140c2505a body=1383 status=ok
// SIG undefined FUN_140c2505a(void)

void FUN_140c2505a(longlong param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  char *pcVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  undefined *puVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  uint *puVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_f8 [40];
  uint local_d0;
  uint uStack_cc;
  longlong *local_c0;
  int local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = *param_2;
  pcVar2 = *(char **)(lVar9 + 0x148);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 == '\x01')) {
    FUN_140457ffc(*(longlong *)(pcVar2 + 8) + 0x1b8,lVar9);
  }
  plVar6 = (longlong *)FUN_140ad21c8(lVar9);
  if (plVar6 != (longlong *)0x0) {
    if ((param_3 & *(byte *)(lVar9 + 0x168)) == 1) {
      *(undefined1 *)(lVar9 + 0x16a) = 0;
    }
    (**(code **)(*plVar6 + 0xa8))(plVar6,lVar9 + 0x134);
  }
  lVar7 = *(longlong *)(lVar9 + 0x68);
  if (*(char *)(lVar7 + 0x1a0) != '\x01') {
    uStack_cc = uStack_cc & 0xffffff00;
    goto LAB_140c250ff;
  }
  if (*(int *)(lVar9 + 0x84) == 0) {
LAB_140c2536c:
    uVar12 = 0;
  }
  else {
    uVar19 = *(uint *)(lVar9 + 0x80);
    uVar12 = 0;
    if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         ((((int)plVar6[2] != *(int *)(lVar9 + 0x84) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))
          || (plVar6 = (longlong *)*plVar6, plVar6 == (longlong *)0x0)))) goto LAB_140c2536c;
      do {
        if (plVar6[5] != 0) {
          lVar15 = *(longlong *)(plVar6[5] + 0x30);
          if (lVar15 == 0) goto LAB_140c2536c;
          uVar12 = *(undefined8 *)(lVar15 + 0x360);
          break;
        }
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2f0))(plVar6);
        uVar12 = 0;
      } while (plVar6 != (longlong *)0x0);
    }
  }
  local_d0 = local_d0 & 0xffffff00;
  local_a8 = 0;
  FUN_1456bb102(&local_d0,uVar12);
  puVar17 = &local_a0;
  FUN_1447c3578(lVar7 + 0x1a8,puVar17,&local_d0);
  if (local_80 == 3) {
    uVar5 = 3;
    uVar19 = local_a0;
  }
  else {
    FUN_1400b56fe(local_78,&local_a0,3);
    uVar19 = 0;
    if (local_58 != 0) {
      uVar19 = (uint)local_78[0];
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar16 = local_78;
      if (0x18 < local_60) {
        ppppuVar16 = (undefined8 ****)local_78[0];
      }
      (*pcVar3)(ppppuVar16);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(local_78[0]);
    }
    uVar5 = (uint)local_80;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar17 = (uint *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar3)(puVar17);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar7 = DAT_14c9a3da0;
  if ((longlong)local_a8 != 0) {
    lVar15 = (longlong)local_a8 + -1;
    lVar18 = lVar15 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar18),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar18));
    if (*(longlong *)(lVar7 + lVar18) != 0) {
      FUN_1400020a8();
    }
    lVar7 = DAT_14c9a3da0;
    iVar13 = (int)lVar15;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
    }
    *(undefined4 *)(lVar7 + lVar18) = 0xffffffff;
    iVar10 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar10 = DAT_14c9a3dd0;
    }
    *(int *)(lVar7 + 4 + lVar18) = iVar10;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar10 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar10 = iVar13;
    }
    bVar4 = (byte)lVar15 & 0x1f;
    DAT_14c9a3dd0 = iVar13;
    *(uint *)(puVar11 + (longlong)(iVar10 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar10 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_a8 = 0;
  }
  if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar8 = (int *)((longlong)local_c0 + 0xc);
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (*piVar8 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  uStack_cc = CONCAT31(uStack_cc._1_3_,1);
  local_d0 = uVar19;
LAB_140c250ff:
  FUN_140c25d2a(lVar9,0,0,&local_d0);
  *(undefined8 *)(lVar9 + 0x148) = 0;
  plVar6 = *(longlong **)(lVar9 + 0x150);
  if (plVar6 != (longlong *)0x0) {
    *(undefined8 *)(lVar9 + 0x150) = 0;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar8 = (int *)((longlong)plVar6 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  lVar9 = *param_2;
  lVar7 = *(longlong *)(lVar9 + 0x18);
  if (lVar7 != 0) {
    *(int *)(lVar7 + 0x158) = *(int *)(lVar7 + 0x158) + -1;
    FUN_1400b22c2(&local_d0,&DAT_149e02088);
    if (((*(int *)(lVar7 + 0xf4) != 0) && (uVar19 = *(uint *)(lVar7 + 0xf0), -1 < (int)uVar19)) &&
       (((int)uVar19 < DAT_14c9647dc &&
        (((plVar6 = (longlong *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
          plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(lVar7 + 0xf4))) &&
         ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))))) {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar9 = *plVar6;
      }
      else {
        lVar9 = 0;
      }
      local_78[0] = *(undefined8 ****)(lVar9 + 0x18);
      FUN_1400348e2(local_78,&local_d0);
    }
    if (CONCAT44(uStack_cc,local_d0) != 0) {
      FUN_1400020a8();
    }
    lVar9 = *param_2;
  }
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar7 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar13 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x1b0) - 1U &
                              (longlong)*(int *)(lVar9 + 0x88)) * 4);
    if (iVar13 != -1) {
      lVar15 = *(longlong *)(param_1 + 0x168);
      do {
        lVar14 = (longlong)iVar13 * 0x20;
        lVar18 = lVar15 + lVar14;
        if (*(int *)(lVar15 + lVar14) == *(int *)(lVar9 + 0x88)) {
          iVar10 = *(int *)(lVar7 + (longlong)*(int *)(lVar18 + 0x1c) * 4);
          if (iVar10 == iVar13) {
            piVar8 = (int *)(lVar7 + (longlong)*(int *)(lVar18 + 0x1c) * 4);
          }
          else {
            do {
              piVar8 = (int *)((longlong)iVar10 * 0x20 + lVar15 + 0x18);
              iVar10 = *piVar8;
            } while (iVar10 != iVar13);
          }
          *piVar8 = *(int *)(lVar18 + 0x18);
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x168) + 0x10 + lVar14);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar8 = (int *)((longlong)plVar6 + 0xc);
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (*piVar8 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_f8);
        }
        iVar13 = *(int *)(lVar18 + 0x18);
      } while (iVar13 != -1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c255e6 FUN_140c255e6 body=616 status=ok
// SIG undefined FUN_140c255e6(void)

undefined4 FUN_140c255e6(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = '\0';
  local_88 = 0;
  FUN_1456bb102(local_b0);
  puVar10 = &local_80;
  FUN_1447c3578(param_1 + 0x100,puVar10,local_b0);
  if (local_60 == 3) {
    uVar5 = 3;
    uVar13 = local_80;
  }
  else {
    puVar12 = &local_58;
    FUN_1400b56fe(puVar12,&local_80,3);
    uVar13 = 0;
    if (local_38 != 0) {
      uVar13 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar12 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar12);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar5 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar10 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar10);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_88 != 0) {
    lVar9 = (longlong)local_88 + -1;
    lVar11 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar4 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar11) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    bVar3 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_88 = 0;
  }
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c25850 FUN_140c25850 body=114 status=ok
// SIG undefined FUN_140c25850(void)

void FUN_140c25850(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 140c258c2 FUN_140c258c2 body=656 status=ok
// SIG undefined FUN_140c258c2(void)

undefined2 * FUN_140c258c2(longlong param_1,undefined2 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_140c25b54(param_2);
  *(undefined1 *)param_2 = 1;
  FUN_140c25b54(param_2);
  piVar3 = (int *)&DAT_14c948618;
  puVar2 = (undefined8 *)((longlong)&DAT_14c948618 + 4);
  if (((*(int *)(param_1 + 0x10) != 0) && (iVar1 = *(int *)(param_1 + 0x14), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x10) != DAT_14c948000)) {
    if ((iVar1 < 2) && (*(int *)(param_1 + 0x34) < 1)) {
      lVar4 = param_1 + 0x18;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x28);
    }
    if (1 < iVar1) {
      piVar3 = (int *)(lVar4 + 0xc);
      puVar2 = (undefined8 *)(lVar4 + 0x10);
    }
  }
  local_30 = *piVar3;
  if (local_30 == 0) {
    uStack_28 = DAT_14cb7bba0;
    local_30 = (int)DAT_14cb7bb98;
    uStack_2c = (undefined4)((ulonglong)DAT_14cb7bb98 >> 0x20);
  }
  else {
    uStack_2c = (undefined4)*puVar2;
    uStack_28 = (undefined4)((ulonglong)*puVar2 >> 0x20);
  }
  FUN_144928d62(param_2 + 8,1,&local_30);
  if (((*(int *)(param_1 + 0x10) == 0) || (iVar1 = *(int *)(param_1 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_1 + 0x10) == DAT_14c948000)) {
LAB_140c25b11:
    local_38 = DAT_14c948620;
    local_40 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (*(int *)(param_1 + 0x34) < 1)) {
      lVar4 = param_1 + 0x18;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 3)) goto LAB_140c25b11;
    local_38 = *(undefined4 *)(lVar4 + 0x20);
    local_40 = *(undefined8 *)(lVar4 + 0x18);
  }
  FUN_14013eb2c(param_2,&local_40);
  if (((*(int *)(param_1 + 0x10) == 0) || (iVar1 = *(int *)(param_1 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_1 + 0x10) == DAT_14c948000)) {
LAB_140c25b27:
    local_48 = DAT_14c948620;
    local_50 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (*(int *)(param_1 + 0x34) < 1)) {
      lVar4 = param_1 + 0x18;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 4)) goto LAB_140c25b27;
    local_48 = *(undefined4 *)(lVar4 + 0x2c);
    local_50 = *(undefined8 *)(lVar4 + 0x24);
  }
  FUN_14013eb54(param_2,&local_50);
  if (((*(int *)(param_1 + 0x10) != 0) && (iVar1 = *(int *)(param_1 + 0x14), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x10) != DAT_14c948000)) {
    if ((iVar1 < 2) && (*(int *)(param_1 + 0x34) < 1)) {
      param_1 = param_1 + 0x18;
    }
    else {
      param_1 = *(longlong *)(param_1 + 0x28);
    }
    if ((iVar1 != 1) && (4 < iVar1)) {
      local_58 = *(undefined4 *)(param_1 + 0x38);
      local_60 = *(undefined8 *)(param_1 + 0x30);
      goto LAB_140c25a9c;
    }
  }
  local_58 = DAT_14c948620;
  local_60 = DAT_14c948618;
LAB_140c25a9c:
  FUN_144928d62(param_2 + 8,4,&local_60);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c25b54 FUN_140c25b54 body=469 status=ok
// SIG undefined FUN_140c25b54(void)

void FUN_140c25b54(char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined1 local_4c [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1446dda88(param_1 + 0x28,0);
  }
  if ((*param_1 != '\0') && (*param_1 != '\v')) {
    pcVar1 = param_1 + 0x10;
    FUN_1402911d2(local_4c);
    FUN_144928d62(pcVar1,0,local_4c);
    if (*param_1 == '\x01') {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 < 6) {
        iVar3 = *(int *)(param_1 + 0x34);
        iVar4 = *(int *)(param_1 + 0x30);
        if ((longlong)iVar4 < 6) {
          param_1[0x30] = '\x06';
          param_1[0x31] = '\0';
          param_1[0x32] = '\0';
          param_1[0x33] = '\0';
          if ((uint)(iVar3 - iVar4) < 6U - iVar4) {
            FUN_1446dd912(param_1 + 0x28,iVar4);
          }
          FUN_1446dd7a8((longlong)iVar4 * 0xc + *(longlong *)(param_1 + 0x28),6U - iVar4);
        }
        else if (iVar4 != 6) {
          param_1[0x30] = '\x06';
          param_1[0x31] = '\0';
          param_1[0x32] = '\0';
          param_1[0x33] = '\0';
          FUN_140c05acc();
        }
        if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x30)) {
          FUN_1446dda88();
        }
        if ((iVar2 < 2 && iVar3 < 1) && (0 < *(int *)(param_1 + 0x14))) {
          lVar6 = 0;
          lVar7 = 0;
          do {
            lVar5 = *(longlong *)(param_1 + 0x28);
            *(undefined4 *)(lVar5 + 8 + lVar6) = *(undefined4 *)(param_1 + lVar6 + 0x20);
            *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(param_1 + lVar6 + 0x18);
            lVar7 = lVar7 + 1;
            lVar6 = lVar6 + 0xc;
          } while (lVar7 < *(int *)(param_1 + 0x14));
        }
        param_1[0x14] = '\x06';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
      }
      FUN_144928d62(pcVar1,1,&DAT_14cb7beb0);
      FUN_144928d62(pcVar1,2,&DAT_14cb7bec8);
      FUN_144928d62(pcVar1,3,&DAT_14cb7bee0);
      FUN_144928d62(pcVar1,4,&DAT_14cb7bef8);
      FUN_144928d62(pcVar1,5,&DAT_14cb7bf10);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c25d2a FUN_140c25d2a body=463 status=ok
// SIG undefined FUN_140c25d2a(void)

void FUN_140c25d2a(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined4 *local_a8;
  undefined1 local_98 [16];
  undefined4 local_88;
  char local_84;
  longlong local_80;
  longlong *local_78;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x84) != 0) {
    uVar3 = *(uint *)(param_1 + 0x80);
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140c25db4;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x84) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar7;
      goto LAB_140c25db4;
    }
  }
  uVar6 = 0;
LAB_140c25db4:
  FUN_140630e34(&local_80,uVar6);
  if (local_78 != (longlong *)0x0) {
    iVar5 = (int)local_78[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_78[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(local_78 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = local_78;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_78 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_80 != 0) {
        local_84 = *(char *)(param_4 + 1);
        if (local_84 == '\x01') {
          local_88 = *param_4;
        }
        FUN_14096c63a(param_1 + 0xb0,&local_80);
        FUN_140b126e4(&local_80,local_98);
        local_a8 = &local_88;
        local_b8 = local_98;
        local_b0 = param_3;
        FUN_140c25efa(local_80,param_1 + 0x118,param_2,*(undefined8 *)(param_1 + 0x68));
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c25efa FUN_140c25efa body=7792 status=ok
// SIG undefined FUN_140c25efa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c25efa(longlong param_1,longlong *param_2,char param_3,longlong param_4,
                  longlong *param_5,undefined4 param_6,uint *param_7)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  void *pvVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double *pdVar22;
  char cVar23;
  char cVar24;
  int iVar25;
  undefined4 uVar26;
  longlong lVar27;
  longlong *plVar28;
  undefined8 *puVar29;
  longlong lVar30;
  undefined4 *puVar31;
  longlong *plVar32;
  undefined8 uVar33;
  int iVar34;
  undefined4 uVar35;
  uint uVar36;
  double **ppdVar37;
  undefined4 *puVar38;
  longlong *plVar39;
  longlong *plVar40;
  longlong *plVar41;
  longlong lVar42;
  longlong lVar43;
  int *piVar44;
  undefined1 *puVar45;
  double *pdVar46;
  int *piVar47;
  ulonglong uVar48;
  bool bVar49;
  bool bVar50;
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  double dVar60;
  undefined1 auVar59 [16];
  double dVar61;
  double dVar63;
  undefined1 auVar62 [16];
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  uint unaff_XMM6_Da;
  undefined1 auStack_448 [39];
  char local_421;
  longlong local_420;
  longlong *local_418;
  longlong *local_410;
  double *local_408;
  longlong *local_400;
  longlong *local_3f8;
  double *local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  double local_3d8;
  double dStack_3d0;
  void *local_3c0;
  uint local_3b8;
  undefined4 local_3b4;
  void *local_3b0;
  int local_3a8;
  undefined4 local_3a4;
  void *local_3a0;
  int local_398;
  undefined4 local_394;
  undefined8 local_390;
  undefined4 local_388;
  undefined1 local_380 [4];
  undefined8 local_37c;
  undefined4 local_374;
  double *local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  longlong local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  uint local_2a0 [6];
  longlong local_288;
  double *local_278;
  double dStack_270;
  double local_268 [2];
  undefined1 local_258 [16];
  double dStack_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined1 *puStack_1e0;
  undefined1 local_1d8 [16];
  double dStack_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  double *local_160;
  undefined8 local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double *local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  dVar57 = (double)(ulonglong)unaff_XMM6_Da;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  local_3a0 = (void *)0x0;
  local_398 = (int)param_5[1];
  lVar43 = (longlong)local_398;
  pvVar4 = (void *)*param_5;
  local_421 = param_3;
  local_420 = param_1;
  local_410 = param_2;
  local_3e8 = param_4;
  if (lVar43 == 0) {
    local_394 = 0;
  }
  else {
    FUN_1446dd670(&local_3a0,local_398,0);
    memcpy(local_3a0,pvVar4,lVar43 * 2);
  }
  lVar43 = local_420;
  if ((((((*(int *)(local_420 + 0x74) != 0) &&
         (uVar36 = *(uint *)(local_420 + 0x70), -1 < (int)uVar36)) && ((int)uVar36 < DAT_14c9647dc))
       && ((plVar39 = (longlong *)
                      ((ulonglong)((uVar36 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar36 >> 0x10) * 8)),
           plVar39 != (longlong *)0x0 && ((int)plVar39[2] == *(int *)(local_420 + 0x74))))) &&
      ((*(uint *)(plVar39 + 1) & 0x10200000) == 0)) &&
     (plVar39 = (longlong *)*plVar39, plVar32 = plVar39, plVar39 != (longlong *)0x0)) {
    do {
      if (plVar32[5] != 0) {
        lVar27 = *(longlong *)(plVar32[5] + 0x30);
        if (lVar27 != 0) {
          bVar49 = *(longlong *)(lVar27 + 0x360) != 0;
          goto LAB_140c26077;
        }
        break;
      }
      plVar32 = (longlong *)(**(code **)(*plVar32 + 0x2f0))(plVar32);
    } while (plVar32 != (longlong *)0x0);
    bVar49 = false;
LAB_140c26077:
    lVar27 = (**(code **)(*plVar39 + 0x2b0))(plVar39);
    if (((lVar27 != 0) &&
        (plVar39 = (longlong *)FUN_1401499e8(lVar27), bVar49 && plVar39 != (longlong *)0x0)) &&
       ((longlong)(int)local_410[1] != 0)) {
      plVar32 = (longlong *)*local_410;
      plVar41 = plVar32 + (longlong)(int)local_410[1] * 7;
      plVar40 = (longlong *)(lVar43 + 0x148);
      do {
        cVar23 = FUN_140114448(plVar32);
        if (cVar23 == '\0') {
          local_400 = plVar41;
          FUN_140c258c2(plVar32,&local_2b0);
          if ((char)local_2b0 == '\x01') {
            FUN_1447a97f4(&local_178,local_2a0);
            if (0 < local_178._4_4_) {
              lVar43 = 0;
              uVar48 = 0;
              iVar25 = local_178._4_4_;
              iVar34 = DAT_14c948000;
              do {
                bVar49 = (int)local_178 != 0;
                bVar50 = (int)local_178 != iVar34;
                piVar44 = &DAT_14c948620;
                piVar47 = (int *)&DAT_14c948618;
                if (bVar50 && bVar49) {
                  pdVar46 = &local_170;
                  if (0 < local_158._4_4_) {
                    pdVar46 = local_160;
                  }
                  if (1 < iVar25) {
                    pdVar46 = local_160;
                  }
                  piVar44 = (int *)((longlong)pdVar46 + lVar43 + 8);
                  piVar47 = (int *)((longlong)pdVar46 + lVar43);
                }
                if ((*piVar47 == DAT_14cb7beb0) && (*piVar44 == DAT_14cb7beb8)) {
LAB_140c26304:
                  FUN_1402b5374(&local_178,uVar48 & 0xffffffff,0);
                  iVar25 = local_178._4_4_;
                  iVar34 = DAT_14c948000;
                }
                else {
                  piVar44 = &DAT_14c948620;
                  piVar47 = (int *)&DAT_14c948618;
                  if (bVar50 && bVar49) {
                    pdVar46 = &local_170;
                    if (0 < local_158._4_4_) {
                      pdVar46 = local_160;
                    }
                    if (1 < iVar25) {
                      pdVar46 = local_160;
                    }
                    piVar44 = (int *)((longlong)pdVar46 + lVar43 + 8);
                    piVar47 = (int *)((longlong)pdVar46 + lVar43);
                  }
                  if ((*piVar47 == DAT_14cb7bec8) && (*piVar44 == DAT_14cb7bed0))
                  goto LAB_140c26304;
                  piVar44 = &DAT_14c948620;
                  piVar47 = (int *)&DAT_14c948618;
                  if (bVar50 && bVar49) {
                    pdVar46 = &local_170;
                    if (0 < local_158._4_4_) {
                      pdVar46 = local_160;
                    }
                    if (1 < iVar25) {
                      pdVar46 = local_160;
                    }
                    piVar44 = (int *)((longlong)pdVar46 + lVar43 + 8);
                    piVar47 = (int *)((longlong)pdVar46 + lVar43);
                  }
                  if ((*piVar47 == DAT_14cb7bee0) && (*piVar44 == DAT_14cb7bee8))
                  goto LAB_140c26304;
                  piVar44 = &DAT_14c948620;
                  piVar47 = (int *)&DAT_14c948618;
                  if (bVar50 && bVar49) {
                    pdVar46 = &local_170;
                    if (0 < local_158._4_4_) {
                      pdVar46 = local_160;
                    }
                    if (1 < iVar25) {
                      pdVar46 = local_160;
                    }
                    piVar44 = (int *)((longlong)pdVar46 + lVar43 + 8);
                    piVar47 = (int *)((longlong)pdVar46 + lVar43);
                  }
                  if ((*piVar47 == DAT_14cb7bef8) && (*piVar44 == DAT_14cb7bf00))
                  goto LAB_140c26304;
                  piVar44 = &DAT_14c948620;
                  piVar47 = (int *)&DAT_14c948618;
                  if (bVar50 && bVar49) {
                    pdVar46 = &local_170;
                    if (0 < local_158._4_4_) {
                      pdVar46 = local_160;
                    }
                    if (1 < iVar25) {
                      pdVar46 = local_160;
                    }
                    piVar44 = (int *)((longlong)pdVar46 + lVar43 + 8);
                    piVar47 = (int *)((longlong)pdVar46 + lVar43);
                  }
                  if ((*piVar47 == DAT_14cb7bf10) && (*piVar44 == DAT_14cb7bf18))
                  goto LAB_140c26304;
                }
                uVar48 = uVar48 + 1;
                lVar43 = lVar43 + 0xc;
              } while ((longlong)uVar48 < (longlong)iVar25);
            }
            uVar48 = (ulonglong)local_178 & 0xffffffff;
            if (local_160 != (double *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            uVar48 = (ulonglong)local_2a0[0];
          }
          iVar25 = FUN_1402b3efe(plVar40,uVar48,&local_2b0);
          if (iVar25 == -1) {
            lVar43 = 0;
          }
          else {
            lVar43 = (longlong)iVar25 * 0x48 + *plVar40;
          }
          piVar44 = (int *)(lVar43 + 0x38);
          if (lVar43 == 0) {
            piVar44 = (int *)0x0;
          }
          plVar41 = &DAT_14cb70214;
          plVar28 = &DAT_14cb70214;
          ppdVar37 = (double **)&DAT_14cb70210;
          if (local_421 != '\0') {
            if ((((int)plVar32[2] == 0) ||
                (iVar25 = *(int *)((longlong)plVar32 + 0x14), iVar25 == 0)) ||
               ((int)plVar32[2] == DAT_14c948000)) {
LAB_140c272f0:
              plVar28 = (longlong *)((longlong)&DAT_14c948618 + 4);
              uVar51 = (undefined4)DAT_14c948618;
            }
            else {
              if ((iVar25 < 2) && (*(int *)((longlong)plVar32 + 0x34) < 1)) {
                plVar41 = plVar32 + 3;
              }
              else {
                plVar41 = (longlong *)plVar32[5];
              }
              if ((iVar25 == 1) || (iVar25 < 6)) goto LAB_140c272f0;
              plVar28 = plVar41 + 8;
              uVar51 = *(undefined4 *)((longlong)plVar41 + 0x3c);
            }
            local_278 = (double *)CONCAT44(local_278._4_4_,uVar51);
            plVar41 = (longlong *)local_1f8;
            ppdVar37 = &local_278;
          }
          pdVar46 = (double *)*plVar28;
          local_3f8 = plVar40;
          if ((pdVar46 == DAT_14c948034) && (*(int *)ppdVar37 != DAT_14c948030)) {
            FUN_14011791e(&local_178,*(int *)ppdVar37,(ulonglong)pdVar46 >> 0x20);
            pdVar46 = local_178;
            *plVar41 = (longlong)local_178;
          }
          local_2c8 = 0;
          local_2d8 = 0;
          uStack_2d0 = 0;
          local_2c0 = 0;
          uStack_2b8 = 0;
          local_2e0 = local_2a8;
          local_2e8 = CONCAT44(uStack_2ac,local_2b0);
          local_370 = pdVar46;
          FUN_1447715ec(&local_2d8,local_2a0);
          lVar43 = local_420;
          local_380[0] = 0;
          local_37c = 0;
          local_374 = 0;
          if ((*(int *)(local_420 + 0x74) == 0) ||
             (uVar36 = *(uint *)(local_420 + 0x70), (int)uVar36 < 0)) {
LAB_140c27298:
            plVar41 = (longlong *)0x0;
          }
          else {
            plVar41 = (longlong *)0x0;
            if ((int)uVar36 < DAT_14c9647dc) {
              puVar29 = (undefined8 *)
                        ((ulonglong)((uVar36 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar36 >> 0x10) * 8));
              if (((puVar29 == (undefined8 *)0x0) ||
                  (*(int *)(puVar29 + 2) != *(int *)(local_420 + 0x74))) ||
                 ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)) goto LAB_140c27298;
              plVar41 = (longlong *)*puVar29;
            }
          }
          if ((piVar44 == (int *)0x0) || (*piVar44 < 0)) {
            bVar49 = false;
          }
          else {
            bVar49 = *piVar44 < *(int *)(local_420 + 0x80);
          }
          for (; plVar41 != (longlong *)0x0;
              plVar41 = (longlong *)(**(code **)(*plVar41 + 0x2f0))(plVar41)) {
            if (plVar41[5] != 0) {
              lVar27 = *(longlong *)(plVar41[5] + 0x30);
              if ((lVar27 != 0) &&
                 (local_3f0 = *(double **)(lVar27 + 0x360), bVar49 && local_3f0 != (double *)0x0)) {
                lVar43 = *(longlong *)(lVar43 + 0x78);
                lVar27 = (longlong)*piVar44 * 0x280;
                lVar42 = (longlong)*(int *)(lVar43 + 0x268 + lVar27);
                if (lVar42 != 0) {
                  local_408 = *(double **)(lVar43 + 0x260 + lVar27);
                  local_418 = (longlong *)0x0;
                  do {
                    local_178 = *(double **)((longlong)local_408 + (longlong)local_418);
                    cVar23 = FUN_144729dda(&local_178);
                    if (cVar23 != '\0') {
                      uVar33 = FUN_14479d2ce(&local_178);
                      FUN_140aeefbc(uVar33,0,1);
                    }
                    local_418 = (longlong *)((longlong)local_418 + 8);
                  } while ((longlong *)(lVar42 * 8) != local_418);
                }
                lVar42 = lVar43 + lVar27;
                local_418 = (longlong *)(lVar43 + lVar27 + 0x260);
                *(undefined4 *)(lVar42 + 0x268) = 0;
                if (*(int *)(lVar42 + 0x26c) != 0) {
                  FUN_1487b6ffe(local_418,0);
                }
                lVar43 = local_420;
                if (local_370 != (double *)0x0) {
                  FUN_1446dcdd4(&local_178,&local_370);
                  if (DAT_14cb704c8 == 0) {
                    lVar43 = local_420;
                    if (local_160 != (double *)0x0) {
                      FUN_1400020a8();
                      lVar43 = local_420;
                    }
                  }
                  else {
                    lVar27 = FUN_144815d88(DAT_14cb704c8,&local_178);
                    if (local_160 != (double *)0x0) {
                      FUN_1400020a8();
                    }
                    if ((lVar27 != 0) && ((longlong)*(int *)(lVar27 + 0x20) != 0)) {
                      pdVar46 = (double *)(*(longlong *)(lVar27 + 0x18) + 0x98);
                      local_3e0 = (longlong)*(int *)(lVar27 + 0x20) * 0xb0;
                      local_408 = pdVar46;
                      do {
                        local_318 = ZEXT816(0);
                        local_328 = ZEXT816(0);
                        auVar56 = *(undefined1 (*) [16])(lVar42 + 0x230);
                        dVar5 = auVar56._0_8_;
                        dVar9 = auVar56._8_8_;
                        auVar2 = *(undefined1 (*) [16])(lVar42 + 0x240);
                        dVar6 = auVar2._0_8_;
                        auVar53 = *(undefined1 (*) [16])(local_408 + -9);
                        dVar7 = auVar53._0_8_;
                        dVar10 = auVar53._8_8_;
                        auVar3 = *(undefined1 (*) [16])(local_408 + -7);
                        dVar8 = auVar3._0_8_;
                        auVar56 = minpd(auVar53,auVar56);
                        auVar58 = minpd(auVar3,auVar2);
                        auVar53._8_8_ = -(ulonglong)(auVar56._8_8_ < 0.0);
                        auVar53._0_8_ = -(ulonglong)(auVar56._0_8_ < 0.0);
                        iVar25 = movmskpd((int)local_408,auVar53);
                        auVar56._8_8_ = -(ulonglong)(auVar58._8_8_ < 0.0);
                        auVar56._0_8_ = -(ulonglong)(auVar58._0_8_ < 0.0);
                        uVar36 = movmskpd((int)pdVar46,auVar56);
                        if ((uVar36 & 0x3fffffff) == 0 && iVar25 == 0) {
                          dVar16 = local_408[-0x11];
                          dVar17 = local_408[-0x10];
                          dVar18 = local_408[-0xf];
                          dVar19 = local_408[-0xe];
                          dVar20 = *(double *)(lVar42 + 0x1f0);
                          dVar21 = *(double *)(lVar42 + 0x1f8);
                          local_3d8 = *(double *)(lVar42 + 0x200);
                          dStack_3d0 = *(double *)(lVar42 + 0x208);
                          dVar54 = *(double *)(lVar42 + 0x208);
                          dVar13 = *(double *)(lVar42 + 0x208);
                          dVar14 = *(double *)(lVar42 + 0x1f0);
                          dVar55 = *(double *)(lVar42 + 0x1f0);
                          dVar67 = *(double *)(lVar42 + 0x1f8);
                          dVar63 = *(double *)(lVar42 + 0x1f8);
                          dVar60 = *(double *)(lVar42 + 0x200);
                          dVar65 = *(double *)(lVar42 + 0x200);
                          local_338._0_8_ =
                               dVar19 * dVar60 * 1.0 +
                               ((dVar14 * dVar17 * 1.0 + dVar18 * dVar54) - dVar16 * dVar67);
                          local_338._8_8_ =
                               dVar18 * dVar65 * -1.0 +
                               ((dVar55 * dVar16 * -1.0 + dVar19 * dVar13) - dVar17 * dVar63);
                          dVar57 = local_408[-0xd] * dVar5;
                          dVar15 = local_408[-0xc] * dVar9;
                          dVar11 = local_408[-0xb] * dVar6;
                          dVar12 = local_408[-10] * auVar2._8_8_;
                          dVar66 = dVar15 * dVar20 - dVar21 * dVar57;
                          dVar68 = dVar11 * dVar21 - local_3d8 * dVar15;
                          dVar61 = dVar57 * local_3d8 - dVar20 * dVar11;
                          dVar64 = dVar12 * dStack_3d0 - dStack_3d0 * dVar12;
                          dVar68 = dVar68 + dVar68;
                          dVar61 = dVar61 + dVar61;
                          dVar66 = dVar66 + dVar66;
                          dVar64 = dVar64 + dVar64;
                          dVar57 = (dVar66 * dVar21 - local_3d8 * dVar61) + dVar54 * dVar68 + dVar57
                                   + *(double *)(lVar42 + 0x210);
                          dVar15 = (dVar68 * local_3d8 - dVar66 * dVar20) + dVar13 * dVar61 + dVar15
                                   + *(double *)(lVar42 + 0x218);
                          dVar66 = (dVar61 * dVar20 - dVar21 * dVar68) + dVar54 * dVar66 + dVar11 +
                                   *(double *)(lVar42 + 0x220);
                          dVar68 = (dVar64 * dStack_3d0 - dVar64 * dStack_3d0) +
                                   dVar13 * dVar64 + dVar12 + *(double *)(lVar42 + 0x228);
                          local_348._8_8_ =
                               dVar16 * dVar65 * 1.0 +
                               dVar19 * dVar63 + dVar18 * dVar55 * -1.0 + dVar17 * dVar13;
                          local_348._0_8_ =
                               dVar17 * dVar60 * -1.0 +
                               dVar18 * dVar67 + dVar19 * dVar14 * 1.0 + dVar16 * dVar54;
                        }
                        else {
                          dVar55 = *(double *)(lVar42 + 0x1f0);
                          dVar63 = *(double *)(lVar42 + 0x1f8);
                          dVar67 = *(double *)(lVar42 + 0x200);
                          dVar60 = dVar63 + dVar63;
                          dVar65 = dVar67 + dVar67;
                          dVar54 = dVar55 * (dVar55 + dVar55);
                          local_1a8 = (1.0 - (dVar54 + dVar63 * dVar60)) * dVar6;
                          dVar14 = *(double *)(lVar42 + 0x1f0) * dVar65;
                          dVar57 = *(double *)(lVar42 + 0x208);
                          dVar66 = dVar65 * dVar57;
                          dVar68 = (dVar55 + dVar55) * *(double *)(lVar42 + 0x208);
                          dVar57 = dVar60 * dVar57;
                          local_1b8 = (dVar57 + dVar14) * dVar6;
                          dVar54 = (1.0 - (dVar67 * dVar65 + dVar54)) * dVar9;
                          dVar13 = (dVar60 * dVar55 + dVar66) * dVar5;
                          dStack_1c8 = (dVar65 * dVar63 + dVar68) * dVar9;
                          dStack_1b0 = (dVar65 * dVar63 - dVar68) * dVar6;
                          local_1e8 = (dVar14 - dVar57) * dVar5;
                          local_1f8._8_4_ = SUB84(dVar13,0);
                          local_1f8._0_8_ = (1.0 - (dVar67 * dVar65 + dVar63 * dVar60)) * dVar5;
                          local_1f8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                          puStack_1e0 = (undefined1 *)0x0;
                          local_1d8._8_4_ = SUB84(dVar54,0);
                          local_1d8._0_8_ = (dVar60 * dVar55 - dVar66) * dVar9;
                          local_1d8._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
                          uStack_1c0 = 0;
                          uStack_1a0 = 0;
                          local_198 = *(undefined8 *)(lVar42 + 0x210);
                          uStack_190 = *(undefined8 *)(lVar42 + 0x218);
                          local_188 = *(undefined8 *)(lVar42 + 0x220);
                          uStack_180 = 0x3ff0000000000000;
                          dVar13 = local_408[-0x11];
                          dVar14 = local_408[-0x10];
                          dVar54 = local_408[-0xf];
                          dVar63 = dVar14 + dVar14;
                          dVar67 = dVar54 + dVar54;
                          dVar55 = dVar13 * (dVar13 + dVar13);
                          local_228 = (1.0 - (dVar55 + dVar14 * dVar63)) * dVar8;
                          dVar57 = local_408[-0xe];
                          dVar60 = dVar67 * dVar57;
                          dVar65 = (dVar13 + dVar13) * local_408[-0xe];
                          dVar57 = dVar63 * dVar57;
                          local_238 = (dVar57 + local_408[-0x11] * dVar67) * dVar8;
                          dStack_230 = (dVar67 * dVar14 - dVar65) * dVar8;
                          local_278 = (double *)
                                      ((1.0 - (dVar54 * dVar67 + dVar14 * dVar63)) * dVar7);
                          dVar54 = (1.0 - (dVar54 * dVar67 + dVar55)) * dVar10;
                          dStack_270 = (dVar63 * dVar13 + dVar60) * dVar7;
                          dStack_248 = (dVar67 * dVar14 + dVar65) * dVar10;
                          local_268[0] = (local_408[-0x11] * dVar67 - dVar57) * dVar7;
                          local_268[1] = 0.0;
                          local_258._8_4_ = SUB84(dVar54,0);
                          local_258._0_8_ = (dVar63 * dVar13 - dVar60) * dVar10;
                          local_258._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
                          uStack_240 = 0;
                          uStack_220 = 0;
                          local_218 = local_408[-0xd];
                          dStack_210 = local_408[-0xc];
                          local_208 = local_408[-0xb];
                          uStack_200 = 0x3ff0000000000000;
                          FUN_1447fea8d(&local_178,&local_278,local_1f8);
                          FUN_144a1c686(&local_178,0x3e45798ee0000000);
                          auVar56 = _DAT_149934d80;
                          auVar58._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
                          auVar58._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
                          auVar53 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar58);
                          uVar48 = -(ulonglong)(0.0 <= dVar6 * dVar8);
                          dVar57 = (double)(~uVar48 & 0xbff0000000000000 |
                                           uVar48 & 0x3ff0000000000000);
                          dVar54 = auVar53._0_8_;
                          local_168 = local_168 * dVar54;
                          local_170 = local_170 * dVar54;
                          local_178 = (double *)((double)local_178 * dVar54);
                          dVar54 = auVar53._8_8_;
                          local_148 = local_148 * dVar54;
                          local_150 = local_150 * dVar54;
                          local_158 = dVar54 * local_158;
                          local_128 = (double *)((double)local_128 * dVar57);
                          local_130 = local_130 * dVar57;
                          local_138 = dVar57 * local_138;
                          FUN_14481fd10(&local_368,&local_178);
                          dVar57 = local_358 * local_358 + local_368 * local_368;
                          dVar54 = dStack_350 * dStack_350 + dStack_360 * dStack_360;
                          auVar59._0_8_ = dVar57 + dVar54;
                          auVar59._8_8_ = dVar57 + dVar54;
                          auVar52._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_);
                          auVar52._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_);
                          auVar53 = sqrtpd(auVar59,auVar59);
                          auVar56 = divpd(auVar56,auVar53);
                          auVar62._0_8_ = auVar56._0_8_ * local_358;
                          auVar62._8_8_ = auVar56._8_8_ * dStack_350;
                          local_348._0_8_ =
                               (ulonglong)(local_368 * auVar56._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_);
                          local_348._8_8_ =
                               (ulonglong)(dStack_360 * auVar56._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_);
                          local_338 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar52);
                          dVar68 = 0.0;
                          dVar57 = local_118;
                          dVar15 = dStack_110;
                          dVar66 = local_108;
                        }
                        dVar54 = auVar2._8_8_ * auVar3._8_8_;
                        local_328._8_4_ = SUB84(dVar15,0);
                        local_328._0_8_ = dVar57;
                        local_328._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                        local_318._8_4_ = SUB84(dVar68,0);
                        local_318._0_8_ = dVar66;
                        local_318._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
                        local_308._8_4_ = SUB84(dVar9 * dVar10,0);
                        local_308._0_8_ = dVar5 * dVar7;
                        local_308._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
                        local_2f8._8_4_ = SUB84(dVar54,0);
                        local_2f8._0_8_ = dVar6 * dVar8;
                        local_2f8._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
                        FUN_1411371f6(&local_178);
                        uVar33 = FUN_145a7f8c2();
                        pdVar46 = local_3f0;
                        lVar43 = FUN_141037e38(local_3f0,uVar33,local_348,&local_178);
                        if (local_138 != 0.0) {
                          pdVar46 = local_128;
                          if (local_128 == (double *)0x0) {
                            pdVar46 = &local_118;
                          }
                          (**(code **)((longlong)*pdVar46 + 0x10))();
                        }
                        pdVar22 = local_408;
                        if (lVar43 != 0) {
                          *(double *)(lVar43 + 0x390) = local_408[-5];
                          dVar5 = local_408[-3];
                          *(double *)(lVar43 + 0x398) = local_408[-4];
                          *(double *)(lVar43 + 0x3a0) = dVar5;
                          FUN_144a787a6(lVar43 + 0x3a8,local_408 + -2);
                          FUN_14065c7a4(lVar43 + 0x3b8,pdVar22);
                          FUN_146121750(lVar43);
                          local_178 = (double *)0x0;
                          FUN_14485c47a(&local_178,lVar43);
                          iVar25 = *(int *)(lVar42 + 0x268);
                          *(uint *)(lVar42 + 0x268) = iVar25 + 1U;
                          if (*(uint *)(lVar42 + 0x26c) < iVar25 + 1U) {
                            FUN_1487b705e(local_418,iVar25);
                          }
                          *(double **)(*local_418 + (longlong)iVar25 * 8) = local_178;
                          pdVar46 = local_178;
                        }
                        local_408 = local_408 + 0x16;
                        local_3e0 = local_3e0 + -0xb0;
                        lVar43 = local_420;
                      } while (local_3e0 != 0);
                    }
                  }
                }
              }
              break;
            }
          }
          local_388 = DAT_14cb70c28;
          local_390 = DAT_14cb70c20;
          FUN_144928d62(&local_2d8,5,&local_390);
          FUN_144976b9c(local_380,local_370);
          FUN_1446dcdd4(&local_178,&local_370);
          if (DAT_14cb704c8 == 0) {
            plVar41 = local_400;
            if (local_160 != (double *)0x0) {
              FUN_1400020a8();
              plVar41 = local_400;
            }
          }
          else {
            lVar27 = FUN_144815d88(DAT_14cb704c8,&local_178);
            plVar41 = local_400;
            if (local_160 != (double *)0x0) {
              FUN_1400020a8();
            }
            if (lVar27 != 0) {
              FUN_14090092e(lVar43,&local_2b0,lVar27);
            }
          }
          (**(code **)(*plVar39 + 0xb0))(plVar39,&local_2e8,local_380,0);
          plVar40 = local_3f8;
          iVar25 = DAT_14c948620;
          if ((((int)plVar32[2] == 0) || (iVar34 = *(int *)((longlong)plVar32 + 0x14), iVar34 == 0))
             || ((int)plVar32[2] == DAT_14c948000)) {
            local_178 = (double *)CONCAT44(DAT_14c948618._4_4_,(undefined4)DAT_14c948618);
          }
          else {
            if ((iVar34 < 2) && (*(int *)((longlong)plVar32 + 0x34) < 1)) {
              plVar28 = plVar32 + 3;
            }
            else {
              plVar28 = (longlong *)plVar32[5];
            }
            if ((iVar34 == 1) || (iVar34 < 5)) {
              local_178 = (double *)CONCAT44(DAT_14c948618._4_4_,(undefined4)DAT_14c948618);
            }
            else {
              local_178 = (double *)plVar28[6];
              iVar25 = (int)plVar28[7];
            }
          }
          local_170 = (double)CONCAT44(local_170._4_4_,iVar25);
          (**(code **)(*plVar39 + 0xd0))(plVar39,&local_178);
          if (local_2c0 != 0) {
            FUN_1400020a8();
          }
          if (local_288 != 0) {
            FUN_1400020a8();
          }
        }
        unaff_XMM6_Da = SUB84(dVar57,0);
        plVar32 = plVar32 + 7;
      } while (plVar32 != plVar41);
    }
  }
  if (local_3a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_3b0 = (void *)0x0;
  local_3a8 = (int)param_5[1];
  lVar43 = (longlong)local_3a8;
  pvVar4 = (void *)*param_5;
  if (lVar43 == 0) {
    local_3a4 = 0;
  }
  else {
    FUN_1446dd670(&local_3b0,local_3a8,0);
    memcpy(local_3b0,pvVar4,lVar43 * 2);
  }
  if ((((((*(int *)(local_420 + 0x74) != 0) &&
         (uVar36 = *(uint *)(local_420 + 0x70), -1 < (int)uVar36)) && ((int)uVar36 < DAT_14c9647dc))
       && ((plVar39 = (longlong *)
                      ((ulonglong)((uVar36 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar36 >> 0x10) * 8)),
           plVar39 != (longlong *)0x0 && ((int)plVar39[2] == *(int *)(local_420 + 0x74))))) &&
      (((*(uint *)(plVar39 + 1) & 0x10200000) == 0 &&
       (((longlong *)*plVar39 != (longlong *)0x0 &&
        (lVar43 = (**(code **)(*(longlong *)*plVar39 + 0x2b0))(), lVar43 != 0)))))) &&
     ((plVar39 = (longlong *)FUN_1401499e8(lVar43), cVar23 = local_421, plVar39 != (longlong *)0x0
      && ((longlong)(int)local_410[1] != 0)))) {
    lVar43 = *local_410;
    lVar27 = (longlong)(int)local_410[1] * 0x38;
    unaff_XMM6_Da = 0;
    do {
      cVar24 = FUN_140114448(lVar43);
      if (cVar24 != '\0') {
        FUN_140c258c2(lVar43,&local_178);
        local_1d8._0_8_ = local_1d8._4_8_ << 0x20;
        local_1e8 = 0.0;
        puStack_1e0 = (undefined1 *)0x0;
        local_1d8._8_8_ = 0;
        dStack_1c8 = 0.0;
        local_1f8._8_4_ = local_170._0_4_;
        local_1f8._0_8_ = local_178;
        FUN_1447715ec(&local_1e8,&local_168);
        local_2e8 = DAT_14cb7bde0;
        local_2e0 = DAT_14cb7bde8;
        FUN_144928d62(&local_1e8,5,&local_2e8);
        local_348[0] = 1;
        puVar29 = &DAT_14cb7c580;
        if (local_421 != '\0') {
          puVar29 = &DAT_14cb7c588;
        }
        local_348._4_8_ = *puVar29;
        local_348[0xc] = cVar23;
        local_348._13_3_ = 0;
        (**(code **)(*plVar39 + 0xb0))(plVar39,local_1f8,local_348,0);
        local_258._0_8_ = local_258._4_8_ << 0x20;
        local_268[0] = 0.0;
        local_268[1] = 0.0;
        local_258._8_8_ = 0;
        dStack_248 = 0.0;
        dStack_270 = (double)CONCAT44(dStack_270._4_4_,local_170._0_4_);
        local_278 = local_178;
        FUN_1447715ec(local_268,&local_168);
        local_2b0 = (undefined4)DAT_14cb70188;
        uStack_2ac = (undefined4)((ulonglong)DAT_14cb70188 >> 0x20);
        FUN_1401533ba(&local_368,&local_2b0,1);
        FUN_144928d62(local_268,5,&local_368);
        local_2b0 = CONCAT31(local_2b0._1_3_,2);
        local_2a4 = param_6;
        uStack_2ac = 0;
        local_2a8 = 0;
        (**(code **)(*plVar39 + 0xb0))(plVar39,&local_278,&local_2b0);
        if (local_258._8_8_ != 0) {
          FUN_1400020a8();
        }
        if (local_1d8._8_8_ != 0) {
          FUN_1400020a8();
        }
        if (local_150 != 0.0) {
          FUN_1400020a8();
        }
      }
      lVar43 = lVar43 + 0x38;
      lVar27 = lVar27 + -0x38;
    } while (lVar27 != 0);
  }
  if (local_3b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_418 = (longlong *)CONCAT71(local_418._1_7_,(char)param_7[1]);
  if ((char)param_7[1] == '\x01') {
    unaff_XMM6_Da = *param_7;
  }
  local_3c0 = (void *)0x0;
  local_3b8 = *(uint *)(param_5 + 1);
  lVar43 = (longlong)(int)local_3b8;
  pvVar4 = (void *)*param_5;
  if (lVar43 == 0) {
    local_3b4 = 0;
  }
  else {
    FUN_1446dd670(&local_3c0,local_3b8,0);
    memcpy(local_3c0,pvVar4,lVar43 * 2);
  }
  if (local_3e8 != 0) {
    piVar44 = &DAT_14c9485f0;
    if (*(int **)(local_3e8 + 8) != (int *)0x0) {
      piVar44 = *(int **)(local_3e8 + 8);
    }
    if (((*piVar44 != 0) && (iVar25 = piVar44[1], iVar25 != 0)) && (*piVar44 != DAT_14c948000)) {
      if ((iVar25 < 2) && (piVar44[9] < 1)) {
        piVar44 = piVar44 + 2;
      }
      else {
        piVar44 = *(int **)(piVar44 + 6);
      }
      if (0 < iVar25) {
        local_278 = *(double **)piVar44;
        iVar25 = piVar44[2];
        goto LAB_140c26b43;
      }
    }
  }
  local_278 = (double *)CONCAT44(DAT_14c948618._4_4_,(undefined4)DAT_14c948618);
  iVar25 = DAT_14c948620;
LAB_140c26b43:
  dStack_270 = (double)CONCAT44(dStack_270._4_4_,iVar25);
  if ((((*(int *)(local_420 + 0x74) == 0) || (uVar36 = *(uint *)(local_420 + 0x70), (int)uVar36 < 0)
       ) || ((DAT_14c9647dc <= (int)uVar36 ||
             (((plVar39 = (longlong *)
                          ((ulonglong)((uVar36 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar36 >> 0x10) * 8)),
               plVar39 == (longlong *)0x0 || ((int)plVar39[2] != *(int *)(local_420 + 0x74))) ||
              ((*(uint *)(plVar39 + 1) & 0x10200000) != 0)))))) ||
     ((local_400 = (longlong *)*plVar39, local_400 == (longlong *)0x0 ||
      ((longlong)(int)local_410[1] == 0)))) {
LAB_140c27175:
    if (local_3c0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    if ((char)param_7[1] == '\x01') {
      *(undefined1 *)(param_7 + 1) = 0;
    }
    if ((local_f0 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar39 = (longlong *)*local_410;
  local_3f8 = plVar39 + (longlong)(int)local_410[1] * 7;
  local_410 = (longlong *)(local_420 + 0x148);
  puVar1 = local_1f8 + 8;
  lVar43 = local_3e8;
LAB_140c26c19:
  FUN_140c258c2(plVar39,&local_178);
  if ((char)local_178 == '\x01') {
    FUN_1447a97f4(local_1f8,&local_168);
    if (0 < (int)local_1f8._4_4_) {
      lVar27 = 0;
      uVar48 = 0;
      iVar25 = local_1f8._4_4_;
      iVar34 = DAT_14c948000;
      do {
        bVar49 = local_1f8._0_4_ != 0;
        bVar50 = local_1f8._0_4_ != iVar34;
        piVar44 = (int *)&DAT_14c948618;
        piVar47 = &DAT_14c948620;
        if (bVar50 && bVar49) {
          puVar45 = puVar1;
          if (0 < (int)local_1d8._4_4_) {
            puVar45 = puStack_1e0;
          }
          if (1 < iVar25) {
            puVar45 = puStack_1e0;
          }
          piVar47 = (int *)(puVar45 + lVar27 + 8);
          piVar44 = (int *)(puVar45 + lVar27);
        }
        if ((*piVar44 == DAT_14cb7beb0) && (*piVar47 == DAT_14cb7beb8)) {
LAB_140c26e05:
          FUN_1402b5374(local_1f8,uVar48 & 0xffffffff,0);
          iVar25 = local_1f8._4_4_;
          iVar34 = DAT_14c948000;
        }
        else {
          piVar44 = &DAT_14c948620;
          piVar47 = (int *)&DAT_14c948618;
          if (bVar50 && bVar49) {
            puVar45 = puVar1;
            if (0 < (int)local_1d8._4_4_) {
              puVar45 = puStack_1e0;
            }
            if (1 < iVar25) {
              puVar45 = puStack_1e0;
            }
            piVar44 = (int *)(puVar45 + lVar27 + 8);
            piVar47 = (int *)(puVar45 + lVar27);
          }
          if ((*piVar47 == DAT_14cb7bec8) && (*piVar44 == DAT_14cb7bed0)) goto LAB_140c26e05;
          piVar44 = &DAT_14c948620;
          piVar47 = (int *)&DAT_14c948618;
          if (bVar50 && bVar49) {
            puVar45 = puVar1;
            if (0 < (int)local_1d8._4_4_) {
              puVar45 = puStack_1e0;
            }
            if (1 < iVar25) {
              puVar45 = puStack_1e0;
            }
            piVar44 = (int *)(puVar45 + lVar27 + 8);
            piVar47 = (int *)(puVar45 + lVar27);
          }
          if ((*piVar47 == DAT_14cb7bee0) && (*piVar44 == DAT_14cb7bee8)) goto LAB_140c26e05;
          piVar44 = &DAT_14c948620;
          piVar47 = (int *)&DAT_14c948618;
          if (bVar50 && bVar49) {
            puVar45 = puVar1;
            if (0 < (int)local_1d8._4_4_) {
              puVar45 = puStack_1e0;
            }
            if (1 < iVar25) {
              puVar45 = puStack_1e0;
            }
            piVar44 = (int *)(puVar45 + lVar27 + 8);
            piVar47 = (int *)(puVar45 + lVar27);
          }
          if ((*piVar47 == DAT_14cb7bef8) && (*piVar44 == DAT_14cb7bf00)) goto LAB_140c26e05;
          piVar44 = &DAT_14c948620;
          piVar47 = (int *)&DAT_14c948618;
          if (bVar50 && bVar49) {
            puVar45 = puVar1;
            if (0 < (int)local_1d8._4_4_) {
              puVar45 = puStack_1e0;
            }
            if (1 < iVar25) {
              puVar45 = puStack_1e0;
            }
            piVar44 = (int *)(puVar45 + lVar27 + 8);
            piVar47 = (int *)(puVar45 + lVar27);
          }
          if ((*piVar47 == DAT_14cb7bf10) && (*piVar44 == DAT_14cb7bf18)) goto LAB_140c26e05;
        }
        uVar48 = uVar48 + 1;
        lVar27 = lVar27 + 0xc;
      } while ((longlong)uVar48 < (longlong)iVar25);
    }
    uVar51 = local_1f8._0_4_;
    if (puStack_1e0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar51 = local_168._0_4_;
  }
  iVar25 = FUN_1402b3efe(local_410,uVar51,&local_178);
  pvVar4 = local_3c0;
  if (iVar25 != -1) {
    if ((*local_410 + (longlong)iVar25 * 0x48 == 0) ||
       (pdVar46 = (double *)(*local_410 + (longlong)iVar25 * 0x48 + 0x38), pdVar46 == (double *)0x0)
       ) goto LAB_140c2714d;
    iVar25 = *(int *)pdVar46;
    if (((longlong)iVar25 < 0) || (*(int *)(local_420 + 0x80) <= iVar25)) goto LAB_140c2714d;
    lVar42 = *(longlong *)(local_420 + 0x78);
    lVar30 = (longlong)iVar25 * 0x280;
    lVar27 = lVar42 + lVar30;
    *(char *)(lVar42 + 0x91 + lVar30) = local_421;
    local_3f0 = pdVar46;
    if (local_421 == '\0') {
      *(undefined8 *)(lVar27 + 0xb8) = 0;
      *(undefined4 *)(lVar27 + 0xc0) = 0;
      FUN_1400b22c2(local_1f8,&DAT_149e02088);
    }
    else {
      *(undefined4 *)(lVar30 + lVar42 + 0xc0) = dStack_270._0_4_;
      *(double **)(lVar30 + lVar42 + 0xb8) = local_278;
      lVar43 = (longlong)(int)local_3b8;
      auVar2._4_4_ = local_1f8._12_4_;
      auVar2._0_4_ = local_3b8;
      auVar2._8_8_ = 0;
      local_1f8 = auVar2 << 0x40;
      if (lVar43 == 0) {
        local_1f8 = ZEXT416(local_3b8) << 0x40;
        lVar43 = local_3e8;
      }
      else {
        FUN_1446dd670(local_1f8,local_3b8,0);
        memcpy((void *)local_1f8._0_8_,pvVar4,lVar43 * 2);
        lVar43 = local_3e8;
      }
    }
    if ((undefined1 *)(lVar27 + 200) != local_1f8) {
      if (*(longlong *)(lVar27 + 200) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(lVar27 + 200) = local_1f8._0_8_;
      *(undefined4 *)(lVar27 + 0xd0) = local_1f8._8_4_;
      *(undefined4 *)(lVar27 + 0xd4) = local_1f8._12_4_;
      local_1f8 = ZEXT816(0);
    }
    plVar32 = local_400;
    if (local_1f8._0_8_ != 0) {
      FUN_1400020a8();
      plVar32 = local_400;
    }
    do {
      if (plVar32[5] != 0) {
        lVar42 = *(longlong *)(plVar32[5] + 0x30);
        dVar57 = 0.0;
        if ((lVar42 == 0) || (plVar32 = local_400, *(longlong *)(lVar42 + 0x360) == 0))
        goto LAB_140c27049;
        goto LAB_140c27020;
      }
      plVar32 = (longlong *)(**(code **)(*plVar32 + 0x2f0))(plVar32);
    } while (plVar32 != (longlong *)0x0);
    dVar57 = 0.0;
    goto LAB_140c27049;
  }
  goto LAB_140c2714d;
  while (plVar32 = (longlong *)(**(code **)(*plVar32 + 0x2f0))(plVar32), plVar32 != (longlong *)0x0)
  {
LAB_140c27020:
    if (plVar32[5] != 0) {
      lVar42 = *(longlong *)(plVar32[5] + 0x30);
      if (lVar42 != 0) {
        lVar42 = *(longlong *)(lVar42 + 0x360);
        goto LAB_140c27041;
      }
      break;
    }
  }
  lVar42 = 0;
LAB_140c27041:
  dVar57 = *(double *)(lVar42 + 0x6d0);
LAB_140c27049:
  plVar32 = local_400;
  *(float *)(lVar27 + 0xac) = (float)dVar57;
  if (lVar43 == 0) {
    *(undefined4 *)(lVar27 + 0xb0) = 0;
    uVar51 = 0;
  }
  else {
    iVar25 = FUN_140c24ea6(lVar43,local_400);
    *(float *)(lVar27 + 0xb0) = (float)iVar25;
    uVar51 = FUN_140c255e6(lVar43,plVar32);
  }
  *(undefined4 *)(lVar27 + 0xb4) = uVar51;
  local_348[4] = (char)local_418;
  if ((char)local_418 != '\0') {
    local_348._0_4_ = unaff_XMM6_Da;
  }
  FUN_141130d84(local_420,*(int *)local_3f0,1,local_348);
  uVar26 = 0;
  uVar35 = 0;
  uVar51 = 0;
  if (local_421 != '\0') {
    puVar31 = &DAT_14c948620;
    puVar38 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
    puVar29 = &DAT_14c948618;
    if ((int)plVar39[2] != 0) {
      puVar31 = &DAT_14c948620;
      puVar38 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
      puVar29 = &DAT_14c948618;
      if (*(int *)((longlong)plVar39 + 0x14) != 0) {
        puVar31 = &DAT_14c948620;
        puVar38 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
        puVar29 = &DAT_14c948618;
        if ((int)plVar39[2] != DAT_14c948000) {
          puVar31 = &DAT_14c948620;
          puVar38 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
          puVar29 = &DAT_14c948618;
          if (5 < *(int *)((longlong)plVar39 + 0x14)) {
            lVar42 = plVar39[5];
            puVar29 = (undefined8 *)(lVar42 + 0x3c);
            puVar38 = (undefined4 *)(lVar42 + 0x40);
            puVar31 = (undefined4 *)(lVar42 + 0x44);
          }
        }
      }
    }
    uVar51 = *(undefined4 *)puVar29;
    uVar35 = *puVar38;
    uVar26 = *puVar31;
  }
  *(undefined4 *)(lVar27 + 0xd8) = uVar51;
  *(undefined4 *)(lVar27 + 0xdc) = uVar35;
  *(undefined4 *)(lVar27 + 0xe0) = uVar26;
LAB_140c2714d:
  if (local_150 != 0.0) {
    FUN_1400020a8();
  }
  plVar39 = plVar39 + 7;
  if (plVar39 == local_3f8) goto LAB_140c27175;
  goto LAB_140c26c19;
}



// FUNCTION 140c27d6c FUN_140c27d6c body=8554 status=ok
// SIG undefined FUN_140c27d6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c27d6c(undefined8 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong **pplVar17;
  bool bVar18;
  byte bVar19;
  int iVar20;
  byte bVar21;
  longlong lVar22;
  longlong *plVar23;
  uint uVar24;
  longlong **pplVar25;
  undefined8 *puVar26;
  int iVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  bool bVar30;
  uint uVar31;
  longlong lVar32;
  longlong *plVar33;
  longlong lVar34;
  ulonglong uVar35;
  bool bVar36;
  int iVar37;
  uint uVar38;
  longlong lVar39;
  longlong *in_R10;
  longlong *plVar40;
  byte bVar41;
  byte bVar42;
  int iVar43;
  byte bVar44;
  uint uVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  float fVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auStack_548 [40];
  longlong *local_520;
  undefined8 local_518;
  longlong **local_510;
  undefined8 local_508;
  longlong *local_500;
  undefined8 local_4f8;
  int local_4ec;
  longlong *local_4e8;
  longlong *local_4e0;
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  longlong *local_418;
  longlong *local_410;
  longlong *local_408;
  ulonglong uStack_400;
  longlong *local_3f8 [2];
  undefined4 local_3e8 [190];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_548;
  local_408 = (longlong *)0x0;
  uStack_400 = 0;
  uVar24 = *(uint *)(param_1 + 1);
  if ((longlong)(int)uVar24 != 0) {
    uStack_400 = (ulonglong)uVar24;
    FUN_140c29ed8(&local_408,0);
    memcpy(local_408,(void *)*param_1,(longlong)(int)uVar24 << 3);
    plVar29 = local_408;
    iVar20 = (int)uStack_400;
    lVar22 = (longlong)(int)uStack_400;
    if (1 < lVar22) {
      memset(local_3e8,0,0x2f0);
      local_3f8[0] = plVar29;
      local_3f8[1] = plVar29 + lVar22 + -1;
      fVar51 = logf((float)iVar20);
      local_3e8[0] = (int)(longlong)(fVar51 + fVar51);
      pplVar25 = local_3f8;
LAB_140c283f1:
      local_510 = pplVar25;
      plVar23 = *local_510;
      iVar20 = *(int *)(local_510 + 2);
      iVar27 = (int)((ulonglong)((longlong)local_510[1] - (longlong)plVar23) >> 3);
      uVar24 = iVar27 + 1;
      pplVar17 = local_510;
      plVar29 = local_510[1];
      if (iVar20 != 0) {
LAB_140c28416:
        pplVar17 = local_510;
        if (8 < (int)uVar24) {
          lVar22 = plVar23[uVar24 >> 1];
          plVar23[uVar24 >> 1] = *plVar23;
          *plVar23 = lVar22;
          plVar33 = plVar23;
          in_R10 = plVar29 + 1;
          do {
            plVar33 = plVar33 + 1;
            if (plVar33 <= plVar29) {
              plVar14 = *(longlong **)(*plVar23 + 0xe0);
              plVar40 = *(longlong **)(*plVar23 + 0xe8);
              bVar46 = *(byte *)((longlong)plVar14 + 0xc) < 2;
              bVar30 = *(byte *)((longlong)plVar40 + 0xc) < 2;
              bVar50 = plVar40 == (longlong *)0x0;
              local_4e8 = (longlong *)CONCAT71(local_4e8._1_7_,bVar50 || bVar30);
              do {
                if (plVar14 == (longlong *)0x0 || bVar46) {
                  bVar19 = 0;
                }
                else {
                  bVar19 = (*(byte *)(*(longlong *)(*plVar14 + 0x2c0) + 8 +
                                     (longlong)(int)plVar14[1] * 0x10) & 2) >> 1;
                }
                if (bVar50 || bVar30) {
                  local_4f8 = (ulonglong)local_4f8._4_4_ << 0x20;
                }
                else {
                  uVar13 = CONCAT71((int7)((ulonglong)*(longlong *)(*plVar40 + 0x2c0) >> 8),
                                    *(undefined1 *)
                                     (*(longlong *)(*plVar40 + 0x2c0) + 8 +
                                     (longlong)(int)plVar40[1] * 0x10)) & 0xffffffffffffff02;
                  local_4f8 = CONCAT44(local_4f8._4_4_,
                                       (int)CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 1));
                }
                plVar3 = *(longlong **)(*plVar33 + 0xe0);
                bVar47 = *(byte *)((longlong)plVar3 + 0xc) < 2;
                if (plVar3 == (longlong *)0x0 || bVar47) {
                  bVar41 = 0;
                }
                else {
                  bVar41 = (*(byte *)(*(longlong *)(*plVar3 + 0x2c0) + 8 +
                                     (longlong)(int)plVar3[1] * 0x10) & 2) >> 1;
                }
                plVar4 = *(longlong **)(*plVar33 + 0xe8);
                bVar48 = *(byte *)((longlong)plVar4 + 0xc) < 2;
                if (plVar4 == (longlong *)0x0 || bVar48) {
                  bVar11 = 0;
                }
                else {
                  bVar11 = (*(byte *)(*(longlong *)(*plVar4 + 0x2c0) + 8 +
                                     (longlong)(int)plVar4[1] * 0x10) & 2) >> 1;
                }
                if (plVar14 == (longlong *)0x0 || bVar46) {
                  local_508 = (ulonglong)local_508._4_4_ << 0x20;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar14 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar14[1] * 0x10);
                  local_508 = CONCAT44(local_508._4_4_,
                                       (int)CONCAT71((int7)((ulonglong)
                                                            *(longlong *)(*plVar14 + 0x2c0) >> 8),
                                                     cVar2 == '\x01' || cVar2 == '\x04'));
                }
                if (bVar50 || bVar30) {
                  bVar49 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar40 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar40[1] * 0x10);
                  bVar49 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (plVar3 == (longlong *)0x0 || bVar47) {
                  bVar47 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar3[1] * 0x10);
                  bVar47 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (plVar4 == (longlong *)0x0 || bVar48) {
                  bVar48 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar4[1] * 0x10);
                  bVar48 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if ((byte)local_508 == 1 && bVar19 == 0) {
                  if (((bVar47 & (bVar41 ^ 1)) == 0) && (((bVar11 ^ 1) & bVar48) == 0)) break;
LAB_140c2866b:
                  if ((((byte)(bVar19 | (byte)local_508) == 1) &&
                      ((byte)local_4f8 != 0 || bVar49 != false)) &&
                     ((byte)((bVar11 | bVar48) & (bVar41 | bVar47)) == 0)) break;
                }
                else {
                  bVar42 = ((byte)local_4f8 ^ 1) & bVar49;
                  if (bVar42 == (byte)(~bVar41 & bVar47 | (bVar11 ^ 1) & bVar48))
                  goto LAB_140c2866b;
                  if (bVar42 != 0) break;
                }
                plVar33 = plVar33 + 1;
              } while (plVar33 <= plVar29);
            }
            plVar14 = in_R10 + -1;
            plVar40 = in_R10;
            if (plVar23 < plVar14) {
              plVar3 = *(longlong **)(*plVar23 + 0xe0);
              local_4e8 = *(longlong **)(*plVar23 + 0xe8);
              bVar30 = *(byte *)((longlong)plVar3 + 0xc) < 2;
              bVar46 = plVar3 == (longlong *)0x0 || bVar30;
              bVar50 = *(byte *)((longlong)local_4e8 + 0xc) < 2;
              bVar47 = local_4e8 == (longlong *)0x0;
              local_508 = CONCAT71(local_508._1_7_,bVar47 || bVar50);
              local_4f8 = CONCAT71(local_4f8._1_7_,bVar46);
              do {
                in_R10 = plVar14;
                plVar14 = *(longlong **)(plVar40[-1] + 0xe0);
                bVar48 = *(byte *)((longlong)plVar14 + 0xc) < 2;
                if (plVar14 == (longlong *)0x0 || bVar48) {
                  bVar19 = 0;
                }
                else {
                  bVar19 = (*(byte *)(*(longlong *)(*plVar14 + 0x2c0) + 8 +
                                     (longlong)(int)plVar14[1] * 0x10) & 2) >> 1;
                }
                plVar4 = *(longlong **)(plVar40[-1] + 0xe8);
                bVar49 = 1 < *(byte *)((longlong)plVar4 + 0xc);
                if (plVar4 != (longlong *)0x0 && bVar49) {
                  bVar41 = (*(byte *)(*(longlong *)(*plVar4 + 0x2c0) + 8 +
                                     (longlong)(int)plVar4[1] * 0x10) & 2) >> 1;
                }
                else {
                  bVar41 = 0;
                }
                if (bVar46) {
                  bVar11 = 0;
                }
                else {
                  bVar11 = (*(byte *)(*(longlong *)(*plVar3 + 0x2c0) + 8 +
                                     (longlong)(int)plVar3[1] * 0x10) & 2) >> 1;
                }
                if (bVar47 || bVar50) {
                  bVar42 = 0;
                }
                else {
                  bVar42 = (*(byte *)(*(longlong *)(*local_4e8 + 0x2c0) + 8 +
                                     (longlong)(int)local_4e8[1] * 0x10) & 2) >> 1;
                }
                if (plVar14 == (longlong *)0x0 || bVar48) {
                  bVar48 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar14 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar14[1] * 0x10);
                  bVar48 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (plVar4 != (longlong *)0x0 && bVar49) {
                  cVar2 = *(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar4[1] * 0x10);
                  bVar49 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                else {
                  bVar49 = false;
                }
                if (plVar3 == (longlong *)0x0 || bVar30) {
                  bVar18 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar3[1] * 0x10);
                  bVar18 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (bVar47 || bVar50) {
                  bVar36 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*local_4e8 + 0x2c0) + 0xb +
                                   (longlong)(int)local_4e8[1] * 0x10);
                  bVar36 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                plVar14 = in_R10;
                if (bVar48 == true && bVar19 == 0) {
                  if (((bVar18 & (bVar11 ^ 1)) == 0) && (((bVar42 ^ 1) & bVar36) == 0)) {
                    plVar40 = in_R10 + 1;
                    break;
                  }
LAB_140c288a2:
                  if ((((bVar19 | bVar48) == 1) && (bVar41 != 0 || bVar49 != false)) &&
                     ((byte)((bVar42 | bVar36) & (bVar11 | bVar18)) == 0)) break;
                }
                else {
                  bVar44 = (bVar41 ^ 1) & bVar49;
                  if (bVar44 == (byte)(~bVar11 & bVar18 | (bVar42 ^ 1) & bVar36))
                  goto LAB_140c288a2;
                  if (bVar44 != 0) break;
                }
                plVar14 = in_R10 + -1;
                plVar40 = in_R10;
              } while (plVar23 < plVar14);
            }
            if (plVar14 < plVar33) goto LAB_140c294be;
            lVar22 = *plVar33;
            *plVar33 = *plVar14;
            *plVar14 = lVar22;
            in_R10 = plVar14;
          } while( true );
        }
        plVar33 = local_520;
        plVar40 = local_518;
        if (plVar29 <= plVar23) goto LAB_140c290a3;
        plVar33 = plVar23 + 1;
        plVar14 = plVar33;
        plVar3 = plVar23;
        goto joined_r0x000140c28e33;
      }
LAB_140c2953b:
      plVar33 = local_520;
      plVar40 = local_518;
      local_510 = pplVar17;
      if (uVar24 != 0) {
        uVar31 = (iVar27 - (iVar27 + -1 >> 0x1f)) + -1 >> 1;
        do {
          uVar45 = uVar31 * 2 + 1;
          if ((int)uVar45 < (int)uVar24) {
            plVar29 = (longlong *)(ulonglong)uVar31;
            uVar38 = uVar31;
            do {
              uVar38 = uVar38 * 2 + 2;
              if ((int)uVar38 < (int)uVar24) {
                local_500 = (longlong *)(longlong)(int)uVar38;
                plVar33 = *(longlong **)(plVar23[(longlong)local_500] + 0xe0);
                bVar46 = *(byte *)((longlong)plVar33 + 0xc) < 2;
                if (plVar33 == (longlong *)0x0 || bVar46) {
                  bVar19 = 0;
                }
                else {
                  bVar19 = (*(byte *)(*(longlong *)(*plVar33 + 0x2c0) + 8 +
                                     (longlong)(int)plVar33[1] * 0x10) & 2) >> 1;
                }
                plVar14 = *(longlong **)(plVar23[(longlong)local_500] + 0xe8);
                bVar30 = *(byte *)((longlong)plVar14 + 0xc) < 2;
                if (plVar14 == (longlong *)0x0 || bVar30) {
                  bVar41 = 0;
                }
                else {
                  bVar41 = (*(byte *)(*(longlong *)(*plVar14 + 0x2c0) + 8 +
                                     (longlong)(int)plVar14[1] * 0x10) & 2) >> 1;
                }
                plVar40 = *(longlong **)(plVar23[(int)uVar45] + 0xe0);
                bVar50 = *(byte *)((longlong)plVar40 + 0xc) < 2;
                if (plVar40 == (longlong *)0x0 || bVar50) {
                  bVar11 = 0;
                }
                else {
                  bVar11 = (*(byte *)(*(longlong *)(*plVar40 + 0x2c0) + 8 +
                                     (longlong)(int)plVar40[1] * 0x10) & 2) >> 1;
                }
                plVar3 = *(longlong **)(plVar23[(int)uVar45] + 0xe8);
                bVar47 = *(byte *)((longlong)plVar3 + 0xc) < 2;
                if (plVar3 == (longlong *)0x0 || bVar47) {
                  bVar42 = 0;
                }
                else {
                  bVar42 = (*(byte *)(*(longlong *)(*plVar3 + 0x2c0) + 8 +
                                     (longlong)(int)plVar3[1] * 0x10) & 2) >> 1;
                }
                if (plVar33 == (longlong *)0x0 || bVar46) {
                  bVar46 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar33 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar33[1] * 0x10);
                  bVar46 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (plVar14 == (longlong *)0x0 || bVar30) {
                  bVar30 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar14 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar14[1] * 0x10);
                  bVar30 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (plVar40 == (longlong *)0x0 || bVar50) {
                  bVar50 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar40 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar40[1] * 0x10);
                  bVar50 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (plVar3 == (longlong *)0x0 || bVar47) {
                  bVar47 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar3[1] * 0x10);
                  bVar47 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (bVar46 == true && bVar19 == 0) {
                  if (((bVar50 & (bVar11 ^ 1)) != 0) || (((bVar42 ^ 1) & bVar47) != 0))
                  goto LAB_140c297b0;
                  goto LAB_140c29e26;
                }
                bVar44 = (bVar41 ^ 1) & bVar30;
                if (bVar44 == (byte)(~bVar11 & bVar50 | (bVar42 ^ 1) & bVar47)) {
LAB_140c297b0:
                  bVar44 = (bVar41 | bVar30) & (bVar19 | bVar46) &
                           ((bVar42 | bVar47) & (bVar11 | bVar50) ^ 1);
                }
                if (bVar44 != 0) goto LAB_140c29e26;
              }
              else {
LAB_140c29e26:
                local_500 = (longlong *)(longlong)(int)uVar45;
                uVar38 = uVar45;
              }
              local_518 = (longlong *)(ulonglong)uVar38;
              local_508._0_4_ = (int)plVar29;
              local_508 = (longlong)(int)local_508;
              local_4f8 = plVar23[(longlong)local_500];
              local_4e8 = (longlong *)plVar23[local_508];
              plVar29 = (longlong *)local_4e8[0x1c];
              plVar33 = (longlong *)local_4e8[0x1d];
              plVar14 = *(longlong **)(local_4f8 + 0xe0);
              plVar40 = *(longlong **)(local_4f8 + 0xe8);
              bVar46 = *(byte *)((longlong)plVar29 + 0xc) < 2;
              if (plVar29 == (longlong *)0x0 || bVar46) {
                bVar19 = 0;
              }
              else {
                bVar19 = (*(byte *)(*(longlong *)(*plVar29 + 0x2c0) + 8 +
                                   (longlong)(int)plVar29[1] * 0x10) & 2) >> 1;
              }
              bVar30 = *(byte *)((longlong)plVar33 + 0xc) < 2;
              if (plVar33 == (longlong *)0x0 || bVar30) {
                bVar41 = 0;
              }
              else {
                bVar41 = (*(byte *)(*(longlong *)(*plVar33 + 0x2c0) + 8 +
                                   (longlong)(int)plVar33[1] * 0x10) & 2) >> 1;
              }
              bVar50 = *(byte *)((longlong)plVar14 + 0xc) < 2;
              if (plVar14 == (longlong *)0x0 || bVar50) {
                bVar11 = 0;
              }
              else {
                bVar11 = (*(byte *)(*(longlong *)(*plVar14 + 0x2c0) + 8 +
                                   (longlong)(int)plVar14[1] * 0x10) & 2) >> 1;
              }
              bVar47 = *(byte *)((longlong)plVar40 + 0xc) < 2;
              if (plVar40 == (longlong *)0x0 || bVar47) {
                bVar42 = 0;
              }
              else {
                bVar42 = (*(byte *)(*(longlong *)(*plVar40 + 0x2c0) + 8 +
                                   (longlong)(int)plVar40[1] * 0x10) & 2) >> 1;
              }
              if (plVar29 == (longlong *)0x0 || bVar46) {
                bVar46 = false;
              }
              else {
                cVar2 = *(char *)(*(longlong *)(*plVar29 + 0x2c0) + 0xb +
                                 (longlong)(int)plVar29[1] * 0x10);
                bVar46 = cVar2 == '\x01' || cVar2 == '\x04';
              }
              if (plVar33 == (longlong *)0x0 || bVar30) {
                bVar30 = false;
              }
              else {
                cVar2 = *(char *)(*(longlong *)(*plVar33 + 0x2c0) + 0xb +
                                 (longlong)(int)plVar33[1] * 0x10);
                bVar30 = cVar2 == '\x01' || cVar2 == '\x04';
              }
              if (plVar14 == (longlong *)0x0 || bVar50) {
                bVar50 = false;
              }
              else {
                cVar2 = *(char *)(*(longlong *)(*plVar14 + 0x2c0) + 0xb +
                                 (longlong)(int)plVar14[1] * 0x10);
                bVar50 = cVar2 == '\x01' || cVar2 == '\x04';
              }
              if (plVar40 == (longlong *)0x0 || bVar47) {
                in_R10 = (longlong *)0x0;
              }
              else {
                lVar22 = (longlong)(int)plVar40[1] * 0x10;
                cVar2 = *(char *)(*(longlong *)(*plVar40 + 0x2c0) + 0xb + lVar22);
                in_R10 = (longlong *)
                         CONCAT71((int7)((ulonglong)lVar22 >> 8),cVar2 == '\x01' || cVar2 == '\x04')
                ;
              }
              bVar44 = (byte)in_R10;
              if (bVar46 == true && bVar19 == 0) {
                if (((bVar50 & (bVar11 ^ 1)) != 0) || (((bVar42 ^ 1) & bVar44) != 0))
                goto LAB_140c299e8;
              }
              else {
                bVar21 = (bVar41 ^ 1) & bVar30;
                if (bVar21 == (byte)(~bVar11 & bVar50 | (bVar42 ^ 1) & bVar44)) {
LAB_140c299e8:
                  if ((((bVar19 | bVar46) != 1) || (bVar41 == 0 && bVar30 == false)) ||
                     ((byte)((bVar42 | bVar44) & (bVar11 | bVar50)) != 0)) break;
                }
                else if (bVar21 == 0) break;
              }
              plVar23[local_508] = local_4f8;
              plVar23[(longlong)local_500] = (longlong)local_4e8;
              uVar45 = uVar38 * 2 + 1;
              plVar29 = local_518;
            } while ((int)uVar45 < (int)uVar24);
          }
          bVar46 = uVar31 != 0;
          uVar31 = uVar31 - 1;
        } while (bVar46);
        plVar33 = plVar23;
        plVar40 = local_518;
        if (1 < (int)uVar24) {
          uVar13 = (ulonglong)uVar24;
          lVar22 = *plVar23;
          *plVar23 = plVar23[uVar13 - 1];
          plVar23[uVar13 - 1] = lVar22;
          if (uVar24 != 2) {
            do {
              uVar35 = uVar13 - 1;
              iVar20 = 0;
              iVar43 = 1;
              iVar27 = 0;
              do {
                plVar40 = (longlong *)(longlong)(iVar20 + 2);
                if ((longlong)plVar40 < (longlong)uVar35) {
                  plVar29 = *(longlong **)(plVar23[(longlong)plVar40] + 0xe0);
                  bVar46 = *(byte *)((longlong)plVar29 + 0xc) < 2;
                  if (plVar29 == (longlong *)0x0 || bVar46) {
                    bVar19 = 0;
                  }
                  else {
                    bVar19 = (*(byte *)(*(longlong *)(*plVar29 + 0x2c0) + 8 +
                                       (longlong)(int)plVar29[1] * 0x10) & 2) >> 1;
                  }
                  plVar14 = *(longlong **)(plVar23[(longlong)plVar40] + 0xe8);
                  bVar30 = *(byte *)((longlong)plVar14 + 0xc) < 2;
                  if (plVar14 == (longlong *)0x0 || bVar30) {
                    bVar41 = 0;
                  }
                  else {
                    bVar41 = (*(byte *)(*(longlong *)(*plVar14 + 0x2c0) + 8 +
                                       (longlong)(int)plVar14[1] * 0x10) & 2) >> 1;
                  }
                  plVar3 = *(longlong **)(plVar23[iVar43] + 0xe0);
                  bVar50 = *(byte *)((longlong)plVar3 + 0xc) < 2;
                  if (plVar3 == (longlong *)0x0 || bVar50) {
                    bVar11 = 0;
                  }
                  else {
                    bVar11 = (*(byte *)(*(longlong *)(*plVar3 + 0x2c0) + 8 +
                                       (longlong)(int)plVar3[1] * 0x10) & 2) >> 1;
                  }
                  plVar4 = *(longlong **)(plVar23[iVar43] + 0xe8);
                  bVar47 = *(byte *)((longlong)plVar4 + 0xc) < 2;
                  if (plVar4 == (longlong *)0x0 || bVar47) {
                    bVar42 = 0;
                  }
                  else {
                    bVar42 = (*(byte *)(*(longlong *)(*plVar4 + 0x2c0) + 8 +
                                       (longlong)(int)plVar4[1] * 0x10) & 2) >> 1;
                  }
                  if (plVar29 == (longlong *)0x0 || bVar46) {
                    bVar46 = false;
                  }
                  else {
                    cVar2 = *(char *)(*(longlong *)(*plVar29 + 0x2c0) + 0xb +
                                     (longlong)(int)plVar29[1] * 0x10);
                    bVar46 = cVar2 == '\x01' || cVar2 == '\x04';
                  }
                  if (plVar14 == (longlong *)0x0 || bVar30) {
                    bVar30 = false;
                  }
                  else {
                    cVar2 = *(char *)(*(longlong *)(*plVar14 + 0x2c0) + 0xb +
                                     (longlong)(int)plVar14[1] * 0x10);
                    bVar30 = cVar2 == '\x01' || cVar2 == '\x04';
                  }
                  if (plVar3 == (longlong *)0x0 || bVar50) {
                    bVar50 = false;
                  }
                  else {
                    cVar2 = *(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xb +
                                     (longlong)(int)plVar3[1] * 0x10);
                    bVar50 = cVar2 == '\x01' || cVar2 == '\x04';
                  }
                  if (plVar4 == (longlong *)0x0 || bVar47) {
                    bVar47 = false;
                  }
                  else {
                    cVar2 = *(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xb +
                                     (longlong)(int)plVar4[1] * 0x10);
                    bVar47 = cVar2 == '\x01' || cVar2 == '\x04';
                  }
                  if (bVar46 == true && bVar19 == 0) {
                    if (((bVar50 & (bVar11 ^ 1)) != 0) || (((bVar42 ^ 1) & bVar47) != 0))
                    goto LAB_140c28b8c;
                  }
                  else {
                    bVar44 = (bVar41 ^ 1) & bVar30;
                    if (bVar44 == (byte)(~bVar11 & bVar50 | (bVar42 ^ 1) & bVar47)) {
LAB_140c28b8c:
                      bVar44 = (bVar41 | bVar30) & (bVar19 | bVar46) &
                               ((bVar42 | bVar47) & (bVar11 | bVar50) ^ 1);
                    }
                    iVar37 = iVar20 + 2;
                    if (bVar44 == 0) goto LAB_140c28bb0;
                  }
                  plVar40 = (longlong *)(longlong)iVar43;
                  iVar37 = iVar43;
                }
                else {
                  plVar40 = (longlong *)(longlong)iVar43;
                  iVar37 = iVar43;
                }
LAB_140c28bb0:
                local_500 = (longlong *)(longlong)iVar27;
                local_508 = plVar23[(longlong)plVar40];
                local_4f8 = plVar23[(longlong)local_500];
                plVar29 = *(longlong **)(local_4f8 + 0xe0);
                plVar14 = *(longlong **)(local_4f8 + 0xe8);
                plVar3 = *(longlong **)(local_508 + 0xe0);
                plVar4 = *(longlong **)(local_508 + 0xe8);
                bVar46 = *(byte *)((longlong)plVar29 + 0xc) < 2;
                if (plVar29 == (longlong *)0x0 || bVar46) {
                  bVar19 = 0;
                }
                else {
                  bVar19 = (*(byte *)(*(longlong *)(*plVar29 + 0x2c0) + 8 +
                                     (longlong)(int)plVar29[1] * 0x10) & 2) >> 1;
                }
                bVar30 = *(byte *)((longlong)plVar14 + 0xc) < 2;
                if (plVar14 == (longlong *)0x0 || bVar30) {
                  bVar41 = 0;
                }
                else {
                  bVar41 = (*(byte *)(*(longlong *)(*plVar14 + 0x2c0) + 8 +
                                     (longlong)(int)plVar14[1] * 0x10) & 2) >> 1;
                }
                bVar50 = *(byte *)((longlong)plVar3 + 0xc) < 2;
                if (plVar3 == (longlong *)0x0 || bVar50) {
                  bVar11 = 0;
                }
                else {
                  bVar11 = (*(byte *)(*(longlong *)(*plVar3 + 0x2c0) + 8 +
                                     (longlong)(int)plVar3[1] * 0x10) & 2) >> 1;
                }
                bVar47 = *(byte *)((longlong)plVar4 + 0xc) < 2;
                if (plVar4 == (longlong *)0x0 || bVar47) {
                  bVar42 = 0;
                }
                else {
                  bVar42 = (*(byte *)(*(longlong *)(*plVar4 + 0x2c0) + 8 +
                                     (longlong)(int)plVar4[1] * 0x10) & 2) >> 1;
                }
                if (plVar29 == (longlong *)0x0 || bVar46) {
                  bVar46 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar29 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar29[1] * 0x10);
                  bVar46 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (plVar14 == (longlong *)0x0 || bVar30) {
                  bVar30 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar14 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar14[1] * 0x10);
                  bVar30 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (plVar3 == (longlong *)0x0 || bVar50) {
                  bVar50 = false;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar3[1] * 0x10);
                  bVar50 = cVar2 == '\x01' || cVar2 == '\x04';
                }
                if (plVar4 == (longlong *)0x0 || bVar47) {
                  in_R10 = (longlong *)0x0;
                }
                else {
                  cVar2 = *(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xb +
                                   (longlong)(int)plVar4[1] * 0x10);
                  in_R10 = (longlong *)
                           CONCAT71((int7)((ulonglong)*(longlong *)(*plVar4 + 0x2c0) >> 8),
                                    cVar2 == '\x01' || cVar2 == '\x04');
                }
                bVar44 = (byte)in_R10;
                if (bVar46 == true && bVar19 == 0) {
                  if (((bVar50 & (bVar11 ^ 1)) != 0) || (((bVar42 ^ 1) & bVar44) != 0))
                  goto LAB_140c28dc6;
                }
                else {
                  bVar21 = (bVar41 ^ 1) & bVar30;
                  if (bVar21 == (byte)(~bVar11 & bVar50 | (bVar42 ^ 1) & bVar44)) {
LAB_140c28dc6:
                    if ((((bVar19 | bVar46) != 1) || (bVar41 == 0 && bVar30 == false)) ||
                       ((byte)((bVar42 | bVar44) & (bVar11 | bVar50)) != 0)) break;
                  }
                  else if (bVar21 == 0) break;
                }
                plVar23[(longlong)local_500] = local_508;
                plVar23[(longlong)plVar40] = local_4f8;
                iVar20 = iVar37 * 2;
                iVar43 = iVar37 * 2 + 1;
                iVar27 = iVar37;
              } while ((longlong)iVar43 < (longlong)uVar35);
              lVar22 = *plVar23;
              *plVar23 = plVar23[uVar13 - 2];
              plVar23[uVar13 - 2] = lVar22;
              uVar13 = uVar35;
            } while (2 < uVar35);
          }
        }
      }
      goto LAB_140c290a3;
    }
  }
LAB_140c27e07:
  iVar20 = DAT_14c75efb0;
  if (0 < DAT_14c75efb0) {
    dVar8 = (double)_DAT_14c75efb4;
    iVar27 = 0;
    do {
      lVar22 = (longlong)(int)uStack_400;
      if (lVar22 == 0) break;
      iVar27 = iVar27 + 1;
      uVar13 = CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
      plVar23 = (longlong *)0x0;
      plVar29 = local_408;
      do {
        uVar24 = 0x3fe00000;
        dVar9 = 1.0;
        lVar34 = *(longlong *)((longlong)plVar29 + (longlong)plVar23);
        if ((*(ushort *)(lVar34 + 0x374) & 0x102) == 0) {
          local_410 = *(longlong **)(lVar34 + 0xe0);
          local_418 = *(longlong **)(lVar34 + 0xe8);
          bVar19 = *(byte *)((longlong)local_410 + 0xc);
          bVar46 = bVar19 < 2 || local_410 == (longlong *)0x0;
          local_510 = (longlong **)CONCAT44(local_510._4_4_,(int)uVar13);
          if (bVar19 < 2 || local_410 == (longlong *)0x0) {
            local_518 = (longlong *)((ulonglong)local_518._4_4_ << 0x20);
          }
          else {
            cVar2 = *(char *)(*(longlong *)(*local_410 + 0x2c0) + 0xb +
                             (longlong)(int)local_410[1] * 0x10);
            local_518 = (longlong *)
                        CONCAT44(local_518._4_4_,
                                 (int)CONCAT71((int7)((ulonglong)*(longlong *)(*local_410 + 0x2c0)
                                                     >> 8),cVar2 == '\x01' || cVar2 == '\x04'));
          }
          if (*(byte *)((longlong)local_418 + 0xc) < 2 || local_418 == (longlong *)0x0) {
            bVar30 = false;
          }
          else {
            cVar2 = *(char *)(*(longlong *)(*local_418 + 0x2c0) + 0xb +
                             (longlong)(int)local_418[1] * 0x10);
            bVar30 = cVar2 == '\x01' || cVar2 == '\x04';
          }
          bVar41 = 0;
          if ((local_410 != (longlong *)0x0) && (1 < bVar19)) {
            bVar41 = (*(byte *)(*(longlong *)(*local_410 + 0x2c0) + 8 +
                               (longlong)(int)local_410[1] * 0x10) & 2) >> 1;
          }
          if (local_418 == (longlong *)0x0 || *(byte *)((longlong)local_418 + 0xc) < 2) {
            bVar19 = 0;
          }
          else {
            bVar19 = (*(byte *)(*(longlong *)(*local_418 + 0x2c0) + 8 +
                               (longlong)(int)local_418[1] * 0x10) & 2) >> 1;
          }
          if (((byte)((byte)local_518 | bVar30) == 1) && (bVar41 != 0 || bVar19 != 0)) {
            if (bVar30 == false) {
              uVar24 = 0x3ff00000;
            }
            if ((byte)local_518 != 0) {
              dVar9 = 1.0 - (double)((ulonglong)uVar24 << 0x20);
            }
            lVar16 = *local_410;
            lVar32 = (longlong)(int)local_410[1];
            if (bVar46) {
LAB_140c28038:
              lVar15 = 0x48;
            }
            else {
              cVar2 = *(char *)(*(longlong *)(lVar16 + 0x2c0) + 0xb + lVar32 * 0x10);
              lVar15 = 0x548;
              if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_140c28038;
            }
            lVar39 = lVar32 * 0x10;
            if (bVar46) {
LAB_140c28066:
              lVar12 = 0x28;
            }
            else {
              cVar2 = *(char *)(*(longlong *)(lVar16 + 0x2c0) + 0xb + lVar39);
              lVar12 = 0x530;
              if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_140c28066;
            }
            lVar15 = *(longlong *)(lVar16 + lVar15);
            dVar6 = (double)*(float *)(lVar15 + 0xc + lVar39);
            dVar52 = (double)*(float *)(lVar15 + 4 + lVar39);
            local_478._8_4_ = SUB84(dVar52,0);
            local_478._0_8_ = (double)*(float *)(lVar15 + lVar39);
            local_478._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
            local_468._8_4_ = SUB84(dVar6,0);
            local_468._0_8_ = (double)*(float *)(lVar15 + 8 + lVar39);
            local_468._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            puVar1 = (undefined4 *)(*(longlong *)(lVar16 + lVar12) + lVar32 * 0x18);
            local_458 = *puVar1;
            uStack_454 = puVar1[1];
            uStack_450 = puVar1[2];
            uStack_44c = puVar1[3];
            local_448 = *(undefined8 *)(*(longlong *)(lVar16 + lVar12) + 0x10 + lVar32 * 0x18);
            uStack_440 = 0;
            local_438 = 0x3ff0000000000000;
            uStack_430 = 0x3ff0000000000000;
            local_428 = 0x3ff0000000000000;
            uStack_420 = 0;
            FUN_1447dc19e(lVar34 + 0x20,local_3f8,local_478);
            bVar46 = *(byte *)((longlong)local_418 + 0xc) < 2;
            lVar16 = *local_418;
            lVar32 = (longlong)(int)local_418[1];
            if (bVar46 || local_418 == (longlong *)0x0) {
LAB_140c28131:
              lVar15 = 0x48;
            }
            else {
              cVar2 = *(char *)(*(longlong *)(lVar16 + 0x2c0) + 0xb + lVar32 * 0x10);
              lVar15 = 0x548;
              if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_140c28131;
            }
            lVar15 = *(longlong *)(lVar16 + lVar15);
            lVar39 = lVar32 * 0x10;
            dVar6 = (double)*(float *)(lVar15 + 0xc + lVar39);
            dVar52 = (double)*(float *)(lVar15 + 4 + lVar39);
            if (bVar46 || local_418 == (longlong *)0x0) {
LAB_140c2817e:
              lVar12 = 0x28;
            }
            else {
              cVar2 = *(char *)(*(longlong *)(lVar16 + 0x2c0) + 0xb + lVar39);
              lVar12 = 0x530;
              if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_140c2817e;
            }
            local_4d8._8_4_ = SUB84(dVar52,0);
            local_4d8._0_8_ = (double)*(float *)(lVar15 + lVar39);
            local_4d8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
            local_4c8._8_4_ = SUB84(dVar6,0);
            local_4c8._0_8_ = (double)*(float *)(lVar15 + 8 + lVar39);
            local_4c8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            puVar1 = (undefined4 *)(*(longlong *)(lVar16 + lVar12) + lVar32 * 0x18);
            local_4b8 = *puVar1;
            uStack_4b4 = puVar1[1];
            uStack_4b0 = puVar1[2];
            uStack_4ac = puVar1[3];
            local_4a8 = *(undefined8 *)(*(longlong *)(lVar16 + lVar12) + 0x10 + lVar32 * 0x18);
            uStack_4a0 = 0;
            local_498 = 0x3ff0000000000000;
            uStack_490 = 0x3ff0000000000000;
            local_488 = 0x3ff0000000000000;
            uStack_480 = 0;
            local_520 = plVar29;
            local_500 = plVar23;
            FUN_1447dc19e(lVar34 + 0x80,local_478,local_4d8);
            pplVar25 = local_3f8;
            puVar26 = (undefined8 *)(lVar34 + 0x170);
            for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
              *puVar26 = *pplVar25;
              pplVar25 = pplVar25 + 1;
              puVar26 = puVar26 + 1;
            }
            puVar26 = (undefined8 *)local_478;
            puVar28 = (undefined8 *)(lVar34 + 0x1d0);
            for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
              *puVar28 = *puVar26;
              puVar26 = puVar26 + 1;
              puVar28 = puVar28 + 1;
            }
            FUN_140c2a096(lVar34);
            plVar23 = local_500;
            plVar29 = local_520;
            if ((longlong)*(int *)(lVar34 + 0x16c) == -1) {
              uVar13 = (ulonglong)local_510 & 0xffffffff;
              if (1.79769313486232e+308 < -(double)*(float *)(lVar34 + 0x65c) * dVar8) {
                dVar58 = 0.0;
                dVar59 = 0.0;
                dVar6 = 1.79769313486232e+308;
                dVar52 = 1.0;
                goto LAB_140c291c4;
              }
            }
            else {
              lVar16 = lVar34 + 0x3f8;
              if (*(longlong *)(lVar34 + 0x5a8) != 0) {
                lVar16 = *(longlong *)(lVar34 + 0x5a8);
              }
              lVar32 = (longlong)*(int *)(lVar34 + 0x16c) * 0x6c;
              dVar6 = (double)*(float *)(lVar16 + 0x24 + lVar32);
              uVar13 = (ulonglong)local_510 & 0xffffffff;
              if (dVar6 < -(double)*(float *)(lVar34 + 0x65c) * dVar8) {
                dVar52 = (double)*(float *)(lVar16 + 0x20 + lVar32);
                dVar59 = (double)*(float *)(lVar16 + 0x1c + lVar32);
                dVar54 = (double)*(float *)(lVar16 + 0x18 + lVar32);
                dVar10 = *(double *)(lVar34 + 0x1d0);
                dVar53 = *(double *)(lVar34 + 0x1d8);
                dVar55 = *(double *)(lVar34 + 0x1e0);
                dVar58 = *(double *)(lVar34 + 0x1e8);
                dVar57 = dVar54 * dVar55 - dVar10 * dVar52;
                dVar56 = dVar59 * dVar10 - dVar53 * dVar54;
                dVar7 = dVar52 * dVar53 - dVar55 * dVar59;
                dVar7 = dVar7 + dVar7;
                dVar57 = dVar57 + dVar57;
                dVar56 = dVar56 + dVar56;
                dVar52 = dVar56 * dVar58 + dVar52 + (dVar57 * dVar10 - dVar7 * dVar53);
                dVar58 = (dVar56 * dVar53 - dVar57 * dVar55) + dVar58 * dVar7 + dVar54;
                dVar59 = (dVar55 * dVar7 - dVar10 * dVar56) +
                         *(double *)(lVar34 + 0x1e8) * dVar57 + dVar59;
LAB_140c291c4:
                dVar56 = DAT_14c993df8;
                dVar7 = DAT_14c993df0;
                dVar57 = DAT_14c993de8;
                if ((*(byte *)((longlong)local_410 + 0xc) != 0) && (local_410 != (longlong *)0x0)) {
                  lVar16 = (longlong)(int)local_410[1];
                  lVar34 = *(longlong *)(*local_410 + 0x278);
                  dVar56 = (double)*(float *)(lVar34 + 8 + lVar16 * 0xc);
                  dVar7 = (double)*(float *)(lVar34 + 4 + lVar16 * 0xc);
                  dVar57 = (double)*(float *)(lVar34 + lVar16 * 0xc);
                }
                dVar53 = DAT_14c993df0;
                dVar55 = DAT_14c993de8;
                dVar10 = DAT_14c993df8;
                if ((local_418 != (longlong *)0x0) && (*(char *)((longlong)local_418 + 0xc) != '\0')
                   ) {
                  lVar16 = (longlong)(int)local_418[1];
                  lVar34 = *(longlong *)(*local_418 + 0x278);
                  dVar53 = (double)*(float *)(lVar34 + 4 + lVar16 * 0xc);
                  dVar55 = (double)*(float *)(lVar34 + lVar16 * 0xc);
                  dVar10 = (double)*(float *)(lVar34 + 8 + lVar16 * 0xc);
                }
                pplVar25 = (longlong **)
                           ((dVar56 - dVar10) * dVar52 +
                           dVar59 * (dVar7 - dVar53) + (dVar57 - dVar55) * dVar58);
                if (0.0 <= (double)pplVar25) {
                  pplVar25 = (longlong **)0x0;
                }
                if ((char)local_518 != '\0') {
                  lVar34 = (longlong)(int)local_410[1];
                  if ((local_410 == (longlong *)0x0) || (*(byte *)((longlong)local_410 + 0xc) < 2))
                  {
LAB_140c292e6:
                    lVar16 = 0x28;
                  }
                  else {
                    cVar2 = *(char *)(*(longlong *)(*local_410 + 0x2c0) + 0xb + lVar34 * 0x10);
                    lVar16 = 0x530;
                    if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_140c292e6;
                  }
                  dVar56 = (double)((ulonglong)(uVar24 ^ 0x80000000) << 0x20) * dVar6;
                  lVar16 = *(longlong *)(*local_410 + lVar16);
                  local_4d8._8_8_ = dVar56 * dVar59 + *(double *)(lVar16 + 8 + lVar34 * 0x18);
                  local_4d8._0_8_ = dVar56 * dVar58 + *(double *)(lVar16 + lVar34 * 0x18);
                  local_4c8._0_8_ = dVar56 * dVar52 + *(double *)(lVar16 + 0x10 + lVar34 * 0x18);
                  local_510 = pplVar25;
                  FUN_140c2a03a(&local_410,local_4d8);
                  pplVar25 = local_510;
                  if ((local_410 != (longlong *)0x0) &&
                     (*(char *)((longlong)local_410 + 0xc) != '\0')) {
                    lVar16 = (longlong)(int)local_410[1];
                    lVar34 = *(longlong *)(*local_410 + 0x278);
                    dVar56 = (double)((ulonglong)uVar24 << 0x20) * (double)local_510;
                    *(float *)(lVar34 + lVar16 * 0xc) =
                         (float)((double)*(float *)(lVar34 + lVar16 * 0xc) - dVar58 * dVar56);
                    *(float *)(lVar34 + 4 + lVar16 * 0xc) =
                         (float)((double)*(float *)(lVar34 + 4 + lVar16 * 0xc) - dVar59 * dVar56);
                    *(float *)(lVar34 + 8 + lVar16 * 0xc) =
                         (float)((double)*(float *)(lVar34 + 8 + lVar16 * 0xc) - dVar56 * dVar52);
                  }
                }
                if (9.99999993922529e-09 < dVar9) {
                  lVar34 = (longlong)(int)local_418[1];
                  if ((local_418 == (longlong *)0x0) || (*(byte *)((longlong)local_418 + 0xc) < 2))
                  {
LAB_140c29a7a:
                    lVar16 = 0x28;
                  }
                  else {
                    cVar2 = *(char *)(*(longlong *)(*local_418 + 0x2c0) + 0xb + lVar34 * 0x10);
                    lVar16 = 0x530;
                    if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_140c29a7a;
                  }
                  dVar6 = dVar6 * dVar9;
                  lVar16 = *(longlong *)(*local_418 + lVar16);
                  local_4d8._8_8_ = dVar6 * dVar59 + *(double *)(lVar16 + 8 + lVar34 * 0x18);
                  local_4d8._0_8_ = dVar6 * dVar58 + *(double *)(lVar16 + lVar34 * 0x18);
                  local_4c8._0_8_ = dVar6 * dVar52 + *(double *)(lVar16 + 0x10 + lVar34 * 0x18);
                  FUN_140c2a03a(&local_418);
                  uVar13 = 0;
                  if ((local_418 == (longlong *)0x0) ||
                     (*(char *)((longlong)local_418 + 0xc) == '\0')) goto LAB_140c282a9;
                  lVar16 = (longlong)(int)local_418[1];
                  lVar34 = *(longlong *)(*local_418 + 0x278);
                  dVar9 = dVar9 * (double)pplVar25;
                  *(float *)(lVar34 + lVar16 * 0xc) =
                       (float)(dVar58 * dVar9 + (double)*(float *)(lVar34 + lVar16 * 0xc));
                  *(float *)(lVar34 + 4 + lVar16 * 0xc) =
                       (float)(dVar59 * dVar9 + (double)*(float *)(lVar34 + 4 + lVar16 * 0xc));
                  *(float *)(lVar34 + 8 + lVar16 * 0xc) =
                       (float)(dVar52 * dVar9 + (double)*(float *)(lVar34 + 8 + lVar16 * 0xc));
                }
                uVar13 = 0;
              }
            }
          }
          else {
            uVar13 = uVar13 & 0xffffffff;
          }
        }
LAB_140c282a9:
        plVar23 = plVar23 + 1;
      } while ((longlong *)(lVar22 * 8) != plVar23);
      in_R10 = (longlong *)(uVar13 & 0xffffffffffffff00);
    } while ((uVar13 & 1) == 0 && iVar27 < iVar20);
  }
  if (local_408 != (longlong *)0x0) {
    FUN_1400020a8(local_408);
  }
  if ((local_f0 ^ (ulonglong)auStack_548) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140c294be:
  lVar22 = *plVar23;
  *plVar23 = *plVar14;
  *plVar14 = lVar22;
  iVar20 = iVar20 + -1;
  local_518 = plVar40 + -2;
  plVar40 = plVar29;
  local_4ec = iVar20;
  local_4e0 = plVar29;
  if ((longlong)local_518 - (longlong)plVar23 < (longlong)plVar29 - (longlong)plVar33) {
    if (plVar33 < plVar29) {
      *local_510 = plVar33;
      local_510[1] = plVar29;
      *(int *)(local_510 + 2) = iVar20;
      local_510 = local_510 + 3;
    }
    pplVar17 = local_510;
    local_520 = plVar23;
    if (plVar14 <= plVar23 + 1) goto LAB_140c290a3;
  }
  else {
    if (plVar23 + 1 < plVar14) {
      *local_510 = plVar23;
      local_510[1] = local_518;
      *(int *)(local_510 + 2) = iVar20;
      pplVar17 = local_510 + 3;
    }
    local_520 = plVar33;
    local_518 = plVar29;
    if (plVar29 <= plVar33) goto LAB_140c290a3;
  }
  local_510 = pplVar17;
  iVar27 = (int)((ulonglong)((longlong)local_518 - (longlong)local_520) >> 3);
  uVar24 = iVar27 + 1;
  pplVar17 = local_510;
  plVar23 = local_520;
  plVar29 = local_518;
  if (iVar20 == 0) goto LAB_140c2953b;
  goto LAB_140c28416;
  while( true ) {
    lVar22 = *in_R10;
    *in_R10 = *plVar29;
    *plVar29 = lVar22;
    plVar29 = plVar29 + -1;
    plVar40 = local_518;
    local_500 = plVar23;
    plVar14 = plVar33;
    plVar3 = plVar23;
    if (plVar29 <= plVar23) break;
joined_r0x000140c28e33:
    in_R10 = plVar3;
    if (plVar14 <= plVar29) {
      plVar40 = *(longlong **)(*in_R10 + 0xe0);
      bVar46 = *(byte *)((longlong)plVar40 + 0xc) < 2;
      if (plVar40 == (longlong *)0x0 || bVar46) {
        bVar19 = 0;
      }
      else {
        bVar19 = (*(byte *)(*(longlong *)(*plVar40 + 0x2c0) + 8 + (longlong)(int)plVar40[1] * 0x10)
                 & 2) >> 1;
      }
      plVar3 = *(longlong **)(*in_R10 + 0xe8);
      bVar30 = 1 < *(byte *)((longlong)plVar3 + 0xc);
      if (plVar3 != (longlong *)0x0 && bVar30) {
        bVar41 = (*(byte *)(*(longlong *)(*plVar3 + 0x2c0) + 8 + (longlong)(int)plVar3[1] * 0x10) &
                 2) >> 1;
      }
      else {
        bVar41 = 0;
      }
      plVar4 = *(longlong **)(*plVar14 + 0xe0);
      bVar50 = *(byte *)((longlong)plVar4 + 0xc) < 2;
      if (plVar4 == (longlong *)0x0 || bVar50) {
        bVar11 = 0;
      }
      else {
        bVar11 = (*(byte *)(*(longlong *)(*plVar4 + 0x2c0) + 8 + (longlong)(int)plVar4[1] * 0x10) &
                 2) >> 1;
      }
      plVar5 = *(longlong **)(*plVar14 + 0xe8);
      bVar47 = 1 < *(byte *)((longlong)plVar5 + 0xc);
      if (plVar5 != (longlong *)0x0 && bVar47) {
        bVar42 = (*(byte *)(*(longlong *)(*plVar5 + 0x2c0) + 8 + (longlong)(int)plVar5[1] * 0x10) &
                 2) >> 1;
      }
      else {
        bVar42 = 0;
      }
      if (plVar40 == (longlong *)0x0 || bVar46) {
        bVar46 = false;
      }
      else {
        cVar2 = *(char *)(*(longlong *)(*plVar40 + 0x2c0) + 0xb + (longlong)(int)plVar40[1] * 0x10);
        bVar46 = cVar2 == '\x01' || cVar2 == '\x04';
      }
      if (plVar3 != (longlong *)0x0 && bVar30) {
        cVar2 = *(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xb + (longlong)(int)plVar3[1] * 0x10);
        bVar30 = cVar2 == '\x01' || cVar2 == '\x04';
      }
      else {
        bVar30 = false;
      }
      if (plVar4 == (longlong *)0x0 || bVar50) {
        bVar50 = false;
      }
      else {
        cVar2 = *(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xb + (longlong)(int)plVar4[1] * 0x10);
        bVar50 = cVar2 == '\x01' || cVar2 == '\x04';
      }
      if (plVar5 != (longlong *)0x0 && bVar47) {
        cVar2 = *(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xb + (longlong)(int)plVar5[1] * 0x10);
        bVar47 = cVar2 == '\x01' || cVar2 == '\x04';
      }
      else {
        bVar47 = false;
      }
      if (bVar46 == true && bVar19 == 0) {
        if (((bVar50 & (bVar11 ^ 1)) != 0) || (((bVar42 ^ 1) & bVar47) != 0)) goto LAB_140c2900b;
LAB_140c29022:
        in_R10 = plVar14;
      }
      else {
        bVar44 = (bVar41 ^ 1) & bVar30;
        if (bVar44 == (byte)(~bVar11 & bVar50 | (bVar42 ^ 1) & bVar47)) {
LAB_140c2900b:
          bVar44 = (bVar41 | bVar30) & (bVar19 | bVar46) &
                   ((bVar42 | bVar47) & (bVar11 | bVar50) ^ 1);
        }
        if (bVar44 != 0) goto LAB_140c29022;
      }
      plVar14 = plVar14 + 1;
      plVar3 = in_R10;
      local_518 = plVar29;
      goto joined_r0x000140c28e33;
    }
  }
LAB_140c290a3:
  local_518 = plVar40;
  local_520 = plVar33;
  pplVar25 = pplVar17 + -3;
  if (pplVar17 + -3 < local_3f8) goto LAB_140c27e07;
  goto LAB_140c283f1;
}



// FUNCTION 140c29ed8 FUN_140c29ed8 body=353 status=ok
// SIG undefined FUN_140c29ed8(void)

void FUN_140c29ed8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c29f5d;
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
LAB_140c29f5d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c2a03a FUN_140c2a03a body=91 status=ok
// SIG undefined FUN_140c2a03a(void)

void FUN_140c2a03a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  param_1 = (longlong *)*param_1;
  lVar4 = (longlong)(int)param_1[1];
  if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
    cVar2 = *(char *)(*(longlong *)(*param_1 + 0x2c0) + 0xb + lVar4 * 0x10);
    lVar5 = 0x530;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) goto LAB_140c2a07c;
  }
  lVar5 = 0x28;
LAB_140c2a07c:
  lVar5 = *(longlong *)(*param_1 + lVar5);
  *(undefined8 *)(lVar5 + 0x10 + lVar4 * 0x18) = param_2[2];
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(lVar5 + lVar4 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 140c2a096 FUN_140c2a096 body=3087 status=ok
// SIG undefined FUN_140c2a096(void)

void FUN_140c2a096(longlong param_1)

{
  undefined4 *puVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStack_2e8 [32];
  double local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8 [12];
  undefined1 local_258 [16];
  double local_248;
  double dStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(longlong *)(param_1 + 0x648) == 0) || (*(longlong *)(param_1 + 0x650) == 0))
  goto LAB_140c2a12b;
  plVar7 = *(longlong **)(param_1 + 0xe0);
  plVar8 = *(longlong **)(param_1 + 0xe8);
  FUN_14013713e(*(longlong *)(param_1 + 0x648),&local_198);
  pfVar9 = *(float **)(param_1 + 0x648);
  local_108 = (double)pfVar9[2] + *(double *)(pfVar9 + 0x48);
  local_138 = local_198;
  uStack_130 = uStack_190;
  local_128 = (undefined4)local_188;
  uStack_124 = local_188._4_4_;
  uStack_120 = (undefined4)uStack_180;
  uStack_11c = uStack_180._4_4_;
  local_118._8_4_ = SUB84((double)pfVar9[1] + *(double *)(pfVar9 + 0x46),0);
  local_118._0_8_ = (double)*pfVar9 + *(double *)(pfVar9 + 0x44);
  local_118._12_4_ = (int)((ulonglong)((double)pfVar9[1] + *(double *)(pfVar9 + 0x46)) >> 0x20);
  uStack_100 = 0;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0x3ff0000000000000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  FUN_14013713e(*(undefined8 *)(param_1 + 0x650),local_1f8);
  pfVar9 = *(float **)(param_1 + 0x650);
  local_168 = (double)pfVar9[2] + *(double *)(pfVar9 + 0x48);
  local_198 = local_1f8._0_8_;
  uStack_190 = local_1f8._8_8_;
  local_188 = local_1e8;
  uStack_180 = dStack_1e0;
  local_178._8_4_ = SUB84((double)pfVar9[1] + *(double *)(pfVar9 + 0x46),0);
  local_178._0_8_ = (double)*pfVar9 + *(double *)(pfVar9 + 0x44);
  local_178._12_4_ = (int)((ulonglong)((double)pfVar9[1] + *(double *)(pfVar9 + 0x46)) >> 0x20);
  uStack_160 = 0;
  local_158 = 0x3ff0000000000000;
  uStack_150 = 0x3ff0000000000000;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0;
  bVar24 = 1 < *(byte *)((longlong)plVar7 + 0xc);
  dVar36 = -0.0;
  dVar37 = 1.0;
  uVar28 = 0;
  uVar30 = 0;
  uVar32 = 0;
  uVar33 = 0;
  if (bVar24 && plVar7 != (longlong *)0x0) {
    cVar6 = *(char *)(*(longlong *)(*plVar7 + 0x2c0) + 0xb + (longlong)(int)plVar7[1] * 0x10);
    if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
      lVar18 = *(longlong *)(*plVar7 + 0x3f8);
      lVar19 = (longlong)(int)plVar7[1] * 0x20;
      puVar1 = (undefined4 *)(lVar18 + lVar19);
      uVar28 = *puVar1;
      uVar30 = puVar1[1];
      uVar32 = puVar1[2];
      uVar33 = puVar1[3];
      pdVar2 = (double *)(lVar18 + 0x10 + lVar19);
      dVar36 = *pdVar2 * -1.0;
      dVar37 = pdVar2[1] * 1.0;
    }
  }
  dVar39 = *(double *)(param_1 + 0x20);
  dVar10 = *(double *)(param_1 + 0x28);
  dVar12 = *(double *)(param_1 + 0x30);
  dVar11 = *(double *)(param_1 + 0x38);
  dVar4 = dVar39 * dVar36 * 1.0 +
          ((dVar37 * dVar10 - (double)CONCAT44(uVar30,uVar28) * dVar12 * -1.0) -
          dVar11 * (double)CONCAT44(uVar33,uVar32));
  local_1e8 = dVar11 * dVar36 * 1.0 +
              (double)CONCAT44(uVar33,uVar32) * dVar39 +
              (dVar37 * dVar12 - (double)CONCAT44(uVar30,uVar28) * dVar10 * 1.0);
  dStack_1e0 = dVar12 * dVar36 * -1.0 +
               (double)CONCAT44(uVar33,uVar32) * dVar10 +
               (dVar37 * dVar11 - (double)CONCAT44(uVar30,uVar28) * dVar39 * -1.0);
  if (bVar24 && plVar7 != (longlong *)0x0) {
    lVar18 = *plVar7;
    lVar19 = (longlong)(int)plVar7[1];
    cVar6 = *(char *)(*(longlong *)(lVar18 + 0x2c0) + 0xb + lVar19 * 0x10);
    if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
      lVar22 = *(longlong *)(lVar18 + 0x3f8);
      lVar23 = lVar19 * 0x20;
      uVar29 = (undefined4)*(undefined8 *)(lVar22 + lVar23);
      uVar31 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + lVar23) >> 0x20);
      dVar43 = *(double *)(lVar22 + 8 + lVar23);
      dVar35 = *(double *)(lVar22 + 0x10 + lVar23);
      uVar5 = *(undefined8 *)(lVar22 + 0x18 + lVar23);
      uVar41 = (undefined4)uVar5;
      uVar42 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    else {
      uVar41 = 0;
      uVar42 = 0x3ff00000;
      uVar29 = 0;
      uVar31 = 0;
      dVar43 = 0.0;
      dVar35 = 0.0;
    }
    dVar45 = *(double *)(param_1 + 0x40);
    dVar46 = *(double *)(param_1 + 0x48);
    uVar47 = (undefined4)*(undefined8 *)(param_1 + 0x50);
    uVar48 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
    if ((cVar6 != '\x04') && (cVar6 != '\x01')) goto LAB_140c2a717;
    lVar18 = *(longlong *)(lVar18 + 0x3e0);
    dVar50 = *(double *)(lVar18 + lVar19 * 0x18);
    uVar5 = *(undefined8 *)(lVar18 + 8 + lVar19 * 0x18);
    uVar53 = (undefined4)uVar5;
    uVar54 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = *(undefined8 *)(lVar18 + 0x10 + lVar19 * 0x18);
    uVar55 = (undefined4)uVar5;
    uVar56 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  else {
    dVar45 = *(double *)(param_1 + 0x40);
    dVar46 = *(double *)(param_1 + 0x48);
    uVar47 = (undefined4)*(undefined8 *)(param_1 + 0x50);
    uVar48 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
    uVar41 = 0;
    uVar42 = 0x3ff00000;
    uVar29 = 0;
    uVar31 = 0;
    dVar43 = 0.0;
    dVar35 = 0.0;
LAB_140c2a717:
    dVar50 = 0.0;
    uVar53 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = 0;
  }
  dVar44 = (double)CONCAT44(uVar48,uVar47) - (double)CONCAT44(uVar56,uVar55);
  dVar46 = dVar46 - (double)CONCAT44(uVar54,uVar53);
  dVar45 = dVar45 - dVar50;
  dVar50 = dVar43 * dVar45 - (double)CONCAT44(uVar31,uVar29) * dVar46;
  dVar51 = (double)CONCAT44(uVar31,uVar29) * dVar44 - dVar35 * dVar45;
  dVar27 = dVar35 * dVar46 - dVar43 * dVar44;
  dVar50 = dVar50 + dVar50;
  dVar51 = dVar51 + dVar51;
  dVar27 = dVar27 + dVar27;
  local_1c8 = (dVar43 * dVar27 - (double)CONCAT44(uVar31,uVar29) * dVar51) +
              (double)CONCAT44(uVar42,uVar41) * dVar50 + dVar44;
  dStack_1d0 = ((double)CONCAT44(uVar31,uVar29) * dVar50 - dVar27 * dVar35) +
               (double)CONCAT44(uVar42,uVar41) * dVar51 + dVar46;
  local_1d8 = (dVar51 * dVar35 - dVar50 * dVar43) +
              (double)CONCAT44(uVar42,uVar41) * dVar27 + dVar45;
  local_1f8._8_4_ = SUB84(dVar4,0);
  local_1f8._0_8_ =
       dVar10 * dVar36 * -1.0 +
       ((dVar37 * dVar39 - (double)CONCAT44(uVar30,uVar28) * dVar11 * 1.0) -
       dVar12 * (double)CONCAT44(uVar33,uVar32));
  local_1f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  uStack_1c0 = 0;
  local_1b8 = 0x3ff0000000000000;
  uStack_1b0 = 0x3ff0000000000000;
  local_1a8 = 0x3ff0000000000000;
  uStack_1a0 = 0;
  bVar24 = 1 < *(byte *)((longlong)plVar8 + 0xc);
  dVar36 = -0.0;
  dVar37 = 1.0;
  uVar28 = 0;
  uVar30 = 0;
  uVar32 = 0;
  uVar33 = 0;
  if (bVar24 && plVar8 != (longlong *)0x0) {
    cVar6 = *(char *)(*(longlong *)(*plVar8 + 0x2c0) + 0xb + (longlong)(int)plVar8[1] * 0x10);
    if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
      lVar18 = *(longlong *)(*plVar8 + 0x3f8);
      lVar19 = (longlong)(int)plVar8[1] * 0x20;
      puVar1 = (undefined4 *)(lVar18 + lVar19);
      uVar28 = *puVar1;
      uVar30 = puVar1[1];
      uVar32 = puVar1[2];
      uVar33 = puVar1[3];
      pdVar2 = (double *)(lVar18 + 0x10 + lVar19);
      dVar36 = *pdVar2 * -1.0;
      dVar37 = pdVar2[1] * 1.0;
    }
  }
  dVar39 = *(double *)(param_1 + 0x80);
  dVar10 = *(double *)(param_1 + 0x88);
  dVar12 = *(double *)(param_1 + 0x90);
  dVar11 = *(double *)(param_1 + 0x98);
  dVar4 = dVar39 * dVar36 * 1.0 +
          ((dVar37 * dVar10 - (double)CONCAT44(uVar30,uVar28) * dVar12 * -1.0) -
          dVar11 * (double)CONCAT44(uVar33,uVar32));
  local_248 = dVar11 * dVar36 * 1.0 +
              (double)CONCAT44(uVar33,uVar32) * dVar39 +
              (dVar37 * dVar12 - (double)CONCAT44(uVar30,uVar28) * dVar10 * 1.0);
  dStack_240 = dVar12 * dVar36 * -1.0 +
               (double)CONCAT44(uVar33,uVar32) * dVar10 +
               (dVar37 * dVar11 - (double)CONCAT44(uVar30,uVar28) * dVar39 * -1.0);
  if (bVar24 && plVar8 != (longlong *)0x0) {
    lVar18 = *plVar8;
    lVar19 = (longlong)(int)plVar8[1];
    cVar6 = *(char *)(*(longlong *)(lVar18 + 0x2c0) + 0xb + lVar19 * 0x10);
    if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
      lVar22 = *(longlong *)(lVar18 + 0x3f8);
      lVar23 = lVar19 * 0x20;
      uVar29 = (undefined4)*(undefined8 *)(lVar22 + lVar23);
      uVar31 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + lVar23) >> 0x20);
      dVar43 = *(double *)(lVar22 + 8 + lVar23);
      dVar35 = *(double *)(lVar22 + 0x10 + lVar23);
      dVar46 = *(double *)(lVar22 + 0x18 + lVar23);
    }
    else {
      dVar35 = 0.0;
      dVar46 = 1.0;
      dVar43 = 0.0;
      uVar29 = 0;
      uVar31 = 0;
    }
    dVar44 = *(double *)(param_1 + 0xa0);
    dVar50 = *(double *)(param_1 + 0xa8);
    dVar45 = *(double *)(param_1 + 0xb0);
    if ((cVar6 != '\x04') && (cVar6 != '\x01')) goto LAB_140c2a930;
    lVar18 = *(longlong *)(lVar18 + 0x3e0);
    dVar27 = *(double *)(lVar18 + lVar19 * 0x18);
    uVar5 = *(undefined8 *)(lVar18 + 8 + lVar19 * 0x18);
    uVar47 = (undefined4)uVar5;
    uVar48 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = *(undefined8 *)(lVar18 + 0x10 + lVar19 * 0x18);
    uVar41 = (undefined4)uVar5;
    uVar42 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  else {
    dVar44 = *(double *)(param_1 + 0xa0);
    dVar50 = *(double *)(param_1 + 0xa8);
    dVar45 = *(double *)(param_1 + 0xb0);
    dVar35 = 0.0;
    dVar46 = 1.0;
    dVar43 = 0.0;
    uVar29 = 0;
    uVar31 = 0;
LAB_140c2a930:
    uVar42 = 0;
    uVar41 = 0;
    uVar47 = 0;
    uVar48 = 0;
    dVar27 = 0.0;
  }
  dVar45 = dVar45 - (double)CONCAT44(uVar42,uVar41);
  dVar50 = dVar50 - (double)CONCAT44(uVar48,uVar47);
  dVar44 = dVar44 - dVar27;
  dVar52 = dVar43 * dVar44 - (double)CONCAT44(uVar31,uVar29) * dVar50;
  dVar27 = (double)CONCAT44(uVar31,uVar29) * dVar45 - dVar35 * dVar44;
  dVar51 = dVar35 * dVar50 - dVar43 * dVar45;
  dVar52 = dVar52 + dVar52;
  dVar27 = dVar27 + dVar27;
  dVar51 = dVar51 + dVar51;
  local_228 = (dVar43 * dVar51 - (double)CONCAT44(uVar31,uVar29) * dVar27) +
              dVar46 * dVar52 + dVar45;
  dVar45 = ((double)CONCAT44(uVar31,uVar29) * dVar52 - dVar51 * dVar35) + dVar46 * dVar27 + dVar50;
  local_258._8_4_ = SUB84(dVar4,0);
  local_258._0_8_ =
       dVar10 * dVar36 * -1.0 +
       ((dVar37 * dVar39 - (double)CONCAT44(uVar30,uVar28) * dVar11 * 1.0) -
       dVar12 * (double)CONCAT44(uVar33,uVar32));
  local_258._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_238._8_4_ = SUB84(dVar45,0);
  local_238._0_8_ = (dVar27 * dVar35 - dVar52 * dVar43) + dVar46 * dVar51 + dVar44;
  local_238._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
  uStack_220 = 0;
  local_218 = 0x3ff0000000000000;
  uStack_210 = 0x3ff0000000000000;
  local_208 = 0x3ff0000000000000;
  uStack_200 = 0;
  FUN_1447dc19e(local_1f8,local_2b8,&local_138);
  puVar20 = local_2b8;
  puVar21 = (undefined8 *)(param_1 + 0x170);
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar21 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar21 = puVar21 + 1;
  }
  FUN_1447dc19e(local_258,local_2b8,&local_198);
  puVar20 = local_2b8;
  puVar21 = (undefined8 *)(param_1 + 0x1d0);
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar21 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar21 = puVar21 + 1;
  }
LAB_140c2a12b:
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x5b0)) {
    lVar18 = 0x24;
    lVar19 = 0;
    do {
      lVar22 = *(longlong *)(param_1 + 0x5a8);
      if (*(longlong *)(param_1 + 0x5a8) == 0) {
        lVar22 = param_1 + 0x3f8;
      }
      dVar34 = (double)*(float *)(lVar22 + -0x1c + lVar18);
      dVar38 = (double)*(float *)(lVar22 + -0x20 + lVar18);
      dVar10 = (double)*(float *)(lVar22 + -0x24 + lVar18);
      dVar36 = *(double *)(param_1 + 0x188);
      dVar52 = *(double *)(param_1 + 0x170);
      dVar13 = *(double *)(param_1 + 0x178);
      dVar14 = *(double *)(param_1 + 0x180);
      dVar15 = *(double *)(param_1 + 0x1d0);
      dVar16 = *(double *)(param_1 + 0x1d8);
      dVar17 = *(double *)(param_1 + 0x1e0);
      dVar49 = dVar10 * dVar14 - dVar52 * dVar34;
      dVar39 = dVar38 * dVar52 - dVar13 * dVar10;
      dVar40 = dVar34 * dVar13 - dVar14 * dVar38;
      dVar40 = dVar40 + dVar40;
      dVar49 = dVar49 + dVar49;
      dVar39 = dVar39 + dVar39;
      local_2c8 = (double)*(float *)(lVar22 + -0x10 + lVar18);
      uStack_2c0 = 0;
      dVar11 = (double)*(float *)(lVar22 + -0x14 + lVar18);
      dVar26 = (double)*(float *)(lVar22 + -0x18 + lVar18);
      dVar37 = *(double *)(param_1 + 0x1e8);
      dVar4 = *(double *)(param_1 + 0x1e8);
      dVar43 = dVar11 * dVar15 - dVar16 * dVar26;
      dVar35 = local_2c8 * dVar16 - dVar17 * dVar11;
      dVar45 = dVar26 * dVar17 - local_2c8 * dVar15;
      dVar35 = dVar35 + dVar35;
      dVar45 = dVar45 + dVar45;
      dVar43 = dVar43 + dVar43;
      dVar46 = (double)*(float *)(lVar22 + -4 + lVar18);
      dVar50 = (double)*(float *)(lVar22 + -8 + lVar18);
      dVar51 = (double)*(float *)(lVar22 + -0xc + lVar18);
      dVar12 = dVar50 * dVar15 - dVar16 * dVar51;
      dVar44 = dVar46 * dVar16 - dVar17 * dVar50;
      dVar27 = dVar51 * dVar17 - dVar46 * dVar15;
      dVar44 = dVar44 + dVar44;
      dVar27 = dVar27 + dVar27;
      dVar12 = dVar12 + dVar12;
      fVar25 = (float)(((dVar12 * dVar16 - dVar27 * dVar17) + dVar37 * dVar44 + dVar51) *
                       (((dVar39 * dVar13 - dVar49 * dVar14) + dVar36 * dVar40 + dVar10 +
                        *(double *)(param_1 + 400)) -
                       ((dVar43 * dVar16 - dVar45 * dVar17) + dVar37 * dVar35 + dVar26 +
                       *(double *)(param_1 + 0x1f0))) +
                       (((dVar14 * dVar40 - dVar52 * dVar39) +
                         *(double *)(param_1 + 0x188) * dVar49 + dVar38 +
                        *(double *)(param_1 + 0x198)) -
                       ((dVar17 * dVar35 - dVar15 * dVar43) + dVar4 * dVar45 + dVar11 +
                       *(double *)(param_1 + 0x1f8))) *
                       ((dVar17 * dVar44 - dVar15 * dVar12) + dVar4 * dVar27 + dVar50) +
                      (dVar12 * dVar37 + dVar46 + (dVar27 * dVar15 - dVar44 * dVar16)) *
                      ((dVar39 * dVar36 + dVar34 + (dVar49 * dVar52 - dVar40 * dVar13) +
                       *(double *)(param_1 + 0x1a0)) -
                      (dVar43 * dVar37 + local_2c8 + (dVar45 * dVar15 - dVar35 * dVar16) +
                      *(double *)(param_1 + 0x200))));
      *(float *)(lVar22 + lVar18) = fVar25;
      fVar3 = INFINITY;
      if ((longlong)*(int *)(param_1 + 0x16c) != -1) {
        lVar22 = *(longlong *)(param_1 + 0x5a8);
        if (*(longlong *)(param_1 + 0x5a8) == 0) {
          lVar22 = param_1 + 0x3f8;
        }
        fVar3 = *(float *)(lVar22 + 0x24 + (longlong)*(int *)(param_1 + 0x16c) * 0x6c);
      }
      if (fVar25 < fVar3) {
        *(int *)(param_1 + 0x16c) = (int)lVar19;
      }
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x6c;
    } while (lVar19 < *(int *)(param_1 + 0x5b0));
  }
  if ((local_d0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c2aca6 FUN_140c2aca6 body=618 status=ok
// SIG undefined FUN_140c2aca6(void)

void FUN_140c2aca6(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = *(undefined8 *)(param_1 + 0x78);
  *(longlong **)(param_1 + 0x78) = &local_78;
  lVar1 = param_1 + 0x48;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar1;
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    iVar11 = *(int *)(param_1 + 0x60);
  }
  lVar5 = local_60;
  iVar7 = (int)local_68;
  uVar9 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ != iVar11 || local_60 != lVar1) {
    do {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 0x30);
      if (lVar14 != 0) {
        uVar8 = *(uint *)(lVar14 + 0xc);
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        if (((*(uint *)(lVar13 + 8) >> 0x1c & 1) == 0) && (-1 < (short)*(undefined4 *)(lVar14 + 8)))
        {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 0x30 + 8);
          if (*(int *)(lVar14 + 0x80) == 0) {
            *(undefined4 *)(lVar14 + 0x80) = DAT_14cab2be4;
          }
          FUN_14029f2bc(lVar14,0);
        }
      }
      uVar9 = uVar9 & ~(uint)uVar15;
      lVar14 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        lVar14 = lVar5;
      }
      iVar3 = *(int *)(lVar5 + 0x18);
      lVar13 = (longlong)iVar7;
      uVar8 = *(uint *)(lVar14 + lVar13 * 4) & uVar9;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar4 = iVar6;
        if (iVar6 < iVar7) {
          iVar4 = iVar7;
        }
        if (iVar7 < iVar6) {
          lVar12 = 0;
          do {
            uVar8 = *(uint *)(lVar14 + lVar13 * 4 + 4 + lVar12 * 4);
            if (uVar8 != 0) {
              iVar7 = iVar7 + (int)lVar12 + 1;
              uVar9 = 0xffffffff;
              goto LAB_140c2ae35;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar4 - lVar13 != lVar12);
          uVar9 = 0xffffffff;
          iVar7 = iVar4;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar3;
      }
      else {
LAB_140c2ae35:
        uVar15 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar11 || lVar5 != lVar1);
  }
  *(undefined8 *)(param_1 + 0x78) = local_90;
  local_88 = local_78;
  local_80 = (undefined4)uStack_70;
  FUN_140c2af12(param_1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c2af12 FUN_140c2af12 body=407 status=ok
// SIG undefined FUN_140c2af12(void)

void FUN_140c2af12(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_2[1] != 0) {
    lVar5 = *param_2 + 0x18;
    lVar7 = (longlong)(int)param_2[1] * 0x28;
    do {
      if (((((*(int *)(lVar5 + -4) != 0) && (uVar1 = *(uint *)(lVar5 + -8), -1 < (int)uVar1)) &&
           ((int)uVar1 < DAT_14c9647dc)) &&
          ((plVar4 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(lVar5 + -4))))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
        iVar2 = *(int *)(lVar5 + 0xc);
        lVar3 = *(longlong *)(lVar5 + -0x18);
        if (iVar2 == 3) {
          local_58 = lVar3;
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_1456cec3c();
          }
          local_50 = *(undefined8 *)(lVar5 + -0x10);
          uVar6 = 0;
          plVar4 = &local_58;
        }
        else {
          if (iVar2 != 2) {
            if (iVar2 == 0) {
              local_38 = lVar3;
              if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
                FUN_1456cec3c();
              }
              local_30 = *(undefined8 *)(lVar5 + -0x10);
              FUN_140c2b0aa(param_1,lVar5);
            }
            else {
              local_68 = lVar3;
              if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
                FUN_1456cec3c();
              }
              local_60 = *(undefined8 *)(lVar5 + -0x10);
              FUN_140873c04(param_1);
            }
            goto LAB_140c2afea;
          }
          local_48 = lVar3;
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_1456cec3c();
          }
          local_40 = *(undefined8 *)(lVar5 + -0x10);
          plVar4 = &local_48;
          uVar6 = 1;
        }
        FUN_140a1af52(param_1,plVar4,uVar6);
      }
LAB_140c2afea:
      lVar5 = lVar5 + 0x28;
      lVar7 = lVar7 + -0x28;
    } while (lVar7 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c2b0aa FUN_140c2b0aa body=2148 status=ok
// SIG undefined FUN_140c2b0aa(void)

void FUN_140c2b0aa(longlong *param_1,float *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  short *psVar5;
  float *pfVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  longlong *plVar22;
  int iVar23;
  undefined2 *puVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  int local_134;
  float *local_130;
  int local_128;
  int local_124;
  undefined2 *local_120;
  int local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  undefined4 uStack_dc;
  longlong local_98 [7];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_168;
  pfVar6 = (float *)*param_3;
  if ((pfVar6 == (float *)0x0) || (plVar22 = (longlong *)param_3[1], plVar22 == (longlong *)0x0))
  goto LAB_140c2b425;
  plVar20 = (longlong *)param_1[0xf];
  if (plVar20 != (longlong *)0x0) {
    local_100 = pfVar6;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(pfVar6);
      plVar22 = (longlong *)param_3[1];
    }
    local_f0 = (ulonglong *)0x0;
    local_f8 = plVar22;
    FUN_14485c47a(&local_f0,pfVar6);
    local_e0 = param_2[2];
    uStack_e8 = *(ulonglong *)param_2;
    uStack_dc = 0;
    iVar10 = (int)plVar20[1];
    *(uint *)(plVar20 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar20 + 0xc) < iVar10 + 1U) {
      FUN_140a1b400(plVar20,iVar10);
    }
    puVar4 = (undefined8 *)(*plVar20 + (longlong)iVar10 * 0x28);
    *puVar4 = local_100;
    if ((local_100 != (float *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar4[1] = local_f8;
    *(undefined4 *)(puVar4 + 2) = (undefined4)local_f0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = local_f0._4_4_;
    *(undefined4 *)(puVar4 + 3) = (undefined4)uStack_e8;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_e8._4_4_;
    puVar4[4] = CONCAT44(uStack_dc,local_e0);
    goto LAB_140c2b425;
  }
  FUN_144a638f8(param_1,plVar22);
  if (*(char *)((longlong)param_2 + 9) == '\x01') {
    fVar29 = *param_2 * (1000.0 / (float)DAT_14c761004);
    local_124 = ((int)ROUND(-0.5 - (fVar29 + fVar29)) >> 1) * DAT_14c761004;
  }
  else {
    fVar29 = *param_2 * 1000.0;
    local_124 = (int)ROUND(-0.5 - (fVar29 + fVar29)) >> 1;
  }
  local_134 = -local_124;
  cVar7 = (**(code **)(*plVar22 + 0x18))(plVar22);
  plVar20 = param_1 + 7;
  iVar10 = (int)param_1[8];
  local_130 = param_2;
  if (iVar10 < 1) {
    uVar27 = 0;
  }
  else {
    lVar25 = 0;
    uVar27 = 0;
    do {
      plVar11 = (longlong *)param_1[0xb];
      if ((longlong *)param_1[0xb] == (longlong *)0x0) {
        plVar11 = param_1 + 9;
      }
      if ((*(uint *)((longlong)plVar11 + (uVar27 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar27 & 0x1f) & 1
          ) != 0) {
        lVar17 = *plVar20;
        cVar8 = *(char *)(lVar17 + 0x2c + lVar25);
        if (cVar7 == '\0') {
          if ((cVar8 == '\0') && (*(int *)(lVar17 + 0x18 + lVar25) == local_134)) break;
        }
        else if (cVar8 != '\0') {
          cVar8 = (**(code **)(*plVar22 + 0x28))(plVar22,*(undefined8 *)(lVar17 + lVar25));
          if (cVar8 != '\0') break;
          iVar10 = (int)param_1[8];
        }
      }
      uVar27 = uVar27 + 1;
      lVar25 = lVar25 + 0x30;
    } while ((longlong)uVar27 < (longlong)iVar10);
  }
  fVar29 = local_130[1] / 1000.0;
  iVar10 = (int)param_1[0xc];
  uVar26 = (uint)uVar27;
  if ((int)uVar26 < iVar10) {
    plVar11 = param_1 + 9;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[0xb];
    }
    if ((*(uint *)((longlong)plVar11 + (uVar27 >> 5 & 0x7ffffff) * 4) >> (uVar26 & 0x1f) & 1) == 0)
    goto LAB_140c2b200;
    lVar25 = *plVar20;
    lVar17 = (uVar27 & 0xffffffff) * 0x30;
    psVar5 = (short *)(lVar25 + 0x2a + lVar17);
    *psVar5 = *psVar5 + 1;
    fVar30 = *(float *)(lVar25 + 0x1c + lVar17);
    if ((fVar30 != fVar29) || (NAN(fVar30) || NAN(fVar29))) {
      if ((fVar30 != 0.0) || (NAN(fVar30))) {
        if ((fVar29 != 0.0) || (NAN(fVar29))) {
          if (fVar29 <= fVar30) {
            fVar30 = fVar29;
          }
          *(float *)(lVar25 + lVar17 + 0x1c) = fVar30;
        }
      }
      else {
        *(float *)(lVar25 + lVar17 + 0x1c) = fVar29;
      }
    }
  }
  else {
LAB_140c2b200:
    if (*(int *)((longlong)param_1 + 0x6c) == 0) {
      uVar26 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar26 + 1;
      if (*(uint *)((longlong)param_1 + 0x44) == uVar26) {
        FUN_140044672(plVar20,uVar26);
        iVar10 = (int)param_1[0xc];
      }
      if (iVar10 == 0) {
        iVar18 = -1;
      }
      else {
        iVar18 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar18 = iVar10 + -1;
        }
        iVar18 = iVar18 >> 5;
      }
      plVar11 = param_1 + 9;
      iVar15 = iVar10 + 1;
      iVar23 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar23 = iVar10;
      }
      iVar23 = iVar23 >> 5;
      if (iVar23 == iVar18) {
        *(int *)(param_1 + 0xc) = iVar15;
      }
      else {
        if (*(int *)((longlong)param_1 + 100) <= iVar10) {
          local_128 = iVar23;
          if (iVar10 + 0x20U < 0xa0) {
            iVar15 = 0x80;
            iVar18 = iVar10;
          }
          else {
            uVar21 = iVar10 + 0x20U >> 5;
            if (*(int *)((longlong)param_1 + 100) + 0x1fU < 0xa0) {
              uVar16 = 4;
              if (4 < uVar21) {
                uVar16 = uVar21;
              }
            }
            else {
              uVar16 = (uVar21 * 3 >> 3) + uVar21 + 0x10;
            }
            uVar27 = FUN_144a3809e(uVar16 << 2,0);
            iVar18 = (int)(uVar27 >> 2);
            iVar15 = -0x20;
            if ((int)uVar21 <= iVar18) {
              iVar15 = iVar18 << 5;
            }
            iVar18 = (int)param_1[0xc];
          }
          *(int *)((longlong)param_1 + 100) = iVar15;
          FUN_1446efbd8(plVar11,iVar18);
          iVar15 = (int)param_1[0xc] + 1;
          iVar23 = local_128;
        }
        iVar18 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar18 = iVar15;
        }
        *(int *)(param_1 + 0xc) = iVar15;
        if (iVar15 % 0x20 != 0) {
          plVar19 = (longlong *)param_1[0xb];
          if ((longlong *)param_1[0xb] == (longlong *)0x0) {
            plVar19 = plVar11;
          }
          bVar14 = -(char)(iVar15 % 0x20);
          *(uint *)((longlong)plVar19 + (longlong)(iVar18 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar18 >> 5) * 4) << (bVar14 & 0x1f))
               >> (bVar14 & 0x1f);
        }
      }
      lVar25 = (longlong)(int)uVar26;
      if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        plVar11 = (longlong *)param_1[0xb];
      }
      bVar14 = (byte)iVar10 & 0x1f;
      puVar2 = (uint *)((longlong)plVar11 + (longlong)iVar23 * 4);
      *puVar2 = *puVar2 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
    }
    else {
      uVar26 = *(uint *)(param_1 + 0xd);
      lVar25 = (longlong)(int)uVar26;
      iVar10 = *(int *)(param_1[7] + 4 + lVar25 * 0x30);
      *(int *)(param_1 + 0xd) = iVar10;
      iVar18 = *(int *)((longlong)param_1 + 0x6c) + -1;
      *(int *)((longlong)param_1 + 0x6c) = iVar18;
      if (iVar18 != 0) {
        *(undefined4 *)(param_1[7] + (longlong)iVar10 * 0x30) = 0xffffffff;
      }
    }
    plVar11 = param_1 + 9;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[0xb];
    }
    uVar21 = uVar26 + 0x1f;
    if (-1 < (int)uVar26) {
      uVar21 = uVar26;
    }
    puVar2 = (uint *)((longlong)plVar11 + (longlong)((int)uVar21 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar26 & 0x1f);
    lVar17 = param_1[7];
    lVar25 = lVar25 * 0x30;
    puVar4 = (undefined8 *)(lVar17 + 0x20 + lVar25);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)(lVar17 + 0x10 + lVar25);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined8 *)(lVar17 + lVar25) = 0;
    ((undefined8 *)(lVar17 + lVar25))[1] = 0;
    *(undefined8 *)(lVar17 + 0x20 + lVar25) = 0xbf800000bf800000;
    local_100 = &local_e0;
    uStack_e8 = uStack_e8 & 0xffffffffffffff00;
    local_f0 = local_60;
    memcpy(local_100,L"MovieSceneSequencePlayerEntityLinker",0x48);
    local_f8 = local_98;
    if (local_124 != 0) {
      FUN_140212e80(&local_100,L"_%i_ms",local_134);
    }
    cVar7 = (**(code **)(*plVar22 + 0x18))(plVar22);
    if (cVar7 == '\0') {
      *(undefined2 *)local_f8 = 0;
      FUN_1446f470e(&local_110,local_100,1);
      uVar12 = FUN_1407f013e();
      uVar13 = (**(code **)(*param_1 + 0x180))(param_1);
      local_148 = 0;
      FUN_140af9fb2(local_108,uVar13,uVar12,local_110);
      FUN_1400021e4(local_108,&local_120);
      puVar24 = local_120;
      if (local_118 == 0) {
        puVar24 = &DAT_149dfb77a;
      }
      uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar25 = FUN_1407f0098(uVar12,1,puVar24);
      if (local_120 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar25 = (**(code **)(*plVar22 + 0x20))(plVar22);
    }
    plVar20 = (longlong *)((longlong)(int)uVar26 * 0x30 + *plVar20);
    if ((lVar25 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar25);
    }
    *plVar20 = lVar25;
    lVar17 = *(longlong *)(lVar25 + 0x5d8);
    plVar11 = *(longlong **)(lVar25 + 0x5e0);
    if (plVar11 == (longlong *)0x0) {
      plVar20[1] = lVar17;
      plVar19 = (longlong *)plVar20[2];
      if (plVar19 != (longlong *)0x0) {
        plVar20[2] = 0;
LAB_140c2b834:
        LOCK();
        plVar1 = plVar19 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar3 = (int *)((longlong)plVar19 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
LAB_140c2b871:
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
        if (plVar11 != (longlong *)0x0) goto LAB_140c2b361;
      }
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      plVar20[1] = lVar17;
      plVar19 = (longlong *)plVar20[2];
      if (plVar11 == plVar19) {
        LOCK();
        plVar19 = plVar11 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          plVar19 = plVar11;
          if (*piVar3 == 0) goto LAB_140c2b871;
        }
      }
      else {
        plVar20[2] = (longlong)plVar11;
        if (plVar19 != (longlong *)0x0) goto LAB_140c2b834;
      }
LAB_140c2b361:
      LOCK();
      plVar19 = plVar11 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    *(int *)(plVar20 + 3) = local_134;
    *(float *)((longlong)plVar20 + 0x1c) = fVar29;
    *(undefined2 *)((longlong)plVar20 + 0x2a) = 1;
    uVar9 = (**(code **)(*plVar22 + 0x18))(plVar22);
    *(undefined1 *)((longlong)plVar20 + 0x2c) = uVar9;
    if ((char)uStack_e8 == '\x01') {
      FUN_1400020a8(local_100);
    }
  }
  fVar29 = pfVar6[3];
  if ((int)fVar29 < DAT_14c9647dc) {
    lVar25 = (ulonglong)(((uint)fVar29 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)fVar29 >> 0x10) * 8);
  }
  else {
    lVar25 = 0;
  }
  iVar10 = *(int *)(lVar25 + 0x10);
  if (*(int *)(lVar25 + 0x10) == 0) {
    LOCK();
    iVar10 = DAT_14c964868 + 1;
    UNLOCK();
    iVar18 = DAT_14c964868 + 1;
    bVar28 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar10;
    if (bVar28) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar18);
    }
    LOCK();
    iVar10 = *(int *)(lVar25 + 0x10);
    bVar28 = iVar10 == 0;
    if (bVar28) {
      *(int *)(lVar25 + 0x10) = iVar18;
      iVar10 = 0;
    }
    UNLOCK();
    if (bVar28) {
      iVar10 = iVar18;
    }
  }
  uVar9 = *(undefined1 *)(local_130 + 2);
  iVar18 = (int)param_1[6];
  lVar25 = (longlong)iVar18;
  *(uint *)(param_1 + 6) = iVar18 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar18 + 1U) {
    FUN_140a1b28a(param_1 + 5,iVar18);
  }
  lVar17 = param_1[5];
  *(longlong **)(lVar17 + lVar25 * 0x18) = plVar22;
  *(float *)(lVar17 + 8 + lVar25 * 0x18) = fVar29;
  *(int *)(lVar17 + 0xc + lVar25 * 0x18) = iVar10;
  *(uint *)(lVar17 + 0x10 + lVar25 * 0x18) = uVar26 & 0xffff;
  *(undefined1 *)(lVar17 + 0x14 + lVar25 * 0x18) = uVar9;
  *(undefined2 *)(lVar17 + 0x15 + lVar25 * 0x18) = (undefined2)local_100;
  *(undefined1 *)(lVar17 + 0x17 + lVar25 * 0x18) = local_100._2_1_;
LAB_140c2b425:
  if ((local_60[0] ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c2b914 FUN_140c2b914 body=381 status=ok
// SIG undefined FUN_140c2b914(void)

ulonglong FUN_140c2b914(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x18)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     ((uVar3 == 0 || (0x40 < (int)uVar5)))) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0x18;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0x555) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x1ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140c2b9e0;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0x1ffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_140c2b9e0:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0x18;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0x18,8);
    }
  }
  return uVar6;
}



// FUNCTION 140c2ba92 FUN_140c2ba92 body=43 status=ok
// SIG undefined FUN_140c2ba92(void)

void FUN_140c2ba92(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1403f511a(param_1 + 0x120);
  if (cVar1 != '\x02') {
    return;
  }
  FUN_140c2babe(param_1);
  return;
}



// FUNCTION 140c2babe FUN_140c2babe body=1475 status=ok
// SIG undefined FUN_140c2babe(void)

ulonglong FUN_140c2babe(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  uint3 uVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_EBP;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined4 local_b0;
  char local_ac;
  undefined4 local_a8;
  char local_a4;
  char local_a0 [8];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = FUN_14387a03c();
  uVar11 = (ulonglong)uVar9;
  if ((char)uVar9 != '\x02') goto LAB_140c2bf8a;
  FUN_14021eaf0(param_1);
  if ((param_1[0x1b] != 0) && (cVar7 = FUN_14496c27c(param_1[0x1b] + 0x158), cVar7 != '\0')) {
    lVar3 = param_1[9];
    uVar9 = *(uint *)(lVar3 + 0x19c);
    uVar11 = (ulonglong)uVar9;
    if ((uVar9 != 0) || (((char)param_1[0x1f] != '\x01' || (*(char *)(lVar3 + 0x1a2) == '\x01')))) {
      plVar12 = param_1 + 0x1b;
      if (*(char *)(lVar3 + 0x1a4) == '\x01') {
        lVar14 = param_1[8];
        local_b8 = plVar12;
        if (lVar14 == 0) {
          lVar17 = 0;
          local_98 = (longlong *)0x0;
LAB_140c2bfeb:
          local_90 = (longlong *)0x0;
          bVar18 = true;
        }
        else {
          if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_140c2bf3d:
            lVar17 = 0;
          }
          else {
            uVar13 = *(uint *)(lVar14 + 0x48);
            lVar17 = 0;
            if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
              plVar12 = (longlong *)
                        ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
              if ((plVar12 == (longlong *)0x0) ||
                 (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
                  ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_140c2bf3d;
              lVar17 = *plVar12;
            }
          }
          plVar12 = *(longlong **)(lVar14 + 0x118);
          local_98 = param_1;
          if (plVar12 == (longlong *)0x0) goto LAB_140c2bfeb;
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
          UNLOCK();
          LOCK();
          plVar5 = plVar12 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
          LOCK();
          *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
          UNLOCK();
          bVar18 = false;
          local_90 = plVar12;
        }
        plVar12 = local_90;
        local_78[0] = 0;
        local_a0[0] = '\x03';
        local_88._0_4_ = 0;
        if (lVar17 == 0) {
          iVar10 = 0;
          uVar13 = (uint)local_88;
        }
        else {
          uVar13 = *(uint *)(lVar17 + 0xc);
          local_88 = (ulonglong)uVar13;
          if ((int)uVar13 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar10 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar10 = DAT_14c964868 + 1;
            UNLOCK();
            iVar16 = DAT_14c964868 + 1;
            bVar19 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar19) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar16);
            }
            LOCK();
            iVar10 = *(int *)(lVar14 + 0x10);
            bVar19 = iVar10 == 0;
            if (bVar19) {
              *(int *)(lVar14 + 0x10) = iVar16;
              iVar10 = 0;
            }
            UNLOCK();
            uVar13 = (uint)local_88;
            if (bVar19) {
              iVar10 = iVar16;
            }
          }
        }
        local_88._0_4_ = uVar13;
        local_88 = CONCAT44(iVar10,(uint)local_88);
        local_80 = 2;
        if (local_78[0] != 0) {
          FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
          local_78[0] = 0;
        }
        if (!bVar18) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        FUN_1447c3578(lVar3 + 0x1a8,local_70,local_a0);
        unaff_EBP = FUN_1405d5f74(local_70);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar15 = local_70;
          if (0x18 < local_58) {
            ppppuVar15 = (undefined8 ****)local_70[0];
          }
          (*pcVar4)(ppppuVar15);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
        FUN_1448173f8(local_78);
        if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_90 + 0x10))();
          }
        }
        cVar7 = '\x01';
        plVar12 = local_b8;
      }
      else {
        cVar7 = '\0';
      }
      uVar13 = uVar9 & 0xfffffffe;
      cVar8 = '\x02';
      if (*(char *)(*plVar12 + 0x150) != '\x03') {
        cVar8 = *(char *)(*plVar12 + 0x150) == '\x02';
      }
      uVar6 = (uint3)(uVar9 >> 8);
      if (cVar8 == '\0') {
        uVar11 = (ulonglong)CONCAT31(uVar6,uVar13 != 2);
        goto LAB_140c2bf8a;
      }
      if (cVar8 == '\x01') {
        plVar5 = (longlong *)param_1[0x1e];
        if (plVar5 != (longlong *)0x0) {
          iVar10 = (int)plVar5[1];
          do {
            if (iVar10 == 0) goto LAB_140c2bf88;
            LOCK();
            iVar16 = (int)plVar5[1];
            bVar18 = iVar10 == iVar16;
            if (bVar18) {
              *(int *)(plVar5 + 1) = iVar10 + 1;
              iVar16 = iVar10;
            }
            iVar10 = iVar16;
            UNLOCK();
          } while (!bVar18);
          lVar14 = param_1[0x1d];
          if (lVar14 == 0) {
LAB_140c2bf61:
            bVar18 = false;
            uVar11 = 0;
          }
          else {
            local_b8 = plVar12;
            cVar8 = FUN_1400de3ce(*(longlong *)(lVar14 + 0xcc8) + 0x1bc0,*plVar12 + 0x238,
                                  lVar14 + 0x588);
            if (cVar8 == '\0') {
              cVar7 = FUN_144903750(lVar14,local_b8,(*(byte *)(lVar3 + 0x1a1) ^ 1) & uVar13 != 2);
              if (cVar7 != '\0') {
                if (cVar7 != '\x02') {
                  if (cVar7 != '\x01') {
                    bVar18 = true;
                    goto LAB_140c2bf66;
                  }
                  if (uVar9 != 0) {
                    uVar11 = CONCAT71((uint7)uVar6,2);
                    goto LAB_140c2bf50;
                  }
                  *(undefined1 *)(param_1 + 0x1f) = 1;
                }
                goto LAB_140c2bf61;
              }
              uVar11 = (ulonglong)CONCAT31(uVar6,(uVar13 != 2) * '\x02');
LAB_140c2bf50:
              bVar18 = false;
            }
            else {
              bVar18 = false;
              uVar11 = 0;
              if (*(char *)(lVar3 + 0x1a3) == '\x01') {
                if (cVar7 != '\0') {
                  local_b0 = unaff_EBP;
                }
                local_ac = cVar7;
                cVar7 = (**(code **)(*param_1 + 0x130))(param_1,&local_b0);
                bVar18 = false;
                uVar11 = 0;
                if (cVar7 != '\0') {
                  param_1[0x1b] = 0;
                  plVar12 = (longlong *)param_1[0x1c];
                  uVar11 = 1;
                  if (plVar12 != (longlong *)0x0) {
                    param_1[0x1c] = 0;
                    LOCK();
                    plVar2 = plVar12 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
                      (**(code **)*plVar12)(plVar12);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar12 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar12 + 0x10))(plVar12);
                      }
                    }
                  }
                  goto LAB_140c2bf50;
                }
              }
            }
          }
LAB_140c2bf66:
          LOCK();
          plVar12 = plVar5 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          if (!bVar18) goto LAB_140c2bf8a;
        }
      }
      else if (*(char *)(lVar3 + 0x1a3) == '\x01') {
        if (cVar7 != '\0') {
          local_a8 = unaff_EBP;
        }
        local_a4 = cVar7;
        cVar7 = (**(code **)(*param_1 + 0x130))(param_1,&local_a8);
        if (cVar7 != '\0') {
          param_1[0x1b] = 0;
          plVar12 = (longlong *)param_1[0x1c];
          uVar11 = CONCAT71((uint7)uVar6,1);
          if (plVar12 != (longlong *)0x0) {
            param_1[0x1c] = 0;
            LOCK();
            plVar5 = plVar12 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          goto LAB_140c2bf8a;
        }
      }
    }
  }
LAB_140c2bf88:
  uVar11 = 0;
LAB_140c2bf8a:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 140c2c082 FUN_140c2c082 body=93 status=ok
// SIG undefined FUN_140c2c082(void)

void FUN_140c2c082(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acdbb10;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140c2c0e0 FUN_140c2c0e0 body=40 status=ok
// SIG undefined FUN_140c2c0e0(void)

undefined8 FUN_140c2c0e0(undefined8 param_1,int param_2)

{
  FUN_140c2c108();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c2c108 FUN_140c2c108 body=685 status=ok
// SIG undefined FUN_140c2c108(void)

void FUN_140c2c108(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6ff190;
  FUN_140368c45(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x3e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x3c];
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
  if (*(char *)((longlong)param_1 + 0x1d4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1d4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1bc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1bc) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1b4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1b4) = 0;
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x30];
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
  plVar3 = (longlong *)param_1[0x2e];
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
  plVar3 = (longlong *)param_1[0x2c];
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
  FUN_140c2c3ef(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_140c2c3b5(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_140c2c3b5(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140c2c418(param_1);
  return;
}



// FUNCTION 140c2c3b5 FUN_140c2c3b5 body=58 status=ok
// SIG undefined FUN_140c2c3b5(void)

void FUN_140c2c3b5(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c2c3ef FUN_140c2c3ef body=40 status=ok
// SIG undefined FUN_140c2c3ef(void)

void FUN_140c2c3ef(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457876b4(param_1);
    param_1 = param_1 + 0x54;
  }
  return;
}



// FUNCTION 140c2c418 FUN_140c2c418 body=210 status=ok
// SIG undefined FUN_140c2c418(void)

void FUN_140c2c418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b42f6b0;
  FUN_144760e21(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8724f(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb58c8(param_1 + 9);
  FUN_140d2c265(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140cf8141(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140c2c4ea FUN_140c2c4ea body=210 status=ok
// SIG undefined FUN_140c2c4ea(void)

void FUN_140c2c4ea(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2c5be();
  local_28 = 0;
  local_38 = 8;
  local_30 = 1;
  local_48 = L"HealthState";
  local_40 = 0x100000012;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"GrappleableState";
  local_40 = 0x100000013;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"bGrappleEnabled";
  local_40 = 0x100000011;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2c5be FUN_140c2c5be body=314 status=ok
// SIG undefined FUN_140c2c5be(void)

void FUN_140c2c5be(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c2c6fa();
  local_30 = 0;
  local_40 = 1;
  local_38 = 1;
  local_48 = 0;
  local_58 = 0;
  local_50 = 1;
  local_68 = L"FactsConduit";
  local_60 = (undefined1 *)0x10000000e;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"GbxActorData";
  local_60 = &DAT_10000000c;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"RotationState";
  local_60 = (undefined1 *)0x10000000d;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"UsableActorState";
  local_60 = &DAT_10000000b;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"GbxActorPartOwnerState";
  local_60 = &DAT_100000010;
  FUN_140c2c993(&local_68,param_2,&local_58);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2c6fa FUN_140c2c6fa body=664 status=ok
// SIG undefined FUN_140c2c6fa(void)

void FUN_140c2c6fa(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  wchar_t *local_90;
  undefined1 *local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14043ab18();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      (**(code **)(*plVar1 + 0x3f0))(plVar1,param_2);
    }
  }
  local_40 = 0;
  local_50 = 0;
  local_48 = 1;
  local_68 = L"bReplicateMovement";
  local_60 = (undefined1 *)0x100000000;
  FUN_140c2c993(&local_68,param_2,&local_50);
  local_68 = L"Role";
  local_60 = (undefined1 *)0x100000009;
  FUN_140c2c993(&local_68,param_2,&local_50);
  local_68 = L"RemoteRole";
  local_60 = &DAT_100000004;
  FUN_140c2c993(&local_68,param_2,&local_50);
  local_68 = L"Owner";
  local_60 = &DAT_100000008;
  FUN_140c2c993(&local_68,param_2,&local_50);
  local_68 = L"bHidden";
  local_60 = &DAT_100000001;
  FUN_140c2c993(&local_68,param_2,&local_50);
  local_68 = L"bTearOff";
  local_60 = &DAT_100000002;
  FUN_140c2c993(&local_68,param_2,&local_50);
  local_68 = L"bCanBeDamaged";
  local_60 = &DAT_100000003;
  FUN_140c2c993(&local_68,param_2,&local_50);
  local_68 = L"Instigator";
  local_60 = &DAT_10000000a;
  FUN_140c2c993(&local_68,param_2,&local_50);
  local_68 = (wchar_t *)&DAT_100000008;
  local_60 = (undefined1 *)CONCAT71(local_60._1_7_,1);
  local_58 = 0;
  local_80 = L"AttachmentReplication";
  local_78 = 0x100000006;
  FUN_140c2c993(&local_80,param_2,&local_68);
  local_80 = (wchar_t *)0x100000006;
  local_78 = CONCAT71(local_78._1_7_,1);
  local_70 = 0;
  local_90 = L"ReplicatedMovement";
  local_88 = &DAT_100000007;
  FUN_140c2c993(&local_90,param_2,&local_80);
  local_90 = L"CustomTimeDilation";
  local_88 = (undefined1 *)0x100000005;
  FUN_140c2c993(&local_90,param_2,&local_50);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2c993 FUN_140c2c993 body=321 status=ok
// SIG undefined FUN_140c2c993(void)

void FUN_140c2c993(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  short sVar12;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined8 local_58;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0xc);
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      sVar12 = (short)*(undefined4 *)(param_1 + 8) + (short)iVar5;
      psVar2 = (short *)*param_2;
      iVar1 = *(int *)(param_2 + 1);
      lVar11 = (longlong)iVar1;
      if (lVar11 != 0) {
        lVar6 = lVar11 * 0x18;
        psVar4 = psVar2;
        do {
          if (*psVar4 == sVar12) {
            uVar8 = *(undefined1 *)(param_3 + 2);
            uVar9 = *param_3;
            uVar10 = param_3[1];
            uVar7 = *(undefined8 *)(param_3 + 4);
            if (psVar4 == (short *)0x0) goto LAB_140c2ca0d;
            if (*(int *)(psVar4 + 2) != 0xf) goto LAB_140c2ca4c;
            *psVar4 = sVar12;
            *(undefined4 *)(psVar4 + 2) = uVar9;
            *(undefined4 *)(psVar4 + 4) = uVar10;
            *(undefined1 *)(psVar4 + 6) = uVar8;
            goto LAB_140c2ca45;
          }
          psVar4 = psVar4 + 0xc;
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != 0);
      }
      uVar8 = *(undefined1 *)(param_3 + 2);
      uVar9 = *param_3;
      uVar10 = param_3[1];
      uVar7 = *(undefined8 *)(param_3 + 4);
LAB_140c2ca0d:
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        local_59 = uVar8;
        local_58 = uVar7;
        FUN_146f1c730(param_2,iVar1);
        psVar2 = (short *)*param_2;
        uVar7 = local_58;
        uVar8 = local_59;
      }
      psVar4 = psVar2 + lVar11 * 0xc;
      *psVar4 = sVar12;
      *(undefined4 *)(psVar4 + 2) = uVar9;
      *(undefined4 *)(psVar4 + 4) = uVar10;
      *(undefined1 *)(psVar4 + 6) = uVar8;
      *(undefined2 *)((longlong)psVar4 + 0xd) = local_4b;
      *(undefined1 *)((longlong)psVar4 + 0xf) = local_49;
LAB_140c2ca45:
      *(undefined8 *)(psVar4 + 8) = uVar7;
      iVar3 = *(int *)(param_1 + 0xc);
LAB_140c2ca4c:
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2cad6 FUN_140c2cad6 body=161 status=ok
// SIG undefined FUN_140c2cad6(void)

void FUN_140c2cad6(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  
  if (*(longlong **)(param_1 + 0x1cc8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1cc8) + 0x28))();
    puVar1 = *(undefined8 **)(param_1 + 0x1cc8);
    *(undefined8 *)(param_1 + 0x1cc8) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  lVar5 = 0;
  bVar3 = true;
  do {
    bVar4 = bVar3;
    plVar2 = *(longlong **)(param_1 + 0x1cd0 + lVar5 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
      puVar1 = *(undefined8 **)(param_1 + 0x1cd0 + lVar5 * 8);
      *(undefined8 *)(param_1 + 0x1cd0 + lVar5 * 8) = 0;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    lVar5 = 1;
    bVar3 = false;
  } while (bVar4);
  FUN_140c2cb78(param_1,param_2);
  return;
}



// FUNCTION 140c2cb78 FUN_140c2cb78 body=115 status=ok
// SIG undefined FUN_140c2cb78(void)

void FUN_140c2cb78(longlong param_1,undefined4 param_2)

{
  FUN_140c2cbec(param_1 + 0x203,param_1);
  FUN_140790e84(param_1 + 0x1758);
  *(undefined8 *)(param_1 + 0x15d8) = 0;
  FUN_140283eaa(param_1 + 0x1640,0);
  FUN_140c2cd38(param_1,param_2);
  *(undefined8 *)(param_1 + 0x1590) = 0;
  FUN_1406398aa(param_1 + 0x15a8,0);
  FUN_140c2cc50(param_1 + 0x16e0);
  return;
}



// FUNCTION 140c2cbec FUN_140c2cbec body=98 status=ok
// SIG undefined FUN_140c2cbec(void)

void FUN_140c2cbec(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == '\x01') {
    FUN_140649f3e(param_1,&local_28);
    cVar1 = FUN_140819828(param_1 + -0x203,local_28,param_2);
    *param_1 = cVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2cc50 FUN_140c2cc50 body=230 status=ok
// SIG undefined FUN_140c2cc50(void)

void FUN_140c2cc50(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) && (*(int *)(param_1 + 0x2c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x2c))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
      FUN_140457ffc(lVar3 + 0x40,param_1);
      FUN_140457ffc(lVar3 + 0x58,param_1);
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  cVar2 = FUN_14493c216(&local_38,0);
  if (cVar2 == '\0') {
    uStack_30 = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = local_38;
  *(undefined8 *)(param_1 + 0x30) = uStack_30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2cd38 FUN_140c2cd38 body=712 status=ok
// SIG undefined FUN_140c2cd38(void)

void FUN_140c2cd38(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  FUN_1406335ea(param_1 + 0x770);
  FUN_14078a7c0(param_1 + 0x11f8);
  FUN_140872868(param_1 + 0x550);
  *(undefined1 *)(param_1 + 0xc49) = 1;
  FUN_14067171c(param_1 + 0xc10);
  *(undefined8 *)(param_1 + 0xc10) = 0;
  FUN_140c2d000(param_1 + 0xb08);
  FUN_1405213ee(param_1 + 0x940);
  FUN_1409998f6(param_1 + 0x1378,0);
  *(undefined8 *)(param_1 + 0x1370) = 0;
  *(undefined1 *)(param_1 + 0x13a8) = 0;
  puVar8 = *(undefined4 **)(param_1 + 0x888);
  if (puVar8 != (undefined4 *)0x0) {
    do {
      FUN_145cfd944(param_1 + 0x828,*puVar8);
      puVar8 = *(undefined4 **)(param_1 + 0x888);
    } while (puVar8 != (undefined4 *)0x0);
  }
  plVar6 = *(longlong **)(param_1 + 0x920);
  plVar7 = *(longlong **)(param_1 + 0x928);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6,0);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_140ce5524(param_1 + 0x11d0,0);
  if (*(longlong *)(param_1 + 0x818) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0x818) = 0;
    plVar6 = *(longlong **)(param_1 + 0x820);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x820) = 0;
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  }
  if ((*(longlong *)(param_1 + 0x1310) != 0) && (*(longlong *)(param_1 + 0x1318) != 0)) {
    FUN_140ccfb62();
  }
  if (*(longlong *)(param_1 + 0x810) != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x810);
    uVar9 = FUN_1401b4c98(param_1);
    lVar10 = FUN_144a61814(uVar9,puVar4);
    if (lVar10 != 0) {
      FUN_1405a424c(uVar9,*puVar4);
    }
    *puVar4 = 0;
  }
  if ((param_2 == 0) && (*(int *)(param_1 + 0x11f4) != 0)) {
    puVar3 = (uint *)(param_1 + 0x11f0);
    uVar5 = *puVar3;
    if (((-1 < (int)uVar5) &&
        ((((int)uVar5 < DAT_14c9647dc &&
          (lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar10 != 0)) &&
         (*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x11f4))))) &&
       ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) {
      uVar9 = FUN_14479d2ce(puVar3);
      FUN_140aeefbc(uVar9,0,1);
      puVar3[0] = 0;
      puVar3[1] = 0;
    }
  }
  FUN_1401073f6(param_1 + 0xd18,param_1);
  FUN_1401073f6(param_1 + 0xd28,param_1);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 140c2d000 FUN_140c2d000 body=329 status=ok
// SIG undefined FUN_140c2d000(void)

void FUN_140c2d000(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(longlong *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
      (uVar3 = *(uint *)(param_1 + 0x28), -1 < (int)uVar3)) &&
     ((((int)uVar3 < DAT_14c9647dc &&
       (puVar7 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       puVar7 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x2c) &&
       ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
      uVar6 = *puVar7;
    }
    else {
      uVar6 = 0;
    }
    uVar6 = FUN_1447210f0(uVar6);
    FUN_14060a688(&local_40,uVar6);
    if (local_38 != (longlong *)0x0) {
      iVar5 = (int)local_38[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_38[1];
        bVar9 = iVar5 == iVar4;
        if (bVar9) {
          *(int *)(local_38 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar8 = local_38;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_40 != 0) {
          FUN_140c4b9d0(&local_40,*(undefined8 *)(param_1 + 0x30));
          local_30 = &local_40;
          FUN_140c2d14a(local_40 + 0x30);
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c2d14a FUN_140c2d14a body=260 status=ok
// SIG undefined FUN_140c2d14a(void)

int FUN_140c2d14a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    lVar1 = *param_1;
    iVar5 = 0;
    bVar10 = *(longlong *)(lVar1 + 8) == *(longlong *)(*param_2 + 8);
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar3 = iVar11 + 1;
      if (iVar11 + 1 < iVar6) {
        iVar3 = iVar6;
      }
      lVar4 = lVar9 * 0x10;
      plVar8 = (longlong *)(lVar1 + 0x18 + lVar4);
      iVar12 = iVar11;
      do {
        lVar9 = lVar9 + 1;
        iVar13 = iVar3;
        if (lVar7 <= lVar9) break;
        lVar2 = *plVar8;
        iVar12 = iVar12 + 1;
        plVar8 = plVar8 + 2;
        iVar13 = iVar12;
      } while (bVar10 == (lVar2 == *(longlong *)(*param_2 + 8)));
      if (bVar10 == false) {
        if (iVar5 != iVar11) {
          memmove((void *)((longlong)iVar5 * 0x10 + lVar1),(void *)(lVar4 + lVar1),
                  (longlong)(iVar13 - iVar11) << 4);
        }
        iVar5 = iVar5 + (iVar13 - iVar11);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar11 = iVar13;
    } while (lVar9 < lVar7);
    *(int *)(param_1 + 1) = iVar5;
    iVar6 = iVar6 - iVar5;
  }
  return iVar6;
}



// FUNCTION 140c2d24e FUN_140c2d24e body=97 status=ok
// SIG undefined FUN_140c2d24e(void)

float * FUN_140c2d24e(undefined8 param_1,float *param_2)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c2d2b0(param_1,&local_28);
  *param_2 = local_20 - local_28;
  param_2[1] = local_1c - local_24;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2d2b0 FUN_140c2d2b0 body=488 status=ok
// SIG undefined FUN_140c2d2b0(void)

float * FUN_140c2d2b0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [40];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_1 + 0x369) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x369) & 1) == 0) {
      fVar1 = *(float *)(param_1 + 0x380);
      fVar2 = *(float *)(param_1 + 900);
      fVar3 = *(float *)(param_1 + 0x394);
      fVar4 = *(float *)(param_1 + 0x390);
      plVar7 = (longlong *)0x0;
      FUN_14697fe60(param_1,&local_90,0);
      fVar9 = 1.0;
      fVar8 = fVar9;
      if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
        fVar8 = (float)(**(code **)(**(longlong **)(param_1 + 0x510) + 0xf8))();
        plVar7 = *(longlong **)(param_1 + 0x510);
      }
      fVar5 = *(float *)(param_1 + 0x3b4);
      if (plVar7 != (longlong *)0x0) {
        fVar9 = (float)(**(code **)(*plVar7 + 0xf8))(plVar7);
      }
      *param_2 = fVar1 + fVar8 * local_90 + 0.0;
      param_2[1] = fVar2 + local_8c * fVar8 + fVar5 * fVar9;
      param_2[2] = (fVar4 + fVar1) - local_88 * fVar8;
      param_2[3] = (fVar3 + fVar2) - local_84 * fVar8;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x380);
      fVar2 = *(float *)(param_1 + 900);
      fVar3 = *(float *)(param_1 + 0x394);
      fVar4 = *(float *)(param_1 + 0x390);
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar4 + fVar1;
      param_2[3] = fVar3 + fVar2;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x390);
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    *(undefined8 *)(param_2 + 2) = uVar6;
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c2d49a FUN_140c2d49a body=1314 status=ok
// SIG undefined FUN_140c2d49a(void)

void FUN_140c2d49a(int *param_1)

{
  WCHAR *lpDevice;
  uint uVar1;
  char cVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  uint uVar9;
  DWORD iDevNum;
  uint uVar10;
  float fVar11;
  undefined1 auStack_888 [32];
  undefined4 local_868;
  undefined4 local_860;
  DWORD local_854;
  longlong *local_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  byte local_7e8;
  int local_7e4;
  _DISPLAY_DEVICEW local_7e0;
  _DISPLAY_DEVICEW local_498;
  DEVMODEW local_150;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_888;
  cVar2 = FUN_145787e4e();
  if (cVar2 == '\0') {
    iVar5 = 0;
    iVar3 = GetSystemMetrics(0);
    *param_1 = iVar3;
    iVar3 = GetSystemMetrics(1);
    param_1[1] = iVar3;
    BVar4 = SystemParametersInfoW(0x30,0,&local_848,0);
    if (BVar4 == 0) {
      local_848 = 0;
      uStack_840 = 0;
      uStack_840._0_4_ = 0;
      local_848._4_4_ = 0;
      local_848._0_4_ = 0;
    }
    else {
      iVar5 = uStack_840._4_4_;
    }
    param_1[6] = (int)local_848;
    param_1[7] = local_848._4_4_;
    param_1[8] = (int)uStack_840;
    param_1[9] = iVar5;
    iVar5 = GetSystemMetrics(0x4c);
    param_1[10] = iVar5;
    iVar5 = GetSystemMetrics(0x4d);
    param_1[0xb] = iVar5;
    iVar5 = param_1[10];
    iVar3 = GetSystemMetrics(0x4e);
    param_1[0xc] = iVar3 + iVar5;
    iVar5 = param_1[0xb];
    iVar3 = GetSystemMetrics(0x4f);
    param_1[0xd] = iVar3 + iVar5;
    plVar8 = (longlong *)(param_1 + 2);
    local_498.cb = 0x348;
    FUN_140ecb711(*(undefined8 *)(param_1 + 2));
    param_1[4] = 0;
    if (param_1[5] != 2) {
      FUN_145787ede(plVar8);
    }
    BVar4 = EnumDisplayDevicesW((LPCWSTR)0x0,0,&local_498,0);
    if (BVar4 != 0) {
      lpDevice = local_498.DeviceName;
      iDevNum = 0;
      do {
        if (((byte)local_498.StateFlags & 1) != 0) {
          memset(local_7e0.DeviceName,0,0x344);
          local_7e0.cb = 0x348;
          BVar4 = EnumDisplayDevicesW(lpDevice,0,&local_7e0,0);
          if (BVar4 != 0) {
            DVar7 = 0;
            local_850 = plVar8;
            do {
              if ((local_7e0.StateFlags & 9) == 1) {
                local_7e4 = 0;
                local_838 = 0;
                uStack_830 = 0;
                local_828 = 0;
                uStack_820 = 0;
                local_818 = 0;
                uStack_810 = 0;
                local_808 = 0;
                uStack_800 = 0;
                local_7f8 = 0;
                uStack_7f0 = 0;
                local_7e8 = 0;
                local_854 = DVar7;
                FUN_14020fad6(&local_838,lpDevice);
                EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,FUN_142850c9e,(LPARAM)&local_838);
                FUN_140002266(&local_150,&DAT_149e0625e,local_7e0.DeviceID);
                if (local_828 != 0) {
                  FUN_1400020a8();
                }
                local_828 = CONCAT44(local_150.dmDeviceName._4_4_,local_150.dmDeviceName._0_4_);
                local_860 = 9;
                local_868 = 0;
                iVar5 = FUN_1447ee042(&local_828,&DAT_149e01f64,1,0);
                FUN_144a63a7c(&local_828,&local_150,8,iVar5 + -8);
                if (local_838 != 0) {
                  FUN_1400020a8();
                }
                local_838 = CONCAT44(local_150.dmDeviceName._4_4_,local_150.dmDeviceName._0_4_);
                cVar2 = FUN_145788410(&local_838,&local_818,(longlong)&local_818 + 4);
                if (cVar2 != '\0') {
                  FUN_14020fad6(&local_828);
                  local_7e8 = (byte)local_498.StateFlags >> 2 & 1;
                  if (local_7e4 - 0x12dU < 0xffffff33) {
                    local_7e4 = FUN_145788044(&local_838);
                  }
                  else {
                    fVar11 = (float)FUN_145788320((float)((int)local_7f8 + (int)uStack_7f0) * 0.5,
                                                  (float)(uStack_7f0._4_4_ + local_7f8._4_4_) * 0.5)
                    ;
                    local_7e4 = (int)((float)local_7e4 * fVar11);
                  }
                  uVar10 = (uint)local_818;
                  uVar9 = local_818._4_4_;
                  memset(&local_150,0,0xdc);
                  BVar4 = EnumDisplaySettingsW(lpDevice,0,&local_150);
                  if (BVar4 != 0) {
                    DVar7 = 1;
                    do {
                      DVar6 = uVar10;
                      uVar1 = uVar9;
                      if (uVar9 < local_150.dmPelsHeight) {
                        DVar6 = local_150.dmPelsWidth;
                        uVar1 = local_150.dmPelsHeight;
                      }
                      if (uVar10 < local_150.dmPelsWidth) {
                        uVar10 = DVar6;
                        uVar9 = uVar1;
                      }
                      memset(&local_150,0,0xdc);
                      BVar4 = EnumDisplaySettingsW(lpDevice,DVar7,&local_150);
                      DVar7 = DVar7 + 1;
                    } while (BVar4 != 0);
                  }
                  uStack_810 = CONCAT44(uVar9,uVar10);
                  iVar5 = param_1[4];
                  param_1[4] = iVar5 + 1U;
                  if ((uint)param_1[5] < iVar5 + 1U) {
                    FUN_14691d832(local_850,iVar5);
                  }
                  plVar8 = local_850;
                  FUN_145787f80((longlong)iVar5 * 0x58 + *local_850);
                }
                DVar7 = local_854;
                if (local_828 != 0) {
                  FUN_1400020a8();
                }
                if (local_838 != 0) {
                  FUN_1400020a8();
                }
              }
              DVar7 = DVar7 + 1;
              memset(local_7e0.DeviceName,0,0x344);
              local_7e0.cb = 0x348;
              BVar4 = EnumDisplayDevicesW(lpDevice,DVar7,&local_7e0,0);
            } while (BVar4 != 0);
          }
        }
        memset(lpDevice,0,0x344);
        local_498.cb = 0x348;
        iDevNum = iDevNum + 1;
        BVar4 = EnumDisplayDevicesW((LPCWSTR)0x0,iDevNum,&local_498,0);
      } while (BVar4 != 0);
    }
  }
  else {
    FUN_146915a74(param_1);
  }
  FUN_14578812c(param_1);
  if ((local_70 ^ (ulonglong)auStack_888) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2d9be FUN_140c2d9be body=122 status=ok
// SIG undefined FUN_140c2d9be(void)

undefined4 FUN_140c2d9be(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined4 uVar1;
  double dVar2;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined8 local_220;
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_220 = 0;
  local_228 = 1;
  uVar1 = FUN_140751ea8(param_1,param_2,local_218,0x100);
  if ((char)uVar1 != '\0') {
    dVar2 = wcstod(local_218,(wchar_t **)0x0);
    *param_3 = dVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2da3a FUN_140c2da3a body=1164 status=ok
// SIG undefined FUN_140c2da3a(void)

void FUN_140c2da3a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_140c2db25;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_140c2db25:
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_34);
            goto LAB_140c2dbf1;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_34) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_34,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_34,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_34,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_34,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
LAB_140c2dbf1:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,local_30,local_34);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2dec8 FUN_140c2dec8 body=165 status=ok
// SIG undefined FUN_140c2dec8(void)

void FUN_140c2dec8(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1402d76c0();
  if (cVar1 == '\0') {
    if ((*(longlong *)(param_1 + 0x298) != 0) && (*(char *)(param_1 + 0x3f0) == '\0')) {
      FUN_14179f158(param_1,local_30,1);
      cVar1 = FUN_1402d76c0(param_1);
      if ((cVar1 == '\0') && (*(int *)(param_1 + 0x2b0) <= param_3)) {
        *(int *)(param_1 + 0x2b0) = param_3;
      }
      FUN_140b8acc6(param_1,param_2);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    *(int *)(param_1 + 0x2b0) = param_3;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2df6e FUN_140c2df6e body=63 status=ok
// SIG undefined FUN_140c2df6e(void)

void FUN_140c2df6e(longlong *param_1)

{
  longlong *plVar1;
  
  switchD_143c3d4dc::caseD_1f();
  plVar1 = param_1;
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c2df9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2d0))(param_1);
      return;
    }
    if ((*(uint *)(plVar1 + 1) & 0x30) != 0) break;
    plVar1 = (longlong *)plVar1[4];
  }
  return;
}



// FUNCTION 140c2dfae FUN_140c2dfae body=496 status=ok
// SIG undefined FUN_140c2dfae(void)

void FUN_140c2dfae(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2e1a0(local_50,param_1);
  plVar3 = (longlong *)FUN_140c2e2cc(param_1);
  local_58 = param_1 + 0x30;
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    uVar15 = 1;
    uVar13 = 0;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x40);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar11 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar11 = iVar1 + -1;
      }
      uVar13 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar13) goto LAB_140c2e0d9;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar7) {
      iVar7 = iVar1;
    }
  }
  if (iVar7 < iVar1) {
    uVar14 = 0xffffffff;
    do {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iVar7 * 0x18);
      (**(code **)(*plVar3 + 0x2f0))(plVar3,uVar2,1);
      FUN_1400020a8(uVar2);
      uVar14 = ~(uint)uVar15 & uVar14;
      puVar8 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x40);
      }
      iVar1 = *(int *)(param_1 + 0x58);
      iVar7 = (int)uVar13;
      lVar12 = (longlong)iVar7;
      uVar4 = puVar8[lVar12] & uVar14;
      if (uVar4 == 0) {
        iVar5 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar5 = iVar1 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar12 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar6 - lVar12 == lVar10) goto LAB_140c2e0d9;
        }
        uVar13 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar1);
  }
LAB_140c2e0d9:
  FUN_14099df5c(local_58,0);
  FUN_140c2e340(local_50);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2e1a0 FUN_140c2e1a0 body=104 status=ok
// SIG undefined FUN_140c2e1a0(void)

ulonglong * FUN_140c2e1a0(ulonglong *param_1,ulonglong param_2)

{
  uint uVar1;
  int *piVar2;
  
  *param_1 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad55b0);
  uVar1 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  piVar2 = (int *)FUN_140c2e208(&DAT_14cad55d8,uVar1 >> 0x10 ^ uVar1,param_1);
  *piVar2 = *piVar2 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad55b0);
  return param_1;
}



// FUNCTION 140c2e208 FUN_140c2e208 body=194 status=ok
// SIG undefined FUN_140c2e208(void)

longlong * FUN_140c2e208(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_140c2e2a0;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140c2e598(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_140c2e2a0:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 140c2e2cc FUN_140c2e2cc body=116 status=ok
// SIG undefined FUN_140c2e2cc(void)

void FUN_140c2e2cc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
LAB_140c2e2e1:
      lVar3 = param_1;
      lVar1 = lVar3;
      if (*(longlong *)(lVar3 + 0x20) != 0) goto code_r0x000140c2e2f0;
      goto LAB_140c2e301;
    }
LAB_140c2e30c:
    if (DAT_14cad5558 == 0) {
      uVar2 = FUN_140002dac();
      DAT_14cad5558 = FUN_140002ddd(FUN_1417c360e,uVar2,L"TableRowBase");
    }
  }
  return;
code_r0x000140c2e2f0:
  param_1 = *(longlong *)(lVar3 + 0x20);
  if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar3);
LAB_140c2e301:
    if (lVar1 == 0) {
      param_1 = *(longlong *)(lVar3 + 0x20);
      goto LAB_140c2e2e1;
    }
    goto LAB_140c2e30c;
  }
  goto LAB_140c2e2e1;
}



// FUNCTION 140c2e340 FUN_140c2e340 body=213 status=ok
// SIG undefined FUN_140c2e340(void)

void FUN_140c2e340(ulonglong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined *puVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad55b0);
  if (DAT_14cad55e0 != DAT_14cad560c) {
    uVar1 = *param_1;
    uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar5 = &DAT_14cad5610;
    if (DAT_14cad5618 != (undefined *)0x0) {
      puVar5 = DAT_14cad5618;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)(DAT_14cad5620 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        puVar3 = (ulonglong *)(DAT_14cad55d8 + (longlong)iVar4 * 0x18);
        if (*puVar3 == uVar1) break;
        iVar4 = (int)puVar3[2];
        puVar3 = (ulonglong *)0x0;
      } while (iVar4 != -1);
      goto LAB_140c2e3d2;
    }
  }
  puVar3 = (ulonglong *)0x0;
LAB_140c2e3d2:
  puVar3 = puVar3 + 1;
  *(int *)puVar3 = (int)*puVar3 + -1;
  if ((int)*puVar3 == 0) {
    FUN_140c2e7e6(*param_1,0);
    FUN_140c2e416(&DAT_14cad55d8,*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140c2e3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad55b0);
  return;
}



// FUNCTION 140c2e416 FUN_140c2e416 body=155 status=ok
// SIG undefined FUN_140c2e416(void)

undefined8 FUN_140c2e416(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_140c2e4b2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140c2e4b2 FUN_140c2e4b2 body=91 status=ok
// SIG undefined FUN_140c2e4b2(void)

void FUN_140c2e4b2(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_140c2e50e(param_1,param_2,1);
  return;
}



// FUNCTION 140c2e50e FUN_140c2e50e body=138 status=ok
// SIG undefined FUN_140c2e50e(void)

void FUN_140c2e50e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 140c2e598 FUN_140c2e598 body=590 status=ok
// SIG undefined FUN_140c2e598(void)

int * FUN_140c2e598(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar12) {
      FUN_14482b872(param_1,iVar12);
    }
    lVar13 = (longlong)iVar12;
    iVar11 = FUN_144a54ea4(param_1 + 2,1);
    plVar8 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar8 = param_1 + 2;
    }
    iVar5 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar5 = iVar11;
    }
    bVar2 = (byte)iVar11 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar12 = (int)param_1[6];
    lVar13 = (longlong)iVar12;
    iVar11 = *(int *)(*param_1 + 4 + lVar13 * 0x18);
    *(int *)(param_1 + 6) = iVar11;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar11 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar11 = iVar12;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar11 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar8 = (longlong *)(*param_1 + lVar13 * 0x18);
  lVar13 = *(longlong *)*param_4;
  *plVar8 = lVar13;
  *(undefined4 *)(plVar8 + 1) = 0;
  *(undefined4 *)(plVar8 + 2) = 0xffffffff;
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar11 != -1) {
      do {
        plVar9 = (longlong *)(*param_1 + (longlong)iVar11 * 0x18);
        if (*plVar9 == lVar13) {
          uVar3 = *(undefined4 *)((longlong)plVar8 + 4);
          lVar13 = plVar8[1];
          uVar4 = *(undefined4 *)((longlong)plVar8 + 0xc);
          *(int *)plVar9 = (int)*plVar8;
          *(undefined4 *)((longlong)plVar9 + 4) = uVar3;
          *(int *)(plVar9 + 1) = (int)lVar13;
          *(undefined4 *)((longlong)plVar9 + 0xc) = uVar4;
          FUN_140c2e50e(param_1,iVar12,1);
          cVar7 = '\x01';
          break;
        }
        iVar11 = (int)plVar9[2];
        cVar7 = '\0';
      } while (iVar11 != -1);
      goto LAB_140c2e65a;
    }
  }
  cVar7 = '\0';
LAB_140c2e65a:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar7;
  }
  if (cVar7 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar6) {
      uVar10 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar11 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      *(uint *)((longlong)plVar8 + 0x14) = param_3;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      *(undefined4 *)(plVar8 + 2) =
           *(undefined4 *)
            ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar12;
    }
    else {
      *(int *)(param_1 + 9) = iVar11;
      FUN_1457888c4(param_1);
    }
  }
  *param_2 = iVar12;
  return param_2;
}



// FUNCTION 140c2e7e6 FUN_140c2e7e6 body=681 status=ok
// SIG undefined FUN_140c2e7e6(void)

void FUN_140c2e7e6(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
    uVar15 = *(uint *)(param_1 + 0xc);
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    if (((*(uint *)(lVar11 + 8) >> 0x1c & 1) == 0) && (-1 < (short)*(undefined4 *)(param_1 + 8))) {
      lVar11 = *(longlong *)(param_1 + 0x28);
      if (lVar11 != 0) {
        if (DAT_14cad5558 == 0) {
          uVar6 = FUN_140002dac();
          DAT_14cad5558 = FUN_140002ddd(FUN_1417c360e,uVar6,L"TableRowBase");
          if (DAT_14cad5558 == 0) goto LAB_140c2e9d9;
        }
        if ((*(int *)(DAT_14cad5558 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cad5558 + 0x38) * 8) ==
            DAT_14cad5558 + 0x30)) {
          iVar2 = *(int *)(param_1 + 0x58);
          if (iVar2 == 0) {
            uVar14 = 1;
            uVar16 = 0;
            iVar7 = 0;
            iVar12 = 0;
          }
          else {
            puVar5 = *(uint **)(param_1 + 0x50);
            if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
              puVar5 = (uint *)(param_1 + 0x40);
            }
            uVar15 = *puVar5;
            if (uVar15 == 0) {
              iVar7 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar7 = iVar2 + -1;
              }
              uVar16 = 0;
              uVar14 = (ulonglong)(uint)(iVar7 >> 5);
              if (iVar7 >> 5 < 1) {
                uVar14 = uVar16;
              }
              iVar12 = 0;
              do {
                if (uVar14 == uVar16) goto LAB_140c2e9d9;
                iVar12 = iVar12 + 0x20;
                uVar15 = puVar5[uVar16 + 1];
                uVar16 = uVar16 + 1;
              } while (uVar15 == 0);
            }
            else {
              uVar16 = 0;
              iVar12 = 0;
            }
            uVar14 = (ulonglong)(-uVar15 & uVar15);
            uVar1 = uVar14 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar7 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar7) {
              iVar7 = iVar2;
            }
          }
          if (iVar7 != iVar2) {
            uVar15 = 0xffffffff;
            iVar4 = iVar2;
            do {
              if ((param_2 == 0) ||
                 (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 0x18) == param_2))
              {
                plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 0x18 + 8);
                (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
                iVar4 = *(int *)(param_1 + 0x58);
              }
              uVar15 = uVar15 & ~(uint)uVar14;
              puVar5 = *(uint **)(param_1 + 0x50);
              if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
                puVar5 = (uint *)(param_1 + 0x40);
              }
              iVar7 = (int)uVar16;
              lVar11 = (longlong)iVar7;
              uVar8 = puVar5[lVar11] & uVar15;
              if (uVar8 == 0) {
                iVar9 = iVar4 + 0x1e;
                if (-1 < iVar4 + -1) {
                  iVar9 = iVar4 + -1;
                }
                iVar9 = iVar9 >> 5;
                iVar12 = iVar12 + 0x20;
                iVar10 = iVar9;
                if (iVar9 < iVar7) {
                  iVar10 = iVar7;
                }
                if (iVar7 < iVar9) {
                  lVar13 = 0;
                  do {
                    uVar8 = puVar5[lVar11 + lVar13 + 1];
                    if (uVar8 != 0) {
                      uVar16 = (ulonglong)(iVar7 + (int)lVar13 + 1);
                      uVar15 = 0xffffffff;
                      goto LAB_140c2e9ac;
                    }
                    iVar12 = iVar12 + 0x20;
                    lVar13 = lVar13 + 1;
                  } while (iVar10 - lVar11 != lVar13);
                  uVar15 = 0xffffffff;
                  iVar7 = iVar10;
                }
                uVar16 = (ulonglong)(iVar7 + 1);
                iVar7 = iVar4;
              }
              else {
LAB_140c2e9ac:
                uVar14 = (ulonglong)(-uVar8 & uVar8);
                uVar1 = uVar14 * 2 + 1;
                lVar11 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                  }
                }
                iVar7 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
                if (iVar4 <= iVar7) {
                  iVar7 = iVar4;
                }
              }
            } while (iVar7 != iVar2);
          }
        }
      }
LAB_140c2e9d9:
      FUN_1447f69b6(param_1 + 0x98);
      return;
    }
  }
  return;
}



// FUNCTION 140c2ea92 FUN_140c2ea92 body=1107 status=ok
// SIG undefined FUN_140c2ea92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c2ea92(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_b8 [32];
  uint local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140c2eee6();
  if (*(float *)(param_1 + 0xd14) <= 1e-08 && *(float *)(param_1 + 0xd14) != 1e-08) {
    *(undefined4 *)(param_1 + 0xd60) = *(undefined4 *)(param_1 + 0xd3c);
    dVar13 = DAT_14c846500;
    *(double *)(param_1 + 0xd48) = DAT_14c8464f8;
    *(double *)(param_1 + 0xd50) = dVar13;
    *(double *)(param_1 + 0xd58) = DAT_14c846508;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
  }
  lVar12 = param_1;
  lVar9 = FUN_1447210f0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x398);
  bVar10 = lVar1 == 0 || lVar9 == 0;
  if (bVar10) goto LAB_140c2ee4c;
  if (*(char *)(param_1 + 0xd38) == '\x01') {
    fVar29 = *(float *)(param_1 + 0xd60);
    if (0.0 < fVar29) {
      fVar29 = fVar29 - param_2;
      *(float *)(param_1 + 0xd60) = fVar29;
    }
    auVar31 = *(undefined1 (*) [16])(param_1 + 0xd48);
    dVar13 = (double)DAT_1499387d0;
    dVar36 = DAT_1499387d0._8_8_;
    auVar14 = divpd(auVar31,_DAT_1499387d0);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(double *)(param_1 + 0xd58);
    auVar25 = divpd(auVar24,_DAT_1499387d0);
    auVar14 = roundpd(auVar14,auVar14,3);
    auVar25 = roundpd(auVar25,auVar25,3);
    dVar3 = auVar31._0_8_ - auVar14._0_8_ * dVar13;
    dVar4 = auVar31._8_8_ - auVar14._8_8_ * dVar36;
    dVar6 = *(double *)(param_1 + 0xd58) - auVar25._0_8_ * dVar13;
    dVar7 = 0.0 - auVar25._8_8_ * dVar36;
    auVar32._0_8_ = dVar3 + dVar13;
    auVar32._8_8_ = dVar4 + dVar36;
    auVar30._0_8_ = dVar13 + dVar6;
    auVar30._8_8_ = dVar36 + dVar7;
    auVar15._8_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar15._0_8_ = -(ulonglong)(0.0 <= dVar3);
    auVar31._8_4_ = SUB84(dVar4,0);
    auVar31._0_8_ = dVar3;
    auVar31._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar14 = blendvpd(auVar32,auVar31,auVar15);
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar7);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar25._8_4_ = SUB84(dVar7,0);
    auVar25._0_8_ = dVar6;
    auVar25._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar31 = blendvpd(auVar30,auVar25,auVar16);
    dVar36 = auVar14._8_8_ + -360.0;
    dVar13 = auVar31._8_8_ + -360.0;
    auVar17._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
    auVar17._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
    auVar5._8_4_ = SUB84(dVar36,0);
    auVar5._0_8_ = auVar14._0_8_ + -360.0;
    auVar5._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    auVar25 = blendvpd(auVar14,auVar5,auVar17);
    auVar18._8_8_ = -(ulonglong)(180.0 < auVar31._8_8_);
    auVar18._0_8_ = -(ulonglong)(180.0 < auVar31._0_8_);
    auVar14._8_4_ = SUB84(dVar13,0);
    auVar14._0_8_ = auVar31._0_8_ + -360.0;
    auVar14._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar31 = blendvpd(auVar31,auVar14,auVar18);
    auVar26._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar25._8_8_));
    auVar26._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar25._0_8_));
    iVar8 = movmskpd((int)CONCAT71((int7)((ulonglong)lVar9 >> 8),lVar9 == 0),auVar26);
    auVar19._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar31._8_8_));
    auVar19._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar31._0_8_));
    uVar11 = movmskpd((int)CONCAT71((int7)((ulonglong)lVar12 >> 8),bVar10),auVar19);
    if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
      fVar29 = *(float *)(param_1 + 0xd3c);
      *(float *)(param_1 + 0xd60) = fVar29;
    }
    dVar13 = *(double *)(param_1 + 0xd50);
    local_68 = *(undefined8 *)(param_1 + 0xd78);
    local_78 = *(double *)(param_1 + 0xd68);
    dStack_70 = *(double *)(param_1 + 0xd70);
    if (0.0 < fVar29) goto LAB_140c2ee87;
    local_98 = *(uint *)(param_1 + 0xd40);
    FUN_140476f06(&local_90,&local_78,&DAT_14c8464f8);
    uVar34 = SUB84(local_80,0);
    uVar35 = (undefined4)((ulonglong)local_80 >> 0x20);
    dVar13 = local_88;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0xd78);
    local_78 = *(double *)(param_1 + 0xd68);
    dStack_70 = *(double *)(param_1 + 0xd70);
    dVar13 = *(double *)(param_1 + 0xd50);
LAB_140c2ee87:
    uVar34 = (undefined4)*(undefined8 *)(param_1 + 0xd78);
    uVar35 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xd78) >> 0x20);
    fVar29 = (float)FUN_148d048be(param_1 + 0xd18,(float)dStack_70,(float)dVar13);
    dVar13 = (double)fVar29;
    fVar29 = (float)FUN_148d048be(param_1 + 0xd28,(float)local_78,
                                  (float)*(double *)(param_1 + 0xd48));
    local_90 = (double)fVar29;
  }
  *(double *)(param_1 + 0xd68) = local_90;
  *(double *)(param_1 + 0xd70) = dVar13;
  *(ulonglong *)(param_1 + 0xd78) = CONCAT44(uVar35,uVar34);
  dVar4 = (double)CONCAT44(uVar35,uVar34) - DAT_14c846508;
  dVar36 = (double)DAT_1499387d0;
  dVar3 = DAT_1499387d0._8_8_;
  auVar20._8_8_ = dVar13 - DAT_14c846500;
  auVar20._0_8_ = local_90 - DAT_14c8464f8;
  auVar31 = divpd(auVar20,_DAT_1499387d0);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = dVar4 / 360.0;
  auVar31 = roundpd(auVar31,auVar31,3);
  auVar14 = roundpd(auVar27,auVar27,3);
  auVar38._0_8_ = dVar4 - auVar14._0_8_ * dVar36;
  auVar38._8_8_ = 0.0 - auVar14._8_8_ * dVar3;
  dVar4 = (local_90 - DAT_14c8464f8) - auVar31._0_8_ * dVar36;
  dVar13 = (dVar13 - DAT_14c846500) - auVar31._8_8_ * dVar3;
  auVar33._0_8_ = dVar4 + dVar36;
  auVar33._8_8_ = dVar13 + dVar3;
  auVar37._0_8_ = dVar36 + auVar38._0_8_;
  auVar37._8_8_ = dVar3 + auVar38._8_8_;
  auVar21._8_8_ = -(ulonglong)(0.0 <= dVar13);
  auVar21._0_8_ = -(ulonglong)(0.0 <= dVar4);
  auVar2._8_4_ = SUB84(dVar13,0);
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar31 = blendvpd(auVar33,auVar2,auVar21);
  auVar22._8_8_ = -(ulonglong)(0.0 <= auVar38._8_8_);
  auVar22._0_8_ = -(ulonglong)(0.0 <= auVar38._0_8_);
  auVar14 = blendvpd(auVar37,auVar38,auVar22);
  auVar28._0_8_ = auVar31._0_8_ + -360.0;
  auVar28._8_8_ = auVar31._8_8_ + -360.0;
  auVar23._8_8_ = -(ulonglong)(180.0 < auVar31._8_8_);
  auVar23._0_8_ = -(ulonglong)(180.0 < auVar31._0_8_);
  auVar31 = blendvpd(auVar31,auVar28,auVar23);
  dVar36 = auVar14._0_8_;
  dVar13 = (double)*(float *)(param_1 + 0xd14);
  local_80 = (double)(~-(ulonglong)(180.0 < dVar36) & (ulonglong)dVar36 |
                     (ulonglong)(dVar36 + -360.0) & -(ulonglong)(180.0 < dVar36)) * dVar13 +
             DAT_14c846508;
  local_88 = auVar31._8_8_ * dVar13 + DAT_14c846500;
  local_90 = auVar31._0_8_ * dVar13 + DAT_14c8464f8;
  local_98 = local_98 & 0xffffff00;
  FUN_14020f75c(lVar1,&local_90,0,0);
  *(double *)(param_1 + 0xd58) = DAT_14c846508;
  dVar13 = DAT_14c846500;
  *(double *)(param_1 + 0xd48) = DAT_14c8464f8;
  *(double *)(param_1 + 0xd50) = dVar13;
LAB_140c2ee4c:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c2eee6 FUN_140c2eee6 body=778 status=ok
// SIG undefined FUN_140c2eee6(void)

void FUN_140c2eee6(longlong *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  double *pdVar10;
  double dVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_78 = (double)CONCAT44(local_78._4_4_,(int)param_2);
    uVar8 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar8,&local_78);
    lVar9 = FUN_1447210f0(param_1);
    if (lVar9 != 0) {
      uVar8 = FUN_14119d0a4(lVar9);
      FUN_140e65914(uVar8,param_1,*(undefined4 *)(lVar9 + 0x6f4));
    }
  }
  if ((param_1[0x73] != 0) && ((*(byte *)(param_1 + 400) & 1) != 0)) {
    FUN_1477add8e(param_1,&local_90);
    lVar9 = param_1[0x39];
    if (lVar9 == 0) {
      pdVar10 = (double *)&DAT_14c8464e0;
      uVar14 = (undefined4)DAT_14c8464f0;
      uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar14 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
      uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
      pdVar10 = (double *)(lVar9 + 0x260);
    }
    local_98 = local_80 - (double)CONCAT44(uVar15,uVar14);
    local_a0 = local_88 - pdVar10[1];
    local_a8 = local_90 - *pdVar10;
    if ((*(byte *)(param_1 + 0x19d) & 1) == 0) {
      uVar14 = *(undefined4 *)((longlong)param_1 + 0xc84);
      FUN_144a79a9c(&local_a8,&local_78);
      puVar13 = &local_c0;
      local_e8 = uVar14;
      dVar11 = (double)FUN_140476f06(puVar13,param_1 + 0x191,&local_78,param_2);
      uVar14 = SUB84(puVar13,0);
    }
    else {
      pdVar10 = &local_a8;
      dVar11 = (double)FUN_144a79a9c(pdVar10,&local_c0);
      uVar14 = SUB84(pdVar10,0);
    }
    if ((*(byte *)(param_1 + 0x19c) & 1) != 0) {
      lVar9 = param_1[0x39];
      if (lVar9 == 0) {
        uVar14 = SUB84(DAT_14c846508,0);
        uVar15 = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
      }
      else {
        dVar3 = *(double *)(lVar9 + 0x240);
        dVar4 = *(double *)(lVar9 + 0x248);
        dVar5 = *(double *)(lVar9 + 0x250);
        dVar6 = *(double *)(lVar9 + 600);
        pdVar10 = *(double **)(lVar9 + 0x228);
        local_78 = dVar3;
        uStack_70 = dVar4;
        local_68 = dVar5;
        dStack_60 = dVar6;
        if (pdVar10 == (double *)0x0) {
          uVar14 = 0x40;
          pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
          dVar11 = DAT_14c8463d8;
          *pdVar10 = DAT_14c8463d0;
          pdVar10[1] = dVar11;
          dVar11 = DAT_14c8463e8;
          pdVar10[2] = DAT_14c8463e0;
          pdVar10[3] = dVar11;
          dVar11 = DAT_14c846500;
          pdVar10[4] = DAT_14c8464f8;
          pdVar10[5] = dVar11;
          dVar11 = DAT_14c846508;
          pdVar10[6] = DAT_14c846508;
          *(double **)(lVar9 + 0x228) = pdVar10;
        }
        auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar10[1]);
        auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar10);
        auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar10[1]) >> 0x20);
        iVar7 = movmskpd(SUB84(dVar11,0),auVar1);
        auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar10[3]);
        auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar10[2]);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar10[3]) >> 0x20);
        uVar12 = movmskpd(uVar14,auVar2);
        if ((uVar12 & 0x3fffffff) != 0 || iVar7 != 0) {
          pdVar10[2] = local_68;
          pdVar10[3] = dStack_60;
          *(undefined4 *)pdVar10 = (undefined4)local_78;
          *(undefined4 *)((longlong)pdVar10 + 4) = local_78._4_4_;
          *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_70._4_4_;
          FUN_1448052ee(&local_78,&local_58);
          pdVar10[6] = local_48;
          pdVar10[4] = local_58;
          pdVar10[5] = dStack_50;
        }
        uVar14 = SUB84(pdVar10[6],0);
        uVar15 = (undefined4)((ulonglong)pdVar10[6] >> 0x20);
      }
      local_b0 = CONCAT44(uVar15,uVar14);
    }
    local_c8 = local_b0;
    local_d8 = local_c0;
    uStack_d4 = uStack_bc;
    uStack_d0 = uStack_b8;
    uStack_cc = uStack_b4;
    FUN_1417b27fe(param_1,&local_d8,0);
    *(undefined4 *)(param_1 + 0x191) = local_c0;
    *(undefined4 *)((longlong)param_1 + 0xc8c) = uStack_bc;
    *(undefined4 *)(param_1 + 0x192) = uStack_b8;
    *(undefined4 *)((longlong)param_1 + 0xc94) = uStack_b4;
    param_1[0x193] = local_b0;
  }
  *(byte *)(param_1 + 0x19d) = *(byte *)(param_1 + 0x19d) & 0xfe;
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c2f1f2 FUN_140c2f1f2 body=40 status=ok
// SIG undefined FUN_140c2f1f2(void)

undefined8 FUN_140c2f1f2(undefined8 param_1,int param_2)

{
  FUN_140c2f21a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c2f21a FUN_140c2f21a body=372 status=ok
// SIG undefined FUN_140c2f21a(void)

void FUN_140c2f21a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b317950;
  param_1[0x72] = &PTR_FUN_14b318000;
  param_1[0x73] = &PTR_FUN_14b318080;
  param_1[0x74] = &PTR_FUN_14b3180f0;
  param_1[0x75] = &PTR_FUN_14b318118;
  param_1[0x76] = &PTR_FUN_14b318130;
  param_1[0xa4] = &PTR_FUN_14b318160;
  param_1[0xa5] = &PTR_FUN_14b3181e0;
  param_1[0xa6] = &PTR_FUN_14b318280;
  param_1[0xad] = &PTR_FUN_14b318330;
  param_1[0xae] = &PTR_FUN_14b3183a0;
  param_1[0xb2] = &PTR_FUN_14b3183c0;
  param_1[0xb3] = &PTR_FUN_14b3183e0;
  param_1[0xb6] = &PTR_FUN_14b318420;
  param_1[0xb7] = &PTR_FUN_14b318490;
  param_1[0x135] = 0;
  param_1[0x136] = 0xffffffffffffffff;
  FUN_140c2f38e(param_1 + 0x130,1);
  FUN_1403d7d90(param_1 + 0x106);
  if (*(char *)((longlong)param_1 + 0x79c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x79c) = 0;
  }
  FUN_14063ace6(param_1 + 0xd6);
  FUN_14063ab46(param_1 + 0xb8);
  param_1[0xae] = &PTR_FUN_14b2c6a40;
  plVar2 = (longlong *)param_1[0xb0];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14063a6a6(param_1 + 0xa6);
  FUN_140c2f40c(param_1);
  return;
}



// FUNCTION 140c2f38e FUN_140c2f38e body=126 status=ok
// SIG undefined FUN_140c2f38e(void)

void FUN_140c2f38e(longlong *param_1)

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



// FUNCTION 140c2f40c FUN_140c2f40c body=254 status=ok
// SIG undefined FUN_140c2f40c(void)

void FUN_140c2f40c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b303020;
  param_1[0x72] = &PTR_FUN_14b3036c0;
  param_1[0x73] = &PTR_FUN_14b303740;
  param_1[0x74] = &PTR_FUN_14b3037b0;
  param_1[0x75] = &PTR_FUN_14b3037d8;
  param_1[0x76] = &PTR_FUN_14b3037f0;
  plVar3 = (longlong *)param_1[0xa2];
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
  FUN_140255aed(param_1[0x9e],*(undefined4 *)(param_1 + 0x9f));
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)param_1[0x99];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_140368b56(param_1 + 0x7e);
  FUN_144760e21(param_1[0x77],*(undefined4 *)(param_1 + 0x78));
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140c2f50a FUN_140c2f50a body=4 status=ok
// SIG undefined FUN_140c2f50a(void)

void FUN_140c2f50a(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 140c2f50e FUN_140c2f50e body=4477 status=ok
// SIG undefined FUN_140c2f50e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c2f50e(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  longlong lVar15;
  float *pfVar16;
  int *piVar17;
  int iVar18;
  longlong *plVar19;
  uint uVar20;
  double *pdVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  code *pcVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  undefined8 *local_288;
  undefined8 local_280;
  wchar_t *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  undefined8 *local_260;
  undefined1 *local_258;
  code *local_250;
  longlong *local_248;
  int *local_240;
  longlong local_238;
  code *local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  code *local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 local_1a8;
  double dStack_1a0;
  double local_198 [2];
  double *local_188;
  int local_180;
  uint local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  undefined4 local_104;
  undefined4 local_d8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (param_4 != 0) {
    plVar19 = *(longlong **)(param_4 + 0x48);
    fVar34 = 0.0;
    if ((plVar19 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar19 + 0xc))) {
      fVar34 = (float)*(double *)(*(longlong *)(*plVar19 + 0x3b0) + (longlong)(int)plVar19[1] * 8);
    }
    *(float *)(param_1 + 0xe0) = fVar34;
    plVar19 = *(longlong **)(param_4 + 0x48);
    dVar36 = 0.0;
    if (plVar19 == (longlong *)0x0) {
      dVar38 = 0.0;
      dVar40 = 0.0;
    }
    else {
      dVar38 = 0.0;
      dVar40 = 0.0;
      dVar36 = 0.0;
      if (1 < *(byte *)((longlong)plVar19 + 0xc)) {
        lVar15 = (longlong)(int)plVar19[1];
        lVar33 = *(longlong *)(*plVar19 + 0x368);
        dVar40 = (double)*(float *)(lVar33 + 8 + lVar15 * 0xc);
        dVar38 = (double)*(float *)(lVar33 + 4 + lVar15 * 0xc);
        dVar36 = (double)*(float *)(lVar33 + lVar15 * 0xc);
      }
    }
    param_1[0xe1] = (longlong)dVar36;
    param_1[0xe2] = (longlong)dVar38;
    param_1[0xe3] = (longlong)dVar40;
  }
  lVar33 = param_1[0x34];
  if (*(char *)(lVar33 + 0xf8) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_2b8);
  }
  if (0 < *(int *)(lVar33 + 0xf0)) {
    plVar19 = *(longlong **)(lVar33 + 0xe8);
    (**(code **)(*param_1 + 0x50))(param_1);
    (**(code **)(*param_1 + 0x58))(param_1);
    (**(code **)(*param_1 + 0x60))(param_1);
    (**(code **)(*param_1 + 0x68))(param_1);
    cVar14 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((param_4 != 0) && (cVar14 != '\0')) {
      lVar33 = param_1[0x34];
      local_248 = plVar19;
      local_238 = param_4;
      if (0 < *(int *)(lVar33 + 0x40)) {
        lVar15 = 0x30;
        uVar31 = 0;
        do {
          FUN_140c309be(param_1 + 200,uVar31 & 0xffffffff,*(longlong *)(lVar33 + 0x48) + lVar15,
                        param_4);
          uVar31 = uVar31 + 1;
          lVar33 = param_1[0x34];
          lVar15 = lVar15 + 0x88;
        } while ((longlong)uVar31 < (longlong)*(int *)(lVar33 + 0x40));
        if (0 < *(int *)(lVar33 + 0x40)) {
          lVar32 = 0x2c;
          lVar30 = 0;
          lVar15 = 0;
          lVar27 = 0;
          do {
            FUN_140c306e2(*(longlong *)(lVar33 + 0x48) + lVar30,param_1 + 4,
                          *(undefined4 *)(*(longlong *)(lVar33 + 0x38) + lVar32),
                          param_1[0xd0] + lVar15);
            lVar27 = lVar27 + 1;
            lVar33 = param_1[0x34];
            lVar32 = lVar32 + 0xe8;
            lVar15 = lVar15 + 0x30;
            lVar30 = lVar30 + 0x88;
          } while (lVar27 < *(int *)(lVar33 + 0x40));
        }
      }
      if (*(char *)(lVar33 + 0xd8) != '\0') {
        local_298 = param_3 + 0x110;
        local_290 = CONCAT44(local_290._4_4_,*(undefined4 *)(param_3 + 0x120));
        (**(code **)(*param_1 + 0x80))(param_1,param_1 + 0xd0,param_3 + 0x70,param_3 + 0xf0);
        lVar33 = param_1[0x34];
      }
      plVar19 = local_248;
      local_1b8 = DAT_14c8464f0;
      dStack_1c0 = DAT_14c8464e8;
      local_1c8 = DAT_14c8464e0;
      *(undefined2 *)((longlong)param_1 + 0x194) = 0x100;
      *(undefined4 *)(param_1 + 0x32) = 0;
      if (lVar33 == 0) {
        iVar25 = 0;
      }
      else {
        iVar18 = *(int *)(lVar33 + 0x40);
        if (iVar18 < 1) {
          iVar25 = 0;
        }
        else {
          lVar15 = 0x9c;
          lVar27 = 0;
          lVar30 = 0;
          do {
            *(byte *)(*(longlong *)(lVar33 + 0x38) + lVar15) =
                 *(byte *)(param_1[0xd2] + 0xad + lVar27) & 1;
            lVar33 = param_1[0x34];
            if (*(char *)(*(longlong *)(lVar33 + 0x38) + lVar15) == '\x01') {
              *(undefined1 *)((longlong)param_1 + 0x195) = 0;
              *(int *)(param_1 + 0x32) = (int)param_1[0x32] + 1;
              lVar32 = param_1[0xd2];
              local_1c8 = (code *)((double)local_1c8 + *(double *)(lVar32 + 0x40 + lVar27));
              dStack_1c0 = dStack_1c0 + *(double *)(lVar32 + 0x48 + lVar27);
              local_1b8 = local_1b8 + *(double *)(lVar32 + 0x50 + lVar27);
            }
            lVar30 = lVar30 + 1;
            iVar18 = *(int *)(lVar33 + 0x40);
            lVar27 = lVar27 + 0x100;
            lVar15 = lVar15 + 0xe8;
          } while (lVar30 < iVar18);
          iVar25 = (int)param_1[0x32];
        }
        *(bool *)((longlong)param_1 + 0x194) = iVar25 == iVar18;
      }
      if (param_1[2] != 0) {
        lVar33 = 0;
        memset(&local_1a8,0,0x100);
        local_d8 = 0xffffffff;
        local_104 = 0xffffffff;
        local_1a8 = (code *)CONCAT44(0x3f800000,(undefined4)local_1a8);
        dVar41 = (double)param_1[0x19] * (double)param_1[0xc];
        dVar42 = (double)param_1[0x1a] * (double)param_1[0xd];
        dVar39 = (double)param_1[0x1b] * (double)param_1[0xe];
        dVar40 = (double)param_1[4];
        dVar12 = (double)param_1[5];
        dVar13 = (double)param_1[6];
        dVar36 = (double)param_1[7];
        dVar43 = dVar42 * dVar40 - dVar41 * dVar12;
        dVar44 = dVar39 * dVar12 - dVar42 * dVar13;
        dVar38 = dVar41 * dVar13 - dVar40 * dVar39;
        dVar44 = dVar44 + dVar44;
        dVar38 = dVar38 + dVar38;
        dVar43 = dVar43 + dVar43;
        local_200 = (dVar43 * dVar12 - dVar38 * dVar13) + dVar36 * dVar44 + dVar41 +
                    (double)param_1[8];
        local_1f8 = (dVar13 * dVar44 - dVar40 * dVar43) + (double)param_1[7] * dVar38 + dVar42 +
                    (double)param_1[9];
        local_1d8 = dVar43 * dVar36 + dVar39 + (dVar38 * dVar40 - dVar44 * dVar12) +
                    (double)param_1[10];
        local_1e8._8_4_ = SUB84(local_1f8,0);
        local_1e8._0_8_ = local_200;
        local_1e8._12_4_ = (int)((ulonglong)local_1f8 >> 0x20);
        dVar36 = (double)*(float *)(*plVar19 + 0x114);
        local_1f0 = local_1d8 - DAT_14c8462d0 * dVar36;
        local_1f8 = local_1f8 - DAT_14c8462c8 * dVar36;
        local_200 = local_200 - dVar36 * DAT_14c8462c0;
        local_290 = param_3 + 0x70;
        *(undefined1 *)(param_3 + 0x80) = 0;
        uVar2 = *(undefined4 *)(param_3 + 0x120);
        local_218 = _DAT_14cad0ee0;
        uStack_210 = uRam000000014cad0ee8;
        local_228 = _DAT_14cad0ed0;
        uStack_220 = _DAT_14cad0ed8;
        do {
          bVar4 = *(char *)((longlong)&local_228 + lVar33) == '\x02';
          bVar5 = *(char *)((longlong)&local_228 + lVar33 + 1) == '\x02';
          bVar6 = *(char *)((longlong)&local_228 + lVar33 + 2) == '\x02';
          bVar7 = *(char *)((longlong)&local_228 + lVar33 + 3) == '\x02';
          bVar8 = *(char *)((longlong)&local_228 + lVar33 + 4) == '\x02';
          bVar9 = *(char *)((longlong)&local_228 + lVar33 + 5) == '\x02';
          bVar10 = *(char *)((longlong)&local_228 + lVar33 + 6) == '\x02';
          bVar11 = *(char *)((longlong)&local_228 + lVar33 + 7) == '\x02';
          if ((bool)(~bVar4 & 1)) {
            *(undefined1 *)((longlong)&local_228 + lVar33) = 2;
          }
          if ((bool)(~bVar5 & 1)) {
            *(undefined1 *)((longlong)&local_228 + lVar33 + 1) = 2;
          }
          if ((bool)(~bVar6 & 1)) {
            *(undefined1 *)((longlong)&local_228 + lVar33 + 2) = 2;
          }
          if ((bool)(~bVar7 & 1)) {
            *(undefined1 *)((longlong)&local_228 + lVar33 + 3) = 2;
          }
          if ((bool)(~bVar8 & 1)) {
            *(undefined1 *)((longlong)&local_228 + lVar33 + 4) = 2;
          }
          if ((bool)(~bVar9 & 1)) {
            *(undefined1 *)((longlong)&local_228 + lVar33 + 5) = 2;
          }
          if ((bool)(~bVar10 & 1)) {
            *(undefined1 *)((longlong)&local_228 + lVar33 + 6) = 2;
          }
          if ((bool)(~bVar11 & 1)) {
            *(undefined1 *)((longlong)&local_228 + lVar33 + 7) = 2;
          }
          if ((bool)(~bVar4 & 1)) {
            *(undefined1 *)((longlong)&uStack_220 + lVar33) = 2;
          }
          if ((bool)(~bVar5 & 1)) {
            *(undefined1 *)((longlong)&uStack_220 + lVar33 + 1) = 2;
          }
          if ((bool)(~bVar6 & 1)) {
            *(undefined1 *)((longlong)&uStack_220 + lVar33 + 2) = 2;
          }
          if ((bool)(~bVar7 & 1)) {
            *(undefined1 *)((longlong)&uStack_220 + lVar33 + 3) = 2;
          }
          if ((bool)(~bVar8 & 1)) {
            *(undefined1 *)((longlong)&uStack_220 + lVar33 + 4) = 2;
          }
          if ((bool)(~bVar9 & 1)) {
            *(undefined1 *)((longlong)&uStack_220 + lVar33 + 5) = 2;
          }
          if ((bool)(~bVar10 & 1)) {
            *(undefined1 *)((longlong)&uStack_220 + lVar33 + 6) = 2;
          }
          if ((bool)(~bVar11 & 1)) {
            *(undefined1 *)((longlong)&uStack_220 + lVar33 + 7) = 2;
          }
          lVar33 = lVar33 + 0x10;
        } while (lVar33 != 0x20);
        local_228 = *(undefined8 *)(param_3 + 0xf0);
        uStack_220 = *(undefined8 *)(param_3 + 0xf8);
        local_218 = *(undefined8 *)(param_3 + 0x100);
        uStack_210 = *(undefined8 *)(param_3 + 0x108);
        local_288 = &local_228;
        local_298 = CONCAT44(local_298._4_4_,uVar2);
        FUN_1400b50cc(param_1[2],&local_1a8,local_1e8,&local_200);
        memcpy(param_1 + 0xed,&local_1a8,0x100);
        iVar25 = (int)param_1[0x32];
      }
      if (iVar25 < 1) {
        dVar36 = (double)*(float *)((longlong)param_1 + 0x76c);
        dVar40 = (DAT_14c8462d0 - (double)param_1[0xf7]) * dVar36 + (double)param_1[0xf7];
        dVar38 = (DAT_14c8462c8 - (double)param_1[0xf6]) * dVar36 + (double)param_1[0xf6];
        pcVar37 = (code *)((DAT_14c8462c0 - (double)param_1[0xf5]) * dVar36 + (double)param_1[0xf5])
        ;
        dVar36 = dVar40 * dVar40 + (double)pcVar37 * (double)pcVar37 + dVar38 * dVar38;
        if (((dVar36 != 1.0) ||
            (local_1b8 = dVar40, local_1c8 = pcVar37, dStack_1c0 = dVar38, NAN(dVar36))) &&
           (local_1b8 = DAT_14c8464f0, local_1c8 = DAT_14c8464e0, dStack_1c0 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar36)) {
          dVar36 = 1.0 / SQRT(dVar36);
          local_1b8 = dVar40 * dVar36;
          local_1c8 = (code *)((double)pcVar37 * dVar36);
          dStack_1c0 = dVar38 * dVar36;
        }
        param_1[0xec] = (longlong)DAT_14c8462d0;
        dVar36 = DAT_14c8462c8;
        param_1[0xea] = (longlong)DAT_14c8462c0;
        param_1[0xeb] = (longlong)dVar36;
      }
      else {
        dVar36 = local_1b8 * local_1b8 +
                 (double)local_1c8 * (double)local_1c8 + dStack_1c0 * dStack_1c0;
        if (((dVar36 != 1.0) ||
            (dVar38 = local_1b8, pcVar37 = local_1c8, dVar40 = dStack_1c0, NAN(dVar36))) &&
           (dVar38 = DAT_14c8464f0, pcVar37 = DAT_14c8464e0, dVar40 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar36)) {
          dVar36 = 1.0 / SQRT(dVar36);
          dVar38 = local_1b8 * dVar36;
          dVar40 = dStack_1c0 * dVar36;
          pcVar37 = (code *)((double)local_1c8 * dVar36);
        }
        param_1[0xea] = (longlong)pcVar37;
        param_1[0xeb] = (longlong)dVar40;
        param_1[0xec] = (longlong)dVar38;
        local_1c8 = pcVar37;
        dStack_1c0 = dVar40;
        local_1b8 = dVar38;
      }
      if (param_1[2] != 0) {
        fVar34 = *(float *)(param_3 + 0x20);
        lVar33 = *(longlong *)(param_1[2] + 0x30);
        fVar35 = 0.0;
        if ((lVar33 != 0) && (plVar3 = *(longlong **)(lVar33 + 0x2b0), plVar3 != (longlong *)0x0)) {
          if (*(code **)(*plVar3 + 0x660) == FUN_1449fb17e) {
            if ((*(byte *)((longlong)plVar3 + 0x39e) & 1) == 0) {
              if ((*(byte *)((longlong)plVar3 + 0x39e) & 2) == 0) {
                if (DAT_14caf84d0 == 0) {
                  local_260 = &local_1a8;
                  local_1a8 = FUN_1449e2820;
                  local_250 = FUN_14081d0ea;
                  local_258 = &LAB_145a62952;
                  local_268 = &LAB_147c8cd45;
                  local_270 = &LAB_1461468ae;
                  local_278 = L"Engine";
                  local_280 = 0;
                  local_288 = (undefined8 *)CONCAT44(local_288._4_4_,0x10000006);
                  local_290 = CONCAT44(local_290._4_4_,8);
                  local_298 = CONCAT44(local_298._4_4_,0x218);
                  FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
                }
                lVar15 = DAT_14caf84d0;
                lVar33 = *(longlong *)(DAT_14caf84d0 + 0x110);
                if (lVar33 == 0) {
                  FUN_140aa6c08(DAT_14caf84d0);
                  lVar33 = *(longlong *)(lVar15 + 0x110);
                }
                pfVar16 = (float *)(lVar33 + 0x38);
              }
              else {
                pfVar16 = (float *)((longlong)plVar3 + 0x41c);
              }
              fVar35 = *pfVar16;
              *(float *)(plVar3 + 0x83) = fVar35;
            }
            else {
              fVar35 = *(float *)(plVar3 + 0x83);
            }
          }
          else {
            fVar35 = (float)(**(code **)(*plVar3 + 0x660))(plVar3);
          }
        }
        fVar34 = fVar34 - fVar35;
        if (1e-08 < ABS(fVar34)) {
          dVar36 = (double)fVar34;
          dVar38 = (double)*(float *)(param_1 + 0xe0);
          local_198[0] = DAT_14c8462d0 * dVar36 * dVar38;
          dStack_1a0 = DAT_14c8462c8 * dVar36 * dVar38;
          local_1a8 = (code *)(dVar36 * DAT_14c8462c0 * dVar38);
          FUN_140c34164(param_1,&local_1a8,1,0);
        }
      }
      local_298 = CONCAT44(local_298._4_4_,*(undefined4 *)(*plVar19 + 0x118));
      FUN_140b81d26(&local_1a8,param_1 + 0xe7,&local_1c8,param_2);
      dVar36 = local_198[0] * local_198[0] +
               (double)local_1a8 * (double)local_1a8 + dStack_1a0 * dStack_1a0;
      if (((dVar36 != 1.0) ||
          (dVar38 = local_198[0], dVar40 = dStack_1a0, pcVar37 = local_1a8, NAN(dVar36))) &&
         (dVar38 = DAT_14c8464f0, dVar40 = DAT_14c8464e8, pcVar37 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar36)) {
        dVar36 = 1.0 / SQRT(dVar36);
        dVar38 = local_198[0] * dVar36;
        dVar40 = dStack_1a0 * dVar36;
        pcVar37 = (code *)((double)local_1a8 * dVar36);
      }
      param_1[0xe7] = (longlong)pcVar37;
      param_1[0xe8] = (longlong)dVar40;
      param_1[0xe9] = (longlong)dVar38;
      uVar20 = (uint)*(byte *)(DAT_14c997c50 + 0x60);
      local_248 = (longlong *)CONCAT44(local_248._4_4_,(int)param_1[0x130]);
      local_188 = (double *)0x0;
      local_180 = 0;
      local_1a8 = (code *)0x0;
      dStack_1a0 = 0.0;
      local_17c = 0x80;
      uStack_178 = 0xffffffff;
      local_174 = 0;
      local_168 = 0;
      local_160 = 0;
      lVar33 = param_1[0x34];
      if ((lVar33 != 0) && (0 < *(int *)(lVar33 + 0x40))) {
        lVar27 = 0xb4;
        lVar15 = 0;
        do {
          iVar25 = *(int *)(param_1[0xd2] + lVar27);
          if (((iVar25 != 0) && (uVar22 = *(uint *)(param_1[0xd2] + -4 + lVar27), -1 < (int)uVar22))
             && (((int)uVar22 < DAT_14c9647dc &&
                 (((plVar19 = (longlong *)
                              ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
                   plVar19 != (longlong *)0x0 && ((int)plVar19[2] == iVar25)) &&
                  ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))))) {
            if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
              lVar33 = *plVar19;
            }
            else {
              lVar33 = 0;
            }
            if (lVar33 == 0) {
              lVar33 = DAT_14c997c50;
            }
            local_228 = CONCAT44(local_228._4_4_,(uint)*(byte *)(lVar33 + 0x60));
            piVar17 = (int *)FUN_140c31612(&local_1a8,*(byte *)(lVar33 + 0x60),&local_228);
            *piVar17 = *piVar17 + 1;
            lVar33 = param_1[0x34];
          }
          lVar15 = lVar15 + 1;
          lVar27 = lVar27 + 0x100;
        } while (lVar15 < *(int *)(lVar33 + 0x40));
      }
      if (((*(int *)((longlong)param_1 + 0x81c) != 0) &&
          (uVar22 = *(uint *)(param_1 + 0x103), -1 < (int)uVar22)) &&
         ((((int)uVar22 < DAT_14c9647dc &&
           ((plVar19 = (longlong *)
                       ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
            plVar19 != (longlong *)0x0 && ((int)plVar19[2] == *(int *)((longlong)param_1 + 0x81c))))
           ) && ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
          lVar33 = *plVar19;
        }
        else {
          lVar33 = 0;
        }
        if (lVar33 == 0) {
          lVar33 = DAT_14c997c50;
        }
        local_228 = CONCAT44(local_228._4_4_,(uint)*(byte *)(lVar33 + 0x60));
        piVar17 = (int *)FUN_140c31612();
        *piVar17 = *piVar17 + 1;
      }
      if (local_180 == 0) {
        uVar23 = 1;
        uVar31 = 0;
        iVar25 = 0;
        iVar18 = 0;
      }
      else {
        pdVar21 = local_188;
        if (local_188 == (double *)0x0) {
          pdVar21 = local_198;
        }
        uVar22 = *(uint *)pdVar21;
        if (uVar22 == 0) {
          iVar25 = local_180 + 0x1e;
          if (-1 < local_180 + -1) {
            iVar25 = local_180 + -1;
          }
          uVar31 = 0;
          uVar23 = (ulonglong)(uint)(iVar25 >> 5);
          if (iVar25 >> 5 < 1) {
            uVar23 = uVar31;
          }
          iVar18 = 0;
          do {
            if (uVar23 == uVar31) goto LAB_140c30161;
            iVar18 = iVar18 + 0x20;
            uVar22 = *(uint *)((longlong)pdVar21 + (uVar31 + 1) * 4);
            uVar31 = uVar31 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar31 = 0;
          iVar18 = 0;
        }
        uVar23 = (ulonglong)(-uVar22 & uVar22);
        uVar1 = uVar23 * 2 + 1;
        lVar33 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        iVar25 = (iVar18 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
        if (local_180 <= iVar25) {
          iVar25 = local_180;
        }
      }
      if (iVar25 != local_180) {
        local_230 = local_1a8;
        pdVar21 = local_188;
        if (local_188 == (double *)0x0) {
          pdVar21 = local_198;
        }
        iVar24 = local_180 + 0x1e;
        if (-1 < local_180 + -1) {
          iVar24 = local_180 + -1;
        }
        iVar24 = iVar24 >> 5;
        local_240 = (int *)((longlong)pdVar21 + 4);
        uVar22 = 0xffffffff;
        iVar28 = -1;
        do {
          uVar26 = *(uint *)(local_1a8 + (longlong)iVar25 * 0x10);
          iVar25 = *(int *)(local_1a8 + (longlong)iVar25 * 0x10 + 4);
          if (uVar26 == (uint)local_248 && iVar28 == iVar25) {
            uVar20 = uVar26;
          }
          iVar29 = iVar25;
          if (iVar25 < iVar28) {
            iVar29 = iVar28;
          }
          if (iVar28 < iVar25) {
            uVar20 = uVar26;
          }
          uVar22 = ~(uint)uVar23 & uVar22;
          iVar25 = (int)uVar31;
          lVar33 = (longlong)iVar25;
          uVar26 = *(uint *)((longlong)pdVar21 + lVar33 * 4) & uVar22;
          if (uVar26 == 0) {
            iVar28 = iVar24;
            if (iVar24 < iVar25) {
              iVar28 = iVar25;
            }
            if (iVar24 <= iVar25) break;
            lVar15 = 0;
            while( true ) {
              iVar18 = iVar18 + 0x20;
              uVar26 = local_240[lVar33 + lVar15];
              if (uVar26 != 0) break;
              lVar15 = lVar15 + 1;
              if (iVar28 - lVar33 == lVar15) goto LAB_140c30161;
            }
            uVar31 = (ulonglong)(iVar25 + (int)lVar15 + 1);
            uVar22 = 0xffffffff;
          }
          uVar23 = (ulonglong)(-uVar26 & uVar26);
          uVar1 = uVar23 * 2 + 1;
          lVar33 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          iVar25 = (iVar18 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
          iVar28 = iVar29;
        } while (iVar25 < local_180);
      }
LAB_140c30161:
      *(uint *)(param_1 + 0x130) = uVar20;
      (**(code **)(*param_1 + 0x48))(param_1,param_3 + 0x40,param_2);
      (**(code **)(*param_1 + 0xa8))(param_1,param_3 + 0x128,param_2);
      lVar33 = param_1[0x34];
      if (*(char *)(lVar33 + 0xd9) != '\0') {
        (**(code **)(*param_1 + 0x88))(param_1);
        lVar33 = param_1[0x34];
      }
      lVar15 = local_238;
      if (*(char *)(lVar33 + 0xd8) == '\x01') {
        (**(code **)(*param_1 + 0xa0))(param_1);
      }
      local_298 = lVar15;
      (**(code **)(*param_1 + 0xb0))
                (param_1,param_3 + 0x40,*(undefined4 *)(param_3 + 0x150),param_2);
      (**(code **)(*param_1 + 0xd0))(param_1);
      (**(code **)(*param_1 + 0xd8))(param_1);
      (**(code **)(*param_1 + 0xe0))(param_1);
      local_160 = 0;
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      uVar31 = (ulonglong)dStack_1a0 >> 0x20;
      dStack_1a0 = (double)((ulonglong)dStack_1a0 & 0xffffffff00000000);
      if ((int)uVar31 != 0) {
        FUN_14472eb64(&local_1a8,0);
      }
      uStack_178 = 0xffffffff;
      local_174 = 0;
      local_180 = 0;
      if (0x80 < local_17c) {
        local_17c = 0x80;
        FUN_1446efbd8(local_198,0);
      }
      if (local_188 != (double *)0x0) {
        FUN_1400020a8();
      }
      if (local_1a8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c306e2 FUN_140c306e2 body=732 status=ok
// SIG undefined FUN_140c306e2(void)

void FUN_140c306e2(longlong *param_1,double *param_2,float param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  pdVar1 = (double *)*param_1;
  dVar9 = *param_2;
  dVar10 = param_2[1];
  dVar11 = param_2[2];
  dVar7 = (double)param_1[6] * param_2[8];
  dVar8 = (double)param_1[7] * param_2[9];
  dVar18 = (double)param_1[8] * param_2[10];
  dVar13 = param_2[3];
  dVar16 = param_2[3];
  dVar12 = dVar8 * dVar9 - dVar7 * dVar10;
  dVar6 = dVar18 * dVar10 - dVar8 * dVar11;
  dVar2 = dVar7 * dVar11 - dVar18 * dVar9;
  dVar6 = dVar6 + dVar6;
  dVar2 = dVar2 + dVar2;
  dVar12 = dVar12 + dVar12;
  dVar15 = *pdVar1 * param_2[8];
  dVar17 = pdVar1[1] * param_2[9];
  dVar5 = pdVar1[2] * param_2[10];
  dVar14 = dVar17 * dVar9 - dVar15 * dVar10;
  dVar3 = dVar5 * dVar10 - dVar17 * dVar11;
  dVar4 = dVar15 * dVar11 - dVar9 * dVar5;
  dVar3 = dVar3 + dVar3;
  dVar4 = dVar4 + dVar4;
  dVar14 = dVar14 + dVar14;
  dVar7 = (dVar12 * dVar10 - dVar2 * dVar11) + dVar13 * dVar6 + dVar7 + param_2[4];
  dVar8 = (dVar11 * dVar6 - dVar9 * dVar12) + dVar16 * dVar2 + dVar8 + param_2[5];
  dVar12 = dVar12 * dVar13 + dVar18 + (dVar2 * dVar9 - dVar6 * dVar10) + param_2[6];
  dVar2 = dVar14 * dVar13 + dVar5 + (dVar4 * dVar9 - dVar3 * dVar10);
  dVar13 = (dVar14 * dVar10 - dVar4 * dVar11) + dVar13 * dVar3 + dVar15;
  dVar14 = (dVar11 * dVar3 - dVar9 * dVar14) + dVar16 * dVar4 + dVar17;
  dVar16 = (double)(*(float *)(pdVar1 + 6) + *(float *)((longlong)pdVar1 + 0x5c));
  *param_4 = dVar7 - dVar16 * dVar13;
  param_4[1] = dVar8 - dVar14 * dVar16;
  param_4[2] = dVar12 - dVar2 * dVar16;
  dVar16 = (double)(param_3 + *(float *)(*param_1 + 0x34));
  param_4[3] = dVar13 * dVar16 + dVar7;
  param_4[4] = dVar14 * dVar16 + dVar8;
  param_4[5] = dVar2 * dVar16 + dVar12;
  return;
}



// FUNCTION 140c309be FUN_140c309be body=1302 status=ok
// SIG undefined FUN_140c309be(void)

void FUN_140c309be(longlong *param_1,int param_2,double *param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  
  lVar2 = **(longlong **)(param_4 + 0x48);
  lVar8 = (longlong)(int)(*(longlong **)(param_4 + 0x48))[1];
  lVar3 = *(longlong *)(lVar2 + 0x28);
  lVar2 = *(longlong *)(lVar2 + 0x48);
  lVar9 = lVar8 * 0x10;
  dVar19 = (double)*(float *)(lVar2 + 0xc + lVar9);
  dVar13 = (double)*(float *)(lVar2 + 8 + lVar9);
  dVar16 = (double)*(float *)(lVar2 + 4 + lVar9);
  dVar6 = (double)*(float *)(lVar2 + lVar9);
  dVar27 = *(double *)(lVar3 + 0x10 + lVar8 * 0x18);
  pdVar12 = (double *)(lVar3 + lVar8 * 0x18);
  dVar23 = *pdVar12;
  dVar18 = pdVar12[1];
  lVar2 = *param_1;
  lVar3 = (longlong)param_2 * 0x18;
  dVar14 = param_3[1];
  pdVar12 = (double *)(lVar2 + lVar3);
  *pdVar12 = *param_3;
  pdVar12[1] = dVar14;
  *(double *)(lVar2 + 0x10 + lVar3) = param_3[2];
  dVar20 = *param_3;
  dVar21 = param_3[1];
  dVar14 = param_3[2] * 1.0;
  dVar24 = dVar21 * dVar6 - dVar16 * dVar20;
  dVar17 = dVar14 * dVar16 - dVar13 * dVar21;
  dVar15 = dVar20 * dVar13 - dVar6 * dVar14;
  dVar17 = dVar17 + dVar17;
  dVar15 = dVar15 + dVar15;
  dVar24 = dVar24 + dVar24;
  dVar18 = (dVar13 * dVar17 - dVar6 * dVar24) + dVar19 * dVar15 + dVar21 + dVar18;
  lVar2 = param_1[2];
  auVar7._8_4_ = SUB84(dVar18,0);
  auVar7._0_8_ = (dVar24 * dVar16 - dVar15 * dVar13) + dVar19 * dVar17 + dVar20 + dVar23;
  auVar7._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])(lVar2 + lVar3) = auVar7;
  *(double *)(lVar2 + 0x10 + lVar3) =
       dVar24 * dVar19 + dVar14 + (dVar15 * dVar6 - dVar17 * dVar16) + dVar27;
  dVar14 = DAT_14c8464f0;
  dVar24 = DAT_14c8464e8;
  dVar27 = DAT_14c8464e0;
  if (param_4 != 0) {
    pdVar12 = (double *)(param_1[2] + lVar3);
    plVar4 = *(longlong **)(param_4 + 0x48);
    lVar2 = *plVar4;
    lVar11 = (longlong)(int)plVar4[1];
    lVar8 = *(longlong *)(lVar2 + 0x28);
    lVar9 = *(longlong *)(lVar2 + 0x48);
    lVar10 = lVar11 * 0x10;
    dVar14 = 0.0;
    uVar28 = 0;
    uVar29 = 0;
    dVar27 = 0.0;
    uVar25 = 0;
    uVar26 = 0;
    if ((plVar4 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar4 + 0xc))) {
      lVar5 = *(longlong *)(lVar2 + 0x3e0);
      uVar1 = *(undefined8 *)(lVar5 + lVar11 * 0x18);
      uVar25 = (undefined4)uVar1;
      uVar26 = (undefined4)((ulonglong)uVar1 >> 0x20);
      dVar27 = *(double *)(lVar5 + 8 + lVar11 * 0x18);
      uVar1 = *(undefined8 *)(lVar5 + 0x10 + lVar11 * 0x18);
      uVar28 = (undefined4)uVar1;
      uVar29 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    dVar22 = (double)*(float *)(lVar9 + lVar10);
    dVar17 = (double)*(float *)(lVar9 + 4 + lVar10);
    dVar24 = (double)*(float *)(lVar9 + 8 + lVar10);
    dVar20 = (double)*(float *)(lVar9 + 0xc + lVar10);
    dVar15 = dVar22 * dVar27 - (double)CONCAT44(uVar26,uVar25) * dVar17;
    dVar18 = dVar24 * (double)CONCAT44(uVar26,uVar25) - (double)CONCAT44(uVar29,uVar28) * dVar22;
    dVar23 = dVar17 * (double)CONCAT44(uVar29,uVar28) - dVar27 * dVar24;
    dVar15 = dVar15 + dVar15;
    dVar18 = dVar18 + dVar18;
    dVar23 = dVar23 + dVar23;
    dVar21 = pdVar12[2] -
             ((dVar22 * dVar18 - dVar23 * dVar17) +
              dVar15 * dVar20 + (double)CONCAT44(uVar29,uVar28) +
             *(double *)(lVar8 + 0x10 + lVar11 * 0x18));
    dVar17 = *pdVar12 -
             ((dVar17 * dVar15 - dVar18 * dVar24) +
              dVar20 * dVar23 + (double)CONCAT44(uVar26,uVar25) + *(double *)(lVar8 + lVar11 * 0x18)
             );
    dVar18 = pdVar12[1] -
             ((dVar24 * dVar23 - dVar15 * dVar22) + dVar18 * dVar20 + dVar27 +
             *(double *)(lVar8 + 8 + lVar11 * 0x18));
    dVar23 = 0.0;
    dVar20 = 0.0;
    dVar27 = 0.0;
    dVar15 = 0.0;
    dVar24 = 0.0;
    if ((plVar4 != (longlong *)0x0) &&
       (dVar27 = 0.0, dVar15 = 0.0, dVar24 = 0.0, *(byte *)((longlong)plVar4 + 0xc) != 0)) {
      lVar11 = lVar11 * 0xc;
      lVar8 = *(longlong *)(lVar2 + 0x278);
      lVar2 = *(longlong *)(lVar2 + 0x290);
      dVar14 = (double)*(float *)(lVar8 + 8 + lVar11);
      dVar23 = (double)*(float *)(lVar8 + 4 + lVar11);
      dVar27 = (double)*(float *)(lVar8 + lVar11);
      dVar15 = (double)*(float *)(lVar2 + 8 + lVar11);
      dVar20 = (double)*(float *)(lVar2 + 4 + lVar11);
      dVar24 = (double)*(float *)(lVar2 + lVar11);
    }
    dVar14 = dVar14 - (dVar17 * dVar20 - dVar24 * dVar18);
    dVar24 = dVar23 - (dVar21 * dVar24 - dVar15 * dVar17);
    dVar27 = dVar27 - (dVar18 * dVar15 - dVar20 * dVar21);
  }
  lVar2 = param_1[4];
  *(double *)(lVar2 + lVar3) = dVar27;
  *(double *)(lVar2 + 8 + lVar3) = dVar24;
  *(double *)(lVar2 + 0x10 + lVar3) = dVar14;
  lVar2 = param_1[4];
  lVar8 = param_1[6];
  dVar24 = *(double *)(lVar2 + lVar3);
  dVar17 = ((double *)(lVar2 + lVar3))[1];
  dVar27 = *(double *)(lVar2 + 0x10 + lVar3);
  dVar15 = -dVar6;
  dVar16 = -dVar16;
  dVar13 = dVar13 * -1.0;
  dVar19 = dVar19 * 1.0;
  dVar14 = dVar17 * dVar15 - dVar16 * dVar24;
  dVar18 = dVar27 * dVar16 - dVar13 * dVar17;
  dVar23 = dVar24 * dVar13 - dVar15 * dVar27;
  dVar18 = dVar18 + dVar18;
  dVar23 = dVar23 + dVar23;
  dVar14 = dVar14 + dVar14;
  dVar27 = *(double *)(lVar2 + 0x10 + lVar3);
  pdVar12 = (double *)(lVar8 + lVar3);
  *pdVar12 = (dVar14 * dVar16 - dVar23 * dVar13) + dVar19 * dVar18 + dVar24;
  pdVar12[1] = dVar6 * dVar14 + dVar13 * dVar18 + dVar19 * dVar23 + dVar17;
  *(double *)(lVar8 + 0x10 + lVar3) = dVar19 * dVar14 + dVar27 + (dVar23 * dVar15 - dVar18 * dVar16)
  ;
  return;
}



// FUNCTION 140c30ed4 FUN_140c30ed4 body=588 status=ok
// SIG undefined FUN_140c30ed4(void)

void FUN_140c30ed4(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  FUN_140c31120();
  fVar1 = *(float *)(param_2 + 4);
  fVar14 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_2 + 0x18);
  bVar3 = *(byte *)(param_2 + 0x1c);
  lVar10 = *(longlong *)(param_1 + 0x1a0);
  fVar12 = 0.0;
  if ((0 < *(int *)(lVar10 + 0x20)) && (0 < *(int *)(lVar10 + 0x10))) {
    bVar4 = *(byte *)(param_2 + 0x1e);
    bVar5 = *(byte *)(param_2 + 0x1f);
    plVar6 = *(longlong **)(lVar10 + 8);
    plVar7 = *(longlong **)(lVar10 + 0x18);
    if (*(char *)(param_2 + 0x1d) != *(char *)(*plVar7 + 0x34)) {
      *(char *)(*plVar7 + 0x34) = *(char *)(param_2 + 0x1d);
    }
    if ((bVar4 & 1) != 0) {
      FUN_148acb588(plVar7,*(int *)((longlong)plVar7 + 0xc) + 1,0);
    }
    if ((bVar5 & 1) != 0) {
      FUN_148acb588(plVar7,*(int *)((longlong)plVar7 + 0xc) + -1,0);
    }
    if (DAT_14c763b40 <= 0.0) {
      fVar13 = fVar1 * fVar1;
    }
    else {
      FUN_148acb588(plVar7,1,1);
      fVar13 = DAT_14c763b40;
      fVar14 = 0.0;
    }
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
    fVar12 = 0.0;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    *(float *)((longlong)plVar6 + 0xc) = fVar13;
    if (*(char *)((longlong)plVar6 + 0x24) == '\x01') {
      fVar12 = *(float *)((longlong)plVar6 + 0x14);
    }
    fVar12 = fVar12 * *(float *)(*plVar6 + 0x18);
    lVar10 = *(longlong *)(param_1 + 0x1a0);
  }
  if (0 < *(int *)(lVar10 + 0x40)) {
    lVar8 = 8;
    lVar9 = 0;
    do {
      lVar10 = *(longlong *)(lVar10 + 0x38);
      fVar13 = 0.0;
      if (((fVar1 < 1e-08) && (fVar13 = 0.0, 1e-08 < ABS(*(float *)(param_1 + 0x188)))) &&
         (fVar13 = fVar12, *(char *)(lVar10 + 3 + lVar8) == '\0')) {
        fVar13 = 0.0;
      }
      if (*(char *)(lVar10 + lVar8) == '\x01') {
        fVar15 = *(float *)(lVar10 + 0x18 + lVar8) * fVar14;
        bVar11 = ABS(fVar15) < ABS(fVar13);
        fVar13 = fVar13 + fVar15;
      }
      else {
        bVar11 = true;
        fVar13 = fVar12;
      }
      *(float *)(lVar10 + 0x38 + lVar8) = fVar13 * 10000.0;
      *(bool *)(lVar10 + 0x9c + lVar8) = bVar11;
      if ((fVar2 != 0.0) || (bVar4 = bVar3, NAN(fVar2))) {
        bVar4 = *(byte *)(lVar10 + 1 + lVar8) | bVar3;
      }
      if ((bVar4 & 1) != 0) {
        fVar13 = *(float *)(lVar10 + 0x1c + lVar8);
        if ((bVar3 & 1) == 0) {
          fVar13 = fVar13 * fVar2;
        }
        *(float *)(lVar10 + 0x38 + lVar8) = fVar13 * 10000.0;
        *(undefined1 *)(lVar10 + 0x9c + lVar8) = 0;
      }
      lVar9 = lVar9 + 1;
      lVar10 = *(longlong *)(param_1 + 0x1a0);
      lVar8 = lVar8 + 0xe8;
    } while (lVar9 < *(int *)(lVar10 + 0x40));
  }
  return;
}



// FUNCTION 140c31120 FUN_140c31120 body=450 status=ok
// SIG undefined FUN_140c31120(void)

void FUN_140c31120(longlong param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x1a0);
  if (0 < *(int *)(lVar6 + 0x80)) {
    lVar4 = 0x10;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x78) + -0x10 + lVar4);
      cVar1 = *(char *)(lVar2 + 0x48);
      if (cVar1 == '\x01') {
        fVar7 = param_2[4];
        if (0.0 < *(double *)(lVar2 + 8) || *(double *)(lVar2 + 8) == 0.0) {
LAB_140c31173:
          fVar7 = -fVar7;
        }
LAB_140c31176:
        *(float *)(*(longlong *)(lVar6 + 0x78) + lVar4) = fVar7 * *(float *)(lVar2 + 0x38);
        lVar6 = *(longlong *)(param_1 + 0x1a0);
      }
      else {
        if (cVar1 == '\x03') {
          fVar7 = param_2[3];
          goto LAB_140c31176;
        }
        if (cVar1 == '\x02') {
          fVar7 = param_2[5];
          goto LAB_140c31173;
        }
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x38;
    } while (lVar5 < *(int *)(lVar6 + 0x80));
  }
  if (0 < *(int *)(lVar6 + 0x90)) {
    lVar4 = 0x68;
    lVar5 = 0;
    fVar7 = 1.0;
    do {
      lVar6 = *(longlong *)(lVar6 + 0x88);
      fVar8 = param_2[1];
      if (1.0 <= param_2[1]) {
        fVar8 = fVar7;
      }
      if (fVar8 <= -1.0) {
        fVar8 = -1.0;
      }
      *(float *)(lVar6 + -0x60 + lVar4) = fVar8;
      puVar3 = *(undefined1 **)(lVar6 + -0x68 + lVar4);
      switch(*puVar3) {
      case 1:
        fVar8 = param_2[4];
        if (0.0 < *(double *)(puVar3 + 0x10) || *(double *)(puVar3 + 0x10) == 0.0) {
          fVar8 = -fVar8;
        }
        goto LAB_140c312a5;
      case 2:
        fVar8 = -param_2[5] - *param_2;
        if (1.0 <= -param_2[5] - *param_2) {
          fVar8 = fVar7;
        }
        if (fVar8 <= -1.0) {
          fVar8 = -1.0;
        }
        *(float *)(lVar6 + lVar4) = fVar8 * *(float *)(puVar3 + 0x50);
        break;
      case 3:
        fVar8 = param_2[3];
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        *(float *)(lVar6 + -8 + lVar4) =
             (float)(~-(uint)(-1.0 < fVar8) & 0x3f800000 | (uint)-fVar8 & -(uint)(-1.0 < fVar8)) *
             *(float *)(puVar3 + 0x50);
        break;
      case 4:
        fVar8 = param_2[3];
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        *(float *)(lVar6 + -8 + lVar4) =
             (float)(~-(uint)(-1.0 < fVar8) & 0x3f800000 | (uint)-fVar8 & -(uint)(-1.0 < fVar8)) *
             *(float *)(puVar3 + 0x50);
        fVar8 = param_2[4];
LAB_140c312a5:
        if (1.0 <= fVar8) {
          fVar8 = fVar7;
        }
        if (fVar8 <= -1.0) {
          fVar8 = -1.0;
        }
        *(float *)(lVar6 + -4 + lVar4) = fVar8 * *(float *)(puVar3 + 0x50);
      }
      lVar5 = lVar5 + 1;
      lVar6 = *(longlong *)(param_1 + 0x1a0);
      lVar4 = lVar4 + 0x70;
    } while (lVar5 < *(int *)(lVar6 + 0x90));
  }
  return;
}



// FUNCTION 140c312e2 FUN_140c312e2 body=685 status=ok
// SIG undefined FUN_140c312e2(void)

void FUN_140c312e2(longlong param_1,float *param_2,float param_3)

{
  void *_Dst;
  float fVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x1a0);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0xf0))) {
    plVar5 = *(longlong **)(lVar4 + 0xe8);
    fVar1 = *(float *)(plVar5 + 4);
    lVar4 = plVar5[6];
    fVar9 = *param_2;
    *(float *)(plVar5 + 4) = fVar9;
    *(float *)((longlong)plVar5 + 0x24) = param_2[1];
    *(undefined1 *)(plVar5 + 6) = *(undefined1 *)(param_2 + 2);
    if (0 < (int)plVar5[0xb]) {
      uVar8 = 0;
      do {
        lVar6 = (longlong)(int)uVar8;
        *(float *)(plVar5[10] + lVar6 * 8) = *(float *)(plVar5[10] + lVar6 * 8) + param_3;
        fVar9 = *(float *)(plVar5[10] + lVar6 * 8);
        if (*(float *)(*plVar5 + 0x280) <= fVar9 && fVar9 != *(float *)(*plVar5 + 0x280)) {
          iVar7 = (int)plVar5[0xb];
          if (~uVar8 + iVar7 != 0) {
            _Dst = (void *)(plVar5[10] + lVar6 * 8);
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar8 + iVar7) << 3);
            iVar7 = (int)plVar5[0xb];
          }
          uVar8 = uVar8 - 1;
          *(int *)(plVar5 + 0xb) = iVar7 + -1;
          FUN_140c31590(plVar5 + 10);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)plVar5[0xb]);
      fVar9 = *(float *)(plVar5 + 4);
    }
    dVar10 = (double)FUN_144719204(SUB84((double)(fVar9 - fVar1),0));
    dVar10 = (double)(~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar10 |
                     (ulonglong)(dVar10 + 360.0) & -(ulonglong)(dVar10 < 0.0));
    iVar7 = (int)plVar5[0xb];
    *(uint *)(plVar5 + 0xb) = iVar7 + 1U;
    if (*(uint *)((longlong)plVar5 + 0x5c) < iVar7 + 1U) {
      FUN_145788aa8(plVar5 + 10,iVar7);
    }
    lVar6 = plVar5[10];
    *(undefined4 *)(lVar6 + (longlong)iVar7 * 8) = 0;
    *(float *)(lVar6 + 4 + (longlong)iVar7 * 8) =
         (float)(double)(~-(ulonglong)(180.0 < dVar10) & (ulonglong)dVar10 |
                        (ulonglong)(dVar10 + -360.0) & -(ulonglong)(180.0 < dVar10));
    cVar2 = *(char *)((longlong)plVar5 + 0x31);
    cVar3 = *(char *)((longlong)param_2 + 9);
    *(char *)((longlong)plVar5 + 0x31) = cVar3;
    if (cVar3 == '\0') {
      if (*(char *)((longlong)plVar5 + 0x32) == '\0') {
        *(undefined1 *)((longlong)plVar5 + 0x32) = 1;
      }
    }
    else if ((cVar3 == '\x01') && (cVar2 == '\0')) {
      *(undefined1 *)((longlong)plVar5 + 0x33) = 1;
    }
    if ((char)lVar4 == '\0') {
      if ((((char)plVar5[6] != '\0') && (*(char *)(param_1 + 0x988) == '\x01')) &&
         (*(char *)(param_1 + 0x98a) == '\x01')) {
        *(int *)(param_1 + 0x9ac) = *(int *)(param_1 + 0x9ac) + 1;
        *(float *)(param_1 + 0x9b8) =
             (float)SQRT(*(double *)(param_1 + 0x90) * *(double *)(param_1 + 0x90) +
                         *(double *)(param_1 + 0x80) * *(double *)(param_1 + 0x80) +
                         *(double *)(param_1 + 0x88) * *(double *)(param_1 + 0x88));
        *(undefined1 *)(param_1 + 0x988) = 0;
        *(undefined1 *)(param_1 + 0x98a) = 0;
        *(undefined4 *)(param_1 + 0x98c) = 0;
        *(undefined4 *)(param_1 + 0x9a0) = 0;
        *(undefined4 *)(param_1 + 0x9b4) = 0;
        *(undefined4 *)(param_1 + 0x9a8) = 0;
        *(undefined1 *)(param_1 + 0x99c) = 0;
        *(undefined8 *)(param_1 + 0x994) = 0;
      }
    }
    else if ((char)plVar5[6] != '\0') {
      *(undefined4 *)(param_1 + 0x9b8) = 0;
    }
    plVar5[9] = *(longlong *)(param_2 + 8);
    lVar4 = *(longlong *)(param_2 + 6);
    plVar5[7] = *(longlong *)(param_2 + 4);
    plVar5[8] = lVar4;
  }
  return;
}



// FUNCTION 140c31590 FUN_140c31590 body=129 status=ok
// SIG undefined FUN_140c31590(void)

void FUN_140c31590(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0x1ffffffffffff800U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if ((uVar1 == 0) || (0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 3,4);
      uVar2 = uVar2 >> 3;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,8,4);
    }
  }
  return;
}



// FUNCTION 140c31612 FUN_140c31612 body=1461 status=ok
// SIG undefined FUN_140c31612(void)

longlong FUN_140c31612(longlong *param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  
  iVar17 = (int)param_1[1];
  iVar19 = *(int *)((longlong)param_1 + 0x34);
  if (iVar17 != iVar19) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar14 = *param_1 + (longlong)iVar4 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          if (lVar14 != 0) goto LAB_140c31672;
          break;
        }
        iVar4 = *(int *)(lVar14 + 8);
      } while (iVar4 != -1);
    }
  }
  if (iVar19 == 0) {
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_144869a3c(param_1,iVar17);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar4 = iVar19 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar6 = param_1 + 2;
    iVar8 = iVar19 + 1;
    iVar12 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar12 = iVar19;
    }
    if (iVar12 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar4 = iVar19;
        }
        else {
          uVar11 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar11) {
              uVar10 = uVar11;
            }
          }
          else {
            uVar10 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar10 << 2,0);
          iVar4 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar11 <= iVar4) {
            iVar8 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar6,iVar4);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar4 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar4 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar6;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar19 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar14 = (longlong)iVar17;
    iVar4 = *(int *)(*param_1 + 4 + lVar14 * 0x10);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar19 + -1;
    if (iVar19 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x10) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = puVar1;
  }
  iVar19 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar19 = iVar17;
  }
  puVar9[iVar19 >> 5] = puVar9[iVar19 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  uVar11 = 1;
  lVar18 = *param_1;
  lVar14 = lVar14 * 0x10;
  puVar2 = (undefined8 *)(lVar18 + lVar14);
  iVar19 = *param_3;
  *(int *)(lVar18 + lVar14) = iVar19;
  *(undefined8 *)(lVar18 + 4 + lVar14) = 0xffffffff00000000;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar10) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar3 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == iVar19) {
          *puVar3 = *puVar2;
          FUN_148f0264e(param_1,iVar17);
          goto LAB_140c31963;
        }
        iVar4 = *(int *)(puVar3 + 1);
      } while (iVar4 != -1);
    }
  }
  if (3 < uVar10) {
    uVar5 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar10 < 1) || ((int)uVar11 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    *(uint *)((longlong)puVar2 + 0xc) = param_2;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 1) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar17;
    goto LAB_140c31963;
  }
  *(uint *)(param_1 + 9) = uVar11;
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
    uVar11 = *(uint *)(param_1 + 9);
  }
  plVar15 = param_1 + 7;
  if (uVar11 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
LAB_140c317b7:
    uVar10 = 0;
    do {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar15;
      }
      *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4) =
           0xffffffff;
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
  }
  else {
    if (uVar11 == 0) goto LAB_140c31963;
    FUN_1446efa72(plVar6,0,uVar11,4);
    if (0 < (int)uVar11) goto LAB_140c317b7;
  }
  iVar19 = (int)param_1[5];
  if (iVar19 == 0) {
    uVar5 = 0;
    uVar16 = 1;
    iVar4 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar11 = *puVar9;
    if (uVar11 == 0) {
      iVar4 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar4 = iVar19 + -1;
      }
      uVar5 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar5;
      }
      iVar8 = 0;
      do {
        if (uVar16 == uVar5) goto LAB_140c31963;
        iVar8 = iVar8 + 0x20;
        uVar11 = puVar9[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar5 = 0;
      iVar8 = 0;
    }
    uVar16 = (ulonglong)(-uVar11 & uVar11);
    uVar20 = uVar16 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar4 = (iVar8 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar4) {
      iVar4 = iVar19;
    }
  }
  if (iVar4 < iVar19) {
    uVar11 = 0xffffffff;
    do {
      lVar14 = *param_1;
      lVar18 = (longlong)iVar4 * 0x10;
      uVar20 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar14 + lVar18);
      iVar19 = (int)uVar20;
      *(int *)(lVar14 + 0xc + lVar18) = iVar19;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar15;
      }
      *(undefined4 *)(lVar14 + 8 + lVar18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar20) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar15;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar19 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar11 = ~(uint)uVar16 & uVar11;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar19 = (int)param_1[5];
      iVar4 = (int)uVar5;
      lVar14 = (longlong)iVar4;
      uVar10 = puVar9[lVar14] & uVar11;
      if (uVar10 == 0) {
        iVar12 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar12 = iVar19 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar4) {
          iVar13 = iVar4;
        }
        if (iVar12 <= iVar4) break;
        lVar18 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar10 = puVar9[lVar14 + lVar18 + 1];
          if (uVar10 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar13 - lVar14 == lVar18) goto LAB_140c31963;
        }
        uVar5 = (ulonglong)(iVar4 + (int)lVar18 + 1);
        uVar11 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar10 & uVar10);
      uVar20 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar4 = (iVar8 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar19);
  }
LAB_140c31963:
  lVar14 = *param_1 + (longlong)iVar17 * 0x10;
LAB_140c31672:
  return lVar14 + 4;
}



// FUNCTION 140c31bc8 FUN_140c31bc8 body=1595 status=ok
// SIG undefined FUN_140c31bc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c31bc8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a0 [8];
  double local_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0xf0))) {
    plVar2 = *(longlong **)(lVar1 + 0xe8);
    local_108 = *(undefined8 *)(param_1 + 0x20);
    uStack_100 = *(undefined8 *)(param_1 + 0x28);
    local_f8 = *(undefined8 *)(param_1 + 0x30);
    uStack_f0 = *(undefined8 *)(param_1 + 0x38);
    FUN_140c35fde(&local_168,param_1 + 0x20,param_1 + 0x738);
    dVar16 = local_158 - local_168 * 0.0;
    dVar19 = local_168 * 0.0 - dStack_160;
    dVar4 = dStack_160 * 0.0 + local_158 * -0.0;
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar16 + dVar16;
    dVar4 = dVar4 + dVar4;
    dVar5 = (double)(*(float *)(*plVar2 + 0x58 + (ulonglong)*(byte *)(param_1 + 0x988) * 4) *
                     0.017453292 * *(float *)(param_1 + 0x884)) * 0.5;
    dVar7 = sin(dVar5);
    dVar8 = cos(dVar5);
    dVar10 = ((dStack_160 * dVar19 - dVar16 * local_158) + dStack_150 * dVar4 + 1.0) * dVar7;
    dVar9 = ((local_158 * dVar4 - dVar19 * local_168) + dStack_150 * dVar16 + 0.0) * dVar7;
    dVar7 = ((local_168 * dVar16 - dVar4 * dStack_160) + dStack_150 * dVar19 + 0.0) * dVar7;
    dVar17 = dVar10 * dStack_160;
    dVar18 = dVar10 * local_168;
    dVar4 = local_168 * dVar9;
    dVar5 = dStack_160 * dVar9;
    dVar16 = local_168 * dVar7;
    dVar19 = local_158 * dVar7;
    local_168 = dStack_160 * dVar7 * -1.0 +
                local_158 * dVar9 + dStack_150 * dVar10 * 1.0 + local_168 * dVar8;
    dStack_160 = dVar16 * 1.0 + dStack_150 * dVar9 + local_158 * dVar10 * -1.0 + dStack_160 * dVar8;
    local_158 = dStack_150 * dVar7 * 1.0 + ((dVar17 * 1.0 + dVar8 * local_158) - dVar4);
    dStack_150 = dVar19 * -1.0 + ((dVar18 * -1.0 + dVar8 * dStack_150) - dVar5);
    FUN_1448052ee(&local_168,&local_188);
    FUN_1448052ee(&local_168,local_1a0);
    FUN_1448052ee(&local_108,&local_1c8);
    FUN_1448052ee(&local_108,&local_1c8);
    auVar15 = _DAT_1499387d0;
    auVar11._8_8_ = dStack_180;
    auVar11._0_8_ = local_188;
    dVar4 = (double)DAT_1499387d0;
    dVar5 = DAT_1499387d0._8_8_;
    auVar11 = divpd(auVar11,_DAT_1499387d0);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_1b8._0_8_;
    auVar13 = divpd(auVar12,_DAT_1499387d0);
    auVar11 = roundpd(auVar11,auVar11,3);
    auVar13 = roundpd(auVar13,auVar13,3);
    dVar9 = (local_188 - auVar11._0_8_ * dVar4) * 0.008726646259971648;
    dVar8 = (dStack_180 - auVar11._8_8_ * dVar5) * 0.008726646259971648;
    dVar10 = ((double)local_1b8._0_8_ - auVar13._0_8_ * dVar4) * 0.008726646259971648;
    dVar7 = (0.0 - auVar13._8_8_ * dVar5) * 0.008726646259971648;
    dVar16 = sin(dVar9);
    dVar19 = sin(dVar8);
    dVar17 = sin(dVar10);
    sin(dVar7);
    dVar9 = cos(dVar9);
    dVar8 = cos(dVar8);
    dVar18 = cos(dVar10);
    cos(dVar7);
    dVar10 = dVar19 * dVar16 * dVar17 + dVar8 * dVar9 * dVar18;
    dStack_1c0 = -(dVar16 * dVar8 * dVar18) - dVar9 * dVar19 * dVar17;
    local_1b8._8_4_ = SUB84(dVar10,0);
    local_1b8._0_8_ = -(dVar8 * dVar16 * dVar17) + dVar19 * dVar9 * dVar18;
    local_1b8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar13._8_8_ = local_198;
    auVar13._0_8_ = local_1c8;
    auVar11 = divpd(auVar13,auVar15);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = local_190;
    auVar15 = divpd(auVar14,auVar15);
    auVar11 = roundpd(auVar11,auVar11,3);
    auVar15 = roundpd(auVar15,auVar15,3);
    dVar10 = (local_1c8 - auVar11._0_8_ * dVar4) * 0.008726646259971648;
    dVar7 = (local_198 - auVar11._8_8_ * dVar5) * 0.008726646259971648;
    dVar4 = (local_190 - auVar15._0_8_ * dVar4) * 0.008726646259971648;
    dVar5 = (0.0 - auVar15._8_8_ * dVar5) * 0.008726646259971648;
    local_1c8 = dVar16 * dVar19 * dVar18 - dVar9 * dVar8 * dVar17;
    dVar9 = sin(dVar10);
    dVar8 = sin(dVar7);
    dVar16 = sin(dVar4);
    sin(dVar5);
    dVar10 = cos(dVar10);
    dVar7 = cos(dVar7);
    dVar19 = cos(dVar4);
    cos(dVar5);
    dVar4 = dVar8 * dVar9 * dVar16 + dVar7 * dVar10 * dVar19;
    local_1e8 = dVar9 * dVar8 * dVar19 - dVar10 * dVar7 * dVar16;
    dStack_1e0 = -(dVar9 * dVar7 * dVar19) - dVar10 * dVar8 * dVar16;
    local_1d8._8_4_ = SUB84(dVar4,0);
    local_1d8._0_8_ = -(dVar7 * dVar9 * dVar16) + dVar8 * dVar10 * dVar19;
    local_1d8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    lVar3 = *plVar2;
    lVar1 = lVar3 + 0xf8;
    lVar6 = lVar3 + 0x104;
    if (*(char *)(param_1 + 0x988) == '\0') {
      lVar6 = lVar3 + 0xec;
      lVar1 = lVar3 + 0xe0;
    }
    local_1f8 = local_f8;
    uStack_1f0 = uStack_f0;
    local_208 = local_108;
    uStack_200 = uStack_100;
    FUN_140c32204(param_1,&local_208,&local_1c8,lVar1);
    FUN_140c32204(param_1,&local_108,&local_1e8,lVar6);
  }
  if ((local_e0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c32204 FUN_140c32204 body=2214 status=ok
// SIG undefined FUN_140c32204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c32204(longlong param_1,double *param_2,double *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar14;
  double dVar15;
  undefined1 auVar13 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar32;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  double local_190;
  double local_188;
  undefined8 uStack_180;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar8 = -(ulonglong)
           (0.0 <= param_3[3] * param_2[3] +
                   param_3[2] * param_2[2] + *param_3 * *param_2 + param_3[1] * param_2[1]);
  dVar14 = (double)(~uVar8 & 0xbff0000000000000 | uVar8 & 0x3ff0000000000000);
  *param_2 = *param_2 * dVar14;
  param_2[1] = param_2[1] * dVar14;
  param_2[2] = param_2[2] * dVar14;
  param_2[3] = dVar14 * param_2[3];
  auVar34 = _DAT_149934d80;
  dVar6 = *param_2;
  dVar4 = param_2[1];
  dVar28 = param_2[2] * -1.0;
  dVar32 = param_2[3] * 1.0;
  dVar12 = param_3[3];
  dVar14 = param_3[3];
  dVar16 = param_3[1];
  dVar21 = param_3[1];
  dVar15 = param_3[2];
  dVar1 = param_3[2];
  dVar29 = (dVar28 * dVar16 + (*param_3 * dVar32 * 1.0 - dVar12 * dVar6)) - dVar4 * dVar15 * -1.0;
  dVar33 = (dVar32 * dVar21 + (*param_3 * dVar28 * -1.0 - dVar14 * dVar4)) - dVar6 * dVar1 * 1.0;
  dVar12 = dVar32 * dVar15 * 1.0 + dVar6 * dVar16 + (dVar28 * dVar12 - *param_3 * dVar4 * 1.0);
  dVar14 = dVar28 * dVar1 * -1.0 + dVar4 * dVar21 + (dVar32 * dVar14 - *param_3 * dVar6 * -1.0);
  dVar16 = dVar12 * dVar12 + dVar29 * dVar29;
  dVar21 = dVar14 * dVar14 + dVar33 * dVar33;
  auVar35._0_8_ = dVar16 + dVar21;
  auVar35._8_8_ = dVar16 + dVar21;
  auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
  auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
  auVar19 = sqrtpd(auVar35,auVar35);
  auVar19 = divpd(_DAT_149934d80,auVar19);
  auVar26._0_8_ = auVar19._0_8_ * dVar12;
  auVar26._8_8_ = auVar19._8_8_ * dVar14;
  dVar12 = (double)((ulonglong)(dVar29 * auVar19._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
  dVar16 = (double)((ulonglong)(dVar33 * auVar19._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
  auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar37);
  dVar21 = auVar37._0_8_;
  dVar15 = auVar37._8_8_;
  dVar14 = dVar15;
  if (1.0 <= dVar15) {
    dVar14 = 1.0;
  }
  auVar20._0_8_ = ~-(ulonglong)(dVar15 < -1.0) & (ulonglong)dVar14;
  auVar20._8_8_ = 0;
  local_130 = acos((double)(-(ulonglong)(dVar15 < -1.0) & 0xbff0000000000000 | auVar20._0_8_));
  dVar14 = dVar21 * dVar21 + dVar12 * dVar12;
  dVar15 = dVar16 * dVar16 + 0.0;
  auVar13._0_8_ = dVar14 + dVar15;
  auVar13._8_8_ = dVar14 + dVar15;
  auVar19._8_8_ = -(ulonglong)(1e-08 <= auVar13._8_8_);
  auVar19._0_8_ = -(ulonglong)(1e-08 <= auVar13._0_8_);
  auVar37 = sqrtpd(auVar20,auVar13);
  auVar37 = divpd(auVar34,auVar37);
  auVar31._0_8_ = dVar12 * auVar37._0_8_;
  auVar31._8_8_ = dVar16 * auVar37._8_8_;
  auVar35 = blendvpd(ZEXT816(0x3ff0000000000000),auVar31,auVar19);
  dVar16 = (double)((ulonglong)(auVar37._0_8_ * dVar21) & -(ulonglong)(1e-08 <= auVar13._0_8_));
  dVar12 = auVar35._8_8_;
  dVar14 = auVar35._0_8_;
  fVar9 = ABS((float)dVar14);
  fVar11 = ABS((float)dVar12);
  if ((fVar11 < fVar9) || (ABS((float)dVar16) < fVar9)) {
    if ((fVar9 < fVar11) || (ABS((float)dVar16) < fVar11)) {
      pdVar7 = (double *)&DAT_14c8463b8;
    }
    else {
      pdVar7 = (double *)&DAT_14c846388;
    }
  }
  else {
    pdVar7 = (double *)&DAT_14c8463a0;
  }
  local_148 = *(double *)(param_1 + 0xb0);
  local_158 = *(double *)(param_1 + 0xb8);
  local_150 = *(double *)(param_1 + 0xc0);
  dVar6 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x28);
  dVar28 = *(double *)(param_1 + 0x30);
  dVar29 = *(double *)(param_1 + 0x38);
  local_108 = *(double *)(param_1 + 0x40);
  dStack_100 = *(double *)(param_1 + 0x48);
  uStack_180 = *(undefined8 *)(param_1 + 0x58);
  local_128 = *(double *)*(undefined1 (*) [16])(param_1 + 0x60);
  dStack_120 = *(double *)(param_1 + 0x68);
  local_140 = *pdVar7 * dVar12 - dVar14 * pdVar7[1];
  local_138 = pdVar7[2] * dVar14 - dVar16 * *pdVar7;
  dVar15 = pdVar7[1] * dVar16 - dVar12 * pdVar7[2];
  local_190 = dVar14 * local_138 - dVar15 * dVar12;
  dVar1 = dVar16 * dVar15 - local_140 * dVar14;
  local_118._8_4_ = auVar35._8_4_;
  local_118._0_8_ = dVar12;
  local_118._12_4_ = auVar35._12_4_;
  dVar21 = dVar12 * local_140 - local_138 * dVar16;
  dVar33 = local_190 * local_190 + dVar21 * dVar21 + dVar1 * dVar1;
  dVar32 = *(double *)(param_1 + 0x70);
  local_168 = *(double *)(param_1 + 0x708);
  local_160 = *(double *)(param_1 + 0x710);
  local_170 = *(double *)(param_1 + 0x718);
  if ((dVar33 != 1.0) || (NAN(dVar33))) {
    if (dVar33 < 9.99999993922529e-09) {
      local_190 = DAT_14c8464f0;
      dVar1 = DAT_14c8464e8;
      dVar21 = DAT_14c8464e0;
    }
    else {
      dVar33 = 1.0 / SQRT(dVar33);
      local_190 = local_190 * dVar33;
      dVar1 = dVar1 * dVar33;
      dVar21 = dVar21 * dVar33;
    }
  }
  dVar17 = *(double *)(param_1 + 200) * local_128;
  dVar22 = *(double *)(param_1 + 0xd0) * dStack_120;
  dVar33 = *(double *)(param_1 + 0xd8) * dVar32;
  dVar24 = dVar22 * dVar6 - dVar4 * dVar17;
  dVar27 = dVar33 * dVar4 - dVar28 * dVar22;
  dVar30 = dVar17 * dVar28 - dVar6 * dVar33;
  dVar24 = dVar24 + dVar24;
  dVar27 = dVar27 + dVar27;
  dVar30 = dVar30 + dVar30;
  local_188 = *(double *)(param_1 + 0x50) +
              dVar29 * dVar24 + dVar33 + (dVar30 * dVar6 - dVar4 * dVar27);
  dVar3 = dVar28 * -1.0;
  dVar5 = dVar29 * 1.0;
  dVar33 = -dVar6;
  dVar2 = -dVar4;
  dVar18 = dVar12 * dVar33 - dVar2 * dVar14;
  dVar23 = dVar16 * dVar2 - dVar3 * dVar12;
  dVar25 = dVar14 * dVar3 - dVar16 * dVar33;
  dVar18 = dVar18 + dVar18;
  dVar23 = dVar23 + dVar23;
  dVar25 = dVar25 + dVar25;
  dVar36 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar32)) & (ulonglong)(1.0 / dVar32)) *
           (dVar5 * dVar18 + dVar16 + (dVar25 * dVar33 - dVar2 * dVar23)) * local_170;
  auVar34 = divpd(auVar34,*(undefined1 (*) [16])(param_1 + 0x60));
  dVar32 = local_160 *
           (double)(auVar34._8_8_ & -(ulonglong)(9.99999993922529e-09 < ABS(dStack_120))) *
           (dVar18 * dVar6 + dVar23 * dVar3 + dVar5 * dVar25 + dVar12);
  dVar33 = (double)(auVar34._0_8_ & -(ulonglong)(9.99999993922529e-09 < ABS(local_128))) *
           ((dVar18 * dVar2 - dVar3 * dVar25) + dVar5 * dVar23 + dVar14) * local_168;
  dVar12 = local_158 * dVar12;
  dVar14 = local_148 * dVar14;
  dVar16 = local_150 * dVar16;
  dVar4 = local_108 + (dVar24 * dVar4 - dVar28 * dVar30) + dVar29 * dVar27 + dVar17;
  dVar6 = dStack_100 + (dVar27 * dVar28 - dVar24 * dVar6) + dVar29 * dVar30 + dVar22;
  dVar28 = local_130 + local_130;
  fVar11 = (*param_4 + *param_4) * 3.1415927;
  fVar9 = param_4[1];
  if (fVar11 < 0.0) {
    fVar10 = sqrtf(fVar11);
  }
  else {
    fVar10 = SQRT(fVar11);
  }
  local_d8 = (double)((ABS((float)(dVar33 + dVar32 + dVar36)) *
                      (fVar11 * (float)dVar28 +
                      fVar9 * fVar10 * -2.0 * (float)(dVar16 + dVar14 + dVar12))) / param_4[2]);
  local_c8 = local_190 * local_d8;
  local_d0 = dVar1 * local_d8;
  local_d8 = dVar21 * local_d8;
  dVar14 = (double)param_4[2];
  local_e0 = local_188 + local_140 * dVar14;
  local_e8 = dVar6 + local_138 * dVar14;
  local_f0 = dVar15 * dVar14 + dVar4;
  local_198 = 0;
  FUN_140c32aac(param_1,&local_d8,&local_f0,1);
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c32aac FUN_140c32aac body=191 status=ok
// SIG undefined FUN_140c32aac(void)

void FUN_140c32aac(longlong param_1,undefined8 *param_2,undefined4 *param_3,uint param_4,
                  byte param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2[2];
  local_58 = *param_2;
  uStack_50 = param_2[1];
  uStack_40 = *param_3;
  uStack_3c = param_3[1];
  uStack_38 = param_3[2];
  uStack_34 = param_3[3];
  uStack_30 = *(undefined8 *)(param_3 + 4);
  iVar2 = *(int *)(param_1 + 0x1c0);
  *(uint *)(param_1 + 0x1c0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1c4) < iVar2 + 1U) {
    FUN_140c32b6c((longlong *)(param_1 + 0x1b8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x1b8);
  lVar4 = (longlong)iVar2 * 0x38;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = uStack_38;
  puVar1[1] = uStack_34;
  puVar1[2] = (undefined4)uStack_30;
  puVar1[3] = uStack_30._4_4_;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = (undefined4)local_48;
  puVar1[1] = local_48._4_4_;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = (undefined4)local_58;
  puVar1[1] = local_58._4_4_;
  puVar1[2] = (undefined4)uStack_50;
  puVar1[3] = uStack_50._4_4_;
  *(uint *)(lVar3 + 0x30 + lVar4) = (param_4 & 0xff) + (uint)param_5 * 8;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c32b6c FUN_140c32b6c body=366 status=ok
// SIG undefined FUN_140c32b6c(void)

void FUN_140c32b6c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140c32bf1;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_140c32bf1:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 140c32cda FUN_140c32cda body=1860 status=ok
// SIG undefined FUN_140c32cda(void)

void FUN_140c32cda(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  byte bVar15;
  char cVar16;
  char cVar17;
  byte bVar18;
  longlong lVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  float local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((param_3 == 0) || (lVar1 = *(longlong *)(param_1 + 0x1a0), lVar1 == 0)) ||
     (*(int *)(lVar1 + 0xf0) < 1)) goto LAB_140c33072;
  plVar2 = *(longlong **)(lVar1 + 0xe8);
  plVar3 = *(longlong **)(param_3 + 0x48);
  dVar10 = 0.0;
  fVar22 = 0.0;
  if (plVar3 == (longlong *)0x0) {
    dVar12 = 0.0;
    local_178 = 0.0;
    local_180 = 0.0;
    dVar9 = 0.0;
  }
  else {
    dVar12 = 0.0;
    local_178 = 0.0;
    local_180 = 0.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
    if (*(char *)((longlong)plVar3 + 0xc) != '\0') {
      lVar14 = (longlong)(int)plVar3[1] * 0xc;
      lVar1 = *(longlong *)(*plVar3 + 0x278);
      lVar19 = *(longlong *)(*plVar3 + 0x290);
      fVar22 = *(float *)(lVar1 + 8 + lVar14);
      dVar10 = (double)*(float *)(lVar1 + 4 + lVar14);
      dVar12 = (double)*(float *)(lVar1 + lVar14);
      dVar9 = (double)*(float *)(lVar19 + 8 + lVar14);
      local_180 = (double)*(float *)(lVar19 + 4 + lVar14);
      local_178 = (double)*(float *)(lVar19 + lVar14);
    }
  }
  dVar13 = dVar12 * dVar12 + dVar10 * dVar10;
  dVar11 = dVar9 * dVar9 + local_178 * local_178 + local_180 * local_180;
  local_170 = SQRT(dVar11);
  local_ec = (float)local_170;
  lVar1 = *plVar2;
  fVar21 = *(float *)(lVar1 + 0x24);
  cVar17 = *(char *)(param_1 + 0x9c0);
  if ((cVar17 != '\0') &&
     (dVar4 = SQRT(*(double *)(param_1 + 0x9c8) * *(double *)(param_1 + 0x9c8) +
                   *(double *)(param_1 + 0x9d0) * *(double *)(param_1 + 0x9d0)),
     (double)fVar21 <= dVar4)) {
    fVar21 = (float)dVar4;
  }
  local_e4 = (float)SQRT(dVar13) / fVar21;
  local_e8 = fVar22;
  bVar15 = FUN_140c33420(lVar1 + 0x198,&local_e4,param_2);
  fVar21 = fVar21 * local_e4;
  if (cVar17 == '\0') {
    if (0.0 <= fVar22) {
      bVar18 = FUN_140c33420(lVar1 + 0x1a4,&local_e8,param_2);
      cVar17 = FUN_140c33420(lVar1 + 0x1bc,&local_ec,param_2);
      fVar22 = local_e8;
      if ((bVar15 | bVar18) == 1) goto LAB_140c33337;
    }
    else {
      local_e8 = -fVar22;
      cVar16 = FUN_140c33420(lVar1 + 0x1b0,&local_e8,param_2);
      fVar22 = local_e8;
      cVar17 = FUN_140c33420(lVar1 + 0x1bc,&local_ec,param_2);
      if (bVar15 != 0 || cVar16 != '\0') {
        fVar22 = -fVar22;
LAB_140c33337:
        dVar4 = 1.0 / SQRT(dVar13);
        if (9.99999993922529e-09 < dVar13) {
          dVar10 = dVar10 * dVar4;
        }
        else {
          dVar10 = 0.0;
        }
        local_128._8_8_ = dVar10 * (double)fVar21;
        local_128._0_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < dVar13) & (ulonglong)(dVar12 * dVar4)) *
             (double)fVar21;
        local_118._0_8_ = (double)fVar22;
        FUN_14091cdb4(param_3,local_128,1);
      }
    }
  }
  else {
    cVar17 = FUN_140c33420(lVar1 + 0x1bc,&local_ec,param_2);
    if (bVar15 != 0) goto LAB_140c33337;
  }
  if (cVar17 != '\0') {
    if ((dVar11 != 1.0) || (NAN(dVar11))) {
      if (9.99999993922529e-09 <= dVar11) {
        dVar10 = 1.0 / local_170;
        dVar9 = dVar9 * dVar10;
        local_180 = local_180 * dVar10;
        local_178 = local_178 * dVar10;
      }
      else {
        local_178 = DAT_14c8464e0;
        local_180 = DAT_14c8464e8;
        dVar9 = DAT_14c8464f0;
      }
    }
    dVar10 = (double)local_ec;
    local_128._8_8_ = local_180 * dVar10;
    local_128._0_8_ = local_178 * dVar10;
    local_118._0_8_ = dVar9 * dVar10;
    FUN_14091ceac(param_3,local_128,1);
  }
  lVar1 = *(longlong *)(**(longlong **)(param_3 + 0x48) + 0x48);
  lVar19 = (longlong)(int)(*(longlong **)(param_3 + 0x48))[1] * 0x10;
  dVar13 = (double)*(float *)(lVar1 + 0xc + lVar19);
  dVar20 = (double)*(float *)(lVar1 + 8 + lVar19);
  dVar4 = (double)*(float *)(lVar1 + 4 + lVar19);
  dVar6 = (double)*(float *)(lVar1 + lVar19);
  dVar7 = *(double *)(param_1 + 0x8a0) * -1.0;
  dVar8 = *(double *)(param_1 + 0x8a8) * 1.0;
  dVar9 = *(double *)(param_1 + 0x890);
  dVar10 = *(double *)(param_1 + 0x890);
  dVar12 = *(double *)(param_1 + 0x898);
  dVar11 = *(double *)(param_1 + 0x898);
  dVar5 = dVar6 * dVar7 * 1.0 + ((dVar4 * dVar8 - dVar20 * dVar10 * -1.0) - dVar13 * dVar11);
  dVar10 = dVar20 * dVar7 * -1.0 + dVar4 * dVar11 + (dVar8 * dVar13 - dVar10 * dVar6 * -1.0);
  local_128._8_4_ = SUB84(dVar5,0);
  local_128._0_8_ =
       dVar4 * dVar7 * -1.0 + ((dVar6 * dVar8 - dVar13 * dVar9 * 1.0) - dVar20 * dVar12);
  local_128._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_118._8_4_ = SUB84(dVar10,0);
  local_118._0_8_ = dVar13 * dVar7 * 1.0 + dVar6 * dVar12 + (dVar8 * dVar20 - dVar9 * dVar4 * 1.0);
  local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  FUN_1448052ee(local_128,&local_108);
  local_12c = ABS((float)local_f8);
  cVar17 = FUN_140c33420(*plVar2 + 0x1c8,&local_12c,param_2);
  if (cVar17 != '\0') {
    local_148 = local_108;
    uStack_140 = uStack_100;
    local_138 = (double)((-(ulonglong)(0.0 < local_f8) >> 0x20 & 0x3ff00000 |
                         (ulonglong)
                         (~(uint)(-(ulonglong)(0.0 < local_f8) >> 0x20) &
                         (uint)(-(ulonglong)(local_f8 < 0.0) >> 0x20) & 0xbff00000)) << 0x20) *
                (double)local_12c;
    FUN_144a7484c(&local_148,&local_168);
    dVar9 = *(double *)(param_1 + 0x8a8);
    dVar10 = *(double *)(param_1 + 0x8a8);
    dVar11 = *(double *)(param_1 + 0x898);
    dVar12 = *(double *)(param_1 + 0x898);
    dVar4 = *(double *)(param_1 + 0x890);
    dVar13 = *(double *)(param_1 + 0x890);
    dVar5 = *(double *)(param_1 + 0x8a0);
    dVar6 = *(double *)(param_1 + 0x8a0);
    dVar7 = local_168 * dVar6 * 1.0 +
            dStack_150 * dVar12 + dVar13 * local_158 * -1.0 + dVar10 * dStack_160;
    dVar10 = local_158 * dVar6 * -1.0 +
             ((dVar13 * local_168 * -1.0 + dVar10 * dStack_150) - dVar12 * dStack_160);
    local_128._8_4_ = SUB84(dVar7,0);
    local_128._0_8_ =
         dStack_160 * dVar5 * -1.0 +
         local_158 * dVar11 + dVar4 * dStack_150 * 1.0 + dVar9 * local_168;
    local_128._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_118._8_4_ = SUB84(dVar10,0);
    local_118._0_8_ =
         dStack_150 * dVar5 * 1.0 +
         ((dVar4 * dStack_160 * 1.0 + dVar9 * local_158) - dVar11 * local_168);
    local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    FUN_14091cc06(param_3,local_128,1);
  }
LAB_140c33072:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c33420 FUN_140c33420 body=149 status=ok
// SIG undefined FUN_140c33420(void)

undefined8 FUN_140c33420(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_1;
  if (0.0 < fVar3) {
    fVar2 = param_1[1];
    if (fVar2 <= 0.0) {
      return 0;
    }
    if (fVar2 < fVar3) {
      return 0;
    }
    fVar1 = *param_2;
    if (fVar3 < fVar1) {
      if ((0.0 < param_1[2]) && (fVar4 = fVar3 - fVar1, 1e-08 <= fVar4 * fVar4)) {
        param_3 = param_1[2] * param_3;
        if (1.0 <= param_3) {
          param_3 = 1.0;
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        fVar3 = fVar1 + fVar4 * param_3;
      }
      if (fVar3 <= fVar2) {
        fVar2 = fVar3;
      }
      *param_2 = fVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c334b6 FUN_140c334b6 body=3245 status=ok
// SIG undefined FUN_140c334b6(void)

void FUN_140c334b6(longlong param_1,undefined8 param_2,float param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  float local_110;
  undefined1 local_108 [12];
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar12 = *(longlong *)(param_1 + 0x1a0);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0xf0) < 1)) goto LAB_140c33aa4;
  plVar3 = *(longlong **)(lVar12 + 0xe8);
  if ((char)plVar3[6] == '\0') {
    lVar12 = *plVar3;
    lVar11 = 0x34;
  }
  else {
    if (1e-08 < *(float *)(param_1 + 0x9b8)) {
      plVar4 = *(longlong **)(param_4 + 0x48);
      dVar20 = 0.0;
      if (plVar4 == (longlong *)0x0) {
        dVar1 = 0.0;
        dVar19 = 0.0;
      }
      else {
        dVar1 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        if (*(char *)((longlong)plVar4 + 0xc) != '\0') {
          lVar11 = (longlong)(int)plVar4[1];
          lVar12 = *(longlong *)(*plVar4 + 0x278);
          dVar19 = (double)*(float *)(lVar12 + 8 + lVar11 * 0xc);
          dVar1 = (double)*(float *)(lVar12 + 4 + lVar11 * 0xc);
          dVar20 = (double)*(float *)(lVar12 + lVar11 * 0xc);
        }
      }
      dVar21 = *(double *)(param_1 + 0x110);
      dVar8 = *(double *)(param_1 + 0x118);
      dVar2 = *(double *)(param_1 + 0x120);
      dVar22 = (dVar19 * dVar2 + dVar20 * dVar21 + dVar1 * dVar8) /
               (dVar2 * dVar2 + dVar21 * dVar21 + dVar8 * dVar8);
      dVar5 = dVar2 * dVar22;
      dVar6 = dVar8 * dVar22;
      dVar22 = dVar22 * dVar21;
      stack0xffffffffffffff00 = dVar6;
      local_108._0_8_ = dVar22;
      local_f8._0_8_ = dVar5;
      dVar7 = (double)*(float *)(param_1 + 0x9b8);
      if (dVar7 <= dVar5 * dVar2 + dVar22 * dVar21 + dVar8 * dVar6) goto LAB_140c33b28;
      local_148 = *(undefined4 *)(*plVar3 + 0x260);
      local_d0 = dVar2 * dVar7;
      local_d8 = dVar8 * dVar7;
      local_e0 = dVar21 * dVar7;
      FUN_140b81d26(&local_c8,local_108,&local_e0,param_2);
      local_f8._0_8_ = local_b8;
      local_108._8_4_ = (undefined4)uStack_c0;
      local_108._0_8_ = local_c8;
      uStack_fc = uStack_c0._4_4_;
      local_b8 = (dVar19 - dVar5) + local_b8;
      uStack_c0 = (dVar1 - dVar6) + stack0xffffffffffffff00;
      local_c8 = (dVar20 - dVar22) + local_c8;
      FUN_14091cdb4(param_4,&local_c8,1);
      lVar12 = *plVar3;
      lVar11 = 0x34;
      if ((*(byte *)(plVar3 + 6) & 1) == 0) goto LAB_140c33562;
    }
    else {
LAB_140c33b28:
      lVar12 = *plVar3;
    }
    lVar11 = 0x38;
  }
LAB_140c33562:
  dVar21 = (double)(*(float *)(lVar12 + lVar11) * *(float *)(param_1 + 0x970) *
                   *(float *)(param_1 + 0x700));
  dVar19 = *(double *)(param_1 + 0x900) * dVar21;
  dVar20 = *(double *)(param_1 + 0x8f0);
  dVar1 = *(double *)(param_1 + 0x8f8);
  dVar8 = dVar1 * dVar21;
  dVar21 = dVar21 * dVar20;
  if (*(char *)(param_1 + 0x95a) == '\x01') {
    fVar14 = *(float *)(lVar12 + 0x4c);
LAB_140c33627:
    local_b8 = (double)fVar14;
    local_c8 = dVar21 * local_b8;
    uStack_c0 = dVar8 * local_b8;
    local_b8 = dVar19 * local_b8;
  }
  else {
    local_c8 = dVar21;
    uStack_c0 = dVar8;
    local_b8 = dVar19;
    if (9.99999993922529e-09 < dVar20 * dVar20 + dVar1 * dVar1) {
      FUN_140c34208(param_1 + 0x730);
      lVar12 = 0x120;
      if ((char)plVar3[6] != '\0') {
        lVar12 = 0x150;
      }
      fVar14 = (float)FUN_140c35dcc(lVar12 + *plVar3);
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      goto LAB_140c33627;
    }
  }
  FUN_140c34164(param_1,&local_c8,1,0);
  if (*(char *)((longlong)plVar3 + 0x33) == '\x01') {
    *(undefined1 *)((longlong)plVar3 + 0x33) = 0;
    param_3 = param_3 * *(float *)(*plVar3 + 0x1dc);
    if (1e-08 < ABS(param_3)) {
      fVar14 = (*(float *)(*plVar3 + 0x1d8) * -2.0) / param_3;
      if (fVar14 < 0.0) {
        fVar14 = sqrtf(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      if (0.0 < -param_3 * fVar14) {
        dVar1 = (double)(-param_3 * fVar14);
        dVar20 = DAT_14c8462d0 * dVar1;
        dVar19 = DAT_14c8462c8 * dVar1;
        dVar1 = dVar1 * DAT_14c8462c0;
        if ((((9.999999747378752e-05 < ABS(dVar1)) || (9.999999747378752e-05 < ABS(dVar19))) ||
            (9.999999747378752e-05 < ABS(dVar20))) &&
           (((param_4 == 0 || (*(longlong **)(param_4 + 8) == (longlong *)0x0)) ||
            (cVar9 = (**(code **)(**(longlong **)(param_4 + 8) + 0x20))(), cVar9 == '\0')))) {
          dVar21 = (double)*(float *)(param_1 + 0x700);
          unique0x10000fdf = dVar19 * dVar21;
          local_108._0_8_ = dVar1 * dVar21;
          local_f8._0_8_ = dVar20 * dVar21;
          FUN_148ad4f40(param_1,local_108,0);
          dVar1 = (double)*(float *)(*plVar3 + 0x210);
          dVar20 = (double)*(float *)(*plVar3 + 0x214);
          local_f8._0_8_ = *(double *)(param_1 + 0xd8) - *(double *)(param_1 + 0x120) * dVar1;
          register0x00001280 = *(double *)(param_1 + 0xd0) - *(double *)(param_1 + 0x118) * dVar1;
          local_108._0_8_ = *(double *)(param_1 + 200) - *(double *)(param_1 + 0x110) * dVar1;
          local_e0 = (double)*(float *)(param_1 + 0x700);
          local_d0 = DAT_14c8462d0 * dVar20 * local_e0;
          local_d8 = DAT_14c8462c8 * dVar20 * local_e0;
          local_e0 = DAT_14c8462c0 * dVar20 * local_e0;
          FUN_148ad4fd8(param_1,&local_e0,local_108);
          stack0xffffffffffffff00 =
               *(double *)(param_1 + 0x118) * dVar1 + *(double *)(param_1 + 0xd0);
          local_108._0_8_ = dVar1 * *(double *)(param_1 + 0x110) + *(double *)(param_1 + 200);
          local_f8._0_8_ = *(double *)(param_1 + 0x120) * dVar1 + *(double *)(param_1 + 0xd8);
          local_e0 = (double)*(float *)(param_1 + 0x700);
          local_d0 = -DAT_14c8462d0 * dVar20 * local_e0;
          local_d8 = -DAT_14c8462c8 * dVar20 * local_e0;
          local_e0 = -DAT_14c8462c0 * dVar20 * local_e0;
          FUN_148ad4fd8(param_1,&local_e0,local_108);
        }
      }
    }
  }
  if ((*(char *)(param_1 + 0x984) == '\x01') &&
     (((param_4 == 0 || (*(longlong **)(param_4 + 8) == (longlong *)0x0)) ||
      (cVar9 = (**(code **)(**(longlong **)(param_4 + 8) + 0x20))(), cVar9 == '\0')))) {
    local_f8._0_8_ = plVar3[9];
    _local_108 = *(undefined1 (*) [16])(plVar3 + 7);
    FUN_14091cdb4(param_4,local_108,1);
  }
  dVar19 = -*(double *)(param_1 + 0x930);
  dVar20 = -*(double *)(param_1 + 0x928);
  dVar1 = -*(double *)(param_1 + 0x920);
  if (*(char *)(param_1 + 0x958) == '\0') {
    lVar12 = *plVar3;
LAB_140c33b82:
    dVar1 = dVar1 - *(double *)(param_1 + 0x908);
    dVar20 = dVar20 - *(double *)(param_1 + 0x910);
    dVar19 = dVar19 - *(double *)(param_1 + 0x918);
  }
  else {
    lVar12 = *plVar3;
    if (*(char *)(param_1 + 0x959) == '\x01') goto LAB_140c33b82;
    dVar21 = *(double *)(param_1 + 0x908);
    dVar8 = *(double *)(param_1 + 0x910);
    dVar2 = *(double *)(param_1 + 0x918);
    if ((double)*(float *)(param_1 + 0x730) < SQRT(dVar2 * dVar2 + dVar21 * dVar21 + dVar8 * dVar8))
    {
      dVar7 = (double)*(float *)(lVar12 + 0x48);
      dVar1 = dVar1 - dVar21 * dVar7;
      dVar20 = dVar20 - dVar8 * dVar7;
      dVar19 = dVar19 - dVar2 * dVar7;
    }
  }
  dVar21 = dVar19 * dVar19 + dVar1 * dVar1 + dVar20 * dVar20;
  fVar14 = (float)SQRT(dVar21);
  fVar23 = *(float *)(param_1 + 0x700) *
           *(float *)(lVar12 + 0x3c + (ulonglong)*(byte *)(plVar3 + 6) * 4);
  uVar13 = -(uint)(fVar14 < *(float *)(lVar12 + 0x44));
  if (((dVar21 != 1.0) || (local_d0 = dVar19, local_d8 = dVar20, local_e0 = dVar1, NAN(dVar21))) &&
     (local_d0 = DAT_14c8464f0, local_d8 = DAT_14c8464e8, local_e0 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar21)) {
    dVar21 = 1.0 / SQRT(dVar21);
    local_d0 = dVar19 * dVar21;
    local_d8 = dVar20 * dVar21;
    local_e0 = dVar1 * dVar21;
  }
  dVar20 = (double)(float)(uVar13 & (uint)((fVar14 / *(float *)(lVar12 + 0x44)) * fVar23) |
                          ~uVar13 & (uint)fVar23);
  local_d0 = local_d0 * dVar20;
  local_d8 = local_d8 * dVar20;
  local_e0 = local_e0 * dVar20;
  bVar10 = *(byte *)(param_1 + 0x95a);
  if (bVar10 == 1) {
    local_e0 = local_e0 * (double)*(float *)(lVar12 + 0x50);
    local_d8 = local_d8 * (double)*(float *)(lVar12 + 0x50);
    local_d0 = 0.0;
  }
  if (*(char *)(param_1 + 0x9c0) == '\0') {
    FUN_140c34164(param_1,&local_e0,1,0);
    bVar10 = *(byte *)(param_1 + 0x95a);
  }
  dVar20 = DAT_14c8462d0;
  dVar1 = DAT_14c8462c8;
  dVar19 = DAT_14c8462c0;
  dVar21 = *(double *)(param_1 + 0x20);
  dVar8 = *(double *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 0x30);
  dVar7 = *(double *)(param_1 + 0x38);
  fVar14 = *(float *)((longlong)plVar3 + 0x2c);
  if ((bVar10 & 1) != 0) {
    fVar14 = fVar14 * *(float *)(*plVar3 + 0x4c);
  }
  dVar5 = sin((double)fVar14 * 0.5);
  dVar6 = cos((double)fVar14 * 0.5);
  dVar19 = dVar19 * dVar5;
  dVar1 = dVar1 * dVar5;
  dVar20 = dVar20 * dVar5;
  dVar5 = dVar21 * dVar20 * 1.0 + dVar7 * dVar1 + dVar2 * dVar19 * -1.0 + dVar8 * dVar6;
  dVar22 = dVar2 * dVar20 * -1.0 + ((dVar19 * dVar21 * -1.0 + dVar6 * dVar7) - dVar1 * dVar8);
  local_108._8_4_ = SUB84(dVar5,0);
  local_108._0_8_ = dVar8 * dVar20 * -1.0 + dVar2 * dVar1 + dVar7 * dVar19 * 1.0 + dVar21 * dVar6;
  uStack_fc = (int)((ulonglong)dVar5 >> 0x20);
  local_f8._8_4_ = SUB84(dVar22,0);
  local_f8._0_8_ = dVar7 * dVar20 * 1.0 + ((dVar19 * dVar8 * 1.0 + dVar6 * dVar2) - dVar1 * dVar21);
  local_f8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  lVar12 = *plVar3;
  local_110 = *(float *)(lVar12 + 0xa0);
  local_118 = *(undefined8 *)(lVar12 + 0x98);
  if (*(char *)(param_1 + 0x988) == '\x01') {
    if (*(char *)(param_1 + 0x95a) == '\x01') {
      local_110 = *(float *)(lVar12 + 0xd0);
      local_118 = *(undefined8 *)(lVar12 + 200);
    }
    else {
      fVar14 = 0.0;
      if (*(char *)(param_1 + 0x98a) == '\x01') {
        fVar14 = *(float *)(param_1 + 0x98c);
        if (1.0 <= fVar14) {
          fVar14 = 1.0;
        }
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
      }
      local_118 = CONCAT44((*(float *)(lVar12 + 0xd8) - *(float *)(lVar12 + 0xc0)) * fVar14 +
                           *(float *)(lVar12 + 0xc0),
                           (*(float *)(lVar12 + 0xd4) - *(float *)(lVar12 + 0xbc)) * fVar14 +
                           *(float *)(lVar12 + 0xbc));
      local_110 = *(float *)(lVar12 + 0xc4);
      fVar23 = *(float *)(lVar12 + 0xdc);
LAB_140c33a58:
      local_110 = (fVar23 - local_110) * fVar14 + local_110;
    }
  }
  else if ((char)plVar3[6] == '\x01') {
    local_110 = *(float *)(lVar12 + 0xb8);
    local_118 = *(undefined8 *)(lVar12 + 0xb0);
  }
  else if (*(char *)(param_1 + 0x958) == '\x01') {
    dVar20 = *(double *)(param_1 + 0x868);
    uVar17 = SUB84(dVar20,0);
    uVar18 = (undefined4)((ulonglong)dVar20 >> 0x20);
    dVar1 = *(double *)(param_1 + 0x870);
    uVar15 = SUB84(dVar1,0);
    uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar19 = 0.0;
    if (((dVar20 != 0.0) || (NAN(dVar20))) || ((dVar1 != 0.0 || (NAN(dVar1))))) {
      dVar19 = atan2(dVar1,dVar20);
      dVar19 = dVar19 * 57.29577951308232;
      uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x868);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x868) >> 0x20);
      uVar15 = (undefined4)*(undefined8 *)(param_1 + 0x870);
      uVar16 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x870) >> 0x20);
    }
    dVar1 = SQRT((double)CONCAT44(uVar18,uVar17) * (double)CONCAT44(uVar18,uVar17) +
                 (double)CONCAT44(uVar16,uVar15) * (double)CONCAT44(uVar16,uVar15));
    dVar20 = *(double *)(param_1 + 0x878);
    if (((dVar20 != 0.0) || (NAN(dVar20))) || ((dVar1 != 0.0 || (NAN(dVar1))))) {
      atan2(dVar20,dVar1);
    }
    fVar14 = (float)(ABS(dVar19) * -0.017453292519943295) / 1.5707964 + 1.0;
    if (0.0 <= fVar14) {
      lVar12 = *plVar3;
      local_118 = CONCAT44((*(float *)(lVar12 + 0xa8) - local_118._4_4_) * fVar14 + local_118._4_4_,
                           (*(float *)(lVar12 + 0xa4) - (float)local_118) * fVar14 +
                           (float)local_118);
      fVar23 = *(float *)(lVar12 + 0xac);
      goto LAB_140c33a58;
    }
  }
  local_138 = dVar21;
  dStack_130 = dVar8;
  local_128 = dVar2;
  dStack_120 = dVar7;
  FUN_140c32204(param_1,&local_138,local_108,&local_118);
LAB_140c33aa4:
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c34164 FUN_140c34164 body=162 status=ok
// SIG undefined FUN_140c34164(void)

void FUN_140c34164(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  iVar2 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar2 + 1U) {
    FUN_140d1f9e4((longlong *)(param_1 + 0x1a8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  lVar4 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = local_38;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  *(uint *)(lVar3 + 0x18 + lVar4) = (param_3 & 0xff) + (param_4 & 0xff) * 2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c34208 FUN_140c34208 body=316 status=ok
// SIG undefined FUN_140c34208(void)

void FUN_140c34208(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 0x1d0);
  dVar2 = dVar3 * dVar3 +
          *(double *)(param_1 + 0x1c0) * *(double *)(param_1 + 0x1c0) +
          *(double *)(param_1 + 0x1c8) * *(double *)(param_1 + 0x1c8);
  if (((dVar2 != 1.0) || (dVar1 = dVar3, NAN(dVar2))) &&
     (dVar1 = DAT_14c8464f0, 9.99999993922529e-09 <= dVar2)) {
    dVar1 = dVar3 * (1.0 / SQRT(dVar2));
  }
  dVar3 = dVar1;
  if (1.0 <= dVar1) {
    dVar3 = 1.0;
  }
  asin((double)(-(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000 |
               ~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar3));
  dVar3 = *(double *)(param_1 + 0x18);
  dVar2 = dVar3;
  if (1.0 <= dVar3) {
    dVar2 = 1.0;
  }
  acos((double)(-(ulonglong)(dVar3 < -1.0) & 0xbff0000000000000 |
               ~-(ulonglong)(dVar3 < -1.0) & (ulonglong)dVar2));
  return;
}



// FUNCTION 140c34344 FUN_140c34344 body=6790 status=ok
// SIG undefined FUN_140c34344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c34344(longlong *param_1,float *param_2,float param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double *pdVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  longlong lVar14;
  double *pdVar15;
  double *pdVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  float local_190;
  float local_18c;
  undefined8 local_188;
  double local_178;
  undefined8 local_170;
  double local_168;
  undefined8 local_160;
  double local_158 [8];
  undefined1 local_118 [16];
  double local_108;
  ulonglong local_f0;
  undefined8 extraout_XMM0_Qb_01;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar19 = param_1[0x34];
  if ((lVar19 == 0) || (*(int *)(lVar19 + 0xf0) < 1)) goto LAB_140c352fa;
  plVar3 = *(longlong **)(lVar19 + 0xe8);
  dVar33 = (double)(param_2[1] - param_2[2]);
  plVar3[1] = (longlong)dVar33;
  dVar23 = (double)*param_2;
  plVar3[2] = (longlong)dVar23;
  if ((char)plVar3[6] == '\x01') {
    plVar3[1] = 0x3ff0000000000000;
    dVar23 = dVar23 * (double)*(float *)(*plVar3 + 0x54);
    plVar3[2] = (longlong)dVar23;
    dVar33 = 1.0;
  }
  if ((((char)param_1[0x131] == '\x01') && (*(char *)((longlong)param_1 + 0x98a) == '\x01')) &&
     (0.0 < (float)(ABS(dVar23) - ABS(dVar33)))) {
    dVar25 = (double)plVar3[3];
    dVar36 = (double)((float)(ABS(dVar23) - ABS(dVar33)) * 0.5);
    dVar40 = dVar33 + dVar36;
    plVar3[1] = (longlong)dVar40;
    dVar36 = dVar23 - (double)(-(ulonglong)(0.0 < dVar23) & 0x3ff0000000000000 |
                              ~-(ulonglong)(0.0 < dVar23) &
                              -(ulonglong)(dVar23 < 0.0) & 0xbff0000000000000) * dVar36;
    plVar3[2] = (longlong)dVar36;
    dVar34 = dVar40 * dVar40 + dVar36 * dVar36 + dVar25 * dVar25;
    if (((dVar34 != 1.0) || (dVar37 = dVar25, dVar26 = dVar40, dVar39 = dVar36, NAN(dVar34))) &&
       (dVar37 = DAT_14c8464f0, dVar26 = DAT_14c8464e0, dVar39 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar34)) {
      dVar34 = 1.0 / SQRT(dVar34);
      dVar37 = dVar25 * dVar34;
      dVar26 = dVar40 * dVar34;
      dVar39 = dVar36 * dVar34;
    }
    dVar23 = (double)(float)SQRT(dVar33 * dVar33 + dVar23 * dVar23 + dVar25 * dVar25);
    plVar3[1] = (longlong)(dVar26 * dVar23);
    plVar3[2] = (longlong)(dVar39 * dVar23);
    plVar3[3] = (longlong)(dVar37 * dVar23);
  }
  lVar19 = 0x120;
  if ((char)plVar3[6] != '\0') {
    lVar19 = 0x150;
  }
  lVar4 = *plVar3;
  dVar23 = (double)param_1[0xe9];
  dVar33 = dVar23;
  if (1.0 <= dVar23) {
    dVar33 = 1.0;
  }
  local_188 = param_4;
  dVar23 = acos((double)(~-(ulonglong)(dVar23 < -1.0) & (ulonglong)dVar33 |
                        -(ulonglong)(dVar23 < -1.0) & 0xbff0000000000000));
  uVar24 = FUN_140c35dcc(lVar19 + lVar4,(float)dVar23);
  auVar38._8_4_ = (int)extraout_XMM0_Qb;
  auVar38._0_8_ = uVar24;
  auVar38._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if (1.0 <= (float)uVar24) {
    auVar38._0_4_ = 0x3f800000;
  }
  if (auVar38._0_4_ <= 0.0) {
    auVar41._12_4_ = 0;
    auVar41._0_12_ = auVar38._4_12_;
    auVar38 = auVar41 << 0x20;
  }
  if (auVar38._0_4_ < 1.0) {
    FUN_140c35fde(local_158,param_1 + 4,&DAT_14c8462c0);
    dVar23 = (double)param_1[0xe7];
    dVar33 = (double)param_1[0xe8];
    dVar40 = -local_158[0];
    local_158[1] = -local_158[1];
    local_158[2] = local_158[2] * -1.0;
    local_158[3] = local_158[3] * 1.0;
    dVar25 = dVar33 * dVar40 - dVar23 * local_158[1];
    dVar34 = (double)param_1[0xe9] * local_158[1] - dVar33 * local_158[2];
    dVar37 = dVar23 * local_158[2] - dVar40 * (double)param_1[0xe9];
    dVar34 = dVar34 + dVar34;
    dVar37 = dVar37 + dVar37;
    dVar25 = dVar25 + dVar25;
    auVar41 = divpd(_DAT_149934d80,local_118);
    dVar23 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_118._0_8_)) & auVar41._0_8_) *
             ((dVar25 * local_158[1] - dVar37 * local_158[2]) + local_158[3] * dVar34 + dVar23);
    dVar33 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_118._8_8_)) & auVar41._8_8_) *
             (local_158[0] * dVar25 + local_158[2] * dVar34 + local_158[3] * dVar37 + dVar33);
    dVar36 = dVar23 * dVar23 + dVar33 * dVar33;
    if ((dVar36 != 1.0) || (NAN(dVar36))) {
      dVar25 = DAT_14c8464e8;
      dVar40 = DAT_14c8464f0;
      dVar34 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar36) {
        dVar25 = dVar33 * (1.0 / SQRT(dVar36));
        dVar40 = 0.0;
        dVar34 = dVar23 * (1.0 / SQRT(dVar36));
      }
    }
    else {
      dVar36 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_108)) &
                       (ulonglong)(1.0 / local_108)) *
               (local_158[3] * dVar25 + (double)param_1[0xe9] +
               (dVar37 * dVar40 - dVar34 * local_158[1]));
      dVar25 = dVar33;
      dVar40 = (double)(-(ulonglong)(dVar36 == 0.0) & (ulonglong)dVar36);
      dVar34 = dVar23;
    }
    dVar23 = (double)plVar3[1];
    dVar33 = (double)plVar3[2];
    dVar36 = (double)plVar3[3];
    dVar37 = dVar36 * dVar40 + dVar23 * dVar34 + dVar25 * dVar33;
    if (dVar40 * dVar40 * dVar37 + dVar34 * dVar37 * dVar34 + dVar25 * dVar25 * dVar37 < 0.0) {
      dVar40 = dVar36 - dVar40 * dVar37;
      dVar25 = dVar33 - dVar25 * dVar37;
      dVar34 = dVar23 - dVar37 * dVar34;
      dVar37 = (double)auVar38._0_4_;
      dVar33 = (dVar33 - dVar25) * dVar37 + dVar25;
      dVar23 = (dVar23 - dVar34) * dVar37 + dVar34;
      plVar3[1] = (longlong)dVar23;
      plVar3[2] = (longlong)dVar33;
      plVar3[3] = (longlong)((dVar36 - dVar40) * dVar37 + dVar40);
    }
  }
  else {
    dVar23 = (double)plVar3[1];
    dVar33 = (double)plVar3[2];
  }
  dVar25 = dVar23 * dVar23 + dVar33 * dVar33;
  if (1.0 < dVar25) {
    if ((dVar25 != 1.0) || (NAN(dVar25))) {
      dVar36 = DAT_14c8464e8;
      dVar40 = DAT_14c8464e0;
      dVar34 = DAT_14c8464f0;
      if (9.99999993922529e-09 <= dVar25) {
        dVar36 = dVar33 * (1.0 / SQRT(dVar25));
        dVar40 = dVar23 * (1.0 / SQRT(dVar25));
        dVar34 = 0.0;
      }
    }
    else {
      dVar36 = dVar33;
      dVar40 = dVar23;
      dVar34 = (double)(-(ulonglong)((double)plVar3[3] == 0.0) & plVar3[3]);
    }
    dVar23 = dVar40;
    dVar33 = dVar36;
    plVar3[1] = (longlong)dVar23;
    plVar3[2] = (longlong)dVar33;
    plVar3[3] = (longlong)dVar34;
  }
  if ((((9.999999747378752e-05 < ABS(dVar23)) || (9.999999747378752e-05 < ABS(dVar33))) ||
      (9.999999747378752e-05 < ABS((double)plVar3[3]))) || (*(char *)(*plVar3 + 0x110) == '\x01')) {
    *(int *)(plVar3 + 5) = (int)plVar3[4];
  }
  pdVar1 = (double *)(plVar3 + 1);
  if ((char)param_1[0x138] != '\0') {
    *(undefined4 *)(plVar3 + 5) = *(undefined4 *)((longlong)param_1 + 0x9e4);
    plVar3[3] = DAT_14c8463b0;
    lVar14 = DAT_14c8463a8;
    *pdVar1 = DAT_14c8463a0;
    plVar3[2] = lVar14;
  }
  local_158[0] = (double)param_1[4];
  local_158[1] = (double)param_1[5];
  local_158[2] = (double)param_1[6];
  local_158[3] = (double)param_1[7];
  FUN_1448052ee(local_158,&local_170);
  FUN_144719204(local_170,0x4076800000000000);
  dVar23 = (double)FUN_144719204(local_168,0x4076800000000000);
  FUN_144719204();
  fVar20 = 0.0;
  fVar32 = 0.0;
  if (((char)param_1[0x131] == '\x01') && (*(char *)((longlong)param_1 + 0x98a) == '\x01')) {
    auVar38 = ZEXT416((uint)*(float *)((longlong)param_1 + 0x98c));
    if (1.0 <= *(float *)((longlong)param_1 + 0x98c)) {
      auVar38 = ZEXT416(0x3f800000);
    }
    if (auVar38._0_4_ <= 0.0) {
      auVar7._12_4_ = 0;
      auVar7._0_12_ = auVar38._4_12_;
      auVar38 = auVar7 << 0x20;
    }
    fVar32 = auVar38._0_4_;
  }
  fVar49 = *(float *)(*plVar3 + 0x228);
  fVar49 = (*(float *)(*plVar3 + 0x22c) - fVar49) * fVar32 + fVar49;
  if ((char)param_1[0x131] != '\0') {
    fVar20 = *(float *)(param_1 + 0x134);
  }
  dVar23 = (double)FUN_144719204((double)((fVar20 * fVar49 + *(float *)(plVar3 + 5)) -
                                         (float)(double)(~-(ulonglong)(dVar23 < 0.0) &
                                                         (ulonglong)dVar23 |
                                                        (ulonglong)(dVar23 + 360.0) &
                                                        -(ulonglong)(dVar23 < 0.0))));
  dVar23 = (double)(~-(ulonglong)(dVar23 < 0.0) & (ulonglong)dVar23 |
                   (ulonglong)(dVar23 + 360.0) & -(ulonglong)(dVar23 < 0.0));
  fVar20 = (float)(double)(~-(ulonglong)(180.0 < dVar23) & (ulonglong)dVar23 |
                          (ulonglong)(dVar23 + -360.0) & -(ulonglong)(180.0 < dVar23));
  cVar2 = (char)param_1[0x131];
  while( true ) {
    fVar32 = 0.0;
    if (cVar2 != '\0') {
      fVar32 = *(float *)(param_1 + 0x134);
    }
    if (ABS(fVar32) <= 1e-08) break;
    fVar32 = 0.0;
    if (cVar2 != '\0') {
      fVar32 = *(float *)(param_1 + 0x134);
    }
    fVar21 = (float)(-(uint)(0.0 < fVar20) & 0x3f800000 |
                    ~-(uint)(0.0 < fVar20) & -(uint)(fVar20 < 0.0) & 0xbf800000);
    fVar32 = (float)(-(uint)(0.0 < fVar32) & 0x3f800000 |
                    ~-(uint)(0.0 < fVar32) & -(uint)(fVar32 < 0.0) & 0xbf800000);
    if (((fVar21 == fVar32) && (!NAN(fVar21) && !NAN(fVar32))) ||
       (*(char *)((longlong)param_1 + 0x98a) != '\0')) break;
    fVar32 = 0.0;
    if (cVar2 != '\0') {
      fVar32 = *(float *)(param_1 + 0x134);
    }
    fVar20 = fVar20 + (float)(-(uint)(0.0 < fVar32) & 0x3f800000 |
                             ~-(uint)(0.0 < fVar32) & -(uint)(fVar32 < 0.0) & 0xbf800000) * 360.0;
  }
  *(float *)((longlong)plVar3 + 0x2c) = fVar20 * 0.017453292;
  lVar14 = *plVar3;
  fVar20 = *(float *)(lVar14 + 0x20);
  local_18c = *(float *)(lVar14 + 0x24);
  fVar32 = local_18c;
  if ((char)plVar3[6] == '\0') {
    fVar32 = fVar20;
  }
  dVar23 = (double)plVar3[1];
  dVar33 = (double)plVar3[2];
  local_190 = fVar32;
  if (((9.999999747378752e-05 < ABS(dVar23)) || (9.999999747378752e-05 < ABS(dVar33))) ||
     (9.999999747378752e-05 < ABS((double)plVar3[3]))) {
    fVar20 = *(float *)(lVar14 + 0x28);
    dVar25 = -dVar23;
    dVar25 = (double)(float)(double)(~-(ulonglong)(dVar25 <= dVar23) &
                                     (ulonglong)((double)*(float *)(lVar14 + 0x2c) * dVar25) |
                                    (ulonglong)((double)fVar32 * dVar23) &
                                    -(ulonglong)(dVar25 <= dVar23)) *
             (double)(-(ulonglong)(dVar25 < dVar23) & 0x3ff0000000000000 |
                     ~-(ulonglong)(dVar25 < dVar23) &
                     -(ulonglong)(dVar23 < dVar25) & 0xbff0000000000000);
    plVar3[1] = (longlong)dVar25;
    dVar36 = (double)(float)(ABS(dVar33) * (double)fVar20) *
             (double)(-(ulonglong)(0.0 < dVar33) & 0x3ff0000000000000 |
                     ~-(ulonglong)(0.0 < dVar33) & -(ulonglong)(dVar33 < 0.0) & 0xbff0000000000000);
    plVar3[2] = (longlong)dVar36;
    dVar40 = dVar25 * dVar25 + dVar36 * dVar36;
    if ((dVar40 != 1.0) || (NAN(dVar40))) {
      dVar26 = DAT_14c8464f0;
      dVar37 = DAT_14c8464e8;
      dVar34 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar40) {
        dVar26 = 0.0;
        dVar37 = dVar36 * (1.0 / SQRT(dVar40));
        dVar34 = dVar25 * (1.0 / SQRT(dVar40));
      }
    }
    else {
      dVar26 = (double)(-(ulonglong)((double)plVar3[3] == 0.0) & plVar3[3]);
      dVar37 = dVar36;
      dVar34 = dVar25;
    }
    dVar23 = (double)(float)SQRT(dVar23 * dVar23 + dVar33 * dVar33);
    dVar26 = dVar26 * dVar23;
    dVar37 = dVar37 * dVar23;
    dVar34 = dVar34 * dVar23;
    plVar3[1] = (longlong)dVar34;
    plVar3[2] = (longlong)dVar37;
    plVar3[3] = (longlong)dVar26;
    dVar23 = 0.0;
    if (((dVar34 != 0.0) || (NAN(dVar34))) || ((dVar37 != 0.0 || (NAN(dVar37))))) {
      dVar23 = atan2(dVar37,dVar34);
      dVar23 = dVar23 * 57.29577951308232;
      dVar34 = (double)plVar3[1];
      dVar37 = (double)plVar3[2];
      dVar26 = (double)plVar3[3];
    }
    dVar33 = SQRT(dVar34 * dVar34 + dVar37 * dVar37);
    if ((((dVar26 != 0.0) || (NAN(dVar26))) || (dVar33 != 0.0)) || (NAN(dVar33))) {
      atan2(dVar26,dVar33);
    }
    fVar20 = (float)(ABS(dVar23) * -0.017453292519943295) / 1.5707964 + 1.0;
    if (fVar20 < 0.0) {
      lVar14 = *plVar3;
      fVar20 = *(float *)(lVar14 + 0x28) -
               fVar20 * (*(float *)(lVar14 + 0x2c) - *(float *)(lVar14 + 0x28));
    }
    else {
      lVar14 = *plVar3;
      fVar20 = fVar20 * (fVar32 - *(float *)(lVar14 + 0x28)) + *(float *)(lVar14 + 0x28);
    }
  }
  fVar32 = 0.0;
  if (0.0 < param_3) {
    fVar21 = param_3;
    if ((char)plVar3[6] == '\0') {
      fVar22 = *(float *)(lVar14 + 0x24) - *(float *)(lVar14 + 0x20);
      if (*(float *)(lVar14 + 0x30) <= fVar22) {
        fVar21 = (param_3 - *(float *)(lVar14 + 0x20)) / fVar22;
        if (1.0 <= fVar21) {
          fVar21 = 1.0;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        fVar22 = fVar22 + (*(float *)(lVar14 + 0x30) - fVar22) * (1.0 - fVar21);
      }
      fVar21 = 0.0;
      if (0.0 <= param_3 - fVar22) {
        fVar21 = param_3 - fVar22;
      }
    }
    if (fVar21 <= fVar20) {
      fVar20 = fVar21;
    }
  }
  *(float *)(param_1 + 0xe6) = fVar20;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)((longlong)plVar3 + 0x2c);
  FUN_140c35fde(local_158,param_1 + 4,param_1 + 0xe7);
  pdVar15 = local_158;
  pdVar16 = (double *)(param_1 + 0x112);
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *pdVar16 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar16 = pdVar16 + 1;
  }
  param_1[0x10f] = plVar3[3];
  lVar14 = plVar3[2];
  param_1[0x10d] = (longlong)*pdVar1;
  param_1[0x10e] = lVar14;
  if ((char)param_1[0x131] == '\x01') {
    fVar32 = *(float *)(param_1 + 0x134);
  }
  local_168 = (double)(fVar49 * -fVar32);
  local_170 = 0;
  local_160 = 0;
  FUN_1401c9a0e(&local_170,local_158,pdVar1);
  dVar37 = local_158[0] * (double)param_1[0x11a];
  dVar26 = local_158[1] * (double)param_1[0x11b];
  dVar34 = local_158[2] * (double)param_1[0x11c];
  dVar25 = (double)param_1[0x114];
  dVar23 = (double)param_1[0x115];
  dVar36 = (double)param_1[0x112];
  dVar40 = (double)param_1[0x113];
  dVar33 = dVar26 * dVar36 - dVar37 * dVar40;
  dVar39 = dVar34 * dVar40 - dVar26 * dVar25;
  dVar42 = dVar37 * dVar25 - dVar36 * dVar34;
  dVar39 = dVar39 + dVar39;
  dVar42 = dVar42 + dVar42;
  dVar33 = dVar33 + dVar33;
  param_1[0x11e] = (longlong)((dVar33 * dVar40 - dVar42 * dVar25) + dVar23 * dVar39 + dVar37);
  param_1[0x11f] =
       (longlong)((dVar25 * dVar39 - dVar36 * dVar33) + (double)param_1[0x115] * dVar42 + dVar26);
  param_1[0x120] = (longlong)(dVar33 * dVar23 + dVar34 + (dVar42 * dVar36 - dVar39 * dVar40));
  (**(code **)(*param_1 + 0xc0))(param_1);
  dVar23 = (double)param_1[0x11e];
  dVar33 = (double)param_1[0x11f];
  if ((9.999999747378752e-05 < ABS(dVar23)) || (9.999999747378752e-05 < ABS(dVar33))) {
    *(undefined1 *)(param_1 + 299) = 1;
    dVar25 = (double)param_1[0x120];
LAB_140c34b14:
    dVar36 = (double)param_1[0x10];
    dVar40 = (double)param_1[0x11];
    dVar34 = (double)param_1[0x12];
    dVar37 = (dVar34 * dVar25 + dVar36 * dVar23 + dVar33 * dVar40) /
             (dVar25 * dVar25 + dVar23 * dVar23 + dVar33 * dVar33);
    local_178 = dVar25 * dVar37;
    dVar26 = dVar37 * dVar23;
    dVar37 = dVar33 * dVar37;
  }
  else {
    dVar25 = (double)param_1[0x120];
    *(bool *)(param_1 + 299) = 9.999999747378752e-05 < ABS(dVar25);
    if (9.999999747378752e-05 < ABS(dVar25)) goto LAB_140c34b14;
    dVar34 = (double)param_1[0x12];
    dVar36 = (double)param_1[0x10];
    dVar40 = (double)param_1[0x11];
    local_178 = DAT_14c8464f0;
    dVar26 = DAT_14c8464e0;
    dVar37 = DAT_14c8464e8;
  }
  param_1[0x121] = (longlong)dVar26;
  param_1[0x122] = (longlong)dVar37;
  param_1[0x123] = (longlong)local_178;
  param_1[0x124] = (longlong)(dVar36 - dVar26);
  param_1[0x125] = (longlong)(dVar40 - dVar37);
  param_1[0x126] = (longlong)(dVar34 - local_178);
  dVar10 = (double)param_1[0x10];
  dVar11 = (double)param_1[0x11];
  dVar36 = -(double)param_1[0x112];
  dVar40 = -(double)param_1[0x113];
  dVar42 = (double)param_1[0x114] * -1.0;
  dVar44 = (double)param_1[0x115] * 1.0;
  dVar45 = dVar10 * dVar42 - dVar36 * dVar34;
  dVar46 = dVar11 * dVar36 - dVar10 * dVar40;
  dVar48 = dVar34 * dVar40 - dVar11 * dVar42;
  dVar48 = dVar48 + dVar48;
  dVar45 = dVar45 + dVar45;
  dVar46 = dVar46 + dVar46;
  auVar38 = *(undefined1 (*) [16])(param_1 + 0x11a);
  auVar41 = divpd(_DAT_149934d80,auVar38);
  dVar39 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar38._0_8_)) & auVar41._0_8_) *
           ((dVar46 * dVar40 - dVar45 * dVar42) + dVar44 * dVar48 + dVar10);
  dVar42 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar38._8_8_)) & auVar41._8_8_) *
           ((double)param_1[0x112] * dVar46 + dVar42 * dVar48 + dVar44 * dVar45 + dVar11);
  dVar43 = 1.0;
  dVar46 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x11c])) &
                   (ulonglong)(1.0 / (double)param_1[0x11c])) *
           (dVar44 * dVar46 + dVar34 + (dVar45 * dVar36 - dVar48 * dVar40));
  auVar6._8_4_ = SUB84(dVar42,0);
  auVar6._0_8_ = dVar39;
  auVar6._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x127) = auVar6;
  param_1[0x129] = (longlong)dVar46;
  dVar36 = (double)param_1[0x10d];
  dVar40 = (double)param_1[0x10e];
  dVar45 = dVar36 * dVar36 + dVar40 * dVar40;
  dVar44 = dVar39 * dVar39 + dVar42 * dVar42;
  if ((dVar44 != 1.0) || (NAN(dVar44))) {
    dVar48 = DAT_14c8464e8;
    dVar47 = DAT_14c8464f0;
    dVar46 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar44) {
      dVar48 = dVar42 * (1.0 / SQRT(dVar44));
      dVar47 = 0.0;
      dVar46 = dVar39 * (1.0 / SQRT(dVar44));
    }
  }
  else {
    dVar48 = dVar42;
    dVar47 = (double)(-(ulonglong)(dVar46 == 0.0) & (ulonglong)dVar46);
    dVar46 = dVar39;
  }
  if ((dVar45 != 1.0) || (NAN(dVar45))) {
    dVar42 = DAT_14c8464f0;
    dVar44 = DAT_14c8464e0;
    dVar39 = DAT_14c8464e8;
    if (9.99999993922529e-09 <= dVar45) {
      dVar39 = 1.0 / SQRT(dVar45);
      dVar42 = 0.0;
      dVar44 = dVar36 * dVar39;
      dVar39 = dVar40 * dVar39;
    }
  }
  else {
    dVar42 = (double)(-(ulonglong)((double)param_1[0x10f] == 0.0) & param_1[0x10f]);
    dVar44 = dVar36;
    dVar39 = dVar40;
  }
  dVar36 = 1.0 - (dVar48 * dVar39 + dVar44 * dVar46 + dVar42 * dVar47);
  if (1.0 <= dVar36) {
    dVar36 = 1.0;
  }
  if (dVar36 <= 0.0) {
    dVar36 = 0.0;
  }
  *(float *)(param_1 + 0x12a) = (float)(SQRT(dVar45) * dVar36);
  if ((*(char *)((longlong)param_1 + 0x95a) == '\x01') && (0 < (int)param_1[0x32])) {
    *(undefined4 *)(param_1 + 0x12f) = *(undefined4 *)((longlong)param_1 + 0x95c);
    *(float *)((longlong)param_1 + 0x97c) = (float)dVar34;
  }
  fVar32 = (float)(dVar25 * local_178 + dVar23 * dVar26 + dVar33 * dVar37);
  *(float *)(param_1 + 300) = fVar32;
  bVar12 = false;
  fVar49 = 0.0;
  fVar20 = (float)local_188;
  if ((fVar32 < 0.0) && (bVar12 = false, (char)param_1[299] != '\0')) {
    bVar12 = (double)*(float *)(*plVar3 + 0x44) <=
             SQRT(local_178 * local_178 + dVar26 * dVar26 + dVar37 * dVar37);
  }
  *(bool *)((longlong)param_1 + 0x959) = bVar12;
  *(bool *)((longlong)param_1 + 0x95a) = (int)param_1[0x32] == 0;
  dVar23 = SQRT(dVar34 * dVar34 + dVar10 * dVar10 + dVar11 * dVar11) / (double)local_18c;
  if (1.0 <= dVar23) {
    dVar23 = 1.0;
  }
  if (dVar23 <= 0.0) {
    dVar23 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x964) = (float)dVar23;
  fVar21 = fVar32 / *(float *)(param_1 + 0xe6);
  if (1.0 <= fVar32 / *(float *)(param_1 + 0xe6)) {
    fVar21 = 1.0;
  }
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  *(float *)(param_1 + 0x12d) = fVar21;
  fVar32 = *(float *)(param_1 + 0x31) / local_18c;
  if (1.0 <= *(float *)(param_1 + 0x31) / local_18c) {
    fVar32 = 1.0;
  }
  if (fVar32 <= 0.0) {
    fVar32 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x96c) = fVar32;
  (**(code **)(*param_1 + 0xb8))(param_1);
  local_198 = param_5;
  (**(code **)(*param_1 + 200))(param_1);
  if (*(char *)((longlong)param_1 + 0x95a) == '\x01') {
    fVar49 = *(float *)((longlong)param_1 + 0x95c) + fVar20;
  }
  *(float *)((longlong)param_1 + 0x95c) = fVar49;
  fVar32 = *(float *)(param_1 + 0x12d);
  fVar49 = *(float *)(param_1 + 300) / local_190;
  if (1.0 <= fVar49) {
    fVar49 = 1.0;
  }
  if (fVar49 <= 0.0) {
    fVar49 = 0.0;
  }
  plVar5 = (longlong *)*plVar3;
  if ((char)plVar3[6] == '\x01') {
    iVar18 = (int)plVar5[3];
    fVar21 = 1.0 / (float)(iVar18 + -1);
    iVar17 = (int)(fVar32 / fVar21);
    if (iVar17 < iVar18 + -1) {
      fVar21 = (fVar32 - (float)iVar17 * fVar21) / fVar21;
      lVar14 = plVar5[2];
      goto LAB_140c35063;
    }
    lVar14 = plVar5[2];
LAB_140c35708:
    fVar21 = *(float *)(lVar14 + -4 + (longlong)iVar18 * 4);
  }
  else {
    iVar18 = (int)plVar5[1];
    fVar21 = 1.0 / (float)(iVar18 + -1);
    iVar17 = (int)(fVar32 / fVar21);
    if (iVar18 + -1 <= iVar17) {
      lVar14 = *plVar5;
      goto LAB_140c35708;
    }
    fVar21 = (fVar32 - (float)iVar17 * fVar21) / fVar21;
    lVar14 = *plVar5;
LAB_140c35063:
    fVar21 = (1.0 - fVar21) * *(float *)(lVar14 + (longlong)iVar17 * 4) +
             fVar21 * *(float *)(lVar14 + 4 + (longlong)iVar17 * 4);
  }
  iVar17 = (int)plVar5[0x31] + -1;
  fVar22 = 1.0 / (float)iVar17;
  iVar18 = (int)(fVar49 / fVar22);
  if (iVar18 < iVar17) {
    fVar22 = (fVar49 - (float)iVar18 * fVar22) / fVar22;
    fVar49 = (1.0 - fVar22) * *(float *)(plVar5[0x30] + (longlong)iVar18 * 4) +
             fVar22 * *(float *)(plVar5[0x30] + 4 + (longlong)iVar18 * 4);
  }
  else {
    fVar49 = *(float *)(plVar5[0x30] + -4 + (longlong)(int)plVar5[0x31] * 4);
  }
  if (*(char *)((longlong)param_1 + 0x95a) == '\0') {
    fVar35 = 1.0;
    fVar22 = 1.0;
    if (9.99999993922529e-09 <
        (double)param_1[0x11e] * (double)param_1[0x11e] +
        (double)param_1[0x11f] * (double)param_1[0x11f]) {
      FUN_140c34208(param_1 + 0xe6);
      auVar27._0_8_ = FUN_140c35dcc(lVar19 + lVar4);
      auVar27._8_8_ = extraout_XMM0_Qb_00;
      if (1.0 <= (float)auVar27._0_8_) {
        auVar27._0_4_ = 0x3f800000;
      }
      if (auVar27._0_4_ <= 0.0) {
        auVar8._12_4_ = 0;
        auVar8._0_12_ = auVar27._4_12_;
        auVar27 = auVar8 << 0x20;
      }
      fVar22 = auVar27._0_4_;
      fVar35 = 1.0;
      if ((*(byte *)((longlong)param_1 + 0x95a) & 1) == 0) {
        fVar35 = fVar22;
      }
      fVar32 = *(float *)(param_1 + 0x12d);
    }
  }
  else {
    fVar22 = *(float *)((longlong)plVar5 + 0x4c);
    fVar35 = 1.0;
  }
  fVar21 = fVar21 * fVar22;
  *(float *)(param_1 + 0x12e) = fVar21;
  if (fVar32 <= fVar21) {
    fVar32 = fVar21;
  }
  dVar23 = 0.0;
  if (0.0 <= *pdVar1) {
    dVar23 = *pdVar1;
  }
  dVar33 = (double)param_1[0x14];
  dVar25 = (double)param_1[0x13] * (double)param_1[0x13] + dVar33 * dVar33;
  fVar32 = (float)(SQRT((double)param_1[0x15] * (double)param_1[0x15] + dVar25) *
                  dVar23 * (double)fVar32);
  fVar49 = 1.0 - (1.0 - fVar49) * fVar35;
  *(float *)((longlong)param_1 + 0x954) = fVar32;
  lVar19 = param_1[0x131];
  if (((char)lVar19 == '\x01') && (*(char *)((longlong)param_1 + 0x98a) == '\x01')) {
    *(float *)((longlong)param_1 + 0x954) = fVar32 * *(float *)(*plVar3 + 0x274);
  }
  fVar32 = *(float *)((longlong)param_1 + 0x974);
  fVar21 = fVar49 - fVar32;
  if (fVar49 < fVar32) {
    if (1e-08 <= fVar21 * fVar21) {
      fVar49 = *(float *)(*plVar3 + 0x194);
      goto LAB_140c35226;
    }
  }
  else if (1e-08 <= fVar21 * fVar21) {
    fVar49 = *(float *)(*plVar3 + 400);
LAB_140c35226:
    fVar20 = fVar20 * fVar49;
    if (fVar20 <= fVar21) {
      fVar21 = fVar20;
    }
    if (fVar21 <= -fVar20) {
      fVar21 = -fVar20;
    }
    fVar49 = fVar32 + fVar21;
  }
  *(float *)((longlong)param_1 + 0x974) = fVar49;
  *(undefined4 *)((longlong)param_1 + 0x884) = 0;
  fVar32 = (float)(0.0 - (double)*(float *)(*plVar3 + 0x60) * (double)plVar3[2]);
  *(float *)((longlong)param_1 + 0x884) = fVar32;
  fVar20 = *(float *)((longlong)plVar3 + 0x2c);
  auVar28._0_8_ = FUN_140c35dcc(*plVar3 + 0x68);
  auVar28._8_8_ = extraout_XMM0_Qb_01;
  auVar29._4_12_ = auVar28._4_12_;
  auVar29._0_4_ = (float)auVar28._0_8_ * (fVar20 / -3.1415927) + fVar32;
  *(float *)((longlong)param_1 + 0x884) = auVar29._0_4_;
  if ((char)param_1[299] == '\0') {
    if (((dVar25 != 1.0) || (dVar23 = dVar33, NAN(dVar25))) &&
       (dVar23 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar25)) {
      dVar23 = dVar33 * (1.0 / SQRT(dVar25));
    }
    fVar20 = *(float *)(*plVar3 + 0x44);
    if ((float)SQRT(dVar25) < fVar20) {
      dVar43 = (double)((float)SQRT(dVar25) / fVar20);
    }
    auVar30._0_8_ = (double)auVar29._0_4_ + (double)*(float *)(*plVar3 + 0x60) * dVar23 * dVar43;
    auVar30._8_8_ = extraout_XMM0_Qb_01;
    auVar29._4_12_ = auVar30._4_12_;
    auVar29._0_4_ = (float)auVar30._0_8_;
    *(float *)((longlong)param_1 + 0x884) = auVar29._0_4_;
  }
  if (((char)lVar19 != '\0') && (1e-08 < ABS(*(float *)(param_1 + 0x134)))) {
    auVar31 = ZEXT816(0);
    if (*(char *)((longlong)param_1 + 0x98a) == '\x01') {
      auVar31 = ZEXT416((uint)*(float *)((longlong)param_1 + 0x98c));
      if (1.0 <= *(float *)((longlong)param_1 + 0x98c)) {
        auVar31._4_12_ = ZEXT412(0);
        auVar31._0_4_ = 0x3f800000;
      }
      if (auVar31._0_4_ <= 0.0) {
        auVar9._12_4_ = 0;
        auVar9._0_12_ = auVar31._4_12_;
        auVar31 = auVar9 << 0x20;
      }
    }
    fVar20 = *(float *)(*plVar3 + 0x278);
    auVar29._4_4_ = 0x80000000;
    auVar29._0_4_ =
         -*(float *)(param_1 + 0x134) *
         ((*(float *)(*plVar3 + 0x27c) - fVar20) * auVar31._0_4_ + fVar20);
    auVar29._8_4_ = 0x80000000;
    auVar29._12_4_ = 0x80000000;
  }
  if (1.0 <= auVar29._0_4_) {
    auVar29._0_4_ = 1.0;
  }
  if (auVar29._0_4_ <= -1.0) {
    auVar29._0_4_ = -1.0;
  }
  *(int *)((longlong)param_1 + 0x884) = auVar29._0_4_;
  if (*(char *)((longlong)param_1 + 0x984) == '\0') {
    uVar13 = 1;
    if (((ABS((double)plVar3[7]) <= 9.999999747378752e-05) &&
        (ABS((double)plVar3[8]) <= 9.999999747378752e-05)) &&
       (ABS((double)plVar3[9]) <= 9.999999747378752e-05)) goto LAB_140c352fa;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x984) != '\x01') goto LAB_140c352fa;
    uVar13 = 2;
  }
  *(undefined1 *)((longlong)param_1 + 0x984) = uVar13;
LAB_140c352fa:
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c35dcc FUN_140c35dcc body=204 status=ok
// SIG undefined FUN_140c35dcc(void)

undefined8 FUN_140c35dcc(longlong *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((longlong)(int)param_1[1] == 0) {
    return 0;
  }
  dVar8 = (double)param_1[2];
  dVar6 = (double)param_2;
  if (dVar8 < dVar6) {
    lVar2 = (longlong)(int)param_1[1] + -1;
    iVar1 = (int)lVar2;
    dVar7 = (double)((float)((double)param_1[3] - dVar8) / (float)iVar1);
    dVar8 = (dVar6 - dVar8) / dVar7;
    if (0.0 <= (float)dVar8) {
      if ((double)param_1[3] <= dVar6) {
        lVar3 = *param_1;
      }
      else {
        iVar4 = (int)dVar8;
        lVar3 = *param_1;
        if (iVar4 < iVar1) {
          lVar2 = (longlong)iVar4 * 0x10;
          fVar5 = (float)((dVar6 - *(double *)(lVar3 + lVar2)) / dVar7);
          dVar8 = (double)(1.0 - fVar5) * *(double *)(lVar3 + 8 + lVar2) +
                  (double)fVar5 * *(double *)(lVar3 + 0x18 + lVar2);
          goto LAB_140c35e2b;
        }
        lVar2 = (longlong)iVar1;
      }
      dVar8 = *(double *)(lVar3 + 8 + lVar2 * 0x10);
      goto LAB_140c35e2b;
    }
  }
  dVar8 = *(double *)(*param_1 + 8);
LAB_140c35e2b:
  return CONCAT44((int)((ulonglong)dVar8 >> 0x20),(float)dVar8);
}



// FUNCTION 140c35e98 FUN_140c35e98 body=324 status=ok
// SIG undefined FUN_140c35e98(void)

void FUN_140c35e98(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x1a0) != 0) && (0 < *(int *)(*(longlong *)(param_1 + 0x1a0) + 0xf0))
     ) {
    cVar4 = *(char *)(param_1 + 0x9c0);
    if (cVar4 == '\x02') {
      cVar4 = '\x02';
      if (*(char *)(param_1 + 0x95a) != '\x01') {
        *(undefined1 *)(param_1 + 0x9c0) = 0;
        uVar3 = DAT_14c8464e8._4_4_;
        uVar2 = (undefined4)DAT_14c8464e8;
        uVar1 = DAT_14c8464e0._4_4_;
        *(undefined4 *)(param_1 + 0x9c8) = (undefined4)DAT_14c8464e0;
        *(undefined4 *)(param_1 + 0x9cc) = uVar1;
        *(undefined4 *)(param_1 + 0x9d0) = uVar2;
        *(undefined4 *)(param_1 + 0x9d4) = uVar3;
        *(undefined8 *)(param_1 + 0x9d8) = DAT_14c8464f0;
        *(undefined8 *)(param_1 + 0x9e0) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x9e8) = 0;
        *(int *)(param_1 + 0x9ec) = *(int *)(param_1 + 0x9ec) + 1;
        goto LAB_140c35efc;
      }
    }
    else if ((cVar4 == '\x01') && (cVar4 = '\x02', *(char *)(param_1 + 0x95a) == '\x01')) {
      *(undefined1 *)(param_1 + 0x9c0) = 2;
      *(int *)(param_1 + 0x9ec) = *(int *)(param_1 + 0x9ec) + 1;
    }
    if (cVar4 != '\0' && param_5 != 0) {
      fVar5 = *(float *)(param_1 + 0x9e8);
      if (1e-08 < fVar5) {
        local_28 = *(undefined8 *)(param_1 + 0x9d8);
        local_38 = *(undefined4 *)(param_1 + 0x9c8);
        uStack_34 = *(undefined4 *)(param_1 + 0x9cc);
        uStack_30 = *(undefined4 *)(param_1 + 0x9d0);
        uStack_2c = *(undefined4 *)(param_1 + 0x9d4);
        FUN_14091cdb4(param_5,&local_38,1);
        fVar5 = *(float *)(param_1 + 0x9e8);
      }
      fVar6 = 0.0;
      if (0.0 <= fVar5 - param_2) {
        fVar6 = fVar5 - param_2;
      }
      *(float *)(param_1 + 0x9e8) = fVar6;
    }
  }
LAB_140c35efc:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c35fde FUN_140c35fde body=860 status=ok
// SIG undefined FUN_140c35fde(void)

double * FUN_140c35fde(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pdVar5 = param_1;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_2;
    param_2 = param_2 + 1;
    pdVar5 = pdVar5 + 1;
  }
  dVar8 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar6 = param_1[3];
  dVar7 = dVar8 * 0.0 - dVar2 * 1.0;
  dVar9 = dVar2 * 0.0 - dVar3 * 0.0;
  dVar10 = dVar3 * 1.0 - dVar8 * 0.0;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar7 = dVar7 + dVar7;
  dVar1 = dVar7 * dVar6 + 0.0 + (dVar10 * dVar8 - dVar9 * dVar2);
  dVar6 = (dVar7 * dVar2 - dVar10 * dVar3) + dVar6 * dVar9 + 1.0;
  dVar10 = (dVar3 * dVar9 - dVar8 * dVar7) + param_1[3] * dVar10 + 0.0;
  local_b8 = *param_3;
  local_b0 = param_3[1];
  dVar8 = local_b8 * dVar10 - dVar6 * local_b0;
  local_a8 = param_3[2];
  dVar7 = dVar6 * local_a8 - dVar1 * local_b8;
  dVar10 = local_b0 * dVar1 - dVar10 * local_a8;
  dVar6 = dVar8 * dVar8 + dVar10 * dVar10 + dVar7 * dVar7;
  if (((dVar6 != 1.0) || (local_d0 = dVar7, local_c8 = dVar8, local_d8 = dVar10, NAN(dVar6))) &&
     (local_d0 = DAT_14c8464e8, local_c8 = DAT_14c8464f0, local_d8 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar6)) {
    dVar6 = 1.0 / SQRT(dVar6);
    local_d0 = dVar7 * dVar6;
    local_c8 = dVar8 * dVar6;
    local_d8 = dVar10 * dVar6;
  }
  dVar6 = local_d8 * local_b0 - local_b8 * local_d0;
  dVar7 = local_c8 * local_b8 - local_a8 * local_d8;
  dVar10 = local_d0 * local_a8 - local_b0 * local_c8;
  dVar1 = dVar6 * dVar6 + dVar10 * dVar10 + dVar7 * dVar7;
  if (((dVar1 != 1.0) || (local_e8 = dVar6, local_f0 = dVar7, local_f8 = dVar10, NAN(dVar1))) &&
     (local_e8 = DAT_14c8464f0, local_f0 = DAT_14c8464e8, local_f8 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar1)) {
    dVar1 = 1.0 / SQRT(dVar1);
    local_e8 = dVar6 * dVar1;
    local_f0 = dVar7 * dVar1;
    local_f8 = dVar10 * dVar1;
  }
  local_98 = param_1[4];
  dStack_90 = param_1[5];
  local_88 = param_1[6];
  local_e0 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_80 = 0x3ff0000000000000;
  FUN_1448ac920(param_1);
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140c3633c FUN_140c3633c body=1715 status=ok
// SIG undefined FUN_140c3633c(void)

void FUN_140c3633c(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(param_1 + 0x1a0);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0xf0) < 1)) goto LAB_140c363a0;
  plVar1 = *(longlong **)(lVar5 + 0xe8);
  cVar4 = *(char *)(param_1 + 0x988);
  if ((cVar4 == '\x01') && (*(char *)(param_1 + 0x98a) == '\x01')) {
    FUN_144a79a9c(param_1 + 0x80,&local_68);
    dVar13 = (double)FUN_144719204(SUB84((double)(*(float *)(plVar1 + 5) - (float)uStack_60),0));
    dVar13 = (double)(~-(ulonglong)(dVar13 < 0.0) & (ulonglong)dVar13 |
                     (ulonglong)(dVar13 + 360.0) & -(ulonglong)(dVar13 < 0.0));
    fVar7 = (float)(double)(~-(ulonglong)(180.0 < dVar13) & (ulonglong)dVar13 |
                           (ulonglong)(dVar13 + -360.0) & -(ulonglong)(180.0 < dVar13));
    fVar2 = (float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                   ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000);
    cVar4 = *(char *)(param_1 + 0x988);
    fVar9 = 0.0;
    if (cVar4 == '\x01') {
      fVar9 = *(float *)(param_1 + 0x9a0);
    }
    fVar14 = 0.0;
    if ((fVar2 == fVar9) && (fVar14 = 0.0, !NAN(fVar2) && !NAN(fVar9))) {
      fVar9 = *(float *)(*plVar1 + 0x218);
      fVar14 = *(float *)(*plVar1 + 0x21c);
      if ((fVar9 != fVar14) || (NAN(fVar9) || NAN(fVar14))) {
        fVar3 = fVar14;
        if (fVar9 <= fVar14) {
          fVar3 = fVar9;
          fVar9 = fVar14;
        }
        fVar14 = (ABS(fVar7) - fVar3) / (fVar9 - fVar3);
      }
      else {
        fVar14 = 0.0;
        if (fVar9 <= ABS(fVar7)) {
          fVar14 = 1.0;
        }
      }
    }
    *(float *)(param_1 + 0x98c) = fVar14;
    lVar5 = *plVar1;
    if (*(char *)(lVar5 + 0x220) == '\x01') {
      if ((90.0 <= ABS(fVar7) || *(char *)(param_1 + 0x99c) != '\x01') ||
         (fVar9 = *(float *)(param_1 + 0x9b4), 90.0 <= ABS(fVar9))) {
LAB_140c36857:
        if (*(char *)(param_1 + 0x99c) != '\0') goto LAB_140c36864;
      }
      else {
        fVar9 = (float)(-(uint)(0.0 < fVar9) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar9) & -(uint)(fVar9 < 0.0) & 0xbf800000);
        if ((fVar2 == fVar9) && (!NAN(fVar2) && !NAN(fVar9))) goto LAB_140c36857;
        *(undefined1 *)(param_1 + 0x99c) = 0;
        lVar5 = *plVar1;
      }
      if (*(float *)(lVar5 + 0x224) <= ABS(fVar7)) {
        fVar9 = 0.0;
        if (cVar4 != '\0') {
          fVar9 = *(float *)(param_1 + 0x9a0);
        }
        if ((fVar2 != fVar9) || (NAN(fVar2) || NAN(fVar9))) {
          uVar6 = -(uint)(0.0 < *(float *)(param_1 + 0x9a0));
          *(uint *)(param_1 + 0x9a0) =
               uVar6 & 0xbf800000 |
               ~uVar6 & *(uint *)(&DAT_14ae3e1c8 +
                                 (ulonglong)(*(float *)(param_1 + 0x9a0) < 0.0) * 4);
          *(undefined1 *)(param_1 + 0x99c) = 1;
        }
      }
    }
LAB_140c36864:
    *(float *)(param_1 + 0x9b4) = fVar7;
  }
  if ((cVar4 == '\0') || (*(char *)(param_1 + 0x98a) != '\x01')) goto LAB_140c363a0;
  fVar9 = *(float *)(param_1 + 0x98c);
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (fVar9 <= 1e-08) goto LAB_140c363a0;
  local_68 = *(double *)(param_1 + 0x80);
  uStack_60 = *(double *)(param_1 + 0x88);
  dVar13 = local_68 * local_68 + uStack_60 * uStack_60;
  if ((dVar13 != 1.0) || (NAN(dVar13))) {
    if (dVar13 < 9.99999993922529e-09) {
      local_58 = DAT_14c8464f0;
      uVar8 = (undefined4)DAT_14c8464e0;
      uVar10 = DAT_14c8464e0._4_4_;
      uVar11 = (undefined4)DAT_14c8464e8;
      uVar12 = DAT_14c8464e8._4_4_;
      goto LAB_140c365a1;
    }
    uStack_60 = uStack_60 * (1.0 / SQRT(dVar13));
    local_68 = local_68 * (1.0 / SQRT(dVar13));
LAB_140c3696a:
    local_58 = 0.0;
  }
  else {
    if ((*(double *)(param_1 + 0x90) != 0.0) || (NAN(*(double *)(param_1 + 0x90))))
    goto LAB_140c3696a;
    local_58 = *(double *)(param_1 + 0x90);
    uVar8 = *(undefined4 *)(param_1 + 0x80);
    uVar10 = *(undefined4 *)(param_1 + 0x84);
    uVar11 = *(undefined4 *)(param_1 + 0x88);
    uVar12 = *(undefined4 *)(param_1 + 0x8c);
LAB_140c365a1:
    local_68 = (double)CONCAT44(uVar10,uVar8);
    uStack_60 = (double)CONCAT44(uVar12,uVar11);
  }
  local_88 = *(double *)(param_1 + 0x8f0);
  uStack_80 = *(double *)(param_1 + 0x8f8);
  dVar13 = local_88 * local_88 + uStack_80 * uStack_80;
  if ((dVar13 != 1.0) || (NAN(dVar13))) {
    if (dVar13 < 9.99999993922529e-09) {
      local_78 = DAT_14c8464f0;
      uVar8 = (undefined4)DAT_14c8464e0;
      uVar10 = DAT_14c8464e0._4_4_;
      uVar11 = (undefined4)DAT_14c8464e8;
      uVar12 = DAT_14c8464e8._4_4_;
      goto LAB_140c3660f;
    }
    uStack_80 = uStack_80 * (1.0 / SQRT(dVar13));
    local_88 = local_88 * (1.0 / SQRT(dVar13));
LAB_140c3699c:
    local_78 = 0.0;
  }
  else {
    if ((*(double *)(param_1 + 0x900) != 0.0) || (NAN(*(double *)(param_1 + 0x900))))
    goto LAB_140c3699c;
    local_78 = *(double *)(param_1 + 0x900);
    uVar8 = *(undefined4 *)(param_1 + 0x8f0);
    uVar10 = *(undefined4 *)(param_1 + 0x8f4);
    uVar11 = *(undefined4 *)(param_1 + 0x8f8);
    uVar12 = *(undefined4 *)(param_1 + 0x8fc);
LAB_140c3660f:
    local_88 = (double)CONCAT44(uVar10,uVar8);
    uStack_80 = (double)CONCAT44(uVar12,uVar11);
  }
  fVar9 = (float)FUN_140c35dcc(*plVar1 + 0x230);
  if (local_78 * local_58 + local_88 * local_68 + uStack_80 * uStack_60 <= 0.0) {
    local_98 = local_88 * uStack_60 - local_68 * uStack_80;
    dStack_a0 = local_78 * local_68 - local_58 * local_88;
    local_a8 = uStack_80 * local_58 - uStack_60 * local_78;
    dVar13 = local_98 * local_98 + local_a8 * local_a8 + dStack_a0 * dStack_a0;
    if ((dVar13 != 1.0) || (NAN(dVar13))) {
      if (9.99999993922529e-09 <= dVar13) {
        dVar13 = 1.0 / SQRT(dVar13);
        local_98 = local_98 * dVar13;
        dStack_a0 = dStack_a0 * dVar13;
        local_a8 = local_a8 * dVar13;
      }
      else {
        local_98 = DAT_14c8464f0;
        local_a8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dStack_a0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
    }
    FUN_140ccff96(&local_88,&local_68,
                  (double)(*(float *)(param_1 + 0x9a0) * -90.0) * 0.017453292519943295,&local_a8);
  }
  FUN_1467fc960(&local_a8,&local_88,&local_68,(double)fVar9);
  local_78 = local_98;
  local_88 = local_a8;
  uStack_80 = dStack_a0;
  dVar13 = SQRT(*(double *)(param_1 + 0x900) * *(double *)(param_1 + 0x900) +
                *(double *)(param_1 + 0x8f0) * *(double *)(param_1 + 0x8f0) +
                *(double *)(param_1 + 0x8f8) * *(double *)(param_1 + 0x8f8));
  *(double *)(param_1 + 0x8f0) = dVar13 * local_a8;
  *(double *)(param_1 + 0x8f8) = dStack_a0 * dVar13;
  *(double *)(param_1 + 0x900) = local_98 * dVar13;
LAB_140c363a0:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


