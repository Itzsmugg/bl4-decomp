// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f1bce4 FUN_146f1bce4 body=130 status=ok
// SIG undefined FUN_146f1bce4(void)

void FUN_146f1bce4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 2)) {
        uVar5 = uVar3 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x14) = (int)uVar5;
    FUN_1401cadc2(param_1,param_2,uVar5,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1bd68 FUN_146f1bd68 body=164 status=ok
// SIG undefined FUN_146f1bd68(void)

void FUN_146f1bd68(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar4 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    iVar3 = 1;
    lVar6 = 0;
    lVar2 = 0;
    do {
      if (*(int *)(lVar4 + lVar6) == *param_2) {
        if (iVar3 == 0) {
          return;
        }
        iVar3 = iVar1 - iVar3;
        if (iVar3 != 0) {
          iVar5 = 1;
          if (iVar3 < 1) {
            iVar5 = iVar3;
          }
          memmove((void *)(lVar4 + (lVar2 >> 0x20) * 4),
                  (void *)(lVar4 + (longlong)(iVar1 - iVar5) * 4),(longlong)iVar5 << 2);
          iVar1 = *(int *)(param_1 + 0x10);
        }
        *(int *)(param_1 + 0x10) = iVar1 + -1;
        FUN_146f1be0c(param_1);
        return;
      }
      lVar2 = lVar2 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 << 2 != lVar6);
  }
  return;
}



// FUNCTION 146f1be0c FUN_146f1be0c body=58 status=ok
// SIG undefined FUN_146f1be0c(void)

void FUN_146f1be0c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1be46(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_1401cadc2(param_1,*(undefined4 *)(param_1 + 0x10),iVar1,4);
  return;
}



// FUNCTION 146f1be46 FUN_146f1be46 body=108 status=ok
// SIG undefined FUN_146f1be46(void)

