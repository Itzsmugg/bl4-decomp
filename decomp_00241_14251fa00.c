// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14251fa00 FUN_14251fa00 body=8 status=ok
// SIG undefined FUN_14251fa00(void)

undefined * FUN_14251fa00(void)

{
  return &DAT_14c792d88;
}



// FUNCTION 14251fa10 FUN_14251fa10 body=122 status=ok
// SIG undefined FUN_14251fa10(void)

undefined8 * FUN_14251fa10(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1425d90b0(param_1,param_3);
  *param_1 = icu_64::SimpleTimeZone::vftable;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 **)((longlong)param_1 + 0x6c) = &DAT_100000001;
  *(undefined4 *)((longlong)param_1 + 0x74) = 3600000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14251fa90 FUN_14251fa90 body=254 status=ok
// SIG undefined FUN_14251fa90(void)

undefined8 *
FUN_14251fa90(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
             undefined4 param_13,int param_14,undefined4 *param_15)

{
  FUN_1425d90b0(param_1,param_3);
  *param_1 = icu_64::SimpleTimeZone::vftable;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = param_2;
  *(undefined1 *)(param_1 + 9) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x49) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x4a) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_7;
  *(undefined4 *)(param_1 + 10) = param_8;
  *(undefined1 *)(param_1 + 0xb) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x59) = param_10;
  *(undefined1 *)((longlong)param_1 + 0x5a) = param_11;
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_12;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_13;
  *(int *)((longlong)param_1 + 0x74) = param_14;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 **)((longlong)param_1 + 0x6c) = &DAT_100000001;
  FUN_14251fb90(param_1,param_15);
  if (param_14 == 0) {
    *param_15 = 1;
  }
  return param_1;
}



// FUNCTION 14251fb90 FUN_14251fb90 body=423 status=ok
// SIG undefined FUN_14251fb90(void)

void FUN_14251fb90(longlong param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  
  if (0 < *param_2) {
    return;
  }
  cVar4 = *(char *)(param_1 + 0x49);
  cVar2 = *(char *)(param_1 + 0x59);
  *(bool *)(param_1 + 0x68) = cVar2 != '\0' && cVar4 != '\0';
  if (cVar2 != '\0' && cVar4 != '\0') {
    if (*(int *)(param_1 + 0x74) == 0) {
      *(undefined4 *)(param_1 + 0x74) = 3600000;
    }
LAB_14251fbcd:
    if (((0xb < (ulonglong)*(byte *)(param_1 + 0x48)) || (86400000 < *(uint *)(param_1 + 0x4c))) ||
       (2 < *(uint *)(param_1 + 0x50))) goto LAB_14251fcea;
    bVar1 = *(byte *)(param_1 + 0x4a);
    if (bVar1 == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
    }
    else {
      if ('\0' < (char)bVar1) {
        *(undefined4 *)(param_1 + 0x6c) = 2;
        if (((byte)(cVar4 - 6U) < 0xf5) || (cVar3 = cVar4, 7 < bVar1)) goto LAB_14251fcea;
        goto LAB_14251fc26;
      }
      *(byte *)(param_1 + 0x4a) = -bVar1;
      uVar5 = 3;
      if (cVar4 < '\x01') {
        cVar4 = -cVar4;
        *(char *)(param_1 + 0x49) = cVar4;
        uVar5 = 4;
      }
      *(undefined4 *)(param_1 + 0x6c) = uVar5;
      if ('\a' < (char)-bVar1) goto LAB_14251fcea;
    }
    if ((cVar4 < '\x01') ||
       (cVar3 = '\x01', (char)(&DAT_1499dc05c)[*(byte *)(param_1 + 0x48)] < cVar4))
    goto LAB_14251fcea;
  }
  else {
    if (cVar4 != '\0') goto LAB_14251fbcd;
    cVar3 = '\0';
  }
LAB_14251fc26:
  if (*param_2 < 1) {
    *(bool *)(param_1 + 0x68) = cVar3 != '\0' && cVar2 != '\0';
    if (cVar3 != '\0' && cVar2 != '\0') {
      if (*(int *)(param_1 + 0x74) == 0) {
        *(undefined4 *)(param_1 + 0x74) = 3600000;
      }
    }
    else if (cVar2 == '\0') {
      return;
    }
    if (((0xb < (ulonglong)*(byte *)(param_1 + 0x58)) || (86400000 < *(uint *)(param_1 + 0x5c))) ||
       (2 < *(uint *)(param_1 + 0x54))) goto LAB_14251fcea;
    bVar1 = *(byte *)(param_1 + 0x5a);
    if (bVar1 == 0) {
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    else {
      if ('\0' < (char)bVar1) {
        *(undefined4 *)(param_1 + 0x70) = 2;
        if ((bVar1 < 8) && (0xf4 < (byte)(cVar2 - 6U))) {
          return;
        }
        goto LAB_14251fcea;
      }
      *(byte *)(param_1 + 0x5a) = -bVar1;
      uVar5 = 3;
      if (cVar2 < '\x01') {
        cVar2 = -cVar2;
        *(char *)(param_1 + 0x59) = cVar2;
        uVar5 = 4;
      }
      *(undefined4 *)(param_1 + 0x70) = uVar5;
      if ('\a' < (char)-bVar1) goto LAB_14251fcea;
    }
    if ((cVar2 < '\x01') || ((char)(&DAT_1499dc05c)[*(byte *)(param_1 + 0x58)] < cVar2)) {
LAB_14251fcea:
      *param_2 = 1;
      return;
    }
  }
  return;
}



// FUNCTION 14251fd40 FUN_14251fd40 body=125 status=ok
// SIG undefined FUN_14251fd40(void)

void FUN_14251fd40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



// FUNCTION 14251fdc0 FUN_14251fdc0 body=204 status=ok
// SIG undefined FUN_14251fdc0(void)

undefined8 * FUN_14251fdc0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1425d90d0();
  *param_1 = icu_64::SimpleTimeZone::vftable;
  if (param_1 != param_2) {
    FUN_1424b7370(param_1,param_2);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
    *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)((longlong)param_2 + 0x4a);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
    *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)(param_1 + 0xf) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  return param_1;
}



// FUNCTION 14251fe90 Unwind@14251fe90 body=34 status=ok
// SIG undefined Unwind@14251fe90(void)

void Unwind_14251fe90(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b72e0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14251fec0 FUN_14251fec0 body=102 status=ok
// SIG undefined FUN_14251fec0(void)

bool FUN_14251fec0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    lVar4 = __RTtypeid();
    lVar5 = __RTtypeid(param_2);
    iVar3 = __std_type_info_compare(lVar4 + 8,lVar5 + 8);
    if ((iVar3 == 0) && (cVar1 = FUN_1424b73a0(param_1,param_2), cVar1 != '\0')) {
      cVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
      return cVar1 != '\0';
    }
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 14251ff30 FUN_14251ff30 body=64 status=ok
// SIG undefined FUN_14251ff30(void)

longlong FUN_14251ff30(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0xa0);
  if (lVar1 != 0) {
    FUN_14251fdc0(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 14251ff70 Unwind@14251ff70 body=32 status=ok
// SIG undefined Unwind@14251ff70(void)

void Unwind_14251ff70(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14251ff90 FUN_14251ff90 body=8 status=ok
// SIG undefined FUN_14251ff90(void)

void FUN_14251ff90(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 14251ffa0 FUN_14251ffa0 body=195 status=ok
// SIG undefined FUN_14251ffa0(void)

undefined8 FUN_14251ffa0(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined4 *in_stack_00000040;
  
  if (param_4 < 0xc) {
    uVar1 = (**(code **)(*param_1 + 0x20))();
  }
  else {
    *in_stack_00000040 = 1;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 142520070 FUN_142520070 body=333 status=ok
// SIG undefined FUN_142520070(void)

undefined8 FUN_142520070(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined4 *in_stack_00000048;
  
  if (param_4 < 0xc) {
    uVar1 = (**(code **)(*param_1 + 0xa0))();
  }
  else {
    *in_stack_00000048 = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1425201c0 FUN_1425201c0 body=549 status=ok
// SIG undefined FUN_1425201c0(void)

int FUN_1425201c0(longlong param_1,byte param_2,int param_3,uint param_4,int param_5,char param_6,
                 uint param_7,int param_8,int param_9,int *param_10)

{
  char cVar1;
  char cVar2;
  int iVar3;
  byte extraout_var;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  iVar4 = 0;
  if (*param_10 < 1) {
    if (((((param_2 < 2) && (param_4 < 0xc)) && (0 < param_5)) &&
        ((0xfffffffb < param_9 - 0x20U && (0xfffffffb < param_8 - 0x20U)))) &&
       ((param_7 < 86400000 && ((0xf8 < (byte)(param_6 - 8U) && (param_5 <= param_8)))))) {
      iVar4 = *(int *)(param_1 + 100);
      if (((*(char *)(param_1 + 0x68) != '\0') && (param_2 == 1)) &&
         (*(int *)(param_1 + 0x60) <= param_3)) {
        cVar1 = *(char *)(param_1 + 0x48);
        cVar2 = *(char *)(param_1 + 0x58);
        iVar5 = -iVar4;
        bVar6 = 0;
        iVar3 = 0;
        if (*(int *)(param_1 + 0x50) == 2) {
          iVar3 = iVar5;
        }
        iVar3 = FUN_1425203f0(param_4,param_8,param_9,param_5,param_6,param_7,iVar3,
                              *(undefined4 *)(param_1 + 0x6c),cVar1,*(undefined1 *)(param_1 + 0x4a),
                              *(undefined1 *)(param_1 + 0x49),*(undefined4 *)(param_1 + 0x4c));
        if (cVar2 < cVar1 != -1 < iVar3) {
          if ((*(int *)(param_1 + 0x54) != 2) && (iVar5 = 0, *(int *)(param_1 + 0x54) == 0)) {
            iVar5 = *(int *)(param_1 + 0x74);
          }
          FUN_1425203f0(param_4,param_8,param_9,param_5,param_6,param_7,iVar5,
                        *(undefined4 *)(param_1 + 0x70),cVar2,*(undefined1 *)(param_1 + 0x5a),
                        *(undefined1 *)(param_1 + 0x59),*(undefined4 *)(param_1 + 0x5c));
          bVar6 = extraout_var >> 7;
        }
        if ((((cVar1 <= cVar2 && -1 < iVar3) & bVar6) != 0) ||
           ((cVar2 < cVar1 & (-1 < iVar3 | bVar6)) != 0)) {
          iVar4 = iVar4 + *(int *)(param_1 + 0x74);
        }
      }
    }
    else {
      *param_10 = 1;
      iVar4 = -1;
    }
  }
  return iVar4;
}



// FUNCTION 1425203f0 FUN_1425203f0 body=744 status=ok
// SIG undefined FUN_1425203f0(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1425203f0(char param_1,char param_2,char param_3,char param_4,byte param_5,int param_6
                       ,int param_7,undefined4 param_8,char param_9,char param_10,char param_11,
                       int param_12)

{
  short sVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  uVar6 = param_7 + param_6;
  if ((int)uVar6 < 86400000) {
    uVar7 = uVar6;
    if ((int)uVar6 < 0) {
      do {
        uVar6 = uVar6 + 86400000;
        cVar3 = param_4 + -1;
        uVar7 = ((char)param_5 + 5) * 0x4925;
        param_5 = param_5 + ((char)(uVar7 >> 0x11) - (char)((int)uVar7 >> 0x1f)) * -7 + 6;
        param_4 = cVar3;
        if (cVar3 < '\x01') {
          param_4 = param_3;
        }
        param_1 = param_1 - (cVar3 < '\x01');
        uVar7 = uVar6;
      } while (86399999 < uVar6);
    }
  }
  else {
    do {
      uVar7 = uVar6 + 0xfad9a400;
      cVar4 = param_4 + '\x01';
      cVar3 = (char)((uint)((char)param_5 * -0x6d) >> 8) + param_5;
      param_5 = param_5 + ((cVar3 >> 2) - (cVar3 >> 7)) * -7 + 1;
      param_4 = cVar4;
      if (param_2 < cVar4) {
        param_4 = '\x01';
      }
      param_1 = param_1 + (param_2 < cVar4);
      bVar9 = 0xa4cb7ff < uVar6;
      uVar6 = uVar7;
    } while (bVar9);
  }
  if (param_1 < param_9) goto LAB_1425204ed;
  uVar2 = 1;
  if (param_9 < param_1) {
    return 1;
  }
  cVar3 = param_2;
  if (param_11 < param_2) {
    cVar3 = param_11;
  }
  uVar6 = (uint)param_4;
  switch(param_8) {
  case 1:
    iVar5 = (int)cVar3;
    iVar8 = iVar5 - uVar6;
    break;
  case 2:
    if (cVar3 < '\x01') {
      iVar8 = ((int)(char)param_5 + (int)param_2 + 7) - ((int)param_10 + uVar6);
      sVar1 = (short)((uint)(iVar8 * 0x4925) >> 0x10);
      iVar5 = cVar3 * 7 + (int)param_2 + 7 +
              (int)(short)(((sVar1 >> 1) - (sVar1 >> 0xf)) * 7 - (short)iVar8);
      iVar8 = iVar5 - uVar6;
    }
    else {
      iVar5 = cVar3 * 7 +
              (int)(short)(((short)((short)param_4 + (short)(char)~param_5 + (short)param_10 + 7) /
                           7) * -7 + (short)(char)~param_5 + (short)param_10 + (short)param_4 + 7) +
              -6;
      iVar8 = iVar5 - uVar6;
    }
    break;
  case 3:
    iVar8 = (int)param_10 - ((int)(char)param_5 + (int)cVar3);
    sVar1 = (short)((iVar8 + uVar6 + 0x31) * 0x4925 >> 0x10);
    iVar5 = (int)(short)((short)iVar8 + (short)param_4 + ((sVar1 >> 1) - (sVar1 >> 0xf)) * -7 + 0x31
                        );
    goto LAB_142520658;
  case 4:
    iVar8 = (((int)cVar3 - (int)param_10) + (int)(char)param_5) - uVar6;
    iVar5 = iVar8 + 0x31;
    iVar8 = iVar8 + (int)((ulonglong)((longlong)iVar5 * -0x6db6db6d) >> 0x20) + 0x31;
    iVar5 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) * 7 - iVar5;
LAB_142520658:
    iVar5 = iVar5 + cVar3;
    iVar8 = iVar5 - uVar6;
    break;
  default:
    bVar9 = SBORROW4(0,uVar6);
    iVar8 = -uVar6;
    if (0x7fffffff < uVar6) goto LAB_1425204ed;
    goto LAB_142520664;
  }
  bVar9 = SBORROW4(iVar5,uVar6);
  if ((int)uVar6 < iVar5) {
LAB_1425204ed:
    uVar2 = 0xffffffff;
  }
  else {
LAB_142520664:
    if ((bVar9 == iVar8 < 0) && (uVar2 = 0xffffffff, param_12 <= (int)uVar7)) {
      uVar2 = (ulonglong)(param_12 < (int)uVar7);
    }
  }
  return uVar2;
}



// FUNCTION 1425206e0 FUN_1425206e0 body=677 status=ok
// SIG undefined FUN_1425206e0(void)

void FUN_1425206e0(longlong *param_1,double param_2,uint param_3,uint param_4,int *param_5,
                  int *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  int local_a8;
  int local_a0;
  int *local_98;
  undefined1 local_84 [4];
  undefined4 local_80;
  int local_7c;
  uint local_78;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_7 < 1) {
    iVar1 = (**(code **)(*param_1 + 0x38))();
    *param_5 = iVar1;
    dVar4 = (double)FUN_1424d97b0(param_2 / 86400000.0);
    local_b0 = local_74;
    local_b8 = local_84;
    FUN_142500f10(dVar4,&local_78,&local_7c,&local_80);
    if (((local_78 & 3) != 0) ||
       ((uVar2 = 0xc, (local_78 * -0x3d70a3d7 + 0x51eb850 >> 2 | local_78 * 0x40000000) < 0x28f5c29
        && (local_78 != ((int)local_78 / 400) * 400)))) {
      uVar2 = 0;
    }
    local_a0 = (int)(char)(&DAT_1499d7ed0)[(ulonglong)uVar2 + (longlong)local_7c];
    local_98 = param_7;
    local_b0 = (undefined1 *)CONCAT71(local_b0._1_7_,local_84[0]);
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,local_80);
    local_a8 = (int)(param_2 - dVar4 * 86400000.0);
    iVar3 = (**(code **)(*param_1 + 0x20))(param_1,CONCAT71((uint7)(uint3)((uint)local_80 >> 8),1));
    iVar1 = *param_5;
    *param_6 = iVar3 - iVar1;
    if (*param_7 < 1) {
      if (iVar3 - iVar1 < 1) {
        if (((param_4 & 3) == 1) || (((param_4 & 3) != 3 && ((param_4 & 0xc) != 4))))
        goto LAB_14252092a;
      }
      else if (((param_3 & 3) != 1) && (((param_3 & 3) == 3 || ((~param_3 & 0xc) == 0))))
      goto LAB_14252092a;
      iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
      dVar4 = (double)FUN_1424d97b0((param_2 - (double)iVar1) / 86400000.0);
      local_b0 = local_74;
      local_b8 = local_84;
      FUN_142500f10(dVar4,&local_78,&local_7c,&local_80);
      if (((local_78 & 3) != 0) ||
         ((uVar2 = 0xc,
          (local_78 * -0x3d70a3d7 + 0x51eb850 >> 2 | local_78 * 0x40000000) < 0x28f5c29 &&
          (local_78 != ((int)local_78 / 400) * 400)))) {
        uVar2 = 0;
      }
      local_a0 = (int)(char)(&DAT_1499d7ed0)[(ulonglong)uVar2 + (longlong)local_7c];
      local_98 = param_7;
      local_b0 = (undefined1 *)CONCAT71(local_b0._1_7_,local_84[0]);
      local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,local_80);
      local_a8 = (int)((param_2 - (double)iVar1) - dVar4 * 86400000.0);
      iVar1 = (**(code **)(*param_1 + 0x20))
                        (param_1,CONCAT71((uint7)(uint3)((uint)local_80 >> 8),1));
      *param_6 = iVar1 - *param_5;
    }
  }
LAB_14252092a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1425209b0 FUN_1425209b0 body=4 status=ok
// SIG undefined FUN_1425209b0(void)

undefined4 FUN_1425209b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// FUNCTION 1425209c0 FUN_1425209c0 body=8 status=ok
// SIG undefined FUN_1425209c0(void)

void FUN_1425209c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 1425209d0 FUN_1425209d0 body=4 status=ok
// SIG undefined FUN_1425209d0(void)

undefined4 FUN_1425209d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// FUNCTION 1425209e0 FUN_1425209e0 body=5 status=ok
// SIG undefined FUN_1425209e0(void)

undefined1 FUN_1425209e0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



// FUNCTION 1425209f0 FUN_1425209f0 body=145 status=ok
// SIG undefined FUN_1425209f0(void)

undefined4 FUN_1425209f0(undefined8 param_1,undefined4 param_2,int *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    plVar2 = (longlong *)thunk_FUN_1424da030(0x290);
    if (plVar2 != (longlong *)0x0) {
      FUN_1424a2010(plVar2,param_1,param_3,param_4,plVar2,uVar3);
      FUN_1424ccf20(plVar2,param_2,param_3);
      uVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
      (**(code **)*plVar2)(plVar2,1);
      return uVar1;
    }
    *param_3 = 7;
  }
  return 0;
}



// FUNCTION 142520a90 Unwind@142520a90 body=45 status=ok
// SIG undefined Unwind@142520a90(void)

void Unwind_142520a90(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142520ac0 FUN_142520ac0 body=228 status=ok
// SIG undefined FUN_142520ac0(void)

ulonglong FUN_142520ac0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (param_1 == param_2) goto LAB_142520b98;
  lVar2 = __RTtypeid();
  lVar3 = __RTtypeid(param_2);
  iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
  if (((iVar1 == 0) && (*(int *)(param_1 + 100) == *(int *)(param_2 + 100))) &&
     (*(char *)(param_1 + 0x68) == *(char *)(param_2 + 0x68))) {
    if (*(char *)(param_1 + 0x68) == '\0') goto LAB_142520b98;
    if ((((*(int *)(param_1 + 0x74) == *(int *)(param_2 + 0x74)) &&
         (*(int *)(param_1 + 0x6c) == *(int *)(param_2 + 0x6c))) &&
        ((*(char *)(param_1 + 0x48) == *(char *)(param_2 + 0x48) &&
         ((*(char *)(param_1 + 0x49) == *(char *)(param_2 + 0x49) &&
          (*(char *)(param_1 + 0x4a) == *(char *)(param_2 + 0x4a))))))) &&
       ((*(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c) &&
        (((((*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50) &&
            (*(int *)(param_1 + 0x70) == *(int *)(param_2 + 0x70))) &&
           (*(char *)(param_1 + 0x58) == *(char *)(param_2 + 0x58))) &&
          ((*(char *)(param_1 + 0x59) == *(char *)(param_2 + 0x59) &&
           (*(char *)(param_1 + 0x5a) == *(char *)(param_2 + 0x5a))))) &&
         ((*(int *)(param_1 + 0x5c) == *(int *)(param_2 + 0x5c) &&
          (*(int *)(param_1 + 0x54) == *(int *)(param_2 + 0x54))))))))) {
      uVar4 = CONCAT71(uVar5,*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60));
      goto LAB_142520b98;
    }
  }
  uVar4 = 0;
LAB_142520b98:
  return uVar4 & 0xffffffff;
}



// FUNCTION 142520bb0 FUN_142520bb0 body=400 status=ok
// SIG undefined FUN_142520bb0(void)

void FUN_142520bb0(longlong param_1,double param_2,char param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined1 auStack_a8 [32];
  char local_88;
  double *local_80;
  double local_78;
  double local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x68) == '\0') goto LAB_142520c03;
  local_64 = 0;
  FUN_142520d60(param_1,&local_64);
  if (0 < local_64) goto LAB_142520c03;
  dVar9 = (double)FUN_14257c2c0(*(undefined8 *)(param_1 + 0x88));
  if (param_2 < dVar9) {
LAB_142520c46:
    FUN_14257c160(param_4,*(undefined8 *)(param_1 + 0x88));
  }
  else if (param_3 != '\0') {
    if ((dVar9 == param_2) && (!NAN(dVar9) && !NAN(param_2))) goto LAB_142520c46;
  }
  puVar8 = (undefined8 *)(param_1 + 0x90);
  puVar1 = (undefined8 *)(param_1 + 0x98);
  plVar2 = *(longlong **)(param_1 + 0x90);
  uVar5 = FUN_1425da440(*(undefined8 *)(param_1 + 0x98));
  uVar6 = FUN_1425da430(*(undefined8 *)(param_1 + 0x98));
  local_80 = &local_70;
  local_88 = param_3;
  cVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,uVar6,uVar5);
  plVar2 = *(longlong **)(param_1 + 0x98);
  uVar5 = FUN_1425da440(*(undefined8 *)(param_1 + 0x90));
  uVar6 = FUN_1425da430(*(undefined8 *)(param_1 + 0x90));
  local_80 = &local_78;
  local_88 = param_3;
  cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,uVar6,uVar5);
  if (cVar3 == '\0') {
    puVar7 = puVar8;
    puVar8 = puVar1;
    dVar9 = local_78;
    if (cVar4 == '\0') goto LAB_142520c03;
  }
  else {
    puVar7 = puVar1;
    dVar9 = local_70;
    if (((cVar4 != '\0') && (local_78 <= local_70)) &&
       (puVar7 = puVar8, puVar8 = puVar1, dVar9 = local_78, local_70 <= local_78))
    goto LAB_142520c03;
  }
  FUN_14257c250(param_4,dVar9);
  FUN_14257c1d0(param_4,*puVar7);
  FUN_14257c210(param_4,*puVar8);
LAB_142520c03:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142520d60 FUN_142520d60 body=209 status=ok
// SIG undefined FUN_142520d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142520d60(longlong param_1,int *param_2)

{
  if (0 < *param_2) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c792de0) {
    FUN_144b3d300(&DAT_14c792de0);
    if (DAT_14c792de0 == -1) {
      _DAT_14c792dd0 = 0;
      uRam000000014c792dd8 = 0;
      _DAT_14c792dc0 = 0;
      uRam000000014c792dc8 = 0;
      _DAT_14c792db0 = 0;
      uRam000000014c792db8 = 0;
      _DAT_14c792da0 = 0;
      uRam000000014c792da8 = 0;
      _DAT_14c792d90 = 0;
      uRam000000014c792d98 = 0;
      _Mtx_init_in_situ(&DAT_14c792d90,2);
      atexit((_func_5014 *)&LAB_142520fe0);
      _Init_thread_footer(&DAT_14c792de0);
    }
  }
  FUN_142501320(&DAT_14c792d90);
  if (*(char *)(param_1 + 0x78) == '\0') {
    FUN_142520ff0(param_1,param_2);
  }
  FUN_142501400(&DAT_14c792d90);
  return;
}



// FUNCTION 142520e40 FUN_142520e40 body=385 status=ok
// SIG undefined FUN_142520e40(void)

void FUN_142520e40(longlong param_1,double param_2,char param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined1 auStack_a8 [32];
  char local_88;
  double *local_80;
  double local_78;
  double local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x68) != '\0') {
    local_64 = 0;
    FUN_142520d60(param_1,&local_64);
    if (((local_64 < 1) &&
        (dVar9 = (double)FUN_14257c2c0(*(undefined8 *)(param_1 + 0x88)), dVar9 <= param_2)) &&
       ((param_3 != '\0' || ((dVar9 != param_2 || (NAN(dVar9) || NAN(param_2))))))) {
      puVar8 = (undefined8 *)(param_1 + 0x90);
      puVar1 = (undefined8 *)(param_1 + 0x98);
      plVar2 = *(longlong **)(param_1 + 0x90);
      uVar5 = FUN_1425da440(*(undefined8 *)(param_1 + 0x98));
      uVar6 = FUN_1425da430(*(undefined8 *)(param_1 + 0x98));
      local_80 = &local_70;
      local_88 = param_3;
      cVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,uVar6,uVar5);
      plVar2 = *(longlong **)(param_1 + 0x98);
      uVar5 = FUN_1425da440(*(undefined8 *)(param_1 + 0x90));
      uVar6 = FUN_1425da430(*(undefined8 *)(param_1 + 0x90));
      local_80 = &local_78;
      local_88 = param_3;
      cVar4 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,uVar6,uVar5);
      if (cVar3 == '\0') {
        puVar7 = puVar8;
        puVar8 = puVar1;
        dVar9 = local_78;
        if (cVar4 == '\0') goto LAB_142520eb1;
      }
      else {
        puVar7 = puVar1;
        dVar9 = local_70;
        if (((cVar4 != '\0') && (local_70 <= local_78)) &&
           (puVar7 = puVar8, puVar8 = puVar1, dVar9 = local_78, local_78 <= local_70))
        goto LAB_142520eb1;
      }
      FUN_14257c250(param_4,dVar9);
      FUN_14257c1d0(param_4,*puVar7);
      FUN_14257c210(param_4,*puVar8);
    }
  }
LAB_142520eb1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142520ff0 FUN_142520ff0 body=1869 status=ok
// SIG undefined FUN_142520ff0(void)

void FUN_142520ff0(longlong *param_1,int *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffe98;
  undefined **local_150;
  undefined2 local_148;
  undefined1 local_110 [64];
  undefined1 local_d0 [64];
  double local_90;
  double local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    return;
  }
  if ((char)param_1[0xf] != '\0') {
    return;
  }
  puVar2 = (undefined8 *)param_1[0x10];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x11];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x12];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar1 = (ulonglong *)(param_1 + 0x10);
  puVar2 = (undefined8 *)param_1[0x13];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *puVar1 = 0;
  param_1[0x11] = 0;
  local_150 = &PTR_FUN_149e18960;
  local_148 = 2;
  FUN_1424a7c80(&local_150,param_1 + 1);
  if ((char)param_1[0xd] == '\0') {
    uVar10 = thunk_FUN_1424da030(0x50);
    if (uVar10 != 0) {
      local_78 = uVar10;
      uVar8 = (**(code **)(*param_1 + 0x38))(param_1);
      FUN_1425da4c0(local_78,&local_150,uVar8,0);
      *puVar1 = local_78;
      *(undefined1 *)(param_1 + 0xf) = 1;
      goto LAB_142521712;
    }
    param_1[0x10] = 0;
    goto LAB_142521704;
  }
  cVar4 = ((int)param_1[10] == 2) * '\x02';
  if ((int)param_1[10] == 1) {
    cVar4 = '\x01';
  }
  switch(*(undefined4 *)((longlong)param_1 + 0x6c)) {
  case 1:
    uVar10 = thunk_FUN_1424da030(0x28);
    if (uVar10 != 0) {
      local_78 = uVar10;
      FUN_1425db6d0(uVar10,(int)(char)param_1[9],(int)*(char *)((longlong)param_1 + 0x49),
                    *(undefined4 *)((longlong)param_1 + 0x4c),cVar4);
LAB_142521255:
      lVar11 = thunk_FUN_1424da030(0x60);
      if (lVar11 == 0) {
        param_1[0x13] = 0;
      }
      else {
        lVar5 = param_1[0xc];
        local_80 = lVar11;
        uVar8 = (**(code **)(*param_1 + 0x60))(param_1);
        uVar9 = (**(code **)(*param_1 + 0x38))(param_1);
        FUN_1424a6c90(local_d0,L"(DST)");
        FUN_1424a66c0(local_110,&local_150,local_d0);
        uVar10 = local_78;
        lVar11 = local_80;
        uVar12 = local_78;
        FUN_1425da730(local_80,local_110,uVar9,uVar8,local_78,(int)lVar5,0x7fffffff);
        param_1[0x13] = lVar11;
        FUN_140859a90(local_110);
        FUN_140859a90(local_d0);
        plVar3 = (longlong *)param_1[0x13];
        if (plVar3 != (longlong *)0x0) {
          uVar8 = (**(code **)(*param_1 + 0x38))(param_1);
          (**(code **)(*plVar3 + 0x30))(plVar3,uVar8,0,&local_88);
          cVar4 = (*(int *)((longlong)param_1 + 0x54) == 2) * '\x02';
          if (*(int *)((longlong)param_1 + 0x54) == 1) {
            cVar4 = '\x01';
          }
          switch((int)param_1[0xe]) {
          case 1:
            uVar10 = thunk_FUN_1424da030(0x28);
            if (uVar10 == 0) goto LAB_142521704;
            local_78 = uVar10;
            FUN_1425db6d0(uVar10,(int)(char)param_1[0xb],(int)*(char *)((longlong)param_1 + 0x59),
                          *(undefined4 *)((longlong)param_1 + 0x5c),cVar4);
            uVar10 = local_78;
            break;
          case 2:
            uVar10 = thunk_FUN_1424da030(0x28);
            if (uVar10 == 0) goto LAB_142521704;
            local_78 = uVar10;
            FUN_1425db700(uVar10,(int)(char)param_1[0xb],(int)*(char *)((longlong)param_1 + 0x59),
                          (int)*(char *)((longlong)param_1 + 0x5a),
                          *(undefined4 *)((longlong)param_1 + 0x5c),cVar4);
            uVar10 = local_78;
            break;
          case 3:
            uVar10 = thunk_FUN_1424da030(0x28);
            if (uVar10 == 0) goto LAB_142521704;
            local_78 = uVar10;
            FUN_1425db740(uVar10,(int)(char)param_1[0xb],(int)*(char *)((longlong)param_1 + 0x59),
                          (int)*(char *)((longlong)param_1 + 0x5a),1,
                          *(undefined4 *)((longlong)param_1 + 0x5c),cVar4);
            uVar10 = local_78;
            break;
          case 4:
            uVar10 = thunk_FUN_1424da030(0x28);
            if (uVar10 == 0) goto LAB_142521704;
            local_78 = uVar10;
            FUN_1425db740(uVar10,(int)(char)param_1[0xb],(int)*(char *)((longlong)param_1 + 0x59),
                          (int)*(char *)((longlong)param_1 + 0x5a),uVar12 & 0xffffffffffffff00,
                          *(undefined4 *)((longlong)param_1 + 0x5c),cVar4);
            uVar10 = local_78;
          }
          uVar12 = thunk_FUN_1424da030(0x60);
          if (uVar12 == 0) {
            param_1[0x12] = 0;
          }
          else {
            lVar11 = param_1[0xc];
            local_78 = uVar12;
            uVar8 = (**(code **)(*param_1 + 0x38))(param_1);
            FUN_1424a6c90(local_d0,L"(STD)");
            FUN_1424a66c0(local_110,&local_150,local_d0);
            uVar12 = local_78;
            FUN_1425da730(local_78,local_110,uVar8,0,uVar10,(int)lVar11,0x7fffffff);
            param_1[0x12] = uVar12;
            FUN_140859a90(local_110);
            FUN_140859a90(local_d0);
            plVar3 = (longlong *)param_1[0x12];
            if (plVar3 != (longlong *)0x0) {
              uVar8 = FUN_1425da440(param_1[0x13]);
              uVar9 = (**(code **)(*param_1 + 0x38))(param_1);
              (**(code **)(*plVar3 + 0x30))(plVar3,uVar9,uVar8,&local_90);
              dVar7 = local_88;
              dVar6 = local_90;
              uVar10 = thunk_FUN_1424da030(0x50);
              if (dVar7 <= dVar6) {
                if (uVar10 == 0) goto LAB_1425216f0;
                local_78 = uVar10;
                uVar8 = (**(code **)(*param_1 + 0x38))(param_1);
                FUN_1424a6c90(local_d0,L"(STD)");
                FUN_1424a66c0(local_110,&local_150,local_d0);
                uVar10 = local_78;
                FUN_1425da4c0(local_78,local_110,uVar8,0);
                *puVar1 = uVar10;
                FUN_140859a90(local_110);
                FUN_140859a90(local_d0);
                if (*puVar1 != 0) {
                  uVar10 = thunk_FUN_1424da030(0x20);
                  if (uVar10 == 0) goto LAB_1425216f9;
                  local_78 = uVar10;
                  FUN_14257c070(uVar10,local_88,param_1[0x10],param_1[0x13]);
LAB_1425216dc:
                  param_1[0x11] = local_78;
                  *(undefined1 *)(param_1 + 0xf) = 1;
                  goto LAB_142521712;
                }
              }
              else if (uVar10 == 0) {
LAB_1425216f0:
                *puVar1 = 0;
              }
              else {
                local_78 = uVar10;
                uVar8 = FUN_1425da440(param_1[0x13]);
                uVar9 = (**(code **)(*param_1 + 0x38))(param_1);
                FUN_1424a6c90(local_d0,L"(DST)");
                FUN_1424a66c0(local_110,&local_150,local_d0);
                uVar10 = local_78;
                FUN_1425da4c0(local_78,local_110,uVar9,uVar8);
                *puVar1 = uVar10;
                FUN_140859a90(local_110);
                FUN_140859a90(local_d0);
                if (*puVar1 != 0) {
                  uVar10 = thunk_FUN_1424da030(0x20);
                  if (uVar10 != 0) {
                    local_78 = uVar10;
                    FUN_14257c070(uVar10,local_90,param_1[0x10],param_1[0x12]);
                    goto LAB_1425216dc;
                  }
LAB_1425216f9:
                  param_1[0x11] = 0;
                }
              }
            }
          }
        }
      }
LAB_142521704:
      *param_2 = 7;
      FUN_14251fd40(param_1);
      goto LAB_142521712;
    }
    break;
  case 2:
    uVar10 = thunk_FUN_1424da030(0x28);
    if (uVar10 != 0) {
      local_78 = uVar10;
      FUN_1425db700(uVar10,(int)(char)param_1[9],(int)*(char *)((longlong)param_1 + 0x49),
                    (int)*(char *)((longlong)param_1 + 0x4a),
                    *(undefined4 *)((longlong)param_1 + 0x4c),cVar4);
      goto LAB_142521255;
    }
    break;
  case 3:
    uVar10 = thunk_FUN_1424da030(0x28);
    if (uVar10 != 0) {
      local_78 = uVar10;
      FUN_1425db740(uVar10,(int)(char)param_1[9],(int)*(char *)((longlong)param_1 + 0x49),
                    (int)*(char *)((longlong)param_1 + 0x4a),1,
                    *(undefined4 *)((longlong)param_1 + 0x4c),cVar4);
      goto LAB_142521255;
    }
    break;
  case 4:
    uVar10 = thunk_FUN_1424da030(0x28);
    if (uVar10 != 0) {
      local_78 = uVar10;
      FUN_1425db740(uVar10,(int)(char)param_1[9],(int)*(char *)((longlong)param_1 + 0x49),
                    (int)*(char *)((longlong)param_1 + 0x4a),
                    in_stack_fffffffffffffe98 & 0xffffffffffffff00,
                    *(undefined4 *)((longlong)param_1 + 0x4c),cVar4);
      goto LAB_142521255;
    }
    break;
  default:
    *param_2 = 0x1b;
    goto LAB_142521712;
  }
  *param_2 = 7;
