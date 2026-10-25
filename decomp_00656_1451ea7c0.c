// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1451ea7c0 FUN_1451ea7c0 body=182 status=ok
// SIG undefined FUN_1451ea7c0(void)

undefined8 FUN_1451ea7c0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 == 1) {
    uVar3 = 6;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        return 1;
      }
      cVar1 = FUN_144e2c5c0(param_2,param_1,10);
      if (((cVar1 != '\0') && (cVar1 = FUN_1451e3de0(param_1 + 6,param_2,param_1), cVar1 != '\0'))
         && (cVar1 = FUN_1451e3de0(param_1 + 8,param_2,param_1), cVar1 != '\0')) {
        return 1;
      }
      return 0;
    }
    uVar3 = 8;
  }
  uVar3 = FUN_144e2c5c0(param_2,param_1,uVar3);
  return uVar3;
}



// FUNCTION 1451ea880 FUN_1451ea880 body=218 status=ok
// SIG undefined FUN_1451ea880(void)

byte * FUN_1451ea880(byte *param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  byte *pbVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  *param_5 = 0;
  if ((param_2 < (uint)*param_1 * 0x100 + (uint)param_1[1]) && (param_3 < param_4)) {
    pbVar1 = param_1 + 2;
    pbVar4 = &DAT_149a1f1a0;
    lVar2 = (ulonglong)(param_2 * param_4 + param_3) * 2;
    pbVar3 = &DAT_149a1f1a0;
    if (pbVar1 <= pbVar1 + lVar2) {
      pbVar3 = pbVar1 + lVar2;
    }
    *param_5 = (ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 0;
    pbVar3 = &DAT_149a1f1a0;
    if (pbVar1 <= pbVar1 + lVar2) {
      pbVar3 = pbVar1 + lVar2;
    }
    if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 0) {
      pbVar4 = param_1 + (ulonglong)pbVar3[1] + (ulonglong)*pbVar3 * 0x100;
    }
    return pbVar4;
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 1451ea960 FUN_1451ea960 body=228 status=ok
// SIG undefined FUN_1451ea960(void)

undefined8 FUN_1451ea960(byte *param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  
  cVar2 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar2 == '\0') ||
     ((param_3 != 0 &&
      ((uint)(0xffffffff / (ulonglong)param_3) <= (uint)*param_1 * 0x100 + (uint)param_1[1])))) {
    return 0;
  }
  param_3 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) * param_3;
  if (param_3 < 0x7fffffff) {
    pbVar1 = param_1 + 2;
    cVar2 = FUN_144e2c5c0(param_2,pbVar1,param_3 * 2);
    if (cVar2 != '\0') {
      uVar4 = 0;
      if (param_3 != 0) {
        do {
          pbVar3 = &DAT_149a1f1a0;
          if (pbVar1 <= pbVar1 + (ulonglong)uVar4 * 2) {
            pbVar3 = pbVar1 + (ulonglong)uVar4 * 2;
          }
          cVar2 = FUN_1451eaaf0(pbVar3,param_2,param_1);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_3);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451eaa50 FUN_1451eaa50 body=151 status=ok
// SIG undefined FUN_1451eaa50(void)

bool FUN_1451eaa50(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451eaaf0 FUN_1451eaaf0 body=149 status=ok
// SIG undefined FUN_1451eaaf0(void)

undefined8 FUN_1451eaaf0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451eaa50();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (cVar1 = FUN_1451ea7c0((ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],param_2),
     cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 1451eab90 FUN_1451eab90 body=430 status=ok
// SIG undefined FUN_1451eab90(void)

undefined8 FUN_1451eab90(byte *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  
  cVar2 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar2 == '\0') ||
     (cVar2 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 4),
     cVar2 == '\0')) {
    return 0;
  }
  uVar6 = 0;
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar4 != 0) {
    do {
      pbVar7 = param_1 + uVar6 * 4 + 2;
      if ((((pbVar7 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < pbVar7)) ||
          ((uint)(param_2[4] - (int)pbVar7) < 4)) ||
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
      FUN_1451e0950("SANITIZE",pbVar7,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",pbVar7,pbVar7 + 4,4,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if ((cVar2 == '\0') || (cVar2 = FUN_1451eaaf0(pbVar7 + 2,param_2,param_3), cVar2 == '\0')) {
        return 0;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar4);
  }
  return 1;
}



// FUNCTION 1451ead40 FUN_1451ead40 body=642 status=ok
// SIG undefined FUN_1451ead40(void)

ulonglong FUN_1451ead40(byte *param_1,longlong param_2,uint param_3,undefined4 param_4,
                       undefined8 param_5,undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  double dVar8;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [4];
  float local_38 [4];
  
  pbVar7 = &DAT_149a1f1a0;
  lVar2 = *(longlong *)(param_2 + 0x90);
  if (param_3 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
    pbVar5 = param_1 + (ulonglong)param_3 * 4 + 2;
  }
  else {
    pbVar5 = &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)pbVar5[2] * 0x100 + (ushort)pbVar5[3]) != 0) {
    pbVar7 = param_1 + (ulonglong)pbVar5[3] + (ulonglong)pbVar5[2] * 0x100;
  }
  pbVar5 = (byte *)FUN_1451ea880(param_5,param_4,(uint)*pbVar5 * 0x100 + (uint)pbVar5[1],param_6,
                                 local_res18);
  if (local_res18[0]._0_1_ == '\0') {
    return (ulonglong)pbVar5 & 0xffffffffffffff00;
  }
  if (1 < *(int *)(lVar2 + 0x5c) - param_7) {
    FUN_144b620d0(lVar2,param_7);
  }
  local_38[0] = 0.0;
  local_res8[0] = 0.0;
  uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x70) + (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14);
  iVar6 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
  if (iVar6 == 1) {
    FUN_1451ea280(pbVar7,param_2,uVar1,local_res8,local_38);
  }
  else if (iVar6 == 2) {
    FUN_1451ea370(pbVar7,param_2,uVar1,local_res8,local_38);
  }
  else if (iVar6 == 3) {
    FUN_1451ea560(pbVar7,param_2,uVar1,local_res8,local_38);
  }
  local_res10[0] = 0.0;
  local_res18[0] = 0.0;
  uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x70) + (ulonglong)param_7 * 0x14);
  iVar6 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
  if (iVar6 == 1) {
    FUN_1451ea280(pbVar5,param_2,uVar1,local_res18,local_res10);
  }
  else if (iVar6 == 2) {
    FUN_1451ea370(pbVar5,param_2,uVar1,local_res18,local_res10);
  }
  else if (iVar6 == 3) {
    FUN_1451ea560(pbVar5,param_2,uVar1,local_res18,local_res10);
  }
  uVar4 = (ulonglong)*(uint *)(lVar2 + 0x5c);
  lVar3 = *(longlong *)(lVar2 + 0x80);
  dVar8 = (double)round((double)(local_res18[0] - local_res8[0]));
  *(int *)(lVar3 + 8 + uVar4 * 0x14) = (int)dVar8;
  dVar8 = (double)round((double)(local_res10[0] - local_38[0]));
  *(int *)(lVar3 + 0xc + uVar4 * 0x14) = (int)dVar8;
  *(undefined1 *)(lVar3 + 0x12 + uVar4 * 0x14) = 1;
  *(short *)(lVar3 + 0x10 + uVar4 * 0x14) = (short)param_7 - *(short *)(lVar2 + 0x5c);
  *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) | 8;
  *(int *)(lVar2 + 0x5c) = *(int *)(lVar2 + 0x5c) + 1;
  return CONCAT71((uint7)(uint3)((uint)(int)dVar8 >> 8),1);
}



// FUNCTION 1451eafd0 FUN_1451eafd0 body=223 status=ok
// SIG undefined FUN_1451eafd0(void)

undefined8 FUN_1451eafd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x90);
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  iVar3 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (iVar3 == 1) {
    iVar3 = FUN_1451e2130(pbVar2,*(undefined4 *)
                                  (*(longlong *)(lVar1 + 0x70) +
                                  (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14));
  }
  else {
    if (iVar3 != 2) {
      return 0;
    }
    iVar3 = FUN_1451e22a0();
  }
  if (iVar3 == -1) {
    return 0;
  }
  FUN_1451e9b60(param_1 + 4,param_2,param_1,param_1 + 6,
                *(longlong *)(lVar1 + 0x80) + (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14);
  *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + 1;
  return 1;
}



// FUNCTION 1451eb0b0 FUN_1451eb0b0 body=358 status=ok
// SIG undefined FUN_1451eb0b0(void)

undefined8 FUN_1451eb0b0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  
  lVar2 = *(longlong *)(param_2 + 0x90);
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar5 = &DAT_149a1f1a0;
  }
  else {
    pbVar5 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  iVar8 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
  if (iVar8 == 1) {
    uVar3 = FUN_1451e2130(pbVar5,*(undefined4 *)
                                  (*(longlong *)(lVar2 + 0x70) +
                                  (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14));
  }
  else {
    if (iVar8 != 2) {
      return 0;
    }
    uVar3 = FUN_1451e22a0();
  }
  if ((uVar3 != 0xffffffff) &&
     (uVar3 < (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7))) {
    uVar6 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
    uVar4 = uVar6 >> 1 & 0x5b6db6db;
    uVar4 = (uVar6 - (uVar4 >> 1 & 0x5b6db6db)) - uVar4;
    puVar1 = (undefined1 *)(param_1 + 8) +
             (ulonglong)((((uVar4 >> 3) + uVar4 & 0xc71c71c7) % 0x3f) * uVar3) * 2;
    puVar7 = &DAT_149a1f1a0;
    if ((undefined1 *)(param_1 + 8) <= puVar1) {
      puVar7 = puVar1;
    }
    FUN_1451e9b60(param_1 + 4,param_2,param_1,puVar7,
                  *(longlong *)(lVar2 + 0x80) + (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14);
    *(int *)(lVar2 + 0x5c) = *(int *)(lVar2 + 0x5c) + 1;
    return 1;
  }
  return 0;
}



// FUNCTION 1451eb220 FUN_1451eb220 body=122 status=ok
// SIG undefined FUN_1451eb220(void)

undefined8 FUN_1451eb220(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,8);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451ea080(param_1 + 4,param_2,param_1,param_1 + 8,
                            (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7));
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451eb2a0 FUN_1451eb2a0 body=558 status=ok
// SIG undefined FUN_1451eb2a0(void)

ulonglong FUN_1451eb2a0(byte *param_1,longlong param_2,byte *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_2 + 0x90);
  uVar16 = (uint)*param_3 * 0x100 + (uint)param_3[1];
  uVar15 = uVar16 >> 1 & 0x5b6db6db;
  uVar15 = (uVar16 - (uVar15 >> 1 & 0x5b6db6db)) - uVar15;
  uVar12 = ((uVar15 >> 3) + uVar15 & 0xc71c71c7) % 0x3f;
  uVar16 = (uint)param_3[2] * 0x100 + (uint)param_3[3];
  uVar15 = uVar16 >> 1 & 0x5b6db6db;
  uVar15 = (uVar16 - (uVar15 >> 1 & 0x5b6db6db)) - uVar15;
  uVar15 = ((uVar15 >> 3) + uVar15 & 0xc71c71c7) % 0x3f;
  iVar11 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar11 == 0) {
    return 0;
  }
  uVar7 = *(ulonglong *)(lVar2 + 0x70);
  iVar13 = 0;
  iVar11 = iVar11 + -1;
  lVar1 = (ulonglong)param_4 * 0x14;
  uVar16 = *(uint *)(lVar1 + uVar7);
  if (-1 < iVar11) {
    do {
      uVar8 = (uint)(iVar11 + iVar13) >> 1;
      uVar9 = uVar8 * ((uVar15 + uVar12) * 2 + 2);
      uVar6 = (uint)param_1[(ulonglong)uVar9 + 2] * 0x100 + (uint)param_1[(ulonglong)uVar9 + 3];
      uVar7 = (ulonglong)uVar6;
      if (uVar16 < uVar6) {
        iVar11 = uVar8 - 1;
      }
      else {
        if (uVar16 <= uVar6) {
          lVar3 = *(longlong *)(lVar2 + 0x80);
          uVar16 = *(uint *)(lVar2 + 0x5c);
          pbVar10 = param_1 + (ulonglong)uVar9 + 4;
          pbVar14 = &DAT_149a1f1a0;
          if (pbVar10 <= pbVar10 + (ulonglong)uVar12 * 2) {
            pbVar14 = pbVar10 + (ulonglong)uVar12 * 2;
          }
          cVar4 = FUN_1451e9b60(param_3 + 2,param_2,param_1,pbVar14,lVar3 + lVar1);
          cVar5 = FUN_1451e9b60(param_3,param_2,param_1,pbVar10,lVar3 + (ulonglong)uVar16 * 0x14);
          if ((cVar4 != '\0' || cVar5 != '\0') && (1 < (param_4 + 1) - *(int *)(lVar2 + 0x5c))) {
            FUN_144b620d0(lVar2);
          }
          uVar7 = (ulonglong)(param_4 + 1);
          if (uVar15 == 0) {
            uVar7 = (ulonglong)param_4;
          }
          *(int *)(lVar2 + 0x5c) = (int)uVar7;
          return CONCAT71((int7)(uVar7 >> 8),1);
        }
        iVar13 = uVar8 + 1;
      }
    } while (iVar13 <= iVar11);
  }
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 1451eb4d0 FUN_1451eb4d0 body=271 status=ok
// SIG undefined FUN_1451eb4d0(void)

undefined8 FUN_1451eb4d0(byte *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  cVar3 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar3 != '\0') {
    uVar1 = *(uint *)((longlong)param_3 + 0x14);
    uVar2 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2;
    if (((uVar1 == 0) || (uVar2 < (uint)(0xffffffff / (ulonglong)uVar1))) &&
       (cVar3 = FUN_144e2c5c0(param_2,param_1 + 2,uVar2 * uVar1), cVar3 != '\0')) {
      pbVar6 = param_1 + 4;
      iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      cVar3 = FUN_1451ea1e0(param_3[1],param_2,*param_3,pbVar6,iVar4,
                            *(undefined4 *)((longlong)param_3 + 0x14));
      if (cVar3 != '\0') {
        pbVar5 = &DAT_149a1f1a0;
        if (pbVar6 <= pbVar6 + (ulonglong)*(uint *)(param_3 + 2) * 2) {
          pbVar5 = pbVar6 + (ulonglong)*(uint *)(param_3 + 2) * 2;
        }
        cVar3 = FUN_1451ea1e0(param_3[1] + 2,param_2,*param_3,pbVar5,iVar4,
                              *(undefined4 *)((longlong)param_3 + 0x14));
        if (cVar3 != '\0') {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1451eb5e0 FUN_1451eb5e0 body=380 status=ok
// SIG undefined FUN_1451eb5e0(void)

ulonglong FUN_1451eb5e0(longlong param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_2 + 0x24);
  puVar6 = &DAT_149a1f1a0;
  uVar5 = 0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar4 = &DAT_149a1f1a0;
  }
  else {
    pbVar4 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  iVar7 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
  if (iVar7 == 1) {
    uVar2 = FUN_1451e2130(pbVar4,*(undefined4 *)
                                  (*(longlong *)(lVar1 + 0x70) +
                                  (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14));
  }
  else {
    uVar3 = 0;
    if (iVar7 != 2) goto LAB_1451eb689;
    uVar2 = FUN_1451e22a0();
  }
  uVar3 = uVar2;
  if ((uint)uVar2 != 0xffffffff) {
    iVar7 = *(int *)(lVar1 + 0x5c);
    *param_2 = iVar7;
    param_2[0xe] = 1;
    param_2[0xf] = *(int *)(*(longlong *)(*(longlong *)(param_2 + 2) + 0x90) + 0x60);
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 2) + 0x90);
    if (iVar7 == *(int *)(lVar1 + 0x5c)) {
      uVar5 = *(undefined1 *)
               (*(longlong *)(lVar1 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14);
    }
    *(undefined1 *)(param_2 + 7) = uVar5;
    uVar3 = FUN_1451e5340(param_2);
    if ((char)uVar3 != '\0') {
      if ((uint)uVar2 < (uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9)) {
        pbVar4 = (byte *)(param_1 + ((uVar2 & 0xffffffff) + 5) * 2);
      }
      else {
        pbVar4 = &DAT_149a1f1a0;
      }
      if ((ushort)((ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1]) != 0) {
        puVar6 = (undefined1 *)((ulonglong)*pbVar4 * 0x100 + param_1 + (ulonglong)pbVar4[1]);
      }
      uVar2 = FUN_1451eb2a0(puVar6,param_2,param_1 + 4,*param_2);
      return uVar2;
    }
  }
LAB_1451eb689:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1451eb760 FUN_1451eb760 body=300 status=ok
// SIG undefined FUN_1451eb760(void)

undefined8 FUN_1451eb760(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong local_28;
  longlong local_20;
  uint local_18;
  int local_14;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,10);
  if (cVar1 != '\0') {
    local_20 = param_1 + 4;
    uVar3 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
    uVar2 = uVar3 >> 1 & 0x5b6db6db;
    uVar2 = (uVar3 - (uVar2 >> 1 & 0x5b6db6db)) - uVar2;
    local_18 = ((uVar2 >> 3) + uVar2 & 0xc71c71c7) % 0x3f;
    uVar3 = (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7);
    uVar2 = uVar3 >> 1 & 0x5b6db6db;
    uVar2 = (uVar3 - (uVar2 >> 1 & 0x5b6db6db)) - uVar2;
    local_14 = local_18 + 1 + ((uVar2 >> 3) + uVar2 & 0xc71c71c7) % 0x3f;
    local_28 = param_1;
    cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451eb930(param_1 + 8,param_2,param_1,&local_28);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451eb890 FUN_1451eb890 body=151 status=ok
// SIG undefined FUN_1451eb890(void)

bool FUN_1451eb890(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451eb930 FUN_1451eb930 body=299 status=ok
// SIG undefined FUN_1451eb930(void)

undefined8 FUN_1451eb930(byte *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar2 = param_1 + 2;
    cVar1 = FUN_144e2c5c0(param_2,pbVar2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      uVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (uVar3 != 0) {
        do {
          cVar1 = FUN_1451eb890(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) &&
             (cVar1 = FUN_1451eb4d0((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1],
                                    param_2,param_4), cVar1 == '\0')) {
            cVar1 = FUN_144e2d280(param_2,pbVar2,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar2[0] = 0;
            pbVar2[1] = 0;
          }
          uVar4 = uVar4 + 1;
          pbVar2 = pbVar2 + 2;
        } while (uVar4 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451eba60 FUN_1451eba60 body=807 status=ok
// SIG undefined FUN_1451eba60(void)

ulonglong FUN_1451eba60(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  
  lVar2 = *(longlong *)(param_2 + 0x24);
  uVar10 = 0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar8 = &DAT_149a1f1a0;
  }
  else {
    pbVar8 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  uVar6 = 0;
  iVar12 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
  if (iVar12 == 1) {
    uVar6 = FUN_1451e2130(pbVar8,*(undefined4 *)
                                  (*(longlong *)(lVar2 + 0x70) +
                                  (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14));
  }
  else {
    if (iVar12 != 2) goto LAB_1451ebaee;
    uVar6 = FUN_1451e22a0();
  }
  if ((int)uVar6 != -1) {
    uVar7 = *(uint *)(lVar2 + 0x5c);
    *param_2 = uVar7;
    param_2[0xe] = 1;
    param_2[0xf] = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 2) + 0x90) + 0x60);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 2) + 0x90);
    if (uVar7 == *(uint *)(lVar3 + 0x5c)) {
      uVar10 = *(undefined1 *)
                (*(longlong *)(lVar3 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14);
    }
    *(undefined1 *)(param_2 + 7) = uVar10;
    uVar6 = FUN_1451e5340(param_2);
    if ((char)uVar6 != '\0') {
      uVar11 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
      uVar7 = uVar11 >> 1 & 0x5b6db6db;
      uVar7 = (uVar11 - (uVar7 >> 1 & 0x5b6db6db)) - uVar7;
      uVar13 = ((uVar7 >> 3) + uVar7 & 0xc71c71c7) % 0x3f;
      uVar11 = (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100;
      uVar7 = uVar11 >> 1 & 0x5b6db6db;
      uVar7 = (uVar11 - (uVar7 >> 1 & 0x5b6db6db)) - uVar7;
      uVar7 = ((uVar7 >> 3) + uVar7 & 0xc71c71c7) % 0x3f;
      if ((ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) == 0) {
        puVar9 = &DAT_149a1f1a0;
      }
      else {
        puVar9 = (undefined1 *)
                 ((ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1 +
                 (ulonglong)*(byte *)(param_1 + 9));
      }
      uVar11 = FUN_1451e2580(puVar9,*(undefined4 *)
                                     (*(longlong *)(lVar2 + 0x70) +
                                     (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14));
      if ((ushort)((ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb)) == 0)
      {
        puVar9 = &DAT_149a1f1a0;
      }
      else {
        puVar9 = (undefined1 *)
                 ((ulonglong)*(byte *)(param_1 + 10) * 0x100 + param_1 +
                 (ulonglong)*(byte *)(param_1 + 0xb));
      }
      uVar6 = FUN_1451e2580(puVar9,*(undefined4 *)
                                    (*(longlong *)(lVar2 + 0x70) + (ulonglong)*param_2 * 0x14));
      if ((uVar11 < (uint)*(byte *)(param_1 + 0xc) * 0x100 + (uint)*(byte *)(param_1 + 0xd)) &&
         ((uint)uVar6 < (uint)*(byte *)(param_1 + 0xe) * 0x100 + (uint)*(byte *)(param_1 + 0xf))) {
        uVar1 = *(uint *)(lVar2 + 0x5c);
        puVar9 = (undefined1 *)(param_1 + 0x10) +
                 (ulonglong)
                 ((((uint)*(byte *)(param_1 + 0xe) * 0x100 + (uint)*(byte *)(param_1 + 0xf)) *
                   uVar11 + (uint)uVar6) * (uVar7 + uVar13)) * 2;
        lVar3 = *(longlong *)(lVar2 + 0x80);
        puVar14 = &DAT_149a1f1a0;
        if ((undefined1 *)(param_1 + 0x10) <= puVar9) {
          puVar14 = puVar9;
        }
        cVar4 = FUN_1451e9b60(param_1 + 6,param_2,param_1,puVar14 + (ulonglong)uVar13 * 2,
                              lVar3 + (ulonglong)*param_2 * 0x14);
        cVar5 = FUN_1451e9b60(param_1 + 4,param_2,param_1,puVar14,lVar3 + (ulonglong)uVar1 * 0x14);
        if ((cVar4 != '\0' || cVar5 != '\0') && (1 < (*param_2 + 1) - *(int *)(lVar2 + 0x5c))) {
          FUN_144b620d0(lVar2);
        }
        uVar11 = *param_2;
        *(uint *)(lVar2 + 0x5c) = uVar11;
        if (uVar7 != 0) {
          uVar11 = uVar11 + 1;
          *(uint *)(lVar2 + 0x5c) = uVar11;
        }
        uVar6 = CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
      }
      else {
        uVar6 = uVar6 & 0xffffffffffffff00;
      }
      return uVar6;
    }
  }
LAB_1451ebaee:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1451ebd90 FUN_1451ebd90 body=660 status=ok
// SIG undefined FUN_1451ebd90(void)

undefined8 FUN_1451ebd90(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  
  cVar2 = FUN_144e2c5c0(param_2,param_1,0x10);
  if ((((cVar2 == '\0') || (cVar2 = FUN_1451e3aa0(param_1 + 2,param_2,param_1), cVar2 == '\0')) ||
      (cVar2 = FUN_1451e4de0(param_1 + 8,param_2,param_1), cVar2 == '\0')) ||
     (cVar2 = FUN_1451e4de0(param_1 + 10,param_2,param_1), cVar2 == '\0')) {
    return 0;
  }
  uVar4 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
  uVar3 = uVar4 >> 1 & 0x5b6db6db;
  uVar3 = (uVar4 - (uVar3 >> 1 & 0x5b6db6db)) - uVar3;
  uVar9 = ((uVar3 >> 3) + uVar3 & 0xc71c71c7) % 0x3f;
  uVar4 = (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7);
  uVar3 = uVar4 >> 1 & 0x5b6db6db;
  uVar3 = (uVar4 - (uVar3 >> 1 & 0x5b6db6db)) - uVar3;
  iVar8 = ((uVar3 >> 3) + uVar3 & 0xc71c71c7) % 0x3f + uVar9;
  uVar4 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100;
  uVar3 = uVar4 >> 1 & 0x5b6db6db;
  uVar5 = (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7);
  uVar3 = (uVar4 - (uVar3 >> 1 & 0x5b6db6db)) - uVar3;
  uVar4 = uVar5 >> 1 & 0x5b6db6db;
  uVar4 = (uVar5 - (uVar4 >> 1 & 0x5b6db6db)) - uVar4;
  iVar6 = ((uVar4 >> 3) + uVar4 & 0xc71c71c7) % 0x3f + ((uVar3 >> 3) + uVar3 & 0xc71c71c7) % 0x3f;
  uVar4 = ((uint)*(byte *)(param_1 + 0xc) * 0x100 + (uint)*(byte *)(param_1 + 0xd)) *
          ((uint)*(byte *)(param_1 + 0xe) * 0x100 + (uint)*(byte *)(param_1 + 0xf));
  uVar3 = iVar6 * 2;
  if ((iVar6 == 0) || (uVar4 < (uint)(0xffffffff / (ulonglong)uVar3))) {
    puVar1 = (undefined1 *)(param_1 + 0x10);
    cVar2 = FUN_144e2c5c0(param_2,puVar1,uVar4 * uVar3);
    if ((cVar2 != '\0') &&
       (cVar2 = FUN_1451ea1e0(param_1 + 4,param_2,param_1,puVar1,uVar4,iVar8), cVar2 != '\0')) {
      puVar7 = &DAT_149a1f1a0;
      if (puVar1 <= puVar1 + (ulonglong)uVar9 * 2) {
        puVar7 = puVar1 + (ulonglong)uVar9 * 2;
      }
      cVar2 = FUN_1451ea1e0(param_1 + 6,param_2,param_1,puVar7,uVar4,iVar8);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451ec030 FUN_1451ec030 body=153 status=ok
// SIG undefined FUN_1451ec030(void)

void FUN_1451ec030(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  
  lVar3 = (ulonglong)param_2 * 0x14 + param_1;
  sVar2 = *(short *)(lVar3 + 0x10);
  bVar1 = *(byte *)(lVar3 + 0x12);
  if ((sVar2 != 0) && ((bVar1 & 2) != 0)) {
    param_2 = (int)sVar2 + param_2;
    *(undefined2 *)(lVar3 + 0x10) = 0;
    if (param_2 != param_4) {
      FUN_1451ec030(param_1,param_2);
      param_1 = (ulonglong)param_2 * 0x14 + param_1;
      if ((param_3 & 0xfffffffe) == 4) {
        *(int *)(param_1 + 0xc) = -*(int *)(lVar3 + 0xc);
      }
      else {
        *(int *)(param_1 + 8) = -*(int *)(lVar3 + 8);
      }
      *(short *)(param_1 + 0x10) = -sVar2;
      *(byte *)(param_1 + 0x12) = bVar1;
    }
  }
  return;
}



// FUNCTION 1451ec0d0 FUN_1451ec0d0 body=1416 status=ok
// SIG undefined FUN_1451ec0d0(void)

ulonglong FUN_1451ec0d0(longlong param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float local_res8 [2];
  float local_res10 [2];
  uint local_res18;
  byte *local_res20;
  
  lVar3 = *(longlong *)(param_2 + 0x24);
  pbVar13 = &DAT_149a1f1a0;
  uVar12 = 0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar14 = &DAT_149a1f1a0;
  }
  else {
    pbVar14 = (byte *)((ulonglong)*(byte *)(param_1 + 3) +
                      (ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1);
  }
  uVar8 = 0xffffffff;
  iVar11 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
  if (iVar11 == 1) {
    uVar7 = FUN_1451e2130(pbVar14,*(undefined4 *)
                                   (*(longlong *)(lVar3 + 0x70) +
                                   (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14));
  }
  else if (iVar11 == 2) {
    uVar7 = FUN_1451e22a0(pbVar14);
  }
  else {
    uVar7 = 0xffffffff;
  }
  if (uVar7 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
    local_res20 = (byte *)(param_1 + 6 + (ulonglong)uVar7 * 4);
  }
  else {
    local_res20 = &DAT_149a1f1a0;
  }
  uVar10 = 0;
  if ((ushort)((ushort)*local_res20 * 0x100 + (ushort)local_res20[1]) != 0) {
    uVar7 = *(uint *)(lVar3 + 0x5c);
    *param_2 = uVar7;
    param_2[0xe] = 1;
    param_2[0xf] = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 2) + 0x90) + 0x60);
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 2) + 0x90);
    if (uVar7 == *(uint *)(lVar4 + 0x5c)) {
      uVar12 = *(undefined1 *)
                (*(longlong *)(lVar4 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar4 + 0x5c) * 0x14);
    }
    *(undefined1 *)(param_2 + 7) = uVar12;
    uVar10 = FUN_1451e5420(param_2);
    if ((char)uVar10 != '\0') {
      if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
        pbVar14 = &DAT_149a1f1a0;
      }
      else {
        pbVar14 = (byte *)((ulonglong)*(byte *)(param_1 + 3) +
                          (ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1);
      }
      iVar11 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
      if (iVar11 == 1) {
        uVar8 = FUN_1451e2130(pbVar14,*(undefined4 *)
                                       (*(longlong *)(lVar3 + 0x70) + (ulonglong)*param_2 * 0x14));
      }
      else if (iVar11 == 2) {
        uVar8 = FUN_1451e22a0(pbVar14);
      }
      if (uVar8 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
        puVar15 = (undefined1 *)(param_1 + 6 + (ulonglong)uVar8 * 4);
      }
      else {
        puVar15 = &DAT_149a1f1a0;
      }
      uVar10 = 0;
      if ((ushort)((ushort)(byte)puVar15[3] + (ushort)(byte)puVar15[2] * 0x100) != 0) {
        local_res18 = *param_2;
        uVar10 = (ulonglong)local_res18;
        uVar8 = *(uint *)(lVar3 + 0x5c);
        uVar16 = (ulonglong)uVar8;
        if (1 < uVar8 - local_res18) {
          FUN_144b620d0(lVar3,uVar10,uVar8);
          uVar10 = (ulonglong)local_res18;
        }
        if ((ushort)((ushort)(byte)puVar15[2] * 0x100 + (ushort)(byte)puVar15[3]) == 0) {
          pbVar14 = &DAT_149a1f1a0;
        }
        else {
          pbVar14 = (byte *)((ulonglong)(byte)puVar15[2] * 0x100 + param_1 +
                            (ulonglong)(byte)puVar15[3]);
        }
        local_res8[0] = 0.0;
        local_res10[0] = 0.0;
        uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x70) + uVar10 * 0x14);
        iVar11 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
        if (iVar11 == 1) {
          FUN_1451ea280(pbVar14,param_2,uVar2,local_res10,local_res8);
          fVar18 = local_res8[0];
          fVar19 = local_res10[0];
        }
        else if (iVar11 == 2) {
          FUN_1451ea370(pbVar14,param_2,uVar2,local_res10,local_res8);
          fVar18 = local_res8[0];
          fVar19 = local_res10[0];
        }
        else {
          fVar18 = 0.0;
          fVar19 = 0.0;
          if (iVar11 == 3) {
            FUN_1451ea560(pbVar14,param_2,uVar2,local_res10,local_res8);
            fVar18 = local_res8[0];
            fVar19 = local_res10[0];
          }
        }
        if ((ushort)((ushort)*local_res20 * 0x100 + (ushort)local_res20[1]) != 0) {
          pbVar13 = (byte *)((ulonglong)*local_res20 * 0x100 + param_1 + (ulonglong)local_res20[1]);
        }
        local_res8[0] = 0.0;
        uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x70) + uVar16 * 0x14);
        iVar11 = (uint)*pbVar13 * 0x100 + (uint)pbVar13[1];
        local_res10[0] = 0.0;
        if (iVar11 == 1) {
          FUN_1451ea280(pbVar13,param_2,uVar2,local_res10,local_res8);
        }
        else if (iVar11 == 2) {
          FUN_1451ea370(pbVar13,param_2,uVar2,local_res10,local_res8);
        }
        else if (iVar11 == 3) {
          FUN_1451ea560(pbVar13,param_2,uVar2,local_res10,local_res8);
        }
        fVar6 = local_res10[0];
        fVar5 = local_res8[0];
        uVar7 = param_2[0x2c];
        lVar4 = *(longlong *)(lVar3 + 0x80);
        if (uVar7 == 4) {
          dVar17 = (double)round((double)fVar19);
          *(int *)(lVar4 + uVar10 * 0x14) =
               (int)(dVar17 + (double)*(int *)(lVar4 + 8 + uVar10 * 0x14));
          iVar11 = *(int *)(lVar4 + 8 + uVar16 * 0x14);
          dVar17 = (double)round((double)fVar6);
          iVar9 = (int)(dVar17 + (double)iVar11);
          piVar1 = (int *)(lVar4 + uVar16 * 0x14);
          *piVar1 = *piVar1 - iVar9;
          *(int *)(lVar4 + 8 + uVar16 * 0x14) = iVar11 - iVar9;
        }
        else if (uVar7 == 5) {
          iVar11 = *(int *)(lVar4 + 8 + uVar10 * 0x14);
          dVar17 = (double)round((double)fVar19);
          iVar9 = (int)(dVar17 + (double)iVar11);
          piVar1 = (int *)(lVar4 + uVar10 * 0x14);
          *piVar1 = *piVar1 - iVar9;
          *(int *)(lVar4 + 8 + uVar10 * 0x14) = iVar11 - iVar9;
          dVar17 = (double)round((double)fVar6);
          *(int *)(lVar4 + uVar16 * 0x14) =
               (int)(dVar17 + (double)*(int *)(lVar4 + 8 + uVar16 * 0x14));
        }
        else if (uVar7 == 6) {
          dVar17 = (double)round((double)fVar18);
          *(int *)(lVar4 + 4 + uVar10 * 0x14) =
               (int)(dVar17 + (double)*(int *)(lVar4 + 0xc + uVar10 * 0x14));
          iVar11 = *(int *)(lVar4 + 0xc + uVar16 * 0x14);
          dVar17 = (double)round((double)fVar5);
          iVar9 = (int)(dVar17 + (double)iVar11);
          piVar1 = (int *)(lVar4 + 4 + uVar16 * 0x14);
          *piVar1 = *piVar1 - iVar9;
          *(int *)(lVar4 + 0xc + uVar16 * 0x14) = iVar11 - iVar9;
        }
        else if (uVar7 == 7) {
          iVar11 = *(int *)(lVar4 + 0xc + uVar10 * 0x14);
          dVar17 = (double)round((double)fVar18);
          iVar9 = (int)(dVar17 + (double)iVar11);
          piVar1 = (int *)(lVar4 + 4 + uVar10 * 0x14);
          *piVar1 = *piVar1 - iVar9;
          *(int *)(lVar4 + 0xc + uVar10 * 0x14) = iVar11 - iVar9;
          dVar17 = (double)round((double)fVar5);
          *(int *)(lVar4 + 4 + uVar16 * 0x14) = (int)dVar17;
        }
        iVar9 = (int)(fVar6 - fVar19);
        iVar11 = (int)(fVar5 - fVar18);
        uVar7 = local_res18;
        if ((param_2[0x30] & 1) == 0) {
          iVar9 = -iVar9;
          iVar11 = -iVar11;
          uVar16 = (ulonglong)local_res18;
          uVar7 = uVar8;
        }
        FUN_1451ec030(lVar4,uVar7,param_2[0x2c],uVar16);
        uVar10 = (ulonglong)uVar7;
        *(undefined1 *)(lVar4 + 0x12 + uVar10 * 0x14) = 2;
        *(short *)(lVar4 + 0x10 + uVar10 * 0x14) = (short)uVar16 - (short)uVar7;
        *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) | 8;
        uVar8 = param_2[0x2c];
        if ((uVar8 & 0xfffffffe) == 4) {
          *(int *)(lVar4 + 0xc + uVar10 * 0x14) = iVar11;
        }
        else {
          *(int *)(lVar4 + 8 + uVar10 * 0x14) = iVar9;
        }
        *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + 1;
        return CONCAT71((uint7)(uint3)((uVar8 & 0xfffffffe) >> 8),1);
      }
    }
  }
  return uVar10 & 0xffffffffffffff00;
}



// FUNCTION 1451ec660 FUN_1451ec660 body=221 status=ok
// SIG undefined FUN_1451ec660(void)

undefined8 FUN_1451ec660(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 4),
     cVar1 == '\0')) {
    return 0;
  }
  uVar3 = 0;
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar4 != 0) {
    do {
      cVar1 = FUN_1451eaaf0(param_1 + uVar3 * 4 + 2,param_2,param_3);
      if ((cVar1 == '\0') ||
         (cVar1 = FUN_1451eaaf0(param_1 + uVar3 * 4 + 4,param_2,param_3), cVar1 == '\0')) {
        return 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar4);
  }
  return 1;
}



// FUNCTION 1451ec740 FUN_1451ec740 body=720 status=ok
// SIG undefined FUN_1451ec740(void)

ulonglong FUN_1451ec740(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  ulonglong uVar7;
  byte bVar8;
  byte *pbVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  ulonglong uVar14;
  
  lVar2 = *(longlong *)(param_2 + 0x24);
  puVar12 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar9 = &DAT_149a1f1a0;
  }
  else {
    pbVar9 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  uVar7 = 0;
  iVar13 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
  if (iVar13 == 1) {
    uVar7 = FUN_1451e2130(pbVar9,*(undefined4 *)
                                  (*(longlong *)(lVar2 + 0x70) +
                                  (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14));
  }
  else {
    if (iVar13 != 2) goto LAB_1451ec8f7;
    uVar7 = FUN_1451e22a0();
  }
  uVar14 = uVar7 & 0xffffffff;
  if ((int)uVar7 != -1) {
    uVar1 = *(uint *)(lVar2 + 0x5c);
    *param_2 = uVar1;
    param_2[0xe] = 1;
    param_2[0xf] = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 2) + 0x90) + 0x60);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 2) + 0x90);
    if (uVar1 == *(uint *)(lVar3 + 0x5c)) {
      uVar10 = *(undefined1 *)
                (*(longlong *)(lVar3 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14);
    }
    else {
      uVar10 = 0;
    }
    *(undefined1 *)(param_2 + 7) = uVar10;
    param_2[4] = 8;
    uVar7 = FUN_1451e5420(param_2);
    cVar5 = (char)uVar7;
    while (cVar5 != '\0') {
      uVar1 = *param_2;
      lVar4 = *(longlong *)(lVar2 + 0x70);
      lVar3 = lVar4 + (ulonglong)uVar1 * 0x14;
      if (((((*(byte *)(lVar4 + 0xc + (ulonglong)uVar1 * 0x14) >> 6 & 1) == 0) ||
           ((*(byte *)(lVar3 + 0xe) & 0x10) != 0)) || ((*(byte *)(lVar3 + 0xe) & 0xf) == 0)) ||
         (((uVar1 == 0 ||
           (lVar4 = lVar4 + (ulonglong)(uVar1 - 1) * 0x14, (*(byte *)(lVar4 + 0xc) >> 3 & 1) != 0))
          || (((*(byte *)(lVar4 + 0xe) ^ *(byte *)(lVar3 + 0xe)) & 0xe0) != 0)))) {
LAB_1451ec912:
        if ((ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)) == 0)
        {
          pbVar9 = &DAT_149a1f1a0;
        }
        else {
          pbVar9 = (byte *)((ulonglong)*(byte *)(param_1 + 5) +
                           (ulonglong)*(byte *)(param_1 + 4) * 0x100 + param_1);
        }
        uVar7 = 0;
        iVar13 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
        if (iVar13 == 1) {
          uVar7 = FUN_1451e2130(pbVar9,*(undefined4 *)
                                        (*(longlong *)(lVar2 + 0x70) + (ulonglong)*param_2 * 0x14));
        }
        else {
          if (iVar13 != 2) break;
          uVar7 = FUN_1451e22a0(pbVar9);
        }
        if ((int)uVar7 != -1) {
          if ((ushort)((ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb))
              == 0) {
            puVar11 = &DAT_149a1f1a0;
          }
          else {
            puVar11 = (undefined1 *)
                      ((ulonglong)*(byte *)(param_1 + 10) * 0x100 + param_1 +
                      (ulonglong)*(byte *)(param_1 + 0xb));
          }
          if ((ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) != 0
             ) {
            puVar12 = (undefined1 *)
                      ((ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1 +
                      (ulonglong)*(byte *)(param_1 + 9));
          }
          uVar7 = FUN_1451ead40(puVar12,param_2,uVar14,uVar7 & 0xffffffff,puVar11,
                                (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7),
                                *param_2);
          return uVar7;
        }
        break;
      }
      if ((*(byte *)(lVar3 + 0xe) & 0x10) == 0) {
        bVar8 = *(byte *)(lVar3 + 0xe) & 0xf;
      }
      else {
        bVar8 = 0;
      }
      if ((*(byte *)(lVar4 + 0xe) & 0x10) == 0) {
        bVar6 = *(byte *)(lVar4 + 0xe) & 0xf;
      }
      else {
        bVar6 = 0;
      }
      if (bVar8 != (byte)(bVar6 + 1)) goto LAB_1451ec912;
      param_2[0xe] = param_2[0xe] + 1;
      *(longlong *)(param_2 + 0xc) = *(longlong *)(param_2 + 0xc) + -2;
      uVar7 = FUN_1451e5420(param_2);
      cVar5 = (char)uVar7;
    }
  }
LAB_1451ec8f7:
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 1451eca10 FUN_1451eca10 body=155 status=ok
// SIG undefined FUN_1451eca10(void)

undefined8 FUN_1451eca10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0xc);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451e3aa0(param_1 + 4,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_1451ecb50(param_1 + 8,param_2,param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_1451ecc90(param_1 + 10,param_2,param_1,
                                (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7))
          ;
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451ecab0 FUN_1451ecab0 body=151 status=ok
// SIG undefined FUN_1451ecab0(void)

bool FUN_1451ecab0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451ecb50 FUN_1451ecb50 body=152 status=ok
// SIG undefined FUN_1451ecb50(void)

undefined8 FUN_1451ecb50(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1451ecab0();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (lVar2 = (ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],
     cVar1 = FUN_1451eab90(lVar2,param_2,lVar2), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 1451ecbf0 FUN_1451ecbf0 body=151 status=ok
// SIG undefined FUN_1451ecbf0(void)

bool FUN_1451ecbf0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451ecc90 FUN_1451ecc90 body=151 status=ok
// SIG undefined FUN_1451ecc90(void)

undefined8 FUN_1451ecc90(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1451ecbf0();
  if (cVar1 == '\0') {
LAB_1451ecd10:
    uVar2 = 0;
  }
  else {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) {
      cVar1 = FUN_1451ea960((ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],param_2,
                            param_4);
      if (cVar1 == '\0') {
        cVar1 = FUN_144e2d280(param_2,param_1,2);
        if (cVar1 == '\0') goto LAB_1451ecd10;
        param_1[0] = 0;
        param_1[1] = 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1451ecd30 FUN_1451ecd30 body=692 status=ok
// SIG undefined FUN_1451ecd30(void)

ulonglong FUN_1451ecd30(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  
  lVar2 = *(longlong *)(param_2 + 0x24);
  puVar13 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar10 = &DAT_149a1f1a0;
  }
  else {
    pbVar10 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                      (ulonglong)*(byte *)(param_1 + 3));
  }
  iVar14 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
  if (iVar14 == 1) {
    uVar7 = FUN_1451e2130(pbVar10,*(undefined4 *)
                                   (*(longlong *)(lVar2 + 0x70) +
                                   (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14));
  }
  else {
    uVar8 = 0;
    if (iVar14 != 2) goto LAB_1451ecdd2;
    uVar7 = FUN_1451e22a0();
  }
  uVar8 = uVar7;
  if ((int)uVar7 == -1) {
LAB_1451ecdd2:
    return uVar8 & 0xffffffffffffff00;
  }
  uVar1 = *(uint *)(lVar2 + 0x5c);
  *param_2 = uVar1;
  param_2[0xe] = 1;
  param_2[0xf] = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 2) + 0x90) + 0x60);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 2) + 0x90);
  if (uVar1 == *(uint *)(lVar3 + 0x5c)) {
    uVar12 = *(undefined1 *)
              (*(longlong *)(lVar3 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14);
  }
  else {
    uVar12 = 0;
  }
  *(undefined1 *)(param_2 + 7) = uVar12;
  param_2[4] = 8;
  uVar8 = FUN_1451e5420(param_2);
  if ((char)uVar8 == '\0') goto LAB_1451ecdd2;
  uVar1 = *param_2;
  if ((ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)) == 0) {
    pbVar10 = &DAT_149a1f1a0;
  }
  else {
    pbVar10 = (byte *)((ulonglong)*(byte *)(param_1 + 5) +
                      (ulonglong)*(byte *)(param_1 + 4) * 0x100 + param_1);
  }
  lVar3 = (ulonglong)uVar1 * 0x14;
  pbVar9 = (byte *)0x0;
  iVar14 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
  if (iVar14 == 1) {
    pbVar9 = (byte *)FUN_1451e2130(pbVar10,*(undefined4 *)(lVar3 + *(longlong *)(lVar2 + 0x70)));
  }
  else {
    if (iVar14 != 2) goto LAB_1451ecef7;
    pbVar9 = (byte *)FUN_1451e22a0(pbVar10);
  }
  if ((int)pbVar9 != -1) {
    if ((ushort)((ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb)) == 0) {
      puVar11 = &DAT_149a1f1a0;
    }
    else {
      puVar11 = (undefined1 *)
                ((ulonglong)*(byte *)(param_1 + 10) * 0x100 + param_1 +
                (ulonglong)*(byte *)(param_1 + 0xb));
    }
    pbVar9 = (byte *)FUN_1451ed130(puVar11,(ulonglong)pbVar9 & 0xffffffff);
    uVar15 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
    if (uVar15 != 0) {
      uVar8 = (ulonglong)*(uint *)(lVar2 + 0x5c);
      lVar2 = *(longlong *)(lVar2 + 0x70);
      bVar5 = *(byte *)(lVar2 + 0xe + uVar8 * 0x14);
      bVar4 = *(byte *)(lVar2 + 0xe + lVar3) >> 5;
      if ((bVar5 & 0x10) == 0) {
        bVar5 = bVar5 & 0xf;
      }
      else {
        bVar5 = 0;
      }
      if (((bVar4 == 0) || (bVar4 != *(byte *)(lVar2 + 0xe + uVar8 * 0x14) >> 5)) || (bVar5 == 0)) {
        iVar14 = uVar15 - 1;
      }
      else {
        bVar5 = *(byte *)(lVar2 + uVar8 * 0x14 + 0xe);
        if ((bVar5 & 0x10) == 0) {
          uVar6 = bVar5 & 0xf;
          if (uVar6 <= uVar15) {
            uVar15 = uVar6;
          }
          iVar14 = uVar15 - 1;
        }
        else {
          iVar14 = -1;
        }
      }
      if ((ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) != 0) {
        puVar13 = (undefined1 *)
                  ((ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1 +
                  (ulonglong)*(byte *)(param_1 + 9));
      }
      uVar7 = FUN_1451ead40(puVar13,param_2,uVar7 & 0xffffffff,iVar14,pbVar9,
                            (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7),
                            uVar1);
      return uVar7;
    }
  }
LAB_1451ecef7:
  return (ulonglong)pbVar9 & 0xffffffffffffff00;
}



// FUNCTION 1451ecff0 FUN_1451ecff0 body=155 status=ok
// SIG undefined FUN_1451ecff0(void)

undefined8 FUN_1451ecff0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0xc);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451e3aa0(param_1 + 4,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_1451ecb50(param_1 + 8,param_2,param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_1451ed180(param_1 + 10,param_2,param_1,
                                (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7))
          ;
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451ed090 FUN_1451ed090 body=151 status=ok
// SIG undefined FUN_1451ed090(void)

bool FUN_1451ed090(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451ed130 FUN_1451ed130 body=79 status=ok
// SIG undefined FUN_1451ed130(void)

byte * FUN_1451ed130(byte *param_1,uint param_2)

{
  if (param_2 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
    if ((ushort)((ushort)param_1[(ulonglong)param_2 * 2 + 2] * 0x100 +
                (ushort)param_1[(ulonglong)param_2 * 2 + 3]) != 0) {
      return param_1 + (ulonglong)param_1[(ulonglong)param_2 * 2 + 3] +
                       (ulonglong)param_1[(ulonglong)param_2 * 2 + 2] * 0x100;
    }
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 1451ed180 FUN_1451ed180 body=154 status=ok
// SIG undefined FUN_1451ed180(void)

undefined8 FUN_1451ed180(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_1451ed090();
  if (cVar1 == '\0') {
LAB_1451ed203:
    uVar2 = 0;
  }
  else {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) {
      lVar3 = (ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1];
      cVar1 = FUN_1451f3ca0(lVar3,param_2,lVar3,param_4);
      if (cVar1 == '\0') {
        cVar1 = FUN_144e2d280(param_2,param_1,2);
        if (cVar1 == '\0') goto LAB_1451ed203;
        param_1[0] = 0;
        param_1[1] = 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1451ed220 FUN_1451ed220 body=675 status=ok
// SIG undefined FUN_1451ed220(void)

ulonglong FUN_1451ed220(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  lVar4 = *(longlong *)(param_2 + 0x24);
  puVar13 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar10 = &DAT_149a1f1a0;
  }
  else {
    pbVar10 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                      (ulonglong)*(byte *)(param_1 + 3));
  }
  uVar8 = 0;
  iVar14 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
  if (iVar14 == 1) {
    uVar8 = FUN_1451e2130(pbVar10,*(undefined4 *)
                                   (*(longlong *)(lVar4 + 0x70) +
                                   (ulonglong)*(uint *)(lVar4 + 0x5c) * 0x14));
  }
  else {
    if (iVar14 != 2) goto LAB_1451ed2c1;
    uVar8 = FUN_1451e22a0();
  }
  uVar16 = uVar8 & 0xffffffff;
  if ((int)uVar8 != -1) {
    uVar3 = *(uint *)(lVar4 + 0x5c);
    *param_2 = uVar3;
    param_2[0xe] = 1;
    param_2[0xf] = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 2) + 0x90) + 0x60);
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 2) + 0x90);
    if (uVar3 == *(uint *)(lVar5 + 0x5c)) {
      uVar11 = *(undefined1 *)
                (*(longlong *)(lVar5 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14);
    }
    else {
      uVar11 = 0;
    }
    *(undefined1 *)(param_2 + 7) = uVar11;
    param_2[4] = param_2[0x30] & 0xfffffff1;
    uVar8 = FUN_1451e5420(param_2);
    if ((char)uVar8 != '\0') {
      lVar5 = *(longlong *)(lVar4 + 0x70);
      uVar3 = *param_2;
      uVar15 = (ulonglong)uVar3;
      uVar8 = uVar15 * 5;
      if ((*(byte *)(lVar5 + 0xc + uVar15 * 0x14) >> 3 & 1) != 0) {
        bVar2 = *(byte *)(lVar5 + (ulonglong)*(uint *)(lVar4 + 0x5c) * 0x14 + 0xe);
        puVar1 = (undefined4 *)(lVar5 + uVar15 * 0x14);
        bVar6 = *(byte *)(lVar5 + 0xe + (ulonglong)*(uint *)(lVar4 + 0x5c) * 0x14) >> 5;
        bVar7 = *(byte *)((longlong)puVar1 + 0xe) >> 5;
        if ((bVar2 & 0x10) == 0) {
          uVar9 = bVar2 & 0xf;
        }
        else {
          uVar9 = 0;
        }
        if ((*(byte *)((longlong)puVar1 + 0xe) & 0x10) == 0) {
          uVar8 = (ulonglong)(*(byte *)((longlong)puVar1 + 0xe) & 0xf);
        }
        else {
          uVar8 = 0;
        }
        if (bVar6 == bVar7) {
          if ((bVar6 != 0) && (uVar9 != (uint)uVar8)) goto LAB_1451ed3a1;
        }
        else if (((bVar6 == 0) || (uVar9 != 0)) && ((bVar7 == 0 || ((uint)uVar8 != 0))))
        goto LAB_1451ed3a1;
        if ((ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)) == 0)
        {
          pbVar10 = &DAT_149a1f1a0;
        }
        else {
          pbVar10 = (byte *)((ulonglong)*(byte *)(param_1 + 4) * 0x100 + param_1 +
                            (ulonglong)*(byte *)(param_1 + 5));
        }
        uVar8 = 0;
        iVar14 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
        if (iVar14 == 1) {
          uVar8 = FUN_1451e2130(pbVar10,*puVar1);
        }
        else {
          if (iVar14 != 2) goto LAB_1451ed3a1;
          uVar8 = FUN_1451e22a0();
        }
        if ((int)uVar8 != -1) {
          if ((ushort)((ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb))
              == 0) {
            puVar12 = &DAT_149a1f1a0;
          }
          else {
            puVar12 = (undefined1 *)
                      ((ulonglong)*(byte *)(param_1 + 10) * 0x100 + param_1 +
                      (ulonglong)*(byte *)(param_1 + 0xb));
          }
          if ((ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) != 0
             ) {
            puVar13 = (undefined1 *)
                      ((ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1 +
                      (ulonglong)*(byte *)(param_1 + 9));
          }
          uVar8 = FUN_1451ead40(puVar13,param_2,uVar16,uVar8 & 0xffffffff,puVar12,
                                (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7),
                                uVar3);
          return uVar8;
        }
      }
LAB_1451ed3a1:
      return uVar8 & 0xffffffffffffff00;
    }
  }
LAB_1451ed2c1:
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 1451ed4d0 FUN_1451ed4d0 body=155 status=ok
// SIG undefined FUN_1451ed4d0(void)

undefined8 FUN_1451ed4d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0xc);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451e3aa0(param_1 + 4,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_1451ecb50(param_1 + 8,param_2,param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_1451ecc90(param_1 + 10,param_2,param_1,
                                (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7))
          ;
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451ed570 FUN_1451ed570 body=243 status=ok
// SIG undefined FUN_1451ed570(void)

undefined1 FUN_1451ed570(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  puVar3 = (undefined1 *)**(undefined8 **)(*(longlong *)(param_1 + 0x88) + 200);
  puVar9 = &DAT_149a1f1a0;
  puVar6 = &DAT_149a1f1a0;
  if (puVar3 != (undefined1 *)0x0) {
    puVar6 = puVar3;
  }
  if (9 < *(uint *)(puVar6 + 0x18)) {
    puVar9 = *(undefined1 **)(puVar6 + 0x10);
  }
  lVar5 = FUN_1451e8ee0(puVar9);
  uVar1 = *(undefined4 *)(param_1 + 0xbc);
  uVar2 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  uVar8 = (uint)*(byte *)(lVar5 + 2) * 0x100 + (uint)*(byte *)(lVar5 + 3);
  if ((uVar8 & 0x10) != 0) {
    uVar7 = (ulonglong)CONCAT11(*(undefined1 *)(lVar5 + 4),*(undefined1 *)(lVar5 + 5));
    uVar8 = uVar8 + ((uint)*(byte *)(lVar5 + 6 + uVar7 * 2) * 0x100 +
                    (uint)*(byte *)(lVar5 + 7 + uVar7 * 2)) * 0x10000;
  }
  *(uint *)(param_1 + 0xc0) = uVar8;
  FUN_1451e5680(param_1);
  uVar4 = FUN_1451f3320(lVar5,param_1);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  FUN_1451e5680(param_1);
  return uVar4;
}



// FUNCTION 1451ed670 FUN_1451ed670 body=97 status=ok
// SIG undefined FUN_1451ed670(void)

undefined1 * FUN_1451ed670(longlong param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 3) * 2);
  }
  else {
    pbVar1 = &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)*pbVar1 * 0x100 + (ushort)pbVar1[1]) == 0) {
    return &DAT_149a1f1a0;
  }
  return (undefined1 *)((ulonglong)*pbVar1 * 0x100 + param_1 + (ulonglong)pbVar1[1]);
}