ulonglong FUN_146f1be46(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 2;
  if (2 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f1beb2 FUN_146f1beb2 body=129 status=ok
// SIG undefined FUN_146f1beb2(void)

void FUN_146f1beb2(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x80;
    if (0x80 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 * 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 1)) {
        uVar4 = uVar2 >> 1 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_146f1bf34(param_1,param_2,uVar4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f1bf34 FUN_146f1bf34 body=143 status=ok
// SIG undefined FUN_146f1bf34(void)

void FUN_146f1bf34(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f1bfc3 FUN_146f1bfc3 body=43 status=ok
// SIG undefined FUN_146f1bfc3(void)

void FUN_146f1bfc3(longlong param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x40);
    do {
      pbVar1[-0x18] = 0;
      pbVar1[-0x17] = 0;
      pbVar1[-0x16] = 0;
      pbVar1[-0x15] = 0;
      pbVar1[-0x14] = 0;
      pbVar1[-0x13] = 0;
      pbVar1[-0x12] = 0;
      pbVar1[-0x11] = 0;
      pbVar1[-0x10] = 0;
      pbVar1[-0xf] = 0;
      pbVar1[-0xe] = 0;
      pbVar1[-0xd] = 0;
      pbVar1[-0xc] = 0;
      pbVar1[-0xb] = 0;
      pbVar1[-10] = 0;
      pbVar1[-9] = 0;
      pbVar1[-0x28] = 0;
      pbVar1[-0x27] = 0;
      pbVar1[-0x26] = 0;
      pbVar1[-0x25] = 0;
      pbVar1[-0x24] = 0;
      pbVar1[-0x23] = 0;
      pbVar1[-0x22] = 0;
      pbVar1[-0x21] = 0;
      pbVar1[-0x20] = 0;
      pbVar1[-0x1f] = 0;
      pbVar1[-0x1e] = 0;
      pbVar1[-0x1d] = 0;
      pbVar1[-0x1c] = 0;
      pbVar1[-0x1b] = 0;
      pbVar1[-0x1a] = 0;
      pbVar1[-0x19] = 0;
      pbVar1[-0x38] = 0;
      pbVar1[-0x37] = 0;
      pbVar1[-0x36] = 0;
      pbVar1[-0x35] = 0;
      pbVar1[-0x34] = 0;
      pbVar1[-0x33] = 0;
      pbVar1[-0x32] = 0;
      pbVar1[-0x31] = 0;
      pbVar1[-0x30] = 0;
      pbVar1[-0x2f] = 0;
      pbVar1[-0x2e] = 0;
      pbVar1[-0x2d] = 0;
      pbVar1[-0x2c] = 0;
      pbVar1[-0x2b] = 0;
      pbVar1[-0x2a] = 0;
      pbVar1[-0x29] = 0;
      pbVar1[-8] = 0;
      pbVar1[-7] = 0;
      pbVar1[-6] = 0;
      pbVar1[-5] = 0;
      pbVar1[-4] = 0;
      pbVar1[-3] = 0;
      pbVar1[-2] = 0;
      pbVar1[-1] = 0;
      *pbVar1 = *pbVar1 & 0xf0;
      pbVar1 = pbVar1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f1bfee FUN_146f1bfee body=147 status=ok
// SIG undefined FUN_146f1bfee(void)

void FUN_146f1bfee(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1c082 FUN_146f1c082 body=98 status=ok
// SIG undefined FUN_146f1c082(void)

void FUN_146f1c082(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x48 + *param_1);
  FUN_146f1ab68(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x48),(longlong)iVar2 * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f1c0e4 FUN_146f1c0e4 body=62 status=ok
// SIG undefined FUN_146f1c0e4(void)

void FUN_146f1c0e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1c122(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 146f1c122 FUN_146f1c122 body=112 status=ok
// SIG undefined FUN_146f1c122(void)

ulonglong FUN_146f1c122(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f1c15c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_146f1c15c:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f1c192 FUN_146f1c192 body=132 status=ok
// SIG undefined FUN_146f1c192(void)

void FUN_146f1c192(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1c218 FUN_146f1c218 body=132 status=ok
// SIG undefined FUN_146f1c218(void)

void FUN_146f1c218(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1c29d FUN_146f1c29d body=158 status=ok
// SIG undefined FUN_146f1c29d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f1c29d(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x18);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-2] = 0;
      }
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 + 2;
      puVar2 = puVar2 + 4;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 146f1c33c FUN_146f1c33c body=132 status=ok
// SIG undefined FUN_146f1c33c(void)

void FUN_146f1c33c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1c3c2 FUN_146f1c3c2 body=89 status=ok
// SIG undefined FUN_146f1c3c2(void)

void FUN_146f1c3c2(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_146f1ab35(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f1c41c FUN_146f1c41c body=62 status=ok
// SIG undefined FUN_146f1c41c(void)

void FUN_146f1c41c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1c45a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146f1c45a FUN_146f1c45a body=93 status=ok
// SIG undefined FUN_146f1c45a(void)

ulonglong FUN_146f1c45a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146f1c4b8 FUN_146f1c4b8 body=73 status=ok
// SIG undefined FUN_146f1c4b8(void)

void FUN_146f1c4b8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1c502(*(undefined4 *)(param_1 + 0x408),*(undefined4 *)(param_1 + 0x40c));
  if (iVar1 == *(int *)(param_1 + 0x40c)) {
    return;
  }
  *(int *)(param_1 + 0x40c) = iVar1;
  FUN_14063e888(param_1,*(undefined4 *)(param_1 + 0x408),iVar1,4);
  return;
}



// FUNCTION 146f1c502 FUN_146f1c502 body=111 status=ok
// SIG undefined FUN_146f1c502(void)

ulonglong FUN_146f1c502(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x100;
  if (0x100 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f1c572 FUN_146f1c572 body=119 status=ok
// SIG undefined FUN_146f1c572(void)

void FUN_146f1c572(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_146f1c5ea(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f1c5ea FUN_146f1c5ea body=141 status=ok
// SIG undefined FUN_146f1c5ea(void)

void FUN_146f1c5ea(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 146f1c677 FUN_146f1c677 body=51 status=ok
// SIG undefined FUN_146f1c677(void)

void FUN_146f1c677(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + lVar2 * 8);
      *(longlong *)(param_1 + lVar2 * 8) = lVar1;
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xb8) & 8) != 0)) {
        LOCK();
        *(int *)(lVar1 + 0xbc) = *(int *)(lVar1 + 0xbc) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != (int)lVar2);
  }
  return;
}



// FUNCTION 146f1c6aa FUN_146f1c6aa body=132 status=ok
// SIG undefined FUN_146f1c6aa(void)

void FUN_146f1c6aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1c730 FUN_146f1c730 body=147 status=ok
// SIG undefined FUN_146f1c730(void)

void FUN_146f1c730(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1c7c4 FUN_146f1c7c4 body=62 status=ok
// SIG undefined FUN_146f1c7c4(void)

void FUN_146f1c7c4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1c802(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146f1c802 FUN_146f1c802 body=112 status=ok
// SIG undefined FUN_146f1c802(void)

ulonglong FUN_146f1c802(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f1c83c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_146f1c83c:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f1c872 FUN_146f1c872 body=136 status=ok
// SIG undefined FUN_146f1c872(void)

void FUN_146f1c872(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x248);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x24c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x48,0);
      iVar4 = (int)(uVar3 / 0x48);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x24c) = iVar5;
    FUN_146f1c8fc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f1c8fc FUN_146f1c8fc body=149 status=ok
// SIG undefined FUN_146f1c8fc(void)

void FUN_146f1c8fc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x240);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x240,0,param_3,0x48);
    memmove(*(void **)((longlong)param_1 + 0x240),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x240,param_2,param_3,0x48);
  return;
}



// FUNCTION 146f1c992 FUN_146f1c992 body=100 status=ok
// SIG undefined FUN_146f1c992(void)

undefined8 FUN_146f1c992(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x48,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  iVar4 = (int)(uVar2 / 0x48);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 == *(int *)(param_1 + 0x24c)) {
    return SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  }
  *(int *)(param_1 + 0x24c) = iVar5;
  uVar3 = FUN_146f1c8fc(param_1,*(undefined4 *)(param_1 + 0x248));
  return uVar3;
}



// FUNCTION 146f1c9f6 FUN_146f1c9f6 body=115 status=ok
// SIG undefined FUN_146f1c9f6(void)

void FUN_146f1c9f6(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x48,0);
      iVar2 = (int)(uVar1 / 0x48);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_146f1c8fc(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x24c) = param_3;
  return;
}



// FUNCTION 146f1ca6a FUN_146f1ca6a body=137 status=ok
// SIG undefined FUN_146f1ca6a(void)

void FUN_146f1ca6a(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x30) == uVar2) {
          FUN_146f1caf4();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x30 + *param_1 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f1caf4 FUN_146f1caf4 body=95 status=ok
// SIG undefined FUN_146f1caf4(void)

void FUN_146f1caf4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_146f1cb54();
  return;
}



// FUNCTION 146f1cb54 FUN_146f1cb54 body=77 status=ok
// SIG undefined FUN_146f1cb54(void)

void FUN_146f1cb54(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x30;
  FUN_146f1ad47(*(undefined8 *)(lVar1 + 0x10 + lVar2),*(undefined4 *)(lVar1 + 0x18 + lVar2));
  if (*(longlong *)(lVar1 + 0x10 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_146f1cba2(param_1,param_2);
  return;
}



// FUNCTION 146f1cba2 FUN_146f1cba2 body=122 status=ok
// SIG undefined FUN_146f1cba2(void)

void FUN_146f1cba2(longlong *param_1,int param_2)

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



// FUNCTION 146f1cc1c FUN_146f1cc1c body=98 status=ok
// SIG undefined FUN_146f1cc1c(void)

void FUN_146f1cc1c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f1cc7e FUN_146f1cc7e body=324 status=ok
// SIG undefined FUN_146f1cc7e(void)

undefined4 * FUN_146f1cc7e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f1cdc4(param_1,local_48);
  FUN_146f1cf6a(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_146f1ceb2(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x2c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146f1d018(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1cdc4 FUN_146f1cdc4 body=238 status=ok
// SIG undefined FUN_146f1cdc4(void)

int * FUN_146f1cdc4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140044672(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 146f1ceb2 FUN_146f1ceb2 body=184 status=ok
// SIG undefined FUN_146f1ceb2(void)

undefined8 FUN_146f1ceb2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          FUN_146f1ad47(*(undefined8 *)(puVar1 + 4),puVar1[6]);
          if (*(longlong *)(puVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_146f1cba2(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f1cf6a FUN_146f1cf6a body=65 status=ok
// SIG undefined FUN_146f1cf6a(void)

ulonglong * FUN_146f1cf6a(ulonglong *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  FUN_146f1cfac(param_1 + 1,param_3);
  return param_1;
}



// FUNCTION 146f1cfac FUN_146f1cfac body=108 status=ok
// SIG undefined FUN_146f1cfac(void)

undefined8 * FUN_146f1cfac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_146f1cc1c(param_1 + 1,iVar1,0);
    FUN_146f1c677(param_1[1],uVar2,iVar1);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 146f1d018 FUN_146f1d018 body=478 status=ok
// SIG undefined FUN_146f1d018(void)

void FUN_146f1d018(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x30;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x2c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x28 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f1d1f8 FUN_146f1d1f8 body=320 status=ok
// SIG undefined FUN_146f1d1f8(void)

undefined4 * FUN_146f1d1f8(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f1cdc4(param_1,local_48);
  FUN_146f1d33a(param_3,local_40);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_146f1ceb2(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x2c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146f1d018(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1d33a FUN_146f1d33a body=71 status=ok
// SIG undefined FUN_146f1d33a(void)

ulonglong * FUN_146f1d33a(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)*param_1;
  *param_2 = uVar1;
  if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_146f1ad47(0,0);
  return param_2;
}



// FUNCTION 146f1d381 FUN_146f1d381 body=59 status=ok
// SIG undefined FUN_146f1d381(void)

void FUN_146f1d381(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + lVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 4;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 146f1d3bc FUN_146f1d3bc body=381 status=ok
// SIG undefined FUN_146f1d3bc(void)

void FUN_146f1d3bc(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (param_2 + (ulonglong)(param_2 == 0)) - 1;
  if (uVar4 == 0) {
    bVar3 = 0;
  }
  else {
    lVar5 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    bVar3 = (byte)lVar5 ^ 0x3f;
  }
  uVar4 = 1L << (-bVar3 & 0x3f);
  uVar8 = param_1[6];
  if ((uVar4 != (longlong)(int)uVar8) && (*param_1 - param_1[1] <= uVar4)) {
    uVar7 = (uint)uVar4;
    if ((int)uVar8 < 1) {
      param_1[2] = uVar7 - 1;
      param_1[6] = uVar8 + uVar7;
      if (param_1[7] - uVar8 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
    else {
      local_58 = 0;
      uStack_50 = 0;
      FUN_146f1d554(&local_58,uVar4 & 0xffffffff);
      uVar8 = *param_1 & param_1[2];
      uVar2 = param_1[2] & param_1[1];
      lVar5 = *(longlong *)(param_1 + 4);
      uVar6 = *param_1 - param_1[1];
      if (uVar2 < uVar8 || uVar6 == 0) {
        lVar5 = lVar5 + (ulonglong)uVar2 * 8;
        uVar8 = uVar6;
      }
      else {
        FUN_146f1adda(&local_58,lVar5 + (ulonglong)uVar2 * 8,param_1[6] - uVar2);
      }
      FUN_146f1adda(&local_58,lVar5,uVar8);
      iVar1 = (int)uStack_50;
      uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_50 + (uVar7 - uVar6));
      if ((uint)(uStack_50._4_4_ - iVar1) < uVar7 - uVar6) {
        FUN_146f1ae52(&local_58);
      }
      FUN_146f1d59a(param_1 + 4,&local_58);
      param_1[2] = uVar7 - 1;
      param_1[1] = 0;
      *param_1 = uVar6;
      FUN_146f1d381(local_58,uStack_50 & 0xffffffff);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1d554 FUN_146f1d554 body=68 status=ok
// SIG undefined FUN_146f1d554(void)

void FUN_146f1d554(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146f1d381(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146f1d5ea(param_1,param_2);
  return;
}



// FUNCTION 146f1d59a FUN_146f1d59a body=80 status=ok
// SIG undefined FUN_146f1d59a(void)

longlong * FUN_146f1d59a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146f1d381(*param_1,(int)param_1[1]);
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



// FUNCTION 146f1d5ea FUN_146f1d5ea body=96 status=ok
// SIG undefined FUN_146f1d5ea(void)

void FUN_146f1d5ea(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146f1d64a FUN_146f1d64a body=62 status=ok
// SIG undefined FUN_146f1d64a(void)

void FUN_146f1d64a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + lVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 4;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != lVar3);
  }
  return;
}



// FUNCTION 146f1d688 FUN_146f1d688 body=59 status=ok
// SIG undefined FUN_146f1d688(void)

void FUN_146f1d688(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + lVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 4;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 146f1d6c4 FUN_146f1d6c4 body=103 status=ok
// SIG undefined FUN_146f1d6c4(void)

undefined8 FUN_146f1d6c4(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          FUN_146f1d72c(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f1d72c FUN_146f1d72c body=123 status=ok
// SIG undefined FUN_146f1d72c(void)

void FUN_146f1d72c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x38 + lVar6 * 0x40);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x40 + 0x38);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x38);
  FUN_146f14ffe(*param_1 + lVar2 + 8);
  FUN_146f1d7a8(param_1,param_2);
  return;
}



// FUNCTION 146f1d7a8 FUN_146f1d7a8 body=114 status=ok
// SIG undefined FUN_146f1d7a8(void)

void FUN_146f1d7a8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 146f1d81a FUN_146f1d81a body=282 status=ok
// SIG undefined FUN_146f1d81a(void)

undefined4 * FUN_146f1d81a(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f1d936(param_1,local_48);
  FUN_146f1dac8(param_3,local_40);
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_146f1da1c(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0xf] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146f1dc0c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1d936 FUN_146f1d936 body=229 status=ok
// SIG undefined FUN_146f1d936(void)

int * FUN_146f1d936(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406cd6a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 146f1da1c FUN_146f1da1c body=172 status=ok
// SIG undefined FUN_146f1da1c(void)

undefined8 FUN_146f1da1c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          FUN_146f14ffe(piVar1 + 2);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146f1d7a8(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f1dac8 FUN_146f1dac8 body=125 status=ok
// SIG undefined FUN_146f1dac8(void)

undefined4 * FUN_146f1dac8(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  ulonglong local_18;
  
  uVar1 = DAT_14c75f440;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = DAT_14c75f440;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  FUN_146f1db46(param_2 + 4);
  param_2[0xc] = uVar1;
  FUN_146f14ffe(&local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1db46 FUN_146f1db46 body=99 status=ok
// SIG undefined FUN_146f1db46(void)

undefined8 * FUN_146f1db46(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_146f1dbaa(param_1 + 2,iVar1,0);
    FUN_146f1ae2b(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146f1dbaa FUN_146f1dbaa body=98 status=ok
// SIG undefined FUN_146f1dbaa(void)

void FUN_146f1dbaa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f1dc0c FUN_146f1dc0c body=422 status=ok
// SIG undefined FUN_146f1dc0c(void)

void FUN_146f1dc0c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f1ddb4 FUN_146f1ddb4 body=103 status=ok
// SIG undefined FUN_146f1ddb4(void)

undefined8 FUN_146f1ddb4(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == param_2) {
          FUN_146f1de1c(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f1de1c FUN_146f1de1c body=120 status=ok
// SIG undefined FUN_146f1de1c(void)

void FUN_146f1de1c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x30 + lVar6 * 0x38);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x30);
  FUN_146f15a4a(*param_1 + lVar2 + 8);
  FUN_146f1de94(param_1,param_2);
  return;
}



// FUNCTION 146f1de94 FUN_146f1de94 body=116 status=ok
// SIG undefined FUN_146f1de94(void)

void FUN_146f1de94(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146f1df08 FUN_146f1df08 body=355 status=ok
// SIG undefined FUN_146f1df08(void)

undefined4 * FUN_146f1df08(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  uint *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146f1e06c(param_1,local_78);
  uVar1 = DAT_14c75f440;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = DAT_14c75f440;
  uStack_44 = 0xffffffff;
  *local_70 = *(uint *)*param_3;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[8] = 0;
  local_70[9] = 0;
  *(ulonglong *)(local_70 + 10) = CONCAT44(0xffffffff,uVar1);
  FUN_146f15a4a(&local_68);
  local_70[0xc] = 0xffffffff;
  local_68 = CONCAT44(local_68._4_4_,local_78[0]);
  uVar4 = *local_70;
  cVar2 = FUN_146f1e14e(param_1,uVar4,local_70,&local_68);
  uVar1 = (undefined4)local_68;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_70[0xd] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_70[0xc] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = (undefined4)local_68;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146f1e1f2(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1e06c FUN_146f1e06c body=226 status=ok
// SIG undefined FUN_146f1e06c(void)

int * FUN_146f1e06c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 146f1e14e FUN_146f1e14e body=164 status=ok
// SIG undefined FUN_146f1e14e(void)

undefined8 FUN_146f1e14e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          FUN_146f15a4a(piVar1 + 2);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146f1de94(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f1e1f2 FUN_146f1e1f2 body=419 status=ok
// SIG undefined FUN_146f1e1f2(void)

void FUN_146f1e1f2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f1e396 FUN_146f1e396 body=130 status=ok
// SIG undefined FUN_146f1e396(void)

void FUN_146f1e396(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 * 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1e41a FUN_146f1e41a body=62 status=ok
// SIG undefined FUN_146f1e41a(void)

void FUN_146f1e41a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1e458(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,2);
  }
  return;
}



// FUNCTION 146f1e458 FUN_146f1e458 body=88 status=ok
// SIG undefined FUN_146f1e458(void)

ulonglong FUN_146f1e458(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e(param_1 * 2,2);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 146f1e4b0 FUN_146f1e4b0 body=19 status=ok
// SIG undefined FUN_146f1e4b0(void)

void FUN_146f1e4b0(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 146f1e4c4 FUN_146f1e4c4 body=132 status=ok
// SIG undefined FUN_146f1e4c4(void)

void FUN_146f1e4c4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1e54a FUN_146f1e54a body=89 status=ok
// SIG undefined FUN_146f1e54a(void)

void FUN_146f1e54a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_146f1e5e2(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f1e5a4 FUN_146f1e5a4 body=62 status=ok
// SIG undefined FUN_146f1e5a4(void)

void FUN_146f1e5a4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1e60e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146f1e5e2 FUN_146f1e5e2 body=43 status=ok
// SIG undefined FUN_146f1e5e2(void)

void FUN_146f1e5e2(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146f1e60e FUN_146f1e60e body=93 status=ok
// SIG undefined FUN_146f1e60e(void)

ulonglong FUN_146f1e60e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146f1e66c FUN_146f1e66c body=130 status=ok
// SIG undefined FUN_146f1e66c(void)

void FUN_146f1e66c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 * 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1e6f0 FUN_146f1e6f0 body=62 status=ok
// SIG undefined FUN_146f1e6f0(void)

void FUN_146f1e6f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1e72e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,2);
  }
  return;
}



// FUNCTION 146f1e72e FUN_146f1e72e body=88 status=ok
// SIG undefined FUN_146f1e72e(void)

ulonglong FUN_146f1e72e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e(param_1 * 2,2);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 146f1e786 FUN_146f1e786 body=48 status=ok
// SIG undefined FUN_146f1e786(void)

void FUN_146f1e786(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,2,2);
  }
  return;
}



// FUNCTION 146f1e7b6 FUN_146f1e7b6 body=85 status=ok
// SIG undefined FUN_146f1e7b6(void)

void FUN_146f1e7b6(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_146f1e80c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f1e80c FUN_146f1e80c body=95 status=ok
// SIG undefined FUN_146f1e80c(void)

void FUN_146f1e80c(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_146f1e86c();
  return;
}



// FUNCTION 146f1e86c FUN_146f1e86c body=82 status=ok
// SIG undefined FUN_146f1e86c(void)

void FUN_146f1e86c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_140202178(lVar1 + lVar2 + 8);
  FUN_146f1e8be(param_1,param_2);
  return;
}



// FUNCTION 146f1e8be FUN_146f1e8be body=122 status=ok
// SIG undefined FUN_146f1e8be(void)

void FUN_146f1e8be(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 146f1e938 FUN_146f1e938 body=188 status=ok
// SIG undefined FUN_146f1e938(void)

longlong FUN_146f1e938(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_146f1e9d7;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146f1e9f6(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_146f1e9d7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146f1e9f6 FUN_146f1e9f6 body=272 status=ok
// SIG undefined FUN_146f1e9f6(void)

undefined4 * FUN_146f1e9f6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f1eb08(param_1,local_48);
  FUN_146f1ecac(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_146f1ebf6(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146f1ed40(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1eb08 FUN_146f1eb08 body=238 status=ok
// SIG undefined FUN_146f1eb08(void)

int * FUN_146f1eb08(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 146f1ebf6 FUN_146f1ebf6 body=182 status=ok
// SIG undefined FUN_146f1ebf6(void)

undefined8 FUN_146f1ebf6(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140202178((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_146f1e8be(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f1ecac FUN_146f1ecac body=147 status=ok
// SIG undefined FUN_146f1ecac(void)

undefined4 * FUN_146f1ecac(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined4 *)*param_1;
  FUN_140202232(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140202178(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1ed40 FUN_146f1ed40 body=423 status=ok
// SIG undefined FUN_146f1ed40(void)

void FUN_146f1ed40(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f1eee8 FUN_146f1eee8 body=298 status=ok
// SIG undefined FUN_146f1eee8(void)

undefined4 * FUN_146f1eee8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ushort *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146efe50c(param_1,local_48);
  puVar2 = (ushort *)param_3[1];
  uVar1 = *(ushort *)*param_3;
  *local_40 = uVar1;
  local_40[1] = *puVar2;
  local_40[2] = 0xffff;
  local_40[3] = 0xffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar3 = FUN_146efe5f2(param_1,uVar1,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_40 + 4) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146efe710(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1f014 FUN_146f1f014 body=95 status=ok
// SIG undefined FUN_146f1f014(void)

void FUN_146f1f014(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146f1f074 FUN_146f1f074 body=132 status=ok
// SIG undefined FUN_146f1f074(void)

void FUN_146f1f074(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1f0fa FUN_146f1f0fa body=114 status=ok
// SIG undefined FUN_146f1f0fa(void)

void FUN_146f1f0fa(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,8);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_140043092(param_1,param_2,iVar5,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1f16e FUN_146f1f16e body=34 status=ok
// SIG undefined FUN_146f1f16e(void)

undefined8 FUN_146f1f16e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146f1f1ac FUN_146f1f1ac body=60 status=ok
// SIG undefined FUN_146f1f1ac(void)

void FUN_146f1f1ac(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e41aa0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f995f0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146f1f1e8 FUN_146f1f1e8 body=60 status=ok
// SIG undefined FUN_146f1f1e8(void)

void FUN_146f1f1e8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e41aa0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f995f0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146f1f224 FUN_146f1f224 body=100 status=ok
// SIG undefined FUN_146f1f224(void)

void FUN_146f1f224(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_149e41aa0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_149f995f0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f1f279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f1f296 FUN_146f1f296 body=21 status=ok
// SIG undefined FUN_146f1f296(void)

undefined8 FUN_146f1f296(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146f1f2ac FUN_146f1f2ac body=57 status=ok
// SIG undefined FUN_146f1f2ac(void)

void FUN_146f1f2ac(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
  FUN_146f11068();
  if (*param_1 != 0) {
    FUN_146f11920();
  }
  thunk_FUN_1400020a8(param_1,0x18);
  return;
}



// FUNCTION 146f1f2e5 FUN_146f1f2e5 body=80 status=ok
// SIG undefined FUN_146f1f2e5(void)

void FUN_146f1f2e5(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x1d8);
    do {
      *(undefined8 *)(puVar1 + -0x16) = 0;
      *(undefined8 *)(puVar1 + -0x14) = 0x2000000000;
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -7) = 0xffffffff00000080;
      puVar1[-5] = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x78;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f1f336 FUN_146f1f336 body=146 status=ok
// SIG undefined FUN_146f1f336(void)

void FUN_146f1f336(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x1e0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1e0)) {
      uVar5 = uVar4 / 0x1e0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1e0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f1f3ca FUN_146f1f3ca body=98 status=ok
// SIG undefined FUN_146f1f3ca(void)

void FUN_146f1f3ca(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x1e0 + *param_1);
  FUN_145c28a3b(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x1e0 + (longlong)_Dst),(longlong)iVar2 * 0x1e0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f1f42c FUN_146f1f42c body=62 status=ok
// SIG undefined FUN_146f1f42c(void)

void FUN_146f1f42c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1f46a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1e0,8);
  }
  return;
}



// FUNCTION 146f1f46a FUN_146f1f46a body=110 status=ok
// SIG undefined FUN_146f1f46a(void)

ulonglong FUN_146f1f46a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1e0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f1f4a3;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1e0,8);
      param_2 = param_2 / 0x1e0;
    }
  }
LAB_146f1f4a3:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f1f4d8 FUN_146f1f4d8 body=48 status=ok
// SIG undefined FUN_146f1f4d8(void)

void FUN_146f1f4d8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1e0,8);
  }
  return;
}



// FUNCTION 146f1f508 FUN_146f1f508 body=67 status=ok
// SIG undefined FUN_146f1f508(void)

void FUN_146f1f508(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145c28a9e(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146f1f694(param_1);
    return;
  }
  FUN_146f1f54c(param_1);
  FUN_145c28a9e(param_1,0);
  return;
}



// FUNCTION 146f1f54c FUN_146f1f54c body=326 status=ok
// SIG undefined FUN_146f1f54c(void)

void FUN_146f1f54c(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 146f1f694 FUN_146f1f694 body=448 status=ok
// SIG undefined FUN_146f1f694(void)

void FUN_146f1f694(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)
                 ((int)*(undefined8 *)(lVar3 + lVar7) * 0x17 +
                 (int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f1f856 FUN_146f1f856 body=81 status=ok
// SIG undefined FUN_146f1f856(void)

void FUN_146f1f856(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_146f1f8a8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f1f8a8 FUN_146f1f8a8 body=90 status=ok
// SIG undefined FUN_146f1f8a8(void)

void FUN_146f1f8a8(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_146f1f902();
  return;
}



// FUNCTION 146f1f902 FUN_146f1f902 body=114 status=ok
// SIG undefined FUN_146f1f902(void)

void FUN_146f1f902(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 146f1f974 FUN_146f1f974 body=115 status=ok
// SIG undefined FUN_146f1f974(void)

void FUN_146f1f974(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_146f1f9e8(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x18c) = param_3;
  return;
}



// FUNCTION 146f1f9e8 FUN_146f1f9e8 body=149 status=ok
// SIG undefined FUN_146f1f9e8(void)

void FUN_146f1f9e8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0xc);
  return;
}



// FUNCTION 146f1fa7e FUN_146f1fa7e body=94 status=ok
// SIG undefined FUN_146f1fa7e(void)

void FUN_146f1fa7e(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x18c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
    if (*(void **)((longlong)param_1 + 0x180) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x180),
              (longlong)*(int *)((longlong)param_1 + 0x188) * 0xc);
      FUN_1446efa72((longlong)param_1 + 0x180,0,0,0xc);
      return;
    }
  }
  return;
}



// FUNCTION 146f1fadc FUN_146f1fadc body=187 status=ok
// SIG undefined FUN_146f1fadc(void)

void FUN_146f1fadc(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    lVar4 = param_1;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x188);
  if (lVar5 != 0) {
    uVar6 = 0;
    do {
      if (((*(int *)(lVar4 + uVar6) == *param_2) && (*(int *)(lVar4 + 4 + uVar6) == param_2[1])) &&
         (*(int *)(lVar4 + 8 + uVar6) == param_2[2])) {
        if ((int)(uVar6 >> 2) * -0x55555555 != -1) {
          return;
        }
        break;
      }
      lVar1 = lVar4 + uVar6;
      uVar6 = uVar6 + 0xc;
    } while (lVar1 + 0xc != lVar4 + lVar5 * 0xc);
  }
  uVar3 = *(int *)(param_1 + 0x188) + 1;
  *(uint *)(param_1 + 0x188) = uVar3;
  if (*(uint *)(param_1 + 0x18c) < uVar3) {
    FUN_146f1fc5e(param_1);
    lVar2 = *(longlong *)(param_1 + 0x180);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + 8 + lVar5 * 0xc) = param_2[2];
  *(undefined8 *)(param_1 + lVar5 * 0xc) = *(undefined8 *)param_2;
  return;
}



// FUNCTION 146f1fb98 FUN_146f1fb98 body=67 status=ok
// SIG undefined FUN_146f1fb98(void)

void FUN_146f1fb98(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f1fbdc(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c));
  if (iVar1 == *(int *)(param_1 + 0x18c)) {
    return;
  }
  *(int *)(param_1 + 0x18c) = iVar1;
  FUN_146f1f9e8(param_1,*(undefined4 *)(param_1 + 0x188),iVar1);
  return;
}



// FUNCTION 146f1fbdc FUN_146f1fbdc body=129 status=ok
// SIG undefined FUN_146f1fbdc(void)

ulonglong FUN_146f1fbdc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0xc) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xc,0);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 146f1fc5e FUN_146f1fc5e body=136 status=ok
// SIG undefined FUN_146f1fc5e(void)

void FUN_146f1fc5e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_146f1f9e8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f1fce8 FUN_146f1fce8 body=287 status=ok
// SIG undefined FUN_146f1fce8(void)

undefined4 * FUN_146f1fce8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f1fe08(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_146f1feee(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146f1ff6e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f1fe08 FUN_146f1fe08 body=229 status=ok
// SIG undefined FUN_146f1fe08(void)

int * FUN_146f1fe08(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_144869a3c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146f1feee FUN_146f1feee body=127 status=ok
// SIG undefined FUN_146f1feee(void)

undefined8 FUN_146f1feee(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146f1f902(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f1ff6e FUN_146f1ff6e body=422 status=ok
// SIG undefined FUN_146f1ff6e(void)

void FUN_146f1ff6e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f20116 FUN_146f20116 body=188 status=ok
// SIG undefined FUN_146f20116(void)

longlong FUN_146f20116(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_146f201b5;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146f201d4(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_146f201b5:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146f201d4 FUN_146f201d4 body=272 status=ok
// SIG undefined FUN_146f201d4(void)

undefined4 * FUN_146f201d4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f202e6(param_1,local_48);
  FUN_146f2048c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_146f203d4(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146f1f694(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f202e6 FUN_146f202e6 body=238 status=ok
// SIG undefined FUN_146f202e6(void)

int * FUN_146f202e6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 146f203d4 FUN_146f203d4 body=184 status=ok
// SIG undefined FUN_146f203d4(void)

undefined8 FUN_146f203d4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1401bc218((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_146f20522(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f2048c FUN_146f2048c body=149 status=ok
// SIG undefined FUN_146f2048c(void)

undefined8 * FUN_146f2048c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  FUN_146b7eae6(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f20522 FUN_146f20522 body=122 status=ok
// SIG undefined FUN_146f20522(void)

void FUN_146f20522(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 146f2059c FUN_146f2059c body=312 status=ok
// SIG undefined FUN_146f2059c(void)

void FUN_146f2059c(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f206d5 FUN_146f206d5 body=47 status=ok
// SIG undefined FUN_146f206d5(void)

void FUN_146f206d5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f20704 FUN_146f20704 body=229 status=ok
// SIG undefined FUN_146f20704(void)

int * FUN_146f20704(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146f207e9 FUN_146f207e9 body=39 status=ok
// SIG undefined FUN_146f207e9(void)

void FUN_146f207e9(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x14;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x200000000;
      param_1 = param_1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f20810 FUN_146f20810 body=147 status=ok
// SIG undefined FUN_146f20810(void)

void FUN_146f20810(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f208a4 FUN_146f208a4 body=98 status=ok
// SIG undefined FUN_146f208a4(void)

void FUN_146f208a4(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_146f206d5(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f20906 FUN_146f20906 body=62 status=ok
// SIG undefined FUN_146f20906(void)

void FUN_146f20906(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f20944(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146f20944 FUN_146f20944 body=112 status=ok
// SIG undefined FUN_146f20944(void)

ulonglong FUN_146f20944(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f2097e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_146f2097e:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f209b4 FUN_146f209b4 body=104 status=ok
// SIG undefined FUN_146f209b4(void)

void FUN_146f209b4(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x20 + 4) = uVar4;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146f20a1c FUN_146f20a1c body=95 status=ok
// SIG undefined FUN_146f20a1c(void)

void FUN_146f20a1c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146f20a7c FUN_146f20a7c body=132 status=ok
// SIG undefined FUN_146f20a7c(void)

void FUN_146f20a7c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f20b02 FUN_146f20b02 body=379 status=ok
// SIG undefined FUN_146f20b02(void)

void FUN_146f20b02(undefined8 *param_1)

{
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x55) = 1;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return;
}



// FUNCTION 146f20c7e FUN_146f20c7e body=377 status=ok
// SIG undefined FUN_146f20c7e(void)

void FUN_146f20c7e(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_145b0a5b8();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_146f20cc5;
    }
  }
  FUN_1401924dc(lVar4);
LAB_146f20cc5:
  if ((*param_1 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *param_1 = lVar4;
  lVar4 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *param_2;
    }
  }
  param_1[1] = lVar4;
  param_1[5] = param_2[3];
  param_1[2] = param_2[1];
  param_1[4] = param_2[2];
  *(int *)(param_1 + 0xe) = (int)param_2[4];
  FUN_146f20df8(param_1 + 6,*(int *)(param_2[3] + 0x30) + 1);
  FUN_146f14ba4(param_1 + 8,(int)param_1[7]);
  FUN_146f14ba4(param_1 + 0xb,(int)param_1[7]);
  FUN_146f20e72(param_1,(int)param_1[0xe]);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = uVar1;
  FUN_146f20f84(param_1 + 0x21,uVar1);
  FUN_146f14ba4(param_1 + 0x30,uVar1);
  FUN_146f14ba4(param_1 + 0x33,uVar1);
  FUN_146f14ba4(param_1 + 0x36,uVar1);
  FUN_146f14ba4(param_1 + 0x39,uVar1);
  FUN_146f14ba4(param_1 + 0x3c,uVar1);
  FUN_146f14ba4(param_1 + 0x3f,uVar1);
  uVar2 = (int)param_1[7] + 0x1f + (uint)((int)param_1[7] == 0) >> 5;
  *(uint *)(param_1 + 0x47) = uVar2;
  *(uint *)((longlong)param_1 + 0x23c) = uVar2 + 3;
  FUN_146f20ffc(param_1);
  *(uint *)(param_1 + 0x54) = (uint)*(byte *)(*param_1 + 0x28);
  return;
}



// FUNCTION 146f20df8 FUN_146f20df8 body=121 status=ok
// SIG undefined FUN_146f20df8(void)

void FUN_146f20df8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f2b478(param_1,iVar1);
    }
    FUN_146f2b44f((longlong)iVar1 * 0x160 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146f2b5bc(param_1,param_2,iVar1 - param_2);
    FUN_146f2b61e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f20e72 FUN_146f20e72 body=273 status=ok
// SIG undefined FUN_146f20e72(void)

void FUN_146f20e72(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 & 0xffffffff;
  iVar2 = (int)param_2;
  *(uint *)(param_1 + 0x74) = iVar2 + 0x1fU >> 5;
  FUN_146efc8cc(param_1 + 0x78);
  FUN_146efc8cc(param_1 + 0x90,uVar3);
  FUN_146efc8cc(param_1 + 0xa8,param_2 & 0xffffffff);
  FUN_146efc8cc(param_1 + 0xf0,uVar3);
  FUN_146efc8cc(param_1 + 0x210,param_2 & 0xffffffff);
  FUN_146efc8cc(param_1 + 0x270,param_2 & 0xffffffff);
  FUN_146efc8cc(param_1 + 0x288,param_2 & 0xffffffff);
  FUN_1402d2c96(param_1 + 0x228,uVar3,1);
  FUN_146f14bfc(param_1 + 0xc0,param_2 & 0xffffffff,1);
  FUN_1401211f6(param_1 + 0x170,param_2 & 0xffffffff,1);
  FUN_146f213de(param_1 + 0x240,param_2 & 0xffffffff);
  iVar1 = *(int *)(param_1 + 600);
  param_2 = param_2 & 0xffffffff;
  FUN_140393c76((longlong *)(param_1 + 0x250),param_2,1);
  if (iVar2 != 0) {
    memset((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x250)),
           (int)CONCAT71((int7)(param_2 >> 8),0xff),(ulonglong)(uint)(iVar2 - iVar1));
  }
  FUN_146efc8cc(param_1 + 0x2b0,*(undefined4 *)(param_1 + 0x70));
  FUN_146efc8cc(param_1 + 0x2c8,*(undefined4 *)(param_1 + 0x70));
  return;
}



// FUNCTION 146f20f84 FUN_146f20f84 body=118 status=ok
// SIG undefined FUN_146f20f84(void)

void FUN_146f20f84(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f2b7fc(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f2b882(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f20ffc FUN_146f20ffc body=912 status=ok
// SIG undefined FUN_146f20ffc(void)

void FUN_146f20ffc(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong *local_a8;
  longlong local_a0;
  undefined2 *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar5 = (longlong *)FUN_145b0a30c();
  lVar13 = plVar5[0x22];
  if (lVar13 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar13 = plVar5[0x22];
  }
  FUN_146f1898c(lVar13,&local_70);
  if ((longlong)local_68 != 0) {
    lVar13 = (longlong)local_68 * 0x18;
    plVar12 = (longlong *)(local_70 + 0x10);
    plVar5 = (longlong *)(param_1 + 0x260);
    do {
      FUN_1400021e4(plVar12 + -1,&local_98);
      puVar11 = &DAT_149dfb77a;
      if (iStack_90 != 0) {
        puVar11 = local_98;
      }
      uVar6 = FUN_144a797b2();
      lVar7 = FUN_140277b32(uVar6,0,puVar11,1);
      if (lVar7 == 0) {
LAB_146f210ea:
        lVar7 = 0;
      }
      else {
        lVar8 = FUN_144a797b2();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_146f210ea;
      }
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((((lVar7 != 0) && (lVar8 = FUN_145949da8(), lVar8 != 0)) &&
          (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) {
        if (*plVar12 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_1400021e4(plVar12,&local_98);
          puVar11 = &DAT_149dfb77a;
          if (iStack_90 != 0) {
            puVar11 = local_98;
          }
          uVar6 = FUN_144a797b2();
          lVar8 = FUN_140277b32(uVar6,0,puVar11,1);
          if (lVar8 == 0) {
LAB_146f21199:
            lVar8 = 0;
          }
          else {
            lVar9 = FUN_144a797b2();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_146f21199;
          }
          if (local_98 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (((lVar8 == 0) || (lVar9 = FUN_145949cc4(), lVar9 == 0)) ||
             ((*(int *)(lVar8 + 0x38) < *(int *)(lVar9 + 0x38) ||
              (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
               lVar9 + 0x30)))) goto LAB_146f21125;
        }
        iVar2 = *(int *)(param_1 + 0x268);
        lVar9 = (longlong)iVar2;
        *(uint *)(param_1 + 0x268) = iVar2 + 1U;
        local_a8 = plVar5;
        local_a0 = param_1;
        if (*(uint *)(param_1 + 0x26c) < iVar2 + 1U) {
          FUN_146f2c91c(plVar5,iVar2);
        }
        lVar4 = *local_a8;
        puVar1 = (undefined8 *)(lVar4 + lVar9 * 0x18);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar4 + 0x10 + lVar9 * 0x18) = 0;
        local_b8 = 0;
        FUN_140af9fb2(&local_78,0,lVar7,plVar12[-2]);
        uVar6 = FUN_1409ffe1d();
        lVar7 = FUN_146f22658(uVar6,lVar7,local_78);
        if (lVar7 != 0) {
          FUN_1401924dc(lVar7);
        }
        plVar5 = (longlong *)(lVar4 + lVar9 * 0x18);
        if ((*plVar5 != 0) && (DAT_14c872a72 == '\0')) {
          FUN_140113f48();
        }
        param_1 = local_a0;
        *plVar5 = lVar7;
        plVar5[1] = plVar12[-2];
        *(undefined4 *)(plVar5 + 2) = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        local_98 = (undefined2 *)0x0;
        iStack_90 = 0;
        uStack_8c = 0;
        puVar11 = *(undefined2 **)(local_a0 + 8);
        if (DAT_14c950c29 == '\x01') {
          if (puVar11 == (undefined2 *)0x0) {
            puVar11 = (undefined2 *)0x0;
          }
          else {
            FUN_1456cec3c();
            puVar11 = *(undefined2 **)(param_1 + 8);
          }
        }
        local_98 = puVar11;
        if (lVar8 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_1409ffe1d();
          uVar6 = FUN_146f2271d(uVar6,lVar8);
        }
        iStack_90 = (int)uVar6;
        uStack_8c = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_88 = **(undefined4 **)(param_1 + 0x10);
        uStack_84 = CONCAT44(*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x30),
                             *(undefined4 *)(param_1 + 0x70));
        FUN_146f1884a(*plVar5,&local_98);
        uVar3 = *(uint *)(param_1 + 0x2e0);
        *(uint *)(param_1 + 0x2e0) = uVar3 | 0x10;
        if (((char)uVar3 < '\0') || (uVar10 = 0, (*(byte *)(*plVar5 + 0x48) & 2) != 0)) {
          uVar10 = 0x80;
        }
        *(uint *)(param_1 + 0x2e0) = uVar3 & 0xffffff7f | 0x10 | uVar10;
        plVar5 = local_a8;
      }
LAB_146f21125:
      plVar12 = plVar12 + 3;
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f2138e FUN_146f2138e body=79 status=ok
// SIG undefined FUN_146f2138e(void)

void FUN_146f2138e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x268);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    lVar3 = 0;
    do {
      FUN_146f188cc(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  FUN_146f20e72(param_1,0);
  return;
}



// FUNCTION 146f213de FUN_146f213de body=118 status=ok
// SIG undefined FUN_146f213de(void)

void FUN_146f213de(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f2b91e(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f2b9a4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f21456 FUN_146f21456 body=100 status=ok
// SIG undefined FUN_146f21456(void)

void FUN_146f21456(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_98 [40];
  ulonglong uStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  int *piStack_58;
  uint uStack_50;
  int iStack_4c;
  ulonglong uStack_48;
  
  if ((int)param_1[0x54] == 1) {
    bVar4 = *(byte *)(*param_1 + 0x2a);
    if (0x7f < bVar4) {
      bVar4 = 0x80;
    }
    *(uint *)((longlong)param_1 + 0x2a4) =
         *(uint *)(param_1 + 3) % (uint)(byte)(bVar4 + (bVar4 == 0));
    bVar4 = *(byte *)(*param_1 + 0x2a);
    bVar5 = 0x80;
    if (bVar4 < 0x80) {
      bVar5 = bVar4;
    }
    *(uint *)(param_1 + 0x55) = (uint)(byte)(bVar5 + (bVar5 == 0));
    FUN_142a7d3d4();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)((longlong)param_1 + 0x2ac) != 0) {
    uStack_70 = (ulonglong)*(uint *)(param_1 + 9);
    iVar7 = 0;
    lVar2 = param_1[10];
    if (uStack_70 != 0) {
      lStack_60 = param_1[8];
      uStack_68 = (ulonglong)(*(uint *)(param_1 + 9) - 1);
      uVar3 = 0;
      do {
        uVar8 = 0xffffffff;
        if (uVar3 == uStack_68) {
          uVar8 = 0xffffffff >> (-(char)lVar2 & 0x1fU);
        }
        uVar8 = uVar8 & *(uint *)(lStack_60 + uVar3 * 4);
        iVar6 = iVar7;
        if (uVar8 != 0) {
          do {
            if ((uVar8 & 1) != 0) {
              iStack_4c = (int)param_1[0x58];
              uStack_50 = iStack_4c + 0x1fU >> 5;
              piStack_58 = (int *)param_1[0x56];
              if (iStack_4c == 0) {
                piStack_58 = &iStack_4c;
              }
              FUN_142a77ae6((longlong)iVar6 * 0x160 + param_1[6] + 0xc0,&piStack_58);
            }
            bVar1 = 1 < uVar8;
            uVar8 = uVar8 >> 1;
            iVar6 = iVar6 + 1;
          } while (bVar1);
        }
        uVar3 = uVar3 + 1;
        iVar7 = iVar7 + 0x20;
      } while (uVar3 != uStack_70);
    }
  }
  if ((uStack_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f214ba FUN_146f214ba body=162 status=ok
// SIG undefined FUN_146f214ba(void)

void FUN_146f214ba(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  int *local_28;
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_2 + 1);
  lVar2 = *param_3;
  lVar3 = *(longlong *)(param_1 + 0xa8);
  lVar4 = *(longlong *)(param_1 + 0x210);
  lVar5 = *(longlong *)(param_1 + 0x270);
  local_1c = *(int *)(*(longlong *)(param_1 + 0x20) + 0x68);
  local_28 = *(int **)(*(longlong *)(param_1 + 0x20) + 0x58);
  local_20 = local_1c + 0x1fU >> 5;
  if (local_1c == 0) {
    local_28 = &local_1c;
  }
  if ((ulonglong)uVar1 != 0) {
    lVar6 = *param_2;
    uVar7 = 0;
    do {
      *(uint *)(lVar6 + uVar7 * 4) =
           ~(*(uint *)(lVar4 + uVar7 * 4) | *(uint *)(lVar3 + uVar7 * 4) |
             *(uint *)(lVar5 + uVar7 * 4) | local_28[uVar7]) & *(uint *)(lVar2 + uVar7 * 4);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2155e FUN_146f2155e body=46 status=ok
// SIG undefined FUN_146f2155e(void)

ulonglong FUN_146f2155e(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x250) + (longlong)param_2);
  if (uVar2 != 0xff) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x260) + uVar2 * 0x18);
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x48)) &
           0xffffffffffffff01;
  }
  return 0;
}



// FUNCTION 146f2158c FUN_146f2158c body=64 status=ok
// SIG undefined FUN_146f2158c(void)

uint FUN_146f2158c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if ((longlong)*(int *)(param_1 + 0x268) != 0) {
    uVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x260) + 8 + uVar1) == param_2) {
        return (int)(uVar1 >> 3) * -0x55555555 | 0x80000000;
      }
      uVar1 = uVar1 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x268) * 0x18 != uVar1);
  }
  return 0;
}



// FUNCTION 146f215cc FUN_146f215cc body=246 status=ok
// SIG undefined FUN_146f215cc(void)

void FUN_146f215cc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14480809c(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_14480809c(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_14480809c(param_1 + 0x30,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_14480809c(param_1 + 0x48,0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_14480809c(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_14480809c(param_1 + 0x78,0);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_14480809c(param_1 + 0x90,0);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_14480809c(param_1 + 0xa8,0);
  }
  FUN_146f1a69e(param_1 + 0xc0);
  return;
}



// FUNCTION 146f216c2 FUN_146f216c2 body=151 status=ok
// SIG undefined FUN_146f216c2(void)

void FUN_146f216c2(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_146efc8cc(param_2,param_3);
  FUN_146efc8cc(param_2 + 0x18,param_3);
  FUN_146efc8cc(param_2 + 0x48,param_3);
  FUN_146efc8cc(param_2 + 0x30,param_3);
  FUN_146efc8cc(param_2 + 0x60,param_3);
  if ((*(byte *)(param_1 + 0x2e0) & 0x10) == 0) {
    return;
  }
  FUN_146efc8cc(param_2 + 0x78,param_3);
  FUN_146efc8cc(param_2 + 0x90,param_3);
  FUN_146efc8cc(param_2 + 0xa8,param_3);
  FUN_146f1a730(param_2 + 0xc0,param_3);
  return;
}



// FUNCTION 146f2175a FUN_146f2175a body=176 status=ok
// SIG undefined FUN_146f2175a(void)

void FUN_146f2175a(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auStack_38 [32];
  int *local_18;
  uint local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar4 = *(longlong *)(param_1 + 0x228);
  lVar6 = (longlong)(int)param_2;
  if (*(int *)(lVar4 + lVar6 * 4) != 0) {
    bVar5 = (byte)param_2 & 0x1f;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + (param_2 >> 5 & 0x7ffffff) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    uVar2 = *(uint *)(lVar4 + lVar6 * 4);
    uVar3 = *(uint *)(param_1 + 0xe8);
    local_18 = *(int **)(param_1 + 0xe0);
    local_10 = uVar3 & 0x7ffffff;
    local_c = uVar3 << 5;
    if ((uVar3 & 0x7ffffff) == 0) {
      local_18 = &local_c;
    }
    bVar5 = (byte)uVar2 & 0x1f;
    local_18[uVar2 >> 5] = local_18[uVar2 >> 5] & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    *(undefined4 *)(lVar4 + lVar6 * 4) = 0;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2180c FUN_146f2180c body=118 status=ok
// SIG undefined FUN_146f2180c(void)

undefined2 FUN_146f2180c(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x168) +
                (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x270) +
             (longlong)((int)param_2 / 100) * 8);
    lVar3 = (longlong)((int)param_2 % 100) * 0x38;
    uVar2 = *(uint *)(lVar1 + 0x28 + lVar3);
    if ((uVar2 != 0) && ((*(byte *)(lVar1 + lVar3 + 0x32) & 4) != 0)) goto LAB_146f21874;
  }
  uVar2 = param_2;
LAB_146f21874:
  return *(undefined2 *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar2 * 2);
}



// FUNCTION 146f21882 FUN_146f21882 body=172 status=ok
// SIG undefined FUN_146f21882(void)

longlong FUN_146f21882(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0x1000000000;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = param_2;
  iVar1 = *(int *)(param_3 + 8);
  uVar4 = 0;
  FUN_146f2a278(0,iVar1,0);
  FUN_14017c08a((longlong *)(param_1 + 0x110),iVar1 << 9,1);
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x108);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      *(ulonglong *)(lVar2 + lVar3) = uVar4 * 4 + *(longlong *)(param_1 + 0x110);
      uVar4 = (ulonglong)((int)uVar4 + 0x200);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  return param_1;
}



// FUNCTION 146f2192e FUN_146f2192e body=266 status=ok
// SIG undefined FUN_146f2192e(void)

void FUN_146f2192e(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146f21a3a(param_2,param_3,param_4,param_1 + 0x250);
  local_58 = *(undefined8 *)(param_1 + 0x240);
  local_50 = *(undefined4 *)(param_1 + 0x248);
  lVar7 = *(longlong *)(param_2 + 0x100);
  if (*(longlong *)(param_2 + 0x100) == 0) {
    lVar7 = param_2;
  }
  iVar1 = *(int *)(param_2 + 0x108);
  if ((longlong)iVar1 != 0) {
    lVar5 = lVar7 << 0x1c;
    lVar6 = 0;
    do {
      iVar2 = *(int *)(lVar7 + 8 + lVar6);
      if (iVar2 != 0) {
        local_68 = *(undefined8 *)(lVar7 + lVar6);
        lVar4 = *(longlong *)(param_2 + 0x100);
        if (*(longlong *)(param_2 + 0x100) == 0) {
          lVar4 = param_2;
        }
        plVar3 = *(longlong **)
                  (*(longlong *)(param_1 + 0x260) + (lVar5 + lVar4 * -0x10000000 >> 0x20) * 0x18);
        local_60 = iVar2;
        (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_68);
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + 0x100000000;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f21a3a FUN_146f21a3a body=372 status=ok
// SIG undefined FUN_146f21a3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f21a3a(longlong param_1,longlong param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar4 = _DAT_149931e80;
  lVar7 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar7 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    uVar8 = (longlong)*(int *)(param_1 + 0x108) + 0xfffffffffffffff;
    uVar9 = uVar8 & 0xfffffffffffffff;
    auVar12._8_4_ = (int)uVar9;
    auVar12._0_8_ = uVar9;
    auVar12._12_4_ = (int)(uVar9 >> 0x20);
    puVar5 = (undefined4 *)(lVar7 + 0x38);
    uVar10 = 0;
    auVar13 = pmovsxbq(in_XMM1,0x302);
    auVar14 = pmovsxbq(in_XMM2,0x100);
    auVar12 = auVar12 | _DAT_149931e80;
    do {
      lVar7 = auVar12._0_8_;
      lVar6 = auVar12._8_8_;
      if ((bool)(~(lVar7 < (longlong)(uVar10 ^ auVar4._0_8_)) & 1)) {
        puVar5[-0xc] = 0;
      }
      auVar15._8_4_ = (int)uVar10;
      auVar15._0_8_ = uVar10;
      auVar15._12_4_ = (int)(uVar10 >> 0x20);
      if ((longlong)((auVar15._8_8_ | auVar14._8_8_) ^ auVar4._8_8_) <= lVar6) {
        puVar5[-8] = 0;
      }
      auVar15 = (auVar15 | auVar13) ^ auVar4;
      if (auVar15._0_8_ <= lVar7) {
        puVar5[-4] = 0;
      }
      if (auVar15._8_8_ <= lVar6) {
        *puVar5 = 0;
      }
      uVar10 = uVar10 + 4;
      puVar5 = puVar5 + 0x10;
    } while ((uVar9 - ((uint)uVar8 & 3)) + 4 != uVar10);
  }
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      bVar2 = *(byte *)(*param_4 + (longlong)*(int *)(param_2 + lVar7));
      if (bVar2 != 0xff) {
        lVar6 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar6 = param_1;
        }
        lVar11 = (ulonglong)bVar2 * 0x10;
        lVar3 = *(longlong *)(lVar6 + lVar11);
        if (lVar3 != 0) {
          lVar6 = lVar6 + lVar11;
          *(int *)(lVar3 + (ulonglong)*(uint *)(lVar6 + 8) * 4) = *(int *)(param_2 + lVar7);
          piVar1 = (int *)(lVar6 + 8);
          *piVar1 = *piVar1 + 1;
        }
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)param_3 * 4 != lVar7);
  }
  return;
}



// FUNCTION 146f21bae FUN_146f21bae body=398 status=ok
// SIG undefined FUN_146f21bae(void)

uint FUN_146f21bae(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_78 [40];
  uint *local_50;
  uint local_48;
  uint local_44;
  uint *local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 0xe8);
  uVar5 = uVar2 << 5;
  puVar3 = *(uint **)(param_1 + 0xe0);
  local_40 = puVar3;
  uVar9 = uVar2 & 0x7ffffff;
  local_38 = uVar9;
  local_34 = uVar5;
  if ((uVar2 & 0x7ffffff) == 0) {
    local_40 = &local_34;
  }
  if (uVar9 == 0) {
LAB_146f21c33:
    *(uint *)(param_1 + 0xe8) = uVar2 + 1;
    if (*(uint *)(param_1 + 0xec) == uVar2) {
      FUN_1447808da((undefined8 *)(param_1 + 0xe0));
      puVar3 = *(uint **)(param_1 + 0xe0);
    }
    puVar3[(int)uVar2] = 0;
    uVar8 = *(uint *)(param_1 + 0xe8);
    local_50 = *(uint **)(param_1 + 0xe0);
    local_48 = uVar8 & 0x7ffffff;
    local_44 = uVar8 << 5;
    if ((uVar8 & 0x7ffffff) == 0) {
      local_50 = &local_44;
    }
    *(byte *)(local_50 + uVar9) = (byte)local_50[uVar9] | 1;
    if ((uVar2 & 0x7ffffff) == 0) {
      *local_50 = *local_50 | 2;
      uVar5 = 1;
    }
    uVar2 = *(int *)(param_1 + 0x23c) * 0x20;
    iVar1 = *(int *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xd8) = iVar1 + uVar2;
    uVar8 = uVar5;
    if ((uint)(*(int *)(param_1 + 0xdc) - iVar1) < uVar2) {
      FUN_1447808da(param_1 + 0xd0);
    }
LAB_146f21ce0:
    if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar8;
  }
  lVar6 = 0;
  puVar7 = local_40;
LAB_146f21c16:
  if (*puVar7 == 0xffffffff) goto code_r0x000146f21c23;
  uVar8 = *puVar7 ^ 0xffffffff;
  if (uVar8 == 0) {
    uVar4 = 0x20;
  }
  else {
    uVar4 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  uVar8 = (uint)((ulonglong)uVar4 - lVar6);
  if (uVar8 < uVar5) {
    local_40[(ulonglong)uVar4 - lVar6 >> 5 & 0x7ffffff] =
         local_40[(ulonglong)uVar4 - lVar6 >> 5 & 0x7ffffff] | 1 << ((byte)uVar4 & 0x1f);
    goto LAB_146f21ce0;
  }
  goto LAB_146f21c33;
code_r0x000146f21c23:
  lVar6 = lVar6 + -0x20;
  puVar7 = puVar7 + 1;
  if ((ulonglong)(uVar2 << 5) + lVar6 == 0) goto LAB_146f21c33;
  goto LAB_146f21c16;
}



// FUNCTION 146f21d3e FUN_146f21d3e body=157 status=ok
// SIG undefined FUN_146f21d3e(void)

void FUN_146f21d3e(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_34;
  local_34 = param_2;
  FUN_146f2bd10(param_1 + 0x120);
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar3 = FUN_146f21bae(param_1);
  *(int *)(lVar2 + 0x58 + (longlong)local_24 * 0x68) = iVar3;
  uVar1 = *(uint *)(param_1 + 0x23c);
  if ((ulonglong)uVar1 != 0) {
    memset((void *)((ulonglong)(iVar3 * uVar1) * 4 + *(longlong *)(param_1 + 0xd0)),0,
           (ulonglong)uVar1 << 2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f21ddc FUN_146f21ddc body=250 status=ok
// SIG undefined FUN_146f21ddc(void)

void FUN_146f21ddc(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_38 [32];
  int *local_18;
  uint local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    lVar4 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x160);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x168) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      do {
        lVar1 = lVar4 + (longlong)iVar5 * 0x68;
        if (*(uint *)(lVar4 + (longlong)iVar5 * 0x68) == param_2) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
            uVar2 = *(uint *)(param_1 + 0xe8);
            local_18 = *(int **)(param_1 + 0xe0);
            local_10 = uVar2 & 0x7ffffff;
            local_c = uVar2 << 5;
            if ((uVar2 & 0x7ffffff) == 0) {
              local_18 = &local_c;
            }
            bVar3 = (byte)*(uint *)(lVar1 + 0x58) & 0x1f;
            local_18[*(uint *)(lVar1 + 0x58) >> 5] =
                 local_18[*(uint *)(lVar1 + 0x58) >> 5] &
                 (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
            FUN_146f2c828((longlong *)(param_1 + 0x120));
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x60);
      } while (iVar5 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f21ed8 FUN_146f21ed8 body=108 status=ok
// SIG undefined FUN_146f21ed8(void)

longlong FUN_146f21ed8(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    lVar2 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x160);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x168) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x120) + (longlong)iVar3 * 0x68;
        if (*(uint *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar3 * 0x68) == param_2)
        goto LAB_146f21ee8;
        iVar3 = *(int *)(lVar2 + 0x60);
      } while (iVar3 != -1);
    }
  }
  lVar2 = 0;
LAB_146f21ee8:
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146f21f44 FUN_146f21f44 body=137 status=ok
// SIG undefined FUN_146f21f44(void)

undefined8 FUN_146f21f44(longlong param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  
  if ((((*(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(param_3 >> 5) * 4) >>
         (param_3 & 0x1f) & 1) != 0) &&
      ((*(uint *)(*(longlong *)(param_1 + 0x1e0) + (ulonglong)((param_2 & 0xffffff) >> 5) * 4) >>
        (param_2 & 0x1f) & 1) != 0)) &&
     (lVar2 = FUN_146f21fce(param_1,param_2 & 0xffffff), lVar2 != 0)) {
    uVar1 = *(uint *)((ulonglong)(uint)(*(int *)(param_1 + 0x23c) * *(int *)(lVar2 + 0x50)) * 4 +
                      *(longlong *)(param_1 + 0xd0) + (ulonglong)(param_3 >> 5) * 4);
    *param_4 = (uint)((uVar1 >> (param_3 & 0x1f) & 1) != 0);
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 146f21fce FUN_146f21fce body=108 status=ok
// SIG undefined FUN_146f21fce(void)

longlong FUN_146f21fce(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    lVar2 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x160);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x168) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x120) + (longlong)iVar3 * 0x68;
        if (*(uint *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar3 * 0x68) == param_2)
        goto LAB_146f21fde;
        iVar3 = *(int *)(lVar2 + 0x60);
      } while (iVar3 != -1);
    }
  }
  lVar2 = 0;
LAB_146f21fde:
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146f2203a FUN_146f2203a body=577 status=ok
// SIG undefined FUN_146f2203a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146f2203a(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  longlong lVar15;
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar11 = *(uint *)(param_1 + 0x23c);
  uVar7 = (ulonglong)
          (*(int *)(*(longlong *)(param_1 + 0x108) + (ulonglong)((uint)param_2 & 0xffffff) * 4) *
          uVar11);
  lVar1 = *(longlong *)(param_1 + 0xd0);
  uVar4 = *(uint *)(param_1 + 0x50);
  if (param_3 == 0) {
    uVar5 = uVar4 + 0x1f;
    if (uVar5 < 0x20) {
      return (ulonglong)uVar5;
    }
    puVar8 = (uint *)(lVar1 + uVar7 * 4);
    uVar10 = 0xfffffffe;
    lVar9 = 0;
    while (uVar10 = uVar10 & *puVar8, uVar10 == 0) {
      lVar9 = lVar9 + -0x20;
      puVar8 = puVar8 + 1;
      uVar10 = 0xffffffff;
      if ((ulonglong)(uVar5 & 0xffffffe0) + lVar9 == 0) {
        return (ulonglong)(uVar5 & 0xffffffe0);
      }
    }
    iVar12 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
      }
    }
    uVar5 = iVar12 - (int)lVar9;
    if (uVar4 <= uVar5) {
      return (ulonglong)uVar5;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x48);
  if ((ulonglong)uVar5 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x58);
    lVar15 = *(longlong *)(param_1 + 0x40);
    uVar13 = 0;
    iVar12 = 0;
    do {
      uVar11 = 0xffffffff;
      if (uVar13 == uVar5 - 1) {
        uVar11 = 0xffffffff >> (-(char)uVar4 & 0x1fU);
      }
      uVar11 = uVar11 & *(uint *)(lVar15 + uVar13 * 4) & ~*(uint *)(lVar9 + uVar13 * 4);
      iVar6 = iVar12;
      if (uVar11 != 0) {
        do {
          if ((uVar11 & 1) != 0) {
            FUN_142a7cdda(param_1,param_2,iVar6,param_3);
          }
          bVar2 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
          iVar6 = iVar6 + 1;
        } while (bVar2);
      }
      uVar13 = uVar13 + 1;
      iVar12 = iVar12 + 0x20;
    } while (uVar13 != uVar5);
    uVar11 = *(uint *)(param_1 + 0x23c);
  }
  auVar3 = _DAT_149931e80;
  uVar13 = 0;
  if (uVar11 != 0) {
    uVar4 = -(uint)(param_3 == 1);
    uVar13 = (ulonglong)uVar4;
    lVar9 = (ulonglong)uVar11 - 1;
    auVar14._8_4_ = (int)lVar9;
    auVar14._0_8_ = lVar9;
    auVar14._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    lVar1 = lVar1 + uVar7 * 4;
    auVar16 = pmovsxbq(in_XMM1,0x302);
    auVar17 = pmovsxbq(in_XMM2,0x100);
    uVar7 = 0;
    auVar14 = auVar14 ^ _DAT_149931e80;
    auVar18 = pmovsxbq(in_XMM5,0x404);
    do {
      auVar19 = auVar17 ^ auVar3;
      lVar9 = auVar14._0_8_;
      lVar15 = auVar14._8_8_;
      if ((bool)(~(lVar9 < auVar19._0_8_) & 1)) {
        *(uint *)(lVar1 + uVar7) = uVar4;
      }
      if (auVar19._8_8_ <= lVar15) {
        *(uint *)(lVar1 + 4 + uVar7) = uVar4;
      }
      auVar19 = auVar16 ^ auVar3;
      if (auVar19._0_8_ <= lVar9) {
        *(uint *)(lVar1 + 8 + uVar7) = uVar4;
      }
      if (auVar19._8_8_ <= lVar15) {
        *(uint *)(lVar1 + 0xc + uVar7) = uVar4;
      }
      lVar9 = auVar17._8_8_;
      auVar17._0_8_ = auVar17._0_8_ + auVar18._0_8_;
      auVar17._8_8_ = lVar9 + auVar18._8_8_;
      lVar9 = auVar16._8_8_;
      auVar16._0_8_ = auVar16._0_8_ + auVar18._0_8_;
      auVar16._8_8_ = lVar9 + auVar18._8_8_;
      uVar7 = uVar7 + 0x10;
    } while (((ulonglong)uVar11 * 4 + 0xc & 0xfffffffffffffff0) != uVar7);
  }
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
  return uVar13;
}



// FUNCTION 146f2227c FUN_146f2227c body=160 status=ok
// SIG undefined FUN_146f2227c(void)

undefined8 FUN_146f2227c(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x48))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x40) + (ulonglong)param_2 * 0x18;
    lVar4 = *(longlong *)(lVar1 + 8);
    if (*(longlong *)(lVar1 + 8) == 0) {
      lVar4 = lVar1;
    }
    if ((longlong)*(int *)(lVar1 + 0x10) != 0) {
      lVar3 = 0;
      do {
        uVar2 = *(uint *)(lVar4 + lVar3);
        if (((*(uint *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar2 >> 5) * 4) >>
              (uVar2 & 0x1f) & 1) != 0) &&
           ((*(uint *)((ulonglong)
                       (uint)(*(int *)(param_1 + 0x23c) *
                             *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)(int)uVar2 * 4)) *
                       4 + *(longlong *)(param_1 + 0xd0) + (ulonglong)(param_3 >> 5) * 4) &
            1 << ((byte)param_3 & 0x1f)) == 0)) {
          return 1;
        }
        lVar3 = lVar3 + 4;
      } while ((longlong)*(int *)(lVar1 + 0x10) * 4 != lVar3);
    }
  }
  return 0;
}



// FUNCTION 146f2231c FUN_146f2231c body=160 status=ok
// SIG undefined FUN_146f2231c(void)

undefined8 FUN_146f2231c(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x48))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x40) + (ulonglong)param_2 * 0x18;
    lVar4 = *(longlong *)(lVar1 + 8);
    if (*(longlong *)(lVar1 + 8) == 0) {
      lVar4 = lVar1;
    }
    if ((longlong)*(int *)(lVar1 + 0x10) != 0) {
      lVar3 = 0;
      do {
        uVar2 = *(uint *)(lVar4 + lVar3);
        if (((*(uint *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar2 >> 5) * 4) >>
              (uVar2 & 0x1f) & 1) != 0) &&
           ((*(uint *)((ulonglong)
                       (uint)(*(int *)(param_1 + 0x23c) *
                             *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)(int)uVar2 * 4)) *
                       4 + *(longlong *)(param_1 + 0xd0) + (ulonglong)(param_3 >> 5) * 4) &
            1 << ((byte)param_3 & 0x1f)) != 0)) {
          return 1;
        }
        lVar3 = lVar3 + 4;
      } while ((longlong)*(int *)(lVar1 + 0x10) * 4 != lVar3);
    }
  }
  return 0;
}



// FUNCTION 146f223bc FUN_146f223bc body=313 status=ok
// SIG undefined FUN_146f223bc(void)

void FUN_146f223bc(longlong param_1,ulonglong param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = (longlong *)((longlong)param_3 * 0x160 + *(longlong *)(param_1 + 0x30));
  cVar3 = FUN_146f2227c();
  if (cVar3 == '\0') {
    bVar2 = (byte)param_2 & 0x1f;
    uVar6 = param_2 >> 5 & 0x7ffffff;
    puVar1 = (uint *)(plVar8[3] + uVar6 * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    uVar4 = 1 << ((byte)param_2 & 0x1f);
    if ((*(uint *)(*plVar8 + uVar6 * 4) >> ((uint)param_2 & 0x1f) & 1) == 0) {
      uVar4 = 0;
    }
    *(uint *)(plVar8[6] + uVar6 * 4) =
         *(uint *)(plVar8[6] + uVar6 * 4) & ~(1 << ((uint)param_2 & 0x1f)) | uVar4;
    FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300,&local_58,param_2 & 0xffffffff);
    if ((longlong)local_50 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(uint *)(local_58 + lVar7);
        cVar3 = FUN_146f2227c(param_1,uVar4,param_3);
        if (cVar3 == '\0') {
          bVar2 = (byte)uVar4 & 0x1f;
          uVar6 = (ulonglong)(uVar4 >> 5);
          puVar1 = (uint *)(plVar8[3] + uVar6 * 4);
          *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
          uVar5 = 1 << ((byte)uVar4 & 0x1f);
          if ((*(uint *)(*plVar8 + uVar6 * 4) >> (uVar4 & 0x1f) & 1) == 0) {
            uVar5 = 0;
          }
          *(uint *)(plVar8[6] + uVar6 * 4) =
               *(uint *)(plVar8[6] + uVar6 * 4) & ~(1 << (uVar4 & 0x1f)) | uVar5;
        }
        lVar7 = lVar7 + 4;
      } while ((longlong)local_50 * 4 != lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f224f6 FUN_146f224f6 body=273 status=ok
// SIG undefined FUN_146f224f6(void)

void FUN_146f224f6(longlong param_1,uint param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = 1 << ((byte)param_2 & 0x1f);
  uVar7 = (ulonglong)(param_2 >> 5);
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x168) + uVar7 * 4) >>
       (param_2 & 0x1f) & 1) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    cVar4 = FUN_146f2231c(param_1,param_2);
    if (cVar4 == '\0') {
      if ((*(int *)(param_1 + 0x2a0) == 1) &&
         ((*(uint *)(*(longlong *)(param_1 + 0x270) + uVar7 * 4) & uVar5) != 0)) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x288) + uVar7 * 4);
        *puVar1 = *puVar1 | uVar5;
      }
      puVar1 = (uint *)(*(longlong *)(lVar2 + 0x48 + (longlong)param_3 * 0x160) + uVar7 * 4);
      *puVar1 = *puVar1 & ~uVar5;
      FUN_146f1b984(*(longlong *)(param_1 + 0x10) + 0x300,&local_48,param_2);
      if ((longlong)local_40 != 0) {
        lVar6 = 0;
        do {
          bVar3 = (byte)*(uint *)(local_48 + lVar6) & 0x1f;
          puVar1 = (uint *)(*(longlong *)(lVar2 + (longlong)param_3 * 0x160 + 0x48) +
                           (ulonglong)(*(uint *)(local_48 + lVar6) >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          lVar6 = lVar6 + 4;
        } while ((longlong)local_40 * 4 != lVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f22608 FUN_146f22608 body=80 status=ok
// SIG undefined FUN_146f22608(void)

undefined4 FUN_146f22608(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x50) + 0x1f;
  if (0x1f < uVar2) {
    uVar1 = 1;
    lVar4 = 0;
    do {
      if ((uVar1 | *param_2) != 0xffffffff) {
        uVar2 = (uVar1 | *param_2) ^ 0xffffffff;
        if (uVar2 == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
            }
          }
        }
        uVar2 = iVar3 - (int)lVar4;
        return CONCAT31((int3)(uVar2 >> 8),uVar2 < *(uint *)(param_1 + 0x50));
      }
      lVar4 = lVar4 + -0x20;
      param_2 = param_2 + 1;
      uVar1 = 0;
    } while ((ulonglong)(uVar2 & 0xffffffe0) + lVar4 != 0);
  }
  return 0;
}



// FUNCTION 146f22658 FUN_146f22658 body=196 status=ok
// SIG undefined FUN_146f22658(void)

undefined8 FUN_146f22658(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2271d FUN_146f2271d body=175 status=ok
// SIG undefined FUN_146f2271d(void)

undefined8 FUN_146f2271d(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f227ce FUN_146f227ce body=411 status=ok
// SIG undefined FUN_146f227ce(void)

undefined8 FUN_146f227ce(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_198 [40];
  longlong local_170;
  undefined8 local_168;
  undefined4 local_160;
  int local_158;
  undefined1 local_150 [288];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar3 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x250) + (longlong)(int)(uint)param_3);
  if (uVar3 == 0xff) {
    FUN_140056680(param_2,L"[NoDynamicFilter]");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x260) + uVar3 * 0x18);
  iVar2 = (int)plVar4[7];
  local_170 = plVar4[5];
  local_168 = CONCAT44(iVar2,iVar2 + 0x1fU >> 5);
  if (iVar2 == 0) {
    local_170 = (longlong)&local_168 + 4;
  }
  if ((*(uint *)(local_170 + (param_3 >> 5 & 0x7ffffff) * 4) >> ((uint)param_3 & 0x1f) & 1) == 0) {
    FUN_140056680(param_2,L"[WrongSettings]");
  }
  else {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x260) + uVar3 * 0x18);
    local_30 = 0;
    local_28 = 0x400000000;
    local_170 = plVar1[1];
    local_168 = *(undefined8 *)(param_1 + 0x240);
    local_160 = *(undefined4 *)(param_1 + 0x248);
    puVar5 = (undefined1 *)
             ((longlong)param_4 * 0x130 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10));
    local_158 = param_4;
    if (local_150 != puVar5) {
      puVar6 = *(undefined1 **)(puVar5 + 0x120);
      if (*(undefined1 **)(puVar5 + 0x120) == (undefined1 *)0x0) {
        puVar6 = puVar5;
      }
      FUN_146f2a024(local_150,puVar6,*(undefined4 *)(puVar5 + 0x128),4);
      plVar4 = (longlong *)*plVar1;
    }
    (**(code **)(*plVar4 + 0x2e0))(plVar4,param_2,&local_170,param_3 & 0xffffffff);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f2296a FUN_146f2296a body=101 status=ok
// SIG undefined FUN_146f2296a(void)

void FUN_146f2296a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x268) != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x260) + 8 + lVar2) == param_3) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x260) + lVar2);
        iVar1 = *(int *)(lVar2 + 0x38);
        if (iVar1 == 0) {
          return;
        }
        if (iVar1 + 0x1fU < 0x20 || (ulonglong)*(uint *)(param_2 + 1) == 0) {
          return;
        }
        memcpy((void *)*param_2,*(void **)(lVar2 + 0x28),(ulonglong)*(uint *)(param_2 + 1) << 2);
        return;
      }
      lVar2 = lVar2 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x268) * 0x18 != lVar2);
  }
  return;
}



// FUNCTION 146f229d0 FUN_146f229d0 body=101 status=ok
// SIG undefined FUN_146f229d0(void)

void FUN_146f229d0(longlong param_1,int param_2)

{
  undefined1 auStack_38 [32];
  int *local_18;
  uint local_10;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *(int *)(*(longlong *)(param_1 + 0x30) + 0x70 + (longlong)param_2 * 0x160);
  local_18 = *(int **)(*(longlong *)(param_1 + 0x30) + 0x60 + (longlong)param_2 * 0x160);
  local_10 = local_c + 0x1fU >> 5;
  if (local_c == 0) {
    local_18 = &local_c;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f22a36 FUN_146f22a36 body=38 status=ok
// SIG undefined FUN_146f22a36(void)

void FUN_146f22a36(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0xac0);
    uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0xac8);
  }
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return;
}



// FUNCTION 146f22a5c FUN_146f22a5c body=89 status=ok
// SIG undefined FUN_146f22a5c(void)

void FUN_146f22a5c(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x5c)) {
    lVar2 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
    }
    iVar1 = *(int *)(lVar2 + ((longlong)param_2 & (longlong)*(int *)(param_1 + 0x70) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar2 = param_1;
      }
      do {
        if (*(int *)(lVar2 + (longlong)iVar1 * 0xc) == param_2) {
          FUN_146f2cf32(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(lVar2 + (longlong)iVar1 * 0xc + 4);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f22ab6 FUN_146f22ab6 body=96 status=ok
// SIG undefined FUN_146f22ab6(void)

longlong FUN_146f22ab6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x90;
        if (*(uint *)(*param_1 + (longlong)iVar4 * 0x90) == param_2) goto LAB_146f22ac0;
        iVar4 = *(int *)(lVar3 + 0x88);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_146f22ac0:
  lVar1 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146f22b16 FUN_146f22b16 body=96 status=ok
// SIG undefined FUN_146f22b16(void)

longlong FUN_146f22b16(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x90;
        if (*(uint *)(*param_1 + (longlong)iVar4 * 0x90) == param_2) goto LAB_146f22b20;
        iVar4 = *(int *)(lVar3 + 0x88);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_146f22b20:
  lVar1 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146f22b76 FUN_146f22b76 body=664 status=ok
// SIG undefined FUN_146f22b76(void)

void FUN_146f22b76(void)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14c9997b0 = DAT_14c75f468 == 1;
  if (((bool)DAT_14c9997b0) && (DAT_14c998208 == '\x01')) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_149f9a6d0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_149f9a660;
    local_28[3] = FUN_146f22e10;
    thunk_FUN_146f022b6(&local_28);
    FUN_1449db362(&local_28);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_149f9a7b0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_149f9a740;
    pcVar3 = FUN_146f22e4c;
  }
  else {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_149f9a6d0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_149f9a660;
    local_28[3] = FUN_146f22e88;
    thunk_FUN_146f022b6(&local_28);
    FUN_1449db362(&local_28);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    *local_28 = &PTR_LAB_149f9a7b0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_149f9a740;
    pcVar3 = FUN_146f22ed6;
  }
  local_20 = 2;
  local_28[3] = pcVar3;
  thunk_FUN_146f02340(&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f22e10 FUN_146f22e10 body=59 status=ok
// SIG undefined FUN_146f22e10(void)

void FUN_146f22e10(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_146efc76e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f22e4c FUN_146f22e4c body=59 status=ok
// SIG undefined FUN_146f22e4c(void)

void FUN_146f22e4c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_146efc76e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f22e88 FUN_146f22e88 body=77 status=ok
// SIG undefined FUN_146f22e88(void)

void FUN_146f22e88(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < DAT_14c75f468 || DAT_14c9997b0 != '\0') {
    local_10 = param_2;
    FUN_146efc76e();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f22ed6 FUN_146f22ed6 body=77 status=ok
// SIG undefined FUN_146f22ed6(void)

void FUN_146f22ed6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < DAT_14c75f468 || DAT_14c9997b0 != '\0') {
    local_10 = param_2;
    FUN_146efc76e();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f22f24 FUN_146f22f24 body=109 status=ok
// SIG undefined FUN_146f22f24(void)

void FUN_146f22f24(void)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  thunk_FUN_146f022b6(&local_38);
  FUN_1449db362(&local_38);
  local_38 = 0;
  uStack_30 = 0;
  thunk_FUN_146f02340(&local_38);
  FUN_1449db362(&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f22f92 FUN_146f22f92 body=16 status=ok
// SIG undefined FUN_146f22f92(void)

void FUN_146f22f92(longlong *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146f22f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,*param_2);
  return;
}



// FUNCTION 146f22fa2 FUN_146f22fa2 body=20 status=ok
// SIG undefined FUN_146f22fa2(void)

void FUN_146f22fa2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146f22fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,0xffffffffffffffff);
  return;
}



// FUNCTION 146f22fb6 FUN_146f22fb6 body=407 status=ok
// SIG undefined FUN_146f22fb6(void)

uint * FUN_146f22fb6(longlong param_1,uint *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_88 [36];
  uint local_64;
  longlong local_60;
  longlong *local_58;
  uint *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0x14);
        if (*plVar1 == param_3) {
          if ((uint *)(plVar1 + 1) != (uint *)0x0 && plVar1 != (longlong *)0x0) {
            *param_2 = *(uint *)(plVar1 + 1);
            goto LAB_146f2302e;
          }
          break;
        }
        iVar5 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar4 = 0;
  if ((ulonglong)uVar2 < 0x100000) {
    *(uint *)(param_1 + 0x10) = uVar2 + 1;
    local_64 = uVar2;
    if (*(uint *)(param_1 + 0x14) <= uVar2) {
      FUN_1459a0cf0((longlong *)(param_1 + 8),uVar2);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 4) = 0;
    if (uVar2 != 0) {
      iVar5 = *(int *)(param_1 + 0x80);
      *(uint *)(param_1 + 0x80) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x84) < iVar5 + 1U) {
        FUN_1446f84a2((longlong *)(param_1 + 0x78),iVar5);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 8) = param_3;
      local_58 = &local_60;
      local_50 = &local_64;
      FUN_146f2dbd8((longlong *)(param_1 + 0x28),local_44);
      uVar4 = local_64;
    }
  }
  *param_2 = uVar4;
LAB_146f2302e:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f2314e FUN_146f2314e body=16 status=ok
// SIG undefined FUN_146f2314e(void)

void FUN_146f2314e(longlong param_1,undefined4 *param_2,int param_3)

{
  *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)param_3 * 4);
  return;
}



// FUNCTION 146f2315e FUN_146f2315e body=152 status=ok
// SIG undefined FUN_146f2315e(void)

uint * FUN_146f2315e(longlong param_1,uint *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = **(longlong **)(param_1 + 0x18);
  lVar3 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x10;
  uVar1 = *(uint *)(lVar2 + 8 + lVar3);
  uVar5 = (ulonglong)uVar1;
  if (uVar5 < 0x100000) {
    uVar4 = (uint)((int)(*(longlong **)(param_1 + 0x18))[5] == 1) << 0x17 |
            (*(uint *)(param_1 + 0x20) & 7) << 0x14 | uVar1;
    *param_2 = uVar4;
    *(uint *)(lVar2 + 8 + lVar3) = uVar1 + 1;
    if (*(uint *)(lVar2 + 0xc + lVar3) <= uVar1) {
      FUN_14581e548((longlong *)(lVar2 + lVar3),uVar5);
    }
    *(int *)(*(longlong *)(lVar2 + lVar3) + uVar5 * 4) = param_3;
    *(uint *)(*(longlong *)(param_1 + 8) + (longlong)param_3 * 4) = uVar4;
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 146f231f6 FUN_146f231f6 body=166 status=ok
// SIG undefined FUN_146f231f6(void)

undefined4 * FUN_146f231f6(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_3 + 0xd8);
  local_38 = 0;
  uStack_30 = 0;
  FUN_142aa319d(lVar1);
  if (*(int *)(lVar1 + 0x14) == 0) {
    iVar2 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_28,iVar2,local_38,1);
    FUN_146f22fb6(param_1,param_2,local_28);
  }
  else {
    *param_2 = 0;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2329e FUN_146f2329e body=114 status=ok
// SIG undefined FUN_146f2329e(void)

undefined4 * FUN_146f2329e(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14031d286(param_3);
  if ((*(byte *)(param_3 + 0x29) & 2) == 0) {
    FUN_146f22fb6(param_1,param_2,local_28);
  }
  else {
    *param_2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f23312 FUN_146f23312 body=97 status=ok
// SIG undefined FUN_146f23312(void)

void FUN_146f23312(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149f99b80;
  if (((param_1[2] != 0) && ((*(byte *)(param_1[2] + 0xb8) & 0x40) != 0)) && (param_1[3] != 0)) {
    FUN_146f3b546();
  }
  if (param_1[3] != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))();
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_146f11920();
  return;
}



// FUNCTION 146f23374 FUN_146f23374 body=104 status=ok
// SIG undefined FUN_146f23374(void)

void FUN_146f23374(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != lVar1) {
    *(longlong *)(param_1 + 0x10) = lVar1;
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xb8) & 8) != 0)) {
      LOCK();
      *(int *)(lVar1 + 0xbc) = *(int *)(lVar1 + 0xbc) + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      FUN_146f11920();
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))();
  }
  *(undefined8 *)(param_1 + 0x18) = *param_3;
  *param_3 = 0;
  return;
}



// FUNCTION 146f233dc FUN_146f233dc body=84 status=ok
// SIG undefined FUN_146f233dc(void)

void FUN_146f233dc(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar1,*param_2 != 0,1);
  if (*param_2 != 0) {
    FUN_146f5435e(uVar1,*param_2,7);
  }
  FUN_146f5435e(uVar1,param_2[1] & 1,1);
  return;
}



// FUNCTION 146f23430 FUN_146f23430 body=84 status=ok
// SIG undefined FUN_146f23430(void)

void FUN_146f23430(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  iVar2 = FUN_146f546d2(uVar1,1);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_146f546d2(uVar1,7);
  }
  iVar2 = FUN_146f546d2(uVar1,1);
  *param_2 = uVar3;
  param_2[1] = (uint)(iVar2 != 0);
  return;
}



// FUNCTION 146f234fc FUN_146f234fc body=95 status=ok
// SIG undefined FUN_146f234fc(void)

void FUN_146f234fc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    local_10 = 0;
    local_18 = *(longlong *)(param_1 + 0x10);
    FUN_146f3b614(param_2,param_3,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f23580 FUN_146f23580 body=453 status=ok
// SIG undefined FUN_146f23580(void)

void FUN_146f23580(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  
  *(undefined1 *)(param_1 + 0xb) = 0;
  lVar3 = param_1[8];
  uVar5 = DAT_14c99c018;
  if ((lVar3 == 0) || (uVar5 = DAT_14c999640, *(char *)((longlong)param_1 + 0x59) == '\x01'))
  goto LAB_146f23718;
  lVar9 = *param_4;
  iVar1 = *(int *)(lVar9 + 0x3c);
  uVar8 = *(uint *)(lVar9 + 0xc) & 1;
  iVar2 = *(int *)((longlong)param_1 + 0x4c);
  bVar6 = (byte)uVar8;
  if (iVar1 == iVar2 && *(byte *)((longlong)param_1 + 0x5a) == bVar6) {
    if ((*(uint *)(lVar9 + 0x38) & 1) == 0) goto LAB_146f235e2;
LAB_146f23641:
    uVar8 = (uint)*(ushort *)(lVar9 + 0x40);
LAB_146f23646:
    *(int *)((longlong)param_1 + 0x4c) = iVar1;
    uVar4 = 0;
    if ((*(byte *)(*param_4 + 0x38) & 1) != 0) {
      uVar4 = (uint)*(ushort *)(*param_4 + 0x40);
    }
    *(uint *)(param_1 + 10) = iVar1 + uVar4 + -1;
    if ((uVar8 != 0) && (uVar8 <= *(uint *)(lVar3 + 0x2c))) {
      uVar7 = *(ushort *)(*param_4 + 0x42);
      if ((uint)uVar7 <= *(uint *)(lVar3 + 0x28)) {
        param_1[7] = param_3;
        *param_1 = *(undefined8 *)(*param_4 + 0x28);
        *(uint *)((longlong)param_1 + 0x54) = (uint)uVar7;
        FUN_14017c08a(param_1 + 1,(uVar7 + 7 >> 3) * uVar8 + 3 >> 2,1);
        FUN_146f5b2d8(param_1 + 3,param_1[1],*(int *)(param_1 + 2) << 2);
        uVar5 = *(undefined8 *)(*param_4 + 0x48);
        goto LAB_146f236dd;
      }
    }
LAB_146f2370d:
    *(undefined1 *)((longlong)param_1 + 0x59) = 1;
    uVar5 = DAT_14c99c018;
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x5a) & 1) == 0) {
      if ((*(uint *)(lVar9 + 0x38) & 1) != 0) {
        *(byte *)((longlong)param_1 + 0x5a) = bVar6;
        lVar9 = *param_4;
        uVar8 = 0;
        if ((*(byte *)(lVar9 + 0x38) & 1) != 0) goto LAB_146f23641;
        goto LAB_146f23646;
      }
      if (iVar1 != iVar2) {
        *(undefined1 *)((longlong)param_1 + 0x59) = 1;
        uVar5 = DAT_14c999640;
        if (uVar8 == 0) {
          return;
        }
        goto LAB_146f23718;
      }
      *(byte *)((longlong)param_1 + 0x5a) = bVar6;
LAB_146f235e2:
      if (((param_3 ^ param_1[7]) & 0xfffffffffffffff) == 0) {
        uVar7 = *(ushort *)(*param_4 + 0x42);
        if ((*(uint *)((longlong)param_1 + 0x54) == (uint)uVar7) ||
           (((uint)uVar7 <= *(uint *)((longlong)param_1 + 0x54) && (iVar2 == *(int *)(param_1 + 10))
            ))) {
          uVar5 = *(undefined8 *)(*param_4 + 0x48);
LAB_146f236dd:
          FUN_146f59ca6(param_1 + 3,uVar5,0,uVar7);
          if (*(int *)((longlong)param_1 + 0x4c) == *(int *)(param_1 + 10)) {
            *(undefined1 *)(param_1 + 0xb) = 1;
            return;
          }
          *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + 1;
          return;
        }
        goto LAB_146f2370d;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x59) = 1;
    uVar5 = DAT_14c999640;
  }
LAB_146f23718:
  FUN_146f5b89e(param_2);
  if (*(longlong *)(param_2 + 8) == 0) {
    *(undefined8 *)(param_2 + 8) = uVar5;
  }
  return;
}



// FUNCTION 146f23746 FUN_146f23746 body=636 status=ok
// SIG undefined FUN_146f23746(void)

undefined8 * FUN_146f23746(longlong param_1,undefined8 *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [12];
  int local_174;
  longlong *local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  uint local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  uint uStack_144;
  undefined1 *local_88;
  longlong local_80;
  undefined8 uStack_78;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined1 *)(param_1 + 0x58) = 0;
  (**(code **)**(undefined8 **)((longlong)param_3 + 0x110))
            (*(undefined8 **)((longlong)param_3 + 0x110),&local_168,param_1);
  uVar4 = DAT_14c9997b8;
  if ((*(longlong *)((longlong)param_3 + 8) == 0) && (local_168 != (longlong *)0x0)) {
    FUN_146f5b2b2((undefined4 *)(param_1 + 0x18));
    plVar1 = local_168;
    if ((*(byte *)((longlong)local_168 + 0xc) & 2) == 0) {
      FUN_146f5aa14(local_180);
      FUN_146f5aa28(local_180,*(undefined8 *)(param_1 + 8),
                    *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24));
      memcpy(&local_160,param_3,0x128);
      local_80 = 0;
      uStack_78 = 0;
      local_88 = local_180;
      if (*(longlong *)(param_1 + 0x38) == 0) {
        (**(code **)(*local_168 + 0x18))(local_168,&local_160);
      }
      else {
        (**(code **)(*local_168 + 8))();
      }
      lVar5 = CONCAT44(uStack_154,iStack_158);
      if ((((CONCAT44(uStack_154,iStack_158) != 0) ||
           ((lVar5 = DAT_14c99c028, local_88 != (undefined1 *)0x0 &&
            (*(int *)(local_88 + 0x14) != 0)))) ||
          ((local_80 != 0 && (*(int *)(local_80 + 0x18) != 0)))) ||
         (lVar5 = DAT_14c99c010, *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) != local_174))
      {
        FUN_146f5b89e(param_3);
        if (*(longlong *)((longlong)param_3 + 8) == 0) {
          *(longlong *)((longlong)param_3 + 8) = lVar5;
        }
        *param_2 = 0;
        FUN_146f5aa26(local_180);
        goto LAB_146f23917;
      }
      FUN_146f5aa26(local_180);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = *(int *)(param_1 + 0x24);
      FUN_146f5b27a(&local_160);
      *(uint *)(param_1 + 0x28) = local_150;
      *(undefined4 *)(param_1 + 0x2c) = uStack_14c;
      *(undefined4 *)(param_1 + 0x30) = uStack_148;
      *(uint *)(param_1 + 0x34) = uStack_144;
      *(undefined4 *)(param_1 + 0x18) = local_160;
      *(undefined4 *)(param_1 + 0x1c) = uStack_15c;
      *(int *)(param_1 + 0x20) = iStack_158;
      *(undefined4 *)(param_1 + 0x24) = uStack_154;
      if ((local_150 < (iStack_158 + 0x1fU & 0xffffffe0)) && ((uStack_144 & 4) == 0)) {
        *(undefined4 *)(CONCAT44(uStack_15c,local_160) + (ulonglong)(local_150 >> 5) * 4) =
             uStack_14c;
      }
      if (plVar1 + 5 != (longlong *)(param_1 + 8)) {
        if (plVar1[5] != 0) {
          FUN_1400020a8();
        }
        plVar1[5] = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined4 *)(plVar1 + 6) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((longlong)plVar1 + 0x34) = *(undefined4 *)(param_1 + 0x14);
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      *(int *)(plVar1 + 7) = iVar2 - iVar3;
    }
    *param_2 = local_168;
    if (local_168 == (longlong *)0x0) goto LAB_146f23932;
    LOCK();
    *(int *)(local_168 + 4) = (int)local_168[4] + 1;
    UNLOCK();
  }
  else {
    FUN_146f5b89e(param_3);
    if (*(longlong *)((longlong)param_3 + 8) == 0) {
      *(undefined8 *)((longlong)param_3 + 8) = uVar4;
    }
    *param_2 = 0;
  }
LAB_146f23917:
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_168 + 4;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_168 + 0x20))(local_168,1);
    }
  }
LAB_146f23932:
  if ((local_38 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f239c8 FUN_146f239c8 body=69 status=ok
// SIG undefined FUN_146f239c8(void)

void FUN_146f239c8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_145b0a228();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  FUN_146f23a0e(param_1 + 8,*(undefined4 *)(lVar2 + 0x30));
  return;
}



// FUNCTION 146f23a0e FUN_146f23a0e body=118 status=ok
// SIG undefined FUN_146f23a0e(void)

void FUN_146f23a0e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f2e0de(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f2e164(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f23a86 FUN_146f23a86 body=164 status=ok
// SIG undefined FUN_146f23a86(void)

void FUN_146f23a86(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f99bd8;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x143) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}



// FUNCTION 146f23b2a FUN_146f23b2a body=134 status=ok
// SIG undefined FUN_146f23b2a(void)

void FUN_146f23b2a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_146f239c8();
  lVar1 = *param_2;
  *(longlong *)(param_1 + 0x120) = lVar1;
  *(longlong *)(param_1 + 0x130) = *(longlong *)(lVar1 + 0x28) + 0x848;
  *(longlong *)(param_1 + 0x140) = *(longlong *)(*param_2 + 0x28) + 0x160;
  *(longlong *)(param_1 + 0x128) = *(longlong *)(*param_2 + 0x28) + 0xd38;
  *(byte *)(param_1 + 0x148) = *(byte *)(lVar1 + 0x50) & 1;
  *(char *)(param_1 + 0x149) = (char)param_2[1];
  *(byte *)(param_1 + 0x14a) = *(byte *)(lVar1 + 0x50) >> 1 & 1;
  FUN_146f23bb0(param_1);
  *(longlong *)(param_1 + 0x18) = param_1;
  return;
}



// FUNCTION 146f23bb0 FUN_146f23bb0 body=444 status=ok
// SIG undefined FUN_146f23bb0(void)

void FUN_146f23bb0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar2 = FUN_1409ffe1d();
  lVar3 = FUN_146f2453a(uVar2);
  if (lVar3 != 0) {
    FUN_1401924dc(lVar3);
  }
  if ((*(longlong *)(param_1 + 0xb8) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(longlong *)(param_1 + 0xb8) = lVar3;
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(param_1 + 0x120);
  cVar1 = FUN_142a7d722(param_1,*(undefined8 *)(param_1 + 0xb8));
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0xb8) != 0)) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  plVar4 = (longlong *)FUN_145b2d918();
  lVar3 = plVar4[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar3 = plVar4[0x22];
  }
  *(longlong *)(param_1 + 0x138) = lVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  uVar5 = FUN_1409ffe1d();
  lVar6 = FUN_146f245cf(uVar5);
  if (lVar6 != 0) {
    FUN_1401924dc(lVar6);
  }
  if ((*(longlong *)(param_1 + 0xc0) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(longlong *)(param_1 + 0xc0) = lVar6;
  *(undefined8 *)(lVar6 + 0x38) = uVar2;
  *(longlong *)(lVar6 + 0x40) = lVar3;
  cVar1 = FUN_142a7d722(param_1,*(undefined8 *)(param_1 + 0xc0));
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  uVar2 = FUN_1409ffe1d();
  lVar3 = FUN_146f24664(uVar2);
  if (lVar3 != 0) {
    FUN_1401924dc(lVar3);
  }
  if ((*(longlong *)(param_1 + 200) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *(longlong *)(param_1 + 200) = lVar3;
  cVar1 = FUN_142a7d722(param_1,lVar3);
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 200) != 0)) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}



// FUNCTION 146f23d6c FUN_146f23d6c body=131 status=ok
// SIG undefined FUN_146f23d6c(void)

void FUN_146f23d6c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,uint param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_146f246fa(param_1 + (ulonglong)((param_6 & 1) << 4) + 8);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3[2] = param_4;
  puVar3[3] = param_6;
  param_5 = (longlong *)*param_5;
  plVar2 = *(longlong **)(puVar3 + 4);
  if (plVar2 != param_5) {
    *(longlong **)(puVar3 + 4) = param_5;
    if (param_5 != (longlong *)0x0) {
      LOCK();
      *(int *)(param_5 + 4) = (int)param_5[4] + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 4;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146f23de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x20))(plVar2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146f23df0 FUN_146f23df0 body=134 status=ok
// SIG undefined FUN_146f23df0(void)

longlong *
FUN_146f23df0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined4 *)(param_1 + 0x30);
  local_14 = (*(uint *)(param_4 + 0xb0) >> 0xb & 8 | *(uint *)(param_4 + 0xb0) >> 7 & 1) ^ 8;
  local_28 = param_5;
  lVar1 = FUN_146f24dbe(*(undefined8 *)(param_1 + 0x38));
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    UNLOCK();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f23e78 FUN_146f23e78 body=66 status=ok
// SIG undefined FUN_146f23e78(void)

longlong FUN_146f23e78(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x808);
  if (lVar1 != 0) {
    lVar2 = FUN_145a62df4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 146f23eba FUN_146f23eba body=193 status=ok
// SIG undefined FUN_146f23eba(void)

void FUN_146f23eba(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  uint param_5,longlong *param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_146f246fa(param_1 + (ulonglong)((param_5 & 1) << 4) + 8);
  *puVar3 = 0;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar3[3] = param_5;
  param_4 = (longlong *)*param_4;
  plVar2 = *(longlong **)(puVar3 + 4);
  if (plVar2 != param_4) {
    *(longlong **)(puVar3 + 4) = param_4;
    if (param_4 != (longlong *)0x0) {
      LOCK();
      *(int *)(param_4 + 4) = (int)param_4[4] + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 4;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,1);
      }
    }
  }
  FUN_146f1ba24(puVar3 + 6,param_6);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*param_6 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f23f7c FUN_146f23f7c body=34 status=ok
// SIG undefined FUN_146f23f7c(void)

undefined8 * FUN_146f23f7c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_142a81ae8(0,param_3,param_2);
  return param_2;
}



// FUNCTION 146f23f9e FUN_146f23f9e body=125 status=ok
// SIG undefined FUN_146f23f9e(void)

bool FUN_146f23f9e(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_146f18900(*(undefined8 *)(param_1 + 0x140));
    if (iVar1 != 0) {
      *param_3 = *(int *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x270) +
                           (longlong)(iVar1 / 100) * 8) + 0x28 + (longlong)(iVar1 % 100) * 0x38);
      *param_4 = iVar1;
      return *param_3 != 0;
    }
  }
  return false;
}



// FUNCTION 146f2421c FUN_146f2421c body=50 status=ok
// SIG undefined FUN_146f2421c(void)

void FUN_146f2421c(longlong param_1,undefined4 param_2)

{
  FUN_146f2424e(param_1 + 0x18,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x140));
  FUN_142a7e4be(param_1 + 0x18,param_2);
  return;
}



// FUNCTION 146f2424e FUN_146f2424e body=644 status=ok
// SIG undefined FUN_146f2424e(void)

void FUN_146f2424e(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  int *local_58;
  uint local_50;
  int local_4c;
  int *local_48;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x12] == 0) {
    FUN_146f2473a(param_1 + 1,param_1 + 3);
    iVar3 = *(int *)((longlong)param_1 + 0x24);
    FUN_146f2e476(param_1[3],(int)param_1[4]);
    *(undefined4 *)(param_1 + 4) = 0;
    if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x24) != 0)) {
      FUN_146f2e4c0(param_1 + 3);
    }
    if (0 < (int)param_1[2]) {
      param_1[0x13] = (longlong)(param_1 + 1);
      param_1[0x11] = param_2;
      param_1[0x12] = param_3;
      FUN_146f14ba4(param_1 + 6);
      plVar1 = param_1 + 9;
      FUN_146f14ba4(plVar1,(int)param_1[2]);
      FUN_146f14ba4(param_1 + 0xc,*(undefined4 *)(param_2 + 0x30));
      if ((char)param_1[5] == '\x01') {
        local_3c = *(int *)(param_2 + 0x30);
        local_48 = *(int **)(param_2 + 0x20);
        local_40 = local_3c + 0x1fU >> 5;
        if (local_3c == 0) {
          local_48 = &local_3c;
        }
        uVar6 = FUN_146efd25e(local_48,local_3c,0,0xffffffff);
        FUN_14478085e(param_1 + 0xf,uVar6,1);
        local_60 = (undefined4)param_1[0x10];
        local_68 = param_1[0xf];
        FUN_146efd1b6(local_48,local_3c,0);
      }
      if (*(char *)(*param_1 + 0x14a) == '\x01') {
        local_3c = *(int *)(param_3 + 0xe8);
        local_48 = *(int **)(param_3 + 0xd8);
        local_40 = local_3c + 0x1fU >> 5;
        if (local_3c == 0) {
          local_48 = &local_3c;
        }
        local_4c = *(int *)(param_3 + 0x100);
        local_58 = *(int **)(param_3 + 0xf0);
        local_50 = local_4c + 0x1fU >> 5;
        if (local_4c == 0) {
          local_58 = &local_4c;
        }
        lVar7 = param_1[2];
        if ((longlong)(int)lVar7 != 0) {
          lVar4 = param_1[1];
          lVar10 = 0;
          uVar5 = 0;
          do {
            uVar8 = *(uint *)(lVar4 + 8 + lVar10);
            if (uVar8 == 0) {
              uVar8 = *(uint *)(lVar4 + 4 + lVar10);
            }
            if ((((uint)local_48[uVar8 >> 5] >> (uVar8 & 0x1f) & 1) != 0) ||
               (plVar9 = param_1 + 6, (local_58[uVar8 >> 5] & 1 << ((byte)uVar8 & 0x1f)) == 0)) {
              plVar9 = plVar1;
            }
            puVar2 = (uint *)(*plVar9 + (ulonglong)(uVar5 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
            uVar5 = uVar5 + 1;
            lVar10 = lVar10 + 0x30;
          } while ((longlong)(int)lVar7 * 0x30 != lVar10);
        }
      }
      else if ((longlong)(int)param_1[2] != 0) {
        lVar7 = (longlong)(int)param_1[2] * 0x30;
        uVar5 = 0;
        do {
          puVar2 = (uint *)(*plVar1 + (ulonglong)(uVar5 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
          uVar5 = uVar5 + 1;
          lVar7 = lVar7 + -0x30;
        } while (lVar7 != 0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f244d4 FUN_146f244d4 body=102 status=ok
// SIG undefined FUN_146f244d4(void)

void FUN_146f244d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_146f2e476(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_146f2e4c0(param_1 + 8);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  memset(*(void **)(param_1 + 0x60),0,(longlong)*(int *)(param_1 + 0x68) << 2);
  return;
}



// FUNCTION 146f2453a FUN_146f2453a body=148 status=ok
// SIG undefined FUN_146f2453a(void)

undefined8 FUN_146f2453a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b2d570();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f245cf FUN_146f245cf body=148 status=ok
// SIG undefined FUN_146f245cf(void)

undefined8 FUN_146f245cf(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b2da02();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f24664 FUN_146f24664 body=148 status=ok
// SIG undefined FUN_146f24664(void)

undefined8 FUN_146f24664(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b2cff4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f246fa FUN_146f246fa body=63 status=ok
// SIG undefined FUN_146f246fa(void)

longlong FUN_146f246fa(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f2e3e2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_146f2e3d6(lVar2);
  return lVar2;
}



// FUNCTION 146f2473a FUN_146f2473a body=95 status=ok
// SIG undefined FUN_146f2473a(void)

void FUN_146f2473a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_146f2e3e2(param_1,iVar2);
  }
  FUN_146f2e4f0((longlong)iVar2 * 0x30 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 146f2479a FUN_146f2479a body=65 status=ok
// SIG undefined FUN_146f2479a(void)

undefined8 FUN_146f2479a(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar3 = (longlong)*(int *)(param_1 + 0x28) * 0x30;
    do {
      if (((*(int *)(lVar1 + 4) == param_2) || (*(int *)(lVar1 + 8) == param_2)) &&
         ((*(byte *)(*(longlong *)(lVar1 + 0x10) + 0xc) & 1) != 0)) goto LAB_146f247d0;
      lVar1 = lVar1 + 0x30;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
    lVar1 = 0;
LAB_146f247d0:
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
  }
  return uVar2;
}



// FUNCTION 146f247dc FUN_146f247dc body=54 status=ok
// SIG undefined FUN_146f247dc(void)

undefined8 FUN_146f247dc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar3 = (longlong)*(int *)(param_1 + 0x28) * 0x30;
    do {
      if ((*(byte *)(*(longlong *)(lVar1 + 0x10) + 0xc) & 1) != 0) goto LAB_146f24807;
      lVar1 = lVar1 + 0x30;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
    lVar1 = 0;
LAB_146f24807:
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
  }
  return uVar2;
}



// FUNCTION 146f24812 FUN_146f24812 body=102 status=ok
// SIG undefined FUN_146f24812(void)

undefined8 FUN_146f24812(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(*param_1 + 0xc0) == 0) {
    iVar1 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
      FUN_146f1ae52(param_4,iVar1);
    }
    lVar2 = *param_3;
    *(longlong *)(*param_4 + (longlong)iVar1 * 8) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
      UNLOCK();
    }
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  uVar3 = FUN_146f24878(*(longlong *)(*param_1 + 0xc0),param_2,param_3,param_4);
  return uVar3;
}



// FUNCTION 146f24878 FUN_146f24878 body=943 status=ok
// SIG undefined FUN_146f24878(void)

ulonglong FUN_146f24878(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
                       char param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_678 [32];
  undefined8 local_658;
  longlong *local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  longlong local_638;
  undefined1 *local_630;
  longlong *local_628;
  longlong local_620;
  undefined1 local_618 [48];
  longlong local_5e8;
  int local_5e0;
  int local_5dc;
  uint local_5d8;
  undefined4 local_5d4;
  int local_5d0;
  uint local_5cc;
  longlong local_5c8;
  ulonglong uStack_5c0;
  undefined1 local_5b8 [256];
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178 [26];
  undefined4 local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_678;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if ((*(byte *)(*param_3 + 0xc) & 1) == 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x50) & 1) == 0) {
      puVar3 = (uint *)(lVar4 + 0x34);
    }
    else {
      puVar3 = (uint *)(lVar4 + 0x38);
    }
  }
  else {
    puVar3 = (uint *)(lVar4 + 0x30);
  }
  local_5c8 = 0;
  uStack_5c0 = (ulonglong)(*puVar3 >> 5);
  if (0x1f < *puVar3) {
    FUN_1447808da(&local_5c8,0);
  }
  FUN_146f5b27a(&local_5e8);
  FUN_146f5b2d8(&local_5e8,local_5c8,(int)uStack_5c0 << 2);
  FUN_146f589c2(local_618,*(undefined8 *)(param_1 + 0x38));
  local_178[0] = 0;
  local_178[1] = 0;
  lVar4 = 0x18;
  do {
    *(undefined8 *)((longlong)local_178 + lVar4) = 0;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0xd8);
  local_650 = local_178;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_5c = 0xffffffff;
  local_58 = local_58 & 0xfc;
  local_630 = local_5b8;
  local_4b8 = 0;
  local_4b0 = 0x2000000000;
  local_428 = 0;
  local_420 = 0x2000000000;
  local_218 = 0;
  local_210 = 0x2000000000;
  local_188 = 0;
  local_180 = 0x2000000000;
  local_638 = param_1 + 0xb0;
  local_80 = &local_638;
  local_620 = 0;
  local_648 = 0;
  uStack_640 = 0;
  plVar1 = (longlong *)*param_3;
  local_628 = local_650;
  local_98 = &local_5e8;
  puStack_88 = local_618;
  local_60 = param_2;
  if (param_5 == '\0') {
    (**(code **)(*plVar1 + 0x10))(plVar1,local_178);
  }
  else {
    (**(code **)*plVar1)(plVar1,local_178,plVar1[5]);
  }
  if (local_178[1] == 0) {
    if (((local_a0 != 0) && (*(int *)(local_a0 + 0x14) != 0)) ||
       ((local_98 != (longlong *)0x0 && ((int)local_98[3] != 0)))) {
      FUN_146f154f2(&local_650);
    }
    FUN_146f5b2b2(&local_5e8);
    if (local_5d0 == 0) {
      plVar5 = (longlong *)FUN_14001cc68(0x68,0x10);
      local_658 = CONCAT44(local_658._4_4_,local_5d8 - local_5dc);
      FUN_146f25aa2(plVar5,local_178,param_3,&local_5c8);
      plVar6 = (longlong *)FUN_146f25b56(param_4);
      plVar1 = (longlong *)*plVar6;
      uVar7 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      if (plVar1 != plVar5) {
        *plVar6 = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 4) = (int)plVar5[4] + 1;
          UNLOCK();
        }
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar1 + 4;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*plVar1 + 0x20))(plVar1,1);
          }
        }
      }
    }
    else {
      if (param_5 == '\0') {
        uVar2 = FUN_146f259f8(param_1,local_178,param_3,param_4);
      }
      else {
        local_658 = param_4;
        uVar2 = FUN_146f2593e(param_1,local_178,*param_3 + 0x28,param_3);
      }
      uVar7 = (ulonglong)uVar2;
    }
  }
  else {
    FUN_146f154f2(&local_650);
    uVar7 = 0;
  }
  local_628[0x1f] = local_620;
  FUN_146f082ac(local_5b8);
  if ((local_5d8 < (local_5e0 + 0x1fU & 0xffffffe0)) && ((local_5cc & 4) == 0)) {
    *(undefined4 *)(local_5e8 + (ulonglong)(local_5d8 >> 5) * 4) = local_5d4;
  }
  if (local_5c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_678) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f24c28 FUN_146f24c28 body=174 status=ok