LAB_142521712:
  FUN_140859a90(&local_150);
  return;
}



// FUNCTION 142521740 Unwind@142521740 body=81 status=ok
// SIG undefined Unwind@142521740(void)

void Unwind_142521740(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 1425217a0 Unwind@1425217a0 body=81 status=ok
// SIG undefined Unwind@1425217a0(void)

void Unwind_1425217a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521800 Unwind@142521800 body=78 status=ok
// SIG undefined Unwind@142521800(void)

void Unwind_142521800(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 142521850 Unwind@142521850 body=78 status=ok
// SIG undefined Unwind@142521850(void)

void Unwind_142521850(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1425218a0 Unwind@1425218a0 body=81 status=ok
// SIG undefined Unwind@1425218a0(void)

void Unwind_1425218a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521900 Unwind@142521900 body=81 status=ok
// SIG undefined Unwind@142521900(void)

void Unwind_142521900(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521960 Unwind@142521960 body=81 status=ok
// SIG undefined Unwind@142521960(void)

void Unwind_142521960(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 1425219c0 Unwind@1425219c0 body=81 status=ok
// SIG undefined Unwind@1425219c0(void)

void Unwind_1425219c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521a20 Unwind@142521a20 body=78 status=ok
// SIG undefined Unwind@142521a20(void)

void Unwind_142521a20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 142521a70 Unwind@142521a70 body=78 status=ok
// SIG undefined Unwind@142521a70(void)

void Unwind_142521a70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 142521ac0 Unwind@142521ac0 body=81 status=ok
// SIG undefined Unwind@142521ac0(void)

void Unwind_142521ac0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521b20 Unwind@142521b20 body=81 status=ok
// SIG undefined Unwind@142521b20(void)

void Unwind_142521b20(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521b80 Unwind@142521b80 body=78 status=ok
// SIG undefined Unwind@142521b80(void)

void Unwind_142521b80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 142521bd0 Unwind@142521bd0 body=81 status=ok
// SIG undefined Unwind@142521bd0(void)

void Unwind_142521bd0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521c30 Unwind@142521c30 body=81 status=ok
// SIG undefined Unwind@142521c30(void)

void Unwind_142521c30(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521c90 Unwind@142521c90 body=81 status=ok
// SIG undefined Unwind@142521c90(void)

void Unwind_142521c90(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521cf0 Unwind@142521cf0 body=81 status=ok
// SIG undefined Unwind@142521cf0(void)

void Unwind_142521cf0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521d50 Unwind@142521d50 body=78 status=ok
// SIG undefined Unwind@142521d50(void)

void Unwind_142521d50(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 142521da0 Unwind@142521da0 body=78 status=ok
// SIG undefined Unwind@142521da0(void)

void Unwind_142521da0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 142521df0 Unwind@142521df0 body=81 status=ok
// SIG undefined Unwind@142521df0(void)

void Unwind_142521df0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521e50 Unwind@142521e50 body=78 status=ok
// SIG undefined Unwind@142521e50(void)

void Unwind_142521e50(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 142521ea0 Unwind@142521ea0 body=81 status=ok
// SIG undefined Unwind@142521ea0(void)

void Unwind_142521ea0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 142521f00 Unwind@142521f00 body=81 status=ok
// SIG undefined Unwind@142521f00(void)

void Unwind_142521f00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x108));
  return;
}



// FUNCTION 142521f60 Unwind@142521f60 body=76 status=ok
// SIG undefined Unwind@142521f60(void)

void Unwind_142521f60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 142521fb0 FUN_142521fb0 body=12 status=ok
// SIG undefined FUN_142521fb0(void)

char FUN_142521fb0(longlong param_1)

{
  return (*(char *)(param_1 + 0x68) != '\0') * '\x02';
}



// FUNCTION 142521fc0 FUN_142521fc0 body=131 status=ok
// SIG undefined FUN_142521fc0(void)

void FUN_142521fc0(longlong param_1,undefined8 *param_2,longlong *param_3,uint *param_4,int *param_5
                  )

{
  uint uVar1;
  uint uVar2;
  
  if (0 < *param_5) {
    return;
  }
  FUN_142520d60(param_1,param_5);
  if (0 < *param_5) {
    return;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar2 = 0;
  }
  else {
    if ((int)*param_4 < 1) {
      uVar1 = 0;
      uVar2 = 0;
      if ((int)*param_4 < 1) goto LAB_142522035;
    }
    else {
      *param_3 = *(longlong *)(param_1 + 0x90);
      uVar1 = 1;
      uVar2 = uVar1;
      if ((int)*param_4 < 2) goto LAB_142522035;
    }
    param_3[uVar1] = *(longlong *)(param_1 + 0x98);
    uVar2 = uVar1 + 1;
  }
LAB_142522035:
  *param_4 = uVar2;
  return;
}



// FUNCTION 142522050 FUN_142522050 body=162 status=ok
// SIG undefined FUN_142522050(void)

undefined8 * FUN_142522050(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::SimpleTimeZone::vftable;
  puVar1 = (undefined8 *)param_1[0x10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x11];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x12];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x13];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  thunk_FUN_1424b72e0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142522100 thunk_FUN_1424b79b0 body=5 status=ok
// SIG undefined thunk_FUN_1424b79b0(void)

void thunk_FUN_1424b79b0(longlong *param_1,double param_2,char param_3,int *param_4,int *param_5,
                        int *param_6)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined1 auStack_d8 [32];
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  int iStack_a8;
  int iStack_a0;
  int *piStack_98;
  undefined1 auStack_84 [4];
  undefined4 uStack_80;
  int iStack_7c;
  uint uStack_78;
  undefined1 auStack_74 [4];
  ulonglong uStack_70;
  
  uStack_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_6 < 1) {
    iVar2 = (**(code **)(*param_1 + 0x38))();
    *param_4 = iVar2;
    if (param_3 == '\0') {
      dVar1 = (double)iVar2;
    }
    else {
      dVar1 = -0.0;
    }
    dVar1 = dVar1 + param_2;
    dVar6 = (double)FUN_1424d97b0(dVar1 / 86400000.0);
    puStack_b8 = auStack_84;
    puStack_b0 = auStack_74;
    FUN_142500f10(dVar6,&uStack_78,&iStack_7c,&uStack_80);
    if (((uStack_78 & 3) != 0) ||
       ((uVar3 = 0xc,
        (uStack_78 * -0x3d70a3d7 + 0x51eb850 >> 2 | uStack_78 * 0x40000000) < 0x28f5c29 &&
        (uStack_78 != ((int)uStack_78 / 400) * 400)))) {
      uVar3 = 0;
    }
    iStack_a0 = (int)(char)(&DAT_1499d7ed0)[(ulonglong)uVar3 + (longlong)iStack_7c];
    piStack_98 = param_6;
    puStack_b0 = (undefined1 *)CONCAT71(puStack_b0._1_7_,auStack_84[0]);
    puStack_b8 = (undefined1 *)CONCAT44(puStack_b8._4_4_,uStack_80);
    iStack_a8 = (int)(dVar1 - dVar6 * 86400000.0);
    iVar4 = (**(code **)(*param_1 + 0x20))(param_1,CONCAT71((uint7)(uint3)((uint)uStack_80 >> 8),1))
    ;
    iVar2 = *param_4;
    iVar5 = iVar4 - iVar2;
    *param_5 = iVar5;
    if ((param_3 != '\0') && (iVar4 != iVar2)) {
      dVar1 = dVar1 - (double)iVar5;
      dVar6 = (double)FUN_1424d97b0(dVar1 / 86400000.0);
      puStack_b8 = auStack_84;
      puStack_b0 = auStack_74;
      FUN_142500f10(dVar6,&uStack_78,&iStack_7c,&uStack_80);
      if (((uStack_78 & 3) != 0) ||
         ((uVar3 = 0xc,
          (uStack_78 * -0x3d70a3d7 + 0x51eb850 >> 2 | uStack_78 * 0x40000000) < 0x28f5c29 &&
          (uStack_78 != ((int)uStack_78 / 400) * 400)))) {
        uVar3 = 0;
      }
      iStack_a0 = (int)(char)(&DAT_1499d7ed0)[(ulonglong)uVar3 + (longlong)iStack_7c];
      piStack_98 = param_6;
      puStack_b0 = (undefined1 *)CONCAT71(puStack_b0._1_7_,auStack_84[0]);
      puStack_b8 = (undefined1 *)CONCAT44(puStack_b8._4_4_,uStack_80);
      iStack_a8 = (int)(dVar1 - dVar6 * 86400000.0);
      iVar2 = (**(code **)(*param_1 + 0x20))
                        (param_1,CONCAT71((uint7)(uint3)((uint)uStack_80 >> 8),1));
      *param_5 = iVar2 - *param_4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_70 ^ (ulonglong)auStack_d8);
}



// FUNCTION 142522110 FUN_142522110 body=221 status=ok
// SIG undefined FUN_142522110(void)

undefined8 * FUN_142522110(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*param_2 < 1) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      *param_2 = 7;
    }
    else {
      *puVar2 = icu_64::GMTOffsetField::vftable;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
      if (*(short *)(param_1 + 8) < 0) {
        iVar1 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar1 = (int)*(short *)(param_1 + 8) >> 5;
      }
      lVar3 = FUN_1424da030((longlong)iVar1 * 2 + 2);
      puVar2[1] = lVar3;
      if (lVar3 != 0) {
        if ((*(ushort *)(param_1 + 8) & 0x11) == 0) {
          if ((*(ushort *)(param_1 + 8) & 2) == 0) {
            param_1 = *(longlong *)(param_1 + 0x18);
          }
          else {
            param_1 = param_1 + 10;
          }
        }
        else {
          param_1 = 0;
        }
        FUN_142504720(lVar3,param_1,iVar1);
        *(undefined2 *)(puVar2[1] + (longlong)iVar1 * 2) = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        return puVar2;
      }
      *param_2 = 7;
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425221f0 FUN_1425221f0 body=8 status=ok
// SIG undefined FUN_1425221f0(void)

undefined * FUN_1425221f0(void)

{
  return &DAT_14c792de8;
}



// FUNCTION 142522200 FUN_142522200 body=1586 status=ok
// SIG undefined FUN_142522200(void)

undefined8 * FUN_142522200(undefined8 *param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  char *_Str;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  int iVar17;
  bool bVar18;
  int local_128 [42];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_142537a10();
  *param_1 = icu_64::TimeZoneFormat::vftable;
  puVar1 = param_1 + 0x29;
  local_50 = param_1;
  FUN_1424a3ce0(puVar1,param_2);
  puVar2 = local_50;
  local_50[0x46] = 0;
  local_50[0x47] = 0;
  local_50[0x48] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_50 + 0x49) = 2;
  local_50[0x50] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_50 + 0x51) = 2;
  local_50[0x58] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_50 + 0x59) = 2;
  local_50[0x60] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_50 + 0x61) = 2;
  local_50[0x68] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_50 + 0x69) = 2;
  local_50[0x70] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_50 + 0x71) = 2;
  local_50[0x78] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_50 + 0x79) = 2;
  local_50[0x85] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_50 + 0x86) = 2;
  *(undefined4 *)(local_50 + 0x8d) = 0;
  local_50[0x8e] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_50 + 0x8f) = 2;
  local_50[0x96] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_50 + 0x97) = 2;
  local_50[0xa5] = 0;
  local_50[0xa2] = 0;
  local_50[0xa3] = 0;
  local_50[0xa0] = 0;
  local_50[0xa1] = 0;
  local_50[0x9e] = 0;
  local_50[0x9f] = 0;
  _Str = (char *)((longlong)local_50 + 0x162);
  sVar6 = strlen(_Str);
  local_60 = puVar1;
  if ((int)sVar6 == 0) {
    FUN_1424d43b0(puVar2[0x2e],local_128,0x9d,param_3);
    iVar17 = FUN_1424e8d90(local_128,puVar2 + 0x45,4,param_3);
    if (0 < *param_3) {
      return puVar2;
    }
    *(undefined1 *)((longlong)puVar2 + (longlong)iVar17 + 0x228) = 0;
  }
  else if ((int)sVar6 < 4) {
    strcpy((char *)(puVar2 + 0x45),_Str);
  }
  else {
    *(char *)(puVar2 + 0x45) = '\0';
  }
  local_80 = puVar2 + 0x48;
  local_58 = puVar2 + 0x50;
  local_68 = puVar2 + 0x85;
  local_78 = puVar2 + 0x8e;
  local_70 = puVar2 + 0x96;
  uVar7 = FUN_142529aa0(param_2,param_3);
  local_50[0x46] = uVar7;
  if (0 < *param_3) {
    return local_50;
  }
  uVar7 = FUN_1424ebfe0("icudt64l-zone",*(undefined8 *)(param_2 + 0x28),param_3);
  lVar15 = 0;
  uVar8 = FUN_1424ec1c0(uVar7,"zoneStrings",0,param_3);
  pwVar16 = (wchar_t *)0x0;
  if (*param_3 < 1) {
    pwVar9 = (wchar_t *)FUN_1424ec010(uVar8,"gmtFormat",local_128,param_3);
    pwVar16 = (wchar_t *)0x0;
    if (0 < local_128[0]) {
      pwVar16 = pwVar9;
    }
    uVar10 = FUN_1424ec010(uVar8,"gmtZeroFormat",local_128,param_3);
    if (0 < local_128[0]) {
      FUN_1424a8f10(local_68,1,uVar10);
    }
    lVar11 = FUN_1424ec010(uVar8,"hourFormat",local_128,param_3);
    lVar15 = 0;
    if (0 < local_128[0]) {
      lVar15 = lVar11;
    }
    FUN_1424ea9f0(uVar8);
    FUN_1424ea9f0(uVar7);
  }
  pwVar9 = L"GMT{0}";
  if (pwVar16 != (wchar_t *)0x0) {
    pwVar9 = pwVar16;
  }
  FUN_1424a7060(local_128,1,pwVar9,0xffffffff);
  FUN_1425229c0(local_50,local_128,param_3);
  FUN_140859a90(local_128);
  if (lVar15 == 0) {
LAB_1425225d9:
    FUN_1424a8f10(local_50 + 0x70,1,&DAT_1499dc25e,0xffffffff);
    FUN_1424a8f10(local_58,1,L"+H:mm",0xffffffff);
    FUN_1424a8f10(local_50 + 0x58,1,L"+H:mm:ss",0xffffffff);
    FUN_1424a8f10(local_50 + 0x78,1,&DAT_1499dc282,0xffffffff);
    FUN_1424a8f10(local_50 + 0x60,1,L"-H:mm",0xffffffff);
    FUN_1424a8f10(local_50 + 0x68,1,L"-H:mm:ss",0xffffffff);
  }
  else {
    lVar11 = FUN_142503f80(lVar15,0x3b);
    if (lVar11 == 0) goto LAB_1425225d9;
    local_128[0] = 0;
    FUN_1424a8f10(local_58,0,lVar15,(ulonglong)(lVar11 - lVar15) >> 1);
    puVar1 = local_50 + 0x60;
    FUN_1424a8f10(puVar1,1,lVar11 + 2,0xffffffff);
    FUN_142522b20(local_58,local_50 + 0x58,local_128);
    FUN_142522b20(puVar1,local_50 + 0x68,local_128);
    FUN_142522df0(local_58,local_50 + 0x70,local_128);
    FUN_142522df0(puVar1,local_50 + 0x78,local_128);
    if (0 < local_128[0]) goto LAB_1425225d9;
  }
  puVar2 = local_50;
  puVar1 = local_50 + 0x80;
  lVar15 = 0;
  puVar14 = local_50;
  do {
    if ((uint)lVar15 < 6) {
      uVar7 = FUN_142523ae0(puVar14 + lVar15 * 8 + 0x50,(&DAT_1499dc3a0)[(int)(uint)lVar15],param_3)
      ;
      local_50[lVar15 + 0x9e] = uVar7;
      puVar14 = local_50;
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 6);
  *(undefined1 *)(puVar14 + 0xa4) = 0;
  lVar15 = 0;
  do {
    lVar11 = local_50[lVar15 + 0x9e];
    if (0 < *(int *)(lVar11 + 8)) {
      iVar17 = 0;
      bVar18 = false;
      do {
        lVar12 = FUN_142516630(lVar11,iVar17);
        if (*(int *)(lVar12 + 0x10) == 0) {
          if (bVar18) break;
          bVar18 = false;
        }
        else {
          if (bVar18) {
            *(undefined1 *)(local_50 + 0xa4) = 1;
            goto LAB_142522775;
          }
          bVar18 = *(int *)(lVar12 + 0x10) == 1;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < *(int *)(lVar11 + 8));
      if (*(char *)(local_50 + 0xa4) != '\0') break;
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 6);
LAB_142522775:
  plVar13 = (longlong *)FUN_142540ae0(param_2,param_3);
  if ((plVar13 != (longlong *)0x0) && (cVar3 = FUN_1425410d0(plVar13), cVar3 == '\0')) {
    (**(code **)(*plVar13 + 0x10))(plVar13,local_128);
    iVar17 = FUN_1424a8140(local_128,0,0x7fffffff);
    if (iVar17 == 10) {
      lVar15 = 0;
      uVar5 = 0;
      do {
        uVar4 = FUN_1424a8030(local_128,uVar5);
        *(undefined4 *)((longlong)puVar1 + lVar15 * 4) = uVar4;
        uVar5 = FUN_1424a81b0(local_128,uVar5,1);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 10);
      FUN_140859a90(local_128);
      goto LAB_142522822;
    }
    FUN_140859a90(local_128);
  }
  puVar2[0x82] = 0x3500000034;
  puVar2[0x83] = 0x3700000036;
  *(undefined4 *)puVar1 = 0x30;
  *(undefined4 *)((longlong)puVar2 + 0x404) = 0x31;
  *(undefined4 *)(puVar2 + 0x81) = 0x32;
  *(undefined4 *)((longlong)puVar2 + 0x40c) = 0x33;
  puVar2[0x84] = 0x3900000038;
LAB_142522822:
  puVar1 = local_50;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)*plVar13)(plVar13,1);
  }
  return puVar1;
}



// FUNCTION 142522850 Unwind@142522850 body=55 status=ok
// SIG undefined Unwind@142522850(void)

void Unwind_142522850(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142522890 Unwind@142522890 body=164 status=ok
// SIG undefined Unwind@142522890(void)

void Unwind_142522890(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0xd8));
  FUN_140859a90(*(undefined8 *)(param_2 + 0xd0));
  FUN_140859a90(*(undefined8 *)(param_2 + 0xe0));
  lVar1 = *(longlong *)(param_2 + 0xf8);
  FUN_140859a90(lVar1 + 0x3c0);
  FUN_140859a90(lVar1 + 0x380);
  FUN_140859a90(lVar1 + 0x340);
  FUN_140859a90(lVar1 + 0x300);
  FUN_140859a90(lVar1 + 0x2c0);
  FUN_140859a90(*(undefined8 *)(param_2 + 0xf0));
  FUN_140859a90(*(undefined8 *)(param_2 + 200));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 142522940 Unwind@142522940 body=55 status=ok
// SIG undefined Unwind@142522940(void)

void Unwind_142522940(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0xf8));
  return;
}



// FUNCTION 142522980 Unwind@142522980 body=55 status=ok
// SIG undefined Unwind@142522980(void)

void Unwind_142522980(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425229c0 FUN_1425229c0 body=250 status=ok
// SIG undefined FUN_1425229c0(void)

void FUN_1425229c0(longlong param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_78 [64];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    if (*(short *)(param_2 + 8) < 0) {
      uVar1 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar1 = (int)*(short *)(param_2 + 8) >> 5;
    }
    uVar3 = (int)uVar1 >> 0x1f & uVar1;
    iVar2 = FUN_1424a8860(param_2,L"{0}mm",0,3,uVar3,uVar1 - uVar3);
    if (iVar2 < 0) {
      *param_3 = 1;
    }
    else {
      FUN_1424a7600(param_1 + 0x240,param_2,0);
      FUN_1424a84d0(param_2,local_78,0,iVar2);
      FUN_142528f50(local_78,param_1 + 0x470);
      FUN_140859a90(local_78);
      FUN_1424a84d0(param_2,local_78,iVar2 + 3,0x7fffffff);
      FUN_142528f50(local_78,param_1 + 0x4b0);
      FUN_140859a90(local_78);
    }
  }
  return;
}



// FUNCTION 142522ac0 Unwind@142522ac0 body=44 status=ok
// SIG undefined Unwind@142522ac0(void)

void Unwind_142522ac0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142522af0 Unwind@142522af0 body=44 status=ok
// SIG undefined Unwind@142522af0(void)

void Unwind_142522af0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142522b20 FUN_142522b20 body=477 status=ok
// SIG undefined FUN_142522b20(void)

undefined8 FUN_142522b20(longlong param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined **local_c0;
  short local_b8;
  int local_b4;
  undefined *local_78;
  undefined1 local_70 [8];
  short local_68;
  int local_64;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1424a7130(param_2);
  if (*param_3 < 1) {
    if (*(short *)(param_1 + 8) < 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar1 = (int)*(short *)(param_1 + 8) >> 5;
    }
    uVar4 = (int)uVar1 >> 0x1f & uVar1;
    iVar2 = FUN_1424a8860(param_1,L"mm",0,2,uVar4,uVar1 - uVar4);
    if (iVar2 < 0) {
      *param_3 = 1;
    }
    else {
      local_c0 = &PTR_FUN_149e18960;
      local_b8 = 2;
      FUN_1424a84d0(param_1,local_70,0,iVar2);
      iVar3 = local_64;
      if (-1 < local_68) {
        iVar3 = (int)local_68 >> 5;
      }
      iVar3 = FUN_1424a8ab0(local_70,0x48,0,iVar3);
      FUN_140859a90(local_70);
      if (-1 < iVar3) {
        FUN_1424a84d0(param_1,local_70,iVar3 + 1,iVar2 - (iVar3 + 1));
        FUN_1424a7ca0(&local_c0,local_70);
        FUN_140859a90(local_70);
      }
      FUN_1424a84d0(param_1,local_70,0,iVar2 + 2);
      FUN_1424a7600(param_2,local_70,0);
      FUN_140859a90(local_70);
      if (-1 < local_b8) {
        local_b4 = (int)local_b8 >> 5;
      }
      FUN_1424a9690(param_2,&local_c0,0,local_b4);
      FUN_1424a6cf0(param_2,&DAT_1499dc388,0,0xffffffff);
      local_78 = &DAT_1499dc388;
      FUN_1424a84d0(param_1,local_70,iVar2 + 2,0x7fffffff);
      if (-1 < local_68) {
        local_64 = (int)local_68 >> 5;
      }
      FUN_1424a9690(param_2,local_70,0,local_64);
      FUN_140859a90(local_70);
      FUN_140859a90(&local_c0);
    }
  }
  return param_2;
}



// FUNCTION 142522d00 Unwind@142522d00 body=43 status=ok
// SIG undefined Unwind@142522d00(void)

void Unwind_142522d00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x88);
  return;
}



// FUNCTION 142522d30 Unwind@142522d30 body=43 status=ok
// SIG undefined Unwind@142522d30(void)

void Unwind_142522d30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x88);
  return;
}



// FUNCTION 142522d60 Unwind@142522d60 body=43 status=ok
// SIG undefined Unwind@142522d60(void)

void Unwind_142522d60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 142522d90 Unwind@142522d90 body=43 status=ok
// SIG undefined Unwind@142522d90(void)

void Unwind_142522d90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x88);
  return;
}



// FUNCTION 142522dc0 Unwind@142522dc0 body=44 status=ok
// SIG undefined Unwind@142522dc0(void)

void Unwind_142522dc0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x78) = &DAT_1499dc388;
  return;
}



// FUNCTION 142522df0 FUN_142522df0 body=428 status=ok
// SIG undefined FUN_142522df0(void)

undefined8 FUN_142522df0(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_80 [8];
  short local_78;
  uint local_74;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1424a7130(param_2);
  if (0 < *param_3) {
    return param_2;
  }
  if (*(short *)(param_1 + 8) < 0) {
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar4 = (int)*(short *)(param_1 + 8) >> 5;
  }
  uVar3 = (int)uVar4 >> 0x1f & uVar4;
  iVar1 = FUN_1424a8860(param_1,L"mm",0,2,uVar3,uVar4 - uVar3);
  if (iVar1 < 0) {
LAB_142522f83:
    *param_3 = 1;
  }
  else {
    local_3c = 0x480048;
    FUN_1424a84d0(param_1,local_80,0,iVar1);
    uVar4 = local_74;
    if (-1 < local_78) {
      uVar4 = (int)local_78 >> 5;
    }
    uVar3 = (int)uVar4 >> 0x1f & uVar4;
    iVar2 = FUN_1424a89d0(local_80,&local_3c,0,2,uVar3,uVar4 - uVar3);
    FUN_140859a90(local_80);
    if (iVar2 < 0) {
      FUN_1424a84d0(param_1,local_80,0,iVar1);
      if (-1 < local_78) {
        local_74 = (int)local_78 >> 5;
      }
      uVar4 = (int)local_74 >> 0x1f & local_74;
      iVar1 = FUN_1424a8ab0(local_80,0x48,uVar4,local_74 - uVar4);
      FUN_140859a90(local_80);
      if (iVar1 < 0) goto LAB_142522f83;
      FUN_1424a84d0(param_1,local_80,0,iVar1 + 1);
      param_2 = FUN_1424a7600(param_2,local_80,0);
    }
    else {
      FUN_1424a84d0(param_1,local_80,0,iVar2 + 2);
      param_2 = FUN_1424a7600(param_2,local_80,0);
    }
    FUN_140859a90(local_80);
  }
  return param_2;
}



// FUNCTION 142522fa0 Unwind@142522fa0 body=47 status=ok
// SIG undefined Unwind@142522fa0(void)

void Unwind_142522fa0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 142522fd0 Unwind@142522fd0 body=47 status=ok
// SIG undefined Unwind@142522fd0(void)

void Unwind_142522fd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 142523000 Unwind@142523000 body=47 status=ok
// SIG undefined Unwind@142523000(void)

void Unwind_142523000(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 142523030 Unwind@142523030 body=47 status=ok
// SIG undefined Unwind@142523030(void)

void Unwind_142523030(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 142523060 FUN_142523060 body=338 status=ok
// SIG undefined FUN_142523060(void)

undefined8 * FUN_142523060(undefined8 *param_1,undefined8 param_2)

{
  FUN_142537a40();
  *param_1 = icu_64::TimeZoneFormat::vftable;
  FUN_1424a3c00();
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x49) = 2;
  param_1[0x50] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x51) = 2;
  param_1[0x58] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x59) = 2;
  param_1[0x60] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x61) = 2;
  param_1[0x68] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x69) = 2;
  param_1[0x70] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x71) = 2;
  param_1[0x78] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x79) = 2;
  param_1[0x85] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x86) = 2;
  param_1[0x8e] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x8f) = 2;
  param_1[0x96] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x97) = 2;
  param_1[0xa5] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  FUN_142523290(param_1,param_2);
  return param_1;
}



// FUNCTION 1425231c0 Unwind@1425231c0 body=149 status=ok
// SIG undefined Unwind@1425231c0(void)

void Unwind_1425231c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0x48));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x40));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  lVar1 = *(longlong *)(param_2 + 0x50);
  FUN_140859a90(lVar1 + 0x3c0);
  FUN_140859a90(lVar1 + 0x380);
  FUN_140859a90(lVar1 + 0x340);
  FUN_140859a90(lVar1 + 0x300);
  FUN_140859a90(lVar1 + 0x2c0);
  FUN_140859a90(lVar1 + 0x280);
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142523260 Unwind@142523260 body=34 status=ok
// SIG undefined Unwind@142523260(void)