// FUNCTION 1451ed6e0 FUN_1451ed6e0 body=374 status=ok
// SIG undefined FUN_1451ed6e0(void)

undefined8 FUN_1451ed6e0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,6);
  if (cVar1 != '\0') {
    pbVar3 = param_1 + 4;
    cVar1 = FUN_144e2c5c0(param_2,pbVar3,2);
    if ((((cVar1 != '\0') &&
         (cVar1 = FUN_144e2c5c0(param_2,param_1 + 6,((uint)*pbVar3 * 0x100 + (uint)param_1[5]) * 2),
         cVar1 != '\0')) &&
        (((param_1[3] & 0x10) == 0 ||
         (cVar1 = FUN_144e2c5c0(param_2,pbVar3 + ((ulonglong)*pbVar3 * 0x100 +
                                                 (ulonglong)param_1[5] + 1) * 2,2), cVar1 != '\0')))
        ) && (cVar1 = FUN_1451f34b0(pbVar3,param_2,param_1,(uint)*param_1 * 0x100 + (uint)param_1[1]
                                   ), cVar1 != '\0')) {
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 9) {
        pbVar2 = (byte *)FUN_1451ed670(param_1,0);
        if ((uint)*pbVar2 * 0x100 + (uint)pbVar2[1] == 1) {
          iVar7 = (uint)pbVar2[2] * 0x100 + (uint)pbVar2[3];
        }
        else {
          iVar7 = 0;
        }
        uVar5 = 1;
        uVar6 = (uint)*pbVar3 * 0x100 + (uint)param_1[5];
        if (1 < uVar6) {
          do {
            pbVar3 = (byte *)FUN_1451ed670(param_1,uVar5);
            if ((uint)*pbVar3 * 0x100 + (uint)pbVar3[1] == 1) {
              iVar4 = (uint)pbVar3[3] + (uint)pbVar3[2] * 0x100;
            }
            else {
              iVar4 = 0;
            }
            if (iVar4 != iVar7) {
              return 0;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451ed860 FUN_1451ed860 body=382 status=ok
// SIG undefined FUN_1451ed860(void)

void FUN_1451ed860(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint local_res10 [2];
  
  lVar5 = FUN_144b61720(param_2,local_res10);
  uVar4 = *(uint *)(param_2 + 0x38);
  if (((*(byte *)(param_2 + 0x28) & 8) != 0) && (uVar11 = 0, local_res10[0] != 0)) {
    do {
      uVar12 = (ulonglong)uVar11;
      lVar13 = uVar12 * 5;
      sVar3 = *(short *)(lVar5 + 0x10 + uVar12 * 0x14);
      bVar2 = *(byte *)(lVar5 + 0x12 + uVar12 * 0x14);
      if (sVar3 != 0) {
        uVar9 = (int)sVar3 + uVar11;
        uVar10 = (ulonglong)uVar9;
        *(undefined2 *)(lVar5 + 0x10 + uVar12 * 0x14) = 0;
        if (uVar9 < local_res10[0]) {
          FUN_1451edac0(lVar5,local_res10[0],uVar9,uVar4);
          if ((bVar2 & 2) == 0) {
            piVar7 = (int *)(lVar5 + uVar10 * 0x14);
            piVar1 = (int *)(lVar5 + 8 + lVar13 * 4);
            *piVar1 = *piVar1 + *(int *)(lVar5 + 8 + uVar10 * 0x14);
            iVar8 = piVar7[3] + *(int *)(lVar5 + 0xc + lVar13 * 4);
            *(int *)(lVar5 + 0xc + lVar13 * 4) = iVar8;
            if ((uVar4 & 0xfffffffd) == 4) {
              if (uVar9 < uVar11) {
                iVar6 = *(int *)(lVar5 + 8 + lVar13 * 4);
                uVar12 = (ulonglong)(uVar11 - uVar9);
                do {
                  iVar6 = iVar6 - *piVar7;
                  *(int *)(lVar5 + 8 + lVar13 * 4) = iVar6;
                  iVar8 = iVar8 - piVar7[1];
                  *(int *)(lVar5 + 0xc + lVar13 * 4) = iVar8;
                  uVar12 = uVar12 - 1;
                  piVar7 = piVar7 + 5;
                } while (uVar12 != 0);
              }
            }
            else {
              uVar9 = uVar9 + 1;
              if (uVar9 < uVar11 + 1) {
                iVar6 = *(int *)(lVar5 + 8 + lVar13 * 4);
                uVar12 = (ulonglong)((uVar11 + 1) - uVar9);
                piVar7 = (int *)(lVar5 + (ulonglong)uVar9 * 0x14);
                do {
                  iVar6 = iVar6 + *piVar7;
                  *(int *)(lVar5 + 8 + lVar13 * 4) = iVar6;
                  iVar8 = iVar8 + piVar7[1];
                  *(int *)(lVar5 + 0xc + lVar13 * 4) = iVar8;
                  uVar12 = uVar12 - 1;
                  piVar7 = piVar7 + 5;
                } while (uVar12 != 0);
              }
            }
          }
          else if ((uVar4 & 0xfffffffe) == 4) {
            piVar7 = (int *)(lVar5 + 0xc + lVar13 * 4);
            *piVar7 = *piVar7 + *(int *)(lVar5 + 0xc + uVar10 * 0x14);
          }
          else {
            piVar7 = (int *)(lVar5 + 8 + lVar13 * 4);
            *piVar7 = *piVar7 + *(int *)(lVar5 + 8 + uVar10 * 0x14);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < local_res10[0]);
  }
  return;
}



// FUNCTION 1451ed9e0 FUN_1451ed9e0 body=210 status=ok
// SIG undefined FUN_1451ed9e0(void)

undefined8 FUN_1451ed9e0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if ((((cVar1 != '\0') && ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1)) &&
      (cVar1 = FUN_1451e91a0(param_1 + 4,param_2,param_1), cVar1 != '\0')) &&
     ((cVar1 = FUN_1451e92e0(param_1 + 6,param_2,param_1), cVar1 != '\0' &&
      (cVar1 = FUN_1451f18b0(param_1 + 8,param_2,param_1), cVar1 != '\0')))) {
    if ((0x10000 < (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100
                   + (uint)param_1[3]) &&
       (cVar1 = FUN_1451e9420(param_1 + 10,param_2,param_1), cVar1 == '\0')) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1451edac0 FUN_1451edac0 body=292 status=ok
// SIG undefined FUN_1451edac0(void)

void FUN_1451edac0(longlong param_1,undefined8 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar3 = (int)*(short *)(param_1 + 0x10 + (ulonglong)param_3 * 0x14);
  lVar1 = param_1 + (ulonglong)param_3 * 0x14;
  bVar2 = *(byte *)(lVar1 + 0x12);
  if (iVar3 != 0) {
    uVar6 = iVar3 + param_3;
    uVar7 = (ulonglong)uVar6;
    *(undefined2 *)(lVar1 + 0x10) = 0;
    if (uVar6 < (uint)param_2) {
      FUN_1451edac0(param_1,param_2,uVar6);
      if ((bVar2 & 2) != 0) {
        if ((param_4 & 0xfffffffe) != 4) {
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + *(int *)(param_1 + 8 + uVar7 * 0x14);
          return;
        }
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + *(int *)(param_1 + 0xc + uVar7 * 0x14);
        return;
      }
      piVar5 = (int *)(param_1 + uVar7 * 0x14);
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + *(int *)(param_1 + 8 + uVar7 * 0x14);
      iVar3 = *(int *)(lVar1 + 0xc) + piVar5[3];
      *(int *)(lVar1 + 0xc) = iVar3;
      if ((param_4 & 0xfffffffd) == 4) {
        if (uVar6 < param_3) {
          iVar4 = *(int *)(lVar1 + 8);
          uVar7 = (ulonglong)(param_3 - uVar6);
          do {
            iVar4 = iVar4 - *piVar5;
            *(int *)(lVar1 + 8) = iVar4;
            iVar3 = iVar3 - piVar5[1];
            *(int *)(lVar1 + 0xc) = iVar3;
            uVar7 = uVar7 - 1;
            piVar5 = piVar5 + 5;
          } while (uVar7 != 0);
          return;
        }
      }
      else {
        uVar6 = uVar6 + 1;
        if (uVar6 < param_3 + 1) {
          iVar4 = *(int *)(lVar1 + 8);
          uVar7 = (ulonglong)((param_3 + 1) - uVar6);
          piVar5 = (int *)(param_1 + (ulonglong)uVar6 * 0x14);
          do {
            iVar4 = iVar4 + *piVar5;
            *(int *)(lVar1 + 8) = iVar4;
            iVar3 = iVar3 + piVar5[1];
            *(int *)(lVar1 + 0xc) = iVar3;
            uVar7 = uVar7 - 1;
            piVar5 = piVar5 + 5;
          } while (uVar7 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1451edbf0 FUN_1451edbf0 body=422 status=ok
// SIG undefined FUN_1451edbf0(void)

void FUN_1451edbf0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 *puVar9;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong uVar8;
  
  uVar8 = 0;
  local_28 = 0x10000;
  local_58[0] = 0;
  local_40 = 0;
  local_3c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_24 = 0;
  local_28 = FUN_144e2d260(param_2);
  local_24 = 1;
  uVar1 = FUN_144e2d200(param_2,0x47504f53);
  puVar2 = (undefined1 *)FUN_1451f4770(local_58,uVar1);
  *param_1 = puVar2;
  puVar9 = &DAT_149a1f1a0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar9 = puVar2;
  }
  if (*(uint *)(puVar9 + 0x18) < 10) {
    puVar9 = &DAT_149a1f1a0;
  }
  else {
    puVar9 = *(undefined1 **)(puVar9 + 0x10);
  }
  if ((ushort)((ushort)(byte)puVar9[8] * 0x100 + (ushort)(byte)puVar9[9]) == 0) {
    pbVar5 = &DAT_149a1f1a0;
  }
  else {
    pbVar5 = puVar9 + (ulonglong)(byte)puVar9[9] + (ulonglong)(byte)puVar9[8] * 0x100;
  }
  iVar4 = (uint)pbVar5[1] + (uint)*pbVar5 * 0x100;
  *(int *)(param_1 + 1) = iVar4;
  lVar3 = FUN_142864336(iVar4,0x20);
  param_1[2] = lVar3;
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*(int *)(param_1 + 1) != 0) {
    do {
      puVar9 = &DAT_149a1f1a0;
      if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
        puVar9 = (undefined1 *)*param_1;
      }
      puVar2 = &DAT_149a1f1a0;
      if (9 < *(uint *)(puVar9 + 0x18)) {
        puVar2 = *(undefined1 **)(puVar9 + 0x10);
      }
      uVar1 = FUN_1451e8ee0(puVar2,uVar8);
      puVar6 = (undefined8 *)(uVar8 * 0x20 + param_1[2]);
      local_70 = 0;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      local_78 = puVar6;
      FUN_1451f6750(uVar1,&local_78);
      local_68 = puVar6 + 2;
      *local_68 = 0;
      puVar6[3] = 0;
      local_60 = 0;
      FUN_1451f4a30(uVar1,&local_68);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 1));
  }
  return;
}



// FUNCTION 1451edda0 FUN_1451edda0 body=128 status=ok
// SIG undefined FUN_1451edda0(void)

bool FUN_1451edda0(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451ede20 FUN_1451ede20 body=768 status=ok
// SIG undefined FUN_1451ede20(void)

byte FUN_1451ede20(longlong param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  longlong lVar6;
  ulonglong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong local_70;
  longlong *local_68;
  ulonglong *local_60;
  byte local_58;
  ulonglong local_50;
  longlong *local_48;
  ulonglong *local_40;
  byte local_38;
  ulonglong uVar7;
  
  uVar17 = 0xfffffffffffffffe;
  bVar14 = 0;
  bVar2 = false;
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar11 = param_1 + 4;
  uVar16 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  uVar15 = 0;
  if (uVar16 != 0) {
    do {
      uVar10 = *(uint *)(param_2[3] + 0x38);
      if (((uVar10 & 0xfffffffe) == 4) == (bool)(*(byte *)(uVar11 + 5) & 1)) {
        uVar10 = uVar10 & 0xfffffffd;
        cVar3 = FUN_1451e0ae0(param_2[3],param_2[1],"start %c%c%c%c subtable %d",0x6b,0x65,0x72,0x6e
                              ,(int)param_2[0xc],uVar17);
        if (cVar3 != '\0') {
          if ((!bVar2) && ((*(byte *)(uVar11 + 5) & 4) != 0)) {
            bVar2 = true;
            uVar1 = *(uint *)(param_2[3] + 0x60);
            if (uVar1 != 0) {
              puVar9 = (undefined2 *)(*(longlong *)(param_2[3] + 0x80) + 0x10);
              uVar12 = (ulonglong)uVar1;
              do {
                *(undefined1 *)(puVar9 + 1) = 2;
                uVar5 = 1;
                if ((*(uint *)(param_2[3] + 0x38) & 0xfffffffd) == 4) {
                  uVar5 = 0xffff;
                }
                *puVar9 = uVar5;
                puVar9 = puVar9 + 10;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          if (uVar10 == 5) {
            FUN_144b61ad0(param_2[3]);
          }
          uVar12 = 0;
          if (uVar15 < uVar16 - 1) {
            uVar12 = uVar11;
          }
          uVar7 = *(ulonglong *)(param_2[9] + 0x10);
          param_2[5] = uVar7;
          uVar13 = *(uint *)(param_2[9] + 0x18) + uVar7;
          param_2[6] = uVar13;
          if (uVar12 != 0) {
            if ((uVar12 < uVar7) || (uVar13 <= uVar12)) {
              lVar6 = 0;
              param_2[5] = 0;
            }
            else {
              param_2[5] = uVar12;
              uVar8 = (ulonglong)CONCAT11(*(undefined1 *)(uVar12 + 2),*(undefined1 *)(uVar12 + 3));
              uVar7 = uVar13 - uVar12;
              if (uVar8 <= uVar13 - uVar12) {
                uVar7 = uVar8;
              }
              lVar6 = uVar7 + uVar12;
            }
            param_2[6] = lVar6;
          }
          cVar3 = *(char *)(uVar11 + 4);
          if (cVar3 == '\0') {
            if ((*(byte *)(*param_2 + 0xb8) & 1) == 0) {
              bVar4 = 0;
            }
            else {
              local_40 = &local_50;
              local_38 = *(byte *)(uVar11 + 5) >> 2 & 1;
              local_50 = uVar11;
              local_48 = param_2;
              FUN_1451f8100(&local_40,param_2[1],param_2[3],*(undefined4 *)(*param_2 + 0xb0),1);
LAB_1451ee075:
              bVar4 = 1;
            }
          }
          else if ((cVar3 == '\x01') || (cVar3 != '\x02')) {
            bVar4 = 0;
          }
          else {
            if ((*(byte *)(*param_2 + 0xb8) & 1) != 0) {
              local_60 = &local_70;
              local_58 = *(byte *)(uVar11 + 5) >> 2 & 1;
              local_70 = uVar11;
              local_68 = param_2;
              FUN_1451f7e40(&local_60,param_2[1],param_2[3],*(undefined4 *)(*param_2 + 0xb0),1);
              goto LAB_1451ee075;
            }
            bVar4 = 0;
          }
          bVar14 = bVar14 | bVar4;
          lVar6 = *(longlong *)(param_2[9] + 0x10);
          param_2[5] = lVar6;
          param_2[6] = (ulonglong)*(uint *)(param_2[9] + 0x18) + lVar6;
          if (uVar10 == 5) {
            FUN_144b61ad0(param_2[3]);
          }
          FUN_1451e0ae0(param_2[3],param_2[1],"end %c%c%c%c subtable %d",0x6b,0x65,0x72,0x6e,
                        (int)param_2[0xc]);
        }
      }
      uVar11 = uVar11 + (ulonglong)*(byte *)(uVar11 + 2) * 0x100 + (ulonglong)*(byte *)(uVar11 + 3);
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar16);
  }
  return bVar14;
}



// FUNCTION 1451ee120 FUN_1451ee120 body=377 status=ok
// SIG undefined FUN_1451ee120(void)

ulonglong FUN_1451ee120(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar2 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_144e2c5c0(param_2,(byte *)(param_1 + 2),2);
    if ((char)uVar2 != '\0') {
      lVar5 = 0;
      uVar2 = param_1 + 4;
      uVar8 = 0;
      uVar7 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
      if (uVar7 != 0) {
        do {
          uVar3 = FUN_144e2c5c0(param_2,uVar2,6);
          if ((char)uVar3 == '\0') {
LAB_1451ee283:
            return uVar3 & 0xffffffffffffff00;
          }
          uVar3 = 0;
          if (uVar8 < uVar7 - 1) {
            uVar3 = uVar2;
          }
          uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x28) + 0x10);
          *(ulonglong *)(param_2 + 8) = uVar4;
          uVar9 = *(uint *)(*(longlong *)(param_2 + 0x28) + 0x18) + uVar4;
          *(ulonglong *)(param_2 + 0x10) = uVar9;
          if (uVar3 != 0) {
            if ((uVar3 < uVar4) || (uVar9 <= uVar3)) {
              *(undefined8 *)(param_2 + 0x10) = 0;
              *(undefined8 *)(param_2 + 8) = 0;
            }
            else {
              *(ulonglong *)(param_2 + 8) = uVar3;
              uVar6 = (ulonglong)CONCAT11(*(undefined1 *)(uVar3 + 2),*(undefined1 *)(uVar3 + 3));
              uVar4 = uVar9 - uVar3;
              if (uVar6 <= uVar9 - uVar3) {
                uVar4 = uVar6;
              }
              *(ulonglong *)(param_2 + 0x10) = uVar4 + uVar3;
            }
          }
          cVar1 = FUN_1451ee2a0(uVar2,param_2);
          if (cVar1 == '\0') {
            lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
            *(longlong *)(param_2 + 8) = lVar5;
            uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x28) + 0x18) + lVar5;
            *(ulonglong *)(param_2 + 0x10) = uVar3;
            goto LAB_1451ee283;
          }
          uVar8 = uVar8 + 1;
          uVar2 = uVar2 + *(byte *)(uVar2 + 3) + (ulonglong)*(byte *)(uVar2 + 2) * 0x100;
          lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
          *(longlong *)(param_2 + 8) = lVar5;
          lVar5 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x28) + 0x18) + lVar5;
          *(longlong *)(param_2 + 0x10) = lVar5;
        } while (uVar8 < uVar7);
      }
      return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1451ee2a0 FUN_1451ee2a0 body=191 status=ok
// SIG undefined FUN_1451ee2a0(void)

ulonglong FUN_1451ee2a0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_144e2c5c0(param_2,param_1,6);
  if (((char)uVar3 != '\0') &&
     (uVar3 = 0,
     5 < (ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)))) {
    uVar3 = FUN_144e2c5c0(param_2,param_1,
                          (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3));
    if ((char)uVar3 != '\0') {
      if (*(byte *)(param_1 + 4) == 0) {
        uVar3 = FUN_1451f4c90(param_2,param_1);
        return uVar3;
      }
      uVar1 = (uint)*(byte *)(param_1 + 4);
      iVar2 = 0;
      if (uVar1 != 1) {
        if (uVar1 == 2) {
          uVar3 = FUN_1451ee900(param_1,param_2);
          return uVar3;
        }
        iVar2 = uVar1 - 3;
      }
      return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1451ee360 FUN_1451ee360 body=246 status=ok
// SIG undefined FUN_1451ee360(void)

int FUN_1451ee360(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  ulonglong uVar5;
  
  lVar1 = param_1 + 0xe;
  iVar8 = 0;
  iVar7 = (uint)*(byte *)(param_1 + 6) * 0x100 + (*(byte *)(param_1 + 7) - 1);
  if (-1 < iVar7) {
    do {
      uVar3 = (uint)(iVar7 + iVar8) >> 1;
      uVar5 = (ulonglong)uVar3;
      lVar2 = lVar1 + uVar5 * 6;
      uVar4 = (uint)(ushort)((ushort)*(byte *)(lVar1 + uVar5 * 6) * 0x100 +
                            (ushort)*(byte *)(param_1 + 0xf + uVar5 * 6));
      if (param_2 < uVar4) {
        uVar4 = 0xffffffff;
LAB_1451ee403:
        bVar9 = (int)uVar4 < 0;
      }
      else {
        uVar4 = (uint)(param_2 != uVar4);
        bVar9 = false;
        if (uVar4 == 0) {
          uVar4 = (uint)(ushort)((ushort)*(byte *)(lVar2 + 3) + (ushort)*(byte *)(lVar2 + 2) * 0x100
                                );
          if (param_3 < uVar4) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(param_3 != uVar4);
          }
          goto LAB_1451ee403;
        }
      }
      if (bVar9) {
        iVar7 = uVar3 - 1;
      }
      else {
        if ((int)uVar4 < 1) {
          puVar6 = (undefined1 *)(lVar1 + (ulonglong)uVar3 * 6);
          goto LAB_1451ee421;
        }
        iVar8 = uVar3 + 1;
      }
    } while (iVar8 <= iVar7);
  }
  puVar6 = &DAT_149a1f1a0;
LAB_1451ee421:
  return (int)(short)((ushort)(byte)puVar6[5] + (ushort)(byte)puVar6[4] * 0x100);
}



// FUNCTION 1451ee460 FUN_1451ee460 body=885 status=ok
// SIG undefined FUN_1451ee460(void)

undefined8 FUN_1451ee460(byte *param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  uint local_res20;
  uint local_48;
  
  cVar3 = FUN_144e2c5c0(param_2,param_1,8);
  if ((((cVar3 == '\0') || ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) < 4)) ||
      (cVar3 = FUN_144e2c5c0(param_2,param_1 + 2,2), cVar3 == '\0')) ||
     ((cVar3 = FUN_144e2c5c0(param_2,param_1,(uint)param_1[2] * 0x100 + (uint)param_1[3]),
      cVar3 == '\0' ||
      (cVar3 = FUN_1451f8440(param_1 + (ulonglong)param_1[3] + (ulonglong)param_1[2] * 0x100),
      cVar3 == '\0')))) {
    return 0;
  }
  pbVar18 = param_1 + (ulonglong)param_1[5] + (ulonglong)param_1[4] * 0x100;
  pbVar7 = param_1 + (ulonglong)param_1[7] + (ulonglong)param_1[6] * 0x100;
  uVar12 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  uVar5 = 0;
  local_48 = 0;
  local_res20 = 0;
  uVar10 = uVar5;
  uVar14 = uVar5;
  uVar16 = uVar5;
  uVar17 = uVar5;
  do {
    uVar11 = (uint)uVar17;
    iVar15 = (int)uVar16;
    iVar13 = (int)uVar14;
    if ((int)uVar11 < (int)uVar5) {
      if ((uVar12 != 0) && ((uint)(0xffffffff / (ulonglong)uVar12) <= uVar11)) {
        return 0;
      }
      pbVar9 = pbVar18 + uVar11 * uVar12;
      if ((uVar12 != 0) && ((uint)(0xffffffff / (ulonglong)uVar12) <= -uVar11)) {
        return 0;
      }
      cVar3 = FUN_144e2c5c0(param_2,pbVar9,-uVar11 * uVar12);
      if (cVar3 == '\0') {
        return 0;
      }
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (uVar11 - local_res20);
      if (*(int *)(param_2 + 0x18) < 1) {
        return 0;
      }
      pbVar8 = pbVar18;
      uVar5 = uVar10;
      if (pbVar18 < pbVar9) {
        return 0;
      }
      while (uVar10 = uVar5, pbVar9 < pbVar8) {
        pbVar1 = pbVar8 + -1;
        pbVar8 = pbVar8 + -1;
        uVar5 = (ulonglong)(*pbVar1 + 1);
        if (*pbVar1 + 1 < (uint)uVar10) {
          uVar5 = uVar10;
        }
      }
      local_res20 = uVar11;
      if (iVar13 <= iVar15) goto LAB_1451ee666;
    }
    else {
      if (iVar15 < iVar13) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar10;
        }
        return 1;
      }
LAB_1451ee666:
      uVar11 = iVar15 + 1;
      if ((uVar12 != 0) && ((uint)(0xffffffff / (ulonglong)uVar12) <= uVar11)) {
        return 0;
      }
      cVar3 = FUN_144e2c5c0(param_2,pbVar18,uVar11 * uVar12);
      if (cVar3 == '\0') {
        return 0;
      }
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (iVar13 - iVar15) + -1;
      if (*(int *)(param_2 + 0x18) < 1) {
        return 0;
      }
      if ((uVar12 != 0) && ((uint)(0xffffffff / (ulonglong)uVar12) <= uVar11)) {
        return 0;
      }
      if (pbVar18 + uVar11 * uVar12 < pbVar18) {
        return 0;
      }
      pbVar9 = pbVar18 + iVar13 * uVar12;
      uVar14 = uVar10;
      while (uVar10 = uVar14, pbVar9 < pbVar18 + uVar11 * uVar12) {
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar14 = (ulonglong)(bVar2 + 1);
        if (bVar2 + 1 < (uint)uVar10) {
          uVar14 = uVar10;
        }
      }
      uVar14 = (ulonglong)uVar11;
    }
    uVar11 = (uint)uVar10;
    if (0x3ffffffe < uVar11) {
      return 0;
    }
    cVar3 = FUN_144e2c5c0(param_2,pbVar7,uVar11 * 4);
    if (cVar3 == '\0') {
      return 0;
    }
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (local_48 - uVar11);
    if (*(int *)(param_2 + 0x18) < 1) {
      return 0;
    }
    pbVar9 = pbVar7 + (ulonglong)local_48 * 4;
    if (pbVar9 < pbVar7 + uVar10 * 4) {
      do {
        bVar2 = *pbVar9;
        pbVar8 = pbVar9 + 1;
        pbVar9 = pbVar9 + 4;
        uVar4 = (int)(((uint)*pbVar8 + (uint)bVar2 * 0x100) -
                     ((uint)param_1[5] + (uint)param_1[4] * 0x100)) /
                (int)((uint)*param_1 * 0x100 + (uint)param_1[1]);
        uVar6 = uVar4;
        if ((int)(uint)uVar17 < (int)uVar4) {
          uVar6 = (uint)uVar17;
        }
        uVar17 = (ulonglong)uVar6;
        if ((int)uVar4 < (int)(uint)uVar16) {
          uVar4 = (uint)uVar16;
        }
        uVar16 = (ulonglong)uVar4;
      } while (pbVar9 < pbVar7 + uVar10 * 4);
    }
    uVar5 = (ulonglong)local_res20;
    local_48 = uVar11;
  } while( true );
}



// FUNCTION 1451ee7e0 FUN_1451ee7e0 body=288 status=ok
// SIG undefined FUN_1451ee7e0(void)

int FUN_1451ee7e0(longlong param_1,int param_2,int param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  pbVar4 = (byte *)((ulonglong)*(byte *)(param_1 + 9) +
                   (ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1);
  uVar2 = (param_2 + (uint)*pbVar4 * -0x100) - (uint)pbVar4[1];
  if (uVar2 < (uint)pbVar4[2] * 0x100 + (uint)pbVar4[3]) {
    uVar6 = (ulonglong)CONCAT11(pbVar4[(ulonglong)uVar2 * 2 + 4],pbVar4[(ulonglong)uVar2 * 2 + 5]);
  }
  else {
    uVar6 = 0;
  }
  pbVar4 = (byte *)((ulonglong)*(byte *)(param_1 + 0xb) +
                   (ulonglong)*(byte *)(param_1 + 10) * 0x100 + param_1);
  uVar2 = (param_3 + (uint)*pbVar4 * -0x100) - (uint)pbVar4[1];
  if (uVar2 < (uint)pbVar4[3] + (uint)pbVar4[2] * 0x100) {
    uVar5 = (ulonglong)CONCAT11(pbVar4[(ulonglong)uVar2 * 2 + 4],pbVar4[(ulonglong)uVar2 * 2 + 5]);
  }
  pbVar3 = (byte *)((ulonglong)*(byte *)(param_1 + 0xd) +
                   (ulonglong)*(byte *)(param_1 + 0xc) * 0x100 + param_1);
  pbVar4 = &DAT_149a1f1a0;
  if (pbVar3 <= pbVar3 + (uVar6 + (uVar5 - (longlong)pbVar3) + param_1 >> 1 & 0xffffffff) * 2) {
    pbVar4 = pbVar3 + (uVar6 + (uVar5 - (longlong)pbVar3) + param_1 >> 1 & 0xffffffff) * 2;
  }
  cVar1 = FUN_144e2c5c0(param_4 + 0x20,pbVar4,2);
  if (cVar1 == '\0') {
    return 0;
  }
  return (int)(short)((ushort)pbVar4[1] + (ushort)*pbVar4 * 0x100);
}



// FUNCTION 1451ee900 FUN_1451ee900 body=132 status=ok
// SIG undefined FUN_1451ee900(void)

undefined8 FUN_1451ee900(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0xe);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451ee990(param_1 + 8,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451ee990(param_1 + 10,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_144e2c5c0(param_2,param_1,
                              (uint)*(byte *)(param_1 + 0xc) * 0x100 +
                              (uint)*(byte *)(param_1 + 0xd));
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451ee990 FUN_1451ee990 body=140 status=ok
// SIG undefined FUN_1451ee990(void)

undefined8 FUN_1451ee990(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451f83c0((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100 + param_3,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451eea20 FUN_1451eea20 body=107 status=ok
// SIG undefined FUN_1451eea20(void)

ulonglong FUN_1451eea20(longlong param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)(param_1 + 8);
  uVar2 = 0;
  uVar3 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar3 != 0) {
    do {
      if (puVar1[5] == '\x01') {
        return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + ((ulonglong)CONCAT11(*puVar1,puVar1[1]) * 0x100 + (ulonglong)(byte)puVar1[2]
                        ) * 0x100 + (ulonglong)(byte)puVar1[3];
    } while (uVar2 < uVar3);
  }
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451eea90 FUN_1451eea90 body=107 status=ok
// SIG undefined FUN_1451eea90(void)

ulonglong FUN_1451eea90(longlong param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)(param_1 + 8);
  uVar2 = 0;
  uVar3 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar3 != 0) {
    do {
      if ((puVar1[4] & 0x40) != 0) {
        return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + ((ulonglong)CONCAT11(*puVar1,puVar1[1]) * 0x100 + (ulonglong)(byte)puVar1[2]
                        ) * 0x100 + (ulonglong)(byte)puVar1[3];
    } while (uVar2 < uVar3);
  }
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451eeb00 FUN_1451eeb00 body=877 status=ok
// SIG undefined FUN_1451eeb00(void)

byte FUN_1451eeb00(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined1 *local_70;
  longlong *local_68;
  undefined1 **local_60;
  byte local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined1 **local_40;
  byte local_38;
  
  uVar18 = 0xfffffffffffffffe;
  bVar15 = 0;
  bVar4 = false;
  *(undefined4 *)(param_2 + 0xc) = 0;
  puVar12 = (undefined1 *)(param_1 + 8);
  uVar16 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
           (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  uVar17 = 0;
  if (uVar16 != 0) {
    do {
      if ((puVar12[4] & 0x20) == 0) {
        uVar11 = *(uint *)(param_2[3] + 0x38);
        if (((uVar11 & 0xfffffffe) == 4) == (bool)(~((byte)puVar12[4] >> 7) & 1)) {
          uVar11 = uVar11 & 0xfffffffd;
          cVar5 = FUN_1451e0ae0(param_2[3],param_2[1],"start %c%c%c%c subtable %d",0x6b,0x65,0x72,
                                0x6e,(int)param_2[0xc],uVar18);
          if (cVar5 != '\0') {
            if ((!bVar4) && ((puVar12[4] & 0x40) != 0)) {
              bVar4 = true;
              uVar1 = *(uint *)(param_2[3] + 0x60);
              if (uVar1 != 0) {
                puVar10 = (undefined2 *)(*(longlong *)(param_2[3] + 0x80) + 0x10);
                uVar13 = (ulonglong)uVar1;
                do {
                  *(undefined1 *)(puVar10 + 1) = 2;
                  uVar7 = 1;
                  if ((*(uint *)(param_2[3] + 0x38) & 0xfffffffd) == 4) {
                    uVar7 = 0xffff;
                  }
                  *puVar10 = uVar7;
                  puVar10 = puVar10 + 10;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
            }
            if (uVar11 == 5) {
              FUN_144b61ad0(param_2[3]);
            }
            puVar8 = (undefined1 *)0x0;
            if (uVar17 < uVar16 - 1) {
              puVar8 = puVar12;
            }
            puVar2 = *(undefined1 **)(param_2[9] + 0x10);
            param_2[5] = (longlong)puVar2;
            puVar14 = puVar2 + *(uint *)(param_2[9] + 0x18);
            param_2[6] = (longlong)puVar14;
            if (puVar8 != (undefined1 *)0x0) {
              if ((puVar8 < puVar2) || (puVar14 <= puVar8)) {
                puVar8 = (undefined1 *)0x0;
                param_2[5] = 0;
              }
              else {
                param_2[5] = (longlong)puVar8;
                uVar9 = ((ulonglong)CONCAT11(*puVar8,puVar8[1]) * 0x100 + (ulonglong)(byte)puVar8[2]
                        ) * 0x100 + (ulonglong)(byte)puVar8[3];
                uVar13 = (longlong)puVar14 - (longlong)puVar8;
                if (uVar9 <= (ulonglong)((longlong)puVar14 - (longlong)puVar8)) {
                  uVar13 = uVar9;
                }
                puVar8 = puVar8 + uVar13;
              }
              param_2[6] = (longlong)puVar8;
            }
            cVar5 = puVar12[5];
            if (cVar5 == '\0') {
              if ((*(byte *)(*param_2 + 0xb8) & 1) == 0) {
                bVar6 = 0;
              }
              else {
                local_40 = &local_50;
                local_38 = (byte)puVar12[4] >> 6 & 1;
                local_50 = puVar12;
                local_48 = param_2;
                FUN_1451f7b80(&local_40,param_2[1],param_2[3],*(undefined4 *)(*param_2 + 0xb0),1);
LAB_1451eedad:
                bVar6 = 1;
              }
            }
            else if (cVar5 == '\x01') {
              bVar6 = FUN_1451ef1e0(puVar12,param_2);
            }
            else if (cVar5 == '\x02') {
              if ((*(byte *)(*param_2 + 0xb8) & 1) != 0) {
                local_60 = &local_70;
                local_58 = (byte)puVar12[4] >> 6 & 1;
                local_70 = puVar12;
                local_68 = param_2;
                FUN_1451f72a0(&local_60,param_2[1],param_2[3],*(undefined4 *)(*param_2 + 0xb0),1);
                goto LAB_1451eedad;
              }
              bVar6 = 0;
            }
            else if (cVar5 == '\x03') {
              bVar6 = FUN_1451f4b90(param_2,puVar12);
            }
            else {
              bVar6 = 0;
            }
            bVar15 = bVar15 | bVar6;
            lVar3 = *(longlong *)(param_2[9] + 0x10);
            param_2[5] = lVar3;
            param_2[6] = (ulonglong)*(uint *)(param_2[9] + 0x18) + lVar3;
            if (uVar11 == 5) {
              FUN_144b61ad0(param_2[3]);
            }
            FUN_1451e0ae0(param_2[3],param_2[1],"end %c%c%c%c subtable %d",0x6b,0x65,0x72,0x6e,
                          (int)param_2[0xc]);
          }
        }
      }
      puVar12 = puVar12 + ((ulonglong)CONCAT11(*puVar12,puVar12[1]) * 0x100 +
                          (ulonglong)(byte)puVar12[2]) * 0x100 + (ulonglong)(byte)puVar12[3];
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar16);
  }
  return bVar15;
}



// FUNCTION 1451eee70 FUN_1451eee70 body=369 status=ok
// SIG undefined FUN_1451eee70(void)

ulonglong FUN_1451eee70(byte *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  uVar2 = FUN_144e2c5c0(param_2,param_1,4);
  if (((char)uVar2 != '\0') &&
     (uVar2 = 0,
     0xffff < (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
              (uint)param_1[3])) {
    uVar2 = FUN_144e2c5c0(param_2,param_1 + 4,4);
    if ((char)uVar2 != '\0') {
      pbVar7 = param_1 + 8;
      lVar3 = 0;
      uVar5 = 0;
      uVar6 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar6 != 0) {
        do {
          uVar2 = FUN_144e2c5c0(param_2,pbVar7,8);
          if ((char)uVar2 == '\0') {
LAB_1451eefcb:
            return uVar2 & 0xffffffffffffff00;
          }
          pbVar4 = (byte *)0x0;
          if (uVar5 < uVar6 - 1) {
            pbVar4 = pbVar7;
          }
          FUN_1451f4b10(param_2,pbVar4);
          cVar1 = FUN_1451eeff0(pbVar7,param_2);
          if (cVar1 == '\0') {
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
            *(longlong *)(param_2 + 8) = lVar3;
            uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x28) + 0x18) + lVar3;
            *(ulonglong *)(param_2 + 0x10) = uVar2;
            goto LAB_1451eefcb;
          }
          uVar5 = uVar5 + 1;
          pbVar7 = pbVar7 + ((ulonglong)CONCAT11(*pbVar7,pbVar7[1]) * 0x100 + (ulonglong)pbVar7[2])
                            * 0x100 + (ulonglong)pbVar7[3];
          lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
          *(longlong *)(param_2 + 8) = lVar3;
          lVar3 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x28) + 0x18) + lVar3;
          *(longlong *)(param_2 + 0x10) = lVar3;
        } while (uVar5 < uVar6);
      }
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1451eeff0 FUN_1451eeff0 body=234 status=ok
// SIG undefined FUN_1451eeff0(void)

ulonglong FUN_1451eeff0(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_144e2c5c0(param_2,param_1,8);
  if ((char)uVar2 != '\0') {
    uVar2 = 0;
    if (7 < (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3]) {
      uVar2 = FUN_144e2c5c0(param_2,param_1);
      if ((char)uVar2 != '\0') {
        if (param_1[5] == 0) {
          uVar2 = FUN_1451f4be0(param_2,param_1);
          return uVar2;
        }
        uVar1 = (uint)param_1[5];
        if (uVar1 == 1) {
          uVar2 = FUN_1451f4c40(param_2,param_1);
          return uVar2;
        }
        if (uVar1 == 2) {
          uVar2 = FUN_1451ef3e0(param_1,param_2);
          return uVar2;
        }
        if (uVar1 - 3 != 0) {
          return CONCAT71((uint7)(uint3)(uVar1 - 3 >> 8),1);
        }
        uVar2 = FUN_1451ef560(param_1,param_2);
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1451ef0e0 FUN_1451ef0e0 body=246 status=ok
// SIG undefined FUN_1451ef0e0(void)

int FUN_1451ef0e0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  ulonglong uVar5;
  
  lVar1 = param_1 + 0x10;
  iVar8 = 0;
  iVar7 = (uint)*(byte *)(param_1 + 8) * 0x100 + (*(byte *)(param_1 + 9) - 1);
  if (-1 < iVar7) {
    do {
      uVar3 = (uint)(iVar7 + iVar8) >> 1;
      uVar5 = (ulonglong)uVar3;
      lVar2 = lVar1 + uVar5 * 6;
      uVar4 = (uint)(ushort)((ushort)*(byte *)(lVar1 + uVar5 * 6) * 0x100 +
                            (ushort)*(byte *)(param_1 + 0x11 + uVar5 * 6));
      if (param_2 < uVar4) {
        uVar4 = 0xffffffff;
LAB_1451ef183:
        bVar9 = (int)uVar4 < 0;
      }
      else {
        uVar4 = (uint)(param_2 != uVar4);
        bVar9 = false;
        if (uVar4 == 0) {
          uVar4 = (uint)(ushort)((ushort)*(byte *)(lVar2 + 3) + (ushort)*(byte *)(lVar2 + 2) * 0x100
                                );
          if (param_3 < uVar4) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(param_3 != uVar4);
          }
          goto LAB_1451ef183;
        }
      }
      if (bVar9) {
        iVar7 = uVar3 - 1;
      }
      else {
        if ((int)uVar4 < 1) {
          puVar6 = (undefined1 *)(lVar1 + (ulonglong)uVar3 * 6);
          goto LAB_1451ef1a1;
        }
        iVar8 = uVar3 + 1;
      }
    } while (iVar8 <= iVar7);
  }
  puVar6 = &DAT_149a1f1a0;
LAB_1451ef1a1:
  return (int)(short)((ushort)(byte)puVar6[5] + (ushort)(byte)puVar6[4] * 0x100);
}



// FUNCTION 1451ef1e0 FUN_1451ef1e0 body=199 status=ok
// SIG undefined FUN_1451ef1e0(void)

void FUN_1451ef1e0(longlong param_1,longlong *param_2)

{
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  int local_68;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(byte *)(*param_2 + 0xb8) & 1) == 0) && ((*(byte *)(param_1 + 4) & 0x40) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  local_48 = (ulonglong)*(byte *)(param_1 + 0x11) + 8 +
             (ulonglong)*(byte *)(param_1 + 0x10) * 0x100 + param_1;
  local_1c = *(byte *)(param_1 + 4) >> 6 & 1;
  local_20 = 0;
  local_78 = param_1 + 8;
  local_70 = param_2[3];
  local_68 = *(int *)(*(longlong *)(param_2[1] + 0x18) + 0x30);
  local_58 = param_2;
  local_50 = param_1;
  if (local_68 == -1) {
    local_68 = FUN_144e2c9d0();
  }
  FUN_1451f7830(&local_78,&local_58);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1451ef2c0 FUN_1451ef2c0 body=288 status=ok
// SIG undefined FUN_1451ef2c0(void)

int FUN_1451ef2c0(longlong param_1,int param_2,int param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  pbVar4 = (byte *)((ulonglong)*(byte *)(param_1 + 0xb) +
                   (ulonglong)*(byte *)(param_1 + 10) * 0x100 + param_1);
  uVar2 = (param_2 + (uint)*pbVar4 * -0x100) - (uint)pbVar4[1];
  if (uVar2 < (uint)pbVar4[2] * 0x100 + (uint)pbVar4[3]) {
    uVar6 = (ulonglong)CONCAT11(pbVar4[(ulonglong)uVar2 * 2 + 4],pbVar4[(ulonglong)uVar2 * 2 + 5]);
  }
  else {
    uVar6 = 0;
  }
  pbVar4 = (byte *)((ulonglong)*(byte *)(param_1 + 0xd) +
                   (ulonglong)*(byte *)(param_1 + 0xc) * 0x100 + param_1);
  uVar2 = (param_3 + (uint)*pbVar4 * -0x100) - (uint)pbVar4[1];
  if (uVar2 < (uint)pbVar4[3] + (uint)pbVar4[2] * 0x100) {
    uVar5 = (ulonglong)CONCAT11(pbVar4[(ulonglong)uVar2 * 2 + 4],pbVar4[(ulonglong)uVar2 * 2 + 5]);
  }
  pbVar3 = (byte *)((ulonglong)*(byte *)(param_1 + 0xf) +
                   (ulonglong)*(byte *)(param_1 + 0xe) * 0x100 + param_1);
  pbVar4 = &DAT_149a1f1a0;
  if (pbVar3 <= pbVar3 + (uVar6 + (uVar5 - (longlong)pbVar3) + param_1 >> 1 & 0xffffffff) * 2) {
    pbVar4 = pbVar3 + (uVar6 + (uVar5 - (longlong)pbVar3) + param_1 >> 1 & 0xffffffff) * 2;
  }
  cVar1 = FUN_144e2c5c0(param_4 + 0x20,pbVar4,2);
  if (cVar1 == '\0') {
    return 0;
  }
  return (int)(short)((ushort)pbVar4[1] + (ushort)*pbVar4 * 0x100);
}



// FUNCTION 1451ef3e0 FUN_1451ef3e0 body=132 status=ok
// SIG undefined FUN_1451ef3e0(void)

undefined8 FUN_1451ef3e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0x10);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451ee990(param_1 + 10,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451ee990(param_1 + 0xc,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_144e2c5c0(param_2,param_1,
                              (uint)*(byte *)(param_1 + 0xe) * 0x100 +
                              (uint)*(byte *)(param_1 + 0xf));
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451ef470 FUN_1451ef470 body=234 status=ok
// SIG undefined FUN_1451ef470(void)

int FUN_1451ef470(longlong param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  byte *pbVar8;
  uint uVar9;
  longlong lVar10;
  
  bVar1 = *(byte *)(param_1 + 10);
  lVar10 = (ulonglong)((uint)bVar1 + (uint)bVar1) + param_1 + 0xe;
  uVar9 = (uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9);
  uVar6 = (uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9);
  bVar2 = *(byte *)(param_1 + 0xc);
  lVar7 = (ulonglong)uVar9 + lVar10;
  pbVar8 = &DAT_149a1f1a0;
  pbVar4 = &DAT_149a1f1a0;
  if (param_2 < uVar9) {
    pbVar4 = (byte *)(lVar10 + (ulonglong)param_2);
  }
  pbVar5 = &DAT_149a1f1a0;
  if (param_3 < uVar6) {
    pbVar5 = (byte *)(lVar7 + (ulonglong)param_3);
  }
  if (((uint)*pbVar4 < (uint)*(byte *)(param_1 + 0xb)) && ((uint)*pbVar5 < (uint)bVar2)) {
    uVar9 = (uint)bVar2 * (uint)*pbVar4 + (uint)*pbVar5;
    if (uVar9 < (uint)*(byte *)(param_1 + 0xb) * (uint)bVar2) {
      pbVar4 = (byte *)((ulonglong)uVar9 + (ulonglong)uVar6 + lVar7);
    }
    else {
      pbVar4 = &DAT_149a1f1a0;
    }
    if (*pbVar4 < bVar1) {
      pbVar8 = (byte *)(param_1 + 0xe + (ulonglong)*pbVar4 * 2);
    }
    iVar3 = (int)(short)((ushort)pbVar8[1] + (ushort)*pbVar8 * 0x100);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



// FUNCTION 1451ef560 FUN_1451ef560 body=113 status=ok
// SIG undefined FUN_1451ef560(void)

undefined8 FUN_1451ef560(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0xe);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 0xe,
                          (uint)*(byte *)(param_1 + 0xc) * (uint)*(byte *)(param_1 + 0xb) +
                          ((uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9) +
                          (uint)*(byte *)(param_1 + 10)) * 2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451ef5e0 FUN_1451ef5e0 body=122 status=ok
// SIG undefined FUN_1451ef5e0(void)

undefined8 FUN_1451ef5e0(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      return 1;
    }
    uVar1 = FUN_1451eee70(param_1,param_2);
    return uVar1;
  }
  uVar1 = FUN_1451ee120(param_1,param_2);
  return uVar1;
}



// FUNCTION 1451ef660 FUN_1451ef660 body=132 status=ok
// SIG undefined FUN_1451ef660(void)

undefined8 FUN_1451ef660(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) == 1) {
    if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
      pbVar1 = &DAT_149a1f1a0;
    }
    else {
      pbVar1 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                       (ulonglong)*(byte *)(param_1 + 3));
    }
    iVar2 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
    if (iVar2 == 1) {
      iVar2 = FUN_1451e2130(pbVar1,**(undefined4 **)(param_2 + 8));
    }
    else {
      if (iVar2 != 2) {
        return 0;
      }
      iVar2 = FUN_1451e22a0();
    }
    if (iVar2 != -1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451ef6f0 FUN_1451ef6f0 body=204 status=ok
// SIG undefined FUN_1451ef6f0(void)

undefined8 FUN_1451ef6f0(longlong param_1,longlong param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14);
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  iVar3 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (iVar3 == 1) {
    iVar3 = FUN_1451e2130(pbVar2,iVar1);
  }
  else {
    if (iVar3 != 2) {
      return 0;
    }
    iVar3 = FUN_1451e22a0(pbVar2,iVar1);
  }
  if (iVar3 == -1) {
    return 0;
  }
  FUN_1451e5720(param_2,(uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 +
                                      (ushort)*(byte *)(param_1 + 5)) + iVar1 & 0xffff);
  return 1;
}



// FUNCTION 1451ef7c0 FUN_1451ef7c0 body=132 status=ok
// SIG undefined FUN_1451ef7c0(void)

undefined8 FUN_1451ef7c0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) == 1) {
    if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
      pbVar1 = &DAT_149a1f1a0;
    }
    else {
      pbVar1 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                       (ulonglong)*(byte *)(param_1 + 3));
    }
    iVar2 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
    if (iVar2 == 1) {
      iVar2 = FUN_1451e2130(pbVar1,**(undefined4 **)(param_2 + 8));
    }
    else {
      if (iVar2 != 2) {
        return 0;
      }
      iVar2 = FUN_1451e22a0();
    }
    if (iVar2 != -1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451ef850 FUN_1451ef850 body=250 status=ok
// SIG undefined FUN_1451ef850(void)

undefined8 FUN_1451ef850(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  iVar4 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (iVar4 == 1) {
    uVar1 = FUN_1451e2130(pbVar2,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar4 != 2) {
      return 0;
    }
    uVar1 = FUN_1451e22a0();
  }
  if ((uVar1 != 0xffffffff) &&
     (uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5))) {
    if (uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
      pbVar3 = (byte *)(param_1 + ((ulonglong)uVar1 + 3) * 2);
    }
    FUN_1451e5720(param_2,(uint)*pbVar3 * 0x100 + (uint)pbVar3[1]);
    return 1;
  }
  return 0;
}



// FUNCTION 1451ef950 FUN_1451ef950 body=115 status=ok
// SIG undefined FUN_1451ef950(void)

undefined8 FUN_1451ef950(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,2);
    if (cVar1 != '\0') {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 6,
                            ((uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) *
                            2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451ef9d0 FUN_1451ef9d0 body=278 status=ok
// SIG undefined FUN_1451ef9d0(void)

undefined8 FUN_1451ef9d0(byte *param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar3 == 1) {
    FUN_1451e5720(param_2,(uint)param_1[2] * 0x100 + (uint)param_1[3]);
    return 1;
  }
  if (uVar3 != 0) {
    uVar4 = 0;
    uVar2 = *(ushort *)
             (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) + 0xc +
             (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14);
    if (uVar3 != 0) {
      do {
        *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) + 0xe +
                 (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14) =
             (byte)uVar4 & 0xf;
        FUN_1451e58f0(param_2,(uint)param_1[3] + (uint)param_1[2] * 0x100,(uVar2 >> 2 & 1) * 2);
        uVar4 = uVar4 + 1;
        param_1 = param_1 + 2;
      } while (uVar4 < uVar3);
    }
    piVar1 = (int *)(*(longlong *)(param_2 + 0x90) + 0x5c);
    *piVar1 = *piVar1 + 1;
    return 1;
  }
  FUN_144b62000(*(undefined8 *)(param_2 + 0x90));
  return 1;
}



// FUNCTION 1451efaf0 FUN_1451efaf0 body=132 status=ok
// SIG undefined FUN_1451efaf0(void)

undefined8 FUN_1451efaf0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) == 1) {
    if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
      pbVar1 = &DAT_149a1f1a0;
    }
    else {
      pbVar1 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                       (ulonglong)*(byte *)(param_1 + 3));
    }
    iVar2 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
    if (iVar2 == 1) {
      iVar2 = FUN_1451e2130(pbVar1,**(undefined4 **)(param_2 + 8));
    }
    else {
      if (iVar2 != 2) {
        return 0;
      }
      iVar2 = FUN_1451e22a0();
    }
    if (iVar2 != -1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451efb80 FUN_1451efb80 body=277 status=ok
// SIG undefined FUN_1451efb80(void)

ulonglong FUN_1451efb80(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar3 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  uVar1 = 0;
  iVar4 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (iVar4 == 1) {
    uVar1 = FUN_1451e2130(pbVar2,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar4 != 2) goto LAB_1451efc24;
    uVar1 = FUN_1451e22a0();
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
      pbVar2 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar2 = &DAT_149a1f1a0;
    }
    if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
      puVar3 = (undefined1 *)((ulonglong)*pbVar2 * 0x100 + param_1 + (ulonglong)pbVar2[1]);
    }
    uVar1 = FUN_1451ef9d0(puVar3,param_2);
    return uVar1;
  }
LAB_1451efc24:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451efca0 FUN_1451efca0 body=151 status=ok
// SIG undefined FUN_1451efca0(void)

bool FUN_1451efca0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451efd40 FUN_1451efd40 body=350 status=ok
// SIG undefined FUN_1451efd40(void)

undefined8 FUN_1451efd40(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar2 = param_1 + 2;
    cVar1 = FUN_144e2c5c0(param_2,pbVar2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      uVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (uVar5 != 0) {
        do {
          cVar1 = FUN_1451efca0(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
            pbVar3 = (byte *)((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1]);
            cVar1 = FUN_144e2c5c0(param_2,pbVar3,2);
            if ((cVar1 == '\0') ||
               (cVar1 = FUN_144e2c5c0(param_2,pbVar3 + 2,
                                      ((uint)*pbVar3 * 0x100 + (uint)pbVar3[1]) * 2), cVar1 == '\0')
               ) {
              cVar1 = FUN_144e2d280(param_2,pbVar2,2);
              if (cVar1 == '\0') {
                return 0;
              }
              pbVar2[0] = 0;
              pbVar2[1] = 0;
            }
          }
          uVar4 = uVar4 + 1;
          pbVar2 = pbVar2 + 2;
        } while (uVar4 < uVar5);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451efea0 FUN_1451efea0 body=233 status=ok
// SIG undefined FUN_1451efea0(void)

undefined8 FUN_1451efea0(byte *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar4 != 0) {
    uVar3 = *(uint *)(param_2 + 0xb4);
    if (uVar3 == 0) {
      bVar2 = 0;
    }
    else {
      iVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      bVar2 = (byte)iVar1;
    }
    uVar3 = (uVar3 & *(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) + 4 +
                              (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)) >>
            (bVar2 & 0x1f);
    if ((uVar3 == 0xff) && (*(char *)(param_2 + 0xcf) != '\0')) {
      uVar3 = (uint)(*(int *)(param_2 + 0xd0) * 0xbc8f) % 0x7fffffff;
      *(uint *)(param_2 + 0xd0) = uVar3;
      uVar3 = uVar3 % uVar4 + 1;
    }
    if ((uVar3 <= uVar4) && (uVar3 != 0)) {
      if (uVar3 - 1 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
        param_1 = param_1 + ((ulonglong)(uVar3 - 1) + 1) * 2;
      }
      else {
        param_1 = &DAT_149a1f1a0;
      }
      FUN_1451e5720(param_2,(uint)*param_1 * 0x100 + (uint)param_1[1]);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451eff90 FUN_1451eff90 body=132 status=ok
// SIG undefined FUN_1451eff90(void)

undefined8 FUN_1451eff90(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) == 1) {
    if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
      pbVar1 = &DAT_149a1f1a0;
    }
    else {
      pbVar1 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                       (ulonglong)*(byte *)(param_1 + 3));
    }
    iVar2 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
    if (iVar2 == 1) {
      iVar2 = FUN_1451e2130(pbVar1,**(undefined4 **)(param_2 + 8));
    }
    else {
      if (iVar2 != 2) {
        return 0;
      }
      iVar2 = FUN_1451e22a0();
    }
    if (iVar2 != -1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f0020 FUN_1451f0020 body=277 status=ok
// SIG undefined FUN_1451f0020(void)

ulonglong FUN_1451f0020(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar3 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  uVar1 = 0;
  iVar4 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (iVar4 == 1) {
    uVar1 = FUN_1451e2130(pbVar2,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar4 != 2) goto LAB_1451f00c4;
    uVar1 = FUN_1451e22a0();
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
      pbVar2 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar2 = &DAT_149a1f1a0;
    }
    if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
      puVar3 = (undefined1 *)((ulonglong)*pbVar2 * 0x100 + param_1 + (ulonglong)pbVar2[1]);
    }
    uVar1 = FUN_1451efea0(puVar3,param_2);
    return uVar1;
  }
LAB_1451f00c4:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451f0140 FUN_1451f0140 body=151 status=ok
// SIG undefined FUN_1451f0140(void)

bool FUN_1451f0140(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451f01e0 FUN_1451f01e0 body=350 status=ok
// SIG undefined FUN_1451f01e0(void)

undefined8 FUN_1451f01e0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar2 = param_1 + 2;
    cVar1 = FUN_144e2c5c0(param_2,pbVar2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      uVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (uVar5 != 0) {
        do {
          cVar1 = FUN_1451f0140(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
            pbVar3 = (byte *)((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1]);
            cVar1 = FUN_144e2c5c0(param_2,pbVar3,2);
            if ((cVar1 == '\0') ||
               (cVar1 = FUN_144e2c5c0(param_2,pbVar3 + 2,
                                      ((uint)*pbVar3 * 0x100 + (uint)pbVar3[1]) * 2), cVar1 == '\0')
               ) {
              cVar1 = FUN_144e2d280(param_2,pbVar2,2);
              if (cVar1 == '\0') {
                return 0;
              }
              pbVar2[0] = 0;
              pbVar2[1] = 0;
            }
          }
          uVar4 = uVar4 + 1;
          pbVar2 = pbVar2 + 2;
        } while (uVar4 < uVar5);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f0340 FUN_1451f0340 body=154 status=ok
// SIG undefined FUN_1451f0340(void)

ulonglong FUN_1451f0340(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3)) {
    return 0;
  }
  uVar3 = 1;
  if (1 < uVar1) {
    do {
      uVar2 = (uint)uVar3;
      if ((uVar2 < (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3)) &&
         (uVar2 != 0)) {
        pbVar4 = (byte *)(param_1 + 2) + ((ulonglong)(uVar2 - 1) + 1) * 2;
      }
      else {
        pbVar4 = &DAT_149a1f1a0;
      }
      if (*(int *)(*(longlong *)(param_2 + 8) + uVar3 * 4) !=
          (uint)*pbVar4 * 0x100 + (uint)pbVar4[1]) {
        return uVar3 & 0xffffffffffffff00;
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < uVar1);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 1451f03e0 FUN_1451f03e0 body=255 status=ok
// SIG undefined FUN_1451f03e0(void)

void FUN_1451f03e0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 *local_140;
  undefined1 *local_138;
  undefined4 *local_130;
  undefined4 local_128;
  undefined4 local_124 [3];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar2 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_1451e5720(param_2,(uint)*param_1 * 0x100 + (uint)param_1[1]);
    }
    else {
      pbVar3 = param_1 + 4;
      local_128 = 0;
      local_124[0] = 0;
      if ((uint)param_1[2] * 0x100 + (uint)param_1[3] < 2) {
        pbVar3 = &DAT_149a1f1a0;
      }
      local_130 = &local_128;
      local_138 = local_118;
      local_140 = local_124;
      local_148 = 0;
      cVar1 = FUN_1451e5bf0(param_2,iVar2,pbVar3,&LAB_1451e5a60);
      if (cVar1 != '\0') {
        local_140 = (undefined4 *)CONCAT44(local_140._4_4_,local_128);
        local_148 = CONCAT44(local_148._4_4_,(uint)*param_1 * 0x100 + (uint)param_1[1]);
        FUN_1451e5e50(param_2,iVar2,local_118,local_124[0]);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_168);
}



// FUNCTION 1451f0500 FUN_1451f0500 body=187 status=ok
// SIG undefined FUN_1451f0500(void)

undefined8 FUN_1451f0500(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar4 != 0) {
    if (uVar4 != 0) goto LAB_1451f054e;
    pbVar2 = &DAT_149a1f1a0;
    while( true ) {
      if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == 0) {
        pbVar2 = &DAT_149a1f1a0;
      }
      else {
        pbVar2 = param_1 + (ulonglong)pbVar2[1] + (ulonglong)*pbVar2 * 0x100;
      }
      cVar1 = FUN_1451f0340(pbVar2,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
      if (uVar4 <= uVar3) break;
LAB_1451f054e:
      pbVar2 = param_1 + ((ulonglong)uVar3 + 1) * 2;
    }
  }
  return 0;
}



// FUNCTION 1451f05c0 FUN_1451f05c0 body=210 status=ok
// SIG undefined FUN_1451f05c0(void)

undefined8 FUN_1451f05c0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar4 != 0) {
    do {
      if (uVar3 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
        pbVar2 = param_1 + ((ulonglong)uVar3 + 1) * 2;
      }
      else {
        pbVar2 = &DAT_149a1f1a0;
      }
      if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == 0) {
        pbVar2 = &DAT_149a1f1a0;
      }
      else {
        pbVar2 = param_1 + (ulonglong)pbVar2[1] + (ulonglong)*pbVar2 * 0x100;
      }
      cVar1 = FUN_1451f03e0(pbVar2,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return 0;
}



// FUNCTION 1451f06a0 FUN_1451f06a0 body=151 status=ok
// SIG undefined FUN_1451f06a0(void)

bool FUN_1451f06a0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451f0740 FUN_1451f0740 body=331 status=ok
// SIG undefined FUN_1451f0740(void)

undefined8 FUN_1451f0740(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar2 = param_1 + 2;
    cVar1 = FUN_144e2c5c0(param_2,pbVar2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      uVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (uVar5 != 0) {
        do {
          cVar1 = FUN_1451f06a0(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
            lVar3 = (ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1];
            cVar1 = FUN_144e2c5c0(param_2,lVar3,2);
            if ((cVar1 == '\0') || (cVar1 = FUN_1451e7940(lVar3 + 2,param_2), cVar1 == '\0')) {
              cVar1 = FUN_144e2d280(param_2,pbVar2,2);
              if (cVar1 == '\0') {
                return 0;
              }
              pbVar2[0] = 0;
              pbVar2[1] = 0;
            }
          }
          uVar4 = uVar4 + 1;
          pbVar2 = pbVar2 + 2;
        } while (uVar4 < uVar5);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f0890 FUN_1451f0890 body=259 status=ok
// SIG undefined FUN_1451f0890(void)

ulonglong FUN_1451f0890(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar3 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  uVar1 = 0;
  iVar4 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (iVar4 == 1) {
    uVar1 = FUN_1451e2130(pbVar2,**(undefined4 **)(param_2 + 8));
  }
  else {
    if (iVar4 != 2) goto LAB_1451f0922;
    uVar1 = FUN_1451e22a0();
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
      pbVar2 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar2 = &DAT_149a1f1a0;
    }
    if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
      puVar3 = (undefined1 *)((ulonglong)*pbVar2 * 0x100 + param_1 + (ulonglong)pbVar2[1]);
    }
    uVar1 = FUN_1451f0500(puVar3,param_2);
    return uVar1;
  }
LAB_1451f0922:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451f09a0 FUN_1451f09a0 body=277 status=ok
// SIG undefined FUN_1451f09a0(void)

ulonglong FUN_1451f09a0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar3 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  uVar1 = 0;
  iVar4 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (iVar4 == 1) {
    uVar1 = FUN_1451e2130(pbVar2,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar4 != 2) goto LAB_1451f0a44;
    uVar1 = FUN_1451e22a0();
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
      pbVar2 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar2 = &DAT_149a1f1a0;
    }
    if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
      puVar3 = (undefined1 *)((ulonglong)*pbVar2 * 0x100 + param_1 + (ulonglong)pbVar2[1]);
    }
    uVar1 = FUN_1451f05c0(puVar3,param_2);
    return uVar1;
  }
LAB_1451f0a44:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451f0ac0 FUN_1451f0ac0 body=151 status=ok
// SIG undefined FUN_1451f0ac0(void)

bool FUN_1451f0ac0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451f0b60 FUN_1451f0b60 body=303 status=ok
// SIG undefined FUN_1451f0b60(void)

undefined8 FUN_1451f0b60(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar3 = param_1 + 2;
    cVar1 = FUN_144e2c5c0(param_2,pbVar3,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (uVar4 != 0) {
        do {
          cVar1 = FUN_1451f0ac0(pbVar3,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 0) &&
             (lVar2 = (ulonglong)*pbVar3 * 0x100 + param_3 + (ulonglong)pbVar3[1],
             cVar1 = FUN_1451f0740(lVar2,param_2,lVar2), cVar1 == '\0')) {
            cVar1 = FUN_144e2d280(param_2,pbVar3,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar3[0] = 0;
            pbVar3[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar3 = pbVar3 + 2;
        } while (uVar5 < uVar4);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f0d00 FUN_1451f0d00 body=132 status=ok
// SIG undefined FUN_1451f0d00(void)

undefined8 FUN_1451f0d00(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) == 1) {
    if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
      pbVar1 = &DAT_149a1f1a0;
    }
    else {
      pbVar1 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                       (ulonglong)*(byte *)(param_1 + 3));
    }
    iVar2 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
    if (iVar2 == 1) {
      iVar2 = FUN_1451e2130(pbVar1,**(undefined4 **)(param_2 + 8));
    }
    else {
      if (iVar2 != 2) {
        return 0;
      }
      iVar2 = FUN_1451e22a0();
    }
    if (iVar2 != -1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f0d90 FUN_1451f0d90 body=684 status=ok
// SIG undefined FUN_1451f0d90(void)

undefined8 FUN_1451f0d90(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  
  if (*(int *)(param_2 + 0xc4) != 6) {
    return 0;
  }
  uVar10 = 0;
  pbVar12 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar5 = &DAT_149a1f1a0;
  }
  else {
    pbVar5 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  iVar11 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
  if (iVar11 == 1) {
    uVar4 = FUN_1451e2130(pbVar5,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar11 != 2) {
      return 0;
    }
    uVar4 = FUN_1451e22a0();
  }
  if (uVar4 == 0xffffffff) {
    return 0;
  }
  lVar6 = (ulonglong)*(byte *)(param_1 + 4) * 0x100 + (ulonglong)*(byte *)(param_1 + 5) + 3;
  pbVar5 = (byte *)(param_1 + lVar6 * 2);
  pbVar1 = pbVar5 + ((ulonglong)*(byte *)(param_1 + 1 + lVar6 * 2) + 1 + (ulonglong)*pbVar5 * 0x100)
                    * 2;
  uVar8 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
  lVar6 = *(longlong *)(param_2 + 0x90);
  if (*(char *)(lVar6 + 0x59) == '\0') {
    iVar11 = *(int *)(lVar6 + 0x5c);
  }
  else {
    iVar11 = *(int *)(lVar6 + 100);
  }
  *(int *)(param_2 + 0x40) = iVar11;
  *(uint *)(param_2 + 0x78) = uVar8;
  *(undefined4 *)(param_2 + 0x7c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + 0x90) + 0x60);
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x90);
  if (iVar11 == *(int *)(lVar6 + 0x5c)) {
    uVar7 = *(undefined1 *)
             (*(longlong *)(lVar6 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_2 + 0x5c) = uVar7;
  *(code **)(param_2 + 0x60) = FUN_1451e5ac0;
  *(longlong *)(param_2 + 0x68) = param_1;
  uVar9 = 0;
  *(longlong *)(param_2 + 0x70) = param_1 + 6;
  if (uVar8 != 0) {
    do {
      cVar3 = FUN_1451e5420(param_2 + 0x40);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar8 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
  iVar11 = *(int *)(*(longlong *)(param_2 + 0x90) + 0x5c);
  *(int *)(param_2 + 0x40) = iVar11;
  *(uint *)(param_2 + 0x78) = uVar8;
  *(undefined4 *)(param_2 + 0x7c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + 0x90) + 0x60);
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x90);
  if (iVar11 == *(int *)(lVar6 + 0x5c)) {
    uVar7 = *(undefined1 *)
             (*(longlong *)(lVar6 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_2 + 0x5c) = uVar7;
  *(code **)(param_2 + 0x60) = FUN_1451e5ac0;
  *(longlong *)(param_2 + 0x68) = param_1;
  *(byte **)(param_2 + 0x70) = pbVar5 + 2;
  if (uVar8 != 0) {
    do {
      cVar3 = FUN_1451e5340(param_2 + 0x40);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  FUN_144b62160(*(undefined8 *)(param_2 + 0x90),uVar2,*(int *)(param_2 + 0x40) + 1);
  if (uVar4 < (uint)*pbVar1 * 0x100 + (uint)pbVar1[1]) {
    pbVar12 = pbVar1 + ((ulonglong)uVar4 + 1) * 2;
  }
  FUN_1451e57b0(param_2,(uint)*pbVar12 * 0x100 + (uint)pbVar12[1]);
  return 1;
}



// FUNCTION 1451f1040 FUN_1451f1040 body=161 status=ok
// SIG undefined FUN_1451f1040(void)

ulonglong FUN_1451f1040(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  
  uVar3 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
  if ((char)uVar3 != '\0') {
    puVar1 = (undefined1 *)(param_1 + 4);
    uVar3 = FUN_1451e89c0(puVar1,param_2,param_1);
    if ((char)uVar3 != '\0') {
      uVar2 = CONCAT11(*puVar1,*(undefined1 *)(param_1 + 5));
      pbVar4 = puVar1 + (ulonglong)uVar2 * 2 + 2;
      uVar3 = FUN_1451e89c0(pbVar4,param_2,param_1);
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_1451e2230(pbVar4 + ((ulonglong)*pbVar4 * 0x100 +
                                       (ulonglong)(byte)puVar1[(ulonglong)uVar2 * 2 + 3] + 1) * 2,
                              param_2);
        return uVar3;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1451f10f0 FUN_1451f10f0 body=308 status=ok
// SIG undefined FUN_1451f10f0(void)

bool FUN_1451f10f0(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar3 != 7) {
    return iVar3 == 8;
  }
  pbVar4 = &DAT_149a1f1a0;
  pbVar1 = &DAT_149a1f1a0;
  if ((uint)param_1[4] * 0x100 + (uint)param_1[5] != 0) {
    pbVar1 = param_1 + 6;
  }
  iVar3 = 0;
  if ((ushort)((ushort)*pbVar1 * 0x100 + (ushort)pbVar1[1]) == 0) {
    param_1 = &DAT_149a1f1a0;
  }
  else {
    param_1 = param_1 + (ulonglong)pbVar1[1] + (ulonglong)*pbVar1 * 0x100;
  }
  if (((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) ||
     (iVar3 = (uint)param_1[2] * 0x100 + (uint)param_1[3], iVar3 != 7)) {
    return iVar3 == 8;
  }
  uVar2 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
          (uint)param_1[7];
  if (uVar2 != 0) {
    pbVar4 = param_1 + uVar2;
  }
  while ((uint)*pbVar4 * 0x100 + (uint)pbVar4[1] == 1) {
    iVar3 = (uint)pbVar4[2] * 0x100 + (uint)pbVar4[3];
    if (iVar3 != 7) goto LAB_1451f0cf2;
    uVar2 = (uint)pbVar4[5] * 0x10000 + (uint)pbVar4[6] * 0x100 + (uint)pbVar4[4] * 0x1000000 +
            (uint)pbVar4[7];
    if (uVar2 == 0) {
      pbVar4 = &DAT_149a1f1a0;
    }
    else {
      pbVar4 = pbVar4 + uVar2;
    }
  }
  iVar3 = 0;
LAB_1451f0cf2:
  return iVar3 == 8;
}



// FUNCTION 1451f11c0 FUN_1451f11c0 body=243 status=ok
// SIG undefined FUN_1451f11c0(void)

undefined1 FUN_1451f11c0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  puVar3 = (undefined1 *)**(undefined8 **)(*(longlong *)(param_1 + 0x88) + 0xc0);
  puVar9 = &DAT_149a1f1a0;
  puVar6 = &DAT_149a1f1a0;
  if (puVar3 != (undefined1 *)0x0) {
    puVar6 = puVar3;
  }
  if (9 < *(uint *)(puVar6 + 0x18)) {
    puVar9 = *(undefined1 **)(puVar6 + 0x10);
  }
  lVar5 = FUN_1451e8ee0(puVar9);
  uVar1 = *(undefined4 *)(param_1 + 0xbc);
  uVar2 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  uVar8 = (uint)*(byte *)(lVar5 + 2) * 0x100 + (uint)*(byte *)(lVar5 + 3);
  if ((uVar8 & 0x10) != 0) {
    uVar7 = (ulonglong)CONCAT11(*(undefined1 *)(lVar5 + 4),*(undefined1 *)(lVar5 + 5));
    uVar8 = uVar8 + ((uint)*(byte *)(lVar5 + 6 + uVar7 * 2) * 0x100 +
                    (uint)*(byte *)(lVar5 + 7 + uVar7 * 2)) * 0x10000;
  }
  *(uint *)(param_1 + 0xc0) = uVar8;
  FUN_1451e5680(param_1);
  uVar4 = FUN_1451f35e0(lVar5,param_1);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  FUN_1451e5680(param_1);
  return uVar4;
}



// FUNCTION 1451f12c0 FUN_1451f12c0 body=97 status=ok
// SIG undefined FUN_1451f12c0(void)

undefined1 * FUN_1451f12c0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 3) * 2);
  }
  else {
    pbVar1 = &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)*pbVar1 * 0x100 + (ushort)pbVar1[1]) == 0) {
    return &DAT_149a1f1a0;
  }
  return (undefined1 *)((ulonglong)*pbVar1 * 0x100 + param_1 + (ulonglong)pbVar1[1]);
}



// FUNCTION 1451f1330 FUN_1451f1330 body=374 status=ok
// SIG undefined FUN_1451f1330(void)

undefined8 FUN_1451f1330(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,6);
  if (cVar1 != '\0') {
    pbVar3 = param_1 + 4;
    cVar1 = FUN_144e2c5c0(param_2,pbVar3,2);
    if ((((cVar1 != '\0') &&
         (cVar1 = FUN_144e2c5c0(param_2,param_1 + 6,((uint)*pbVar3 * 0x100 + (uint)param_1[5]) * 2),
         cVar1 != '\0')) &&
        (((param_1[3] & 0x10) == 0 ||
         (cVar1 = FUN_144e2c5c0(param_2,pbVar3 + ((ulonglong)*pbVar3 * 0x100 +
                                                 (ulonglong)param_1[5] + 1) * 2,2), cVar1 != '\0')))
        ) && (cVar1 = FUN_1451f3860(pbVar3,param_2,param_1,(uint)*param_1 * 0x100 + (uint)param_1[1]
                                   ), cVar1 != '\0')) {
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 7) {
        pbVar2 = (byte *)FUN_1451f12c0(param_1,0);
        if ((uint)*pbVar2 * 0x100 + (uint)pbVar2[1] == 1) {
          iVar7 = (uint)pbVar2[2] * 0x100 + (uint)pbVar2[3];
        }
        else {
          iVar7 = 0;
        }
        uVar5 = 1;
        uVar6 = (uint)*pbVar3 * 0x100 + (uint)param_1[5];
        if (1 < uVar6) {
          do {
            pbVar3 = (byte *)FUN_1451f12c0(param_1,uVar5);
            if ((uint)*pbVar3 * 0x100 + (uint)pbVar3[1] == 1) {
              iVar4 = (uint)pbVar3[3] + (uint)pbVar3[2] * 0x100;
            }
            else {
              iVar4 = 0;
            }
            if (iVar4 != iVar7) {
              return 0;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f14b0 FUN_1451f14b0 body=152 status=ok
// SIG undefined FUN_1451f14b0(void)

undefined8 FUN_1451f14b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  
  lVar1 = FUN_144e30f60(param_3 + 0xa8);
  pbVar3 = &DAT_149a1f1a0;
  puVar2 = &DAT_149a1f1a0;
  if (0x4d < *(uint *)(lVar1 + 0x18)) {
    puVar2 = *(undefined1 **)(lVar1 + 0x10);
  }
  if ((uint)(byte)puVar2[0x3b] * 0x10000 + (uint)(byte)puVar2[0x3c] * 0x100 +
      (uint)(byte)puVar2[0x3a] * 0x1000000 + (uint)(byte)puVar2[0x3d] == 0x4d555446) {
    lVar1 = FUN_1451e0fa0(param_3 + 0xe8);
    if (7 < *(uint *)(lVar1 + 0x18)) {
      pbVar3 = *(byte **)(lVar1 + 0x10);
    }
    if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f1550 FUN_1451f1550 body=210 status=ok
// SIG undefined FUN_1451f1550(void)

undefined8 FUN_1451f1550(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if ((((cVar1 != '\0') && ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1)) &&
      (cVar1 = FUN_1451e91a0(param_1 + 4,param_2,param_1), cVar1 != '\0')) &&
     ((cVar1 = FUN_1451e92e0(param_1 + 6,param_2,param_1), cVar1 != '\0' &&
      (cVar1 = FUN_1451f3a30(param_1 + 8,param_2,param_1), cVar1 != '\0')))) {
    if ((0x10000 < (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100
                   + (uint)param_1[3]) &&
       (cVar1 = FUN_1451e9420(param_1 + 10,param_2,param_1), cVar1 == '\0')) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1451f1630 FUN_1451f1630 body=472 status=ok
// SIG undefined FUN_1451f1630(void)

void FUN_1451f1630(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong uVar10;
  
  uVar10 = 0;
  local_28 = 0x10000;
  local_58[0] = 0;
  local_40 = 0;
  local_3c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_24 = 0;
  local_28 = FUN_144e2d260(param_2);
  local_24 = 1;
  uVar2 = FUN_144e2d200(param_2,0x47535542);
  puVar3 = (undefined1 *)FUN_1451f4600(local_58,uVar2);
  *param_1 = puVar3;
  puVar5 = &DAT_149a1f1a0;
  if (puVar3 != (undefined1 *)0x0) {
    puVar5 = puVar3;
  }
  if (*(uint *)(puVar5 + 0x18) < 10) {
    puVar5 = &DAT_149a1f1a0;
  }
  else {
    puVar5 = *(undefined1 **)(puVar5 + 0x10);
  }
  cVar1 = FUN_1451f14b0(puVar5,puVar3,param_2);
  if (cVar1 != '\0') {
    FUN_144e3f120(*param_1);
    uVar2 = FUN_144e3f0f0();
    *param_1 = uVar2;
  }
  puVar5 = &DAT_149a1f1a0;
  puVar3 = &DAT_149a1f1a0;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_1;
  }
  if (9 < *(uint *)(puVar3 + 0x18)) {
    puVar5 = *(undefined1 **)(puVar3 + 0x10);
  }
  if ((ushort)((ushort)(byte)puVar5[8] * 0x100 + (ushort)(byte)puVar5[9]) == 0) {
    pbVar7 = &DAT_149a1f1a0;
  }
  else {
    pbVar7 = puVar5 + (ulonglong)(byte)puVar5[9] + (ulonglong)(byte)puVar5[8] * 0x100;
  }
  iVar6 = (uint)pbVar7[1] + (uint)*pbVar7 * 0x100;
  *(int *)(param_1 + 1) = iVar6;
  lVar4 = FUN_142864336(iVar6,0x20);
  param_1[2] = lVar4;
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*(int *)(param_1 + 1) != 0) {
    do {
      puVar5 = &DAT_149a1f1a0;
      if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)*param_1;
      }
      if (*(uint *)(puVar5 + 0x18) < 10) {
        puVar5 = &DAT_149a1f1a0;
      }
      else {
        puVar5 = *(undefined1 **)(puVar5 + 0x10);
      }
      uVar2 = FUN_1451e8ee0(puVar5,uVar10);
      puVar8 = (undefined8 *)(uVar10 * 0x20 + param_1[2]);
      local_70 = 0;
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      local_78 = puVar8;
      FUN_1451f6400(uVar2,&local_78);
      local_68 = puVar8 + 2;
      *local_68 = 0;
      puVar8[3] = 0;
      local_60 = 0;
      FUN_1451f4950(uVar2,&local_68);
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)(param_1 + 1));
  }
  return;
}



// FUNCTION 1451f1810 FUN_1451f1810 body=151 status=ok
// SIG undefined FUN_1451f1810(void)

bool FUN_1451f1810(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451f18b0 FUN_1451f18b0 body=152 status=ok
// SIG undefined FUN_1451f18b0(void)

undefined8 FUN_1451f18b0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1451f1810();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (lVar2 = (ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],
     cVar1 = FUN_1451f3080(lVar2,param_2,lVar2), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 1451f1950 FUN_1451f1950 body=292 status=ok
// SIG undefined FUN_1451f1950(void)

bool FUN_1451f1950(byte *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  switch((uint)*param_1 * 0x100 + (uint)param_1[1]) {
  case 0:
    uVar2 = FUN_1451f1aa0(param_1,param_2);
    return (bool)uVar2;
  case 2:
    cVar1 = FUN_1451f1ae0(param_1 + 2,param_2);
    return cVar1 != '\0';
  case 4:
    uVar2 = FUN_1451f1d30(param_1 + 2,param_2,param_1);
    return (bool)uVar2;
  case 6:
    cVar1 = FUN_1451f1f40(param_1 + 2,param_2);
    return cVar1 != '\0';
  case 8:
    cVar1 = FUN_144e2c5c0(param_2,param_1,6);
    if (cVar1 == '\0') {
      return false;
    }
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 6,((uint)param_1[4] * 0x100 + (uint)param_1[5]) * 2);
    if (cVar1 == '\0') {
      return false;
    }
    break;
  case 10:
    uVar2 = FUN_1451f1fe0(param_1,param_2);
    return (bool)uVar2;
  }
  return true;
}



// FUNCTION 1451f1aa0 FUN_1451f1aa0 body=53 status=ok
// SIG undefined FUN_1451f1aa0(void)

undefined8 FUN_1451f1aa0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(uint *)(param_2 + 0x30) < 0x7fffffff) {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,*(uint *)(param_2 + 0x30) * 2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f1ae0 FUN_1451f1ae0 body=156 status=ok
// SIG undefined FUN_1451f1ae0(void)

undefined8 FUN_1451f1ae0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,10);
  if (cVar1 != '\0') {
    if (5 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
      uVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      uVar3 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
      if ((uVar2 == 0) || (uVar3 < (uint)(0xffffffff / (ulonglong)uVar2))) {
        cVar1 = FUN_144e2c5c0(param_2,param_1 + 10,uVar3 * uVar2);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451f1b80 FUN_1451f1b80 body=256 status=ok
// SIG undefined FUN_1451f1b80(void)

undefined8 FUN_1451f1b80(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,6);
  if (cVar1 != '\0') {
    if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) <=
        (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
      uVar2 = param_1[1] + 1 + (((uint)*param_1 - (uint)param_1[2]) * 0x100 - (uint)param_1[3]);
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,2);
      if ((((cVar1 != '\0') &&
           (cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)param_1[4] * 0x100 + (uint)param_1[5]),
           cVar1 != '\0')) && (uVar2 < 0x7fffffff)) &&
         (cVar1 = FUN_144e2c5c0(param_2,(ulonglong)param_1[5] +
                                        (ulonglong)param_1[4] * 0x100 + param_3,uVar2 * 2),
         cVar1 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451f1c80 FUN_1451f1c80 body=174 status=ok
// SIG undefined FUN_1451f1c80(void)

ulonglong FUN_1451f1c80(undefined1 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  if ((ushort)((ushort)(byte)param_1[2] * 0x100 + (ushort)(byte)param_1[3]) == 0) {
    return 0;
  }
  uVar2 = 0;
  pbVar1 = param_1 + (ulonglong)
                     ((uint)CONCAT11(*param_1,param_1[1]) *
                     ((uint)(byte)param_1[3] + (uint)(byte)param_1[2] * 0x100 + -1)) + 10;
  do {
    if ((ushort)((ushort)pbVar1[1] + (ushort)*pbVar1 * 0x100) != -1) {
      return (ulonglong)pbVar1 & 0xffffffffffffff00;
    }
    uVar2 = uVar2 + 1;
    pbVar1 = pbVar1 + 2;
  } while (uVar2 < 2);
  return CONCAT71((int7)((ulonglong)pbVar1 >> 8),1);
}



// FUNCTION 1451f1d30 FUN_1451f1d30 body=368 status=ok
// SIG undefined FUN_1451f1d30(void)

undefined1 FUN_1451f1d30(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  cVar1 = FUN_1451f1ea0();
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = FUN_1451f1c80(param_1);
  uVar6 = 0;
  uVar5 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
  if (uVar5 != bVar2) {
    do {
      if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 0) {
LAB_1451f1e2f:
        iVar4 = 0;
      }
      else {
        uVar7 = 0;
        pbVar3 = param_1 + (ulonglong)
                           ((uint)CONCAT11(*param_1,param_1[1]) *
                           ((param_1[3] - 1) + (uint)param_1[2] * 0x100)) + 10;
        do {
          if ((ushort)((ushort)pbVar3[1] + (ushort)*pbVar3 * 0x100) != -1) goto LAB_1451f1e2f;
          uVar7 = uVar7 + 1;
          pbVar3 = pbVar3 + 2;
        } while (uVar7 < 2);
        iVar4 = 1;
      }
      if (uVar6 < ((uint)param_1[2] * 0x100 + (uint)param_1[3]) - iVar4) {
        pbVar3 = param_1 + (ulonglong)(((uint)param_1[1] + (uint)*param_1 * 0x100) * uVar6) + 10;
      }
      else {
        pbVar3 = &DAT_149a1f1a0;
      }
      cVar1 = FUN_1451f1b80(pbVar3,param_2,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5 - bVar2);
  }
  return 1;
}



// FUNCTION 1451f1ea0 FUN_1451f1ea0 body=156 status=ok
// SIG undefined FUN_1451f1ea0(void)

undefined8 FUN_1451f1ea0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,10);
  if (cVar1 != '\0') {
    if (5 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
      uVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      uVar3 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
      if ((uVar2 == 0) || (uVar3 < (uint)(0xffffffff / (ulonglong)uVar2))) {
        cVar1 = FUN_144e2c5c0(param_2,param_1 + 10,uVar3 * uVar2);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451f1f40 FUN_1451f1f40 body=156 status=ok
// SIG undefined FUN_1451f1f40(void)

undefined8 FUN_1451f1f40(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,10);
  if (cVar1 != '\0') {
    if (3 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
      uVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      uVar3 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
      if ((uVar2 == 0) || (uVar3 < (uint)(0xffffffff / (ulonglong)uVar2))) {
        cVar1 = FUN_144e2c5c0(param_2,param_1 + 10,uVar3 * uVar2);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451f1fe0 FUN_1451f1fe0 body=148 status=ok
// SIG undefined FUN_1451f1fe0(void)

undefined8 FUN_1451f1fe0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,8);
  if ((cVar1 != '\0') &&
     ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) < 5)) {
    if (((uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7)) *
        ((uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3)) != -1) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 8);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451f2080 FUN_1451f2080 body=291 status=ok
// SIG undefined FUN_1451f2080(void)

ulonglong FUN_1451f2080(byte *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((((char)uVar1 != '\0') &&
      (uVar1 = 0, (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0)) &&
     (uVar1 = FUN_144e2c5c0(param_2,param_1 + 4,4), (char)uVar1 != '\0')) {
    uVar5 = 0;
    pbVar3 = param_1 + 8;
    pbVar2 = (byte *)0x0;
    uVar4 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
            (uint)param_1[7];
    if (uVar4 != 0) {
      do {
        uVar1 = FUN_1451f21b0(pbVar3,param_2,(uint)*param_1 * 0x100 + (uint)param_1[1]);
        if ((char)uVar1 == '\0') {
          return uVar1 & 0xffffffffffffff00;
        }
        uVar5 = uVar5 + 1;
        pbVar2 = pbVar3 + pbVar3[7];
        pbVar3 = pbVar2 + ((ulonglong)CONCAT11(pbVar3[4],pbVar3[5]) * 0x100 + (ulonglong)pbVar3[6])
                          * 0x100;
      } while (uVar5 < uVar4);
    }
    return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451f21b0 FUN_1451f21b0 body=411 status=ok
// SIG undefined FUN_1451f21b0(void)

ulonglong FUN_1451f21b0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1 + 4,4);
  if ((((char)uVar1 == '\0') ||
      (uVar1 = 0,
      (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
      (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) < 0x10)) ||
     (uVar1 = FUN_144e2c5c0(param_2,param_1,
                            (uint)*(byte *)(param_1 + 5) * 0x10000 +
                            (uint)*(byte *)(param_1 + 6) * 0x100 +
                            (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7))
     , (char)uVar1 == '\0')) {
    return uVar1 & 0xffffffffffffff00;
  }
  uVar1 = 0;
  uVar3 = (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
          (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb);
  if (uVar3 < 0x15555555) {
    uVar1 = FUN_144e2c5c0(param_2,param_1 + 0x10,uVar3 * 0xc);
    if ((char)uVar1 != '\0') {
      puVar4 = (undefined1 *)
               ((ulonglong)
                (((uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
                  (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb)) * 0xc)
               + param_1 + 0x10);
      puVar2 = (undefined1 *)0x0;
      uVar5 = 0;
      uVar3 = (uint)*(byte *)(param_1 + 0xd) * 0x10000 + (uint)*(byte *)(param_1 + 0xe) * 0x100 +
              (uint)*(byte *)(param_1 + 0xc) * 0x1000000 + (uint)*(byte *)(param_1 + 0xf);
      if (uVar3 != 0) {
        do {
          uVar1 = FUN_1451f5020(puVar4,param_2);
          if ((char)uVar1 == '\0') goto LAB_1451f2335;
          uVar5 = uVar5 + 1;
          puVar2 = puVar4 + (byte)puVar4[3];
          puVar4 = puVar2 + ((ulonglong)CONCAT11(*puVar4,puVar4[1]) * 0x100 +
                            (ulonglong)(byte)puVar4[2]) * 0x100;
        } while (uVar5 < uVar3);
      }
      return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
    }
  }
LAB_1451f2335:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451f2350 FUN_1451f2350 body=153 status=ok
// SIG undefined FUN_1451f2350(void)

void FUN_1451f2350(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  
  puVar2 = (undefined8 *)FUN_1451e0d60(*(longlong *)(param_1 + 0x18) + 0xb8);
  puVar5 = &DAT_149a1f1a0;
  puVar3 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*puVar2;
  }
  if (0xb < *(uint *)(puVar3 + 0x18)) {
    puVar5 = *(undefined1 **)(puVar3 + 0x10);
  }
  if (*(uint *)(param_2 + 0x60) != 0) {
    lVar4 = 0;
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x60);
    do {
      uVar1 = FUN_1451e4790(puVar5,*(undefined4 *)(*(longlong *)(param_2 + 0x70) + lVar4));
      lVar4 = lVar4 + 0x14;
      *(undefined2 *)(*(longlong *)(param_2 + 0x70) + -8 + lVar4) = uVar1;
      *(undefined1 *)(*(longlong *)(param_2 + 0x70) + -6 + lVar4) = 0;
      *(undefined1 *)(*(longlong *)(param_2 + 0x70) + -5 + lVar4) = 0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1451f23f0 FUN_1451f23f0 body=359 status=ok
// SIG undefined FUN_1451f23f0(void)

undefined8 FUN_1451f23f0(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined8 uVar13;
  
  lVar6 = *(longlong *)(param_1 + 0x90);
  uVar13 = 0;
  if (*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) {
    do {
      if (*(char *)(lVar6 + 0x58) == '\0') {
        return uVar13;
      }
      uVar4 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
      puVar1 = (undefined4 *)
               (*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
      if (((((*param_2 >> (uVar4 >> 4 & 0x1f) & 1) == 0) ||
           ((param_2[1] >> (uVar4 & 0x1f) & 1) == 0)) ||
          ((param_2[2] >> (uVar4 >> 9 & 0x1f) & 1) == 0)) ||
         ((*(uint *)(param_1 + 0xb4) & puVar1[1]) == 0)) {
LAB_1451f24d4:
        if (*(char *)(lVar6 + 0x59) != '\0') {
          if ((*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) ||
             (*(int *)(lVar6 + 100) != *(int *)(lVar6 + 0x5c))) {
            cVar12 = FUN_144b62480(lVar6,1,1);
            if (cVar12 == '\0') goto LAB_1451f2532;
            uVar4 = *(uint *)(lVar6 + 0x5c);
            lVar7 = *(longlong *)(lVar6 + 0x70);
            uVar5 = *(uint *)(lVar6 + 100);
            puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar4 * 0x14);
            uVar9 = puVar1[1];
            uVar10 = puVar1[2];
            uVar11 = puVar1[3];
            lVar8 = *(longlong *)(lVar6 + 0x78);
            puVar2 = (undefined4 *)(lVar8 + (ulonglong)uVar5 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar9;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
            *(undefined4 *)(lVar8 + (ulonglong)uVar5 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar4 * 0x14);
          }
          *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
        }
        *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
      }
      else {
        uVar3 = *(ushort *)(puVar1 + 3);
        uVar4 = *(uint *)(param_1 + 0xc0);
        if ((uVar3 & uVar4 & 0xe) != 0) goto LAB_1451f24d4;
        if ((uVar3 & 8) != 0) {
          if ((uVar4 & 0x10) == 0) {
            if ((uVar4 & 0xff00) == 0) goto LAB_1451f24c0;
            cVar12 = (uVar4 & 0xff00) == (uVar3 & 0xff00);
          }
          else {
            cVar12 = FUN_1451e4650(*(undefined8 *)(param_1 + 0xa0),uVar4 >> 0x10,*puVar1);
          }
          if (cVar12 == '\0') goto LAB_1451f24d4;
        }
LAB_1451f24c0:
        cVar12 = FUN_1451e8af0(param_2,param_1);
        if (cVar12 == '\0') goto LAB_1451f24d4;
        uVar13 = 1;
      }
LAB_1451f2532:
    } while (*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60));
  }
  return uVar13;
}



// FUNCTION 1451f2560 FUN_1451f2560 body=243 status=ok
// SIG undefined FUN_1451f2560(void)

byte FUN_1451f2560(longlong param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x90);
  bVar8 = 0;
  do {
    uVar4 = *(uint *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14);
    puVar2 = (undefined4 *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14)
    ;
    if (((((*param_2 >> (uVar4 >> 4 & 0x1f) & 1) != 0) && ((param_2[1] >> (uVar4 & 0x1f) & 1) != 0))
        && ((param_2[2] >> (uVar4 >> 9 & 0x1f) & 1) != 0)) &&
       ((*(uint *)(param_1 + 0xb4) & puVar2[1]) != 0)) {
      uVar3 = *(ushort *)(puVar2 + 3);
      uVar4 = *(uint *)(param_1 + 0xc0);
      if ((uVar3 & uVar4 & 0xe) == 0) {
        if ((uVar3 & 8) != 0) {
          if ((uVar4 & 0x10) == 0) {
            if ((uVar4 & 0xff00) == 0) goto LAB_1451f2622;
            cVar6 = (uVar4 & 0xff00) == (uVar3 & 0xff00);
          }
          else {
            cVar6 = FUN_1451e4650(*(undefined8 *)(param_1 + 0xa0),uVar4 >> 0x10,*puVar2);
          }
          if (cVar6 == '\0') goto LAB_1451f2630;
        }
LAB_1451f2622:
        bVar7 = FUN_1451e8af0(param_2,param_1);
        bVar8 = bVar8 | bVar7;
      }
    }
LAB_1451f2630:
    piVar1 = (int *)(lVar5 + 0x5c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      return bVar8;
    }
  } while( true );
}



// FUNCTION 1451f2660 FUN_1451f2660 body=947 status=ok
// SIG undefined FUN_1451f2660(void)

void FUN_1451f2660(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint local_res8;
  undefined1 local_118 [8];
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_80;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  byte local_4b;
  byte local_4a;
  undefined1 local_49;
  
  uVar8 = 0;
  FUN_1451e5500(local_118,0,param_4,param_5);
  local_80 = FUN_1451f11c0;
  local_res8 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) != 0) goto LAB_1451f26d3;
    puVar11 = (uint *)&DAT_149a1f1a0;
    while( true ) {
      if ((uint)uVar8 < *puVar11) {
        do {
          uVar7 = (uint)uVar8;
          if (uVar7 < *(uint *)(param_1 + 0x20)) {
            puVar4 = (ushort *)(*(longlong *)(param_1 + 0x28) + uVar8 * 8);
          }
          else {
            puVar4 = (ushort *)&DAT_149a1f1a0;
          }
          uVar1 = *puVar4;
          uVar10 = (ulonglong)uVar1;
          uVar9 = (uint)uVar1;
          cVar3 = FUN_1451e0ae0(param_5,param_4,"start lookup %d",uVar9);
          if (cVar3 != '\0') {
            if (uVar7 < *(uint *)(param_1 + 0x20)) {
              puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x28) + uVar8 * 8);
            }
            else {
              puVar5 = &DAT_149a1f1a0;
            }
            local_100 = *(undefined4 *)(puVar5 + 4);
            if (uVar7 < *(uint *)(param_1 + 0x20)) {
              puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x28) + uVar8 * 8);
            }
            else {
              puVar5 = &DAT_149a1f1a0;
            }
            local_4a = (byte)puVar5[2] >> 1 & 1;
            if (uVar7 < *(uint *)(param_1 + 0x20)) {
              puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x28) + uVar8 * 8);
            }
            else {
              puVar5 = &DAT_149a1f1a0;
            }
            local_110 = local_118;
            local_4b = puVar5[2] & 1;
            local_e8 = 0;
            local_104 = local_60 == 1;
            local_d0 = local_118;
            local_f8 = 0;
            local_f0 = 0;
            local_103 = local_4a != 0;
            local_108 = local_58;
            local_a8 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_c8 = local_58;
            if ((local_60 == 1) || (local_c4 = 0, local_4b != 0)) {
              local_c4 = 1;
            }
            local_c3 = 1;
            local_c0 = 0xffffffff;
            if (uVar7 < *(uint *)(param_1 + 0x20)) {
              puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x28) + uVar8 * 8);
            }
            else {
              puVar5 = &DAT_149a1f1a0;
            }
            local_64 = local_100;
            local_5c = uVar9;
            if ((puVar5[2] & 4) != 0) {
              local_49 = 1;
              FUN_144b620d0(param_5,0,*(undefined4 *)(param_5 + 0x60));
            }
            lVar2 = *param_2;
            if ((ushort)((ushort)*(byte *)(lVar2 + 8) * 0x100 + (ushort)*(byte *)(lVar2 + 9)) == 0)
            {
              pbVar6 = &DAT_149a1f1a0;
            }
            else {
              pbVar6 = (byte *)((ulonglong)*(byte *)(lVar2 + 8) * 0x100 + lVar2 +
                               (ulonglong)*(byte *)(lVar2 + 9));
            }
            if (uVar1 < (ushort)((ushort)pbVar6[1] + (ushort)*pbVar6 * 0x100)) {
              if ((ushort)((ushort)pbVar6[uVar10 * 2 + 2] * 0x100 + (ushort)pbVar6[uVar10 * 2 + 3])
                  == 0) {
                pbVar6 = &DAT_149a1f1a0;
              }
              else {
                pbVar6 = pbVar6 + (ulonglong)pbVar6[uVar10 * 2 + 3] +
                                  (ulonglong)pbVar6[uVar10 * 2 + 2] * 0x100;
              }
            }
            else {
              pbVar6 = &DAT_149a1f1a0;
            }
            FUN_1451f2ef0(local_118,pbVar6,uVar10 * 0x20 + param_2[1]);
            FUN_1451e0ae0(param_5,param_4,"end lookup %d",uVar1);
          }
          uVar8 = (ulonglong)(uVar7 + 1);
        } while (uVar7 + 1 < *puVar11);
      }
      if (*(longlong *)(puVar11 + 2) != 0) {
        FUN_144b61b50(param_5);
        (**(code **)(puVar11 + 2))(param_3,param_4,param_5);
      }
      local_res8 = local_res8 + 1;
      if (*(uint *)(param_1 + 0x40) <= local_res8) break;
LAB_1451f26d3:
      puVar11 = (uint *)((ulonglong)local_res8 * 0x10 + *(longlong *)(param_1 + 0x48));
    }
  }
  return;
}



// FUNCTION 1451f2a20 FUN_1451f2a20 body=1225 status=ok
// SIG undefined FUN_1451f2a20(void)

void FUN_1451f2a20(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint local_res8;
  undefined1 local_138 [8];
  undefined1 *local_130;
  uint local_128;
  undefined1 local_124;
  undefined1 local_123;
  int local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_f0;
  uint local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_a8;
  code *local_a0;
  int local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  byte local_6b;
  byte local_6a;
  undefined1 local_69;
  uint *local_58;
  
  uVar8 = 0;
  FUN_1451e5500(local_138,1,param_4,param_5);
  local_a0 = FUN_1451ed570;
  local_res8 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(int *)(param_1 + 0x50) != 0) goto LAB_1451f2a9c;
    puVar10 = (uint *)&DAT_149a1f1a0;
    while( true ) {
      local_58 = puVar10;
      if ((uint)uVar8 < *puVar10) {
        do {
          uVar7 = (uint)uVar8;
          if (uVar7 < *(uint *)(param_1 + 0x30)) {
            puVar4 = (ushort *)(*(longlong *)(param_1 + 0x38) + uVar8 * 8);
          }
          else {
            puVar4 = (ushort *)&DAT_149a1f1a0;
          }
          uVar1 = *puVar4;
          uVar9 = (ulonglong)uVar1;
          cVar3 = FUN_1451e0ae0(param_5,param_4,"start lookup %d",uVar9);
          if (cVar3 != '\0') {
            if (uVar7 < *(uint *)(param_1 + 0x30)) {
              puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x38) + uVar8 * 8);
            }
            else {
              puVar5 = &DAT_149a1f1a0;
            }
            local_120 = *(int *)(puVar5 + 4);
            if (uVar7 < *(uint *)(param_1 + 0x30)) {
              puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x38) + uVar8 * 8);
            }
            else {
              puVar5 = &DAT_149a1f1a0;
            }
            local_6a = (byte)puVar5[2] >> 1 & 1;
            if (uVar7 < *(uint *)(param_1 + 0x30)) {
              puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x38) + uVar8 * 8);
            }
            else {
              puVar5 = &DAT_149a1f1a0;
            }
            local_130 = local_138;
            local_6b = puVar5[2] & 1;
            local_124 = local_80 == 1;
            local_f0 = local_138;
            local_108 = 0;
            local_118 = 0;
            local_123 = local_6a != 0;
            local_110 = 0;
            local_128 = local_78;
            local_c8 = 0;
            local_d8 = 0;
            local_d0 = 0;
            local_e8 = local_78;
            if ((local_80 == 1) || (local_6b != 0)) {
              local_e4 = 1;
            }
            else {
              local_e4 = 0;
            }
            local_e3 = 1;
            local_e0 = 0xffffffff;
            if (uVar7 < *(uint *)(param_1 + 0x30)) {
              puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x38) + uVar8 * 8);
            }
            else {
              puVar5 = &DAT_149a1f1a0;
            }
            local_84 = local_120;
            local_7c = (uint)uVar1;
            if ((puVar5[2] & 4) != 0) {
              local_69 = 1;
              FUN_144b620d0(param_5,0,*(undefined4 *)(param_5 + 0x60));
            }
            lVar2 = *param_2;
            if ((ushort)((ushort)*(byte *)(lVar2 + 8) * 0x100 + (ushort)*(byte *)(lVar2 + 9)) == 0)
            {
              pbVar6 = &DAT_149a1f1a0;
            }
            else {
              pbVar6 = (byte *)((ulonglong)*(byte *)(lVar2 + 8) * 0x100 + lVar2 +
                               (ulonglong)*(byte *)(lVar2 + 9));
            }
            if (uVar1 < (ushort)((ushort)pbVar6[1] + (ushort)*pbVar6 * 0x100)) {
              if ((ushort)((short)((uint)pbVar6[uVar9 * 2 + 2] * 0x100) +
                          (ushort)pbVar6[uVar9 * 2 + 3]) == 0) {
                pbVar6 = &DAT_149a1f1a0;
              }
              else {
                pbVar6 = pbVar6 + (ulonglong)pbVar6[uVar9 * 2 + 3] +
                                  (ulonglong)(uint)pbVar6[uVar9 * 2 + 2] * 0x100;
              }
            }
            else {
              pbVar6 = &DAT_149a1f1a0;
            }
            lVar2 = param_2[1];
            if ((*(int *)(local_a8 + 0x60) != 0) && (local_84 != 0)) {
              local_128 = (uint)pbVar6[2] * 0x100 + (uint)pbVar6[3];
              if ((local_128 & 0x10) != 0) {
                local_128 = local_128 +
                            ((uint)pbVar6[(ulonglong)CONCAT11(pbVar6[4],pbVar6[5]) * 2 + 7] +
                            (uint)pbVar6[(ulonglong)CONCAT11(pbVar6[4],pbVar6[5]) * 2 + 6] * 0x100)
                            * 0x10000;
              }
              local_124 = local_80 == 1;
              local_108 = 0;
              local_130 = local_138;
              local_118 = 0;
              local_123 = local_6a != 0;
              local_110 = 0;
              local_f0 = local_138;
              local_c8 = 0;
              local_d8 = 0;
              local_d0 = 0;
              if ((local_80 == 1) || (local_6b != 0)) {
                local_e4 = 1;
              }
              else {
                local_e4 = 0;
              }
              local_e3 = 1;
              local_e0 = 0xffffffff;
              *(undefined4 *)(local_a8 + 0x5c) = 0;
              local_120 = local_84;
              local_e8 = local_128;
              local_78 = local_128;
              FUN_1451f23f0(local_138,uVar9 * 0x20 + lVar2);
            }
            FUN_1451e0ae0(param_5,param_4,"end lookup %d",uVar1);
            puVar10 = local_58;
          }
          uVar8 = (ulonglong)(uVar7 + 1);
        } while (uVar7 + 1 < *puVar10);
      }
      if (*(longlong *)(puVar10 + 2) != 0) {
        FUN_144b61b50(param_5);
        (**(code **)(puVar10 + 2))(param_3,param_4,param_5);
      }
      local_res8 = local_res8 + 1;
      if (*(uint *)(param_1 + 0x50) <= local_res8) break;
LAB_1451f2a9c:
      puVar10 = (uint *)((ulonglong)local_res8 * 0x10 + *(longlong *)(param_1 + 0x58));
    }
  }
  return;
}



// FUNCTION 1451f2ef0 FUN_1451f2ef0 body=229 status=ok
// SIG undefined FUN_1451f2ef0(void)

void FUN_1451f2ef0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if ((*(int *)(lVar1 + 0x60) != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    uVar4 = (uint)*(byte *)(param_2 + 2) * 0x100 + (uint)*(byte *)(param_2 + 3);
    if ((uVar4 & 0x10) != 0) {
      uVar3 = (ulonglong)CONCAT11(*(undefined1 *)(param_2 + 4),*(undefined1 *)(param_2 + 5));
      uVar4 = uVar4 + ((uint)*(byte *)(param_2 + 6 + uVar3 * 2) * 0x100 +
                      (uint)*(byte *)(param_2 + 7 + uVar3 * 2)) * 0x10000;
    }
    *(uint *)(param_1 + 0xc0) = uVar4;
    FUN_1451e5680(param_1);
    cVar2 = FUN_1451f10f0(param_2);
    if (cVar2 == '\0') {
      FUN_144b61b50();
      *(undefined4 *)(lVar1 + 0x5c) = 0;
      cVar2 = FUN_1451f23f0(param_1,param_3);
      if (cVar2 != '\0') {
        FUN_144b61af0(lVar1);
      }
    }
    else {
      FUN_144b61b30(lVar1);
      *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x60) + -1;
      FUN_1451f2560(param_1,param_3);
    }
  }
  return;
}



// FUNCTION 1451f2fe0 FUN_1451f2fe0 body=151 status=ok
// SIG undefined FUN_1451f2fe0(void)

bool FUN_1451f2fe0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451f3080 FUN_1451f3080 body=300 status=ok
// SIG undefined FUN_1451f3080(void)

undefined8 FUN_1451f3080(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar2 = param_1 + 2;
    cVar1 = FUN_144e2c5c0(param_2,pbVar2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      uVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (uVar3 != 0) {
        do {
          cVar1 = FUN_1451f2fe0(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) &&
             (cVar1 = FUN_1451ed6e0((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1],
                                    param_2), cVar1 == '\0')) {
            cVar1 = FUN_144e2d280(param_2,pbVar2,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar2[0] = 0;
            pbVar2[1] = 0;
          }
          uVar4 = uVar4 + 1;
          pbVar2 = pbVar2 + 2;
        } while (uVar4 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f31b0 FUN_1451f31b0 body=362 status=ok
// SIG undefined FUN_1451f31b0(void)

longlong FUN_1451f31b0(undefined4 *param_1,longlong param_2)

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
    FUN_1451e0950("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_1451e4c10(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_1451f32d0;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_1451f32d0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_1451e4c10(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_1451f32d0:
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



// FUNCTION 1451f3320 FUN_1451f3320 body=227 status=ok
// SIG undefined FUN_1451f3320(void)

ulonglong FUN_1451f3320(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = param_1[1];
  bVar2 = *param_1;
  uVar5 = 0;
  uVar4 = 0;
  uVar6 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar6 != 0) {
    do {
      if (uVar5 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar3 = param_1 + ((ulonglong)uVar5 + 3) * 2;
      }
      else {
        pbVar3 = &DAT_149a1f1a0;
      }
      if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == 0) {
        pbVar3 = &DAT_149a1f1a0;
      }
      else {
        pbVar3 = param_1 + (ulonglong)pbVar3[1] + (ulonglong)*pbVar3 * 0x100;
      }
      uVar4 = FUN_1451f3dd0(pbVar3,param_2,(uint)bVar2 * 0x100 + (uint)bVar1);
      if ((char)uVar4 != '\0') {
        return uVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1451f3410 FUN_1451f3410 body=151 status=ok
// SIG undefined FUN_1451f3410(void)

bool FUN_1451f3410(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451f34b0 FUN_1451f34b0 body=299 status=ok
// SIG undefined FUN_1451f34b0(void)

undefined8 FUN_1451f34b0(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar2 = param_1 + 2;
    cVar1 = FUN_144e2c5c0(param_2,pbVar2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      uVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (uVar3 != 0) {
        do {
          cVar1 = FUN_1451f3410(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) &&
             (cVar1 = FUN_1451f4e50((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1],
                                    param_2,param_4), cVar1 == '\0')) {
            cVar1 = FUN_144e2d280(param_2,pbVar2,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar2[0] = 0;
            pbVar2[1] = 0;
          }
          uVar4 = uVar4 + 1;
          pbVar2 = pbVar2 + 2;
        } while (uVar4 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f35e0 FUN_1451f35e0 body=227 status=ok
// SIG undefined FUN_1451f35e0(void)

ulonglong FUN_1451f35e0(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = param_1[1];
  bVar2 = *param_1;
  uVar5 = 0;
  uVar4 = 0;
  uVar6 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar6 != 0) {
    do {
      if (uVar5 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar3 = param_1 + ((ulonglong)uVar5 + 3) * 2;
      }
      else {
        pbVar3 = &DAT_149a1f1a0;
      }
      if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == 0) {
        pbVar3 = &DAT_149a1f1a0;
      }
      else {
        pbVar3 = param_1 + (ulonglong)pbVar3[1] + (ulonglong)*pbVar3 * 0x100;
      }
      uVar4 = FUN_1451f3f80(pbVar3,param_2,(uint)bVar2 * 0x100 + (uint)bVar1);
      if ((char)uVar4 != '\0') {
        return uVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1451f36d0 FUN_1451f36d0 body=227 status=ok
// SIG undefined FUN_1451f36d0(void)

ulonglong FUN_1451f36d0(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = param_1[1];
  bVar2 = *param_1;
  uVar5 = 0;
  uVar4 = 0;
  uVar6 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar6 != 0) {
    do {
      if (uVar5 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar3 = param_1 + ((ulonglong)uVar5 + 3) * 2;
      }
      else {
        pbVar3 = &DAT_149a1f1a0;
      }
      if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == 0) {
        pbVar3 = &DAT_149a1f1a0;
      }
      else {
        pbVar3 = param_1 + (ulonglong)pbVar3[1] + (ulonglong)*pbVar3 * 0x100;
      }
      uVar4 = FUN_1451f4100(pbVar3,param_2,(uint)bVar2 * 0x100 + (uint)bVar1);
      if ((char)uVar4 != '\0') {
        return uVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1451f37c0 FUN_1451f37c0 body=151 status=ok
// SIG undefined FUN_1451f37c0(void)

bool FUN_1451f37c0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451f3860 FUN_1451f3860 body=299 status=ok
// SIG undefined FUN_1451f3860(void)

undefined8 FUN_1451f3860(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar2 = param_1 + 2;
    cVar1 = FUN_144e2c5c0(param_2,pbVar2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      uVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (uVar3 != 0) {
        do {
          cVar1 = FUN_1451f37c0(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) &&
             (cVar1 = FUN_1451f4cf0((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1],
                                    param_2,param_4), cVar1 == '\0')) {
            cVar1 = FUN_144e2d280(param_2,pbVar2,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar2[0] = 0;
            pbVar2[1] = 0;
          }
          uVar4 = uVar4 + 1;
          pbVar2 = pbVar2 + 2;
        } while (uVar4 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f3990 FUN_1451f3990 body=151 status=ok
// SIG undefined FUN_1451f3990(void)

bool FUN_1451f3990(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451f3a30 FUN_1451f3a30 body=152 status=ok
// SIG undefined FUN_1451f3a30(void)

undefined8 FUN_1451f3a30(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1451f3990();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (lVar2 = (ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],
     cVar1 = FUN_1451f3b70(lVar2,param_2,lVar2), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 1451f3ad0 FUN_1451f3ad0 body=151 status=ok
// SIG undefined FUN_1451f3ad0(void)

bool FUN_1451f3ad0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
  return cVar1 != '\0';
}



// FUNCTION 1451f3b70 FUN_1451f3b70 body=300 status=ok
// SIG undefined FUN_1451f3b70(void)

undefined8 FUN_1451f3b70(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar2 = param_1 + 2;
    cVar1 = FUN_144e2c5c0(param_2,pbVar2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      uVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (uVar3 != 0) {
        do {
          cVar1 = FUN_1451f3ad0(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) &&
             (cVar1 = FUN_1451f1330((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1],
                                    param_2), cVar1 == '\0')) {
            cVar1 = FUN_144e2d280(param_2,pbVar2,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar2[0] = 0;
            pbVar2[1] = 0;
          }
          uVar4 = uVar4 + 1;
          pbVar2 = pbVar2 + 2;
        } while (uVar4 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f3ca0 FUN_1451f3ca0 body=299 status=ok
// SIG undefined FUN_1451f3ca0(void)

undefined8 FUN_1451f3ca0(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar2 = param_1 + 2;
    cVar1 = FUN_144e2c5c0(param_2,pbVar2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      uVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      if (uVar3 != 0) {
        do {
          cVar1 = FUN_1451ecbf0(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) &&
             (cVar1 = FUN_1451ea960((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1],
                                    param_2,param_4), cVar1 == '\0')) {
            cVar1 = FUN_144e2d280(param_2,pbVar2,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar2[0] = 0;
            pbVar2[1] = 0;
          }
          uVar4 = uVar4 + 1;
          pbVar2 = pbVar2 + 2;
        } while (uVar4 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f3dd0 FUN_1451f3dd0 body=388 status=ok
// SIG undefined FUN_1451f3dd0(void)

ulonglong FUN_1451f3dd0(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  int iVar2;
  
  switch(param_3) {
  case 1:
    in_RAX = 0;
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451eafd0(param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451eb0b0(param_1);
      return uVar1;
    }
    break;
  case 2:
    in_RAX = 0;
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451eb5e0(param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451eba60(param_1);
      return uVar1;
    }
    break;
  case 3:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451ec0d0(param_1);
      return uVar1;
    }
    break;
  case 4:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451ec740(param_1);
      return uVar1;
    }
    break;
  case 5:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451ecd30(param_1);
      return uVar1;
    }
    break;
  case 6:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451ed220(param_1);
      return uVar1;
    }
    break;
  case 7:
    in_RAX = 0;
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451e6d40(param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451e7130(param_1);
      return uVar1;
    }
    if (iVar2 == 3) {
      uVar1 = FUN_1451e72b0(param_1);
      return uVar1;
    }
    break;
  case 8:
    in_RAX = 0;
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451e7f00(param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451e8370(param_1);
      return uVar1;
    }
    if (iVar2 == 3) {
      uVar1 = FUN_1451e8730(param_1);
      return uVar1;
    }
    break;
  case 9:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f62e0(param_1);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1451f3f80 FUN_1451f3f80 body=344 status=ok
// SIG undefined FUN_1451f3f80(void)

ulonglong FUN_1451f3f80(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  int iVar2;
  
  switch(param_3) {
  case 1:
    in_RAX = 0;
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451ef6f0(param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451ef850(param_1);
      return uVar1;
    }
    break;
  case 2:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451efb80(param_1);
      return uVar1;
    }
    break;
  case 3:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f0020(param_1);
      return uVar1;
    }
    break;
  case 4:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f09a0(param_1);
      return uVar1;
    }
    break;
  case 5:
    in_RAX = 0;
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451e6d40(param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451e7130(param_1);
      return uVar1;
    }
    if (iVar2 == 3) {
      uVar1 = FUN_1451e72b0(param_1);
      return uVar1;
    }
    break;
  case 6:
    in_RAX = 0;
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451e7f00(param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451e8370(param_1);
      return uVar1;
    }
    if (iVar2 == 3) {
      uVar1 = FUN_1451e8730(param_1);
      return uVar1;
    }
    break;
  case 7:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f6340(param_1);
      return uVar1;
    }
    break;
  case 8:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f0d90(param_1);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1451f4100 FUN_1451f4100 body=291 status=ok
// SIG undefined FUN_1451f4100(void)

ulonglong FUN_1451f4100(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  int iVar2;
  
  switch(param_3) {
  case 1:
    in_RAX = 0;
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451ef660(param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451ef7c0(param_1);
      return uVar1;
    }
    break;
  case 2:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451efaf0(param_1);
      return uVar1;
    }
    break;
  case 3:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451eff90(param_1);
      return uVar1;
    }
    break;
  case 4:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f0890(param_1);
      return uVar1;
    }
    break;
  case 5:
    uVar1 = FUN_1451f48e0(param_1);
    return uVar1;
  case 6:
    in_RAX = 0;
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451e7dd0(param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451e8210(param_1);
      return uVar1;
    }
    if (iVar2 == 3) {
      uVar1 = FUN_1451e8600(param_1);
      return uVar1;
    }
    break;
  case 7:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f63a0(param_1);
      return uVar1;
    }
    break;
  case 8:
    in_RAX = 0;
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f0d00(param_1);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1451f4250 FUN_1451f4250 body=362 status=ok
// SIG undefined FUN_1451f4250(void)

longlong FUN_1451f4250(undefined4 *param_1,longlong param_2)

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
    FUN_1451e0950("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_1451f2080(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_1451f4370;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_1451f4370;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_1451f2080(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_1451f4370:
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



// FUNCTION 1451f43c0 FUN_1451f43c0 body=561 status=ok
// SIG undefined FUN_1451f43c0(void)

longlong FUN_1451f43c0(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  uVar4 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined1 *)(param_1 + 7) = 0;
  do {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar5;
    lVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar5;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar9;
    iVar7 = (int)lVar9 - (int)lVar5;
    *param_1 = 0;
    iVar8 = 1;
    uVar1 = iVar7 * 8;
    uVar6 = 0x4000;
    if (0x4000 < uVar1) {
      uVar6 = uVar1;
    }
    param_1[6] = uVar6;
    FUN_1451e0950("SANITIZE",lVar5,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar5,lVar9,iVar7);
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
      cVar3 = (char)iVar8;
    }
    FUN_1451e0950("SANITIZE",pbVar2,0);
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else {
      iVar7 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
      if (iVar7 == 0) {
        cVar3 = FUN_1451ee120(pbVar2,param_1);
      }
      else if (iVar7 == iVar8) {
        cVar3 = FUN_1451eee70(pbVar2,param_1);
      }
      else {
        cVar3 = (char)iVar8;
      }
      if (cVar3 != '\0') {
        if (param_1[8] != 0) {
          param_1[8] = 0;
          cVar3 = FUN_1451ef5e0(pbVar2,param_1);
          if (param_1[8] != 0) {
            cVar3 = '\0';
          }
        }
LAB_1451f45a1:
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
    }
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_1451f45a1;
    lVar5 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar5;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar5;
    if (lVar5 == 0) goto LAB_1451f45a1;
    *(undefined1 *)(param_1 + 7) = 1;
  } while( true );
}



// FUNCTION 1451f4600 FUN_1451f4600 body=362 status=ok
// SIG undefined FUN_1451f4600(void)

longlong FUN_1451f4600(undefined4 *param_1,longlong param_2)

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
    FUN_1451e0950("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_1451f1550(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_1451f4720;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_1451f4720;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_1451f1550(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_1451f4720:
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



// FUNCTION 1451f4770 FUN_1451f4770 body=362 status=ok
// SIG undefined FUN_1451f4770(void)

longlong FUN_1451f4770(undefined4 *param_1,longlong param_2)

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
    FUN_1451e0950("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_1451ed9e0(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_1451f4890;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_1451f4890;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_1451ed9e0(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_1451f4890:
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



// FUNCTION 1451f48e0 FUN_1451f48e0 body=107 status=ok
// SIG undefined FUN_1451f48e0(void)

undefined8 FUN_1451f48e0(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 == 1) {
    uVar1 = FUN_1451e6c20();
    return uVar1;
  }
  if (iVar2 != 2) {
    if (iVar2 != 3) {
      return 0;
    }
    uVar1 = FUN_1451e5b50(param_2,(uint)param_1[3] + (uint)param_1[2] * 0x100,param_1 + 8,
                          FUN_1451e5ac0,param_1);
    return uVar1;
  }
  uVar1 = FUN_1451e7040();
  return uVar1;
}



// FUNCTION 1451f4950 FUN_1451f4950 body=221 status=ok
// SIG undefined FUN_1451f4950(void)

undefined8 FUN_1451f4950(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = param_1[1];
  bVar2 = *param_1;
  uVar4 = 0;
  uVar5 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar5 != 0) {
    do {
      if (uVar4 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar3 = param_1 + ((ulonglong)uVar4 + 3) * 2;
      }
      else {
        pbVar3 = &DAT_149a1f1a0;
      }
      if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == 0) {
        pbVar3 = &DAT_149a1f1a0;
      }
      else {
        pbVar3 = param_1 + (ulonglong)pbVar3[1] + (ulonglong)*pbVar3 * 0x100;
      }
      FUN_1451f65d0(pbVar3,param_2,(uint)bVar2 * 0x100 + (uint)bVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return 0;
}



// FUNCTION 1451f4a30 FUN_1451f4a30 body=221 status=ok
// SIG undefined FUN_1451f4a30(void)

undefined8 FUN_1451f4a30(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = param_1[1];
  bVar2 = *param_1;
  uVar4 = 0;
  uVar5 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar5 != 0) {
    do {
      if (uVar4 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar3 = param_1 + ((ulonglong)uVar4 + 3) * 2;
      }
      else {
        pbVar3 = &DAT_149a1f1a0;
      }
      if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == 0) {
        pbVar3 = &DAT_149a1f1a0;
      }
      else {
        pbVar3 = param_1 + (ulonglong)pbVar3[1] + (ulonglong)*pbVar3 * 0x100;
      }
      FUN_1451f6920(pbVar3,param_2,(uint)bVar2 * 0x100 + (uint)bVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return 0;
}



// FUNCTION 1451f4b10 FUN_1451f4b10 body=113 status=ok
// SIG undefined FUN_1451f4b10(void)

void FUN_1451f4b10(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x28) + 0x10);
  *(undefined1 **)(param_1 + 8) = puVar2;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x18);
  *(undefined1 **)(param_1 + 0x10) = puVar2 + uVar1;
  if (param_2 != (undefined1 *)0x0) {
    if ((puVar2 <= param_2) && (param_2 < puVar2 + uVar1)) {
      *(undefined1 **)(param_1 + 8) = param_2;
      uVar4 = ((ulonglong)CONCAT11(*param_2,param_2[1]) * 0x100 + (ulonglong)(byte)param_2[2]) *
              0x100 + (ulonglong)(byte)param_2[3];
      uVar3 = *(longlong *)(param_1 + 0x10) - (longlong)param_2;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      *(undefined1 **)(param_1 + 0x10) = param_2 + uVar3;
      return;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1451f4b90 FUN_1451f4b90 body=79 status=ok
// SIG undefined FUN_1451f4b90(void)

undefined8 FUN_1451f4b90(longlong *param_1,longlong param_2)

{
  longlong local_18;
  byte local_10;
  
  if ((*(byte *)(*param_1 + 0xb8) & 1) == 0) {
    return 0;
  }
  local_10 = *(byte *)(param_2 + 4) >> 6 & 1;
  local_18 = param_2;
  FUN_1451f7010(&local_18,param_1[1],param_1[3],*(undefined4 *)(*param_1 + 0xb0),1);
  return 1;
}



// FUNCTION 1451f4be0 FUN_1451f4be0 body=96 status=ok
// SIG undefined FUN_1451f4be0(void)

undefined8 FUN_1451f4be0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_1,(byte *)(param_2 + 8),8);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_1,param_2 + 0x10,
                          ((uint)*(byte *)(param_2 + 8) * 0x100 + (uint)*(byte *)(param_2 + 9)) * 6)
    ;
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f4c40 FUN_1451f4c40 body=76 status=ok
// SIG undefined FUN_1451f4c40(void)

undefined1 FUN_1451f4c40(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_1,param_2,0x12);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451ee460(param_2 + 8,param_1,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f4c90 FUN_1451f4c90 body=96 status=ok
// SIG undefined FUN_1451f4c90(void)

undefined8 FUN_1451f4c90(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_1,(byte *)(param_2 + 6),8);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_1,param_2 + 0xe,
                          ((uint)*(byte *)(param_2 + 6) * 0x100 + (uint)*(byte *)(param_2 + 7)) * 6)
    ;
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f4cf0 FUN_1451f4cf0 body=305 status=ok
// SIG undefined FUN_1451f4cf0(void)

undefined8 FUN_1451f4cf0(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  switch(param_3) {
  case 1:
    uVar2 = FUN_1451f6ad0(param_1);
    return uVar2;
  case 2:
    uVar2 = FUN_1451f6b50(param_1);
    return uVar2;
  case 3:
    uVar2 = FUN_1451f6bd0(param_1);
    return uVar2;
  case 4:
    uVar2 = FUN_1451f6c50(param_1);
    return uVar2;
  case 5:
    uVar2 = FUN_1451f6cd0(param_1);
    return uVar2;
  case 6:
    uVar2 = FUN_1451f6d70(param_1);
    return uVar2;
  case 7:
    cVar1 = FUN_144e2c5c0(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar2 = FUN_1451f8990(param_1,param_2);
      return uVar2;
    }
    break;
  case 8:
    cVar1 = FUN_144e2c5c0(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar2 = FUN_1451f1040(param_1,param_2);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 1451f4e50 FUN_1451f4e50 body=421 status=ok
// SIG undefined FUN_1451f4e50(void)

undefined8 FUN_1451f4e50(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  switch(param_3) {
  case 1:
    uVar2 = FUN_1451f6e10(param_1);
    return uVar2;
  case 2:
    uVar2 = FUN_1451f6e90(param_1);
    return uVar2;
  case 3:
    uVar2 = FUN_1451f6f10(param_1);
    return uVar2;
  case 4:
    cVar1 = FUN_144e2c5c0(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar2 = FUN_1451eca10(param_1,param_2);
      return uVar2;
    }
    break;
  case 5:
    cVar1 = FUN_144e2c5c0(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar2 = FUN_1451ecff0(param_1,param_2);
      return uVar2;
    }
    break;
  case 6:
    cVar1 = FUN_144e2c5c0(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar2 = FUN_1451ed4d0(param_1,param_2);
      return uVar2;
    }
    break;
  case 7:
    uVar2 = FUN_1451f6cd0(param_1);
    return uVar2;
  case 8:
    uVar2 = FUN_1451f6d70(param_1);
    return uVar2;
  case 9:
    cVar1 = FUN_144e2c5c0(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar2 = FUN_1451f8ae0(param_1,param_2);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 1451f5020 FUN_1451f5020 body=161 status=ok
// SIG undefined FUN_1451f5020(void)

ulonglong FUN_1451f5020(byte *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_144e2c5c0(param_2,param_1,4);
  if ((char)uVar2 != '\0') {
    uVar2 = 0;
    if (0xc < (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
              (uint)param_1[3]) {
      uVar2 = FUN_144e2c5c0(param_2,param_1);
      if ((char)uVar2 != '\0') {
        FUN_1451f6f90(param_2,param_1);
        uVar2 = FUN_1451f6260(param_1,param_2);
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
        *(longlong *)(param_2 + 8) = lVar1;
        *(ulonglong *)(param_2 + 0x10) =
             (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x28) + 0x18) + lVar1;
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1451f50d0 FUN_1451f50d0 body=930 status=ok
// SIG undefined FUN_1451f50d0(void)

ulonglong FUN_1451f50d0(byte *param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  uint local_res20;
  uint local_48;
  
  uVar4 = FUN_144e2c5c0(param_2,param_1,0x10);
  if (((((char)uVar4 == '\0') ||
       (uVar4 = 0,
       (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] < 4)) ||
      (uVar4 = FUN_1451edda0(param_1 + 4,param_2,param_1), (char)uVar4 == '\0')) ||
     (uVar4 = FUN_1451f1950(param_1 + (ulonglong)param_1[7] +
                                      ((ulonglong)param_1[6] +
                                      (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,
                            param_2), (char)uVar4 == '\0')) {
    return uVar4 & 0xffffffffffffff00;
  }
  pbVar17 = param_1 + (ulonglong)param_1[0xb] +
                      ((ulonglong)param_1[10] + (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100)
                      * 0x100;
  pbVar7 = param_1 + (ulonglong)param_1[0xf] +
                     ((ulonglong)param_1[0xe] +
                     (ulonglong)CONCAT11(param_1[0xc],param_1[0xd]) * 0x100) * 0x100;
  uVar15 = (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
           (uint)param_1[3];
  if (0x7ffffffe < uVar15) {
    return 0;
  }
  uVar5 = 0;
  local_res20 = 0;
  local_48 = 0;
  uVar4 = uVar5;
  uVar9 = uVar5;
  uVar10 = uVar5;
  uVar14 = uVar5;
  do {
    uVar3 = uVar15 * 2;
    uVar16 = (uint)uVar10;
    uVar6 = (uint)uVar9;
    uVar13 = (uint)uVar14;
    if (uVar16 < (uint)uVar5) {
      if ((uVar15 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar15, (uint)uVar5 <= uVar16)) {
LAB_1451f545f:
        return uVar5 & 0xffffffffffffff00;
      }
      pbVar12 = pbVar17 + (ulonglong)(uVar16 * uVar15) * 2;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= -uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar12,-uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451f545f;
      uVar5 = (ulonglong)(uVar16 - local_res20);
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (uVar16 - local_res20);
      if ((*(int *)(param_2 + 0x18) < 1) || (pbVar17 < pbVar12)) goto LAB_1451f545f;
      if (pbVar12 < pbVar17) {
        lVar11 = ((ulonglong)(pbVar17 + (-1 - (longlong)pbVar12)) >> 1) + 1;
        uVar8 = uVar4;
        pbVar12 = pbVar17;
        do {
          uVar5 = (ulonglong)pbVar12[-2] << 8;
          uVar3 = (int)uVar5 + 1 + (uint)pbVar12[-1];
          uVar4 = (ulonglong)uVar3;
          if (uVar3 < (uint)uVar8) {
            uVar4 = uVar8;
          }
          lVar11 = lVar11 + -1;
          uVar8 = uVar4;
          pbVar12 = pbVar12 + -2;
        } while (lVar11 != 0);
      }
      local_res20 = uVar16;
      if (uVar13 <= uVar6) goto LAB_1451f533a;
    }
    else {
      if (uVar6 < uVar13) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar4;
        }
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
LAB_1451f533a:
      uVar3 = uVar15 * 2;
      uVar16 = uVar6 + 1;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar17,uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451f545f;
      uVar3 = (uVar13 - uVar6) - 1;
      uVar5 = (ulonglong)uVar3;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + uVar3;
      if ((*(int *)(param_2 + 0x18) < 1) ||
         ((uVar15 != 0 && (uVar5 = 0xffffffff / (ulonglong)uVar15, (uint)uVar5 <= uVar16))))
      goto LAB_1451f545f;
      uVar5 = (ulonglong)(uVar16 * uVar15);
      lVar11 = uVar5 * 2;
      if (pbVar17 + lVar11 < pbVar17) goto LAB_1451f545f;
      uVar5 = (ulonglong)(uVar13 * uVar15);
      pbVar12 = pbVar17 + uVar5 * 2;
      while (pbVar12 < pbVar17 + lVar11) {
        pbVar1 = pbVar12 + 1;
        uVar5 = 0;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 2;
        uVar3 = *pbVar1 + 1 + (uint)bVar2 * 0x100;
        if (uVar3 < (uint)uVar4) {
          uVar3 = (uint)uVar4;
        }
        uVar4 = (ulonglong)uVar3;
      }
      uVar14 = (ulonglong)uVar16;
    }
    uVar3 = (uint)uVar4;
    if ((0x3ffffffe < uVar3) ||
       (uVar5 = FUN_144e2c5c0(param_2,pbVar7,uVar3 * 4), (char)uVar5 == '\0')) goto LAB_1451f545f;
    uVar5 = (ulonglong)(local_48 - uVar3);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (local_48 - uVar3);
    if (*(int *)(param_2 + 0x18) < 1) goto LAB_1451f545f;
    for (pbVar12 = pbVar7 + (ulonglong)local_48 * 4; pbVar12 < pbVar7 + uVar4 * 4;
        pbVar12 = pbVar12 + 4) {
      uVar6 = (uint)pbVar12[1] + (uint)*pbVar12 * 0x100;
      if (uVar6 <= (uint)uVar10) {
        uVar10 = (ulonglong)uVar6;
      }
      if ((uint)uVar9 <= uVar6) {
        uVar9 = (ulonglong)uVar6;
      }
    }
    uVar5 = (ulonglong)local_res20;
    local_48 = uVar3;
  } while( true );
}



// FUNCTION 1451f5480 FUN_1451f5480 body=266 status=ok
// SIG undefined FUN_1451f5480(void)

void FUN_1451f5480(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  uVar3 = 0;
  local_res8[0] = 0;
  cVar1 = FUN_1451f5590(param_1,param_2,local_res8);
  if (cVar1 != '\0') {
    if (local_res8[0] != 0) {
      pbVar4 = (byte *)((ulonglong)*(byte *)(param_1 + 0xf) +
                        ((ulonglong)*(byte *)(param_1 + 0xe) +
                        (ulonglong)
                        CONCAT11(*(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd)) *
                        0x100) * 0x100 + param_1 + 5);
      uVar5 = (ulonglong)local_res8[0];
      do {
        if (((ushort)((ushort)pbVar4[-1] * 0x100 + (ushort)*pbVar4) != -1) &&
           (uVar2 = *pbVar4 + 1 + (uint)pbVar4[-1] * 0x100, uVar3 <= uVar2)) {
          uVar3 = uVar2;
        }
        if (((ushort)((ushort)pbVar4[1] * 0x100 + (ushort)pbVar4[2]) != -1) &&
           (uVar2 = pbVar4[2] + 1 + (uint)pbVar4[1] * 0x100, uVar3 <= uVar2)) {
          uVar3 = uVar2;
        }
        pbVar4 = pbVar4 + 8;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    FUN_1451f8bc0(param_1 + 0x10,param_2,param_1,uVar3);
    return;
  }
  return;
}



// FUNCTION 1451f5590 FUN_1451f5590 body=930 status=ok
// SIG undefined FUN_1451f5590(void)

ulonglong FUN_1451f5590(byte *param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  uint local_res20;
  uint local_48;
  
  uVar4 = FUN_144e2c5c0(param_2,param_1,0x10);
  if (((((char)uVar4 == '\0') ||
       (uVar4 = 0,
       (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] < 4)) ||
      (uVar4 = FUN_1451edda0(param_1 + 4,param_2,param_1), (char)uVar4 == '\0')) ||
     (uVar4 = FUN_1451f1950(param_1 + (ulonglong)param_1[7] +
                                      ((ulonglong)param_1[6] +
                                      (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,
                            param_2), (char)uVar4 == '\0')) {
    return uVar4 & 0xffffffffffffff00;
  }
  pbVar17 = param_1 + (ulonglong)param_1[0xb] +
                      ((ulonglong)param_1[10] + (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100)
                      * 0x100;
  pbVar7 = param_1 + (ulonglong)param_1[0xf] +
                     ((ulonglong)param_1[0xe] +
                     (ulonglong)CONCAT11(param_1[0xc],param_1[0xd]) * 0x100) * 0x100;
  uVar15 = (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
           (uint)param_1[3];
  if (0x7ffffffe < uVar15) {
    return 0;
  }
  uVar5 = 0;
  local_res20 = 0;
  local_48 = 0;
  uVar4 = uVar5;
  uVar9 = uVar5;
  uVar10 = uVar5;
  uVar14 = uVar5;
  do {
    uVar3 = uVar15 * 2;
    uVar16 = (uint)uVar10;
    uVar6 = (uint)uVar9;
    uVar13 = (uint)uVar14;
    if (uVar16 < (uint)uVar5) {
      if ((uVar15 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar15, (uint)uVar5 <= uVar16)) {
LAB_1451f591f:
        return uVar5 & 0xffffffffffffff00;
      }
      pbVar12 = pbVar17 + (ulonglong)(uVar16 * uVar15) * 2;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= -uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar12,-uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451f591f;
      uVar5 = (ulonglong)(uVar16 - local_res20);
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (uVar16 - local_res20);
      if ((*(int *)(param_2 + 0x18) < 1) || (pbVar17 < pbVar12)) goto LAB_1451f591f;
      if (pbVar12 < pbVar17) {
        lVar11 = ((ulonglong)(pbVar17 + (-1 - (longlong)pbVar12)) >> 1) + 1;
        uVar8 = uVar4;
        pbVar12 = pbVar17;
        do {
          uVar5 = (ulonglong)pbVar12[-2] << 8;
          uVar3 = (int)uVar5 + 1 + (uint)pbVar12[-1];
          uVar4 = (ulonglong)uVar3;
          if (uVar3 < (uint)uVar8) {
            uVar4 = uVar8;
          }
          lVar11 = lVar11 + -1;
          uVar8 = uVar4;
          pbVar12 = pbVar12 + -2;
        } while (lVar11 != 0);
      }
      local_res20 = uVar16;
      if (uVar13 <= uVar6) goto LAB_1451f57fa;
    }
    else {
      if (uVar6 < uVar13) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar4;
        }
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
LAB_1451f57fa:
      uVar3 = uVar15 * 2;
      uVar16 = uVar6 + 1;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar17,uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451f591f;
      uVar3 = (uVar13 - uVar6) - 1;
      uVar5 = (ulonglong)uVar3;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + uVar3;
      if ((*(int *)(param_2 + 0x18) < 1) ||
         ((uVar15 != 0 && (uVar5 = 0xffffffff / (ulonglong)uVar15, (uint)uVar5 <= uVar16))))
      goto LAB_1451f591f;
      uVar5 = (ulonglong)(uVar16 * uVar15);
      lVar11 = uVar5 * 2;
      if (pbVar17 + lVar11 < pbVar17) goto LAB_1451f591f;
      uVar5 = (ulonglong)(uVar13 * uVar15);
      pbVar12 = pbVar17 + uVar5 * 2;
      while (pbVar12 < pbVar17 + lVar11) {
        pbVar1 = pbVar12 + 1;
        uVar5 = 0;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 2;
        uVar3 = *pbVar1 + 1 + (uint)bVar2 * 0x100;
        if (uVar3 < (uint)uVar4) {
          uVar3 = (uint)uVar4;
        }
        uVar4 = (ulonglong)uVar3;
      }
      uVar14 = (ulonglong)uVar16;
    }
    uVar3 = (uint)uVar4;
    if ((0x1ffffffe < uVar3) ||
       (uVar5 = FUN_144e2c5c0(param_2,pbVar7,uVar3 * 8), (char)uVar5 == '\0')) goto LAB_1451f591f;
    uVar5 = (ulonglong)(local_48 - uVar3);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (local_48 - uVar3);
    if (*(int *)(param_2 + 0x18) < 1) goto LAB_1451f591f;
    for (pbVar12 = pbVar7 + (ulonglong)local_48 * 8; pbVar12 < pbVar7 + uVar4 * 8;
        pbVar12 = pbVar12 + 8) {
      uVar6 = (uint)pbVar12[1] + (uint)*pbVar12 * 0x100;
      if (uVar6 <= (uint)uVar10) {
        uVar10 = (ulonglong)uVar6;
      }
      if ((uint)uVar9 <= uVar6) {
        uVar9 = (ulonglong)uVar6;
      }
    }
    uVar5 = (ulonglong)local_res20;
    local_48 = uVar3;
  } while( true );
}



// FUNCTION 1451f5940 FUN_1451f5940 body=128 status=ok
// SIG undefined FUN_1451f5940(void)

bool FUN_1451f5940(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451f59c0 FUN_1451f59c0 body=184 status=ok
// SIG undefined FUN_1451f59c0(void)

ulonglong FUN_1451f59c0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,0x1c);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_1451f5a80(param_1,param_2,0);
    if (((((char)uVar1 != '\0') &&
         (uVar1 = 0,
         (uint)*(byte *)(param_1 + 0x11) * 0x10000 + (uint)*(byte *)(param_1 + 0x12) * 0x100 +
         (uint)*(byte *)(param_1 + 0x10) * 0x1000000 + (uint)*(byte *)(param_1 + 0x13) != 0)) &&
        (uVar1 = 0,
        (uint)*(byte *)(param_1 + 0x15) * 0x10000 + (uint)*(byte *)(param_1 + 0x16) * 0x100 +
        (uint)*(byte *)(param_1 + 0x14) * 0x1000000 + (uint)*(byte *)(param_1 + 0x17) != 0)) &&
       (uVar1 = 0,
       (uint)*(byte *)(param_1 + 0x19) * 0x10000 + (uint)*(byte *)(param_1 + 0x1a) * 0x100 +
       (uint)*(byte *)(param_1 + 0x18) * 0x1000000 + (uint)*(byte *)(param_1 + 0x1b) != 0)) {
      return 1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451f5a80 FUN_1451f5a80 body=930 status=ok
// SIG undefined FUN_1451f5a80(void)

ulonglong FUN_1451f5a80(byte *param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  uint local_res20;
  uint local_48;
  
  uVar4 = FUN_144e2c5c0(param_2,param_1,0x10);
  if (((((char)uVar4 == '\0') ||
       (uVar4 = 0,
       (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] < 4)) ||
      (uVar4 = FUN_1451edda0(param_1 + 4,param_2,param_1), (char)uVar4 == '\0')) ||
     (uVar4 = FUN_1451f1950(param_1 + (ulonglong)param_1[7] +
                                      ((ulonglong)param_1[6] +
                                      (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,
                            param_2), (char)uVar4 == '\0')) {
    return uVar4 & 0xffffffffffffff00;
  }
  pbVar17 = param_1 + (ulonglong)param_1[0xb] +
                      ((ulonglong)param_1[10] + (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100)
                      * 0x100;
  pbVar7 = param_1 + (ulonglong)param_1[0xf] +
                     ((ulonglong)param_1[0xe] +
                     (ulonglong)CONCAT11(param_1[0xc],param_1[0xd]) * 0x100) * 0x100;
  uVar15 = (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
           (uint)param_1[3];
  if (0x7ffffffe < uVar15) {
    return 0;
  }
  uVar5 = 0;
  local_res20 = 0;
  local_48 = 0;
  uVar8 = uVar5;
  uVar4 = uVar5;
  uVar10 = uVar5;
  uVar14 = uVar5;
  do {
    uVar3 = uVar15 * 2;
    uVar16 = (uint)uVar10;
    uVar6 = (uint)uVar4;
    uVar13 = (uint)uVar14;
    if (uVar16 < (uint)uVar5) {
      if ((uVar15 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar15, (uint)uVar5 <= uVar16)) {
LAB_1451f5e0f:
        return uVar5 & 0xffffffffffffff00;
      }
      pbVar12 = pbVar17 + (ulonglong)(uVar16 * uVar15) * 2;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= -uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar12,-uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451f5e0f;
      uVar5 = (ulonglong)(uVar16 - local_res20);
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (uVar16 - local_res20);
      if ((*(int *)(param_2 + 0x18) < 1) || (pbVar17 < pbVar12)) goto LAB_1451f5e0f;
      if (pbVar12 < pbVar17) {
        lVar11 = ((ulonglong)(pbVar17 + (-1 - (longlong)pbVar12)) >> 1) + 1;
        uVar9 = uVar8;
        pbVar12 = pbVar17;
        do {
          uVar5 = (ulonglong)pbVar12[-2] << 8;
          uVar3 = (int)uVar5 + 1 + (uint)pbVar12[-1];
          uVar8 = (ulonglong)uVar3;
          if (uVar3 < (uint)uVar9) {
            uVar8 = uVar9;
          }
          lVar11 = lVar11 + -1;
          uVar9 = uVar8;
          pbVar12 = pbVar12 + -2;
        } while (lVar11 != 0);
      }
      local_res20 = uVar16;
      if (uVar13 <= uVar6) goto LAB_1451f5cea;
    }
    else {
      if (uVar6 < uVar13) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar8;
        }
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
LAB_1451f5cea:
      uVar3 = uVar15 * 2;
      uVar16 = uVar6 + 1;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar17,uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451f5e0f;
      uVar3 = (uVar13 - uVar6) - 1;
      uVar5 = (ulonglong)uVar3;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + uVar3;
      if ((*(int *)(param_2 + 0x18) < 1) ||
         ((uVar15 != 0 && (uVar5 = 0xffffffff / (ulonglong)uVar15, (uint)uVar5 <= uVar16))))
      goto LAB_1451f5e0f;
      uVar5 = (ulonglong)(uVar16 * uVar15);
      lVar11 = uVar5 * 2;
      if (pbVar17 + lVar11 < pbVar17) goto LAB_1451f5e0f;
      uVar5 = (ulonglong)(uVar13 * uVar15);
      pbVar12 = pbVar17 + uVar5 * 2;
      while (pbVar12 < pbVar17 + lVar11) {
        pbVar1 = pbVar12 + 1;
        uVar5 = 0;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 2;
        uVar3 = *pbVar1 + 1 + (uint)bVar2 * 0x100;
        if (uVar3 < (uint)uVar8) {
          uVar3 = (uint)uVar8;
        }
        uVar8 = (ulonglong)uVar3;
      }
      uVar14 = (ulonglong)uVar16;
    }
    uVar3 = (uint)uVar8;
    if ((0x2aaaaaa9 < uVar3) ||
       (uVar5 = FUN_144e2c5c0(param_2,pbVar7,uVar3 * 6), (char)uVar5 == '\0')) goto LAB_1451f5e0f;
    uVar5 = (ulonglong)(local_48 - uVar3);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (local_48 - uVar3);
    if (*(int *)(param_2 + 0x18) < 1) goto LAB_1451f5e0f;
    for (pbVar12 = pbVar7 + (ulonglong)local_48 * 6; pbVar12 < pbVar7 + uVar8 * 6;
        pbVar12 = pbVar12 + 6) {
      uVar6 = (uint)pbVar12[1] + (uint)*pbVar12 * 0x100;
      if (uVar6 <= (uint)uVar10) {
        uVar10 = (ulonglong)uVar6;
      }
      if ((uint)uVar4 <= uVar6) {
        uVar4 = (ulonglong)uVar6;
      }
    }
    uVar5 = (ulonglong)local_res20;
    local_48 = uVar3;
  } while( true );
}



// FUNCTION 1451f5e30 FUN_1451f5e30 body=114 status=ok
// SIG undefined FUN_1451f5e30(void)

ulonglong FUN_1451f5e30(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,0x14);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_1451f5eb0(param_1,param_2,0);
    if (((char)uVar1 != '\0') &&
       (uVar1 = 0,
       (uint)*(byte *)(param_1 + 0x11) * 0x10000 + (uint)*(byte *)(param_1 + 0x12) * 0x100 +
       (uint)*(byte *)(param_1 + 0x10) * 0x1000000 + (uint)*(byte *)(param_1 + 0x13) != 0)) {
      return 1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451f5eb0 FUN_1451f5eb0 body=930 status=ok
// SIG undefined FUN_1451f5eb0(void)

ulonglong FUN_1451f5eb0(byte *param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  uint local_res20;
  uint local_48;
  
  uVar4 = FUN_144e2c5c0(param_2,param_1,0x10);
  if (((((char)uVar4 == '\0') ||
       (uVar4 = 0,
       (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] < 4)) ||
      (uVar4 = FUN_1451edda0(param_1 + 4,param_2,param_1), (char)uVar4 == '\0')) ||
     (uVar4 = FUN_1451f1950(param_1 + (ulonglong)param_1[7] +
                                      ((ulonglong)param_1[6] +
                                      (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,
                            param_2), (char)uVar4 == '\0')) {
    return uVar4 & 0xffffffffffffff00;
  }
  pbVar17 = param_1 + (ulonglong)param_1[0xb] +
                      ((ulonglong)param_1[10] + (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100)
                      * 0x100;
  pbVar7 = param_1 + (ulonglong)param_1[0xf] +
                     ((ulonglong)param_1[0xe] +
                     (ulonglong)CONCAT11(param_1[0xc],param_1[0xd]) * 0x100) * 0x100;
  uVar15 = (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
           (uint)param_1[3];
  if (0x7ffffffe < uVar15) {
    return 0;
  }
  uVar5 = 0;
  local_res20 = 0;
  local_48 = 0;
  uVar4 = uVar5;
  uVar9 = uVar5;
  uVar10 = uVar5;
  uVar14 = uVar5;
  do {
    uVar3 = uVar15 * 2;
    uVar16 = (uint)uVar10;
    uVar6 = (uint)uVar9;
    uVar13 = (uint)uVar14;
    if (uVar16 < (uint)uVar5) {
      if ((uVar15 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar15, (uint)uVar5 <= uVar16)) {
LAB_1451f623f:
        return uVar5 & 0xffffffffffffff00;
      }
      pbVar12 = pbVar17 + (ulonglong)(uVar16 * uVar15) * 2;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= -uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar12,-uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451f623f;
      uVar5 = (ulonglong)(uVar16 - local_res20);
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (uVar16 - local_res20);
      if ((*(int *)(param_2 + 0x18) < 1) || (pbVar17 < pbVar12)) goto LAB_1451f623f;
      if (pbVar12 < pbVar17) {
        lVar11 = ((ulonglong)(pbVar17 + (-1 - (longlong)pbVar12)) >> 1) + 1;
        uVar8 = uVar4;
        pbVar12 = pbVar17;
        do {
          uVar5 = (ulonglong)pbVar12[-2] << 8;
          uVar3 = (int)uVar5 + 1 + (uint)pbVar12[-1];
          uVar4 = (ulonglong)uVar3;
          if (uVar3 < (uint)uVar8) {
            uVar4 = uVar8;
          }
          lVar11 = lVar11 + -1;
          uVar8 = uVar4;
          pbVar12 = pbVar12 + -2;
        } while (lVar11 != 0);
      }
      local_res20 = uVar16;
      if (uVar13 <= uVar6) goto LAB_1451f611a;
    }
    else {
      if (uVar6 < uVar13) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar4;
        }
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
LAB_1451f611a:
      uVar3 = uVar15 * 2;
      uVar16 = uVar6 + 1;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar17,uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451f623f;
      uVar3 = (uVar13 - uVar6) - 1;
      uVar5 = (ulonglong)uVar3;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + uVar3;
      if ((*(int *)(param_2 + 0x18) < 1) ||
         ((uVar15 != 0 && (uVar5 = 0xffffffff / (ulonglong)uVar15, (uint)uVar5 <= uVar16))))
      goto LAB_1451f623f;
      uVar5 = (ulonglong)(uVar16 * uVar15);
      lVar11 = uVar5 * 2;
      if (pbVar17 + lVar11 < pbVar17) goto LAB_1451f623f;
      uVar5 = (ulonglong)(uVar13 * uVar15);
      pbVar12 = pbVar17 + uVar5 * 2;
      while (pbVar12 < pbVar17 + lVar11) {
        pbVar1 = pbVar12 + 1;
        uVar5 = 0;
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 2;
        uVar3 = *pbVar1 + 1 + (uint)bVar2 * 0x100;
        if (uVar3 < (uint)uVar4) {
          uVar3 = (uint)uVar4;
        }
        uVar4 = (ulonglong)uVar3;
      }
      uVar14 = (ulonglong)uVar16;
    }
    uVar3 = (uint)uVar4;
    if ((0x1ffffffe < uVar3) ||
       (uVar5 = FUN_144e2c5c0(param_2,pbVar7,uVar3 * 8), (char)uVar5 == '\0')) goto LAB_1451f623f;
    uVar5 = (ulonglong)(local_48 - uVar3);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (local_48 - uVar3);
    if (*(int *)(param_2 + 0x18) < 1) goto LAB_1451f623f;
    for (pbVar12 = pbVar7 + (ulonglong)local_48 * 8; pbVar12 < pbVar7 + uVar4 * 8;
        pbVar12 = pbVar12 + 8) {
      uVar6 = (uint)pbVar12[1] + (uint)*pbVar12 * 0x100;
      if (uVar6 <= (uint)uVar10) {
        uVar10 = (ulonglong)uVar6;
      }
      if ((uint)uVar9 <= uVar6) {
        uVar9 = (ulonglong)uVar6;
      }
    }
    uVar5 = (ulonglong)local_res20;
    local_48 = uVar3;
  } while( true );
}



// FUNCTION 1451f6260 FUN_1451f6260 body=116 status=ok
// SIG undefined FUN_1451f6260(void)

undefined8 FUN_1451f6260(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 7);
  if (*(byte *)(param_1 + 7) == 0) {
    uVar2 = FUN_1451f50d0(param_1 + 0xc,param_2,0);
    return uVar2;
  }
  if (uVar1 == 1) {
    uVar2 = FUN_1451f5480(param_1 + 0xc);
    return uVar2;
  }
  if (uVar1 == 2) {
    uVar2 = FUN_1451f59c0(param_1 + 0xc);
    return uVar2;
  }
  if (uVar1 != 4) {
    if (uVar1 - 5 != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 - 5 >> 8),1);
    }
    uVar2 = FUN_1451f5e30(param_1 + 0xc);
    return uVar2;
  }
  uVar2 = FUN_1451f1950(param_1 + 0xc);
  return uVar2;
}



// FUNCTION 1451f62e0 FUN_1451f62e0 body=86 status=ok
// SIG undefined FUN_1451f62e0(void)

void FUN_1451f62e0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  uVar1 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar1 == 0) {
    FUN_1451f3dd0(&DAT_149a1f1a0,param_2,iVar2);
    return;
  }
  FUN_1451f3dd0((ulonglong)uVar1 + param_1,param_2,iVar2);
  return;
}



// FUNCTION 1451f6340 FUN_1451f6340 body=86 status=ok
// SIG undefined FUN_1451f6340(void)

void FUN_1451f6340(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  uVar1 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar1 == 0) {
    FUN_1451f3f80(&DAT_149a1f1a0,param_2,iVar2);
    return;
  }
  FUN_1451f3f80((ulonglong)uVar1 + param_1,param_2,iVar2);
  return;
}



// FUNCTION 1451f63a0 FUN_1451f63a0 body=86 status=ok
// SIG undefined FUN_1451f63a0(void)

void FUN_1451f63a0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  uVar1 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar1 == 0) {
    FUN_1451f4100(&DAT_149a1f1a0,param_2,iVar2);
    return;
  }
  FUN_1451f4100((ulonglong)uVar1 + param_1,param_2,iVar2);
  return;
}



// FUNCTION 1451f6400 FUN_1451f6400 body=461 status=ok
// SIG undefined FUN_1451f6400(void)

undefined1 * FUN_1451f6400(byte *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  uint uVar13;
  
  bVar2 = param_1[1];
  bVar3 = *param_1;
  uVar7 = 0;
  uVar8 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar8 != 0) {
    do {
      if (uVar7 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar6 = param_1 + ((ulonglong)uVar7 + 3) * 2;
      }
      else {
        pbVar6 = &DAT_149a1f1a0;
      }
      if ((ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]) == 0) {
        pbVar6 = &DAT_149a1f1a0;
      }
      else {
        pbVar6 = param_1 + (ulonglong)pbVar6[1] + (ulonglong)*pbVar6 * 0x100;
      }
      pbVar6 = (byte *)FUN_1451f84c0(pbVar6,param_2,(uint)bVar3 * 0x100 + (uint)bVar2);
      puVar5 = (uint *)*param_2;
      iVar9 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
      if (iVar9 == 1) {
        pbVar11 = pbVar6 + 4;
        uVar13 = (uint)pbVar6[2] * 0x100 + (uint)pbVar6[3];
        if (uVar13 != 0) {
          uVar12 = (ulonglong)uVar13;
          pbVar10 = pbVar11;
          do {
            bVar4 = *pbVar10;
            pbVar1 = pbVar10 + 1;
            pbVar10 = pbVar10 + 2;
            *puVar5 = *puVar5 | 1 << ((uint)*pbVar1 + (uint)bVar4 * -0x100 >> 4 & 0x1f);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (uVar13 != 0) {
          pbVar6 = pbVar6 + 5;
          uVar12 = (ulonglong)uVar13;
          do {
            bVar4 = *pbVar6;
            pbVar6 = pbVar6 + 2;
            puVar5[1] = puVar5[1] | 1 << (bVar4 & 0x1f);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          if (uVar13 != 0) {
            uVar12 = (ulonglong)uVar13;
            do {
              bVar4 = *pbVar11;
              pbVar6 = pbVar11 + 1;
              pbVar11 = pbVar11 + 2;
              puVar5[2] = puVar5[2] | 1 << ((uint)*pbVar6 + (uint)bVar4 * 0x100 >> 9 & 0x1f);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
      }
      else if (iVar9 == 2) {
        FUN_1451f9a70(pbVar6,puVar5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 1451f65d0 FUN_1451f65d0 body=338 status=ok
// SIG undefined FUN_1451f65d0(void)

undefined8 FUN_1451f65d0(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 1:
    uVar1 = FUN_1451f8630(param_1);
    return uVar1;
  case 2:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f8ec0(param_2,param_1);
      return uVar1;
    }
    break;
  case 3:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f8f40(param_2,param_1);
      return uVar1;
    }
    break;
  case 4:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f8fc0(param_2,param_1);
      return uVar1;
    }
    break;
  case 5:
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451f9040(param_2,param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451f90c0(param_2,param_1);
      return uVar1;
    }
    if (iVar2 == 3) {
      uVar1 = FUN_1451f9140(param_2,param_1);
      return uVar1;
    }
    break;
  case 6:
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451f91c0(param_2,param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451f9240(param_2,param_1);
      return uVar1;
    }
    if (iVar2 == 3) {
      uVar1 = FUN_1451f92c0(param_2,param_1);
      return uVar1;
    }
    break;
  case 7:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f9310(param_1);
      return uVar1;
    }
    break;
  case 8:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f9370(param_2,param_1);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1451f6750 FUN_1451f6750 body=461 status=ok
// SIG undefined FUN_1451f6750(void)

undefined1 * FUN_1451f6750(byte *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  uint uVar13;
  
  bVar2 = param_1[1];
  bVar3 = *param_1;
  uVar7 = 0;
  uVar8 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar8 != 0) {
    do {
      if (uVar7 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar6 = param_1 + ((ulonglong)uVar7 + 3) * 2;
      }
      else {
        pbVar6 = &DAT_149a1f1a0;
      }
      if ((ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]) == 0) {
        pbVar6 = &DAT_149a1f1a0;
      }
      else {
        pbVar6 = param_1 + (ulonglong)pbVar6[1] + (ulonglong)*pbVar6 * 0x100;
      }
      pbVar6 = (byte *)FUN_1451f8670(pbVar6,param_2,(uint)bVar3 * 0x100 + (uint)bVar2);
      puVar5 = (uint *)*param_2;
      iVar9 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
      if (iVar9 == 1) {
        pbVar11 = pbVar6 + 4;
        uVar13 = (uint)pbVar6[2] * 0x100 + (uint)pbVar6[3];
        if (uVar13 != 0) {
          uVar12 = (ulonglong)uVar13;
          pbVar10 = pbVar11;
          do {
            bVar4 = *pbVar10;
            pbVar1 = pbVar10 + 1;
            pbVar10 = pbVar10 + 2;
            *puVar5 = *puVar5 | 1 << ((uint)*pbVar1 + (uint)bVar4 * -0x100 >> 4 & 0x1f);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (uVar13 != 0) {
          pbVar6 = pbVar6 + 5;
          uVar12 = (ulonglong)uVar13;
          do {
            bVar4 = *pbVar6;
            pbVar6 = pbVar6 + 2;
            puVar5[1] = puVar5[1] | 1 << (bVar4 & 0x1f);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          if (uVar13 != 0) {
            uVar12 = (ulonglong)uVar13;
            do {
              bVar4 = *pbVar11;
              pbVar6 = pbVar11 + 1;
              pbVar11 = pbVar11 + 2;
              puVar5[2] = puVar5[2] | 1 << ((uint)*pbVar6 + (uint)bVar4 * 0x100 >> 9 & 0x1f);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
      }
      else if (iVar9 == 2) {
        FUN_1451f9a70(pbVar6,puVar5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 1451f6920 FUN_1451f6920 body=388 status=ok
// SIG undefined FUN_1451f6920(void)

undefined8 FUN_1451f6920(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 1:
    uVar1 = FUN_1451f87e0(param_1);
    return uVar1;
  case 2:
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451f9550(param_2,param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451f95d0(param_2,param_1);
      return uVar1;
    }
    break;
  case 3:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f9650(param_2,param_1);
      return uVar1;
    }
    break;
  case 4:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f96d0(param_2,param_1);
      return uVar1;
    }
    break;
  case 5:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f9750(param_2,param_1);
      return uVar1;
    }
    break;
  case 6:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f97d0(param_2,param_1);
      return uVar1;
    }
    break;
  case 7:
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451f9040(param_2,param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451f90c0(param_2,param_1);
      return uVar1;
    }
    if (iVar2 == 3) {
      uVar1 = FUN_1451f9140(param_2,param_1);
      return uVar1;
    }
    break;
  case 8:
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      uVar1 = FUN_1451f91c0(param_2,param_1);
      return uVar1;
    }
    if (iVar2 == 2) {
      uVar1 = FUN_1451f9240(param_2,param_1);
      return uVar1;
    }
    if (iVar2 == 3) {
      uVar1 = FUN_1451f92c0(param_2,param_1);
      return uVar1;
    }
    break;
  case 9:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar1 = FUN_1451f9850(param_1);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1451f6ad0 FUN_1451f6ad0 body=125 status=ok
// SIG undefined FUN_1451f6ad0(void)

undefined8 FUN_1451f6ad0(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      return 1;
    }
    uVar1 = FUN_1451ef950(param_1,param_2);
    return uVar1;
  }
  uVar1 = FUN_1451f8820(param_2,param_1);
  return uVar1;
}



// FUNCTION 1451f6b50 FUN_1451f6b50 body=118 status=ok
// SIG undefined FUN_1451f6b50(void)

undefined8 FUN_1451f6b50(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return 1;
    }
    cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
    if ((cVar1 != '\0') && (cVar1 = FUN_1451efd40(param_1 + 4,param_2,param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f6bd0 FUN_1451f6bd0 body=118 status=ok
// SIG undefined FUN_1451f6bd0(void)

undefined8 FUN_1451f6bd0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return 1;
    }
    cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
    if ((cVar1 != '\0') && (cVar1 = FUN_1451f01e0(param_1 + 4,param_2,param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f6c50 FUN_1451f6c50 body=118 status=ok
// SIG undefined FUN_1451f6c50(void)

undefined8 FUN_1451f6c50(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return 1;
    }
    cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
    if ((cVar1 != '\0') && (cVar1 = FUN_1451f0b60(param_1 + 4,param_2,param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f6cd0 FUN_1451f6cd0 body=151 status=ok
// SIG undefined FUN_1451f6cd0(void)

undefined8 FUN_1451f6cd0(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 == 1) {
    uVar1 = FUN_1451f8880(param_2,param_1);
    return uVar1;
  }
  if (iVar2 == 2) {
    uVar1 = FUN_1451f88d0(param_2,param_1);
    return uVar1;
  }
  if (iVar2 != 3) {
    return 1;
  }
  uVar1 = FUN_1451e73d0(param_1,param_2);
  return uVar1;
}



// FUNCTION 1451f6d70 FUN_1451f6d70 body=151 status=ok
// SIG undefined FUN_1451f6d70(void)

undefined8 FUN_1451f6d70(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 == 1) {
    uVar1 = FUN_1451f8940(param_2,param_1);
    return uVar1;
  }
  if (iVar2 == 2) {
    uVar1 = FUN_1451e8570(param_1,param_2);
    return uVar1;
  }
  if (iVar2 != 3) {
    return 1;
  }
  uVar1 = FUN_1451e88f0(param_1,param_2);
  return uVar1;
}



// FUNCTION 1451f6e10 FUN_1451f6e10 body=125 status=ok
// SIG undefined FUN_1451f6e10(void)

undefined8 FUN_1451f6e10(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      return 1;
    }
    uVar1 = FUN_1451eb220(param_1,param_2);
    return uVar1;
  }
  uVar1 = FUN_1451f8a70(param_2,param_1);
  return uVar1;
}



// FUNCTION 1451f6e90 FUN_1451f6e90 body=125 status=ok
// SIG undefined FUN_1451f6e90(void)

undefined8 FUN_1451f6e90(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      return 1;
    }
    uVar1 = FUN_1451ebd90(param_1,param_2);
    return uVar1;
  }
  uVar1 = FUN_1451eb760(param_1,param_2);
  return uVar1;
}



// FUNCTION 1451f6f10 FUN_1451f6f10 body=118 status=ok
// SIG undefined FUN_1451f6f10(void)

undefined8 FUN_1451f6f10(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return 1;
    }
    cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
    if ((cVar1 != '\0') && (cVar1 = FUN_1451ec660(param_1 + 4,param_2,param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f6f90 FUN_1451f6f90 body=113 status=ok
// SIG undefined FUN_1451f6f90(void)

void FUN_1451f6f90(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x28) + 0x10);
  *(undefined1 **)(param_1 + 8) = puVar2;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x18);
  *(undefined1 **)(param_1 + 0x10) = puVar2 + uVar1;
  if (param_2 != (undefined1 *)0x0) {
    if ((puVar2 <= param_2) && (param_2 < puVar2 + uVar1)) {
      *(undefined1 **)(param_1 + 8) = param_2;
      uVar4 = ((ulonglong)CONCAT11(*param_2,param_2[1]) * 0x100 + (ulonglong)(byte)param_2[2]) *
              0x100 + (ulonglong)(byte)param_2[3];
      uVar3 = *(longlong *)(param_1 + 0x10) - (longlong)param_2;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      *(undefined1 **)(param_1 + 0x10) = param_2 + uVar3;
      return;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1451f7010 FUN_1451f7010 body=653 status=ok
// SIG undefined FUN_1451f7010(void)

void FUN_1451f7010(undefined8 *param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5
                  )

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_118 [2];
  uint *local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  uint local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  uint *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_64;
  int local_60;
  undefined4 local_58;
  char local_4b;
  char local_4a;
  
  FUN_1451e5500(local_118,1,param_2,param_3);
  local_d0 = local_118;
  local_58 = 8;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 8;
  if ((local_60 == 1) || (local_4b != '\0')) {
    local_c4 = 1;
  }
  else {
    local_c4 = 0;
  }
  lVar5 = *(longlong *)(param_3 + 0x70);
  local_104 = local_60 == 1;
  lVar6 = *(longlong *)(param_3 + 0x80);
  local_103 = local_4a != '\0';
  local_110 = local_118;
  uVar3 = *(uint *)(param_3 + 0x38);
  local_c3 = 1;
  uVar13 = 0;
  uVar4 = *(uint *)(param_3 + 0x60);
  local_c0 = 0xffffffff;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 8;
  local_100 = param_4;
  local_64 = param_4;
  if (uVar4 != 0) {
    do {
      uVar12 = (uint)uVar13;
      lVar2 = uVar13 * 0x14;
      if ((*(uint *)(lVar2 + 4 + lVar5) & param_4) == 0) {
        uVar14 = (ulonglong)(uVar12 + 1);
      }
      else {
        local_e0 = 1;
        local_dc = *(undefined4 *)(*(longlong *)(local_110 + 0x24) + 0x60);
        lVar7 = *(longlong *)(local_110 + 0x24);
        if (uVar12 == *(uint *)(lVar7 + 0x5c)) {
          local_fc = *(undefined1 *)
                      (*(longlong *)(lVar7 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14
                      );
        }
        else {
          local_fc = 0;
        }
        local_118[0] = uVar12;
        cVar9 = FUN_1451e5340(local_118);
        uVar8 = local_118[0];
        if (cVar9 == '\0') {
          uVar14 = (ulonglong)(uVar12 + 1);
        }
        else {
          uVar14 = (ulonglong)local_118[0];
          uVar10 = FUN_1451ef470(*param_1,*(undefined4 *)(lVar2 + lVar5),
                                 *(undefined4 *)(lVar5 + uVar14 * 0x14));
          if (uVar10 != 0) {
            if ((uVar3 & 0xfffffffe) == 4) {
              if (param_5 != '\0') {
                uVar10 = FUN_1451e10a0(param_2,uVar10 & 0xffff);
              }
              if (*(char *)(param_1 + 1) == '\0') {
                *(int *)(lVar2 + lVar6) = *(int *)(lVar2 + lVar6) + ((int)uVar10 >> 1);
                iVar11 = uVar10 - ((int)uVar10 >> 1);
                piVar1 = (int *)(lVar6 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 8 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(uint *)(lVar6 + 0xc + uVar14 * 0x14) = uVar10;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            else {
              if (param_5 != '\0') {
                uVar10 = FUN_144e31290(param_2,uVar10 & 0xffff);
              }
              if (*(char *)(param_1 + 1) == '\0') {
                piVar1 = (int *)(lVar2 + 4 + lVar6);
                *piVar1 = *piVar1 + ((int)uVar10 >> 1);
                iVar11 = uVar10 - ((int)uVar10 >> 1);
                piVar1 = (int *)(lVar6 + 4 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 0xc + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(uint *)(lVar6 + 8 + uVar14 * 0x14) = uVar10;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            if (1 < (uVar8 + 1) - uVar12) {
              FUN_144b620d0(param_3,uVar13);
            }
            uVar14 = (ulonglong)local_118[0];
          }
        }
      }
      uVar13 = uVar14;
    } while ((uint)uVar14 < uVar4);
  }
  return;
}



// FUNCTION 1451f72a0 FUN_1451f72a0 body=693 status=ok
// SIG undefined FUN_1451f72a0(void)

void FUN_1451f72a0(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_118 [2];
  uint *local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  uint local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  uint *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_64;
  int local_60;
  undefined4 local_58;
  char local_4b;
  char local_4a;
  
  FUN_1451e5500(local_118,1,param_2,param_3);
  local_d0 = local_118;
  local_58 = 8;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 8;
  if ((local_60 == 1) || (local_4b != '\0')) {
    local_c4 = 1;
  }
  else {
    local_c4 = 0;
  }
  lVar5 = *(longlong *)(param_3 + 0x70);
  local_104 = local_60 == 1;
  lVar6 = *(longlong *)(param_3 + 0x80);
  local_103 = local_4a != '\0';
  local_110 = local_118;
  uVar3 = *(uint *)(param_3 + 0x38);
  local_c3 = 1;
  uVar13 = 0;
  uVar4 = *(uint *)(param_3 + 0x60);
  local_c0 = 0xffffffff;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 8;
  local_100 = param_4;
  local_64 = param_4;
  if (uVar4 != 0) {
    do {
      uVar12 = (uint)uVar13;
      lVar2 = uVar13 * 0x14;
      if ((*(uint *)(lVar2 + 4 + lVar5) & param_4) == 0) {
        uVar13 = (ulonglong)(uVar12 + 1);
      }
      else {
        local_e0 = 1;
        local_dc = *(undefined4 *)(*(longlong *)(local_110 + 0x24) + 0x60);
        lVar7 = *(longlong *)(local_110 + 0x24);
        if (uVar12 == *(uint *)(lVar7 + 0x5c)) {
          local_fc = *(undefined1 *)
                      (*(longlong *)(lVar7 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14
                      );
        }
        else {
          local_fc = 0;
        }
        local_118[0] = uVar12;
        cVar9 = FUN_1451e5340(local_118);
        uVar8 = local_118[0];
        if (cVar9 == '\0') {
          uVar13 = (ulonglong)(uVar12 + 1);
        }
        else {
          uVar14 = (ulonglong)local_118[0];
          uVar10 = FUN_1451ef2c0(*(undefined8 *)*param_1,*(undefined4 *)(lVar2 + lVar5),
                                 *(undefined4 *)(lVar5 + uVar14 * 0x14),((undefined8 *)*param_1)[1])
          ;
          if (uVar10 != 0) {
            if ((uVar3 & 0xfffffffe) == 4) {
              if (param_5 != '\0') {
                uVar10 = FUN_1451e10a0(param_2,uVar10 & 0xffff);
              }
              if ((char)param_1[1] == '\0') {
                *(int *)(lVar2 + lVar6) = *(int *)(lVar2 + lVar6) + ((int)uVar10 >> 1);
                iVar11 = uVar10 - ((int)uVar10 >> 1);
                piVar1 = (int *)(lVar6 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 8 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(uint *)(lVar6 + 0xc + uVar14 * 0x14) = uVar10;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            else {
              if (param_5 != '\0') {
                uVar10 = FUN_144e31290(param_2,uVar10 & 0xffff);
              }
              if ((char)param_1[1] == '\0') {
                piVar1 = (int *)(lVar2 + 4 + lVar6);
                *piVar1 = *piVar1 + ((int)uVar10 >> 1);
                iVar11 = uVar10 - ((int)uVar10 >> 1);
                piVar1 = (int *)(lVar6 + 4 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 0xc + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(uint *)(lVar6 + 8 + uVar14 * 0x14) = uVar10;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            if (1 < (uVar8 + 1) - uVar12) {
              FUN_144b620d0(param_3,uVar13);
            }
          }
          uVar13 = (ulonglong)local_118[0];
        }
      }
    } while ((uint)uVar13 < uVar4);
  }
  return;
}



// FUNCTION 1451f7560 FUN_1451f7560 body=715 status=ok
// SIG undefined FUN_1451f7560(void)

void FUN_1451f7560(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  short sVar12;
  uint uVar13;
  byte *pbVar14;
  byte bVar15;
  
  lVar5 = *(longlong *)(param_2 + 8);
  if ((uint)*(byte *)(param_3 + 2) * 0x100 + (uint)*(byte *)(param_3 + 3) >> 0xf != 0) {
    if (*(uint *)(param_1 + 7) < 8) {
      *(undefined4 *)((longlong)param_1 + (ulonglong)*(uint *)(param_1 + 7) * 4 + 0x18) =
           *(undefined4 *)(lVar5 + 0x5c);
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    }
    else {
      *(undefined4 *)(param_1 + 7) = 0;
    }
  }
  if ((((ushort)*(byte *)(param_3 + 2) * 0x100 + (ushort)*(byte *)(param_3 + 3) & 0x3fff) != 0) &&
     (uVar4 = *(uint *)(param_1 + 7), uVar4 != 0)) {
    pbVar6 = (byte *)param_1[2];
    pbVar14 = &DAT_149a1f1a0;
    if (pbVar6 <= pbVar6 + (((((ulonglong)
                               CONCAT11(*(undefined1 *)(param_3 + 2),*(undefined1 *)(param_3 + 3)) &
                              0x3fff) + param_1[1]) - (longlong)pbVar6) + 8 >> 1 & 0xffffffff) * 2)
    {
      pbVar14 = pbVar6 + (((((ulonglong)
                             CONCAT11(*(undefined1 *)(param_3 + 2),*(undefined1 *)(param_3 + 3)) &
                            0x3fff) + param_1[1]) - (longlong)pbVar6) + 8 >> 1 & 0xffffffff) * 2;
    }
    if (((uVar4 == 0xffffffff) || (0x7ffffffe < uVar4)) ||
       (cVar8 = FUN_144e2c5c0(*param_1 + 0x20,pbVar14,uVar4 * 2), cVar8 == '\0')) {
      *(undefined4 *)(param_1 + 7) = 0;
      return;
    }
    bVar15 = 0;
    uVar4 = *(uint *)(*(longlong *)*param_1 + 0xb0);
    do {
      if ((int)param_1[7] == 0) {
        return;
      }
      uVar9 = (int)param_1[7] - 1;
      *(uint *)(param_1 + 7) = uVar9;
      bVar3 = *pbVar14;
      uVar9 = *(uint *)((longlong)param_1 + (ulonglong)uVar9 * 4 + 0x18);
      pbVar6 = pbVar14 + 1;
      pbVar14 = pbVar14 + 2;
      sVar12 = (ushort)bVar3 * 0x100 + (ushort)*pbVar6;
      uVar13 = (uint)sVar12;
      if (uVar9 < *(uint *)(lVar5 + 0x60)) {
        lVar7 = *(longlong *)(lVar5 + 0x80);
        lVar1 = (ulonglong)uVar9 * 0x14;
        bVar15 = (byte)sVar12 & 1;
        if ((uVar13 & 0xfffffffe) == 0xffff8000) {
          *(undefined1 *)(lVar7 + 0x12 + lVar1) = 0;
          *(undefined2 *)(lVar7 + 0x10 + lVar1) = 0;
          *(undefined8 *)(lVar7 + 8 + lVar1) = 0;
        }
        else if ((*(uint *)(lVar5 + 0x38) & 0xfffffffe) == 4) {
          if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
            if (((*(uint *)(*(longlong *)(lVar5 + 0x70) + 4 + lVar1) & uVar4) != 0) &&
               (*(int *)(lVar7 + 8 + lVar1) == 0)) {
              iVar11 = FUN_1451e10a0(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
              *(int *)(lVar7 + lVar1) = *(int *)(lVar7 + lVar1) + iVar11;
              lVar7 = *(longlong *)(lVar5 + 0x80);
              iVar11 = FUN_1451e10a0(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
              piVar2 = (int *)(lVar7 + 8 + lVar1);
              *piVar2 = *piVar2 + iVar11;
            }
          }
          else if ((*(char *)(lVar7 + 0x12 + lVar1) != '\0') && (*(int *)(lVar7 + 0xc + lVar1) == 0)
                  ) {
            uVar10 = FUN_144e31290(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
            *(undefined4 *)(lVar7 + 0xc + lVar1) = uVar10;
            *(uint *)(lVar5 + 0x28) = *(uint *)(lVar5 + 0x28) | 8;
          }
        }
        else if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
          if (((*(uint *)(*(longlong *)(lVar5 + 0x70) + 4 + lVar1) & uVar4) != 0) &&
             (*(int *)(lVar7 + 0xc + lVar1) == 0)) {
            iVar11 = FUN_144e31290(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
            piVar2 = (int *)(lVar7 + 4 + lVar1);
            *piVar2 = *piVar2 + iVar11;
            lVar7 = *(longlong *)(lVar5 + 0x80);
            iVar11 = FUN_144e31290(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
            piVar2 = (int *)(lVar7 + 0xc + lVar1);
            *piVar2 = *piVar2 + iVar11;
          }
        }
        else if ((*(char *)(lVar7 + 0x12 + lVar1) != '\0') && (*(int *)(lVar7 + 8 + lVar1) == 0)) {
          uVar10 = FUN_1451e10a0(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
          *(undefined4 *)(lVar7 + 8 + lVar1) = uVar10;
          *(uint *)(lVar5 + 0x28) = *(uint *)(lVar5 + 0x28) | 8;
        }
      }
    } while (bVar15 == 0);
  }
  return;
}



// FUNCTION 1451f7830 FUN_1451f7830 body=847 status=ok
// SIG undefined FUN_1451f7830(void)

void FUN_1451f7830(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  iVar13 = 0;
  *(undefined4 *)(param_1[1] + 0x5c) = 0;
  if (*(char *)(param_1[1] + 0x58) != '\0') {
    do {
      lVar5 = param_1[1];
      uVar3 = *(uint *)(lVar5 + 0x5c);
      if (uVar3 < *(uint *)(lVar5 + 0x60)) {
        iVar4 = *(int *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)uVar3 * 0x14);
        lVar6 = *param_1;
        if (iVar4 == 0xffff) {
          uVar17 = 2;
        }
        else {
          pbVar14 = (byte *)((ulonglong)*(byte *)(lVar6 + 3) +
                            (ulonglong)*(byte *)(lVar6 + 2) * 0x100 + lVar6);
          uVar15 = (iVar4 + (uint)*pbVar14 * -0x100) - (uint)pbVar14[1];
          uVar17 = 1;
          if (uVar15 < (uint)pbVar14[2] * 0x100 + (uint)pbVar14[3]) {
            uVar17 = (uint)pbVar14[(ulonglong)uVar15 + 4];
          }
        }
      }
      else {
        uVar17 = 0;
      }
      pbVar14 = (byte *)*param_1;
      uVar15 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
      if (uVar15 <= uVar17) {
        uVar17 = 1;
      }
      pbVar14 = pbVar14 + (ulonglong)
                          pbVar14[(ulonglong)(uVar15 * iVar13 + uVar17) +
                                  (ulonglong)pbVar14[4] * 0x100 + (ulonglong)pbVar14[5]] * 4 +
                          (ulonglong)pbVar14[7] + (ulonglong)pbVar14[6] * 0x100;
      if (iVar13 != 0) {
        uVar17 = uVar3;
        if (*(char *)(lVar5 + 0x59) != '\0') {
          uVar17 = *(uint *)(lVar5 + 100);
        }
        if (((uVar17 != 0) && (uVar3 < *(uint *)(lVar5 + 0x60))) &&
           ((((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3] & 0x3fff) != 0 ||
            (((ushort)((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1]) != 0 ||
             ((ushort)((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3]) != 0x4000)))))) {
          uVar17 = uVar3;
          if (*(char *)(lVar5 + 0x59) != '\0') {
            uVar17 = *(uint *)(lVar5 + 100);
          }
          FUN_144b62160(lVar5,uVar17 - 1,uVar3 + 1);
        }
      }
      lVar5 = param_1[1];
      iVar4 = *(int *)(lVar5 + 0x5c);
      uVar3 = iVar4 + 2;
      if (((uVar3 <= *(uint *)(lVar5 + 0x60)) &&
          (pbVar7 = (byte *)*param_1, iVar16 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1],
          lVar6 = (ulonglong)pbVar7[7] + (ulonglong)pbVar7[6] * 0x100,
          ((ushort)pbVar7[(ulonglong)
                          pbVar7[(ulonglong)(iVar16 * iVar13 + (uint)(iVar16 == 0)) +
                                 (ulonglong)pbVar7[5] + (ulonglong)pbVar7[4] * 0x100] * 4 +
                          lVar6 + 3] +
           (ushort)pbVar7[(ulonglong)
                          pbVar7[(ulonglong)(iVar16 * iVar13 + (uint)(iVar16 == 0)) +
                                 (ulonglong)pbVar7[5] + (ulonglong)pbVar7[4] * 0x100] * 4 +
                          lVar6 + 2] * 0x100 & 0x3fff) != 0)) && (1 < uVar3 - iVar4)) {
        FUN_144b620d0(lVar5,iVar4,uVar3);
      }
      FUN_1451f7560(param_2,param_1,pbVar14);
      pbVar7 = (byte *)*param_1;
      lVar5 = param_1[1];
      iVar13 = (int)((((uint)*pbVar14 - (uint)pbVar7[4]) * 0x100 - (uint)pbVar7[5]) +
                    (uint)pbVar14[1]) / (int)((uint)*pbVar7 * 0x100 + (uint)pbVar7[1]);
      if (*(int *)(lVar5 + 0x5c) == *(int *)(lVar5 + 0x60)) {
        return;
      }
      if ((((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3] & 0x4000) == 0) ||
         (iVar4 = *(int *)(lVar5 + 0x30), *(int *)(lVar5 + 0x30) = iVar4 + -1, iVar4 < 1)) {
        lVar5 = param_1[1];
        if (*(char *)(lVar5 + 0x59) != '\0') {
          if ((*(longlong *)(lVar5 + 0x78) != *(longlong *)(lVar5 + 0x70)) ||
             (*(int *)(lVar5 + 100) != *(int *)(lVar5 + 0x5c))) {
            cVar12 = FUN_144b62480(lVar5,1,1);
            if (cVar12 == '\0') goto LAB_1451f7b4e;
            uVar3 = *(uint *)(lVar5 + 0x5c);
            lVar6 = *(longlong *)(lVar5 + 0x70);
            uVar17 = *(uint *)(lVar5 + 100);
            puVar1 = (undefined4 *)(lVar6 + (ulonglong)uVar3 * 0x14);
            uVar9 = puVar1[1];
            uVar10 = puVar1[2];
            uVar11 = puVar1[3];
            lVar8 = *(longlong *)(lVar5 + 0x78);
            puVar2 = (undefined4 *)(lVar8 + (ulonglong)uVar17 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar9;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
            *(undefined4 *)(lVar8 + (ulonglong)uVar17 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar6 + 0x10 + (ulonglong)uVar3 * 0x14);
          }
          *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
        }
        *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
      }
LAB_1451f7b4e:
    } while (*(char *)(param_1[1] + 0x58) != '\0');
  }
  return;
}



// FUNCTION 1451f7b80 FUN_1451f7b80 body=693 status=ok
// SIG undefined FUN_1451f7b80(void)

void FUN_1451f7b80(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_118 [2];
  uint *local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  uint local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  uint *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_64;
  int local_60;
  undefined4 local_58;
  char local_4b;
  char local_4a;
  
  FUN_1451e5500(local_118,1,param_2,param_3);
  local_d0 = local_118;
  local_58 = 8;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 8;
  if ((local_60 == 1) || (local_4b != '\0')) {
    local_c4 = 1;
  }
  else {
    local_c4 = 0;
  }
  lVar5 = *(longlong *)(param_3 + 0x70);
  local_104 = local_60 == 1;
  lVar6 = *(longlong *)(param_3 + 0x80);
  local_103 = local_4a != '\0';
  local_110 = local_118;
  uVar3 = *(uint *)(param_3 + 0x38);
  local_c3 = 1;
  uVar13 = 0;
  uVar4 = *(uint *)(param_3 + 0x60);
  local_c0 = 0xffffffff;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 8;
  local_100 = param_4;
  local_64 = param_4;
  if (uVar4 != 0) {
    do {
      uVar12 = (uint)uVar13;
      lVar2 = uVar13 * 0x14;
      if ((*(uint *)(lVar2 + 4 + lVar5) & param_4) == 0) {
        uVar13 = (ulonglong)(uVar12 + 1);
      }
      else {
        local_e0 = 1;
        local_dc = *(undefined4 *)(*(longlong *)(local_110 + 0x24) + 0x60);
        lVar7 = *(longlong *)(local_110 + 0x24);
        if (uVar12 == *(uint *)(lVar7 + 0x5c)) {
          local_fc = *(undefined1 *)
                      (*(longlong *)(lVar7 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14
                      );
        }
        else {
          local_fc = 0;
        }
        local_118[0] = uVar12;
        cVar9 = FUN_1451e5340(local_118);
        uVar8 = local_118[0];
        if (cVar9 == '\0') {
          uVar13 = (ulonglong)(uVar12 + 1);
        }
        else {
          uVar14 = (ulonglong)local_118[0];
          uVar10 = FUN_1451ef0e0(*(undefined8 *)*param_1,*(undefined4 *)(lVar2 + lVar5),
                                 *(undefined4 *)(lVar5 + uVar14 * 0x14),((undefined8 *)*param_1)[1])
          ;
          if (uVar10 != 0) {
            if ((uVar3 & 0xfffffffe) == 4) {
              if (param_5 != '\0') {
                uVar10 = FUN_1451e10a0(param_2,uVar10 & 0xffff);
              }
              if ((char)param_1[1] == '\0') {
                *(int *)(lVar2 + lVar6) = *(int *)(lVar2 + lVar6) + ((int)uVar10 >> 1);
                iVar11 = uVar10 - ((int)uVar10 >> 1);
                piVar1 = (int *)(lVar6 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 8 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(uint *)(lVar6 + 0xc + uVar14 * 0x14) = uVar10;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            else {
              if (param_5 != '\0') {
                uVar10 = FUN_144e31290(param_2,uVar10 & 0xffff);
              }
              if ((char)param_1[1] == '\0') {
                piVar1 = (int *)(lVar2 + 4 + lVar6);
                *piVar1 = *piVar1 + ((int)uVar10 >> 1);
                iVar11 = uVar10 - ((int)uVar10 >> 1);
                piVar1 = (int *)(lVar6 + 4 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 0xc + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(uint *)(lVar6 + 8 + uVar14 * 0x14) = uVar10;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            if (1 < (uVar8 + 1) - uVar12) {
              FUN_144b620d0(param_3,uVar13);
            }
          }
          uVar13 = (ulonglong)local_118[0];
        }
      }
    } while ((uint)uVar13 < uVar4);
  }
  return;
}



// FUNCTION 1451f7e40 FUN_1451f7e40 body=693 status=ok
// SIG undefined FUN_1451f7e40(void)

void FUN_1451f7e40(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_118 [2];
  uint *local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  uint local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  uint *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_64;
  int local_60;
  undefined4 local_58;
  char local_4b;
  char local_4a;
  
  FUN_1451e5500(local_118,1,param_2,param_3);
  local_d0 = local_118;
  local_58 = 8;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 8;
  if ((local_60 == 1) || (local_4b != '\0')) {
    local_c4 = 1;
  }
  else {
    local_c4 = 0;
  }
  lVar5 = *(longlong *)(param_3 + 0x70);
  local_104 = local_60 == 1;
  lVar6 = *(longlong *)(param_3 + 0x80);
  local_103 = local_4a != '\0';
  local_110 = local_118;
  uVar3 = *(uint *)(param_3 + 0x38);
  local_c3 = 1;
  uVar13 = 0;
  uVar4 = *(uint *)(param_3 + 0x60);
  local_c0 = 0xffffffff;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 8;
  local_100 = param_4;
  local_64 = param_4;
  if (uVar4 != 0) {
    do {
      uVar12 = (uint)uVar13;
      lVar2 = uVar13 * 0x14;
      if ((*(uint *)(lVar2 + 4 + lVar5) & param_4) == 0) {
        uVar13 = (ulonglong)(uVar12 + 1);
      }
      else {
        local_e0 = 1;
        local_dc = *(undefined4 *)(*(longlong *)(local_110 + 0x24) + 0x60);
        lVar7 = *(longlong *)(local_110 + 0x24);
        if (uVar12 == *(uint *)(lVar7 + 0x5c)) {
          local_fc = *(undefined1 *)
                      (*(longlong *)(lVar7 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14
                      );
        }
        else {
          local_fc = 0;
        }
        local_118[0] = uVar12;
        cVar9 = FUN_1451e5340(local_118);
        uVar8 = local_118[0];
        if (cVar9 == '\0') {
          uVar13 = (ulonglong)(uVar12 + 1);
        }
        else {
          uVar14 = (ulonglong)local_118[0];
          uVar10 = FUN_1451ee7e0(*(undefined8 *)*param_1,*(undefined4 *)(lVar2 + lVar5),
                                 *(undefined4 *)(lVar5 + uVar14 * 0x14),((undefined8 *)*param_1)[1])
          ;
          if (uVar10 != 0) {
            if ((uVar3 & 0xfffffffe) == 4) {
              if (param_5 != '\0') {
                uVar10 = FUN_1451e10a0(param_2,uVar10 & 0xffff);
              }
              if ((char)param_1[1] == '\0') {
                *(int *)(lVar2 + lVar6) = *(int *)(lVar2 + lVar6) + ((int)uVar10 >> 1);
                iVar11 = uVar10 - ((int)uVar10 >> 1);
                piVar1 = (int *)(lVar6 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 8 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(uint *)(lVar6 + 0xc + uVar14 * 0x14) = uVar10;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            else {
              if (param_5 != '\0') {
                uVar10 = FUN_144e31290(param_2,uVar10 & 0xffff);
              }
              if ((char)param_1[1] == '\0') {
                piVar1 = (int *)(lVar2 + 4 + lVar6);
                *piVar1 = *piVar1 + ((int)uVar10 >> 1);
                iVar11 = uVar10 - ((int)uVar10 >> 1);
                piVar1 = (int *)(lVar6 + 4 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 0xc + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(uint *)(lVar6 + 8 + uVar14 * 0x14) = uVar10;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            if (1 < (uVar8 + 1) - uVar12) {
              FUN_144b620d0(param_3,uVar13);
            }
          }
          uVar13 = (ulonglong)local_118[0];
        }
      }
    } while ((uint)uVar13 < uVar4);
  }
  return;
}



// FUNCTION 1451f8100 FUN_1451f8100 body=693 status=ok
// SIG undefined FUN_1451f8100(void)

void FUN_1451f8100(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_118 [2];
  uint *local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  uint local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  uint *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_64;
  int local_60;
  undefined4 local_58;
  char local_4b;
  char local_4a;
  
  FUN_1451e5500(local_118,1,param_2,param_3);
  local_d0 = local_118;
  local_58 = 8;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 8;
  if ((local_60 == 1) || (local_4b != '\0')) {
    local_c4 = 1;
  }
  else {
    local_c4 = 0;
  }
  lVar5 = *(longlong *)(param_3 + 0x70);
  local_104 = local_60 == 1;
  lVar6 = *(longlong *)(param_3 + 0x80);
  local_103 = local_4a != '\0';
  local_110 = local_118;
  uVar3 = *(uint *)(param_3 + 0x38);
  local_c3 = 1;
  uVar13 = 0;
  uVar4 = *(uint *)(param_3 + 0x60);
  local_c0 = 0xffffffff;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 8;
  local_100 = param_4;
  local_64 = param_4;
  if (uVar4 != 0) {
    do {
      uVar12 = (uint)uVar13;
      lVar2 = uVar13 * 0x14;
      if ((*(uint *)(lVar2 + 4 + lVar5) & param_4) == 0) {
        uVar13 = (ulonglong)(uVar12 + 1);
      }
      else {
        local_e0 = 1;
        local_dc = *(undefined4 *)(*(longlong *)(local_110 + 0x24) + 0x60);
        lVar7 = *(longlong *)(local_110 + 0x24);
        if (uVar12 == *(uint *)(lVar7 + 0x5c)) {
          local_fc = *(undefined1 *)
                      (*(longlong *)(lVar7 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14
                      );
        }
        else {
          local_fc = 0;
        }
        local_118[0] = uVar12;
        cVar9 = FUN_1451e5340(local_118);
        uVar8 = local_118[0];
        if (cVar9 == '\0') {
          uVar13 = (ulonglong)(uVar12 + 1);
        }
        else {
          uVar14 = (ulonglong)local_118[0];
          uVar10 = FUN_1451ee360(*(undefined8 *)*param_1,*(undefined4 *)(lVar2 + lVar5),
                                 *(undefined4 *)(lVar5 + uVar14 * 0x14),((undefined8 *)*param_1)[1])
          ;
          if (uVar10 != 0) {
            if ((uVar3 & 0xfffffffe) == 4) {
              if (param_5 != '\0') {
                uVar10 = FUN_1451e10a0(param_2,uVar10 & 0xffff);
              }
              if ((char)param_1[1] == '\0') {
                *(int *)(lVar2 + lVar6) = *(int *)(lVar2 + lVar6) + ((int)uVar10 >> 1);
                iVar11 = uVar10 - ((int)uVar10 >> 1);
                piVar1 = (int *)(lVar6 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 8 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(uint *)(lVar6 + 0xc + uVar14 * 0x14) = uVar10;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            else {
              if (param_5 != '\0') {
                uVar10 = FUN_144e31290(param_2,uVar10 & 0xffff);
              }
              if ((char)param_1[1] == '\0') {
                piVar1 = (int *)(lVar2 + 4 + lVar6);
                *piVar1 = *piVar1 + ((int)uVar10 >> 1);
                iVar11 = uVar10 - ((int)uVar10 >> 1);
                piVar1 = (int *)(lVar6 + 4 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 0xc + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(uint *)(lVar6 + 8 + uVar14 * 0x14) = uVar10;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            if (1 < (uVar8 + 1) - uVar12) {
              FUN_144b620d0(param_3,uVar13);
            }
          }
          uVar13 = (ulonglong)local_118[0];
        }
      }
    } while ((uint)uVar13 < uVar4);
  }
  return;
}



// FUNCTION 1451f83c0 FUN_1451f83c0 body=120 status=ok
// SIG undefined FUN_1451f83c0(void)

undefined8 FUN_1451f83c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,2);
    if (cVar1 != '\0') {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,
                            ((uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3)) *
                            2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451f8440 FUN_1451f8440 body=117 status=ok
// SIG undefined FUN_1451f8440(void)

undefined8 FUN_1451f8440(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,2);
    if (cVar1 != '\0') {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,
                            (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3));
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451f84c0 FUN_1451f84c0 body=327 status=ok
// SIG undefined FUN_1451f84c0(void)

byte * FUN_1451f84c0(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  switch(param_3) {
  case 1:
    pbVar3 = (byte *)FUN_1451f8cd0(param_1);
    return pbVar3;
  case 2:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
LAB_1451f8508:
      return &DAT_149a1f1a0;
    }
    bVar1 = param_1[2];
    bVar2 = param_1[3];
    if ((ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2) == 0) goto LAB_1451f8508;
    goto LAB_1451f8536;
  case 3:
  case 4:
  case 8:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) goto LAB_1451f8508;
    break;
  case 5:
    pbVar3 = (byte *)FUN_1451f8d30(param_1);
    return pbVar3;
  case 6:
    iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if ((iVar4 != 1) && (iVar4 != 2)) {
      if (iVar4 == 3) {
        pbVar3 = (byte *)FUN_1451e86c0(param_1);
        return pbVar3;
      }
      goto LAB_1451f8508;
    }
    break;
  case 7:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      pbVar3 = (byte *)FUN_1451f9b70(param_1);
      return pbVar3;
    }
    return &DAT_149a1f1a0;
  default:
    return &DAT_149a1f1a0;
  }
  bVar1 = param_1[2];
  bVar2 = param_1[3];
  if ((ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2) == 0) {
    return &DAT_149a1f1a0;
  }
LAB_1451f8536:
  return param_1 + (ulonglong)bVar2 + (ulonglong)bVar1 * 0x100;
}



// FUNCTION 1451f8630 FUN_1451f8630 body=55 status=ok
// SIG undefined FUN_1451f8630(void)

undefined8 FUN_1451f8630(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 == 1) {
    uVar1 = FUN_1451f8dc0(param_2,param_1);
    return uVar1;
  }
  if (iVar2 != 2) {
    return 0;
  }
  uVar1 = FUN_1451f8e40(param_2,param_1);
  return uVar1;
}



// FUNCTION 1451f8670 FUN_1451f8670 body=332 status=ok
// SIG undefined FUN_1451f8670(void)

byte * FUN_1451f8670(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  switch(param_3) {
  case 1:
    pbVar3 = (byte *)FUN_1451f93f0(param_1);
    return pbVar3;
  case 2:
    iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if ((iVar4 != 1) && (iVar4 != 2)) {
LAB_1451f86bd:
      return &DAT_149a1f1a0;
    }
    bVar1 = param_1[2];
    bVar2 = param_1[3];
    if ((ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2) == 0) goto LAB_1451f86bd;
    goto LAB_1451f86eb;
  case 3:
  case 4:
  case 5:
  case 6:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) goto LAB_1451f86bd;
    break;
  case 7:
    pbVar3 = (byte *)FUN_1451f8d30(param_1);
    return pbVar3;
  case 8:
    iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if ((iVar4 != 1) && (iVar4 != 2)) {
      if (iVar4 == 3) {
        pbVar3 = (byte *)FUN_1451e86c0(param_1);
        return pbVar3;
      }
      goto LAB_1451f86bd;
    }
    break;
  case 9:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      pbVar3 = (byte *)FUN_1451f9c90(param_1);
      return pbVar3;
    }
    return &DAT_149a1f1a0;
  default:
    return &DAT_149a1f1a0;
  }
  bVar1 = param_1[2];
  bVar2 = param_1[3];
  if ((ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2) == 0) {
    return &DAT_149a1f1a0;
  }
LAB_1451f86eb:
  return param_1 + (ulonglong)bVar2 + (ulonglong)bVar1 * 0x100;
}



// FUNCTION 1451f87e0 FUN_1451f87e0 body=55 status=ok
// SIG undefined FUN_1451f87e0(void)

undefined8 FUN_1451f87e0(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar2 == 1) {
    uVar1 = FUN_1451f9450(param_2,param_1);
    return uVar1;
  }
  if (iVar2 != 2) {
    return 0;
  }
  uVar1 = FUN_1451f94d0(param_2,param_1);
  return uVar1;
}



// FUNCTION 1451f8820 FUN_1451f8820 body=83 status=ok
// SIG undefined FUN_1451f8820(void)

undefined1 FUN_1451f8820(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1451e3aa0(param_2 + 2,param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_1,param_2 + 4,2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f8880 FUN_1451f8880 body=80 status=ok
// SIG undefined FUN_1451f8880(void)

undefined1 FUN_1451f8880(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1451e3aa0(param_2 + 2,param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451e6f10(param_2 + 4,param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f88d0 FUN_1451f88d0 body=99 status=ok
// SIG undefined FUN_1451f88d0(void)

undefined1 FUN_1451f88d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1451e3aa0(param_2 + 2,param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451e4de0(param_2 + 4,param_1,param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451e6f10(param_2 + 6,param_1,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451f8940 FUN_1451f8940 body=80 status=ok
// SIG undefined FUN_1451f8940(void)

undefined1 FUN_1451f8940(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1451e3aa0(param_2 + 2,param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451e80e0(param_2 + 4,param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451f8990 FUN_1451f8990 body=212 status=ok
// SIG undefined FUN_1451f8990(void)

ulonglong FUN_1451f8990(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,8);
  if ((((char)uVar1 != '\0') &&
      (uVar1 = 0,
      (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
      (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) != 0)) &&
     (uVar1 = 0,
     (ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) != 7)) {
    iVar3 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    uVar2 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
            (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
    if (uVar2 == 0) {
      uVar1 = FUN_1451f4cf0(&DAT_149a1f1a0,param_2,iVar3);
      return uVar1;
    }
    uVar1 = FUN_1451f4cf0((ulonglong)uVar2 + param_1,param_2,iVar3);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451f8a70 FUN_1451f8a70 body=99 status=ok
// SIG undefined FUN_1451f8a70(void)

undefined1 FUN_1451f8a70(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_1,param_2,6);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451e3aa0(param_2 + 2,param_1,param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451e9fc0(param_2 + 4,param_1,param_2,param_2 + 6);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451f8ae0 FUN_1451f8ae0 body=212 status=ok
// SIG undefined FUN_1451f8ae0(void)

ulonglong FUN_1451f8ae0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,8);
  if ((((char)uVar1 != '\0') &&
      (uVar1 = 0,
      (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
      (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) != 0)) &&
     (uVar1 = 0,
     (ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) != 9)) {
    iVar3 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    uVar2 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
            (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
    if (uVar2 == 0) {
      uVar1 = FUN_1451f4e50(&DAT_149a1f1a0,param_2,iVar3);
      return uVar1;
    }
    uVar1 = FUN_1451f4e50((ulonglong)uVar2 + param_1,param_2,iVar3);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451f8bc0 FUN_1451f8bc0 body=126 status=ok
// SIG undefined FUN_1451f8bc0(void)

undefined8 FUN_1451f8bc0(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1451f5940();
  if ((cVar1 != '\0') &&
     (lVar2 = (ulonglong)(byte)param_1[3] +
              ((ulonglong)(byte)param_1[2] + (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) *
              0x100 + param_3, cVar1 = FUN_1451f98b0(lVar2,param_2,param_4,lVar2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1451f8c40 FUN_1451f8c40 body=142 status=ok
// SIG undefined FUN_1451f8c40(void)

undefined8 FUN_1451f8c40(byte *param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  
  iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar4 == 1) {
    uVar5 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
    if (uVar5 != 0) {
      uVar7 = (ulonglong)uVar5;
      pbVar6 = param_1 + 4;
      do {
        bVar2 = *pbVar6;
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 2;
        *param_2 = *param_2 | 1 << ((uint)*pbVar1 + (uint)bVar2 * -0x100 >> 4 & 0x1f);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    FUN_1451f9d70(param_2 + 1,param_1 + 4,uVar5,2);
    return 1;
  }
  if (iVar4 != 2) {
    return 0;
  }
  uVar3 = FUN_1451f9a70();
  return uVar3;
}



// FUNCTION 1451f8cd0 FUN_1451f8cd0 body=91 status=ok
// SIG undefined FUN_1451f8cd0(void)

byte * FUN_1451f8cd0(byte *param_1)

{
  int iVar1;
  
  iVar1 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if ((iVar1 != 1) && (iVar1 != 2)) {
    return &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 0) {
    return &DAT_149a1f1a0;
  }
  return param_1 + (ulonglong)param_1[3] + (ulonglong)param_1[2] * 0x100;
}



// FUNCTION 1451f8d30 FUN_1451f8d30 body=144 status=ok
// SIG undefined FUN_1451f8d30(void)

byte * FUN_1451f8d30(byte *param_1)

{
  int iVar1;
  
  iVar1 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if ((iVar1 == 1) || (iVar1 == 2)) {
    if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) != 0) {
      return param_1 + (ulonglong)param_1[3] + (ulonglong)param_1[2] * 0x100;
    }
  }
  else {
    if (iVar1 != 3) {
      return &DAT_149a1f1a0;
    }
    if ((ushort)((ushort)param_1[6] * 0x100 + (ushort)param_1[7]) != 0) {
      return param_1 + (ulonglong)param_1[7] + (ulonglong)param_1[6] * 0x100;
    }
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 1451f8dc0 FUN_1451f8dc0 body=123 status=ok
// SIG undefined FUN_1451f8dc0(void)

undefined8 FUN_1451f8dc0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9bd0;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f8e40 FUN_1451f8e40 body=123 status=ok
// SIG undefined FUN_1451f8e40(void)

undefined8 FUN_1451f8e40(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9be0;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f8ec0 FUN_1451f8ec0 body=123 status=ok
// SIG undefined FUN_1451f8ec0(void)

undefined8 FUN_1451f8ec0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9bf0;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f8f40 FUN_1451f8f40 body=123 status=ok
// SIG undefined FUN_1451f8f40(void)

undefined8 FUN_1451f8f40(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9c00;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f8fc0 FUN_1451f8fc0 body=123 status=ok
// SIG undefined FUN_1451f8fc0(void)

undefined8 FUN_1451f8fc0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9c10;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f9040 FUN_1451f9040 body=123 status=ok
// SIG undefined FUN_1451f9040(void)

undefined8 FUN_1451f9040(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9c20;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f90c0 FUN_1451f90c0 body=123 status=ok
// SIG undefined FUN_1451f90c0(void)

undefined8 FUN_1451f90c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9c30;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f9140 FUN_1451f9140 body=127 status=ok
// SIG undefined FUN_1451f9140(void)

undefined8 FUN_1451f9140(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar2[1] = (longlong)&LAB_1451f9c40;
  plVar1 = plVar2 + 2;
  *plVar2 = param_2;
  *plVar1 = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 6) * 0x100 + (ushort)*(byte *)(param_2 + 7)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0,plVar1);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 7) +
                (ulonglong)*(byte *)(param_2 + 6) * 0x100 + param_2,plVar1);
  return 0;
}



// FUNCTION 1451f91c0 FUN_1451f91c0 body=123 status=ok
// SIG undefined FUN_1451f91c0(void)

undefined8 FUN_1451f91c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9c50;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f9240 FUN_1451f9240 body=123 status=ok
// SIG undefined FUN_1451f9240(void)

undefined8 FUN_1451f9240(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9c60;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f92c0 FUN_1451f92c0 body=79 status=ok
// SIG undefined FUN_1451f92c0(void)

undefined8 FUN_1451f92c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1451e8bb0(*param_1);
  puVar1[1] = &LAB_1451f9c70;
  *puVar1 = param_2;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  uVar2 = FUN_1451e86c0(param_2);
  FUN_1451f8c40(uVar2,puVar1 + 2);
  return 0;
}



// FUNCTION 1451f9310 FUN_1451f9310 body=86 status=ok
// SIG undefined FUN_1451f9310(void)

void FUN_1451f9310(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  uVar1 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar1 == 0) {
    FUN_1451f65d0(&DAT_149a1f1a0,param_2,iVar2);
    return;
  }
  FUN_1451f65d0((ulonglong)uVar1 + param_1,param_2,iVar2);
  return;
}



// FUNCTION 1451f9370 FUN_1451f9370 body=123 status=ok
// SIG undefined FUN_1451f9370(void)

undefined8 FUN_1451f9370(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9c80;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f93f0 FUN_1451f93f0 body=91 status=ok
// SIG undefined FUN_1451f93f0(void)

byte * FUN_1451f93f0(byte *param_1)

{
  int iVar1;
  
  iVar1 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if ((iVar1 != 1) && (iVar1 != 2)) {
    return &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 0) {
    return &DAT_149a1f1a0;
  }
  return param_1 + (ulonglong)param_1[3] + (ulonglong)param_1[2] * 0x100;
}



// FUNCTION 1451f9450 FUN_1451f9450 body=123 status=ok
// SIG undefined FUN_1451f9450(void)

undefined8 FUN_1451f9450(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9cf0;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f94d0 FUN_1451f94d0 body=123 status=ok
// SIG undefined FUN_1451f94d0(void)

undefined8 FUN_1451f94d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9d00;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f9550 FUN_1451f9550 body=123 status=ok
// SIG undefined FUN_1451f9550(void)

undefined8 FUN_1451f9550(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9d10;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f95d0 FUN_1451f95d0 body=123 status=ok
// SIG undefined FUN_1451f95d0(void)

undefined8 FUN_1451f95d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9d20;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f9650 FUN_1451f9650 body=123 status=ok
// SIG undefined FUN_1451f9650(void)

undefined8 FUN_1451f9650(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9d30;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f96d0 FUN_1451f96d0 body=123 status=ok
// SIG undefined FUN_1451f96d0(void)

undefined8 FUN_1451f96d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9d40;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f9750 FUN_1451f9750 body=123 status=ok
// SIG undefined FUN_1451f9750(void)

undefined8 FUN_1451f9750(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9d50;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f97d0 FUN_1451f97d0 body=123 status=ok
// SIG undefined FUN_1451f97d0(void)

undefined8 FUN_1451f97d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1451e8bb0(*param_1);
  plVar1[1] = (longlong)&LAB_1451f9d60;
  *plVar1 = param_2;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  if ((ushort)((ushort)*(byte *)(param_2 + 2) * 0x100 + (ushort)*(byte *)(param_2 + 3)) == 0) {
    FUN_1451f8c40(&DAT_149a1f1a0);
    return 0;
  }
  FUN_1451f8c40((ulonglong)*(byte *)(param_2 + 2) * 0x100 + param_2 +
                (ulonglong)*(byte *)(param_2 + 3));
  return 0;
}



// FUNCTION 1451f9850 FUN_1451f9850 body=86 status=ok
// SIG undefined FUN_1451f9850(void)

void FUN_1451f9850(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  uVar1 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar1 == 0) {
    FUN_1451f6920(&DAT_149a1f1a0,param_2,iVar2);
    return;
  }
  FUN_1451f6920((ulonglong)uVar1 + param_1,param_2,iVar2);
  return;
}



// FUNCTION 1451f98b0 FUN_1451f98b0 body=443 status=ok
// SIG undefined FUN_1451f98b0(void)

undefined8 FUN_1451f98b0(byte *param_1,int *param_2,uint param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  
  if ((0x3ffffffe < param_3) || (cVar2 = FUN_144e2c5c0(param_2,param_1,param_3 * 4), cVar2 == '\0'))
  {
    return 0;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      if ((((param_1 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < param_1)) ||
          ((uint)(param_2[4] - (int)param_1) < 4)) ||
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
      FUN_1451e0950("SANITIZE",param_1,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",param_1,param_1 + 4,4,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if (((cVar2 == '\0') ||
          (cVar2 = FUN_144e2c5c0(param_2,param_4,
                                 (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
                                 (uint)param_1[2] * 0x100 + (uint)param_1[3]), cVar2 == '\0')) ||
         (cVar2 = FUN_1451f1950((ulonglong)param_1[3] +
                                ((ulonglong)param_1[2] +
                                (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) * 0x100 + param_4,
                                param_2), cVar2 == '\0')) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 4;
    } while (uVar4 < param_3);
  }
  return 1;
}



// FUNCTION 1451f9a70 FUN_1451f9a70 body=252 status=ok
// SIG undefined FUN_1451f9a70(void)

undefined8 FUN_1451f9a70(longlong param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = 0;
  uVar3 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  if (uVar3 != 0) {
    do {
      if (uVar2 < (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3)) {
        pbVar1 = (byte *)(param_1 + 2) + (ulonglong)uVar2 * 6 + 2;
      }
      else {
        pbVar1 = (byte *)&DAT_149a1f17c;
      }
      uVar6 = (uint)pbVar1[2] * 0x100 + (uint)pbVar1[3] >> 4;
      uVar4 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1] >> 4;
      if (uVar6 - uVar4 < 0x1f) {
        uVar5 = 1 << ((byte)uVar4 & 0x1f);
        uVar4 = 1 << ((byte)uVar6 & 0x1f);
        *param_2 = *param_2 | (uVar4 * 2 - (uint)(uVar4 < uVar5)) - uVar5;
      }
      else {
        *param_2 = 0xffffffff;
      }
      FUN_1451e59a0(param_2 + 1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 1;
}



// FUNCTION 1451f9b70 FUN_1451f9b70 body=86 status=ok
// SIG undefined FUN_1451f9b70(void)

void FUN_1451f9b70(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  uVar1 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar1 == 0) {
    FUN_1451f84c0(&DAT_149a1f1a0,param_2,iVar2);
    return;
  }
  FUN_1451f84c0((ulonglong)uVar1 + param_1,param_2,iVar2);
  return;
}



// FUNCTION 1451f9c90 FUN_1451f9c90 body=86 status=ok
// SIG undefined FUN_1451f9c90(void)

void FUN_1451f9c90(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  uVar1 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar1 == 0) {
    FUN_1451f8670(&DAT_149a1f1a0,param_2,iVar2);
    return;
  }
  FUN_1451f8670((ulonglong)uVar1 + param_1,param_2,iVar2);
  return;
}



// FUNCTION 1451f9d70 FUN_1451f9d70 body=125 status=ok
// SIG undefined FUN_1451f9d70(void)

undefined8 FUN_1451f9d70(uint *param_1,byte *param_2,uint param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    uVar4 = (ulonglong)param_3;
    pbVar3 = param_2;
    do {
      pbVar1 = pbVar3 + 1;
      pbVar3 = pbVar3 + (param_4 & 0xffffffff);
      *param_1 = *param_1 | 1 << (*pbVar1 & 0x1f);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (param_3 != 0) {
      uVar4 = (ulonglong)param_3;
      do {
        pbVar3 = param_2 + 1;
        bVar2 = *param_2;
        param_2 = param_2 + (param_4 & 0xffffffff);
        param_1[1] = param_1[1] | 1 << ((uint)bVar2 * 0x100 + (uint)*pbVar3 >> 9 & 0x1f);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return 1;
}



// FUNCTION 1451f9df0 FUN_1451f9df0 body=154 status=ok
// SIG undefined FUN_1451f9df0(void)

undefined8 FUN_1451f9df0(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  lVar1 = FUN_1451e0fa0(param_1 + 0xe8);
  pbVar2 = &DAT_149a1f1a0;
  pbVar3 = &DAT_149a1f1a0;
  if (7 < *(uint *)(lVar1 + 0x18)) {
    pbVar3 = *(byte **)(lVar1 + 0x10);
  }
  if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == 0) {
    lVar1 = FUN_1451f9f90(param_1 + 0xe0);
    if (7 < *(uint *)(lVar1 + 0x18)) {
      pbVar2 = *(byte **)(lVar1 + 0x10);
    }
    if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1451f9e90 FUN_1451f9e90 body=66 status=ok
// SIG undefined FUN_1451f9e90(void)

bool FUN_1451f9e90(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  
  lVar1 = FUN_1451fa090(param_1 + 0xf0);
  pbVar2 = &DAT_149a1f1a0;
  if (7 < *(uint *)(lVar1 + 0x18)) {
    pbVar2 = *(byte **)(lVar1 + 0x10);
  }
  return (ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0;
}



// FUNCTION 1451f9ee0 FUN_1451f9ee0 body=76 status=ok
// SIG undefined FUN_1451f9ee0(void)

bool FUN_1451f9ee0(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  
  lVar1 = FUN_1451fa290(param_1 + 0x100);
  pbVar2 = &DAT_149a1f1a0;
  if (0xb < *(uint *)(lVar1 + 0x18)) {
    pbVar2 = *(byte **)(lVar1 + 0x10);
  }
  return (((uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) * 0x100 + (uint)pbVar2[2]) * 0x100 +
         (uint)pbVar2[3] != 0;
}



// FUNCTION 1451f9f30 FUN_1451f9f30 body=3 status=ok
// SIG undefined FUN_1451f9f30(void)

void FUN_1451f9f30(void)

{
  return;
}



// FUNCTION 1451f9f40 FUN_1451f9f40 body=77 status=ok
// SIG undefined FUN_1451f9f40(void)

void FUN_1451f9f40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  
  cVar8 = FUN_144b62480(param_1,0,1);
  if (cVar8 != '\0') {
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
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  return;
}



// FUNCTION 1451f9f90 FUN_1451f9f90 body=241 status=ok
// SIG undefined FUN_1451f9f90(void)

longlong FUN_1451f9f90(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  lVar2 = *param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar2 = param_1[-0x13];
    if (lVar2 == 0) break;
    local_48[0] = 0;
    local_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = FUN_144e2d260(lVar2);
    local_14 = 1;
    uVar1 = FUN_144e2d200(lVar2,0x6d6f7274);
    lVar2 = FUN_1452013c0(local_48,uVar1);
    if (lVar2 == 0) {
      lVar2 = FUN_144e3f0f0();
    }
    LOCK();
    lVar3 = *param_1;
    if (lVar3 == 0) {
      *param_1 = lVar2;
    }
    UNLOCK();
    if (lVar3 == 0) {
      return lVar2;
    }
    if ((lVar2 != 0) && (lVar3 = FUN_144e3f0f0(), lVar2 != lVar3)) {
      FUN_144e3f120(lVar2);
    }
    lVar2 = *param_1;
    LOCK();
    UNLOCK();
  }
  lVar2 = FUN_144e3f0f0();
  return lVar2;
}



// FUNCTION 1451fa090 FUN_1451fa090 body=241 status=ok
// SIG undefined FUN_1451fa090(void)

longlong FUN_1451fa090(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  lVar2 = *param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar2 = param_1[-0x15];
    if (lVar2 == 0) break;
    local_48[0] = 0;
    local_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = FUN_144e2d260(lVar2);
    local_14 = 1;
    uVar1 = FUN_144e2d200(lVar2,0x6b657278);
    lVar2 = FUN_145201250(local_48,uVar1);
    if (lVar2 == 0) {
      lVar2 = FUN_144e3f0f0();
    }
    LOCK();
    lVar3 = *param_1;
    if (lVar3 == 0) {
      *param_1 = lVar2;
    }
    UNLOCK();
    if (lVar3 == 0) {
      return lVar2;
    }
    if ((lVar2 != 0) && (lVar3 = FUN_144e3f0f0(), lVar2 != lVar3)) {
      FUN_144e3f120(lVar2);
    }
    lVar2 = *param_1;
    LOCK();
    UNLOCK();
  }
  lVar2 = FUN_144e3f0f0();
  return lVar2;
}



// FUNCTION 1451fa190 FUN_1451fa190 body=241 status=ok
// SIG undefined FUN_1451fa190(void)

longlong FUN_1451fa190(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  lVar2 = *param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar2 = param_1[-0x16];
    if (lVar2 == 0) break;
    local_48[0] = 0;
    local_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = FUN_144e2d260(lVar2);
    local_14 = 1;
    uVar1 = FUN_144e2d200(lVar2,0x616e6b72);
    lVar2 = FUN_1452010e0(local_48,uVar1);
    if (lVar2 == 0) {
      lVar2 = FUN_144e3f0f0();
    }
    LOCK();
    lVar3 = *param_1;
    if (lVar3 == 0) {
      *param_1 = lVar2;
    }
    UNLOCK();
    if (lVar3 == 0) {
      return lVar2;
    }
    if ((lVar2 != 0) && (lVar3 = FUN_144e3f0f0(), lVar2 != lVar3)) {
      FUN_144e3f120(lVar2);
    }
    lVar2 = *param_1;
    LOCK();
    UNLOCK();
  }
  lVar2 = FUN_144e3f0f0();
  return lVar2;
}



// FUNCTION 1451fa290 FUN_1451fa290 body=241 status=ok
// SIG undefined FUN_1451fa290(void)

longlong FUN_1451fa290(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  lVar2 = *param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar2 = param_1[-0x17];
    if (lVar2 == 0) break;
    local_48[0] = 0;
    local_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = FUN_144e2d260(lVar2);
    local_14 = 1;
    uVar1 = FUN_144e2d200(lVar2,0x7472616b);
    lVar2 = FUN_145200f70(local_48,uVar1);
    if (lVar2 == 0) {
      lVar2 = FUN_144e3f0f0();
    }
    LOCK();
    lVar3 = *param_1;
    if (lVar3 == 0) {
      *param_1 = lVar2;
    }
    UNLOCK();
    if (lVar3 == 0) {
      return lVar2;
    }
    if ((lVar2 != 0) && (lVar3 = FUN_144e3f0f0(), lVar2 != lVar3)) {
      FUN_144e3f120(lVar2);
    }
    lVar2 = *param_1;
    LOCK();
    UNLOCK();
  }
  lVar2 = FUN_144e3f0f0();
  return lVar2;
}



// FUNCTION 1451fa3b0 FUN_1451fa3b0 body=53 status=ok
// SIG undefined FUN_1451fa3b0(void)

void FUN_1451fa3b0(undefined4 param_1)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = param_1;
  bsearch(local_res8,&DAT_149c55e30,0x4c,0x10,(_PtFuncCompare *)&LAB_1451fa390);
  return;
}



// FUNCTION 1451fa3f0 FUN_1451fa3f0 body=181 status=ok
// SIG undefined FUN_1451fa3f0(void)

void FUN_1451fa3f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  lVar1 = FUN_1451e0fa0(*param_1 + 0xe8);
  pbVar3 = &DAT_149a1f1a0;
  pbVar2 = &DAT_149a1f1a0;
  if (7 < *(uint *)(lVar1 + 0x18)) {
    pbVar2 = *(byte **)(lVar1 + 0x10);
  }
  if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == 0) {
    lVar1 = FUN_1451f9f90(*param_1 + 0xe0);
    if (7 < *(uint *)(lVar1 + 0x18)) {
      pbVar3 = *(byte **)(lVar1 + 0x10);
    }
    if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 0) {
      FUN_1451fc530(pbVar3,param_1,param_2);
    }
  }
  else {
    FUN_1451fbec0(pbVar2,param_1,param_2);
  }
  return;
}



// FUNCTION 1451fa4b0 FUN_1451fa4b0 body=276 status=ok
// SIG undefined FUN_1451fa4b0(void)

void FUN_1451fa4b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 local_88 [32];
  undefined1 local_68 [80];
  
  lVar1 = FUN_1451e0fa0(*(longlong *)(param_2 + 0x18) + 0xe8);
  pbVar2 = &DAT_149a1f1a0;
  pbVar3 = &DAT_149a1f1a0;
  if (7 < *(uint *)(lVar1 + 0x18)) {
    pbVar3 = *(byte **)(lVar1 + 0x10);
  }
  if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == 0) {
    lVar1 = FUN_1451f9f90(*(longlong *)(param_2 + 0x18) + 0xe0);
    if (7 < *(uint *)(lVar1 + 0x18)) {
      pbVar2 = *(byte **)(lVar1 + 0x10);
    }
    if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == 0) {
      return;
    }
    FUN_1451fa790(local_88,param_1,param_2,param_3,lVar1);
    FUN_1451fc690(pbVar2,local_88);
  }
  else {
    FUN_1451fa790(local_88,param_1,param_2,param_3,lVar1);
    FUN_1451fc020(pbVar3,local_88);
  }
  FUN_144e2c540(local_68);
  return;
}



// FUNCTION 1451fa5d0 FUN_1451fa5d0 body=61 status=ok
// SIG undefined FUN_1451fa5d0(void)

void FUN_1451fa5d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x60) != 0) {
    puVar3 = (undefined8 *)(lVar2 + 8);
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x60);
    do {
      if (*(int *)((lVar1 - lVar2) + -8 + (longlong)puVar3) == 0xffff) {
        *puVar3 = 0;
        puVar3[-1] = 0;
      }
      puVar3 = (undefined8 *)((longlong)puVar3 + 0x14);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 1451fa610 FUN_1451fa610 body=12 status=ok
// SIG undefined FUN_1451fa610(void)

void FUN_1451fa610(undefined8 param_1)

{
  FUN_1451e14d0(param_1,&LAB_1452005c0);
  return;
}



// FUNCTION 1451fa620 FUN_1451fa620 body=195 status=ok
// SIG undefined FUN_1451fa620(void)

void FUN_1451fa620(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_78 [32];
  undefined1 local_58 [56];
  undefined1 *local_20;
  
  lVar1 = FUN_1451fa090(*(longlong *)(param_2 + 0x18) + 0xf0);
  local_20 = &DAT_149a1f1a0;
  puVar2 = &DAT_149a1f1a0;
  if (7 < *(uint *)(lVar1 + 0x18)) {
    puVar2 = *(undefined1 **)(lVar1 + 0x10);
  }
  FUN_1451fa790(local_78,param_1,param_2,param_3,lVar1);
  lVar1 = FUN_1451fa190(*(longlong *)(param_2 + 0x18) + 0xf8);
  if (0xb < *(uint *)(lVar1 + 0x18)) {
    local_20 = *(undefined1 **)(lVar1 + 0x10);
  }
  FUN_1451ff2d0(puVar2,local_78);
  FUN_144e2c540(local_58);
  return;
}



// FUNCTION 1451fa6f0 FUN_1451fa6f0 body=151 status=ok
// SIG undefined FUN_1451fa6f0(void)

void FUN_1451fa6f0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_78 [32];
  undefined1 local_58 [80];
  
  lVar1 = FUN_1451fa290(*(longlong *)(param_2 + 0x18) + 0x100);
  puVar2 = &DAT_149a1f1a0;
  if (0xb < *(uint *)(lVar1 + 0x18)) {
    puVar2 = *(undefined1 **)(lVar1 + 0x10);
  }
  FUN_1451fa790(local_78,param_1,param_2,param_3,&DAT_149a1f1a0);
  FUN_145200060(puVar2,local_78);
  FUN_144e2c540(local_58);
  return;
}



// FUNCTION 1451fa790 FUN_1451fa790 body=268 status=ok
// SIG undefined FUN_1451fa790(void)

undefined8 *
FUN_1451fa790(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = *(undefined8 *)(param_3 + 0x18);
  param_1[3] = param_4;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = &DAT_149a1f1a0;
  param_1[0xc] = 0;
  uVar4 = FUN_144e3f100(param_5);
  param_1[9] = uVar4;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  iVar3 = *(int *)(param_1[2] + 0x30);
  if (iVar3 == -1) {
    iVar3 = FUN_144e2c9d0();
  }
  *(int *)(param_1 + 10) = iVar3;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  lVar2 = *(longlong *)(param_1[9] + 0x10);
  param_1[5] = lVar2;
  lVar6 = (ulonglong)*(uint *)(param_1[9] + 0x18) + lVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = lVar6;
  iVar3 = (int)lVar6 - (int)lVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = iVar3 * 8;
  uVar5 = 0x4000;
  if (0x4000 < uVar1) {
    uVar5 = uVar1;
  }
  *(uint *)(param_1 + 7) = uVar5;
  FUN_1451f9f30("SANITIZE",lVar2,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar2,lVar6,iVar3);
  *(undefined4 *)(param_1 + 7) = 0x3fffffff;
  return param_1;
}



// FUNCTION 1451fa8a0 FUN_1451fa8a0 body=9 status=ok
// SIG undefined FUN_1451fa8a0(void)

void FUN_1451fa8a0(longlong param_1)

{
  FUN_144e2c540(param_1 + 0x20);
  return;
}



// FUNCTION 1451fa8b0 FUN_1451fa8b0 body=260 status=ok
// SIG undefined FUN_1451fa8b0(void)

byte * FUN_1451fa8b0(longlong param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined *puVar2;
  
  if ((uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
      (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 7) == 0) {
    puVar2 = &DAT_149a1f184;
  }
  else {
    puVar2 = (undefined *)
             (((ulonglong)CONCAT11(*(byte *)(param_1 + 4),*(byte *)(param_1 + 5)) * 0x100 +
              (ulonglong)*(byte *)(param_1 + 6)) * 0x100 + param_1 +
             (ulonglong)*(byte *)(param_1 + 7));
  }
  pbVar1 = (byte *)FUN_1451fac50(puVar2,param_2,param_4);
  if ((pbVar1 == (byte *)0x0) ||
     (pbVar1 = (byte *)((ulonglong)pbVar1[1] +
                       (ulonglong)*pbVar1 * 0x100 +
                       (ulonglong)*(byte *)(param_1 + 0xb) +
                       ((ulonglong)*(byte *)(param_1 + 10) +
                       (ulonglong)
                       CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)) * 0x100)
                       * 0x100 + param_1),
     (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)*pbVar1 * 0x1000000 +
     (uint)pbVar1[3] <= param_3)) {
    pbVar1 = &DAT_149a1f1a0;
  }
  else {
    pbVar1 = pbVar1 + ((ulonglong)param_3 + 1) * 4;
  }
  return pbVar1;
}



// FUNCTION 1451fa9c0 FUN_1451fa9c0 body=205 status=ok
// SIG undefined FUN_1451fa9c0(void)

undefined8 FUN_1451fa9c0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0xc);
  if (cVar1 != '\0') {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
      cVar1 = FUN_144e2c5c0(param_2,param_1,
                            (uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 +
                            (uint)param_1[8] * 0x1000000 + (uint)param_1[0xb]);
      if (cVar1 != '\0') {
        cVar1 = FUN_1451fb9f0(param_1 + 4,param_2,param_1,
                              param_1 + (ulonglong)param_1[0xb] +
                                        ((ulonglong)param_1[10] +
                                        (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100) * 0x100)
        ;
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451faa90 FUN_1451faa90 body=148 status=ok
// SIG undefined FUN_1451faa90(void)

bool FUN_1451faa90(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451fab30 FUN_1451fab30 body=131 status=ok
// SIG undefined FUN_1451fab30(void)

undefined8 FUN_1451fab30(byte *param_1,undefined8 param_2)

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



// FUNCTION 1451fabc0 FUN_1451fabc0 body=140 status=ok
// SIG undefined FUN_1451fabc0(void)

undefined8 FUN_1451fabc0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451fab30((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100 + param_3,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