// SIG undefined FUN_146f24c28(void)

undefined8 *
FUN_146f24c28(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar3[1] = (ulonglong)uVar1 | 0x300000000;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *puVar3 = &PTR_FUN_149f99ff0;
  _Src = (void *)*param_3;
  iVar2 = *(int *)(param_3 + 1);
  *(int *)(puVar3 + 6) = iVar2;
  if ((longlong)iVar2 != 0) {
    FUN_1447bda9e(puVar3 + 5,iVar2,0);
    memcpy((void *)puVar3[5],_Src,(longlong)iVar2 << 2);
  }
  *(undefined4 *)(puVar3 + 7) = param_4;
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146f24cd6 FUN_146f24cd6 body=96 status=ok
// SIG undefined FUN_146f24cd6(void)

undefined8 * FUN_146f24cd6(undefined8 param_1,undefined8 *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[1] = *param_3 | 0x200000000;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_149f99ff0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146f24d36 FUN_146f24d36 body=42 status=ok
// SIG undefined FUN_146f24d36(void)

void FUN_146f24d36(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14c9997b8;
  FUN_146f5b89e(param_2);
  if (*(longlong *)(param_2 + 8) == 0) {
    *(undefined8 *)(param_2 + 8) = uVar1;
  }
  return;
}



// FUNCTION 146f24d60 FUN_146f24d60 body=54 status=ok
// SIG undefined FUN_146f24d60(void)

void FUN_146f24d60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  FUN_146f23312(param_1);
  return;
}



// FUNCTION 146f24dbe FUN_146f24dbe body=1062 status=ok
// SIG undefined FUN_146f24dbe(void)

undefined8 *
FUN_146f24dbe(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Dst;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong _Size;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_5d8 [32];
  longlong local_5b8;
  longlong local_5b0;
  undefined8 local_5a8;
  void *local_5a0;
  longlong local_598 [26];
  undefined4 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 *puStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  byte local_478;
  longlong *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_178 [26];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  do {
    lVar6 = param_4;
    param_4 = *(longlong *)(lVar6 + 0x40);
  } while (*(longlong *)(lVar6 + 0x40) != 0);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x808);
  if (lVar10 != 0) {
    lVar2 = FUN_145a62df4();
    lVar10 = *(longlong *)(lVar10 + 0x10);
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (plVar3 = (longlong *)FUN_146f45a84(param_1), plVar3 != (longlong *)0x0))
    {
      puVar5 = (undefined8 *)0x0;
      if ((longlong)(int)plVar3[1] != 0) {
        plVar4 = (longlong *)*plVar3;
        plVar3 = plVar4 + (int)plVar3[1];
        uVar8 = 0;
        do {
          uVar1 = *(ushort *)(*plVar4 + 0x7e);
          if (uVar1 != 0) {
            uVar9 = uVar8 >> 3 & 0xffff;
            lVar10 = *(longlong *)(*plVar4 + 0x20);
            lVar2 = 0;
            do {
              if (*(longlong *)(lVar10 + lVar2) == lVar6) {
                lVar10 = *(longlong *)(lVar10 + 8 + lVar2);
                local_5a0 = (void *)0x0;
                if ((lVar10 == 0) || (_Size = (ulonglong)*(uint *)(lVar10 + 0x74), _Size == 0)) {
                  _Dst = (void *)0x0;
                }
                else {
                  _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                                           (DAT_14c872d28,_Size,*(undefined2 *)(lVar10 + 0x7a));
                  if (_Dst != (void *)0x0) {
                    memset(_Dst,0,_Size);
                  }
                  local_598[0] = 0;
                  local_598[1] = 0;
                  lVar2 = 0x18;
                  do {
                    *(undefined8 *)((longlong)local_598 + lVar2) = 0;
                    lVar2 = lVar2 + 0x18;
                  } while (lVar2 != 0xd8);
                  local_4c8 = 0;
                  local_4c0 = 0;
                  uStack_4b8 = 0;
                  local_4b0 = 0;
                  puStack_4a8 = (undefined8 *)0x0;
                  local_4a0 = 0;
                  uStack_498 = 0;
                  local_490 = 0;
                  uStack_488 = 0;
                  local_480 = 0xffffffff00000000;
                  local_478 = local_478 & 0xfc;
                  local_5b0 = lVar10;
                  local_5a0 = _Dst;
                  FUN_146f589c2(local_178,param_1);
                  lVar10 = local_5b0;
                  puStack_4a8 = local_178;
                  FUN_146f3a82c(local_598,_Dst,param_5,local_5b0);
                }
                puVar5 = (undefined8 *)FUN_14001cc68(0x68,0x10);
                puVar5[1] = *param_2;
                puVar5[2] = 0;
                puVar5[3] = 0;
                *(undefined4 *)(puVar5 + 4) = 0;
                puVar5[7] = 0;
                puVar5[8] = 0;
                puVar5[5] = 0;
                puVar5[6] = 0;
                *puVar5 = &PTR_FUN_149f9a070;
                puVar5[0xb] = 0;
                puVar5[0xc] = 0;
                *(uint *)(puVar5 + 9) = uVar9;
                puVar5[10] = lVar6;
                if (lVar10 != 0) {
                  uVar8 = *(uint *)(lVar10 + 0xb8);
                  if ((uVar8 & 4) != 0) {
                    local_178[0] = 0;
                    local_178[1] = 0;
                    lVar6 = 0x18;
                    do {
                      *(undefined8 *)((longlong)local_178 + lVar6) = 0;
                      lVar6 = lVar6 + 0x18;
                    } while (lVar6 != 0xd8);
                    local_a8 = 0;
                    local_a0 = 0;
                    uStack_98 = 0;
                    local_90 = 0;
                    uStack_88 = 0;
                    local_80 = 0;
                    uStack_78 = 0;
                    local_70 = 0;
                    uStack_68 = 0;
                    local_60 = 0xffffffff00000000;
                    local_58 = local_58 & 0xfc;
                    local_198 = (longlong *)0x0;
                    local_190 = 0x2000000000;
                    local_188 = 2;
                    local_5a8 = 0;
                    local_5b8 = lVar10;
                    FUN_146f3b614(local_178,local_598,&local_5a8,_Dst);
                    lVar6 = (longlong)(int)local_190;
                    if (lVar6 != 0) {
                      lVar7 = FUN_14001cc68(0x50,0x10);
                      *(undefined8 *)(lVar7 + 0x40) = 0;
                      *(undefined8 *)(lVar7 + 0x48) = 0x400000000;
                      lVar2 = puVar5[0xc];
                      puVar5[0xc] = lVar7;
                      plVar3 = local_598;
                      if (lVar2 == 0) {
                        if (local_198 != (longlong *)0x0) {
                          plVar3 = local_198;
                        }
LAB_146f2513d:
                        plVar4 = plVar3 + lVar6 * 4;
                        do {
                          FUN_146f2e5a2(lVar7,plVar3 + 1);
                          plVar3 = plVar3 + 4;
                        } while (plVar3 != plVar4);
                      }
                      else {
                        if (*(longlong *)(lVar2 + 0x40) != 0) {
                          FUN_1400020a8();
                        }
                        FUN_1400020a8(lVar2);
                        lVar6 = (longlong)(int)local_190;
                        if (local_198 != (longlong *)0x0) {
                          plVar3 = local_198;
                        }
                        if (lVar6 != 0) goto LAB_146f2513d;
                      }
                      *(byte *)((longlong)puVar5 + 0xc) = *(byte *)((longlong)puVar5 + 0xc) | 4;
                    }
                    if (local_198 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                    uVar8 = *(uint *)(lVar10 + 0xb8);
                  }
                  if ((uVar8 & 8) != 0) {
                    LOCK();
                    *(int *)(lVar10 + 0xbc) = *(int *)(lVar10 + 0xbc) + 1;
                    UNLOCK();
                  }
                  local_598[0] = lVar10;
                  FUN_146f23374(puVar5,local_598,&local_5a0);
                  FUN_146f11920(lVar10);
                  _Dst = local_5a0;
                }
                if (_Dst != (void *)0x0) {
                  (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,_Dst);
                }
                goto LAB_146f24e12;
              }
              lVar2 = lVar2 + 0x10;
              uVar9 = uVar9 + 0x10000;
            } while ((ulonglong)uVar1 * 0x10 != lVar2);
          }
          plVar4 = plVar4 + 1;
          uVar8 = uVar8 + 8;
        } while (plVar4 != plVar3);
      }
      goto LAB_146f24e12;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_146f24e12:
  if ((local_48 ^ (ulonglong)auStack_5d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 146f251e6 FUN_146f251e6 body=101 status=ok
// SIG undefined FUN_146f251e6(void)

undefined8 * FUN_146f251e6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar1[1] = *param_3;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_149f9a070;
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146f2524c FUN_146f2524c body=82 status=ok
// SIG undefined FUN_146f2524c(void)

void FUN_146f2524c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28) + 0x12c8;
  local_18 = param_2;
  FUN_142a7f330(*param_3,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f252a0 FUN_146f252a0 body=57 status=ok
// SIG undefined FUN_146f252a0(void)

undefined8 * FUN_146f252a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (((*(byte *)(param_1 + 0x38) & 1) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0x30), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146f2530e FUN_146f2530e body=840 status=ok
// SIG undefined FUN_146f2530e(void)

undefined8
FUN_146f2530e(void *param_1,undefined8 *param_2,uint *param_3,longlong *param_4,undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined1 auStack_1f8 [40];
  uint local_1d0;
  uint local_1cc;
  undefined8 *local_1c8;
  uint *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  int local_1a0;
  int local_19c;
  uint local_198;
  undefined4 local_194;
  int local_190;
  uint local_18c;
  longlong local_188;
  undefined8 uStack_180;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  undefined4 local_148;
  longlong local_140;
  undefined4 local_138;
  uint local_134;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_80;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*param_4 == 0) {
    uVar8 = 0;
  }
  else {
    local_1cc = param_3[1] * *param_3 & 0xffffffe0;
    local_1d0 = *param_3 & 0xffffffe0;
    uVar6 = 0x100000;
    if (local_1cc < 0x100000) {
      uVar6 = local_1cc;
    }
    uVar7 = (ulonglong)uVar6;
    local_188 = 0;
    uStack_180 = 0;
    local_1c8 = param_2;
    do {
      uVar6 = (uint)uVar7;
      FUN_14017c08a(&local_188,uVar7 >> 5,1);
      FUN_146f5b27a(&local_1a8);
      FUN_146f5b2d8(&local_1a8,local_188,(int)uStack_180 << 2);
      memcpy(&local_178,param_1,0x128);
      local_a0 = 0;
      if (local_80 == 0) {
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 0;
      }
      else {
        local_1b8 = CONCAT44(*(undefined4 *)(*(longlong *)(local_80 + 8) + 0x198),
                             *(undefined4 *)(*(longlong *)(local_80 + 8) + 0x108));
        local_1b0 = *(undefined4 *)(*(longlong *)(local_80 + 8) + 0x3a8);
        local_1ac = *(undefined4 *)(*(longlong *)(local_80 + 8) + 0x438);
      }
      plVar1 = (longlong *)*param_4;
      local_1c0 = &local_178;
      local_98 = &local_1a8;
      if ((char)param_3[10] == '\x01') {
        (**(code **)*plVar1)(plVar1,&local_178,*(undefined8 *)(param_3 + 2));
      }
      else {
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_178);
      }
      if (CONCAT44(uStack_16c,uStack_170) == 0) {
        if (local_190 == 0) {
          FUN_146f5b2b2(&local_1a8);
          uVar7 = (ulonglong)(local_198 - local_19c);
          cVar9 = '\0';
          bVar4 = true;
        }
        else {
          uVar3 = uVar6 * 2;
          if (local_1cc <= uVar6 * 2) {
            uVar3 = local_1cc;
          }
          uVar5 = uVar3;
          if (uVar3 <= uVar6) {
            uVar5 = uVar6;
          }
          cVar9 = (uVar6 < uVar3) * '\x02' + '\x01';
          bVar4 = false;
          uVar7 = (ulonglong)uVar5;
        }
      }
      else {
        cVar9 = '\x01';
        bVar4 = false;
      }
      if (((*(longlong *)(local_1c0 + 2) != 0) ||
          ((*(longlong *)(local_1c0 + 0x36) != 0 &&
           (*(int *)(*(longlong *)(local_1c0 + 0x36) + 0x14) != 0)))) ||
         ((*(longlong *)(local_1c0 + 0x38) != 0 &&
          (*(int *)(*(longlong *)(local_1c0 + 0x38) + 0x18) != 0)))) {
        FUN_146f154f2(&local_1c0);
      }
      if ((local_198 < (local_1a0 + 0x1fU & 0xffffffe0)) && ((local_18c & 4) == 0)) {
        *(undefined4 *)(local_1a8 + (ulonglong)(local_198 >> 5) * 4) = local_194;
      }
      if ((cVar9 != '\x03') && (cVar9 != '\0')) {
        uVar8 = 0;
        goto LAB_146f25553;
      }
    } while (!bVar4);
    local_150 = 0;
    local_148 = 0;
    local_178 = param_3[6];
    uStack_174 = param_3[7];
    uStack_170 = param_3[8];
    uStack_16c = param_3[9];
    local_168 = *local_1c8;
    local_158 = *param_4;
    local_160 = *(undefined8 *)(local_158 + 8);
    local_140 = local_188;
    local_138 = (undefined4)uVar7;
    local_134 = local_1d0;
    if (*(longlong *)((longlong)param_1 + 0xf8) != 0) {
      lVar2 = *(longlong *)(*(longlong *)((longlong)param_1 + 0xf8) + 8);
      local_150 = lVar2 + 0x3b0;
      if (*(longlong *)(lVar2 + 0x430) != 0) {
        local_150 = *(longlong *)(lVar2 + 0x430);
      }
      local_148 = *(undefined4 *)(lVar2 + 0x438);
    }
    FUN_146f25658(&local_178,param_5);
    uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
LAB_146f25553:
    if (local_188 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f25658 FUN_146f25658 body=489 status=ok
// SIG undefined FUN_146f25658(void)

void FUN_146f25658(undefined4 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  uVar15 = param_1[0x11];
  uVar12 = (param_1[0x10] + uVar15) - 1;
  uVar5 = (ulonglong)uVar12 / (ulonglong)uVar15;
  iVar9 = (int)uVar5;
  iVar11 = (int)param_2[1] + iVar9;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
    FUN_146f1d5ea(param_2);
  }
  iVar11 = DAT_14c9996e0;
  LOCK();
  DAT_14c9996e0 = DAT_14c9996e0 + iVar9;
  UNLOCK();
  if (uVar15 <= uVar12) {
    uVar15 = 0;
    iVar13 = 0;
    do {
      puVar10 = (undefined8 *)FUN_14001cc68(0x88,0x10);
      uVar2 = *(undefined8 *)(param_1 + 4);
      puVar10[1] = uVar2;
      *(undefined4 *)(puVar10 + 4) = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = &PTR_LAB_149f9a0b0;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0x400000000;
      *(undefined4 *)(puVar10 + 8) = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      uVar8 = param_1[3];
      *(undefined4 *)(puVar10 + 0xf) = *param_1;
      *(undefined4 *)((longlong)puVar10 + 0x7c) = uVar6;
      *(undefined4 *)(puVar10 + 0x10) = uVar7;
      *(undefined4 *)((longlong)puVar10 + 0x84) = uVar8;
      uVar3 = *(ulonglong *)(param_1 + 6);
      puVar10[5] = uVar3;
      *(short *)(puVar10 + 8) = (short)uVar5;
      *(uint *)(puVar10 + 7) = (uint)(iVar13 == 0);
      *(int *)((longlong)puVar10 + 0x3c) = iVar11 + iVar13;
      if ((iVar13 == 0) && ((param_1[0xc] != 0 || ((uVar3 & 0x400000000) != 0)))) {
        lVar4 = *(longlong *)(param_1 + 8);
        if (lVar4 == 0) {
          uVar12 = (uint)((ulonglong)uVar2 >> 0x20);
        }
        else {
          puVar10[6] = lVar4;
          LOCK();
          *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
          UNLOCK();
          uVar12 = *(uint *)((longlong)puVar10 + 0xc);
        }
        *(uint *)((longlong)puVar10 + 0xc) = uVar12 | 4;
        FUN_146f258d2(puVar10 + 0xb,param_1 + 10);
      }
      uVar12 = param_1[0x10] - uVar15;
      if ((uint)param_1[0x11] <= param_1[0x10] - uVar15) {
        uVar12 = param_1[0x11];
      }
      uVar14 = uVar12 + 0x1f >> 5;
      *(short *)((longlong)puVar10 + 0x42) = (short)uVar12;
      FUN_14017c08a(puVar10 + 9,uVar14,1);
      memcpy((void *)puVar10[9],
             (void *)((ulonglong)(uVar15 >> 3 & 0xfffffffc) + *(longlong *)(param_1 + 0xe)),
             (ulonglong)(uVar14 << 2));
      uVar15 = uVar15 + param_1[0x11];
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar10 + 4) = *(int *)(puVar10 + 4) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_146f1ae52(param_2,iVar1);
      }
      *(undefined8 **)(*param_2 + (longlong)iVar1 * 8) = puVar10;
      iVar13 = iVar13 + 1;
    } while (iVar9 != iVar13);
  }
  return;
}



// FUNCTION 146f25842 FUN_146f25842 body=143 status=ok
// SIG undefined FUN_146f25842(void)

bool FUN_146f25842(undefined8 *param_1,uint *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_3;
  if (lVar1 != 0) {
    local_28 = 0;
    local_30 = 0;
    local_58 = param_2[6];
    uStack_54 = param_2[7];
    uStack_50 = param_2[8];
    uStack_4c = param_2[9];
    local_48 = *param_1;
    local_40 = *(undefined8 *)(lVar1 + 8);
    local_20 = *(undefined8 *)(lVar1 + 0x28);
    local_18 = *(undefined4 *)(lVar1 + 0x38);
    local_14 = *param_2 & 0xffffffe0;
    local_38 = lVar1;
    FUN_146f25658(&local_58,param_4);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f258d2 FUN_146f258d2 body=108 status=ok
// SIG undefined FUN_146f258d2(void)

void FUN_146f258d2(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < uVar1) {
      FUN_146f01f82(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = param_1;
    }
    memcpy((void *)(lVar3 + (longlong)iVar2 * 4),(void *)*param_2,(longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 146f2593e FUN_146f2593e body=185 status=ok
// SIG undefined FUN_146f2593e(void)

void FUN_146f2593e(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined4 local_10;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_10 = *(undefined4 *)(param_1 + 0x30);
  local_c = *(uint *)(*param_4 + 0xc) & 9;
  uStack_20 = uStack_20 & 0xffff0000;
  local_28 = 0;
  local_40 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x28);
  local_3c = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x2c);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_18 = 1;
  lVar1 = *(longlong *)(*param_4 + 0x10);
  if ((lVar1 != 0) && (puVar2 = *(undefined8 **)(lVar1 + 0x60), puVar2 != (undefined8 *)0x0)) {
    local_28 = *puVar2;
    uStack_20 = *(uint *)(puVar2 + 1);
    uStack_1c = *(undefined4 *)((longlong)puVar2 + 0xc);
  }
  local_48 = param_5;
  FUN_146f2530e(param_2,&local_10,&local_40);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f259f8 FUN_146f259f8 body=168 status=ok
// SIG undefined FUN_146f259f8(void)

void FUN_146f259f8(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined2 uStack_30;
  undefined6 uStack_2e;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined4 local_10;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_10 = *(undefined4 *)(param_1 + 0x30);
  local_c = *(uint *)(*param_3 + 0xc) & 9;
  local_18 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  local_28 = 0;
  uStack_26 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_40 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x28);
  local_3c = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x2c);
  lVar1 = *(longlong *)(*param_3 + 0x10);
  if ((lVar1 != 0) && (puVar2 = *(undefined4 **)(lVar1 + 0x60), puVar2 != (undefined4 *)0x0)) {
    uStack_24 = puVar2[1];
    uStack_1c = puVar2[3];
    local_28 = (undefined2)*puVar2;
    uStack_26 = (undefined2)((uint)*puVar2 >> 0x10);
    uStack_20 = (undefined2)puVar2[2];
    uStack_1e = (undefined2)((uint)puVar2[2] >> 0x10);
  }
  local_48 = param_4;
  FUN_146f2530e(param_2,&local_10,&local_40,param_3);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f25aa2 FUN_146f25aa2 body=180 status=ok
// SIG undefined FUN_146f25aa2(void)

undefined8 *
FUN_146f25aa2(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = *param_3;
  *param_1 = &PTR_LAB_149f99b80;
  param_1[1] = *(undefined8 *)(lVar1 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_149f9a160;
  lVar1 = *param_3;
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    UNLOCK();
  }
  param_1[8] = 0;
  param_1[9] = 0x400000000;
  param_1[10] = 0;
  param_1[10] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  FUN_146f26212(param_1 + 6,*(longlong *)(*(longlong *)(param_2 + 0xf8) + 8) + 0x3b0);
  *(uint *)((longlong)param_1 + 0xc) =
       *(uint *)((longlong)param_1 + 0xc) | (uint)(*(int *)(param_1 + 9) != 0) << 2;
  return param_1;
}



// FUNCTION 146f25b56 FUN_146f25b56 body=59 status=ok
// SIG undefined FUN_146f25b56(void)

longlong FUN_146f25b56(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f1ae52(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_146f2e7fc(lVar2);
  return lVar2;
}



// FUNCTION 146f25b92 FUN_146f25b92 body=214 status=ok
// SIG undefined FUN_146f25b92(void)

ulonglong FUN_146f25b92(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined6 local_3e;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x40);
  plVar2 = (longlong *)*param_2;
  if ((*(uint *)(lVar1 + 0x30) & 0xffffffe0) < *(uint *)(plVar2 + 7)) {
    local_20 = *(undefined4 *)(param_1 + 0x30);
    local_1c = 1;
    uStack_38 = 0;
    uStack_36 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    local_3e = 0;
    local_50 = *(undefined4 *)(lVar1 + 0x28);
    local_4c = *(undefined4 *)(lVar1 + 0x2c);
    local_28 = 0;
    if (param_4 != (undefined4 *)0x0) {
      uStack_34 = param_4[1];
      uStack_2c = param_4[3];
      uStack_38 = (undefined2)*param_4;
      uStack_36 = (undefined2)((uint)*param_4 >> 0x10);
      uStack_30 = (undefined2)param_4[2];
      uStack_2e = (undefined2)((uint)param_4[2] >> 0x10);
    }
    uVar4 = FUN_146f25842(&local_20,&local_50,param_2,param_3);
    uVar6 = (ulonglong)uVar4;
  }
  else {
    plVar5 = (longlong *)FUN_146f25b56(param_3);
    plVar3 = (longlong *)*plVar5;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (plVar3 != plVar2) {
      *plVar5 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 4) = (int)plVar2[4] + 1;
        UNLOCK();
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 4;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,1);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f25c6a FUN_146f25c6a body=52 status=ok
// SIG undefined FUN_146f25c6a(void)

void FUN_146f25c6a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  FUN_146f59287(uVar1,*(undefined4 *)(param_1 + 0x38));
  FUN_146f59ca6(uVar1,*(undefined8 *)(param_1 + 0x28),0,*(undefined4 *)(param_1 + 0x38));
  return;
}



// FUNCTION 146f25ca4 FUN_146f25ca4 body=52 status=ok
// SIG undefined FUN_146f25ca4(void)

void FUN_146f25ca4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  FUN_146f59287(uVar1,*(undefined4 *)(param_1 + 0x38));
  FUN_146f59ca6(uVar1,*(undefined8 *)(param_1 + 0x28),0,*(undefined4 *)(param_1 + 0x38));
  return;
}



// FUNCTION 146f25cde FUN_146f25cde body=54 status=ok
// SIG undefined FUN_146f25cde(void)

void FUN_146f25cde(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = 0x2000;
  do {
    plVar2 = *(longlong **)(param_1 + -8 + lVar3);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 4;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,1);
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 146f25d2e FUN_146f25d2e body=150 status=ok
// SIG undefined FUN_146f25d2e(void)

void FUN_146f25d2e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  ushort uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  do {
    uVar3 = *(ushort *)(param_2 + lVar7 * 2);
    uVar6 = (uint)(uVar3 >> 10);
    *(int *)(param_1 + 0x2108) = *(int *)(param_1 + 0x2108) - uVar6;
    if (0x3ff < uVar3) {
      uVar5 = *(ushort *)(param_2 + lVar7 * 2) & 0x3ff;
      do {
        puVar2 = (uint *)(param_1 + 0x2000 + (ulonglong)(uVar5 >> 3 & 0x7c));
        *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
        plVar4 = *(longlong **)(param_1 + (ulonglong)(uVar5 & 0x3ff) * 8);
        if ((plVar4 != (longlong *)0x0) && ((*(byte *)((longlong)plVar4 + 0xc) & 1) == 0)) {
          *(undefined8 *)(param_1 + (ulonglong)(uVar5 & 0x3ff) * 8) = 0;
          LOCK();
          plVar1 = plVar4 + 4;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 0x20))(plVar4,1);
          }
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  return;
}



// FUNCTION 146f25dc4 FUN_146f25dc4 body=11 status=ok
// SIG undefined FUN_146f25dc4(void)

void FUN_146f25dc4(undefined8 param_1,undefined8 param_2)

{
  FUN_142a7fe98(param_1,param_2,0,0);
  return;
}



// FUNCTION 146f25dd0 thunk_FUN_142a7fe98 body=8 status=ok
// SIG undefined thunk_FUN_142a7fe98(void)

void thunk_FUN_142a7fe98(void)

{
  FUN_142a7fe98();
  return;
}



// FUNCTION 146f25dd8 FUN_146f25dd8 body=124 status=ok
// SIG undefined FUN_146f25dd8(void)

bool FUN_146f25dd8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x2104);
  uVar4 = uVar2 - *(int *)(param_1 + 0x2100);
  if (uVar4 < 0x400) {
    *(int *)(param_1 + 0x2108) = *(int *)(param_1 + 0x2108) + 1;
    *(uint *)(param_1 + 0x2104) = uVar2 + 1;
    param_2 = (longlong *)*param_2;
    plVar3 = *(longlong **)(param_1 + (ulonglong)(uVar2 & 0x3ff) * 8);
    if (plVar3 != param_2) {
      *(longlong **)(param_1 + (ulonglong)(uVar2 & 0x3ff) * 8) = param_2;
      if (param_2 != (longlong *)0x0) {
        LOCK();
        *(int *)(param_2 + 4) = (int)param_2[4] + 1;
        UNLOCK();
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 4;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,1);
        }
      }
    }
  }
  return uVar4 < 0x400;
}



// FUNCTION 146f25e54 FUN_146f25e54 body=132 status=ok
// SIG undefined FUN_146f25e54(void)

longlong FUN_146f25e54(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x2100);
  uVar5 = *(uint *)(param_1 + 0x2104);
  while( true ) {
    if (uVar5 <= uVar3) {
      return 0;
    }
    uVar4 = uVar3 & 0x3ff;
    uVar6 = (ulonglong)(uVar4 >> 5);
    uVar7 = *(uint *)(param_1 + 0x2080 + uVar6 * 4);
    bVar2 = (byte)uVar3;
    if ((uVar7 >> (uVar3 & 0x1f) & 1) == 0) break;
    lVar1 = *(longlong *)(param_1 + (ulonglong)uVar4 * 8);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x20) != 0) {
        return param_1 + (ulonglong)uVar4 * 8;
      }
      uVar7 = *(uint *)(param_1 + 0x2080 + uVar6 * 4);
      uVar3 = *(uint *)(param_1 + 0x2100);
      uVar5 = *(uint *)(param_1 + 0x2104);
    }
    *(uint *)(param_1 + 0x2080 + uVar6 * 4) = ~(1 << (bVar2 & 0x1f)) & uVar7;
    uVar3 = uVar3 + 1;
    *(uint *)(param_1 + 0x2100) = uVar3;
  }
  return 0;
}



// FUNCTION 146f25ed8 FUN_146f25ed8 body=93 status=ok
// SIG undefined FUN_146f25ed8(void)

void FUN_146f25ed8(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x2100);
  uVar6 = uVar3 & 0x3ff;
  plVar4 = *(longlong **)(param_1 + (ulonglong)uVar6 * 8);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + (ulonglong)uVar6 * 8) = 0;
    LOCK();
    plVar1 = plVar4 + 4;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,1);
    }
  }
  bVar5 = (byte)uVar3 & 0x1f;
  puVar2 = (uint *)(param_1 + 0x2080 + (ulonglong)(uVar6 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  *(int *)(param_1 + 0x2100) = *(int *)(param_1 + 0x2100) + 1;
  return;
}