void Unwind_142523260(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 142523290 FUN_142523290 body=936 status=ok
// SIG undefined FUN_142523290(void)

void FUN_142523290(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != param_2) {
    puVar1 = *(undefined8 **)(param_1 + 0x230);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x238);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x238) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x528);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x528) = 0;
    FUN_1424a3d10(param_1 + 0x148,param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
    uVar10 = (**(code **)(**(longlong **)(param_2 + 0x230) + 0x18))();
    *(undefined8 *)(param_1 + 0x230) = uVar10;
    if (*(longlong **)(param_2 + 0x238) != (longlong *)0x0) {
      uVar10 = (**(code **)(**(longlong **)(param_2 + 0x238) + 0x18))();
      *(undefined8 *)(param_1 + 0x238) = uVar10;
    }
    FUN_1424a7c80(param_1 + 0x240,param_2 + 0x240);
    FUN_1424a7c80(param_1 + 0x470,param_2 + 0x470);
    FUN_1424a7c80(param_1 + 0x4b0,param_2 + 0x4b0);
    local_4c = 0;
    local_58 = param_1 + 0x280;
    FUN_1424a7c80(local_58,param_2 + 0x280);
    puVar1 = *(undefined8 **)(param_1 + 0x4f0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    FUN_1424a7c80(param_1 + 0x2c0,param_2 + 0x2c0);
    puVar1 = *(undefined8 **)(param_1 + 0x4f8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    FUN_1424a7c80(param_1 + 0x300,param_2 + 0x300);
    puVar1 = *(undefined8 **)(param_1 + 0x500);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x500) = 0;
    FUN_1424a7c80(param_1 + 0x340,param_2 + 0x340);
    puVar1 = *(undefined8 **)(param_1 + 0x508);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x508) = 0;
    FUN_1424a7c80(param_1 + 0x380,param_2 + 0x380);
    puVar1 = *(undefined8 **)(param_1 + 0x510);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x510) = 0;
    FUN_1424a7c80(param_1 + 0x3c0,param_2 + 0x3c0);
    puVar1 = *(undefined8 **)(param_1 + 0x518);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x518) = 0;
    uVar10 = FUN_142523ae0(local_58,1,&local_4c);
    *(undefined8 *)(param_1 + 0x4f0) = uVar10;
    uVar10 = FUN_142523ae0(param_1 + 0x2c0,2,&local_4c);
    *(undefined8 *)(param_1 + 0x4f8) = uVar10;
    uVar10 = FUN_142523ae0(param_1 + 0x300,1,&local_4c);
    *(undefined8 *)(param_1 + 0x500) = uVar10;
    uVar10 = FUN_142523ae0(param_1 + 0x340,2,&local_4c);
    *(undefined8 *)(param_1 + 0x508) = uVar10;
    lVar13 = 0;
    uVar10 = FUN_142523ae0(param_1 + 0x380,0,&local_4c);
    *(undefined8 *)(param_1 + 0x510) = uVar10;
    uVar10 = FUN_142523ae0(param_1 + 0x3c0,0,&local_4c);
    *(undefined8 *)(param_1 + 0x518) = uVar10;
    *(undefined1 *)(param_1 + 0x520) = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x4f0 + lVar13 * 8);
      if (0 < *(int *)(lVar2 + 8)) {
        iVar12 = 0;
        bVar14 = false;
        do {
          lVar11 = FUN_142516630(lVar2,iVar12);
          if (*(int *)(lVar11 + 0x10) == 0) {
            if (bVar14) break;
            bVar14 = false;
          }
          else {
            if (bVar14) {
              *(undefined1 *)(param_1 + 0x520) = 1;
              goto LAB_1425235f5;
            }
            bVar14 = *(int *)(lVar11 + 0x10) == 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(lVar2 + 8));
        if (*(char *)(param_1 + 0x520) != '\0') break;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 6);
LAB_1425235f5:
    FUN_1424a7c80(param_1 + 0x428,param_2 + 0x428);
    uVar3 = *(undefined4 *)(param_2 + 0x404);
    uVar4 = *(undefined4 *)(param_2 + 0x408);
    uVar5 = *(undefined4 *)(param_2 + 0x40c);
    uVar6 = *(undefined4 *)(param_2 + 0x410);
    uVar7 = *(undefined4 *)(param_2 + 0x414);
    uVar8 = *(undefined4 *)(param_2 + 0x418);
    uVar9 = *(undefined4 *)(param_2 + 0x41c);
    *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
    *(undefined4 *)(param_1 + 0x404) = uVar3;
    *(undefined4 *)(param_1 + 0x408) = uVar4;
    *(undefined4 *)(param_1 + 0x40c) = uVar5;
    *(undefined4 *)(param_1 + 0x410) = uVar6;
    *(undefined4 *)(param_1 + 0x414) = uVar7;
    *(undefined4 *)(param_1 + 0x418) = uVar8;
    *(undefined4 *)(param_1 + 0x41c) = uVar9;
    *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_2 + 0x420);
    *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 142523660 FUN_142523660 body=366 status=ok
// SIG undefined FUN_142523660(void)

void FUN_142523660(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::TimeZoneFormat::vftable;
  puVar1 = (undefined8 *)param_1[0x46];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x47];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0xa5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x9e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x9f];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0xa0];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0xa1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0xa2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0xa3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 0x96);
  FUN_140859a90(param_1 + 0x8e);
  FUN_140859a90(param_1 + 0x85);
  FUN_140859a90(param_1 + 0x78);
  FUN_140859a90(param_1 + 0x70);
  FUN_140859a90(param_1 + 0x68);
  FUN_140859a90(param_1 + 0x60);
  FUN_140859a90(param_1 + 0x58);
  FUN_140859a90(param_1 + 0x50);
  FUN_140859a90(param_1 + 0x48);
  FUN_1414b3f60(param_1 + 0x29);
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425237d0 FUN_1425237d0 body=518 status=ok
// SIG undefined FUN_1425237d0(void)

undefined8 FUN_1425237d0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  
  cVar3 = FUN_1424a3f70(param_1 + 0x148,param_2 + 0x148);
  if (cVar3 != '\0') {
    uVar1 = *(ushort *)(param_1 + 0x248);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar8 = *(int *)(param_1 + 0x24c);
      }
      else {
        iVar8 = (int)(short)uVar1 >> 5;
      }
      sVar2 = *(short *)(param_2 + 0x248);
      if (sVar2 < 0) {
        iVar6 = *(int *)(param_2 + 0x24c);
      }
      else {
        iVar6 = (int)sVar2 >> 5;
      }
      if (((int)sVar2 & 1U) != 0) {
        return 0;
      }
      if (iVar8 != iVar6) {
        return 0;
      }
      bVar4 = FUN_1412ae090(param_1 + 0x240,param_2 + 0x240);
    }
    else {
      bVar4 = *(byte *)(param_2 + 0x248) & 1;
    }
    if (bVar4 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x430);
      if ((uVar1 & 1) == 0) {
        if ((short)uVar1 < 0) {
          iVar8 = *(int *)(param_1 + 0x434);
        }
        else {
          iVar8 = (int)(short)uVar1 >> 5;
        }
        sVar2 = *(short *)(param_2 + 0x430);
        if (sVar2 < 0) {
          iVar6 = *(int *)(param_2 + 0x434);
        }
        else {
          iVar6 = (int)sVar2 >> 5;
        }
        if (((int)sVar2 & 1U) != 0) {
          return 0;
        }
        if (iVar8 != iVar6) {
          return 0;
        }
        bVar4 = FUN_1412ae090(param_1 + 0x428,param_2 + 0x428);
      }
      else {
        bVar4 = *(byte *)(param_2 + 0x430) & 1;
      }
      if ((bVar4 != 0) &&
         (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x10))
                            (*(longlong **)(param_1 + 0x230),*(undefined8 *)(param_2 + 0x230)),
         cVar3 != '\0')) {
        lVar7 = param_1 + 0x280;
        lVar9 = param_2 + 0x280;
        uVar5 = 0;
        do {
          uVar1 = *(ushort *)(lVar7 + 8);
          if ((uVar1 & 1) == 0) {
            if ((short)uVar1 < 0) {
              iVar8 = *(int *)(lVar7 + 0xc);
            }
            else {
              iVar8 = (int)(short)uVar1 >> 5;
            }
            sVar2 = *(short *)(lVar9 + 8);
            if (sVar2 < 0) {
              iVar6 = *(int *)(lVar9 + 0xc);
            }
            else {
              iVar6 = (int)sVar2 >> 5;
            }
            if (((int)sVar2 & 1U) != 0) {
              return 0;
            }
            if (iVar8 != iVar6) {
              return 0;
            }
            cVar3 = FUN_1412ae090(lVar7,lVar9);
            bVar11 = cVar3 != '\0';
            if (!bVar11) break;
          }
          else {
            bVar11 = (bool)(*(byte *)(lVar9 + 8) & 1);
            if (bVar11 == false) break;
          }
          lVar7 = lVar7 + 0x40;
          lVar9 = lVar9 + 0x40;
          bVar10 = uVar5 < 5;
          uVar5 = uVar5 + 1;
        } while (bVar10);
        if (bVar11 != false) {
          uVar5 = 0;
          do {
            iVar8 = *(int *)(param_1 + 0x400 + uVar5 * 4);
            iVar6 = *(int *)(param_2 + 0x400 + uVar5 * 4);
            if (8 < uVar5) break;
            uVar5 = uVar5 + 1;
          } while (iVar8 == iVar6);
          return CONCAT71((int7)(uVar5 >> 8),iVar8 == iVar6);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1425239f0 FUN_1425239f0 body=64 status=ok
// SIG undefined FUN_1425239f0(void)

longlong FUN_1425239f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x530);
  if (lVar1 != 0) {
    FUN_142523060(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 142523a30 Unwind@142523a30 body=32 status=ok
// SIG undefined Unwind@142523a30(void)

void Unwind_142523a30(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142523a50 FUN_142523a50 body=94 status=ok
// SIG undefined FUN_142523a50(void)

undefined8 * FUN_142523a50(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x530);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142522200(puVar1,param_1,param_2,param_4,puVar1,uVar2);
    if (*param_2 < 1) {
      return puVar1;
    }
    (**(code **)*puVar1)(puVar1,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142523ab0 Unwind@142523ab0 body=34 status=ok
// SIG undefined Unwind@142523ab0(void)

void Unwind_142523ab0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142523ae0 FUN_142523ae0 body=1361 status=ok
// SIG undefined FUN_142523ae0(void)

undefined8 * FUN_142523ae0(longlong param_1,uint param_2,int *param_3)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  short sVar9;
  uint uVar10;
  bool bVar11;
  undefined1 local_f8 [72];
  undefined1 local_b0 [8];
  ushort local_a8;
  int local_a4;
  longlong local_70;
  uint local_68;
  uint local_64;
  undefined8 *local_60;
  ulonglong local_58;
  short local_4a [5];
  
  local_4a[1] = -2;
  local_4a[2] = -1;
  local_4a[3] = -1;
  local_4a[4] = -1;
  if (*param_3 < 1) {
    local_60 = (undefined8 *)thunk_FUN_1424da030(0x28);
    if (local_60 != (undefined8 *)0x0) {
      uVar10 = 0;
      local_68 = param_2;
      FUN_142515f20(local_60,&LAB_1425290a0,0,param_3);
      FUN_1424a7170(local_b0,local_f8,0,0x20);
      local_70 = param_1 + 10;
      local_58 = 1;
      bVar11 = false;
      bVar3 = false;
      local_64 = 0;
      uVar4 = 0;
LAB_142523ba0:
      sVar1 = *(short *)(param_1 + 8);
      if (sVar1 < 0) {
        uVar7 = *(uint *)(param_1 + 0xc);
        if ((int)uVar10 < (int)uVar7) goto LAB_142523bce;
LAB_142523f26:
        if (0 < *param_3) {
LAB_14252400c:
          (**(code **)*local_60)(local_60,1);
          puVar5 = (undefined8 *)0x0;
LAB_14252401c:
          FUN_140859a90(local_b0);
          return puVar5;
        }
        switch(uVar4) {
        case 0:
          if (-1 < (short)local_a8) {
            local_a4 = (int)(short)local_a8 >> 5;
          }
          if (0 < local_a4) {
            uVar6 = FUN_142522110(local_b0,param_3);
            FUN_1425163e0(local_60,uVar6,param_3);
          }
LAB_142523fe5:
          if (*param_3 < 1) {
            uVar4 = 0;
            if (local_68 < 3) {
              uVar4 = *(uint *)(&DAT_1499dc3b8 + (longlong)(int)local_68 * 4);
            }
            puVar5 = local_60;
            if (local_64 == uVar4) goto LAB_14252401c;
          }
          goto LAB_14252400c;
        case 1:
          if ((int)local_58 - 1U < 2) {
LAB_142523f52:
            puVar5 = (undefined8 *)thunk_FUN_1424da030(0x18);
            if (puVar5 == (undefined8 *)0x0) {
              *param_3 = 7;
            }
            else {
              *puVar5 = icu_64::GMTOffsetField::vftable;
              puVar5[1] = 0;
              *(uint *)(puVar5 + 2) = uVar4;
              *(char *)((longlong)puVar5 + 0x14) = (char)local_58;
            }
            FUN_1425163e0(local_60,puVar5,param_3);
            goto LAB_142523fe5;
          }
          break;
        case 2:
        case 4:
          if ((int)local_58 == 2) goto LAB_142523f52;
          break;
        default:
switchD_142523f4a_caseD_3:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else {
        uVar7 = (int)sVar1 >> 5;
        if ((int)uVar7 <= (int)uVar10) goto LAB_142523f26;
LAB_142523bce:
        sVar9 = -1;
        if (uVar10 < uVar7) {
          lVar8 = local_70;
          if (((int)sVar1 & 2U) == 0) {
            lVar8 = *(longlong *)(param_1 + 0x18);
          }
          sVar9 = *(short *)(lVar8 + (ulonglong)uVar10 * 2);
          if (sVar9 != 0x27) goto LAB_142523c20;
          if (bVar3) {
            local_4a[0] = 0x27;
            FUN_1424a6cf0(local_b0,local_4a,0,1);
            bVar3 = false;
switchD_142523c97_caseD_0:
            bVar11 = bVar11 == false;
            uVar10 = uVar10 + 1;
            goto LAB_142523ba0;
          }
          bVar3 = true;
          switch(uVar4) {
          case 0:
            goto switchD_142523c97_caseD_0;
          case 1:
            if ((int)local_58 - 1U < 2) {
LAB_142523da0:
              if (*param_3 < 1) {
                puVar5 = (undefined8 *)thunk_FUN_1424da030(0x18);
                if (puVar5 == (undefined8 *)0x0) {
                  *param_3 = 7;
                  goto LAB_142523da5;
                }
                *puVar5 = icu_64::GMTOffsetField::vftable;
                puVar5[1] = 0;
                *(uint *)(puVar5 + 2) = uVar4;
                *(char *)((longlong)puVar5 + 0x14) = (char)local_58;
              }
              else {
LAB_142523da5:
                puVar5 = (undefined8 *)0x0;
              }
              FUN_1425163e0(local_60,puVar5);
              uVar4 = 0;
              if (0 < *param_3) goto LAB_14252400c;
              goto switchD_142523c97_caseD_0;
            }
            break;
          case 2:
          case 4:
            if ((int)local_58 == 2) goto LAB_142523da0;
            break;
          default:
            goto switchD_142523f4a_caseD_3;
          }
        }
        else {
LAB_142523c20:
          if (bVar11) {
            local_4a[0] = sVar9;
            FUN_1424a6cf0(local_b0,local_4a,0,1);
            bVar11 = true;
            bVar3 = false;
            uVar10 = uVar10 + 1;
            goto LAB_142523ba0;
          }
          if (sVar9 != 0x48) {
            if (sVar9 == 0x73) {
              uVar7 = 4;
              if (uVar4 == 4) goto LAB_142523b82;
              goto LAB_142523cc5;
            }
            if (sVar9 == 0x6d) {
              uVar7 = 2;
              if (uVar4 == 2) goto LAB_142523b82;
              goto LAB_142523cc5;
            }
            switch(uVar4) {
            case 1:
              if (1 < (int)local_58 - 1U) goto LAB_142523fa4;
LAB_142523e12:
              if (*param_3 < 1) {
                puVar5 = (undefined8 *)thunk_FUN_1424da030(0x18);
                if (puVar5 == (undefined8 *)0x0) {
                  *param_3 = 7;
                  puVar5 = (undefined8 *)0x0;
                }
                else {
                  *puVar5 = icu_64::GMTOffsetField::vftable;
                  puVar5[1] = 0;
                  *(uint *)(puVar5 + 2) = uVar4;
                  *(char *)((longlong)puVar5 + 0x14) = (char)local_58;
                }
              }
              else {
                puVar5 = (undefined8 *)0x0;
              }
              FUN_1425163e0(local_60,puVar5,param_3);
              if (0 < *param_3) goto LAB_14252400c;
            case 0:
              local_4a[0] = sVar9;
              FUN_1424a6cf0(local_b0,local_4a,0,1);
              uVar4 = 0;
              uVar10 = uVar10 + 1;
              bVar11 = false;
              bVar3 = false;
              break;
            case 2:
            case 4:
              if ((int)local_58 == 2) goto LAB_142523e12;
              goto LAB_142523fa4;
            default:
              goto switchD_142523f4a_caseD_3;
            }
            goto LAB_142523ba0;
          }
          uVar7 = 1;
          if (uVar4 == 1) {
LAB_142523b82:
            local_58 = (ulonglong)((int)local_58 + 1);
            bVar11 = false;
            uVar10 = uVar10 + 1;
            bVar3 = false;
            goto LAB_142523ba0;
          }
LAB_142523cc5:
          switch(uVar4) {
          case 0:
            if ((short)local_a8 < 0) {
              if (0 < local_a4) {
LAB_142523e65:
                uVar6 = FUN_142522110(local_b0,param_3);
                FUN_1425163e0(local_60,uVar6);
                if (0 < *param_3) goto LAB_14252400c;
                uVar2 = local_a8 & 1;
                local_a8 = local_a8 & 0x1f;
                if (uVar2 != 0) {
                  local_a8 = 2;
                }
              }
            }
            else if (0 < (short)local_a8 >> 5) goto LAB_142523e65;
LAB_142523ebb:
            local_64 = local_64 | uVar7;
            local_58 = 1;
            bVar11 = false;
            uVar10 = uVar10 + 1;
            bVar3 = false;
            uVar4 = uVar7;
            goto LAB_142523ba0;
          case 1:
            if ((int)local_58 - 1U < 2) {
LAB_142523d45:
              if (*param_3 < 1) {
                puVar5 = (undefined8 *)thunk_FUN_1424da030(0x18);
                if (puVar5 == (undefined8 *)0x0) {
                  *param_3 = 7;
                  puVar5 = (undefined8 *)0x0;
                }
                else {
                  *puVar5 = icu_64::GMTOffsetField::vftable;
                  puVar5[1] = 0;
                  *(uint *)(puVar5 + 2) = uVar4;
                  *(char *)((longlong)puVar5 + 0x14) = (char)local_58;
                }
              }
              else {
                puVar5 = (undefined8 *)0x0;
              }
              FUN_1425163e0(local_60,puVar5);
              if (0 < *param_3) goto LAB_14252400c;
              goto LAB_142523ebb;
            }
            break;
          case 2:
          case 4:
            if ((int)local_58 == 2) goto LAB_142523d45;
            break;
          default:
            goto switchD_142523f4a_caseD_3;
          }
        }
      }
LAB_142523fa4:
      *param_3 = 1;
      goto LAB_14252400c;
    }
    *param_3 = 7;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142524050 Unwind@142524050 body=55 status=ok
// SIG undefined Unwind@142524050(void)

void Unwind_142524050(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xb8));
  return;
}



// FUNCTION 142524090 Unwind@142524090 body=55 status=ok
// SIG undefined Unwind@142524090(void)

void Unwind_142524090(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 1425240d0 FUN_1425240d0 body=901 status=ok
// SIG undefined FUN_1425240d0(void)

longlong FUN_1425240d0(undefined8 param_1,uint param_2,longlong *param_3,undefined8 param_4,
                      longlong param_5,int *param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffff88;
  uint uVar11;
  undefined8 uVar10;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar12;
  int local_54;
  int local_50;
  int local_4c [5];
  
  uVar9 = (undefined4)param_4;
  uVar11 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  if (param_6 != (int *)0x0) {
    *param_6 = 0;
  }
  uVar8 = (ulonglong)param_2;
  switch(uVar8) {
  case 0:
    FUN_142524460(param_1,param_3,1,uVar9,param_5);
    uVar1 = *(ushort *)(param_5 + 8);
    break;
  case 1:
    local_54 = 0;
    uVar2 = FUN_142526610(param_1,&local_54);
    if (local_54 < 1) {
      uVar6 = 2;
      goto LAB_142524313;
    }
LAB_1425241a1:
    FUN_1424a7130(param_5);
    uVar1 = *(ushort *)(param_5 + 8);
    break;
  case 2:
    local_54 = 0;
    uVar2 = FUN_142526610(param_1,&local_54);
    if (0 < local_54) goto LAB_1425241a1;
    uVar6 = 4;
LAB_142524313:
    FUN_1425dec90(uVar2,param_3,uVar6,uVar9,param_5);
    uVar1 = *(ushort *)(param_5 + 8);
    break;
  case 3:
    FUN_142524570(param_1,param_3,2,4,param_4,param_5,param_6);
    uVar1 = *(ushort *)(param_5 + 8);
    break;
  case 4:
    FUN_142524570(param_1,param_3,0x10,0x20,param_4,param_5,param_6);
  default:
    uVar1 = *(ushort *)(param_5 + 8);
    break;
  case 0x11:
    FUN_1424a7c80(param_5,param_3 + 1);
    return param_5;
  case 0x12:
    puVar3 = (undefined *)FUN_14252c510(param_3);
    puVar4 = &DAT_1499dc2e8;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
    }
    FUN_1424a8e40(param_5);
    if (*(short *)(param_5 + 8) < 0) {
      iVar5 = *(int *)(param_5 + 0xc);
    }
    else {
      iVar5 = (int)*(short *)(param_5 + 8) >> 5;
    }
    FUN_1424a9130(param_5,0,iVar5,puVar4,(ulonglong)uVar11 << 0x20,CONCAT44(uVar12,0xffffffff));
    return param_5;
  case 0x13:
    FUN_142524720(param_1,param_3,param_5);
    return param_5;
  }
  if (0x1f < uVar1) {
    return param_5;
  }
  local_54 = 0;
  (**(code **)(*param_3 + 0x18))(param_3,uVar9,0,local_4c,&local_50,&local_54);
  if (0 < local_54) {
    return param_5;
  }
  if (0x10 < param_2) goto LAB_142524429;
  switch(uVar8) {
  default:
    uVar2 = 0;
    break;
  case 2:
  case 4:
  case 6:
    uVar2 = 1;
    break;
  case 7:
    uVar2 = 1;
    uVar10 = 1;
    goto LAB_1425243ab;
  case 8:
    uVar2 = 1;
    uVar10 = 1;
    uVar6 = 1;
    goto LAB_142524421;
  case 9:
    uVar2 = 1;
    goto LAB_1425243a6;
  case 10:
    uVar2 = 1;
    goto LAB_1425243c2;
  case 0xb:
    uVar2 = 0;
LAB_1425243a6:
    uVar10 = 0;
LAB_1425243ab:
    uVar6 = 1;
    uVar7 = 1;
LAB_142524424:
    FUN_142526ed0((longlong)&switchD_142524274::switchdataD_1499dc66c +
                  (longlong)(int)(&switchD_142524274::switchdataD_1499dc66c)[uVar8],
                  local_50 + local_4c[0],uVar6,uVar7,uVar10,uVar2,param_5,&local_54);
    goto LAB_142524429;
  case 0xc:
    uVar2 = 0;
LAB_1425243c2:
    uVar10 = 0;
    uVar6 = 1;
LAB_142524421:
    uVar7 = 0;
    goto LAB_142524424;
  case 0xd:
    uVar2 = 1;
    goto LAB_1425243fd;
  case 0xe:
    uVar2 = 1;
    goto LAB_142524419;
  case 0xf:
    uVar2 = 0;
LAB_1425243fd:
    uVar10 = 0;
    uVar6 = 0;
    uVar7 = 1;
    goto LAB_142524424;
  case 0x10:
    uVar2 = 0;
LAB_142524419:
    uVar10 = 0;
    uVar6 = 0;
    goto LAB_142524421;
  }
  FUN_1425271f0(param_1,local_50 + local_4c[0],uVar2,param_5,&local_54);
LAB_142524429:
  if (param_6 != (int *)0x0) {
    *param_6 = 2 - (uint)(local_50 == 0);
  }
  return param_5;
}



// FUNCTION 142524460 FUN_142524460 body=197 status=ok
// SIG undefined FUN_142524460(void)

undefined8
FUN_142524460(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_88 [68];
  int local_44 [7];
  
  local_44[1] = -2;
  local_44[2] = -1;
  local_44[0] = 0;
  uVar1 = FUN_142526610(param_1,local_44);
  if (local_44[0] < 1) {
    if (param_3 != 1) {
      uVar1 = FUN_1425dec90(uVar1,param_2,param_3,param_4,param_5);
      return uVar1;
    }
    lVar2 = FUN_14252a7c0(param_2);
    if (lVar2 != 0) {
      FUN_1424a7060(local_88,1,lVar2,0xffffffff);
      uVar1 = FUN_1425deca0(uVar1,local_88,param_5);
      FUN_140859a90(local_88);
      return uVar1;
    }
  }
  FUN_1424a7130(param_5);
  return param_5;
}



// FUNCTION 142524530 Unwind@142524530 body=52 status=ok
// SIG undefined Unwind@142524530(void)

void Unwind_142524530(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142524570 FUN_142524570 body=299 status=ok
// SIG undefined FUN_142524570(void)

longlong FUN_142524570(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,longlong param_6,int *param_7)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_98 [68];
  int local_54 [7];
  
  local_54[1] = -2;
  local_54[2] = -1;
  if (*(longlong *)(param_1 + 0x230) != 0) {
    local_54[0] = 0;
    cVar2 = (**(code **)(*param_2 + 0x48))(param_2,param_5,local_54);
    lVar3 = FUN_14252a7c0(param_2);
    if ((lVar3 != 0) && (local_54[0] < 1)) {
      plVar1 = *(longlong **)(param_1 + 0x230);
      if (cVar2 == '\0') {
        FUN_1424a7060(local_98,1,lVar3,0xffffffff);
        (**(code **)(*plVar1 + 0x58))(plVar1,local_98,param_3,param_5,param_6);
      }
      else {
        FUN_1424a7060(local_98,1,lVar3,0xffffffff);
        (**(code **)(*plVar1 + 0x58))(plVar1,local_98,param_4,param_5,param_6);
      }
      FUN_140859a90(local_98);
      if (param_7 == (int *)0x0) {
        return param_6;
      }
      if (*(ushort *)(param_6 + 8) < 0x20) {
        return param_6;
      }
      *param_7 = 2 - (uint)(cVar2 == '\0');
      return param_6;
    }
  }
  FUN_1424a7130(param_6);
  return param_6;
}



// FUNCTION 1425246a0 Unwind@1425246a0 body=60 status=ok
// SIG undefined Unwind@1425246a0(void)

void Unwind_1425246a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425246e0 Unwind@1425246e0 body=60 status=ok
// SIG undefined Unwind@1425246e0(void)

void Unwind_1425246e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142524720 FUN_142524720 body=398 status=ok
// SIG undefined FUN_142524720(void)

longlong FUN_142524720(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_1a8 [256];
  undefined1 local_a8 [64];
  undefined1 local_68 [8];
  short local_60;
  int local_5c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1424a7170(local_68,local_1a8,0,0x80);
  lVar2 = FUN_14252a7c0(param_2);
  if (lVar2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x230);
    FUN_1424a7060(local_a8,1,lVar2,0xffffffff);
    (**(code **)(*plVar1 + 0x50))(plVar1,local_a8,local_68);
    FUN_140859a90(local_a8);
  }
  if (local_60 < 0) {
    if (0 < local_5c) {
LAB_14252483f:
      FUN_1424a7600(param_3,local_68,0);
      goto LAB_142524893;
    }
  }
  else if (0 < local_60 >> 5) goto LAB_14252483f;
  plVar1 = *(longlong **)(param_1 + 0x230);
  FUN_1424a7060(local_a8,1,L"Etc/Unknown",0xffffffff);
  (**(code **)(*plVar1 + 0x50))(plVar1,local_a8,local_68);
  FUN_140859a90(local_a8);
  if (local_60 < 0) {
    if (0 < local_5c) {
LAB_14252485a:
      FUN_1424a7600(param_3,local_68,0);
      goto LAB_142524893;
    }
  }
  else if (0 < local_60 >> 5) goto LAB_14252485a;
  FUN_1424a8e40(param_3);
  if (*(short *)(param_3 + 8) < 0) {
    iVar3 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_3 + 8) >> 5;
  }
  FUN_1424a9130(param_3,0,iVar3,L"Unknown",0,0xffffffff);
LAB_142524893:
  FUN_140859a90(local_68);
  return param_3;
}



// FUNCTION 1425248b0 Unwind@1425248b0 body=42 status=ok
// SIG undefined Unwind@1425248b0(void)

void Unwind_1425248b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x130);
  return;
}



// FUNCTION 1425248e0 Unwind@1425248e0 body=42 status=ok
// SIG undefined Unwind@1425248e0(void)

void Unwind_1425248e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x170);
  return;
}



// FUNCTION 142524910 Unwind@142524910 body=42 status=ok
// SIG undefined Unwind@142524910(void)

void Unwind_142524910(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x130);
  return;
}



// FUNCTION 142524940 FUN_142524940 body=445 status=ok
// SIG undefined FUN_142524940(void)

undefined8
FUN_142524940(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int *param_5
             )

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 in_stack_fffffffffffffe58;
  uint uVar7;
  ulonglong uVar6;
  undefined1 local_198 [256];
  undefined1 local_98 [8];
  short local_90;
  int local_8c;
  int local_58;
  int local_54 [7];
  
  uVar7 = (uint)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  local_54[1] = -2;
  local_54[2] = -1;
  if (*param_5 < 1) {
    uVar5 = thunk_FUN_1424d9690();
    iVar1 = FUN_14252d140(param_2);
    if (iVar1 == 6) {
      uVar2 = FUN_14252d330(param_2);
      uVar6 = (ulonglong)uVar7 << 0x20;
      plVar3 = (longlong *)
               __RTDynamicCast(uVar2,0,&icu_64::UObject::RTTI_Type_Descriptor,
                               &icu_64::TimeZone::RTTI_Type_Descriptor,uVar6);
      if (plVar3 == (longlong *)0x0) {
        lVar4 = __RTDynamicCast(uVar2,0,&icu_64::UObject::RTTI_Type_Descriptor,
                                &icu_64::Calendar::RTTI_Type_Descriptor,uVar6 & 0xffffffff00000000);
        if (lVar4 == 0) {
          return param_3;
        }
        plVar3 = (longlong *)FUN_1424ce780(lVar4);
        uVar5 = FUN_1424cd180(lVar4,param_5);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar5,0,&local_58,local_54,param_5);
      FUN_1424a7170(local_98,local_198,0,0x80);
      FUN_1425271f0(param_1,local_54[0] + local_58,0,local_98,param_5);
      if (*param_5 < 1) {
        iVar1 = local_8c;
        if (-1 < local_90) {
          iVar1 = (int)local_90 >> 5;
        }
        FUN_1424a9690(param_3,local_98,0,iVar1);
        if (*(int *)(param_4 + 8) == 0x11) {
          *(undefined4 *)(param_4 + 0xc) = 0;
          if (-1 < local_90) {
            local_8c = (int)local_90 >> 5;
          }
          *(int *)(param_4 + 0x10) = local_8c;
        }
      }
      FUN_140859a90(local_98);
    }
  }
  return param_3;
}



// FUNCTION 142524b00 Unwind@142524b00 body=63 status=ok
// SIG undefined Unwind@142524b00(void)

void Unwind_142524b00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x130);
  return;
}



// FUNCTION 142524b40 FUN_142524b40 body=39 status=ok
// SIG undefined FUN_142524b40(void)

void FUN_142524b40(longlong *param_1)

{
  (**(code **)(*param_1 + 0x40))();
  return;
}



// FUNCTION 142524b70 FUN_142524b70 body=4170 status=ok
// SIG undefined FUN_142524b70(void)

