// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144e378c0 FUN_144e378c0 body=188 status=ok
// SIG undefined FUN_144e378c0(void)

undefined8 FUN_144e378c0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0x20);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x10000;
  if ((uint)param_1[3] + (uint)param_1[2] * 0x100 + iVar2 != 0x10000) {
    if (((uint)param_1[3] + (uint)param_1[2] * 0x100 + iVar2 == 0x20000) &&
       (cVar1 = FUN_144e37380(param_1 + 0x20,param_2), cVar1 != '\0')) {
      return 1;
    }
    if ((((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
        (uint)param_1[3] != 0x30000) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144e37980 FUN_144e37980 body=200 status=ok
// SIG undefined FUN_144e37980(void)

int FUN_144e37980(longlong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = (uint)*(byte *)(param_1 + 6) * 0x100 + (*(byte *)(param_1 + 7) - 1);
  if (-1 < iVar5) {
    do {
      uVar2 = (uint)(iVar6 + iVar5) >> 1;
      uVar3 = (uint)(ushort)((ushort)*(byte *)(param_1 + 8 + (ulonglong)uVar2 * 4) * 0x100 +
                            (ushort)*(byte *)(param_1 + 9 + (ulonglong)uVar2 * 4));
      if (param_2 < uVar3) {
        iVar5 = uVar2 - 1;
      }
      else {
        if (param_2 == uVar3) {
          if (uVar2 < (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7)) {
            uVar4 = (ushort)*(byte *)(param_1 + 2 + ((ulonglong)uVar2 + 2) * 4);
            uVar1 = (ushort)*(byte *)(param_1 + ((ulonglong)uVar2 + 2) * 4 + 3);
          }
          else {
            uVar4 = 0;
            uVar1 = 0;
          }
          goto LAB_144e379f9;
        }
        iVar6 = uVar2 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  uVar4 = (ushort)*(byte *)(param_1 + 4);
  uVar1 = (ushort)*(byte *)(param_1 + 5);
LAB_144e379f9:
  return (int)(short)(uVar1 + uVar4 * 0x100);
}



// FUNCTION 144e37a50 FUN_144e37a50 body=102 status=ok
// SIG undefined FUN_144e37a50(void)

undefined8 FUN_144e37a50(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144e37ac0 FUN_144e37ac0 body=118 status=ok
// SIG undefined FUN_144e37ac0(void)

undefined1 FUN_144e37ac0(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,8);
  if ((cVar1 != '\0') && (param_3 + 1U < 0x3fffffff)) {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 8,(param_3 + 1U) * 4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144e37b40 FUN_144e37b40 body=354 status=ok
// SIG undefined FUN_144e37b40(void)

undefined8 FUN_144e37b40(longlong param_1,uint param_2,int *param_3,int *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar1 = (byte *)(param_1 + 8);
  lVar2 = (ulonglong)(param_2 + 1) * 4;
  pbVar6 = &DAT_149a1f1a0;
  if (pbVar1 <= pbVar1 + lVar2) {
    pbVar6 = pbVar1 + lVar2;
  }
  lVar3 = (ulonglong)param_2 * 4;
  pbVar5 = &DAT_149a1f1a0;
  if (pbVar1 <= pbVar1 + lVar3) {
    pbVar5 = pbVar1 + lVar3;
  }
  if ((uint)pbVar5[1] * 0x10000 + (uint)pbVar5[2] * 0x100 + (uint)*pbVar5 * 0x1000000 +
      (uint)pbVar5[3] <
      (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000 +
      (uint)pbVar6[3]) {
    pbVar6 = &DAT_149a1f1a0;
    if (pbVar1 <= pbVar1 + lVar3) {
      pbVar6 = pbVar1 + lVar3;
    }
    *param_3 = (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 +
               (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
               (uint)*pbVar6 * 0x1000000 + (uint)*(byte *)(param_1 + 4) * 0x1000000 +
               (uint)pbVar6[3] + (uint)*(byte *)(param_1 + 7);
    pbVar6 = &DAT_149a1f1a0;
    if (pbVar1 <= pbVar1 + lVar2) {
      pbVar6 = pbVar1 + lVar2;
    }
    pbVar5 = &DAT_149a1f1a0;
    if (pbVar1 <= pbVar1 + lVar3) {
      pbVar5 = pbVar1 + lVar3;
    }
    uVar4 = 1;
    *param_4 = (((uint)pbVar6[1] * 0x10000 + (uint)pbVar5[1] * -0x10000 + (uint)pbVar5[2] * -0x100 +
                 (uint)*pbVar5 * -0x1000000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000) -
               (uint)pbVar5[3]) + (uint)pbVar6[3];
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144e37cb0 FUN_144e37cb0 body=183 status=ok
// SIG undefined FUN_144e37cb0(void)

undefined8 FUN_144e37cb0(byte *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,8);
  if (cVar1 != '\0') {
    iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar3 == 1) {
      uVar2 = FUN_144e37ac0(param_1,param_2,param_3);
      return uVar2;
    }
    if (iVar3 != 3) {
      return 1;
    }
    cVar1 = FUN_144e2c5c0(param_2,param_1,8);
    if (((cVar1 != '\0') && (param_3 + 1U < 0x7fffffff)) &&
       (cVar1 = FUN_144e2c5c0(param_2,param_1 + 8,(param_3 + 1U) * 2), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144e37d70 FUN_144e37d70 body=148 status=ok
// SIG undefined FUN_144e37d70(void)

bool FUN_144e37d70(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 144e37e10 FUN_144e37e10 body=179 status=ok
// SIG undefined FUN_144e37e10(void)

undefined8 FUN_144e37e10(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144e37d70();
  if (cVar1 == '\0') {
LAB_144e37eac:
    uVar2 = 0;
  }
  else {
    if ((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
        (uint)param_1[3] != 0) {
      cVar1 = FUN_144e37cb0((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                            ,param_4);
      if (cVar1 == '\0') {
        cVar1 = FUN_144e2d280(param_2,param_1,4);
        if (cVar1 == '\0') goto LAB_144e37eac;
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 144e37ed0 FUN_144e37ed0 body=162 status=ok
// SIG undefined FUN_144e37ed0(void)

byte * FUN_144e37ed0(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      pbVar4 = param_1 + uVar2 * 8;
      pbVar5 = &DAT_149a1f1a0;
      if (param_1 <= pbVar4) {
        pbVar5 = pbVar4;
      }
      pbVar3 = &DAT_149a1f1a0;
      if (param_1 <= pbVar4) {
        pbVar3 = pbVar4;
      }
      if (((uint)*pbVar5 * 0x100 + (uint)pbVar5[1] <= param_2) &&
         (param_2 <= (uint)pbVar3[2] * 0x100 + (uint)pbVar3[3])) {
        pbVar4 = &DAT_149a1f1a0;
        if (param_1 <= param_1 + uVar2 * 8) {
          pbVar4 = param_1 + uVar2 * 8;
        }
        return pbVar4;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
  }
  return (byte *)0x0;
}



// FUNCTION 144e37f80 FUN_144e37f80 body=452 status=ok
// SIG undefined FUN_144e37f80(void)

undefined8 FUN_144e37f80(longlong param_1,int *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if ((0x1ffffffe < param_3) || (cVar2 = FUN_144e2c5c0(param_2,param_1,param_3 * 8), cVar2 == '\0'))
  {
    return 0;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    pbVar5 = (byte *)(param_1 + 3);
    do {
      pbVar6 = pbVar5 + -3;
      if ((((pbVar6 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < pbVar6)) ||
          ((uint)(param_2[4] - (int)pbVar6) < 8)) ||
         (iVar1 = param_2[6], param_2[6] = iVar1 + -1, iVar1 < 1)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      pcVar3 = "OUT-OF-RANGE";
      if (cVar2 != '\0') {
        pcVar3 = "OK";
      }
      FUN_144e30540("SANITIZE",pbVar6,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",pbVar6,pbVar5 + 5,8,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if (cVar2 == '\0') {
        return 0;
      }
      if ((ushort)((ushort)pbVar5[-1] * 0x100 + (ushort)*pbVar5) <
          (ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar5[-2])) {
        return 0;
      }
      cVar2 = FUN_144e37e10(pbVar5 + 1,param_2,param_4,
                            (((uint)pbVar5[-1] - (uint)*pbVar6) * 0x100 - (uint)pbVar5[-2]) + 1 +
                            (uint)*pbVar5);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 8;
    } while (uVar4 < param_3);
  }
  return 1;
}



// FUNCTION 144e38150 FUN_144e38150 body=147 status=ok
// SIG undefined FUN_144e38150(void)

undefined1 FUN_144e38150(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0x30);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e38270(param_1,param_2,param_3,*(undefined4 *)(param_1 + 8));
    if (cVar1 != '\0') {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 0x10,0xc);
      if (cVar1 != '\0') {
        cVar1 = FUN_144e2c5c0(param_2,param_1 + 0x1c,0xc);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144e381f0 FUN_144e381f0 body=128 status=ok
// SIG undefined FUN_144e381f0(void)

bool FUN_144e381f0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,
                        (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 +
                        (uint)*param_1 * 0x1000000 + (uint)param_1[3]);
  return cVar1 != '\0';
}



// FUNCTION 144e38270 FUN_144e38270 body=168 status=ok
// SIG undefined FUN_144e38270(void)

undefined8 FUN_144e38270(undefined1 *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144e381f0();
  if (cVar1 != '\0') {
    lVar2 = (ulonglong)(byte)param_1[3] +
            ((ulonglong)(byte)param_1[2] + (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) * 0x100
            + param_3;
    cVar1 = FUN_144e37f80(lVar2,param_2,
                          (param_4 >> 0x10 & 0xff) * 0x100 + (param_4 >> 8 & 0xff) * 0x10000 +
                          param_4 * 0x1000000 + (param_4 >> 0x18),lVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144e38320 FUN_144e38320 body=472 status=ok
// SIG undefined FUN_144e38320(void)

undefined1 * FUN_144e38320(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  
  uVar5 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar5 != 0) {
    puVar10 = &DAT_149a1f1a0;
    puVar6 = &DAT_149a1f1a0;
    uVar3 = *(uint *)(param_2 + 0x2c);
    if (*(uint *)(param_2 + 0x2c) < *(uint *)(param_2 + 0x28)) {
      uVar3 = *(uint *)(param_2 + 0x28);
    }
    if (uVar3 == 0) {
      uVar3 = 0x40000000;
    }
    uVar11 = 0;
    if ((uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
        (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) != 0) {
      puVar6 = (undefined1 *)(param_1 + 8);
    }
    puVar2 = &DAT_149a1f1a0;
    if ((uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
        (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) != 0) {
      puVar2 = (undefined1 *)(param_1 + 8);
    }
    uVar8 = 1;
    pbVar7 = puVar6 + 0x2d;
    if ((byte)puVar6[0x2d] < (byte)puVar2[0x2c]) {
      pbVar7 = puVar2 + 0x2c;
    }
    uVar9 = (uint)*pbVar7;
    if (1 < uVar5) {
      iVar4 = (uint)*(byte *)(param_1 + 4) * 0x1000000;
      uVar11 = 0;
      do {
        if (uVar8 < (uint)*(byte *)(param_1 + 7) +
                    (uint)*(byte *)(param_1 + 6) * 0x100 + iVar4 +
                    (uint)*(byte *)(param_1 + 5) * 0x10000) {
          puVar6 = (undefined1 *)(param_1 + 8 + (ulonglong)uVar8 * 0x30);
        }
        else {
          puVar6 = &DAT_149a1f1a0;
        }
        if (uVar8 < (uint)*(byte *)(param_1 + 7) +
                    (uint)*(byte *)(param_1 + 6) * 0x100 + iVar4 +
                    (uint)*(byte *)(param_1 + 5) * 0x10000) {
          puVar2 = (undefined1 *)((ulonglong)uVar8 * 0x30 + 8 + param_1);
        }
        else {
          puVar2 = &DAT_149a1f1a0;
        }
        pbVar7 = puVar6 + 0x2d;
        if ((byte)puVar6[0x2d] < (byte)puVar2[0x2c]) {
          pbVar7 = puVar2 + 0x2c;
        }
        bVar1 = *pbVar7;
        if (((uVar3 <= bVar1) && (bVar1 < uVar9)) || ((uVar9 < uVar3 && (uVar9 < bVar1)))) {
          uVar9 = (uint)bVar1;
          uVar11 = uVar8;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
    if (uVar11 < (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
                 (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7)) {
      puVar10 = (undefined1 *)(param_1 + 8 + (ulonglong)uVar11 * 0x30);
    }
    return puVar10;
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 144e38500 FUN_144e38500 body=183 status=ok
// SIG undefined FUN_144e38500(void)

undefined1 FUN_144e38500(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e385c0();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = 0;
  uVar4 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (uVar4 != 0) {
    do {
      cVar1 = FUN_144e38150(param_1 + uVar3 * 0x30 + 4,param_2,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar4);
  }
  return 1;
}



// FUNCTION 144e385c0 FUN_144e385c0 body=131 status=ok
// SIG undefined FUN_144e385c0(void)

undefined8 FUN_144e385c0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x5555555) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 0x30);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e38650 FUN_144e38650 body=200 status=ok
// SIG undefined FUN_144e38650(void)

void FUN_144e38650(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_48[0] = 0;
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = FUN_144e2d260(param_2);
  local_14 = 1;
  uVar2 = FUN_144e2d200(param_2,0x43424c43);
  uVar2 = FUN_144e3adc0(local_48,uVar2);
  *param_1 = uVar2;
  local_48[0] = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = FUN_144e2d260(param_2);
  local_14 = 1;
  uVar2 = FUN_144e2d200(param_2,0x43424454);
  uVar2 = FUN_144e3b050(local_48,uVar2);
  param_1[1] = uVar2;
  uVar1 = FUN_144e2d250(param_2);
  *(undefined4 *)(param_1 + 2) = uVar1;
  return;
}



// FUNCTION 144e38720 FUN_144e38720 body=1072 status=ok
// SIG undefined FUN_144e38720(void)

ulonglong FUN_144e38720(undefined8 *param_1,undefined8 param_2,uint param_3,int *param_4)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  double dVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  undefined8 local_res8;
  uint local_58 [12];
  
  puVar15 = (undefined1 *)*param_1;
  puVar17 = &DAT_149a1f1a0;
  puVar20 = &DAT_149a1f1a0;
  if (puVar15 != (undefined1 *)0x0) {
    puVar20 = puVar15;
  }
  puVar12 = &DAT_149a1f1a0;
  if (7 < *(uint *)(puVar20 + 0x18)) {
    puVar12 = *(undefined1 **)(puVar20 + 0x10);
  }
  puVar8 = (undefined1 *)FUN_144e38320(puVar12);
  puVar20 = &DAT_149a1f1a0;
  puVar12 = &DAT_149a1f1a0;
  if (puVar15 != (undefined1 *)0x0) {
    puVar12 = puVar15;
  }
  if (7 < *(uint *)(puVar12 + 0x18)) {
    puVar20 = *(undefined1 **)(puVar12 + 0x10);
  }
  uVar2 = puVar8[1];
  uVar3 = *puVar8;
  bVar4 = puVar8[3];
  bVar5 = puVar8[2];
  pbVar9 = (byte *)FUN_144e37ed0(puVar20 + (ulonglong)bVar4 +
                                           ((ulonglong)bVar5 +
                                           (ulonglong)CONCAT11(uVar3,uVar2) * 0x100) * 0x100,param_3
                                 ,(uint)(byte)puVar8[9] * 0x10000 + (uint)(byte)puVar8[10] * 0x100 +
                                  (uint)(byte)puVar8[8] * 0x1000000 + (uint)(byte)puVar8[0xb]);
  if (((pbVar9 == (byte *)0x0) || (puVar8[0x2c] == '\0')) || (puVar8[0x2d] == '\0')) {
    return (ulonglong)pbVar9 & 0xffffffffffffff00;
  }
  uVar10 = 0;
  uVar19 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
  local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
  local_58[0] = 0;
  if ((uVar19 <= param_3) &&
     (uVar10 = (ulonglong)pbVar9[2] << 8, param_3 <= (uint)pbVar9[3] + (int)uVar10)) {
    if ((uint)pbVar9[4] * 0x1000000 + (uint)pbVar9[6] * 0x100 + (uint)pbVar9[5] * 0x10000 +
        (uint)pbVar9[7] == 0) {
      pbVar9 = &DAT_149a1f1a0;
    }
    else {
      pbVar9 = puVar20 + (ulonglong)bVar4 +
                         ((ulonglong)bVar5 + (ulonglong)CONCAT11(uVar3,uVar2) * 0x100) * 0x100 +
               (ulonglong)pbVar9[7] +
               ((ulonglong)pbVar9[6] + (ulonglong)CONCAT11(pbVar9[4],pbVar9[5]) * 0x100) * 0x100;
    }
    param_3 = param_3 - uVar19;
    uVar22 = (ulonglong)param_3;
    iVar18 = (uint)pbVar9[2] * 0x100 + (uint)pbVar9[3];
    uVar10 = 0;
    iVar11 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
    if (iVar11 == 1) {
      uVar10 = FUN_144e37b40(pbVar9,uVar22,&local_res8,local_58);
      uVar19 = (uint)local_res8;
      uVar21 = local_58[0];
    }
    else {
      if (iVar11 != 3) goto LAB_144e38b48;
      pbVar1 = pbVar9 + 8;
      local_res8 = (ulonglong)(param_3 + 1);
      pbVar13 = &DAT_149a1f1a0;
      if (pbVar1 <= pbVar1 + local_res8 * 2) {
        pbVar13 = pbVar1 + local_res8 * 2;
      }
      pbVar16 = &DAT_149a1f1a0;
      if (pbVar1 <= pbVar1 + uVar22 * 2) {
        pbVar16 = pbVar1 + uVar22 * 2;
      }
      if ((ushort)((ushort)pbVar16[1] + (ushort)*pbVar16 * 0x100) <
          (ushort)((ushort)*pbVar13 * 0x100 + (ushort)pbVar13[1])) {
        pbVar13 = &DAT_149a1f1a0;
        if (pbVar1 <= pbVar1 + uVar22 * 2) {
          pbVar13 = pbVar1 + uVar22 * 2;
        }
        pbVar16 = &DAT_149a1f1a0;
        if (pbVar1 <= pbVar1 + local_res8 * 2) {
          pbVar16 = pbVar1 + local_res8 * 2;
        }
        pbVar14 = &DAT_149a1f1a0;
        if (pbVar1 <= pbVar1 + uVar22 * 2) {
          pbVar14 = pbVar1 + uVar22 * 2;
        }
        uVar10 = 1;
        uVar19 = (uint)pbVar9[5] * 0x10000 + (uint)pbVar9[6] * 0x100 + (uint)pbVar9[4] * 0x1000000 +
                 (uint)*pbVar13 * 0x100 + (uint)pbVar13[1] + (uint)pbVar9[7];
        uVar21 = (((uint)*pbVar16 - (uint)*pbVar14) * 0x100 - (uint)pbVar14[1]) + (uint)pbVar16[1];
      }
      else {
        uVar10 = 0;
        uVar19 = 0;
        uVar21 = 0;
      }
    }
    if ((char)uVar10 != '\0') {
      puVar15 = &DAT_149a1f1a0;
      if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
        puVar15 = (undefined1 *)param_1[1];
      }
      uVar6 = *(uint *)(puVar15 + 0x18);
      uVar10 = (ulonglong)uVar6;
      if ((uVar19 <= uVar6) && (uVar10 = (ulonglong)(uVar6 - uVar19), uVar21 <= uVar6 - uVar19)) {
        if (iVar18 == 0x11) {
          bVar23 = uVar21 < 9;
        }
        else {
          if (iVar18 != 0x12) goto LAB_144e38b48;
          bVar23 = uVar21 < 0xc;
        }
        if (!bVar23) {
          puVar15 = &DAT_149a1f1a0;
          if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
            puVar15 = (undefined1 *)param_1[1];
          }
          if (3 < *(uint *)(puVar15 + 0x18)) {
            puVar17 = *(undefined1 **)(puVar15 + 0x10);
          }
          pbVar9 = puVar17 + uVar19;
          *param_4 = (int)(char)pbVar9[2];
          param_4[1] = (int)(char)pbVar9[3];
          param_4[2] = (uint)pbVar9[1];
          param_4[3] = -(uint)*pbVar9;
          dVar25 = (double)*(uint *)(param_1 + 2) / (double)(byte)puVar8[0x2c];
          dVar7 = (double)*(uint *)(param_1 + 2) / (double)(byte)puVar8[0x2d];
          dVar24 = (double)round((double)*param_4 * dVar25);
          *param_4 = (int)dVar24;
          dVar24 = (double)round((double)param_4[1] * dVar7);
          param_4[1] = (int)dVar24;
          dVar25 = (double)round((double)param_4[2] * dVar25);
          param_4[2] = (int)dVar25;
          dVar25 = (double)round((double)param_4[3] * dVar7);
          param_4[3] = (int)dVar25;
          return CONCAT71((uint7)(uint3)((uint)(int)dVar25 >> 8),1);
        }
      }
    }
  }
LAB_144e38b48:
  return uVar10 & 0xffffffffffffff00;
}



// FUNCTION 144e38b50 FUN_144e38b50 body=965 status=ok
// SIG undefined FUN_144e38b50(void)

void FUN_144e38b50(byte *param_1,uint param_2,longlong param_3,int param_4,int *param_5,int *param_6
                  ,uint param_7,int *param_8)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    FUN_144e3f0f0();
    return;
  }
  iVar10 = (int)param_1 - *(int *)(param_3 + 0x10);
  iVar12 = 8;
  do {
    if (param_7 <= param_2) break;
    lVar1 = (ulonglong)(param_2 + 1) * 4;
    pbVar7 = param_1 + 4;
    pbVar9 = &DAT_149a1f1a0;
    if (pbVar7 <= pbVar7 + lVar1) {
      pbVar9 = pbVar7 + lVar1;
    }
    lVar2 = (ulonglong)param_2 * 4;
    pbVar8 = &DAT_149a1f1a0;
    if (pbVar7 <= pbVar7 + lVar2) {
      pbVar8 = pbVar7 + lVar2;
    }
    if ((uint)pbVar9[1] * 0x10000 + (uint)pbVar9[2] * 0x100 + (uint)*pbVar9 * 0x1000000 +
        (uint)pbVar9[3] <=
        (uint)pbVar8[1] * 0x10000 + (uint)pbVar8[2] * 0x100 + (uint)*pbVar8 * 0x1000000 +
        (uint)pbVar8[3]) break;
    pbVar9 = &DAT_149a1f1a0;
    if (pbVar7 <= pbVar7 + lVar1) {
      pbVar9 = pbVar7 + lVar1;
    }
    pbVar8 = &DAT_149a1f1a0;
    if (pbVar7 <= pbVar7 + lVar2) {
      pbVar8 = pbVar7 + lVar2;
    }
    if ((((uint)pbVar9[1] * 0x10000 + (uint)pbVar8[1] * -0x10000 + (uint)pbVar8[2] * -0x100 +
          (uint)*pbVar8 * -0x1000000 + (uint)pbVar9[2] * 0x100 + (uint)*pbVar9 * 0x1000000) -
        (uint)pbVar8[3]) + (uint)pbVar9[3] < 9) break;
    pbVar9 = &DAT_149a1f1a0;
    if (pbVar7 <= pbVar7 + lVar1) {
      pbVar9 = pbVar7 + lVar1;
    }
    if ((uint)(*(int *)(param_3 + 0x18) - iVar10) <
        (uint)pbVar9[1] * 0x10000 + (uint)pbVar9[2] * 0x100 + (uint)*pbVar9 * 0x1000000 +
        (uint)pbVar9[3]) break;
    pbVar9 = &DAT_149a1f1a0;
    if (pbVar7 <= pbVar7 + lVar2) {
      pbVar9 = pbVar7 + lVar2;
    }
    bVar3 = pbVar9[1];
    bVar4 = pbVar9[2];
    bVar5 = *pbVar9;
    bVar6 = pbVar9[3];
    pbVar9 = &DAT_149a1f1a0;
    if (pbVar7 <= pbVar7 + lVar1) {
      pbVar9 = pbVar7 + lVar1;
    }
    pbVar8 = &DAT_149a1f1a0;
    if (pbVar7 <= pbVar7 + lVar2) {
      pbVar8 = pbVar7 + lVar2;
    }
    uVar11 = (uint)pbVar9[3] +
             (((uint)pbVar9[1] * 0x10000 + (uint)pbVar8[1] * -0x10000 + (uint)pbVar8[2] * -0x100 +
               (uint)*pbVar8 * -0x1000000 + (uint)pbVar9[2] * 0x100) - (uint)pbVar8[3]) + -8 +
             (uint)*pbVar9 * 0x1000000;
    pbVar9 = &DAT_149a1f1a0;
    if (pbVar7 <= pbVar7 + lVar2) {
      pbVar9 = pbVar7 + lVar2;
    }
    if ((uint)*pbVar9 * 0x1000000 + (uint)pbVar9[2] * 0x100 + (uint)pbVar9[1] * 0x10000 +
        (uint)pbVar9[3] == 0) {
      pbVar7 = &DAT_149a1f1a0;
    }
    else {
      pbVar7 = param_1 + (ulonglong)pbVar9[3] +
                         ((ulonglong)CONCAT11(*pbVar9,pbVar9[1]) * 0x100 + (ulonglong)pbVar9[2]) *
                         0x100;
    }
    if ((uint)pbVar7[5] * 0x10000 + (uint)pbVar7[6] * 0x100 + (uint)pbVar7[4] * 0x1000000 +
        (uint)pbVar7[7] != 0x64757065) {
      if (param_4 ==
          (uint)pbVar7[5] * 0x10000 + (uint)pbVar7[6] * 0x100 + (uint)pbVar7[4] * 0x1000000 +
          (uint)pbVar7[7]) {
        if (param_8 != (int *)0x0) {
          *param_8 = (uint)*param_1 * 0x100 + (uint)param_1[1];
        }
        if (param_5 != (int *)0x0) {
          *param_5 = (int)(short)((ushort)pbVar7[1] + (ushort)*pbVar7 * 0x100);
        }
        if (param_6 != (int *)0x0) {
          *param_6 = (int)(short)((ushort)pbVar7[3] + (ushort)pbVar7[2] * 0x100);
        }
        FUN_144e3f000(param_3,(uint)bVar6 +
                              (uint)bVar5 * 0x1000000 + iVar10 +
                              (uint)bVar3 * 0x10000 + (uint)bVar4 * 0x100 + 8,uVar11);
        return;
      }
      break;
    }
    if (uVar11 < 2) break;
    param_2 = (uint)pbVar7[8] * 0x100 + (uint)pbVar7[9];
    bVar13 = iVar12 != 0;
    iVar12 = iVar12 + -1;
  } while (bVar13);
  FUN_144e3f0f0();
  return;
}



// FUNCTION 144e38f20 FUN_144e38f20 body=160 status=ok
// SIG undefined FUN_144e38f20(void)

undefined1 * FUN_144e38f20(longlong param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 < (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
                (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7)) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 2) * 4);
  }
  else {
    pbVar1 = &DAT_149a1f1a0;
  }
  if ((uint)*pbVar1 * 0x1000000 + (uint)pbVar1[2] * 0x100 + (uint)pbVar1[1] * 0x10000 +
      (uint)pbVar1[3] == 0) {
    return &DAT_149a1f1a0;
  }
  return (undefined1 *)
         (((ulonglong)CONCAT11(*pbVar1,pbVar1[1]) * 0x100 + (ulonglong)pbVar1[2]) * 0x100 + param_1
         + (ulonglong)pbVar1[3]);
}



// FUNCTION 144e38fc0 FUN_144e38fc0 body=339 status=ok
// SIG undefined FUN_144e38fc0(void)

undefined1 * FUN_144e38fc0(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  puVar3 = (undefined1 *)*param_1;
  puVar7 = &DAT_149a1f1a0;
  puVar5 = &DAT_149a1f1a0;
  if (puVar3 != (undefined1 *)0x0) {
    puVar5 = puVar3;
  }
  if (*(uint *)(puVar5 + 0x18) < 8) {
    puVar5 = &DAT_149a1f1a0;
  }
  else {
    puVar5 = *(undefined1 **)(puVar5 + 0x10);
  }
  uVar10 = (uint)(byte)puVar5[5] * 0x10000 + (uint)(byte)puVar5[6] * 0x100 +
           (uint)(byte)puVar5[4] * 0x1000000 + (uint)(byte)puVar5[7];
  if (uVar10 != 0) {
    uVar11 = *(uint *)(param_2 + 0x2c);
    if (*(uint *)(param_2 + 0x2c) < *(uint *)(param_2 + 0x28)) {
      uVar11 = *(uint *)(param_2 + 0x28);
    }
    if (uVar11 == 0) {
      uVar11 = 0x40000000;
    }
    uVar9 = 0;
    puVar5 = &DAT_149a1f1a0;
    if (puVar3 != (undefined1 *)0x0) {
      puVar5 = puVar3;
    }
    if (*(uint *)(puVar5 + 0x18) < 8) {
      puVar5 = &DAT_149a1f1a0;
    }
    else {
      puVar5 = *(undefined1 **)(puVar5 + 0x10);
    }
    pbVar1 = (byte *)FUN_144e38f20(puVar5,0);
    uVar6 = 1;
    uVar8 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
    if (1 < uVar10) {
      do {
        puVar5 = &DAT_149a1f1a0;
        puVar2 = &DAT_149a1f1a0;
        if (puVar3 != (undefined1 *)0x0) {
          puVar2 = puVar3;
        }
        if (7 < *(uint *)(puVar2 + 0x18)) {
          puVar5 = *(undefined1 **)(puVar2 + 0x10);
        }
        pbVar1 = (byte *)FUN_144e38f20(puVar5,uVar6);
        uVar4 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
        if (((uVar11 <= uVar4) && (uVar4 < uVar8)) || ((uVar8 < uVar11 && (uVar8 < uVar4)))) {
          uVar8 = uVar4;
          uVar9 = uVar6;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar10);
    }
    puVar5 = &DAT_149a1f1a0;
    if (puVar3 != (undefined1 *)0x0) {
      puVar5 = puVar3;
    }
    if (7 < *(uint *)(puVar5 + 0x18)) {
      puVar7 = *(undefined1 **)(puVar5 + 0x10);
    }
    puVar3 = (undefined1 *)FUN_144e38f20(puVar7,uVar9);
    return puVar3;
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 144e39120 FUN_144e39120 body=496 status=ok
// SIG undefined FUN_144e39120(void)

bool FUN_144e39120(undefined8 *param_1,longlong param_2,undefined4 param_3,int *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  int local_res8 [2];
  int local_38;
  uint local_34 [7];
  
  puVar1 = (undefined1 *)*param_1;
  puVar7 = &DAT_149a1f1a0;
  puVar4 = &DAT_149a1f1a0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  pbVar9 = &DAT_149a1f1a0;
  if (7 < *(uint *)(puVar4 + 0x18)) {
    pbVar9 = *(byte **)(puVar4 + 0x10);
  }
  if ((ushort)((ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1]) == 0) {
    bVar10 = false;
  }
  else {
    local_res8[0] = 0;
    local_38 = 0;
    local_34[0] = 0;
    uVar5 = FUN_144e38fc0(param_1,param_2);
    lVar6 = FUN_144e38b50(uVar5,param_3,puVar1,0x706e6720,local_res8,&local_38,
                          *(undefined4 *)(param_1 + 1),local_34);
    uVar2 = local_34[0];
    if (0x1c < *(uint *)(lVar6 + 0x18)) {
      puVar7 = *(undefined1 **)(lVar6 + 0x10);
    }
    *param_4 = local_res8[0];
    param_4[1] = local_38;
    param_4[2] = (((uint)(byte)puVar7[0x10] * 0x100 + (uint)(byte)puVar7[0x11]) * 0x100 +
                 (uint)(byte)puVar7[0x12]) * 0x100 + (uint)(byte)puVar7[0x13];
    uVar8 = (ulonglong)local_34[0];
    param_4[3] = (((uint)(byte)puVar7[0x14] * 0x100 + (uint)(byte)puVar7[0x15]) * 0x100 +
                 (uint)(byte)puVar7[0x16]) * 0x100 + (uint)(byte)puVar7[0x17];
    if (local_34[0] != 0) {
      uVar3 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0x2c);
      if (uVar3 == 0) {
        uVar3 = FUN_144e2c980();
      }
      dVar12 = (double)uVar3 / (double)uVar8;
      dVar11 = (double)round((double)*param_4 * dVar12);
      *param_4 = (int)dVar11;
      dVar11 = (double)round((double)param_4[1] * dVar12);
      param_4[1] = (int)dVar11;
      dVar11 = (double)round((double)param_4[2] * dVar12);
      param_4[2] = (int)dVar11;
      dVar12 = (double)round((double)param_4[3] * dVar12);
      param_4[3] = (int)dVar12;
    }
    FUN_144e3f120(lVar6);
    bVar10 = uVar2 != 0;
  }
  return bVar10;
}



// FUNCTION 144e39310 FUN_144e39310 body=148 status=ok
// SIG undefined FUN_144e39310(void)

bool FUN_144e39310(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 144e393b0 FUN_144e393b0 body=346 status=ok
// SIG undefined FUN_144e393b0(void)

undefined1 FUN_144e393b0(byte *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  cVar1 = FUN_144e39510();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = 0;
  uVar4 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (uVar4 != 0) {
    param_1 = param_1 + 6;
    do {
      cVar1 = FUN_144e39310(param_1 + -2,param_2,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      if ((uint)param_1[-2] * 0x1000000 + (uint)param_1[-1] * 0x10000 + (uint)*param_1 * 0x100 +
          (uint)param_1[1] != 0) {
        lVar5 = ((ulonglong)CONCAT11(param_1[-2],param_1[-1]) * 0x100 + (ulonglong)*param_1) * 0x100
                + param_3 + (ulonglong)param_1[1];
        cVar1 = FUN_144e2c5c0(param_2,lVar5,8);
        if (((cVar1 == '\0') || (uVar3 = *(int *)(param_2 + 0x30) + 1, 0x3ffffffe < uVar3)) ||
           (cVar1 = FUN_144e2c5c0(param_2,lVar5 + 4,uVar3 * 4), cVar1 == '\0')) {
          cVar1 = FUN_144e2d280(param_2,param_1 + -2,4);
          if (cVar1 == '\0') {
            return 0;
          }
          param_1[-2] = 0;
          param_1[-1] = 0;
          param_1[0] = 0;
          param_1[1] = 0;
        }
      }
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 4;
    } while (uVar2 < uVar4);
  }
  return 1;
}



// FUNCTION 144e39510 FUN_144e39510 body=131 status=ok
// SIG undefined FUN_144e39510(void)

undefined8 FUN_144e39510(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x3fffffff) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 4);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e395a0 FUN_144e395a0 body=76 status=ok
// SIG undefined FUN_144e395a0(void)

undefined1 FUN_144e395a0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144e2d330(param_2 + 0x10);
  if (*(code **)(lVar2 + 0x10) == (code *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18),param_3,param_4);
  return uVar1;
}



// FUNCTION 144e395f0 FUN_144e395f0 body=72 status=ok
// SIG undefined FUN_144e395f0(void)

void FUN_144e395f0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e2d330(param_2 + 0x10);
  FUN_144e31610(uVar1,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 144e39640 FUN_144e39640 body=57 status=ok
// SIG undefined FUN_144e39640(void)

undefined1
FUN_144e39640(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144e2d330(param_2 + 0x10);
  uVar1 = FUN_144e316a0(uVar2,param_3,param_4,param_5);
  return uVar1;
}



// FUNCTION 144e39680 FUN_144e39680 body=212 status=ok
// SIG undefined FUN_144e39680(void)

void FUN_144e39680(longlong param_1,longlong param_2,uint param_3,undefined4 *param_4,uint param_5,
                  undefined4 *param_6,uint param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar4 = FUN_144e30660(param_2 + 0x18);
  if (param_3 != 0) {
    uVar6 = (ulonglong)param_3;
    do {
      sVar1 = FUN_144e36ed0(uVar4,*param_4,param_1);
      iVar3 = *(int *)(param_1 + 0x20);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
      if (iVar2 == 0) {
        iVar2 = FUN_144e2c980();
      }
      lVar5 = (longlong)iVar3 * (longlong)sVar1;
      iVar3 = iVar2 / 2;
      if (lVar5 < 0) {
        iVar3 = -iVar3;
      }
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      *param_6 = (int)((iVar3 + lVar5) / (longlong)iVar2);
      param_6 = (undefined4 *)((longlong)param_6 + (ulonglong)param_7);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 144e39760 FUN_144e39760 body=214 status=ok
// SIG undefined FUN_144e39760(void)

void FUN_144e39760(longlong param_1,longlong param_2,uint param_3,undefined4 *param_4,uint param_5,
                  undefined4 *param_6,uint param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar4 = FUN_144e30760(param_2 + 0x20);
  if (param_3 != 0) {
    uVar6 = (ulonglong)param_3;
    do {
      sVar1 = FUN_144e37290(uVar4,*param_4,param_1);
      iVar3 = *(int *)(param_1 + 0x24);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
      if (iVar2 == 0) {
        iVar2 = FUN_144e2c980();
      }
      lVar5 = (longlong)iVar3 * (longlong)-sVar1;
      iVar3 = iVar2 / 2;
      if (lVar5 < 0) {
        iVar3 = -iVar3;
      }
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      *param_6 = (int)((iVar3 + lVar5) / (longlong)iVar2);
      param_6 = (undefined4 *)((longlong)param_6 + (ulonglong)param_7);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 144e39840 FUN_144e39840 body=399 status=ok
// SIG undefined FUN_144e39840(void)

void FUN_144e39840(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,int *param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x148))
                    (param_1,*(undefined8 *)(param_1 + 0x48),param_3,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38));
  *param_4 = iVar3 / 2;
  lVar5 = FUN_144e30e70(param_2 + 0x50);
  pbVar7 = &DAT_149a1f1a0;
  if (7 < *(uint *)(lVar5 + 0x18)) {
    pbVar7 = *(byte **)(lVar5 + 0x10);
  }
  if ((((uint)*pbVar7 * 0x100 + (uint)pbVar7[1]) * 0x100 + (uint)pbVar7[2]) * 0x100 +
      (uint)pbVar7[3] == 0) {
    local_78 = 0;
    uStack_70 = 0;
    uVar6 = FUN_144e30960(param_2 + 0x38);
    cVar1 = FUN_144e319a0(uVar6,param_3 & 0xffffffff,&local_78);
    if (cVar1 == '\0') {
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x120))
                        (param_1,*(undefined8 *)(param_1 + 0x48),&local_68,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10));
      if (iVar3 == 0) {
        iVar3 = (int)((double)*(int *)(param_1 + 0x24) * 0.8);
      }
      else {
        iVar3 = (int)local_68;
      }
    }
    else {
      uVar6 = FUN_144e30760(param_2 + 0x20);
      sVar2 = FUN_144e371f0(uVar6,param_3 & 0xffffffff);
      iVar3 = FUN_144e31290(param_1,sVar2 + local_78._4_2_);
    }
  }
  else {
    sVar2 = FUN_144e37980(pbVar7,param_3 & 0xffffffff);
    iVar3 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
    if (iVar4 == 0) {
      iVar4 = FUN_144e2c980();
    }
    lVar5 = (longlong)iVar3 * (longlong)sVar2;
    iVar3 = iVar4 / 2;
    if (lVar5 < 0) {
      iVar3 = -iVar3;
    }
    iVar3 = (int)((iVar3 + lVar5) / (longlong)iVar4);
  }
  *param_5 = iVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e399e0 FUN_144e399e0 body=510 status=ok
// SIG undefined FUN_144e399e0(void)

char FUN_144e399e0(longlong param_1,longlong param_2,undefined4 param_3,short *param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar6 = FUN_144e31150(param_2 + 0x110);
  cVar2 = FUN_144e39120(uVar6,param_1,param_3,param_4);
  if (cVar2 == '\0') {
    uVar6 = FUN_144e30960(param_2 + 0x38);
    cVar2 = FUN_144e319a0(uVar6,param_3,param_4);
    if (cVar2 == '\0') {
      uVar6 = FUN_144e30a60(param_2 + 0x40);
      cVar2 = FUN_1451d6570(uVar6,param_3,param_4);
      if (cVar2 == '\0') {
        uVar6 = FUN_144e30c70(param_2 + 0x48);
        cVar2 = FUN_1451da980(uVar6,param_1,param_3,param_4);
        if (cVar2 == '\0') {
          uVar6 = FUN_144e31050(param_2 + 0x108);
          cVar2 = FUN_144e38720(uVar6,param_1,param_3,param_4);
        }
      }
    }
  }
  sVar1 = *param_4;
  iVar4 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar3 == 0) {
    iVar3 = FUN_144e2c980();
  }
  lVar7 = (longlong)iVar4 * (longlong)sVar1;
  iVar4 = iVar3 / 2;
  if (lVar7 < 0) {
    iVar4 = -iVar4;
  }
  sVar1 = param_4[2];
  lVar7 = iVar4 + lVar7;
  *(int *)param_4 = (int)(lVar7 / (longlong)iVar3);
  iVar4 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar5 == 0) {
    iVar5 = FUN_144e2c980(*(longlong *)(param_1 + 0x18),lVar7 % (longlong)iVar3);
  }
  lVar7 = (longlong)iVar4 * (longlong)sVar1;
  iVar4 = iVar5 / 2;
  if (lVar7 < 0) {
    iVar4 = -iVar4;
  }
  sVar1 = param_4[4];
  lVar7 = iVar4 + lVar7;
  *(int *)(param_4 + 2) = (int)(lVar7 / (longlong)iVar5);
  iVar4 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar3 == 0) {
    iVar3 = FUN_144e2c980(*(longlong *)(param_1 + 0x18),lVar7 % (longlong)iVar5);
  }
  lVar7 = (longlong)iVar4 * (longlong)sVar1;
  iVar4 = iVar3 / 2;
  if (lVar7 < 0) {
    iVar4 = -iVar4;
  }
  sVar1 = param_4[6];
  lVar7 = iVar4 + lVar7;
  *(int *)(param_4 + 4) = (int)(lVar7 / (longlong)iVar3);
  iVar4 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar5 == 0) {
    iVar5 = FUN_144e2c980(*(longlong *)(param_1 + 0x18),lVar7 % (longlong)iVar3);
  }
  lVar7 = (longlong)iVar4 * (longlong)sVar1;
  iVar4 = iVar5 / 2;
  if (lVar7 < 0) {
    iVar4 = -iVar4;
  }
  *(int *)(param_4 + 6) = (int)((iVar4 + lVar7) / (longlong)iVar5);
  return cVar2;
}



// FUNCTION 144e39be0 FUN_144e39be0 body=116 status=ok
// SIG undefined FUN_144e39be0(void)

undefined8
FUN_144e39be0(undefined8 param_1,longlong param_2,undefined4 param_3,char *param_4,int param_5)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 local_28 [8];
  char *local_20;
  uint local_18;
  
  uVar1 = FUN_144e30860(param_2 + 0x28);
  FUN_144e377c0(uVar1,local_28,param_3);
  if (local_18 == 0) {
    return 0;
  }
  if (param_5 != 0) {
    uVar2 = local_18;
    if (param_5 - 1U < local_18) {
      uVar2 = param_5 - 1U;
    }
    strncpy(param_4,local_20,(ulonglong)uVar2);
    param_4[uVar2] = '\0';
  }
  return 1;
}



// FUNCTION 144e39c60 FUN_144e39c60 body=58 status=ok
// SIG undefined FUN_144e39c60(void)

undefined1
FUN_144e39c60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144e30860(param_2 + 0x28);
  uVar1 = FUN_144e37580(uVar2,param_3,param_4,param_5);
  return uVar1;
}



// FUNCTION 144e39ca0 FUN_144e39ca0 body=290 status=ok
// SIG undefined FUN_144e39ca0(void)

undefined1 FUN_144e39ca0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined1 *)FUN_144e30660(param_2 + 0x18);
  iVar3 = *(int *)(param_1 + 0x24);
  sVar1 = *(short *)(puVar5 + 4);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar2 == 0) {
    iVar2 = FUN_144e2c980();
  }
  lVar6 = (longlong)iVar3 * (longlong)sVar1;
  iVar3 = iVar2 / 2;
  if (lVar6 < 0) {
    iVar3 = -iVar3;
  }
  lVar6 = iVar3 + lVar6;
  *param_3 = (int)(lVar6 / (longlong)iVar2);
  sVar1 = *(short *)(puVar5 + 8);
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar4 == 0) {
    iVar4 = FUN_144e2c980(*(longlong *)(param_1 + 0x18),lVar6 % (longlong)iVar2);
  }
  lVar6 = (longlong)iVar3 * (longlong)sVar1;
  iVar3 = iVar4 / 2;
  if (lVar6 < 0) {
    iVar3 = -iVar3;
  }
  lVar6 = iVar3 + lVar6;
  param_3[1] = (int)(lVar6 / (longlong)iVar4);
  sVar1 = *(short *)(puVar5 + 0xc);
  iVar3 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar2 == 0) {
    iVar2 = FUN_144e2c980(*(longlong *)(param_1 + 0x18),lVar6 % (longlong)iVar4);
  }
  lVar6 = (longlong)iVar3 * (longlong)sVar1;
  iVar3 = iVar2 / 2;
  if (lVar6 < 0) {
    iVar3 = -iVar3;
  }
  param_3[2] = (int)((iVar3 + lVar6) / (longlong)iVar2);
  return *puVar5;
}



// FUNCTION 144e39dd0 FUN_144e39dd0 body=290 status=ok
// SIG undefined FUN_144e39dd0(void)

undefined1 FUN_144e39dd0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined1 *)FUN_144e30760(param_2 + 0x20);
  iVar3 = *(int *)(param_1 + 0x20);
  sVar1 = *(short *)(puVar5 + 4);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar2 == 0) {
    iVar2 = FUN_144e2c980();
  }
  lVar6 = (longlong)iVar3 * (longlong)sVar1;
  iVar3 = iVar2 / 2;
  if (lVar6 < 0) {
    iVar3 = -iVar3;
  }
  lVar6 = iVar3 + lVar6;
  *param_3 = (int)(lVar6 / (longlong)iVar2);
  sVar1 = *(short *)(puVar5 + 8);
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar4 == 0) {
    iVar4 = FUN_144e2c980(*(longlong *)(param_1 + 0x18),lVar6 % (longlong)iVar2);
  }
  lVar6 = (longlong)iVar3 * (longlong)sVar1;
  iVar3 = iVar4 / 2;
  if (lVar6 < 0) {
    iVar3 = -iVar3;
  }
  lVar6 = iVar3 + lVar6;
  param_3[1] = (int)(lVar6 / (longlong)iVar4);
  sVar1 = *(short *)(puVar5 + 0xc);
  iVar3 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar2 == 0) {
    iVar2 = FUN_144e2c980(*(longlong *)(param_1 + 0x18),lVar6 % (longlong)iVar4);
  }
  lVar6 = (longlong)iVar3 * (longlong)sVar1;
  iVar3 = iVar2 / 2;
  if (lVar6 < 0) {
    iVar3 = -iVar3;
  }
  param_3[2] = (int)((iVar3 + lVar6) / (longlong)iVar2);
  return *puVar5;
}



// FUNCTION 144e39f00 FUN_144e39f00 body=262 status=ok
// SIG undefined FUN_144e39f00(void)

undefined8 FUN_144e39f00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b490e0();
  FUN_144b48aa0(uVar1,FUN_144e39ca0,0,0);
  FUN_144b63700(uVar1,FUN_144e39dd0,0,0);
  FUN_144b48b30(uVar1,FUN_144e395a0,0,0);
  FUN_144b48bc0(uVar1,FUN_144e395f0,0,0);
  FUN_144b63790(uVar1,FUN_144e39640,0,0);
  FUN_144b48ce0(uVar1,FUN_144e39680,0,0);
  FUN_144b48e00(uVar1,FUN_144e39760,0,0);
  FUN_144b48e90(uVar1,FUN_144e39840,0,0);
  FUN_144b48fb0(uVar1,FUN_144e399e0,0,0);
  FUN_144b63820(uVar1,FUN_144e39be0,0,0);
  FUN_144b638c0(uVar1,FUN_144e39c60,0,0);
  FUN_144b48a90(uVar1);
  return uVar1;
}



// FUNCTION 144e3a010 FUN_144e3a010 body=129 status=ok
// SIG undefined FUN_144e3a010(void)

longlong FUN_144e3a010(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  LOCK();
  UNLOCK();
  lVar1 = DAT_14c796610;
  if (DAT_14c796610 == 0) {
    while( true ) {
      lVar1 = FUN_144e39f00();
      if (lVar1 == 0) {
        lVar1 = FUN_144b636f0();
      }
      LOCK();
      bVar3 = DAT_14c796610 == 0;
      lVar2 = lVar1;
      if (!bVar3) {
        lVar2 = DAT_14c796610;
      }
      DAT_14c796610 = lVar2;
      UNLOCK();
      if (bVar3) break;
      if ((lVar1 != 0) && (lVar2 = FUN_144b636f0(), lVar1 != lVar2)) {
        FUN_144b49210(lVar1);
      }
      LOCK();
      UNLOCK();
      if (DAT_14c796610 != 0) {
        return DAT_14c796610;
      }
    }
  }
  return lVar1;
}



// FUNCTION 144e3a0a0 FUN_144e3a0a0 body=195 status=ok
// SIG undefined FUN_144e3a0a0(void)

ulonglong FUN_144e3a0a0(byte *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = FUN_144e35440();
  if ((char)uVar2 == '\0') {
LAB_144e3a0c1:
    return uVar2 & 0xffffffffffffff00;
  }
  uVar3 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      if ((*(uint *)(param_2 + 0x30) <=
           (uint)param_1[uVar2 * 6 + 5] * 0x10000 + (uint)param_1[uVar2 * 6 + 6] * 0x100 +
           (uint)param_1[uVar2 * 6 + 4] * 0x1000000 + (uint)param_1[uVar2 * 6 + 7]) ||
         (param_4 <= (uint)param_1[uVar2 * 6 + 8] * 0x100 + (uint)param_1[uVar2 * 6 + 9]))
      goto LAB_144e3a0c1;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < uVar3);
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 144e3a170 FUN_144e3a170 body=230 status=ok
// SIG undefined FUN_144e3a170(void)

longlong FUN_144e3a170(byte *param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  if ((uint)bVar1 * 0x100 + (uint)bVar2 <= param_3) {
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    return param_2;
  }
  uVar8 = 0;
  bVar3 = param_1[2];
  uVar7 = (uint)bVar3;
  pbVar6 = param_1 + (ulonglong)(bVar3 * param_3) + 3;
  if (bVar3 != 0) {
    do {
      bVar4 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar8 * 0x100 + (uint)bVar4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar5 = FUN_144e33810(param_1,param_3);
  *(undefined4 *)(param_2 + 0x10) = uVar5;
  *(byte **)(param_2 + 8) =
       param_1 + (ulonglong)uVar8 +
                 (ulonglong)bVar3 * ((ulonglong)bVar2 + 1 + (ulonglong)bVar1 * 0x100) + 2;
  return param_2;
}



// FUNCTION 144e3a260 FUN_144e3a260 body=189 status=ok
// SIG undefined FUN_144e3a260(void)

undefined8 FUN_144e3a260(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
  param_2[0x12] = 0xffffffff;
  param_2[0x14] = 0;
  *(undefined8 *)(param_2 + 0x15) = 0x2210;
  *(undefined8 *)(param_2 + 0x17) = 0;
  *(undefined8 *)(param_2 + 0x19) = 0;
  param_2[0x1b] = 0;
  cVar1 = FUN_144e32610(param_1,1);
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    uVar2 = FUN_144e32b50(param_1);
    FUN_144e33d00(uVar2,param_1,param_2);
    cVar1 = FUN_144e32b30(param_1);
    if (cVar1 != '\0') break;
    cVar1 = FUN_144e32610(param_1,1);
  }
  return 0;
}



// FUNCTION 144e3a320 FUN_144e3a320 body=230 status=ok
// SIG undefined FUN_144e3a320(void)

longlong FUN_144e3a320(byte *param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  if ((uint)bVar1 * 0x100 + (uint)bVar2 <= param_3) {
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    return param_2;
  }
  uVar8 = 0;
  bVar3 = param_1[2];
  uVar7 = (uint)bVar3;
  pbVar6 = param_1 + (ulonglong)(bVar3 * param_3) + 3;
  if (bVar3 != 0) {
    do {
      bVar4 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar8 * 0x100 + (uint)bVar4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar5 = FUN_144e33810(param_1,param_3);
  *(undefined4 *)(param_2 + 0x10) = uVar5;
  *(byte **)(param_2 + 8) =
       param_1 + (ulonglong)uVar8 +
                 (ulonglong)bVar3 * ((ulonglong)bVar2 + 1 + (ulonglong)bVar1 * 0x100) + 2;
  return param_2;
}



// FUNCTION 144e3a410 FUN_144e3a410 body=280 status=ok
// SIG undefined FUN_144e3a410(void)

undefined8 FUN_144e3a410(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  param_2[8] = 0;
  param_2[9] = 0xffffffff;
  do {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      return 1;
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 < uVar3 + 1) {
      return 1;
    }
    if (uVar3 < uVar1) {
      pbVar5 = (byte *)((ulonglong)uVar3 + *(longlong *)(param_1 + 8));
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      pbVar5 = &DAT_149a1f1a0;
    }
    uVar3 = (uint)*pbVar5;
    if (*pbVar5 == 0xc) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        uVar3 = *(int *)(param_1 + 0x18) + 1;
        if (uVar3 <= uVar1) {
          if (uVar3 < uVar1) {
            pbVar5 = (byte *)((ulonglong)uVar3 + *(longlong *)(param_1 + 8));
          }
          else {
            *(undefined1 *)(param_1 + 0x1c) = 1;
            pbVar5 = &DAT_149a1f1a0;
          }
          uVar3 = *pbVar5 + 0x100;
          if (((*(char *)(param_1 + 0x1c) == '\0') && (*(uint *)(param_1 + 0x18) <= uVar1)) &&
             (uVar4 = *(uint *)(param_1 + 0x18) + 1, uVar4 <= uVar1)) {
            *(uint *)(param_1 + 0x18) = uVar4;
          }
          else {
            *(uint *)(param_1 + 0x18) = uVar1;
            *(undefined1 *)(param_1 + 0x1c) = 1;
          }
          goto LAB_144e3a4ba;
        }
      }
      uVar3 = 0xffff;
    }
    else {
LAB_144e3a4ba:
      if (((*(char *)(param_1 + 0x1c) == '\0') && (*(uint *)(param_1 + 0x18) <= uVar1)) &&
         (uVar4 = *(uint *)(param_1 + 0x18) + 1, uVar4 <= uVar1)) {
        *(uint *)(param_1 + 0x18) = uVar4;
      }
      else {
        *(uint *)(param_1 + 0x18) = uVar1;
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
    }
    FUN_144e34180(uVar3,param_1,param_2);
    cVar2 = FUN_144e32b30(param_1);
    if (cVar2 != '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 144e3a530 FUN_144e3a530 body=193 status=ok
// SIG undefined FUN_144e3a530(void)

ulonglong FUN_144e3a530(byte *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 3);
    if ((char)uVar2 != '\0') {
      uVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      uVar2 = 0;
      if (uVar3 != 0) {
        do {
          if ((*(uint *)(param_2 + 0x30) <=
               (uint)param_1[uVar2 * 3 + 2] * 0x100 + (uint)param_1[uVar2 * 3 + 3]) ||
             (param_4 <= param_1[uVar2 * 3 + 4])) goto LAB_144e3a5df;
          uVar1 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar1;
        } while (uVar1 < uVar3);
      }
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
LAB_144e3a5df:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 144e3a600 FUN_144e3a600 body=215 status=ok
// SIG undefined FUN_144e3a600(void)

undefined8 FUN_144e3a600(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar3 = FUN_144e3f100(param_2);
  *(longlong *)(param_1 + 10) = lVar3;
  *(undefined1 *)(param_1 + 7) = 0;
  lVar2 = *(longlong *)(lVar3 + 0x10);
  *(longlong *)(param_1 + 2) = lVar2;
  lVar3 = (ulonglong)*(uint *)(lVar3 + 0x18) + lVar2;
  *(longlong *)(param_1 + 4) = lVar3;
  iVar5 = (int)lVar3 - (int)lVar2;
  uVar1 = iVar5 * 8;
  uVar4 = 0x4000;
  if (0x4000 < uVar1) {
    uVar4 = uVar1;
  }
  param_1[6] = uVar4;
  lVar6 = 0;
  uVar7 = 0;
  param_1[8] = 0;
  *param_1 = 0;
  FUN_144e30540("SANITIZE",lVar2,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar2,lVar3,iVar5);
  if (*(longlong *)(param_1 + 2) == lVar6) {
    FUN_144e2c540(param_1);
    return param_2;
  }
  if (param_1[8] != (int)lVar6) {
    param_1[8] = uVar7;
  }
  FUN_144e2c540(param_1);
  FUN_144e3f1a0(param_2);
  return param_2;
}



// FUNCTION 144e3a6e0 FUN_144e3a6e0 body=215 status=ok
// SIG undefined FUN_144e3a6e0(void)

undefined8 FUN_144e3a6e0(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar3 = FUN_144e3f100(param_2);
  *(longlong *)(param_1 + 10) = lVar3;
  *(undefined1 *)(param_1 + 7) = 0;
  lVar2 = *(longlong *)(lVar3 + 0x10);
  *(longlong *)(param_1 + 2) = lVar2;
  lVar3 = (ulonglong)*(uint *)(lVar3 + 0x18) + lVar2;
  *(longlong *)(param_1 + 4) = lVar3;
  iVar5 = (int)lVar3 - (int)lVar2;
  uVar1 = iVar5 * 8;
  uVar4 = 0x4000;
  if (0x4000 < uVar1) {
    uVar4 = uVar1;
  }
  param_1[6] = uVar4;
  lVar6 = 0;
  uVar7 = 0;
  param_1[8] = 0;
  *param_1 = 0;
  FUN_144e30540("SANITIZE",lVar2,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar2,lVar3,iVar5);
  if (*(longlong *)(param_1 + 2) == lVar6) {
    FUN_144e2c540(param_1);
    return param_2;
  }
  if (param_1[8] != (int)lVar6) {
    param_1[8] = uVar7;
  }
  FUN_144e2c540(param_1);
  FUN_144e3f1a0(param_2);
  return param_2;
}



// FUNCTION 144e3a7c0 FUN_144e3a7c0 body=362 status=ok
// SIG undefined FUN_144e3a7c0(void)

longlong FUN_144e3a7c0(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar4;
    lVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar4;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar7;
    iVar6 = (int)lVar7 - (int)lVar4;
    *param_1 = 0;
    uVar1 = iVar6 * 8;
    uVar5 = 0x4000;
    if (0x4000 < uVar1) {
      uVar5 = uVar1;
    }
    param_1[6] = uVar5;
    FUN_144e30540("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_144e36520(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_144e3a8e0;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_144e3a8e0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_144e36520(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_144e3a8e0:
  FUN_144e2c540(param_1);
  if (cVar2 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e3a930 FUN_144e3a930 body=362 status=ok
// SIG undefined FUN_144e3a930(void)

longlong FUN_144e3a930(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar4;
    lVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar4;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar7;
    iVar6 = (int)lVar7 - (int)lVar4;
    *param_1 = 0;
    uVar1 = iVar6 * 8;
    uVar5 = 0x4000;
    if (0x4000 < uVar1) {
      uVar5 = uVar1;
    }
    param_1[6] = uVar5;
    FUN_144e30540("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_144e378c0(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_144e3aa50;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_144e3aa50;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_144e378c0(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_144e3aa50:
  FUN_144e2c540(param_1);
  if (cVar2 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e3aaa0 FUN_144e3aaa0 body=791 status=ok
// SIG undefined FUN_144e3aaa0(void)

longlong FUN_144e3aaa0(undefined4 *param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  longlong lVar11;
  byte *pbVar12;
  
  uVar6 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar6;
  *(undefined1 *)(param_1 + 7) = 0;
  do {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar7;
    lVar11 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar7;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar11;
    iVar9 = (int)lVar11 - (int)lVar7;
    *param_1 = 0;
    sVar10 = 1;
    uVar2 = iVar9 * 8;
    uVar8 = 0x4000;
    if (0x4000 < uVar2) {
      uVar8 = uVar2;
    }
    param_1[6] = uVar8;
    FUN_144e30540("SANITIZE",lVar7,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar7,lVar11,iVar9);
    pbVar3 = *(byte **)(param_1 + 2);
    if (pbVar3 == (byte *)0x0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    if (((*(byte **)(param_1 + 4) < pbVar3) ||
        ((uint)((int)*(byte **)(param_1 + 4) - (int)pbVar3) < 8)) ||
       (iVar9 = param_1[6], param_1[6] = iVar9 + -1, iVar9 < 1)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = (char)sVar10;
    }
    FUN_144e30540("SANITIZE",pbVar3,0);
    if ((cVar5 != '\0') && ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == sVar10)) {
      pbVar1 = pbVar3 + 6;
      if (((pbVar1 < *(byte **)(param_1 + 2)) ||
          ((*(byte **)(param_1 + 4) < pbVar1 || ((uint)(param_1[4] - (int)pbVar1) < 2)))) ||
         (iVar9 = param_1[6], param_1[6] = iVar9 + -1, iVar9 < 1)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = (char)sVar10;
      }
      pbVar12 = pbVar3 + 8;
      FUN_144e30540("SANITIZE",pbVar1);
      if ((cVar5 != '\0') &&
         (cVar5 = FUN_144e2c5c0(param_1,pbVar12,((uint)*pbVar1 * 0x100 + (uint)pbVar3[7]) * 4),
         cVar5 != '\0')) {
        bVar4 = true;
        if (param_1[8] != 0) {
          param_1[8] = 0;
          cVar5 = FUN_144e2c5c0(param_1,pbVar3,8);
          if (((cVar5 == '\0') || ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 1)) ||
             (cVar5 = FUN_144e37a50(pbVar1,param_1), cVar5 == '\0')) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (param_1[8] != 0) {
            bVar4 = false;
          }
        }
LAB_144e3ad67:
        FUN_144e2c540(param_1);
        if (bVar4) {
          FUN_144e3f1a0();
        }
        else {
          FUN_144e3f120(param_2);
          param_2 = FUN_144e3f0f0();
        }
        return param_2;
      }
    }
    bVar4 = false;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_144e3ad67;
    lVar7 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar7;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar7;
    if (lVar7 == 0) goto LAB_144e3ad67;
    *(undefined1 *)(param_1 + 7) = 1;
  } while( true );
}



// FUNCTION 144e3adc0 FUN_144e3adc0 body=647 status=ok
// SIG undefined FUN_144e3adc0(void)

longlong FUN_144e3adc0(int *param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  longlong lVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined4 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  
  uVar5 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar5;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    pcVar12 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s";
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar7;
    lVar11 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar7;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar11;
    iVar9 = (int)lVar11 - (int)lVar7;
    *param_1 = 0;
    uVar10 = 1;
    uVar1 = iVar9 * 8;
    uVar13 = 0;
    uVar8 = 0x4000;
    if (0x4000 < uVar1) {
      uVar8 = uVar1;
    }
    param_1[6] = uVar8;
    FUN_144e30540("SANITIZE",lVar7,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar7,lVar11,iVar9);
    pbVar2 = *(byte **)(param_1 + 2);
    if (pbVar2 == (byte *)0x0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    pbVar19 = *(byte **)(param_1 + 4);
    if (((pbVar19 < pbVar2) || ((uint)((int)pbVar19 - (int)pbVar2) < 8)) ||
       (iVar9 = param_1[6], param_1[6] = iVar9 + -1, iVar9 < 1)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (char)uVar10;
    }
    pbVar16 = pbVar2 + 8;
    pcVar6 = "OUT-OF-RANGE";
    if (cVar4 != '\0') {
      pcVar6 = "OK";
    }
    uVar17 = 8;
    uVar14 = 0;
    uVar5 = CONCAT44(uVar13,*param_1 + 1);
    pbVar15 = pbVar2;
    pbVar18 = pbVar2;
    FUN_144e30540("SANITIZE",pbVar2,0);
    if (((cVar4 != '\0') && ((ushort)((ushort)*pbVar2 * 0x100 + (pbVar2[1] - 2)) <= uVar10)) &&
       (cVar4 = FUN_144e38500(pbVar2 + 4,param_1,pbVar2), cVar4 != '\0')) break;
    bVar3 = false;
    if ((param_1[8] == 0) || ((char)param_1[7] != '\0')) goto LAB_144e3aff4;
    lVar7 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar7;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar7;
    if (lVar7 == 0) goto LAB_144e3aff4;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  bVar3 = true;
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar4 = FUN_144e2c5c0(param_1,pbVar2,8);
    if (((cVar4 == '\0') || (uVar10 = (ushort)*pbVar2 * 0x100 + -2 + (ushort)pbVar2[1], 1 < uVar10))
       || (cVar4 = FUN_144e38500(pbVar2 + 4,param_1,pbVar2,uVar10,uVar5,uVar14,pcVar12,pbVar15,
                                 pbVar16,uVar17,pbVar18,pbVar19,pcVar6), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (param_1[8] != 0) {
      bVar3 = false;
    }
  }
LAB_144e3aff4:
  FUN_144e2c540(param_1);
  if (bVar3) {
    FUN_144e3f1a0();
  }
  else {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  return param_2;
}



// FUNCTION 144e3b050 FUN_144e3b050 body=579 status=ok
// SIG undefined FUN_144e3b050(void)

longlong FUN_144e3b050(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  longlong lVar9;
  
  uVar4 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar5;
    lVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar5;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar9;
    iVar7 = (int)lVar9 - (int)lVar5;
    *param_1 = 0;
    uVar8 = 1;
    uVar1 = iVar7 * 8;
    uVar6 = 0x4000;
    if (0x4000 < uVar1) {
      uVar6 = uVar1;
    }
    param_1[6] = uVar6;
    FUN_144e30540("SANITIZE",lVar5,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar5,lVar9,iVar7);
    pbVar2 = *(byte **)(param_1 + 2);
    if (pbVar2 == (byte *)0x0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    if (((*(byte **)(param_1 + 4) < pbVar2) ||
        ((uint)((int)*(byte **)(param_1 + 4) - (int)pbVar2) < 4)) ||
       (iVar7 = param_1[6], param_1[6] = iVar7 + -1, iVar7 < 1)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = (char)uVar8;
    }
    iVar7 = 0;
    FUN_144e30540("SANITIZE",pbVar2);
    if ((cVar3 != '\0') && ((ushort)((ushort)*pbVar2 * 0x100 + (pbVar2[1] - 2)) <= uVar8)) break;
    cVar3 = '\0';
    if ((param_1[8] == iVar7) || (*(char *)(param_1 + 7) != (char)iVar7)) goto LAB_144e3b243;
    lVar5 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar5;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar5;
    if (lVar5 == 0) goto LAB_144e3b243;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  cVar3 = (char)uVar8;
  if (param_1[8] != iVar7) {
    param_1[8] = 0;
    cVar3 = FUN_144e2c5c0(param_1,pbVar2,4);
    if ((cVar3 == '\0') || (1 < (ushort)((ushort)*pbVar2 * 0x100 + -2 + (ushort)pbVar2[1]))) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (param_1[8] != 0) {
      cVar3 = '\0';
    }
  }
LAB_144e3b243:
  FUN_144e2c540(param_1);
  if (cVar3 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e3b2a0 FUN_144e3b2a0 body=638 status=ok
// SIG undefined FUN_144e3b2a0(void)

longlong FUN_144e3b2a0(int *param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  short sVar11;
  longlong lVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  
  uVar5 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar5;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    pcVar13 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s";
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar7;
    lVar12 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar7;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar12;
    iVar9 = (int)lVar12 - (int)lVar7;
    *param_1 = 0;
    uVar10 = 1;
    uVar1 = iVar9 * 8;
    uVar14 = 0;
    uVar8 = 0x4000;
    if (0x4000 < uVar1) {
      uVar8 = uVar1;
    }
    param_1[6] = uVar8;
    FUN_144e30540("SANITIZE",lVar7,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar7,lVar12,iVar9);
    pbVar2 = *(byte **)(param_1 + 2);
    if (pbVar2 == (byte *)0x0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    pbVar20 = *(byte **)(param_1 + 4);
    if (((pbVar20 < pbVar2) || ((uint)((int)pbVar20 - (int)pbVar2) < 8)) ||
       (iVar9 = param_1[6], param_1[6] = iVar9 + -1, iVar9 < 1)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = (char)uVar10;
    }
    pbVar17 = pbVar2 + 8;
    pcVar6 = "OUT-OF-RANGE";
    if (cVar4 != '\0') {
      pcVar6 = "OK";
    }
    uVar18 = 8;
    uVar15 = 0;
    uVar5 = CONCAT44(uVar14,*param_1 + 1);
    pbVar16 = pbVar2;
    pbVar19 = pbVar2;
    FUN_144e30540("SANITIZE",pbVar2,0);
    if (((cVar4 != '\0') && (uVar10 <= (ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]))) &&
       (cVar4 = FUN_144e393b0(pbVar2 + 4,param_1,pbVar2), cVar4 != '\0')) break;
    bVar3 = false;
    if ((param_1[8] == 0) || ((char)param_1[7] != '\0')) goto LAB_144e3b4cb;
    lVar7 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar7;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar7;
    if (lVar7 == 0) goto LAB_144e3b4cb;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  bVar3 = true;
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar4 = FUN_144e2c5c0(param_1,pbVar2,8);
    if (((cVar4 == '\0') || (sVar11 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1], sVar11 == 0)) ||
       (cVar4 = FUN_144e393b0(pbVar2 + 4,param_1,pbVar2,sVar11,uVar5,uVar15,pcVar13,pbVar16,pbVar17,
                              uVar18,pbVar19,pbVar20,pcVar6), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (param_1[8] != 0) {
      bVar3 = false;
    }
  }
LAB_144e3b4cb:
  FUN_144e2c540(param_1);
  if (bVar3) {
    FUN_144e3f1a0();
  }
  else {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  return param_2;
}



// FUNCTION 144e3b520 FUN_144e3b520 body=529 status=ok
// SIG undefined FUN_144e3b520(void)

longlong FUN_144e3b520(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  
  uVar4 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar5;
    lVar8 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar5;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar8;
    iVar7 = (int)lVar8 - (int)lVar5;
    *param_1 = 0;
    cVar3 = '\x01';
    uVar1 = iVar7 * 8;
    uVar6 = 0x4000;
    if (0x4000 < uVar1) {
      uVar6 = uVar1;
    }
    param_1[6] = uVar6;
    FUN_144e30540("SANITIZE",lVar5,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar5,lVar8,iVar7);
    pcVar2 = *(char **)(param_1 + 2);
    if (pcVar2 == (char *)0x0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    if (((*(char **)(param_1 + 4) < pcVar2) ||
        ((uint)((int)*(char **)(param_1 + 4) - (int)pcVar2) < 4)) ||
       (iVar7 = param_1[6], param_1[6] = iVar7 + -1, cVar9 = cVar3, iVar7 < 1)) {
      cVar9 = '\0';
    }
    iVar7 = 0;
    FUN_144e30540("SANITIZE",pcVar2);
    if ((cVar9 != '\0') && (*pcVar2 == cVar3)) break;
    cVar3 = '\0';
    if ((param_1[8] == iVar7) || (*(char *)(param_1 + 7) != (char)iVar7)) goto LAB_144e3b6e1;
    lVar5 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar5;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar5;
    if (lVar5 == 0) goto LAB_144e3b6e1;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != iVar7) {
    param_1[8] = 0;
    cVar3 = FUN_144e2c5c0(param_1);
    if ((cVar3 == '\0') || (*pcVar2 != '\x01')) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (param_1[8] != 0) {
      cVar3 = '\0';
    }
  }
LAB_144e3b6e1:
  FUN_144e2c540(param_1);
  if (cVar3 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e3b740 FUN_144e3b740 body=274 status=ok
// SIG undefined FUN_144e3b740(void)

undefined8 FUN_144e3b740(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  do {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      return 1;
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 < uVar3 + 1) {
      return 1;
    }
    if (uVar3 < uVar1) {
      pbVar5 = (byte *)((ulonglong)uVar3 + *(longlong *)(param_1 + 8));
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      pbVar5 = &DAT_149a1f1a0;
    }
    uVar3 = (uint)*pbVar5;
    if (*pbVar5 == 0xc) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        uVar3 = *(int *)(param_1 + 0x18) + 1;
        if (uVar3 <= uVar1) {
          if (uVar3 < uVar1) {
            pbVar5 = (byte *)((ulonglong)uVar3 + *(longlong *)(param_1 + 8));
          }
          else {
            *(undefined1 *)(param_1 + 0x1c) = 1;
            pbVar5 = &DAT_149a1f1a0;
          }
          uVar3 = *pbVar5 + 0x100;
          if (((*(char *)(param_1 + 0x1c) == '\0') && (*(uint *)(param_1 + 0x18) <= uVar1)) &&
             (uVar4 = *(uint *)(param_1 + 0x18) + 1, uVar4 <= uVar1)) {
            *(uint *)(param_1 + 0x18) = uVar4;
          }
          else {
            *(uint *)(param_1 + 0x18) = uVar1;
            *(undefined1 *)(param_1 + 0x1c) = 1;
          }
          goto LAB_144e3b7e4;
        }
      }
      uVar3 = 0xffff;
    }
    else {
LAB_144e3b7e4:
      if (((*(char *)(param_1 + 0x1c) == '\0') && (*(uint *)(param_1 + 0x18) <= uVar1)) &&
         (uVar4 = *(uint *)(param_1 + 0x18) + 1, uVar4 <= uVar1)) {
        *(uint *)(param_1 + 0x18) = uVar4;
      }
      else {
        *(uint *)(param_1 + 0x18) = uVar1;
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
    }
    FUN_144e35670(uVar3,param_1,param_2);
    cVar2 = FUN_144e32b30(param_1);
    if (cVar2 != '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 144e3b860 FUN_144e3b860 body=351 status=ok
// SIG undefined FUN_144e3b860(void)

undefined8 FUN_144e3b860(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  
  cVar6 = FUN_144e2c5c0(param_2,param_1,4);
  if ((cVar6 != '\0') &&
     ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0)) {
    return 1;
  }
  cVar6 = FUN_144e2c5c0(param_2,param_1,5);
  if ((cVar6 != '\0') && (bVar1 = param_1[4], (byte)(bVar1 - 1) < 4)) {
    uVar8 = param_1[3] + 1 +
            (uint)param_1[1] * 0x10000 + (uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100;
    if (((uVar8 == 0) || ((uint)bVar1 < (uint)(0xffffffff / (ulonglong)uVar8))) &&
       ((bVar1 * uVar8 != -1 && (cVar6 = FUN_144e2c5c0(param_2), cVar6 != '\0')))) {
      bVar1 = param_1[1];
      bVar2 = *param_1;
      bVar3 = param_1[3];
      bVar4 = param_1[2];
      bVar5 = param_1[4];
      iVar7 = FUN_144e3bb40(param_1);
      uVar8 = iVar7 - 1;
      if (((uVar8 == 0) || (1 < (uint)(0xffffffff / (ulonglong)uVar8))) &&
         ((uVar8 != 0xffffffff &&
          (cVar6 = FUN_144e2c5c0(param_2,param_1 + (ulonglong)
                                                   ((bVar3 + 1 +
                                                    ((uint)CONCAT11(bVar2,bVar1) * 0x100 +
                                                    (uint)bVar4) * 0x100) * (uint)bVar5) + 5),
          cVar6 != '\0')))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e3b9c0 FUN_144e3b9c0 body=380 status=ok
// SIG undefined FUN_144e3b9c0(void)

int FUN_144e3b9c0(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  
  bVar1 = param_1[4];
  uVar12 = (uint)bVar1;
  iVar8 = 0;
  uVar10 = 0;
  pbVar5 = param_1 + (ulonglong)((param_2 + 1) * (uint)bVar1) + 5;
  uVar7 = (uint)bVar1;
  pbVar11 = pbVar5;
  for (uVar6 = uVar7; uVar6 != 0; uVar6 = uVar6 - 1) {
    bVar2 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    uVar10 = uVar10 * 0x100 + (uint)bVar2;
  }
  uVar3 = 0;
  pbVar13 = param_1 + (ulonglong)(uVar7 * param_2) + 5;
  uVar6 = (uint)bVar1;
  pbVar11 = pbVar13;
  if (uVar6 != 0) {
    do {
      bVar2 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      uVar3 = uVar3 * 0x100 + (uint)bVar2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if (uVar10 < uVar3) {
      return 0;
    }
  }
  uVar7 = 0;
  pbVar11 = pbVar5;
  for (uVar10 = uVar6; uVar10 != 0; uVar10 = uVar10 - 1) {
    bVar2 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    uVar7 = uVar7 * 0x100 + (uint)bVar2;
  }
  uVar10 = 0;
  pbVar11 = param_1 + (ulonglong)
                      ((uint)bVar1 *
                      (((uint)CONCAT11(*param_1,param_1[1]) * 0x100 + (uint)(byte)param_1[2]) *
                       0x100 + (uint)(byte)param_1[3])) + 5;
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    bVar2 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    uVar10 = uVar10 * 0x100 + (uint)bVar2;
  }
  if (uVar10 < uVar7) {
    return 0;
  }
  iVar4 = 0;
  iVar9 = iVar8;
  uVar10 = uVar12;
  if (bVar1 != 0) {
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 * 0x100 + (uint)bVar2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    iVar9 = 0;
    if (bVar1 != 0) {
      do {
        bVar1 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        iVar9 = iVar8 * 0x100 + (uint)bVar1;
        uVar12 = uVar12 - 1;
        iVar8 = iVar9;
      } while (uVar12 != 0);
    }
  }
  return iVar4 - iVar9;
}



// FUNCTION 144e3bb40 FUN_144e3bb40 body=150 status=ok
// SIG undefined FUN_144e3bb40(void)

uint FUN_144e3bb40(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar3 = 0;
  uVar2 = param_1[3] + 1 +
          (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000;
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar5 = (ulonglong)uVar2;
    uVar2 = uVar3;
    do {
      pbVar4 = param_1 + uVar7 + 5;
      uVar3 = 0;
      for (uVar6 = (uint)param_1[4]; uVar6 != 0; uVar6 = uVar6 - 1) {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar3 = uVar3 * 0x100 + (uint)bVar1;
      }
      uVar7 = (ulonglong)((int)uVar7 + (uint)param_1[4]);
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      uVar2 = uVar3;
    } while (uVar5 != 0);
  }
  return uVar3;
}



// FUNCTION 144e3bbe0 FUN_144e3bbe0 body=270 status=ok
// SIG undefined FUN_144e3bbe0(void)

longlong FUN_144e3bbe0(byte *param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  
  bVar1 = param_1[2];
  bVar2 = *param_1;
  bVar3 = param_1[1];
  bVar4 = param_1[3];
  if (param_3 < (uint)bVar2 * 0x1000000 + (uint)bVar1 * 0x100 + (uint)bVar3 * 0x10000 + (uint)bVar4)
  {
    uVar10 = 0;
    bVar5 = param_1[4];
    uVar9 = (uint)bVar5;
    pbVar8 = param_1 + (ulonglong)(bVar5 * param_3) + 5;
    if (bVar5 != 0) {
      do {
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar10 = uVar10 * 0x100 + (uint)bVar6;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar7 = FUN_144e3b9c0(param_1,param_3);
    *(undefined4 *)(param_2 + 0x10) = uVar7;
    *(byte **)(param_2 + 8) =
         param_1 + (ulonglong)uVar10 +
                   (ulonglong)
                   ((uint)bVar5 *
                   (((uint)CONCAT11(bVar2,bVar3) * 0x100 + (uint)bVar1) * 0x100 + bVar4 + 1)) + 4;
  }
  else {
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  return param_2;
}



// FUNCTION 144e3bcf0 FUN_144e3bcf0 body=274 status=ok
// SIG undefined FUN_144e3bcf0(void)

undefined8 FUN_144e3bcf0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  param_2[8] = 0;
  do {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      return 1;
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 < uVar3 + 1) {
      return 1;
    }
    if (uVar3 < uVar1) {
      pbVar5 = (byte *)((ulonglong)uVar3 + *(longlong *)(param_1 + 8));
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      pbVar5 = &DAT_149a1f1a0;
    }
    uVar3 = (uint)*pbVar5;
    if (*pbVar5 == 0xc) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        uVar3 = *(int *)(param_1 + 0x18) + 1;
        if (uVar3 <= uVar1) {
          if (uVar3 < uVar1) {
            pbVar5 = (byte *)((ulonglong)uVar3 + *(longlong *)(param_1 + 8));
          }
          else {
            *(undefined1 *)(param_1 + 0x1c) = 1;
            pbVar5 = &DAT_149a1f1a0;
          }
          uVar3 = *pbVar5 + 0x100;
          if (((*(char *)(param_1 + 0x1c) == '\0') && (*(uint *)(param_1 + 0x18) <= uVar1)) &&
             (uVar4 = *(uint *)(param_1 + 0x18) + 1, uVar4 <= uVar1)) {
            *(uint *)(param_1 + 0x18) = uVar4;
          }
          else {
            *(uint *)(param_1 + 0x18) = uVar1;
            *(undefined1 *)(param_1 + 0x1c) = 1;
          }
          goto LAB_144e3bd94;
        }
      }
      uVar3 = 0xffff;
    }
    else {
LAB_144e3bd94:
      if (((*(char *)(param_1 + 0x1c) == '\0') && (*(uint *)(param_1 + 0x18) <= uVar1)) &&
         (uVar4 = *(uint *)(param_1 + 0x18) + 1, uVar4 <= uVar1)) {
        *(uint *)(param_1 + 0x18) = uVar4;
      }
      else {
        *(uint *)(param_1 + 0x18) = uVar1;
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
    }
    FUN_144e357c0(uVar3,param_1,param_2);
    cVar2 = FUN_144e32b30(param_1);
    if (cVar2 != '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 144e3be10 FUN_144e3be10 body=140 status=ok
// SIG undefined FUN_144e3be10(void)

undefined8 FUN_144e3be10(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  param_2[10] = 0;
  *(undefined1 **)(param_2 + 8) = &DAT_149a1f1a0;
  cVar1 = FUN_144e32610(param_1,1);
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    uVar2 = FUN_144e32b50(param_1);
    FUN_144e35940(uVar2,param_1,param_2);
    cVar1 = FUN_144e32b30(param_1);
    if (cVar1 != '\0') break;
    cVar1 = FUN_144e32610(param_1,1);
  }
  return 0;
}



// FUNCTION 144e3bea0 FUN_144e3bea0 body=274 status=ok
// SIG undefined FUN_144e3bea0(void)

undefined8 FUN_144e3bea0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[6] = 0;
  *(undefined1 **)(param_2 + 8) = &DAT_149a1f1a0;
  do {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      return 1;
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 < uVar3 + 1) {
      return 1;
    }
    if (uVar3 < uVar1) {
      pbVar5 = (byte *)((ulonglong)uVar3 + *(longlong *)(param_1 + 8));
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      pbVar5 = &DAT_149a1f1a0;
    }
    uVar3 = (uint)*pbVar5;
    if (*pbVar5 == 0xc) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        uVar3 = *(int *)(param_1 + 0x18) + 1;
        if (uVar3 <= uVar1) {
          if (uVar3 < uVar1) {
            pbVar5 = (byte *)((ulonglong)uVar3 + *(longlong *)(param_1 + 8));
          }
          else {
            *(undefined1 *)(param_1 + 0x1c) = 1;
            pbVar5 = &DAT_149a1f1a0;
          }
          uVar3 = *pbVar5 + 0x100;
          if (((*(char *)(param_1 + 0x1c) == '\0') && (*(uint *)(param_1 + 0x18) <= uVar1)) &&
             (uVar4 = *(uint *)(param_1 + 0x18) + 1, uVar4 <= uVar1)) {
            *(uint *)(param_1 + 0x18) = uVar4;
          }
          else {
            *(uint *)(param_1 + 0x18) = uVar1;
            *(undefined1 *)(param_1 + 0x1c) = 1;
          }
          goto LAB_144e3bf44;
        }
      }
      uVar3 = 0xffff;
    }
    else {
LAB_144e3bf44:
      if (((*(char *)(param_1 + 0x1c) == '\0') && (*(uint *)(param_1 + 0x18) <= uVar1)) &&
         (uVar4 = *(uint *)(param_1 + 0x18) + 1, uVar4 <= uVar1)) {
        *(uint *)(param_1 + 0x18) = uVar4;
      }
      else {
        *(uint *)(param_1 + 0x18) = uVar1;
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
    }
    FUN_144e34250(uVar3,param_1,param_2);
    cVar2 = FUN_144e32b30(param_1);
    if (cVar2 != '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 144e3bfc0 FUN_144e3bfc0 body=572 status=ok
// SIG undefined FUN_144e3bfc0(void)

longlong FUN_144e3bfc0(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  longlong lVar9;
  
  uVar4 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar5;
    lVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar5;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar9;
    iVar7 = (int)lVar9 - (int)lVar5;
    *param_1 = 0;
    sVar8 = 1;
    uVar1 = iVar7 * 8;
    uVar6 = 0x4000;
    if (0x4000 < uVar1) {
      uVar6 = uVar1;
    }
    param_1[6] = uVar6;
    FUN_144e30540("SANITIZE",lVar5,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar5,lVar9,iVar7);
    pbVar2 = *(byte **)(param_1 + 2);
    if (pbVar2 == (byte *)0x0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    if (((*(byte **)(param_1 + 4) < pbVar2) ||
        ((uint)((int)*(byte **)(param_1 + 4) - (int)pbVar2) < 0x24)) ||
       (iVar7 = param_1[6], param_1[6] = iVar7 + -1, iVar7 < 1)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = (char)sVar8;
    }
    iVar7 = 0;
    FUN_144e30540("SANITIZE",pbVar2);
    if ((cVar3 != '\0') && ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == sVar8)) break;
    cVar3 = '\0';
    if ((param_1[8] == iVar7) || (*(char *)(param_1 + 7) != (char)iVar7)) goto LAB_144e3c1ac;
    lVar5 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar5;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar5;
    if (lVar5 == 0) goto LAB_144e3c1ac;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  cVar3 = (char)sVar8;
  if (param_1[8] != iVar7) {
    param_1[8] = 0;
    cVar3 = FUN_144e2c5c0(param_1,pbVar2,0x24);
    if ((cVar3 == '\0') || ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 1)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (param_1[8] != 0) {
      cVar3 = '\0';
    }
  }
LAB_144e3c1ac:
  FUN_144e2c540(param_1);
  if (cVar3 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e3c200 FUN_144e3c200 body=215 status=ok
// SIG undefined FUN_144e3c200(void)

undefined8 FUN_144e3c200(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar3 = FUN_144e3f100(param_2);
  *(longlong *)(param_1 + 10) = lVar3;
  *(undefined1 *)(param_1 + 7) = 0;
  lVar2 = *(longlong *)(lVar3 + 0x10);
  *(longlong *)(param_1 + 2) = lVar2;
  lVar3 = (ulonglong)*(uint *)(lVar3 + 0x18) + lVar2;
  *(longlong *)(param_1 + 4) = lVar3;
  iVar5 = (int)lVar3 - (int)lVar2;
  uVar1 = iVar5 * 8;
  uVar4 = 0x4000;
  if (0x4000 < uVar1) {
    uVar4 = uVar1;
  }
  param_1[6] = uVar4;
  lVar6 = 0;
  uVar7 = 0;
  param_1[8] = 0;
  *param_1 = 0;
  FUN_144e30540("SANITIZE",lVar2,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar2,lVar3,iVar5);
  if (*(longlong *)(param_1 + 2) == lVar6) {
    FUN_144e2c540(param_1);
    return param_2;
  }
  if (param_1[8] != (int)lVar6) {
    param_1[8] = uVar7;
  }
  FUN_144e2c540(param_1);
  FUN_144e3f1a0(param_2);
  return param_2;
}



// FUNCTION 144e3c2e0 FUN_144e3c2e0 body=362 status=ok
// SIG undefined FUN_144e3c2e0(void)

longlong FUN_144e3c2e0(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar4;
    lVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar4;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar7;
    iVar6 = (int)lVar7 - (int)lVar4;
    *param_1 = 0;
    uVar1 = iVar6 * 8;
    uVar5 = 0x4000;
    if (0x4000 < uVar1) {
      uVar5 = uVar1;
    }
    param_1[6] = uVar5;
    FUN_144e30540("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_144e36740(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_144e3c400;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_144e3c400;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_144e36740(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_144e3c400:
  FUN_144e2c540(param_1);
  if (cVar2 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e3c450 FUN_144e3c450 body=572 status=ok
// SIG undefined FUN_144e3c450(void)

longlong FUN_144e3c450(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  longlong lVar9;
  
  uVar4 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar5;
    lVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar5;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar9;
    iVar7 = (int)lVar9 - (int)lVar5;
    *param_1 = 0;
    sVar8 = 1;
    uVar1 = iVar7 * 8;
    uVar6 = 0x4000;
    if (0x4000 < uVar1) {
      uVar6 = uVar1;
    }
    param_1[6] = uVar6;
    FUN_144e30540("SANITIZE",lVar5,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar5,lVar9,iVar7);
    pbVar2 = *(byte **)(param_1 + 2);
    if (pbVar2 == (byte *)0x0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    if (((*(byte **)(param_1 + 4) < pbVar2) ||
        ((uint)((int)*(byte **)(param_1 + 4) - (int)pbVar2) < 0x24)) ||
       (iVar7 = param_1[6], param_1[6] = iVar7 + -1, iVar7 < 1)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = (char)sVar8;
    }
    iVar7 = 0;
    FUN_144e30540("SANITIZE",pbVar2);
    if ((cVar3 != '\0') && ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == sVar8)) break;
    cVar3 = '\0';
    if ((param_1[8] == iVar7) || (*(char *)(param_1 + 7) != (char)iVar7)) goto LAB_144e3c63c;
    lVar5 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar5;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar5;
    if (lVar5 == 0) goto LAB_144e3c63c;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  cVar3 = (char)sVar8;
  if (param_1[8] != iVar7) {
    param_1[8] = 0;
    cVar3 = FUN_144e2c5c0(param_1,pbVar2,0x24);
    if ((cVar3 == '\0') || ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 1)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (param_1[8] != 0) {
      cVar3 = '\0';
    }
  }
LAB_144e3c63c:
  FUN_144e2c540(param_1);
  if (cVar3 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e3c690 FUN_144e3c690 body=215 status=ok
// SIG undefined FUN_144e3c690(void)

undefined8 FUN_144e3c690(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar3 = FUN_144e3f100(param_2);
  *(longlong *)(param_1 + 10) = lVar3;
  *(undefined1 *)(param_1 + 7) = 0;
  lVar2 = *(longlong *)(lVar3 + 0x10);
  *(longlong *)(param_1 + 2) = lVar2;
  lVar3 = (ulonglong)*(uint *)(lVar3 + 0x18) + lVar2;
  *(longlong *)(param_1 + 4) = lVar3;
  iVar5 = (int)lVar3 - (int)lVar2;
  uVar1 = iVar5 * 8;
  uVar4 = 0x4000;
  if (0x4000 < uVar1) {
    uVar4 = uVar1;
  }
  param_1[6] = uVar4;
  lVar6 = 0;
  uVar7 = 0;
  param_1[8] = 0;
  *param_1 = 0;
  FUN_144e30540("SANITIZE",lVar2,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar2,lVar3,iVar5);
  if (*(longlong *)(param_1 + 2) == lVar6) {
    FUN_144e2c540(param_1);
    return param_2;
  }
  if (param_1[8] != (int)lVar6) {
    param_1[8] = uVar7;
  }
  FUN_144e2c540(param_1);
  FUN_144e3f1a0(param_2);
  return param_2;
}



// FUNCTION 144e3c770 FUN_144e3c770 body=529 status=ok
// SIG undefined FUN_144e3c770(void)

longlong FUN_144e3c770(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  
  uVar4 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar5;
    lVar8 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar5;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar8;
    iVar7 = (int)lVar8 - (int)lVar5;
    *param_1 = 0;
    cVar3 = '\x01';
    uVar1 = iVar7 * 8;
    uVar6 = 0x4000;
    if (0x4000 < uVar1) {
      uVar6 = uVar1;
    }
    param_1[6] = uVar6;
    FUN_144e30540("SANITIZE",lVar5,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar5,lVar8,iVar7);
    pcVar2 = *(char **)(param_1 + 2);
    if (pcVar2 == (char *)0x0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    if (((*(char **)(param_1 + 4) < pcVar2) ||
        ((uint)((int)*(char **)(param_1 + 4) - (int)pcVar2) < 5)) ||
       (iVar7 = param_1[6], param_1[6] = iVar7 + -1, cVar9 = cVar3, iVar7 < 1)) {
      cVar9 = '\0';
    }
    iVar7 = 0;
    FUN_144e30540("SANITIZE",pcVar2);
    if ((cVar9 != '\0') && (*pcVar2 == '\x02')) break;
    cVar3 = '\0';
    if ((param_1[8] == iVar7) || (*(char *)(param_1 + 7) != (char)iVar7)) goto LAB_144e3c931;
    lVar5 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar5;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar5;
    if (lVar5 == 0) goto LAB_144e3c931;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != iVar7) {
    param_1[8] = 0;
    cVar3 = FUN_144e2c5c0(param_1);
    if ((cVar3 == '\0') || (*pcVar2 != '\x02')) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (param_1[8] != 0) {
      cVar3 = '\0';
    }
  }
LAB_144e3c931:
  FUN_144e2c540(param_1);
  if (cVar3 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e3c990 FUN_144e3c990 body=74 status=ok
// SIG undefined FUN_144e3c990(void)

undefined8
FUN_144e3c990(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_38 = param_1 + 0x60;
  local_28 = *(undefined8 *)(param_2 + 0x18);
  local_10 = param_5;
  local_c = 0;
  local_30 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  FUN_144e3eda0(&local_38);
  return 1;
}



// FUNCTION 144e3c9e0 FUN_144e3c9e0 body=87 status=ok
// SIG undefined FUN_144e3c9e0(void)

undefined1 FUN_144e3c9e0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x103a;
  if (param_2 != 0x1037) {
    iVar1 = param_2;
  }
  if ((iVar1 != 0x1a60) && (iVar1 != 0xfc6)) {
    if (iVar1 == 0xf39) {
      return 0x7f;
    }
    iVar1 = (**(code **)(param_1 + 0x18))(param_1,iVar1,*(undefined8 *)(param_1 + 0x58));
    return (&DAT_149970d80)[iVar1];
  }
  return 0xfe;
}



// FUNCTION 144e3ca40 FUN_144e3ca40 body=283 status=ok
// SIG undefined FUN_144e3ca40(void)

bool FUN_144e3ca40(uint param_1)

{
  uint uVar1;
  
  if (param_1 >> 0x10 == 0) {
    uVar1 = param_1 >> 8;
    if (uVar1 < 0x19) {
      if (uVar1 == 0x18) {
        return param_1 - 0x180b < 4;
      }
      if (param_1 >> 8 == 0) {
        return param_1 == 0xad;
      }
      if (uVar1 == 3) {
        return param_1 == 0x34f;
      }
      if (uVar1 == 6) {
        return param_1 == 0x61c;
      }
      if (uVar1 == 0x17) {
        return param_1 - 0x17b4 < 2;
      }
    }
    else {
      if (uVar1 == 0x20) {
        if (((4 < param_1 - 0x200b) && (4 < param_1 - 0x202a)) && (0xf < param_1 - 0x2060)) {
          return false;
        }
        return true;
      }
      if (uVar1 == 0xfe) {
        if ((0xf < param_1 - 0xfe00) && (param_1 != 0xfeff)) {
          return false;
        }
        return true;
      }
      if (uVar1 == 0xff) {
        return param_1 - 0xfff0 < 9;
      }
    }
  }
  else {
    if (param_1 >> 0x10 == 1) {
      return param_1 - 0x1d173 < 8;
    }
    if (param_1 >> 0x10 == 0xe) {
      return param_1 - 0xe0000 < 0x1000;
    }
  }
  return false;
}



// FUNCTION 144e3cb60 FUN_144e3cb60 body=106 status=ok
// SIG undefined FUN_144e3cb60(void)

void FUN_144e3cb60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  
  if (*(char *)(param_1 + 0x59) != '\0') {
    if ((*(longlong *)(param_1 + 0x78) != *(longlong *)(param_1 + 0x70)) ||
       (*(int *)(param_1 + 100) != *(int *)(param_1 + 0x5c))) {
      cVar8 = FUN_144b62480(param_1,1,1);
      if (cVar8 == '\0') {
        return;
      }
      uVar3 = *(uint *)(param_1 + 0x5c);
      lVar5 = *(longlong *)(param_1 + 0x70);
      uVar4 = *(uint *)(param_1 + 100);
      puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar3 * 0x14);
      uVar7 = puVar1[1];
      lVar6 = *(longlong *)(param_1 + 0x78);
      puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar4 * 0x14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      *(undefined4 *)(lVar6 + (ulonglong)uVar4 * 0x14 + 0x10) =
           *(undefined4 *)(lVar5 + 0x10 + (ulonglong)uVar3 * 0x14);
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  return;
}



// FUNCTION 144e3cbd0 FUN_144e3cbd0 body=117 status=ok
// SIG undefined FUN_144e3cbd0(void)

void FUN_144e3cbd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = 2;
  do {
    if (*plVar1 != 0) {
      thunk_FUN_1400020a8();
    }
    plVar1[-1] = 0;
    *plVar1 = 0;
    if (plVar1[4] != 0) {
      thunk_FUN_1400020a8();
    }
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1 = plVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e3cc50 FUN_144e3cc50 body=116 status=ok
// SIG undefined FUN_144e3cc50(void)

undefined4 FUN_144e3cc50(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      uVar3 = (uint)(iVar4 + iVar5) >> 1;
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 0x24);
      if (param_3 < uVar2) {
        iVar4 = uVar3 - 1;
      }
      else {
        if (param_3 <= uVar2) {
          lVar1 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 0x24;
          if (lVar1 == 0) {
            return 0xffff;
          }
          return *(undefined4 *)(lVar1 + 4 + (ulonglong)param_2 * 4);
        }
        iVar5 = uVar3 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return 0xffff;
}



// FUNCTION 144e3ccd0 FUN_144e3ccd0 body=39 status=ok
// SIG undefined FUN_144e3ccd0(void)

void FUN_144e3ccd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 144e3cd00 FUN_144e3cd00 body=276 status=ok
// SIG undefined FUN_144e3cd00(void)

void FUN_144e3cd00(longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_108 [40];
  undefined1 local_e0 [136];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_118 = 0xfffffffffffffffe;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memset((void *)(param_1 + 0x28),0,0x60);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_144e3ce80(local_108,param_2,param_3);
  FUN_144e3da50(local_108,*(undefined8 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x28));
  FUN_144e3cf60(local_108,param_1,param_3 + 0x2c);
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x20) + 0x10);
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(param_1);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
  }
  if (local_50 != 0) {
    thunk_FUN_1400020a8();
  }
  local_58 = 0;
  local_50 = 0;
  FUN_1452079c0(local_e0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_138);
}



// FUNCTION 144e3ce30 FUN_144e3ce30 body=79 status=ok
// SIG undefined FUN_144e3ce30(void)

void FUN_144e3ce30(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x20) + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x98));
  }
  FUN_144e3cbd0(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



// FUNCTION 144e3ce80 FUN_144e3ce80 body=213 status=ok
// SIG undefined FUN_144e3ce80(void)

undefined8 * FUN_144e3ce80(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  *param_1 = param_2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *(undefined4 *)(param_1 + 3) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  FUN_145207820(param_1 + 5);
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  bVar4 = FUN_144e3dce0(param_2);
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | bVar4 & 1;
  bVar4 = *(byte *)(param_1 + 0x18);
  puVar5 = (undefined *)FUN_144e3d640(param_1);
  param_1[0x19] = puVar5;
  bVar4 = -(*(int *)(puVar5 + 0x60) != 0) & 2U | bVar4 & 0xfd;
  *(byte *)(param_1 + 0x18) = bVar4;
  bVar4 = (puVar5[100] << 2 ^ bVar4) & 4 ^ bVar4;
  *(byte *)(param_1 + 0x18) = bVar4;
  puVar6 = &DAT_149c56470;
  if ((bVar4 & 1) == 0) {
    puVar6 = puVar5;
  }
  param_1[0x19] = puVar6;
  return param_1;
}



// FUNCTION 144e3cf60 FUN_144e3cf60 body=1351 status=ok
// SIG undefined FUN_144e3cf60(void)

void FUN_144e3cf60(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  uVar11 = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
  *param_2 = *(undefined4 *)(param_1 + 1);
  param_2[1] = uVar11;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar11 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x24);
  param_2[4] = *(undefined4 *)(param_1 + 3);
  param_2[5] = uVar11;
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  *(undefined8 *)(param_2 + 8) = param_1[0x19];
  FUN_145207af0(param_1 + 5,param_2 + 10);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    FUN_145209170(param_1 + 0x15,param_2 + 0x22);
  }
  iVar12 = param_2[0xe] + -1;
  iVar13 = 0;
  if (-1 < iVar12) {
    do {
      uVar9 = (uint)(iVar12 + iVar13) >> 1;
      uVar16 = *(uint *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 0x24);
      if (uVar16 < 0x66726164) {
        if (0x66726162 < uVar16) {
          lVar1 = *(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 0x24;
          if (lVar1 != 0) {
            iVar12 = *(int *)(lVar1 + 0x1c);
            goto LAB_144e3d014;
          }
          break;
        }
        iVar13 = uVar9 + 1;
      }
      else {
        iVar12 = uVar9 - 1;
      }
    } while (iVar13 <= iVar12);
  }
  iVar12 = 0;
LAB_144e3d014:
  param_2[0x28] = iVar12;
  iVar14 = 0;
  iVar13 = param_2[0xe] + -1;
  if (-1 < iVar13) {
    do {
      uVar9 = (uint)(iVar13 + iVar14) >> 1;
      uVar16 = *(uint *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 0x24);
      if (uVar16 < 0x6e756d73) {
        if (0x6e756d71 < uVar16) {
          lVar1 = *(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 0x24;
          if (lVar1 != 0) {
            iVar13 = *(int *)(lVar1 + 0x1c);
            goto LAB_144e3d077;
          }
          break;
        }
        iVar14 = uVar9 + 1;
      }
      else {
        iVar13 = uVar9 - 1;
      }
    } while (iVar14 <= iVar13);
  }
  iVar13 = 0;
LAB_144e3d077:
  param_2[0x29] = iVar13;
  iVar15 = 0;
  iVar14 = param_2[0xe] + -1;
  if (-1 < iVar14) {
    do {
      uVar9 = (uint)(iVar14 + iVar15) >> 1;
      uVar16 = *(uint *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 0x24);
      if (uVar16 < 0x646e6f6e) {
        if (0x646e6f6c < uVar16) {
          lVar1 = *(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 0x24;
          if (lVar1 != 0) {
            iVar14 = *(int *)(lVar1 + 0x1c);
            goto LAB_144e3d0d7;
          }
          break;
        }
        iVar15 = uVar9 + 1;
      }
      else {
        iVar14 = uVar9 - 1;
      }
    } while (iVar15 <= iVar14);
  }
  iVar14 = 0;
LAB_144e3d0d7:
  param_2[0x2a] = iVar14;
  if ((iVar12 == 0) && ((iVar13 == 0 || (iVar14 == 0)))) {
    bVar6 = 0;
  }
  else {
    bVar6 = 4;
  }
  *(byte *)(param_2 + 0x2e) = *(byte *)(param_2 + 0x2e) & 0xfb;
  iVar13 = 0;
  *(byte *)(param_2 + 0x2e) = *(byte *)(param_2 + 0x2e) | bVar6;
  iVar12 = param_2[0xe] + -1;
  if (-1 < iVar12) {
    do {
      uVar9 = (uint)(iVar12 + iVar13) >> 1;
      uVar16 = *(uint *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 0x24);
      if (uVar16 < 0x72746c6e) {
        if (0x72746c6c < uVar16) {
          lVar1 = *(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 0x24;
          if (lVar1 != 0) {
            uVar11 = *(undefined4 *)(lVar1 + 0x1c);
            goto LAB_144e3d164;
          }
          break;
        }
        iVar13 = uVar9 + 1;
      }
      else {
        iVar12 = uVar9 - 1;
      }
    } while (iVar13 <= iVar12);
  }
  uVar11 = 0;
LAB_144e3d164:
  param_2[0x2b] = uVar11;
  iVar12 = 0;
  uVar16 = 0x766b726e;
  if ((*(uint *)(param_1 + 1) & 0xfffffffe) == 4) {
    uVar16 = 0x6b65726e;
  }
  iVar13 = param_2[0xe] + -1;
  if (-1 < iVar13) {
    do {
      uVar10 = (uint)(iVar13 + iVar12) >> 1;
      uVar9 = *(uint *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar10 * 0x24);
      if (uVar16 < uVar9) {
        iVar13 = uVar10 - 1;
      }
      else {
        if (uVar16 <= uVar9) {
          lVar1 = *(longlong *)(param_2 + 0x10) + (ulonglong)uVar10 * 0x24;
          if (lVar1 != 0) {
            iVar12 = *(int *)(lVar1 + 0x18);
            goto LAB_144e3d1e2;
          }
          break;
        }
        iVar12 = uVar10 + 1;
      }
    } while (iVar12 <= iVar13);
  }
  iVar12 = 0;
LAB_144e3d1e2:
  param_2[0x2c] = iVar12;
  iVar14 = 0;
  iVar13 = param_2[0xe] + -1;
  if (-1 < iVar13) {
    do {
      uVar10 = (uint)(iVar13 + iVar14) >> 1;
      uVar9 = *(uint *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar10 * 0x24);
      if (uVar9 < 0x7472616c) {
        if (0x7472616a < uVar9) {
          lVar1 = *(longlong *)(param_2 + 0x10) + (ulonglong)uVar10 * 0x24;
          if (lVar1 != 0) {
            iVar13 = *(int *)(lVar1 + 0x18);
            goto LAB_144e3d246;
          }
          break;
        }
        iVar14 = uVar10 + 1;
      }
      else {
        iVar13 = uVar10 - 1;
      }
    } while (iVar14 <= iVar13);
  }
  iVar13 = 0;
LAB_144e3d246:
  param_2[0x2d] = iVar13;
  *(byte *)(param_2 + 0x2e) = -(iVar13 != 0) & 2U | iVar12 != 0 | *(byte *)(param_2 + 0x2e) & 0xfc;
  iVar12 = FUN_144e3cc50(param_2 + 10,1,uVar16);
  if ((*(int *)(*(longlong *)(param_2 + 8) + 0x50) == 0) ||
     (*(int *)(*(longlong *)(param_2 + 8) + 0x50) == param_2[0xb])) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  iVar13 = FUN_1451dfe90(*param_1);
  if (iVar13 == 0) {
    *(byte *)(param_2 + 0x2e) = *(byte *)(param_2 + 0x2e) | 0x20;
  }
  *(byte *)((longlong)param_2 + 0xb9) =
       *(byte *)((longlong)param_2 + 0xb9) ^
       (*(char *)(param_1 + 0x18) << 3 ^ *(byte *)((longlong)param_2 + 0xb9)) & 8;
  if (DAT_14c7965f8 == 0) {
    FUN_144e2c1d0();
  }
  if (((DAT_14c7965f8 & 8) == 0) || (iVar13 = FUN_1451f9e90(), iVar13 == 0)) {
    if (((*(byte *)(param_1 + 0x18) & 1) == 0) &&
       ((!bVar5 && (iVar13 = FUN_1451e08f0(), iVar13 != 0)))) {
      *(byte *)((longlong)param_2 + 0xb9) = *(byte *)((longlong)param_2 + 0xb9) | 1;
      goto LAB_144e3d335;
    }
    iVar13 = FUN_1451f9e90();
    if (iVar13 == 0) goto LAB_144e3d335;
  }
  *(byte *)((longlong)param_2 + 0xb9) = *(byte *)((longlong)param_2 + 0xb9) | 2;
LAB_144e3d335:
  if (((*(byte *)((longlong)param_2 + 0xb9) & 2) == 0) && (iVar12 == 0xffff)) {
    iVar12 = FUN_1451f9e90();
    if (iVar12 == 0) {
      cVar7 = FUN_1451e1100();
      if (cVar7 != '\0') {
        *(byte *)((longlong)param_2 + 0xb9) = *(byte *)((longlong)param_2 + 0xb9) | 4;
      }
    }
    else {
      *(byte *)((longlong)param_2 + 0xb9) = *(byte *)((longlong)param_2 + 0xb9) | 2;
    }
  }
  if ((((*(byte *)(param_1 + 0x18) & 2) == 0) || ((*(byte *)((longlong)param_2 + 0xb9) & 2) != 0))
     || (((*(byte *)((longlong)param_2 + 0xb9) & 4) != 0 && (cVar7 = FUN_1451e1150(), cVar7 != '\0')
         ))) {
    bVar6 = 0;
  }
  else {
    bVar6 = 0x10;
  }
  *(byte *)(param_2 + 0x2e) = *(byte *)(param_2 + 0x2e) & 0xef;
  iVar14 = 0;
  *(byte *)(param_2 + 0x2e) = *(byte *)(param_2 + 0x2e) | bVar6;
  iVar13 = param_2[0xe] + -1;
  iVar12 = 0;
  if (-1 < iVar13) {
    do {
      uVar9 = (uint)(iVar13 + iVar14) >> 1;
      uVar16 = *(uint *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 0x24);
      iVar12 = 0;
      if (uVar16 < 0x6d61726c) {
        if (0x6d61726a < uVar16) {
          lVar1 = *(longlong *)(param_2 + 0x10) + (ulonglong)uVar9 * 0x24;
          if (lVar1 != 0) {
            iVar12 = *(int *)(lVar1 + 0x1c);
          }
          break;
        }
        iVar14 = uVar9 + 1;
      }
      else {
        iVar13 = uVar9 - 1;
      }
    } while (iVar14 <= iVar13);
  }
  *(byte *)(param_2 + 0x2e) = -(iVar12 != 0) & 8U | *(byte *)(param_2 + 0x2e) & 0xf7;
  if (((*(byte *)((longlong)param_2 + 0xb9) & 3) == 0) &&
     (((*(byte *)((longlong)param_2 + 0xb9) & 4) == 0 || (cVar7 = FUN_1451e11e0(), cVar7 == '\0'))))
  {
    bVar6 = 0x80;
  }
  else {
    bVar6 = 0;
  }
  bVar2 = *(byte *)(param_2 + 0x2e);
  bVar8 = bVar2 & 0x7f | bVar6;
  *(byte *)(param_2 + 0x2e) = bVar8;
  if ((bVar8 < 0x80) || ((*(byte *)(param_1 + 0x18) & 4) == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 0x40;
  }
  *(byte *)(param_2 + 0x2e) = bVar2 & 0x3f | bVar6 | bVar8;
  if (((bVar2 & 2) == 0) || (iVar12 = FUN_1451f9ee0(*param_1), iVar12 == 0)) {
    *(byte *)((longlong)param_2 + 0xb9) = *(byte *)((longlong)param_2 + 0xb9) & 0xef;
  }
  else {
    *(byte *)((longlong)param_2 + 0xb9) = *(byte *)((longlong)param_2 + 0xb9) & 0xef;
    *(byte *)((longlong)param_2 + 0xb9) = *(byte *)((longlong)param_2 + 0xb9) | 0x10;
  }
  return;
}



// FUNCTION 144e3d4b0 FUN_144e3d4b0 body=56 status=ok
// SIG undefined FUN_144e3d4b0(void)

void FUN_144e3d4b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_1452079c0(param_1 + 0x28);
  return;
}



// FUNCTION 144e3d4f0 FUN_144e3d4f0 body=6 status=ok
// SIG undefined FUN_144e3d4f0(void)

undefined8 FUN_144e3d4f0(void)

{
  return 1;
}



// FUNCTION 144e3d500 FUN_144e3d500 body=3 status=ok
// SIG undefined FUN_144e3d500(void)

void FUN_144e3d500(void)

{
  return;
}



// FUNCTION 144e3d510 FUN_144e3d510 body=6 status=ok
// SIG undefined FUN_144e3d510(void)

undefined8 FUN_144e3d510(void)

{
  return 1;
}



// FUNCTION 144e3d520 FUN_144e3d520 body=3 status=ok
// SIG undefined FUN_144e3d520(void)

void FUN_144e3d520(void)

{
  return;
}



// FUNCTION 144e3d530 FUN_144e3d530 body=233 status=ok
// SIG undefined FUN_144e3d530(void)

void FUN_144e3d530(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar1 = *param_1;
  uVar4 = (**(code **)(lVar2 + 0x28))(lVar2,uVar1,*(undefined8 *)(lVar2 + 0x68));
  if (uVar1 < 0x80) {
    *(short *)(param_1 + 4) = (short)uVar4;
    return;
  }
  *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 1;
  iVar5 = FUN_144e3ca40(uVar1);
  uVar7 = uVar4;
  if (iVar5 != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 2;
    uVar7 = uVar4 | 0x20;
    if (uVar1 == 0x200c) {
      uVar7 = uVar4 | 0x220;
    }
    else if (uVar1 == 0x200d) {
      uVar7 = uVar4 | 0x120;
    }
    else {
      if ((2 < uVar1 - 0x180b) && (0x5f < uVar1 - 0xe0020)) {
        if (uVar1 != 0x34f) goto LAB_144e3d5c8;
        *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 0x20;
      }
      uVar7 = uVar4 | 0x60;
    }
  }
LAB_144e3d5c8:
  uVar6 = (ushort)uVar7;
  if (uVar4 < 0x20) {
    uVar4 = 1 << ((byte)uVar4 & 0x1f);
  }
  else {
    uVar4 = 0;
  }
  if ((uVar4 & 0x1c00) != 0) {
    sVar3 = FUN_144e3c9e0(lVar2,uVar1);
    uVar6 = uVar6 | sVar3 << 8 | 0x80U;
  }
  *(ushort *)(param_1 + 4) = uVar6;
  return;
}



// FUNCTION 144e3d640 FUN_144e3d640 body=1038 status=ok
// SIG undefined FUN_144e3d640(void)

undefined ** FUN_144e3d640(longlong param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 < 0x4d616e65) {
    if (uVar1 == 0x4d616e64) goto LAB_144e3d9a0;
    if (0x47756a72 < uVar1) {
      if (uVar1 < 0x4b686f6b) {
        if (uVar1 != 0x4b686f6a) {
          if (uVar1 < 0x486d6e68) {
            if (uVar1 != 0x486d6e67) {
              if (uVar1 == 0x47757275) goto LAB_144e3d9f4;
              if (uVar1 == 0x48616e67) {
                return &PTR_FUN_149c57300;
              }
              if (uVar1 != 0x48616e6f) {
                if (uVar1 == 0x48656272) {
                  return (undefined **)&DAT_149c57380;
                }
                goto LAB_144e3da4d;
              }
            }
          }
          else if (((uVar1 != 0x4a617661) && (uVar1 != 0x4b616c69)) && (uVar1 != 0x4b686172)) {
            if (uVar1 == 0x4b686d72) {
              return &PTR_FUN_149c5af00;
            }
            goto LAB_144e3da4d;
          }
        }
      }
      else if (uVar1 < 0x4c657064) {
        if (uVar1 != 0x4c657063) {
          if (uVar1 == 0x4b6e6461) goto LAB_144e3d9f4;
          if ((uVar1 != 0x4b746869) && (uVar1 != 0x4c616e61)) {
            if (uVar1 == 0x4c616f6f) {
              return (undefined **)&DAT_149c5b850;
            }
            goto LAB_144e3da4d;
          }
        }
      }
      else if ((uVar1 != 0x4c696d62) && (uVar1 != 0x4d61686a)) {
        bVar3 = uVar1 == 0x4d616b61;
        goto LAB_144e3da2c;
      }
      goto LAB_144e3da2e;
    }
    if (uVar1 == 0x47756a72) goto LAB_144e3d9f4;
    if (uVar1 < 0x42756865) {
      if (uVar1 != 0x42756864) {
        if (uVar1 < 0x4261746c) {
          if (uVar1 != 0x4261746b) {
            if (uVar1 != 0x41646c6d) {
              if (uVar1 == 0x41686f6d) goto LAB_144e3da2e;
              if (uVar1 != 0x41726162) {
                bVar3 = uVar1 == 0x42616c69;
                goto LAB_144e3da2c;
              }
            }
            goto LAB_144e3d9a0;
          }
        }
        else {
          if (uVar1 == 0x42656e67) goto LAB_144e3d9f4;
          if ((uVar1 != 0x42686b73) && (uVar1 != 0x42726168)) {
            bVar3 = uVar1 == 0x42756769;
            goto LAB_144e3da2c;
          }
        }
      }
    }
    else if (uVar1 < 0x4475706d) {
      if (((uVar1 != 0x4475706c) && (uVar1 != 0x43616b6d)) && (uVar1 != 0x4368616d)) {
        if (uVar1 == 0x44657661) goto LAB_144e3d9f4;
        bVar3 = uVar1 == 0x446f6772;
LAB_144e3da2c:
        if (!bVar3) goto LAB_144e3da4d;
      }
    }
    else if (((uVar1 != 0x45677970) && (uVar1 != 0x476f6e67)) && (uVar1 != 0x476f6e6d)) {
      bVar3 = uVar1 == 0x4772616e;
      goto LAB_144e3da2c;
    }
  }
  else if (uVar1 < 0x53696e65) {
    if (uVar1 != 0x53696e64) {
      if (uVar1 < 0x4e6b6f70) {
        if (uVar1 == 0x4e6b6f6f) goto LAB_144e3d9a0;
        if (uVar1 < 0x4d6f6e68) {
          if ((uVar1 == 0x4d6f6e67) || (uVar1 == 0x4d616e69)) goto LAB_144e3d9a0;
          if (uVar1 != 0x4d617263) {
            if (uVar1 == 0x4d6c796d) goto LAB_144e3d9f4;
            bVar3 = uVar1 == 0x4d6f6469;
            goto LAB_144e3da2c;
          }
        }
        else if (uVar1 != 0x4d746569) {
          if (uVar1 == 0x4d796d72) {
            iVar2 = *(int *)(param_1 + 0x50);
            if (((iVar2 != 0x44464c54) && (iVar2 != 0x6c61746e)) && (iVar2 != 0x6d796d72)) {
              return &PTR_FUN_149c5b710;
            }
            goto LAB_144e3da4d;
          }
          if (uVar1 != 0x4e616e64) {
            bVar3 = uVar1 == 0x4e657761;
            goto LAB_144e3da2c;
          }
        }
      }
      else if (uVar1 < 0x526a6e68) {
        if (uVar1 != 0x526a6e67) {
          if (uVar1 == 0x4f727961) goto LAB_144e3d9f4;
          if ((uVar1 != 0x50686167) && (uVar1 != 0x50686c70)) {
            if (uVar1 == 0x51616167) {
              return (undefined **)&DAT_149c5b780;
            }
            goto LAB_144e3da4d;
          }
LAB_144e3d9a0:
          if (((*(int *)(param_1 + 0x50) != 0x44464c54) || (uVar1 == 0x41726162)) &&
             ((*(uint *)(param_1 + 8) & 0xfffffffe) == 4)) {
            return &PTR_FUN_149c56500;
          }
          goto LAB_144e3da4d;
        }
      }
      else {
        if (uVar1 == 0x526f6867) goto LAB_144e3d9a0;
        if ((uVar1 != 0x53617572) && (uVar1 != 0x53687264)) {
          bVar3 = uVar1 == 0x53696464;
          goto LAB_144e3da2c;
        }
      }
    }
  }
  else if (uVar1 < 0x54616d6d) {
    if (uVar1 == 0x54616d6c) {
LAB_144e3d9f4:
      iVar2 = *(int *)(param_1 + 0x50);
      if ((iVar2 != 0x44464c54) && (iVar2 != 0x6c61746e)) {
        if ((char)iVar2 != '3') {
          return &PTR_FUN_149c5a790;
        }
        return &PTR_FUN_149c5bb00;
      }
      goto LAB_144e3da4d;
    }
    if (uVar1 < 0x53796c70) {
      if (uVar1 != 0x53796c6f) {
        if (uVar1 == 0x53696e68) goto LAB_144e3d9f4;
        if (uVar1 == 0x536f6764) goto LAB_144e3d9a0;
        if (uVar1 != 0x536f796f) {
          bVar3 = uVar1 == 0x53756e64;
          goto LAB_144e3da2c;
        }
      }
    }
    else {
      if (uVar1 == 0x53797263) goto LAB_144e3d9a0;
      if ((uVar1 != 0x54616762) && (uVar1 != 0x54616b72)) {
        bVar3 = uVar1 == 0x54616c65;
        goto LAB_144e3da2c;
      }
    }
  }
  else if (uVar1 < 0x5468616a) {
    if (uVar1 == 0x54686169) {
      return (undefined **)&DAT_149c5b850;
    }
    if (uVar1 != 0x54617674) {
      if (uVar1 == 0x54656c75) goto LAB_144e3d9f4;
      if (uVar1 != 0x54666e67) {
        bVar3 = uVar1 == 0x54676c67;
        goto LAB_144e3da2c;
      }
    }
  }
  else if ((uVar1 != 0x54696274) && (uVar1 != 0x54697268)) {
    bVar3 = uVar1 == 0x5a616e62;
    goto LAB_144e3da2c;
  }
LAB_144e3da2e:
  if ((*(int *)(param_1 + 0x50) != 0x44464c54) && (*(int *)(param_1 + 0x50) != 0x6c61746e)) {
    return &PTR_FUN_149c5bb00;
  }
LAB_144e3da4d:
  return (undefined **)&DAT_149c56470;
}



// FUNCTION 144e3da50 FUN_144e3da50 body=650 status=ok
// SIG undefined FUN_144e3da50(void)

void FUN_144e3da50(longlong param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  uVar5 = (ulonglong)param_3;
  FUN_145207a70(param_1 + 0x28,0x7276726e,1);
  FUN_145208de0(param_1 + 0x28,0,0);
  if (*(int *)(param_1 + 8) == 4) {
    FUN_145207a70(param_1 + 0x28,0x6c747261,1);
    uVar2 = 0x6c74726d;
    uVar8 = 1;
  }
  else {
    if (*(int *)(param_1 + 8) != 5) goto LAB_144e3daf6;
    FUN_145207a70(param_1 + 0x28,0x72746c61,1,1);
    uVar8 = 0;
    uVar2 = 0x72746c6d;
  }
  FUN_145207a70(param_1 + 0x28,uVar2,uVar8,1);
LAB_144e3daf6:
  FUN_145207a70(param_1 + 0x28,0x66726163,0,1);
  FUN_145207a70(param_1 + 0x28,0x6e756d72,0,1);
  FUN_145207a70(param_1 + 0x28,0x646e6f6d,0,1);
  FUN_145207a70(param_1 + 0x28,0x72616e64,0x21,0xff);
  FUN_145207a70(param_1 + 0x28,0x7472616b,3);
  FUN_145207a70(param_1 + 0x28,0x48415246,1);
  if ((code *)**(undefined8 **)(param_1 + 200) != (code *)0x0) {
    (*(code *)**(undefined8 **)(param_1 + 200))(param_1);
  }
  FUN_145207a70(param_1 + 0x28,0x42555a5a,1);
  puVar3 = &DAT_149a22e10;
  lVar6 = 5;
  do {
    FUN_145207a70(param_1 + 0x28,*puVar3,puVar3[1],1);
    puVar3 = puVar3 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if ((*(uint *)(param_1 + 8) & 0xfffffffe) == 4) {
    puVar3 = &DAT_149a22e38;
    lVar6 = 6;
    do {
      FUN_145207a70(param_1 + 0x28,*puVar3,puVar3[1],1);
      puVar3 = puVar3 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else {
    FUN_145207a70(param_1 + 0x28,0x76657274,0x11);
  }
  if (param_3 != 0) {
    piVar4 = param_2 + 3;
    uVar7 = uVar5;
    do {
      if ((piVar4[-1] == 0) && (*piVar4 == -1)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      FUN_145207a70(param_1 + 0x28,piVar4[-3],uVar2,piVar4[-2]);
      piVar4 = piVar4 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (((*(byte *)(param_1 + 0xc0) & 1) != 0) && (param_3 != 0)) {
    do {
      FUN_1452090e0(param_1 + 0xa8,*param_2,param_2[1]);
      param_2 = param_2 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + 200) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  return;
}



// FUNCTION 144e3dce0 FUN_144e3dce0 body=133 status=ok
// SIG undefined FUN_144e3dce0(void)

bool FUN_144e3dce0(undefined8 param_1)

{
  int iVar1;
  
  if (DAT_14c7965f8 == 0) {
    FUN_144e2c1d0();
  }
  if (((DAT_14c7965f8 & 8) != 0) && (iVar1 = FUN_1451f9df0(param_1), iVar1 != 0)) {
    return true;
  }
  iVar1 = FUN_1451e0770(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_1451dfee0(param_1,0x47535542,0,0,0), iVar1 != 0)) {
    return false;
  }
  iVar1 = FUN_1451f9df0(param_1);
  return iVar1 != 0;
}



// FUNCTION 144e3dd70 FUN_144e3dd70 body=239 status=ok
// SIG undefined FUN_144e3dd70(void)

void FUN_144e3dd70(longlong param_1)

{
  int *piVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  uVar8 = 0;
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (uVar3 != 0) {
    do {
      piVar1 = (int *)(lVar4 + uVar8 * 0x14);
      FUN_144e3d530(piVar1,param_1);
      if (((*(byte *)(piVar1 + 4) & 0x1f) == 0x18) && (*piVar1 - 0x1f3fbU < 5)) {
LAB_144e3de32:
        *(ushort *)(piVar1 + 4) = *(ushort *)(piVar1 + 4) | 0x80;
      }
      else if ((((byte)*(ushort *)(piVar1 + 4) & 0x1f) == 1) &&
              ((*(ushort *)(piVar1 + 4) & 0x100) != 0)) {
        *(ushort *)(piVar1 + 4) = *(ushort *)(piVar1 + 4) | 0x80;
        uVar6 = (int)uVar8 + 1;
        uVar7 = (ulonglong)uVar6;
        if (uVar6 < uVar3) {
          cVar5 = FUN_144b655b0(*(undefined4 *)(lVar4 + uVar7 * 0x14));
          if (cVar5 != '\0') {
            uVar8 = (ulonglong)uVar6;
            FUN_144e3d530(lVar4 + uVar7 * 0x14,param_1);
            puVar2 = (ushort *)(lVar4 + 0x10 + uVar7 * 0x14);
            *puVar2 = *puVar2 | 0x80;
          }
        }
      }
      else if (*piVar1 - 0xe0020U < 0x60) goto LAB_144e3de32;
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while (uVar6 < uVar3);
  }
  return;
}



// FUNCTION 144e3de60 FUN_144e3de60 body=300 status=ok
// SIG undefined FUN_144e3de60(void)

void FUN_144e3de60(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 local_res8 [2];
  undefined4 local_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (((((*(uint *)(param_1 + 0x18) & 0x10) == 0) && ((*(uint *)(param_1 + 0x18) & 1) != 0)) &&
      (*(int *)(param_1 + 0xb4) == 0)) &&
     ((1 << ((byte)*(undefined2 *)(*(longlong *)(param_1 + 0x70) + 0x10) & 0x1f) & 0x1c00U) != 0)) {
    local_res8[0] = 0;
    iVar6 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x130))
                      (param_2,*(undefined8 *)(param_2 + 0x48),0x25cc,local_res8,
                       *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
    if (iVar6 != 0) {
      local_38 = 0x25cc;
      uStack_34 = 0;
      uStack_2c = 0;
      FUN_144e3d530(&local_38,param_1);
      FUN_144b61b50(param_1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar4 = uStack_2c._4_4_;
      uStack_18 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 8);
      local_20 = local_38;
      uStack_14 = (undefined4)uStack_2c;
      uStack_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 4);
      cVar5 = FUN_144b62480(param_1,0,1);
      if (cVar5 != '\0') {
        uVar2 = *(uint *)(param_1 + 100);
        lVar3 = *(longlong *)(param_1 + 0x78);
        puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar2 * 0x14);
        *puVar1 = local_20;
        puVar1[1] = uStack_1c;
        puVar1[2] = uStack_18;
        puVar1[3] = uStack_14;
        *(undefined4 *)(lVar3 + 0x10 + (ulonglong)uVar2 * 0x14) = uVar4;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      }
      if (*(uint *)(param_1 + 0x5c) < *(uint *)(param_1 + 0x60)) {
        do {
          if (*(char *)(param_1 + 0x58) == '\0') break;
          FUN_144e3cb60(param_1);
        } while (*(uint *)(param_1 + 0x5c) < *(uint *)(param_1 + 0x60));
      }
      FUN_144b61af0(param_1);
    }
  }
  return;
}



// FUNCTION 144e3df90 FUN_144e3df90 body=269 status=ok
// SIG undefined FUN_144e3df90(void)

void FUN_144e3df90(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    uVar2 = 0;
    uVar1 = *(uint *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (uVar1 != 0) {
        uVar5 = uVar2;
        do {
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
          if (uVar1 <= uVar3) break;
        } while (*(char *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar5 * 0x14) < '\0');
        if (uVar1 != 0) {
          do {
            uVar3 = (uint)uVar5;
            if (1 < uVar3 - (int)uVar2) {
              FUN_144b61d00(param_1,uVar2,uVar5);
            }
            uVar6 = uVar5;
            do {
              uVar4 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar4;
              if (*(uint *)(param_1 + 0x60) <= uVar4) break;
            } while (*(char *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar6 * 0x14) < '\0');
            uVar2 = uVar5;
            uVar5 = uVar6;
            if (uVar1 <= uVar3) {
              return;
            }
          } while( true );
        }
      }
    }
    else if (uVar1 != 0) {
      uVar5 = uVar2;
      do {
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
        if (uVar1 <= uVar3) break;
      } while (*(char *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar5 * 0x14) < '\0');
      if (uVar1 != 0) {
        do {
          uVar3 = (uint)uVar5;
          if (1 < uVar3 - (int)uVar2) {
            FUN_144b620d0(param_1,uVar2,uVar5);
          }
          uVar6 = uVar5;
          do {
            uVar4 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar4;
            if (*(uint *)(param_1 + 0x60) <= uVar4) break;
          } while (*(char *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar6 * 0x14) < '\0');
          uVar2 = uVar5;
          uVar5 = uVar6;
        } while (uVar3 < uVar1);
      }
    }
  }
  return;
}



// FUNCTION 144e3e0a0 FUN_144e3e0a0 body=339 status=ok
// SIG undefined FUN_144e3e0a0(void)

void FUN_144e3e0a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar2 = FUN_144e2c060(*(undefined4 *)(param_1 + 0x3c));
  if ((uVar1 & 0xfffffffe) == 4) {
    if (uVar1 == uVar2) {
      return;
    }
    if (uVar2 == 0) {
      return;
    }
  }
  else {
    if ((uVar1 & 0xfffffffe) != 6) {
      return;
    }
    if (uVar1 == 6) {
      return;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x1c) == 1) {
    if (uVar1 != 0) {
      uVar3 = uVar5;
      do {
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        if (uVar1 <= uVar2) break;
      } while (*(char *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar3 * 0x14) < '\0');
      if (uVar1 != 0) {
        do {
          uVar4 = uVar3;
          if (1 < (uint)uVar4 - (int)uVar5) {
            FUN_144b61d00(param_1,uVar5,uVar4);
          }
          FUN_144b619f0(param_1,uVar5,uVar4);
          uVar3 = uVar4;
          do {
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
            if (*(uint *)(param_1 + 0x60) <= uVar2) break;
          } while (*(char *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar3 * 0x14) < '\0');
          uVar5 = uVar4;
        } while ((uint)uVar4 < uVar1);
      }
    }
  }
  else if (uVar1 != 0) {
    uVar3 = uVar5;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar3 * 0x14) < '\0');
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        FUN_144b619f0(param_1,uVar5,uVar4);
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_1 + 0x60) <= uVar2) break;
        } while (*(char *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar3 * 0x14) < '\0');
        uVar5 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  FUN_144b61ad0(param_1);
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) ^ 1;
  return;
}



// FUNCTION 144e3e200 FUN_144e3e200 body=214 status=ok
// SIG undefined FUN_144e3e200(void)

void FUN_144e3e200(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  
  if ((*(uint *)((longlong)param_1 + 0x2c) & 0xfffffffd) != 4) {
    lVar2 = param_1[3];
    uVar1 = *(uint *)(*param_1 + 0xac);
    lVar3 = *(longlong *)(lVar2 + 0x10);
    piVar6 = *(int **)(lVar2 + 0x70);
    if (*(uint *)(lVar2 + 0x60) != 0) {
      uVar7 = (ulonglong)*(uint *)(lVar2 + 0x60);
      do {
        iVar4 = (**(code **)(lVar3 + 0x30))(lVar3,*piVar6,*(undefined8 *)(lVar3 + 0x70));
        if (iVar4 == *piVar6) {
LAB_144e3e2a3:
          piVar6[1] = piVar6[1] | uVar1;
        }
        else {
          lVar2 = param_1[1];
          local_res8[0] = 0;
          iVar5 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x130))
                            (lVar2,*(undefined8 *)(lVar2 + 0x48),iVar4,local_res8,
                             *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x20));
          if (iVar5 == 0) goto LAB_144e3e2a3;
          *piVar6 = iVar4;
        }
        piVar6 = piVar6 + 5;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}



// FUNCTION 144e3e2e0 FUN_144e3e2e0 body=471 status=ok
// SIG undefined FUN_144e3e2e0(void)

void FUN_144e3e2e0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  ulonglong uVar14;
  
  lVar4 = param_1[3];
  if (((*(byte *)(lVar4 + 0x28) & 1) != 0) && (lVar5 = *param_1, (*(byte *)(lVar5 + 0xb8) & 4) != 0)
     ) {
    uVar2 = *(uint *)(lVar5 + 0xa0);
    if ((*(uint *)(lVar4 + 0x38) & 0xfffffffd) == 4) {
      uVar12 = *(uint *)(lVar5 + 0xa4);
      uVar15 = *(uint *)(lVar5 + 0xa8);
    }
    else {
      uVar12 = *(uint *)(lVar5 + 0xa8);
      uVar15 = *(uint *)(lVar5 + 0xa4);
    }
    uVar3 = *(uint *)(lVar4 + 0x60);
    lVar5 = *(longlong *)(lVar4 + 0x70);
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        lVar1 = uVar7 * 0x14;
        if (*(int *)(lVar5 + uVar7 * 0x14) == 0x2044) {
          uVar10 = (uint)uVar7;
          uVar13 = uVar10 + 1;
          uVar14 = (ulonglong)uVar13;
          uVar8 = uVar10;
          while (uVar11 = 0, uVar8 != 0) {
            uVar11 = (uint)uVar7;
            uVar8 = uVar11 - 1;
            if ((*(byte *)(lVar5 + 0x10 + (ulonglong)uVar8 * 0x14) & 0x1f) != 0xd) break;
            uVar7 = (ulonglong)uVar8;
          }
          uVar7 = uVar14;
          if (uVar13 < uVar3) {
            pbVar9 = (byte *)(lVar5 + uVar14 * 0x14 + 0x10);
            do {
              if ((*pbVar9 & 0x1f) != 0xd) break;
              uVar8 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar8;
              pbVar9 = pbVar9 + 0x14;
            } while (uVar8 < uVar3);
          }
          uVar8 = (uint)uVar7;
          if (1 < uVar8 - uVar11) {
            FUN_144b620d0(lVar4,uVar11,uVar7);
          }
          if (uVar11 < uVar10) {
            puVar6 = (uint *)(lVar5 + (ulonglong)uVar11 * 0x14 + 4);
            uVar7 = (ulonglong)(uVar10 - uVar11);
            do {
              *puVar6 = *puVar6 | uVar12 | uVar2;
              puVar6 = puVar6 + 5;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          puVar6 = (uint *)(lVar5 + lVar1 + 4);
          *puVar6 = *puVar6 | *(uint *)(*param_1 + 0xa0);
          if (uVar13 < uVar8) {
            uVar7 = (ulonglong)(uVar8 - uVar13);
            puVar6 = (uint *)(lVar5 + uVar14 * 0x14 + 4);
            do {
              *puVar6 = *puVar6 | uVar15 | uVar2;
              puVar6 = puVar6 + 5;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar7 = (ulonglong)(uVar8 - 1);
        }
        uVar10 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar10;
      } while (uVar10 < uVar3);
    }
  }
  return;
}



// FUNCTION 144e3e4c0 FUN_144e3e4c0 body=290 status=ok
// SIG undefined FUN_144e3e4c0(void)

void FUN_144e3e4c0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  
  lVar2 = *param_1;
  lVar3 = param_1[3];
  FUN_144e3e2e0();
  pcVar4 = *(code **)(*(longlong *)(*param_1 + 0x20) + 0x48);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(*param_1,lVar3);
  }
  uVar9 = 0;
  if ((int)param_1[5] != 0) {
    do {
      puVar12 = (uint *)((ulonglong)uVar9 * 0x10 + param_1[4]);
      if ((puVar12[2] != 0) || (puVar12[3] != 0xffffffff)) {
        iVar10 = 0;
        iVar8 = *(int *)(lVar2 + 0x38) + -1;
        lVar6 = *(longlong *)(lVar2 + 0x40);
        if (-1 < iVar8) {
          do {
            uVar5 = (uint)(iVar8 + iVar10) >> 1;
            uVar1 = *(uint *)(lVar6 + (ulonglong)uVar5 * 0x24);
            if (*puVar12 < uVar1) {
              iVar8 = uVar5 - 1;
            }
            else {
              if (*puVar12 <= uVar1) {
                lVar6 = lVar6 + (ulonglong)uVar5 * 0x24;
                if (lVar6 == 0) goto LAB_144e3e583;
                bVar7 = (byte)*(undefined4 *)(lVar6 + 0x14);
                goto LAB_144e3e585;
              }
              iVar10 = uVar5 + 1;
            }
          } while (iVar10 <= iVar8);
        }
        lVar6 = 0;
LAB_144e3e583:
        bVar7 = 0;
LAB_144e3e585:
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(lVar6 + 0x18);
        }
        FUN_144b61c60(lVar3,puVar12[1] << (bVar7 & 0x1f),uVar11,puVar12[2],puVar12[3]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 5));
  }
  return;
}



// FUNCTION 144e3e5f0 FUN_144e3e5f0 body=214 status=ok
// SIG undefined FUN_144e3e5f0(void)

void FUN_144e3e5f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  int local_res8 [2];
  
  if (((*(byte *)(param_1 + 0x28) & 2) != 0) && ((*(uint *)(param_1 + 0x18) & 4) == 0)) {
    local_res8[0] = *(int *)(param_1 + 0x24);
    lVar2 = *(longlong *)(param_1 + 0x70);
    uVar1 = *(uint *)(param_1 + 0x60);
    uVar5 = (ulonglong)uVar1;
    if (((*(uint *)(param_1 + 0x18) & 8) == 0) &&
       ((local_res8[0] != 0 ||
        (iVar3 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x130))
                           (param_2,*(undefined8 *)(param_2 + 0x48),0x20,local_res8,
                            *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20)), iVar3 != 0)))) {
      if (uVar1 != 0) {
        pbVar4 = (byte *)(lVar2 + 0xc);
        do {
          if (((pbVar4[4] & 0x20) != 0) && ((*pbVar4 >> 5 & 1) == 0)) {
            *(int *)(pbVar4 + -0xc) = local_res8[0];
          }
          pbVar4 = pbVar4 + 0x14;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        return;
      }
    }
    else {
      FUN_1451e14d0(param_1,&LAB_144e3d620);
    }
  }
  return;
}



// FUNCTION 144e3e6d0 FUN_144e3e6d0 body=129 status=ok
// SIG undefined FUN_144e3e6d0(void)

void FUN_144e3e6d0(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  lVar1 = param_1[3];
  FUN_144e3e200();
  FUN_145209440(*param_1,lVar1,param_1[1]);
  FUN_144e3e4c0(param_1);
  if ((*(byte *)(*param_1 + 0xb8) & 0x40) != 0) {
    FUN_14520a730(*param_1,param_1[1],lVar1);
  }
  puVar2 = *(undefined4 **)(lVar1 + 0x70);
  if (*(uint *)(lVar1 + 0x60) != 0) {
    uVar3 = (ulonglong)*(uint *)(lVar1 + 0x60);
    do {
      *puVar2 = puVar2[3];
      puVar2 = puVar2 + 5;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(undefined4 *)(lVar1 + 0x34) = 2;
  return;
}



// FUNCTION 144e3e760 FUN_144e3e760 body=182 status=ok
// SIG undefined FUN_144e3e760(void)

void FUN_144e3e760(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  lVar2 = param_1[3];
  thunk_FUN_1451f2350(param_1[1],lVar2);
  if ((*(byte *)(*param_1 + 0xb8) & 0x20) != 0) {
    uVar1 = *(uint *)(param_1[3] + 0x60);
    if (uVar1 != 0) {
      pbVar5 = (byte *)(*(longlong *)(param_1[3] + 0x70) + 0xc);
      uVar6 = (ulonglong)uVar1;
      do {
        if ((((byte)*(ushort *)(pbVar5 + 4) & 0x1f) == 0xc) &&
           (((*(ushort *)(pbVar5 + 4) & 0x20) == 0 || ((*pbVar5 >> 5 & 1) != 0)))) {
          uVar4 = 8;
        }
        else {
          uVar4 = 2;
        }
        *(undefined2 *)pbVar5 = uVar4;
        pbVar5 = pbVar5 + 0x14;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  lVar3 = *param_1;
  if ((*(byte *)(lVar3 + 0xb9) & 8) != 0) {
    FUN_1451fa4b0(lVar3,param_1[1],lVar2);
    return;
  }
  FUN_1451e0b10(lVar3 + 0x28,lVar3,param_1[1],lVar2);
  return;
}



// FUNCTION 144e3e820 FUN_144e3e820 body=103 status=ok
// SIG undefined FUN_144e3e820(void)

void FUN_144e3e820(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (*(uint *)(param_1 + 0x60) != 0) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x60);
    lVar2 = 0;
    do {
      if ((*(byte *)(lVar1 + 0xc + lVar2) >> 3 & 1) != 0) {
        if (param_2 != '\0') {
          piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + lVar2);
          piVar3[2] = piVar3[2] - *piVar3;
          piVar3[3] = piVar3[3] - piVar3[1];
        }
        *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x80)) = 0;
      }
      lVar2 = lVar2 + 0x14;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144e3e890 FUN_144e3e890 body=406 status=ok
// SIG undefined FUN_144e3e890(void)

void FUN_144e3e890(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int *piVar8;
  ulonglong uVar9;
  int local_res8 [2];
  int local_res10 [2];
  
  lVar2 = param_1[3];
  lVar3 = param_1[1];
  lVar4 = *(longlong *)(lVar2 + 0x80);
  lVar5 = *(longlong *)(lVar3 + 0x40);
  lVar6 = *(longlong *)(lVar2 + 0x70);
  uVar1 = *(uint *)(lVar2 + 0x60);
  uVar9 = (ulonglong)uVar1;
  if ((*(uint *)(lVar2 + 0x38) & 0xfffffffe) == 4) {
    (**(code **)(lVar5 + 0x158))
              (lVar3,*(undefined8 *)(lVar3 + 0x48),uVar9,lVar6,0x14,lVar4,0x14,
               *(undefined8 *)(lVar5 + 0x48));
    cVar7 = FUN_144b63d30(param_1[1],9);
    if ((cVar7 != '\0') && (uVar1 != 0)) {
      uVar9 = (ulonglong)uVar1;
      piVar8 = (int *)(lVar4 + 8);
      do {
        FUN_144b63d80(param_1[1],*(undefined4 *)((lVar6 - lVar4) + -8 + (longlong)piVar8),local_res8
                      ,local_res10);
        *piVar8 = *piVar8 - local_res8[0];
        piVar8[1] = piVar8[1] - local_res10[0];
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 5;
      } while (uVar9 != 0);
    }
  }
  else {
    (**(code **)(lVar5 + 0x160))
              (lVar3,*(undefined8 *)(lVar3 + 0x48),uVar9,lVar6,0x14,lVar4 + 4,0x14,
               *(undefined8 *)(lVar5 + 0x50));
    if (uVar1 != 0) {
      piVar8 = (int *)(lVar4 + 8);
      do {
        FUN_144b63ea0(param_1[1],*(undefined4 *)((longlong)piVar8 + (lVar6 - lVar4) + -8),local_res8
                      ,local_res10);
        *piVar8 = *piVar8 - local_res8[0];
        piVar8[1] = piVar8[1] - local_res10[0];
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 5;
      } while (uVar9 != 0);
    }
  }
  if ((*(byte *)(param_1[3] + 0x28) & 4) == 0) {
    return;
  }
  FUN_14520a890(*param_1,param_1[1]);
  return;
}



// FUNCTION 144e3ea30 FUN_144e3ea30 body=669 status=ok
// SIG undefined FUN_144e3ea30(void)

void FUN_144e3ea30(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  
  lVar14 = param_1[3];
  lVar4 = *(longlong *)(lVar14 + 0x70);
  lVar5 = *(longlong *)(lVar14 + 0x80);
  uVar3 = *(uint *)(lVar14 + 0x60);
  uVar10 = (ulonglong)uVar3;
  if ((*(byte *)(*param_1 + 0xb8) < 0x80) || ((*(uint *)(lVar14 + 0x38) & 0xfffffffd) != 4)) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  local_res18 = lVar5;
  cVar7 = FUN_144b63d30(param_1[1],9);
  lVar14 = lVar5;
  if ((cVar7 != '\0') && (uVar3 != 0)) {
    uVar9 = uVar10;
    piVar11 = (int *)(lVar5 + 8);
    do {
      FUN_144b63d80(param_1[1],*(undefined4 *)((lVar4 - lVar5) + -8 + (longlong)piVar11),local_res8,
                    local_res10);
      *piVar11 = *piVar11 + local_res8[0];
      piVar11[1] = piVar11[1] + local_res10[0];
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 5;
      lVar14 = local_res18;
    } while (uVar9 != 0);
  }
  FUN_1451e1630(param_1[1],param_1[3]);
  if (((*(byte *)(*param_1 + 0xb8) & 0x10) != 0) &&
     (*(int *)(*(longlong *)(*param_1 + 0x20) + 0x60) == 1)) {
    FUN_144e3e820(param_1[3],uVar13);
  }
  lVar5 = *param_1;
  lVar12 = param_1[3];
  lVar6 = param_1[1];
  bVar2 = *(byte *)(lVar5 + 0xb9);
  if ((bVar2 & 1) == 0) {
    if ((bVar2 & 2) == 0) {
      if ((bVar2 & 4) == 0) {
        FUN_14520a7d0(lVar5,lVar6,lVar12);
      }
      else {
        FUN_1451e1270();
      }
    }
    else {
      FUN_1451fa620();
    }
  }
  else {
    FUN_1451e0bc0(lVar5 + 0x28,lVar5,lVar6,lVar12);
  }
  if ((*(byte *)(lVar5 + 0xb9) & 0x10) != 0) {
    FUN_1451fa6f0(lVar5,lVar6,lVar12);
  }
  if (((*(byte *)(*param_1 + 0xb8) & 0x10) != 0) &&
     (*(int *)(*(longlong *)(*param_1 + 0x20) + 0x60) == 2)) {
    FUN_144e3e820(param_1[3],uVar13);
  }
  FUN_1451e1670(param_1[1],param_1[3]);
  lVar5 = param_1[3];
  if (((*(byte *)(lVar5 + 0x28) & 2) != 0) && ((*(byte *)(lVar5 + 0x18) & 0xc) == 0)) {
    uVar9 = (ulonglong)*(uint *)(lVar5 + 0x60);
    if (*(uint *)(lVar5 + 0x60) != 0) {
      lVar12 = *(longlong *)(lVar5 + 0x80) - *(longlong *)(lVar5 + 0x70);
      pbVar8 = (byte *)(*(longlong *)(lVar5 + 0x70) + 0xc);
      do {
        if (((pbVar8[4] & 0x20) != 0) && ((*pbVar8 >> 5 & 1) == 0)) {
          pbVar1 = pbVar8 + lVar12 + -4;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          pbVar1 = pbVar8 + lVar12 + -0xc;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
        }
        pbVar8 = pbVar8 + 0x14;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if ((*(byte *)(*param_1 + 0xb9) & 8) != 0) {
    FUN_1451fa5d0(param_1[3]);
  }
  thunk_FUN_1451ed860(param_1[1],param_1[3]);
  cVar7 = FUN_144b63d30(param_1[1],9);
  if ((cVar7 != '\0') && (uVar3 != 0)) {
    piVar11 = (int *)(lVar14 + 8);
    do {
      FUN_144b63d80(param_1[1],*(undefined4 *)((longlong)piVar11 + (lVar4 - lVar14) + -8),local_res8
                    ,local_res10);
      *piVar11 = *piVar11 - local_res8[0];
      piVar11[1] = piVar11[1] - local_res10[0];
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 5;
    } while (uVar10 != 0);
  }
  if ((*(byte *)(*param_1 + 0xb8) & 0x40) != 0) {
    FUN_14520a5e0(*param_1,param_1[1],param_1[3],uVar13);
  }
  return;
}



// FUNCTION 144e3ecd0 FUN_144e3ecd0 body=197 status=ok
// SIG undefined FUN_144e3ecd0(void)

void FUN_144e3ecd0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) != 0) {
    uVar1 = *(uint *)(param_1 + 0x60);
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (uVar1 != 0) {
      uVar7 = 0;
      do {
        uVar3 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar3;
        if (uVar1 <= uVar3) break;
      } while (*(int *)(lVar2 + 8) == *(int *)(lVar2 + 8 + uVar7 * 0x14));
      uVar10 = 0;
      if (uVar1 != 0) {
        do {
          uVar5 = uVar7;
          uVar4 = (uint)uVar10;
          uVar3 = (uint)uVar5;
          if (uVar4 < uVar3) {
            puVar8 = (uint *)(lVar2 + uVar10 * 0x14 + 4);
            puVar6 = puVar8;
LAB_144e3ed34:
            if ((*puVar6 & 1) == 0) goto code_r0x000144e3ed39;
            uVar7 = (ulonglong)(uVar3 - uVar4);
            do {
              *puVar8 = *puVar8 | 1;
              puVar8 = puVar8 + 5;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
LAB_144e3ed5e:
          uVar7 = uVar5;
          do {
            uVar4 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar4;
            if (*(uint *)(param_1 + 0x60) <= uVar4) break;
          } while (*(int *)(*(longlong *)(param_1 + 0x70) + 8 + uVar5 * 0x14) ==
                   *(int *)(*(longlong *)(param_1 + 0x70) + 8 + uVar7 * 0x14));
          uVar10 = uVar5;
        } while (uVar3 < uVar1);
      }
    }
  }
  return;
code_r0x000144e3ed39:
  uVar9 = (int)uVar10 + 1;
  uVar10 = (ulonglong)uVar9;
  puVar6 = puVar6 + 5;
  if (uVar3 <= uVar9) goto LAB_144e3ed5e;
  goto LAB_144e3ed34;
}



// FUNCTION 144e3eda0 FUN_144e3eda0 body=389 status=ok
// SIG undefined FUN_144e3eda0(void)

void FUN_144e3eda0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  *(undefined4 *)(param_1[3] + 0x28) = 0;
  uVar5 = *(uint *)(param_1[3] + 0x60);
  if (uVar5 < 0x7ffffff) {
    uVar5 = uVar5 << 5;
    uVar4 = 0x2000;
    if (0x2000 < uVar5) {
      uVar4 = uVar5;
    }
    *(uint *)(param_1[3] + 0x2c) = uVar4;
  }
  uVar5 = *(uint *)(param_1[3] + 0x60);
  if (uVar5 < 0x3ffffff) {
    uVar5 = uVar5 << 6;
    uVar4 = 0x400;
    if (0x400 < uVar5) {
      uVar4 = uVar5;
    }
    *(uint *)(param_1[3] + 0x30) = uVar4;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_1[3] + 0x38);
  FUN_144b61b50();
  lVar2 = param_1[3];
  uVar1 = *(undefined4 *)(*param_1 + 0x34);
  if (*(int *)(lVar2 + 0x60) != 0) {
    do {
      uVar5 = (int)uVar6 + 1;
      *(undefined4 *)(*(longlong *)(lVar2 + 0x70) + 4 + uVar6 * 0x14) = uVar1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(lVar2 + 0x60));
  }
  FUN_144e3dd70(param_1[3]);
  FUN_144e3de60(param_1[3],param_1[1]);
  FUN_144e3df90(param_1[3]);
  FUN_144e3e0a0(param_1[3]);
  pcVar3 = *(code **)(*(longlong *)(*param_1 + 0x20) + 0x20);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*param_1,param_1[3],param_1[1]);
  }
  FUN_144e3e6d0(param_1);
  FUN_144e3e760(param_1);
  FUN_144b61b70(param_1[3]);
  FUN_144e3e890(param_1);
  FUN_144e3ea30(param_1);
  if ((*(uint *)(param_1[3] + 0x38) & 0xfffffffd) == 5) {
    FUN_144b616e0();
  }
  FUN_144e3e5f0(param_1[3],param_1[1]);
  if ((*(byte *)(*param_1 + 0xb9) & 8) != 0) {
    FUN_1451fa610(param_1[3]);
  }
  pcVar3 = *(code **)(*(longlong *)(*param_1 + 0x20) + 0x28);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*param_1,param_1[3],param_1[1]);
  }
  FUN_144e3ecd0(param_1[3]);
  *(undefined4 *)(param_1[3] + 0x38) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(undefined4 *)(param_1[3] + 0x2c) = 0x3fffffff;
  *(undefined4 *)(param_1[3] + 0x30) = 0x1fffffff;
  return;
}



// FUNCTION 144e3ef30 FUN_144e3ef30 body=199 status=ok
// SIG undefined FUN_144e3ef30(void)

undefined4 *
FUN_144e3ef30(undefined8 param_1,int param_2,int param_3,undefined8 param_4,code *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  
  if ((param_2 - 1U < 0x7fffffff) &&
     (puVar2 = (undefined4 *)FUN_142864336(1), puVar2 != (undefined4 *)0x0)) {
    *puVar2 = 1;
    puVar2[1] = 1;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(code **)(puVar2 + 10) = param_5;
    *(undefined8 *)(puVar2 + 4) = param_1;
    puVar2[6] = param_2;
    puVar2[7] = param_3;
    *(undefined8 *)(puVar2 + 8) = param_4;
    if (param_3 != 0) {
      return puVar2;
    }
    puVar2[7] = 1;
    cVar1 = FUN_144e3f240(puVar2);
    if (cVar1 != '\0') {
      return puVar2;
    }
    FUN_144e3f120(puVar2);
  }
  else if (param_5 != (code *)0x0) {
    (*param_5)(param_4);
  }
  return (undefined4 *)&DAT_149a1f1a0;
}



// FUNCTION 144e3f000 FUN_144e3f000 body=232 status=ok
// SIG undefined FUN_144e3f000(void)

undefined4 * FUN_144e3f000(int *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (((param_3 != 0) && (param_1 != (int *)0x0)) && (param_2 < (uint)param_1[6])) {
    if (param_1[1] != 0) {
      param_1[1] = 0;
    }
    uVar3 = param_1[6] - param_2;
    if (*param_1 != 0) {
      LOCK();
      *param_1 = *param_1 + 1;
      UNLOCK();
    }
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    lVar1 = *(longlong *)(param_1 + 4);
    if (uVar3 - 1 < 0x7fffffff) {
      puVar2 = (undefined4 *)FUN_142864336(1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 1;
        puVar2[1] = 1;
        *(undefined8 *)(puVar2 + 2) = 0;
        *(ulonglong *)(puVar2 + 4) = (ulonglong)param_2 + lVar1;
        *(undefined1 **)(puVar2 + 10) = &LAB_144e3f360;
        puVar2[6] = uVar3;
        puVar2[7] = 1;
        *(int **)(puVar2 + 8) = param_1;
        return puVar2;
      }
    }
    FUN_144e3f120(param_1);
    return (undefined4 *)&DAT_149a1f1a0;
  }
  return (undefined4 *)&DAT_149a1f1a0;
}



// FUNCTION 144e3f0f0 FUN_144e3f0f0 body=8 status=ok
// SIG undefined FUN_144e3f0f0(void)

undefined1 * FUN_144e3f0f0(void)

{
  return &DAT_149a1f1a0;
}



// FUNCTION 144e3f100 FUN_144e3f100 body=23 status=ok
// SIG undefined FUN_144e3f100(void)

int * FUN_144e3f100(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 144e3f120 FUN_144e3f120 body=128 status=ok
// SIG undefined FUN_144e3f120(void)

void FUN_144e3f120(int *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 2);
      *param_1 = -0xdead;
      LOCK();
      UNLOCK();
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        FUN_144b61790(lpCriticalSection + 1,lpCriticalSection);
        DeleteCriticalSection(lpCriticalSection);
        thunk_FUN_1400020a8(lpCriticalSection);
      }
      if (*(code **)(param_1 + 10) != (code *)0x0) {
        (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
      thunk_FUN_1400020a8(param_1);
    }
  }
  return;
}



// FUNCTION 144e3f1a0 FUN_144e3f1a0 body=14 status=ok
// SIG undefined FUN_144e3f1a0(void)

void FUN_144e3f1a0(longlong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 144e3f1b0 FUN_144e3f1b0 body=74 status=ok
// SIG undefined FUN_144e3f1b0(void)

undefined8 FUN_144e3f1b0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e3f240();
  if (cVar1 == '\0') {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
  }
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144e3f200 FUN_144e3f200 body=3 status=ok
// SIG undefined FUN_144e3f200(void)

void FUN_144e3f200(void)

{
  return;
}



// FUNCTION 144e3f210 FUN_144e3f210 body=40 status=ok
// SIG undefined FUN_144e3f210(void)

void FUN_144e3f210(longlong param_1)

{
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 144e3f240 FUN_144e3f240 body=281 status=ok
// SIG undefined FUN_144e3f240(void)

ulonglong FUN_144e3f240(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  void *_Dst;
  
  if (*(int *)(param_1 + 4) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    if (*(int *)(param_1 + 0x1c) != 2) {
      FUN_144e3f200(&DAT_149a22ec0,param_1,"bool __cdecl hb_blob_t::try_make_writable(void)",0,0,0,
                    "current data is -> %p\n",*(undefined8 *)(param_1 + 0x10));
      _Dst = (void *)FUN_14286432f(*(undefined4 *)(param_1 + 0x18));
      if (_Dst == (void *)0x0) {
        return 0;
      }
      FUN_144e3f200(&DAT_149a22ec0,param_1,"bool __cdecl hb_blob_t::try_make_writable(void)",0,0,0,
                    "dupped successfully -> %p\n",*(undefined8 *)(param_1 + 0x10));
      memcpy(_Dst,*(void **)(param_1 + 0x10),(ulonglong)*(uint *)(param_1 + 0x18));
      FUN_144e3f210(param_1);
      *(code **)(param_1 + 0x28) = thunk_FUN_1400020a8;
      *(void **)(param_1 + 0x10) = _Dst;
      *(void **)(param_1 + 0x20) = _Dst;
      *(undefined4 *)(param_1 + 0x1c) = 2;
      return 0x146279701;
    }
  }
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}



// FUNCTION 144e3f370 FUN_144e3f370 body=326 status=ok
// SIG undefined FUN_144e3f370(void)

undefined4 *
FUN_144e3f370(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  uVar3 = 0;
  lVar4 = param_1;
  FUN_144e3f920("SHAPE_PLAN",0,
                "struct hb_shape_plan_t *__cdecl hb_shape_plan_create2(struct hb_face_t *,const struct hb_segment_properties_t *,const struct hb_feature_t *,unsigned int,const int *,unsigned int,const char *const *)"
                ,0,0,0,"face=%p num_features=%d num_coords=%d shaper_list=%p",param_1,param_4,
                param_6,param_7);
  uVar5 = (undefined4)((ulonglong)lVar4 >> 0x20);
  if ((param_2 != 0) && (puVar2 = (undefined4 *)FUN_142864336(1,0x120), puVar2 != (undefined4 *)0x0)
     ) {
    *puVar2 = 1;
    puVar2[1] = 1;
    *(undefined8 *)(puVar2 + 2) = 0;
    if (param_1 == 0) {
      param_1 = FUN_144e2d0e0();
    }
    FUN_144e2d1f0(param_1);
    *(longlong *)(puVar2 + 4) = param_1;
    cVar1 = FUN_144e3f930(puVar2 + 6,1,param_1,param_2,param_3,CONCAT44(uVar3,param_4),param_5,
                          CONCAT44(uVar5,param_6),param_7);
    if (cVar1 != '\0') {
      cVar1 = FUN_144e3cd00(puVar2 + 0x18,param_1,puVar2 + 6);
      if (cVar1 != '\0') {
        return puVar2;
      }
      thunk_FUN_1400020a8(*(undefined8 *)(puVar2 + 0xe));
    }
    thunk_FUN_1400020a8(puVar2);
  }
  return (undefined4 *)&DAT_149a1f1a0;
}



// FUNCTION 144e3f4c0 FUN_144e3f4c0 body=740 status=ok
// SIG undefined FUN_144e3f4c0(void)

void FUN_144e3f4c0(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  char *local_e8;
  int *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  longlong local_88;
  uint local_80;
  longlong local_7c;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)local_118;
  local_d0 = param_7;
  local_d8 = CONCAT44(local_d8._4_4_,param_4);
  local_b8 = param_5;
  local_c8 = param_6;
  local_e8 = "face=%p num_features=%d shaper_list=%p";
  local_f0 = 0;
  local_f8 = 0;
  iVar13 = 0;
  local_e0 = param_1;
  local_c0 = param_3;
  local_b0 = param_2;
  uVar10 = FUN_144e3f920("SHAPE_PLAN",0,
                         "struct hb_shape_plan_t *__cdecl hb_shape_plan_create_cached2(struct hb_face_t *,const struct hb_segment_properties_t *,const struct hb_feature_t *,unsigned int,const int *,unsigned int,const char *const *)"
                         ,0);
  iVar13 = iVar13 + 1;
  do {
    plVar3 = *(longlong **)(param_1 + 0x5a);
    LOCK();
    UNLOCK();
    iVar1 = *param_1;
    if (iVar1 != 0) {
      local_d8 = param_7;
      local_e0 = (int *)CONCAT44(local_e0._4_4_,local_c8);
      local_e8 = (char *)local_b8;
      local_f0 = CONCAT44(local_f0._4_4_,param_4);
      local_f8 = uVar10;
      cVar7 = FUN_144e3f930(local_a8,0,param_1,param_2);
      plVar6 = plVar3;
      uVar10 = local_c0;
      if (cVar7 == '\0') goto LAB_144e3f794;
      for (; local_c0 = uVar10, plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[1]) {
        lVar4 = *plVar6;
        iVar8 = FUN_144b61550(lVar4 + 0x18);
        if ((iVar8 != 0) && (uVar2 = *(uint *)(lVar4 + 0x40), uVar2 == local_80)) {
          uVar15 = 0;
          if (uVar2 != 0) {
            lVar5 = *(longlong *)(lVar4 + 0x38);
            do {
              if ((*(int *)(lVar5 + uVar15 * 0x10) != *(int *)(local_88 + uVar15 * 0x10)) ||
                 (*(int *)(lVar5 + 4 + uVar15 * 0x10) != *(int *)(local_88 + 4 + uVar15 * 0x10)))
              goto LAB_144e3f674;
              if ((*(int *)(lVar5 + 8 + uVar15 * 0x10) != 0) ||
                 (iVar8 = iVar13, *(int *)(lVar5 + 0xc + uVar15 * 0x10) != -1)) {
                iVar8 = 0;
              }
              if ((*(int *)(local_88 + 8 + uVar15 * 0x10) != 0) ||
                 (iVar9 = iVar13, *(int *)(local_88 + 0xc + uVar15 * 0x10) != -1)) {
                iVar9 = 0;
              }
              if (iVar8 != iVar9) goto LAB_144e3f674;
              uVar14 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar14;
            } while (uVar14 < uVar2);
          }
          if ((*(longlong *)(lVar4 + 0x44) == local_7c) && (*(longlong *)(lVar4 + 0x50) == local_70)
             ) {
            piVar11 = (int *)*plVar6;
            if ((piVar11 != (int *)0x0) && (*piVar11 != 0)) {
              LOCK();
              *piVar11 = *piVar11 + iVar13;
              UNLOCK();
            }
            goto LAB_144e3f794;
          }
        }
LAB_144e3f674:
        param_2 = local_b0;
        uVar10 = local_c0;
      }
      local_f0._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
    }
    local_e8 = (char *)param_7;
    local_f0 = CONCAT44(local_f0._4_4_,local_c8);
    local_f8 = local_b8;
    piVar11 = (int *)FUN_144e3f370(param_1,param_2,uVar10,param_4);
    if ((iVar1 == 0) ||
       (puVar12 = (undefined8 *)FUN_142864336(iVar13), puVar12 == (undefined8 *)0x0))
    goto LAB_144e3f794;
    *puVar12 = piVar11;
    puVar12[1] = plVar3;
    LOCK();
    bVar16 = plVar3 == *(longlong **)(param_1 + 0x5a);
    if (bVar16) {
      *(undefined8 **)(param_1 + 0x5a) = puVar12;
    }
    UNLOCK();
    if (bVar16) {
      if ((piVar11 != (int *)0x0) && (*piVar11 != 0)) {
        LOCK();
        *piVar11 = *piVar11 + iVar13;
        UNLOCK();
      }
LAB_144e3f794:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_58 ^ (ulonglong)local_118);
    }
    if ((piVar11 != (int *)0x0) && (*piVar11 != 0)) {
      LOCK();
      iVar1 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar1 == iVar13) {
        *piVar11 = -0xdead;
        lpCriticalSection = *(LPCRITICAL_SECTION *)(piVar11 + 2);
        LOCK();
        UNLOCK();
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          FUN_144b61790(lpCriticalSection + 1);
          DeleteCriticalSection(lpCriticalSection);
          thunk_FUN_1400020a8(lpCriticalSection);
        }
        FUN_144e3ce30(piVar11 + 0x18);
        thunk_FUN_1400020a8(*(undefined8 *)(piVar11 + 0xe));
        thunk_FUN_1400020a8(piVar11);
      }
    }
    thunk_FUN_1400020a8(puVar12);
    uVar10 = local_c0;
    param_2 = local_b0;
  } while( true );
}



// FUNCTION 144e3f7c0 FUN_144e3f7c0 body=121 status=ok
// SIG undefined FUN_144e3f7c0(void)

void FUN_144e3f7c0(int *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 2);
      *param_1 = -0xdead;
      LOCK();
      UNLOCK();
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        FUN_144b61790(lpCriticalSection + 1,lpCriticalSection);
        DeleteCriticalSection(lpCriticalSection);
        thunk_FUN_1400020a8(lpCriticalSection);
      }
      FUN_144e3ce30(param_1 + 0x18);
      thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0xe));
      thunk_FUN_1400020a8(param_1);
    }
  }
  return;
}



// FUNCTION 144e3f840 FUN_144e3f840 body=215 status=ok
// SIG undefined FUN_144e3f840(void)

undefined8
FUN_144e3f840(int *param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  FUN_144e3f920("SHAPE_PLAN",param_1,
                "int __cdecl hb_shape_plan_execute(struct hb_shape_plan_t *,struct hb_font_t *,struct hb_buffer_t *,const struct hb_feature_t *,unsigned int)"
                ,0,0,0,"num_features=%d shaper_func=%p, shaper_name=%s",param_5,
                *(undefined8 *)(param_1 + 0x14),*(undefined8 *)(param_1 + 0x16));
  if (*(int *)(param_3 + 0x60) == 0) {
    uVar3 = 1;
  }
  else if ((*param_1 == 0) || (*(code **)(param_1 + 0x14) != FUN_144e3c990)) {
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_144e3fbb0(param_2 + 0x60);
    if ((cVar1 != '\0') &&
       (iVar2 = FUN_144e3c990(param_1,param_2,param_3,param_4,CONCAT44(uVar4,param_5)), iVar2 != 0))
    {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// FUNCTION 144e3f920 FUN_144e3f920 body=3 status=ok
// SIG undefined FUN_144e3f920(void)

void FUN_144e3f920(void)

{
  return;
}



// FUNCTION 144e3f930 FUN_144e3f930 body=634 status=ok
// SIG undefined FUN_144e3f930(void)

ulonglong FUN_144e3f930(undefined8 *param_1,char param_2,longlong param_3,undefined8 *param_4,
                       void *param_5,uint param_6,undefined8 param_7,undefined4 param_8,
                       undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *pcVar10;
  bool bVar11;
  void *local_38;
  
  uVar8 = (ulonglong)param_6;
  local_38 = (void *)0x0;
  if (((param_2 == '\0') || (param_6 == 0)) ||
     (local_38 = (void *)FUN_142864336(uVar8,0x10), local_38 != (void *)0x0)) {
    uVar2 = param_4[1];
    *param_1 = *param_4;
    param_1[1] = uVar2;
    pvVar6 = param_5;
    if (param_2 != '\0') {
      pvVar6 = local_38;
    }
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(uint *)(param_1 + 5) = param_6;
    lVar7 = 2;
    param_1[4] = pvVar6;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    if (((param_2 != '\0') && (param_6 != 0)) && (memcpy(local_38,param_5,uVar8 << 4), param_6 != 0)
       ) {
      iVar4 = *(int *)((longlong)local_38 + 8);
      iVar5 = *(int *)((longlong)local_38 + 0xc);
      do {
        if (iVar4 != 0) {
          iVar4 = 1;
        }
        if (iVar5 != -1) {
          iVar5 = 2;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      *(int *)((longlong)local_38 + 8) = iVar4;
      *(int *)((longlong)local_38 + 0xc) = iVar5;
    }
    pcVar10 = "BUSGSOPGface=%p num_features=%d num_coords=%d shaper_list=%p";
    lVar9 = (longlong)param_1 + 0x2c;
    param_1[7] = 0;
    param_1[8] = 0;
    do {
      FUN_1451e0650(param_3,*(undefined4 *)pcVar10,param_7,param_8,lVar9);
      lVar9 = lVar9 + 4;
      pcVar10 = pcVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (param_9 == (undefined8 *)0x0) {
      lVar7 = FUN_144e3fc20();
      if (*(code **)(lVar7 + 0x10) == FUN_144e3c990) {
        lVar7 = *(longlong *)(param_3 + 0x40);
        LOCK();
        UNLOCK();
        while (lVar7 == 0) {
          if (*(longlong *)(param_3 + 0x38) == 0) goto LAB_144e3fb86;
          lVar7 = FUN_144e3d4f0();
          LOCK();
          bVar11 = *(longlong *)(param_3 + 0x40) == 0;
          if (bVar11) {
            *(longlong *)(param_3 + 0x40) = lVar7;
          }
          UNLOCK();
          if (bVar11) {
            if (lVar7 == 0) goto LAB_144e3fb86;
            break;
          }
          if (lVar7 != 0) {
            FUN_144e3d500();
          }
          lVar7 = *(longlong *)(param_3 + 0x40);
          LOCK();
          UNLOCK();
        }
LAB_144e3fae0:
        param_1[7] = FUN_144e3c990;
        param_1[8] = &DAT_149a22e68;
        return 0x149a22e01;
      }
    }
    else {
      pcVar10 = (char *)*param_9;
      while (pcVar10 != (char *)0x0) {
        if (((*pcVar10 == 'o') && (pcVar10[1] == 't')) && (pcVar10[2] == '\0')) {
          lVar7 = *(longlong *)(param_3 + 0x40);
          LOCK();
          UNLOCK();
          while( true ) {
            if (lVar7 != 0) goto LAB_144e3fae0;
            if (*(longlong *)(param_3 + 0x38) == 0) goto LAB_144e3fafb;
            lVar7 = FUN_144e3d4f0();
            LOCK();
            bVar11 = *(longlong *)(param_3 + 0x40) == 0;
            if (bVar11) {
              *(longlong *)(param_3 + 0x40) = lVar7;
            }
            UNLOCK();
            if (bVar11) break;
            if (lVar7 != 0) {
              FUN_144e3d500();
            }
            lVar7 = *(longlong *)(param_3 + 0x40);
            LOCK();
            UNLOCK();
          }
          if (lVar7 != 0) goto LAB_144e3fae0;
        }
LAB_144e3fafb:
        puVar1 = param_9 + 1;
        param_9 = param_9 + 1;
        pcVar10 = (char *)*puVar1;
      }
    }
  }
LAB_144e3fb86:
  uVar8 = thunk_FUN_1400020a8(local_38);
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 144e3fbb0 FUN_144e3fbb0 body=100 status=ok
// SIG undefined FUN_144e3fbb0(void)

bool FUN_144e3fbb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  LOCK();
  UNLOCK();
  bVar3 = false;
  if (*param_1 == 0) {
    while (param_1[-1] != 0) {
      lVar2 = FUN_144e3d510();
      LOCK();
      lVar1 = *param_1;
      if (lVar1 == 0) {
        *param_1 = lVar2;
      }
      UNLOCK();
      if (lVar1 == 0) goto LAB_144e3fc08;
      if (lVar2 != 0) {
        FUN_144e3d520(lVar2);
      }
      LOCK();
      UNLOCK();
      if (*param_1 != 0) {
        return *param_1 != 0;
      }
    }
    lVar2 = 0;
LAB_144e3fc08:
    bVar3 = lVar2 == 0;
  }
  return !bVar3;
}



// FUNCTION 144e3fc20 FUN_144e3fc20 body=116 status=ok
// SIG undefined FUN_144e3fc20(void)

undefined * FUN_144e3fc20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  
  LOCK();
  UNLOCK();
  puVar2 = DAT_14c796618;
  if (DAT_14c796618 == (undefined *)0x0) {
    while( true ) {
      puVar1 = (undefined *)FUN_144e3fca0();
      puVar2 = &DAT_149a23210;
      if (puVar1 != (undefined *)0x0) {
        puVar2 = puVar1;
      }
      LOCK();
      bVar3 = DAT_14c796618 == (undefined *)0x0;
      puVar1 = puVar2;
      if (!bVar3) {
        puVar1 = DAT_14c796618;
      }
      DAT_14c796618 = puVar1;
      UNLOCK();
      if (bVar3) break;
      if ((puVar2 != (undefined *)0x0) && (puVar2 != &DAT_149a23210)) {
        thunk_FUN_1400020a8();
      }
      LOCK();
      UNLOCK();
      if (DAT_14c796618 != (undefined *)0x0) {
        return DAT_14c796618;
      }
    }
  }
  return puVar2;
}



// FUNCTION 144e3fca0 FUN_144e3fca0 body=491 status=ok
// SIG undefined FUN_144e3fca0(void)

char * FUN_144e3fca0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *_Str1;
  char *pcVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar6 = getenv("HB_SHAPER_LIST");
  if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
    _Str1 = (char *)FUN_142864336(1);
    if (_Str1 == (char *)0x0) {
      return (char *)0x0;
    }
    uVar8 = 0;
    _Str1[0] = 'o';
    _Str1[1] = 't';
    _Str1[2] = '\0';
    _Str1[3] = '\0';
    _Str1[4] = '\0';
    _Str1[5] = '\0';
    _Str1[6] = '\0';
    _Str1[7] = '\0';
    _Str1[8] = '\0';
    _Str1[9] = '\0';
    _Str1[10] = '\0';
    _Str1[0xb] = '\0';
    _Str1[0xc] = '\0';
    _Str1[0xd] = '\0';
    _Str1[0xe] = '\0';
    _Str1[0xf] = '\0';
    *(code **)(_Str1 + 0x10) = FUN_144e3c990;
    uVar4 = 0;
    while( true ) {
      pcVar7 = strchr(pcVar6,0x2c);
      if (pcVar7 == (char *)0x0) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (pcVar6[lVar9] != '\0');
        pcVar7 = pcVar6 + lVar9;
      }
      if (uVar8 == 0) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (_Str1[lVar9] != '\0');
        uVar8 = uVar4;
        if (((longlong)pcVar7 - (longlong)pcVar6 == (longlong)(int)lVar9) &&
           (iVar5 = strncmp(_Str1,pcVar6,(longlong)pcVar7 - (longlong)pcVar6), iVar5 == 0)) {
          uVar2 = *(undefined8 *)_Str1;
          uVar3 = *(undefined8 *)(_Str1 + 8);
          uVar8 = uVar4 + 1;
          uVar1 = *(undefined8 *)(_Str1 + 0x10);
          pcVar6 = _Str1 + (ulonglong)uVar4 * 0x18;
          memmove(_Str1 + (ulonglong)uVar8 * 0x18,pcVar6,(ulonglong)-uVar4 * 0x18);
          local_48 = (undefined4)uVar2;
          uStack_44 = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_40 = (undefined4)uVar3;
          uStack_3c = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)pcVar6 = local_48;
          *(undefined4 *)(pcVar6 + 4) = uStack_44;
          *(undefined4 *)(pcVar6 + 8) = uStack_40;
          *(undefined4 *)(pcVar6 + 0xc) = uStack_3c;
          *(undefined8 *)(pcVar6 + 0x10) = uVar1;
          uVar4 = uVar8;
        }
      }
      if (*pcVar7 == '\0') break;
      pcVar6 = pcVar7 + 1;
    }
    return _Str1;
  }
  return (char *)0x0;
}



// FUNCTION 144e3fe90 FUN_144e3fe90 body=129 status=ok
// SIG undefined FUN_144e3fe90(void)

longlong FUN_144e3fe90(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  LOCK();
  UNLOCK();
  lVar1 = DAT_14c796620;
  if (DAT_14c796620 == 0) {
    while( true ) {
      lVar1 = FUN_144e40300();
      if (lVar1 == 0) {
        lVar1 = FUN_144b650e0();
      }
      LOCK();
      bVar3 = DAT_14c796620 == 0;
      lVar2 = lVar1;
      if (!bVar3) {
        lVar2 = DAT_14c796620;
      }
      DAT_14c796620 = lVar2;
      UNLOCK();
      if (bVar3) break;
      if ((lVar1 != 0) && (lVar2 = FUN_144b650e0(), lVar1 != lVar2)) {
        FUN_144b65110(lVar1);
      }
      LOCK();
      UNLOCK();
      if (DAT_14c796620 != 0) {
        return DAT_14c796620;
      }
    }
  }
  return lVar1;
}



// FUNCTION 144e3ff20 FUN_144e3ff20 body=19 status=ok
// SIG undefined FUN_144e3ff20(void)

undefined1 FUN_144e3ff20(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1425ce8a0(param_2);
  return uVar1;
}



// FUNCTION 144e3ff40 FUN_144e3ff40 body=343 status=ok
// SIG undefined FUN_144e3ff40(void)

undefined8 FUN_144e3ff40(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_142516e50(param_2,0x1005);
  switch(uVar1) {
  default:
    return 2;
  case 1:
    return 9;
  case 2:
    return 5;
  case 3:
    return 8;
  case 4:
    return 6;
  case 5:
    return 7;
  case 6:
    return 0xc;
  case 7:
    return 0xb;
  case 8:
    return 10;
  case 9:
    return 0xd;
  case 10:
    return 0xe;
  case 0xb:
    return 0xf;
  case 0xc:
    return 0x1d;
  case 0xd:
    return 0x1b;
  case 0xe:
    return 0x1c;
  case 0xf:
    return 0;
  case 0x10:
    return 1;
  case 0x11:
    return 3;
  case 0x12:
    return 4;
  case 0x13:
    return 0x11;
  case 0x14:
    return 0x16;
  case 0x15:
    return 0x12;
  case 0x16:
    return 0x10;
  case 0x17:
    return 0x15;
  case 0x18:
    return 0x19;
  case 0x19:
    return 0x17;
  case 0x1a:
    return 0x18;
  case 0x1b:
    return 0x1a;
  case 0x1c:
    return 0x14;
  case 0x1d:
    return 0x13;
  }
}



// FUNCTION 144e40120 FUN_144e40120 body=74 status=ok
// SIG undefined FUN_144e40120(void)

undefined4 FUN_144e40120(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_res20 [2];
  
  uVar2 = 0;
  local_res20[0] = 0;
  iVar1 = FUN_1424d92a0(param_2,local_res20);
  if (0 < local_res20[0]) {
    return 0x5a7a7a7a;
  }
  if (iVar1 != -1) {
    uVar3 = FUN_142563590(iVar1);
    uVar2 = FUN_144e2c040(uVar3,0xffffffff);
  }
  return uVar2;
}



// FUNCTION 144e40170 FUN_144e40170 body=44 status=ok
// SIG undefined FUN_144e40170(void)

undefined8 FUN_144e40170(void)

{
  int iVar1;
  int *in_R9;
  undefined8 in_stack_00000028;
  
  iVar1 = FUN_1425ce890(in_stack_00000028);
  if (iVar1 < 0) {
    return 0;
  }
  *in_R9 = iVar1;
  return 1;
}



// FUNCTION 144e401a0 FUN_144e401a0 body=333 status=ok
// SIG undefined FUN_144e401a0(void)

void FUN_144e401a0(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_38;
  ushort local_32;
  ushort local_30 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_38;
  local_38 = 0;
  iVar2 = FUN_1425ce7b0(param_5,param_2,local_30,4);
  if ((local_38 < 1) && (-1 < iVar2)) {
    iVar2 = FUN_142504760(local_30,iVar2);
    if (iVar2 == 1) {
      uVar3 = (uint)local_30[0];
      *param_3 = (uint)local_30[0];
      if ((uVar3 & 0xfffff800) == 0xd800) {
        if ((local_30[0] >> 10 & 1) == 0) {
          *param_3 = local_30[1] + 0xfca02400 + uVar3 * 0x400;
          *param_4 = 0;
          goto LAB_144e402e0;
        }
        *param_3 = uVar3 + 0xfca02400 + (uint)local_32 * 0x400;
      }
      *param_4 = 0;
    }
    else if (iVar2 == 2) {
      uVar3 = 1;
      *param_3 = (uint)local_30[0];
      if ((local_30[0] & 0xfffffc00) == 0xd800) {
        uVar3 = 2;
        *param_3 = (uint)local_30[0] * 0x400 + local_30[1] + 0xfca02400;
      }
      uVar1 = local_30[uVar3];
      *param_4 = (uint)uVar1;
      if ((uVar1 & 0xfffffc00) == 0xd800) {
        *param_4 = local_30[uVar3 + 1] + 0xfca02400 + (uint)uVar1 * 0x400;
      }
    }
  }
LAB_144e402e0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 144e40300 FUN_144e40300 body=189 status=ok
// SIG undefined FUN_144e40300(void)

undefined8 FUN_144e40300(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  uVar1 = FUN_1425ce720(local_res8);
  uVar2 = FUN_144b65010(0);
  FUN_144b65240(uVar2,FUN_144e3ff20,0,0);
  FUN_144b652d0(uVar2,FUN_144e3ff40,0,0);
  FUN_144b65360(uVar2,&LAB_144e40110,0,0);
  FUN_144b653f0(uVar2,FUN_144e40120,0,0);
  FUN_144b65480(uVar2,FUN_144e40170,uVar1,0);
  FUN_144b65510(uVar2,FUN_144e401a0,uVar1,0);
  FUN_144b65230(uVar2);
  return uVar2;
}



// FUNCTION 144e403d0 FUN_144e403d0 body=3 status=ok
// SIG undefined FUN_144e403d0(void)

void FUN_144e403d0(void)

{
  return;
}



// FUNCTION 144e403e0 FUN_144e403e0 body=179 status=ok
// SIG undefined FUN_144e403e0(void)

undefined1 * FUN_144e403e0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_144e403d0(param_1,&DAT_149a23237);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144e404a0 FUN_144e404a0 body=182 status=ok
// SIG undefined FUN_144e404a0(void)

undefined1 * FUN_144e404a0(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong local_48;
  
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_48 = -1;
  do {
    local_48 = local_48 + 1;
  } while (*(char *)(param_2 + local_48) != '\0');
  FUN_140cd1a74(param_1,param_2,local_48);
  return param_1;
}



// FUNCTION 144e40560 FUN_144e40560 body=166 status=ok
// SIG undefined FUN_144e40560(void)

undefined1 * FUN_144e40560(undefined1 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_144e403d0(param_1,&DAT_149a23237);
  FUN_144e40650(param_1,param_2);
  return param_1;
}



// FUNCTION 144e40610 FUN_144e40610 body=49 status=ok
// SIG undefined FUN_144e40610(void)

undefined8 FUN_144e40610(undefined8 param_1,undefined8 param_2)

{
  FUN_144b70470(param_1,param_2);
  return param_1;
}



// FUNCTION 144e40650 FUN_144e40650 body=169 status=ok
// SIG undefined FUN_144e40650(void)

void FUN_144e40650(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_2;
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *param_2 = 0;
  return;
}



// FUNCTION 144e40830 FUN_144e40830 body=118 status=ok
// SIG undefined FUN_144e40830(void)

undefined8 * FUN_144e40830(undefined8 *param_1)

{
  undefined8 *local_28;
  
  local_28 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    local_28 = (undefined8 *)*param_1;
  }
  return local_28;
}



// FUNCTION 144e408b0 FUN_144e408b0 body=6 status=ok
// SIG undefined FUN_144e408b0(void)

void FUN_144e408b0(void)

{
  return;
}



// FUNCTION 144e408c0 FUN_144e408c0 body=196 status=ok
// SIG undefined FUN_144e408c0(void)

void FUN_144e408c0(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  puVar2 = &DAT_14996de1b;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  local_80 = param_1;
  FUN_144e404a0(param_1 + 3,puVar2);
  if (DAT_14c796628 == (code *)0x0) {
    uVar1 = FUN_144e403e0(local_38);
    FUN_144e40560(param_1 + 7,uVar1);
    puVar2 = local_38;
  }
  else {
    uVar1 = (*DAT_14c796628)(local_58);
    uVar1 = FUN_144e40560(local_78,uVar1);
    FUN_144e40560(param_1 + 7,uVar1);
    FUN_144b65b20(local_78);
    puVar2 = local_58;
  }
  FUN_144b65b20(puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144e409a0 FUN_144e409a0 body=179 status=ok
// SIG undefined FUN_144e409a0(void)

void FUN_144e409a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  local_80 = param_1;
  FUN_144b65a50(param_1 + 3);
  if (DAT_14c796628 == (code *)0x0) {
    uVar1 = FUN_144e403e0(local_38);
    FUN_144e40560(param_1 + 7,uVar1);
    puVar2 = local_38;
  }
  else {
    uVar1 = (*DAT_14c796628)(local_58);
    uVar1 = FUN_144e40560(local_78,uVar1);
    FUN_144e40560(param_1 + 7,uVar1);
    FUN_144b65b20(local_78);
    puVar2 = local_58;
  }
  FUN_144b65b20(puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144e40a70 FUN_144e40a70 body=190 status=ok
// SIG undefined FUN_144e40a70(void)

void FUN_144e40a70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  local_80 = param_1;
  uVar1 = FUN_144e47270(param_2);
  FUN_144e40560(param_1 + 3,uVar1);
  if (DAT_14c796628 == (code *)0x0) {
    uVar1 = FUN_144e403e0(local_38);
    FUN_144e40560(param_1 + 7,uVar1);
    puVar2 = local_38;
  }
  else {
    uVar1 = (*DAT_14c796628)(local_58);
    uVar1 = FUN_144e40560(local_78,uVar1);
    FUN_144e40560(param_1 + 7,uVar1);
    FUN_144b65b20(local_78);
    puVar2 = local_58;
  }
  FUN_144b65b20(puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144e40b40 FUN_144e40b40 body=185 status=ok
// SIG undefined FUN_144e40b40(void)

void FUN_144e40b40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  local_80 = param_1;
  FUN_144e47280(param_2,param_1 + 3);
  if (DAT_14c796628 == (code *)0x0) {
    uVar1 = FUN_144e403e0(local_38);
    FUN_144e40560(param_1 + 7,uVar1);
    puVar2 = local_38;
  }
  else {
    uVar1 = (*DAT_14c796628)(local_58);
    uVar1 = FUN_144e40560(local_78,uVar1);
    FUN_144e40560(param_1 + 7,uVar1);
    FUN_144b65b20(local_78);
    puVar2 = local_58;
  }
  FUN_144b65b20(puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144e40c10 FUN_144e40c10 body=80 status=ok
// SIG undefined FUN_144e40c10(void)

undefined8 * FUN_144e40c10(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  return param_1;
}



// FUNCTION 144e40c60 FUN_144e40c60 body=61 status=ok
// SIG undefined FUN_144e40c60(void)

void FUN_144e40c60(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e40ca0 FUN_144e40ca0 body=9 status=ok
// SIG undefined FUN_144e40ca0(void)

void FUN_144e40ca0(longlong param_1)

{
  FUN_144e40830(param_1 + 0x18);
  return;
}



// FUNCTION 144e40cb0 FUN_144e40cb0 body=78 status=ok
// SIG undefined FUN_144e40cb0(void)

void FUN_144e40cb0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144e47280(param_2,local_30);
  FUN_144e40610(param_1 + 0x18,uVar1);
  FUN_144b65b20(local_30);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 144e40d10 FUN_144e40d10 body=94 status=ok
// SIG undefined FUN_144e40d10(void)

undefined8 * FUN_144e40d10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e40d70 FUN_144e40d70 body=33 status=ok
// SIG undefined FUN_144e40d70(void)

undefined8 * FUN_144e40d70(undefined8 *param_1)

{
  FUN_144e408c0();
  *param_1 = Iex_3_2::ArgExc::vftable;
  return param_1;
}



// FUNCTION 144e40da0 FUN_144e40da0 body=47 status=ok
// SIG undefined FUN_144e40da0(void)

undefined8 * FUN_144e40da0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e47270(param_2);
  FUN_144e40a70(param_1,uVar1);
  *param_1 = Iex_3_2::ArgExc::vftable;
  return param_1;
}



// FUNCTION 144e40dd0 FUN_144e40dd0 body=33 status=ok
// SIG undefined FUN_144e40dd0(void)

undefined8 * FUN_144e40dd0(undefined8 *param_1)

{
  FUN_144e40b40();
  *param_1 = Iex_3_2::ArgExc::vftable;
  return param_1;
}



// FUNCTION 144e40e00 FUN_144e40e00 body=90 status=ok
// SIG undefined FUN_144e40e00(void)

undefined8 * FUN_144e40e00(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::ArgExc::vftable;
  return param_1;
}



// FUNCTION 144e40e60 FUN_144e40e60 body=61 status=ok
// SIG undefined FUN_144e40e60(void)

void FUN_144e40e60(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e40ea0 FUN_144e40ea0 body=94 status=ok
// SIG undefined FUN_144e40ea0(void)

undefined8 * FUN_144e40ea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e40f00 FUN_144e40f00 body=33 status=ok
// SIG undefined FUN_144e40f00(void)

undefined8 * FUN_144e40f00(undefined8 *param_1)

{
  FUN_144e408c0();
  *param_1 = Iex_3_2::LogicExc::vftable;
  return param_1;
}



// FUNCTION 144e40f30 FUN_144e40f30 body=33 status=ok
// SIG undefined FUN_144e40f30(void)

undefined8 * FUN_144e40f30(undefined8 *param_1)

{
  FUN_144e40b40();
  *param_1 = Iex_3_2::LogicExc::vftable;
  return param_1;
}



// FUNCTION 144e40f60 FUN_144e40f60 body=90 status=ok
// SIG undefined FUN_144e40f60(void)

undefined8 * FUN_144e40f60(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::LogicExc::vftable;
  return param_1;
}



// FUNCTION 144e40fc0 FUN_144e40fc0 body=61 status=ok
// SIG undefined FUN_144e40fc0(void)

void FUN_144e40fc0(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e41000 FUN_144e41000 body=94 status=ok
// SIG undefined FUN_144e41000(void)

undefined8 * FUN_144e41000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41060 FUN_144e41060 body=33 status=ok
// SIG undefined FUN_144e41060(void)

undefined8 * FUN_144e41060(undefined8 *param_1)

{
  FUN_144e408c0();
  *param_1 = Iex_3_2::InputExc::vftable;
  return param_1;
}



// FUNCTION 144e41090 FUN_144e41090 body=47 status=ok
// SIG undefined FUN_144e41090(void)

undefined8 * FUN_144e41090(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e47270(param_2);
  FUN_144e40a70(param_1,uVar1);
  *param_1 = Iex_3_2::InputExc::vftable;
  return param_1;
}



// FUNCTION 144e410c0 FUN_144e410c0 body=33 status=ok
// SIG undefined FUN_144e410c0(void)

undefined8 * FUN_144e410c0(undefined8 *param_1)

{
  FUN_144e40b40();
  *param_1 = Iex_3_2::InputExc::vftable;
  return param_1;
}



// FUNCTION 144e410f0 FUN_144e410f0 body=90 status=ok
// SIG undefined FUN_144e410f0(void)

undefined8 * FUN_144e410f0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::InputExc::vftable;
  return param_1;
}



// FUNCTION 144e41150 FUN_144e41150 body=61 status=ok
// SIG undefined FUN_144e41150(void)

void FUN_144e41150(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e41190 FUN_144e41190 body=94 status=ok
// SIG undefined FUN_144e41190(void)

undefined8 * FUN_144e41190(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e411f0 FUN_144e411f0 body=33 status=ok
// SIG undefined FUN_144e411f0(void)

undefined8 * FUN_144e411f0(undefined8 *param_1)

{
  FUN_144e408c0();
  *param_1 = Iex_3_2::IoExc::vftable;
  return param_1;
}



// FUNCTION 144e41220 FUN_144e41220 body=33 status=ok
// SIG undefined FUN_144e41220(void)

undefined8 * FUN_144e41220(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::IoExc::vftable;
  return param_1;
}



// FUNCTION 144e41250 FUN_144e41250 body=90 status=ok
// SIG undefined FUN_144e41250(void)

undefined8 * FUN_144e41250(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::IoExc::vftable;
  return param_1;
}



// FUNCTION 144e412b0 FUN_144e412b0 body=61 status=ok
// SIG undefined FUN_144e412b0(void)

void FUN_144e412b0(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e412f0 FUN_144e412f0 body=94 status=ok
// SIG undefined FUN_144e412f0(void)

undefined8 * FUN_144e412f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41350 FUN_144e41350 body=90 status=ok
// SIG undefined FUN_144e41350(void)

undefined8 * FUN_144e41350(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::MathExc::vftable;
  return param_1;
}



// FUNCTION 144e413b0 FUN_144e413b0 body=94 status=ok
// SIG undefined FUN_144e413b0(void)

undefined8 * FUN_144e413b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41410 FUN_144e41410 body=33 status=ok
// SIG undefined FUN_144e41410(void)

undefined8 * FUN_144e41410(undefined8 *param_1)

{
  FUN_144e408c0();
  *param_1 = Iex_3_2::ErrnoExc::vftable;
  return param_1;
}



// FUNCTION 144e41440 FUN_144e41440 body=33 status=ok
// SIG undefined FUN_144e41440(void)

undefined8 * FUN_144e41440(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::ErrnoExc::vftable;
  return param_1;
}



// FUNCTION 144e41470 FUN_144e41470 body=90 status=ok
// SIG undefined FUN_144e41470(void)

undefined8 * FUN_144e41470(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::ErrnoExc::vftable;
  return param_1;
}



// FUNCTION 144e414d0 FUN_144e414d0 body=61 status=ok
// SIG undefined FUN_144e414d0(void)

void FUN_144e414d0(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e41510 FUN_144e41510 body=94 status=ok
// SIG undefined FUN_144e41510(void)

undefined8 * FUN_144e41510(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41570 FUN_144e41570 body=33 status=ok
// SIG undefined FUN_144e41570(void)

undefined8 * FUN_144e41570(undefined8 *param_1)

{
  FUN_144e408c0();
  *param_1 = Iex_3_2::NoImplExc::vftable;
  return param_1;
}



// FUNCTION 144e415a0 FUN_144e415a0 body=90 status=ok
// SIG undefined FUN_144e415a0(void)

undefined8 * FUN_144e415a0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::NoImplExc::vftable;
  return param_1;
}



// FUNCTION 144e41600 FUN_144e41600 body=61 status=ok
// SIG undefined FUN_144e41600(void)

void FUN_144e41600(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e41640 FUN_144e41640 body=94 status=ok
// SIG undefined FUN_144e41640(void)

undefined8 * FUN_144e41640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e416a0 FUN_144e416a0 body=33 status=ok
// SIG undefined FUN_144e416a0(void)

undefined8 * FUN_144e416a0(undefined8 *param_1)

{
  FUN_144e408c0();
  *param_1 = Iex_3_2::TypeExc::vftable;
  return param_1;
}



// FUNCTION 144e416d0 FUN_144e416d0 body=33 status=ok
// SIG undefined FUN_144e416d0(void)

undefined8 * FUN_144e416d0(undefined8 *param_1)

{
  FUN_144e40b40();
  *param_1 = Iex_3_2::TypeExc::vftable;
  return param_1;
}



// FUNCTION 144e41700 FUN_144e41700 body=90 status=ok
// SIG undefined FUN_144e41700(void)

undefined8 * FUN_144e41700(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::TypeExc::vftable;
  return param_1;
}



// FUNCTION 144e41760 FUN_144e41760 body=61 status=ok
// SIG undefined FUN_144e41760(void)

void FUN_144e41760(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e417a0 FUN_144e417a0 body=94 status=ok
// SIG undefined FUN_144e417a0(void)

undefined8 * FUN_144e417a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41800 FUN_144e41800 body=33 status=ok
// SIG undefined FUN_144e41800(void)

undefined8 * FUN_144e41800(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EpermExc::vftable;
  return param_1;
}



// FUNCTION 144e41830 FUN_144e41830 body=90 status=ok
// SIG undefined FUN_144e41830(void)

undefined8 * FUN_144e41830(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EpermExc::vftable;
  return param_1;
}



// FUNCTION 144e41890 FUN_144e41890 body=61 status=ok
// SIG undefined FUN_144e41890(void)

void FUN_144e41890(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e418d0 FUN_144e418d0 body=94 status=ok
// SIG undefined FUN_144e418d0(void)

undefined8 * FUN_144e418d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41930 FUN_144e41930 body=33 status=ok
// SIG undefined FUN_144e41930(void)

undefined8 * FUN_144e41930(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EnoentExc::vftable;
  return param_1;
}



// FUNCTION 144e41960 FUN_144e41960 body=90 status=ok
// SIG undefined FUN_144e41960(void)

undefined8 * FUN_144e41960(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EnoentExc::vftable;
  return param_1;
}



// FUNCTION 144e419c0 FUN_144e419c0 body=61 status=ok
// SIG undefined FUN_144e419c0(void)

void FUN_144e419c0(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e41a00 FUN_144e41a00 body=94 status=ok
// SIG undefined FUN_144e41a00(void)

undefined8 * FUN_144e41a00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41a60 FUN_144e41a60 body=33 status=ok
// SIG undefined FUN_144e41a60(void)

undefined8 * FUN_144e41a60(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EsrchExc::vftable;
  return param_1;
}



// FUNCTION 144e41a90 FUN_144e41a90 body=90 status=ok
// SIG undefined FUN_144e41a90(void)

undefined8 * FUN_144e41a90(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EsrchExc::vftable;
  return param_1;
}



// FUNCTION 144e41af0 FUN_144e41af0 body=61 status=ok
// SIG undefined FUN_144e41af0(void)

void FUN_144e41af0(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e41b30 FUN_144e41b30 body=94 status=ok
// SIG undefined FUN_144e41b30(void)

undefined8 * FUN_144e41b30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41b90 FUN_144e41b90 body=33 status=ok
// SIG undefined FUN_144e41b90(void)

undefined8 * FUN_144e41b90(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EintrExc::vftable;
  return param_1;
}



// FUNCTION 144e41bc0 FUN_144e41bc0 body=90 status=ok
// SIG undefined FUN_144e41bc0(void)

undefined8 * FUN_144e41bc0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EintrExc::vftable;
  return param_1;
}



// FUNCTION 144e41c20 FUN_144e41c20 body=61 status=ok
// SIG undefined FUN_144e41c20(void)

void FUN_144e41c20(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e41c60 FUN_144e41c60 body=94 status=ok
// SIG undefined FUN_144e41c60(void)

undefined8 * FUN_144e41c60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41cc0 FUN_144e41cc0 body=33 status=ok
// SIG undefined FUN_144e41cc0(void)

undefined8 * FUN_144e41cc0(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EioExc::vftable;
  return param_1;
}



// FUNCTION 144e41cf0 FUN_144e41cf0 body=90 status=ok
// SIG undefined FUN_144e41cf0(void)

undefined8 * FUN_144e41cf0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EioExc::vftable;
  return param_1;
}



// FUNCTION 144e41d50 FUN_144e41d50 body=61 status=ok
// SIG undefined FUN_144e41d50(void)

void FUN_144e41d50(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e41d90 FUN_144e41d90 body=94 status=ok
// SIG undefined FUN_144e41d90(void)

undefined8 * FUN_144e41d90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41df0 FUN_144e41df0 body=33 status=ok
// SIG undefined FUN_144e41df0(void)

undefined8 * FUN_144e41df0(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EnxioExc::vftable;
  return param_1;
}



// FUNCTION 144e41e20 FUN_144e41e20 body=90 status=ok
// SIG undefined FUN_144e41e20(void)

undefined8 * FUN_144e41e20(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EnxioExc::vftable;
  return param_1;
}



// FUNCTION 144e41e80 FUN_144e41e80 body=61 status=ok
// SIG undefined FUN_144e41e80(void)

void FUN_144e41e80(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e41ec0 FUN_144e41ec0 body=94 status=ok
// SIG undefined FUN_144e41ec0(void)

undefined8 * FUN_144e41ec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e41f20 FUN_144e41f20 body=33 status=ok
// SIG undefined FUN_144e41f20(void)

undefined8 * FUN_144e41f20(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::E2bigExc::vftable;
  return param_1;
}



// FUNCTION 144e41f50 FUN_144e41f50 body=90 status=ok
// SIG undefined FUN_144e41f50(void)

undefined8 * FUN_144e41f50(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::E2bigExc::vftable;
  return param_1;
}



// FUNCTION 144e41fb0 FUN_144e41fb0 body=61 status=ok
// SIG undefined FUN_144e41fb0(void)

void FUN_144e41fb0(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e41ff0 FUN_144e41ff0 body=94 status=ok
// SIG undefined FUN_144e41ff0(void)

undefined8 * FUN_144e41ff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e42050 FUN_144e42050 body=33 status=ok
// SIG undefined FUN_144e42050(void)

undefined8 * FUN_144e42050(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EnoexecExc::vftable;
  return param_1;
}



// FUNCTION 144e42080 FUN_144e42080 body=90 status=ok
// SIG undefined FUN_144e42080(void)

undefined8 * FUN_144e42080(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EnoexecExc::vftable;
  return param_1;
}



// FUNCTION 144e420e0 FUN_144e420e0 body=61 status=ok
// SIG undefined FUN_144e420e0(void)

void FUN_144e420e0(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e42120 FUN_144e42120 body=94 status=ok
// SIG undefined FUN_144e42120(void)

undefined8 * FUN_144e42120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e42180 FUN_144e42180 body=33 status=ok
// SIG undefined FUN_144e42180(void)

undefined8 * FUN_144e42180(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EbadfExc::vftable;
  return param_1;
}



// FUNCTION 144e421b0 FUN_144e421b0 body=90 status=ok
// SIG undefined FUN_144e421b0(void)

undefined8 * FUN_144e421b0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EbadfExc::vftable;
  return param_1;
}



// FUNCTION 144e42210 FUN_144e42210 body=61 status=ok
// SIG undefined FUN_144e42210(void)

void FUN_144e42210(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e42250 FUN_144e42250 body=94 status=ok
// SIG undefined FUN_144e42250(void)

undefined8 * FUN_144e42250(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e422b0 FUN_144e422b0 body=33 status=ok
// SIG undefined FUN_144e422b0(void)

undefined8 * FUN_144e422b0(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EchildExc::vftable;
  return param_1;
}



// FUNCTION 144e422e0 FUN_144e422e0 body=90 status=ok
// SIG undefined FUN_144e422e0(void)

undefined8 * FUN_144e422e0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EchildExc::vftable;
  return param_1;
}



// FUNCTION 144e42340 FUN_144e42340 body=61 status=ok
// SIG undefined FUN_144e42340(void)

void FUN_144e42340(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e42380 FUN_144e42380 body=94 status=ok
// SIG undefined FUN_144e42380(void)

undefined8 * FUN_144e42380(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e423e0 FUN_144e423e0 body=33 status=ok
// SIG undefined FUN_144e423e0(void)

undefined8 * FUN_144e423e0(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EagainExc::vftable;
  return param_1;
}



// FUNCTION 144e42410 FUN_144e42410 body=90 status=ok
// SIG undefined FUN_144e42410(void)

undefined8 * FUN_144e42410(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EagainExc::vftable;
  return param_1;
}



// FUNCTION 144e42470 FUN_144e42470 body=61 status=ok
// SIG undefined FUN_144e42470(void)

void FUN_144e42470(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e424b0 FUN_144e424b0 body=94 status=ok
// SIG undefined FUN_144e424b0(void)

undefined8 * FUN_144e424b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e42510 FUN_144e42510 body=33 status=ok
// SIG undefined FUN_144e42510(void)

undefined8 * FUN_144e42510(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EnomemExc::vftable;
  return param_1;
}



// FUNCTION 144e42540 FUN_144e42540 body=90 status=ok
// SIG undefined FUN_144e42540(void)

undefined8 * FUN_144e42540(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EnomemExc::vftable;
  return param_1;
}



// FUNCTION 144e425a0 FUN_144e425a0 body=61 status=ok
// SIG undefined FUN_144e425a0(void)

void FUN_144e425a0(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e425e0 FUN_144e425e0 body=94 status=ok
// SIG undefined FUN_144e425e0(void)

undefined8 * FUN_144e425e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e42640 FUN_144e42640 body=33 status=ok
// SIG undefined FUN_144e42640(void)

undefined8 * FUN_144e42640(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EaccesExc::vftable;
  return param_1;
}



// FUNCTION 144e42670 FUN_144e42670 body=90 status=ok
// SIG undefined FUN_144e42670(void)

undefined8 * FUN_144e42670(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EaccesExc::vftable;
  return param_1;
}



// FUNCTION 144e426d0 FUN_144e426d0 body=61 status=ok
// SIG undefined FUN_144e426d0(void)

void FUN_144e426d0(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e42710 FUN_144e42710 body=94 status=ok
// SIG undefined FUN_144e42710(void)

undefined8 * FUN_144e42710(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e42770 FUN_144e42770 body=33 status=ok
// SIG undefined FUN_144e42770(void)

undefined8 * FUN_144e42770(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EfaultExc::vftable;
  return param_1;
}



// FUNCTION 144e427a0 FUN_144e427a0 body=90 status=ok
// SIG undefined FUN_144e427a0(void)

undefined8 * FUN_144e427a0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EfaultExc::vftable;
  return param_1;
}



// FUNCTION 144e42800 FUN_144e42800 body=61 status=ok
// SIG undefined FUN_144e42800(void)

void FUN_144e42800(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e42840 FUN_144e42840 body=94 status=ok
// SIG undefined FUN_144e42840(void)

undefined8 * FUN_144e42840(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e428a0 FUN_144e428a0 body=33 status=ok
// SIG undefined FUN_144e428a0(void)

undefined8 * FUN_144e428a0(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EbusyExc::vftable;
  return param_1;
}



// FUNCTION 144e428d0 FUN_144e428d0 body=90 status=ok
// SIG undefined FUN_144e428d0(void)

undefined8 * FUN_144e428d0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EbusyExc::vftable;
  return param_1;
}



// FUNCTION 144e42930 FUN_144e42930 body=61 status=ok
// SIG undefined FUN_144e42930(void)

void FUN_144e42930(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e42970 FUN_144e42970 body=94 status=ok
// SIG undefined FUN_144e42970(void)

undefined8 * FUN_144e42970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e429d0 FUN_144e429d0 body=33 status=ok
// SIG undefined FUN_144e429d0(void)

undefined8 * FUN_144e429d0(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::EexistExc::vftable;
  return param_1;
}



// FUNCTION 144e42a00 FUN_144e42a00 body=90 status=ok
// SIG undefined FUN_144e42a00(void)

undefined8 * FUN_144e42a00(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::EexistExc::vftable;
  return param_1;
}



// FUNCTION 144e42a60 FUN_144e42a60 body=61 status=ok
// SIG undefined FUN_144e42a60(void)

void FUN_144e42a60(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 144e42aa0 FUN_144e42aa0 body=94 status=ok
// SIG undefined FUN_144e42aa0(void)

undefined8 * FUN_144e42aa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144e42b00 FUN_144e42b00 body=33 status=ok
// SIG undefined FUN_144e42b00(void)

undefined8 * FUN_144e42b00(undefined8 *param_1)

{
  FUN_144e409a0();
  *param_1 = Iex_3_2::ExdevExc::vftable;
  return param_1;
}



// FUNCTION 144e42b30 FUN_144e42b30 body=90 status=ok
// SIG undefined FUN_144e42b30(void)

undefined8 * FUN_144e42b30(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65a50(param_1 + 3,param_2 + 0x18);
  FUN_144b65a50(param_1 + 7,param_2 + 0x38);
  *param_1 = Iex_3_2::ExdevExc::vftable;
  return param_1;
}



// FUNCTION 144e42b90 FUN_144e42b90 body=61 status=ok
// SIG undefined FUN_144e42b90(void)

void FUN_144e42b90(undefined8 *param_1)

{
  *param_1 = Iex_3_2::BaseExc::vftable;
  FUN_144b65b20(param_1 + 7);
  FUN_144b65b20(param_1 + 3);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}