ulonglong FUN_142524b70(longlong param_1,uint param_2,longlong param_3,longlong param_4,uint param_5
                       ,uint *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  ulonglong unaff_R13;
  bool bVar17;
  char local_1a8 [64];
  char local_168 [8];
  short local_160;
  int local_15c;
  uint local_128 [16];
  uint local_e8 [16];
  ulonglong local_a8;
  int local_9c;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  uint local_7c;
  longlong local_78;
  int local_6c;
  undefined8 *local_68;
  int local_5c;
  undefined **local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  
  puVar13 = (uint *)local_168;
  local_48 = 0xfffffffffffffffe;
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (*(short *)(param_3 + 8) < 0) {
    local_9c = *(int *)(param_3 + 0xc);
  }
  else {
    local_9c = (int)*(short *)(param_3 + 8) >> 5;
  }
  iVar1 = *(int *)(param_4 + 8);
  local_90 = param_1;
  local_88 = param_3;
  local_78 = param_4;
  local_50 = iVar1;
  if ((param_2 < 4) && (param_2 != 2)) {
    bVar16 = false;
    bVar17 = false;
LAB_142524c1f:
    local_4c = -1;
    local_58 = icu_64::ParsePosition::vftable;
    local_1a8[0] = '\0';
    local_6c = FUN_142525ec0(param_1,param_3,&local_58,bVar16,local_1a8);
    if (local_4c != -1) {
      local_6c = 0x7fffffff;
      iVar14 = -1;
LAB_142524c7e:
      local_a8 = CONCAT44(local_a8._4_4_,0x60);
      goto LAB_142524c88;
    }
    if ((local_50 != local_9c) && (iVar14 = local_50, local_1a8[0] == '\0')) goto LAB_142524c7e;
    *(int *)(local_78 + 8) = local_50;
    if (local_6c != 0) {
      unaff_R13 = FUN_14252c1b0();
      goto LAB_1425257fe;
    }
    FUN_1424a7060(local_128,1,L"Etc/GMT",0xffffffff);
    unaff_R13 = FUN_1424b7440(local_128);
    puVar13 = local_128;
    goto LAB_1425257f9;
  }
  bVar17 = param_2 == 4;
  bVar16 = param_2 == 2 || bVar17;
  local_58 = icu_64::ParsePosition::vftable;
  local_4c = -1;
  if ((param_2 == 4) || (param_2 == 2)) goto LAB_142524c1f;
  local_a8 = local_a8 & 0xffffffff00000000;
  local_6c = 0x7fffffff;
  iVar14 = -1;
LAB_142524c88:
  local_5c = 0;
  FUN_1424a7170(local_e8,local_1a8,0,0x20);
  switch(param_2) {
  case 0:
    uVar7 = 1;
    goto LAB_142524e59;
  case 1:
    uVar7 = 3;
    goto LAB_142524e59;
  case 2:
    uVar7 = 5;
LAB_142524e59:
    local_128[0] = 0;
    uVar10 = FUN_142526610(local_90,&local_5c);
    if ((local_5c < 1) &&
       (iVar2 = FUN_1425decb0(uVar10,local_88,iVar1,uVar7,local_e8,local_128,&local_5c),
       local_5c < 1)) {
      if (iVar2 < 1) break;
      if (param_6 != (uint *)0x0) {
        *param_6 = local_128[0];
      }
      *(int *)(local_78 + 8) = iVar2 + iVar1;
      unaff_R13 = FUN_1424b7440(local_e8);
    }
    else {
      *(int *)(local_78 + 0xc) = iVar1;
      unaff_R13 = 0;
    }
    goto LAB_1425257f2;
  case 3:
    uVar7 = 6;
    goto LAB_142524edb;
  case 4:
    uVar7 = 0x30;
LAB_142524edb:
    local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar7);
    local_68 = (undefined8 *)
               (**(code **)(**(longlong **)(local_90 + 0x230) + 0x70))
                         (*(longlong **)(local_90 + 0x230),local_88,iVar1,uVar7,&local_5c);
    if (local_5c < 1) {
      if (local_68 != (undefined8 *)0x0) {
        unaff_R13 = 0xffffffff;
        iVar2 = -1;
        for (uVar4 = 0; iVar3 = FUN_14252a0c0(local_68), (int)uVar4 < iVar3; uVar4 = uVar4 + 1) {
          iVar2 = FUN_14252a0f0(local_68,uVar4);
          iVar2 = iVar2 + iVar1;
          if (iVar14 < iVar2) {
            unaff_R13 = (ulonglong)uVar4;
            iVar14 = iVar2;
          }
        }
        if (-1 < (int)unaff_R13) {
          if (param_6 != (uint *)0x0) {
            uVar7 = FUN_14252a0d0(local_68,unaff_R13);
            uVar4 = FUN_142526320(uVar7);
            *param_6 = uVar4;
          }
          *(int *)(local_78 + 8) = iVar2;
          FUN_142526350(local_90,local_68,unaff_R13,local_e8);
          unaff_R13 = FUN_1424b7440(local_e8);
          bVar17 = false;
          puVar8 = local_68;
          goto LAB_142524f3a;
        }
      }
      if (bVar17 && (param_5 & 2) != 0) {
        plVar9 = (longlong *)FUN_142526430(local_90,&local_5c);
        bVar17 = true;
        puVar8 = local_68;
        if (local_5c < 1) {
          puVar11 = (undefined8 *)
                    (**(code **)(*plVar9 + 0x70))
                              (plVar9,local_88,iVar1,(ulonglong)local_98 & 0xffffffff,&local_5c);
          if (local_5c < 1) {
            puVar8 = local_68;
            if (puVar11 == (undefined8 *)0x0) goto LAB_142524f3a;
            unaff_R13 = 0xffffffff;
            iVar2 = -1;
            local_98 = puVar11;
            for (uVar4 = 0; iVar3 = FUN_14252a0c0(local_98), (int)uVar4 < iVar3; uVar4 = uVar4 + 1)
            {
              iVar2 = FUN_14252a0f0(local_98,uVar4);
              iVar2 = iVar2 + iVar1;
              if (iVar14 < iVar2) {
                unaff_R13 = (ulonglong)uVar4;
                iVar14 = iVar2;
              }
            }
            if ((int)unaff_R13 < 0) {
              bVar16 = true;
              puVar11 = local_98;
            }
            else {
              if (param_6 != (uint *)0x0) {
                uVar7 = FUN_14252a0d0(local_98,unaff_R13);
                uVar4 = FUN_142526320(uVar7);
                *param_6 = uVar4;
              }
              *(int *)(local_78 + 8) = iVar2;
              FUN_142526350(local_90,local_98,unaff_R13,local_e8);
              unaff_R13 = FUN_1424b7440(local_e8);
              bVar16 = false;
              puVar11 = local_98;
            }
          }
          else {
            *(int *)(local_78 + 0xc) = iVar1;
            bVar16 = false;
            unaff_R13 = 0;
          }
          puVar8 = local_68;
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(puVar11,1);
          }
          bVar17 = true;
          if (!bVar16) {
            bVar17 = false;
          }
        }
      }
      else {
        bVar17 = true;
        puVar8 = local_68;
      }
    }
    else {
      *(int *)(local_78 + 0xc) = iVar1;
      bVar17 = false;
      unaff_R13 = 0;
      puVar8 = local_68;
    }
LAB_142524f3a:
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    if (bVar17) break;
    goto LAB_1425257f2;
  case 5:
    local_4c = -1;
    local_50 = iVar1;
    uVar7 = FUN_142525ec0(local_90,local_88,&local_58,0,0);
    if (local_4c != -1) {
      local_a8 = local_a8 | 0x40;
      break;
    }
    *(int *)(local_78 + 8) = local_50;
    unaff_R13 = FUN_142526110(local_50,uVar7);
    goto LAB_1425257f2;
  case 6:
    local_4c = -1;
    local_50 = iVar1;
    uVar7 = FUN_142525ec0(local_90,local_88,&local_58,1,0);
    if (local_4c == -1) {
      *(int *)(local_78 + 8) = local_50;
      unaff_R13 = FUN_142526110(local_50,uVar7);
      goto LAB_1425257f2;
    }
    local_a8 = local_a8 | 0x20;
    break;
  case 7:
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    local_4c = -1;
    local_50 = iVar1;
    iVar2 = FUN_142526190(&switchD_142524cc6::switchdataD_1499dc6b0,local_88,&local_58,0,0);
    if (local_4c != -1) break;
    *(int *)(local_78 + 8) = local_50;
    if (iVar2 != 0) {
      unaff_R13 = FUN_14252c1b0(iVar2);
      goto LAB_1425257f2;
    }
    FUN_1424a7060(local_128,1,L"Etc/GMT",0xffffffff);
    unaff_R13 = FUN_1424b7440(local_128);
    goto LAB_142525401;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
  case 0x10:
    local_4c = -1;
    local_168[0] = '\0';
    local_50 = iVar1;
    iVar2 = FUN_142526190(&switchD_142524cc6::switchdataD_1499dc6b0,local_88,&local_58,0,puVar13);
    if ((local_4c == -1) && (local_168[0] != '\0')) {
      *(int *)(local_78 + 8) = local_50;
      if (iVar2 == 0) {
        FUN_1424a7060(local_128,1,L"Etc/GMT",0xffffffff);
        unaff_R13 = FUN_1424b7440(local_128);
        goto LAB_142525401;
      }
      unaff_R13 = FUN_14252c1b0(iVar2);
      goto LAB_1425257f2;
    }
    break;
  case 0x11:
    local_4c = -1;
    local_50 = iVar1;
    FUN_142526790(&switchD_142524cc6::switchdataD_1499dc6b0,local_88,&local_58,local_e8);
    if (local_4c == -1) {
      *(int *)(local_78 + 8) = local_50;
      unaff_R13 = FUN_1424b7440(local_e8);
      goto LAB_1425257f2;
    }
    break;
  case 0x12:
    local_4c = -1;
    local_50 = iVar1;
    FUN_142526a20(&switchD_142524cc6::switchdataD_1499dc6b0,local_88,&local_58,local_e8);
    if (local_4c == -1) {
      *(int *)(local_78 + 8) = local_50;
      unaff_R13 = FUN_1424b7440(local_e8);
      goto LAB_1425257f2;
    }
    break;
  case 0x13:
    local_4c = -1;
    local_50 = iVar1;
    FUN_142526d20(local_90,local_88,&local_58,local_e8);
    if (local_4c == -1) {
      *(int *)(local_78 + 8) = local_50;
      unaff_R13 = FUN_1424b7440(local_e8);
      goto LAB_1425257f2;
    }
  }
  if (iVar1 < iVar14) {
    *(int *)(local_78 + 8) = iVar14;
    if (local_6c == 0) {
      FUN_1424a7060(local_128,1,L"Etc/GMT",0xffffffff);
      unaff_R13 = FUN_1424b7440(local_128);
LAB_142525401:
      puVar13 = local_128;
      goto LAB_1425257ed;
    }
    unaff_R13 = FUN_14252c1b0();
  }
  else {
    local_98 = (undefined8 *)
               CONCAT44(local_98._4_4_,
                        (uint)*(ushort *)(&DAT_1499dc2f0 + (longlong)(int)param_2 * 2));
    FUN_1424a7170(puVar13,local_128,0,0x20);
    iVar2 = local_9c;
    if ((iVar14 < local_9c) && (((uint)local_98 & 0x180) != 0x180)) {
      local_4c = -1;
      local_7c = local_7c & 0xffffff00;
      local_50 = iVar1;
      iVar3 = FUN_142526190();
      if (local_4c == -1) {
        if ((local_50 == iVar2) || ((char)local_7c != '\0')) {
          *(int *)(local_78 + 8) = local_50;
          unaff_R13 = FUN_142526110(local_78,iVar3);
          goto LAB_1425257ed;
        }
        if (iVar14 < local_50) {
          FUN_1424a7130(puVar13);
          iVar14 = local_50;
          local_6c = iVar3;
        }
      }
    }
    uVar4 = (uint)local_a8 | (uint)local_98;
    if ((iVar14 < iVar2) && ((uVar4 & 0x20) == 0)) {
      local_4c = -1;
      local_7c = local_7c & 0xffffff00;
      local_50 = iVar1;
      iVar3 = FUN_142525ec0(local_90,local_88,&local_58,0,&local_7c);
      if (local_4c == -1) {
        if ((local_50 == iVar2) || ((char)local_7c != '\0')) {
          *(int *)(local_78 + 8) = local_50;
          unaff_R13 = FUN_142526110(local_78,iVar3);
          goto LAB_1425257ed;
        }
        if (iVar14 < local_50) {
          FUN_1424a7130(puVar13);
          iVar14 = local_50;
          local_6c = iVar3;
        }
      }
    }
    if ((iVar14 < iVar2) && ((uVar4 & 0x40) == 0)) {
      local_4c = -1;
      local_7c = local_7c & 0xffffff00;
      local_50 = iVar1;
      iVar3 = FUN_142525ec0(local_90,local_88,&local_58,1,&local_7c);
      if (local_4c == -1) {
        if ((local_50 == iVar2) || ((char)local_7c != '\0')) {
          *(int *)(local_78 + 8) = local_50;
          unaff_R13 = FUN_142526110(local_78,iVar3);
          goto LAB_1425257ed;
        }
        if (iVar14 < local_50) {
          FUN_1424a7130(puVar13);
          iVar14 = local_50;
          local_6c = iVar3;
        }
      }
    }
    uVar4 = 0;
    if ((param_5 & 1) == 0) {
LAB_142525475:
      if (iVar1 < iVar14) {
        if (local_160 < 0) {
          if (local_15c < 1) goto LAB_142525495;
LAB_142525591:
          unaff_R13 = FUN_1424b7440(puVar13);
        }
        else {
          if (0 < local_160 >> 5) goto LAB_142525591;
LAB_142525495:
          unaff_R13 = FUN_142526110();
        }
        if (param_6 != (uint *)0x0) {
          *param_6 = uVar4;
        }
        *(int *)(local_78 + 8) = iVar14;
        goto LAB_1425257ed;
      }
    }
    else {
      uVar12 = 0;
      if (iVar14 < iVar2) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(longlong **)(local_90 + 0x230) + 0x70))
                           (*(longlong **)(local_90 + 0x230),local_88,iVar1,0x76,&local_5c);
        iVar3 = local_5c;
        if (local_5c < 1) {
          local_68 = puVar8;
          if (puVar8 == (undefined8 *)0x0) {
            iVar2 = -1;
            iVar6 = -1;
          }
          else {
            iVar2 = -1;
            iVar6 = -1;
            for (iVar15 = 0; iVar5 = FUN_14252a0c0(local_68), iVar15 < iVar5; iVar15 = iVar15 + 1) {
              iVar5 = FUN_14252a0f0(local_68,iVar15);
              if (iVar6 < iVar5 + iVar1) {
                iVar6 = FUN_14252a0f0(local_68,iVar15);
                iVar6 = iVar6 + iVar1;
                iVar2 = iVar15;
              }
            }
          }
          if (iVar14 < iVar6) {
            FUN_142526350(local_90,local_68,iVar2,puVar13);
            uVar7 = FUN_14252a0d0(local_68,iVar2);
            uVar12 = FUN_142526320(uVar7);
            local_6c = 0x7fffffff;
            puVar8 = local_68;
            iVar14 = iVar6;
          }
          else {
            uVar12 = 0;
            puVar8 = local_68;
          }
        }
        else {
          *(int *)(local_78 + 0xc) = iVar1;
          uVar12 = 0;
          unaff_R13 = 0;
        }
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        iVar2 = local_9c;
        if (0 < iVar3) goto LAB_1425257ed;
      }
      if ((((param_5 & 2) != 0) && (iVar14 < iVar2)) && (((ulonglong)local_98 & 0x10) == 0)) {
        plVar9 = (longlong *)FUN_142526430(local_90,&local_5c);
        if (local_5c < 1) {
          puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x70))(plVar9,local_88,iVar1,0x76,&local_5c)
          ;
          iVar3 = local_5c;
          if (local_5c < 1) {
            local_a8 = uVar12;
            local_68 = puVar8;
            if (puVar8 == (undefined8 *)0x0) {
              iVar2 = -1;
              iVar6 = -1;
            }
            else {
              iVar2 = -1;
              iVar6 = -1;
              for (iVar15 = 0; iVar5 = FUN_14252a0c0(local_68), iVar15 < iVar5; iVar15 = iVar15 + 1)
              {
                iVar5 = FUN_14252a0f0(local_68,iVar15);
                if (iVar6 < iVar5 + iVar1) {
                  iVar6 = FUN_14252a0f0(local_68,iVar15);
                  iVar6 = iVar6 + iVar1;
                  iVar2 = iVar15;
                }
              }
            }
            puVar8 = local_68;
            uVar12 = local_a8;
            if (iVar14 < iVar6) {
              FUN_142526350(local_90,local_68,iVar2,puVar13);
              uVar7 = FUN_14252a0d0(local_68,iVar2);
              uVar12 = FUN_142526320(uVar7);
              local_6c = 0x7fffffff;
              puVar8 = local_68;
              iVar14 = iVar6;
            }
          }
          else {
            *(int *)(local_78 + 0xc) = iVar1;
            unaff_R13 = 0;
          }
          if (puVar8 != (undefined8 *)0x0) {
            (**(code **)*puVar8)(puVar8,1);
          }
          iVar2 = local_9c;
          if (0 < iVar3) goto LAB_1425257ed;
        }
      }
      uVar4 = (uint)uVar12;
      if (iVar2 <= iVar14) {
LAB_142525903:
        uVar12 = (ulonglong)local_98 & 0x200;
        if ((iVar14 < iVar2) && (((ulonglong)local_98 & 0x200) == 0)) {
          local_4c = -1;
          local_50 = iVar1;
          FUN_142526790();
          iVar3 = local_50;
          if ((local_4c == -1) && (iVar14 < local_50)) {
            uVar4 = 0;
            local_6c = 0x7fffffff;
            FUN_1424a7600(puVar13,local_e8,0);
            iVar14 = iVar3;
          }
        }
        if ((iVar14 < iVar2) && (uVar12 == 0)) {
          local_4c = -1;
          local_50 = iVar1;
          FUN_142526a20();
          iVar2 = local_50;
          if ((local_4c == -1) && (iVar14 < local_50)) {
            uVar4 = 0;
            local_6c = 0x7fffffff;
            FUN_1424a7600(puVar13,local_e8,0);
            iVar14 = iVar2;
          }
        }
        goto LAB_142525475;
      }
      local_7c = 0;
      uVar10 = FUN_142526610(local_90,&local_5c);
      if ((local_5c < 1) &&
         (iVar3 = FUN_1425decb0(uVar10,local_88,iVar1,7,local_e8,&local_7c,&local_5c), local_5c < 1)
         ) {
        if ((0 < iVar3) && (iVar14 < iVar3 + iVar1)) {
          FUN_1424a7600(puVar13,local_e8,0);
          local_6c = 0x7fffffff;
          iVar14 = iVar3 + iVar1;
          uVar4 = local_7c;
        }
        goto LAB_142525903;
      }
    }
    *(int *)(local_78 + 0xc) = iVar1;
    unaff_R13 = 0;
LAB_1425257ed:
    FUN_140859a90(puVar13);
  }
LAB_1425257f2:
  puVar13 = local_e8;
LAB_1425257f9:
  FUN_140859a90(puVar13);
LAB_1425257fe:
  thunk_FUN_1424b70d0(&local_58);
  return unaff_R13;
}



// FUNCTION 142525bd0 Unwind@142525bd0 body=55 status=ok
// SIG undefined Unwind@142525bd0(void)

void Unwind_142525bd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xc0);
  return;
}



// FUNCTION 142525c10 Unwind@142525c10 body=55 status=ok
// SIG undefined Unwind@142525c10(void)

void Unwind_142525c10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xc0);
  return;
}



// FUNCTION 142525c50 Unwind@142525c50 body=63 status=ok
// SIG undefined Unwind@142525c50(void)

void Unwind_142525c50(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x150))(*(undefined8 **)(param_2 + 0x150),1);
  return;
}



// FUNCTION 142525c90 Unwind@142525c90 body=55 status=ok
// SIG undefined Unwind@142525c90(void)

void Unwind_142525c90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xc0);
  return;
}



// FUNCTION 142525cd0 Unwind@142525cd0 body=55 status=ok
// SIG undefined Unwind@142525cd0(void)

void Unwind_142525cd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xc0);
  return;
}



// FUNCTION 142525d10 Unwind@142525d10 body=73 status=ok
// SIG undefined Unwind@142525d10(void)

void Unwind_142525d10(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x180) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x180))(*(undefined8 **)(param_2 + 0x180),1);
  }
  return;
}



// FUNCTION 142525d60 Unwind@142525d60 body=73 status=ok
// SIG undefined Unwind@142525d60(void)

void Unwind_142525d60(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x180) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x180))(*(undefined8 **)(param_2 + 0x180),1);
  }
  return;
}



// FUNCTION 142525db0 Unwind@142525db0 body=73 status=ok
// SIG undefined Unwind@142525db0(void)

void Unwind_142525db0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x180) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x180))(*(undefined8 **)(param_2 + 0x180),1);
  }
  return;
}



// FUNCTION 142525e00 Unwind@142525e00 body=54 status=ok
// SIG undefined Unwind@142525e00(void)

void Unwind_142525e00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x80);
  return;
}



// FUNCTION 142525e40 Unwind@142525e40 body=58 status=ok
// SIG undefined Unwind@142525e40(void)

void Unwind_142525e40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x100);
  return;
}



// FUNCTION 142525e80 Unwind@142525e80 body=58 status=ok
// SIG undefined Unwind@142525e80(void)

void Unwind_142525e80(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 400);
  return;
}



// FUNCTION 142525ec0 FUN_142525ec0 body=563 status=ok
// SIG undefined FUN_142525ec0(void)

void FUN_142525ec0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  uint local_50;
  undefined4 local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_3 + 8);
  local_3c = 0;
  if (param_5 == (undefined1 *)0x0) {
    local_58 = &local_3c;
    FUN_142527a40(param_1,param_2,iVar2);
    if ((local_3c < 1) && (FUN_142527bb0(param_1,param_2,iVar2,&local_3c), local_3c < 1))
    goto LAB_142525fa6;
  }
  else {
    *param_5 = 0;
    local_58 = &local_3c;
    FUN_142527a40(param_1,param_2,iVar2);
    if ((local_3c < 1) && (FUN_142527bb0(param_1,param_2,iVar2,&local_3c), local_3c < 1)) {
LAB_142525fa6:
      uVar1 = *(ushort *)(param_1 + 0x430);
      if ((uVar1 & 1) == 0) {
        if ((short)uVar1 < 0) {
          uVar6 = *(uint *)(param_1 + 0x434);
        }
        else {
          uVar6 = (int)(short)uVar1 >> 5;
        }
        local_50 = 0;
        if (0 < (int)uVar6) {
          local_50 = uVar6;
        }
        if ((uVar1 & 2) == 0) {
          lVar7 = *(longlong *)(param_1 + 0x440);
        }
        else {
          lVar7 = param_1 + 0x432;
        }
        local_58 = (int *)CONCAT44(local_58._4_4_,(int)uVar6 >> 0x1f & uVar6);
        local_48 = 0;
        cVar3 = FUN_14257e950(param_2,iVar2,uVar6,lVar7);
        if (cVar3 == '\0') {
LAB_1425260dd:
          if (*(short *)(param_1 + 0x430) < 0) {
            iVar4 = *(int *)(param_1 + 0x434);
          }
          else {
            iVar4 = (int)*(short *)(param_1 + 0x430) >> 5;
          }
          *(int *)(param_3 + 8) = iVar4 + iVar2;
          goto LAB_142525f8a;
        }
      }
      else if ((*(byte *)(param_2 + 8) & 1) != 0) goto LAB_1425260dd;
      sVar5 = wcslen(L"GMT");
      uVar6 = (uint)sVar5;
      local_48 = 0;
      local_58 = (int *)((ulonglong)local_58 & 0xffffffff00000000);
      local_50 = uVar6;
      cVar3 = FUN_14257e950(param_2,iVar2,sVar5 & 0xffffffff,&DAT_1499dc350);
      if (cVar3 != '\0') {
        sVar5 = wcslen(L"UTC");
        uVar6 = (uint)sVar5;
        local_48 = 0;
        local_58 = (int *)((ulonglong)local_58 & 0xffffffff00000000);
        local_50 = uVar6;
        cVar3 = FUN_14257e950(param_2,iVar2,sVar5 & 0xffffffff,&DAT_1499dc358);
        if (cVar3 != '\0') {
          sVar5 = wcslen(L"UT");
          uVar6 = (uint)sVar5;
          local_48 = 0;
          local_58 = (int *)((ulonglong)local_58 & 0xffffffff00000000);
          local_50 = uVar6;
          cVar3 = FUN_14257e950(param_2,iVar2,sVar5 & 0xffffffff,&DAT_1499dc360);
          if (cVar3 != '\0') {
            *(int *)(param_3 + 0xc) = iVar2;
            goto LAB_142525f8a;
          }
        }
      }
      *(uint *)(param_3 + 8) = uVar6 + iVar2;
      goto LAB_142525f8a;
    }
    *param_5 = 1;
  }
  *(int *)(param_3 + 8) = local_3c + iVar2;
LAB_142525f8a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 142526110 FUN_142526110 body=93 status=ok
// SIG undefined FUN_142526110(void)

undefined8 FUN_142526110(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 local_58 [64];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    uVar1 = FUN_14252c1b0(param_2);
    return uVar1;
  }
  FUN_1424a7060(local_58,1,L"Etc/GMT",0xffffffff);
  uVar1 = FUN_1424b7440(local_58);
  FUN_140859a90(local_58);
  return uVar1;
}



// FUNCTION 142526170 Unwind@142526170 body=32 status=ok
// SIG undefined Unwind@142526170(void)

void Unwind_142526170(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142526190 FUN_142526190 body=386 status=ok
// SIG undefined FUN_142526190(void)

int FUN_142526190(undefined8 param_1,longlong param_2,longlong param_3,char param_4,
                 undefined1 *param_5)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int local_64;
  undefined **local_60;
  int local_58;
  int local_54;
  undefined **local_50;
  int local_48;
  int local_44;
  
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  uVar3 = *(uint *)(param_3 + 8);
  sVar1 = *(short *)(param_2 + 8);
  if (sVar1 < 0) {
    uVar8 = *(uint *)(param_2 + 0xc);
  }
  else {
    uVar8 = (int)sVar1 >> 5;
  }
  if (((int)uVar8 <= (int)uVar3) || (uVar8 <= uVar3)) {
LAB_14252621a:
    *(uint *)(param_3 + 0xc) = uVar3;
    return 0;
  }
  if (((int)sVar1 & 2U) == 0) {
    lVar7 = *(longlong *)(param_2 + 0x18);
  }
  else {
    lVar7 = param_2 + 10;
  }
  uVar2 = *(ushort *)(lVar7 + (longlong)(int)uVar3 * 2);
  if ((uVar2 & 0xffdf) == 0x5a) {
    *(uint *)(param_3 + 8) = uVar3 + 1;
    return 0;
  }
  if (uVar2 == 0x2b) {
    local_64 = 1;
  }
  else {
    if (uVar2 != 0x2d) goto LAB_14252621a;
    local_64 = -1;
  }
  local_60 = icu_64::ParsePosition::vftable;
  local_54 = -1;
  uVar8 = 0;
  local_58 = uVar3 + 1;
  iVar5 = FUN_1425275e0(param_2,&local_60,0x3a,0,2);
  iVar4 = local_58;
  if ((param_4 == '\0') && (local_54 == -1)) {
    if ((int)(local_58 - uVar3) < 4) {
      local_50 = icu_64::ParsePosition::vftable;
      local_44 = -1;
      local_48 = uVar3 + 1;
      iVar6 = FUN_142527810(param_2,&local_50,0,2,uVar8 & 0xffffff00);
      if ((local_44 == -1) && (iVar4 < local_48)) {
        local_58 = local_48;
        iVar5 = iVar6;
      }
      thunk_FUN_1424b70d0(&local_50);
    }
  }
  else if (local_54 != -1) {
    *(uint *)(param_3 + 0xc) = uVar3;
    iVar5 = 0;
    goto LAB_142526303;
  }
  *(int *)(param_3 + 8) = local_58;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 1;
  }
  iVar5 = iVar5 * local_64;
LAB_142526303:
  thunk_FUN_1424b70d0(&local_60);
  return iVar5;
}



// FUNCTION 142526320 FUN_142526320 body=38 status=ok
// SIG undefined FUN_142526320(void)

undefined8 FUN_142526320(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(param_1) {
  case 2:
  case 0x10:
    goto switchD_14252633b_caseD_2;
  default:
    uVar1 = 0;
switchD_14252633b_caseD_2:
    return uVar1;
  case 4:
  case 0x20:
    return 2;
  }
}



// FUNCTION 142526350 FUN_142526350 body=161 status=ok
// SIG undefined FUN_142526350(void)

undefined8 FUN_142526350(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  cVar1 = FUN_14252a110(param_2,param_3,param_4);
  if (cVar1 == '\0') {
    FUN_1424a7170(local_78,local_b8,0,0x20);
    cVar1 = FUN_14252a170(param_2,param_3,local_78);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x230) + 0x38))
                (*(longlong **)(param_1 + 0x230),local_78,param_1 + 0x228,param_4);
    }
    FUN_140859a90(local_78);
  }
  return param_4;
}



// FUNCTION 142526400 Unwind@142526400 body=47 status=ok
// SIG undefined Unwind@142526400(void)

void Unwind_142526400(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 142526430 FUN_142526430 body=432 status=ok
// SIG undefined FUN_142526430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142526430(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*param_2 < 1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792e50) {
      FUN_144b3d300(&DAT_14c792e50);
      if (DAT_14c792e50 == -1) {
        _DAT_14c792e40 = 0;
        uRam000000014c792e48 = 0;
        _DAT_14c792e30 = 0;
        uRam000000014c792e38 = 0;
        _DAT_14c792e20 = 0;
        uRam000000014c792e28 = 0;
        _DAT_14c792e10 = 0;
        uRam000000014c792e18 = 0;
        _DAT_14c792e00 = 0;
        uRam000000014c792e08 = 0;
        _Mtx_init_in_situ(&DAT_14c792e00,2);
        atexit((_func_5014 *)&LAB_1425291b0);
        _Init_thread_footer(&DAT_14c792e50);
      }
    }
    FUN_142501320(&DAT_14c792e00);
    if (*(longlong *)(param_1 + 0x528) == 0) {
      lVar2 = thunk_FUN_1424da030(0xf0);
      if (lVar2 == 0) {
        *param_2 = 7;
      }
      else {
        FUN_1425e2ca0(lVar2,param_1 + 0x148);
        *(longlong *)(param_1 + 0x528) = lVar2;
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792e50) {
      FUN_144b3d300(&DAT_14c792e50);
      if (DAT_14c792e50 == -1) {
        _DAT_14c792e40 = 0;
        uRam000000014c792e48 = 0;
        _DAT_14c792e30 = 0;
        uRam000000014c792e38 = 0;
        _DAT_14c792e20 = 0;
        uRam000000014c792e28 = 0;
        _DAT_14c792e10 = 0;
        uRam000000014c792e18 = 0;
        _DAT_14c792e00 = 0;
        uRam000000014c792e08 = 0;
        _Mtx_init_in_situ(&DAT_14c792e00,2);
        atexit((_func_5014 *)&LAB_1425291b0);
        _Init_thread_footer(&DAT_14c792e50);
      }
    }
    FUN_142501400(&DAT_14c792e00);
    uVar1 = *(undefined8 *)(param_1 + 0x528);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1425265e0 Unwind@1425265e0 body=34 status=ok
// SIG undefined Unwind@1425265e0(void)

void Unwind_1425265e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142526610 FUN_142526610 body=378 status=ok
// SIG undefined FUN_142526610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142526610(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 < 1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792e50) {
      FUN_144b3d300(&DAT_14c792e50);
      if (DAT_14c792e50 == -1) {
        _DAT_14c792e40 = 0;
        uRam000000014c792e48 = 0;
        _DAT_14c792e30 = 0;
        uRam000000014c792e38 = 0;
        _DAT_14c792e20 = 0;
        uRam000000014c792e28 = 0;
        _DAT_14c792e10 = 0;
        uRam000000014c792e18 = 0;
        _DAT_14c792e00 = 0;
        uRam000000014c792e08 = 0;
        _Mtx_init_in_situ(&DAT_14c792e00,2);
        atexit((_func_5014 *)&LAB_1425291b0);
        _Init_thread_footer(&DAT_14c792e50);
      }
    }
    FUN_142501320(&DAT_14c792e00);
    if (*(longlong *)(param_1 + 0x238) == 0) {
      uVar1 = FUN_1425de6d0(param_1 + 0x148,param_2);
      *(undefined8 *)(param_1 + 0x238) = uVar1;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792e50) {
      FUN_144b3d300(&DAT_14c792e50);
      if (DAT_14c792e50 == -1) {
        _DAT_14c792e40 = 0;
        uRam000000014c792e48 = 0;
        _DAT_14c792e30 = 0;
        uRam000000014c792e38 = 0;
        _DAT_14c792e20 = 0;
        uRam000000014c792e28 = 0;
        _DAT_14c792e10 = 0;
        uRam000000014c792e18 = 0;
        _DAT_14c792e00 = 0;
        uRam000000014c792e08 = 0;
        _Mtx_init_in_situ(&DAT_14c792e00,2);
        atexit((_func_5014 *)&LAB_1425291b0);
        _Init_thread_footer(&DAT_14c792e50);
      }
    }
    FUN_142501400(&DAT_14c792e00);
    uVar1 = *(undefined8 *)(param_1 + 0x238);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 142526790 FUN_142526790 body=529 status=ok
// SIG undefined FUN_142526790(void)

longlong FUN_142526790(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int *piVar7;
  int local_3c [3];
  
  local_3c[1] = -2;
  local_3c[2] = -1;
  local_3c[0] = 0;
  if ((DAT_14c792e54 == 2) || (cVar3 = FUN_142501800(&DAT_14c792e54), cVar3 == '\0')) {
    if (0 < DAT_14c792e58) {
      local_3c[0] = DAT_14c792e58;
    }
  }
  else {
    FUN_14251f960(0xd,FUN_1425291c0);
    lVar4 = thunk_FUN_1424da030(0x38);
    if (lVar4 == 0) {
      DAT_14c792df0 = 0;
      local_3c[0] = 7;
    }
    else {
      FUN_1425deed0(lVar4,1,0);
      DAT_14c792df0 = lVar4;
      plVar5 = (longlong *)FUN_1424b8070();
      lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,local_3c);
      if (lVar4 != 0) {
        do {
          lVar4 = thunk_FUN_1424b8590(lVar4);
          if (lVar4 != 0) {
            FUN_1425df020(DAT_14c792df0,lVar4,lVar4,local_3c);
          }
          lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,local_3c);
        } while (lVar4 != 0);
      }
      (**(code **)*plVar5)(plVar5,1);
    }
    DAT_14c792e58 = local_3c[0];
    FUN_1425019c0(&DAT_14c792e54);
  }
  iVar1 = *(int *)(param_3 + 8);
  FUN_1424a7130(param_4);
  if (local_3c[0] < 1) {
    plVar5 = (longlong *)thunk_FUN_1424da030(0x18);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)icu_64::ZoneIdMatchHandler::vftable;
      *(undefined4 *)(plVar5 + 1) = 0;
      plVar5[2] = 0;
    }
    piVar7 = local_3c;
    FUN_1425df4e0(DAT_14c792df0,param_2,iVar1,plVar5,piVar7);
    lVar4 = plVar5[1];
    if (0 < (int)lVar4) {
      lVar2 = plVar5[2];
      FUN_1424a8e40(param_4);
      if (*(short *)(param_4 + 8) < 0) {
        iVar6 = *(int *)(param_4 + 0xc);
      }
      else {
        iVar6 = (int)*(short *)(param_4 + 8) >> 5;
      }
      FUN_1424a9130(param_4,0,iVar6,lVar2,(ulonglong)piVar7 & 0xffffffff00000000,0xffffffff);
      (**(code **)(*plVar5 + 8))(plVar5,1);
      *(int *)(param_3 + 8) = (int)lVar4 + iVar1;
      return param_4;
    }
    (**(code **)(*plVar5 + 8))(plVar5,1);
  }
  *(int *)(param_3 + 0xc) = iVar1;
  return param_4;
}



// FUNCTION 1425269b0 Unwind@1425269b0 body=44 status=ok
// SIG undefined Unwind@1425269b0(void)

void Unwind_1425269b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425269e0 Unwind@1425269e0 body=58 status=ok
// SIG undefined Unwind@1425269e0(void)

void Unwind_1425269e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  return;
}



// FUNCTION 142526a20 FUN_142526a20 body=608 status=ok
// SIG undefined FUN_142526a20(void)

longlong FUN_142526a20(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  local_4c[0] = 0;
  if ((DAT_14c792e5c == 2) || (cVar2 = FUN_142501800(&DAT_14c792e5c), cVar2 == '\0')) {
    if (0 < DAT_14c792e60) {
      local_4c[0] = DAT_14c792e60;
    }
    goto LAB_142526ad0;
  }
  FUN_14251f960(0xd,FUN_1425291c0);
  plVar3 = (longlong *)thunk_FUN_1424b7c40(1,0,0,local_4c);
  if (local_4c[0] < 1) {
    lVar4 = thunk_FUN_1424da030(0x38);
    if (lVar4 == 0) {
      DAT_14c792df8 = 0;
      local_4c[0] = 7;
      if (plVar3 == (longlong *)0x0) goto LAB_142526aaf;
    }
    else {
      FUN_1425deed0(lVar4,1,0);
      DAT_14c792df8 = lVar4;
      lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,local_4c);
      if (lVar4 != 0) {
        do {
          lVar5 = thunk_FUN_1424b8590(lVar4);
          lVar4 = FUN_14252c650(lVar4);
          if ((lVar5 != 0) && (lVar4 != 0)) {
            FUN_1425df020(DAT_14c792df8,lVar4,lVar5,local_4c);
          }
          lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,local_4c);
        } while (lVar4 != 0);
      }
    }
LAB_142526a9f:
    (**(code **)*plVar3)(plVar3,1);
  }
  else if (plVar3 != (longlong *)0x0) goto LAB_142526a9f;
LAB_142526aaf:
  DAT_14c792e60 = local_4c[0];
  FUN_1425019c0(&DAT_14c792e5c);
LAB_142526ad0:
  iVar1 = *(int *)(param_3 + 8);
  FUN_1424a7130(param_4);
  if (local_4c[0] < 1) {
    plVar3 = (longlong *)thunk_FUN_1424da030(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)icu_64::ZoneIdMatchHandler::vftable;
      *(undefined4 *)(plVar3 + 1) = 0;
      plVar3[2] = 0;
    }
    piVar7 = local_4c;
    FUN_1425df4e0(DAT_14c792df8,param_2,iVar1,plVar3,piVar7);
    lVar4 = plVar3[1];
    if (0 < (int)lVar4) {
      lVar5 = plVar3[2];
      FUN_1424a8e40(param_4);
      if (*(short *)(param_4 + 8) < 0) {
        iVar6 = *(int *)(param_4 + 0xc);
      }
      else {
        iVar6 = (int)*(short *)(param_4 + 8) >> 5;
      }
      FUN_1424a9130(param_4,0,iVar6,lVar5,(ulonglong)piVar7 & 0xffffffff00000000,0xffffffff);
      (**(code **)(*plVar3 + 8))(plVar3,1);
      *(int *)(param_3 + 8) = (int)lVar4 + iVar1;
      return param_4;
    }
    (**(code **)(*plVar3 + 8))(plVar3,1);
  }
  *(int *)(param_3 + 0xc) = iVar1;
  return param_4;
}



// FUNCTION 142526c90 Unwind@142526c90 body=66 status=ok
// SIG undefined Unwind@142526c90(void)

void Unwind_142526c90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  return;
}



// FUNCTION 142526ce0 Unwind@142526ce0 body=52 status=ok
// SIG undefined Unwind@142526ce0(void)

void Unwind_142526ce0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142526d20 FUN_142526d20 body=287 status=ok
// SIG undefined FUN_142526d20(void)

longlong FUN_142526d20(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int local_54;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar1 = *(int *)(param_3 + 8);
  FUN_1424a7130(param_4);
  local_54 = 0;
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x230) + 0x70))
                     (*(longlong **)(param_1 + 0x230),param_2,iVar1,0x40,&local_54);
  if (local_54 < 1) {
    local_50 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      iVar6 = 0;
      iVar3 = -1;
      iVar4 = -1;
      while( true ) {
        iVar2 = FUN_14252a0c0(local_50);
        if (iVar2 <= iVar6) break;
        iVar2 = FUN_14252a0f0(local_50,iVar6);
        if (iVar3 < iVar2 + iVar1) {
          iVar3 = FUN_14252a0f0(local_50,iVar6);
          iVar3 = iVar3 + iVar1;
          iVar4 = iVar6;
        }
        iVar6 = iVar6 + 1;
      }
      if (0 < iVar3) {
        *(int *)(param_3 + 8) = iVar3;
        FUN_142526350(param_1,local_50,iVar4,param_4);
      }
    }
    if (*(short *)(param_4 + 8) < 0) {
      iVar4 = *(int *)(param_4 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(param_4 + 8) >> 5;
    }
    puVar5 = local_50;
    if (iVar4 != 0) goto LAB_142526e23;
  }
  *(int *)(param_3 + 0xc) = iVar1;
LAB_142526e23:
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  return param_4;
}



// FUNCTION 142526e50 Unwind@142526e50 body=57 status=ok
// SIG undefined Unwind@142526e50(void)

void Unwind_142526e50(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x38))(*(undefined8 **)(param_2 + 0x38),1);
  return;
}



// FUNCTION 142526e90 FUN_142526e90 body=52 status=ok
// SIG undefined FUN_142526e90(void)

void FUN_142526e90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1,0,param_2,param_4,1,0);
  FUN_14252d490(param_3,uVar1);
  return;
}



// FUNCTION 142526ed0 FUN_142526ed0 body=758 status=ok
// SIG undefined FUN_142526ed0(void)

void FUN_142526ed0(undefined8 param_1,uint param_2,char param_3,char param_4,char param_5,
                  char param_6,longlong param_7,int *param_8)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_5c;
  short local_56;
  uint local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar8 = local_48;
  if (0 < *param_8) {
    FUN_1424a7130(param_7);
    goto LAB_14252708b;
  }
  uVar1 = -param_2;
  if ((int)-param_2 < 0) {
    uVar1 = param_2;
  }
  if ((param_4 != '\0') && ((uVar1 < 1000 || ((param_6 != '\0' && (uVar1 < 60000)))))) {
    local_54[0] = CONCAT22(local_54[0]._2_2_,0x5a);
    FUN_1424a8e40(param_7);
    if (*(short *)(param_7 + 8) < 0) {
      iVar7 = *(int *)(param_7 + 0xc);
    }
    else {
      iVar7 = (int)*(short *)(param_7 + 8) >> 5;
    }
    local_70 = 1;
    local_78 = 0;
    FUN_1424a9130(param_7,0,iVar7,local_54);
    goto LAB_14252708b;
  }
  local_5c = 0x3a;
  if (param_3 != '\0') {
    local_5c = 0;
  }
  if (86399999 < uVar1) {
    FUN_1424a7130(param_7);
    *param_8 = 1;
    goto LAB_14252708b;
  }
  uVar6 = (uint)(param_6 == '\0');
  uVar5 = uVar6 + 1;
  local_54[0] = uVar1 / 3600000;
  local_54[1] = (uVar1 % 3600000) / 60000;
  local_54[2] = ((uVar1 % 3600000) % 60000) / 1000;
  uVar4 = (uint)(param_5 == '\0');
  if (((((uVar4 < uVar5) && (local_54[uVar5] == 0)) && (uVar5 = uVar4, uVar4 < uVar6)) &&
      ((uVar5 = uVar6, local_54[uVar6] == 0 &&
       (uVar6 = uVar6 - 1, uVar5 = uVar4, (int)uVar4 < (int)uVar6)))) && (local_54[uVar6] != 0)) {
    uVar5 = uVar6;
  }
  if (((int)param_2 < 0) && (-1 < (int)uVar5)) {
    local_56 = 0x2d;
    if (uVar1 / 3600000 == 0) {
      if (uVar5 == 0) goto LAB_142527046;
      if (local_54[1] == 0) {
        if (uVar5 == 1) goto LAB_142527046;
        if ((local_54[2] == 0) && (local_56 = 0x2b, uVar5 != 2)) {
          local_48._0_4_ = (int)(DAT_14c707940 ^ (ulonglong)auStack_98);
          local_56 = (ushort)((int)local_48 != 0) * 2 + 0x2b;
        }
      }
    }
  }
  else {
LAB_142527046:
    local_56 = 0x2b;
  }
  local_48 = uVar8;
  FUN_1424a8e40(param_7);
  if (*(short *)(param_7 + 8) < 0) {
    iVar7 = *(int *)(param_7 + 0xc);
  }
  else {
    iVar7 = (int)*(short *)(param_7 + 8) >> 5;
  }
  local_70 = 1;
  local_78 = 0;
  FUN_1424a9130(param_7,0,iVar7,&local_56);
  if (-1 < (int)uVar5) {
    uVar8 = 0;
    do {
      if ((param_3 == '\0') && (uVar8 != 0)) {
        local_56 = (short)local_5c;
        FUN_1424a6cf0(param_7,&local_56,0,1);
      }
      uVar1 = local_54[uVar8];
      sVar2 = (short)((longlong)(int)uVar1 / 10) + (short)((int)uVar1 >> 0xf);
      sVar3 = (short)((int)uVar1 >> 0x1f);
      local_56 = (sVar2 + 0x30) - sVar3;
      FUN_1424a6cf0(param_7,&local_56,0,1);
      local_56 = (short)uVar1 + (sVar2 - sVar3) * -10 + 0x30;
      FUN_1424a6cf0(param_7,&local_56,0,1);
      uVar8 = uVar8 + 1;
    } while (uVar5 + 1 != uVar8);
  }
LAB_14252708b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1425271f0 FUN_1425271f0 body=906 status=ok
// SIG undefined FUN_1425271f0(void)

undefined8 FUN_1425271f0(longlong param_1,uint param_2,char param_3,undefined8 param_4,int *param_5)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  byte local_58;
  
  if (*param_5 < 1) {
    if (param_2 + 0xfad9a400 < 0xf5b34801) {
      FUN_1424a7130(param_4);
      *param_5 = 1;
    }
    else if (param_2 == 0) {
      FUN_1424a7600(param_4,param_1 + 0x428,0);
    }
    else {
      uVar2 = -param_2;
      if ((int)-param_2 < 0) {
        uVar2 = param_2;
      }
      uVar11 = (ulonglong)uVar2;
      uVar9 = uVar2 + (int)(uVar11 / 3600000) * -3600000;
      uVar3 = (ulonglong)uVar9 * 0x45e7b3;
      uVar12 = uVar9 + (uint)(uVar3 >> 0x26) * -60000;
      if ((int)param_2 < 0) {
        if (uVar12 < 1000) {
          if ((param_3 == '\0') || (59999 < uVar9)) {
            plVar4 = (longlong *)(param_1 + 0x500);
          }
          else {
            plVar4 = (longlong *)(param_1 + 0x518);
          }
        }
        else {
          plVar4 = (longlong *)(param_1 + 0x508);
        }
      }
      else if (uVar12 < 1000) {
        if ((param_3 == '\0') || (59999 < uVar9)) {
          plVar4 = (longlong *)(param_1 + 0x4f0);
        }
        else {
          plVar4 = (longlong *)(param_1 + 0x510);
        }
      }
      else {
        plVar4 = (longlong *)(param_1 + 0x4f8);
      }
      lVar1 = *plVar4;
      iVar15 = 0;
      FUN_1424a7600(param_4,param_1 + 0x470,0);
      if (0 < *(int *)(lVar1 + 8)) {
        uVar12 = uVar12 & 0xffff;
        uVar10 = (uVar12 / 1000) / 10;
        uVar5 = (ulonglong)(byte)((char)(uVar12 / 1000) + (char)uVar10 * -10);
        local_58 = (byte)(uVar3 >> 0x26);
        uVar3 = (ulonglong)(byte)(local_58 + (local_58 / 5 & 0xfe) * -5);
        iVar16 = CONCAT31((uint3)(uVar11 / 3600000 >> 8) ^ (uint3)(uVar11 / 3600000 >> 8),
                          param_3 == '\0') + -1 + (uint)(uVar2 < 36000000);
        uVar6 = (ulonglong)
                (byte)((char)(uVar11 / 3600000) +
                      ((byte)(((uint)(uVar11 / 3600000) & 0xff) / 5) & 0xfe) * -5);
        do {
          lVar8 = FUN_142516630(lVar1,iVar15);
          switch(*(undefined4 *)(lVar8 + 0x10)) {
          case 0:
            FUN_1424a6cf0(param_4,*(undefined8 *)(lVar8 + 8),0,0xffffffff);
            goto switchD_14252744b_caseD_3;
          case 1:
            iVar13 = iVar16;
            if (0 < iVar16) {
              do {
                FUN_1424a7d60(param_4,*(undefined4 *)(param_1 + 0x400));
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            uVar7 = uVar6;
            if (35999999 < uVar2) {
              FUN_1424a7d60(param_4,*(undefined4 *)(param_1 + 0x400 + (uVar11 / 36000000) * 4));
            }
            break;
          case 2:
            uVar14 = (uint)(uVar9 < 600000);
            uVar7 = uVar3;
            if (uVar9 < 600000) {
              do {
                FUN_1424a7d60(param_4,*(undefined4 *)(param_1 + 0x400));
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            else {
              FUN_1424a7d60(param_4,*(undefined4 *)
                                     (param_1 + 0x400 + ((ulonglong)uVar9 / 600000) * 4));
            }
            break;
          default:
            goto switchD_14252744b_caseD_3;
          case 4:
            uVar14 = (uint)(uVar12 < 10000);
            uVar7 = uVar5;
            if (uVar12 < 10000) {
              do {
                FUN_1424a7d60(param_4,*(undefined4 *)(param_1 + 0x400));
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            else {
              FUN_1424a7d60(param_4,*(undefined4 *)(param_1 + 0x400 + (ulonglong)uVar10 * 4));
            }
          }
          FUN_1424a7d60(param_4,*(undefined4 *)(param_1 + 0x400 + uVar7 * 4));
switchD_14252744b_caseD_3:
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(lVar1 + 8));
      }
      if (*(short *)(param_1 + 0x4b8) < 0) {
        iVar15 = *(int *)(param_1 + 0x4bc);
      }
      else {
        iVar15 = (int)*(short *)(param_1 + 0x4b8) >> 5;
      }
      FUN_1424a9690(param_4,param_1 + 0x4b0,0,iVar15);
    }
  }
  else {
    FUN_1424a7130(param_4);
  }
  return param_4;
}



// FUNCTION 1425275a0 Unwind@1425275a0 body=53 status=ok
// SIG undefined Unwind@1425275a0(void)

void Unwind_1425275a0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x80);
  return;
}



// FUNCTION 1425275e0 FUN_1425275e0 body=532 status=ok
// SIG undefined FUN_1425275e0(void)

void FUN_1425275e0(longlong param_1,longlong param_2,ushort param_3,int param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  undefined1 auStack_98 [44];
  uint local_6c;
  int local_68 [4];
  int local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(uint *)(param_2 + 8);
  local_58[2] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68[0] = 0;
  local_68[1] = -1;
  local_68[2] = -1;
  sVar1 = *(short *)(param_1 + 8);
  if (sVar1 < 0) {
    uVar7 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar7 = (int)sVar1 >> 5;
  }
  iVar5 = -1;
  if ((int)uVar2 < (int)uVar7) {
    iVar4 = 0;
    if (-1 < param_5) {
      lVar6 = (longlong)(int)uVar2;
      if (((int)sVar1 & 2U) == 0) {
        param_1 = *(longlong *)(param_1 + 0x18);
      }
      else {
        param_1 = param_1 + 10;
      }
      iVar5 = 0;
      uVar9 = uVar2;
      do {
        lVar6 = lVar6 + 1;
        uVar8 = 0xffff;
        if (uVar9 < uVar7) {
          uVar8 = *(ushort *)(param_1 + -2 + lVar6 * 2);
        }
        local_6c = uVar2;
        if (uVar8 == param_3) {
          if (iVar5 == 0) {
            iVar5 = 0;
            if (local_68[0] == 0) goto LAB_14252776f;
          }
          else {
            if (local_68[iVar5] != -1) goto LAB_142527734;
            local_68[iVar5] = 0;
          }
        }
        else {
          iVar4 = local_68[iVar5];
          if (iVar4 == -1) goto LAB_142527734;
          iVar3 = uVar8 - 0x30;
          if (9 < (ushort)(uVar8 - 0x30)) {
            iVar3 = -1;
          }
          if (iVar3 < 0) goto LAB_142527734;
          local_58[iVar5] = iVar3 + local_58[iVar5] * 10;
          local_68[iVar5] = iVar4 + 1;
          iVar5 = iVar5 + (uint)(0 < iVar4);
        }
        if (((int)uVar7 <= lVar6) || (uVar9 = uVar9 + 1, param_5 < iVar5)) goto LAB_142527734;
      } while( true );
    }
  }
  else {
    iVar4 = 0;
  }
LAB_142527776:
  if (iVar5 < param_4) {
    *(uint *)(param_2 + 0xc) = uVar2;
  }
  else {
    *(uint *)(param_2 + 8) = iVar4 + uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
LAB_142527734:
  if (local_68[0] == 0) {
LAB_14252776f:
    iVar5 = -1;
    iVar4 = 0;
  }
  else if (local_58[0] < 0x18) {
    iVar5 = 0;
    iVar4 = local_68[0];
    if ((local_68[1] == 2) && (local_58[1] < 0x3c)) {
      iVar4 = local_68[0] + 3;
      iVar5 = 1;
      if ((local_68[2] == 2) && (local_58[2] < 0x3c)) {
        iVar4 = local_68[0] + 6;
        iVar5 = 2;
      }
    }
  }
  else {
    iVar5 = 0;
    iVar4 = 1;
  }
  goto LAB_142527776;
}



// FUNCTION 142527810 FUN_142527810 body=524 status=ok
// SIG undefined FUN_142527810(void)

void FUN_142527810(longlong param_1,longlong param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  int local_68 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = *(int *)(param_2 + 8);
  iVar7 = (param_3 * 2 - (uint)(param_5 == '\0')) + 2;
  uVar8 = param_4 * 2 + 2;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  if ((int)uVar8 < 1) {
    uVar9 = 0;
  }
  else {
    sVar3 = *(short *)(param_1 + 8);
    if (sVar3 < 0) {
      uVar10 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar10 = (int)sVar3 >> 5;
    }
    if (((int)sVar3 & 2U) == 0) {
      param_1 = *(longlong *)(param_1 + 0x18);
    }
    else {
      param_1 = param_1 + 10;
    }
    uVar5 = 0;
    do {
      uVar9 = (uint)uVar5;
      if (((longlong)(int)uVar10 <= (longlong)((longlong)iVar4 + uVar5)) ||
         (uVar10 <= iVar4 + uVar9)) break;
      iVar13 = *(ushort *)(param_1 + (longlong)iVar4 * 2 + uVar5 * 2) - 0x30;
      if (9 < (ushort)iVar13) {
        iVar13 = -1;
      }
      if (iVar13 < 0) break;
      local_68[uVar5] = iVar13;
      uVar5 = uVar5 + 1;
      uVar9 = uVar8;
    } while (uVar8 != uVar5);
  }
  iVar13 = uVar9 - ((byte)uVar9 & param_5 != '\0');
  if (iVar7 <= iVar13) {
    iVar1 = local_68[1] + local_68[0] * 10;
    iVar6 = local_68[3] + local_68[2] * 10;
    iVar2 = local_68[2] + local_68[1] * 10;
    do {
      iVar14 = 0;
      iVar11 = iVar1;
      iVar12 = iVar6;
      switch(iVar13) {
      case 1:
        iVar11 = local_68[0];
        goto LAB_14252799c;
      case 2:
        goto LAB_14252799c;
      case 3:
        iVar12 = iVar2;
        iVar14 = 0;
        iVar11 = local_68[0];
        break;
      case 4:
        iVar14 = 0;
        break;
      case 5:
        iVar12 = iVar2;
        iVar14 = local_68[4] + local_68[3] * 10;
        iVar11 = local_68[0];
        break;
      case 6:
        iVar14 = local_68[4] * 10 + local_68[5];
        break;
      default:
        iVar11 = 0;
LAB_14252799c:
        iVar12 = 0;
      }
      if (((iVar11 < 0x18) && (iVar12 < 0x3c)) && (iVar14 < 0x3c)) {
        *(int *)(param_2 + 8) = iVar4 + iVar13;
        goto LAB_142527a1d;
      }
      iVar13 = iVar13 + (param_5 == '\0' | 0xfffffffe);
    } while (iVar7 <= iVar13);
  }
  *(int *)(param_2 + 0xc) = iVar4;
LAB_142527a1d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 142527a40 FUN_142527a40 body=338 status=ok
// SIG undefined FUN_142527a40(void)

void FUN_142527a40(longlong param_1,longlong param_2,int param_3,undefined8 param_4,int *param_5)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  undefined4 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ushort *)(param_1 + 0x478);
  if ((short)uVar1 < 0) {
    iVar4 = *(int *)(param_1 + 0x47c);
  }
  else {
    iVar4 = (int)(short)uVar1 >> 5;
  }
  local_4c = iVar4;
  if (iVar4 < 1) {
LAB_142527ada:
    local_68 = &local_4c;
    FUN_142527db0(param_1,param_2,param_3 + iVar4);
    iVar2 = local_4c;
    if (local_4c != 0) {
      uVar1 = *(ushort *)(param_1 + 0x4b8);
      if ((short)uVar1 < 0) {
        iVar6 = *(int *)(param_1 + 0x4bc);
      }
      else {
        iVar6 = (int)(short)uVar1 >> 5;
      }
      if (iVar6 < 1) {
LAB_142527b7b:
        iVar6 = iVar2 + iVar4 + iVar6;
        goto LAB_142527b81;
      }
      if (((int)(short)uVar1 & 1U) == 0) {
        if ((uVar1 & 2) == 0) {
          param_1 = *(longlong *)(param_1 + 0x4c8);
        }
        else {
          param_1 = param_1 + 0x4ba;
        }
        local_58 = 0;
        local_68 = (int *)((ulonglong)local_68 & 0xffffffff00000000);
        local_60 = iVar6;
        cVar3 = FUN_14257e950(param_2,param_3 + iVar4 + local_4c,iVar6,param_1);
        if (cVar3 == '\0') goto LAB_142527b7b;
      }
      else if ((*(byte *)(param_2 + 8) & 1) != 0) goto LAB_142527b7b;
    }
  }
  else {
    if (((int)(short)uVar1 & 1U) == 0) {
      if ((uVar1 & 2) == 0) {
        lVar5 = *(longlong *)(param_1 + 0x488);
      }
      else {
        lVar5 = param_1 + 0x47a;
      }
      local_58 = 0;
      local_68 = (int *)((ulonglong)local_68 & 0xffffffff00000000);
      local_60 = iVar4;
      cVar3 = FUN_14257e950(param_2,param_3,iVar4,lVar5);
    }
    else {
      cVar3 = (*(byte *)(param_2 + 8) & 1) == 0;
    }
    if (cVar3 == '\0') goto LAB_142527ada;
  }
  iVar6 = 0;
LAB_142527b81:
  *param_5 = iVar6;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 142527bb0 FUN_142527bb0 body=482 status=ok
// SIG undefined FUN_142527bb0(void)

void FUN_142527bb0(undefined8 param_1,longlong param_2,int param_3,int *param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined4 local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  sVar5 = wcslen(L"GMT");
  iVar3 = (int)sVar5;
  local_58 = 0;
  local_68 = (int *)((ulonglong)local_68._4_4_ << 0x20);
  local_60 = iVar3;
  cVar2 = FUN_14257e950(param_2,param_3,sVar5 & 0xffffffff,&DAT_1499dc350);
  if (cVar2 != '\0') {
    sVar5 = wcslen(L"UTC");
    iVar3 = (int)sVar5;
    local_58 = 0;
    local_68 = (int *)((ulonglong)local_68 & 0xffffffff00000000);
    local_60 = iVar3;
    cVar2 = FUN_14257e950(param_2,param_3,sVar5 & 0xffffffff,&DAT_1499dc358);
    if (cVar2 != '\0') {
      sVar5 = wcslen(L"UT");
      iVar3 = (int)sVar5;
      local_58 = 0;
      local_68 = (int *)((ulonglong)local_68 & 0xffffffff00000000);
      local_60 = iVar3;
      cVar2 = FUN_14257e950(param_2,param_3,sVar5 & 0xffffffff,&DAT_1499dc360);
      iVar7 = 0;
      if (cVar2 != '\0') goto LAB_142527d83;
    }
  }
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar9 = iVar3 + param_3 + 1;
    sVar1 = *(short *)(param_2 + 8);
    if (sVar1 < 0) {
      uVar8 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar8 = (int)sVar1 >> 5;
    }
    if ((iVar9 < (int)uVar8) && ((uint)(param_3 + iVar3) < uVar8)) {
      if (((int)sVar1 & 2U) == 0) {
        lVar6 = *(longlong *)(param_2 + 0x18);
      }
      else {
        lVar6 = param_2 + 10;
      }
      sVar1 = *(short *)(lVar6 + (longlong)(param_3 + iVar3) * 2);
      if ((sVar1 == 0x2b) || (sVar1 == 0x2d)) {
        local_4c = 0;
        local_68 = &local_4c;
        FUN_142528c00(param_1,param_2,iVar9,0x3a);
        iVar7 = local_4c;
        if (*(short *)(param_2 + 8) < 0) {
          iVar4 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar4 = (int)*(short *)(param_2 + 8) >> 5;
        }
        iVar10 = iVar7;
        if (local_4c != iVar4 - iVar9) {
          local_50 = 0;
          FUN_142528660(param_1,param_2,iVar9,&local_50);
          iVar10 = local_50;
          if (local_50 < iVar7) {
            iVar10 = iVar7;
          }
        }
        iVar7 = iVar3 + iVar10 + 1;
      }
    }
  }
LAB_142527d83:
  *param_4 = iVar7;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 142527db0 FUN_142527db0 body=886 status=ok
// SIG undefined FUN_142527db0(void)

void FUN_142527db0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  int *param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  uVar3 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_5 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_88 = 0;
  local_80 = &local_4c;
  local_78 = &local_50;
  local_70 = &local_54;
  iVar1 = FUN_142528140(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x4f8));
  if (iVar1 < 1) {
    local_88 = 0;
    local_80 = &local_4c;
    local_78 = &local_50;
    local_70 = &local_54;
    iVar1 = FUN_142528140(param_1,param_2,param_3 & 0xffffffff,*(undefined8 *)(param_1 + 0x508));
    if (iVar1 < 1) {
      local_88 = 0;
      local_80 = &local_4c;
      local_78 = &local_50;
      local_70 = &local_54;
      iVar1 = FUN_142528140(param_1,param_2,param_3 & 0xffffffff,*(undefined8 *)(param_1 + 0x4f0));
      if (iVar1 < 1) {
        local_88 = 0;
        local_80 = &local_4c;
        local_78 = &local_50;
        local_70 = &local_54;
        iVar1 = FUN_142528140(param_1,param_2,uVar3,*(undefined8 *)(param_1 + 0x500));
        if (iVar1 < 1) {
          local_88 = 0;
          local_80 = &local_4c;
          local_78 = &local_50;
          local_70 = &local_54;
          iVar1 = FUN_142528140(param_1,param_2,uVar3,*(undefined8 *)(param_1 + 0x510));
          if (iVar1 < 1) {
            local_88 = 0;
            local_80 = &local_4c;
            local_78 = &local_50;
            local_70 = &local_54;
            iVar1 = FUN_142528140(param_1,param_2,uVar3,*(undefined8 *)(param_1 + 0x518));
            if (iVar1 < 1) goto LAB_142528072;
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x520) != '\0') {
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_70 = &local_60;
    local_88 = 1;
    local_80 = &local_58;
    local_78 = &local_5c;
    iVar2 = FUN_142528140(param_1,param_2,uVar3,*(undefined8 *)(param_1 + 0x4f8));
    if (iVar2 < 1) {
      local_70 = &local_60;
      local_88 = 1;
      local_80 = &local_58;
      local_78 = &local_5c;
      iVar2 = FUN_142528140(param_1,param_2,uVar3,*(undefined8 *)(param_1 + 0x508));
      if (iVar2 < 1) {
        local_70 = &local_60;
        local_88 = 1;
        local_80 = &local_58;
        local_78 = &local_5c;
        iVar2 = FUN_142528140(param_1,param_2,uVar3,*(undefined8 *)(param_1 + 0x4f0));
        if (iVar2 < 1) {
          local_70 = &local_60;
          local_88 = 1;
          local_80 = &local_58;
          local_78 = &local_5c;
          iVar2 = FUN_142528140(param_1,param_2,uVar3,*(undefined8 *)(param_1 + 0x500));
          if (iVar2 < 1) {
            local_70 = &local_60;
            local_88 = 1;
            local_80 = &local_58;
            local_78 = &local_5c;
            iVar2 = FUN_142528140(param_1,param_2,uVar3,*(undefined8 *)(param_1 + 0x510));
            if (iVar2 < 1) {
              local_70 = &local_60;
              local_88 = 1;
              local_80 = &local_58;
              local_78 = &local_5c;
              iVar2 = FUN_142528140(param_1,param_2,uVar3,*(undefined8 *)(param_1 + 0x518));
            }
          }
        }
      }
    }
    if (iVar1 < iVar2) {
      local_4c = local_58;
      local_50 = local_5c;
      local_54 = local_60;
      iVar1 = iVar2;
      if (iVar2 < 1) goto LAB_142528072;
    }
  }
  *param_5 = iVar1;
LAB_142528072:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142528140 FUN_142528140 body=1283 status=ok
// SIG undefined FUN_142528140(void)

/* WARNING: Removing unreachable block (ram,0x0001425285e0) */
/* WARNING: Removing unreachable block (ram,0x000142528510) */

void FUN_142528140(undefined8 param_1,longlong param_2,int param_3,longlong param_4,char param_5,
                  int *param_6,uint *param_7,uint *param_8)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  size_t sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  wchar_t *_Str;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_80;
  undefined4 local_78;
  uint local_64;
  uint local_60;
  int local_5c;
  undefined8 local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_1;
  local_50 = param_3;
  if (*(int *)(param_4 + 8) < 1) {
    local_60 = 0;
    local_64 = 0;
    local_5c = 0;
  }
  else {
    local_5c = 0;
    local_64 = 0;
    local_60 = 0;
    iVar12 = 0;
    do {
      lVar8 = FUN_142516630(param_4,iVar12);
      switch(*(undefined4 *)(lVar8 + 0x10)) {
      case 0:
        _Str = *(wchar_t **)(lVar8 + 8);
        sVar9 = wcslen(_Str);
        uVar14 = sVar9 & 0xffffffff;
        if (iVar12 == 0) {
          if (*(short *)(param_2 + 8) < 0) {
            iVar15 = *(int *)(param_2 + 0xc);
          }
          else {
            iVar15 = (int)*(short *)(param_2 + 8) >> 5;
          }
          if (param_3 < iVar15) {
            uVar4 = FUN_1424a8030(param_2,param_3);
            cVar2 = FUN_1425cc7f0(uVar4);
            if ((cVar2 == '\0') && (0 < (int)sVar9)) {
              do {
                uVar3 = (uint)(ushort)*_Str;
                iVar15 = (int)uVar14;
                if (((uVar3 & 0xf800) == 0xd800) &&
                   ((((*_Str & 0x400U) == 0 && (iVar15 != 1)) &&
                    (((ushort)_Str[1] & 0xfc00) == 0xdc00)))) {
                  uVar3 = uVar3 * 0x400 + (uint)(ushort)_Str[1] + 0xfca02400;
                }
                cVar2 = FUN_1425cc7f0(uVar3);
                if (cVar2 == '\0') break;
                uVar3 = 2 - (uVar3 < 0x10000);
                _Str = _Str + uVar3;
                uVar14 = (ulonglong)(iVar15 - uVar3);
              } while (iVar15 - uVar3 != 0 && (int)uVar3 <= iVar15);
            }
          }
        }
        iVar11 = (int)uVar14;
        local_78 = 0;
        local_88 = 0;
        local_80 = iVar11;
        cVar2 = FUN_14257e950(param_2,param_3,uVar14,_Str);
        if (cVar2 != '\0') goto switchD_142528238_caseD_3;
        goto LAB_142528209;
      case 1:
        local_4c = 0;
        if (*(short *)(param_2 + 8) < 0) {
          iVar15 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar15 = (int)*(short *)(param_2 + 8) >> 5;
        }
        local_5c = -1;
        iVar11 = 0;
        if (param_3 < iVar15) {
          iVar6 = FUN_142528ae0(local_58,param_2,param_3,&local_4c);
          iVar11 = 0;
          bVar1 = false;
          iVar15 = 0;
          iVar13 = param_3;
          if ((iVar6 < 0) || (0x17 < iVar6)) {
LAB_1425285e7:
            iVar10 = iVar13;
            if (!bVar1) break;
          }
          else {
            if (*(short *)(param_2 + 8) < 0) {
              iVar5 = *(int *)(param_2 + 0xc);
            }
            else {
              iVar5 = (int)*(short *)(param_2 + 8) >> 5;
            }
            iVar13 = local_4c + param_3;
            bVar1 = true;
            iVar15 = iVar6;
            iVar10 = iVar13;
            if (param_5 == '\0') {
              if (iVar5 <= iVar13) goto LAB_1425285e7;
              iVar5 = FUN_142528ae0(local_58,param_2,iVar13,&local_4c);
              if (-1 < iVar5) {
                iVar15 = iVar5 + iVar6 * 10;
                iVar10 = local_4c + iVar13;
                if (0x17 < iVar15) {
                  iVar15 = iVar6;
                  iVar10 = iVar13;
                }
              }
            }
          }
          if (-1 < iVar15) {
            iVar11 = iVar10 - param_3;
            local_5c = iVar15;
          }
        }
        break;
      case 2:
        local_4c = 0;
        if (*(short *)(param_2 + 8) < 0) {
          iVar15 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar15 = (int)*(short *)(param_2 + 8) >> 5;
        }
        local_64 = 0xffffffff;
        iVar11 = 0;
        if ((param_3 < iVar15) &&
           (uVar3 = FUN_142528ae0(local_58,param_2,param_3,&local_4c), uVar3 < 0x3c)) {
          if (*(short *)(param_2 + 8) < 0) {
            iVar15 = *(int *)(param_2 + 0xc);
          }
          else {
            iVar15 = (int)*(short *)(param_2 + 8) >> 5;
          }
          iVar6 = local_4c + param_3;
          uVar7 = 0xffffffff;
          iVar13 = iVar6;
          if (iVar6 < iVar15) {
            iVar13 = FUN_142528ae0(local_58,param_2,iVar6,&local_4c);
            if (iVar13 < 0) {
              local_64 = 0xffffffff;
            }
            else {
              local_64 = 0xffffffff;
              uVar7 = iVar13 + uVar3 * 10;
              if (uVar7 < 0x3c) {
                iVar13 = local_4c + iVar6;
                goto LAB_142528566;
              }
            }
          }
          else {
LAB_142528566:
            iVar11 = iVar13 - param_3;
            local_64 = uVar7;
            if (iVar15 <= iVar6) {
              iVar11 = 0;
            }
          }
        }
        break;
      default:
        goto switchD_142528238_caseD_3;
      case 4:
        local_4c = 0;
        if (*(short *)(param_2 + 8) < 0) {
          iVar15 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar15 = (int)*(short *)(param_2 + 8) >> 5;
        }
        local_60 = 0xffffffff;
        iVar11 = 0;
        if ((param_3 < iVar15) &&
           (uVar3 = FUN_142528ae0(local_58,param_2,param_3,&local_4c), uVar3 < 0x3c)) {
          if (*(short *)(param_2 + 8) < 0) {
            iVar15 = *(int *)(param_2 + 0xc);
          }
          else {
            iVar15 = (int)*(short *)(param_2 + 8) >> 5;
          }
          iVar13 = local_4c + param_3;
          uVar7 = 0xffffffff;
          iVar11 = iVar13;
          if (iVar13 < iVar15) {
            iVar6 = FUN_142528ae0(local_58,param_2,iVar13,&local_4c);
            local_60 = 0xffffffff;
            iVar11 = 0;
            if ((iVar6 < 0) || (uVar7 = iVar6 + uVar3 * 10, 0x3b < uVar7)) break;
            iVar11 = local_4c + iVar13;
          }
          iVar11 = iVar11 - param_3;
          local_60 = uVar7;
          if (iVar15 <= iVar13) {
            iVar11 = 0;
          }
        }
      }
      if (iVar11 == 0) {
switchD_142528238_caseD_3:
        *param_8 = 0;
        *param_7 = 0;
        *param_6 = 0;
        goto LAB_142528640;
      }
LAB_142528209:
      param_3 = param_3 + iVar11;
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_4 + 8));
  }
  *param_6 = local_5c;
  *param_7 = local_64;
  *param_8 = local_60;
LAB_142528640:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142528660 FUN_142528660 body=1118 status=ok
// SIG undefined FUN_142528660(void)

void FUN_142528660(undefined8 param_1,undefined8 param_2,int param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_EBX;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int unaff_R12D;
  int iVar13;
  int unaff_R15D;
  int iVar14;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_7c;
  int *local_78;
  int local_6c;
  int local_68 [4];
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_6c = 0;
  local_88 = FUN_142528ae0();
  if ((int)local_88 < 0) {
    iVar5 = 0;
    goto LAB_14252891b;
  }
  local_68[0] = local_6c;
  iVar11 = local_6c + param_3;
  local_78 = param_4;
  iVar5 = FUN_142528ae0(param_1,param_2,iVar11);
  local_7c = 0;
  if (iVar5 < 0) {
    iVar11 = 1;
    iVar6 = iVar5;
LAB_1425287b8:
    bVar1 = false;
LAB_1425287bb:
    bVar2 = false;
LAB_1425287be:
    bVar3 = false;
    bVar4 = false;
  }
  else {
    iVar11 = iVar11 + local_6c;
    local_68[1] = iVar11 - param_3;
    unaff_EBX = FUN_142528ae0(param_1,param_2,iVar11);
    if (unaff_EBX < 0) {
      iVar11 = 2;
      iVar6 = unaff_EBX;
      goto LAB_1425287b8;
    }
    iVar11 = iVar11 + local_6c;
    local_68[2] = iVar11 - param_3;
    unaff_R15D = FUN_142528ae0(param_1,param_2,iVar11);
    if (unaff_R15D < 0) {
      iVar11 = 3;
      bVar1 = true;
      iVar6 = unaff_R15D;
      goto LAB_1425287bb;
    }
    iVar11 = iVar11 + local_6c;
    local_68[3] = iVar11 - param_3;
    unaff_R12D = FUN_142528ae0(param_1,param_2,iVar11);
    if (unaff_R12D < 0) {
      iVar11 = 4;
      bVar1 = true;
      bVar2 = true;
      iVar6 = unaff_R12D;
      goto LAB_1425287be;
    }
    iVar11 = iVar11 + local_6c;
    local_58 = iVar11 - param_3;
    iVar6 = FUN_142528ae0(param_1,param_2,iVar11,&local_6c);
    if (iVar6 < 0) {
      iVar11 = 5;
      bVar1 = true;
      bVar4 = false;
      bVar2 = true;
      bVar3 = true;
    }
    else {
      local_54 = (iVar11 + local_6c) - param_3;
      iVar11 = 6;
      bVar1 = true;
      bVar2 = true;
      bVar3 = true;
      bVar4 = true;
    }
  }
  iVar8 = (int)local_88;
  iVar12 = iVar5 + iVar8 * 10;
  iVar10 = unaff_R15D + unaff_EBX * 10;
  iVar6 = iVar6 + unaff_R12D * 10;
  iVar7 = unaff_EBX + iVar5 * 10;
  iVar13 = unaff_R12D + unaff_R15D * 10;
  iVar9 = iVar12;
  iVar14 = iVar10;
  switch(iVar11 + -1) {
  case 0:
    iVar9 = iVar8;
    goto LAB_14252881e;
  case 1:
    goto LAB_14252881e;
  case 2:
    iVar14 = iVar7;
    iVar9 = iVar8;
    break;
  case 3:
    break;
  case 4:
    iVar14 = iVar7;
    local_7c = iVar13;
    iVar9 = iVar8;
    break;
  case 5:
    local_7c = iVar6;
    break;
  default:
    iVar9 = 0;
LAB_14252881e:
    iVar14 = 0;
  }
  if (((iVar9 < 0x18) && (iVar14 < 0x3c)) && (iVar14 = iVar11, local_7c < 0x3c)) goto LAB_1425288f7;
  iVar14 = 0;
  if (iVar5 < 0) goto LAB_14252891d;
  iVar5 = iVar12;
  switch(iVar11 + -2) {
  case 0:
    iVar5 = iVar8;
    break;
  case 1:
    break;
  case 2:
    iVar5 = iVar8;
    iVar14 = iVar7;
    break;
  case 3:
    iVar14 = iVar10;
    break;
  case 4:
    iVar5 = iVar8;
    iVar6 = iVar13;
    iVar14 = iVar7;
    goto LAB_1425288e7;
  case 5:
    iVar14 = iVar10;
    goto LAB_1425288e7;
  default:
    iVar5 = 0;
    iVar14 = 0;
  }
  iVar6 = 0;
LAB_1425288e7:
  if (((iVar5 < 0x18) && (iVar14 < 0x3c)) && (iVar14 = iVar11 + -1, iVar6 < 0x3c))
  goto LAB_1425288f7;
  if (!bVar1) goto LAB_14252891d;
  iVar5 = 0;
  iVar6 = iVar12;
  iVar14 = iVar7;
  switch(iVar11 + -3) {
  case 0:
    iVar6 = iVar8;
    goto LAB_14252899b;
  case 1:
    goto LAB_14252899b;
  case 2:
    iVar6 = iVar8;
    break;
  case 3:
    iVar14 = iVar10;
    break;
  case 4:
    iVar5 = iVar13;
    iVar6 = iVar8;
    break;
  default:
    iVar6 = 0;
LAB_14252899b:
    iVar5 = 0;
    iVar14 = 0;
  }
  if (((iVar6 < 0x18) && (iVar14 < 0x3c)) && (iVar14 = iVar11 + -2, iVar5 < 0x3c))
  goto LAB_1425288f7;
  if (!bVar2) goto LAB_14252891d;
  iVar5 = 0;
  iVar6 = 0;
  switch(iVar11 + -4) {
  case 0:
    iVar5 = iVar8;
    goto LAB_142528a05;
  case 1:
    iVar5 = iVar12;
LAB_142528a05:
    iVar6 = 0;
    break;
  case 2:
    iVar5 = iVar8;
    iVar6 = iVar7;
    break;
  case 3:
    iVar5 = iVar12;
    iVar6 = iVar10;
  }
  if ((0x17 < iVar5) || (iVar14 = iVar11 + -3, 0x3b < iVar6)) {
    if (!bVar3) goto LAB_14252891d;
    iVar6 = 0;
    iVar5 = iVar8;
    if (((iVar11 != 5) && (iVar5 = iVar12, iVar11 != 6)) && (iVar5 = 0, iVar11 == 7)) {
      iVar5 = iVar8;
      iVar6 = iVar7;
    }
    if ((0x17 < iVar5) || (iVar14 = iVar11 + -4, 0x3b < iVar6)) {
      if (!bVar4) goto LAB_14252891d;
      if ((iVar11 != 6) && (iVar8 = 0, iVar11 == 7)) {
        iVar8 = iVar12;
      }
      if (0x17 < iVar8) goto LAB_14252891d;
      iVar14 = iVar11 + -5;
    }
  }
LAB_1425288f7:
  iVar5 = local_68[iVar14 - 1];
  param_4 = local_78;
LAB_14252891b:
  *param_4 = iVar5;
LAB_14252891d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142528ae0 FUN_142528ae0 body=279 status=ok
// SIG undefined FUN_142528ae0(void)

uint FUN_142528ae0(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  
  *param_4 = 0;
  if (*(short *)(param_2 + 8) < 0) {
    iVar1 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_2 + 8) >> 5;
  }
  uVar2 = 0xffffffff;
  if (param_3 < iVar1) {
    iVar1 = FUN_1424a8030(param_2,param_3);
    uVar2 = 0;
    if ((((((iVar1 != *(int *)(param_1 + 0x400)) && (uVar2 = 1, iVar1 != *(int *)(param_1 + 0x404)))
          && (uVar2 = 2, iVar1 != *(int *)(param_1 + 0x408))) &&
         ((uVar2 = 3, iVar1 != *(int *)(param_1 + 0x40c) &&
          (uVar2 = 4, iVar1 != *(int *)(param_1 + 0x410))))) &&
        ((uVar2 = 5, iVar1 != *(int *)(param_1 + 0x414) &&
         ((uVar2 = 6, iVar1 != *(int *)(param_1 + 0x418) &&
          (uVar2 = 7, iVar1 != *(int *)(param_1 + 0x41c))))))) &&
       ((uVar2 = 8, iVar1 != *(int *)(param_1 + 0x420) &&
        ((uVar2 = 9, iVar1 != *(int *)(param_1 + 0x424) && (uVar2 = FUN_1424d8db0(iVar1), 9 < uVar2)
         ))))) {
      return 0xffffffff;
    }
    iVar1 = FUN_1424a81b0(param_2,param_3,1);
    *param_4 = iVar1 - param_3;
  }
  return uVar2;
}



// FUNCTION 142528c00 FUN_142528c00 body=814 status=ok
// SIG undefined FUN_142528c00(void)

void FUN_142528c00(undefined8 param_1,longlong param_2,uint param_3,short param_4,int *param_5)

{
  ulonglong uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  short sVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_88 [36];
  uint local_64;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(short *)(param_2 + 8) < 0) {
    iVar11 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar11 = (int)*(short *)(param_2 + 8) >> 5;
  }
  *param_5 = 0;
  local_4c = 0;
  if (*(short *)(param_2 + 8) < 0) {
    iVar4 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar4 = (int)*(short *)(param_2 + 8) >> 5;
  }
  if ((iVar4 <= (int)param_3) ||
     (uVar3 = FUN_142528ae0(param_1,param_2,param_3,&local_4c), 0x17 < uVar3)) goto LAB_142528c89;
  uVar10 = local_4c + param_3;
  if (*(short *)(param_2 + 8) < 0) {
    iVar4 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar4 = (int)*(short *)(param_2 + 8) >> 5;
  }
  if ((((int)uVar10 < iVar4) &&
      (iVar4 = FUN_142528ae0(param_1,param_2,uVar10,&local_4c), -1 < iVar4)) &&
     (uVar9 = iVar4 + uVar3 * 10, uVar9 < 0x18)) {
    uVar10 = uVar10 + local_4c;
    uVar3 = uVar9;
  }
  if (uVar10 == param_3) goto LAB_142528c89;
  uVar1 = (longlong)(int)uVar10 + 1;
  uVar9 = (uint)uVar1;
  if ((int)uVar9 < iVar11) {
    sVar2 = *(short *)(param_2 + 8);
    if (sVar2 < 0) {
      uVar6 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar6 = (int)sVar2 >> 5;
    }
    sVar7 = -1;
    if (uVar10 < uVar6) {
      if (((int)sVar2 & 2U) == 0) {
        lVar8 = *(longlong *)(param_2 + 0x18);
      }
      else {
        lVar8 = param_2 + 10;
      }
      sVar7 = *(short *)(lVar8 + (longlong)(int)uVar10 * 2);
    }
    if (((sVar7 != param_4) || (local_4c = 0, (int)uVar6 <= (int)uVar9)) ||
       (local_64 = uVar3, uVar5 = FUN_142528ae0(param_1,param_2,uVar1 & 0xffffffff,&local_4c),
       0x3b < (uint)uVar5)) goto LAB_142528e1e;
    lVar8 = (longlong)local_4c + uVar1;
    if (*(short *)(param_2 + 8) < 0) {
      iVar4 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(param_2 + 8) >> 5;
    }
    if (((iVar4 <= (int)lVar8) ||
        (local_60 = lVar8, local_58 = uVar5, local_50 = iVar4,
        iVar4 = FUN_142528ae0(param_1,param_2,lVar8,&local_4c), iVar4 < 0)) ||
       ((0x3b < (uint)(iVar4 + (int)local_58 * 10) || (local_50 <= (int)local_60))))
    goto LAB_142528e1e;
    uVar3 = (uint)(local_4c + local_60);
    if ((uVar3 == uVar9) || (uVar9 = uVar3 + 1, uVar10 = uVar3, iVar11 <= (int)uVar9))
    goto LAB_142528e1e;
    sVar2 = *(short *)(param_2 + 8);
    if (sVar2 < 0) {
      uVar10 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar10 = (int)sVar2 >> 5;
    }
    sVar7 = -1;
    if (uVar3 < uVar10) {
      if (((int)sVar2 & 2U) == 0) {
        lVar8 = *(longlong *)(param_2 + 0x18);
      }
      else {
        lVar8 = param_2 + 10;
      }
      sVar7 = *(short *)(lVar8 + (local_4c + local_60) * 2);
    }
    uVar6 = uVar3;
    if (((sVar7 == param_4) && (local_4c = 0, (int)uVar9 < (int)uVar10)) &&
       (local_58 = FUN_142528ae0(param_1,param_2,uVar9,&local_4c), (uint)local_58 < 0x3c)) {
      iVar11 = local_4c + uVar9;
      if (*(short *)(param_2 + 8) < 0) {
        iVar4 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar4 = (int)*(short *)(param_2 + 8) >> 5;
      }
      local_60 = CONCAT44(local_60._4_4_,iVar4);
      if (((iVar11 < iVar4) && (iVar4 = FUN_142528ae0(param_1,param_2,iVar11,&local_4c), -1 < iVar4)
          ) && (((uint)(iVar4 + (int)local_58 * 10) < 0x3c &&
                ((iVar11 < (int)local_60 && (uVar6 = iVar11 + local_4c, iVar11 + local_4c == uVar9))
                )))) {
        uVar6 = uVar3;
      }
    }
    iVar11 = uVar6 - param_3;
  }
  else {
LAB_142528e1e:
    iVar11 = uVar10 - param_3;
  }
  if (iVar11 != 0) {
    *param_5 = iVar11;
  }
LAB_142528c89:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 142528f50 FUN_142528f50 body=300 status=ok
// SIG undefined FUN_142528f50(void)

void FUN_142528f50(longlong param_1,longlong param_2)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [36];
  short local_44;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(short *)(param_1 + 8) < 0) {
    iVar5 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar5 = (int)*(short *)(param_1 + 8) >> 5;
  }
  iVar5 = FUN_1424a8940(param_1,0x27,0,iVar5);
  if (iVar5 < 0) {
    FUN_1424a7600(param_2,param_1,0);
  }
  else {
    uVar4 = 2;
    if ((*(ushort *)(param_2 + 8) & 1) == 0) {
      uVar4 = *(ushort *)(param_2 + 8) & 0x1f;
    }
    *(ushort *)(param_2 + 8) = uVar4;
    uVar6 = (uint)*(short *)(param_1 + 8);
    if (*(short *)(param_1 + 8) < 0) {
      uVar7 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar7 = (int)uVar6 >> 5;
    }
    if (0 < (int)uVar7) {
      uVar10 = 0;
      bVar2 = false;
      do {
        psVar9 = &local_42;
        sVar1 = -1;
        if (uVar10 < uVar7) {
          lVar8 = param_1 + 10;
          if ((uVar6 & 2) == 0) {
            lVar8 = *(longlong *)(param_1 + 0x18);
          }
          sVar1 = *(short *)(lVar8 + uVar10 * 2);
          if (sVar1 != 0x27) goto LAB_14252905d;
          bVar3 = true;
          if (bVar2) {
            local_44 = 0x27;
            psVar9 = &local_44;
            sVar1 = local_42;
            goto LAB_14252905d;
          }
        }
        else {
LAB_14252905d:
          local_42 = sVar1;
          FUN_1424a6cf0(param_2,psVar9,0,1);
          bVar3 = false;
        }
        bVar2 = bVar3;
        uVar6 = (uint)*(short *)(param_1 + 8);
        if (*(short *)(param_1 + 8) < 0) {
          uVar7 = *(uint *)(param_1 + 0xc);
        }
        else {
          uVar7 = (int)uVar6 >> 5;
        }
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < (longlong)(int)uVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
}



// FUNCTION 1425290c0 FUN_1425290c0 body=77 status=ok
// SIG undefined FUN_1425290c0(void)

ulonglong FUN_1425290c0(longlong param_1,int param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  if (*param_4 < 1) {
    lVar1 = *param_3;
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (lVar1 != 0) {
      if (*(char *)((longlong)param_3 + 0xe) != '\0') {
        lVar1 = FUN_142516630(lVar1,0);
        if (lVar1 == 0) goto LAB_1425290cf;
      }
      if (*(int *)(param_1 + 8) < param_2) {
        *(longlong *)(param_1 + 0x10) = lVar1;
        *(int *)(param_1 + 8) = param_2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
LAB_1425290cf:
  return uVar2 & 0xffffffff;
}



// FUNCTION 142529110 FUN_142529110 body=57 status=ok
// SIG undefined FUN_142529110(void)

undefined8 * FUN_142529110(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::GMTOffsetField::vftable;
  if (param_1[1] != 0) {
    FUN_1424da110();
  }
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142529150 FUN_142529150 body=38 status=ok
// SIG undefined FUN_142529150(void)

undefined8 FUN_142529150(undefined8 param_1,int param_2)

{
  FUN_142523660();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142529180 FUN_142529180 body=38 status=ok
// SIG undefined FUN_142529180(void)

undefined8 FUN_142529180(undefined8 param_1,int param_2)

{
  FUN_1425deec0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425291c0 FUN_1425291c0 body=95 status=ok
// SIG undefined FUN_1425291c0(void)

undefined8 FUN_1425291c0(void)

{
  if (DAT_14c792df0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c792df0)(DAT_14c792df0,1);
  }
  DAT_14c792df0 = (undefined8 *)0x0;
  LOCK();
  DAT_14c792e54 = 0;
  UNLOCK();
  if (DAT_14c792df8 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c792df8)(DAT_14c792df8,1);
  }
  DAT_14c792df8 = (undefined8 *)0x0;
  LOCK();
  DAT_14c792e5c = 0;
  UNLOCK();
  return 1;
}



// FUNCTION 142529220 FUN_142529220 body=813 status=ok
// SIG undefined FUN_142529220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142529220(undefined8 *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  char *_Str;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t sVar5;
  char *_Dest;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined4 local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  *param_1 = icu_64::TimeZoneNamesDelegate::vftable;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792ed0) && (FUN_144b3d300(&DAT_14c792ed0), DAT_14c792ed0 == -1)) {
    _DAT_14c792ec0 = 0;
    uRam000000014c792ec8 = 0;
    _DAT_14c792eb0 = 0;
    uRam000000014c792eb8 = 0;
    _DAT_14c792ea0 = 0;
    uRam000000014c792ea8 = 0;
    _DAT_14c792e90 = 0;
    uRam000000014c792e98 = 0;
    _DAT_14c792e80 = 0;
    uRam000000014c792e88 = 0;
    _Mtx_init_in_situ(&DAT_14c792e80,2);
    atexit((_func_5014 *)&LAB_14252a290);
    _Init_thread_footer(&DAT_14c792ed0);
  }
  FUN_142501320(&DAT_14c792e80);
  if (DAT_14c792e68 == '\0') {
    DAT_14c792e70 = FUN_142501e10(FUN_1425031c0,FUN_142503270,0,param_3);
    if (0 < *param_3) goto LAB_1425294bc;
    FUN_142502340(DAT_14c792e70,FUN_1424da110);
    FUN_142502350(DAT_14c792e70,FUN_1425295c0);
    DAT_14c792e68 = '\x01';
    FUN_14251f960(0x10,FUN_1425295f0);
  }
  if (0 < *param_3) goto LAB_1425294bc;
  _Str = *(char **)(param_2 + 0x28);
  puVar3 = (undefined8 *)FUN_142502620(DAT_14c792e70,_Str);
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)thunk_FUN_1424da030(0x140);
    if (puVar4 == (undefined8 *)0x0) {
      *param_3 = 7;
      puVar3 = (undefined8 *)0x0;
    }
    else {
      FUN_1425dfd40(puVar4,param_2,param_3);
      if (*param_3 < 1) {
        sVar5 = strlen(_Str);
        _Dest = (char *)FUN_1424da030(sVar5 + 1);
        if (_Dest == (char *)0x0) {
          _Dest = (char *)0x0;
LAB_1425293ee:
          *param_3 = 7;
        }
        else {
          strcpy(_Dest,_Str);
          if (*param_3 < 1) {
            puVar3 = (undefined8 *)FUN_1424da030(0x18);
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = puVar4;
              *(undefined4 *)(puVar3 + 1) = 1;
              uVar7 = FUN_1424d9690();
              puVar3[2] = uVar7;
              FUN_142502aa0(DAT_14c792e70,_Dest,puVar3,param_3);
              if (*param_3 < 1) goto LAB_14252941f;
              goto LAB_1425293f6;
            }
            goto LAB_1425293ee;
          }
        }
        puVar3 = (undefined8 *)0x0;
      }
      else {
        _Dest = (char *)0x0;
        puVar3 = (undefined8 *)0x0;
      }
LAB_1425293f6:
      (**(code **)*puVar4)(puVar4,1);
      if (_Dest != (char *)0x0) {
        FUN_1424da110(_Dest);
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_1424da110(puVar3);
      }
      puVar3 = (undefined8 *)0x0;
    }
  }
  else {
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    uVar7 = FUN_1424d9690();
    puVar3[2] = uVar7;
  }
LAB_14252941f:
  iVar1 = DAT_14c792e78 + 1;
  bVar2 = 0x62 < DAT_14c792e78;
  DAT_14c792e78 = iVar1;
  if (bVar2) {
    local_64 = 0xffffffff;
    dVar8 = (double)FUN_1424d9690();
    lVar6 = FUN_1425022e0(DAT_14c792e70,&local_64);
    if (lVar6 != 0) {
      do {
        if ((*(int *)(*(longlong *)(lVar6 + 8) + 8) < 1) &&
           (180000.0 < dVar8 - *(double *)(*(longlong *)(lVar6 + 8) + 0x10))) {
          FUN_142503000(DAT_14c792e70,lVar6);
        }
        lVar6 = FUN_1425022e0(DAT_14c792e70,&local_64);
      } while (lVar6 != 0);
    }
    DAT_14c792e78 = 0;
  }
  param_1[1] = puVar3;
LAB_1425294bc:
  FUN_142501400(&DAT_14c792e80);
  return param_1;
}



// FUNCTION 142529560 Unwind@142529560 body=86 status=ok
// SIG undefined Unwind@142529560(void)

void Unwind_142529560(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  FUN_142501400(&DAT_14c792e80);
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425295c0 FUN_1425295c0 body=39 status=ok
// SIG undefined FUN_1425295c0(void)

void FUN_1425295c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 1425295f0 FUN_1425295f0 body=46 status=ok
// SIG undefined FUN_1425295f0(void)

undefined1 FUN_1425295f0(void)

{
  if (DAT_14c792e70 != 0) {
    FUN_142502220();
    DAT_14c792e70 = 0;
  }
  DAT_14c792e68 = 0;
  return 1;
}



// FUNCTION 142529620 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 142529630 FUN_142529630 body=351 status=ok
// SIG undefined FUN_142529630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142529630(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = icu_64::TimeZoneNamesDelegate::vftable;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c792ed0) {
    FUN_144b3d300(&DAT_14c792ed0);
    if (DAT_14c792ed0 == -1) {
      _DAT_14c792ec0 = 0;
      uRam000000014c792ec8 = 0;
      _DAT_14c792eb0 = 0;
      uRam000000014c792eb8 = 0;
      _DAT_14c792ea0 = 0;
      uRam000000014c792ea8 = 0;
      _DAT_14c792e90 = 0;
      uRam000000014c792e98 = 0;
      _DAT_14c792e80 = 0;
      uRam000000014c792e88 = 0;
      _Mtx_init_in_situ(&DAT_14c792e80,2);
      atexit((_func_5014 *)&LAB_14252a290);
      _Init_thread_footer(&DAT_14c792ed0);
    }
  }
  FUN_142501320(&DAT_14c792e80);
  if (param_1[1] != 0) {
    piVar1 = (int *)(param_1[1] + 8);
    *piVar1 = *piVar1 + -1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c792ed0) {
    FUN_144b3d300(&DAT_14c792ed0);
    if (DAT_14c792ed0 == -1) {
      _DAT_14c792ec0 = 0;
      uRam000000014c792ec8 = 0;
      _DAT_14c792eb0 = 0;
      uRam000000014c792eb8 = 0;
      _DAT_14c792ea0 = 0;
      uRam000000014c792ea8 = 0;
      _DAT_14c792e90 = 0;
      uRam000000014c792e98 = 0;
      _DAT_14c792e80 = 0;
      uRam000000014c792e88 = 0;
      _Mtx_init_in_situ(&DAT_14c792e80,2);
      atexit((_func_5014 *)&LAB_14252a290);
      _Init_thread_footer(&DAT_14c792ed0);
    }
  }
  FUN_142501400(&DAT_14c792e80);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142529790 FUN_142529790 body=79 status=ok
// SIG undefined FUN_142529790(void)

ulonglong FUN_142529790(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (param_1 == param_2) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  else {
    uVar2 = 0;
    lVar1 = __RTDynamicCast(param_2,0,&icu_64::TimeZoneNames::RTTI_Type_Descriptor,
                            &icu_64::TimeZoneNamesDelegate::RTTI_Type_Descriptor,0);
    if (lVar1 != 0) {
      uVar2 = (ulonglong)(*(longlong *)(param_1 + 8) == *(longlong *)(lVar1 + 8));
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1425297e0 FUN_1425297e0 body=374 status=ok
// SIG undefined FUN_1425297e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425297e0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)thunk_FUN_1424da030(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = icu_64::TimeZoneNamesDelegate::vftable;
    puVar2[1] = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792ed0) {
      FUN_144b3d300(&DAT_14c792ed0);
      if (DAT_14c792ed0 == -1) {
        _DAT_14c792ec0 = 0;
        uRam000000014c792ec8 = 0;
        _DAT_14c792eb0 = 0;
        uRam000000014c792eb8 = 0;
        _DAT_14c792ea0 = 0;
        uRam000000014c792ea8 = 0;
        _DAT_14c792e90 = 0;
        uRam000000014c792e98 = 0;
        _DAT_14c792e80 = 0;
        uRam000000014c792e88 = 0;
        _Mtx_init_in_situ(&DAT_14c792e80,2);
        atexit((_func_5014 *)&LAB_14252a290);
        _Init_thread_footer(&DAT_14c792ed0);
      }
    }
    FUN_142501320(&DAT_14c792e80);
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 8);
    *piVar1 = *piVar1 + 1;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792ed0) {
      FUN_144b3d300(&DAT_14c792ed0);
      if (DAT_14c792ed0 == -1) {
        _DAT_14c792ec0 = 0;
        uRam000000014c792ec8 = 0;
        _DAT_14c792eb0 = 0;
        uRam000000014c792eb8 = 0;
        _DAT_14c792ea0 = 0;
        uRam000000014c792ea8 = 0;
        _DAT_14c792e90 = 0;
        uRam000000014c792e98 = 0;
        _DAT_14c792e80 = 0;
        uRam000000014c792e88 = 0;
        _Mtx_init_in_situ(&DAT_14c792e80,2);
        atexit((_func_5014 *)&LAB_14252a290);
        _Init_thread_footer(&DAT_14c792ed0);
      }
    }
    FUN_142501400(&DAT_14c792e80);
  }
  return puVar2;
}



// FUNCTION 142529960 FUN_142529960 body=17 status=ok
// SIG undefined FUN_142529960(void)

void FUN_142529960(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014252996e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x28))();
  return;
}



// FUNCTION 142529980 FUN_142529980 body=17 status=ok
// SIG undefined FUN_142529980(void)

void FUN_142529980(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014252998e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x20))();
  return;
}



// FUNCTION 1425299a0 FUN_1425299a0 body=17 status=ok
// SIG undefined FUN_1425299a0(void)

void FUN_1425299a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425299ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x30))();
  return;
}



// FUNCTION 1425299c0 FUN_1425299c0 body=17 status=ok
// SIG undefined FUN_1425299c0(void)

void FUN_1425299c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425299ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x38))();
  return;
}



// FUNCTION 1425299e0 FUN_1425299e0 body=17 status=ok
// SIG undefined FUN_1425299e0(void)

void FUN_1425299e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001425299ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x40))();
  return;
}



// FUNCTION 142529a00 FUN_142529a00 body=17 status=ok
// SIG undefined FUN_142529a00(void)

void FUN_142529a00(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142529a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x48))();
  return;
}



// FUNCTION 142529a20 FUN_142529a20 body=17 status=ok
// SIG undefined FUN_142529a20(void)

void FUN_142529a20(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142529a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x50))();
  return;
}



// FUNCTION 142529a40 FUN_142529a40 body=17 status=ok
// SIG undefined FUN_142529a40(void)

void FUN_142529a40(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142529a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x60))();
  return;
}



// FUNCTION 142529a60 FUN_142529a60 body=17 status=ok
// SIG undefined FUN_142529a60(void)

void FUN_142529a60(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142529a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x68))();
  return;
}



// FUNCTION 142529a80 FUN_142529a80 body=17 status=ok
// SIG undefined FUN_142529a80(void)

void FUN_142529a80(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142529a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 8) + 0x70))();
  return;
}



// FUNCTION 142529aa0 FUN_142529aa0 body=93 status=ok
// SIG undefined FUN_142529aa0(void)

longlong FUN_142529aa0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    lVar1 = thunk_FUN_1424da030(0x10);
    if (lVar1 != 0) {
      FUN_142529220(lVar1,param_1,param_2,param_4,lVar1,uVar2);
      return lVar1;
    }
    if (*param_2 < 1) {
      *param_2 = 7;
    }
  }
  return 0;
}



// FUNCTION 142529b00 Unwind@142529b00 body=34 status=ok
// SIG undefined Unwind@142529b00(void)

void Unwind_142529b00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142529b30 FUN_142529b30 body=11 status=ok
// SIG undefined FUN_142529b30(void)

void FUN_142529b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1425e24e0(param_2,param_3);
  return;
}



// FUNCTION 142529b40 FUN_142529b40 body=164 status=ok
// SIG undefined FUN_142529b40(void)

longlong FUN_142529b40(longlong *param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
                      longlong param_5)

{
  undefined1 local_d8 [72];
  undefined1 local_90 [64];
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_5);
  if (*(ushort *)(param_5 + 8) < 0x20) {
    FUN_1424a7170(local_90,local_d8,0,0x20);
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_4,local_90);
    (**(code **)(*param_1 + 0x40))(param_1,local_90,param_3 & 0xffffffff,param_5);
    FUN_140859a90(local_90);
  }
  return param_5;
}



// FUNCTION 142529bf0 Unwind@142529bf0 body=56 status=ok
// SIG undefined Unwind@142529bf0(void)

void Unwind_142529bf0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 142529c30 FUN_142529c30 body=1 status=ok
// SIG undefined FUN_142529c30(void)

void FUN_142529c30(void)

{
  return;
}



// FUNCTION 142529c40 FUN_142529c40 body=236 status=ok
// SIG undefined FUN_142529c40(void)

void FUN_142529c40(longlong *param_1,longlong param_2,longlong param_3,uint param_4,
                  undefined4 param_5,longlong param_6,int *param_7)

{
  ulonglong uVar1;
  undefined **local_a0;
  ushort local_98;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if ((*param_7 < 1) && (0x1f < *(ushort *)(param_2 + 8))) {
    local_a0 = &PTR_FUN_149e18960;
    local_98 = 2;
    if (0 < (int)param_4) {
      uVar1 = 0;
      do {
        (**(code **)(*param_1 + 0x48))(param_1,param_2,*(undefined4 *)(param_3 + uVar1 * 4),param_6)
        ;
        if (*(ushort *)(param_6 + 8) < 0x20) {
          if (local_98 < 0x20) {
            (**(code **)(*param_1 + 0x30))(param_1,param_2,param_5,&local_a0);
          }
          (**(code **)(*param_1 + 0x40))
                    (param_1,&local_a0,*(undefined4 *)(param_3 + uVar1 * 4),param_6);
        }
        uVar1 = uVar1 + 1;
        param_6 = param_6 + 0x40;
      } while (param_4 != uVar1);
    }
    FUN_140859a90(&local_a0);
  }
  return;
}



// FUNCTION 142529d40 Unwind@142529d40 body=64 status=ok
// SIG undefined Unwind@142529d40(void)

void Unwind_142529d40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142529d80 FUN_142529d80 body=22 status=ok
// SIG undefined FUN_142529d80(void)

void FUN_142529d80(undefined8 *param_1)

{
  *param_1 = icu_64::TimeZoneNames::MatchInfoCollection::vftable;
  param_1[1] = 0;
  return;
}



// FUNCTION 142529da0 FUN_142529da0 body=286 status=ok
// SIG undefined FUN_142529da0(void)

void FUN_142529da0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  int *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  if (0 < *param_5) {
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_1424da030(0x50);
  if (puVar1 == (undefined4 *)0x0) {
LAB_142529e70:
    *param_5 = 7;
  }
  else {
    *(undefined ***)(puVar1 + 2) = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar1 + 4) = 2;
    *puVar1 = param_2;
    puVar1[0x12] = param_3;
    FUN_1424a7600(puVar1 + 2,param_4,0);
    *(undefined1 *)(puVar1 + 0x13) = 1;
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)thunk_FUN_1424da030(0x28);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 8) = 0;
        *param_5 = 7;
        puVar2 = *(undefined8 **)(param_1 + 8);
      }
      else {
        FUN_142515f20(puVar2,FUN_14252a1d0,0,param_5);
        *(undefined8 **)(param_1 + 8) = puVar2;
        if (0 < *param_5) {
          (**(code **)*puVar2)(puVar2,1);
          goto LAB_142529e70;
        }
      }
    }
    FUN_1425163e0(puVar2,puVar1,param_5);
    if (0 < *param_5) {
      FUN_140859a90(puVar1 + 2);
      FUN_1401773f0(puVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142529ec0 Unwind@142529ec0 body=53 status=ok
// SIG undefined Unwind@142529ec0(void)

void Unwind_142529ec0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142529f00 Unwind@142529f00 body=44 status=ok
// SIG undefined Unwind@142529f00(void)

void Unwind_142529f00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 142529f30 FUN_142529f30 body=286 status=ok
// SIG undefined FUN_142529f30(void)

void FUN_142529f30(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  int *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  if (0 < *param_5) {
    return;
  }
  puVar1 = (undefined4 *)thunk_FUN_1424da030(0x50);
  if (puVar1 == (undefined4 *)0x0) {
LAB_14252a000:
    *param_5 = 7;
  }
  else {
    *(undefined ***)(puVar1 + 2) = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar1 + 4) = 2;
    *puVar1 = param_2;
    puVar1[0x12] = param_3;
    FUN_1424a7600(puVar1 + 2,param_4,0);
    *(undefined1 *)(puVar1 + 0x13) = 0;
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)thunk_FUN_1424da030(0x28);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 8) = 0;
        *param_5 = 7;
        puVar2 = *(undefined8 **)(param_1 + 8);
      }
      else {
        FUN_142515f20(puVar2,FUN_14252a1d0,0,param_5);
        *(undefined8 **)(param_1 + 8) = puVar2;
        if (0 < *param_5) {
          (**(code **)*puVar2)(puVar2,1);
          goto LAB_14252a000;
        }
      }
    }
    FUN_1425163e0(puVar2,puVar1,param_5);
    if (0 < *param_5) {
      FUN_140859a90(puVar1 + 2);
      FUN_1401773f0(puVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14252a050 Unwind@14252a050 body=53 status=ok
// SIG undefined Unwind@14252a050(void)

void Unwind_14252a050(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14252a090 Unwind@14252a090 body=44 status=ok
// SIG undefined Unwind@14252a090(void)

void Unwind_14252a090(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 14252a0c0 FUN_14252a0c0 body=16 status=ok
// SIG undefined FUN_14252a0c0(void)

undefined4 FUN_14252a0c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 8) + 8);
  }
  return 0;
}



// FUNCTION 14252a0d0 FUN_14252a0d0 body=29 status=ok
// SIG undefined FUN_14252a0d0(void)

undefined4 FUN_14252a0d0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_142516630(*(undefined8 *)(param_1 + 8));
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}



// FUNCTION 14252a0f0 FUN_14252a0f0 body=30 status=ok
// SIG undefined FUN_14252a0f0(void)

undefined4 FUN_14252a0f0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142516630(*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x48);
  }
  return uVar1;
}



// FUNCTION 14252a110 FUN_14252a110 body=85 status=ok
// SIG undefined FUN_14252a110(void)

undefined8 FUN_14252a110(longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = 2;
  if ((*(ushort *)(param_3 + 8) & 1) == 0) {
    uVar1 = *(ushort *)(param_3 + 8) & 0x1f;
  }
  *(ushort *)(param_3 + 8) = uVar1;
  lVar2 = FUN_142516630(*(undefined8 *)(param_1 + 8));
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x4c) == '\0')) {
    uVar3 = 0;
  }
  else {
    FUN_1424a7600(param_3,lVar2 + 8,0);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14252a170 FUN_14252a170 body=85 status=ok
// SIG undefined FUN_14252a170(void)

undefined8 FUN_14252a170(longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = 2;
  if ((*(ushort *)(param_3 + 8) & 1) == 0) {
    uVar1 = *(ushort *)(param_3 + 8) & 0x1f;
  }
  *(ushort *)(param_3 + 8) = uVar1;
  lVar2 = FUN_142516630(*(undefined8 *)(param_1 + 8));
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x4c) != '\0')) {
    uVar3 = 0;
  }
  else {
    FUN_1424a7600(param_3,lVar2 + 8,0);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14252a1d0 FUN_14252a1d0 body=42 status=ok
// SIG undefined FUN_14252a1d0(void)

void FUN_14252a1d0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140859a90(param_1 + 8);
    FUN_1401773f0(param_1);
    return;
  }
  return;
}



// FUNCTION 14252a200 FUN_14252a200 body=38 status=ok
// SIG undefined FUN_14252a200(void)

undefined8 FUN_14252a200(undefined8 param_1,int param_2)

{
  FUN_142529630();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14252a230 FUN_14252a230 body=20 status=ok
// SIG undefined FUN_14252a230(void)

bool FUN_14252a230(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  return cVar1 == '\0';
}



// FUNCTION 14252a250 FUN_14252a250 body=62 status=ok
// SIG undefined FUN_14252a250(void)

undefined8 * FUN_14252a250(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::TimeZoneNames::MatchInfoCollection::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14252a2a0 FUN_14252a2a0 body=934 status=ok
// SIG undefined FUN_14252a2a0(void)

void FUN_14252a2a0(longlong param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  wchar_t *_Str;
  size_t sVar10;
  char *pcVar11;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined4 local_200;
  int local_1ec;
  char local_1e8 [144];
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (0 < *param_2) goto LAB_14252a2fd;
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      if (*(int *)(param_1 + 0xc) < 0x81) {
LAB_14252a324:
        if ((DAT_14c792f08 == 2) || (cVar4 = FUN_142501800(&DAT_14c792f08), cVar4 == '\0')) {
          if (0 < DAT_14c792f0c) {
            *param_2 = DAT_14c792f0c;
            goto LAB_14252a2fd;
          }
        }
        else {
          FUN_14252a660(param_2);
          DAT_14c792f0c = *param_2;
          FUN_1425019c0(&DAT_14c792f08);
        }
        if (0 < *param_2) goto LAB_14252a2fd;
        local_1ec = 0;
        FUN_1424a8350(param_1,local_158,0x81,&local_1ec);
        cVar4 = FUN_14250aed0(local_158,0xffffffff);
        if (cVar4 == '\0') goto LAB_14252a2f4;
        FUN_14252a6c0();
        FUN_142501320(&DAT_14c792f10);
        lVar5 = FUN_142502620(DAT_14c792ed8,local_158);
        FUN_14252a6c0();
        FUN_142501400(&DAT_14c792f10);
        if (lVar5 != 0) goto LAB_14252a2fd;
        local_200 = 0;
        local_208 = 0x81;
        FUN_1424a83f0(param_1,0,0x7fffffff,local_1e8);
        pcVar11 = local_1e8 + 1;
        pcVar6 = pcVar11;
        cVar4 = local_1e8[0];
        while (cVar4 != '\0') {
          cVar4 = *pcVar6;
          if (cVar4 == '/') {
            *pcVar6 = ':';
            cVar4 = ':';
          }
          pcVar6 = pcVar6 + 1;
        }
        bVar3 = false;
        bVar2 = false;
        uVar7 = FUN_1424edad0(0,"keyTypeData",&local_1ec);
        uVar8 = FUN_1424ecc30(uVar7,"typeMap",0,&local_1ec);
        FUN_1424ecc30(uVar8,"timezone",uVar8,&local_1ec);
        FUN_1424ecc30(uVar8,local_1e8,uVar8,&local_1ec);
        if (local_1ec < 1) {
          pwVar9 = (wchar_t *)FUN_1424b8590(param_1);
          bVar3 = true;
          bVar2 = true;
          if (pwVar9 == (wchar_t *)0x0) goto LAB_14252a49e;
        }
        else {
LAB_14252a49e:
          local_1ec = 0;
          FUN_1424ecc30(uVar7,"typeAlias",uVar8,&local_1ec);
          FUN_1424ecc30(uVar8,"timezone",uVar8,&local_1ec);
          pwVar9 = (wchar_t *)FUN_1424ecf00(uVar8,local_1e8,0,&local_1ec);
          if ((0 < local_1ec) || (pwVar9 == (wchar_t *)0x0)) {
            _Str = (wchar_t *)FUN_1424b87f0(param_1);
            if (_Str == (wchar_t *)0x0) {
              *param_2 = 1;
              pwVar9 = (wchar_t *)0x0;
            }
            else {
              sVar10 = wcslen(_Str);
              FUN_14250ae10(_Str,local_1e8,sVar10 & 0xffffffff);
              local_1e8[(int)sVar10] = '\0';
              while (local_1e8[0] != '\0') {
                local_1e8[0] = *pcVar11;
                if (local_1e8[0] == '/') {
                  *pcVar11 = ':';
                  local_1e8[0] = ':';
                }
                pcVar11 = pcVar11 + 1;
              }
              local_1ec = 0;
              pwVar9 = (wchar_t *)FUN_1424ecf00(uVar8,local_1e8,0,&local_1ec);
              bVar2 = bVar3;
              if (0 < local_1ec) {
                pwVar9 = _Str;
                bVar2 = true;
              }
            }
          }
        }
        FUN_1424ea9f0(uVar8);
        FUN_1424ea9f0(uVar7);
        if (*param_2 < 1) {
          FUN_14252a6c0();
          FUN_142501320(&DAT_14c792f10);
          lVar5 = FUN_142502620(DAT_14c792ed8,local_158);
          if ((lVar5 == 0) && (lVar5 = FUN_1424b8590(param_1), lVar5 != 0)) {
            FUN_142502aa0(DAT_14c792ed8,lVar5,pwVar9,param_2);
          }
          if (((bVar2) && (*param_2 < 1)) &&
             (lVar5 = FUN_142502620(DAT_14c792ed8,pwVar9), lVar5 == 0)) {
            FUN_142502aa0(DAT_14c792ed8,pwVar9,pwVar9,param_2);
          }
          FUN_14252a6c0();
          FUN_142501400(&DAT_14c792f10);
        }
        goto LAB_14252a2fd;
      }
    }
    else if ((short)uVar1 >> 5 < 0x81) goto LAB_14252a324;
  }
LAB_14252a2f4:
  *param_2 = 1;
LAB_14252a2fd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_228);
}



// FUNCTION 14252a660 FUN_14252a660 body=91 status=ok
// SIG undefined FUN_14252a660(void)

void FUN_14252a660(int *param_1)

{
  DAT_14c792ed8 = FUN_142501e10(FUN_142503190,&LAB_142503220,0,param_1);
  if (DAT_14c792ed8 == 0) {
    *param_1 = 7;
  }
  else if (*param_1 < 1) goto LAB_14252a6a5;
  DAT_14c792ed8 = 0;
LAB_14252a6a5:
  FUN_14251f960(0x11,FUN_14252c6b0);
  return;
}



// FUNCTION 14252a6c0 FUN_14252a6c0 body=146 status=ok
// SIG undefined FUN_14252a6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14252a6c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c792f60) {
    FUN_144b3d300(&DAT_14c792f60);
    if (DAT_14c792f60 == -1) {
      _DAT_14c792f50 = 0;
      uRam000000014c792f58 = 0;
      _DAT_14c792f40 = 0;
      uRam000000014c792f48 = 0;
      _DAT_14c792f30 = 0;
      uRam000000014c792f38 = 0;
      _DAT_14c792f20 = 0;
      uRam000000014c792f28 = 0;
      _DAT_14c792f10 = 0;
      uRam000000014c792f18 = 0;
      _Mtx_init_in_situ(&DAT_14c792f10,2);
      atexit((_func_5014 *)&LAB_14252c7a0);
      _Init_thread_footer(&DAT_14c792f60);
      return;
    }
  }
  return;
}



// FUNCTION 14252a760 thunk_FUN_1424b8590 body=5 status=ok
// SIG undefined thunk_FUN_1424b8590(void)

void thunk_FUN_1424b8590(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [36];
  int iStack_34;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iStack_34 = 0;
  uVar2 = FUN_1424edad0(0,"zoneinfo64",&iStack_34);
  uVar3 = FUN_1424ecc30(uVar2,"Names",0,&iStack_34);
  uVar1 = FUN_1424b8640(uVar3,param_1,&iStack_34);
  FUN_1424ebec0(uVar3,uVar1,0,&iStack_34);
  FUN_1424ea9f0(uVar3);
  FUN_1424ea9f0(uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 14252a770 FUN_14252a770 body=69 status=ok
// SIG undefined FUN_14252a770(void)

undefined8 FUN_14252a770(undefined8 param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14252a2a0(param_1,param_3);
  if ((lVar1 == 0) || (0 < *param_3)) {
    FUN_1424a7130(param_2);
  }
  else {
    FUN_1424a8f10(param_2,1,lVar1,0xffffffff);
  }
  return param_2;
}



// FUNCTION 14252a7c0 FUN_14252a7c0 body=140 status=ok
// SIG undefined FUN_14252a7c0(void)

undefined8 FUN_14252a7c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined **local_60;
  undefined2 local_58;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = __RTDynamicCast(param_1,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                          &icu_64::OlsonTimeZone::RTTI_Type_Descriptor,0);
  if (lVar1 == 0) {
    local_1c = 0;
    local_60 = &PTR_FUN_149e18960;
    local_58 = 2;
    FUN_1424a7c80(&local_60,param_1 + 8);
    uVar2 = FUN_14252a2a0(&local_60,&local_1c);
    FUN_140859a90(&local_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
  }
  return uVar2;
}



// FUNCTION 14252a850 Unwind@14252a850 body=32 status=ok
// SIG undefined Unwind@14252a850(void)

void Unwind_14252a850(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14252a870 FUN_14252a870 body=1673 status=ok
// SIG undefined FUN_14252a870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14252a870(longlong param_1,longlong param_2,undefined1 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 *local_68;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined2 local_50;
  undefined1 local_4e;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  lVar4 = FUN_1424b8900(param_1);
  if ((lVar4 == 0) || (iVar3 = FUN_142504390(&DAT_1499dc9f8,lVar4), iVar3 == 0)) {
    FUN_1424a7130(param_2);
    return param_2;
  }
  FUN_1424a8e40(param_2);
  if (*(short *)(param_2 + 8) < 0) {
    iVar3 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_2 + 8) >> 5;
  }
  FUN_1424a9130(param_2,0,iVar3,lVar4,0,0xffffffff);
  if (param_3 == (undefined1 *)0x0) {
    return param_2;
  }
  local_4e = 0;
  local_50 = 0;
  local_4c = 0;
  if ((DAT_14c792f64 == 2) || (cVar2 = FUN_142501800(&DAT_14c792f64), cVar2 == '\0')) {
    if (0 < DAT_14c792f68) {
      return param_2;
    }
  }
  else {
    puVar5 = (undefined8 *)thunk_FUN_1424da030(0x28);
    if (puVar5 == (undefined8 *)0x0) {
      DAT_14c792ee0 = (undefined8 *)0x0;
      local_4c = 7;
    }
    else {
      local_58 = puVar5;
      FUN_142515f20(puVar5,0,&LAB_142503220,&local_4c);
      DAT_14c792ee0 = local_58;
    }
    puVar5 = (undefined8 *)thunk_FUN_1424da030(0x28);
    if (puVar5 == (undefined8 *)0x0) {
      DAT_14c792ee8 = (undefined8 *)0x0;
      local_4c = 7;
LAB_14252aa04:
      if (DAT_14c792ee0 != (undefined8 *)0x0) {
        (**(code **)*DAT_14c792ee0)(DAT_14c792ee0,1);
        puVar5 = DAT_14c792ee8;
      }
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      DAT_14c792ee0 = (undefined8 *)0x0;
      DAT_14c792ee8 = (undefined8 *)0x0;
    }
    else {
      local_58 = puVar5;
      FUN_142515f20(puVar5,0,&LAB_142503220,&local_4c);
      DAT_14c792ee8 = local_58;
      puVar5 = local_58;
      if (0 < local_4c) goto LAB_14252aa04;
    }
    FUN_14251f960(0x11,FUN_14252c6b0);
    DAT_14c792f68 = local_4c;
    FUN_1425019c0(&DAT_14c792f64);
  }
  if (0 < local_4c) {
    return param_2;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792f60) && (FUN_144b3d300(&DAT_14c792f60), DAT_14c792f60 == -1)) {
    _DAT_14c792f50 = 0;
    uRam000000014c792f58 = 0;
    _DAT_14c792f40 = 0;
    uRam000000014c792f48 = 0;
    _DAT_14c792f30 = 0;
    uRam000000014c792f38 = 0;
    _DAT_14c792f20 = 0;
    uRam000000014c792f28 = 0;
    _DAT_14c792f10 = 0;
    uRam000000014c792f18 = 0;
    _Mtx_init_in_situ(&DAT_14c792f10,2);
    atexit((_func_5014 *)&LAB_14252c7a0);
    _Init_thread_footer(&DAT_14c792f60);
  }
  FUN_142501320(&DAT_14c792f10);
  iVar3 = FUN_142516b20(DAT_14c792ee0,lVar4,0);
  bVar9 = true;
  bVar8 = -1 < iVar3;
  if (!bVar8) {
    iVar3 = FUN_142516b20(DAT_14c792ee8,lVar4,0);
    bVar9 = -1 < iVar3;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792f60) && (FUN_144b3d300(&DAT_14c792f60), DAT_14c792f60 == -1)) {
    _DAT_14c792f50 = 0;
    uRam000000014c792f58 = 0;
    _DAT_14c792f40 = 0;
    uRam000000014c792f48 = 0;
    _DAT_14c792f30 = 0;
    uRam000000014c792f38 = 0;
    _DAT_14c792f20 = 0;
    uRam000000014c792f28 = 0;
    _DAT_14c792f10 = 0;
    uRam000000014c792f18 = 0;
    _Mtx_init_in_situ(&DAT_14c792f10,2);
    atexit((_func_5014 *)&LAB_14252c7a0);
    _Init_thread_footer(&DAT_14c792f60);
  }
  FUN_142501400(&DAT_14c792f10);
  bVar1 = bVar8;
  if (bVar9) goto LAB_14252ac35;
  FUN_14250ae10(lVar4,&local_50,2);
  plVar6 = (longlong *)thunk_FUN_1424b7c40(2,&local_50,0,&local_4c);
  iVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_4c);
  bVar1 = local_4c < 1 || bVar8;
  if (iVar3 != 1) {
    bVar1 = bVar8;
  }
  (**(code **)*plVar6)(plVar6,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792f60) && (FUN_144b3d300(&DAT_14c792f60), DAT_14c792f60 == -1)) {
    _DAT_14c792f50 = 0;
    uRam000000014c792f58 = 0;
    _DAT_14c792f40 = 0;
    uRam000000014c792f48 = 0;
    _DAT_14c792f30 = 0;
    uRam000000014c792f38 = 0;
    _DAT_14c792f20 = 0;
    uRam000000014c792f28 = 0;
    _DAT_14c792f10 = 0;
    uRam000000014c792f18 = 0;
    _Mtx_init_in_situ(&DAT_14c792f10,2);
    atexit((_func_5014 *)&LAB_14252c7a0);
    _Init_thread_footer(&DAT_14c792f60);
  }
  FUN_142501320(&DAT_14c792f10);
  local_b0 = (undefined **)((ulonglong)local_b0._4_4_ << 0x20);
  if (bVar1) {
    iVar3 = FUN_142516b20(DAT_14c792ee0,lVar4,0);
    if (iVar3 < 0) {
      puVar5 = &DAT_14c792ee0;
LAB_14252abf5:
      FUN_1425163e0(*puVar5,lVar4,&local_b0);
    }
  }
  else {
    iVar3 = FUN_142516b20(DAT_14c792ee8,lVar4,0);
    if (iVar3 < 0) {
      puVar5 = &DAT_14c792ee8;
      goto LAB_14252abf5;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792f60) && (FUN_144b3d300(&DAT_14c792f60), DAT_14c792f60 == -1)) {
    _DAT_14c792f50 = 0;
    uRam000000014c792f58 = 0;
    _DAT_14c792f40 = 0;
    uRam000000014c792f48 = 0;
    _DAT_14c792f30 = 0;
    uRam000000014c792f38 = 0;
    _DAT_14c792f20 = 0;
    uRam000000014c792f28 = 0;
    _DAT_14c792f10 = 0;
    uRam000000014c792f18 = 0;
    _Mtx_init_in_situ(&DAT_14c792f10,2);
    atexit((_func_5014 *)&LAB_14252c7a0);
    _Init_thread_footer(&DAT_14c792f60);
  }
  FUN_142501400(&DAT_14c792f10);
LAB_14252ac35:
  if (bVar1) {
    *param_3 = 1;
  }
  else {
    local_5c = 0;
    if ((char)local_50 == '\0') {
      FUN_14250ae10(lVar4,&local_50,2);
    }
    uVar7 = FUN_1424edad0(0,"metaZones",&local_4c);
    FUN_1424ecc30(uVar7,"primaryZones",uVar7,&local_4c);
    puVar5 = (undefined8 *)FUN_1424ecf00(uVar7,&local_50,&local_5c,&local_4c);
    if (local_4c < 1) {
      if (*(short *)(param_1 + 8) < 0) {
        iVar3 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar3 = (int)*(short *)(param_1 + 8) >> 5;
      }
      local_58 = puVar5;
      cVar2 = FUN_1424a7e30(param_1,0,iVar3,puVar5,0,local_5c);
      puVar5 = local_58;
      local_68 = local_58;
      if (cVar2 == '\0') {
        *param_3 = 1;
      }
      else {
        local_b0 = &PTR_FUN_149e18960;
        local_a8 = 2;
        FUN_1424b93f0(param_1,&local_b0,&local_4c);
        if ((local_4c < 1) && (cVar2 = FUN_1424c19f0(&local_b0,puVar5,local_5c), cVar2 == '\0')) {
          *param_3 = 1;
        }
        FUN_140859a90(&local_b0);
      }
    }
    FUN_1424ea9f0(uVar7);
  }
  return param_2;
}



// FUNCTION 14252af00 Unwind@14252af00 body=55 status=ok
// SIG undefined Unwind@14252af00(void)

void Unwind_14252af00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 14252af40 Unwind@14252af40 body=55 status=ok
// SIG undefined Unwind@14252af40(void)

void Unwind_14252af40(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 14252af80 Unwind@14252af80 body=53 status=ok
// SIG undefined Unwind@14252af80(void)

void Unwind_14252af80(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x90);
  return;
}



// FUNCTION 14252afc0 Unwind@14252afc0 body=55 status=ok
// SIG undefined Unwind@14252afc0(void)

void Unwind_14252afc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 14252b000 FUN_14252b000 body=164 status=ok
// SIG undefined FUN_14252b000(void)

longlong FUN_14252b000(undefined8 param_1,double param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  lVar2 = FUN_14252b0b0();
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 8))) {
    iVar4 = 0;
    do {
      puVar3 = (undefined8 *)FUN_142516630(lVar2,iVar4);
      if (((double)puVar3[1] <= param_2) && (param_2 < (double)puVar3[2])) {
        uVar1 = *puVar3;
        FUN_1424a8e40(param_3);
        if (*(short *)(param_3 + 8) < 0) {
          iVar4 = *(int *)(param_3 + 0xc);
        }
        else {
          iVar4 = (int)*(short *)(param_3 + 8) >> 5;
        }
        FUN_1424a9130(param_3,0,iVar4,uVar1,0,0xffffffff);
        return param_3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar2 + 8));
  }
  FUN_1424a7130(param_3);
  return param_3;
}



// FUNCTION 14252b0b0 FUN_14252b0b0 body=1116 status=ok
// SIG undefined FUN_14252b0b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14252b0b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_168 [44];
  int local_13c;
  undefined1 local_138 [264];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_13c = 0;
  FUN_1424a8350(param_1,local_138,0x81,&local_13c);
  if ((0 < local_13c) || (local_13c == -0x7c)) goto LAB_14252b348;
  if ((DAT_14c792f6c == 2) || (cVar1 = FUN_142501800(&DAT_14c792f6c), cVar1 == '\0')) {
    if (0 < DAT_14c792f70) goto LAB_14252b348;
  }
  else {
    FUN_14251f960(0x11,FUN_14252c6b0);
    DAT_14c792ef0 = FUN_142501e10(FUN_142503190,&LAB_142503220,0,&local_13c);
    if (local_13c < 1) {
      FUN_142502340(DAT_14c792ef0,&LAB_14252c7b0);
      FUN_142502350(DAT_14c792ef0,&LAB_14252c7c0);
    }
    else {
      DAT_14c792ef0 = 0;
    }
    DAT_14c792f70 = local_13c;
    FUN_1425019c0(&DAT_14c792f6c);
  }
  if (0 < local_13c) goto LAB_14252b348;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792f60) && (FUN_144b3d300(&DAT_14c792f60), DAT_14c792f60 == -1)) {
    _DAT_14c792f50 = 0;
    uRam000000014c792f58 = 0;
    _DAT_14c792f40 = 0;
    uRam000000014c792f48 = 0;
    _DAT_14c792f30 = 0;
    uRam000000014c792f38 = 0;
    _DAT_14c792f20 = 0;
    uRam000000014c792f28 = 0;
    _DAT_14c792f10 = 0;
    uRam000000014c792f18 = 0;
    _Mtx_init_in_situ(&DAT_14c792f10,2);
    atexit((_func_5014 *)&LAB_14252c7a0);
    _Init_thread_footer(&DAT_14c792f60);
  }
  FUN_142501320(&DAT_14c792f10);
  lVar2 = FUN_142502620(DAT_14c792ef0,local_138);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792f60) && (FUN_144b3d300(&DAT_14c792f60), DAT_14c792f60 == -1)) {
    _DAT_14c792f50 = 0;
    uRam000000014c792f58 = 0;
    _DAT_14c792f40 = 0;
    uRam000000014c792f48 = 0;
    _DAT_14c792f30 = 0;
    uRam000000014c792f38 = 0;
    _DAT_14c792f20 = 0;
    uRam000000014c792f28 = 0;
    _DAT_14c792f10 = 0;
    uRam000000014c792f18 = 0;
    _Mtx_init_in_situ(&DAT_14c792f10,2);
    atexit((_func_5014 *)&LAB_14252c7a0);
    _Init_thread_footer(&DAT_14c792f60);
  }
  FUN_142501400(&DAT_14c792f10);
  if ((lVar2 != 0) || (puVar3 = (undefined8 *)FUN_14252b520(param_1), puVar3 == (undefined8 *)0x0))
  goto LAB_14252b348;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792f60) && (FUN_144b3d300(&DAT_14c792f60), DAT_14c792f60 == -1)) {
    _DAT_14c792f50 = 0;
    uRam000000014c792f58 = 0;
    _DAT_14c792f40 = 0;
    uRam000000014c792f48 = 0;
    _DAT_14c792f30 = 0;
    uRam000000014c792f38 = 0;
    _DAT_14c792f20 = 0;
    uRam000000014c792f28 = 0;
    _DAT_14c792f10 = 0;
    uRam000000014c792f18 = 0;
    _Mtx_init_in_situ(&DAT_14c792f10,2);
    atexit((_func_5014 *)&LAB_14252c7a0);
    _Init_thread_footer(&DAT_14c792f60);
  }
  FUN_142501320(&DAT_14c792f10);
  lVar2 = FUN_142502620(DAT_14c792ef0,local_138);
  if (lVar2 == 0) {
    if (*(short *)(param_1 + 8) < 0) {
      iVar4 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 8) >> 5;
    }
    lVar2 = FUN_1424da030((longlong)iVar4 * 2 + 2);
    if (lVar2 == 0) goto LAB_14252b307;
    FUN_1424a8350(param_1,lVar2,iVar4 + 1,&local_13c);
    FUN_142502aa0(DAT_14c792ef0,lVar2,puVar3,&local_13c);
    if (0 < local_13c) goto LAB_14252b307;
  }
  else {
LAB_14252b307:
    (**(code **)*puVar3)(puVar3,1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792f60) && (FUN_144b3d300(&DAT_14c792f60), DAT_14c792f60 == -1)) {
    _DAT_14c792f50 = 0;
    uRam000000014c792f58 = 0;
    _DAT_14c792f40 = 0;
    uRam000000014c792f48 = 0;
    _DAT_14c792f30 = 0;
    uRam000000014c792f38 = 0;
    _DAT_14c792f20 = 0;
    uRam000000014c792f28 = 0;
    _DAT_14c792f10 = 0;
    uRam000000014c792f18 = 0;
    _Mtx_init_in_situ(&DAT_14c792f10,2);
    atexit((_func_5014 *)&LAB_14252c7a0);
    _Init_thread_footer(&DAT_14c792f60);
  }
  FUN_142501400(&DAT_14c792f10);
LAB_14252b348:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_168);
}



// FUNCTION 14252b520 FUN_14252b520 body=805 status=ok
// SIG undefined FUN_14252b520(void)

undefined8 * FUN_14252b520(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  wchar_t *pwVar13;
  char local_148 [136];
  undefined **local_c0;
  short local_b8;
  int local_b4;
  undefined8 *local_80;
  int local_74 [13];
  
  local_74[1] = -2;
  local_74[2] = -1;
  local_74[0] = 0;
  local_c0 = &PTR_FUN_149e18960;
  local_b8 = 2;
  uVar5 = FUN_1424edad0(0,"metaZones",local_74);
  FUN_1424ecc30(uVar5,"metazoneInfo",uVar5,local_74);
  lVar6 = FUN_14252a2a0(param_1,local_74);
  if ((lVar6 == 0) || (0 < local_74[0])) {
    FUN_1424a7130(&local_c0);
  }
  else {
    FUN_1424a8f10(&local_c0,1,lVar6,0xffffffff);
  }
  if (local_74[0] < 1) {
    if (-1 < local_b8) {
      local_b4 = (int)local_b8 >> 5;
    }
    pcVar12 = local_148;
    iVar4 = FUN_1424a83f0(&local_c0,0,local_b4,pcVar12,0x81,0);
    local_148[iVar4] = '\0';
    do {
      if (*pcVar12 == '/') {
        *pcVar12 = ':';
      }
      else if (*pcVar12 == '\0') goto code_r0x00014252b642;
      pcVar12 = pcVar12 + 1;
    } while( true );
  }
LAB_14252b820:
  puVar10 = (undefined8 *)0x0;
LAB_14252b822:
  FUN_1424ea9f0(uVar5);
  FUN_140859a90(&local_c0);
  return puVar10;
code_r0x00014252b642:
  FUN_1424ecc30(uVar5,local_148,uVar5,local_74);
  if (local_74[0] < 1) {
    uVar7 = 0;
    local_80 = (undefined8 *)0x0;
    do {
      while( true ) {
        cVar3 = FUN_1424eaf90(uVar5);
        if (cVar3 == '\0') goto LAB_14252b7f9;
        uVar7 = FUN_1424eb190(uVar5,uVar7,local_74);
        uVar8 = FUN_1424ebec0(uVar7,0,0,local_74);
        iVar4 = FUN_1424eaf70(uVar7);
        pwVar13 = L"1970-01-01 00:00";
        pwVar9 = L"9999-12-31 23:59";
        if (iVar4 == 3) {
          pwVar13 = (wchar_t *)FUN_1424ebec0(uVar7,1,0,local_74);
          pwVar9 = (wchar_t *)FUN_1424ebec0(uVar7,2,0,local_74);
        }
        if (local_74[0] < 1) break;
LAB_14252b68d:
        local_74[0] = 0;
      }
      uVar1 = FUN_14252b900(pwVar13,local_74);
      uVar2 = FUN_14252b900(pwVar9,local_74);
      if (0 < local_74[0]) goto LAB_14252b68d;
      puVar10 = (undefined8 *)FUN_1424da030(0x18);
      if (puVar10 == (undefined8 *)0x0) {
        local_74[0] = 7;
        break;
      }
      *puVar10 = uVar8;
      puVar10[1] = uVar1;
      puVar10[2] = uVar2;
      if (local_80 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)thunk_FUN_1424da030();
        if (puVar11 == (undefined8 *)0x0) {
          if (0 < local_74[0]) goto LAB_14252b7eb;
          local_80 = (undefined8 *)0x0;
        }
        else {
          local_80 = puVar11;
          FUN_142515f20(puVar11,&LAB_14252bb50,0,local_74);
          if (0 < local_74[0]) {
            (**(code **)*local_80)(local_80,1);
LAB_14252b7eb:
            FUN_1424da110(puVar10);
            local_80 = (undefined8 *)0x0;
            break;
          }
        }
      }
      FUN_1425163e0(local_80,puVar10,local_74);
    } while (local_74[0] < 1);
LAB_14252b7f9:
    FUN_1424ea9f0(uVar7);
    puVar10 = local_80;
    if ((local_74[0] < 1) || (local_80 == (undefined8 *)0x0)) goto LAB_14252b822;
    (**(code **)*local_80)(local_80,1);
  }
  goto LAB_14252b820;
}



// FUNCTION 14252b860 Unwind@14252b860 body=74 status=ok
// SIG undefined Unwind@14252b860(void)

void Unwind_14252b860(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf8));
  return;
}



// FUNCTION 14252b8b0 Unwind@14252b8b0 body=74 status=ok
// SIG undefined Unwind@14252b8b0(void)

void Unwind_14252b8b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 14252b900 FUN_14252b900 body=592 status=ok
// SIG undefined FUN_14252b900(void)

double FUN_14252b900(wchar_t *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  
  if (0 < *param_2) {
    return 0.0;
  }
  sVar4 = wcslen(param_1);
  iVar3 = (int)sVar4;
  if ((iVar3 != 10) && (iVar3 != 0x10)) goto LAB_14252bb0e;
  iVar8 = *param_2;
  iVar6 = 0;
  if (iVar8 < 1) {
    iVar9 = (ushort)*param_1 - 0x30;
    if (9 < (ushort)iVar9) {
      iVar9 = -1;
    }
    iVar10 = 0;
    iVar6 = 0;
    iVar5 = 0;
    if (-1 < iVar9) {
      iVar5 = -1;
      if ((ushort)((ushort)param_1[1] - 0x30) < 10) {
        iVar5 = (ushort)param_1[1] - 0x30;
      }
      if (iVar5 < 0) {
        iVar6 = 0;
        iVar5 = iVar9;
      }
      else {
        iVar5 = iVar5 + iVar9 * 10;
        iVar6 = (ushort)param_1[2] - 0x30;
        if (9 < (ushort)((ushort)param_1[2] - 0x30)) {
          iVar6 = -1;
        }
        if (-1 < iVar6) {
          iVar5 = iVar6 + iVar5 * 10;
          iVar6 = -1;
          if ((ushort)((ushort)param_1[3] - 0x30) < 10) {
            iVar6 = (ushort)param_1[3] - 0x30;
          }
          if (-1 < iVar6) {
            iVar5 = iVar6 + iVar5 * 10;
            iVar6 = (ushort)param_1[5] - 0x30;
            if (9 < (ushort)iVar6) {
              iVar6 = -1;
            }
            if (-1 < iVar6) {
              iVar9 = -1;
              if ((ushort)((ushort)param_1[6] - 0x30) < 10) {
                iVar9 = (ushort)param_1[6] - 0x30;
              }
              if (-1 < iVar9) {
                iVar7 = (ushort)param_1[8] - 0x30;
                if (9 < (ushort)iVar7) {
                  iVar7 = -1;
                }
                if (iVar7 < 0) goto LAB_14252bb0e;
                iVar10 = -1;
                if ((ushort)((ushort)param_1[9] - 0x30) < 10) {
                  iVar10 = (ushort)param_1[9] - 0x30;
                }
                if (iVar10 < 0) goto LAB_14252bb0e;
                iVar6 = iVar9 + iVar6 * 10;
                iVar10 = iVar10 + iVar7 * 10;
                goto LAB_14252ba70;
              }
              goto LAB_14252ba64;
            }
          }
        }
        iVar6 = 0;
      }
    }
LAB_14252ba64:
    *param_2 = 3;
    iVar8 = 3;
  }
  else {
    iVar5 = 0;
    iVar10 = 0;
  }
LAB_14252ba70:
  if (iVar3 == 0x10) {
    if (0 < iVar8) {
      return 0.0;
    }
    iVar3 = (ushort)param_1[0xb] - 0x30;
    if (9 < (ushort)iVar3) {
      iVar3 = -1;
    }
    if (-1 < iVar3) {
      iVar8 = -1;
      if ((ushort)((ushort)param_1[0xc] - 0x30) < 10) {
        iVar8 = (ushort)param_1[0xc] - 0x30;
      }
      if (-1 < iVar8) {
        iVar9 = (ushort)param_1[0xe] - 0x30;
        if (9 < (ushort)((ushort)param_1[0xe] - 0x30)) {
          iVar9 = -1;
        }
        if (-1 < iVar9) {
          iVar7 = -1;
          if ((ushort)((ushort)param_1[0xf] - 0x30) < 10) {
            iVar7 = (ushort)param_1[0xf] - 0x30;
          }
          if (-1 < iVar7) {
            dVar2 = (double)((iVar8 + iVar3 * 10) * 3600000);
            dVar1 = (double)((iVar7 + iVar9 * 10) * 60000);
            goto LAB_14252bb23;
          }
        }
      }
    }
LAB_14252bb0e:
    *param_2 = 3;
    return 0.0;
  }
  dVar1 = 0.0;
  dVar2 = 0.0;
  if (0 < iVar8) {
    return 0.0;
  }
LAB_14252bb23:
  dVar11 = (double)FUN_142500e20(iVar5,iVar6 + -1,iVar10);
  return dVar1 + dVar11 * 86400000.0 + dVar2;
}



// FUNCTION 14252bb60 FUN_14252bb60 body=497 status=ok
// SIG undefined FUN_14252bb60(void)

/* WARNING: Removing unreachable block (ram,0x00014252bce3) */

void FUN_14252bb60(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d0;
  int local_cc;
  undefined1 local_c8 [144];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_cc = 0;
  local_d0 = 0;
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar4 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar4 = (int)(short)uVar1 >> 5;
    }
    if (iVar4 < 0x81) {
      local_e0 = 0;
      local_e8 = 0x81;
      iVar4 = FUN_1424a83f0(param_1,0,iVar4,local_c8);
      local_c8[iVar4] = 0;
      uVar5 = FUN_1424edad0(0,"metaZones",&local_cc);
      FUN_1424ecc30(uVar5,"mapTimezones",uVar5,&local_cc);
      FUN_1424ecc30(uVar5,local_c8,uVar5,&local_cc);
      if (local_cc < 1) {
        if (*(short *)(param_2 + 8) < 0) {
          uVar7 = *(uint *)(param_2 + 0xc);
        }
        else {
          uVar7 = (int)*(short *)(param_2 + 8) >> 5;
        }
        if ((uVar7 & 0xfffffffe) == 2) {
          local_e0 = 0;
          local_e8 = 0x81;
          iVar4 = FUN_1424a83f0(param_2,0,uVar7,local_c8);
          local_c8[iVar4] = 0;
          lVar6 = FUN_1424ecf00(uVar5,local_c8,&local_d0,&local_cc);
          lVar3 = lVar6;
          if (local_cc == 2) {
            local_cc = 0;
          }
          else if (0 < local_cc) goto LAB_14252bd14;
LAB_14252bcf3:
          lVar6 = lVar3;
          if (lVar6 == 0) {
            lVar6 = FUN_1424ecf00(uVar5,&DAT_1499dca8f,&local_d0,&local_cc);
          }
        }
        else {
          lVar6 = 0;
          lVar3 = 0;
          if (local_cc < 1) goto LAB_14252bcf3;
        }
LAB_14252bd14:
        FUN_1424ea9f0(uVar5);
        uVar2 = local_d0;
        if (lVar6 != 0) {
          FUN_1424a8e40(param_3);
          if (*(short *)(param_3 + 8) < 0) {
            iVar4 = *(int *)(param_3 + 0xc);
          }
          else {
            iVar4 = (int)*(short *)(param_3 + 8) >> 5;
          }
          local_e0 = uVar2;
          local_e8 = 0;
          FUN_1424a9130(param_3,0,iVar4,lVar6);
          goto LAB_14252bc48;
        }
      }
      else {
        FUN_1424ea9f0(uVar5);
      }
    }
  }
  FUN_1424a7130(param_3);
LAB_14252bc48:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_108);
}



// FUNCTION 14252bd70 FUN_14252bd70 body=60 status=ok
// SIG undefined FUN_14252bd70(void)

undefined8 FUN_14252bd70(void)

{
  char cVar1;
  
  if (DAT_14c792f74 != 2) {
    cVar1 = FUN_142501800(&DAT_14c792f74);
    if (cVar1 != '\0') {
      FUN_14252bdb0();
      FUN_1425019c0(&DAT_14c792f74);
    }
  }
  return DAT_14c792ef8;
}



// FUNCTION 14252bdb0 FUN_14252bdb0 body=724 status=ok
// SIG undefined FUN_14252bdb0(void)

void FUN_14252bdb0(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *_Str;
  size_t sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_128 [200];
  undefined8 local_60;
  undefined8 *local_58;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  FUN_14251f960(0x11,FUN_14252c6b0);
  local_4c[0] = 0;
  DAT_14c792f00 = FUN_142501e10(FUN_1424a9c90,FUN_1424a9cd0,0,local_4c);
  if ((local_4c[0] < 1) && (DAT_14c792f00 != 0)) {
    FUN_142502340(DAT_14c792f00,&LAB_1424b70f0);
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x28);
    if (puVar2 != (undefined8 *)0x0) {
      local_58 = puVar2;
      FUN_142515f20(puVar2,0,&LAB_142503220,local_4c);
      DAT_14c792ef8 = local_58;
      if (local_4c[0] < 1) {
        FUN_142516bb0(local_58,FUN_1424da110);
        local_60 = FUN_1424edad0(0,"metaZones",local_4c);
        uVar3 = FUN_1424ecc30(local_60,"mapTimezones",0,local_4c);
        FUN_1424ea920(local_128);
        while( true ) {
          if (((0 < local_4c[0]) || (cVar1 = FUN_1424eaf90(uVar3), cVar1 == '\0')) ||
             (FUN_1424eb190(uVar3,local_128,local_4c), 0 < local_4c[0])) goto LAB_14252c022;
          _Str = (char *)FUN_1424eaf60(local_128);
          sVar4 = strlen(_Str);
          lVar5 = FUN_1424da030((longlong)((sVar4 << 0x20) + 0x100000000) >> 0x1f);
          if (lVar5 == 0) break;
          FUN_14250ad70(_Str,lVar5,sVar4 & 0xffffffff);
          *(undefined2 *)(lVar5 + ((longlong)(sVar4 << 0x20) >> 0x1f)) = 0;
          local_58 = (undefined8 *)thunk_FUN_1424da030(0x40);
          if (local_58 != (undefined8 *)0x0) {
            FUN_1424a6c90(local_58,lVar5);
          }
          puVar2 = local_58;
          lVar6 = FUN_142502620(DAT_14c792f00,local_58);
          if (lVar6 == 0) {
            FUN_1425163e0(DAT_14c792ef8,lVar5,local_4c);
            FUN_142502aa0(DAT_14c792f00,puVar2,lVar5,local_4c);
          }
          else {
            FUN_1424da110(lVar5);
            if (puVar2 != (undefined8 *)0x0) {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
        }
        local_4c[0] = 7;
LAB_14252c022:
        FUN_1424ea9f0(uVar3);
        FUN_1424ea9f0(local_60);
        if (0 < local_4c[0]) {
          FUN_142502220(DAT_14c792f00);
          if (DAT_14c792ef8 != (undefined8 *)0x0) {
            (**(code **)*DAT_14c792ef8)(DAT_14c792ef8,1);
          }
          DAT_14c792f00 = 0;
          DAT_14c792ef8 = (undefined8 *)0x0;
        }
        FUN_1424ea970(local_128);
        return;
      }
    }
    DAT_14c792ef8 = (undefined8 *)0x0;
    FUN_142502220(DAT_14c792f00);
  }
  DAT_14c792f00 = 0;
  return;
}



// FUNCTION 14252c090 Unwind@14252c090 body=55 status=ok
// SIG undefined Unwind@14252c090(void)

void Unwind_14252c090(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 14252c0d0 Unwind@14252c0d0 body=55 status=ok
// SIG undefined Unwind@14252c0d0(void)

void Unwind_14252c0d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 14252c110 Unwind@14252c110 body=55 status=ok
// SIG undefined Unwind@14252c110(void)

void Unwind_14252c110(undefined8 param_1,longlong param_2)

{
  FUN_1424ea970(param_2 + 0x20);
  return;
}



// FUNCTION 14252c150 FUN_14252c150 body=85 status=ok
// SIG undefined FUN_14252c150(void)

undefined8 FUN_14252c150(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_14c792f74 != 2) {
    cVar1 = FUN_142501800(&DAT_14c792f74);
    if (cVar1 != '\0') {
      FUN_14252bdb0();
      FUN_1425019c0(&DAT_14c792f74);
    }
  }
  if (DAT_14c792f00 != 0) {
    uVar2 = FUN_142502620(DAT_14c792f00,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14252c1b0 FUN_14252c1b0 body=189 status=ok
// SIG undefined FUN_14252c1b0(void)

longlong FUN_14252c1b0(uint param_1)

{
  uint uVar1;
  undefined **local_60;
  undefined2 local_58;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = -param_1;
  if ((int)-param_1 < 0) {
    uVar1 = param_1;
  }
  local_60 = &PTR_FUN_149e18960;
  local_58 = 2;
  FUN_14252c2b0((ulonglong)uVar1 / 3600000,uVar1 / 60000 + ((uVar1 / 60000 & 0xffff) / 0x3c) * -0x3c
                ,uVar1 / 1000 + (uVar1 / 60000) * -0x3c,param_1 >> 0x1f,&local_60);
  local_20 = thunk_FUN_1424da030(0xa0);
  if (local_20 != 0) {
    FUN_14251fa10(local_20,param_1,&local_60);
  }
  FUN_140859a90(&local_60);
  return local_20;
}



// FUNCTION 14252c270 Unwind@14252c270 body=32 status=ok
// SIG undefined Unwind@14252c270(void)

void Unwind_14252c270(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 14252c290 Unwind@14252c290 body=32 status=ok
// SIG undefined Unwind@14252c290(void)

void Unwind_14252c290(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14252c2b0 FUN_14252c2b0 body=580 status=ok
// SIG undefined FUN_14252c2b0(void)

void FUN_14252c2b0(byte param_1,byte param_2,byte param_3,char param_4,longlong param_5)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1424a8e40(param_5);
  if (*(short *)(param_5 + 8) < 0) {
    iVar1 = *(int *)(param_5 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_5 + 8) >> 5;
  }
  local_40 = 0xffffffff;
  local_48 = 0;
  FUN_1424a9130(param_5,0,iVar1,&DAT_1499dca94);
  if (param_2 != 0 || param_1 != 0) {
    if (param_4 == '\0') {
      local_32 = 0x2b;
    }
    else {
      local_32 = 0x2d;
    }
    FUN_1424a6cf0(param_5,&local_32,0,1);
    local_32 = (ushort)(byte)((byte)((uint)(byte)(param_1 +
                                                 (char)((uint)param_1 * 0x29 >> 0xc) * -100) * 0x67
                                    >> 10) | 0x30);
    FUN_1424a6cf0(param_5,&local_32,0,1);
    local_32 = (ushort)(byte)(param_1 + (param_1 / 5 & 0xfe) * -5 | 0x30);
    FUN_1424a6cf0(param_5,&local_32,0,1);
    local_32 = 0x3a;
    FUN_1424a6cf0(param_5,&local_32,0,1);
    local_32 = (ushort)(byte)((byte)((uint)(byte)(param_2 +
                                                 (char)((uint)param_2 * 0x29 >> 0xc) * -100) * 0x67
                                    >> 10) | 0x30);
    FUN_1424a6cf0(param_5,&local_32,0,1);
    local_32 = (ushort)(byte)(param_2 + (param_2 / 5 & 0xfe) * -5 | 0x30);
    FUN_1424a6cf0(param_5,&local_32,0,1);
    if (param_3 != 0) {
      local_32 = 0x3a;
      FUN_1424a6cf0(param_5,&local_32,0,1);
      local_32 = (ushort)(byte)((byte)((uint)(byte)(param_3 +
                                                   (char)((uint)param_3 * 0x29 >> 0xc) * -100) *
                                       0x67 >> 10) | 0x30);
      FUN_1424a6cf0(param_5,&local_32,0,1);
      local_32 = (ushort)(byte)(param_3 + (param_3 / 5 & 0xfe) * -5 | 0x30);
      FUN_1424a6cf0(param_5,&local_32,0,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 14252c510 FUN_14252c510 body=72 status=ok
// SIG undefined FUN_14252c510(void)

undefined8 FUN_14252c510(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __RTDynamicCast(param_1,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                          &icu_64::OlsonTimeZone::RTTI_Type_Descriptor,0);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x98) != 0)) {
    uVar2 = FUN_14252c560();
    return uVar2;
  }
  return 0;
}



// FUNCTION 14252c560 FUN_14252c560 body=218 status=ok
// SIG undefined FUN_14252c560(void)

void FUN_14252c560(wchar_t *param_1)

{
  size_t sVar1;
  char *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  char local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  sVar1 = wcslen(param_1);
  FUN_14250ae10(param_1,local_a8,sVar1 & 0xffffffff);
  local_a8[(int)sVar1] = '\0';
  if (local_a8[0] != '\0') {
    pcVar2 = local_a8;
    do {
      pcVar2 = pcVar2 + 1;
      cVar4 = *pcVar2;
      if (cVar4 == '/') {
        *pcVar2 = ':';
        cVar4 = ':';
      }
    } while (cVar4 != '\0');
  }
  local_ac = 0;
  uVar3 = FUN_1424edad0(0,"keyTypeData",&local_ac);
  FUN_1424ecc30(uVar3,"typeMap",uVar3,&local_ac);
  FUN_1424ecc30(uVar3,"timezone",uVar3,&local_ac);
  FUN_1424ecf00(uVar3,local_a8,0,&local_ac);
  FUN_1424ea9f0(uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_d8);
}



// FUNCTION 14252c650 FUN_14252c650 body=76 status=ok
// SIG undefined FUN_14252c650(void)

void FUN_14252c650(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  lVar1 = FUN_14252a2a0(param_1,&local_14);
  if ((lVar1 != 0) && (local_14 < 1)) {
    FUN_14252c560(lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14252c6b0 FUN_14252c6b0 body=228 status=ok
// SIG undefined FUN_14252c6b0(void)

undefined8 FUN_14252c6b0(void)

{
  undefined4 uVar1;
  
  if (DAT_14c792ed8 != 0) {
    FUN_142502220();
    DAT_14c792ed8 = 0;
  }
  LOCK();
  DAT_14c792f08 = 0;
  UNLOCK();
  if (DAT_14c792ef0 != 0) {
    FUN_142502220();
    DAT_14c792ef0 = 0;
  }
  LOCK();
  DAT_14c792f6c = 0;
  UNLOCK();
  if (DAT_14c792f00 != 0) {
    FUN_142502220();
    DAT_14c792f00 = 0;
  }
  if (DAT_14c792ef8 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c792ef8)(DAT_14c792ef8,1);
  }
  DAT_14c792ef8 = (undefined8 *)0x0;
  LOCK();
  DAT_14c792f74 = 0;
  UNLOCK();
  if (DAT_14c792ee0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c792ee0)(DAT_14c792ee0,1);
  }
  DAT_14c792ee0 = (undefined8 *)0x0;
  if (DAT_14c792ee8 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c792ee8)(DAT_14c792ee8,1);
  }
  uVar1 = DAT_14c792f64;
  DAT_14c792ee8 = (undefined8 *)0x0;
  LOCK();
  DAT_14c792f64 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 14252c7e0 FUN_14252c7e0 body=8 status=ok
// SIG undefined FUN_14252c7e0(void)

undefined * FUN_14252c7e0(void)

{
  return &DAT_14c792f7c;
}



// FUNCTION 14252c7f0 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 14252c800 FUN_14252c800 body=8 status=ok
// SIG undefined FUN_14252c800(void)

undefined * FUN_14252c800(void)

{
  return &DAT_14c792f80;
}



// FUNCTION 14252c810 FUN_14252c810 body=97 status=ok
// SIG undefined FUN_14252c810(void)

undefined8 * FUN_14252c810(undefined8 *param_1)

{
  *param_1 = icu_64::Formattable::vftable;
  param_1[6] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 7) = 2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1424a7130(param_1 + 6);
  return param_1;
}



// FUNCTION 14252c880 Unwind@14252c880 body=39 status=ok
// SIG undefined Unwind@14252c880(void)

void Unwind_14252c880(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14252c8b0 FUN_14252c8b0 body=120 status=ok
// SIG undefined FUN_14252c8b0(void)

void FUN_14252c8b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = icu_64::Formattable::vftable;
  param_1[6] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 7) = 2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1424a7130(param_1 + 6);
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[1] = param_2;
  return;
}



// FUNCTION 14252c930 Unwind@14252c930 body=48 status=ok
// SIG undefined Unwind@14252c930(void)

void Unwind_14252c930(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14252c960 FUN_14252c960 body=108 status=ok
// SIG undefined FUN_14252c960(void)

void FUN_14252c960(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::Formattable::vftable;
  param_1[6] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 7) = 2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1424a7130(param_1 + 6);
  param_1[1] = (longlong)param_2;
  return;
}



// FUNCTION 14252c9d0 Unwind@14252c9d0 body=41 status=ok
// SIG undefined Unwind@14252c9d0(void)

void Unwind_14252c9d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14252ca00 FUN_14252ca00 body=113 status=ok
// SIG undefined FUN_14252ca00(void)

void FUN_14252ca00(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = icu_64::Formattable::vftable;
  param_1[6] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 7) = 2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1424a7130(param_1 + 6);
  *(undefined4 *)(param_1 + 5) = 5;
  param_1[1] = param_2;
  return;
}



// FUNCTION 14252ca80 Unwind@14252ca80 body=41 status=ok
// SIG undefined Unwind@14252ca80(void)

void Unwind_14252ca80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14252cab0 FUN_14252cab0 body=201 status=ok
// SIG undefined FUN_14252cab0(void)

void FUN_14252cab0(longlong param_1,undefined4 *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    FUN_14252d010();
    local_30 = thunk_FUN_1424da030(0x48);
    FUN_142537d10(local_30);
    uVar2 = local_30;
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_142539ce0(local_30,&local_48,param_3);
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    cVar3 = FUN_142539e00(uVar2,0);
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x28) = 1;
      uVar2 = FUN_142538d80(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
    else {
      lVar4 = FUN_142538cc0(*(undefined8 *)(param_1 + 0x20),0);
      *(longlong *)(param_1 + 8) = lVar4;
      if ((int)lVar4 == lVar4) {
        *(undefined4 *)(param_1 + 0x28) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x28) = 5;
      }
    }
  }
  return;
}



// FUNCTION 14252cb80 Unwind@14252cb80 body=36 status=ok
// SIG undefined Unwind@14252cb80(void)

void Unwind_14252cb80(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 14252cbb0 FUN_14252cbb0 body=274 status=ok
// SIG undefined FUN_14252cbb0(void)

ulonglong * FUN_14252cbb0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  uVar8 = (ulonglong)(int)param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar9 = 0xffffffffffffffff;
  if (SUB168(auVar2 * ZEXT816(0x70),8) == 0) {
    uVar9 = SUB168(auVar2 * ZEXT816(0x70),0) | 8;
  }
  puVar3 = (ulonglong *)thunk_FUN_1424da030(uVar9);
  if (puVar3 == (ulonglong *)0x0) {
    puVar7 = (ulonglong *)0x0;
  }
  else {
    *puVar3 = uVar8;
    puVar7 = puVar3 + 1;
    if (param_2 != 0) {
      lVar5 = 0;
      do {
        *(undefined ***)((longlong)puVar3 + lVar5 + 8) = icu_64::Formattable::vftable;
        lVar4 = (longlong)puVar3 + lVar5 + 0x38;
        *(undefined ***)((longlong)puVar3 + lVar5 + 0x38) = &PTR_FUN_149e18960;
        *(undefined2 *)((longlong)puVar3 + lVar5 + 0x40) = 2;
        *(undefined8 *)((longlong)puVar3 + lVar5 + 0x10) = 0;
        *(undefined4 *)((longlong)puVar3 + lVar5 + 0x30) = 2;
        puVar1 = (undefined8 *)((longlong)puVar3 + lVar5 + 0x20);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar10 = lVar5;
        FUN_1424a7130();
        lVar5 = lVar10 + 0x70;
      } while (uVar8 * 0x70 - lVar5 != 0);
      if (0 < (int)param_2) {
        uVar9 = (ulonglong)param_2;
        puVar6 = puVar7;
        do {
          FUN_14252ce00(puVar6,param_1,param_3,param_4,lVar4,lVar10,puVar3,uVar11);
          puVar6 = puVar6 + 0xe;
          param_1 = param_1 + 0x70;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  return puVar7;
}



// FUNCTION 14252ccd0 Unwind@14252ccd0 body=115 status=ok
// SIG undefined Unwind@14252ccd0(void)

void Unwind_14252ccd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  lVar2 = *(longlong *)(param_2 + 0x28);
  FUN_1424b70d0(*(longlong *)(param_2 + 0x30) + lVar2 + 8);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    do {
      FUN_14252d110(lVar1 + -0x68 + lVar2);
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
  }
  FUN_1424b70c0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14252cd50 FUN_14252cd50 body=114 status=ok
// SIG undefined FUN_14252cd50(void)

undefined8 *
FUN_14252cd50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = icu_64::Formattable::vftable;
  puVar1 = param_1 + 6;
  param_1[6] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 7) = 2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1424a7130(puVar1);
  FUN_14252ce00(param_1,param_2,param_3,param_4,puVar1,param_1,uVar2);
  return param_1;
}



// FUNCTION 14252cdd0 Unwind@14252cdd0 body=41 status=ok
// SIG undefined Unwind@14252cdd0(void)

void Unwind_14252cdd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14252ce00 FUN_14252ce00 body=360 status=ok
// SIG undefined FUN_14252ce00(void)

longlong FUN_14252ce00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int local_34;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_14252d010(param_1);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  switch(uVar1) {
  case 0:
  case 1:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    goto switchD_14252ce46_default;
  case 2:
  case 5:
    plVar3 = (longlong *)*(longlong *)(param_2 + 8);
    break;
  case 3:
    local_30 = (longlong *)thunk_FUN_1424da030(0x40);
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      FUN_1424a6be0(local_30,*(undefined8 *)(param_2 + 8));
      plVar3 = local_30;
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    plVar3 = (longlong *)FUN_14252cbb0(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10))
    ;
    break;
  case 6:
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    break;
  default:
    goto switchD_14252ce46_default;
  }
  *(longlong **)(param_1 + 8) = plVar3;
switchD_14252ce46_default:
  local_34 = 0;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    local_30 = (longlong *)thunk_FUN_1424da030(0x48);
    if (local_30 != (longlong *)0x0) {
      FUN_142537d90(local_30,*(undefined8 *)(param_2 + 0x20));
    }
    *(longlong **)(param_1 + 0x20) = local_30;
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    local_30 = (longlong *)thunk_FUN_1424da030(0x40);
    if (local_30 != (longlong *)0x0) {
      puVar2 = *(undefined8 **)(param_2 + 0x18);
      *local_30 = (longlong)local_30 + 0xd;
      *(undefined4 *)(local_30 + 1) = 0x28;
      *(undefined2 *)((longlong)local_30 + 0xc) = 0;
      *(undefined4 *)(local_30 + 7) = 0;
      FUN_142503520(local_30,*puVar2,*(undefined4 *)(puVar2 + 7),&local_34);
      plVar3 = local_30;
      *(longlong **)(param_1 + 0x18) = local_30;
      if (local_34 < 1) {
        return param_1;
      }
      if (*(char *)((longlong)local_30 + 0xc) != '\0') {
        FUN_1424da110(*local_30);
      }
      FUN_1401773f0(plVar3);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



// FUNCTION 14252cf70 Unwind@14252cf70 body=36 status=ok
// SIG undefined Unwind@14252cf70(void)

void Unwind_14252cf70(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14252cfa0 Unwind@14252cfa0 body=58 status=ok
// SIG undefined Unwind@14252cfa0(void)

void Unwind_14252cfa0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x28) + 0xc) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x28));
  }
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14252cfe0 Unwind@14252cfe0 body=36 status=ok
// SIG undefined Unwind@14252cfe0(void)

void Unwind_14252cfe0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14252d010 FUN_14252d010 body=251 status=ok
// SIG undefined FUN_14252d010(void)

void FUN_14252d010(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 6) {
    if (iVar1 == 4) {
      lVar3 = *(longlong *)(param_1 + 8);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + -8);
        if (lVar4 != 0) {
          lVar6 = lVar4 * -0x70;
          puVar2 = (undefined8 *)(lVar4 * 0x70 + lVar3);
          do {
            puVar5 = puVar2 + -0xe;
            *puVar5 = icu_64::Formattable::vftable;
            FUN_14252d010(puVar5);
            FUN_140859a90(puVar2 + -8);
            FUN_1424b70d0(puVar5);
            lVar6 = lVar6 + 0x70;
            puVar2 = puVar5;
          } while (lVar6 != 0);
        }
        FUN_1424b70c0(lVar3 + -8);
      }
      goto LAB_14252d0ae;
    }
    if (iVar1 != 3) goto LAB_14252d0ae;
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
LAB_14252d0ae:
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)puVar2 + 0xc) != '\0') {
      FUN_1424da110(*puVar2);
    }
    FUN_1401773f0(puVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 14252d110 FUN_14252d110 body=45 status=ok
// SIG undefined FUN_14252d110(void)

void FUN_14252d110(undefined8 *param_1)

{
  *param_1 = icu_64::Formattable::vftable;
  FUN_14252d010();
  FUN_140859a90(param_1 + 6);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14252d140 FUN_14252d140 body=4 status=ok
// SIG undefined FUN_14252d140(void)

undefined4 FUN_14252d140(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


