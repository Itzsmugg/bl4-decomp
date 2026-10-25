// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1451fac50 FUN_1451fac50 body=177 status=ok
// SIG undefined FUN_1451fac50(void)

byte * FUN_1451fac50(byte *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_res8 [8];
  
  uVar4 = (ulonglong)param_2;
  iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar3 == 0) {
    if (param_2 < param_3) {
      param_1 = param_1 + 2;
      pbVar1 = &DAT_149a1f1a0;
      if (param_1 <= param_1 + uVar4 * 2) {
        pbVar1 = param_1 + uVar4 * 2;
      }
      return pbVar1;
    }
  }
  else {
    local_res8[0] = param_2;
    if (iVar3 == 2) {
      lVar2 = FUN_145200aa0(param_1 + 2,local_res8);
      if (lVar2 != 0) {
        return (byte *)(lVar2 + 4);
      }
    }
    else {
      if (iVar3 == 4) {
        pbVar1 = (byte *)FUN_1451fb370(param_1,uVar4);
        return pbVar1;
      }
      if (iVar3 == 6) {
        lVar2 = FUN_145200910(param_1 + 2,local_res8);
        if (lVar2 != 0) {
          return (byte *)(lVar2 + 2);
        }
      }
      else if (iVar3 == 8) {
        pbVar1 = (byte *)FUN_1451fb900(param_1,uVar4);
        return pbVar1;
      }
    }
  }
  return (byte *)0x0;
}



// FUNCTION 1451fad10 FUN_1451fad10 body=279 status=ok
// SIG undefined FUN_1451fad10(void)

ulonglong FUN_1451fad10(byte *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
switchD_1451fad77_caseD_a:
    return uVar1 & 0xffffffffffffff00;
  }
  uVar1 = 0;
  uVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar2 < 0xb) {
    uVar1 = (ulonglong)uVar2;
    switch(uVar1) {
    case 0:
      uVar1 = FUN_1451fae60(param_1 + 2,param_2,*(undefined4 *)(param_2 + 0x30),param_3);
      return uVar1;
    case 2:
      uVar1 = FUN_1451fb0a0(param_1 + 2,param_2,param_3);
      return uVar1;
    case 4:
      uVar1 = FUN_145200e00(param_1 + 2,param_2,param_1,param_3);
      return uVar1;
    case 6:
      uVar1 = FUN_1451fb630(param_1 + 2,param_2,param_3);
      return uVar1;
    case 8:
      uVar1 = FUN_1451fb970(param_1,param_2,param_3);
      return uVar1;
    case 10:
      goto switchD_1451fad77_caseD_a;
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 1451fae60 FUN_1451fae60 body=395 status=ok
// SIG undefined FUN_1451fae60(void)

undefined8 FUN_1451fae60(byte *param_1,int *param_2,uint param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  
  if ((0x7ffffffe < param_3) || (cVar2 = FUN_144e2c5c0(param_2,param_1,param_3 * 2), cVar2 == '\0'))
  {
    return 0;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      if ((((param_1 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < param_1)) ||
          ((uint)(param_2[4] - (int)param_1) < 2)) ||
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
      FUN_1451f9f30("SANITIZE",param_1,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",param_1,param_1 + 2,2,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if (((cVar2 == '\0') ||
          (cVar2 = FUN_144e2c5c0(param_2,param_4,(uint)*param_1 * 0x100 + (uint)param_1[1]),
          cVar2 == '\0')) ||
         (cVar2 = FUN_1451fab30((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100 + param_4,
                                param_2), cVar2 == '\0')) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 2;
    } while (uVar4 < param_3);
  }
  return 1;
}



// FUNCTION 1451faff0 FUN_1451faff0 body=174 status=ok
// SIG undefined FUN_1451faff0(void)

ulonglong FUN_1451faff0(undefined1 *param_1)

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



// FUNCTION 1451fb0a0 FUN_1451fb0a0 body=559 status=ok
// SIG undefined FUN_1451fb0a0(void)

undefined1 FUN_1451fb0a0(byte *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  cVar1 = FUN_1451fb2d0();
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = FUN_1451faff0(param_1);
  uVar7 = 0;
  uVar6 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
  if (uVar6 != bVar2) {
    do {
      if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 0) {
LAB_1451fb1ad:
        iVar5 = 0;
      }
      else {
        uVar8 = 0;
        pbVar3 = param_1 + (ulonglong)
                           ((uint)CONCAT11(*param_1,param_1[1]) *
                           ((param_1[3] - 1) + (uint)param_1[2] * 0x100)) + 10;
        do {
          if ((ushort)((ushort)pbVar3[1] + (ushort)*pbVar3 * 0x100) != -1) goto LAB_1451fb1ad;
          uVar8 = uVar8 + 1;
          pbVar3 = pbVar3 + 2;
        } while (uVar8 < 2);
        iVar5 = 1;
      }
      if (uVar7 < ((uint)param_1[2] * 0x100 + (uint)param_1[3]) - iVar5) {
        pbVar3 = param_1 + (ulonglong)(((uint)param_1[1] + (uint)*param_1 * 0x100) * uVar7) + 10;
      }
      else {
        pbVar3 = &DAT_149a1f1a0;
      }
      if ((((pbVar3 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < pbVar3)) ||
          ((uint)(param_2[4] - (int)pbVar3) < 6)) ||
         (iVar5 = param_2[6], param_2[6] = iVar5 + -1, iVar5 < 1)) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      pcVar4 = "OUT-OF-RANGE";
      if (cVar1 != '\0') {
        pcVar4 = "OK";
      }
      FUN_1451f9f30("SANITIZE",pbVar3,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",pbVar3,pbVar3 + 6,6,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
      if ((cVar1 == '\0') || (cVar1 = FUN_1451fabc0(pbVar3 + 4,param_2,param_3), cVar1 == '\0')) {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6 - bVar2);
  }
  return 1;
}



// FUNCTION 1451fb2d0 FUN_1451fb2d0 body=156 status=ok
// SIG undefined FUN_1451fb2d0(void)

undefined8 FUN_1451fb2d0(byte *param_1,undefined8 param_2)

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



// FUNCTION 1451fb370 FUN_1451fb370 body=173 status=ok
// SIG undefined FUN_1451fb370(void)

undefined1 * FUN_1451fb370(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  pbVar2 = (byte *)FUN_1452009e0(param_1 + 2,local_res10);
  if (pbVar2 == (byte *)0x0) {
    return (undefined1 *)0x0;
  }
  if (((uint)pbVar2[2] * 0x100 + (uint)pbVar2[3] <= param_2) &&
     (param_2 <= (uint)*pbVar2 * 0x100 + (uint)pbVar2[1])) {
    puVar4 = (undefined1 *)((ulonglong)pbVar2[5] + (ulonglong)pbVar2[4] * 0x100 + param_1);
    puVar1 = puVar4 + (ulonglong)((param_2 + (uint)pbVar2[2] * -0x100) - (uint)pbVar2[3]) * 2;
    puVar3 = &DAT_149a1f1a0;
    if (puVar4 <= puVar1) {
      puVar3 = puVar1;
    }
    return puVar3;
  }
  return (undefined1 *)0x0;
}



// FUNCTION 1451fb430 FUN_1451fb430 body=174 status=ok
// SIG undefined FUN_1451fb430(void)

ulonglong FUN_1451fb430(undefined1 *param_1)

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



// FUNCTION 1451fb4e0 FUN_1451fb4e0 body=156 status=ok
// SIG undefined FUN_1451fb4e0(void)

undefined8 FUN_1451fb4e0(byte *param_1,undefined8 param_2)

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



// FUNCTION 1451fb580 FUN_1451fb580 body=174 status=ok
// SIG undefined FUN_1451fb580(void)

ulonglong FUN_1451fb580(undefined1 *param_1)

{
  byte *pbVar1;
  
  if ((ushort)((ushort)(byte)param_1[2] * 0x100 + (ushort)(byte)param_1[3]) == 0) {
    return 0;
  }
  pbVar1 = param_1 + (ulonglong)
                     ((uint)CONCAT11(*param_1,param_1[1]) *
                     ((uint)(byte)param_1[3] + (uint)(byte)param_1[2] * 0x100 + -1)) + 10;
  if ((ushort)((ushort)pbVar1[1] + (ushort)*pbVar1 * 0x100) == -1) {
    return CONCAT71((int7)((ulonglong)(pbVar1 + 2) >> 8),1);
  }
  return (ulonglong)pbVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451fb630 FUN_1451fb630 body=559 status=ok
// SIG undefined FUN_1451fb630(void)

undefined1 FUN_1451fb630(byte *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  cVar1 = FUN_1451fb860();
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = FUN_1451fb580(param_1);
  uVar6 = 0;
  uVar5 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
  if (uVar5 != bVar2) {
    do {
      if (((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 0) ||
         ((ushort)((ushort)(param_1 +
                           (ulonglong)
                           ((uint)CONCAT11(*param_1,param_1[1]) *
                           ((param_1[3] - 1) + (uint)param_1[2] * 0x100)) + 10)[1] +
                  (ushort)param_1[(ulonglong)
                                  ((uint)CONCAT11(*param_1,param_1[1]) *
                                  ((param_1[3] - 1) + (uint)param_1[2] * 0x100)) + 10] * 0x100) !=
          -1)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      if (uVar6 < ((uint)param_1[2] * 0x100 + (uint)param_1[3]) - iVar4) {
        pbVar7 = param_1 + (ulonglong)(((uint)param_1[1] + (uint)*param_1 * 0x100) * uVar6) + 10;
      }
      else {
        pbVar7 = &DAT_149a1f1a0;
      }
      if ((((pbVar7 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < pbVar7)) ||
          ((uint)(param_2[4] - (int)pbVar7) < 4)) ||
         (iVar4 = param_2[6], param_2[6] = iVar4 + -1, iVar4 < 1)) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      pcVar3 = "OUT-OF-RANGE";
      if (cVar1 != '\0') {
        pcVar3 = "OK";
      }
      FUN_1451f9f30("SANITIZE",pbVar7,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",pbVar7,pbVar7 + 4,4,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if ((cVar1 == '\0') || (cVar1 = FUN_1451fabc0(pbVar7 + 2,param_2,param_3), cVar1 == '\0')) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5 - bVar2);
  }
  return 1;
}



// FUNCTION 1451fb860 FUN_1451fb860 body=156 status=ok
// SIG undefined FUN_1451fb860(void)

undefined8 FUN_1451fb860(byte *param_1,undefined8 param_2)

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



// FUNCTION 1451fb900 FUN_1451fb900 body=105 status=ok
// SIG undefined FUN_1451fb900(void)

undefined1 * FUN_1451fb900(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (((uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3) <= param_2) &&
     ((param_2 + (uint)*(byte *)(param_1 + 2) * -0x100) - (uint)*(byte *)(param_1 + 3) <
      (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5))) {
    puVar1 = (undefined1 *)(param_1 + 6) +
             (ulonglong)
             ((param_2 + (uint)*(byte *)(param_1 + 2) * -0x100) - (uint)*(byte *)(param_1 + 3)) * 2;
    puVar2 = &DAT_149a1f1a0;
    if ((undefined1 *)(param_1 + 6) <= puVar1) {
      puVar2 = puVar1;
    }
    return puVar2;
  }
  return (undefined1 *)0x0;
}



// FUNCTION 1451fb970 FUN_1451fb970 body=116 status=ok
// SIG undefined FUN_1451fb970(void)

undefined8 FUN_1451fb970(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,6);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451fae60(param_1 + 6,param_2,
                          (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5),
                          param_3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451fb9f0 FUN_1451fb9f0 body=179 status=ok
// SIG undefined FUN_1451fb9f0(void)

undefined8 FUN_1451fb9f0(byte *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1451faa90();
  if (cVar1 == '\0') {
LAB_1451fba8c:
    uVar2 = 0;
  }
  else {
    if ((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
        (uint)param_1[3] != 0) {
      cVar1 = FUN_1451fad10((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                            ,param_4);
      if (cVar1 == '\0') {
        cVar1 = FUN_144e2d280(param_2,param_1,4);
        if (cVar1 == '\0') goto LAB_1451fba8c;
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



// FUNCTION 1451fbab0 FUN_1451fbab0 body=177 status=ok
// SIG undefined FUN_1451fbab0(void)

byte * FUN_1451fbab0(byte *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_res8 [8];
  
  uVar4 = (ulonglong)param_2;
  iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar3 == 0) {
    if (param_2 < param_3) {
      param_1 = param_1 + 2;
      pbVar1 = &DAT_149a1f1a0;
      if (param_1 <= param_1 + uVar4 * 2) {
        pbVar1 = param_1 + uVar4 * 2;
      }
      return pbVar1;
    }
  }
  else {
    local_res8[0] = param_2;
    if (iVar3 == 2) {
      lVar2 = FUN_145207320(param_1 + 2,local_res8);
      if (lVar2 != 0) {
        return (byte *)(lVar2 + 4);
      }
    }
    else {
      if (iVar3 == 4) {
        pbVar1 = (byte *)FUN_1451fbc20(param_1,uVar4);
        return pbVar1;
      }
      if (iVar3 == 6) {
        lVar2 = FUN_145207190(param_1 + 2,local_res8);
        if (lVar2 != 0) {
          return (byte *)(lVar2 + 2);
        }
      }
      else if (iVar3 == 8) {
        pbVar1 = (byte *)FUN_1451fbd90(param_1,uVar4);
        return pbVar1;
      }
    }
  }
  return (byte *)0x0;
}



// FUNCTION 1451fbb70 FUN_1451fbb70 body=174 status=ok
// SIG undefined FUN_1451fbb70(void)

ulonglong FUN_1451fbb70(undefined1 *param_1)

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



// FUNCTION 1451fbc20 FUN_1451fbc20 body=173 status=ok
// SIG undefined FUN_1451fbc20(void)

undefined1 * FUN_1451fbc20(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  pbVar2 = (byte *)FUN_145207260(param_1 + 2,local_res10);
  if (pbVar2 == (byte *)0x0) {
    return (undefined1 *)0x0;
  }
  if (((uint)pbVar2[2] * 0x100 + (uint)pbVar2[3] <= param_2) &&
     (param_2 <= (uint)*pbVar2 * 0x100 + (uint)pbVar2[1])) {
    puVar4 = (undefined1 *)((ulonglong)pbVar2[5] + (ulonglong)pbVar2[4] * 0x100 + param_1);
    puVar1 = puVar4 + (ulonglong)((param_2 + (uint)pbVar2[2] * -0x100) - (uint)pbVar2[3]) * 2;
    puVar3 = &DAT_149a1f1a0;
    if (puVar4 <= puVar1) {
      puVar3 = puVar1;
    }
    return puVar3;
  }
  return (undefined1 *)0x0;
}



// FUNCTION 1451fbce0 FUN_1451fbce0 body=174 status=ok
// SIG undefined FUN_1451fbce0(void)

ulonglong FUN_1451fbce0(undefined1 *param_1)

{
  byte *pbVar1;
  
  if ((ushort)((ushort)(byte)param_1[2] * 0x100 + (ushort)(byte)param_1[3]) == 0) {
    return 0;
  }
  pbVar1 = param_1 + (ulonglong)
                     ((uint)CONCAT11(*param_1,param_1[1]) *
                     ((uint)(byte)param_1[3] + (uint)(byte)param_1[2] * 0x100 + -1)) + 10;
  if ((ushort)((ushort)pbVar1[1] + (ushort)*pbVar1 * 0x100) == -1) {
    return CONCAT71((int7)((ulonglong)(pbVar1 + 2) >> 8),1);
  }
  return (ulonglong)pbVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451fbd90 FUN_1451fbd90 body=105 status=ok
// SIG undefined FUN_1451fbd90(void)

undefined1 * FUN_1451fbd90(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (((uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3) <= param_2) &&
     ((param_2 + (uint)*(byte *)(param_1 + 2) * -0x100) - (uint)*(byte *)(param_1 + 3) <
      (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5))) {
    puVar1 = (undefined1 *)(param_1 + 6) +
             (ulonglong)
             ((param_2 + (uint)*(byte *)(param_1 + 2) * -0x100) - (uint)*(byte *)(param_1 + 3)) * 2;
    puVar2 = &DAT_149a1f1a0;
    if ((undefined1 *)(param_1 + 6) <= puVar1) {
      puVar2 = puVar1;
    }
    return puVar2;
  }
  return (undefined1 *)0x0;
}



// FUNCTION 1451fbe00 FUN_1451fbe00 body=184 status=ok
// SIG undefined FUN_1451fbe00(void)

uint FUN_1451fbe00(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  
  if (((uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5) <= param_2) &&
     ((param_2 + (uint)*(byte *)(param_1 + 4) * -0x100) - (uint)*(byte *)(param_1 + 5) <
      (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7))) {
    pbVar3 = (byte *)(param_1 + 8) +
             ((uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100) *
             ((param_2 + (uint)*(byte *)(param_1 + 4) * -0x100) - (uint)*(byte *)(param_1 + 5));
    pbVar6 = &DAT_149a1f1a0;
    if ((byte *)(param_1 + 8) <= pbVar3) {
      pbVar6 = pbVar3;
    }
    uVar2 = 0;
    uVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 != 0) {
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar2 = uVar2 << 8 | (uint)bVar1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1451fbec0 FUN_1451fbec0 body=348 status=ok
// SIG undefined FUN_1451fbec0(void)

void FUN_1451fbec0(longlong param_1,undefined8 param_2,uint *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar5 = param_1 + 8;
  uVar7 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar7 != 0) {
    uVar8 = (ulonglong)uVar7;
    do {
      uVar1 = FUN_1451fc100(lVar5);
      uVar7 = param_3[1];
      uVar6 = *param_3 + 1;
      if ((int)(*param_3 + 1) < 0) {
        uVar6 = 0;
      }
      if ((int)uVar7 < 0) {
LAB_1451fbfb6:
        puVar3 = &DAT_14c793f60;
        DAT_14c793f60 = 0;
      }
      else {
        uVar4 = uVar7;
        if (uVar7 < uVar6) {
          do {
            uVar4 = uVar4 + 8 + (uVar4 >> 1);
          } while (uVar4 <= uVar6);
          if (((((int)uVar4 < 0) || (uVar4 < uVar7)) || (0x3ffffffe < uVar4)) ||
             (lVar2 = FUN_14286436b(*(undefined8 *)(param_3 + 2)), lVar2 == 0)) {
            param_3[1] = 0xffffffff;
            goto LAB_1451fbfb6;
          }
          param_3[1] = uVar4;
          *(longlong *)(param_3 + 2) = lVar2;
        }
        uVar7 = *param_3;
        if (uVar7 < uVar6) {
          memset((void *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar7 * 4),0,
                 (ulonglong)(uVar6 - uVar7) << 2);
        }
        *param_3 = uVar6;
        puVar3 = (undefined4 *)(*(longlong *)(param_3 + 2) + (ulonglong)(uVar6 - 1) * 4);
      }
      *puVar3 = uVar1;
      lVar5 = lVar5 + (ulonglong)*(byte *)(lVar5 + 7) +
              ((ulonglong)CONCAT11(*(undefined1 *)(lVar5 + 4),*(undefined1 *)(lVar5 + 5)) * 0x100 +
              (ulonglong)*(byte *)(lVar5 + 6)) * 0x100;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 1451fc020 FUN_1451fc020 body=219 status=ok
// SIG undefined FUN_1451fc020(void)

void FUN_1451fc020(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_2[3] + 0x58) != '\0') {
    lVar3 = param_1 + 8;
    uVar5 = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar2 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
            (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
    if (uVar2 != 0) {
      do {
        if ((uint)uVar5 < *(uint *)(*param_2 + 0x88)) {
          puVar1 = (undefined4 *)(*(longlong *)(*param_2 + 0x90) + uVar5 * 4);
        }
        else {
          puVar1 = (undefined4 *)&DAT_149a1f1a0;
        }
        FUN_1451fc2b0(lVar3,param_2,*puVar1);
        if (*(char *)(param_2[3] + 0x58) == '\0') {
          return;
        }
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        lVar3 = lVar3 + (ulonglong)*(byte *)(lVar3 + 7) +
                ((ulonglong)CONCAT11(*(undefined1 *)(lVar3 + 4),*(undefined1 *)(lVar3 + 5)) * 0x100
                + (ulonglong)*(byte *)(lVar3 + 6)) * 0x100;
      } while (uVar4 < uVar2);
    }
  }
  return;
}



// FUNCTION 1451fc100 FUN_1451fc100 body=424 status=ok
// SIG undefined FUN_1451fc100(void)

uint FUN_1451fc100(byte *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar6 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  uVar4 = (uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 + (uint)param_1[8] * 0x1000000 +
          (uint)param_1[0xb];
  if (uVar4 == 0) {
    return uVar6;
  }
  iVar7 = *(int *)(param_2 + 8) + -1;
  param_1 = param_1 + 0x10;
  lVar12 = 0;
  uVar13 = (ulonglong)uVar4;
LAB_1451fc190:
  pbVar8 = &DAT_149a1f1a0;
  if (param_1 <= param_1 + lVar12) {
    pbVar8 = param_1 + lVar12;
  }
  iVar10 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
  iVar11 = (uint)pbVar8[2] * 0x100 + (uint)pbVar8[3];
  do {
    iVar9 = 0;
    iVar5 = iVar7;
    if (-1 < iVar7) {
      do {
        uVar4 = (uint)(iVar5 + iVar9) >> 1;
        iVar2 = *(int *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar4 * 0xc);
        if (iVar2 == iVar10) {
LAB_1451fc204:
          lVar1 = *(longlong *)(param_2 + 0x10) + (ulonglong)uVar4 * 0xc;
          if ((lVar1 != 0) && (*(int *)(lVar1 + 4) == iVar11)) {
            uVar6 = uVar6 & (uint)pbVar8[9] * 0x10000 + (uint)pbVar8[10] * 0x100 +
                            (uint)pbVar8[8] * 0x1000000 + (uint)pbVar8[0xb] |
                    (uint)pbVar8[5] * 0x10000 + (uint)pbVar8[6] * 0x100 +
                    (uint)pbVar8[4] * 0x1000000 + (uint)pbVar8[7];
            goto LAB_1451fc270;
          }
          break;
        }
        iVar3 = 1;
        if (iVar2 < iVar10) {
          iVar3 = -1;
        }
        if (iVar3 < 0) {
          iVar5 = uVar4 - 1;
        }
        else {
          if (iVar3 < 1) goto LAB_1451fc204;
          iVar9 = uVar4 + 1;
        }
      } while (iVar9 <= iVar5);
    }
    if ((iVar10 != 3) || (iVar11 != 3)) break;
    iVar10 = 0x25;
    iVar11 = 1;
  } while( true );
LAB_1451fc270:
  lVar12 = lVar12 + 0xc;
  uVar13 = uVar13 - 1;
  if (uVar13 == 0) {
    return uVar6;
  }
  goto LAB_1451fc190;
}



// FUNCTION 1451fc2b0 FUN_1451fc2b0 body=634 status=ok
// SIG undefined FUN_1451fc2b0(void)

void FUN_1451fc2b0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  puVar3 = (undefined1 *)
           ((ulonglong)
            (((uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
              (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb)) * 0xc) +
           param_1 + 0x10);
  uVar6 = (uint)*(byte *)(param_1 + 0xd) * 0x10000 + (uint)*(byte *)(param_1 + 0xe) * 0x100 +
          (uint)*(byte *)(param_1 + 0xc) * 0x1000000 + (uint)*(byte *)(param_1 + 0xf);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      if (((param_3 &
           (uint)(byte)puVar3[9] * 0x10000 + (uint)(byte)puVar3[10] * 0x100 +
           (uint)(byte)puVar3[8] * 0x1000000 + (uint)(byte)puVar3[0xb]) != 0) &&
         ((((uint)(byte)puVar3[5] * 0x10000 + (uint)(byte)puVar3[6] * 0x100 +
            (uint)(byte)puVar3[4] * 0x1000000 + (uint)(byte)puVar3[7] >> 0x1d & 1) != 0 ||
          ((uint)((*(uint *)(*(longlong *)(param_2 + 0x18) + 0x38) & 0xfffffffe) == 6) ==
           (uint)(byte)puVar3[5] * 0x10000 + (uint)(byte)puVar3[6] * 0x100 +
           (uint)(byte)puVar3[4] * 0x1000000 + (uint)(byte)puVar3[7] >> 0x1f)))) {
        if (((uint)(byte)puVar3[5] * 0x10000 + (uint)(byte)puVar3[6] * 0x100 +
             (uint)(byte)puVar3[4] * 0x1000000 + (uint)(byte)puVar3[7] >> 0x1c & 1) == 0) {
          bVar4 = ((uint)(byte)puVar3[5] * 0x10000 + (uint)(byte)puVar3[6] * 0x100 +
                   (uint)(byte)puVar3[4] * 0x1000000 + (uint)(byte)puVar3[7] >> 0x1e & 1) !=
                  (uint)((*(uint *)(*(longlong *)(param_2 + 0x18) + 0x38) & 0xfffffffd) == 5);
        }
        else {
          bVar4 = (bool)((byte)((uint)(byte)puVar3[5] * 0x10000 + (uint)(byte)puVar3[6] * 0x100 +
                                (uint)(byte)puVar3[4] * 0x1000000 + (uint)(byte)puVar3[7] >> 0x1e) &
                        1);
        }
        cVar2 = FUN_1451e0ae0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8),
                              "start chain subtable %d",*(undefined4 *)(param_2 + 0x60),uVar7);
        if (cVar2 != '\0') {
          if (bVar4 != false) {
            FUN_144b61ad0(*(undefined8 *)(param_2 + 0x18));
          }
          FUN_1451f6f90(param_2 + 0x20,puVar3);
          FUN_145200b60(puVar3,param_2);
          lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x10);
          *(longlong *)(param_2 + 0x28) = lVar1;
          *(ulonglong *)(param_2 + 0x30) =
               (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x48) + 0x18) + lVar1;
          if (bVar4 != false) {
            FUN_144b61ad0(*(undefined8 *)(param_2 + 0x18));
          }
          FUN_1451e0ae0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8),
                        "end chain subtable %d",*(undefined4 *)(param_2 + 0x60));
          if (*(char *)(*(longlong *)(param_2 + 0x18) + 0x58) == '\0') {
            return;
          }
        }
      }
      puVar3 = puVar3 + ((ulonglong)CONCAT11(*puVar3,puVar3[1]) * 0x100 + (ulonglong)(byte)puVar3[2]
                        ) * 0x100 + (ulonglong)(byte)puVar3[3];
      *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return;
}



// FUNCTION 1451fc530 FUN_1451fc530 body=348 status=ok
// SIG undefined FUN_1451fc530(void)

void FUN_1451fc530(longlong param_1,undefined8 param_2,uint *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar5 = param_1 + 8;
  uVar7 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar7 != 0) {
    uVar8 = (ulonglong)uVar7;
    do {
      uVar1 = FUN_1451fc8a0(lVar5);
      uVar7 = param_3[1];
      uVar6 = *param_3 + 1;
      if ((int)(*param_3 + 1) < 0) {
        uVar6 = 0;
      }
      if ((int)uVar7 < 0) {
LAB_1451fc626:
        puVar3 = &DAT_14c793f60;
        DAT_14c793f60 = 0;
      }
      else {
        uVar4 = uVar7;
        if (uVar7 < uVar6) {
          do {
            uVar4 = uVar4 + 8 + (uVar4 >> 1);
          } while (uVar4 <= uVar6);
          if (((((int)uVar4 < 0) || (uVar4 < uVar7)) || (0x3ffffffe < uVar4)) ||
             (lVar2 = FUN_14286436b(*(undefined8 *)(param_3 + 2)), lVar2 == 0)) {
            param_3[1] = 0xffffffff;
            goto LAB_1451fc626;
          }
          param_3[1] = uVar4;
          *(longlong *)(param_3 + 2) = lVar2;
        }
        uVar7 = *param_3;
        if (uVar7 < uVar6) {
          memset((void *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar7 * 4),0,
                 (ulonglong)(uVar6 - uVar7) << 2);
        }
        *param_3 = uVar6;
        puVar3 = (undefined4 *)(*(longlong *)(param_3 + 2) + (ulonglong)(uVar6 - 1) * 4);
      }
      *puVar3 = uVar1;
      lVar5 = lVar5 + (ulonglong)*(byte *)(lVar5 + 7) +
              ((ulonglong)CONCAT11(*(undefined1 *)(lVar5 + 4),*(undefined1 *)(lVar5 + 5)) * 0x100 +
              (ulonglong)*(byte *)(lVar5 + 6)) * 0x100;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 1451fc690 FUN_1451fc690 body=219 status=ok
// SIG undefined FUN_1451fc690(void)

void FUN_1451fc690(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_2[3] + 0x58) != '\0') {
    lVar3 = param_1 + 8;
    uVar5 = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar2 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
            (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
    if (uVar2 != 0) {
      do {
        if ((uint)uVar5 < *(uint *)(*param_2 + 0x88)) {
          puVar1 = (undefined4 *)(*(longlong *)(*param_2 + 0x90) + uVar5 * 4);
        }
        else {
          puVar1 = (undefined4 *)&DAT_149a1f1a0;
        }
        FUN_1451fca40(lVar3,param_2,*puVar1);
        if (*(char *)(param_2[3] + 0x58) == '\0') {
          return;
        }
        uVar4 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        lVar3 = lVar3 + (ulonglong)*(byte *)(lVar3 + 7) +
                ((ulonglong)CONCAT11(*(undefined1 *)(lVar3 + 4),*(undefined1 *)(lVar3 + 5)) * 0x100
                + (ulonglong)*(byte *)(lVar3 + 6)) * 0x100;
      } while (uVar4 < uVar2);
    }
  }
  return;
}



// FUNCTION 1451fc770 FUN_1451fc770 body=291 status=ok
// SIG undefined FUN_1451fc770(void)

ulonglong FUN_1451fc770(byte *param_1,undefined8 param_2)

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
        uVar1 = FUN_1451fcc30(pbVar3,param_2,(uint)*param_1 * 0x100 + (uint)param_1[1]);
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



// FUNCTION 1451fc8a0 FUN_1451fc8a0 body=408 status=ok
// SIG undefined FUN_1451fc8a0(void)

uint FUN_1451fc8a0(byte *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar6 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  uVar4 = (uint)param_1[8] * 0x100 + (uint)param_1[9];
  if (uVar4 == 0) {
    return uVar6;
  }
  iVar7 = *(int *)(param_2 + 8) + -1;
  param_1 = param_1 + 0xc;
  lVar12 = 0;
  uVar13 = (ulonglong)uVar4;
LAB_1451fc920:
  pbVar8 = &DAT_149a1f1a0;
  if (param_1 <= param_1 + lVar12) {
    pbVar8 = param_1 + lVar12;
  }
  iVar10 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
  iVar11 = (uint)pbVar8[2] * 0x100 + (uint)pbVar8[3];
  do {
    iVar9 = 0;
    iVar5 = iVar7;
    if (-1 < iVar7) {
      do {
        uVar4 = (uint)(iVar5 + iVar9) >> 1;
        iVar2 = *(int *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar4 * 0xc);
        if (iVar2 == iVar10) {
LAB_1451fc994:
          lVar1 = *(longlong *)(param_2 + 0x10) + (ulonglong)uVar4 * 0xc;
          if ((lVar1 != 0) && (*(int *)(lVar1 + 4) == iVar11)) {
            uVar6 = uVar6 & (uint)pbVar8[9] * 0x10000 + (uint)pbVar8[10] * 0x100 +
                            (uint)pbVar8[8] * 0x1000000 + (uint)pbVar8[0xb] |
                    (uint)pbVar8[5] * 0x10000 + (uint)pbVar8[6] * 0x100 +
                    (uint)pbVar8[4] * 0x1000000 + (uint)pbVar8[7];
            goto LAB_1451fca00;
          }
          break;
        }
        iVar3 = 1;
        if (iVar2 < iVar10) {
          iVar3 = -1;
        }
        if (iVar3 < 0) {
          iVar5 = uVar4 - 1;
        }
        else {
          if (iVar3 < 1) goto LAB_1451fc994;
          iVar9 = uVar4 + 1;
        }
      } while (iVar9 <= iVar5);
    }
    if ((iVar10 != 3) || (iVar11 != 3)) break;
    iVar10 = 0x25;
    iVar11 = 1;
  } while( true );
LAB_1451fca00:
  lVar12 = lVar12 + 0xc;
  uVar13 = uVar13 - 1;
  if (uVar13 == 0) {
    return uVar6;
  }
  goto LAB_1451fc920;
}



// FUNCTION 1451fca40 FUN_1451fca40 body=485 status=ok
// SIG undefined FUN_1451fca40(void)

void FUN_1451fca40(longlong param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  
  uVar5 = 0;
  pbVar4 = (byte *)((ulonglong)
                    (((uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9)) * 0xc) +
                   param_1 + 0xc);
  uVar7 = (uint)*(byte *)(param_1 + 10) * 0x100 + (uint)*(byte *)(param_1 + 0xb);
  if (uVar7 != 0) {
    do {
      if (((param_3 &
           (uint)pbVar4[5] * 0x10000 + (uint)pbVar4[6] * 0x100 + (uint)pbVar4[4] * 0x1000000 +
           (uint)pbVar4[7]) != 0) &&
         ((((ushort)pbVar4[2] * 0x100 + (ushort)pbVar4[3] & 0x2000) != 0 ||
          (((*(uint *)(*(longlong *)(param_2 + 0x18) + 0x38) & 0xfffffffe) == 6) ==
           SUB21((ushort)((ushort)pbVar4[2] * 0x100 + (ushort)pbVar4[3]) >> 0xf,0))))) {
        if (((ushort)pbVar4[2] * 0x100 + (ushort)pbVar4[3] & 0x1000) == 0) {
          bVar6 = ((ushort)((ushort)pbVar4[2] * 0x100 + (ushort)pbVar4[3]) >> 0xe & 1) !=
                  (ushort)((*(uint *)(*(longlong *)(param_2 + 0x18) + 0x38) & 0xfffffffd) == 5);
        }
        else {
          bVar6 = (bool)((byte)((ushort)((ushort)pbVar4[2] * 0x100 + (ushort)pbVar4[3]) >> 0xe) & 1)
          ;
        }
        cVar3 = FUN_1451e0ae0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8),
                              "start chain subtable %d",*(undefined4 *)(param_2 + 0x60));
        if (cVar3 != '\0') {
          if (bVar6 != false) {
            FUN_144b61ad0(*(undefined8 *)(param_2 + 0x18));
          }
          FUN_1451fcd80(pbVar4,param_2);
          if (bVar6 != false) {
            FUN_144b61ad0(*(undefined8 *)(param_2 + 0x18));
          }
          FUN_1451e0ae0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8),
                        "end chain subtable %d",*(undefined4 *)(param_2 + 0x60));
          if (*(char *)(*(longlong *)(param_2 + 0x18) + 0x58) == '\0') {
            return;
          }
        }
      }
      bVar1 = *pbVar4;
      uVar5 = uVar5 + 1;
      bVar2 = pbVar4[1];
      *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
      pbVar4 = pbVar4 + (ulonglong)bVar1 * 0x100 + (ulonglong)bVar2;
    } while (uVar5 < uVar7);
  }
  return;
}



// FUNCTION 1451fcc30 FUN_1451fcc30 body=324 status=ok
// SIG undefined FUN_1451fcc30(void)

ulonglong FUN_1451fcc30(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1 + 4,4);
  if ((((char)uVar1 == '\0') ||
      (uVar1 = 0,
      (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
      (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) < 0xc)) ||
     (uVar1 = FUN_144e2c5c0(param_2,param_1,
                            (uint)*(byte *)(param_1 + 5) * 0x10000 +
                            (uint)*(byte *)(param_1 + 6) * 0x100 +
                            (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7))
     , (char)uVar1 == '\0')) {
    return uVar1 & 0xffffffffffffff00;
  }
  uVar1 = FUN_144e2c5c0(param_2,param_1 + 0xc,
                        ((uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9)) * 0xc)
  ;
  if ((char)uVar1 == '\0') {
LAB_1451fcd5e:
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    pbVar2 = (byte *)0x0;
    pbVar3 = (byte *)((ulonglong)
                      (((uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9)) * 0xc)
                     + param_1 + 0xc);
    uVar5 = 0;
    uVar4 = (uint)*(byte *)(param_1 + 10) * 0x100 + (uint)*(byte *)(param_1 + 0xb);
    if (uVar4 != 0) {
      do {
        uVar1 = FUN_1451fce80(pbVar3,param_2);
        if ((char)uVar1 == '\0') goto LAB_1451fcd5e;
        uVar5 = uVar5 + 1;
        pbVar2 = pbVar3 + pbVar3[1];
        pbVar3 = pbVar2 + (ulonglong)*pbVar3 * 0x100;
      } while (uVar5 < uVar4);
    }
    uVar1 = CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
  }
  return uVar1;
}



// FUNCTION 1451fcd80 FUN_1451fcd80 body=248 status=ok
// SIG undefined FUN_1451fcd80(void)

undefined1 FUN_1451fcd80(undefined1 *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  
  puVar3 = *(undefined1 **)(*(longlong *)(param_2 + 0x48) + 0x10);
  *(undefined1 **)(param_2 + 0x28) = puVar3;
  uVar2 = *(uint *)(*(longlong *)(param_2 + 0x48) + 0x18);
  *(undefined1 **)(param_2 + 0x30) = puVar3 + uVar2;
  if (param_1 != (undefined1 *)0x0) {
    if ((param_1 < puVar3) || (puVar3 + uVar2 <= param_1)) {
      puVar7 = (undefined1 *)0x0;
      *(undefined8 *)(param_2 + 0x28) = 0;
    }
    else {
      *(undefined1 **)(param_2 + 0x28) = param_1;
      uVar6 = *(longlong *)(param_2 + 0x30) - (longlong)param_1;
      if (CONCAT11(*param_1,param_1[1]) <= uVar6) {
        uVar6 = (ulonglong)CONCAT11(*param_1,param_1[1]);
      }
      puVar7 = param_1 + uVar6;
    }
    *(undefined1 **)(param_2 + 0x30) = puVar7;
  }
  cVar1 = param_1[3];
  if (cVar1 == '\0') {
    uVar5 = FUN_145200db0(param_2,param_1 + 8,puVar3,param_2,0xfffffffffffffffe);
  }
  else if (cVar1 == '\x01') {
    uVar5 = FUN_1451fcf70(param_1 + 8,param_2);
  }
  else if (cVar1 == '\x02') {
    uVar5 = FUN_1451fd420(param_1 + 8,param_2);
  }
  else if (cVar1 == '\x04') {
    uVar5 = FUN_1451fd590(param_1 + 8,param_2);
  }
  else if (cVar1 == '\x05') {
    uVar5 = FUN_1451fd630(param_1 + 8,param_2);
  }
  else {
    uVar5 = 0;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x10);
  *(longlong *)(param_2 + 0x28) = lVar4;
  *(ulonglong *)(param_2 + 0x30) =
       (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x48) + 0x18) + lVar4;
  return uVar5;
}



// FUNCTION 1451fce80 FUN_1451fce80 body=234 status=ok
// SIG undefined FUN_1451fce80(void)

ulonglong FUN_1451fce80(byte *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar2 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar2 != '\0') {
    uVar2 = 0x100;
    if (8 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
      uVar2 = FUN_144e2c5c0(param_2,param_1,(uint)*param_1 * 0x100 + (uint)param_1[1]);
      if ((char)uVar2 != '\0') {
        pbVar3 = *(byte **)(*(longlong *)(param_2 + 0x28) + 0x10);
        *(byte **)(param_2 + 8) = pbVar3;
        pbVar4 = pbVar3 + *(uint *)(*(longlong *)(param_2 + 0x28) + 0x18);
        *(byte **)(param_2 + 0x10) = pbVar4;
        if ((param_1 < pbVar3) || (pbVar4 <= param_1)) {
          pbVar3 = (byte *)0x0;
          *(undefined8 *)(param_2 + 8) = 0;
        }
        else {
          *(byte **)(param_2 + 8) = param_1;
          uVar2 = (longlong)pbVar4 - (longlong)param_1;
          if ((ulonglong)CONCAT11(*param_1,param_1[1]) <=
              (ulonglong)((longlong)pbVar4 - (longlong)param_1)) {
            uVar2 = (ulonglong)CONCAT11(*param_1,param_1[1]);
          }
          pbVar3 = param_1 + uVar2;
        }
        *(byte **)(param_2 + 0x10) = pbVar3;
        uVar2 = FUN_1452005d0(param_1,param_2);
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



// FUNCTION 1451fcf70 FUN_1451fcf70 body=120 status=ok
// SIG undefined FUN_1451fcf70(void)

undefined1 FUN_1451fcf70(longlong param_1,longlong param_2)

{
  longlong local_48;
  undefined8 local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  undefined1 local_20;
  undefined4 local_1c;
  longlong local_18;
  longlong local_10;
  
  local_30[0] = 0;
  local_10 = (ulonglong)*(byte *)(param_1 + 9) + (ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1
  ;
  local_40 = *(undefined8 *)(param_2 + 0x18);
  local_20 = 0;
  local_1c = 0;
  local_38 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x30);
  local_48 = param_1;
  local_28 = param_2;
  local_18 = param_1;
  if (local_38 == -1) {
    local_38 = FUN_144e2c9d0(*(longlong *)(param_2 + 0x10));
  }
  FUN_145205b20(&local_48,local_30);
  return local_30[0];
}



// FUNCTION 1451fcff0 FUN_1451fcff0 body=171 status=ok
// SIG undefined FUN_1451fcff0(void)

undefined1 FUN_1451fcff0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  cVar1 = FUN_1451fd0a0(param_1,param_2,local_res8);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_1 + 8,2);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1,
                          (uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9));
    if (cVar1 != '\0') {
      lVar2 = (ulonglong)*(byte *)(param_1 + 9) +
              (ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1;
      cVar1 = FUN_145207000(lVar2,param_2,0,lVar2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451fd0a0 FUN_1451fd0a0 body=885 status=ok
// SIG undefined FUN_1451fd0a0(void)

undefined8 FUN_1451fd0a0(byte *param_1,longlong param_2,undefined4 *param_3)

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
      if (iVar13 <= iVar15) goto LAB_1451fd2a6;
    }
    else {
      if (iVar15 < iVar13) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar10;
        }
        return 1;
      }
LAB_1451fd2a6:
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
    if (0x1ffffffe < uVar11) {
      return 0;
    }
    cVar3 = FUN_144e2c5c0(param_2,pbVar7,uVar11 * 8);
    if (cVar3 == '\0') {
      return 0;
    }
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (local_48 - uVar11);
    if (*(int *)(param_2 + 0x18) < 1) {
      return 0;
    }
    pbVar9 = pbVar7 + (ulonglong)local_48 * 8;
    if (pbVar9 < pbVar7 + uVar10 * 8) {
      do {
        bVar2 = *pbVar9;
        pbVar8 = pbVar9 + 1;
        pbVar9 = pbVar9 + 8;
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
      } while (pbVar9 < pbVar7 + uVar10 * 8);
    }
    uVar5 = (ulonglong)local_res20;
    local_48 = uVar11;
  } while( true );
}



// FUNCTION 1451fd420 FUN_1451fd420 body=194 status=ok
// SIG undefined FUN_1451fd420(void)

void FUN_1451fd420(longlong param_1,longlong param_2)

{
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 local_170;
  int local_168;
  undefined1 local_158 [8];
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined4 local_128;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_140 = (ulonglong)*(byte *)(param_1 + 9) +
              (ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1;
  local_158[0] = 0;
  local_138 = (ulonglong)*(byte *)(param_1 + 0xb) +
              (ulonglong)*(byte *)(param_1 + 10) * 0x100 + param_1;
  local_130 = (ulonglong)*(byte *)(param_1 + 0xd) +
              (ulonglong)*(byte *)(param_1 + 0xc) * 0x100 + param_1;
  local_128 = 0;
  local_170 = *(undefined8 *)(param_2 + 0x18);
  local_168 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x30);
  local_178 = param_1;
  local_150 = param_2;
  local_148 = param_1;
  if (local_168 == -1) {
    local_168 = FUN_144e2c9d0();
  }
  FUN_145205570(&local_178,local_158);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_198);
}



// FUNCTION 1451fd4f0 FUN_1451fd4f0 body=147 status=ok
// SIG undefined FUN_1451fd4f0(void)

ulonglong FUN_1451fd4f0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,0x1c);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_1451ee460(param_1,param_2,0);
    if (((((char)uVar1 != '\0') &&
         (uVar1 = 0,
         (ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) != 0)) &&
        (uVar1 = 0,
        (ushort)((ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb)) != 0))
       && (uVar1 = 0,
          (ushort)((ushort)*(byte *)(param_1 + 0xc) * 0x100 + (ushort)*(byte *)(param_1 + 0xd)) != 0
          )) {
      return 1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451fd590 FUN_1451fd590 body=156 status=ok
// SIG undefined FUN_1451fd590(void)

undefined8 FUN_1451fd590(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x30);
  if (iVar2 == -1) {
    iVar2 = FUN_144e2c9d0();
  }
  uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0x60);
  piVar4 = *(int **)(*(longlong *)(param_2 + 0x18) + 0x70);
  if (uVar1 != 0) {
    uVar6 = (ulonglong)uVar1;
    do {
      pbVar3 = (byte *)FUN_1451fbab0(param_1,*piVar4,iVar2);
      if (pbVar3 != (byte *)0x0) {
        uVar5 = 1;
        *piVar4 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
      }
      piVar4 = piVar4 + 5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return uVar5;
}



// FUNCTION 1451fd630 FUN_1451fd630 body=110 status=ok
// SIG undefined FUN_1451fd630(void)

undefined1 FUN_1451fd630(longlong param_1,longlong param_2)

{
  longlong local_48;
  undefined8 local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  undefined4 local_20;
  longlong local_18;
  
  local_30[0] = 0;
  local_18 = (ulonglong)*(byte *)(param_1 + 9) + (ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1
  ;
  local_40 = *(undefined8 *)(param_2 + 0x18);
  local_20 = 0;
  local_38 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x30);
  local_48 = param_1;
  local_28 = param_2;
  if (local_38 == -1) {
    local_38 = FUN_144e2c9d0(*(longlong *)(param_2 + 0x10));
  }
  FUN_145204dc0(&local_48,local_30);
  return local_30[0];
}



// FUNCTION 1451fd6a0 FUN_1451fd6a0 body=885 status=ok
// SIG undefined FUN_1451fd6a0(void)

undefined8 FUN_1451fd6a0(byte *param_1,longlong param_2,undefined4 *param_3)

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
      if (iVar13 <= iVar15) goto LAB_1451fd8a6;
    }
    else {
      if (iVar15 < iVar13) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar10;
        }
        return 1;
      }
LAB_1451fd8a6:
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
    if (0x1ffffffe < uVar11) {
      return 0;
    }
    cVar3 = FUN_144e2c5c0(param_2,pbVar7,uVar11 * 8);
    if (cVar3 == '\0') {
      return 0;
    }
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (local_48 - uVar11);
    if (*(int *)(param_2 + 0x18) < 1) {
      return 0;
    }
    pbVar9 = pbVar7 + (ulonglong)local_48 * 8;
    if (pbVar9 < pbVar7 + uVar10 * 8) {
      do {
        bVar2 = *pbVar9;
        pbVar8 = pbVar9 + 1;
        pbVar9 = pbVar9 + 8;
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
      } while (pbVar9 < pbVar7 + uVar10 * 8);
    }
    uVar5 = (ulonglong)local_res20;
    local_48 = uVar11;
  } while( true );
}



// FUNCTION 1451fda20 FUN_1451fda20 body=102 status=ok
// SIG undefined FUN_1451fda20(void)

uint FUN_1451fda20(uint param_1,uint param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  byte *pbVar2;
  
  if ((param_2 != 0) && (param_4 != 0)) {
    pbVar2 = (byte *)((ulonglong)param_1 + param_3);
    if (param_2 < 0x7fffffff) {
      cVar1 = FUN_144e2c5c0(param_4 + 0x20,pbVar2,param_2 * 2);
      if (cVar1 != '\0') {
        return (int)(short)((ushort)pbVar2[1] + (ushort)*pbVar2 * 0x100);
      }
    }
    return 0;
  }
  return param_1;
}



// FUNCTION 1451fda90 FUN_1451fda90 body=128 status=ok
// SIG undefined FUN_1451fda90(void)

bool FUN_1451fda90(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451fdb10 FUN_1451fdb10 body=121 status=ok
// SIG undefined FUN_1451fdb10(void)

undefined8 FUN_1451fdb10(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451edda0();
  if (cVar1 != '\0') {
    cVar1 = FUN_1451f1950((ulonglong)(byte)param_1[3] +
                          ((ulonglong)(byte)param_1[2] +
                          (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) * 0x100 + param_3,
                          param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451fdb90 FUN_1451fdb90 body=127 status=ok
// SIG undefined FUN_1451fdb90(void)

ulonglong FUN_1451fdb90(byte *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,0xc);
  if ((char)uVar1 != '\0') {
    uVar1 = 0;
    if (0xc < (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
              (uint)param_1[3]) {
      uVar1 = FUN_144e2c5c0(param_2,param_1);
      if ((char)uVar1 != '\0') {
        uVar1 = FUN_1451ff230(param_1,param_2);
        return uVar1;
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451fdc10 FUN_1451fdc10 body=409 status=ok
// SIG undefined FUN_1451fdc10(void)

uint FUN_1451fdc10(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  iVar3 = 0;
  iVar8 = (uint)*(byte *)(param_1 + 0xd) * 0x10000 + (uint)*(byte *)(param_1 + 0xe) * 0x100 +
          (uint)*(byte *)(param_1 + 0xc) * 0x1000000 + (*(byte *)(param_1 + 0xf) - 1);
  if (-1 < iVar8) {
    do {
      uVar2 = (uint)(iVar8 + iVar3) >> 1;
      lVar7 = (ulonglong)uVar2 * 6 + param_1;
      uVar5 = (uint)(ushort)((ushort)*(byte *)(lVar7 + 0x1c) * 0x100 +
                            (ushort)*(byte *)(lVar7 + 0x1d));
      if (param_2 < uVar5) {
        uVar5 = 0xffffffff;
LAB_1451fdcdc:
        bVar9 = (int)uVar5 < 0;
      }
      else {
        uVar5 = (uint)(param_2 != uVar5);
        bVar9 = false;
        if (uVar5 == 0) {
          uVar5 = (uint)(ushort)((ushort)*(byte *)(lVar7 + 0x1f) +
                                (ushort)*(byte *)(lVar7 + 0x1e) * 0x100);
          if (param_3 < uVar5) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(param_3 != uVar5);
          }
          goto LAB_1451fdcdc;
        }
      }
      if (bVar9) {
        iVar8 = uVar2 - 1;
      }
      else {
        if ((int)uVar5 < 1) {
          puVar6 = (undefined1 *)(param_1 + 0x1c + (ulonglong)uVar2 * 6);
          goto LAB_1451fdd02;
        }
        iVar3 = uVar2 + 1;
      }
    } while (iVar3 <= iVar8);
  }
  puVar6 = &DAT_149a1f1a0;
LAB_1451fdd02:
  uVar2 = (uint)(short)((ushort)(byte)puVar6[4] * 0x100 + (ushort)(byte)puVar6[5]);
  uVar5 = (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
          (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb);
  if ((uVar5 != 0) && (param_4 != 0)) {
    pbVar4 = (byte *)((ulonglong)uVar2 + param_1);
    if ((uVar5 < 0x7fffffff) &&
       (cVar1 = FUN_144e2c5c0(param_4 + 0x20,pbVar4,uVar5 * 2), cVar1 != '\0')) {
      uVar2 = (uint)(short)((ushort)pbVar4[1] + (ushort)*pbVar4 * 0x100);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 1451fddb0 FUN_1451fddb0 body=169 status=ok
// SIG undefined FUN_1451fddb0(void)

undefined8 FUN_1451fddb0(longlong param_1,longlong *param_2)

{
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  byte local_10;
  
  if (((*(byte *)(*param_2 + 0xb8) & 1) != 0) &&
     (((uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
       (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) >> 0x1c & 1) == 0)) {
    local_18 = &local_28;
    local_10 = (byte)((uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100
                      + (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) >>
                     0x1e) & 1;
    local_28 = param_1;
    local_20 = param_2;
    FUN_145204860(&local_18,param_2[1],param_2[3],*(undefined4 *)(*param_2 + 0xb0),1);
    return 1;
  }
  return 0;
}



// FUNCTION 1451fde60 FUN_1451fde60 body=130 status=ok
// SIG undefined FUN_1451fde60(void)

undefined8 FUN_1451fde60(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,8);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x2aaaaaaa) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 0x10,uVar2 * 6);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451fdef0 FUN_1451fdef0 body=292 status=ok
// SIG undefined FUN_1451fdef0(void)

void FUN_1451fdef0(longlong param_1,longlong *param_2)

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
  if (((*(byte *)(*param_2 + 0xb8) & 1) == 0) &&
     (((uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
       (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) >> 0x1e & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  local_20 = 0;
  local_48 = (ulonglong)*(byte *)(param_1 + 0x1f) + 0xc +
             ((ulonglong)*(byte *)(param_1 + 0x1e) +
             (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d)) *
             0x100) * 0x100 + param_1;
  local_1c = (byte)((uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
                    (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) >> 0x1e)
             & 1;
  local_78 = param_1 + 0xc;
  local_70 = param_2[3];
  local_68 = *(int *)(*(longlong *)(param_2[1] + 0x18) + 0x30);
  local_58 = param_2;
  local_50 = param_1;
  if (local_68 == -1) {
    local_68 = FUN_144e2c9d0();
  }
  FUN_145204430(&local_78,&local_58);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1451fe030 FUN_1451fe030 body=930 status=ok
// SIG undefined FUN_1451fe030(void)

ulonglong FUN_1451fe030(byte *param_1,longlong param_2,undefined4 *param_3)

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
LAB_1451fe3bf:
        return uVar5 & 0xffffffffffffff00;
      }
      pbVar12 = pbVar17 + (ulonglong)(uVar16 * uVar15) * 2;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= -uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar12,-uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451fe3bf;
      uVar5 = (ulonglong)(uVar16 - local_res20);
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (uVar16 - local_res20);
      if ((*(int *)(param_2 + 0x18) < 1) || (pbVar17 < pbVar12)) goto LAB_1451fe3bf;
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
      if (uVar13 <= uVar6) goto LAB_1451fe29a;
    }
    else {
      if (uVar6 < uVar13) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar8;
        }
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
LAB_1451fe29a:
      uVar3 = uVar15 * 2;
      uVar16 = uVar6 + 1;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar17,uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451fe3bf;
      uVar3 = (uVar13 - uVar6) - 1;
      uVar5 = (ulonglong)uVar3;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + uVar3;
      if ((*(int *)(param_2 + 0x18) < 1) ||
         ((uVar15 != 0 && (uVar5 = 0xffffffff / (ulonglong)uVar15, (uint)uVar5 <= uVar16))))
      goto LAB_1451fe3bf;
      uVar5 = (ulonglong)(uVar16 * uVar15);
      lVar11 = uVar5 * 2;
      if (pbVar17 + lVar11 < pbVar17) goto LAB_1451fe3bf;
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
       (uVar5 = FUN_144e2c5c0(param_2,pbVar7,uVar3 * 6), (char)uVar5 == '\0')) goto LAB_1451fe3bf;
    uVar5 = (ulonglong)(local_48 - uVar3);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (local_48 - uVar3);
    if (*(int *)(param_2 + 0x18) < 1) goto LAB_1451fe3bf;
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



// FUNCTION 1451fe3e0 FUN_1451fe3e0 body=425 status=ok
// SIG undefined FUN_1451fe3e0(void)

uint FUN_1451fe3e0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  
  uVar1 = *(undefined4 *)(param_4 + 0x50);
  pbVar4 = (byte *)FUN_1451fbab0((ulonglong)*(byte *)(param_1 + 0x13) +
                                 ((ulonglong)*(byte *)(param_1 + 0x12) +
                                 (ulonglong)
                                 CONCAT11(*(undefined1 *)(param_1 + 0x10),
                                          *(undefined1 *)(param_1 + 0x11)) * 0x100) * 0x100 +
                                 param_1,param_2,uVar1);
  if (pbVar4 == (byte *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
  }
  pbVar4 = (byte *)FUN_1451fbab0((ulonglong)*(byte *)(param_1 + 0x17) +
                                 ((ulonglong)*(byte *)(param_1 + 0x16) +
                                 (ulonglong)
                                 CONCAT11(*(undefined1 *)(param_1 + 0x14),
                                          *(undefined1 *)(param_1 + 0x15)) * 0x100) * 0x100 +
                                 param_1,param_3,uVar1);
  if (pbVar4 == (byte *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)pbVar4[1] + (uint)*pbVar4 * 0x100;
  }
  pbVar7 = (byte *)((ulonglong)*(byte *)(param_1 + 0x1b) +
                   ((ulonglong)*(byte *)(param_1 + 0x1a) +
                   (ulonglong)
                   CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)) * 0x100
                   ) * 0x100 + param_1);
  pbVar4 = pbVar7 + (ulonglong)(uint)(iVar6 + iVar5) * 2;
  pbVar8 = &DAT_149a1f1a0;
  if (pbVar7 <= pbVar4) {
    pbVar8 = pbVar4;
  }
  cVar2 = FUN_144e2c5c0(param_4 + 0x20,pbVar8,2);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar9 = (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
            (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb);
    uVar3 = (uint)(short)((ushort)pbVar8[1] + (ushort)*pbVar8 * 0x100);
    if (((uVar9 != 0) &&
        (pbVar4 = (byte *)((ulonglong)uVar3 + param_1), uVar3 = 0, uVar9 < 0x7fffffff)) &&
       (cVar2 = FUN_144e2c5c0(param_4 + 0x20,pbVar4,uVar9 * 2), uVar3 = 0, cVar2 != '\0')) {
      uVar3 = (uint)(short)((ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1]);
    }
  }
  return uVar3;
}



// FUNCTION 1451fe590 FUN_1451fe590 body=169 status=ok
// SIG undefined FUN_1451fe590(void)

undefined8 FUN_1451fe590(longlong param_1,longlong *param_2)

{
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  byte local_10;
  
  if (((*(byte *)(*param_2 + 0xb8) & 1) != 0) &&
     (((uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
       (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) >> 0x1c & 1) == 0)) {
    local_18 = &local_28;
    local_10 = (byte)((uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100
                      + (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) >>
                     0x1e) & 1;
    local_28 = param_1;
    local_20 = param_2;
    FUN_145203e70(&local_18,param_2[1],param_2[3],*(undefined4 *)(*param_2 + 0xb0),1);
    return 1;
  }
  return 0;
}



// FUNCTION 1451fe640 FUN_1451fe640 body=152 status=ok
// SIG undefined FUN_1451fe640(void)

undefined8 FUN_1451fe640(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0x1c);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451fdb10(param_1 + 0x10,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451fdb10(param_1 + 0x14,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_144e2c5c0(param_2,param_1,
                              (uint)*(byte *)(param_1 + 0x19) * 0x10000 +
                              (uint)*(byte *)(param_1 + 0x1a) * 0x100 +
                              (uint)*(byte *)(param_1 + 0x18) * 0x1000000 +
                              (uint)*(byte *)(param_1 + 0x1b));
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451fe6e0 FUN_1451fe6e0 body=181 status=ok
// SIG undefined FUN_1451fe6e0(void)

undefined8 FUN_1451fe6e0(longlong param_1,longlong param_2)

{
  longlong local_48;
  undefined8 local_40;
  int local_38;
  longlong local_30;
  uint local_28;
  longlong local_20;
  undefined1 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_28 = (uint)*(byte *)(param_1 + 0x1d) * 0x10000 + (uint)*(byte *)(param_1 + 0x1e) * 0x100 +
             (uint)*(byte *)(param_1 + 0x1c) * 0x1000000 + (uint)*(byte *)(param_1 + 0x1f) >> 0x1e;
  local_14 = 0;
  local_20 = param_1 + 0xc +
             (ulonglong)
             ((uint)*(byte *)(param_1 + 0x1d) * 0x10000 + (uint)*(byte *)(param_1 + 0x1e) * 0x100 +
             (uint)*(byte *)(param_1 + 0x1f));
  local_48 = param_1 + 0xc;
  local_40 = *(undefined8 *)(param_2 + 0x18);
  local_38 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x18) + 0x30);
  local_30 = param_2;
  if (local_38 == -1) {
    local_38 = FUN_144e2c9d0();
  }
  FUN_145203a40(&local_48,&local_30);
  return 1;
}



// FUNCTION 1451fe7a0 FUN_1451fe7a0 body=930 status=ok
// SIG undefined FUN_1451fe7a0(void)

ulonglong FUN_1451fe7a0(byte *param_1,longlong param_2,undefined4 *param_3)

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
LAB_1451feb2f:
        return uVar5 & 0xffffffffffffff00;
      }
      pbVar12 = pbVar17 + (ulonglong)(uVar16 * uVar15) * 2;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= -uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar12,-uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451feb2f;
      uVar5 = (ulonglong)(uVar16 - local_res20);
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (uVar16 - local_res20);
      if ((*(int *)(param_2 + 0x18) < 1) || (pbVar17 < pbVar12)) goto LAB_1451feb2f;
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
      if (uVar13 <= uVar6) goto LAB_1451fea0a;
    }
    else {
      if (uVar6 < uVar13) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)uVar8;
        }
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
LAB_1451fea0a:
      uVar3 = uVar15 * 2;
      uVar16 = uVar6 + 1;
      if (((uVar3 != 0) && (uVar5 = 0xffffffff / (ulonglong)uVar3, (uint)uVar5 <= uVar16)) ||
         (uVar5 = FUN_144e2c5c0(param_2,pbVar17,uVar16 * uVar3), (char)uVar5 == '\0'))
      goto LAB_1451feb2f;
      uVar3 = (uVar13 - uVar6) - 1;
      uVar5 = (ulonglong)uVar3;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + uVar3;
      if ((*(int *)(param_2 + 0x18) < 1) ||
         ((uVar15 != 0 && (uVar5 = 0xffffffff / (ulonglong)uVar15, (uint)uVar5 <= uVar16))))
      goto LAB_1451feb2f;
      uVar5 = (ulonglong)(uVar16 * uVar15);
      lVar11 = uVar5 * 2;
      if (pbVar17 + lVar11 < pbVar17) goto LAB_1451feb2f;
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
       (uVar5 = FUN_144e2c5c0(param_2,pbVar7,uVar3 * 6), (char)uVar5 == '\0')) goto LAB_1451feb2f;
    uVar5 = (ulonglong)(local_48 - uVar3);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (local_48 - uVar3);
    if (*(int *)(param_2 + 0x18) < 1) goto LAB_1451feb2f;
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



// FUNCTION 1451feb50 FUN_1451feb50 body=1025 status=ok
// SIG undefined FUN_1451feb50(void)

ulonglong FUN_1451feb50(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined4 uVar1;
  char cVar2;
  byte *pbVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  
  uVar1 = *(undefined4 *)(param_4 + 0x50);
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    pbVar6 = (byte *)((ulonglong)*(byte *)(param_1 + 0x17) +
                     ((ulonglong)*(byte *)(param_1 + 0x16) +
                     (ulonglong)
                     CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15)) *
                     0x100) * 0x100 + param_1);
    if ((ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]) == 10) {
      uVar7 = FUN_1451fbe00(pbVar6);
    }
    else {
      pbVar3 = (byte *)FUN_1451fbab0(pbVar6,param_2,uVar1);
      pbVar6 = &DAT_149a1f1a0;
      if (pbVar3 != (byte *)0x0) {
        pbVar6 = pbVar3;
      }
      uVar7 = (ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1];
    }
    pbVar6 = (byte *)((ulonglong)*(byte *)(param_1 + 0x1b) +
                     ((ulonglong)
                      CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)) *
                      0x100 + (ulonglong)*(byte *)(param_1 + 0x1a)) * 0x100 + param_1);
    if ((ushort)((ushort)pbVar6[1] + (ushort)*pbVar6 * 0x100) == 10) {
      uVar10 = FUN_1451fbe00(pbVar6,param_3);
    }
    else {
      pbVar3 = (byte *)FUN_1451fbab0(pbVar6,param_3,uVar1);
      pbVar6 = &DAT_149a1f1a0;
      if (pbVar3 != (byte *)0x0) {
        pbVar6 = pbVar3;
      }
      uVar10 = (ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1];
    }
    pbVar6 = (byte *)((ulonglong)*(byte *)(param_1 + 0x1f) +
                      ((ulonglong)
                       CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d)) *
                       0x100 + (ulonglong)*(byte *)(param_1 + 0x1e)) * 0x100 + param_1 +
                     ((ulonglong)uVar7 + (ulonglong)uVar10) * 2);
    cVar2 = FUN_144e2c5c0(param_4 + 0x20,pbVar6,2);
    if (cVar2 != '\0') {
      uVar9 = (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
              (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb);
      uVar8 = (uint)(short)((ushort)pbVar6[1] + (ushort)*pbVar6 * 0x100);
      if (uVar9 == 0) {
        return (ulonglong)uVar8;
      }
      pbVar6 = (byte *)((ulonglong)uVar8 +
                       (ulonglong)*(byte *)(param_1 + 0x23) +
                       ((ulonglong)*(byte *)(param_1 + 0x22) +
                       (ulonglong)
                       CONCAT11(*(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21)) *
                       0x100) * 0x100 + param_1);
      if ((uVar9 < 0x7fffffff) &&
         (cVar2 = FUN_144e2c5c0(param_4 + 0x20,pbVar6,uVar9 * 2), cVar2 != '\0')) {
        return (ulonglong)(uint)(int)(short)((ushort)pbVar6[1] + (ushort)*pbVar6 * 0x100);
      }
    }
  }
  else {
    pbVar6 = (byte *)((ulonglong)*(byte *)(param_1 + 0x17) +
                     ((ulonglong)*(byte *)(param_1 + 0x16) +
                     (ulonglong)
                     CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15)) *
                     0x100) * 0x100 + param_1);
    if ((ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]) == 10) {
      uVar8 = FUN_145206e90();
    }
    else {
      pbVar3 = (byte *)FUN_1452064e0(pbVar6,param_2,uVar1);
      pbVar6 = &DAT_149a1f1a0;
      if (pbVar3 != (byte *)0x0) {
        pbVar6 = pbVar3;
      }
      uVar8 = (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000 +
              (uint)pbVar6[3];
    }
    pbVar6 = (byte *)((ulonglong)*(byte *)(param_1 + 0x1b) +
                     ((ulonglong)
                      CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)) *
                      0x100 + (ulonglong)*(byte *)(param_1 + 0x1a)) * 0x100 + param_1);
    if ((ushort)((ushort)pbVar6[1] + (ushort)*pbVar6 * 0x100) == 10) {
      iVar5 = FUN_145206e90(pbVar6,param_3);
    }
    else {
      pbVar3 = (byte *)FUN_1452064e0(pbVar6,param_3,uVar1);
      pbVar6 = &DAT_149a1f1a0;
      if (pbVar3 != (byte *)0x0) {
        pbVar6 = pbVar3;
      }
      iVar5 = (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000 +
              (uint)pbVar6[3];
    }
    uVar9 = iVar5 + uVar8;
    if ((uVar8 <= uVar9) && (uVar9 < 0x3fffffff)) {
      pbVar6 = (byte *)((ulonglong)(uVar9 * 4) +
                       (ulonglong)*(byte *)(param_1 + 0x1f) +
                       ((ulonglong)*(byte *)(param_1 + 0x1e) +
                       (ulonglong)
                       CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d)) *
                       0x100) * 0x100 + param_1);
      cVar2 = FUN_144e2c5c0(param_4 + 0x20,pbVar6,4);
      if (cVar2 != '\0') {
        uVar4 = FUN_1451fda20((((uint)*pbVar6 * 0x100 + (uint)pbVar6[1]) * 0x100 + (uint)pbVar6[2])
                              * 0x100 + (uint)pbVar6[3],
                              (uint)*(byte *)(param_1 + 9) * 0x10000 +
                              (uint)*(byte *)(param_1 + 10) * 0x100 +
                              (uint)*(byte *)(param_1 + 8) * 0x1000000 +
                              (uint)*(byte *)(param_1 + 0xb),
                              (ulonglong)*(byte *)(param_1 + 0x23) +
                              ((ulonglong)*(byte *)(param_1 + 0x22) +
                              (ulonglong)
                              CONCAT11(*(undefined1 *)(param_1 + 0x20),
                                       *(undefined1 *)(param_1 + 0x21)) * 0x100) * 0x100 + param_1,
                              param_4);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 1451fef60 FUN_1451fef60 body=169 status=ok
// SIG undefined FUN_1451fef60(void)

undefined8 FUN_1451fef60(longlong param_1,longlong *param_2)

{
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  byte local_10;
  
  if (((*(byte *)(*param_2 + 0xb8) & 1) != 0) &&
     (((uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
       (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) >> 0x1c & 1) == 0)) {
    local_18 = &local_28;
    local_10 = (byte)((uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100
                      + (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7) >>
                     0x1e) & 1;
    local_28 = param_1;
    local_20 = param_2;
    FUN_1452032d0(&local_18,param_2[1],param_2[3],*(undefined4 *)(*param_2 + 0xb0),1);
    return 1;
  }
  return 0;
}



// FUNCTION 1451ff010 FUN_1451ff010 body=530 status=ok
// SIG undefined FUN_1451ff010(void)

undefined8 FUN_1451ff010(longlong param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0x24);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    cVar1 = FUN_1451edda0(param_1 + 0x14,param_2,param_1);
    if (((cVar1 != '\0') &&
        (cVar1 = FUN_1451f1950((ulonglong)*(byte *)(param_1 + 0x17) +
                               ((ulonglong)*(byte *)(param_1 + 0x16) +
                               (ulonglong)
                               CONCAT11(*(undefined1 *)(param_1 + 0x14),
                                        *(undefined1 *)(param_1 + 0x15)) * 0x100) * 0x100 + param_1,
                               param_2), cVar1 != '\0')) &&
       (cVar1 = FUN_1451edda0(param_1 + 0x18,param_2,param_1), cVar1 != '\0')) {
      cVar1 = FUN_1451f1950((ulonglong)*(byte *)(param_1 + 0x1b) +
                            ((ulonglong)*(byte *)(param_1 + 0x1a) +
                            (ulonglong)
                            CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)
                                    ) * 0x100) * 0x100 + param_1,param_2);
      goto LAB_1451ff16b;
    }
  }
  else {
    cVar1 = FUN_1451fda90();
    if (((cVar1 != '\0') &&
        (cVar1 = FUN_1452065a0((ulonglong)*(byte *)(param_1 + 0x17) +
                               ((ulonglong)*(byte *)(param_1 + 0x16) +
                               (ulonglong)
                               CONCAT11(*(undefined1 *)(param_1 + 0x14),
                                        *(undefined1 *)(param_1 + 0x15)) * 0x100) * 0x100 + param_1,
                               param_2), cVar1 != '\0')) &&
       (cVar1 = FUN_1451fda90(param_1 + 0x18,param_2,param_1), cVar1 != '\0')) {
      cVar1 = FUN_1452065a0((ulonglong)*(byte *)(param_1 + 0x1b) +
                            ((ulonglong)*(byte *)(param_1 + 0x1a) +
                            (ulonglong)
                            CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)
                                    ) * 0x100) * 0x100 + param_1,param_2);
LAB_1451ff16b:
      if ((cVar1 != '\0') &&
         (cVar1 = FUN_144e2c5c0(param_2,param_1,
                                (uint)*(byte *)(param_1 + 0x1d) * 0x10000 +
                                (uint)*(byte *)(param_1 + 0x1e) * 0x100 +
                                (uint)*(byte *)(param_1 + 0x1c) * 0x1000000 +
                                (uint)*(byte *)(param_1 + 0x1f)), cVar1 != '\0')) {
        bVar2 = true;
        goto LAB_1451ff1ab;
      }
    }
  }
  bVar2 = false;
LAB_1451ff1ab:
  if (!bVar2) {
    return 0;
  }
  if (((uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
       (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb) != 0) &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1,
                            (uint)*(byte *)(param_1 + 0x21) * 0x10000 +
                            (uint)*(byte *)(param_1 + 0x22) * 0x100 +
                            (uint)*(byte *)(param_1 + 0x20) * 0x1000000 +
                            (uint)*(byte *)(param_1 + 0x23)), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1451ff230 FUN_1451ff230 body=146 status=ok
// SIG undefined FUN_1451ff230(void)

bool FUN_1451ff230(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 7);
  if (cVar2 == '\0') {
    cVar2 = FUN_1451fde60(param_1 + 0xc);
    return cVar2 != '\0';
  }
  if (cVar2 == '\x01') {
    uVar1 = FUN_145200be0(param_2,param_1);
    return (bool)uVar1;
  }
  if (cVar2 == '\x02') {
    uVar1 = FUN_1451fe640();
    return (bool)uVar1;
  }
  if (cVar2 != '\x04') {
    if (cVar2 != '\x06') {
      return true;
    }
    uVar1 = FUN_1451ff010();
    return (bool)uVar1;
  }
  uVar1 = FUN_145200c30(param_2,param_1);
  return (bool)uVar1;
}



// FUNCTION 1451ff2d0 FUN_1451ff2d0 body=910 status=ok
// SIG undefined FUN_1451ff2d0(void)

byte FUN_1451ff2d0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  undefined2 uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  
  uVar21 = 0xfffffffffffffffe;
  bVar18 = 0;
  bVar4 = false;
  bVar6 = false;
  *(undefined4 *)(param_2 + 0x60) = 0;
  puVar13 = (undefined1 *)(param_1 + 8);
  uVar19 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
           (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  uVar20 = 0;
  if (uVar19 != 0) {
    do {
      uVar17 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0x38);
      if (((uVar17 & 0xfffffffe) == 4) ==
          (bool)(~(byte)((uint)(byte)puVar13[5] * 0x10000 + (uint)(byte)puVar13[6] * 0x100 +
                         (uint)(byte)puVar13[4] * 0x1000000 + (uint)(byte)puVar13[7] >> 0x1f) & 1))
      {
        uVar14 = (uint)(byte)puVar13[5] * 0x10000 + (uint)(byte)puVar13[6] * 0x100 +
                 (uint)(byte)puVar13[4] * 0x1000000 + (uint)(byte)puVar13[7] >> 0x1c & 1;
        cVar7 = FUN_1451e0ae0(*(longlong *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8),
                              "start %c%c%c%c subtable %d",0x6b,0x65,0x72,0x78,
                              *(undefined4 *)(param_2 + 0x60),uVar21);
        if (cVar7 != '\0') {
          bVar5 = !bVar4;
          bVar4 = bVar6;
          if ((bVar5) &&
             (((uint)(byte)puVar13[5] * 0x10000 + (uint)(byte)puVar13[6] * 0x100 +
               (uint)(byte)puVar13[4] * 0x1000000 + (uint)(byte)puVar13[7] >> 0x1e & 1) != 0)) {
            bVar4 = true;
            uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0x60);
            if (uVar1 != 0) {
              puVar11 = (undefined2 *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x80) + 0x10);
              uVar15 = (ulonglong)uVar1;
              do {
                *(undefined1 *)(puVar11 + 1) = 2;
                uVar9 = 1;
                if ((*(uint *)(*(longlong *)(param_2 + 0x18) + 0x38) & 0xfffffffd) == 4) {
                  uVar9 = 0xffff;
                }
                *puVar11 = uVar9;
                puVar11 = puVar11 + 10;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
          }
          uVar17 = (uint)((uVar17 & 0xfffffffd) == 5);
          if (uVar14 != uVar17) {
            FUN_144b61ad0(*(undefined8 *)(param_2 + 0x18));
          }
          puVar12 = (undefined1 *)0x0;
          if (uVar20 < uVar19 - 1) {
            puVar12 = puVar13;
          }
          puVar2 = *(undefined1 **)(*(longlong *)(param_2 + 0x48) + 0x10);
          *(undefined1 **)(param_2 + 0x28) = puVar2;
          puVar16 = puVar2 + *(uint *)(*(longlong *)(param_2 + 0x48) + 0x18);
          *(undefined1 **)(param_2 + 0x30) = puVar16;
          if (puVar12 != (undefined1 *)0x0) {
            if ((puVar12 < puVar2) || (puVar16 <= puVar12)) {
              *(undefined8 *)(param_2 + 0x30) = 0;
              *(undefined8 *)(param_2 + 0x28) = 0;
            }
            else {
              *(undefined1 **)(param_2 + 0x28) = puVar12;
              uVar10 = ((ulonglong)CONCAT11(*puVar12,puVar12[1]) * 0x100 +
                       (ulonglong)(byte)puVar12[2]) * 0x100 + (ulonglong)(byte)puVar12[3];
              uVar15 = (longlong)puVar16 - (longlong)puVar12;
              if (uVar10 <= (ulonglong)((longlong)puVar16 - (longlong)puVar12)) {
                uVar15 = uVar10;
              }
              *(undefined1 **)(param_2 + 0x30) = puVar12 + uVar15;
            }
          }
          cVar7 = puVar13[7];
          if (cVar7 == '\0') {
            bVar8 = FUN_1451fddb0(puVar13,param_2);
          }
          else if (cVar7 == '\x01') {
            bVar8 = FUN_1451fdef0(puVar13,param_2);
          }
          else if (cVar7 == '\x02') {
            bVar8 = FUN_1451fe590(puVar13,param_2);
          }
          else if (cVar7 == '\x04') {
            bVar8 = FUN_1451fe6e0(puVar13,param_2);
          }
          else if (cVar7 == '\x06') {
            bVar8 = FUN_1451fef60(puVar13,param_2);
          }
          else {
            bVar8 = 0;
          }
          bVar18 = bVar18 | bVar8;
          lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x10);
          *(longlong *)(param_2 + 0x28) = lVar3;
          *(ulonglong *)(param_2 + 0x30) =
               (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x48) + 0x18) + lVar3;
          if (uVar14 != uVar17) {
            FUN_144b61ad0(*(undefined8 *)(param_2 + 0x18));
          }
          FUN_1451e0ae0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8),
                        "end %c%c%c%c subtable %d",0x6b,0x65,0x72,0x78,
                        *(undefined4 *)(param_2 + 0x60));
          bVar6 = bVar4;
        }
      }
      puVar13 = puVar13 + ((ulonglong)CONCAT11(*puVar13,puVar13[1]) * 0x100 +
                          (ulonglong)(byte)puVar13[2]) * 0x100 + (ulonglong)(byte)puVar13[3];
      *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar19);
  }
  return bVar18;
}



// FUNCTION 1451ff660 FUN_1451ff660 body=355 status=ok
// SIG undefined FUN_1451ff660(void)

ulonglong FUN_1451ff660(byte *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  uVar2 = FUN_144e2c5c0(param_2,param_1,2);
  if (((char)uVar2 != '\0') &&
     (uVar2 = 0, 1 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]))) {
    uVar2 = FUN_144e2c5c0(param_2,param_1 + 4,4);
    if ((char)uVar2 != '\0') {
      pbVar7 = param_1 + 8;
      lVar3 = 0;
      uVar5 = 0;
      uVar6 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar6 != 0) {
        do {
          uVar2 = FUN_144e2c5c0(param_2,pbVar7,0xc);
          if ((char)uVar2 == '\0') {
LAB_1451ff7ad:
            return uVar2 & 0xffffffffffffff00;
          }
          pbVar4 = (byte *)0x0;
          if (uVar5 < uVar6 - 1) {
            pbVar4 = pbVar7;
          }
          FUN_145200c80(param_2,pbVar4);
          cVar1 = FUN_1451fdb90(pbVar7,param_2);
          if (cVar1 == '\0') {
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
            *(longlong *)(param_2 + 8) = lVar3;
            uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x28) + 0x18) + lVar3;
            *(ulonglong *)(param_2 + 0x10) = uVar2;
            goto LAB_1451ff7ad;
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



// FUNCTION 1451ff7d0 FUN_1451ff7d0 body=153 status=ok
// SIG undefined FUN_1451ff7d0(void)

undefined8 FUN_1451ff7d0(byte *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((((cVar1 != '\0') &&
       (cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]),
       cVar1 != '\0')) && (param_4 < 0x7fffffff)) &&
     (cVar1 = FUN_144e2c5c0(param_2,(ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100 + param_3,
                            param_4 * 2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1451ff870 FUN_1451ff870 body=397 status=ok
// SIG undefined FUN_1451ff870(void)

void FUN_1451ff870(void)

{
  return;
}



// FUNCTION 1451ffa00 FUN_1451ffa00 body=781 status=ok
// SIG undefined FUN_1451ffa00(void)

int FUN_1451ffa00(byte *param_1,longlong param_2,float param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  longlong lVar8;
  double dVar9;
  float fVar10;
  
  uVar3 = 0;
  fVar10 = (param_3 * 96.0) / 72.0;
  uVar6 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar6 != 0) {
    pbVar7 = param_1 + 8;
    do {
      pbVar2 = &DAT_149a1f1a0;
      if (pbVar7 <= pbVar7 + (ulonglong)uVar3 * 8) {
        pbVar2 = pbVar7 + (ulonglong)uVar3 * 8;
      }
      if ((float)(int)((((uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) * 0x100 + (uint)pbVar2[2]) * 0x100
                      + (uint)pbVar2[3]) * 1.5258789e-05 == 0.0) {
        pbVar2 = pbVar7 + (ulonglong)uVar3 * 8;
        if (pbVar2 < pbVar7) {
          pbVar2 = &DAT_149a1f1a0;
        }
        else if (pbVar2 == (byte *)0x0) {
          return 0;
        }
        uVar3 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
        if (uVar3 == 0) {
          return 0;
        }
        if (uVar3 == 1) {
          param_2 = (ulonglong)pbVar2[6] * 0x100 + param_2;
          return (int)(short)((ushort)*(byte *)((ulonglong)pbVar2[7] + 1 + param_2) +
                             (ushort)*(byte *)((ulonglong)pbVar2[7] + param_2) * 0x100);
        }
        uVar5 = 0;
        lVar8 = (ulonglong)param_1[7] +
                ((ulonglong)param_1[6] + (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100
                + param_2;
        if (uVar3 - 1 < 4) goto LAB_1451ffc79;
        uVar6 = 2;
        goto LAB_1451ffb55;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  return 0;
  while( true ) {
    if (uVar6 < uVar3) {
      pbVar7 = (byte *)(lVar8 + (ulonglong)uVar6 * 4);
    }
    else {
      pbVar7 = &DAT_149a1f1a0;
    }
    if (fVar10 <= (float)(int)((((uint)*pbVar7 * 0x100 + (uint)pbVar7[1]) * 0x100 + (uint)pbVar7[2])
                               * 0x100 + (uint)pbVar7[3]) * 1.5258789e-05) {
      uVar5 = (ulonglong)(uVar4 + 2);
      goto LAB_1451ffcda;
    }
    pbVar7 = &DAT_149a1f1a0;
    if (uVar6 + 1 < uVar3) {
      pbVar7 = (byte *)(lVar8 + (ulonglong)(uVar6 + 1) * 4);
    }
    if (fVar10 <= (float)(int)((((uint)*pbVar7 * 0x100 + (uint)pbVar7[1]) * 0x100 + (uint)pbVar7[2])
                               * 0x100 + (uint)pbVar7[3]) * 1.5258789e-05) {
      uVar5 = (ulonglong)(uVar4 + 3);
      goto LAB_1451ffcda;
    }
    uVar5 = (ulonglong)(uVar4 + 4);
    uVar6 = uVar6 + 4;
    if (uVar3 - 4 <= uVar4 + 4) break;
LAB_1451ffb55:
    uVar4 = (uint)uVar5;
    if (uVar4 < uVar3) {
      pbVar7 = (byte *)(lVar8 + uVar5 * 4);
    }
    else {
      pbVar7 = &DAT_149a1f1a0;
    }
    if (fVar10 <= (float)(int)((((uint)*pbVar7 * 0x100 + (uint)pbVar7[1]) * 0x100 + (uint)pbVar7[2])
                               * 0x100 + (uint)pbVar7[3]) * 1.5258789e-05) goto LAB_1451ffcda;
    pbVar7 = &DAT_149a1f1a0;
    if (uVar6 - 1 < uVar3) {
      pbVar7 = (byte *)(lVar8 + (ulonglong)(uVar6 - 1) * 4);
    }
    if (fVar10 <= (float)(int)((((uint)*pbVar7 * 0x100 + (uint)pbVar7[1]) * 0x100 + (uint)pbVar7[2])
                               * 0x100 + (uint)pbVar7[3]) * 1.5258789e-05) {
      uVar5 = (ulonglong)(uVar4 + 1);
      goto LAB_1451ffcda;
    }
  }
LAB_1451ffc79:
  uVar6 = (uint)uVar5;
  while (uVar6 < uVar3 - 1) {
    if ((uint)uVar5 < uVar3) {
      pbVar7 = (byte *)(lVar8 + uVar5 * 4);
    }
    else {
      pbVar7 = &DAT_149a1f1a0;
    }
    if (fVar10 <= (float)(int)((((uint)*pbVar7 * 0x100 + (uint)pbVar7[1]) * 0x100 + (uint)pbVar7[2])
                               * 0x100 + (uint)pbVar7[3]) * 1.5258789e-05) break;
    uVar6 = (uint)uVar5 + 1;
    uVar5 = (ulonglong)uVar6;
  }
LAB_1451ffcda:
  iVar1 = (int)uVar5 + -1;
  if ((int)uVar5 == 0) {
    iVar1 = 0;
  }
  fVar10 = (float)FUN_1451ff870(param_1,iVar1,fVar10,pbVar2,param_2);
  dVar9 = (double)round((double)fVar10);
  return (int)dVar9;
}



// FUNCTION 1451ffd10 FUN_1451ffd10 body=148 status=ok
// SIG undefined FUN_1451ffd10(void)

undefined8 FUN_1451ffd10(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,8);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451ffe30(param_1 + 4,param_2,param_3,*(undefined2 *)(param_1 + 2));
    if (cVar1 != '\0') {
      cVar1 = FUN_1451ffed0(param_1 + 8,param_2,(uint)*param_1 * 0x100 + (uint)param_1[1],param_3,
                            *(undefined2 *)(param_1 + 2));
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451ffdb0 FUN_1451ffdb0 body=128 status=ok
// SIG undefined FUN_1451ffdb0(void)

bool FUN_1451ffdb0(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451ffe30 FUN_1451ffe30 body=152 status=ok
// SIG undefined FUN_1451ffe30(void)

undefined8 FUN_1451ffe30(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  char cVar1;
  byte local_res20;
  byte bStackX_21;
  
  cVar1 = FUN_1451ffdb0();
  if (cVar1 != '\0') {
    bStackX_21 = (byte)((ushort)param_4 >> 8);
    local_res20 = (byte)param_4;
    cVar1 = FUN_144e2c5c0(param_2,(ulonglong)(byte)param_1[3] +
                                  ((ulonglong)(byte)param_1[2] +
                                  (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) * 0x100 +
                                  param_3,((uint)local_res20 * 0x100 + (uint)bStackX_21) * 4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451ffed0 FUN_1451ffed0 body=390 status=ok
// SIG undefined FUN_1451ffed0(void)

undefined8
FUN_1451ffed0(longlong param_1,int *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar6;
  
  if ((0x1ffffffe < param_3) || (cVar3 = FUN_144e2c5c0(param_2,param_1,param_3 * 8), cVar3 == '\0'))
  {
    return 0;
  }
  uVar6 = 0;
  if (param_3 != 0) {
    do {
      uVar8 = (ulonglong)((uint)(byte)param_5 * 0x100 + (uint)param_5._1_1_);
      uVar7 = param_1 + uVar6 * 8;
      if ((((uVar7 < *(ulonglong *)(param_2 + 2)) || (*(ulonglong *)(param_2 + 4) < uVar7)) ||
          ((uint)(param_2[4] - (int)uVar7) < 8)) ||
         (iVar1 = param_2[6], param_2[6] = iVar1 + -1, iVar1 < 1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pcVar4 = "OUT-OF-RANGE";
      if (bVar2) {
        pcVar4 = "OK";
      }
      FUN_1451f9f30("SANITIZE",uVar7,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",uVar7,uVar7 + 8,8,
                    *(ulonglong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
      if ((!bVar2) ||
         (cVar3 = FUN_1451ff7d0(uVar7 + 6,param_2,param_4,uVar8 & 0xffffffff), cVar3 == '\0')) {
        return 0;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < param_3);
  }
  return 1;
}



// FUNCTION 145200060 FUN_145200060 body=814 status=ok
// SIG undefined FUN_145200060(void)

undefined8 FUN_145200060(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  double dVar13;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(*param_2 + 0xb4);
  if (*(float *)(param_2[1] + 0x30) <= 0.0) {
    return 0;
  }
  lVar4 = param_2[3];
  uVar11 = 0;
  if ((*(uint *)(lVar4 + 0x38) & 0xfffffffe) == 4) {
    if ((ushort)((ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7)) == 0) {
      puVar7 = &DAT_149a1f1a0;
    }
    else {
      puVar7 = (undefined1 *)
               ((ulonglong)*(byte *)(param_1 + 6) * 0x100 + param_1 +
               (ulonglong)*(byte *)(param_1 + 7));
    }
    iVar5 = FUN_1451ffa00(puVar7);
    iVar3 = *(int *)(param_2[1] + 0x20);
    uVar6 = *(uint *)(*(longlong *)(param_2[1] + 0x18) + 0x2c);
    if (uVar6 == 0) {
      uVar6 = FUN_144e2c980();
    }
    dVar13 = (double)round((double)(((float)(iVar5 / 2) * (float)iVar3) / (float)uVar6));
    iVar3 = *(int *)(param_2[1] + 0x20);
    uVar6 = *(uint *)(*(longlong *)(param_2[1] + 0x18) + 0x2c);
    if (uVar6 == 0) {
      uVar6 = FUN_144e2c980();
    }
    round((double)(((float)iVar3 * (float)iVar5) / (float)uVar6));
    uVar6 = *(uint *)(lVar4 + 0x60);
    if (uVar6 != 0) {
      lVar12 = *(longlong *)(lVar4 + 0x70);
      uVar9 = uVar11;
      do {
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        if (uVar6 <= uVar8) break;
      } while (*(char *)(lVar12 + 0x10 + uVar9 * 0x14) < '\0');
      if (uVar6 != 0) {
        do {
          uVar10 = uVar9;
          if ((*(uint *)(lVar12 + 4 + uVar11 * 0x14) & uVar2) != 0) {
            piVar1 = (int *)(*(longlong *)(lVar4 + 0x80) + uVar11 * 0x14);
            *piVar1 = *piVar1 + (int)extraout_XMM0_Qa;
            piVar1 = (int *)(*(longlong *)(lVar4 + 0x80) + 8 + uVar11 * 0x14);
            *piVar1 = *piVar1 + (int)dVar13;
          }
          lVar12 = *(longlong *)(lVar4 + 0x70);
          uVar9 = uVar10;
          do {
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            if (*(uint *)(lVar4 + 0x60) <= uVar8) break;
          } while (*(char *)(lVar12 + 0x10 + uVar9 * 0x14) < '\0');
          uVar11 = uVar10;
        } while ((uint)uVar10 < uVar6);
      }
    }
  }
  else {
    if ((ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) == 0) {
      puVar7 = &DAT_149a1f1a0;
    }
    else {
      puVar7 = (undefined1 *)
               ((ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1 +
               (ulonglong)*(byte *)(param_1 + 9));
    }
    iVar5 = FUN_1451ffa00(puVar7);
    iVar3 = *(int *)(param_2[1] + 0x24);
    uVar6 = *(uint *)(*(longlong *)(param_2[1] + 0x18) + 0x2c);
    if (uVar6 == 0) {
      uVar6 = FUN_144e2c980();
    }
    dVar13 = (double)round((double)(((float)(iVar5 / 2) * (float)iVar3) / (float)uVar6));
    iVar3 = *(int *)(param_2[1] + 0x24);
    uVar6 = *(uint *)(*(longlong *)(param_2[1] + 0x18) + 0x2c);
    if (uVar6 == 0) {
      uVar6 = FUN_144e2c980();
    }
    round((double)(((float)iVar3 * (float)iVar5) / (float)uVar6));
    uVar6 = *(uint *)(lVar4 + 0x60);
    if (uVar6 != 0) {
      lVar12 = *(longlong *)(lVar4 + 0x70);
      uVar9 = uVar11;
      do {
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        if (uVar6 <= uVar8) break;
      } while (*(char *)(lVar12 + 0x10 + uVar9 * 0x14) < '\0');
      if (uVar6 != 0) {
        do {
          uVar10 = uVar9;
          if ((*(uint *)(lVar12 + 4 + uVar11 * 0x14) & uVar2) != 0) {
            piVar1 = (int *)(*(longlong *)(lVar4 + 0x80) + 4 + uVar11 * 0x14);
            *piVar1 = *piVar1 + (int)extraout_XMM0_Qa_00;
            piVar1 = (int *)(*(longlong *)(lVar4 + 0x80) + 0xc + uVar11 * 0x14);
            *piVar1 = *piVar1 + (int)dVar13;
          }
          lVar12 = *(longlong *)(lVar4 + 0x70);
          uVar9 = uVar10;
          do {
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            if (*(uint *)(lVar4 + 0x60) <= uVar8) break;
          } while (*(char *)(lVar12 + 0x10 + uVar9 * 0x14) < '\0');
          uVar11 = uVar10;
        } while ((uint)uVar10 < uVar6);
      }
    }
  }
  return 1;
}



// FUNCTION 145200390 FUN_145200390 body=234 status=ok
// SIG undefined FUN_145200390(void)

undefined8 FUN_145200390(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0xc);
  if (((cVar1 != '\0') && ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1)) &&
     (cVar1 = FUN_145200480(param_1 + 6,param_2,param_1), cVar1 != '\0')) {
    if (((ushort)((ushort)param_1[6] * 0x100 + (ushort)param_1[7]) != 0) &&
       (cVar1 = FUN_1451ffd10(param_1 + (ulonglong)param_1[7] + (ulonglong)param_1[6] * 0x100,
                              param_2,param_1), cVar1 == '\0')) {
      cVar1 = FUN_144e2d280(param_2,param_1 + 6,2);
      if (cVar1 == '\0') {
        return 0;
      }
      param_1[6] = 0;
      param_1[7] = 0;
    }
    cVar1 = FUN_145200520(param_1 + 8,param_2,param_1,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145200480 FUN_145200480 body=151 status=ok
// SIG undefined FUN_145200480(void)

bool FUN_145200480(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 145200520 FUN_145200520 body=151 status=ok
// SIG undefined FUN_145200520(void)

undefined8 FUN_145200520(byte *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_145200480();
  if (cVar1 == '\0') {
LAB_1452005a0:
    uVar2 = 0;
  }
  else {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) {
      cVar1 = FUN_1451ffd10((ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],param_2,
                            param_4);
      if (cVar1 == '\0') {
        cVar1 = FUN_144e2d280(param_2,param_1,2);
        if (cVar1 == '\0') goto LAB_1452005a0;
        param_1[0] = 0;
        param_1[1] = 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1452005d0 FUN_1452005d0 body=85 status=ok
// SIG undefined FUN_1452005d0(void)

undefined8 FUN_1452005d0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 3) == 0) {
    uVar2 = FUN_1451ee460(param_1 + 8,param_2,0);
    return uVar2;
  }
  uVar1 = (uint)*(byte *)(param_1 + 3);
  if (uVar1 == 1) {
    uVar2 = FUN_1451fcff0(param_1 + 8);
    return uVar2;
  }
  if (uVar1 == 2) {
    uVar2 = FUN_1451fd4f0(param_1 + 8);
    return uVar2;
  }
  if (uVar1 != 4) {
    if (uVar1 - 5 != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 - 5 >> 8),1);
    }
    uVar2 = FUN_145200d00(param_2,param_1 + 8);
    return uVar2;
  }
  uVar2 = FUN_1451f1950(param_1 + 8);
  return uVar2;
}



// FUNCTION 145200630 FUN_145200630 body=141 status=ok
// SIG undefined FUN_145200630(void)

undefined1 FUN_145200630(longlong param_1,longlong param_2)

{
  longlong local_48;
  undefined8 local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  undefined1 local_20;
  undefined4 local_1c;
  longlong local_18;
  longlong local_10;
  
  local_30[0] = 0;
  local_10 = (ulonglong)*(byte *)(param_1 + 0x13) +
             ((ulonglong)*(byte *)(param_1 + 0x12) +
             (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)) *
             0x100) * 0x100 + param_1;
  local_20 = 0;
  local_40 = *(undefined8 *)(param_2 + 0x18);
  local_1c = 0;
  local_38 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x30);
  local_48 = param_1;
  local_28 = param_2;
  local_18 = param_1;
  if (local_38 == -1) {
    local_38 = FUN_144e2c9d0();
  }
  FUN_1452027c0(&local_48,local_30);
  return local_30[0];
}



// FUNCTION 1452006c0 FUN_1452006c0 body=269 status=ok
// SIG undefined FUN_1452006c0(void)

void FUN_1452006c0(longlong param_1,longlong param_2)

{
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 local_170;
  int local_168;
  undefined1 local_158 [8];
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined4 local_128;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_158[0] = 0;
  local_128 = 0;
  local_140 = (ulonglong)*(byte *)(param_1 + 0x13) +
              ((ulonglong)*(byte *)(param_1 + 0x12) +
              (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)) *
              0x100) * 0x100 + param_1;
  local_138 = (ulonglong)*(byte *)(param_1 + 0x17) +
              ((ulonglong)*(byte *)(param_1 + 0x16) +
              (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15)) *
              0x100) * 0x100 + param_1;
  local_130 = (ulonglong)*(byte *)(param_1 + 0x1b) +
              ((ulonglong)*(byte *)(param_1 + 0x1a) +
              (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)) *
              0x100) * 0x100 + param_1;
  local_170 = *(undefined8 *)(param_2 + 0x18);
  local_168 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x30);
  local_178 = param_1;
  local_150 = param_2;
  local_148 = param_1;
  if (local_168 == -1) {
    local_168 = FUN_144e2c9d0();
  }
  FUN_145202120(&local_178,local_158);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_198);
}



// FUNCTION 1452007e0 FUN_1452007e0 body=156 status=ok
// SIG undefined FUN_1452007e0(void)

undefined8 FUN_1452007e0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x30);
  if (iVar2 == -1) {
    iVar2 = FUN_144e2c9d0();
  }
  uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0x60);
  piVar4 = *(int **)(*(longlong *)(param_2 + 0x18) + 0x70);
  if (uVar1 != 0) {
    uVar6 = (ulonglong)uVar1;
    do {
      pbVar3 = (byte *)FUN_1451fbab0(param_1,*piVar4,iVar2);
      if (pbVar3 != (byte *)0x0) {
        uVar5 = 1;
        *piVar4 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
      }
      piVar4 = piVar4 + 5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return uVar5;
}



// FUNCTION 145200880 FUN_145200880 body=131 status=ok
// SIG undefined FUN_145200880(void)

undefined1 FUN_145200880(longlong param_1,longlong param_2)

{
  longlong local_48;
  undefined8 local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  undefined4 local_20;
  longlong local_18;
  
  local_30[0] = 0;
  local_20 = 0;
  local_18 = (ulonglong)*(byte *)(param_1 + 0x13) +
             ((ulonglong)*(byte *)(param_1 + 0x12) +
             (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)) *
             0x100) * 0x100 + param_1;
  local_40 = *(undefined8 *)(param_2 + 0x18);
  local_38 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x30);
  local_48 = param_1;
  local_28 = param_2;
  if (local_38 == -1) {
    local_38 = FUN_144e2c9d0();
  }
  FUN_1452018e0(&local_48,local_30);
  return local_30[0];
}



// FUNCTION 145200910 FUN_145200910 body=200 status=ok
// SIG undefined FUN_145200910(void)

byte * FUN_145200910(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  iVar6 = 0;
  bVar3 = FUN_1451fb580();
  iVar8 = (((uint)param_1[2] * 0x100 + (uint)param_1[3]) - (uint)bVar3) + -1;
  if (-1 < iVar8) {
    do {
      uVar7 = (uint)(iVar8 + iVar6) >> 1;
      uVar4 = uVar7 * ((uint)bVar1 * 0x100 + (uint)bVar2);
      uVar5 = (uint)(ushort)((ushort)param_1[(ulonglong)uVar4 + 10] * 0x100 +
                            (ushort)param_1[(ulonglong)uVar4 + 0xb]);
      if (*param_2 < uVar5) {
        iVar8 = uVar7 - 1;
      }
      else {
        if (*param_2 == uVar5) {
          return param_1 + (ulonglong)uVar4 + 10;
        }
        iVar6 = uVar7 + 1;
      }
    } while (iVar6 <= iVar8);
  }
  return (byte *)0x0;
}



// FUNCTION 1452009e0 FUN_1452009e0 body=189 status=ok
// SIG undefined FUN_1452009e0(void)

byte * FUN_1452009e0(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  iVar5 = 0;
  bVar3 = FUN_1451fb430();
  iVar7 = (((uint)param_1[2] * 0x100 + (uint)param_1[3]) - (uint)bVar3) + -1;
  if (-1 < iVar7) {
    do {
      uVar4 = (uint)(iVar7 + iVar5) >> 1;
      uVar6 = uVar4 * ((uint)bVar1 * 0x100 + (uint)bVar2);
      if (*param_2 <
          (uint)param_1[(ulonglong)uVar6 + 0xc] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xd]) {
        iVar7 = uVar4 - 1;
      }
      else {
        if (*param_2 <=
            (uint)param_1[(ulonglong)uVar6 + 10] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xb]) {
          return param_1 + (ulonglong)uVar6 + 10;
        }
        iVar5 = uVar4 + 1;
      }
    } while (iVar5 <= iVar7);
  }
  return (byte *)0x0;
}



// FUNCTION 145200aa0 FUN_145200aa0 body=189 status=ok
// SIG undefined FUN_145200aa0(void)

byte * FUN_145200aa0(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  iVar5 = 0;
  bVar3 = FUN_1451faff0();
  iVar7 = (((uint)param_1[2] * 0x100 + (uint)param_1[3]) - (uint)bVar3) + -1;
  if (-1 < iVar7) {
    do {
      uVar4 = (uint)(iVar7 + iVar5) >> 1;
      uVar6 = uVar4 * ((uint)bVar1 * 0x100 + (uint)bVar2);
      if (*param_2 <
          (uint)param_1[(ulonglong)uVar6 + 0xc] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xd]) {
        iVar7 = uVar4 - 1;
      }
      else {
        if (*param_2 <=
            (uint)param_1[(ulonglong)uVar6 + 10] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xb]) {
          return param_1 + (ulonglong)uVar6 + 10;
        }
        iVar5 = uVar4 + 1;
      }
    } while (iVar5 <= iVar7);
  }
  return (byte *)0x0;
}



// FUNCTION 145200b60 FUN_145200b60 body=119 status=ok
// SIG undefined FUN_145200b60(void)

longlong FUN_145200b60(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 7);
  if (*(byte *)(param_1 + 7) == 0) {
    lVar2 = FUN_145200d60(param_2,param_1 + 0xc);
    return lVar2;
  }
  if (uVar1 == 1) {
    lVar2 = FUN_145200630(param_1 + 0xc);
    return lVar2;
  }
  if (uVar1 == 2) {
    lVar2 = FUN_1452006c0(param_1 + 0xc);
    return lVar2;
  }
  if (uVar1 != 4) {
    if (uVar1 - 5 != 0) {
      return (ulonglong)(uint3)(uVar1 - 5 >> 8) << 8;
    }
    lVar2 = FUN_145200880(param_1 + 0xc);
    return lVar2;
  }
  lVar2 = FUN_1452007e0(param_1 + 0xc);
  return lVar2;
}



// FUNCTION 145200be0 FUN_145200be0 body=76 status=ok
// SIG undefined FUN_145200be0(void)

undefined1 FUN_145200be0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_1,param_2,0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451fe030(param_2 + 0xc,param_1,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145200c30 FUN_145200c30 body=76 status=ok
// SIG undefined FUN_145200c30(void)

undefined1 FUN_145200c30(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_1,param_2,0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451fe7a0(param_2 + 0xc,param_1,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145200c80 FUN_145200c80 body=113 status=ok
// SIG undefined FUN_145200c80(void)

void FUN_145200c80(longlong param_1,undefined1 *param_2)

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



// FUNCTION 145200d00 FUN_145200d00 body=96 status=ok
// SIG undefined FUN_145200d00(void)

ulonglong FUN_145200d00(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_144e2c5c0(param_1,param_2,0x14);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_1451fd6a0(param_2,param_1,0);
    if (((char)uVar1 != '\0') &&
       (uVar1 = 0,
       (ushort)((ushort)*(byte *)(param_2 + 8) * 0x100 + (ushort)*(byte *)(param_2 + 9)) != 0)) {
      return 1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 145200d60 FUN_145200d60 body=80 status=ok
// SIG undefined FUN_145200d60(void)

undefined1 FUN_145200d60(longlong param_1,undefined8 param_2)

{
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  
  local_34 = 0;
  local_20 = *(undefined8 *)(param_1 + 0x18);
  local_18 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x30);
  local_38[0] = 0;
  local_28 = param_2;
  if (local_18 == -1) {
    local_18 = FUN_144e2c9d0(*(longlong *)(param_1 + 0x10));
  }
  FUN_145202f00(&local_28,local_38);
  return local_38[0];
}



// FUNCTION 145200db0 FUN_145200db0 body=80 status=ok
// SIG undefined FUN_145200db0(void)

undefined1 FUN_145200db0(longlong param_1,undefined8 param_2)

{
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  
  local_34 = 0;
  local_20 = *(undefined8 *)(param_1 + 0x18);
  local_18 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x30);
  local_38[0] = 0;
  local_28 = param_2;
  if (local_18 == -1) {
    local_18 = FUN_144e2c9d0(*(longlong *)(param_1 + 0x10));
  }
  FUN_1452061b0(&local_28,local_38);
  return local_38[0];
}



// FUNCTION 145200e00 FUN_145200e00 body=356 status=ok
// SIG undefined FUN_145200e00(void)

undefined1 FUN_145200e00(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  cVar1 = FUN_1451fb4e0();
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = FUN_1451fb430(param_1);
  uVar6 = 0;
  uVar5 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
  if (uVar5 != bVar2) {
    do {
      if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 0) {
LAB_145200eef:
        iVar4 = 0;
      }
      else {
        uVar7 = 0;
        pbVar3 = param_1 + (ulonglong)
                           ((uint)CONCAT11(*param_1,param_1[1]) *
                           ((param_1[3] - 1) + (uint)param_1[2] * 0x100)) + 10;
        do {
          if ((ushort)((ushort)pbVar3[1] + (ushort)*pbVar3 * 0x100) != -1) goto LAB_145200eef;
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
      cVar1 = FUN_145201530(pbVar3,param_2,param_3,param_4);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5 - bVar2);
  }
  return 1;
}



// FUNCTION 145200f70 FUN_145200f70 body=362 status=ok
// SIG undefined FUN_145200f70(void)

longlong FUN_145200f70(undefined4 *param_1,longlong param_2)

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
    FUN_1451f9f30("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_145200390(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_145201090;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_145201090;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_145200390(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_145201090:
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



// FUNCTION 1452010e0 FUN_1452010e0 body=362 status=ok
// SIG undefined FUN_1452010e0(void)

longlong FUN_1452010e0(undefined4 *param_1,longlong param_2)

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
    FUN_1451f9f30("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_1451fa9c0(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_145201200;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_145201200;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_1451fa9c0(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_145201200:
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



// FUNCTION 145201250 FUN_145201250 body=362 status=ok
// SIG undefined FUN_145201250(void)

longlong FUN_145201250(undefined4 *param_1,longlong param_2)

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
    FUN_1451f9f30("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_1451ff660(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_145201370;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_145201370;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_1451ff660(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_145201370:
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



// FUNCTION 1452013c0 FUN_1452013c0 body=362 status=ok
// SIG undefined FUN_1452013c0(void)

longlong FUN_1452013c0(undefined4 *param_1,longlong param_2)

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
    FUN_1451f9f30("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_1451fc770(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_1452014e0;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_1452014e0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_1451fc770(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_1452014e0:
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



// FUNCTION 145201530 FUN_145201530 body=260 status=ok
// SIG undefined FUN_145201530(void)

undefined8 FUN_145201530(byte *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  
  cVar5 = FUN_144e2c5c0(param_2,param_1,6);
  if (cVar5 != '\0') {
    bVar1 = *param_1;
    bVar2 = param_1[1];
    if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) <=
        (ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2)) {
      bVar3 = param_1[2];
      bVar4 = param_1[3];
      cVar5 = FUN_144e2c5c0(param_2,param_1 + 4,2);
      if (((cVar5 != '\0') &&
          (cVar5 = FUN_144e2c5c0(param_2,param_3,(uint)param_1[4] * 0x100 + (uint)param_1[5]),
          cVar5 != '\0')) &&
         (cVar5 = FUN_1451fae60((ulonglong)param_1[5] + (ulonglong)param_1[4] * 0x100 + param_3,
                                param_2,(((uint)bVar1 * 0x100 + (uint)bVar2) -
                                        ((uint)bVar3 * 0x100 + (uint)bVar4)) + 1,param_4),
         cVar5 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 145201640 FUN_145201640 body=666 status=ok
// SIG undefined FUN_145201640(void)

void FUN_145201640(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  lVar6 = *(longlong *)(param_2 + 8);
  uVar17 = (uint)*(byte *)(param_3 + 2) * 0x100 + (uint)*(byte *)(param_3 + 3);
  uVar4 = *(undefined4 *)(lVar6 + 100);
  if ((ushort)((ushort)*(byte *)(param_3 + 6) * 0x100 + (ushort)*(byte *)(param_3 + 7)) != -1) {
    uVar16 = uVar17 & 0x1f;
    pbVar1 = *(byte **)(param_1 + 0x18) +
             (ulonglong)CONCAT11(*(undefined1 *)(param_3 + 6),*(undefined1 *)(param_3 + 7)) * 2;
    pbVar14 = &DAT_149a1f1a0;
    if (*(byte **)(param_1 + 0x18) <= pbVar1) {
      pbVar14 = pbVar1;
    }
    cVar11 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar14,uVar16 * 2);
    iVar15 = *(int *)(lVar6 + 100);
    if (cVar11 == '\0') {
      uVar16 = 0;
    }
    FUN_144b62270(lVar6,*(undefined4 *)(param_1 + 0x10));
    if ((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar17 >> 10 & 1) == 0)) {
      FUN_1451f9f40(lVar6);
    }
    if (uVar16 != 0) {
      uVar13 = (ulonglong)uVar16;
      do {
        FUN_1451e0a10(lVar6,(uint)pbVar14[1] + (uint)*pbVar14 * 0x100);
        pbVar14 = pbVar14 + 2;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if ((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar17 >> 10 & 1) == 0)) {
      *(uint *)(lVar6 + 0x5c) = *(uint *)(lVar6 + 0x5c) + 1;
    }
    FUN_144b62270(lVar6,iVar15 + uVar16);
    uVar12 = *(int *)(lVar6 + 0x5c) + 1;
    uVar16 = *(uint *)(lVar6 + 0x60);
    if (uVar12 < *(uint *)(lVar6 + 0x60)) {
      uVar16 = uVar12;
    }
    FUN_144b62160(lVar6,*(undefined4 *)(param_1 + 0x10),uVar16);
  }
  if (uVar17 >> 0xf != 0) {
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((ushort)((ushort)*(byte *)(param_3 + 4) * 0x100 + (ushort)*(byte *)(param_3 + 5)) != -1) {
    uVar16 = uVar17 >> 5 & 0x1f;
    pbVar1 = *(byte **)(param_1 + 0x18) +
             (ulonglong)CONCAT11(*(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5)) * 2;
    pbVar14 = &DAT_149a1f1a0;
    if (*(byte **)(param_1 + 0x18) <= pbVar1) {
      pbVar14 = pbVar1;
    }
    cVar11 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar14,uVar16 * 2);
    iVar15 = *(int *)(lVar6 + 100);
    if (cVar11 == '\0') {
      uVar16 = 0;
    }
    if (((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar17 >> 0xb & 1) == 0)) &&
       (cVar11 = FUN_144b62480(lVar6,0,1), cVar11 != '\0')) {
      uVar12 = *(uint *)(lVar6 + 0x5c);
      lVar7 = *(longlong *)(lVar6 + 0x70);
      uVar5 = *(uint *)(lVar6 + 100);
      puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar12 * 0x14);
      uVar4 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      lVar8 = *(longlong *)(lVar6 + 0x78);
      puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar5 * 0x14);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      *(undefined4 *)(lVar8 + (ulonglong)uVar5 * 0x14 + 0x10) =
           *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar12 * 0x14);
      *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
    }
    if (uVar16 != 0) {
      uVar13 = (ulonglong)uVar16;
      do {
        FUN_1451e0a10(lVar6,(uint)pbVar14[1] + (uint)*pbVar14 * 0x100);
        pbVar14 = pbVar14 + 2;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if ((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar17 >> 0xb & 1) == 0)) {
      *(uint *)(lVar6 + 0x5c) = *(uint *)(lVar6 + 0x5c) + 1;
    }
    if ((uVar17 >> 0xe & 1) == 0) {
      iVar15 = iVar15 + uVar16;
    }
    FUN_144b62270(lVar6,iVar15);
  }
  return;
}



// FUNCTION 1452018e0 FUN_1452018e0 body=1317 status=ok
// SIG undefined FUN_1452018e0(void)

void FUN_1452018e0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  
  FUN_144b61b50(param_1[1]);
  iVar19 = 0;
  *(undefined4 *)(param_1[1] + 0x5c) = 0;
  cVar13 = *(char *)(param_1[1] + 0x58);
  while (cVar13 != '\0') {
    lVar6 = param_1[1];
    uVar3 = *(uint *)(lVar6 + 0x5c);
    uVar4 = *(uint *)(lVar6 + 0x60);
    if (uVar3 < uVar4) {
      lVar7 = *param_1;
      iVar5 = *(int *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar3 * 0x14);
      if (iVar5 == 0xffff) {
        uVar15 = 2;
      }
      else {
        pbVar14 = (byte *)FUN_1451fbab0((ulonglong)*(byte *)(lVar7 + 7) +
                                        ((ulonglong)*(byte *)(lVar7 + 6) +
                                        (ulonglong)
                                        CONCAT11(*(undefined1 *)(lVar7 + 4),
                                                 *(undefined1 *)(lVar7 + 5)) * 0x100) * 0x100 +
                                        lVar7,iVar5,(int)param_1[2]);
        if (pbVar14 == (byte *)0x0) {
          uVar15 = 1;
        }
        else {
          uVar15 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
        }
      }
    }
    else {
      uVar15 = 0;
    }
    pbVar14 = (byte *)*param_1;
    uVar18 = (uint)pbVar14[1] * 0x10000 + (uint)pbVar14[2] * 0x100 + (uint)*pbVar14 * 0x1000000 +
             (uint)pbVar14[3];
    if (uVar18 <= uVar15) {
      uVar15 = 1;
    }
    uVar17 = (ulonglong)(uVar18 * iVar19 + uVar15);
    lVar7 = (ulonglong)pbVar14[0xb] +
            ((ulonglong)pbVar14[10] + (ulonglong)CONCAT11(pbVar14[8],pbVar14[9]) * 0x100) * 0x100;
    pbVar14 = pbVar14 + (ulonglong)
                        CONCAT11(pbVar14[uVar17 * 2 + lVar7],pbVar14[uVar17 * 2 + lVar7 + 1]) * 8 +
                        (ulonglong)pbVar14[0xf] +
                        ((ulonglong)pbVar14[0xe] +
                        (ulonglong)CONCAT11(pbVar14[0xc],pbVar14[0xd]) * 0x100) * 0x100;
    if (iVar19 != 0) {
      uVar15 = uVar3;
      if (*(char *)(lVar6 + 0x59) != '\0') {
        uVar15 = *(uint *)(lVar6 + 100);
      }
      if (((uVar15 != 0) && (uVar3 < uVar4)) &&
         ((((((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3] & 0x3ff) != 0 &&
            (((ushort)((ushort)pbVar14[4] * 0x100 + (ushort)pbVar14[5]) != -1 ||
             ((ushort)((ushort)pbVar14[6] * 0x100 + (ushort)pbVar14[7]) != -1)))) ||
           ((ushort)((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1]) != 0)) ||
          ((ushort)((ushort)pbVar14[3] + (ushort)pbVar14[2] * 0x100) != 0x4000)))) {
        if (*(char *)(lVar6 + 0x59) == '\0') {
          FUN_144b62160(lVar6,uVar3 - 1,uVar3 + 1);
        }
        else {
          FUN_144b62160(lVar6,*(int *)(lVar6 + 100) + -1,uVar3 + 1);
        }
      }
    }
    lVar6 = param_1[1];
    iVar5 = *(int *)(lVar6 + 0x5c);
    uVar3 = iVar5 + 2;
    if (uVar3 <= *(uint *)(lVar6 + 0x60)) {
      pbVar8 = (byte *)*param_1;
      iVar16 = (uint)pbVar8[1] * 0x10000 + (uint)pbVar8[2] * 0x100 + (uint)*pbVar8 * 0x1000000 +
               (uint)pbVar8[3];
      lVar7 = (ulonglong)pbVar8[0xb] +
              ((ulonglong)pbVar8[10] + (ulonglong)CONCAT11(pbVar8[8],pbVar8[9]) * 0x100) * 0x100;
      lVar9 = (ulonglong)pbVar8[0xf] +
              ((ulonglong)pbVar8[0xe] + (ulonglong)CONCAT11(pbVar8[0xc],pbVar8[0xd]) * 0x100) *
              0x100;
      uVar17 = (ulonglong)(iVar16 * iVar19 + (uint)(iVar16 == 0));
      uVar17 = (ulonglong)CONCAT11(pbVar8[uVar17 * 2 + lVar7],pbVar8[uVar17 * 2 + lVar7 + 1]);
      lVar7 = uVar17 * 8 + lVar9;
      if ((((ushort)pbVar8[uVar17 * 8 + lVar9 + 2] * 0x100 + (ushort)pbVar8[uVar17 * 8 + lVar9 + 3]
           & 0x3ff) != 0) &&
         ((((ushort)((ushort)pbVar8[lVar7 + 5] + (ushort)pbVar8[lVar7 + 4] * 0x100) != -1 ||
           ((ushort)((ushort)pbVar8[lVar7 + 7] + (ushort)pbVar8[lVar7 + 6] * 0x100) != -1)) &&
          (1 < uVar3 - iVar5)))) {
        FUN_144b620d0(lVar6,iVar5,uVar3);
      }
    }
    FUN_145201640(param_2,param_1,pbVar14);
    lVar6 = param_1[1];
    iVar19 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
    if (*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) break;
    if ((((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3] & 0x4000) == 0) ||
       (iVar5 = *(int *)(lVar6 + 0x30), *(int *)(lVar6 + 0x30) = iVar5 + -1, iVar5 < 1)) {
      lVar6 = param_1[1];
      if (*(char *)(lVar6 + 0x59) != '\0') {
        if ((*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) ||
           (*(int *)(lVar6 + 100) != *(int *)(lVar6 + 0x5c))) {
          cVar13 = FUN_144b62480(lVar6,1,1);
          if (cVar13 == '\0') goto LAB_145201d36;
          uVar3 = *(uint *)(lVar6 + 0x5c);
          lVar7 = *(longlong *)(lVar6 + 0x70);
          uVar4 = *(uint *)(lVar6 + 100);
          puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar3 * 0x14);
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          uVar12 = puVar1[3];
          lVar9 = *(longlong *)(lVar6 + 0x78);
          puVar2 = (undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          *(undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14 + 0x10) =
               *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar3 * 0x14);
        }
        *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
      }
      *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
    }
LAB_145201d36:
    cVar13 = *(char *)(param_1[1] + 0x58);
  }
  cVar13 = *(char *)(param_1[1] + 0x58);
  do {
    if ((cVar13 == '\0') || (lVar6 = param_1[1], *(uint *)(lVar6 + 0x60) <= *(uint *)(lVar6 + 0x5c))
       ) {
      FUN_144b61af0(param_1[1]);
      return;
    }
    if (*(char *)(lVar6 + 0x59) == '\0') {
LAB_145201de4:
      *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
    }
    else {
      if ((*(longlong *)(lVar6 + 0x78) == *(longlong *)(lVar6 + 0x70)) &&
         (*(int *)(lVar6 + 100) == *(int *)(lVar6 + 0x5c))) {
LAB_145201de1:
        *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
        goto LAB_145201de4;
      }
      cVar13 = FUN_144b62480(lVar6,1,1);
      if (cVar13 != '\0') {
        uVar3 = *(uint *)(lVar6 + 0x5c);
        lVar7 = *(longlong *)(lVar6 + 0x70);
        uVar4 = *(uint *)(lVar6 + 100);
        puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar3 * 0x14);
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar12 = puVar1[3];
        lVar9 = *(longlong *)(lVar6 + 0x78);
        puVar2 = (undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        *(undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14 + 0x10) =
             *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar3 * 0x14);
        goto LAB_145201de1;
      }
    }
    cVar13 = *(char *)(param_1[1] + 0x58);
  } while( true );
}



// FUNCTION 145201e10 FUN_145201e10 body=783 status=ok
// SIG undefined FUN_145201e10(void)

void FUN_145201e10(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  uint uVar21;
  
  lVar8 = *(longlong *)(param_2 + 8);
  if ((short)((ushort)*(byte *)(param_3 + 2) * 0x100 + (ushort)*(byte *)(param_3 + 3)) < 0) {
    if ((*(int *)(param_1 + 0x30) != 0) &&
       (uVar17 = *(int *)(param_1 + 0x30) - 1,
       *(int *)(param_1 + 0x34 + (ulonglong)(uVar17 & 0x3f) * 4) == *(int *)(lVar8 + 100))) {
      *(uint *)(param_1 + 0x30) = uVar17;
    }
    *(undefined4 *)(param_1 + 0x34 + (ulonglong)(*(uint *)(param_1 + 0x30) & 0x3f) * 4) =
         *(undefined4 *)(lVar8 + 100);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  if (((ushort)((ushort)*(byte *)(param_3 + 2) * 0x100 + (ushort)*(byte *)(param_3 + 3)) >> 0xd & 1)
      != 0) {
    uVar5 = *(undefined4 *)(lVar8 + 100);
    uVar17 = *(uint *)(param_1 + 0x30);
    if ((uVar17 != 0) && (*(uint *)(lVar8 + 0x5c) < *(uint *)(lVar8 + 0x60))) {
      puVar1 = *(undefined1 **)(param_1 + 0x18) +
               (ulonglong)CONCAT11(*(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5)) * 4;
      puVar19 = &DAT_149a1f1a0;
      if (*(undefined1 **)(param_1 + 0x18) <= puVar1) {
        puVar19 = puVar1;
      }
      uVar18 = 0;
      pbVar20 = puVar19 + 2;
      do {
        if (uVar17 == 0) {
          *(undefined4 *)(param_1 + 0x30) = 0;
          break;
        }
        uVar17 = uVar17 - 1;
        FUN_144b62270(lVar8,*(undefined4 *)(param_1 + 0x34 + (ulonglong)(uVar17 & 0x3f) * 4));
        cVar14 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar20 + -2,4);
        if (cVar14 == '\0') break;
        uVar21 = (uint)pbVar20[-1] * 0x10000 + (uint)pbVar20[-2] * 0x1000000 +
                 (uint)*pbVar20 * 0x100 + (uint)pbVar20[1];
        uVar15 = uVar21 & 0x3fffffff | 0xc0000000;
        if ((uVar21 & 0x20000000) == 0) {
          uVar15 = uVar21 & 0x3fffffff;
        }
        pbVar2 = *(byte **)(param_1 + 0x20) +
                 (ulonglong)
                 (uVar15 + *(int *)(*(longlong *)(lVar8 + 0x70) +
                                   (ulonglong)*(uint *)(lVar8 + 0x5c) * 0x14)) * 2;
        pbVar16 = &DAT_149a1f1a0;
        if (*(byte **)(param_1 + 0x20) <= pbVar2) {
          pbVar16 = pbVar2;
        }
        cVar14 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar16,2);
        if (cVar14 == '\0') break;
        uVar18 = (ulonglong)((int)uVar18 + (uint)pbVar16[1] + (uint)*pbVar16 * 0x100);
        if ((uVar21 & 0xc0000000) != 0) {
          pbVar2 = *(byte **)(param_1 + 0x28) + uVar18 * 2;
          pbVar16 = &DAT_149a1f1a0;
          if (*(byte **)(param_1 + 0x28) <= pbVar2) {
            pbVar16 = pbVar2;
          }
          cVar14 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar16,2);
          if (cVar14 == '\0') break;
          FUN_1451e0990(lVar8,(uint)*pbVar16 * 0x100 + (uint)pbVar16[1]);
          uVar15 = *(int *)(param_1 + 0x30) - 1;
          iVar6 = *(int *)(param_1 + 0x34 + (ulonglong)(uVar15 & 0x3f) * 4);
          while (uVar17 < uVar15) {
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
            FUN_144b62270(lVar8,*(undefined4 *)
                                 (param_1 + 0x34 + (ulonglong)(*(uint *)(param_1 + 0x30) & 0x3f) * 4
                                 ));
            if ((*(longlong *)(lVar8 + 0x78) == *(longlong *)(lVar8 + 0x70)) &&
               (*(int *)(lVar8 + 100) == *(int *)(lVar8 + 0x5c))) {
LAB_145202097:
              *(undefined4 *)
               (*(longlong *)(lVar8 + 0x78) + (ulonglong)*(uint *)(lVar8 + 100) * 0x14) = 0xffff;
              *(int *)(lVar8 + 0x5c) = *(int *)(lVar8 + 0x5c) + 1;
              *(int *)(lVar8 + 100) = *(int *)(lVar8 + 100) + 1;
            }
            else {
              cVar14 = FUN_144b62480(lVar8,1,1);
              if (cVar14 != '\0') {
                uVar15 = *(uint *)(lVar8 + 0x5c);
                lVar9 = *(longlong *)(lVar8 + 0x70);
                uVar7 = *(uint *)(lVar8 + 100);
                puVar3 = (undefined4 *)(lVar9 + (ulonglong)uVar15 * 0x14);
                uVar11 = puVar3[1];
                uVar12 = puVar3[2];
                uVar13 = puVar3[3];
                lVar10 = *(longlong *)(lVar8 + 0x78);
                puVar4 = (undefined4 *)(lVar10 + (ulonglong)uVar7 * 0x14);
                *puVar4 = *puVar3;
                puVar4[1] = uVar11;
                puVar4[2] = uVar12;
                puVar4[3] = uVar13;
                *(undefined4 *)(lVar10 + (ulonglong)uVar7 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar9 + 0x10 + (ulonglong)uVar15 * 0x14);
                goto LAB_145202097;
              }
            }
            uVar15 = *(int *)(param_1 + 0x30) - 1;
          }
          FUN_144b62270(lVar8,iVar6 + 1);
          FUN_144b61e90(lVar8,*(undefined4 *)(param_1 + (ulonglong)(uVar17 & 0x3f) * 4 + 0x34),
                        *(undefined4 *)(lVar8 + 100));
        }
        pbVar20 = pbVar20 + 4;
      } while (-1 < (int)uVar21);
      FUN_144b62270(lVar8,uVar5);
    }
  }
  return;
}



// FUNCTION 145202120 FUN_145202120 body=1171 status=ok
// SIG undefined FUN_145202120(void)

void FUN_145202120(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  byte *pbVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  
  FUN_144b61b50(param_1[1]);
  iVar19 = 0;
  *(undefined4 *)(param_1[1] + 0x5c) = 0;
  cVar13 = *(char *)(param_1[1] + 0x58);
  while (cVar13 != '\0') {
    lVar6 = param_1[1];
    uVar3 = *(uint *)(lVar6 + 0x5c);
    uVar4 = *(uint *)(lVar6 + 0x60);
    if (uVar3 < uVar4) {
      lVar7 = *param_1;
      iVar5 = *(int *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar3 * 0x14);
      if (iVar5 == 0xffff) {
        uVar16 = 2;
      }
      else {
        pbVar14 = (byte *)FUN_1451fbab0((ulonglong)*(byte *)(lVar7 + 7) +
                                        ((ulonglong)*(byte *)(lVar7 + 6) +
                                        (ulonglong)
                                        CONCAT11(*(undefined1 *)(lVar7 + 4),
                                                 *(undefined1 *)(lVar7 + 5)) * 0x100) * 0x100 +
                                        lVar7,iVar5,(int)param_1[2]);
        if (pbVar14 == (byte *)0x0) {
          uVar16 = 1;
        }
        else {
          uVar16 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
        }
      }
    }
    else {
      uVar16 = 0;
    }
    pbVar14 = (byte *)*param_1;
    uVar17 = (uint)pbVar14[1] * 0x10000 + (uint)pbVar14[2] * 0x100 + (uint)*pbVar14 * 0x1000000 +
             (uint)pbVar14[3];
    if (uVar17 <= uVar16) {
      uVar16 = 1;
    }
    uVar15 = (ulonglong)(uVar17 * iVar19 + uVar16);
    lVar7 = (ulonglong)pbVar14[0xb] +
            ((ulonglong)pbVar14[10] + (ulonglong)CONCAT11(pbVar14[8],pbVar14[9]) * 0x100) * 0x100;
    pbVar14 = pbVar14 + (ulonglong)
                        CONCAT11(pbVar14[uVar15 * 2 + lVar7],pbVar14[uVar15 * 2 + lVar7 + 1]) * 6 +
                        (ulonglong)pbVar14[0xf] +
                        ((ulonglong)pbVar14[0xe] +
                        (ulonglong)CONCAT11(pbVar14[0xc],pbVar14[0xd]) * 0x100) * 0x100;
    if (iVar19 != 0) {
      uVar16 = uVar3;
      if (*(char *)(lVar6 + 0x59) != '\0') {
        uVar16 = *(uint *)(lVar6 + 100);
      }
      if (((uVar16 != 0) && (uVar3 < uVar4)) &&
         ((((byte)((ushort)((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3]) >> 0xd) & 1) != 0 ||
          (((ushort)((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1]) != 0 ||
           ((ushort)((ushort)pbVar14[3] + (ushort)pbVar14[2] * 0x100) != 0x4000)))))) {
        if (*(char *)(lVar6 + 0x59) == '\0') {
          FUN_144b62160(lVar6,uVar3 - 1,uVar3 + 1);
        }
        else {
          FUN_144b62160(lVar6,*(int *)(lVar6 + 100) + -1,uVar3 + 1);
        }
      }
    }
    lVar6 = param_1[1];
    iVar5 = *(int *)(lVar6 + 0x5c);
    uVar3 = iVar5 + 2;
    if (((uVar3 <= *(uint *)(lVar6 + 0x60)) &&
        (pbVar8 = (byte *)*param_1,
        iVar18 = (uint)pbVar8[1] * 0x10000 + (uint)pbVar8[2] * 0x100 + (uint)*pbVar8 * 0x1000000 +
                 (uint)pbVar8[3],
        lVar7 = (ulonglong)pbVar8[0xb] +
                ((ulonglong)pbVar8[10] + (ulonglong)CONCAT11(pbVar8[8],pbVar8[9]) * 0x100) * 0x100,
        lVar9 = (ulonglong)pbVar8[0xf] +
                ((ulonglong)pbVar8[0xe] + (ulonglong)CONCAT11(pbVar8[0xc],pbVar8[0xd]) * 0x100) *
                0x100, uVar15 = (ulonglong)((uint)(iVar18 == 0) + iVar18 * iVar19),
        ((byte)((ushort)((ushort)pbVar8[(ulonglong)
                                        CONCAT11(pbVar8[uVar15 * 2 + lVar7],
                                                 pbVar8[uVar15 * 2 + lVar7 + 1]) * 6 + lVar9 + 2] *
                         0x100 + (ushort)pbVar8[(ulonglong)
                                                CONCAT11(pbVar8[uVar15 * 2 + lVar7],
                                                         pbVar8[uVar15 * 2 + lVar7 + 1]) * 6 + lVar9
                                                + 3]) >> 0xd) & 1) != 0)) && (1 < uVar3 - iVar5)) {
      FUN_144b620d0(lVar6,iVar5,uVar3);
    }
    FUN_145201e10(param_2,param_1,pbVar14);
    lVar6 = param_1[1];
    iVar19 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
    if (*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) break;
    if ((((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3] & 0x4000) == 0) ||
       (iVar5 = *(int *)(lVar6 + 0x30), *(int *)(lVar6 + 0x30) = iVar5 + -1, iVar5 < 1)) {
      lVar6 = param_1[1];
      if (*(char *)(lVar6 + 0x59) != '\0') {
        if ((*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) ||
           (*(int *)(lVar6 + 100) != *(int *)(lVar6 + 0x5c))) {
          cVar13 = FUN_144b62480(lVar6,1,1);
          if (cVar13 == '\0') goto LAB_1452024fe;
          uVar3 = *(uint *)(lVar6 + 0x5c);
          lVar7 = *(longlong *)(lVar6 + 0x70);
          uVar4 = *(uint *)(lVar6 + 100);
          puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar3 * 0x14);
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          uVar12 = puVar1[3];
          lVar9 = *(longlong *)(lVar6 + 0x78);
          puVar2 = (undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          *(undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14 + 0x10) =
               *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar3 * 0x14);
        }
        *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
      }
      *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
    }
LAB_1452024fe:
    cVar13 = *(char *)(param_1[1] + 0x58);
  }
  cVar13 = *(char *)(param_1[1] + 0x58);
  do {
    if ((cVar13 == '\0') || (lVar6 = param_1[1], *(uint *)(lVar6 + 0x60) <= *(uint *)(lVar6 + 0x5c))
       ) {
      FUN_144b61af0(param_1[1]);
      return;
    }
    if (*(char *)(lVar6 + 0x59) == '\0') {
LAB_145202595:
      *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
    }
    else {
      if ((*(longlong *)(lVar6 + 0x78) == *(longlong *)(lVar6 + 0x70)) &&
         (*(int *)(lVar6 + 100) == *(int *)(lVar6 + 0x5c))) {
LAB_145202592:
        *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
        goto LAB_145202595;
      }
      cVar13 = FUN_144b62480(lVar6,1,1);
      if (cVar13 != '\0') {
        uVar3 = *(uint *)(lVar6 + 0x5c);
        lVar7 = *(longlong *)(lVar6 + 0x70);
        uVar4 = *(uint *)(lVar6 + 100);
        puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar3 * 0x14);
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar12 = puVar1[3];
        lVar9 = *(longlong *)(lVar6 + 0x78);
        puVar2 = (undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        *(undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14 + 0x10) =
             *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar3 * 0x14);
        goto LAB_145202592;
      }
    }
    cVar13 = *(char *)(param_1[1] + 0x58);
  } while( true );
}



// FUNCTION 1452025c0 FUN_1452025c0 body=510 status=ok
// SIG undefined FUN_1452025c0(void)

void FUN_1452025c0(undefined1 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  
  lVar4 = *(longlong *)(param_2 + 8);
  iVar3 = *(int *)(lVar4 + 0x5c);
  if ((iVar3 != *(int *)(lVar4 + 0x60)) || (param_1[0x10] != '\0')) {
    puVar10 = &DAT_149a1f184;
    if ((ushort)((ushort)*(byte *)(param_3 + 4) * 0x100 + (ushort)*(byte *)(param_3 + 5)) != -1) {
      puVar5 = *(undefined1 **)(param_1 + 0x20);
      puVar2 = puVar5 + (ulonglong)
                        CONCAT11(*(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5)) * 4;
      if (puVar2 < puVar5) {
        puVar9 = &DAT_149a1f184;
      }
      else {
        puVar9 = puVar5 + (ulonglong)(byte)puVar2[3] +
                          ((ulonglong)(byte)puVar2[2] +
                          (ulonglong)CONCAT11(*puVar2,puVar2[1]) * 0x100) * 0x100;
      }
      uVar11 = *(uint *)(param_1 + 0x14);
      pbVar8 = (byte *)FUN_1451fbab0(puVar9,*(undefined4 *)
                                             (*(longlong *)(lVar4 + 0x70) + (ulonglong)uVar11 * 0x14
                                             ),*(undefined4 *)(param_2 + 0x10));
      if (pbVar8 != (byte *)0x0) {
        uVar1 = iVar3 + 1;
        uVar7 = *(uint *)(lVar4 + 0x60);
        if (uVar1 < *(uint *)(lVar4 + 0x60)) {
          uVar7 = uVar1;
        }
        if (1 < uVar7 - uVar11) {
          FUN_144b620d0(lVar4,uVar11);
        }
        *(uint *)(*(longlong *)(lVar4 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x14) * 0x14) =
             (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
        *param_1 = 1;
      }
    }
    uVar11 = *(int *)(lVar4 + 0x60) - 1;
    if (*(uint *)(lVar4 + 0x5c) < uVar11) {
      uVar11 = *(uint *)(lVar4 + 0x5c);
    }
    if ((ushort)((ushort)*(byte *)(param_3 + 6) * 0x100 + (ushort)*(byte *)(param_3 + 7)) != -1) {
      puVar5 = *(undefined1 **)(param_1 + 0x20);
      puVar2 = puVar5 + (ulonglong)
                        CONCAT11(*(undefined1 *)(param_3 + 6),*(undefined1 *)(param_3 + 7)) * 4;
      if (puVar5 <= puVar2) {
        puVar10 = puVar5 + (ulonglong)(byte)puVar2[3] +
                           ((ulonglong)(byte)puVar2[2] +
                           (ulonglong)CONCAT11(*puVar2,puVar2[1]) * 0x100) * 0x100;
      }
      lVar6 = *(longlong *)(lVar4 + 0x70);
      pbVar8 = (byte *)FUN_1451fbab0(puVar10,*(undefined4 *)(lVar6 + (ulonglong)uVar11 * 0x14),
                                     *(undefined4 *)(param_2 + 0x10));
      if (pbVar8 != (byte *)0x0) {
        *(uint *)(lVar6 + (ulonglong)uVar11 * 0x14) = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
        *param_1 = 1;
      }
    }
    if ((short)((ushort)*(byte *)(param_3 + 2) * 0x100 + (ushort)*(byte *)(param_3 + 3)) < 0) {
      param_1[0x10] = 1;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar4 + 0x5c);
    }
  }
  return;
}



// FUNCTION 1452027c0 FUN_1452027c0 body=1135 status=ok
// SIG undefined FUN_1452027c0(void)

void FUN_1452027c0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  byte *pbVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  
  iVar19 = 0;
  *(undefined4 *)(param_1[1] + 0x5c) = 0;
  cVar13 = *(char *)(param_1[1] + 0x58);
  do {
    if (cVar13 == '\0') {
      return;
    }
    lVar6 = param_1[1];
    uVar3 = *(uint *)(lVar6 + 0x5c);
    uVar4 = *(uint *)(lVar6 + 0x60);
    if (uVar3 < uVar4) {
      lVar7 = *param_1;
      iVar5 = *(int *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar3 * 0x14);
      if (iVar5 == 0xffff) {
        uVar16 = 2;
      }
      else {
        pbVar14 = (byte *)FUN_1451fbab0((ulonglong)*(byte *)(lVar7 + 7) +
                                        ((ulonglong)*(byte *)(lVar7 + 6) +
                                        (ulonglong)
                                        CONCAT11(*(undefined1 *)(lVar7 + 4),
                                                 *(undefined1 *)(lVar7 + 5)) * 0x100) * 0x100 +
                                        lVar7,iVar5,(int)param_1[2]);
        if (pbVar14 == (byte *)0x0) {
          uVar16 = 1;
        }
        else {
          uVar16 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
        }
      }
    }
    else {
      uVar16 = 0;
    }
    pbVar14 = (byte *)*param_1;
    uVar18 = (uint)pbVar14[1] * 0x10000 + (uint)pbVar14[2] * 0x100 + (uint)*pbVar14 * 0x1000000 +
             (uint)pbVar14[3];
    if (uVar18 <= uVar16) {
      uVar16 = 1;
    }
    uVar15 = (ulonglong)(uVar18 * iVar19 + uVar16);
    lVar7 = (ulonglong)pbVar14[0xb] +
            ((ulonglong)pbVar14[10] + (ulonglong)CONCAT11(pbVar14[8],pbVar14[9]) * 0x100) * 0x100;
    pbVar14 = pbVar14 + (ulonglong)
                        CONCAT11(pbVar14[uVar15 * 2 + lVar7],pbVar14[uVar15 * 2 + lVar7 + 1]) * 8 +
                        (ulonglong)pbVar14[0xf] +
                        ((ulonglong)pbVar14[0xe] +
                        (ulonglong)CONCAT11(pbVar14[0xc],pbVar14[0xd]) * 0x100) * 0x100;
    if (iVar19 != 0) {
      uVar16 = uVar3;
      if (*(char *)(lVar6 + 0x59) != '\0') {
        uVar16 = *(uint *)(lVar6 + 100);
      }
      if (((uVar16 != 0) && (uVar3 < uVar4)) &&
         ((((*(uint *)(lVar6 + 0x5c) != uVar4 || (*(char *)(param_2 + 0x10) != '\0')) &&
           (((ushort)((ushort)pbVar14[4] * 0x100 + (ushort)pbVar14[5]) != -1 ||
            ((ushort)((ushort)pbVar14[6] * 0x100 + (ushort)pbVar14[7]) != -1)))) ||
          (((ushort)((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1]) != 0 ||
           ((ushort)((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3]) != 0x4000)))))) {
        if (*(char *)(lVar6 + 0x59) == '\0') {
          FUN_144b62160(lVar6,uVar3 - 1,uVar3 + 1);
        }
        else {
          FUN_144b62160(lVar6,*(int *)(lVar6 + 100) + -1,uVar3 + 1);
        }
      }
    }
    lVar6 = param_1[1];
    iVar5 = *(int *)(lVar6 + 0x5c);
    uVar3 = iVar5 + 2;
    if (uVar3 <= *(uint *)(lVar6 + 0x60)) {
      pbVar8 = (byte *)*param_1;
      iVar17 = (uint)pbVar8[1] * 0x10000 + (uint)pbVar8[2] * 0x100 + (uint)*pbVar8 * 0x1000000 +
               (uint)pbVar8[3];
      lVar7 = (ulonglong)pbVar8[0xb] +
              ((ulonglong)pbVar8[10] + (ulonglong)CONCAT11(pbVar8[8],pbVar8[9]) * 0x100) * 0x100;
      uVar15 = (ulonglong)((uint)(iVar17 == 0) + iVar17 * iVar19);
      lVar7 = (ulonglong)CONCAT11(pbVar8[uVar15 * 2 + lVar7],pbVar8[uVar15 * 2 + lVar7 + 1]) * 8 +
              (ulonglong)pbVar8[0xf] +
              ((ulonglong)pbVar8[0xe] + (ulonglong)CONCAT11(pbVar8[0xc],pbVar8[0xd]) * 0x100) *
              0x100;
      if ((((iVar5 != *(int *)(lVar6 + 0x60)) || (*(char *)(param_2 + 0x10) != '\0')) &&
          (((ushort)((ushort)pbVar8[lVar7 + 5] + (ushort)pbVar8[lVar7 + 4] * 0x100) != -1 ||
           ((ushort)((ushort)pbVar8[lVar7 + 6] * 0x100 + (ushort)pbVar8[lVar7 + 7]) != -1)))) &&
         (1 < uVar3 - iVar5)) {
        FUN_144b620d0(lVar6,iVar5,uVar3);
      }
    }
    FUN_1452025c0(param_2,param_1,pbVar14);
    lVar6 = param_1[1];
    iVar19 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
    if (*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) {
      return;
    }
    if ((((ushort)pbVar14[3] + (ushort)pbVar14[2] * 0x100 & 0x4000) == 0) ||
       (iVar5 = *(int *)(lVar6 + 0x30), *(int *)(lVar6 + 0x30) = iVar5 + -1, iVar5 < 1)) {
      lVar6 = param_1[1];
      if (*(char *)(lVar6 + 0x59) != '\0') {
        if ((*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) ||
           (*(int *)(lVar6 + 100) != *(int *)(lVar6 + 0x5c))) {
          cVar13 = FUN_144b62480(lVar6,1,1);
          if (cVar13 == '\0') goto LAB_145202bf8;
          uVar3 = *(uint *)(lVar6 + 0x5c);
          lVar7 = *(longlong *)(lVar6 + 0x70);
          uVar4 = *(uint *)(lVar6 + 100);
          puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar3 * 0x14);
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          uVar12 = puVar1[3];
          lVar9 = *(longlong *)(lVar6 + 0x78);
          puVar2 = (undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          *(undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14 + 0x10) =
               *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar3 * 0x14);
        }
        *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
      }
      *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
    }
LAB_145202bf8:
    cVar13 = *(char *)(param_1[1] + 0x58);
  } while( true );
}



// FUNCTION 145202c30 FUN_145202c30 body=703 status=ok
// SIG undefined FUN_145202c30(void)

void FUN_145202c30(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  size_t local_b0;
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  size_t local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *(longlong *)(param_2 + 8);
  uVar14 = (uint)*(byte *)(param_3 + 2) * 0x100 + (uint)*(byte *)(param_3 + 3);
  if (uVar14 >> 0xf != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar6 + 0x5c);
  }
  if ((uVar14 >> 0xd & 1) != 0) {
    uVar13 = *(int *)(lVar6 + 0x5c) + 1;
    uVar11 = *(uint *)(lVar6 + 0x60);
    if (uVar13 < *(uint *)(lVar6 + 0x60)) {
      uVar11 = uVar13;
    }
    *(uint *)(param_1 + 8) = uVar11;
  }
  if ((uVar14 & 0xf) != 0) {
    uVar11 = *(uint *)(param_1 + 4);
    if (uVar11 < *(uint *)(param_1 + 8)) {
      local_58 = 0x302302011011000;
      local_50 = 0x31211312;
      local_4c = 0x33233222;
      bVar3 = *(byte *)((longlong)&local_58 + (ulonglong)(uVar14 & 0xf));
      uVar13 = (uint)(bVar3 >> 4);
      uVar14 = uVar13;
      if (2 < uVar13) {
        uVar14 = 2;
      }
      uVar16 = (ulonglong)uVar14;
      uVar15 = bVar3 & 0xf;
      uVar7 = uVar15;
      if (2 < uVar15) {
        uVar7 = 2;
      }
      if (uVar14 + uVar7 <= *(uint *)(param_1 + 8) - uVar11) {
        uVar12 = *(int *)(lVar6 + 0x5c) + 1;
        uVar4 = *(uint *)(lVar6 + 0x60);
        if (uVar12 < *(uint *)(lVar6 + 0x60)) {
          uVar4 = uVar12;
        }
        if (1 < uVar4 - uVar11) {
          FUN_144b61d00(lVar6,uVar11);
        }
        if (1 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4))) {
          FUN_144b61d00(lVar6);
        }
        lVar6 = *(longlong *)(lVar6 + 0x70);
        local_58 = uVar16 * 0x14;
        local_b8 = uVar16;
        memcpy(local_a8,(void *)(lVar6 + (ulonglong)*(uint *)(param_1 + 4) * 0x14),local_58);
        uVar11 = *(uint *)(param_1 + 8);
        local_b0 = (ulonglong)uVar7 * 0x14;
        memcpy(local_80,(void *)(lVar6 + ((ulonglong)uVar11 - (ulonglong)uVar7) * 0x14),local_b0);
        uVar17 = local_b8;
        if (uVar14 != uVar7) {
          uVar4 = *(uint *)(param_1 + 4);
          memmove((void *)(lVar6 + ((ulonglong)uVar7 + (ulonglong)uVar4) * 0x14),
                  (void *)(lVar6 + (uVar4 + uVar16) * 0x14),
                  (ulonglong)(((uVar11 - uVar4) - uVar7) - uVar14) * 0x14);
          uVar17 = (ulonglong)uVar14;
        }
        memcpy((void *)(lVar6 + (ulonglong)*(uint *)(param_1 + 4) * 0x14),local_80,local_b0);
        memcpy((void *)(lVar6 + (*(uint *)(param_1 + 8) - uVar17) * 0x14),local_a8,local_58);
        if (uVar13 == 3) {
          uVar16 = (ulonglong)(*(int *)(param_1 + 8) - 1);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          uVar5 = *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar16 = (ulonglong)(*(int *)(param_1 + 8) - 2);
          puVar2 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar10 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar10;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14);
          uVar16 = (ulonglong)(*(int *)(param_1 + 8) - 2);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14) = uVar5;
        }
        if (uVar15 == 3) {
          uVar16 = (ulonglong)*(uint *)(param_1 + 4);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          uVar5 = *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar16 = (ulonglong)(*(uint *)(param_1 + 4) + 1);
          puVar2 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar10 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar10;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14);
          uVar16 = (ulonglong)(*(int *)(param_1 + 4) + 1);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14) = uVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 145202f00 FUN_145202f00 body=972 status=ok
// SIG undefined FUN_145202f00(void)

void FUN_145202f00(longlong *param_1,longlong param_2)

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
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  
  iVar19 = 0;
  *(undefined4 *)(param_1[1] + 0x5c) = 0;
  if (*(char *)(param_1[1] + 0x58) != '\0') {
    do {
      lVar5 = param_1[1];
      uVar3 = *(uint *)(lVar5 + 0x5c);
      uVar16 = *(uint *)(lVar5 + 0x60);
      if (uVar3 < uVar16) {
        lVar6 = *param_1;
        iVar4 = *(int *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)uVar3 * 0x14);
        if (iVar4 == 0xffff) {
          uVar15 = 2;
        }
        else {
          pbVar13 = (byte *)FUN_1451fbab0((ulonglong)*(byte *)(lVar6 + 7) +
                                          ((ulonglong)*(byte *)(lVar6 + 6) +
                                          (ulonglong)
                                          CONCAT11(*(undefined1 *)(lVar6 + 4),
                                                   *(undefined1 *)(lVar6 + 5)) * 0x100) * 0x100 +
                                          lVar6,iVar4,(int)param_1[2]);
          if (pbVar13 == (byte *)0x0) {
            uVar15 = 1;
          }
          else {
            uVar15 = (uint)*pbVar13 * 0x100 + (uint)pbVar13[1];
          }
        }
      }
      else {
        uVar15 = 0;
      }
      pbVar13 = (byte *)*param_1;
      uVar17 = (uint)pbVar13[1] * 0x10000 + (uint)pbVar13[2] * 0x100 + (uint)*pbVar13 * 0x1000000 +
               (uint)pbVar13[3];
      if (uVar17 <= uVar15) {
        uVar15 = 1;
      }
      uVar14 = (ulonglong)(uVar17 * iVar19 + uVar15);
      lVar6 = (ulonglong)pbVar13[0xb] +
              ((ulonglong)pbVar13[10] + (ulonglong)CONCAT11(pbVar13[8],pbVar13[9]) * 0x100) * 0x100;
      pbVar13 = pbVar13 + (ulonglong)
                          CONCAT11(pbVar13[uVar14 * 2 + lVar6],pbVar13[uVar14 * 2 + lVar6 + 1]) * 4
                          + (ulonglong)pbVar13[0xf] +
                            ((ulonglong)pbVar13[0xe] +
                            (ulonglong)CONCAT11(pbVar13[0xc],pbVar13[0xd]) * 0x100) * 0x100;
      if (iVar19 != 0) {
        uVar15 = uVar3;
        if (*(char *)(lVar5 + 0x59) != '\0') {
          uVar15 = *(uint *)(lVar5 + 100);
        }
        if (((uVar15 != 0) && (uVar3 < uVar16)) &&
           ((((pbVar13[3] & 0xf) != 0 && (*(uint *)(param_2 + 4) < *(uint *)(param_2 + 8))) ||
            (((ushort)((ushort)*pbVar13 * 0x100 + (ushort)pbVar13[1]) != 0 ||
             ((ushort)((ushort)pbVar13[3] + (ushort)pbVar13[2] * 0x100) != 0x4000)))))) {
          uVar16 = uVar3;
          if (*(char *)(lVar5 + 0x59) != '\0') {
            uVar16 = *(uint *)(lVar5 + 100);
          }
          FUN_144b62160(lVar5,uVar16 - 1,uVar3 + 1);
        }
      }
      lVar5 = param_1[1];
      iVar4 = *(int *)(lVar5 + 0x5c);
      uVar3 = iVar4 + 2;
      if ((((uVar3 <= *(uint *)(lVar5 + 0x60)) &&
           (pbVar7 = (byte *)*param_1,
           iVar18 = (uint)pbVar7[1] * 0x10000 + (uint)pbVar7[2] * 0x100 + (uint)*pbVar7 * 0x1000000
                    + (uint)pbVar7[3],
           lVar6 = (ulonglong)pbVar7[0xb] +
                   ((ulonglong)pbVar7[10] + (ulonglong)CONCAT11(pbVar7[8],pbVar7[9]) * 0x100) *
                   0x100, uVar14 = (ulonglong)((uint)(iVar18 == 0) + iVar18 * iVar19),
           (pbVar7[(ulonglong)CONCAT11(pbVar7[uVar14 * 2 + lVar6],pbVar7[uVar14 * 2 + lVar6 + 1]) *
                   4 + (ulonglong)pbVar7[0xf] +
                       ((ulonglong)pbVar7[0xe] +
                       (ulonglong)CONCAT11(pbVar7[0xc],pbVar7[0xd]) * 0x100) * 0x100 + 3] & 0xf) !=
           0)) && (*(uint *)(param_2 + 4) < *(uint *)(param_2 + 8))) && (1 < uVar3 - iVar4)) {
        FUN_144b620d0(lVar5,iVar4,uVar3);
      }
      FUN_145202c30(param_2,param_1,pbVar13);
      lVar5 = param_1[1];
      iVar19 = (uint)*pbVar13 * 0x100 + (uint)pbVar13[1];
      if (*(int *)(lVar5 + 0x5c) == *(int *)(lVar5 + 0x60)) {
        return;
      }
      if ((((ushort)pbVar13[2] * 0x100 + (ushort)pbVar13[3] & 0x4000) == 0) ||
         (iVar4 = *(int *)(lVar5 + 0x30), *(int *)(lVar5 + 0x30) = iVar4 + -1, iVar4 < 1)) {
        lVar5 = param_1[1];
        if (*(char *)(lVar5 + 0x59) != '\0') {
          if ((*(longlong *)(lVar5 + 0x78) != *(longlong *)(lVar5 + 0x70)) ||
             (*(int *)(lVar5 + 100) != *(int *)(lVar5 + 0x5c))) {
            cVar12 = FUN_144b62480(lVar5,1,1);
            if (cVar12 == '\0') goto LAB_14520329b;
            uVar3 = *(uint *)(lVar5 + 0x5c);
            lVar6 = *(longlong *)(lVar5 + 0x70);
            uVar16 = *(uint *)(lVar5 + 100);
            puVar1 = (undefined4 *)(lVar6 + (ulonglong)uVar3 * 0x14);
            uVar9 = puVar1[1];
            uVar10 = puVar1[2];
            uVar11 = puVar1[3];
            lVar8 = *(longlong *)(lVar5 + 0x78);
            puVar2 = (undefined4 *)(lVar8 + (ulonglong)uVar16 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar9;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
            *(undefined4 *)(lVar8 + (ulonglong)uVar16 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar6 + 0x10 + (ulonglong)uVar3 * 0x14);
          }
          *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
        }
        *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
      }
LAB_14520329b:
    } while (*(char *)(param_1[1] + 0x58) != '\0');
  }
  return;
}



// FUNCTION 1452032d0 FUN_1452032d0 body=693 status=ok
// SIG undefined FUN_1452032d0(void)

void FUN_1452032d0(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5)

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
          uVar10 = FUN_1451feb50(*(undefined8 *)*param_1,*(undefined4 *)(lVar2 + lVar5),
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



// FUNCTION 145203590 FUN_145203590 body=1189 status=ok
// SIG undefined FUN_145203590(void)

void FUN_145203590(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  short sVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  undefined8 local_res10;
  ulonglong local_res20;
  int local_48;
  int local_44;
  int local_40 [2];
  
  uVar15 = *(ulonglong *)(param_2 + 8);
  if ((((char)param_1[3] == '\0') ||
      ((ushort)((ushort)*(byte *)(param_3 + 4) * 0x100 + (ushort)*(byte *)(param_3 + 5)) == -1)) ||
     (*(uint *)(uVar15 + 0x60) <= *(uint *)(uVar15 + 0x5c))) goto LAB_1452039f9;
  uVar13 = *(longlong *)(uVar15 + 0x80) + (ulonglong)*(uint *)(uVar15 + 0x5c) * 0x14;
  iVar9 = (int)param_1[1];
  local_res8 = uVar13;
  local_res20 = uVar15;
  if (iVar9 == 0) {
    pbVar11 = (byte *)(param_1[2] +
                      (ulonglong)CONCAT11(*(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5))
                      * 2);
    cVar8 = FUN_144e2c5c0(*param_1 + 0x20,pbVar11,4);
    if (cVar8 == '\0') {
      return;
    }
    bVar1 = pbVar11[2];
    bVar2 = pbVar11[3];
    local_res20 = local_res20 & 0xffffffff00000000;
    local_48 = 0;
    lVar6 = *(longlong *)(*param_1 + 8);
    uVar5 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(*param_1 + 0x18) + 0x70) +
             (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x14);
    local_res10 = (byte *)((ulonglong)local_res10._4_4_ << 0x20);
    local_res8 = local_res8 & 0xffffffff00000000;
    iVar9 = (**(code **)(*(longlong *)(lVar6 + 0x40) + 400))
                      (lVar6,*(undefined8 *)(lVar6 + 0x48),uVar5,
                       (uint)*pbVar11 * 0x100 + (uint)pbVar11[1],&local_res8,&local_res10,
                       *(undefined8 *)(*(longlong *)(lVar6 + 0x40) + 0x80));
    if (iVar9 == 0) {
      return;
    }
    FUN_144b63d80(lVar6,uVar5,&local_44,local_40);
    local_res8 = CONCAT44(local_res8._4_4_,(int)local_res8 - local_44);
    local_res10 = (byte *)CONCAT44(local_res10._4_4_,(int)local_res10 - local_40[0]);
    lVar6 = *(longlong *)(*param_1 + 0x18);
    lVar7 = *(longlong *)(*param_1 + 8);
    uVar5 = *(undefined4 *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14)
    ;
    local_48 = 0;
    local_res20 = local_res20 & 0xffffffff00000000;
    iVar9 = (**(code **)(*(longlong *)(lVar7 + 0x40) + 400))
                      (lVar7,*(undefined8 *)(lVar7 + 0x48),uVar5,(uint)bVar2 + (uint)bVar1 * 0x100,
                       &local_res20,&local_48,*(undefined8 *)(*(longlong *)(lVar7 + 0x40) + 0x80));
    if (iVar9 == 0) {
      return;
    }
    FUN_144b63d80(lVar7,uVar5,local_40,&local_44);
    *(int *)(uVar13 + 8) = (int)local_res8 - ((int)local_res20 - local_40[0]);
    local_res10._0_4_ = (int)local_res10 - (local_48 - local_44);
LAB_1452039d9:
    *(int *)(uVar13 + 0xc) = (int)local_res10;
  }
  else {
    if (iVar9 == 1) {
      pbVar11 = (byte *)(param_1[2] +
                        (ulonglong)
                        CONCAT11(*(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5)) * 2);
      local_res10 = pbVar11;
      cVar8 = FUN_144e2c5c0(*param_1 + 0x20,pbVar11,4);
      if (cVar8 == '\0') {
        return;
      }
      lVar6 = *param_1;
      lVar7 = *(longlong *)(lVar6 + 0x18);
      pbVar11 = (byte *)FUN_1451fa8b0(*(undefined8 *)(lVar6 + 0x58),
                                      *(undefined4 *)
                                       (*(longlong *)(lVar7 + 0x70) +
                                       (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x14),
                                      (uint)*pbVar11 * 0x100 + (uint)pbVar11[1],
                                      *(undefined4 *)(lVar6 + 0x50));
      pbVar12 = (byte *)FUN_1451fa8b0(*(undefined8 *)(lVar6 + 0x58),
                                      *(undefined4 *)
                                       (*(longlong *)(lVar7 + 0x70) +
                                       (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14),
                                      (uint)local_res10[2] * 0x100 + (uint)local_res10[3],
                                      *(undefined4 *)(lVar6 + 0x50));
      sVar14 = (ushort)*pbVar11 * 0x100 + (ushort)pbVar11[1];
      iVar9 = FUN_1451e10a0(*(undefined8 *)(lVar6 + 8),
                            (int)(short)((ushort)*pbVar12 * 0x100 + (ushort)pbVar12[1]),sVar14);
      iVar10 = FUN_1451e10a0(*(undefined8 *)(*param_1 + 8),sVar14);
      *(int *)(local_res8 + 8) = iVar10 - iVar9;
      bVar1 = pbVar11[3];
      bVar2 = pbVar11[2];
      iVar9 = FUN_144e31290(*(undefined8 *)(*param_1 + 8),
                            (int)(short)((ushort)pbVar12[2] * 0x100 + (ushort)pbVar12[3]));
      local_res10._0_4_ =
           FUN_144e31290(*(undefined8 *)(*param_1 + 8),(ushort)bVar2 * 0x100 + (ushort)bVar1);
      local_res10._0_4_ = (int)local_res10 - iVar9;
      uVar13 = local_res8;
      uVar15 = local_res20;
      goto LAB_1452039d9;
    }
    if (iVar9 == 2) {
      pbVar11 = (byte *)(param_1[2] +
                        (ulonglong)
                        CONCAT11(*(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5)) * 2);
      cVar8 = FUN_144e2c5c0(*param_1 + 0x20,pbVar11,8);
      if (cVar8 == '\0') {
        return;
      }
      bVar1 = pbVar11[1];
      bVar2 = *pbVar11;
      bVar3 = pbVar11[3];
      bVar4 = pbVar11[2];
      sVar14 = (ushort)pbVar11[6] * 0x100 + (ushort)pbVar11[7];
      iVar9 = FUN_1451e10a0(*(undefined8 *)(*param_1 + 8),
                            (int)(short)((ushort)pbVar11[4] * 0x100 + (ushort)pbVar11[5]),sVar14);
      iVar10 = FUN_1451e10a0(*(undefined8 *)(*param_1 + 8),(ushort)bVar2 * 0x100 + (ushort)bVar1);
      uVar13 = local_res8;
      *(int *)(local_res8 + 8) = iVar10 - iVar9;
      iVar9 = FUN_144e31290(*(undefined8 *)(*param_1 + 8),sVar14);
      local_res10._0_4_ =
           FUN_144e31290(*(undefined8 *)(*param_1 + 8),(ushort)bVar4 * 0x100 + (ushort)bVar3);
      local_res10._0_4_ = (int)local_res10 - iVar9;
      goto LAB_1452039d9;
    }
  }
  *(undefined1 *)(uVar13 + 0x12) = 1;
  *(short *)(uVar13 + 0x10) = *(short *)((longlong)param_1 + 0x1c) - *(short *)(uVar15 + 0x5c);
  *(uint *)(uVar15 + 0x28) = *(uint *)(uVar15 + 0x28) | 8;
LAB_1452039f9:
  if ((short)((ushort)*(byte *)(param_3 + 2) * 0x100 + (ushort)*(byte *)(param_3 + 3)) < 0) {
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(uVar15 + 0x5c);
  }
  return;
}



// FUNCTION 145203a40 FUN_145203a40 body=1058 status=ok
// SIG undefined FUN_145203a40(void)

void FUN_145203a40(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  byte *pbVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  
  iVar19 = 0;
  *(undefined4 *)(param_1[1] + 0x5c) = 0;
  cVar13 = *(char *)(param_1[1] + 0x58);
  do {
    if (cVar13 == '\0') {
      return;
    }
    lVar6 = param_1[1];
    uVar3 = *(uint *)(lVar6 + 0x5c);
    uVar4 = *(uint *)(lVar6 + 0x60);
    if (uVar3 < uVar4) {
      lVar7 = *param_1;
      iVar5 = *(int *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar3 * 0x14);
      if (iVar5 == 0xffff) {
        uVar16 = 2;
      }
      else {
        pbVar14 = (byte *)FUN_1451fbab0((ulonglong)*(byte *)(lVar7 + 7) +
                                        ((ulonglong)*(byte *)(lVar7 + 6) +
                                        (ulonglong)
                                        CONCAT11(*(undefined1 *)(lVar7 + 4),
                                                 *(undefined1 *)(lVar7 + 5)) * 0x100) * 0x100 +
                                        lVar7,iVar5,(int)param_1[2]);
        if (pbVar14 == (byte *)0x0) {
          uVar16 = 1;
        }
        else {
          uVar16 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
        }
      }
    }
    else {
      uVar16 = 0;
    }
    pbVar14 = (byte *)*param_1;
    uVar17 = (uint)pbVar14[1] * 0x10000 + (uint)pbVar14[2] * 0x100 + (uint)*pbVar14 * 0x1000000 +
             (uint)pbVar14[3];
    if (uVar17 <= uVar16) {
      uVar16 = 1;
    }
    uVar15 = (ulonglong)(uVar17 * iVar19 + uVar16);
    lVar7 = (ulonglong)pbVar14[0xb] +
            ((ulonglong)pbVar14[10] + (ulonglong)CONCAT11(pbVar14[8],pbVar14[9]) * 0x100) * 0x100;
    pbVar14 = pbVar14 + (ulonglong)
                        CONCAT11(pbVar14[uVar15 * 2 + lVar7],pbVar14[uVar15 * 2 + lVar7 + 1]) * 6 +
                        (ulonglong)pbVar14[0xf] +
                        ((ulonglong)pbVar14[0xe] +
                        (ulonglong)CONCAT11(pbVar14[0xc],pbVar14[0xd]) * 0x100) * 0x100;
    if (iVar19 != 0) {
      uVar16 = uVar3;
      if (*(char *)(lVar6 + 0x59) != '\0') {
        uVar16 = *(uint *)(lVar6 + 100);
      }
      if (((uVar16 != 0) && (uVar3 < uVar4)) &&
         (((ushort)((ushort)pbVar14[4] * 0x100 + (ushort)pbVar14[5]) != -1 ||
          (((ushort)((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1]) != 0 ||
           ((ushort)((ushort)pbVar14[3] + (ushort)pbVar14[2] * 0x100) != 0x4000)))))) {
        if (*(char *)(lVar6 + 0x59) == '\0') {
          FUN_144b62160(lVar6,uVar3 - 1,uVar3 + 1);
        }
        else {
          FUN_144b62160(lVar6,*(int *)(lVar6 + 100) + -1,uVar3 + 1);
        }
      }
    }
    lVar6 = param_1[1];
    iVar5 = *(int *)(lVar6 + 0x5c);
    uVar3 = iVar5 + 2;
    if (((uVar3 <= *(uint *)(lVar6 + 0x60)) &&
        (pbVar8 = (byte *)*param_1,
        iVar18 = (uint)pbVar8[1] * 0x10000 + (uint)pbVar8[2] * 0x100 + (uint)*pbVar8 * 0x1000000 +
                 (uint)pbVar8[3],
        lVar7 = (ulonglong)pbVar8[0xb] +
                ((ulonglong)pbVar8[10] + (ulonglong)CONCAT11(pbVar8[8],pbVar8[9]) * 0x100) * 0x100,
        lVar9 = (ulonglong)pbVar8[0xf] +
                ((ulonglong)pbVar8[0xe] + (ulonglong)CONCAT11(pbVar8[0xc],pbVar8[0xd]) * 0x100) *
                0x100, uVar15 = (ulonglong)((uint)(iVar18 == 0) + iVar18 * iVar19),
        (ushort)((ushort)pbVar8[(ulonglong)
                                CONCAT11(pbVar8[uVar15 * 2 + lVar7],pbVar8[uVar15 * 2 + lVar7 + 1])
                                * 6 + lVar9 + 4] * 0x100 +
                (ushort)pbVar8[(ulonglong)
                               CONCAT11(pbVar8[uVar15 * 2 + lVar7],pbVar8[uVar15 * 2 + lVar7 + 1]) *
                               6 + lVar9 + 5]) != -1)) && (1 < uVar3 - iVar5)) {
      FUN_144b620d0(lVar6,iVar5,uVar3);
    }
    FUN_145203590(param_2,param_1,pbVar14);
    lVar6 = param_1[1];
    iVar19 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
    if (*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) {
      return;
    }
    if ((((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3] & 0x4000) == 0) ||
       (iVar5 = *(int *)(lVar6 + 0x30), *(int *)(lVar6 + 0x30) = iVar5 + -1, iVar5 < 1)) {
      lVar6 = param_1[1];
      if (*(char *)(lVar6 + 0x59) != '\0') {
        if ((*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) ||
           (*(int *)(lVar6 + 100) != *(int *)(lVar6 + 0x5c))) {
          cVar13 = FUN_144b62480(lVar6,1,1);
          if (cVar13 == '\0') goto LAB_145203e2b;
          uVar3 = *(uint *)(lVar6 + 0x5c);
          lVar7 = *(longlong *)(lVar6 + 0x70);
          uVar4 = *(uint *)(lVar6 + 100);
          puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar3 * 0x14);
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          uVar12 = puVar1[3];
          lVar9 = *(longlong *)(lVar6 + 0x78);
          puVar2 = (undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          *(undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14 + 0x10) =
               *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar3 * 0x14);
        }
        *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
      }
      *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
    }
LAB_145203e2b:
    cVar13 = *(char *)(param_1[1] + 0x58);
  } while( true );
}



// FUNCTION 145203e70 FUN_145203e70 body=693 status=ok
// SIG undefined FUN_145203e70(void)

void FUN_145203e70(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5)

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
          uVar10 = FUN_1451fe3e0(*(undefined8 *)*param_1,*(undefined4 *)(lVar2 + lVar5),
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



// FUNCTION 145204130 FUN_145204130 body=760 status=ok
// SIG undefined FUN_145204130(void)

void FUN_145204130(longlong *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte bVar15;
  
  lVar3 = *(longlong *)(param_2 + 8);
  uVar10 = (uint)*(byte *)(param_3 + 2) * 0x100 + (uint)*(byte *)(param_3 + 3);
  if ((uVar10 >> 0xd & 1) != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (uVar10 >> 0xf != 0) {
    if (*(uint *)(param_1 + 7) < 8) {
      *(undefined4 *)((longlong)param_1 + (ulonglong)*(uint *)(param_1 + 7) * 4 + 0x18) =
           *(undefined4 *)(lVar3 + 0x5c);
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    }
    else {
      *(undefined4 *)(param_1 + 7) = 0;
    }
  }
  if (((ushort)((ushort)*(byte *)(param_3 + 4) * 0x100 + (ushort)*(byte *)(param_3 + 5)) != -1) &&
     (uVar10 = *(uint *)(param_1 + 7), uVar10 != 0)) {
    lVar4 = param_1[1];
    uVar12 = (uint)*(byte *)(lVar4 + 9) * 0x10000 + (uint)*(byte *)(lVar4 + 10) * 0x100 +
             (uint)*(byte *)(lVar4 + 8) * 0x1000000 + (uint)*(byte *)(lVar4 + 0xb);
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    pbVar1 = (byte *)param_1[2] +
             ((ulonglong)CONCAT11(*(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5)) &
             0xfffffffffffffffe);
    pbVar14 = &DAT_149a1f1a0;
    if ((byte *)param_1[2] <= pbVar1) {
      pbVar14 = pbVar1;
    }
    if ((((uVar12 == 0) || (uVar10 < (uint)(0xffffffff / (ulonglong)uVar12))) &&
        (uVar10 * uVar12 < 0x7fffffff)) &&
       (cVar6 = FUN_144e2c5c0(*param_1 + 0x20,pbVar14,uVar10 * uVar12 * 2), cVar6 != '\0')) {
      bVar15 = 0;
      uVar10 = *(uint *)(*(longlong *)*param_1 + 0xb0);
      do {
        if ((int)param_1[7] == 0) {
          return;
        }
        uVar7 = (int)param_1[7] - 1;
        *(uint *)(param_1 + 7) = uVar7;
        uVar7 = *(uint *)((longlong)param_1 + (ulonglong)uVar7 * 4 + 0x18);
        sVar11 = (ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1];
        uVar13 = (uint)sVar11;
        pbVar14 = pbVar14 + (ulonglong)uVar12 * 2;
        if (uVar7 < *(uint *)(lVar3 + 0x60)) {
          lVar5 = *(longlong *)(lVar3 + 0x80);
          lVar4 = (ulonglong)uVar7 * 0x14;
          bVar15 = (byte)sVar11 & 1;
          if ((uVar13 & 0xfffffffe) == 0xffff8000) {
            *(undefined1 *)(lVar4 + 0x12 + lVar5) = 0;
            *(undefined2 *)(lVar4 + 0x10 + lVar5) = 0;
            *(undefined8 *)(lVar4 + 8 + lVar5) = 0;
          }
          else if ((*(uint *)(lVar3 + 0x38) & 0xfffffffe) == 4) {
            if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
              if (((*(uint *)(*(longlong *)(lVar3 + 0x70) + 4 + lVar4) & uVar10) != 0) &&
                 (*(int *)(lVar4 + 8 + lVar5) == 0)) {
                iVar9 = FUN_1451e10a0(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
                *(int *)(lVar5 + lVar4) = *(int *)(lVar5 + lVar4) + iVar9;
                lVar5 = *(longlong *)(lVar3 + 0x80);
                iVar9 = FUN_1451e10a0(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
                piVar2 = (int *)(lVar5 + 8 + lVar4);
                *piVar2 = *piVar2 + iVar9;
              }
            }
            else if ((*(char *)(lVar4 + 0x12 + lVar5) != '\0') &&
                    (*(int *)(lVar4 + 0xc + lVar5) == 0)) {
              uVar8 = FUN_144e31290(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
              *(undefined4 *)(lVar4 + 0xc + lVar5) = uVar8;
              *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) | 8;
            }
          }
          else if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
            if (((*(uint *)(*(longlong *)(lVar3 + 0x70) + 4 + lVar4) & uVar10) != 0) &&
               (*(int *)(lVar4 + 0xc + lVar5) == 0)) {
              iVar9 = FUN_144e31290(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
              piVar2 = (int *)(lVar5 + 4 + lVar4);
              *piVar2 = *piVar2 + iVar9;
              lVar5 = *(longlong *)(lVar3 + 0x80);
              iVar9 = FUN_144e31290(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
              piVar2 = (int *)(lVar5 + 0xc + lVar4);
              *piVar2 = *piVar2 + iVar9;
            }
          }
          else if ((*(char *)(lVar4 + 0x12 + lVar5) != '\0') && (*(int *)(lVar4 + 8 + lVar5) == 0))
          {
            uVar8 = FUN_1451e10a0(*(undefined8 *)(*param_1 + 8),uVar13 & 0xfffe);
            *(undefined4 *)(lVar4 + 8 + lVar5) = uVar8;
            *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) | 8;
          }
        }
      } while (bVar15 == 0);
    }
    else {
      *(undefined4 *)(param_1 + 7) = 0;
    }
  }
  return;
}



// FUNCTION 145204430 FUN_145204430 body=1058 status=ok
// SIG undefined FUN_145204430(void)

void FUN_145204430(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  byte *pbVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  
  iVar19 = 0;
  *(undefined4 *)(param_1[1] + 0x5c) = 0;
  cVar13 = *(char *)(param_1[1] + 0x58);
  do {
    if (cVar13 == '\0') {
      return;
    }
    lVar6 = param_1[1];
    uVar3 = *(uint *)(lVar6 + 0x5c);
    uVar4 = *(uint *)(lVar6 + 0x60);
    if (uVar3 < uVar4) {
      lVar7 = *param_1;
      iVar5 = *(int *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar3 * 0x14);
      if (iVar5 == 0xffff) {
        uVar16 = 2;
      }
      else {
        pbVar14 = (byte *)FUN_1451fbab0((ulonglong)*(byte *)(lVar7 + 7) +
                                        ((ulonglong)*(byte *)(lVar7 + 6) +
                                        (ulonglong)
                                        CONCAT11(*(undefined1 *)(lVar7 + 4),
                                                 *(undefined1 *)(lVar7 + 5)) * 0x100) * 0x100 +
                                        lVar7,iVar5,(int)param_1[2]);
        if (pbVar14 == (byte *)0x0) {
          uVar16 = 1;
        }
        else {
          uVar16 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
        }
      }
    }
    else {
      uVar16 = 0;
    }
    pbVar14 = (byte *)*param_1;
    uVar17 = (uint)pbVar14[1] * 0x10000 + (uint)pbVar14[2] * 0x100 + (uint)*pbVar14 * 0x1000000 +
             (uint)pbVar14[3];
    if (uVar17 <= uVar16) {
      uVar16 = 1;
    }
    uVar15 = (ulonglong)(uVar17 * iVar19 + uVar16);
    lVar7 = (ulonglong)pbVar14[0xb] +
            ((ulonglong)pbVar14[10] + (ulonglong)CONCAT11(pbVar14[8],pbVar14[9]) * 0x100) * 0x100;
    pbVar14 = pbVar14 + (ulonglong)
                        CONCAT11(pbVar14[uVar15 * 2 + lVar7],pbVar14[uVar15 * 2 + lVar7 + 1]) * 6 +
                        (ulonglong)pbVar14[0xf] +
                        ((ulonglong)pbVar14[0xe] +
                        (ulonglong)CONCAT11(pbVar14[0xc],pbVar14[0xd]) * 0x100) * 0x100;
    if (iVar19 != 0) {
      uVar16 = uVar3;
      if (*(char *)(lVar6 + 0x59) != '\0') {
        uVar16 = *(uint *)(lVar6 + 100);
      }
      if (((uVar16 != 0) && (uVar3 < uVar4)) &&
         (((ushort)((ushort)pbVar14[4] * 0x100 + (ushort)pbVar14[5]) != -1 ||
          (((ushort)((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1]) != 0 ||
           ((ushort)((ushort)pbVar14[3] + (ushort)pbVar14[2] * 0x100) != 0x4000)))))) {
        if (*(char *)(lVar6 + 0x59) == '\0') {
          FUN_144b62160(lVar6,uVar3 - 1,uVar3 + 1);
        }
        else {
          FUN_144b62160(lVar6,*(int *)(lVar6 + 100) + -1,uVar3 + 1);
        }
      }
    }
    lVar6 = param_1[1];
    iVar5 = *(int *)(lVar6 + 0x5c);
    uVar3 = iVar5 + 2;
    if (((uVar3 <= *(uint *)(lVar6 + 0x60)) &&
        (pbVar8 = (byte *)*param_1,
        iVar18 = (uint)pbVar8[1] * 0x10000 + (uint)pbVar8[2] * 0x100 + (uint)*pbVar8 * 0x1000000 +
                 (uint)pbVar8[3],
        lVar7 = (ulonglong)pbVar8[0xb] +
                ((ulonglong)pbVar8[10] + (ulonglong)CONCAT11(pbVar8[8],pbVar8[9]) * 0x100) * 0x100,
        lVar9 = (ulonglong)pbVar8[0xf] +
                ((ulonglong)pbVar8[0xe] + (ulonglong)CONCAT11(pbVar8[0xc],pbVar8[0xd]) * 0x100) *
                0x100, uVar15 = (ulonglong)((uint)(iVar18 == 0) + iVar18 * iVar19),
        (ushort)((ushort)pbVar8[(ulonglong)
                                CONCAT11(pbVar8[uVar15 * 2 + lVar7],pbVar8[uVar15 * 2 + lVar7 + 1])
                                * 6 + lVar9 + 4] * 0x100 +
                (ushort)pbVar8[(ulonglong)
                               CONCAT11(pbVar8[uVar15 * 2 + lVar7],pbVar8[uVar15 * 2 + lVar7 + 1]) *
                               6 + lVar9 + 5]) != -1)) && (1 < uVar3 - iVar5)) {
      FUN_144b620d0(lVar6,iVar5,uVar3);
    }
    FUN_145204130(param_2,param_1,pbVar14);
    lVar6 = param_1[1];
    iVar19 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
    if (*(int *)(lVar6 + 0x5c) == *(int *)(lVar6 + 0x60)) {
      return;
    }
    if ((((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3] & 0x4000) == 0) ||
       (iVar5 = *(int *)(lVar6 + 0x30), *(int *)(lVar6 + 0x30) = iVar5 + -1, iVar5 < 1)) {
      lVar6 = param_1[1];
      if (*(char *)(lVar6 + 0x59) != '\0') {
        if ((*(longlong *)(lVar6 + 0x78) != *(longlong *)(lVar6 + 0x70)) ||
           (*(int *)(lVar6 + 100) != *(int *)(lVar6 + 0x5c))) {
          cVar13 = FUN_144b62480(lVar6,1,1);
          if (cVar13 == '\0') goto LAB_14520481b;
          uVar3 = *(uint *)(lVar6 + 0x5c);
          lVar7 = *(longlong *)(lVar6 + 0x70);
          uVar4 = *(uint *)(lVar6 + 100);
          puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar3 * 0x14);
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          uVar12 = puVar1[3];
          lVar9 = *(longlong *)(lVar6 + 0x78);
          puVar2 = (undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          *(undefined4 *)(lVar9 + (ulonglong)uVar4 * 0x14 + 0x10) =
               *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar3 * 0x14);
        }
        *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
      }
      *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
    }
LAB_14520481b:
    cVar13 = *(char *)(param_1[1] + 0x58);
  } while( true );
}



// FUNCTION 145204860 FUN_145204860 body=693 status=ok
// SIG undefined FUN_145204860(void)

void FUN_145204860(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5)

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
          uVar10 = FUN_1451fdc10(*(undefined8 *)*param_1,*(undefined4 *)(lVar2 + lVar5),
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



// FUNCTION 145204b20 FUN_145204b20 body=666 status=ok
// SIG undefined FUN_145204b20(void)

void FUN_145204b20(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  lVar6 = *(longlong *)(param_2 + 8);
  uVar17 = (uint)*(byte *)(param_3 + 2) * 0x100 + (uint)*(byte *)(param_3 + 3);
  uVar4 = *(undefined4 *)(lVar6 + 100);
  if ((ushort)((ushort)*(byte *)(param_3 + 6) * 0x100 + (ushort)*(byte *)(param_3 + 7)) != -1) {
    uVar16 = uVar17 & 0x1f;
    pbVar1 = *(byte **)(param_1 + 0x18) +
             (ulonglong)CONCAT11(*(undefined1 *)(param_3 + 6),*(undefined1 *)(param_3 + 7)) * 2;
    pbVar14 = &DAT_149a1f1a0;
    if (*(byte **)(param_1 + 0x18) <= pbVar1) {
      pbVar14 = pbVar1;
    }
    cVar11 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar14,uVar16 * 2);
    iVar15 = *(int *)(lVar6 + 100);
    if (cVar11 == '\0') {
      uVar16 = 0;
    }
    FUN_144b62270(lVar6,*(undefined4 *)(param_1 + 0x10));
    if ((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar17 >> 10 & 1) == 0)) {
      FUN_1451f9f40(lVar6);
    }
    if (uVar16 != 0) {
      uVar13 = (ulonglong)uVar16;
      do {
        FUN_1451e0a10(lVar6,(uint)pbVar14[1] + (uint)*pbVar14 * 0x100);
        pbVar14 = pbVar14 + 2;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if ((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar17 >> 10 & 1) == 0)) {
      *(uint *)(lVar6 + 0x5c) = *(uint *)(lVar6 + 0x5c) + 1;
    }
    FUN_144b62270(lVar6,iVar15 + uVar16);
    uVar12 = *(int *)(lVar6 + 0x5c) + 1;
    uVar16 = *(uint *)(lVar6 + 0x60);
    if (uVar12 < *(uint *)(lVar6 + 0x60)) {
      uVar16 = uVar12;
    }
    FUN_144b62160(lVar6,*(undefined4 *)(param_1 + 0x10),uVar16);
  }
  if (uVar17 >> 0xf != 0) {
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  if ((ushort)((ushort)*(byte *)(param_3 + 4) * 0x100 + (ushort)*(byte *)(param_3 + 5)) != -1) {
    uVar16 = uVar17 >> 5 & 0x1f;
    pbVar1 = *(byte **)(param_1 + 0x18) +
             (ulonglong)CONCAT11(*(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5)) * 2;
    pbVar14 = &DAT_149a1f1a0;
    if (*(byte **)(param_1 + 0x18) <= pbVar1) {
      pbVar14 = pbVar1;
    }
    cVar11 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar14,uVar16 * 2);
    iVar15 = *(int *)(lVar6 + 100);
    if (cVar11 == '\0') {
      uVar16 = 0;
    }
    if (((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar17 >> 0xb & 1) == 0)) &&
       (cVar11 = FUN_144b62480(lVar6,0,1), cVar11 != '\0')) {
      uVar12 = *(uint *)(lVar6 + 0x5c);
      lVar7 = *(longlong *)(lVar6 + 0x70);
      uVar5 = *(uint *)(lVar6 + 100);
      puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar12 * 0x14);
      uVar4 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      lVar8 = *(longlong *)(lVar6 + 0x78);
      puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar5 * 0x14);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      *(undefined4 *)(lVar8 + (ulonglong)uVar5 * 0x14 + 0x10) =
           *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar12 * 0x14);
      *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
    }
    if (uVar16 != 0) {
      uVar13 = (ulonglong)uVar16;
      do {
        FUN_1451e0a10(lVar6,(uint)pbVar14[1] + (uint)*pbVar14 * 0x100);
        pbVar14 = pbVar14 + 2;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if ((*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60)) && ((uVar17 >> 0xb & 1) == 0)) {
      *(uint *)(lVar6 + 0x5c) = *(uint *)(lVar6 + 0x5c) + 1;
    }
    if ((uVar17 >> 0xe & 1) == 0) {
      iVar15 = iVar15 + uVar16;
    }
    FUN_144b62270(lVar6,iVar15);
  }
  return;
}



// FUNCTION 145204dc0 FUN_145204dc0 body=1123 status=ok
// SIG undefined FUN_145204dc0(void)

void FUN_145204dc0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  ulonglong uVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  FUN_144b61b50(param_1[1]);
  iVar12 = 0;
  *(undefined4 *)(param_1[1] + 0x5c) = 0;
  cVar11 = *(char *)(param_1[1] + 0x58);
  while (cVar11 != '\0') {
    lVar4 = param_1[1];
    uVar17 = *(uint *)(lVar4 + 0x5c);
    if (uVar17 < *(uint *)(lVar4 + 0x60)) {
      iVar3 = *(int *)(*(longlong *)(lVar4 + 0x70) + (ulonglong)uVar17 * 0x14);
      lVar5 = *param_1;
      if (iVar3 == 0xffff) {
        uVar18 = 2;
      }
      else {
        pbVar14 = (byte *)((ulonglong)*(byte *)(lVar5 + 3) +
                          (ulonglong)*(byte *)(lVar5 + 2) * 0x100 + lVar5);
        uVar15 = (iVar3 + (uint)*pbVar14 * -0x100) - (uint)pbVar14[1];
        uVar18 = 1;
        if (uVar15 < (uint)pbVar14[2] * 0x100 + (uint)pbVar14[3]) {
          uVar18 = (uint)pbVar14[(ulonglong)uVar15 + 4];
        }
      }
    }
    else {
      uVar18 = 0;
    }
    pbVar14 = (byte *)*param_1;
    uVar15 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
    if (uVar15 <= uVar18) {
      uVar18 = 1;
    }
    pbVar14 = pbVar14 + (ulonglong)
                        pbVar14[(ulonglong)(uVar15 * iVar12 + uVar18) +
                                (ulonglong)pbVar14[4] * 0x100 + (ulonglong)pbVar14[5]] * 8 +
                        (ulonglong)pbVar14[7] + (ulonglong)pbVar14[6] * 0x100;
    if (iVar12 != 0) {
      uVar18 = uVar17;
      if (*(char *)(lVar4 + 0x59) != '\0') {
        uVar18 = *(uint *)(lVar4 + 100);
      }
      if (((uVar18 != 0) && (uVar17 < *(uint *)(lVar4 + 0x60))) &&
         ((((((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3] & 0x3ff) != 0 &&
            (((ushort)((ushort)pbVar14[4] * 0x100 + (ushort)pbVar14[5]) != -1 ||
             ((ushort)((ushort)pbVar14[6] * 0x100 + (ushort)pbVar14[7]) != -1)))) ||
           ((ushort)((ushort)*pbVar14 * 0x100 + (ushort)pbVar14[1]) != 0)) ||
          ((ushort)((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3]) != 0x4000)))) {
        uVar18 = uVar17;
        if (*(char *)(lVar4 + 0x59) != '\0') {
          uVar18 = *(uint *)(lVar4 + 100);
        }
        FUN_144b62160(lVar4,uVar18 - 1,uVar17 + 1);
      }
    }
    lVar4 = param_1[1];
    iVar3 = *(int *)(lVar4 + 0x5c);
    uVar17 = iVar3 + 2;
    if (uVar17 <= *(uint *)(lVar4 + 0x60)) {
      pbVar6 = (byte *)*param_1;
      iVar16 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
      lVar5 = (ulonglong)pbVar6[7] + (ulonglong)pbVar6[6] * 0x100;
      uVar13 = (ulonglong)
               pbVar6[(ulonglong)((uint)(iVar16 == 0) + iVar16 * iVar12) +
                      (ulonglong)pbVar6[5] + (ulonglong)pbVar6[4] * 0x100];
      lVar7 = uVar13 * 8 + lVar5;
      if ((((ushort)pbVar6[uVar13 * 8 + lVar5 + 3] + (ushort)pbVar6[uVar13 * 8 + lVar5 + 2] * 0x100
           & 0x3ff) != 0) &&
         ((((ushort)((ushort)pbVar6[lVar7 + 4] * 0x100 + (ushort)pbVar6[lVar7 + 5]) != -1 ||
           ((ushort)((ushort)pbVar6[lVar7 + 6] * 0x100 + (ushort)pbVar6[lVar7 + 7]) != -1)) &&
          (1 < uVar17 - iVar3)))) {
        FUN_144b620d0(lVar4,iVar3,uVar17);
      }
    }
    FUN_145204b20(param_2,param_1,pbVar14);
    pbVar6 = (byte *)*param_1;
    lVar4 = param_1[1];
    iVar12 = (int)((((uint)*pbVar14 - (uint)pbVar6[4]) * 0x100 - (uint)pbVar6[5]) + (uint)pbVar14[1]
                  ) / (int)((uint)pbVar6[1] + (uint)*pbVar6 * 0x100);
    if (*(int *)(lVar4 + 0x5c) == *(int *)(lVar4 + 0x60)) break;
    if ((((ushort)pbVar14[3] + (ushort)pbVar14[2] * 0x100 & 0x4000) == 0) ||
       (iVar3 = *(int *)(lVar4 + 0x30), *(int *)(lVar4 + 0x30) = iVar3 + -1, iVar3 < 1)) {
      lVar4 = param_1[1];
      if (*(char *)(lVar4 + 0x59) != '\0') {
        if ((*(longlong *)(lVar4 + 0x78) != *(longlong *)(lVar4 + 0x70)) ||
           (*(int *)(lVar4 + 100) != *(int *)(lVar4 + 0x5c))) {
          cVar11 = FUN_144b62480(lVar4,1,1);
          if (cVar11 == '\0') goto LAB_145205169;
          uVar17 = *(uint *)(lVar4 + 0x5c);
          lVar5 = *(longlong *)(lVar4 + 0x70);
          uVar18 = *(uint *)(lVar4 + 100);
          puVar1 = (undefined4 *)(lVar5 + (ulonglong)uVar17 * 0x14);
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          lVar7 = *(longlong *)(lVar4 + 0x78);
          puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar18 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          *(undefined4 *)(lVar7 + (ulonglong)uVar18 * 0x14 + 0x10) =
               *(undefined4 *)(lVar5 + 0x10 + (ulonglong)uVar17 * 0x14);
        }
        *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + 1;
      }
      *(int *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x5c) + 1;
    }
LAB_145205169:
    cVar11 = *(char *)(param_1[1] + 0x58);
  }
  cVar11 = *(char *)(param_1[1] + 0x58);
  do {
    if ((cVar11 == '\0') || (lVar4 = param_1[1], *(uint *)(lVar4 + 0x60) <= *(uint *)(lVar4 + 0x5c))
       ) {
      FUN_144b61af0(param_1[1]);
      return;
    }
    if (*(char *)(lVar4 + 0x59) == '\0') {
LAB_145205205:
      *(int *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x5c) + 1;
    }
    else {
      if ((*(longlong *)(lVar4 + 0x78) == *(longlong *)(lVar4 + 0x70)) &&
         (*(int *)(lVar4 + 100) == *(int *)(lVar4 + 0x5c))) {
LAB_145205202:
        *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + 1;
        goto LAB_145205205;
      }
      cVar11 = FUN_144b62480(lVar4,1,1);
      if (cVar11 != '\0') {
        uVar17 = *(uint *)(lVar4 + 0x5c);
        lVar5 = *(longlong *)(lVar4 + 0x70);
        uVar18 = *(uint *)(lVar4 + 100);
        puVar1 = (undefined4 *)(lVar5 + (ulonglong)uVar17 * 0x14);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        lVar7 = *(longlong *)(lVar4 + 0x78);
        puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar18 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        *(undefined4 *)(lVar7 + (ulonglong)uVar18 * 0x14 + 0x10) =
             *(undefined4 *)(lVar5 + 0x10 + (ulonglong)uVar17 * 0x14);
        goto LAB_145205202;
      }
    }
    cVar11 = *(char *)(param_1[1] + 0x58);
  } while( true );
}



// FUNCTION 145205230 FUN_145205230 body=831 status=ok
// SIG undefined FUN_145205230(void)

void FUN_145205230(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  
  lVar6 = *(longlong *)(param_2 + 8);
  if ((short)((ushort)*(byte *)(param_3 + 2) * 0x100 + (ushort)*(byte *)(param_3 + 3)) < 0) {
    if ((*(int *)(param_1 + 0x30) != 0) &&
       (uVar17 = *(int *)(param_1 + 0x30) - 1,
       *(int *)(param_1 + 0x34 + (ulonglong)(uVar17 & 0x3f) * 4) == *(int *)(lVar6 + 100))) {
      *(uint *)(param_1 + 0x30) = uVar17;
    }
    *(undefined4 *)(param_1 + 0x34 + (ulonglong)(*(uint *)(param_1 + 0x30) & 0x3f) * 4) =
         *(undefined4 *)(lVar6 + 100);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  if (((ushort)*(byte *)(param_3 + 2) * 0x100 + (ushort)*(byte *)(param_3 + 3) & 0x3fff) != 0) {
    uVar3 = *(undefined4 *)(lVar6 + 100);
    uVar17 = *(uint *)(param_1 + 0x30);
    if ((uVar17 != 0) && (*(uint *)(lVar6 + 0x5c) < *(uint *)(lVar6 + 0x60))) {
      puVar7 = *(undefined1 **)(param_1 + 0x18);
      puVar20 = &DAT_149a1f1a0;
      if (puVar7 <= puVar7 + ((((ulonglong)
                                CONCAT11(*(undefined1 *)(param_3 + 2),*(undefined1 *)(param_3 + 3))
                               & 0x3fff) - (longlong)puVar7) + *(longlong *)(param_1 + 0x10) >> 2 &
                             0xffffffff) * 4) {
        puVar20 = puVar7 + ((((ulonglong)
                              CONCAT11(*(undefined1 *)(param_3 + 2),*(undefined1 *)(param_3 + 3)) &
                             0x3fff) - (longlong)puVar7) + *(longlong *)(param_1 + 0x10) >> 2 &
                           0xffffffff) * 4;
      }
      uVar16 = 0;
      pbVar21 = puVar20 + 2;
      do {
        if (uVar17 == 0) {
          *(undefined4 *)(param_1 + 0x30) = 0;
          break;
        }
        uVar17 = uVar17 - 1;
        FUN_144b62270(lVar6,*(undefined4 *)(param_1 + 0x34 + (ulonglong)(uVar17 & 0x3f) * 4));
        cVar14 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar21 + -2,4);
        if (cVar14 == '\0') break;
        pbVar8 = *(byte **)(param_1 + 0x20);
        uVar18 = (uint)pbVar21[-1] * 0x10000 + (uint)*pbVar21 * 0x100 +
                 (uint)pbVar21[-2] * 0x1000000 + (uint)pbVar21[1];
        uVar15 = uVar18 & 0x3fffffff | 0xc0000000;
        if ((uVar18 & 0x20000000) == 0) {
          uVar15 = uVar18 & 0x3fffffff;
        }
        pbVar19 = &DAT_149a1f1a0;
        if (pbVar8 <= pbVar8 + (((ulonglong)
                                 ((uVar15 + *(int *)(*(longlong *)(lVar6 + 0x70) +
                                                    (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14)) * 2)
                                - (longlong)pbVar8) + *(longlong *)(param_1 + 0x10) >> 1 &
                               0xffffffff) * 2) {
          pbVar19 = pbVar8 + (((ulonglong)
                               ((uVar15 + *(int *)(*(longlong *)(lVar6 + 0x70) +
                                                  (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14)) * 2) -
                              (longlong)pbVar8) + *(longlong *)(param_1 + 0x10) >> 1 & 0xffffffff) *
                             2;
        }
        cVar14 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar19,2);
        if (cVar14 == '\0') break;
        uVar16 = (ulonglong)((int)uVar16 + (uint)pbVar19[1] + (uint)*pbVar19 * 0x100);
        if ((uVar18 & 0xc0000000) != 0) {
          pbVar8 = *(byte **)(param_1 + 0x28);
          uVar16 = (uVar16 - (longlong)pbVar8) + *(longlong *)(param_1 + 0x10) >> 1;
          pbVar19 = &DAT_149a1f1a0;
          if (pbVar8 <= pbVar8 + (uVar16 & 0xffffffff) * 2) {
            pbVar19 = pbVar8 + (uVar16 & 0xffffffff) * 2;
          }
          cVar14 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar19,2);
          if (cVar14 == '\0') break;
          FUN_1451e0990(lVar6,(uint)*pbVar19 * 0x100 + (uint)pbVar19[1]);
          uVar15 = *(int *)(param_1 + 0x30) - 1;
          iVar4 = *(int *)(param_1 + 0x34 + (ulonglong)(uVar15 & 0x3f) * 4);
          while (uVar17 < uVar15) {
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
            FUN_144b62270(lVar6,*(undefined4 *)
                                 (param_1 + 0x34 + (ulonglong)(*(uint *)(param_1 + 0x30) & 0x3f) * 4
                                 ));
            if ((*(longlong *)(lVar6 + 0x78) == *(longlong *)(lVar6 + 0x70)) &&
               (*(int *)(lVar6 + 100) == *(int *)(lVar6 + 0x5c))) {
LAB_1452054e7:
              *(undefined4 *)
               (*(longlong *)(lVar6 + 0x78) + (ulonglong)*(uint *)(lVar6 + 100) * 0x14) = 0xffff;
              *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
              *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
            }
            else {
              cVar14 = FUN_144b62480(lVar6,1,1);
              if (cVar14 != '\0') {
                uVar15 = *(uint *)(lVar6 + 0x5c);
                lVar9 = *(longlong *)(lVar6 + 0x70);
                uVar5 = *(uint *)(lVar6 + 100);
                puVar1 = (undefined4 *)(lVar9 + (ulonglong)uVar15 * 0x14);
                uVar11 = puVar1[1];
                uVar12 = puVar1[2];
                uVar13 = puVar1[3];
                lVar10 = *(longlong *)(lVar6 + 0x78);
                puVar2 = (undefined4 *)(lVar10 + (ulonglong)uVar5 * 0x14);
                *puVar2 = *puVar1;
                puVar2[1] = uVar11;
                puVar2[2] = uVar12;
                puVar2[3] = uVar13;
                *(undefined4 *)(lVar10 + (ulonglong)uVar5 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar9 + 0x10 + (ulonglong)uVar15 * 0x14);
                goto LAB_1452054e7;
              }
            }
            uVar15 = *(int *)(param_1 + 0x30) - 1;
          }
          FUN_144b62270(lVar6,iVar4 + 1);
          FUN_144b61e90(lVar6,*(undefined4 *)(param_1 + (ulonglong)(uVar17 & 0x3f) * 4 + 0x34),
                        *(undefined4 *)(lVar6 + 100));
        }
        pbVar21 = pbVar21 + 4;
      } while (-1 < (int)uVar18);
      FUN_144b62270(lVar6,uVar3);
    }
  }
  return;
}



// FUNCTION 145205570 FUN_145205570 body=995 status=ok
// SIG undefined FUN_145205570(void)

void FUN_145205570(longlong *param_1,undefined8 param_2)

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
  
  FUN_144b61b50(param_1[1]);
  iVar13 = 0;
  *(undefined4 *)(param_1[1] + 0x5c) = 0;
  cVar12 = *(char *)(param_1[1] + 0x58);
  while (cVar12 != '\0') {
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
                        pbVar7[(ulonglong)((uint)(iVar16 == 0) + iVar16 * iVar13) +
                               (ulonglong)pbVar7[5] + (ulonglong)pbVar7[4] * 0x100] * 4 + lVar6 + 3]
         + (ushort)pbVar7[(ulonglong)
                          pbVar7[(ulonglong)((uint)(iVar16 == 0) + iVar16 * iVar13) +
                                 (ulonglong)pbVar7[5] + (ulonglong)pbVar7[4] * 0x100] * 4 +
                          lVar6 + 2] * 0x100 & 0x3fff) != 0)) && (1 < uVar3 - iVar4)) {
      FUN_144b620d0(lVar5,iVar4,uVar3);
    }
    FUN_145205230(param_2,param_1,pbVar14);
    pbVar7 = (byte *)*param_1;
    lVar5 = param_1[1];
    iVar13 = (int)((((uint)*pbVar14 - (uint)pbVar7[4]) * 0x100 - (uint)pbVar7[5]) + (uint)pbVar14[1]
                  ) / (int)((uint)*pbVar7 * 0x100 + (uint)pbVar7[1]);
    if (*(int *)(lVar5 + 0x5c) == *(int *)(lVar5 + 0x60)) break;
    if ((((ushort)pbVar14[2] * 0x100 + (ushort)pbVar14[3] & 0x4000) == 0) ||
       (iVar4 = *(int *)(lVar5 + 0x30), *(int *)(lVar5 + 0x30) = iVar4 + -1, iVar4 < 1)) {
      lVar5 = param_1[1];
      if (*(char *)(lVar5 + 0x59) != '\0') {
        if ((*(longlong *)(lVar5 + 0x78) != *(longlong *)(lVar5 + 0x70)) ||
           (*(int *)(lVar5 + 100) != *(int *)(lVar5 + 0x5c))) {
          cVar12 = FUN_144b62480(lVar5,1,1);
          if (cVar12 == '\0') goto LAB_14520589b;
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
LAB_14520589b:
    cVar12 = *(char *)(param_1[1] + 0x58);
  }
  cVar12 = *(char *)(param_1[1] + 0x58);
  do {
    if ((cVar12 == '\0') || (lVar5 = param_1[1], *(uint *)(lVar5 + 0x60) <= *(uint *)(lVar5 + 0x5c))
       ) {
      FUN_144b61af0(param_1[1]);
      return;
    }
    if (*(char *)(lVar5 + 0x59) == '\0') {
LAB_145205935:
      *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
    }
    else {
      if ((*(longlong *)(lVar5 + 0x78) == *(longlong *)(lVar5 + 0x70)) &&
         (*(int *)(lVar5 + 100) == *(int *)(lVar5 + 0x5c))) {
LAB_145205932:
        *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
        goto LAB_145205935;
      }
      cVar12 = FUN_144b62480(lVar5,1,1);
      if (cVar12 != '\0') {
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
        goto LAB_145205932;
      }
    }
    cVar12 = *(char *)(param_1[1] + 0x58);
  } while( true );
}



// FUNCTION 145205960 FUN_145205960 body=438 status=ok
// SIG undefined FUN_145205960(void)

void FUN_145205960(undefined1 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if ((*(int *)(lVar1 + 0x5c) != *(int *)(lVar1 + 0x60)) || (param_1[0x10] != '\0')) {
    pbVar2 = *(byte **)(param_1 + 0x20);
    pbVar6 = &DAT_149a1f1a0;
    if (pbVar2 <= pbVar2 + (((ulonglong)
                             ((*(int *)(*(longlong *)(lVar1 + 0x70) +
                                       (ulonglong)*(uint *)(param_1 + 0x14) * 0x14) +
                               (uint)*(byte *)(param_3 + 4) * 0x100 + (uint)*(byte *)(param_3 + 5))
                             * 2) - (longlong)pbVar2) + *(longlong *)(param_1 + 0x18) >> 1 &
                           0xffffffff) * 2) {
      pbVar6 = pbVar2 + (((ulonglong)
                          ((*(int *)(*(longlong *)(lVar1 + 0x70) +
                                    (ulonglong)*(uint *)(param_1 + 0x14) * 0x14) +
                            (uint)*(byte *)(param_3 + 4) * 0x100 + (uint)*(byte *)(param_3 + 5)) * 2
                          ) - (longlong)pbVar2) + *(longlong *)(param_1 + 0x18) >> 1 & 0xffffffff) *
                        2;
    }
    cVar3 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar6,2);
    if ((cVar3 != '\0') && ((ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]) != 0)) {
      uVar4 = *(int *)(lVar1 + 0x5c) + 1;
      uVar5 = *(uint *)(lVar1 + 0x60);
      if (uVar4 < *(uint *)(lVar1 + 0x60)) {
        uVar5 = uVar4;
      }
      if (1 < uVar5 - *(int *)(param_1 + 0x14)) {
        FUN_144b620d0(lVar1);
      }
      *(uint *)(*(longlong *)(lVar1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x14) * 0x14) =
           (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
      *param_1 = 1;
    }
    pbVar2 = *(byte **)(param_1 + 0x20);
    uVar5 = *(int *)(lVar1 + 0x60) - 1;
    if (*(uint *)(lVar1 + 0x5c) < uVar5) {
      uVar5 = *(uint *)(lVar1 + 0x5c);
    }
    pbVar6 = &DAT_149a1f1a0;
    if (pbVar2 <= pbVar2 + (((ulonglong)
                             (((uint)*(byte *)(param_3 + 6) * 0x100 +
                               *(int *)((ulonglong)uVar5 * 0x14 + *(longlong *)(lVar1 + 0x70)) +
                              (uint)*(byte *)(param_3 + 7)) * 2) - (longlong)pbVar2) +
                            *(longlong *)(param_1 + 0x18) >> 1 & 0xffffffff) * 2) {
      pbVar6 = pbVar2 + (((ulonglong)
                          (((uint)*(byte *)(param_3 + 6) * 0x100 +
                            *(int *)((ulonglong)uVar5 * 0x14 + *(longlong *)(lVar1 + 0x70)) +
                           (uint)*(byte *)(param_3 + 7)) * 2) - (longlong)pbVar2) +
                         *(longlong *)(param_1 + 0x18) >> 1 & 0xffffffff) * 2;
    }
    cVar3 = FUN_144e2c5c0(*(longlong *)(param_1 + 8) + 0x20,pbVar6,2);
    if (cVar3 != '\0') {
      if ((ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]) != 0) {
        *(uint *)((ulonglong)uVar5 * 0x14 + *(longlong *)(lVar1 + 0x70)) =
             (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
        *param_1 = 1;
      }
    }
    if ((short)((ushort)*(byte *)(param_3 + 2) * 0x100 + (ushort)*(byte *)(param_3 + 3)) < 0) {
      param_1[0x10] = 1;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x5c);
    }
  }
  return;
}



// FUNCTION 145205b20 FUN_145205b20 body=946 status=ok
// SIG undefined FUN_145205b20(void)

void FUN_145205b20(longlong *param_1,longlong param_2)

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
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  iVar13 = 0;
  *(undefined4 *)(param_1[1] + 0x5c) = 0;
  cVar12 = *(char *)(param_1[1] + 0x58);
  do {
    if (cVar12 == '\0') {
      return;
    }
    lVar5 = param_1[1];
    uVar3 = *(uint *)(lVar5 + 0x5c);
    uVar14 = *(uint *)(lVar5 + 0x60);
    if (uVar3 < uVar14) {
      iVar4 = *(int *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)uVar3 * 0x14);
      lVar6 = *param_1;
      if (iVar4 == 0xffff) {
        uVar18 = 2;
      }
      else {
        pbVar15 = (byte *)((ulonglong)*(byte *)(lVar6 + 3) +
                          (ulonglong)*(byte *)(lVar6 + 2) * 0x100 + lVar6);
        uVar16 = (iVar4 + (uint)*pbVar15 * -0x100) - (uint)pbVar15[1];
        uVar18 = 1;
        if (uVar16 < (uint)pbVar15[2] * 0x100 + (uint)pbVar15[3]) {
          uVar18 = (uint)pbVar15[(ulonglong)uVar16 + 4];
        }
      }
    }
    else {
      uVar18 = 0;
    }
    pbVar15 = (byte *)*param_1;
    uVar16 = (uint)*pbVar15 * 0x100 + (uint)pbVar15[1];
    if (uVar16 <= uVar18) {
      uVar18 = 1;
    }
    pbVar15 = pbVar15 + (ulonglong)
                        pbVar15[(ulonglong)(uVar16 * iVar13 + uVar18) +
                                (ulonglong)pbVar15[4] * 0x100 + (ulonglong)pbVar15[5]] * 8 +
                        (ulonglong)pbVar15[7] + (ulonglong)pbVar15[6] * 0x100;
    if (iVar13 != 0) {
      uVar18 = uVar3;
      if (*(char *)(lVar5 + 0x59) != '\0') {
        uVar18 = *(uint *)(lVar5 + 100);
      }
      if (((uVar18 != 0) && (uVar3 < uVar14)) &&
         ((((*(uint *)(lVar5 + 0x5c) != uVar14 || (*(char *)(param_2 + 0x10) != '\0')) &&
           (((ushort)((ushort)pbVar15[4] * 0x100 + (ushort)pbVar15[5]) != -1 ||
            ((ushort)((ushort)pbVar15[6] * 0x100 + (ushort)pbVar15[7]) != -1)))) ||
          (((ushort)((ushort)*pbVar15 * 0x100 + (ushort)pbVar15[1]) != 0 ||
           ((ushort)((ushort)pbVar15[2] * 0x100 + (ushort)pbVar15[3]) != 0x4000)))))) {
        uVar14 = uVar3;
        if (*(char *)(lVar5 + 0x59) != '\0') {
          uVar14 = *(uint *)(lVar5 + 100);
        }
        FUN_144b62160(lVar5,uVar14 - 1,uVar3 + 1);
      }
    }
    lVar5 = param_1[1];
    iVar4 = *(int *)(lVar5 + 0x5c);
    uVar3 = iVar4 + 2;
    if (uVar3 <= *(uint *)(lVar5 + 0x60)) {
      pbVar7 = (byte *)*param_1;
      iVar17 = (uint)pbVar7[1] + (uint)*pbVar7 * 0x100;
      lVar6 = (ulonglong)
              pbVar7[(ulonglong)((uint)(iVar17 == 0) + iVar17 * iVar13) +
                     (ulonglong)pbVar7[5] + (ulonglong)pbVar7[4] * 0x100] * 8 +
              (ulonglong)pbVar7[6] * 0x100 + (ulonglong)pbVar7[7];
      if ((((iVar4 != *(int *)(lVar5 + 0x60)) || (*(char *)(param_2 + 0x10) != '\0')) &&
          (((ushort)((ushort)pbVar7[lVar6 + 4] * 0x100 + (ushort)pbVar7[lVar6 + 5]) != -1 ||
           ((ushort)((ushort)pbVar7[lVar6 + 6] * 0x100 + (ushort)pbVar7[lVar6 + 7]) != -1)))) &&
         (1 < uVar3 - iVar4)) {
        FUN_144b620d0(lVar5,iVar4,uVar3);
      }
    }
    FUN_145205960(param_2,param_1,pbVar15);
    pbVar7 = (byte *)*param_1;
    lVar5 = param_1[1];
    iVar13 = (int)((((uint)*pbVar15 - (uint)pbVar7[4]) * 0x100 - (uint)pbVar7[5]) + (uint)pbVar15[1]
                  ) / (int)((uint)*pbVar7 * 0x100 + (uint)pbVar7[1]);
    if (*(int *)(lVar5 + 0x5c) == *(int *)(lVar5 + 0x60)) {
      return;
    }
    if ((((ushort)pbVar15[3] + (ushort)pbVar15[2] * 0x100 & 0x4000) == 0) ||
       (iVar4 = *(int *)(lVar5 + 0x30), *(int *)(lVar5 + 0x30) = iVar4 + -1, iVar4 < 1)) {
      lVar5 = param_1[1];
      if (*(char *)(lVar5 + 0x59) != '\0') {
        if ((*(longlong *)(lVar5 + 0x78) != *(longlong *)(lVar5 + 0x70)) ||
           (*(int *)(lVar5 + 100) != *(int *)(lVar5 + 0x5c))) {
          cVar12 = FUN_144b62480(lVar5,1,1);
          if (cVar12 == '\0') goto LAB_145205e9c;
          uVar3 = *(uint *)(lVar5 + 0x5c);
          lVar6 = *(longlong *)(lVar5 + 0x70);
          uVar14 = *(uint *)(lVar5 + 100);
          puVar1 = (undefined4 *)(lVar6 + (ulonglong)uVar3 * 0x14);
          uVar9 = puVar1[1];
          uVar10 = puVar1[2];
          uVar11 = puVar1[3];
          lVar8 = *(longlong *)(lVar5 + 0x78);
          puVar2 = (undefined4 *)(lVar8 + (ulonglong)uVar14 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          *(undefined4 *)(lVar8 + (ulonglong)uVar14 * 0x14 + 0x10) =
               *(undefined4 *)(lVar6 + 0x10 + (ulonglong)uVar3 * 0x14);
        }
        *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
      }
      *(int *)(lVar5 + 0x5c) = *(int *)(lVar5 + 0x5c) + 1;
    }
LAB_145205e9c:
    cVar12 = *(char *)(param_1[1] + 0x58);
  } while( true );
}



// FUNCTION 145205ee0 FUN_145205ee0 body=703 status=ok
// SIG undefined FUN_145205ee0(void)

void FUN_145205ee0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  size_t local_b0;
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  size_t local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *(longlong *)(param_2 + 8);
  uVar14 = (uint)*(byte *)(param_3 + 2) * 0x100 + (uint)*(byte *)(param_3 + 3);
  if (uVar14 >> 0xf != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar6 + 0x5c);
  }
  if ((uVar14 >> 0xd & 1) != 0) {
    uVar13 = *(int *)(lVar6 + 0x5c) + 1;
    uVar11 = *(uint *)(lVar6 + 0x60);
    if (uVar13 < *(uint *)(lVar6 + 0x60)) {
      uVar11 = uVar13;
    }
    *(uint *)(param_1 + 8) = uVar11;
  }
  if ((uVar14 & 0xf) != 0) {
    uVar11 = *(uint *)(param_1 + 4);
    if (uVar11 < *(uint *)(param_1 + 8)) {
      local_58 = 0x302302011011000;
      local_50 = 0x31211312;
      local_4c = 0x33233222;
      bVar3 = *(byte *)((longlong)&local_58 + (ulonglong)(uVar14 & 0xf));
      uVar13 = (uint)(bVar3 >> 4);
      uVar14 = uVar13;
      if (2 < uVar13) {
        uVar14 = 2;
      }
      uVar16 = (ulonglong)uVar14;
      uVar15 = bVar3 & 0xf;
      uVar7 = uVar15;
      if (2 < uVar15) {
        uVar7 = 2;
      }
      if (uVar14 + uVar7 <= *(uint *)(param_1 + 8) - uVar11) {
        uVar12 = *(int *)(lVar6 + 0x5c) + 1;
        uVar4 = *(uint *)(lVar6 + 0x60);
        if (uVar12 < *(uint *)(lVar6 + 0x60)) {
          uVar4 = uVar12;
        }
        if (1 < uVar4 - uVar11) {
          FUN_144b61d00(lVar6,uVar11);
        }
        if (1 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4))) {
          FUN_144b61d00(lVar6);
        }
        lVar6 = *(longlong *)(lVar6 + 0x70);
        local_58 = uVar16 * 0x14;
        local_b8 = uVar16;
        memcpy(local_a8,(void *)(lVar6 + (ulonglong)*(uint *)(param_1 + 4) * 0x14),local_58);
        uVar11 = *(uint *)(param_1 + 8);
        local_b0 = (ulonglong)uVar7 * 0x14;
        memcpy(local_80,(void *)(lVar6 + ((ulonglong)uVar11 - (ulonglong)uVar7) * 0x14),local_b0);
        uVar17 = local_b8;
        if (uVar14 != uVar7) {
          uVar4 = *(uint *)(param_1 + 4);
          memmove((void *)(lVar6 + ((ulonglong)uVar7 + (ulonglong)uVar4) * 0x14),
                  (void *)(lVar6 + (uVar4 + uVar16) * 0x14),
                  (ulonglong)(((uVar11 - uVar4) - uVar7) - uVar14) * 0x14);
          uVar17 = (ulonglong)uVar14;
        }
        memcpy((void *)(lVar6 + (ulonglong)*(uint *)(param_1 + 4) * 0x14),local_80,local_b0);
        memcpy((void *)(lVar6 + (*(uint *)(param_1 + 8) - uVar17) * 0x14),local_a8,local_58);
        if (uVar13 == 3) {
          uVar16 = (ulonglong)(*(int *)(param_1 + 8) - 1);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          uVar5 = *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar16 = (ulonglong)(*(int *)(param_1 + 8) - 2);
          puVar2 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar10 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar10;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14);
          uVar16 = (ulonglong)(*(int *)(param_1 + 8) - 2);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14) = uVar5;
        }
        if (uVar15 == 3) {
          uVar16 = (ulonglong)*(uint *)(param_1 + 4);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          uVar5 = *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar16 = (ulonglong)(*(uint *)(param_1 + 4) + 1);
          puVar2 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          uVar10 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar10;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14);
          uVar16 = (ulonglong)(*(int *)(param_1 + 4) + 1);
          puVar1 = (undefined8 *)(lVar6 + uVar16 * 0x14);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          *(undefined4 *)(lVar6 + 0x10 + uVar16 * 0x14) = uVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1452061b0 FUN_1452061b0 body=812 status=ok
// SIG undefined FUN_1452061b0(void)

void FUN_1452061b0(longlong *param_1,longlong param_2)

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
           ((((pbVar14[3] & 0xf) != 0 && (*(uint *)(param_2 + 4) < *(uint *)(param_2 + 8))) ||
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
      if ((((uVar3 <= *(uint *)(lVar5 + 0x60)) &&
           (pbVar7 = (byte *)*param_1, iVar16 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1],
           (pbVar7[(ulonglong)
                   pbVar7[(ulonglong)(iVar16 * iVar13 + (uint)(iVar16 == 0)) +
                          (ulonglong)pbVar7[5] + (ulonglong)pbVar7[4] * 0x100] * 4 +
                   (ulonglong)pbVar7[7] + (ulonglong)pbVar7[6] * 0x100 + 3] & 0xf) != 0)) &&
          (*(uint *)(param_2 + 4) < *(uint *)(param_2 + 8))) && (1 < uVar3 - iVar4)) {
        FUN_144b620d0(lVar5,iVar4,uVar3);
      }
      FUN_145205ee0(param_2,param_1,pbVar14);
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
            if (cVar12 == '\0') goto LAB_1452064ab;
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
LAB_1452064ab:
    } while (*(char *)(param_1[1] + 0x58) != '\0');
  }
  return;
}



// FUNCTION 1452064e0 FUN_1452064e0 body=177 status=ok
// SIG undefined FUN_1452064e0(void)

byte * FUN_1452064e0(byte *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_res8 [8];
  
  uVar4 = (ulonglong)param_2;
  iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar3 == 0) {
    if (param_2 < param_3) {
      param_1 = param_1 + 2;
      pbVar1 = &DAT_149a1f1a0;
      if (param_1 <= param_1 + uVar4 * 4) {
        pbVar1 = param_1 + uVar4 * 4;
      }
      return pbVar1;
    }
  }
  else {
    local_res8[0] = param_2;
    if (iVar3 == 2) {
      lVar2 = FUN_145207610(param_1 + 2,local_res8);
      if (lVar2 != 0) {
        return (byte *)(lVar2 + 4);
      }
    }
    else {
      if (iVar3 == 4) {
        pbVar1 = (byte *)FUN_145206890(param_1,uVar4);
        return pbVar1;
      }
      if (iVar3 == 6) {
        lVar2 = FUN_145207480(param_1 + 2,local_res8);
        if (lVar2 != 0) {
          return (byte *)(lVar2 + 2);
        }
      }
      else if (iVar3 == 8) {
        pbVar1 = (byte *)FUN_145206e20(param_1,uVar4);
        return pbVar1;
      }
    }
  }
  return (byte *)0x0;
}



// FUNCTION 1452065a0 FUN_1452065a0 body=297 status=ok
// SIG undefined FUN_1452065a0(void)

bool FUN_1452065a0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 == '\0') {
    return false;
  }
  switch((uint)*param_1 * 0x100 + (uint)param_1[1]) {
  case 0:
    uVar2 = FUN_145206700(param_1,param_2);
    return (bool)uVar2;
  case 2:
    cVar1 = FUN_1452067f0(param_1 + 2,param_2);
    return cVar1 != '\0';
  case 4:
    uVar2 = FUN_145206ac0(param_1 + 2,param_2,param_1);
    return (bool)uVar2;
  case 6:
    cVar1 = FUN_145206d80(param_1 + 2,param_2);
    return cVar1 != '\0';
  case 8:
    cVar1 = FUN_144e2c5c0(param_2,param_1,6);
    if (cVar1 == '\0') {
      return false;
    }
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 6,((uint)param_1[4] * 0x100 + (uint)param_1[5]) * 4);
    if (cVar1 == '\0') {
      return false;
    }
    break;
  case 10:
    uVar2 = FUN_145206f60(param_1,param_2);
    return (bool)uVar2;
  }
  return true;
}



// FUNCTION 145206700 FUN_145206700 body=58 status=ok
// SIG undefined FUN_145206700(void)

undefined8 FUN_145206700(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(uint *)(param_2 + 0x30) < 0x3fffffff) {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,*(uint *)(param_2 + 0x30) * 4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145206740 FUN_145206740 body=174 status=ok
// SIG undefined FUN_145206740(void)

ulonglong FUN_145206740(undefined1 *param_1)

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



// FUNCTION 1452067f0 FUN_1452067f0 body=156 status=ok
// SIG undefined FUN_1452067f0(void)

undefined8 FUN_1452067f0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,10);
  if (cVar1 != '\0') {
    if (7 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
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



// FUNCTION 145206890 FUN_145206890 body=173 status=ok
// SIG undefined FUN_145206890(void)

undefined1 * FUN_145206890(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  pbVar2 = (byte *)FUN_145207550(param_1 + 2,local_res10);
  if (pbVar2 == (byte *)0x0) {
    return (undefined1 *)0x0;
  }
  if (((uint)pbVar2[2] * 0x100 + (uint)pbVar2[3] <= param_2) &&
     (param_2 <= (uint)*pbVar2 * 0x100 + (uint)pbVar2[1])) {
    puVar4 = (undefined1 *)((ulonglong)pbVar2[5] + (ulonglong)pbVar2[4] * 0x100 + param_1);
    puVar1 = puVar4 + (ulonglong)((param_2 + (uint)pbVar2[2] * -0x100) - (uint)pbVar2[3]) * 4;
    puVar3 = &DAT_149a1f1a0;
    if (puVar4 <= puVar1) {
      puVar3 = puVar1;
    }
    return puVar3;
  }
  return (undefined1 *)0x0;
}



// FUNCTION 145206950 FUN_145206950 body=179 status=ok
// SIG undefined FUN_145206950(void)

undefined8 FUN_145206950(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,6);
  if (cVar1 != '\0') {
    if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) <=
        (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
      cVar1 = FUN_1452073e0(param_1 + 4,param_2,param_3,
                            param_1[1] + 1 +
                            (((uint)*param_1 - (uint)param_1[2]) * 0x100 - (uint)param_1[3]));
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 145206a10 FUN_145206a10 body=174 status=ok
// SIG undefined FUN_145206a10(void)

ulonglong FUN_145206a10(undefined1 *param_1)

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



// FUNCTION 145206ac0 FUN_145206ac0 body=368 status=ok
// SIG undefined FUN_145206ac0(void)

undefined1 FUN_145206ac0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  cVar1 = FUN_145206c30();
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = FUN_145206a10(param_1);
  uVar6 = 0;
  uVar5 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
  if (uVar5 != bVar2) {
    do {
      if ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 0) {
LAB_145206bbf:
        iVar4 = 0;
      }
      else {
        uVar7 = 0;
        pbVar3 = param_1 + (ulonglong)
                           ((uint)CONCAT11(*param_1,param_1[1]) *
                           ((param_1[3] - 1) + (uint)param_1[2] * 0x100)) + 10;
        do {
          if ((ushort)((ushort)pbVar3[1] + (ushort)*pbVar3 * 0x100) != -1) goto LAB_145206bbf;
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
      cVar1 = FUN_145206950(pbVar3,param_2,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5 - bVar2);
  }
  return 1;
}



// FUNCTION 145206c30 FUN_145206c30 body=156 status=ok
// SIG undefined FUN_145206c30(void)

undefined8 FUN_145206c30(byte *param_1,undefined8 param_2)

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



// FUNCTION 145206cd0 FUN_145206cd0 body=174 status=ok
// SIG undefined FUN_145206cd0(void)

ulonglong FUN_145206cd0(undefined1 *param_1)

{
  byte *pbVar1;
  
  if ((ushort)((ushort)(byte)param_1[2] * 0x100 + (ushort)(byte)param_1[3]) == 0) {
    return 0;
  }
  pbVar1 = param_1 + (ulonglong)
                     ((uint)CONCAT11(*param_1,param_1[1]) *
                     ((uint)(byte)param_1[3] + (uint)(byte)param_1[2] * 0x100 + -1)) + 10;
  if ((ushort)((ushort)pbVar1[1] + (ushort)*pbVar1 * 0x100) == -1) {
    return CONCAT71((int7)((ulonglong)(pbVar1 + 2) >> 8),1);
  }
  return (ulonglong)pbVar1 & 0xffffffffffffff00;
}



// FUNCTION 145206d80 FUN_145206d80 body=156 status=ok
// SIG undefined FUN_145206d80(void)

undefined8 FUN_145206d80(byte *param_1,undefined8 param_2)

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



// FUNCTION 145206e20 FUN_145206e20 body=105 status=ok
// SIG undefined FUN_145206e20(void)

undefined1 * FUN_145206e20(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (((uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3) <= param_2) &&
     ((param_2 + (uint)*(byte *)(param_1 + 2) * -0x100) - (uint)*(byte *)(param_1 + 3) <
      (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5))) {
    puVar1 = (undefined1 *)(param_1 + 6) +
             (ulonglong)
             ((param_2 + (uint)*(byte *)(param_1 + 2) * -0x100) - (uint)*(byte *)(param_1 + 3)) * 4;
    puVar2 = &DAT_149a1f1a0;
    if ((undefined1 *)(param_1 + 6) <= puVar1) {
      puVar2 = puVar1;
    }
    return puVar2;
  }
  return (undefined1 *)0x0;
}



// FUNCTION 145206e90 FUN_145206e90 body=208 status=ok
// SIG undefined FUN_145206e90(void)

uint FUN_145206e90(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  
  if (((uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5) <= param_2) &&
     ((param_2 + (uint)*(byte *)(param_1 + 4) * -0x100) - (uint)*(byte *)(param_1 + 5) <
      (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7))) {
    pbVar3 = (byte *)(param_1 + 8) +
             ((uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100) *
             ((param_2 + (uint)*(byte *)(param_1 + 4) * -0x100) - (uint)*(byte *)(param_1 + 5));
    pbVar6 = &DAT_149a1f1a0;
    if ((byte *)(param_1 + 8) <= pbVar3) {
      pbVar6 = pbVar3;
    }
    uVar2 = 0;
    uVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 != 0) {
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar2 = uVar2 << 8 | (uint)bVar1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 145206f60 FUN_145206f60 body=148 status=ok
// SIG undefined FUN_145206f60(void)

undefined8 FUN_145206f60(longlong param_1,undefined8 param_2)

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



// FUNCTION 145207000 FUN_145207000 body=395 status=ok
// SIG undefined FUN_145207000(void)

undefined8 FUN_145207000(byte *param_1,int *param_2,uint param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  
  if ((0x7ffffffe < param_3) || (cVar2 = FUN_144e2c5c0(param_2,param_1,param_3 * 2), cVar2 == '\0'))
  {
    return 0;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      if ((((param_1 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < param_1)) ||
          ((uint)(param_2[4] - (int)param_1) < 2)) ||
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
      FUN_1451f9f30("SANITIZE",param_1,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",param_1,param_1 + 2,2,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if (((cVar2 == '\0') ||
          (cVar2 = FUN_144e2c5c0(param_2,param_4,(uint)*param_1 * 0x100 + (uint)param_1[1]),
          cVar2 == '\0')) ||
         (cVar2 = FUN_1451f1950((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100 + param_4,
                                param_2), cVar2 == '\0')) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 2;
    } while (uVar4 < param_3);
  }
  return 1;
}



// FUNCTION 145207190 FUN_145207190 body=200 status=ok
// SIG undefined FUN_145207190(void)

byte * FUN_145207190(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  iVar6 = 0;
  bVar3 = FUN_1451fbce0();
  iVar8 = (((uint)param_1[2] * 0x100 + (uint)param_1[3]) - (uint)bVar3) + -1;
  if (-1 < iVar8) {
    do {
      uVar7 = (uint)(iVar8 + iVar6) >> 1;
      uVar4 = uVar7 * ((uint)bVar1 * 0x100 + (uint)bVar2);
      uVar5 = (uint)(ushort)((ushort)param_1[(ulonglong)uVar4 + 10] * 0x100 +
                            (ushort)param_1[(ulonglong)uVar4 + 0xb]);
      if (*param_2 < uVar5) {
        iVar8 = uVar7 - 1;
      }
      else {
        if (*param_2 == uVar5) {
          return param_1 + (ulonglong)uVar4 + 10;
        }
        iVar6 = uVar7 + 1;
      }
    } while (iVar6 <= iVar8);
  }
  return (byte *)0x0;
}



// FUNCTION 145207260 FUN_145207260 body=189 status=ok
// SIG undefined FUN_145207260(void)

byte * FUN_145207260(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  iVar5 = 0;
  bVar3 = FUN_1451f1c80();
  iVar7 = (((uint)param_1[2] * 0x100 + (uint)param_1[3]) - (uint)bVar3) + -1;
  if (-1 < iVar7) {
    do {
      uVar4 = (uint)(iVar7 + iVar5) >> 1;
      uVar6 = uVar4 * ((uint)bVar1 * 0x100 + (uint)bVar2);
      if (*param_2 <
          (uint)param_1[(ulonglong)uVar6 + 0xc] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xd]) {
        iVar7 = uVar4 - 1;
      }
      else {
        if (*param_2 <=
            (uint)param_1[(ulonglong)uVar6 + 10] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xb]) {
          return param_1 + (ulonglong)uVar6 + 10;
        }
        iVar5 = uVar4 + 1;
      }
    } while (iVar5 <= iVar7);
  }
  return (byte *)0x0;
}



// FUNCTION 145207320 FUN_145207320 body=189 status=ok
// SIG undefined FUN_145207320(void)

byte * FUN_145207320(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  iVar5 = 0;
  bVar3 = FUN_1451fbb70();
  iVar7 = (((uint)param_1[2] * 0x100 + (uint)param_1[3]) - (uint)bVar3) + -1;
  if (-1 < iVar7) {
    do {
      uVar4 = (uint)(iVar7 + iVar5) >> 1;
      uVar6 = uVar4 * ((uint)bVar1 * 0x100 + (uint)bVar2);
      if (*param_2 <
          (uint)param_1[(ulonglong)uVar6 + 0xc] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xd]) {
        iVar7 = uVar4 - 1;
      }
      else {
        if (*param_2 <=
            (uint)param_1[(ulonglong)uVar6 + 10] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xb]) {
          return param_1 + (ulonglong)uVar6 + 10;
        }
        iVar5 = uVar4 + 1;
      }
    } while (iVar5 <= iVar7);
  }
  return (byte *)0x0;
}



// FUNCTION 1452073e0 FUN_1452073e0 body=157 status=ok
// SIG undefined FUN_1452073e0(void)

undefined8 FUN_1452073e0(byte *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((((cVar1 != '\0') &&
       (cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]),
       cVar1 != '\0')) && (param_4 < 0x3fffffff)) &&
     (cVar1 = FUN_144e2c5c0(param_2,(ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100 + param_3,
                            param_4 * 4), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 145207480 FUN_145207480 body=200 status=ok
// SIG undefined FUN_145207480(void)

byte * FUN_145207480(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  iVar6 = 0;
  bVar3 = FUN_145206cd0();
  iVar8 = (((uint)param_1[2] * 0x100 + (uint)param_1[3]) - (uint)bVar3) + -1;
  if (-1 < iVar8) {
    do {
      uVar7 = (uint)(iVar8 + iVar6) >> 1;
      uVar4 = uVar7 * ((uint)bVar1 * 0x100 + (uint)bVar2);
      uVar5 = (uint)(ushort)((ushort)param_1[(ulonglong)uVar4 + 10] * 0x100 +
                            (ushort)param_1[(ulonglong)uVar4 + 0xb]);
      if (*param_2 < uVar5) {
        iVar8 = uVar7 - 1;
      }
      else {
        if (*param_2 == uVar5) {
          return param_1 + (ulonglong)uVar4 + 10;
        }
        iVar6 = uVar7 + 1;
      }
    } while (iVar6 <= iVar8);
  }
  return (byte *)0x0;
}



// FUNCTION 145207550 FUN_145207550 body=189 status=ok
// SIG undefined FUN_145207550(void)

byte * FUN_145207550(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  iVar5 = 0;
  bVar3 = FUN_145206a10();
  iVar7 = (((uint)param_1[2] * 0x100 + (uint)param_1[3]) - (uint)bVar3) + -1;
  if (-1 < iVar7) {
    do {
      uVar4 = (uint)(iVar7 + iVar5) >> 1;
      uVar6 = uVar4 * ((uint)bVar1 * 0x100 + (uint)bVar2);
      if (*param_2 <
          (uint)param_1[(ulonglong)uVar6 + 0xc] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xd]) {
        iVar7 = uVar4 - 1;
      }
      else {
        if (*param_2 <=
            (uint)param_1[(ulonglong)uVar6 + 10] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xb]) {
          return param_1 + (ulonglong)uVar6 + 10;
        }
        iVar5 = uVar4 + 1;
      }
    } while (iVar5 <= iVar7);
  }
  return (byte *)0x0;
}



// FUNCTION 145207610 FUN_145207610 body=189 status=ok
// SIG undefined FUN_145207610(void)

byte * FUN_145207610(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  iVar5 = 0;
  bVar3 = FUN_145206740();
  iVar7 = (((uint)param_1[2] * 0x100 + (uint)param_1[3]) - (uint)bVar3) + -1;
  if (-1 < iVar7) {
    do {
      uVar4 = (uint)(iVar7 + iVar5) >> 1;
      uVar6 = uVar4 * ((uint)bVar1 * 0x100 + (uint)bVar2);
      if (*param_2 <
          (uint)param_1[(ulonglong)uVar6 + 0xc] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xd]) {
        iVar7 = uVar4 - 1;
      }
      else {
        if (*param_2 <=
            (uint)param_1[(ulonglong)uVar6 + 10] * 0x100 + (uint)param_1[(ulonglong)uVar6 + 0xb]) {
          return param_1 + (ulonglong)uVar6 + 10;
        }
        iVar5 = uVar4 + 1;
      }
    } while (iVar5 <= iVar7);
  }
  return (byte *)0x0;
}



// FUNCTION 1452076f0 FUN_1452076f0 body=160 status=ok
// SIG undefined FUN_1452076f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1452076f0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_145207790();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 0x24),0,
             (ulonglong)(uVar2 - uVar1) * 0x24);
    }
    *param_1 = uVar2;
    return (undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar2 - 1) * 0x24);
  }
  DAT_14c793f80 = 0;
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  _DAT_14c793f70 = 0;
  _DAT_14c793f78 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 145207790 FUN_145207790 body=139 status=ok
// SIG undefined FUN_145207790(void)

undefined8 FUN_145207790(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2 <= uVar1) {
    return 1;
  }
  uVar4 = (ulonglong)uVar1;
  do {
    uVar3 = (int)uVar4 + 8 + (int)(uVar4 >> 1);
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 <= param_2);
  if (((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x71c71c7)) {
    lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),uVar4 * 0x24);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return 0;
}



// FUNCTION 145207820 FUN_145207820 body=386 status=ok
// SIG undefined FUN_145207820(void)

void FUN_145207820(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStackY_98 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_60 = 0xfffffffffffffffe;
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar6 = 2;
  local_58 = param_1;
  _eh_vector_constructor_iterator_
            (param_1 + 0xc,0x10,2,(_func_void_void_ptr *)&LAB_145208f90,FUN_145208fa0);
  memset(param_1,0,0x80);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
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
  local_68 = 3;
  local_64 = 3;
  FUN_145487990(*(undefined4 *)((longlong)param_1 + 0xc),param_1[2],&local_68,local_50);
  puVar7 = param_1 + 6;
  puVar5 = &DAT_149c56418;
  do {
    uVar1 = *puVar5;
    iVar4 = FUN_1451dffa0(*param_1,uVar1,local_68,local_50);
    *(bool *)puVar7 = iVar4 != 0;
    FUN_1451e01d0(*param_1,uVar1,
                  *(undefined4 *)((longlong)puVar5 + (longlong)param_1 + -0x149c563e4),local_64);
    puVar5 = puVar5 + 1;
    puVar7 = (undefined8 *)((longlong)puVar7 + 1);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStackY_98);
}



// FUNCTION 1452079c0 FUN_1452079c0 body=164 status=ok
// SIG undefined FUN_1452079c0(void)

void FUN_1452079c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  plVar1 = (longlong *)(param_1 + 0x68);
  lVar2 = 2;
  do {
    if (*plVar1 != 0) {
      thunk_FUN_1400020a8();
    }
    plVar1[-1] = 0;
    *plVar1 = 0;
    plVar1 = plVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x60),0x10,2,FUN_145208fa0);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 145207a70 FUN_145207a70 body=119 status=ok
// SIG undefined FUN_145207a70(void)

void FUN_145207a70(longlong param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != 0) {
    piVar2 = (int *)FUN_145208e60(param_1 + 0x50);
    iVar3 = 0;
    if ((param_3 & 1) != 0) {
      iVar3 = param_4;
    }
    *piVar2 = param_2;
    iVar1 = *(int *)(param_1 + 0x50);
    piVar2[2] = param_4;
    piVar2[1] = iVar1;
    piVar2[3] = param_3;
    piVar2[4] = iVar3;
    piVar2[5] = *(int *)(param_1 + 0x44);
    piVar2[6] = *(int *)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 145207af0 FUN_145207af0 body=4214 status=ok
// SIG undefined FUN_145207af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145207af0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  short *psVar26;
  undefined4 *puVar27;
  int iVar28;
  ulonglong uVar29;
  uint *puVar30;
  longlong lVar31;
  uint auStack_9c [3];
  undefined8 local_90;
  longlong local_88;
  uint *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  int local_60 [2];
  longlong local_58;
  undefined1 local_50 [8];
  int local_48 [4];
  
  lVar17 = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  puVar24 = (undefined4 *)((longlong)param_1 + 0x3c);
  local_60[0] = 0;
  local_60[1] = 0;
  puVar19 = (undefined1 *)(param_2 + 8);
  lVar14 = 2;
  local_90 = param_1;
  local_80 = puVar24;
  local_70 = 0x149c563dc - (longlong)param_1;
  local_68 = param_2;
  local_58 = param_3;
  do {
    uVar1 = *(undefined4 *)((0x149c563dc - (longlong)param_1) + (longlong)puVar24);
    *(undefined4 *)((param_2 - (longlong)param_1) + -0x3c + (longlong)puVar24) = puVar24[-5];
    *puVar19 = puVar19[(longlong)param_1 + (0x28 - param_2)];
    FUN_1451e02c0(*param_1,uVar1,puVar24[-2],*puVar24,(longlong)local_48 + lVar17,local_50 + lVar17)
    ;
    lVar31 = local_68;
    puVar30 = local_80;
    lVar17 = lVar17 + 4;
    puVar19 = puVar19 + 1;
    puVar24 = puVar24 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (*(int *)(param_1 + 10) != 0) {
    if (*(uint *)(param_1 + 10) != 0) {
      qsort((void *)param_1[0xb],(ulonglong)*(uint *)(param_1 + 10),0x1c,
            (_PtFuncCompare *)&LAB_145208db0);
    }
    uVar8 = 0;
    uVar13 = 1;
    uVar9 = 0;
    if (1 < *(uint *)(param_1 + 10)) {
      do {
        uVar16 = (uint)uVar13;
        if (uVar16 < *(uint *)(param_1 + 10)) {
          piVar23 = (int *)(uVar13 * 0x1c + param_1[0xb]);
        }
        else {
          _DAT_14c793f60 = 0;
          _DAT_14c793f68 = 0;
          piVar23 = &DAT_14c793f60;
          DAT_14c793f78 = 0;
          _DAT_14c793f70 = 0;
        }
        uVar9 = (uint)uVar8;
        if (uVar9 < *(uint *)(param_1 + 10)) {
          piVar7 = (int *)(uVar8 * 0x1c + param_1[0xb]);
        }
        else {
          _DAT_14c793f60 = 0;
          _DAT_14c793f68 = 0;
          piVar7 = &DAT_14c793f60;
          DAT_14c793f78 = 0;
          _DAT_14c793f70 = 0;
        }
        if (*piVar23 == *piVar7) {
          if (uVar16 < *(uint *)(param_1 + 10)) {
            puVar24 = (undefined4 *)(uVar13 * 0x1c + param_1[0xb]);
          }
          else {
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar24 = &DAT_14c793f60;
            DAT_14c793f78 = 0;
            _DAT_14c793f70 = 0;
          }
          if ((*(byte *)(puVar24 + 3) & 1) == 0) {
            if (uVar9 < *(uint *)(param_1 + 10)) {
              puVar24 = (undefined4 *)(uVar8 * 0x1c + param_1[0xb]);
            }
            else {
              _DAT_14c793f60 = 0;
              _DAT_14c793f68 = 0;
              puVar24 = &DAT_14c793f60;
              DAT_14c793f78 = 0;
              _DAT_14c793f70 = 0;
            }
            puVar24[3] = puVar24[3] & 0xfffffffe;
            if (uVar16 < *(uint *)(param_1 + 10)) {
              puVar24 = (undefined4 *)(uVar13 * 0x1c + param_1[0xb]);
            }
            else {
              _DAT_14c793f60 = 0;
              _DAT_14c793f68 = 0;
              puVar24 = &DAT_14c793f60;
              DAT_14c793f78 = 0;
              _DAT_14c793f70 = 0;
            }
            if (uVar9 < *(uint *)(param_1 + 10)) {
              puVar21 = (undefined4 *)(uVar8 * 0x1c + param_1[0xb]);
            }
            else {
              _DAT_14c793f60 = 0;
              _DAT_14c793f68 = 0;
              puVar21 = &DAT_14c793f60;
              DAT_14c793f78 = 0;
              _DAT_14c793f70 = 0;
            }
            uVar11 = puVar24[2];
            if ((uint)puVar24[2] < (uint)puVar21[2]) {
              uVar11 = puVar21[2];
            }
            if (uVar9 < *(uint *)(param_1 + 10)) {
              puVar24 = (undefined4 *)(uVar8 * 0x1c + param_1[0xb]);
            }
            else {
              _DAT_14c793f60 = 0;
              _DAT_14c793f68 = 0;
              puVar24 = &DAT_14c793f60;
              DAT_14c793f78 = 0;
              _DAT_14c793f70 = 0;
            }
            puVar24[2] = uVar11;
          }
          else {
            if (uVar9 < *(uint *)(param_1 + 10)) {
              puVar24 = (undefined4 *)(uVar8 * 0x1c + param_1[0xb]);
            }
            else {
              _DAT_14c793f60 = 0;
              _DAT_14c793f68 = 0;
              puVar24 = &DAT_14c793f60;
              DAT_14c793f78 = 0;
              _DAT_14c793f70 = 0;
            }
            puVar24[3] = puVar24[3] | 1;
            if (uVar16 < *(uint *)(param_1 + 10)) {
              puVar24 = (undefined4 *)(uVar13 * 0x1c + param_1[0xb]);
            }
            else {
              _DAT_14c793f60 = 0;
              _DAT_14c793f68 = 0;
              puVar24 = &DAT_14c793f60;
              DAT_14c793f78 = 0;
              _DAT_14c793f70 = 0;
            }
            if (uVar9 < *(uint *)(param_1 + 10)) {
              puVar21 = (undefined4 *)(uVar8 * 0x1c + param_1[0xb]);
            }
            else {
              DAT_14c793f78 = 0;
              puVar21 = &DAT_14c793f60;
              _DAT_14c793f60 = 0;
              _DAT_14c793f68 = 0;
              _DAT_14c793f70 = 0;
            }
            puVar21[2] = puVar24[2];
            if (uVar16 < *(uint *)(param_1 + 10)) {
              puVar24 = (undefined4 *)(uVar13 * 0x1c + param_1[0xb]);
            }
            else {
              _DAT_14c793f60 = 0;
              _DAT_14c793f68 = 0;
              puVar24 = &DAT_14c793f60;
              DAT_14c793f78 = 0;
              _DAT_14c793f70 = 0;
            }
            if (uVar9 < *(uint *)(param_1 + 10)) {
              *(undefined4 *)(uVar8 * 0x1c + param_1[0xb] + 0x10) = puVar24[4];
            }
            else {
              DAT_14c793f78 = 0;
              _DAT_14c793f60 = 0;
              _DAT_14c793f68 = 0;
              _DAT_14c793f70 = (ulonglong)(uint)puVar24[4];
            }
          }
          if (uVar16 < *(uint *)(param_1 + 10)) {
            puVar24 = (undefined4 *)(uVar13 * 0x1c + param_1[0xb]);
          }
          else {
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar24 = &DAT_14c793f60;
            DAT_14c793f78 = 0;
            _DAT_14c793f70 = 0;
          }
          if (uVar9 < *(uint *)(param_1 + 10)) {
            puVar21 = (undefined4 *)(uVar8 * 0x1c + param_1[0xb]);
          }
          else {
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar21 = &DAT_14c793f60;
            DAT_14c793f78 = 0;
            _DAT_14c793f70 = 0;
          }
          puVar21[3] = puVar21[3] | puVar24[3] & 2;
          if (uVar16 < *(uint *)(param_1 + 10)) {
            puVar24 = (undefined4 *)(uVar13 * 0x1c + param_1[0xb]);
          }
          else {
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar24 = &DAT_14c793f60;
            DAT_14c793f78 = 0;
            _DAT_14c793f70 = 0;
          }
          if (uVar9 < *(uint *)(param_1 + 10)) {
            puVar21 = (undefined4 *)(uVar8 * 0x1c + param_1[0xb]);
          }
          else {
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar21 = &DAT_14c793f60;
            DAT_14c793f78 = 0;
            _DAT_14c793f70 = 0;
          }
          uVar11 = puVar24[5];
          if ((uint)puVar21[5] < (uint)puVar24[5]) {
            uVar11 = puVar21[5];
          }
          if (uVar9 < *(uint *)(param_1 + 10)) {
            puVar24 = (undefined4 *)(uVar8 * 0x1c + param_1[0xb]);
          }
          else {
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar24 = &DAT_14c793f60;
            DAT_14c793f78 = 0;
            _DAT_14c793f70 = 0;
          }
          puVar24[5] = uVar11;
          if (uVar16 < *(uint *)(param_1 + 10)) {
            puVar24 = (undefined4 *)(uVar13 * 0x1c + param_1[0xb]);
          }
          else {
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar24 = &DAT_14c793f60;
            DAT_14c793f78 = 0;
            _DAT_14c793f70 = 0;
          }
          if (uVar9 < *(uint *)(param_1 + 10)) {
            puVar21 = (undefined4 *)(uVar8 * 0x1c + param_1[0xb]);
          }
          else {
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar21 = &DAT_14c793f60;
            DAT_14c793f78 = 0;
            _DAT_14c793f70 = 0;
          }
          uVar11 = puVar24[6];
          if ((uint)puVar21[6] < (uint)puVar24[6]) {
            uVar11 = puVar21[6];
          }
          if (uVar9 < *(uint *)(param_1 + 10)) {
            puVar24 = (undefined4 *)(uVar8 * 0x1c + param_1[0xb]);
          }
          else {
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar24 = &DAT_14c793f60;
            DAT_14c793f78 = 0;
            _DAT_14c793f70 = 0;
          }
          puVar24[6] = uVar11;
        }
        else {
          uVar9 = uVar9 + 1;
          uVar8 = (ulonglong)uVar9;
          if (uVar16 < *(uint *)(param_1 + 10)) {
            puVar24 = (undefined4 *)(uVar13 * 0x1c + param_1[0xb]);
          }
          else {
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar24 = &DAT_14c793f60;
            DAT_14c793f78 = 0;
            _DAT_14c793f70 = 0;
          }
          if (uVar9 < *(uint *)(param_1 + 10)) {
            puVar21 = (undefined4 *)((ulonglong)uVar9 * 0x1c + param_1[0xb]);
          }
          else {
            DAT_14c793f78 = 0;
            puVar21 = &DAT_14c793f60;
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            _DAT_14c793f70 = 0;
          }
          uVar1 = puVar24[1];
          uVar2 = puVar24[2];
          uVar3 = puVar24[3];
          *puVar21 = *puVar24;
          puVar21[1] = uVar1;
          puVar21[2] = uVar2;
          puVar21[3] = uVar3;
          *(undefined8 *)(puVar21 + 4) = *(undefined8 *)(puVar24 + 4);
          puVar21[6] = puVar24[6];
        }
        uVar9 = (uint)uVar8;
        uVar13 = (ulonglong)(uVar16 + 1);
      } while (uVar16 + 1 < *(uint *)(param_1 + 10));
    }
    uVar16 = uVar9 + 1;
    if ((int)(uVar9 + 1) < 0) {
      uVar16 = 0;
    }
    if (uVar16 < *(uint *)(param_1 + 10)) {
      *(uint *)(param_1 + 10) = uVar16;
    }
  }
  uVar8 = 0;
  uVar9 = 2;
  auStack_9c[1] = 2;
  auStack_9c[2] = 0;
  if (*(int *)(param_1 + 10) != 0) {
    if (*(int *)(param_1 + 10) != 0) goto LAB_145208173;
    piVar23 = &DAT_14c793f60;
    _DAT_14c793f60 = 0;
    _DAT_14c793f68 = 0;
    DAT_14c793f78 = 0;
    _DAT_14c793f70 = 0;
    do {
      uVar16 = 0;
      uVar11 = 0;
      if (((*(byte *)(piVar23 + 3) & 1) == 0) || (piVar23[2] != 1)) {
        uVar10 = piVar23[2];
        if (uVar10 != 0) {
          iVar28 = 0x1f;
          if (uVar10 != 0) {
            for (; uVar10 >> iVar28 == 0; iVar28 = iVar28 + -1) {
            }
          }
          uVar11 = iVar28 + 1;
          if (8 < uVar11) {
            uVar11 = 8;
          }
        }
      }
      else {
        uVar10 = 1;
      }
      if (uVar10 != 0) {
        local_88 = CONCAT44(local_88._4_4_,uVar11 + uVar9);
        if (uVar11 + uVar9 < 0x21) {
          puVar15 = &local_78;
          lVar17 = 2;
          do {
            iVar28 = *piVar23;
            if (*(int *)((longlong)&local_90 + (4 - (longlong)param_1) + (longlong)puVar30) ==
                iVar28) {
              *(undefined4 *)(((longlong)auStack_9c - (longlong)param_1) + (longlong)puVar30) =
                   *(undefined4 *)
                    ((longlong)puVar30 + (longlong)piVar23 + (-0x28 - (longlong)param_1));
            }
            uVar9 = FUN_1451e03e0(*local_90,*(undefined4 *)((longlong)puVar30 + local_70),
                                  puVar30[-2],*puVar30,iVar28,puVar15);
            puVar4 = local_90;
            uVar16 = uVar16 | uVar9;
            puVar15 = (undefined8 *)((longlong)puVar15 + 4);
            puVar30 = puVar30 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          if (uVar16 == 0) {
            if ((*(byte *)(piVar23 + 3) & 0x10) != 0) {
              puVar24 = &DAT_149c56418;
              puVar15 = &local_78;
              lVar17 = 2;
              uVar16 = 0;
              do {
                bVar6 = FUN_1451e1330(*puVar4,*puVar24,*piVar23,puVar15);
                puVar24 = puVar24 + 1;
                uVar16 = uVar16 | bVar6;
                puVar15 = (undefined8 *)((longlong)puVar15 + 4);
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
              if (uVar16 != 0) goto LAB_1452082a9;
            }
            puVar30 = local_80;
            param_1 = local_90;
            lVar31 = local_68;
            uVar9 = auStack_9c[1];
            if ((*(byte *)(piVar23 + 3) & 2) == 0) goto LAB_14520839f;
          }
LAB_1452082a9:
          lVar31 = local_68;
          piVar7 = (int *)FUN_1452076f0(local_68 + 0x10);
          uVar9 = auStack_9c[1];
          *piVar7 = *piVar23;
          piVar7[1] = (int)local_78;
          piVar7[2] = local_78._4_4_;
          piVar7[3] = piVar23[5];
          piVar7[4] = piVar23[6];
          piVar7[8] = piVar7[8] ^ (~((uint)piVar23[3] >> 1) ^ piVar7[8]) & 2;
          uVar11 = (~((uint)piVar23[3] >> 1) ^ piVar7[8]) & 4 ^ piVar7[8];
          piVar7[8] = uVar11;
          piVar7[8] = ((uint)piVar23[3] >> 2 ^ uVar11) & 8 ^ uVar11;
          if (((*(byte *)(piVar23 + 3) & 1) == 0) || (piVar23[2] != 1)) {
            piVar7[5] = auStack_9c[1];
            auStack_9c[1] = (int)local_88;
            uVar11 = (1 << ((byte)local_88 & 0x1f)) - (1 << ((byte)uVar9 & 0x1f));
            piVar7[6] = uVar11;
            puVar30 = (uint *)(lVar31 + 0xc);
            *puVar30 = *puVar30 | piVar23[4] << ((byte)uVar9 & 0x1f) & uVar11;
          }
          else {
            piVar7[5] = 1;
            piVar7[6] = 2;
          }
          piVar7[8] = piVar7[8] & 0xfffffffe;
          piVar7[7] = 1 << ((byte)piVar7[5] & 0x1f) & piVar7[6];
          piVar7[8] = piVar7[8] | (uint)(uVar16 == 0);
          puVar30 = local_80;
          param_1 = local_90;
          uVar9 = auStack_9c[1];
        }
      }
LAB_14520839f:
      auStack_9c[2] = auStack_9c[2] + 1;
      uVar8 = (ulonglong)auStack_9c[2];
      if (*(uint *)(param_1 + 10) <= auStack_9c[2]) goto code_r0x0001452083b3;
LAB_145208173:
      piVar23 = (int *)(uVar8 * 0x1c + param_1[0xb]);
    } while( true );
  }
LAB_1452083be:
  uVar9 = *(uint *)((longlong)param_1 + 100);
  uVar16 = *(int *)(param_1 + 0xc) + 1U;
  if ((int)(*(int *)(param_1 + 0xc) + 1U) < 0) {
    uVar16 = 0;
  }
  if ((int)uVar9 < 0) {
LAB_145208457:
    puVar24 = &DAT_14c793f60;
    _DAT_14c793f60 = 0;
    _DAT_14c793f68 = 0;
  }
  else {
    uVar11 = uVar9;
    if (uVar9 < uVar16) {
      do {
        uVar11 = uVar11 + 8 + (uVar11 >> 1);
      } while (uVar11 <= uVar16);
      if (((((int)uVar11 < 0) || (uVar11 < uVar9)) || (0xffffffe < uVar11)) ||
         (lVar17 = FUN_14286436b(param_1[0xd]), lVar17 == 0)) {
        *(undefined4 *)((longlong)param_1 + 100) = 0xffffffff;
        goto LAB_145208457;
      }
      *(uint *)((longlong)param_1 + 100) = uVar11;
      param_1[0xd] = lVar17;
    }
    uVar9 = *(uint *)(param_1 + 0xc);
    if (uVar9 < uVar16) {
      memset((void *)((ulonglong)uVar9 * 0x10 + param_1[0xd]),0,(ulonglong)(uVar16 - uVar9) << 4);
    }
    *(uint *)(param_1 + 0xc) = uVar16;
    puVar24 = (undefined4 *)((ulonglong)(uVar16 - 1) * 0x10 + param_1[0xd]);
  }
  *puVar24 = *(undefined4 *)((longlong)param_1 + 0x44);
  *(undefined8 *)(puVar24 + 2) = 0;
  *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + 1;
  uVar9 = *(uint *)((longlong)param_1 + 0x74);
  uVar16 = *(int *)(param_1 + 0xe) + 1U;
  if ((int)(*(int *)(param_1 + 0xe) + 1U) < 0) {
    uVar16 = 0;
  }
  if ((int)uVar9 < 0) {
LAB_145208507:
    puVar24 = &DAT_14c793f60;
    _DAT_14c793f60 = 0;
    _DAT_14c793f68 = 0;
  }
  else {
    uVar11 = uVar9;
    if (uVar9 < uVar16) {
      do {
        uVar11 = uVar11 + 8 + (uVar11 >> 1);
      } while (uVar11 <= uVar16);
      if ((((int)uVar11 < 0) || (uVar11 < uVar9)) ||
         ((0xffffffe < uVar11 || (lVar17 = FUN_14286436b(param_1[0xf]), lVar17 == 0)))) {
        *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
        goto LAB_145208507;
      }
      *(uint *)((longlong)param_1 + 0x74) = uVar11;
      param_1[0xf] = lVar17;
    }
    uVar9 = *(uint *)(param_1 + 0xe);
    if (uVar9 < uVar16) {
      memset((void *)((ulonglong)uVar9 * 0x10 + param_1[0xf]),0,(ulonglong)(uVar16 - uVar9) << 4);
    }
    *(uint *)(param_1 + 0xe) = uVar16;
    puVar24 = (undefined4 *)((ulonglong)(uVar16 - 1) * 0x10 + param_1[0xf]);
  }
  *puVar24 = *(undefined4 *)(param_1 + 9);
  *(undefined8 *)(puVar24 + 2) = 0;
  *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  auStack_9c[1] = 0;
  local_88 = 0;
  do {
    uVar8 = 0;
    auStack_9c[2] = 0;
    local_78 = (uint *)((longlong)param_1 + (local_88 + 0x11) * 4);
    if (*(int *)((longlong)param_1 + (local_88 + 0x11) * 4) != 0) {
      lVar17 = (local_88 + 2) * 0x10;
      local_70 = lVar17;
      local_80 = (uint *)(param_1 + (local_88 + 6) * 2);
      uVar13 = uVar8;
      uVar29 = uVar8;
      do {
        lVar14 = local_88;
        uVar9 = (uint)uVar8;
        iVar28 = (int)uVar13;
        if ((local_48[local_88] != 0xffff) && (local_60[local_88] == iVar28)) {
          FUN_145208b70(param_1,lVar31,auStack_9c[1],local_48[local_88],
                        *(undefined4 *)(local_58 + local_88 * 4),2,1,1,0);
        }
        lVar5 = local_58;
        uVar16 = auStack_9c[1];
        uVar11 = 0;
        if (*(int *)(lVar31 + 0x10) != 0) {
          if (*(int *)(lVar31 + 0x10) != 0) goto LAB_14520862e;
          _DAT_14c793f60 = 0;
          _DAT_14c793f68 = 0;
          DAT_14c793f80 = 0;
          puVar24 = &DAT_14c793f60;
          _DAT_14c793f70 = 0;
          DAT_14c793f78 = 0;
          _DAT_14c793f7c = 0;
          while( true ) {
            lVar17 = local_88;
            if (puVar24[lVar14 + 3] == iVar28) {
              if (uVar11 < *(uint *)(lVar31 + 0x10)) {
                puVar24 = (undefined4 *)(*(longlong *)(lVar31 + 0x18) + (ulonglong)uVar11 * 0x24);
              }
              else {
                _DAT_14c793f60 = 0;
                _DAT_14c793f68 = 0;
                DAT_14c793f80 = 0;
                puVar24 = &DAT_14c793f60;
                _DAT_14c793f70 = 0;
                DAT_14c793f78 = 0;
                _DAT_14c793f7c = 0;
              }
              if (uVar11 < *(uint *)(lVar31 + 0x10)) {
                puVar21 = (undefined4 *)(*(longlong *)(lVar31 + 0x18) + (ulonglong)uVar11 * 0x24);
              }
              else {
                _DAT_14c793f60 = 0;
                _DAT_14c793f68 = 0;
                DAT_14c793f80 = 0;
                puVar21 = &DAT_14c793f60;
                _DAT_14c793f70 = 0;
                DAT_14c793f78 = 0;
                _DAT_14c793f7c = 0;
              }
              if (uVar11 < *(uint *)(lVar31 + 0x10)) {
                puVar27 = (undefined4 *)(*(longlong *)(lVar31 + 0x18) + (ulonglong)uVar11 * 0x24);
              }
              else {
                _DAT_14c793f60 = 0;
                _DAT_14c793f68 = 0;
                DAT_14c793f80 = 0;
                puVar27 = &DAT_14c793f60;
                _DAT_14c793f70 = 0;
                DAT_14c793f78 = 0;
                _DAT_14c793f7c = 0;
              }
              if (uVar11 < *(uint *)(lVar31 + 0x10)) {
                puVar25 = (undefined4 *)(*(longlong *)(lVar31 + 0x18) + (ulonglong)uVar11 * 0x24);
              }
              else {
                _DAT_14c793f60 = 0;
                _DAT_14c793f68 = 0;
                DAT_14c793f80 = 0;
                puVar25 = &DAT_14c793f60;
                _DAT_14c793f70 = 0;
                DAT_14c793f78 = 0;
                _DAT_14c793f7c = 0;
              }
              if (uVar11 < *(uint *)(lVar31 + 0x10)) {
                puVar22 = (undefined4 *)(*(longlong *)(lVar31 + 0x18) + (ulonglong)uVar11 * 0x24);
              }
              else {
                _DAT_14c793f60 = 0;
                _DAT_14c793f68 = 0;
                DAT_14c793f80 = 0;
                puVar22 = &DAT_14c793f60;
                _DAT_14c793f70 = 0;
                DAT_14c793f78 = 0;
                _DAT_14c793f7c = 0;
              }
              FUN_145208b70(param_1,lVar31,uVar16,puVar22[local_88 + 1],
                            *(undefined4 *)(lVar5 + local_88 * 4),puVar25[6],
                            (byte)((uint)puVar27[8] >> 1) & 1,(byte)((uint)puVar21[8] >> 2) & 1,
                            (byte)((uint)puVar24[8] >> 3) & 1);
              lVar14 = lVar17;
            }
            uVar11 = uVar11 + 1;
            if (*(uint *)(lVar31 + 0x10) <= uVar11) break;
LAB_14520862e:
            puVar24 = (undefined4 *)(*(longlong *)(lVar31 + 0x18) + (ulonglong)uVar11 * 0x24);
          }
          uVar29 = (ulonglong)auStack_9c[2];
          lVar17 = local_70;
        }
        uVar16 = *(uint *)(lVar17 + lVar31);
        if (uVar9 < uVar16) {
          if (uVar9 < uVar16) {
            qsort((void *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar8 * 8),
                  (ulonglong)(uVar16 - uVar9),8,(_PtFuncCompare *)&LAB_1452076d0);
          }
          uVar16 = uVar9 + 1;
          if (uVar16 < *(uint *)(lVar17 + lVar31)) {
            do {
              uVar13 = (ulonglong)uVar16;
              if (uVar16 < *(uint *)(lVar17 + lVar31)) {
                psVar26 = (short *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar13 * 8);
              }
              else {
                _DAT_14c793f60 = 0;
                psVar26 = (short *)&DAT_14c793f60;
              }
              uVar9 = (uint)uVar8;
              if (uVar9 < *(uint *)(lVar17 + lVar31)) {
                psVar12 = (short *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar8 * 8);
              }
              else {
                _DAT_14c793f60 = 0;
                psVar12 = (short *)&DAT_14c793f60;
              }
              if (*psVar26 == *psVar12) {
                if (uVar9 < *(uint *)(lVar17 + lVar31)) {
                  puVar24 = (undefined4 *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar8 * 8);
                }
                else {
                  _DAT_14c793f60 = 0;
                  puVar24 = &DAT_14c793f60;
                }
                if (uVar16 < *(uint *)(lVar17 + lVar31)) {
                  puVar21 = (undefined4 *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar13 * 8);
                }
                else {
                  _DAT_14c793f60 = 0;
                  puVar21 = &DAT_14c793f60;
                }
                puVar24[1] = puVar24[1] | puVar21[1];
                if (uVar9 < *(uint *)(lVar17 + lVar31)) {
                  puVar24 = (undefined4 *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar8 * 8);
                }
                else {
                  _DAT_14c793f60 = 0;
                  puVar24 = &DAT_14c793f60;
                }
                if (uVar16 < *(uint *)(lVar17 + lVar31)) {
                  puVar21 = (undefined4 *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar13 * 8);
                }
                else {
                  _DAT_14c793f60 = 0;
                  puVar21 = &DAT_14c793f60;
                }
                *(ushort *)((longlong)puVar24 + 2) =
                     *(ushort *)((longlong)puVar24 + 2) &
                     (*(ushort *)((longlong)puVar21 + 2) | 0xfffe);
                if (uVar9 < *(uint *)(lVar17 + lVar31)) {
                  puVar24 = (undefined4 *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar8 * 8);
                }
                else {
                  _DAT_14c793f60 = 0;
                  puVar24 = &DAT_14c793f60;
                }
                if (uVar16 < *(uint *)(lVar17 + lVar31)) {
                  puVar21 = (undefined4 *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar13 * 8);
                }
                else {
                  _DAT_14c793f60 = 0;
                  puVar21 = &DAT_14c793f60;
                }
                *(ushort *)((longlong)puVar24 + 2) =
                     *(ushort *)((longlong)puVar24 + 2) &
                     (*(ushort *)((longlong)puVar21 + 2) | 0xfffd);
              }
              else {
                uVar8 = (ulonglong)(uVar9 + 1);
                if (uVar16 < *(uint *)(lVar17 + lVar31)) {
                  puVar15 = (undefined8 *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar13 * 8);
                }
                else {
                  _DAT_14c793f60 = 0;
                  puVar15 = (undefined8 *)&DAT_14c793f60;
                }
                if (uVar9 + 1 < *(uint *)(lVar17 + lVar31)) {
                  *(undefined8 *)(*(longlong *)(lVar17 + 8 + lVar31) + uVar8 * 8) = *puVar15;
                }
                else {
                  _DAT_14c793f60 = *puVar15;
                }
              }
              uVar9 = (uint)uVar8;
              uVar16 = uVar16 + 1;
              lVar14 = local_88;
              param_1 = local_90;
            } while (uVar16 < *(uint *)(lVar17 + lVar31));
          }
          uVar9 = uVar9 + 1;
          if ((int)uVar9 < 0) {
            uVar9 = 0;
          }
          if (uVar9 < *(uint *)(lVar17 + lVar31)) {
            *(uint *)(lVar17 + lVar31) = uVar9;
          }
        }
        uVar9 = *(uint *)(lVar17 + lVar31);
        uVar8 = (ulonglong)uVar9;
        uVar16 = (uint)uVar29;
        if ((uVar16 < *local_80) &&
           (*(int *)(uVar29 * 0x10 + *(longlong *)(local_80 + 2)) == iVar28)) {
          puVar30 = (uint *)((lVar14 + 4) * 0x10 + lVar31);
          uVar11 = *puVar30 + 1;
          if ((int)(*puVar30 + 1) < 0) {
            uVar11 = 0;
          }
          uVar10 = puVar30[1];
          if ((int)uVar10 < 0) {
LAB_145208ab4:
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            puVar30 = &DAT_14c793f60;
            puVar20 = local_80;
          }
          else {
            uVar18 = uVar10;
            if (uVar10 < uVar11) {
              do {
                uVar18 = uVar18 + 8 + (uVar18 >> 1);
              } while (uVar18 <= uVar11);
              if (((((int)uVar18 < 0) || (uVar18 < uVar10)) || (0xffffffe < uVar18)) ||
                 (lVar14 = FUN_14286436b(*(undefined8 *)(puVar30 + 2)), lVar14 == 0)) {
                puVar30[1] = 0xffffffff;
                goto LAB_145208ab4;
              }
              puVar30[1] = uVar18;
              *(longlong *)(puVar30 + 2) = lVar14;
            }
            puVar20 = local_80;
            uVar10 = *puVar30;
            if (uVar10 < uVar11) {
              memset((void *)((ulonglong)uVar10 * 0x10 + *(longlong *)(puVar30 + 2)),0,
                     (ulonglong)(uVar11 - uVar10) << 4);
            }
            *puVar30 = uVar11;
            puVar30 = (uint *)((ulonglong)(uVar11 - 1) * 0x10 + *(longlong *)(puVar30 + 2));
          }
          *puVar30 = uVar9;
          if (uVar16 < *puVar20) {
            puVar24 = (undefined4 *)(uVar29 * 0x10 + *(longlong *)(puVar20 + 2));
          }
          else {
            puVar24 = &DAT_14c793f60;
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
          }
          auStack_9c[2] = uVar16 + 1;
          uVar29 = (ulonglong)auStack_9c[2];
          *(undefined8 *)(puVar30 + 2) = *(undefined8 *)(puVar24 + 2);
          param_1 = local_90;
        }
        uVar13 = (ulonglong)(iVar28 + 1U);
      } while (iVar28 + 1U < *local_78);
    }
    auStack_9c[1] = auStack_9c[1] + 1;
    local_88 = local_88 + 1;
    if (1 < auStack_9c[1]) {
      return;
    }
  } while( true );
code_r0x0001452083b3:
  if (*(int *)(param_1 + 10) != 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  goto LAB_1452083be;
}



// FUNCTION 145208b70 FUN_145208b70 body=549 status=ok
// SIG undefined FUN_145208b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145208b70(undefined8 *param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,byte param_7,byte param_8,byte param_9)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  int local_118;
  uint *local_110;
  uint *local_108;
  uint local_f8;
  int local_f4;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  uint local_d8 [32];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_3 = param_3 & 0xffffffff;
  local_f0 = param_4;
  local_e8 = param_2;
  local_e0 = param_1;
  uVar1 = FUN_1451e05b0(*param_1,(&DAT_149c56418)[param_3]);
  local_f4 = 0;
  do {
    iVar9 = local_f4;
    local_108 = local_d8;
    local_110 = &local_f8;
    local_f8 = 0x20;
    local_118 = local_f4;
    FUN_1451e06e0(*param_1,(&DAT_149c56418)[param_3],param_4,param_5);
    uVar4 = 0;
    uVar3 = local_f8;
    if (local_f8 != 0) {
      do {
        if (local_d8[uVar4] < uVar1) {
          puVar7 = (uint *)((param_3 + 2) * 0x10 + param_2);
          uVar3 = puVar7[1];
          uVar6 = *puVar7 + 1;
          if ((int)(*puVar7 + 1) < 0) {
            uVar6 = 0;
          }
          if ((int)uVar3 < 0) {
LAB_145208cd7:
            puVar8 = &DAT_14c793f60;
            _DAT_14c793f60 = 0;
          }
          else {
            uVar5 = uVar3;
            if (uVar3 < uVar6) {
              do {
                uVar5 = uVar5 + 8 + (uVar5 >> 1);
              } while (uVar5 <= uVar6);
              if (((((int)uVar5 < 0) || (uVar5 < uVar3)) || (0x1ffffffe < uVar5)) ||
                 (lVar2 = FUN_14286436b(*(undefined8 *)(puVar7 + 2)), lVar2 == 0)) {
                puVar7[1] = 0xffffffff;
                param_2 = local_e8;
                goto LAB_145208cd7;
              }
              puVar7[1] = uVar5;
              *(longlong *)(puVar7 + 2) = lVar2;
              param_2 = local_e8;
            }
            uVar3 = *puVar7;
            if (uVar3 < uVar6) {
              memset((void *)(*(longlong *)(puVar7 + 2) + (ulonglong)uVar3 * 8),0,
                     (ulonglong)(uVar6 - uVar3) << 3);
            }
            *puVar7 = uVar6;
            puVar8 = (undefined4 *)(*(longlong *)(puVar7 + 2) + (ulonglong)(uVar6 - 1) * 8);
          }
          puVar8[1] = param_6;
          *(short *)puVar8 = (short)local_d8[uVar4];
          *(ushort *)((longlong)puVar8 + 2) = *(ushort *)((longlong)puVar8 + 2) & 0xfffe;
          *(ushort *)((longlong)puVar8 + 2) =
               ((ushort)(param_8 & 1) | (ushort)(param_9 & 1) * 2) * 2 |
               (ushort)(param_7 & 1) | *(ushort *)((longlong)puVar8 + 2) & 0xfff9;
          uVar3 = local_f8;
        }
        uVar6 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar6;
        param_1 = local_e0;
        iVar9 = local_f4;
        param_4 = local_f0;
      } while (uVar6 < uVar3);
    }
    local_f4 = iVar9 + uVar3;
    if (uVar3 != 0x20) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_138);
    }
  } while( true );
}



// FUNCTION 145208de0 FUN_145208de0 body=69 status=ok
// SIG undefined FUN_145208de0(void)

void FUN_145208de0(longlong param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  puVar3 = (undefined4 *)FUN_145208fd0((uVar4 + 6) * 0x10 + param_1);
  uVar2 = *(undefined4 *)(param_1 + 0x44 + uVar4 * 4);
  *(undefined8 *)(puVar3 + 2) = param_3;
  *puVar3 = uVar2;
  piVar1 = (int *)(param_1 + 0x44 + uVar4 * 4);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 145208e30 FUN_145208e30 body=38 status=ok
// SIG undefined FUN_145208e30(void)

void FUN_145208e30(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    thunk_FUN_1400020a8();
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 145208e60 FUN_145208e60 body=150 status=ok
// SIG undefined FUN_145208e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_145208e60(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_145208f00();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 2)),0,
             (ulonglong)(uVar2 - uVar1) * 0x1c);
    }
    *param_1 = uVar2;
    return (undefined4 *)((ulonglong)(uVar2 - 1) * 0x1c + *(longlong *)(param_1 + 2));
  }
  DAT_14c793f78 = 0;
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  _DAT_14c793f70 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 145208f00 FUN_145208f00 body=137 status=ok
// SIG undefined FUN_145208f00(void)

undefined8 FUN_145208f00(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  uVar3 = uVar1;
  if (uVar1 < param_2) {
    do {
      uVar3 = uVar3 + 8 + (uVar3 >> 1);
    } while (uVar3 <= param_2);
    if ((((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x9249249)) &&
       (lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),(ulonglong)uVar3 * 0x1c), lVar2 != 0)) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return 0;
  }
  return 1;
}



// FUNCTION 145208fa0 FUN_145208fa0 body=38 status=ok
// SIG undefined FUN_145208fa0(void)

void FUN_145208fa0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    thunk_FUN_1400020a8();
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 145208fd0 FUN_145208fd0 body=124 status=ok
// SIG undefined FUN_145208fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_145208fd0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_145209050();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)((ulonglong)uVar1 * 0x10 + *(longlong *)(param_1 + 2)),0,
             (ulonglong)(uVar2 - uVar1) << 4);
    }
    *param_1 = uVar2;
    return (undefined4 *)((ulonglong)(uVar2 - 1) * 0x10 + *(longlong *)(param_1 + 2));
  }
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 145209050 FUN_145209050 body=137 status=ok
// SIG undefined FUN_145209050(void)

undefined8 FUN_145209050(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  uVar3 = uVar1;
  if (uVar1 < param_2) {
    do {
      uVar3 = uVar3 + 8 + (uVar3 >> 1);
    } while (uVar3 <= param_2);
    if ((((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0xfffffff)) &&
       (lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),(ulonglong)uVar3 << 4), lVar2 != 0)) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return 0;
  }
  return 1;
}



// FUNCTION 1452090e0 FUN_1452090e0 body=135 status=ok
// SIG undefined FUN_1452090e0(void)

void FUN_1452090e0(longlong param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (param_2 == 0x61616c74) {
    puVar1 = (undefined4 *)FUN_145209310(param_1 + 8);
    *puVar1 = 0x11;
    puVar1[1] = param_3;
    return;
  }
  lVar2 = FUN_1451fa3b0(param_2);
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)FUN_145209310(param_1 + 8);
    *puVar1 = *(undefined4 *)(lVar2 + 4);
    if (param_3 != 0) {
      puVar1[1] = *(undefined4 *)(lVar2 + 8);
      return;
    }
    puVar1[1] = *(undefined4 *)(lVar2 + 0xc);
  }
  return;
}



// FUNCTION 145209170 FUN_145209170 body=357 status=ok
// SIG undefined FUN_145209170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145209170(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int *piVar7;
  undefined8 *puVar8;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(uint *)(param_1 + 8) != 0) {
      qsort(*(void **)(param_1 + 0x10),(ulonglong)*(uint *)(param_1 + 8),0xc,
            (_PtFuncCompare *)&LAB_1452092e0);
    }
    uVar3 = 1;
    uVar6 = 0;
    iVar4 = 0;
    if (1 < *(uint *)(param_1 + 8)) {
      if (1 < *(uint *)(param_1 + 8)) goto LAB_1452091f1;
      _DAT_14c793f60 = 0;
      piVar7 = &DAT_14c793f60;
      DAT_14c793f68 = 0;
      while( true ) {
        if ((uint)uVar6 < *(uint *)(param_1 + 8)) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + uVar6 * 0xc);
        }
        else {
          _DAT_14c793f60 = 0;
          piVar1 = &DAT_14c793f60;
          DAT_14c793f68 = 0;
        }
        if (*piVar7 != *piVar1) {
          uVar5 = (uint)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          if ((uint)uVar3 < *(uint *)(param_1 + 8)) {
            puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar3 * 0xc);
          }
          else {
            _DAT_14c793f60 = 0;
            puVar8 = (undefined8 *)&DAT_14c793f60;
            DAT_14c793f68 = 0;
          }
          if (uVar5 < *(uint *)(param_1 + 8)) {
            puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar6 * 0xc);
          }
          else {
            _DAT_14c793f60 = 0;
            puVar2 = (undefined8 *)&DAT_14c793f60;
            DAT_14c793f68 = 0;
          }
          *puVar2 = *puVar8;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
        }
        iVar4 = (int)uVar6;
        uVar5 = (uint)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
        if (*(uint *)(param_1 + 8) <= uVar5) break;
LAB_1452091f1:
        piVar7 = (int *)(*(longlong *)(param_1 + 0x10) + uVar3 * 0xc);
      }
    }
    uVar5 = iVar4 + 1;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    if (uVar5 < *(uint *)(param_1 + 8)) {
      *(uint *)(param_1 + 8) = uVar5;
    }
  }
  FUN_1451fa3f0(param_1,param_2);
  return;
}



// FUNCTION 145209310 FUN_145209310 body=148 status=ok
// SIG undefined FUN_145209310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_145209310(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_1452093b0();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 0xc),0,
             (ulonglong)(uVar2 - uVar1) * 0xc);
    }
    *param_1 = uVar2;
    return (undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar2 - 1) * 0xc);
  }
  DAT_14c793f68 = 0;
  _DAT_14c793f60 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 1452093b0 FUN_1452093b0 body=139 status=ok
// SIG undefined FUN_1452093b0(void)

undefined8 FUN_1452093b0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2 <= uVar1) {
    return 1;
  }
  uVar4 = (ulonglong)uVar1;
  do {
    uVar3 = (int)uVar4 + 8 + (int)(uVar4 >> 1);
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 <= param_2);
  if (((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x15555555)) {
    lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),uVar4 * 0xc);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return 0;
}



// FUNCTION 145209440 FUN_145209440 body=1904 status=ok
// SIG undefined FUN_145209440(void)

void FUN_145209440(longlong param_1,longlong param_2,longlong param_3)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  uint local_res10 [2];
  longlong local_res18;
  int local_res20 [2];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  code *local_58;
  code *local_50;
  
  if (*(int *)(param_2 + 0x60) == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  local_res20[0] = *(int *)(lVar5 + 0x30);
  if (local_res20[0] == 4) {
    local_res20[0] = 2;
  }
  local_60 = *(undefined8 *)(param_2 + 0x10);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
  local_58 = FUN_145209e20;
  if (*(code **)(lVar5 + 0x38) != (code *)0x0) {
    local_58 = *(code **)(lVar5 + 0x38);
  }
  local_50 = FUN_145209e50;
  if (*(code **)(lVar5 + 0x40) != (code *)0x0) {
    local_50 = *(code **)(lVar5 + 0x40);
  }
  bVar23 = local_res20[0] == 0;
  bVar24 = (local_res20[0] - 1U & 0xfffffffd) != 0;
  local_res18 = param_3;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_3;
  FUN_144b61b50(param_2);
  uVar22 = *(uint *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  do {
    uVar15 = *(uint *)(param_2 + 0x5c);
    uVar20 = (ulonglong)(uVar15 + 1);
    if (uVar15 + 1 < uVar22) {
      do {
        if ((1 << ((byte)*(undefined2 *)(*(longlong *)(param_2 + 0x70) + 0x10 + uVar20 * 0x14) &
                  0x1f) & 0x1c00U) != 0) break;
        uVar21 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar21;
      } while (uVar21 < uVar22);
    }
    uVar18 = (uint)uVar20;
    uVar21 = uVar18 - 1;
    if (uVar22 <= uVar18) {
      uVar21 = uVar18;
    }
    if (bVar24) {
      lVar5 = *(longlong *)(param_2 + 0x70) + (ulonglong)uVar15 * 0x14;
      uVar15 = (**(code **)(*(longlong *)(param_3 + 0x40) + 0x138))
                         (param_3,*(undefined8 *)(param_3 + 0x48),uVar21 - uVar15,lVar5,0x14,
                          lVar5 + 0xc,0x14,*(undefined8 *)(*(longlong *)(param_3 + 0x40) + 0x28));
      if (*(char *)(param_2 + 0x59) != '\0') {
        if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
           (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
          cVar14 = FUN_144b62480(param_2,uVar15,uVar15);
          if (cVar14 == '\0') goto LAB_14520960c;
          memmove((void *)(*(longlong *)(param_2 + 0x78) +
                          (ulonglong)*(uint *)(param_2 + 100) * 0x14),
                  (void *)(*(longlong *)(param_2 + 0x70) +
                          (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14),(ulonglong)uVar15 * 0x14);
        }
        *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + uVar15;
      }
      *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + uVar15;
    }
LAB_14520960c:
    uVar15 = *(uint *)(param_2 + 0x5c);
    lVar5 = local_70;
    while ((local_70 = lVar5, uVar15 < uVar21 && (*(char *)(param_2 + 0x58) != '\0'))) {
      FUN_14520a030(&local_78,bVar24);
      uVar15 = *(uint *)(param_2 + 0x5c);
      lVar5 = local_70;
    }
    if ((*(uint *)(param_2 + 0x5c) == uVar22) || (*(char *)(param_2 + 0x58) == '\0')) break;
    uVar15 = *(uint *)(param_2 + 0x5c) + 1;
    uVar20 = (ulonglong)uVar15;
    local_res10[0] = local_res10[0] & 0xffffff00;
    if (uVar15 < uVar22) {
      do {
        if ((1 << ((byte)*(undefined2 *)(*(longlong *)(param_2 + 0x70) + 0x10 + uVar20 * 0x14) &
                  0x1f) & 0x1c00U) == 0) break;
        uVar15 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar15;
      } while (uVar15 < uVar22);
    }
    uVar15 = *(uint *)(lVar5 + 0x5c);
    uVar21 = (uint)uVar20;
    if (uVar15 < uVar21) {
      uVar18 = uVar15;
      do {
        if (*(char *)(lVar5 + 0x58) == '\0') break;
        iVar16 = *(int *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)uVar18 * 0x14);
        if ((iVar16 - 0xfe00U < 0x10) || (iVar16 - 0xe0100U < 0xf0)) {
          FUN_14520a220(&local_78,uVar20,bVar23);
          goto LAB_1452096fe;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar21);
      while ((uVar15 < uVar21 && (*(char *)(lVar5 + 0x58) != '\0'))) {
        FUN_14520a030(&local_78,bVar23);
        uVar15 = *(uint *)(lVar5 + 0x5c);
      }
    }
LAB_1452096fe:
    if ((uVar22 <= *(uint *)(param_2 + 0x5c)) ||
       (param_3 = local_res18, *(char *)(param_2 + 0x58) == '\0')) break;
  } while( true );
  FUN_144b61af0(param_2);
  uVar20 = 0;
  if ((char)local_res10[0] == '\0') {
    uVar22 = *(uint *)(param_2 + 0x60);
    uVar19 = uVar20;
    if (uVar22 != 0) {
      do {
        uVar21 = (uint)uVar19;
        uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x70) + 0x10 + uVar19 * 0x14);
        uVar15 = uVar21;
        if (((1 << ((byte)uVar4 & 0x1f) & 0x1c00U) != 0) && (uVar4 >> 8 != 0)) {
          while( true ) {
            uVar15 = uVar15 + 1;
            uVar13 = (ulonglong)uVar15;
            if (uVar22 <= uVar15) break;
            uVar4 = *(ushort *)(*(longlong *)(param_2 + 0x70) + 0x10 + uVar13 * 0x14);
            if (((1 << ((byte)uVar4 & 0x1f) & 0x1c00U) == 0) || ((uVar4 & 0xff00) == 0)) break;
          }
          if (uVar15 - uVar21 < 0x21) {
            FUN_144b625b0(param_2,uVar19,uVar13,&LAB_14520a580);
            pcVar6 = *(code **)(*(longlong *)(param_1 + 0x20) + 0x58);
            if (pcVar6 != (code *)0x0) {
              (*pcVar6)(param_1,param_2,uVar19,uVar13);
            }
          }
        }
        uVar19 = (ulonglong)(uVar15 + 1);
      } while (uVar15 + 1 < uVar22);
    }
  }
  uVar22 = 2;
  if (((*(byte *)(param_2 + 0x28) & 0x20) != 0) && (2 < *(uint *)(param_2 + 0x60))) {
    do {
      lVar5 = *(longlong *)(param_2 + 0x70);
      if (*(int *)(lVar5 + (ulonglong)(uVar22 - 1) * 0x14) == 0x34f) {
        uVar4 = *(ushort *)(lVar5 + 0x10 + (ulonglong)(uVar22 - 2) * 0x14);
        uVar15 = 0;
        if ((1 << ((byte)uVar4 & 0x1f) & 0x1c00U) != 0) {
          uVar15 = (uint)(uVar4 >> 8);
        }
        uVar4 = *(ushort *)(lVar5 + 0x10 + (ulonglong)uVar22 * 0x14);
        uVar21 = 0;
        if ((1 << ((byte)uVar4 & 0x1f) & 0x1c00U) != 0) {
          uVar21 = (uint)(uVar4 >> 8);
        }
        if (uVar15 <= uVar21) {
          puVar1 = (ushort *)(lVar5 + (ulonglong)(uVar22 - 1) * 0x14 + 0x10);
          *puVar1 = *puVar1 & 0xffbf;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < *(uint *)(param_2 + 0x60));
  }
  if ((char)local_res10[0] != '\0') {
    return;
  }
  if (1 < local_res20[0] - 2U) {
    return;
  }
  FUN_144b61b50(param_2);
  uVar22 = *(uint *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x59) != '\0') {
    if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
       (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
      cVar14 = FUN_144b62480(param_2,1,1);
      if (cVar14 == '\0') goto LAB_14520995d;
      uVar15 = *(uint *)(param_2 + 0x5c);
      lVar5 = *(longlong *)(param_2 + 0x70);
      uVar21 = *(uint *)(param_2 + 100);
      puVar2 = (undefined4 *)(lVar5 + (ulonglong)uVar15 * 0x14);
      uVar10 = puVar2[1];
      uVar11 = puVar2[2];
      uVar12 = puVar2[3];
      lVar7 = *(longlong *)(param_2 + 0x78);
      puVar3 = (undefined4 *)(lVar7 + (ulonglong)uVar21 * 0x14);
      *puVar3 = *puVar2;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      *(undefined4 *)(lVar7 + (ulonglong)uVar21 * 0x14 + 0x10) =
           *(undefined4 *)(lVar5 + 0x10 + (ulonglong)uVar15 * 0x14);
    }
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
  }
  *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
LAB_14520995d:
  lVar5 = local_res18;
  uVar15 = *(uint *)(param_2 + 0x5c);
  do {
    if ((uVar22 <= uVar15) || (*(char *)(param_2 + 0x58) == '\0')) {
      FUN_144b61af0(param_2);
      return;
    }
    puVar2 = (undefined4 *)
             (*(longlong *)(param_2 + 0x70) + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14);
    if ((1 << ((byte)*(undefined2 *)
                      (*(longlong *)(param_2 + 0x70) + 0x10 +
                      (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14) & 0x1f) & 0x1c00U) == 0) {
LAB_145209af9:
      if (*(char *)(param_2 + 0x59) == '\0') {
LAB_145209b54:
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
      }
      else {
        if ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) &&
           (*(int *)(param_2 + 100) == *(int *)(param_2 + 0x5c))) {
LAB_145209b51:
          *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
          goto LAB_145209b54;
        }
        cVar14 = FUN_144b62480(param_2,1,1);
        if (cVar14 != '\0') {
          uVar15 = *(uint *)(param_2 + 0x5c);
          lVar7 = *(longlong *)(param_2 + 0x70);
          uVar21 = *(uint *)(param_2 + 100);
          puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar15 * 0x14);
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar12 = puVar2[3];
          lVar8 = *(longlong *)(param_2 + 0x78);
          puVar3 = (undefined4 *)(lVar8 + (ulonglong)uVar21 * 0x14);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          puVar3[2] = uVar11;
          puVar3[3] = uVar12;
          *(undefined4 *)(lVar8 + (ulonglong)uVar21 * 0x14 + 0x10) =
               *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar15 * 0x14);
          goto LAB_145209b51;
        }
      }
      uVar17 = FUN_145209ce0(param_2);
      iVar16 = FUN_145209e00(uVar17);
      if (iVar16 == 0) {
        uVar20 = (ulonglong)(*(int *)(param_2 + 100) - 1);
      }
    }
    else {
      if ((int)uVar20 != *(int *)(param_2 + 100) + -1) {
        uVar4 = *(ushort *)(puVar2 + 4);
        uVar15 = 0;
        if ((1 << ((byte)uVar4 & 0x1f) & 0x1c00U) != 0) {
          uVar15 = (uint)(uVar4 >> 8);
        }
        uVar17 = FUN_145209ce0(param_2);
        uVar21 = FUN_145209e00(uVar17);
        if (uVar15 <= uVar21) goto LAB_145209af9;
      }
      lVar7 = uVar20 * 0x14;
      cVar14 = (*local_50)(&local_78,*(undefined4 *)(lVar7 + *(longlong *)(param_2 + 0x78)),*puVar2,
                           local_res10);
      if (cVar14 == '\0') goto LAB_145209af9;
      local_res20[0] = 0;
      iVar16 = (**(code **)(*(longlong *)(lVar5 + 0x40) + 0x130))
                         (lVar5,*(undefined8 *)(lVar5 + 0x48),local_res10[0],local_res20,
                          *(undefined8 *)(*(longlong *)(lVar5 + 0x40) + 0x20));
      if (iVar16 == 0) goto LAB_145209af9;
      if (*(char *)(param_2 + 0x59) == '\0') {
LAB_145209aad:
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
      }
      else {
        if ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) &&
           (*(int *)(param_2 + 100) == *(int *)(param_2 + 0x5c))) {
LAB_145209aaa:
          *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
          goto LAB_145209aad;
        }
        cVar14 = FUN_144b62480(param_2,1,1);
        if (cVar14 != '\0') {
          uVar15 = *(uint *)(param_2 + 0x5c);
          lVar8 = *(longlong *)(param_2 + 0x70);
          uVar21 = *(uint *)(param_2 + 100);
          puVar2 = (undefined4 *)(lVar8 + (ulonglong)uVar15 * 0x14);
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar12 = puVar2[3];
          lVar9 = *(longlong *)(param_2 + 0x78);
          puVar3 = (undefined4 *)(lVar9 + (ulonglong)uVar21 * 0x14);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          puVar3[2] = uVar11;
          puVar3[3] = uVar12;
          *(undefined4 *)(lVar9 + (ulonglong)uVar21 * 0x14 + 0x10) =
               *(undefined4 *)(lVar8 + 0x10 + (ulonglong)uVar15 * 0x14);
          goto LAB_145209aaa;
        }
      }
      if (*(char *)(param_2 + 0x58) == '\0') {
        return;
      }
      FUN_144b61e90(param_2,uVar20,*(undefined4 *)(param_2 + 100));
      *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + -1;
      *(uint *)(lVar7 + *(longlong *)(param_2 + 0x78)) = local_res10[0];
      *(int *)(lVar7 + 0xc + *(longlong *)(param_2 + 0x78)) = local_res20[0];
      FUN_145209d10(*(longlong *)(param_2 + 0x78) + lVar7,param_2);
    }
    uVar15 = *(uint *)(param_2 + 0x5c);
  } while( true );
}



// FUNCTION 145209bb0 FUN_145209bb0 body=146 status=ok
// SIG undefined FUN_145209bb0(void)

undefined8 FUN_145209bb0(uint param_1)

{
  if (param_1 < 0x2001) {
    if (param_1 == 0x2000) {
switchD_145209c01_caseD_2002:
      return 2;
    }
    if ((param_1 == 0x20) || (param_1 == 0xa0)) {
      return 0x12;
    }
  }
  else if (param_1 < 0x3001) {
    if (param_1 != 0x3000) {
      switch(param_1) {
      case 0x2001:
      case 0x2003:
        break;
      case 0x2002:
        goto switchD_145209c01_caseD_2002;
      case 0x2004:
        return 3;
      case 0x2005:
        return 4;
      case 0x2006:
        return 6;
      case 0x2007:
        return 0x13;
      case 0x2008:
        return 0x14;
      case 0x2009:
        return 5;
      case 0x200a:
        return 0x10;
      default:
        goto switchD_145209c01_caseD_200b;
      case 0x202f:
        return 0x15;
      case 0x205f:
        return 0x11;
      }
    }
    return 1;
  }
switchD_145209c01_caseD_200b:
  return 0;
}



// FUNCTION 145209ce0 FUN_145209ce0 body=40 status=ok
// SIG undefined FUN_145209ce0(void)

longlong FUN_145209ce0(longlong param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    return *(longlong *)(param_1 + 0x78) + (ulonglong)(*(int *)(param_1 + 100) - 1) * 0x14;
  }
  return *(longlong *)(param_1 + 0x78);
}



// FUNCTION 145209d10 FUN_145209d10 body=233 status=ok
// SIG undefined FUN_145209d10(void)

void FUN_145209d10(uint *param_1,longlong param_2)

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
        if (uVar1 != 0x34f) goto LAB_145209da8;
        *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 0x20;
      }
      uVar7 = uVar4 | 0x60;
    }
  }
LAB_145209da8:
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



// FUNCTION 145209e00 FUN_145209e00 body=31 status=ok
// SIG undefined FUN_145209e00(void)

ushort FUN_145209e00(longlong param_1)

{
  if ((1 << ((byte)*(ushort *)(param_1 + 0x10) & 0x1f) & 0x1c00U) != 0) {
    return *(ushort *)(param_1 + 0x10) >> 8;
  }
  return 0;
}



// FUNCTION 145209e20 FUN_145209e20 body=47 status=ok
// SIG undefined FUN_145209e20(void)

bool FUN_145209e20(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *param_3 = param_2;
  *param_4 = 0;
  iVar2 = (**(code **)(lVar1 + 0x48))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 145209e50 FUN_145209e50 body=51 status=ok
// SIG undefined FUN_145209e50(void)

bool FUN_145209e50(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar2 = 0;
  *param_4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = (**(code **)(lVar1 + 0x40))(lVar1);
  }
  return iVar2 != 0;
}



// FUNCTION 145209e90 FUN_145209e90 body=68 status=ok
// SIG undefined FUN_145209e90(void)

void FUN_145209e90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xc + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x14)
       = param_3;
  FUN_1451e0a10();
  if (*(int *)(param_1 + 100) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 100) - 1;
  }
  FUN_145209d10(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar1 * 0x14,param_1);
  return;
}



// FUNCTION 145209ee0 FUN_145209ee0 body=336 status=ok
// SIG undefined FUN_145209ee0(void)

ulonglong FUN_145209ee0(longlong param_1,char param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  char local_res10;
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  local_res8[0] = 0;
  local_res20[0] = 0;
  local_24[0] = 0;
  local_28 = 0;
  local_res10 = param_2;
  cVar3 = (**(code **)(param_1 + 0x20))(param_1,param_3,local_res8,local_res20);
  if (cVar3 == '\0') {
    return 0;
  }
  if (local_res20[0] != 0) {
    local_28 = 0;
    iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x130))
                      (lVar2,*(undefined8 *)(lVar2 + 0x48),local_res20[0],&local_28,
                       *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x20));
    if (iVar4 == 0) {
      return 0;
    }
  }
  local_24[0] = 0;
  iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x130))
                    (lVar2,*(undefined8 *)(lVar2 + 0x48),local_res8[0],local_24,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x20));
  if ((local_res10 == '\0') || (iVar4 == 0)) {
    uVar5 = FUN_145209ee0(param_1,local_res10,local_res8[0]);
    if ((int)uVar5 != 0) {
      if (local_res20[0] != 0) {
        FUN_145209e90(uVar1,local_res20[0],local_28);
        return (ulonglong)((int)uVar5 + 1);
      }
      return uVar5;
    }
    if (iVar4 == 0) {
      return 0;
    }
  }
  FUN_145209e90(uVar1,local_res8[0],local_24[0]);
  if (local_res20[0] != 0) {
    FUN_145209e90(uVar1,local_res20[0],local_28);
    return 2;
  }
  return 1;
}



// FUNCTION 14520a030 FUN_14520a030 body=493 status=ok
// SIG undefined FUN_14520a030(void)

void FUN_14520a030(longlong param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  lVar3 = *(longlong *)(param_1 + 8);
  iVar7 = *(int *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14);
  local_res10[0] = 0;
  if (param_2 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_res10[0] = 0;
    iVar5 = (**(code **)(*(longlong *)(lVar4 + 0x40) + 0x130))
                      (lVar4,*(undefined8 *)(lVar4 + 0x48),iVar7,local_res10,
                       *(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x20));
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)(lVar3 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14)
           = local_res10[0];
      goto LAB_14520a202;
    }
  }
  iVar5 = FUN_145209ee0(param_1,param_2,iVar7);
  if (iVar5 != 0) {
    *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + 1;
    return;
  }
  if (param_2 == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_res10[0] = 0;
    iVar5 = (**(code **)(*(longlong *)(lVar4 + 0x40) + 0x130))
                      (lVar4,*(undefined8 *)(lVar4 + 0x48),iVar7,local_res10,
                       *(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x20));
    if (iVar5 == 0) goto LAB_14520a0fe;
LAB_14520a1ef:
    uVar2 = *(uint *)(lVar3 + 0x5c);
    uVar8 = local_res10[0];
  }
  else {
LAB_14520a0fe:
    if (((*(byte *)(*(longlong *)(lVar3 + 0x70) + 0x10 + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14)
         & 0x1f) == 0x1d) && (iVar5 = FUN_145209bb0(iVar7), iVar5 != 0)) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      local_res8[0] = 0;
      iVar6 = (**(code **)(*(longlong *)(lVar4 + 0x40) + 0x130))
                        (lVar4,*(undefined8 *)(lVar4 + 0x48),0x20,local_res8,
                         *(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x20));
      if (iVar6 != 0) {
        uVar1 = *(ushort *)
                 (*(longlong *)(lVar3 + 0x70) + 0x10 + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14);
        if (((byte)uVar1 & 0x1f) == 0x1d) {
          *(ushort *)
           (*(longlong *)(lVar3 + 0x70) + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14 + 0x10) =
               uVar1 & 0xff | (short)iVar5 << 8;
        }
        *(undefined4 *)
         (*(longlong *)(lVar3 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14) =
             local_res8[0];
        FUN_144e3cb60(lVar3);
        *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) | 4;
        return;
      }
    }
    if (iVar7 != 0x2011) goto LAB_14520a1ef;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_res8[0] = 0;
    iVar7 = (**(code **)(*(longlong *)(lVar4 + 0x40) + 0x130))
                      (lVar4,*(undefined8 *)(lVar4 + 0x48),0x2010,local_res8,
                       *(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x20));
    if (iVar7 == 0) goto LAB_14520a1ef;
    uVar2 = *(uint *)(lVar3 + 0x5c);
    uVar8 = local_res8[0];
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0x70) + 0xc + (ulonglong)uVar2 * 0x14) = uVar8;
LAB_14520a202:
  FUN_144e3cb60(lVar3);
  return;
}



// FUNCTION 14520a220 FUN_14520a220 body=851 status=ok
// SIG undefined FUN_14520a220(void)

void FUN_14520a220(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  char cVar15;
  int iVar16;
  ulonglong uVar17;
  undefined4 local_res10 [2];
  
  lVar7 = *(longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(param_1 + 0x10);
  uVar5 = *(uint *)(lVar7 + 0x5c);
  do {
    if ((param_2 - 1 <= uVar5) || (*(char *)(lVar7 + 0x58) == '\0')) {
      uVar17 = (ulonglong)*(uint *)(lVar7 + 0x5c);
      if (*(uint *)(lVar7 + 0x5c) < param_2) {
        lVar10 = *(longlong *)(lVar7 + 0x70);
        lVar9 = lVar10 + 0xc;
        *(undefined4 *)(lVar9 + uVar17 * 0x14) = 0;
        (**(code **)(*(longlong *)(lVar8 + 0x40) + 0x130))
                  (lVar8,*(undefined8 *)(lVar8 + 0x48),*(undefined4 *)(lVar10 + uVar17 * 0x14),
                   lVar9 + uVar17 * 0x14,*(undefined8 *)(*(longlong *)(lVar8 + 0x40) + 0x20));
        if (*(char *)(lVar7 + 0x59) != '\0') {
          if ((*(longlong *)(lVar7 + 0x78) != *(longlong *)(lVar7 + 0x70)) ||
             (*(int *)(lVar7 + 100) != *(int *)(lVar7 + 0x5c))) {
            cVar15 = FUN_144b62480(lVar7,1,1);
            if (cVar15 == '\0') {
              return;
            }
            uVar5 = *(uint *)(lVar7 + 0x5c);
            lVar8 = *(longlong *)(lVar7 + 0x70);
            uVar6 = *(uint *)(lVar7 + 100);
            puVar3 = (undefined8 *)(lVar8 + (ulonglong)uVar5 * 0x14);
            uVar14 = puVar3[1];
            lVar9 = *(longlong *)(lVar7 + 0x78);
            puVar4 = (undefined8 *)(lVar9 + (ulonglong)uVar6 * 0x14);
            *puVar4 = *puVar3;
            puVar4[1] = uVar14;
            *(undefined4 *)(lVar9 + (ulonglong)uVar6 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar8 + 0x10 + (ulonglong)uVar5 * 0x14);
          }
          *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
        }
        *(int *)(lVar7 + 0x5c) = *(int *)(lVar7 + 0x5c) + 1;
      }
      return;
    }
    uVar17 = (ulonglong)*(uint *)(lVar7 + 0x5c);
    lVar9 = *(longlong *)(lVar7 + 0x70);
    iVar16 = *(int *)(lVar9 + (ulonglong)(*(uint *)(lVar7 + 0x5c) + 1) * 0x14);
    if ((iVar16 - 0xfe00U < 0x10) || (iVar16 - 0xe0100U < 0xf0)) {
      puVar1 = (undefined4 *)(lVar9 + 0xc + uVar17 * 0x14);
      *puVar1 = 0;
      iVar16 = (**(code **)(*(longlong *)(lVar8 + 0x40) + 0x140))
                         (lVar8,*(undefined8 *)(lVar8 + 0x48),*(undefined4 *)(lVar9 + uVar17 * 0x14)
                          ,iVar16,puVar1,*(undefined8 *)(*(longlong *)(lVar8 + 0x40) + 0x30));
      uVar17 = (ulonglong)*(uint *)(lVar7 + 0x5c);
      lVar9 = *(longlong *)(lVar7 + 0x70);
      if (iVar16 == 0) {
        *(undefined4 *)(lVar9 + 0xc + uVar17 * 0x14) = 0;
        (**(code **)(*(longlong *)(lVar8 + 0x40) + 0x130))
                  (lVar8,*(undefined8 *)(lVar8 + 0x48),*(undefined4 *)(lVar9 + uVar17 * 0x14),
                   lVar9 + 0xc + uVar17 * 0x14,*(undefined8 *)(*(longlong *)(lVar8 + 0x40) + 0x20));
        FUN_144e3cb60(lVar7);
        uVar17 = (ulonglong)*(uint *)(lVar7 + 0x5c);
        lVar10 = *(longlong *)(lVar7 + 0x70);
        lVar9 = lVar10 + 0xc;
        *(undefined4 *)(lVar9 + uVar17 * 0x14) = 0;
        (**(code **)(*(longlong *)(lVar8 + 0x40) + 0x130))
                  (lVar8,*(undefined8 *)(lVar8 + 0x48),*(undefined4 *)(lVar10 + uVar17 * 0x14),
                   lVar9 + uVar17 * 0x14,*(undefined8 *)(*(longlong *)(lVar8 + 0x40) + 0x20));
        FUN_144e3cb60(lVar7);
      }
      else {
        local_res10[0] = *(undefined4 *)(lVar9 + uVar17 * 0x14);
        FUN_144b61bb0(lVar7,2,1,local_res10);
      }
      uVar5 = *(uint *)(lVar7 + 0x5c);
      while (uVar5 < param_2) {
        lVar9 = *(longlong *)(lVar7 + 0x70) + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14;
        iVar16 = *(int *)(*(longlong *)(lVar7 + 0x70) + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14);
        if ((0xf < iVar16 - 0xfe00U) && (0xef < iVar16 - 0xe0100U)) break;
        *(undefined4 *)(lVar9 + 0xc) = 0;
        (**(code **)(*(longlong *)(lVar8 + 0x40) + 0x130))
                  (lVar8,*(undefined8 *)(lVar8 + 0x48),iVar16,lVar9 + 0xc,
                   *(undefined8 *)(*(longlong *)(lVar8 + 0x40) + 0x20));
        if (*(char *)(lVar7 + 0x59) == '\0') {
LAB_14520a4af:
          *(int *)(lVar7 + 0x5c) = *(int *)(lVar7 + 0x5c) + 1;
        }
        else {
          if ((*(longlong *)(lVar7 + 0x78) == *(longlong *)(lVar7 + 0x70)) &&
             (*(int *)(lVar7 + 100) == *(int *)(lVar7 + 0x5c))) {
LAB_14520a4ac:
            *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
            goto LAB_14520a4af;
          }
          cVar15 = FUN_144b62480(lVar7,1,1);
          if (cVar15 != '\0') {
            uVar5 = *(uint *)(lVar7 + 0x5c);
            lVar9 = *(longlong *)(lVar7 + 0x70);
            uVar6 = *(uint *)(lVar7 + 100);
            puVar1 = (undefined4 *)(lVar9 + (ulonglong)uVar5 * 0x14);
            uVar11 = puVar1[1];
            uVar12 = puVar1[2];
            uVar13 = puVar1[3];
            lVar10 = *(longlong *)(lVar7 + 0x78);
            puVar2 = (undefined4 *)(lVar10 + (ulonglong)uVar6 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar11;
            puVar2[2] = uVar12;
            puVar2[3] = uVar13;
            *(undefined4 *)(lVar10 + (ulonglong)uVar6 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar9 + 0x10 + (ulonglong)uVar5 * 0x14);
            goto LAB_14520a4ac;
          }
        }
        uVar5 = *(uint *)(lVar7 + 0x5c);
      }
    }
    else {
      *(undefined4 *)(lVar9 + 0xc + uVar17 * 0x14) = 0;
      (**(code **)(*(longlong *)(lVar8 + 0x40) + 0x130))
                (lVar8,*(undefined8 *)(lVar8 + 0x48),*(undefined4 *)(lVar9 + uVar17 * 0x14),
                 lVar9 + 0xc + uVar17 * 0x14,*(undefined8 *)(*(longlong *)(lVar8 + 0x40) + 0x20));
      if (*(char *)(lVar7 + 0x59) != '\0') {
        if ((*(longlong *)(lVar7 + 0x78) != *(longlong *)(lVar7 + 0x70)) ||
           (*(int *)(lVar7 + 100) != *(int *)(lVar7 + 0x5c))) {
          cVar15 = FUN_144b62480(lVar7,1,1);
          if (cVar15 == '\0') goto LAB_14520a4bb;
          uVar5 = *(uint *)(lVar7 + 0x5c);
          lVar9 = *(longlong *)(lVar7 + 0x70);
          uVar6 = *(uint *)(lVar7 + 100);
          puVar1 = (undefined4 *)(lVar9 + (ulonglong)uVar5 * 0x14);
          uVar11 = puVar1[1];
          uVar12 = puVar1[2];
          uVar13 = puVar1[3];
          lVar10 = *(longlong *)(lVar7 + 0x78);
          puVar2 = (undefined4 *)(lVar10 + (ulonglong)uVar6 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar11;
          puVar2[2] = uVar12;
          puVar2[3] = uVar13;
          *(undefined4 *)(lVar10 + (ulonglong)uVar6 * 0x14 + 0x10) =
               *(undefined4 *)(lVar9 + 0x10 + (ulonglong)uVar5 * 0x14);
        }
        *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
      }
      *(int *)(lVar7 + 0x5c) = *(int *)(lVar7 + 0x5c) + 1;
    }
LAB_14520a4bb:
    uVar5 = *(uint *)(lVar7 + 0x5c);
  } while( true );
}



// FUNCTION 14520a5e0 FUN_14520a5e0 body=336 status=ok
// SIG undefined FUN_14520a5e0(void)

void FUN_14520a5e0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_3 + 0x60);
  uVar7 = 0;
  uVar5 = 1;
  if (1 < uVar1) {
    puVar8 = (undefined2 *)(*(longlong *)(param_3 + 0x70) + 0x24);
    do {
      if ((1 << ((byte)*puVar8 & 0x1f) & 0x1c00U) == 0) {
        uVar3 = (uint)uVar7;
        if (1 < uVar5 - uVar3) {
          lVar2 = *(longlong *)(param_3 + 0x70);
          while (uVar3 < uVar5) {
            if ((1 << ((byte)*(undefined2 *)(lVar2 + 0x10 + uVar7 * 0x14) & 0x1f) & 0x1c00U) == 0) {
              uVar3 = (int)uVar7 + 1;
              uVar4 = (ulonglong)uVar3;
              if (uVar3 < uVar5) {
                puVar6 = (undefined2 *)(lVar2 + uVar4 * 0x14 + 0x10);
                do {
                  uVar3 = (uint)uVar4;
                  if ((1 << ((byte)*puVar6 & 0x1f) & 0x1c00U) == 0) break;
                  uVar3 = uVar3 + 1;
                  uVar4 = (ulonglong)uVar3;
                  puVar6 = puVar6 + 10;
                } while (uVar3 < uVar5);
              }
              FUN_14520b020(param_1,param_2,param_3,uVar7,uVar3,param_4);
              uVar7 = (ulonglong)(uVar3 - 1);
            }
            uVar3 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar3;
          }
        }
        uVar7 = (ulonglong)uVar5;
      }
      uVar5 = uVar5 + 1;
      puVar8 = puVar8 + 10;
    } while (uVar5 < uVar1);
  }
  FUN_14520b3d0(param_1,param_2,param_3,uVar7,uVar1,param_4);
  return;
}



// FUNCTION 14520a730 FUN_14520a730 body=152 status=ok
// SIG undefined FUN_14520a730(void)

void FUN_14520a730(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  if (*(uint *)(param_3 + 0x60) != 0) {
    puVar6 = (ushort *)(*(longlong *)(param_3 + 0x70) + 0x10);
    uVar4 = (ulonglong)*(uint *)(param_3 + 0x60);
    do {
      uVar5 = *puVar6;
      if (((byte)uVar5 & 0x1f) == 0xc) {
        uVar3 = 1 << ((byte)uVar5 & 0x1f) & 0x1c00;
        if (uVar3 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar5 >> 8;
        }
        sVar1 = FUN_14520ab30(*(undefined4 *)(puVar6 + -8),uVar2);
        if (uVar3 != 0) {
          *puVar6 = uVar5 & 0xff | sVar1 << 8;
        }
      }
      puVar6 = puVar6 + 10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 14520a7d0 FUN_14520a7d0 body=181 status=ok
// SIG undefined FUN_14520a7d0(void)

void FUN_14520a7d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 *local_18;
  undefined1 local_10;
  
  uVar2 = 0xb;
  if ((*(uint *)(param_3 + 0x38) & 0xfffffffe) != 4) {
    uVar2 = 0xc;
  }
  cVar1 = FUN_144b63d30(param_2,uVar2);
  if (cVar1 != '\0') {
    uVar3 = *(uint *)(param_3 + 0x38) & 0xfffffffd;
    if (uVar3 == 5) {
      FUN_144b61ad0(param_3);
    }
    local_20 = *(undefined4 *)(param_3 + 0x38);
    local_18 = &local_28;
    local_10 = 0;
    local_28 = param_2;
    FUN_14520b4c0(&local_18,param_2,param_3,*(undefined4 *)(param_1 + 0xb0),0);
    if (uVar3 == 5) {
      FUN_144b61ad0(param_3);
    }
  }
  return;
}



// FUNCTION 14520a890 FUN_14520a890 body=617 status=ok
// SIG undefined FUN_14520a890(void)

void FUN_14520a890(undefined8 param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_res18 [2];
  
  uVar9 = *(uint *)(param_3 + 0x38) & 0xfffffffe;
  if (*(uint *)(param_3 + 0x60) != 0) {
    lVar4 = *(longlong *)(param_3 + 0x70) - *(longlong *)(param_3 + 0x80);
    uVar6 = (ulonglong)*(uint *)(param_3 + 0x60);
    piVar7 = (int *)(*(longlong *)(param_3 + 0x80) + 4);
    do {
      uVar1 = *(ushort *)(lVar4 + 0xc + (longlong)piVar7);
      if ((((byte)uVar1 & 0x1f) == 0x1d) &&
         ((*(byte *)(lVar4 + 8 + (longlong)piVar7) >> 5 & 1) == 0)) {
        uVar8 = (uint)(uVar1 >> 8);
        switch(uVar8) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0x10:
          if (uVar9 == 4) {
            piVar7[-1] = (int)((uint)(uVar1 >> 9) + *(int *)(param_2 + 0x20)) / (int)uVar8;
          }
          else {
            iVar3 = -((int)((uint)(uVar1 >> 9) + *(int *)(param_2 + 0x24)) / (int)uVar8);
LAB_14520aab9:
            *piVar7 = iVar3;
          }
          break;
        case 0x11:
          if (uVar9 == 4) {
            piVar7[-1] = (int)(((longlong)*(int *)(param_2 + 0x20) << 2) / 0x12);
          }
          else {
            *piVar7 = (int)(((longlong)-*(int *)(param_2 + 0x24) << 2) / 0x12);
          }
          break;
        case 0x13:
          cVar5 = '0';
          do {
            local_res18[0] = 0;
            iVar3 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x130))
                              (param_2,*(undefined8 *)(param_2 + 0x48),(int)cVar5,local_res18,
                               *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
            if (iVar3 != 0) goto LAB_14520aa76;
            cVar5 = cVar5 + '\x01';
          } while (cVar5 < ':');
          break;
        case 0x14:
          local_res18[0] = 0;
          iVar3 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x130))
                            (param_2,*(undefined8 *)(param_2 + 0x48),0x2e,local_res18,
                             *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
          if (iVar3 == 0) {
            local_res18[0] = 0;
            iVar3 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x130))
                              (param_2,*(undefined8 *)(param_2 + 0x48),0x2c,local_res18,
                               *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
            if (iVar3 == 0) break;
          }
LAB_14520aa76:
          lVar2 = *(longlong *)(param_2 + 0x40);
          if (uVar9 != 4) {
            iVar3 = (**(code **)(lVar2 + 0x150))
                              (param_2,*(undefined8 *)(param_2 + 0x48),local_res18[0],
                               *(undefined8 *)(lVar2 + 0x40));
            goto LAB_14520aab9;
          }
          iVar3 = (**(code **)(lVar2 + 0x148))();
          piVar7[-1] = iVar3;
          break;
        case 0x15:
          if (uVar9 != 4) {
            iVar3 = *piVar7 / 2;
            goto LAB_14520aab9;
          }
          piVar7[-1] = piVar7[-1] / 2;
        }
      }
      piVar7 = piVar7 + 5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 14520ab30 FUN_14520ab30 body=179 status=ok
// SIG undefined FUN_14520ab30(void)

uint FUN_14520ab30(uint param_1,uint param_2)

{
  if (param_2 < 200) {
    if ((param_1 & 0xffffff00) == 0xe00) {
      if (param_2 == 0) {
        switch(param_1) {
        case 0xe31:
        case 0xe34:
        case 0xe35:
        case 0xe36:
        case 0xe37:
        case 0xe47:
        case 0xe4c:
        case 0xe4d:
        case 0xe4e:
          param_2 = 0xe8;
          break;
        case 0xeb1:
        case 0xeb4:
        case 0xeb5:
        case 0xeb6:
        case 0xeb7:
        case 0xebb:
        case 0xecc:
        case 0xecd:
          param_2 = 0xe6;
          break;
        case 0xebc:
          param_2 = 0xdc;
        }
      }
      else if (param_1 == 0xe3a) {
        param_2 = 0xde;
      }
    }
    switch(param_2) {
    case 3:
      return 0xde;
    case 10:
    case 0x6b:
      return 0xe8;
    case 0xb:
    case 0xe:
      return 0xe4;
    case 0xd:
      return 0xd6;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1e:
    case 0x21:
    case 0x76:
    case 0x81:
    case 0x83:
      return 0xdc;
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x7a:
    case 0x84:
      return 0xe6;
    }
  }
  return param_2;
}



// FUNCTION 14520ad40 FUN_14520ad40 body=136 status=ok
// SIG undefined FUN_14520ad40(void)

void FUN_14520ad40(longlong param_1,uint param_2,uint param_3,char param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (param_2 < param_3) {
    uVar4 = (ulonglong)(param_3 - param_2);
    lVar3 = (ulonglong)param_2 * 0x14;
    do {
      if ((*(byte *)(lVar2 + 0x10 + lVar3) & 0x1f) == 0xc) {
        if (param_4 != '\0') {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 8 + lVar3);
          *piVar1 = *piVar1 - *(int *)(*(longlong *)(param_1 + 0x80) + lVar3);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0xc + lVar3);
          *piVar1 = *piVar1 - *(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar3);
        }
        *(undefined4 *)(lVar3 + *(longlong *)(param_1 + 0x80)) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 4 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x14;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 14520add0 FUN_14520add0 body=468 status=ok
// SIG undefined FUN_14520add0(void)

void FUN_14520add0(undefined8 param_1,longlong param_2,longlong param_3,int *param_4,uint param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  local_48 = *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x78);
  iVar1 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x188))
                    (param_2,*(undefined8 *)(param_2 + 0x48),
                     *(undefined4 *)((ulonglong)param_5 * 0x14 + *(longlong *)(param_3 + 0x70)));
  if (iVar1 == 0) goto switchD_14520af1b_caseD_1;
  iVar1 = *(int *)(param_2 + 0x24);
  lVar3 = *(longlong *)(param_3 + 0x80) + (ulonglong)param_5 * 0x14;
  *(undefined8 *)(lVar3 + 8) = 0;
  iVar1 = (int)((iVar1 >> 0x1f & 0xfU) + iVar1) >> 4;
  switch(param_6 + -200) {
  case 0:
  case 0x12:
  case 0x1c:
    iVar2 = *param_4 - (int)local_38;
    goto LAB_14520aefa;
  default:
switchD_14520ae93_caseD_1:
    iVar2 = (param_4[2] - (int)local_30) / 2 - (int)local_38;
    break;
  case 0x10:
  case 0x16:
  case 0x20:
    iVar2 = (param_4[2] - (int)local_38) - (int)local_30;
    break;
  case 0x21:
  case 0x22:
    if (*(int *)(param_3 + 0x38) == 4) {
      *(int *)(lVar3 + 8) = ((param_4[2] - (int)local_30 / 2) - (int)local_38) + *param_4;
    }
    else {
      if (*(int *)(param_3 + 0x38) != 5) goto switchD_14520ae93_caseD_1;
      *(int *)(lVar3 + 8) = (*param_4 - (int)local_30 / 2) - (int)local_38;
    }
    goto LAB_14520aefe;
  }
  iVar2 = iVar2 + *param_4;
LAB_14520aefa:
  *(int *)(lVar3 + 8) = iVar2;
LAB_14520aefe:
  switch(param_6 + -200) {
  default:
    goto switchD_14520af1b_caseD_1;
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x21:
    param_4[3] = param_4[3] - iVar1;
  case 0:
  case 2:
    iVar2 = (param_4[1] - local_38._4_4_) + param_4[3];
    *(int *)(lVar3 + 0xc) = iVar2;
    if (0 < iVar1 == 0 < iVar2) {
      param_4[3] = param_4[3] - iVar2;
      *(undefined4 *)(lVar3 + 0xc) = 0;
    }
    break;
  case 0x1c:
  case 0x1e:
  case 0x20:
  case 0x22:
    param_4[1] = param_4[1] + iVar1;
    param_4[3] = param_4[3] - iVar1;
  case 0xe:
  case 0x10:
    iVar2 = (param_4[1] - local_30._4_4_) - local_38._4_4_;
    *(int *)(lVar3 + 0xc) = iVar2;
    if (0 < iVar1 != 0 < iVar2) {
      iVar1 = -(iVar2 / 2);
      param_4[1] = param_4[1] + iVar1;
      param_4[3] = param_4[3] + iVar2 / 2;
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + iVar1;
    }
    param_4[1] = param_4[1] - local_30._4_4_;
  }
  param_4[3] = param_4[3] + local_30._4_4_;
switchD_14520af1b_caseD_1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 14520b020 FUN_14520b020 body=926 status=ok
// SIG undefined FUN_14520b020(void)

void FUN_14520b020(uint *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                  undefined1 param_6)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  uint local_d0;
  uint local_c8;
  int local_c4;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  longlong local_a0;
  uint *local_98;
  longlong local_90;
  int local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar5 = 0;
  local_98 = param_1;
  local_90 = param_2;
  if (1 < param_5 - param_4) {
    FUN_144b620d0(param_3,(ulonglong)param_4,param_5);
  }
  lVar9 = (ulonglong)param_4 * 0x14;
  local_78 = 0;
  uStack_70 = 0;
  local_d8 = *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x78);
  iVar4 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x188))
                    (param_2,*(undefined8 *)(param_2 + 0x48),
                     *(undefined4 *)(lVar9 + *(longlong *)(param_3 + 0x70)),&local_78);
  if (iVar4 == 0) {
    FUN_14520ad40(param_3,param_4 + 1,param_5,param_6);
  }
  else {
    local_78 = (ulonglong)
               (uint)(local_78._4_4_ + *(int *)(lVar9 + 0xc + *(longlong *)(param_3 + 0x80))) <<
               0x20;
    iVar4 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x148))
                      (param_2,*(undefined8 *)(param_2 + 0x48),
                       *(undefined4 *)(lVar9 + *(longlong *)(param_3 + 0x70)),
                       *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x38));
    lVar3 = *(longlong *)(param_3 + 0x70);
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar4);
    uVar12 = (uint)(*(byte *)(lVar3 + 0xe + lVar9) >> 5);
    if (((*(byte *)(lVar3 + 0xc + lVar9) & 4) == 0) ||
       (bVar2 = *(byte *)(lVar3 + 0xe + lVar9), (bVar2 & 0x10) == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = bVar2 & 0xf;
    }
    iVar15 = 0;
    iVar16 = 0;
    if ((*(uint *)(param_3 + 0x38) & 0xfffffffd) == 4) {
      iVar15 = -*(int *)(lVar9 + *(longlong *)(param_3 + 0x80));
      iVar16 = -*(int *)(lVar9 + 4 + *(longlong *)(param_3 + 0x80));
    }
    uVar14 = (ulonglong)(param_4 + 1);
    iVar11 = -1;
    local_c4 = -1;
    uVar10 = 0xff;
    local_c8 = 0xff;
    local_88 = (int)local_78;
    uStack_84 = local_78._4_4_;
    uStack_7c = uStack_70._4_4_;
    local_a8 = uVar12;
    iStack_80 = iVar4;
    if (param_4 + 1 < param_5) {
      local_a0 = lVar3 + 0x10;
      lVar9 = uVar14 * 0x14;
      iVar17 = (int)local_78;
      uVar18 = local_78._4_4_;
      uVar19 = uStack_70._4_4_;
      iVar20 = (int)local_78;
      uVar21 = local_78._4_4_;
      iVar7 = iVar4;
      uVar22 = uStack_70._4_4_;
      do {
        if (((1 << ((byte)*(ushort *)(lVar9 + local_a0) & 0x1f) & 0x1c00U) == 0) ||
           (*(ushort *)(lVar9 + local_a0) >> 8 == 0)) {
          lVar3 = *(longlong *)(param_3 + 0x80);
          if ((*(uint *)(param_3 + 0x38) & 0xfffffffd) == 4) {
            iVar15 = iVar15 - *(int *)(lVar9 + lVar3);
            iVar16 = iVar16 - *(int *)(lVar9 + 4 + lVar3);
          }
          else {
            iVar15 = iVar15 + *(int *)(lVar9 + lVar3);
            iVar16 = iVar16 + *(int *)(lVar9 + 4 + lVar3);
          }
        }
        else {
          if (1 < uVar8) {
            bVar2 = *(byte *)(lVar9 + -2 + local_a0);
            if ((bVar2 & 0x10) == 0) {
              uVar13 = bVar2 & 0xf;
            }
            else {
              uVar13 = 0;
            }
            iVar6 = uVar13 - 1;
            if (((uVar12 == 0) || (uVar12 != bVar2 >> 5)) || ((int)uVar8 <= iVar6)) {
              iVar6 = uVar8 - 1;
            }
            if (iVar11 != iVar6) {
              local_c8 = 0xff;
              local_c4 = iVar6;
              local_b8 = iVar17;
              uStack_b4 = uVar18;
              iStack_b0 = iVar4;
              uStack_ac = uVar19;
              if ((uVar5 == 0) && (uVar5 = *local_98, (uVar5 & 0xfffffffe) != 4)) {
                uVar5 = FUN_144e2c060(local_98[1]);
              }
              if (uVar5 != 4) {
                iVar6 = (uVar8 - iVar6) + -1;
              }
              iVar20 = local_b8 + (iStack_b0 * iVar6) / (int)uVar8;
              iVar7 = iStack_b0 / (int)uVar8;
              uVar10 = local_c8;
              uVar21 = uStack_b4;
              uVar22 = uStack_ac;
              local_b8 = iVar20;
              iStack_b0 = iVar7;
            }
          }
          if ((1 << ((byte)*(ushort *)(lVar9 + local_a0) & 0x1f) & 0x1c00U) == 0) {
            local_d0 = 0;
          }
          else {
            local_d0 = (uint)(*(ushort *)(lVar9 + local_a0) >> 8);
          }
          if (uVar10 != local_d0) {
            local_c8 = local_d0;
            local_88 = iVar20;
            uStack_84 = uVar21;
            iStack_80 = iVar7;
            uStack_7c = uVar22;
          }
          local_d8 = CONCAT44(local_d8._4_4_,(int)uVar14);
          FUN_14520add0(local_98,local_90,param_3,&local_88);
          *(undefined4 *)(lVar9 + *(longlong *)(param_3 + 0x80)) = 0;
          *(undefined4 *)(lVar9 + 4 + *(longlong *)(param_3 + 0x80)) = 0;
          piVar1 = (int *)(lVar9 + 8 + *(longlong *)(param_3 + 0x80));
          *piVar1 = *piVar1 + iVar15;
          piVar1 = (int *)(lVar9 + 0xc + *(longlong *)(param_3 + 0x80));
          *piVar1 = *piVar1 + iVar16;
          iVar17 = (int)local_78;
          uVar18 = local_78._4_4_;
          iVar4 = (int)uStack_70;
          uVar19 = uStack_70._4_4_;
          uVar12 = local_a8;
          iVar11 = local_c4;
          uVar10 = local_c8;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        lVar9 = lVar9 + 0x14;
      } while (uVar13 < param_5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_68 ^ (ulonglong)auStack_f8);
}



// FUNCTION 14520b3d0 FUN_14520b3d0 body=227 status=ok
// SIG undefined FUN_14520b3d0(void)

void FUN_14520b3d0(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  uint param_5,undefined1 param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined2 *puVar4;
  ulonglong uVar3;
  
  uVar2 = (uint)param_4;
  if (1 < param_5 - uVar2) {
    lVar1 = *(longlong *)(param_3 + 0x70);
    while (uVar2 < param_5) {
      if ((1 << ((byte)*(undefined2 *)(lVar1 + 0x10 + (param_4 & 0xffffffff) * 0x14) & 0x1f) &
          0x1c00U) == 0) {
        uVar2 = (int)param_4 + 1;
        uVar3 = (ulonglong)uVar2;
        if (uVar2 < param_5) {
          puVar4 = (undefined2 *)(lVar1 + uVar3 * 0x14 + 0x10);
          do {
            uVar2 = (uint)uVar3;
            if ((1 << ((byte)*puVar4 & 0x1f) & 0x1c00U) == 0) break;
            uVar2 = uVar2 + 1;
            uVar3 = (ulonglong)uVar2;
            puVar4 = puVar4 + 10;
          } while (uVar2 < param_5);
        }
        FUN_14520b020(param_1,param_2,param_3,param_4,uVar2,param_6);
        param_4 = (ulonglong)(uVar2 - 1);
      }
      uVar2 = (int)param_4 + 1;
      param_4 = (ulonglong)uVar2;
    }
  }
  return;
}



// FUNCTION 14520b4c0 FUN_14520b4c0 body=737 status=ok
// SIG undefined FUN_14520b4c0(void)

void FUN_14520b4c0(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  char cVar10;
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
        local_118[0] = uVar12 + 1;
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
        cVar10 = FUN_1451e5340(local_118);
        uVar9 = local_118[0];
        if (cVar10 == '\0') {
          local_118[0] = uVar12 + 1;
        }
        else {
          uVar14 = (ulonglong)local_118[0];
          lVar7 = *(longlong *)*param_1;
          lVar8 = *(longlong *)(lVar7 + 0x40);
          if ((*(uint *)((longlong *)*param_1 + 1) & 0xfffffffe) == 4) {
            iVar11 = (**(code **)(lVar8 + 0x178))();
          }
          else {
            iVar11 = (**(code **)(lVar8 + 0x180))
                               (lVar7,*(undefined8 *)(lVar7 + 0x48),*(undefined4 *)(lVar2 + lVar5),
                                *(undefined4 *)(lVar5 + uVar14 * 0x14),*(undefined8 *)(lVar8 + 0x70)
                               );
          }
          if (iVar11 != 0) {
            if ((uVar3 & 0xfffffffe) == 4) {
              if (param_5 != '\0') {
                iVar11 = FUN_1451e10a0(param_2);
              }
              if ((char)param_1[1] == '\0') {
                *(int *)(lVar2 + lVar6) = *(int *)(lVar2 + lVar6) + (iVar11 >> 1);
                iVar11 = iVar11 - (iVar11 >> 1);
                piVar1 = (int *)(lVar6 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 8 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(int *)(lVar6 + 0xc + uVar14 * 0x14) = iVar11;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            else {
              if (param_5 != '\0') {
                iVar11 = FUN_144e31290(param_2);
              }
              if ((char)param_1[1] == '\0') {
                piVar1 = (int *)(lVar2 + 4 + lVar6);
                *piVar1 = *piVar1 + (iVar11 >> 1);
                iVar11 = iVar11 - (iVar11 >> 1);
                piVar1 = (int *)(lVar6 + 4 + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
                piVar1 = (int *)(lVar6 + 0xc + uVar14 * 0x14);
                *piVar1 = *piVar1 + iVar11;
              }
              else {
                *(int *)(lVar6 + 8 + uVar14 * 0x14) = iVar11;
                *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 8;
              }
            }
            if (1 < (uVar9 + 1) - uVar12) {
              FUN_144b620d0(param_3,uVar13);
            }
          }
        }
      }
      uVar13 = (ulonglong)local_118[0];
    } while (local_118[0] < uVar4);
  }
  return;
}



// FUNCTION 14520b7d0 FUN_14520b7d0 body=654 status=ok
// SIG undefined FUN_14520b7d0(void)

void FUN_14520b7d0(undefined8 param_1,longlong param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  size_t _Size;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  ushort *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  void *pvVar12;
  undefined1 auStack_308 [32];
  uint local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  undefined1 local_2c8 [640];
  ulonglong local_48;
  ulonglong uVar5;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar10 = *(longlong *)(param_2 + 0x70);
  uVar9 = (ulonglong)param_3;
  uVar8 = (ulonglong)param_3;
  uVar3 = 0xdc;
  local_2e8 = param_4;
  local_2e0 = lVar10;
  local_2d8 = param_2;
  do {
    uVar6 = (uint)uVar8;
    if (uVar6 < param_4) {
      puVar7 = (ushort *)(uVar8 * 0x14 + 0x10 + lVar10);
      do {
        if ((1 << ((byte)*puVar7 & 0x1f) & 0x1c00U) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (uint)(*puVar7 >> 8);
        }
        if (uVar3 <= uVar6) break;
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar6;
        puVar7 = puVar7 + 10;
      } while (uVar6 < param_4);
      uVar6 = (uint)uVar8;
    }
    if (uVar6 == param_4) break;
    uVar6 = (uint)uVar8;
    pvVar12 = (void *)(uVar8 * 0x14 + lVar10);
    if ((((1 << ((byte)*(ushort *)((longlong)pvVar12 + 0x10) & 0x1f) & 0x1c00U) == 0) ||
        (*(ushort *)((longlong)pvVar12 + 0x10) >> 8 <= uVar3)) && (uVar6 < param_4)) {
      puVar7 = (ushort *)((longlong)pvVar12 + 0x10);
      uVar5 = uVar8;
      while( true ) {
        uVar4 = (uint)uVar5;
        if ((1 << ((byte)*puVar7 & 0x1f) & 0x1c00U) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)(*puVar7 >> 8);
        }
        if (uVar2 != uVar3) break;
        uVar2 = 0;
        piVar1 = &DAT_14c7315b0;
        while (*(int *)(puVar7 + -8) != *piVar1) {
          uVar2 = uVar2 + 1;
          piVar1 = piVar1 + 1;
          if (8 < uVar2) goto LAB_14520b92c;
        }
        uVar4 = uVar4 + 1;
        uVar5 = (ulonglong)uVar4;
        puVar7 = puVar7 + 10;
        if (param_4 <= uVar4) break;
      }
LAB_14520b92c:
      if (uVar6 != uVar4) {
        uVar2 = (uint)uVar9;
        if (1 < uVar4 - uVar2) {
          FUN_144b61d00(param_2,uVar9,uVar4);
        }
        _Size = (ulonglong)(uVar4 - uVar6) * 0x14;
        memmove(local_2c8,pvVar12,_Size);
        uVar11 = (uVar2 - uVar6) + uVar4;
        pvVar12 = (void *)(lVar10 + uVar9 * 0x14);
        memmove((void *)(local_2e0 + (ulonglong)uVar11 * 0x14),pvVar12,
                (ulonglong)(uVar6 - uVar2) * 0x14);
        memmove(pvVar12,local_2c8,_Size);
        if (uVar2 < uVar11) {
          puVar7 = (ushort *)((longlong)pvVar12 + 0x10);
          uVar8 = (ulonglong)(uVar11 - uVar2);
          uVar9 = (ulonglong)(uVar2 + (uVar11 - uVar2));
          do {
            if ((1 << ((byte)*puVar7 & 0x1f) & 0x1c00U) != 0) {
              *puVar7 = *puVar7 & 0xff | ((uVar3 != 0xdc) + 0x19) * 0x100;
            }
            puVar7 = puVar7 + 10;
            uVar8 = uVar8 - 1;
            param_4 = local_2e8;
          } while (uVar8 != 0);
        }
        uVar8 = (ulonglong)uVar4;
        param_2 = local_2d8;
        lVar10 = local_2e0;
      }
    }
    uVar3 = uVar3 + 10;
  } while (uVar3 < 0xe7);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_308);
}



// FUNCTION 14520ba70 FUN_14520ba70 body=421 status=ok
// SIG undefined FUN_14520ba70(void)

longlong FUN_14520ba70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  
  lVar7 = FUN_142864336(1);
  if (lVar7 == 0) {
    return 0;
  }
  uVar6 = *(uint *)(lVar7 + 0x28);
  uVar12 = (uint)(*(int *)(param_1 + 4) == 0x41726162);
  iVar11 = 0;
  *(uint *)(lVar7 + 0x28) = uVar12 | uVar6 & 0xfffffffe;
  iVar8 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar8) {
    do {
      uVar3 = (uint)(iVar8 + iVar11) >> 1;
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x24);
      if (uVar4 < 0x73746369) {
        if (0x73746367 < uVar4) {
          lVar9 = *(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x24;
          if (lVar9 != 0) {
            iVar8 = *(int *)(lVar9 + 0x1c);
            goto LAB_14520bb1b;
          }
          break;
        }
        iVar11 = uVar3 + 1;
      }
      else {
        iVar8 = uVar3 - 1;
      }
    } while (iVar11 <= iVar8);
  }
  iVar8 = 0;
LAB_14520bb1b:
  pcVar10 = "losianif2nif3nifidem2demtini";
  lVar9 = 7;
  *(uint *)(lVar7 + 0x28) = -(uint)(iVar8 != 0) & 2 | uVar12 | uVar6 & 0xfffffffc;
  do {
    iVar11 = 0;
    iVar8 = *(int *)(param_1 + 0x38) + -1;
    uVar6 = *(uint *)pcVar10;
    if (-1 < iVar8) {
      do {
        uVar4 = (uint)(iVar8 + iVar11) >> 1;
        uVar12 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24);
        if (uVar6 < uVar12) {
          iVar8 = uVar4 - 1;
        }
        else {
          if (uVar6 <= uVar12) {
            lVar1 = *(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24;
            if (lVar1 != 0) {
              uVar5 = *(undefined4 *)(lVar1 + 0x1c);
              goto LAB_14520bba5;
            }
            break;
          }
          iVar11 = uVar4 + 1;
        }
      } while (iVar11 <= iVar8);
    }
    uVar5 = 0;
LAB_14520bba5:
    *(undefined4 *)(lVar7 + -0x149c56b30 + (longlong)pcVar10) = uVar5;
    if (((*(byte *)(lVar7 + 0x28) & 1) == 0) ||
       ((1 < (byte)((char)*(uint *)pcVar10 - 0x32U) &&
        (cVar2 = FUN_14520bde0(param_1 + 0x28,uVar6), cVar2 == '\0')))) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    *(uint *)(lVar7 + 0x28) = *(uint *)(lVar7 + 0x28) & 0xfffffffe;
    pcVar10 = (char *)((longlong)pcVar10 + 4);
    *(uint *)(lVar7 + 0x28) = *(uint *)(lVar7 + 0x28) | uVar6;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      return lVar7;
    }
  } while( true );
}



// FUNCTION 14520bc20 FUN_14520bc20 body=36 status=ok
// SIG undefined FUN_14520bc20(void)

void FUN_14520bc20(longlong param_1)

{
  LOCK();
  UNLOCK();
  FUN_14520e2b0(*(undefined8 *)(param_1 + 0x20));
  thunk_FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14520bc50 FUN_14520bc50 body=372 status=ok
// SIG undefined FUN_14520bc50(void)

void FUN_14520bc50(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  
  FUN_145207a70(param_1 + 0x28,0x73746368,1);
  FUN_145208de0(param_1 + 0x28,0,&LAB_14520c230);
  FUN_145207a70(param_1 + 0x28,0x63636d70,1);
  FUN_145207a70(param_1 + 0x28,0x6c6f636c,1);
  FUN_145208de0(param_1 + 0x28,0,0);
  pcVar2 = "losianif2nif3nifidem2demtini";
  lVar3 = 7;
  do {
    if ((*(int *)(param_1 + 0xc) == 0x41726162) && (1 < (byte)(*pcVar2 - 0x32U))) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    FUN_145207a70(param_1 + 0x28,*(undefined4 *)pcVar2,-cVar1 & 2,1);
    FUN_145208de0(param_1 + 0x28,0);
    pcVar2 = pcVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_145207a70(param_1 + 0x28,0x726c6967,0xb,1);
  if (*(int *)(param_1 + 0xc) == 0x41726162) {
    FUN_145208de0(param_1 + 0x28,0,FUN_14520c130);
  }
  FUN_145207a70(param_1 + 0x28,0x72636c74,9);
  FUN_145207a70(param_1 + 0x28,0x63616c74,9);
  FUN_145208de0(param_1 + 0x28,0,0);
  FUN_145207a70(param_1 + 0x28,0x6d736574,1);
  return;
}



// FUNCTION 14520bdd0 FUN_14520bdd0 body=3 status=ok
// SIG undefined FUN_14520bdd0(void)

void FUN_14520bdd0(void)

{
  return;
}



// FUNCTION 14520bde0 FUN_14520bde0 body=105 status=ok
// SIG undefined FUN_14520bde0(void)

ulonglong FUN_14520bde0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x10);
  iVar6 = 0;
  iVar5 = *(uint *)(param_1 + 0x10) - 1;
  if (-1 < iVar5) {
    do {
      uVar3 = (uint)(iVar5 + iVar6) >> 1;
      uVar4 = (ulonglong)uVar3 * 9;
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 0x24);
      if (param_2 < uVar2) {
        iVar5 = uVar3 - 1;
      }
      else {
        uVar4 = 0;
        if (param_2 <= uVar2) {
          lVar1 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 0x24;
          uVar4 = 0;
          if (lVar1 != 0) {
            return (ulonglong)(*(uint *)(lVar1 + 0x20) & 1);
          }
          break;
        }
        iVar6 = uVar3 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14520be50 FUN_14520be50 body=102 status=ok
// SIG undefined FUN_14520be50(void)

undefined4 FUN_14520be50(longlong param_1,uint param_2)

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
      if (param_2 < uVar2) {
        iVar4 = uVar3 - 1;
      }
      else {
        if (param_2 <= uVar2) {
          lVar1 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 0x24;
          if (lVar1 == 0) {
            return 0;
          }
          return *(undefined4 *)(lVar1 + 0x1c);
        }
        iVar5 = uVar3 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return 0;
}



// FUNCTION 14520bef0 FUN_14520bef0 body=164 status=ok
// SIG undefined FUN_14520bef0(void)

void FUN_14520bef0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  FUN_14520e450(param_2);
  if (param_3 == 0x4d6f6e67) {
    uVar1 = *(uint *)(param_2 + 0x60);
    uVar5 = 1;
    piVar2 = *(int **)(param_2 + 0x70);
    piVar3 = piVar2;
    if (1 < uVar1) {
      do {
        if (piVar3[5] - 0x180bU < 3) {
          *(undefined1 *)((longlong)piVar3 + 0x26) =
               *(undefined1 *)((longlong)piVar2 + (ulonglong)(uVar5 - 1) * 0x14 + 0x12);
        }
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 5;
      } while (uVar5 < uVar1);
    }
  }
  if (*(uint *)(param_2 + 0x60) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x60);
    puVar4 = (uint *)(*(longlong *)(param_2 + 0x70) + 4);
    do {
      *puVar4 = *puVar4 | *(uint *)(param_1 + (ulonglong)*(byte *)((longlong)puVar4 + 0xe) * 4);
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 5;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 14520bfa0 FUN_14520bfa0 body=334 status=ok
// SIG undefined FUN_14520bfa0(void)

undefined1 FUN_14520bfa0(uint param_1)

{
  switch(param_1 >> 0xc) {
  case 0:
    if (param_1 - 0x600 < 0x2e3) {
      return (&DAT_149c56da0)[param_1 - 0x600];
    }
    break;
  case 1:
    if (param_1 - 0x1806 < 0xa5) {
      return (&DAT_149c56da0)[param_1 - 0x1523];
    }
    break;
  case 2:
    if (param_1 - 0x200c < 0x5e) {
      return (&DAT_149c56da0)[param_1 - 0x1c84];
    }
    break;
  case 10:
    if (param_1 - 0xa840 < 0x34) {
      return (&DAT_149c56da0)[param_1 - 0xa45a];
    }
    break;
  case 0x10:
    if (param_1 - 0x10ac0 < 0x30) {
      return (&DAT_149c56da0)[param_1 - 0x106a6];
    }
    if (param_1 - 0x10b80 < 0x30) {
      return (&DAT_149c56da0)[param_1 - 0x10736];
    }
    if (param_1 - 0x10d00 < 0x24) {
      return (&DAT_149c56da0)[param_1 - 0x10886];
    }
    if (param_1 - 0x10f30 < 0x25) {
      return (&DAT_149c56da0)[param_1 - 0x10a92];
    }
    break;
  case 0x11:
    if (param_1 - 0x110bd < 0x11) {
      return (&DAT_149c56da0)[param_1 - 0x10bfa];
    }
    break;
  case 0x1e:
    if (param_1 - 0x1e900 < 0x4c) {
      return (&DAT_149c56da0)[param_1 - 0x1e42c];
    }
  }
  return 8;
}



// FUNCTION 14520c130 FUN_14520c130 body=248 status=ok
// SIG undefined FUN_14520c130(void)

void FUN_14520c130(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    puVar3 = *(undefined4 **)(lVar1 + 0x20);
    LOCK();
    UNLOCK();
    while (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_142864336(1,0xe8);
      if (puVar3 == (undefined4 *)0x0) {
LAB_14520c1da:
        puVar3 = (undefined4 *)&DAT_149a1f1a0;
      }
      else {
        *puVar3 = 0;
        *(undefined1 *)(puVar3 + 1) = 0;
        cVar2 = FUN_14520e140(puVar3,param_1,param_2);
        if ((cVar2 == '\0') && (cVar2 = FUN_14520deb0(puVar3,param_1,param_2), cVar2 == '\0')) {
          thunk_FUN_1400020a8(puVar3);
          goto LAB_14520c1da;
        }
      }
      LOCK();
      bVar4 = *(longlong *)(lVar1 + 0x20) == 0;
      if (bVar4) {
        *(longlong *)(lVar1 + 0x20) = (longlong)puVar3;
      }
      UNLOCK();
      if (bVar4) break;
      FUN_14520e2b0(puVar3);
      puVar3 = *(undefined4 **)(lVar1 + 0x20);
      LOCK();
      UNLOCK();
    }
    FUN_14520e350(puVar3,param_2,param_3);
  }
  return;
}



// FUNCTION 14520c290 FUN_14520c290 body=220 status=ok
// SIG undefined FUN_14520c290(void)

undefined8
FUN_14520c290(undefined1 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  
  lVar5 = FUN_14520eb10(param_2,param_1,6);
  if (lVar5 != 0) {
    *param_1 = (char)((uint)param_3 >> 8);
    param_1[1] = (char)param_3;
    pbVar1 = param_1 + 4;
    param_1[3] = (char)param_4;
    param_1[2] = (char)((uint)param_4 >> 8);
    cVar4 = FUN_14520c370(pbVar1,param_2,param_5);
    if (cVar4 != '\0') {
      if ((param_1[3] & 0x10) != 0) {
        lVar5 = FUN_14520eb10(param_2,param_1,
                              (((int)pbVar1 + ((uint)*pbVar1 * 0x100 + (byte)param_1[5] + 1) * 2) -
                              (int)param_1) + 2);
        if (lVar5 == 0) {
          return 0;
        }
        uVar2 = param_1[5];
        bVar3 = *pbVar1;
        param_1[(ulonglong)CONCAT11(bVar3,uVar2) * 2 + 6] = (char)((uint)param_4 >> 0x18);
        param_1[(ulonglong)CONCAT11(bVar3,uVar2) * 2 + 7] = (char)((uint)param_4 >> 0x10);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14520c370 FUN_14520c370 body=131 status=ok
// SIG undefined FUN_14520c370(void)

bool FUN_14520c370(byte *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_14520f210(param_2,param_1,2);
  if (lVar2 == 0) {
    return false;
  }
  param_1[1] = (byte)param_3;
  bVar1 = (byte)(param_3 >> 8);
  *param_1 = bVar1;
  lVar2 = FUN_14520f210(param_2,param_1,((uint)bVar1 * 0x100 + (param_3 & 0xff)) * 2 + 2);
  return lVar2 != 0;
}



// FUNCTION 14520c400 FUN_14520c400 body=125 status=ok
// SIG undefined FUN_14520c400(void)

undefined8 FUN_14520c400(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  puVar6 = *(undefined2 **)(param_3 + 8);
  uVar1 = *(uint *)(param_3 + 0x10);
  uVar3 = FUN_14520c480(param_1 + 2,param_2,uVar1);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    lVar7 = (param_1 + 2) - (longlong)puVar6;
    do {
      puVar5 = (undefined2 *)&DAT_149a1f1a0;
      if ((uint)uVar4 < uVar1) {
        puVar5 = puVar6;
      }
      uVar2 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      *(undefined2 *)(lVar7 + 2 + (longlong)puVar6) = *puVar5;
      puVar6 = puVar6 + 1;
    } while (uVar2 < uVar1);
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 14520c480 FUN_14520c480 body=131 status=ok
// SIG undefined FUN_14520c480(void)

bool FUN_14520c480(byte *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_14520ed10(param_2,param_1,2);
  if (lVar2 == 0) {
    return false;
  }
  param_1[1] = (byte)param_3;
  bVar1 = (byte)(param_3 >> 8);
  *param_1 = bVar1;
  lVar2 = FUN_14520ed10(param_2,param_1,((uint)bVar1 * 0x100 + (param_3 & 0xff)) * 2 + 2);
  return lVar2 != 0;
}



// FUNCTION 14520c510 FUN_14520c510 body=103 status=ok
// SIG undefined FUN_14520c510(void)

undefined8 FUN_14520c510(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  
  uVar2 = FUN_14520c480(param_1,param_2,*(undefined4 *)(param_3 + 0x10));
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar3 = 0;
  if (*(int *)(param_3 + 0x10) != 0) {
    if (*(int *)(param_3 + 0x10) != 0) goto LAB_14520c551;
    puVar4 = (undefined2 *)&DAT_149a1f1a0;
    while( true ) {
      *(undefined2 *)(param_1 + 2 + uVar3 * 2) = *puVar4;
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
      if (*(uint *)(param_3 + 0x10) <= uVar1) break;
LAB_14520c551:
      puVar4 = (undefined2 *)(*(longlong *)(param_3 + 8) + uVar3 * 2);
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 14520c580 FUN_14520c580 body=812 status=ok
// SIG undefined FUN_14520c580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14520c580(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  
  lVar1 = FUN_14520eb90(param_2,param_1,4);
  if (lVar1 == 0) {
    return 0;
  }
  uVar10 = *(uint *)(param_3 + 0x10);
  if (uVar10 == 0) {
    *(undefined2 *)(param_1 + 2) = 0;
    return 1;
  }
  uVar7 = 1;
  uVar12 = 1;
  uVar8 = uVar12;
  if (1 < uVar10) {
    do {
      if (uVar8 - 1 < uVar10) {
        pbVar5 = (byte *)(*(longlong *)(param_3 + 8) + (ulonglong)(uVar8 - 1) * 2);
      }
      else {
        pbVar5 = &DAT_149a1f1a0;
      }
      if (uVar8 < uVar10) {
        pbVar11 = (byte *)(*(longlong *)(param_3 + 8) + (ulonglong)uVar8 * 2);
      }
      else {
        pbVar11 = &DAT_149a1f1a0;
      }
      if ((uint)pbVar5[1] + (uint)*pbVar5 * 0x100 + 1 != (uint)*pbVar11 * 0x100 + (uint)pbVar11[1])
      {
        uVar12 = uVar12 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar10);
  }
  pbVar5 = (byte *)(param_1 + 2);
  *(char *)(param_1 + 3) = (char)uVar12;
  *pbVar5 = (byte)(uVar12 >> 8);
  lVar1 = FUN_14520ec10(param_2,pbVar5);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar9 = 0;
    puVar6 = (undefined2 *)&DAT_149a1f1a0;
    if (*(int *)(param_3 + 0x10) != 0) {
      puVar6 = *(undefined2 **)(param_3 + 8);
    }
    if ((uint)*(byte *)(param_1 + 3) + (uint)*pbVar5 * 0x100 == 0) {
      puVar4 = &DAT_14c793f60;
      DAT_14c793f60 = 0x100;
      _DAT_14c793f64 = 0;
    }
    else {
      puVar4 = (undefined4 *)(param_1 + 4);
    }
    *(undefined2 *)puVar4 = *puVar6;
    if ((uint)*pbVar5 * 0x100 + (uint)*(byte *)(param_1 + 3) == 0) {
      DAT_14c793f60 = 0x100;
      _DAT_14c793f64 = 0;
      puVar4 = &DAT_14c793f60;
    }
    else {
      puVar4 = (undefined4 *)(param_1 + 4);
    }
    *(undefined2 *)(puVar4 + 1) = 0;
    uVar10 = *(uint *)(param_3 + 0x10);
    if (1 < uVar10) {
      do {
        if (uVar7 - 1 < uVar10) {
          pbVar11 = (byte *)(*(longlong *)(param_3 + 8) + (ulonglong)(uVar7 - 1) * 2);
        }
        else {
          pbVar11 = &DAT_149a1f1a0;
        }
        if (uVar7 < uVar10) {
          pbVar2 = (byte *)(*(longlong *)(param_3 + 8) + (ulonglong)uVar7 * 2);
        }
        else {
          pbVar2 = &DAT_149a1f1a0;
        }
        if ((uint)*pbVar11 * 0x100 + 1 + (uint)pbVar11[1] != (uint)pbVar2[1] + (uint)*pbVar2 * 0x100
           ) {
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          if (uVar7 < uVar10) {
            puVar6 = (undefined2 *)(*(longlong *)(param_3 + 8) + (ulonglong)uVar7 * 2);
          }
          else {
            puVar6 = (undefined2 *)&DAT_149a1f1a0;
          }
          if (uVar8 < (uint)*pbVar5 * 0x100 + (uint)*(byte *)(param_1 + 3)) {
            pbVar11 = pbVar5 + (uVar9 * 2 + 1 + (ulonglong)uVar8) * 2;
          }
          else {
            pbVar11 = (byte *)&DAT_14c793f60;
            DAT_14c793f60 = 0x100;
            _DAT_14c793f64 = 0;
          }
          *(undefined2 *)pbVar11 = *puVar6;
          if (uVar8 < (uint)*pbVar5 * 0x100 + (uint)*(byte *)(param_1 + 3)) {
            pbVar11 = pbVar5 + (uVar9 * 2 + 1 + (ulonglong)uVar8) * 2;
          }
          else {
            pbVar11 = (byte *)&DAT_14c793f60;
            DAT_14c793f60 = 0x100;
            _DAT_14c793f64 = 0;
          }
          pbVar11[5] = (byte)uVar7;
          pbVar11[4] = (byte)(uVar7 >> 8);
        }
        if (uVar7 < *(uint *)(param_3 + 0x10)) {
          puVar6 = (undefined2 *)(*(longlong *)(param_3 + 8) + (ulonglong)uVar7 * 2);
        }
        else {
          puVar6 = (undefined2 *)&DAT_149a1f1a0;
        }
        if ((uint)uVar9 < (uint)*(byte *)(param_1 + 3) + (uint)*pbVar5 * 0x100) {
          pbVar11 = pbVar5 + uVar9 * 6 + 2;
        }
        else {
          pbVar11 = (byte *)&DAT_14c793f60;
          DAT_14c793f60 = 0x100;
          _DAT_14c793f64 = 0;
        }
        uVar7 = uVar7 + 1;
        *(undefined2 *)(pbVar11 + 2) = *puVar6;
        uVar10 = *(uint *)(param_3 + 0x10);
      } while (uVar7 < uVar10);
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14520c8b0 FUN_14520c8b0 body=345 status=ok
// SIG undefined FUN_14520c8b0(void)

undefined8 FUN_14520c8b0(byte *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  lVar4 = FUN_14520ec90(param_2,param_1,2);
  if (lVar4 != 0) {
    uVar7 = *(uint *)(param_3 + 0x10);
    iVar8 = 1;
    uVar10 = 1;
    if (1 < uVar7) {
      do {
        uVar1 = (uint)uVar10;
        if (uVar1 - 1 < uVar7) {
          pbVar9 = (byte *)(*(longlong *)(param_3 + 8) + (ulonglong)(uVar1 - 1) * 2);
        }
        else {
          pbVar9 = &DAT_149a1f1a0;
        }
        if (uVar1 < uVar7) {
          pbVar5 = (byte *)(*(longlong *)(param_3 + 8) + uVar10 * 2);
        }
        else {
          pbVar5 = &DAT_149a1f1a0;
        }
        uVar10 = (ulonglong)(uVar1 + 1);
        iVar2 = iVar8 + 1;
        if (pbVar9[1] + 1 + (uint)*pbVar9 * 0x100 == (uint)*pbVar5 * 0x100 + (uint)pbVar5[1]) {
          iVar2 = iVar8;
        }
        iVar8 = iVar2;
      } while (uVar1 + 1 < uVar7);
    }
    uVar7 = 2 - (uVar7 * 2 < (uint)(iVar8 * 3));
    param_1[1] = (byte)uVar7;
    bVar3 = (byte)(uVar7 >> 8);
    *param_1 = bVar3;
    iVar8 = (uint)bVar3 * 0x100 + (uVar7 & 0xff);
    if (iVar8 == 1) {
      local_20 = *(undefined8 *)(param_3 + 8);
      local_18 = *(undefined4 *)(param_3 + 0x10);
      uVar6 = FUN_14520c400(param_1,param_2,local_28);
      return uVar6;
    }
    if (iVar8 == 2) {
      local_20 = *(undefined8 *)(param_3 + 8);
      local_18 = *(undefined4 *)(param_3 + 0x10);
      uVar6 = FUN_14520c580(param_1,param_2,local_28);
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 14520ca10 FUN_14520ca10 body=211 status=ok
// SIG undefined FUN_14520ca10(void)

undefined8 FUN_14520ca10(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 2;
  lVar1 = FUN_14520f190(param_2,param_1,2);
  if (lVar1 != 0) {
    uVar5 = *(int *)(param_3 + 0x10) + 1;
    *param_1 = (char)(uVar5 >> 8);
    param_1[1] = (char)uVar5;
    if ((ushort)((short)(uVar5 >> 8) * 0x100 + ((ushort)uVar5 & 0xff)) != 0) {
      iVar4 = ((uVar5 >> 8 & 0xff) * 0x100 + (uVar5 & 0xff)) * 2;
    }
    lVar1 = FUN_14520f190(param_2,param_1,iVar4);
    if (lVar1 != 0) {
      uVar2 = 0;
      if (*(int *)(param_3 + 0x10) != 0) {
        if (*(int *)(param_3 + 0x10) != 0) goto LAB_14520cab3;
        puVar3 = (undefined2 *)&DAT_149a1f1a0;
        while( true ) {
          *(undefined2 *)(param_1 + uVar2 * 2 + 2) = *puVar3;
          uVar5 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar5;
          if (*(uint *)(param_3 + 0x10) <= uVar5) break;
LAB_14520cab3:
          puVar3 = (undefined2 *)(*(longlong *)(param_3 + 8) + uVar2 * 2);
        }
      }
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14520caf0 FUN_14520caf0 body=149 status=ok
// SIG undefined FUN_14520caf0(void)

ulonglong FUN_14520caf0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  lVar3 = FUN_14520ed90(param_2,param_1,6);
  uVar4 = 0;
  if (lVar3 != 0) {
    local_20 = *(undefined8 *)(param_3 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    local_18 = *(undefined4 *)(param_3 + 0x10);
    iVar5 = (int)uVar1 - (int)param_1;
    *(char *)(param_1 + 3) = (char)iVar5;
    *(char *)(param_1 + 2) = (char)((uint)iVar5 >> 8);
    uVar4 = FUN_14520c8b0(uVar1,param_2,local_28);
    if ((char)uVar4 != '\0') {
      *(char *)(param_1 + 5) = (char)param_4;
      cVar2 = (char)((uint)param_4 >> 8);
      *(char *)(param_1 + 4) = cVar2;
      return CONCAT71((uint7)(byte)(cVar2 >> 7),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14520cb90 FUN_14520cb90 body=171 status=ok
// SIG undefined FUN_14520cb90(void)

bool FUN_14520cb90(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  lVar3 = FUN_14520ee10(param_2,param_1,6);
  if (lVar3 != 0) {
    local_20 = *(undefined8 *)(param_4 + 8);
    local_18 = *(undefined4 *)(param_4 + 0x10);
    cVar2 = FUN_14520c510(param_1 + 4,param_2,local_28);
    if (cVar2 != '\0') {
      local_20 = *(undefined8 *)(param_3 + 8);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      local_18 = *(undefined4 *)(param_3 + 0x10);
      iVar4 = (int)uVar1 - (int)param_1;
      *(char *)(param_1 + 3) = (char)iVar4;
      *(char *)(param_1 + 2) = (char)((uint)iVar4 >> 8);
      cVar2 = FUN_14520c8b0(uVar1,param_2,local_28);
      return cVar2 != '\0';
    }
  }
  return false;
}



// FUNCTION 14520cc40 FUN_14520cc40 body=446 status=ok
// SIG undefined FUN_14520cc40(void)

undefined8 FUN_14520cc40(undefined1 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar2 = FUN_14520ee90(param_2,param_1,2);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    iVar8 = 0;
    uVar7 = 2;
    if (uVar1 != 0) {
      uVar7 = 1;
      pbVar6 = &DAT_149a1f1a0;
      if (*(uint *)(param_4 + 0x10) != 0) {
        pbVar6 = *(byte **)(param_4 + 8);
      }
      pbVar4 = &DAT_149a1f1a0;
      if (uVar1 != 0) {
        pbVar4 = *(byte **)(param_3 + 8);
      }
      iVar8 = (((uint)*pbVar6 - (uint)*pbVar4) * 0x100 - (uint)pbVar4[1]) + (uint)pbVar6[1];
      uVar5 = uVar7;
      if (1 < uVar1) {
        do {
          if (uVar5 < *(uint *)(param_4 + 0x10)) {
            pbVar6 = (byte *)(*(longlong *)(param_4 + 8) + (ulonglong)uVar5 * 2);
          }
          else {
            pbVar6 = &DAT_149a1f1a0;
          }
          if (uVar5 < uVar1) {
            pbVar4 = (byte *)(*(longlong *)(param_3 + 8) + (ulonglong)uVar5 * 2);
          }
          else {
            pbVar4 = &DAT_149a1f1a0;
          }
          if (iVar8 != (((uint)*pbVar6 - (uint)*pbVar4) * 0x100 - (uint)pbVar4[1]) + (uint)pbVar6[1]
             ) {
            uVar7 = 2;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
    }
    param_1[1] = (char)uVar7;
    *param_1 = 0;
    if (uVar7 == 1) {
      local_28 = *(undefined8 *)(param_3 + 8);
      local_20 = *(undefined4 *)(param_3 + 0x10);
      uVar3 = FUN_14520caf0(param_1,param_2,local_30,iVar8);
      return uVar3;
    }
    if (uVar7 == 2) {
      local_40 = *(undefined8 *)(param_4 + 8);
      local_38 = *(undefined4 *)(param_4 + 0x10);
      local_28 = *(undefined8 *)(param_3 + 8);
      local_20 = *(undefined4 *)(param_3 + 0x10);
      uVar3 = FUN_14520cb90(param_1,param_2,local_30,local_48);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14520ce00 FUN_14520ce00 body=130 status=ok
// SIG undefined FUN_14520ce00(void)

bool FUN_14520ce00(undefined2 *param_1,undefined8 param_2,undefined2 param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  lVar2 = FUN_14520ef10(param_2,param_1,4);
  if (lVar2 == 0) {
    return false;
  }
  *param_1 = param_3;
  local_20 = *(undefined8 *)(param_4 + 8);
  local_18 = *(undefined4 *)(param_4 + 0x10);
  cVar1 = FUN_14520ca10(param_1 + 1,param_2,local_28);
  return cVar1 != '\0';
}



// FUNCTION 14520ce90 FUN_14520ce90 body=451 status=ok
// SIG undefined FUN_14520ce90(void)

undefined8
FUN_14520ce90(byte *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  undefined1 local_48 [8];
  undefined8 local_40;
  uint local_38;
  ulonglong uVar9;
  
  lVar4 = FUN_14520ef90(param_2,param_1,2);
  if (lVar4 == 0) {
    return 0;
  }
  uVar6 = *(uint *)(param_3 + 0x10);
  lVar4 = FUN_14520f110(param_2,param_1,2);
  if (lVar4 != 0) {
    param_1[1] = (byte)uVar6;
    bVar2 = (byte)(uVar6 >> 8);
    *param_1 = bVar2;
    lVar4 = FUN_14520f110(param_2,param_1,((uint)bVar2 * 0x100 + (uVar6 & 0xff)) * 2 + 2);
    if (lVar4 != 0) {
      uVar6 = *(uint *)(param_3 + 0x10);
      uVar8 = 0;
      if (uVar6 != 0) {
        do {
          uVar9 = (ulonglong)uVar8;
          if (uVar8 < *(uint *)(param_4 + 0x10)) {
            piVar5 = (int *)(*(longlong *)(param_4 + 8) + uVar9 * 4);
          }
          else {
            piVar5 = (int *)&DAT_149a1f1a0;
          }
          uVar10 = 0;
          if (0 < (int)(*piVar5 - 1U)) {
            uVar10 = *piVar5 - 1U;
          }
          local_40 = *(undefined8 *)(param_5 + 8);
          local_38 = uVar10;
          if (*(uint *)(param_5 + 0x10) < uVar10) {
            local_38 = *(uint *)(param_5 + 0x10);
          }
          if (uVar8 < uVar6) {
            puVar12 = (undefined2 *)(*(longlong *)(param_3 + 8) + uVar9 * 2);
          }
          else {
            puVar12 = (undefined2 *)&DAT_149a1f1a0;
          }
          if (uVar8 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
            pbVar11 = param_1 + (uVar9 + 1) * 2;
          }
          else {
            pbVar11 = (byte *)&DAT_14c793f60;
            DAT_14c793f60._0_2_ = 0;
          }
          uVar1 = *(undefined8 *)(param_2 + 0x18);
          iVar7 = (int)uVar1 - (int)param_1;
          pbVar11[1] = (byte)iVar7;
          *pbVar11 = (byte)((uint)iVar7 >> 8);
          cVar3 = FUN_14520ce00(uVar1,param_2,*puVar12,local_48);
          if (cVar3 == '\0') {
            return 0;
          }
          uVar6 = *(uint *)(param_5 + 0x10);
          if (uVar6 < uVar10) {
            uVar10 = uVar6;
          }
          uVar8 = uVar8 + 1;
          *(uint *)(param_5 + 0x10) = uVar6 - uVar10;
          *(longlong *)(param_5 + 8) = *(longlong *)(param_5 + 8) + (ulonglong)uVar10 * 2;
          uVar6 = *(uint *)(param_3 + 0x10);
        } while (uVar8 < uVar6);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14520d060 FUN_14520d060 body=567 status=ok
// SIG undefined FUN_14520d060(void)

ulonglong FUN_14520d060(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5,longlong param_6,undefined8 param_7)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  byte bVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 local_58 [8];
  undefined8 local_50;
  uint local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  uint local_30;
  
  lVar7 = FUN_14520f010(param_2,param_1,6);
  if (lVar7 == 0) {
    return 0;
  }
  uVar11 = *(uint *)(param_3 + 0x10);
  pbVar1 = (byte *)(param_1 + 4);
  lVar7 = FUN_14520f090(param_2,pbVar1,2);
  if (lVar7 != 0) {
    *(char *)(param_1 + 5) = (char)uVar11;
    bVar6 = (byte)(uVar11 >> 8);
    *pbVar1 = bVar6;
    lVar7 = FUN_14520f090(param_2,pbVar1,((uint)bVar6 * 0x100 + (uVar11 & 0xff)) * 2 + 2);
    if (lVar7 != 0) {
      uVar11 = 0;
      if (*(int *)(param_3 + 0x10) != 0) {
        do {
          if (uVar11 < *(uint *)(param_4 + 0x10)) {
            puVar8 = (uint *)(*(longlong *)(param_4 + 8) + (ulonglong)uVar11 * 4);
          }
          else {
            puVar8 = (uint *)&DAT_149a1f1a0;
          }
          uVar2 = *puVar8;
          local_50 = *(undefined8 *)(param_6 + 8);
          local_48 = uVar2;
          if (*(uint *)(param_6 + 0x10) < uVar2) {
            local_48 = *(uint *)(param_6 + 0x10);
          }
          local_30 = uVar2;
          if (*(uint *)(param_5 + 0x10) < uVar2) {
            local_30 = *(uint *)(param_5 + 0x10);
          }
          local_38 = *(undefined8 *)(param_5 + 8);
          if (uVar11 < (uint)*pbVar1 * 0x100 + (uint)*(byte *)(param_1 + 5)) {
            pbVar12 = pbVar1 + ((ulonglong)uVar11 + 1) * 2;
          }
          else {
            pbVar12 = (byte *)&DAT_14c793f60;
            DAT_14c793f60._0_2_ = 0;
          }
          uVar4 = *(undefined8 *)(param_2 + 0x18);
          iVar10 = (int)uVar4 - (int)param_1;
          pbVar12[1] = (byte)iVar10;
          *pbVar12 = (byte)((uint)iVar10 >> 8);
          uVar9 = FUN_14520ce90(uVar4,param_2,local_40,local_58,param_7);
          if ((char)uVar9 == '\0') {
            return uVar9 & 0xffffffffffffff00;
          }
          uVar3 = *(uint *)(param_5 + 0x10);
          uVar5 = uVar2;
          if (uVar3 < uVar2) {
            uVar5 = uVar3;
          }
          *(longlong *)(param_5 + 8) = *(longlong *)(param_5 + 8) + (ulonglong)uVar5 * 2;
          *(uint *)(param_5 + 0x10) = uVar3 - uVar5;
          uVar3 = *(uint *)(param_6 + 0x10);
          if (uVar3 < uVar2) {
            uVar2 = uVar3;
          }
          uVar11 = uVar11 + 1;
          *(uint *)(param_6 + 0x10) = uVar3 - uVar2;
          *(longlong *)(param_6 + 8) = *(longlong *)(param_6 + 8) + (ulonglong)uVar2 * 4;
        } while (uVar11 < *(uint *)(param_3 + 0x10));
      }
      local_38 = *(undefined8 *)(param_3 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      local_30 = *(undefined4 *)(param_3 + 0x10);
      iVar10 = (int)uVar4 - (int)param_1;
      *(char *)(param_1 + 3) = (char)iVar10;
      *(char *)(param_1 + 2) = (char)((uint)iVar10 >> 8);
      uVar9 = FUN_14520c8b0(uVar4,param_2,local_40);
      return uVar9;
    }
  }
  return 0;
}



// FUNCTION 14520d2a0 FUN_14520d2a0 body=267 status=ok
// SIG undefined FUN_14520d2a0(void)

void FUN_14520d2a0(undefined2 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = FUN_14520ee90(param_2,param_1,2);
  if (lVar1 != 0) {
    *param_1 = 0x100;
    local_80 = *(undefined8 *)(param_7 + 8);
    local_78 = *(undefined4 *)(param_7 + 0x10);
    local_68 = *(undefined8 *)(param_6 + 8);
    local_60 = *(undefined4 *)(param_6 + 0x10);
    local_50 = *(undefined8 *)(param_5 + 8);
    local_48 = *(undefined4 *)(param_5 + 0x10);
    local_38 = *(undefined8 *)(param_4 + 8);
    local_30 = *(undefined4 *)(param_4 + 0x10);
    local_20 = *(undefined8 *)(param_3 + 8);
    local_18 = *(undefined4 *)(param_3 + 0x10);
    FUN_14520d060(param_1,param_2,local_28,local_40,local_58,local_70,local_88);
  }
  return;
}



// FUNCTION 14520d3b0 FUN_14520d3b0 body=323 status=ok
// SIG undefined FUN_14520d3b0(void)

void FUN_14520d3b0(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  cVar2 = FUN_14520c290(param_1,param_2,4,param_3,1);
  if (cVar2 != '\0') {
    local_80 = *(undefined8 *)(param_8 + 8);
    local_78 = *(undefined4 *)(param_8 + 0x10);
    local_68 = *(undefined8 *)(param_7 + 8);
    local_60 = *(undefined4 *)(param_7 + 0x10);
    local_50 = *(undefined8 *)(param_6 + 8);
    local_48 = *(undefined4 *)(param_6 + 0x10);
    local_38 = *(undefined8 *)(param_5 + 8);
    local_30 = *(undefined4 *)(param_5 + 0x10);
    local_20 = *(undefined8 *)(param_4 + 8);
    local_18 = *(undefined4 *)(param_4 + 0x10);
    if ((uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5) == 0) {
      puVar4 = &DAT_14c793f60;
      DAT_14c793f60._0_2_ = 0;
    }
    else {
      puVar4 = (undefined4 *)(param_1 + 6);
    }
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    iVar3 = (int)uVar1 - (int)param_1;
    *(char *)((longlong)puVar4 + 1) = (char)iVar3;
    *(char *)puVar4 = (char)((uint)iVar3 >> 8);
    FUN_14520d2a0(uVar1,param_2,local_28,local_40,local_58,local_70,local_88);
  }
  return;
}



// FUNCTION 14520d500 FUN_14520d500 body=1016 status=ok
// SIG undefined FUN_14520d500(void)

void FUN_14520d500(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *_Dst_00;
  uint *puVar8;
  char cVar9;
  short *psVar10;
  ulonglong uVar11;
  uint *_Src;
  undefined1 *puVar12;
  undefined1 auStack_738 [32];
  undefined8 local_718;
  undefined4 local_710;
  char *local_708;
  uint *local_700;
  undefined1 *local_6f8;
  uint local_6f0;
  char *local_6e8;
  undefined4 local_6d8 [2];
  uint *local_6d0;
  undefined1 *local_6c8;
  uint *local_6c0;
  char local_6b8;
  uint local_6b0;
  uint local_6ac;
  undefined1 local_6a8 [8];
  undefined1 *local_6a0;
  int local_698;
  undefined1 local_690 [8];
  undefined1 *local_688;
  int local_680;
  uint local_678;
  undefined2 local_674;
  undefined4 local_672 [209];
  undefined1 local_32c [4];
  undefined1 local_328 [368];
  undefined1 local_1b8 [368];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_738;
  uVar11 = 0;
  uVar7 = 0x621;
  psVar10 = (short *)(&DAT_149c56570 + (param_3 & 0xffffffff) * 2);
  do {
    sVar1 = *psVar10;
    if (((((sVar1 != 0) && (iVar4 = FUN_144b63980(param_2,uVar7,0,&local_6b0), iVar4 != 0)) &&
         (iVar4 = FUN_144b63980(param_2,sVar1,0,&local_6ac), iVar4 != 0)) &&
        ((local_6b0 != local_6ac && (local_6b0 < 0x10000)))) && (local_6ac < 0x10000)) {
      lVar2 = uVar11 * 2;
      local_1b8[lVar2] = (char)(local_6b0 >> 8);
      local_328[lVar2] = (char)(local_6ac >> 8);
      uVar11 = (ulonglong)((int)uVar11 + 1);
      local_1b8[lVar2 + 1] = (char)local_6b0;
      local_328[lVar2 + 1] = (char)local_6ac;
    }
    uVar7 = uVar7 + 1;
    psVar10 = psVar10 + 4;
  } while (uVar7 < 0x6d4);
  iVar4 = (int)uVar11;
  if (iVar4 == 0) goto LAB_14520d8e9;
  FUN_14520d910(local_1b8,uVar11,&LAB_14520bec0,local_328);
  local_6c0 = &local_678;
  puVar12 = local_32c;
  local_6d8[0] = 0;
  _Src = &local_678;
  local_6f0 = (int)puVar12 - (int)_Src;
  local_6f8 = local_32c;
  cVar9 = '\x01';
  local_700 = &local_678;
  local_6b8 = '\x01';
  local_708 = "start [%p..%p] (%lu bytes)";
  local_710 = 1;
  local_718 = 0;
  local_6d0 = _Src;
  local_6c8 = puVar12;
  FUN_14520bdd0("SERIALIZE",&local_678,0,1);
  uVar7 = ((int)&local_678 - (int)local_6c0) + 6;
  if ((ulonglong)uVar7 < 0x34d) {
    memset(&local_678,0,(ulonglong)uVar7);
    local_678 = 0x8000100;
    puVar8 = (uint *)((longlong)&local_678 + (ulonglong)uVar7);
    uVar11 = (ulonglong)(((int)&local_674 - (int)puVar8) + 2);
    local_6c0 = puVar8;
    if ((longlong)(local_32c + -(longlong)puVar8) < (longlong)uVar11) goto LAB_14520d83e;
    memset(puVar8,0,uVar11);
    _Dst_00 = (uint *)((longlong)puVar8 + uVar11);
    local_6c0 = _Dst_00;
    if (puVar8 == (uint *)0x0) goto LAB_14520d841;
    local_674 = 0x100;
    uVar7 = ((int)&local_674 - (int)_Dst_00) + 4;
    if ((longlong)(local_32c + -(longlong)_Dst_00) < (longlong)(ulonglong)uVar7) goto LAB_14520d83e;
    memset(_Dst_00,0,(ulonglong)uVar7);
    puVar8 = (uint *)((longlong)_Dst_00 + (ulonglong)uVar7);
    local_6c0 = puVar8;
    if (_Dst_00 == (uint *)0x0) goto LAB_14520d841;
    if ((local_678 & 0x10000000) != 0) {
      uVar7 = ((int)local_672 + (uint)CONCAT11((byte)local_674,local_674._1_1_) * 2 + 2) -
              (int)puVar8;
      if ((longlong)(local_32c + -(longlong)puVar8) < (longlong)(ulonglong)uVar7)
      goto LAB_14520d83e;
      memset(puVar8,0,(ulonglong)uVar7);
      local_6c0 = (uint *)((longlong)puVar8 + (ulonglong)uVar7);
      if (puVar8 == (uint *)0x0) goto LAB_14520d841;
      *(undefined2 *)
       ((longlong)local_672 + (ulonglong)CONCAT11((byte)local_674,local_674._1_1_) * 2) = 0;
    }
    local_6a0 = local_328;
    local_688 = local_1b8;
    if ((uint)(byte)local_674 * 0x100 + (uint)local_674._1_1_ == 0) {
      puVar6 = &DAT_14c793f60;
      DAT_14c793f60._0_2_ = 0;
    }
    else {
      puVar6 = local_672;
    }
    iVar5 = (int)local_6c0 - (int)&local_678;
    *(char *)((longlong)puVar6 + 1) = (char)iVar5;
    *(char *)puVar6 = (char)((uint)iVar5 >> 8);
    local_698 = iVar4;
    local_680 = iVar4;
    cVar3 = FUN_14520cc40(local_6c0,local_6d8,local_690,local_6a8);
    _Src = local_6d0;
    puVar12 = local_6c8;
    cVar9 = local_6b8;
  }
  else {
LAB_14520d83e:
    cVar9 = '\0';
LAB_14520d841:
    cVar3 = '\0';
  }
  local_6f0 = (int)local_6c0 - (int)local_6d0;
  uVar11 = (ulonglong)local_6f0;
  local_6e8 = "UNSUCCESSFUL";
  if (cVar9 != '\0') {
    local_6e8 = "successful";
  }
  local_708 = "end [%p..%p] serialized %d bytes; %s";
  local_710 = 0xffffffff;
  local_718 = 0;
  local_700 = _Src;
  local_6f8 = puVar12;
  FUN_14520bdd0("SERIALIZE",_Src,0,1);
  if ((cVar3 != '\0') && (_Dst = (void *)FUN_14286432f(uVar11 & 0xffffffff), _Dst != (void *)0x0)) {
    memcpy(_Dst,_Src,uVar11 & 0xffffffff);
  }
LAB_14520d8e9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_738);
}



// FUNCTION 14520d910 FUN_14520d910 body=289 status=ok
// SIG undefined FUN_14520d910(void)

void FUN_14520d910(longlong param_1,uint param_2,code *param_3,undefined2 *param_4)

{
  undefined2 *_Src;
  undefined2 uVar1;
  size_t _Size;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  
  uVar4 = 1;
  if (1 < param_2) {
    puVar6 = param_4;
    do {
      puVar6 = puVar6 + 1;
      uVar5 = (ulonglong)uVar4;
      if (uVar4 != 0) {
        do {
          uVar3 = (int)uVar5 - 1;
          iVar2 = (*param_3)(param_1 + (ulonglong)uVar3 * 2,param_1 + (ulonglong)uVar4 * 2);
          if (iVar2 < 1) break;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 != 0);
        uVar3 = (uint)uVar5;
        if (uVar4 != uVar3) {
          uVar1 = *(undefined2 *)((longlong)puVar6 + (param_1 - (longlong)param_4));
          _Size = (ulonglong)(uVar4 - uVar3) * 2;
          _Src = (undefined2 *)(uVar5 * 2 + param_1);
          memmove((void *)((ulonglong)(uVar3 + 1) * 2 + param_1),_Src,_Size);
          *_Src = uVar1;
          if (param_4 != (undefined2 *)0x0) {
            uVar1 = *puVar6;
            memmove(param_4 + (uVar3 + 1),param_4 + uVar5,_Size);
            param_4[uVar5] = uVar1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return;
}



// FUNCTION 14520da40 FUN_14520da40 body=806 status=ok
// SIG undefined FUN_14520da40(void)

void FUN_14520da40(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined1 *_Src;
  char cVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  undefined1 *local_280;
  char *local_278;
  undefined1 *local_270;
  ulonglong *local_268;
  uint local_260;
  char *local_258;
  int local_248;
  undefined1 local_244 [8];
  undefined1 local_23c [4];
  int local_238 [4];
  ulonglong local_228;
  undefined4 local_220 [2];
  undefined1 *local_218;
  ulonglong *local_210;
  undefined1 *local_208;
  char local_200;
  undefined1 local_1f8 [8];
  undefined1 *local_1f0;
  int local_1e8;
  undefined1 local_1e0 [8];
  undefined4 *local_1d8;
  int local_1d0;
  undefined1 local_1c8 [8];
  undefined1 *local_1c0;
  int local_1b8;
  undefined1 local_1b0 [8];
  int *local_1a8;
  int local_1a0;
  undefined1 local_198 [8];
  undefined1 *local_190;
  int local_188;
  undefined4 local_180 [8];
  undefined1 local_160 [16];
  undefined1 local_150 [24];
  undefined1 local_138 [256];
  ulonglong local_38 [2];
  
  local_38[0] = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  uVar9 = 0;
  puVar5 = &DAT_149c56b08;
  uVar10 = uVar9;
  uVar8 = uVar9;
  do {
    iVar3 = FUN_144b63980(param_2,*puVar5,0,&local_248);
    uVar11 = uVar8;
    if (iVar3 != 0) {
      uVar11 = (ulonglong)((int)uVar8 + 1);
      local_244[uVar8 * 2] = (char)((uint)local_248 >> 8);
      local_244[uVar8 * 2 + 1] = (char)local_248;
      local_238[uVar8] = 0;
      local_238[uVar8 + 2] = (int)uVar10;
    }
    uVar4 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar4;
    puVar5 = puVar5 + 9;
    uVar8 = uVar11;
  } while (uVar4 < 2);
  local_248 = (int)uVar11;
  FUN_14520dd90(local_244,uVar11,&LAB_14520bec0,local_238 + 2);
  if ((int)uVar11 != 0) {
    local_228 = uVar11;
    uVar10 = uVar9;
    do {
      lVar6 = 4;
      puVar5 = (undefined2 *)
               (&DAT_149c56b0c + (ulonglong)*(uint *)((longlong)local_238 + uVar10 + 8) * 0x12);
      uVar8 = uVar9;
      do {
        uVar1 = *puVar5;
        uVar9 = uVar8;
        if (((puVar5[-1] != 0) &&
            (iVar3 = FUN_144b63980(param_2,puVar5[-1],0,local_23c), iVar3 != 0)) &&
           (iVar3 = FUN_144b63980(param_2,uVar1,0,local_244 + 4), iVar3 != 0)) {
          *(int *)((longlong)local_238 + uVar10) = *(int *)((longlong)local_238 + uVar10) + 1;
          local_150[uVar8 * 2] = SUB41(local_244._4_4_,1);
          local_150[uVar8 * 2 + 1] = (char)local_244._4_4_;
          local_160[uVar8 * 2] = local_23c[1];
          uVar9 = (ulonglong)((int)uVar8 + 1);
          local_180[uVar8] = 2;
          local_160[uVar8 * 2 + 1] = local_23c[0];
        }
        iVar3 = local_248;
        puVar5 = puVar5 + 2;
        lVar6 = lVar6 + -1;
        uVar8 = uVar9;
      } while (lVar6 != 0);
      uVar10 = uVar10 + 4;
      local_228 = local_228 - 1;
    } while (local_228 != 0);
    iVar7 = (int)uVar9;
    if (iVar7 != 0) {
      local_218 = local_138;
      local_200 = '\x01';
      local_210 = local_38;
      local_208 = local_138;
      local_220[0] = 0;
      local_260 = (int)local_210 - (int)local_218;
      local_268 = local_38;
      local_270 = local_138;
      local_278 = "start [%p..%p] (%lu bytes)";
      local_280 = (undefined1 *)CONCAT44(local_280._4_4_,1);
      local_288 = (undefined1 *)0x0;
      FUN_14520bdd0("SERIALIZE",local_138,0,1);
      local_1f0 = local_160;
      local_1d8 = local_180;
      local_1c0 = local_150;
      local_1a8 = local_238;
      local_1a0 = iVar3;
      local_190 = local_244;
      local_188 = iVar3;
      local_270 = local_1f8;
      local_278 = local_1e0;
      local_280 = local_1c8;
      local_288 = local_1b0;
      local_1e8 = iVar7;
      local_1d0 = iVar7;
      local_1b8 = iVar7;
      FUN_14520d3b0(local_138,local_220,8,local_198);
      _Src = local_218;
      local_258 = "UNSUCCESSFUL";
      local_260 = (int)local_208 - (int)local_218;
      uVar10 = (ulonglong)local_260;
      if (local_200 != '\0') {
        local_258 = "successful";
      }
      local_268 = local_210;
      local_270 = local_218;
      local_278 = "end [%p..%p] serialized %d bytes; %s";
      local_280 = (undefined1 *)CONCAT44(local_280._4_4_,0xffffffff);
      local_288 = (undefined1 *)0x0;
      cVar2 = FUN_14520bdd0("SERIALIZE",local_218,0,1);
      if ((cVar2 != '\0') &&
         (_Dst = (void *)FUN_14286432f(uVar10 & 0xffffffff), _Dst != (void *)0x0)) {
        memcpy(_Dst,_Src,uVar10 & 0xffffffff);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38[0] ^ (ulonglong)auStack_2a8);
}



// FUNCTION 14520dd90 FUN_14520dd90 body=279 status=ok
// SIG undefined FUN_14520dd90(void)

void FUN_14520dd90(undefined2 *param_1,uint param_2,code *param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 1;
  puVar3 = param_1;
  puVar4 = param_4;
  if (1 < param_2) {
    do {
      if (uVar7 != 0) {
        uVar8 = uVar7;
        do {
          uVar6 = uVar8 - 1;
          iVar5 = (*param_3)(param_1 + uVar6,param_1 + uVar7);
          if (iVar5 < 1) break;
          uVar8 = uVar6;
        } while (uVar6 != 0);
        if (uVar7 != uVar8) {
          uVar1 = puVar3[1];
          memmove(param_1 + (uVar8 + 1),param_1 + uVar8,(ulonglong)(uVar7 - uVar8) * 2);
          param_1[uVar8] = uVar1;
          if (param_4 != (undefined4 *)0x0) {
            uVar2 = puVar4[1];
            memmove(param_4 + (uVar8 + 1),param_4 + uVar8,(ulonglong)(uVar7 - uVar8) * 4);
            param_4[uVar8] = uVar2;
          }
        }
      }
      uVar7 = uVar7 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar7 < param_2);
  }
  return;
}



// FUNCTION 14520deb0 FUN_14520deb0 body=530 status=ok
// SIG undefined FUN_14520deb0(void)

/* WARNING: Removing unreachable block (ram,0x00014520dfd3) */

bool FUN_14520deb0(uint *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res20 [2];
  
  iVar2 = FUN_144b63980(param_3,0x627,0,local_res20);
  if ((((((iVar2 != 0) && (local_res20[0] == 199)) &&
        (iVar2 = FUN_144b63980(param_3,0x644,0,local_res20), iVar2 != 0)) &&
       ((local_res20[0] == 0xe1 && (iVar2 = FUN_144b63980(param_3,0x649,0,local_res20), iVar2 != 0))
       )) && ((local_res20[0] == 0xec &&
              ((iVar2 = FUN_144b63980(param_3,0x64a,0,local_res20), iVar2 != 0 &&
               (local_res20[0] == 0xed)))))) &&
     ((iVar2 = FUN_144b63980(param_3,0x652,0,local_res20), iVar2 != 0 && (local_res20[0] == 0xfa))))
  {
    uVar5 = 0;
    uVar6 = 0;
    do {
      lVar1 = (ulonglong)uVar5 * 6;
      uVar3 = FUN_14520be50(param_2 + 0x28,
                            (uint)(byte)(&DAT_149c56b53)[lVar1] * 0x10000 +
                            (uint)(byte)(&DAT_149c56b54)[lVar1] * 0x100 +
                            (uint)(byte)(&DAT_149c56b52)[lVar1] * 0x1000000 +
                            (uint)(byte)(&DAT_149c56b55)[lVar1]);
      uVar7 = (ulonglong)uVar6;
      param_1[uVar7 + 2] = uVar3;
      if (uVar3 != 0) {
        if (uVar5 < 5) {
          puVar4 = &DAT_149c56b50 + ((ulonglong)uVar5 * 3 + 1) * 2;
        }
        else {
          puVar4 = &DAT_149a1f1a0;
        }
        if ((ushort)((ushort)(byte)puVar4[4] * 0x100 + (ushort)(byte)puVar4[5]) == 0) {
          puVar4 = &DAT_149a1f1a0;
        }
        else {
          puVar4 = &DAT_149c56b50 + CONCAT11(puVar4[4],puVar4[5]);
        }
        *(undefined1 **)(param_1 + uVar7 * 2 + 8) = puVar4;
        if (puVar4 != (undefined1 *)0x0) {
          FUN_14520e0d0(param_1 + uVar7 * 8 + 0x12);
          uVar6 = uVar6 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    *param_1 = uVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    return uVar6 != 0;
  }
  return false;
}



// FUNCTION 14520e0d0 FUN_14520e0d0 body=100 status=ok
// SIG undefined FUN_14520e0d0(void)

void FUN_14520e0d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 *local_18;
  undefined4 local_10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  local_20 = 0;
  local_28 = param_1;
  FUN_1451f6400(param_2,&local_28);
  local_18 = param_1 + 2;
  *local_18 = 0;
  param_1[3] = 0;
  local_10 = 0;
  FUN_1451f4950(param_2,&local_18);
  return;
}



// FUNCTION 14520e140 FUN_14520e140 body=361 status=ok
// SIG undefined FUN_14520e140(void)

bool FUN_14520e140(int *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  char *pcVar10;
  int *local_48;
  undefined4 local_40;
  int *local_38;
  undefined4 local_30;
  
  uVar5 = 0;
  pcVar10 = "tiniidemaniflosigilr";
  uVar9 = uVar5;
  do {
    iVar4 = 0;
    iVar3 = *(int *)(param_2 + 0x38) + -1;
    iVar8 = iVar4;
    if (-1 < iVar3) {
      do {
        uVar1 = (uint)(iVar3 + iVar8) >> 1;
        uVar7 = *(uint *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar1 * 0x24);
        if (*(uint *)pcVar10 < uVar7) {
          iVar3 = uVar1 - 1;
        }
        else {
          if (*(uint *)pcVar10 <= uVar7) {
            lVar2 = *(longlong *)(param_2 + 0x40) + (ulonglong)uVar1 * 0x24;
            if (lVar2 != 0) {
              iVar4 = *(int *)(lVar2 + 0x1c);
            }
            break;
          }
          iVar8 = uVar1 + 1;
        }
      } while (iVar8 <= iVar3);
    }
    param_1[uVar9 + 2] = iVar4;
    if (iVar4 != 0) {
      if ((uint)uVar5 < 4) {
        lVar2 = FUN_14520d500(param_2,param_3,uVar5);
      }
      else {
        lVar2 = FUN_14520da40(param_2,param_3);
      }
      *(longlong *)(param_1 + uVar9 * 2 + 8) = lVar2;
      if (lVar2 != 0) {
        local_40 = 0;
        piVar6 = param_1 + uVar9 * 8 + 0x12;
        piVar6[0] = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
        local_48 = piVar6;
        FUN_1451f6400(lVar2,&local_48);
        local_38 = piVar6 + 4;
        local_38[0] = 0;
        local_38[1] = 0;
        piVar6[6] = 0;
        piVar6[7] = 0;
        local_30 = 0;
        FUN_1451f4950(lVar2,&local_38);
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
    }
    uVar7 = (uint)uVar5 + 1;
    uVar5 = (ulonglong)uVar7;
    pcVar10 = (char *)((longlong)pcVar10 + 4);
    if (4 < uVar7) {
      *param_1 = (int)uVar9;
      *(undefined1 *)(param_1 + 1) = 1;
      return (int)uVar9 != 0;
    }
  } while( true );
}



// FUNCTION 14520e2b0 FUN_14520e2b0 body=150 status=ok
// SIG undefined FUN_14520e2b0(void)

void FUN_14520e2b0(uint *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  if ((param_1 != (uint *)0x0) && (*param_1 != 0)) {
    uVar1 = 0;
    if (*param_1 != 0) {
      do {
        if (*(longlong *)(param_1 + uVar1 * 2 + 8) != 0) {
          if (*(longlong *)(param_1 + uVar1 * 8 + 0x18) != 0) {
            thunk_FUN_1400020a8();
          }
          (param_1 + uVar1 * 8 + 0x16)[0] = 0;
          (param_1 + uVar1 * 8 + 0x16)[1] = 0;
          (param_1 + uVar1 * 8 + 0x18)[0] = 0;
          (param_1 + uVar1 * 8 + 0x18)[1] = 0;
          if ((char)param_1[1] != '\0') {
            thunk_FUN_1400020a8(*(undefined8 *)(param_1 + uVar1 * 2 + 8));
          }
        }
        uVar2 = (int)uVar1 + 1;
        uVar1 = (ulonglong)uVar2;
      } while (uVar2 < *param_1);
    }
    thunk_FUN_1400020a8(param_1);
  }
  return;
}



// FUNCTION 14520e350 FUN_14520e350 body=252 status=ok
// SIG undefined FUN_14520e350(void)

void FUN_14520e350(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 local_e8 [8];
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d3;
  uint local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_34;
  int local_30;
  undefined4 local_28;
  char local_1b;
  char local_1a;
  ulonglong uVar2;
  
  FUN_1451e5500(local_e8,0,param_2,param_3);
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      if (*(longlong *)(param_1 + uVar2 * 2 + 8) != 0) {
        local_d0 = param_1[uVar2 + 2];
        local_e0 = local_e8;
        local_d4 = local_30 == 1;
        local_d3 = local_1a != '\0';
        local_a0 = local_e8;
        local_b8 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_d8 = local_28;
        local_78 = 0;
        local_88 = 0;
        local_80 = 0;
        local_98 = local_28;
        if ((local_30 == 1) || (local_1b != '\0')) {
          local_94 = 1;
        }
        else {
          local_94 = 0;
        }
        local_93 = 1;
        local_90 = 0xffffffff;
        local_34 = local_d0;
        thunk_FUN_1451f2ef0(local_e8,*(longlong *)(param_1 + uVar2 * 2 + 8),
                            param_1 + uVar2 * 8 + 0x12);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *param_1);
  }
  return;
}



// FUNCTION 14520e450 FUN_14520e450 body=535 status=ok
// SIG undefined FUN_14520e450(void)

void FUN_14520e450(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar10 = 0xffffffff;
  uVar6 = *(uint *)(param_1 + 0x60);
  uVar8 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x10);
      uVar4 = (**(code **)(lVar3 + 0x28))
                        (lVar3,*(undefined4 *)(uVar9 * 4 + 0x8c + param_1),
                         *(undefined8 *)(lVar3 + 0x68));
      uVar5 = FUN_14520bfa0(*(undefined4 *)(uVar9 * 4 + 0x8c + param_1));
      if (uVar5 == 8) {
        if (uVar4 < 0x20) {
          uVar4 = 1 << ((byte)uVar4 & 0x1f);
        }
        else {
          uVar4 = 0;
        }
        uVar5 = -(uint)((uVar4 & 0x1802) != 0) & 7;
      }
      if (uVar5 != 7) {
        uVar8 = (ulonglong)*(ushort *)(&DAT_149c56cf2 + (ulonglong)uVar5 * 4);
        break;
      }
      uVar4 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0xb4));
  }
  uVar4 = 0;
  if (uVar6 != 0) {
    puVar7 = (undefined1 *)(lVar2 + 0x12);
    do {
      uVar5 = FUN_14520bfa0(*(undefined4 *)(puVar7 + -0x12));
      if (uVar5 == 8) {
        uVar5 = -(uint)((1 << ((byte)*(undefined2 *)(puVar7 + -2) & 0x1f) & 0x1802U) != 0) & 7;
      }
      if (uVar5 == 7) {
        *puVar7 = 7;
      }
      else {
        lVar1 = (ulonglong)uVar5 + uVar8 * 6;
        lVar3 = lVar1 * 4;
        if ((((&DAT_149c56cf0)[lVar1 * 4] != '\a') && (uVar10 != 0xffffffff)) &&
           (*(undefined *)(lVar2 + 0x12 + (ulonglong)uVar10 * 0x14) = (&DAT_149c56cf0)[lVar1 * 4],
           1 < (uVar4 - uVar10) + 1)) {
          FUN_144b620d0(param_1,uVar10,uVar4 + 1);
        }
        *puVar7 = (&DAT_149c56cf1)[lVar3];
        uVar8 = (ulonglong)*(ushort *)(&DAT_149c56cf2 + lVar3);
        uVar10 = uVar4;
      }
      uVar4 = uVar4 + 1;
      puVar7 = puVar7 + 0x14;
    } while (uVar4 < uVar6);
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x10);
      uVar6 = (**(code **)(lVar3 + 0x28))
                        (lVar3,*(undefined4 *)(uVar9 * 4 + 0xa0 + param_1),
                         *(undefined8 *)(lVar3 + 0x68));
      uVar4 = FUN_14520bfa0(*(undefined4 *)(uVar9 * 4 + 0xa0 + param_1));
      if (uVar4 == 8) {
        if (uVar6 < 0x20) {
          uVar6 = 1 << ((byte)uVar6 & 0x1f);
        }
        else {
          uVar6 = 0;
        }
        uVar4 = -(uint)((uVar6 & 0x1802) != 0) & 7;
      }
      if (uVar4 != 7) {
        if ((&DAT_149c56cf0)[((ulonglong)uVar4 + uVar8 * 6) * 4] == '\a') {
          return;
        }
        if (uVar10 == 0xffffffff) {
          return;
        }
        *(undefined *)(lVar2 + 0x12 + (ulonglong)uVar10 * 0x14) =
             (&DAT_149c56cf0)[((ulonglong)uVar4 + uVar8 * 6) * 4];
        return;
      }
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0xb8));
  }
  return;
}



// FUNCTION 14520e670 FUN_14520e670 body=1176 status=ok
// SIG undefined FUN_14520e670(void)

void FUN_14520e670(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  uint uVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int local_res20;
  uint local_68;
  uint local_64;
  uint local_54;
  
  if ((*(uint *)(param_2 + 0x28) & 0x1000000) != 0) {
    iVar6 = *(int *)(param_3 + 0x20);
    local_res20 = 0;
    local_64 = 0;
    do {
      uVar7 = *(uint *)(param_2 + 0x60);
      lVar8 = *(longlong *)(param_2 + 0x80);
      lVar9 = *(longlong *)(param_2 + 0x70);
      uVar1 = uVar7 + local_res20;
      uVar19 = (ulonglong)uVar1;
      uVar24 = uVar7;
      local_68 = uVar1;
joined_r0x00014520e712:
      if (uVar24 != 0) {
        lVar4 = (ulonglong)(uVar24 - 1) * 0x14;
        if ((byte)(*(char *)(lVar4 + 0x12 + lVar9) - 8U) < 2) {
          iVar28 = 0;
          iVar27 = 0;
          iVar20 = 0;
          iVar17 = 0;
          uVar14 = uVar24;
          while (uVar21 = uVar14, uVar14 != 0) {
            uVar23 = uVar14 - 1;
            uVar19 = (ulonglong)uVar23;
            if (1 < (byte)(*(char *)(lVar9 + 0x12 + uVar19 * 0x14) - 8U)) break;
            iVar16 = (**(code **)(*(longlong *)(param_3 + 0x40) + 0x148))
                               (param_3,*(undefined8 *)(param_3 + 0x48),
                                *(undefined4 *)(lVar9 + uVar19 * 0x14),
                                *(undefined8 *)(*(longlong *)(param_3 + 0x40) + 0x38));
            uVar14 = uVar23;
            if (*(char *)(lVar9 + uVar19 * 0x14 + 0x12) == '\b') {
              iVar27 = iVar27 + iVar16;
            }
            else {
              iVar20 = iVar20 + iVar16;
              iVar17 = iVar17 + 1;
            }
          }
          do {
            if (uVar21 == 0) goto LAB_14520e875;
            uVar19 = (ulonglong)(uVar21 - 1);
            cVar15 = *(char *)(lVar9 + 0x12 + uVar19 * 0x14);
            if ((cVar15 == '\b' || cVar15 == '\t') ||
               ((((*(byte *)(lVar9 + 0x10 + uVar19 * 0x14) & 0x20) == 0 ||
                 ((*(byte *)(lVar9 + 0xc + uVar19 * 0x14) >> 5 & 1) != 0)) &&
                ((1 << ((byte)*(undefined2 *)(lVar9 + 0x10 + uVar19 * 0x14) & 0x1f) & 0x780fcccU) ==
                 0)))) goto LAB_14520e875;
            iVar28 = iVar28 + *(int *)(lVar8 + uVar19 * 0x14);
            uVar21 = uVar21 - 1;
          } while( true );
        }
        uVar23 = uVar24;
        if (local_64 == 1) {
          uVar13 = ((undefined8 *)(lVar4 + lVar9))[1];
          local_68 = (int)uVar19 - 1;
          uVar19 = (ulonglong)local_68;
          puVar2 = (undefined8 *)(lVar9 + uVar19 * 0x14);
          *puVar2 = *(undefined8 *)(lVar4 + lVar9);
          puVar2[1] = uVar13;
          *(undefined4 *)(lVar9 + 0x10 + uVar19 * 0x14) = *(undefined4 *)(lVar4 + 0x10 + lVar9);
          puVar3 = (undefined4 *)(lVar4 + lVar8);
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar12 = puVar3[3];
          puVar5 = (undefined4 *)(lVar8 + uVar19 * 0x14);
          *puVar5 = *puVar3;
          puVar5[1] = uVar10;
          puVar5[2] = uVar11;
          puVar5[3] = uVar12;
          *(undefined4 *)(lVar8 + 0x10 + uVar19 * 0x14) = *(undefined4 *)(lVar4 + 0x10 + lVar8);
        }
        goto LAB_14520ea5c;
      }
      if (local_64 == 0) {
        if (((uVar7 + local_res20 != 0) && (*(uint *)(param_2 + 0x68) <= uVar7 + local_res20)) &&
           (cVar15 = FUN_144b62380(param_2), cVar15 == '\0')) {
          return;
        }
      }
      else {
        *(uint *)(param_2 + 0x60) = uVar1;
      }
      local_64 = local_64 + 1;
    } while (local_64 < 2);
  }
  return;
LAB_14520e875:
  pcVar18 = "cutting";
  uVar23 = uVar14 + 1;
  if (local_64 == 0) {
    pcVar18 = "measuring";
  }
  uVar25 = 0;
  iVar16 = (iVar6 >> 0x1f & 0xfffffffeU) + 1;
  FUN_14520bdd0("ARABIC",0,0,0,0,0,"%s stretch at (%d,%d,%d)",pcVar18,uVar21,uVar14,uVar24);
  iVar28 = iVar28 - iVar27;
  iVar27 = iVar20 * iVar16;
  if ((iVar27 < iVar28 * iVar16) && (0 < iVar27)) {
    uVar25 = (iVar28 * iVar16) / iVar27 - 1;
  }
  uVar26 = uVar25 + 1;
  iVar27 = 0;
  local_54 = uVar26;
  if ((0 < (int)((iVar28 - uVar26 * iVar20) * iVar16)) && (0 < iVar17)) {
    local_54 = uVar25 + 2;
    iVar16 = (local_54 * iVar20 - iVar28) * iVar16;
    uVar25 = uVar26;
    if (0 < iVar16) {
      iVar27 = iVar16 / (int)(uVar26 * iVar17);
    }
  }
  if (local_64 == 0) {
    uVar19 = (ulonglong)local_68;
    local_res20 = local_res20 + uVar25 * iVar17;
  }
  else {
    uVar22 = (ulonglong)uVar24;
    if (1 < uVar24 - uVar21) {
      FUN_144b620d0(param_2,uVar21);
    }
    iVar20 = 0;
    if (uVar14 < uVar24) {
      do {
        uVar21 = (int)uVar22 - 1;
        uVar22 = (ulonglong)uVar21;
        lVar4 = uVar22 * 0x14;
        iVar17 = (**(code **)(*(longlong *)(param_3 + 0x40) + 0x148))
                           (param_3,*(undefined8 *)(param_3 + 0x48),*(undefined4 *)(lVar4 + lVar9),
                            *(undefined8 *)(*(longlong *)(param_3 + 0x40) + 0x38));
        uVar19 = (ulonglong)local_68;
        uVar24 = local_54;
        if (*(char *)(lVar4 + 0x12 + lVar9) != '\t') {
          uVar24 = 1;
        }
        uVar25 = 0;
        if (uVar24 != 0) {
          do {
            iVar28 = iVar20 - iVar17;
            iVar20 = iVar28 + iVar27;
            if (uVar25 == 0) {
              iVar20 = iVar28;
            }
            local_68 = (int)uVar19 - 1;
            uVar19 = (ulonglong)local_68;
            *(int *)(lVar4 + 8 + lVar8) = iVar20;
            uVar25 = uVar25 + 1;
            uVar13 = ((undefined8 *)(lVar4 + lVar9))[1];
            puVar2 = (undefined8 *)(lVar9 + uVar19 * 0x14);
            *puVar2 = *(undefined8 *)(lVar4 + lVar9);
            puVar2[1] = uVar13;
            *(undefined4 *)(lVar9 + 0x10 + uVar19 * 0x14) = *(undefined4 *)(lVar4 + 0x10 + lVar9);
            puVar3 = (undefined4 *)(lVar4 + lVar8);
            uVar10 = puVar3[1];
            uVar11 = puVar3[2];
            uVar12 = puVar3[3];
            puVar5 = (undefined4 *)(lVar8 + uVar19 * 0x14);
            *puVar5 = *puVar3;
            puVar5[1] = uVar10;
            puVar5[2] = uVar11;
            puVar5[3] = uVar12;
            *(undefined4 *)(lVar8 + 0x10 + uVar19 * 0x14) = *(undefined4 *)(lVar4 + 0x10 + lVar8);
          } while (uVar25 < uVar24);
        }
      } while (uVar14 < uVar21);
    }
    else {
      uVar19 = (ulonglong)local_68;
    }
  }
LAB_14520ea5c:
  uVar24 = uVar23 - 1;
  goto joined_r0x00014520e712;
}



// FUNCTION 14520eb10 FUN_14520eb10 body=121 status=ok
// SIG undefined FUN_14520eb10(void)

undefined8 FUN_14520eb10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520eb90 FUN_14520eb90 body=121 status=ok
// SIG undefined FUN_14520eb90(void)

undefined8 FUN_14520eb90(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520ec10 FUN_14520ec10 body=121 status=ok
// SIG undefined FUN_14520ec10(void)

undefined8 FUN_14520ec10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520ec90 FUN_14520ec90 body=121 status=ok
// SIG undefined FUN_14520ec90(void)

undefined8 FUN_14520ec90(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520ed10 FUN_14520ed10 body=121 status=ok
// SIG undefined FUN_14520ed10(void)

undefined8 FUN_14520ed10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520ed90 FUN_14520ed90 body=121 status=ok
// SIG undefined FUN_14520ed90(void)

undefined8 FUN_14520ed90(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520ee10 FUN_14520ee10 body=121 status=ok
// SIG undefined FUN_14520ee10(void)

undefined8 FUN_14520ee10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520ee90 FUN_14520ee90 body=121 status=ok
// SIG undefined FUN_14520ee90(void)

undefined8 FUN_14520ee90(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520ef10 FUN_14520ef10 body=121 status=ok
// SIG undefined FUN_14520ef10(void)

undefined8 FUN_14520ef10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520ef90 FUN_14520ef90 body=121 status=ok
// SIG undefined FUN_14520ef90(void)

undefined8 FUN_14520ef90(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520f010 FUN_14520f010 body=121 status=ok
// SIG undefined FUN_14520f010(void)

undefined8 FUN_14520f010(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520f090 FUN_14520f090 body=121 status=ok
// SIG undefined FUN_14520f090(void)

undefined8 FUN_14520f090(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520f110 FUN_14520f110 body=121 status=ok
// SIG undefined FUN_14520f110(void)

undefined8 FUN_14520f110(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520f190 FUN_14520f190 body=121 status=ok
// SIG undefined FUN_14520f190(void)

undefined8 FUN_14520f190(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520f210 FUN_14520f210 body=121 status=ok
// SIG undefined FUN_14520f210(void)

undefined8 FUN_14520f210(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + param_3;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      memset(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}



// FUNCTION 14520f290 FUN_14520f290 body=77 status=ok
// SIG undefined FUN_14520f290(void)

void FUN_14520f290(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 3;
  puVar1 = &DAT_149c5736c;
  do {
    FUN_145207a70(param_1 + 0x28,*puVar1,0,1);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 14520f300 FUN_14520f300 body=221 status=ok
// SIG undefined FUN_14520f300(void)

undefined4 * FUN_14520f300(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  
  puVar6 = (undefined4 *)FUN_142864336(1);
  if (puVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  lVar8 = 4;
  puVar10 = puVar6;
  do {
    iVar9 = 0;
    iVar7 = *(int *)(param_1 + 0x38) + -1;
    uVar2 = *(uint *)(((longlong)&DAT_149c57368 - (longlong)puVar6) + (longlong)puVar10);
    if (-1 < iVar7) {
      do {
        uVar4 = (uint)(iVar7 + iVar9) >> 1;
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24);
        if (uVar2 < uVar3) {
          iVar7 = uVar4 - 1;
        }
        else {
          if (uVar2 <= uVar3) {
            lVar1 = *(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24;
            if (lVar1 != 0) {
              uVar5 = *(undefined4 *)(lVar1 + 0x1c);
              goto LAB_14520f3a1;
            }
            break;
          }
          iVar9 = uVar4 + 1;
        }
      } while (iVar9 <= iVar7);
    }
    uVar5 = 0;
LAB_14520f3a1:
    *puVar10 = uVar5;
    puVar10 = puVar10 + 1;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      return puVar6;
    }
  } while( true );
}



// FUNCTION 14520f3f0 FUN_14520f3f0 body=1564 status=ok
// SIG undefined FUN_14520f3f0(void)

void FUN_14520f3f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144b61b50(param_2);
  local_84 = *(uint *)(param_2 + 0x60);
  uVar14 = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  uVar13 = 0;
  if (local_84 != 0) {
    do {
      if (*(char *)(param_2 + 0x58) == '\0') break;
      uVar9 = *(uint *)(param_2 + 0x5c);
      lVar3 = *(longlong *)(param_2 + 0x70);
      iVar5 = *(int *)(lVar3 + (ulonglong)uVar9 * 0x14);
      if (iVar5 - 0x302eU < 2) {
        uVar12 = (uint)uVar13;
        uVar7 = (uint)uVar14;
        if ((uVar7 < uVar12) && (uVar12 == *(uint *)(param_2 + 100))) {
          FUN_144b62160(param_2,uVar14,(ulonglong)uVar9);
          FUN_144e3cb60(param_2);
          iVar5 = FUN_144b63980(param_3,iVar5,0,&local_70);
          if ((iVar5 == 0) || (iVar5 = FUN_144b63960(param_3,local_70), iVar5 != 0)) {
            FUN_144b61e90(param_2,uVar14,uVar12 + 1);
            lVar3 = *(longlong *)(param_2 + 0x78);
            puVar1 = (undefined4 *)(lVar3 + uVar13 * 0x14);
            local_68 = *puVar1;
            uStack_64 = puVar1[1];
            uStack_60 = puVar1[2];
            uStack_5c = puVar1[3];
            uVar2 = *(undefined4 *)(lVar3 + 0x10 + uVar13 * 0x14);
            puVar1 = (undefined4 *)(lVar3 + uVar14 * 0x14);
            memmove((void *)(lVar3 + (ulonglong)(uVar7 + 1) * 0x14),puVar1,
                    (ulonglong)(uVar12 - uVar7) * 0x14);
            *puVar1 = local_68;
            puVar1[1] = uStack_64;
            puVar1[2] = uStack_60;
            puVar1[3] = uStack_5c;
            puVar1[4] = uVar2;
            uVar13 = (ulonglong)*(uint *)(param_2 + 100);
            uVar14 = (ulonglong)*(uint *)(param_2 + 100);
            goto LAB_14520f9e4;
          }
        }
        else {
          if ((*(byte *)(param_2 + 0x18) & 0x10) == 0) {
            local_88 = 0;
            local_98 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + 0x20);
            iVar6 = (**(code **)(*(longlong *)(param_3 + 0x40) + 0x130))
                              (param_3,*(undefined8 *)(param_3 + 0x48),0x25cc,&local_88);
            if (iVar6 != 0) {
              iVar6 = FUN_144b63980(param_3,iVar5,0,&local_6c);
              if ((iVar6 == 0) || (iVar6 = FUN_144b63960(param_3,local_6c), iVar6 != 0)) {
                local_74 = 0x25cc;
                local_78 = iVar5;
              }
              else {
                local_78 = 0x25cc;
                local_74 = iVar5;
              }
              FUN_144b61bb0(param_2,1,2,&local_78);
              uVar13 = (ulonglong)*(uint *)(param_2 + 100);
              uVar14 = (ulonglong)*(uint *)(param_2 + 100);
              goto LAB_14520f9e4;
            }
          }
          FUN_144e3cb60(param_2);
        }
        uVar13 = (ulonglong)*(uint *)(param_2 + 100);
        uVar14 = (ulonglong)*(uint *)(param_2 + 100);
      }
      else {
        uVar12 = *(uint *)(param_2 + 100);
        uVar14 = (ulonglong)uVar12;
        if (((iVar5 - 0x1100U < 0x60) || (iVar5 - 0xa960U < 0x1d)) && (uVar9 + 1 < local_84)) {
          iVar6 = *(int *)(lVar3 + (ulonglong)(uVar9 + 1) * 0x14);
          if ((iVar6 - 0x1160U < 0x48) || (iVar6 - 0xd7b0U < 0x17)) {
            local_80 = 0;
            iVar8 = 0;
            if (uVar9 + 2 < local_84) {
              iVar8 = *(int *)(lVar3 + (ulonglong)(uVar9 + 2) * 0x14);
              if ((iVar8 - 0x11a8U < 0x58) || (iVar8 - 0xd7cbU < 0x31)) {
                local_80 = iVar8 - 0x11a7;
              }
              else {
                iVar8 = 0;
              }
            }
            bVar11 = (iVar8 != 0) + 2;
            if (1 < bVar11) {
              FUN_144b620d0(param_2);
            }
            if (((iVar5 - 0x1100U < 0x13) && (iVar6 - 0x1161U < 0x15)) &&
               ((iVar8 == 0 || (iVar8 - 0x11a8U < 0x1b)))) {
              local_88 = (local_80 - 0x28469c) + (iVar5 * 0x15 + iVar6) * 0x1c;
              cVar4 = FUN_14520fa70(param_3);
              if (cVar4 != '\0') {
                puVar10 = &local_88;
LAB_14520f6c9:
                FUN_144b61bb0(param_2,bVar11,1,puVar10);
                if (*(char *)(param_2 + 0x58) != '\0') {
                  uVar13 = (ulonglong)(uVar12 + 1);
                  goto LAB_14520f9e4;
                }
                goto LAB_14520fa00;
              }
            }
            *(undefined1 *)
             (*(longlong *)(param_2 + 0x70) + 0x12 + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14) =
                 1;
            FUN_144e3cb60(param_2);
            *(undefined1 *)
             (*(longlong *)(param_2 + 0x70) + 0x12 + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14) =
                 2;
            FUN_144e3cb60(param_2);
            if (iVar8 == 0) {
              iVar5 = 2;
            }
            else {
              *(undefined1 *)
               (*(longlong *)(param_2 + 0x70) + 0x12 + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14)
                   = 3;
              FUN_144e3cb60(param_2);
              iVar5 = 3;
            }
            uVar13 = (ulonglong)(iVar5 + uVar12);
LAB_14520f746:
            if (*(int *)(param_2 + 0x1c) == 0) {
              FUN_144b61e90(param_2,uVar14,uVar13);
            }
            goto LAB_14520f9e4;
          }
        }
        else {
          uVar9 = iVar5 - 0xac00;
          if (uVar9 < 0x2ba4) {
            local_88 = 0;
            local_98 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + 0x20);
            iVar6 = (**(code **)(*(longlong *)(param_3 + 0x40) + 0x130))
                              (param_3,*(undefined8 *)(param_3 + 0x48),iVar5,&local_88);
            bVar15 = iVar6 == 0;
            local_88 = uVar9 / 0x24c;
            local_80 = (uVar9 % 0x24c) / 0x1c;
            uVar9 = (uVar9 % 0x24c) % 0x1c;
            if (((uVar9 == 0) && (uVar7 = *(int *)(param_2 + 0x5c) + 1, uVar7 < local_84)) &&
               (iVar6 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar7 * 0x14),
               iVar6 - 0x11a8U < 0x1b)) {
              local_7c = iVar6 + -0x11a7 + iVar5;
              cVar4 = FUN_14520fa70(param_3);
              if (cVar4 != '\0') {
                puVar10 = &local_7c;
                bVar11 = 2;
                goto LAB_14520f6c9;
              }
              FUN_144b620d0(param_2,*(undefined4 *)(param_2 + 0x5c));
            }
            if ((bVar15) ||
               (((uVar9 == 0 && (uVar7 = *(int *)(param_2 + 0x5c) + 1, uVar7 < local_84)) &&
                ((iVar5 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar7 * 0x14),
                 iVar5 - 0x11a8U < 0x58 || (iVar5 - 0xd7cbU < 0x31)))))) {
              local_54 = local_80 + 0x1161;
              local_58 = local_88 + 0x1100;
              local_50 = uVar9 + 0x11a7;
              local_7c = 0;
              local_98 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + 0x20);
              iVar5 = (**(code **)(*(longlong *)(param_3 + 0x40) + 0x130))
                                (param_3,*(undefined8 *)(param_3 + 0x48),local_58,&local_7c);
              if (iVar5 != 0) {
                local_7c = 0;
                local_98 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + 0x20);
                iVar5 = (**(code **)(*(longlong *)(param_3 + 0x40) + 0x130))
                                  (param_3,*(undefined8 *)(param_3 + 0x48),local_54,&local_7c);
                if ((iVar5 != 0) &&
                   ((uVar9 == 0 || (cVar4 = FUN_14520fa70(param_3,local_50), cVar4 != '\0')))) {
                  iVar5 = (uVar9 != 0) + 2;
                  FUN_144b61bb0(param_2,1,iVar5,&local_58);
                  if ((!bVar15) && (uVar9 == 0)) {
                    FUN_144e3cb60(param_2);
                    iVar5 = 3;
                  }
                  if (*(char *)(param_2 + 0x58) != '\0') {
                    lVar3 = *(longlong *)(param_2 + 0x78);
                    uVar13 = (ulonglong)(iVar5 + uVar12);
                    *(undefined1 *)(lVar3 + 0x12 + uVar14 * 0x14) = 1;
                    *(undefined1 *)(lVar3 + 0x12 + (ulonglong)(uVar12 + 1) * 0x14) = 2;
                    if (uVar12 + 2 < iVar5 + uVar12) {
                      *(undefined1 *)(lVar3 + 0x12 + (ulonglong)(uVar12 + 2) * 0x14) = 3;
                    }
                    goto LAB_14520f746;
                  }
                  goto LAB_14520fa00;
                }
              }
              if (((uVar9 == 0) && (uVar9 = *(int *)(param_2 + 0x5c) + 1, uVar9 < local_84)) &&
                 ((iVar5 = *(int *)(*(longlong *)(param_2 + 0x70) + (ulonglong)uVar9 * 0x14),
                  iVar5 - 0x11a8U < 0x58 || (iVar5 - 0xd7cbU < 0x31)))) {
                FUN_144b620d0(param_2);
              }
            }
            if (!bVar15) {
              uVar13 = (ulonglong)(uVar12 + 1);
            }
          }
        }
        FUN_144e3cb60(param_2);
      }
LAB_14520f9e4:
    } while (*(uint *)(param_2 + 0x5c) < local_84);
  }
  FUN_144b61af0(param_2);
LAB_14520fa00:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14520fa70 FUN_14520fa70 body=54 status=ok
// SIG undefined FUN_14520fa70(void)

bool FUN_14520fa70(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x130))
                    (param_1,*(undefined8 *)(param_1 + 0x48),param_2,local_res8,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x20));
  return iVar1 != 0;
}



// FUNCTION 14520fab0 FUN_14520fab0 body=425 status=ok
// SIG undefined FUN_14520fab0(void)

bool FUN_14520fab0(longlong *param_1,int param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = param_1[3];
  iVar2 = 0;
  *param_4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = (**(code **)(lVar1 + 0x40))(lVar1);
  }
  if (iVar2 != 0) {
    return iVar2 != 0;
  }
  if ((*(byte *)(*param_1 + 0xb8) & 8) != 0) {
    return false;
  }
  bVar3 = false;
  switch(param_3) {
  case 0x5b4:
    if (param_2 != 0x5d9) {
      return false;
    }
    *param_4 = 0xfb1d;
    break;
  default:
    goto switchD_14520fb32_caseD_5b5;
  case 0x5b7:
    if (param_2 == 0x5f2) {
      *param_4 = 0xfb1f;
    }
    else {
      if (param_2 != 0x5d0) {
        return false;
      }
      *param_4 = 0xfb2e;
    }
    break;
  case 0x5b8:
    if (param_2 != 0x5d0) {
      return false;
    }
    *param_4 = 0xfb2f;
    break;
  case 0x5b9:
    if (param_2 != 0x5d5) {
      return false;
    }
    *param_4 = 0xfb4b;
    break;
  case 0x5bc:
    if (param_2 - 0x5d0U < 0x1b) {
      iVar2 = *(int *)(&DAT_149c573f0 + (ulonglong)(param_2 - 0x5d0) * 4);
      *param_4 = iVar2;
      return iVar2 != 0;
    }
    if (param_2 == 0xfb2a) {
LAB_14520fc18:
      *param_4 = 0xfb2c;
    }
    else {
      bVar3 = param_2 == 0xfb2b;
LAB_14520fc36:
      if (!bVar3) {
        return false;
      }
      *param_4 = 0xfb2d;
    }
    break;
  case 0x5bf:
    if (param_2 == 0x5d1) {
      *param_4 = 0xfb4c;
    }
    else if (param_2 == 0x5db) {
      *param_4 = 0xfb4d;
    }
    else {
      if (param_2 != 0x5e4) {
        return false;
      }
      *param_4 = 0xfb4e;
    }
    break;
  case 0x5c1:
    if (param_2 != 0x5e9) {
      if (param_2 != 0xfb49) {
        return false;
      }
      goto LAB_14520fc18;
    }
    *param_4 = 0xfb2a;
    break;
  case 0x5c2:
    if (param_2 != 0x5e9) {
      bVar3 = param_2 == 0xfb49;
      goto LAB_14520fc36;
    }
    *param_4 = 0xfb2b;
  }
  bVar3 = true;
switchD_14520fb32_caseD_5b5:
  return bVar3;
}



// FUNCTION 14520fca0 FUN_14520fca0 body=298 status=ok
// SIG undefined FUN_14520fca0(void)

void FUN_14520fca0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  param_1 = param_1 + 0x28;
  FUN_145208de0(param_1,0,FUN_145210aa0);
  FUN_145207a70(param_1,0x6c6f636c,1);
  FUN_145207a70(param_1,0x63636d70,1);
  FUN_145208de0(param_1,0,FUN_145210b40);
  puVar1 = &DAT_149c5a970;
  lVar2 = 0xb;
  do {
    FUN_145207a70(param_1,*puVar1,puVar1[1],1);
    FUN_145208de0(param_1,0,0);
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_145208de0(param_1,0,FUN_145210c50);
  puVar1 = &DAT_149c5a9c8;
  lVar2 = 9;
  do {
    FUN_145207a70(param_1,*puVar1,puVar1[1],1);
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_145207a70(param_1,0x63616c74,1);
  FUN_145207a70(param_1,0x636c6967,1);
  FUN_145208de0(param_1,0,&LAB_145210cf0);
  return;
}



// FUNCTION 14520fe00 FUN_14520fe00 body=355 status=ok
// SIG undefined FUN_14520fe00(void)

bool FUN_14520fe00(longlong *param_1,int param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_res10 [2];
  
  if ((((param_2 == 0x931) || (param_2 == 0x9dc)) || (param_2 == 0x9dd)) || (param_2 == 0xb94)) {
    return false;
  }
  if ((param_2 == 0xdda) || (param_2 - 0xddcU < 3)) {
    lVar1 = *(longlong *)(*param_1 + 0x98);
    if (DAT_14c7965f8 == 0) {
      FUN_144e2c1d0();
    }
    if ((DAT_14c7965f8 & 4) != 0) {
LAB_14520ff48:
      *param_3 = 0xdd9;
      *param_4 = param_2;
      return true;
    }
    lVar2 = param_1[2];
    local_res10[0] = 0;
    iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x130))
                      (lVar2,*(undefined8 *)(lVar2 + 0x48),param_2,local_res10,
                       *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x20));
    if (iVar4 != 0) {
      uVar6 = 0;
      uVar3 = *(undefined8 *)(param_1[2] + 0x18);
      if (*(int *)(lVar1 + 0x48) != 0) {
        do {
          iVar4 = FUN_1451e07d0(uVar3,*(undefined2 *)(*(longlong *)(lVar1 + 0x40) + uVar6 * 8),
                                local_res10,1,*(undefined1 *)(lVar1 + 0x4c));
          if (iVar4 != 0) goto LAB_14520ff48;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar1 + 0x48));
      }
    }
  }
  lVar1 = param_1[3];
  *param_3 = param_2;
  *param_4 = 0;
  iVar4 = (**(code **)(lVar1 + 0x48))(lVar1,param_2,param_3,param_4,*(undefined8 *)(lVar1 + 0x88));
  return iVar4 != 0;
}



// FUNCTION 14520ff70 FUN_14520ff70 body=199 status=ok
// SIG undefined FUN_14520ff70(void)

bool FUN_14520ff70(longlong param_1,ulonglong param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = (**(code **)(lVar1 + 0x28))(lVar1,param_2,*(undefined8 *)(lVar1 + 0x68));
  uVar4 = 0;
  iVar5 = 0;
  if (uVar3 < 0x20) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    bVar2 = (**(code **)(lVar1 + 0x28))(lVar1,param_2 & 0xffffffff,*(undefined8 *)(lVar1 + 0x68));
    uVar4 = 1 << (bVar2 & 0x1f);
  }
  if ((uVar4 & 0x1c00) == 0) {
    if (((int)param_2 == 0x9af) && (param_3 == 0x9bc)) {
      *param_4 = 0x9df;
      bVar6 = true;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x18);
      *param_4 = 0;
      if (((int)param_2 != 0) && (param_3 != 0)) {
        iVar5 = (**(code **)(lVar1 + 0x40))
                          (lVar1,param_2 & 0xffffffff,param_3,param_4,*(undefined8 *)(lVar1 + 0x80))
        ;
      }
      bVar6 = iVar5 != 0;
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}



// FUNCTION 145210040 FUN_145210040 body=899 status=ok
// SIG undefined FUN_145210040(void)

longlong * FUN_145210040(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  undefined1 uVar9;
  uint *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong *plVar13;
  int iVar14;
  
  uVar9 = 1;
  plVar5 = (longlong *)FUN_142864336(1,0xa0);
  if (plVar5 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  *plVar5 = (longlong)&DAT_149c5a830;
  piVar7 = &DAT_149c5a84c;
  uVar6 = 1;
  do {
    if (*(int *)(param_1 + 4) == *piVar7) {
      *plVar5 = (longlong)(&DAT_149c5a830 + uVar6 * 0x1c);
      break;
    }
    uVar3 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar3;
    piVar7 = piVar7 + 7;
  } while (uVar3 < 0xb);
  if ((*(char *)(*plVar5 + 4) == '\0') || (*(char *)(param_1 + 0x28) == '2')) {
    uVar9 = 0;
  }
  *(undefined1 *)(plVar5 + 1) = uVar9;
  if (DAT_14c7965f8 == 0) {
    FUN_144e2c1d0();
  }
  bVar2 = (byte)DAT_14c7965f8;
  *(undefined4 *)((longlong)plVar5 + 0xc) = 0xffffffff;
  *(byte *)((longlong)plVar5 + 9) = bVar2 >> 2 & 1;
  if (((char)plVar5[1] == '\0') && (*(int *)(param_1 + 4) != 0x4d6c796d)) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  *(undefined1 *)((longlong)plVar5 + 0x1c) = uVar9;
  iVar14 = 0;
  iVar8 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar8) {
    do {
      uVar4 = (uint)(iVar8 + iVar14) >> 1;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24);
      if (uVar3 < 0x72706867) {
        if (0x72706865 < uVar3) {
          lVar11 = *(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24;
          if (lVar11 != 0) {
            uVar12 = *(undefined4 *)(lVar11 + 0xc);
            goto LAB_14521016c;
          }
          break;
        }
        iVar14 = uVar4 + 1;
      }
      else {
        iVar8 = uVar4 - 1;
      }
    } while (iVar14 <= iVar8);
  }
  uVar12 = 0xffffffff;
LAB_14521016c:
  FUN_145210620(param_1 + 0x28,0,uVar12,plVar5 + 2,plVar5 + 3);
  *(undefined1 *)((longlong)plVar5 + 0x2c) = uVar9;
  iVar8 = 0;
  iVar14 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar14) {
    do {
      uVar4 = (uint)(iVar14 + iVar8) >> 1;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24);
      if (uVar3 < 0x70726567) {
        if (0x70726565 < uVar3) {
          lVar11 = *(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24;
          if (lVar11 != 0) {
            uVar12 = *(undefined4 *)(lVar11 + 0xc);
            goto LAB_1452101f3;
          }
          break;
        }
        iVar8 = uVar4 + 1;
      }
      else {
        iVar14 = uVar4 - 1;
      }
    } while (iVar8 <= iVar14);
  }
  uVar12 = 0xffffffff;
LAB_1452101f3:
  FUN_145210620(param_1 + 0x28,0,uVar12,plVar5 + 4,plVar5 + 5);
  *(undefined1 *)((longlong)plVar5 + 0x3c) = uVar9;
  iVar8 = 0;
  iVar14 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar14) {
    do {
      uVar4 = (uint)(iVar14 + iVar8) >> 1;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24);
      if (uVar3 < 0x626c7767) {
        if (0x626c7765 < uVar3) {
          lVar11 = *(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24;
          if (lVar11 != 0) {
            uVar12 = *(undefined4 *)(lVar11 + 0xc);
            goto LAB_145210273;
          }
          break;
        }
        iVar8 = uVar4 + 1;
      }
      else {
        iVar14 = uVar4 - 1;
      }
    } while (iVar8 <= iVar14);
  }
  uVar12 = 0xffffffff;
LAB_145210273:
  FUN_145210620(param_1 + 0x28,0,uVar12,plVar5 + 6,plVar5 + 7);
  *(undefined1 *)((longlong)plVar5 + 0x4c) = uVar9;
  iVar8 = 0;
  iVar14 = *(int *)(param_1 + 0x38) + -1;
  uVar12 = 0xffffffff;
  if (-1 < iVar14) {
    do {
      uVar4 = (uint)(iVar14 + iVar8) >> 1;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24);
      uVar12 = 0xffffffff;
      if (uVar3 < 0x70737467) {
        if (0x70737465 < uVar3) {
          lVar11 = *(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24;
          if (lVar11 != 0) {
            uVar12 = *(undefined4 *)(lVar11 + 0xc);
          }
          break;
        }
        iVar8 = uVar4 + 1;
      }
      else {
        iVar14 = uVar4 - 1;
      }
    } while (iVar8 <= iVar14);
  }
  FUN_145210620(param_1 + 0x28,0,uVar12,plVar5 + 8,plVar5 + 9);
  puVar10 = &DAT_149c5a970;
  lVar11 = 0x14;
  plVar13 = plVar5 + 10;
  do {
    if ((puVar10[1] & 1) == 0) {
      iVar14 = 0;
      iVar8 = *(int *)(param_1 + 0x38) + -1;
      if (-1 < iVar8) {
        do {
          uVar4 = (uint)(iVar8 + iVar14) >> 1;
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24);
          if (*puVar10 < uVar3) {
            iVar8 = uVar4 - 1;
          }
          else {
            if (*puVar10 <= uVar3) {
              lVar1 = *(longlong *)(param_1 + 0x40) + (ulonglong)uVar4 * 0x24;
              if (lVar1 != 0) {
                uVar12 = *(undefined4 *)(lVar1 + 0x1c);
                goto LAB_145210383;
              }
              break;
            }
            iVar14 = uVar4 + 1;
          }
        } while (iVar14 <= iVar8);
      }
    }
    uVar12 = 0;
LAB_145210383:
    *(undefined4 *)plVar13 = uVar12;
    puVar10 = puVar10 + 2;
    plVar13 = (longlong *)((longlong)plVar13 + 4);
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      return plVar5;
    }
  } while( true );
}



// FUNCTION 1452103e0 FUN_1452103e0 body=562 status=ok
// SIG undefined FUN_1452103e0(void)

void FUN_1452103e0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  int *piVar7;
  byte bVar8;
  
  piVar7 = *(int **)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x60) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x60);
    do {
      iVar1 = *piVar7;
      uVar3 = FUN_145489270();
      uVar2 = (undefined1)(uVar3 >> 8);
      uVar3 = uVar3 & 0x7f;
      if (iVar1 - 0x953U < 2) {
LAB_145210441:
        uVar3 = 8;
LAB_145210571:
        uVar4 = 1 << ((byte)uVar3 & 0x1f);
      }
      else {
        if ((iVar1 - 0xa72U < 2) || (iVar1 - 0x1cf5U < 2)) {
          uVar3 = 1;
          goto LAB_145210571;
        }
        if (iVar1 - 0x1ce2U < 7) {
          uVar3 = 10;
          goto LAB_145210571;
        }
        if (iVar1 == 0x1ced) {
          uVar3 = 10;
          goto LAB_145210571;
        }
        if (((iVar1 - 0xa8f2U < 6) || (iVar1 - 0x1ce9U < 4)) || (iVar1 - 0x1ceeU < 4)) {
          uVar3 = 0x12;
          goto LAB_145210571;
        }
        if (iVar1 == 0xa51) {
          uVar3 = 7;
          uVar2 = 8;
          goto LAB_145210571;
        }
        if ((iVar1 - 0x11301U & 0xfffffffd) == 0) goto LAB_145210441;
        if (iVar1 == 0x1133c) {
          uVar3 = 3;
          goto LAB_145210571;
        }
        if (iVar1 == 0xafb) {
          uVar3 = 3;
          goto LAB_145210571;
        }
        if (iVar1 == 0x980) {
          uVar3 = 0xb;
          goto LAB_145210571;
        }
        if (iVar1 == 0x9fc) {
          uVar3 = 0xb;
          goto LAB_145210571;
        }
        if (iVar1 == 0xc80) {
          uVar3 = 0xb;
          goto LAB_145210571;
        }
        if (iVar1 - 0x2010U < 2) {
          uVar3 = 0xb;
          goto LAB_145210571;
        }
        if (iVar1 == 0x25cc) {
          uVar3 = 0xc;
          goto LAB_145210571;
        }
        if (uVar3 < 0x20) goto LAB_145210571;
        uVar4 = 0;
      }
      bVar8 = (byte)uVar3;
      if ((uVar4 & 0xb1806) == 0) {
        if (uVar3 == 7) {
          uVar2 = FUN_1452106f0(iVar1);
        }
        else {
          if (uVar3 < 0x20) {
            uVar4 = 1 << (bVar8 & 0x1f);
          }
          else {
            uVar4 = 0;
          }
          if ((uVar4 & 0x40500) != 0) {
            uVar2 = 0xe;
          }
        }
      }
      else {
        uVar2 = 4;
        uVar4 = 0;
        piVar5 = &DAT_149c5a7f8;
        do {
          if (iVar1 == *piVar5) {
            bVar8 = 0x10;
            break;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar4 < 0xc);
      }
      *(byte *)((longlong)piVar7 + 0x12) = bVar8;
      if (iVar1 == 0xb01) {
        uVar2 = 7;
      }
      *(undefined1 *)((longlong)piVar7 + 0x13) = uVar2;
      piVar7 = piVar7 + 5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 145210620 FUN_145210620 body=201 status=ok
// SIG undefined FUN_145210620(void)

void FUN_145210620(longlong param_1,uint param_2,uint param_3,undefined8 *param_4,int *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined1 *)0x0;
  uVar4 = (ulonglong)param_2;
  uVar1 = 0;
  if (param_3 != 0xffffffff) {
    if (param_3 != 0) {
      if (param_3 - 1 < *(uint *)(param_1 + (uVar4 + 4) * 0x10)) {
        uVar1 = *(uint *)((ulonglong)(param_3 - 1) * 0x10 +
                         *(longlong *)(param_1 + 8 + (uVar4 + 4) * 0x10));
      }
      else {
        uVar1 = 0;
      }
    }
    if (param_3 < *(uint *)(param_1 + (uVar4 + 4) * 0x10)) {
      uVar3 = *(uint *)((ulonglong)param_3 * 0x10 + *(longlong *)(param_1 + 8 + (uVar4 + 4) * 0x10))
      ;
    }
    else {
      uVar3 = *(uint *)(param_1 + (uVar4 + 2) * 0x10);
    }
    if (uVar3 != uVar1) {
      if (uVar1 < *(uint *)(param_1 + (uVar4 + 2) * 0x10)) {
        puVar2 = (undefined1 *)
                 (*(longlong *)(param_1 + 8 + (uVar4 + 2) * 0x10) + (ulonglong)uVar1 * 8);
      }
      else {
        puVar2 = &DAT_149a1f1a0;
      }
    }
    *param_4 = puVar2;
    *param_5 = uVar3 - uVar1;
    return;
  }
  *param_4 = 0;
  *param_5 = 0;
  return;
}



// FUNCTION 1452106f0 FUN_1452106f0 body=440 status=ok
// SIG undefined FUN_1452106f0(void)

int FUN_1452106f0(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 3) {
    return 2;
  }
  if (param_2 == 6) {
    param_1 = param_1 & 0xffffff80;
    if (param_1 != 0x900) {
      if (param_1 == 0xa00) {
        return 0xc;
      }
      if (param_1 != 0xa80) {
        if (param_1 == 0xb00) {
          return 5;
        }
        if (param_1 != 0xb80) {
          if (param_1 != 0xc00) {
            iVar2 = 7;
            if (param_1 != 0xc80) {
              iVar2 = 9;
            }
            return iVar2;
          }
          return 7;
        }
      }
    }
    return 9;
  }
  if (param_2 == 8) {
    param_1 = param_1 & 0xffffff80;
    if ((param_1 == 0x900) || (param_1 == 0x980)) {
      return 9;
    }
    if ((param_1 != 0xa00) && (param_1 != 0xa80)) {
      if (param_1 == 0xb00) {
        return 9;
      }
      if (param_1 != 0xb80) {
        if ((param_1 != 0xc00) && (param_1 != 0xc80)) {
          iVar2 = 0xc;
          if (param_1 != 0xd00) {
            iVar2 = 9;
          }
          return iVar2;
        }
        return 7;
      }
    }
    return 0xc;
  }
  if (param_2 != 0xb) {
    return param_2;
  }
  uVar1 = param_1 & 0xffffff80;
  if (uVar1 == 0x900) {
    return 9;
  }
  if ((((uVar1 == 0x980) || (uVar1 == 0xa00)) || (uVar1 == 0xa80)) ||
     ((uVar1 == 0xb00 || (uVar1 == 0xb80)))) {
    return 0xc;
  }
  if (uVar1 == 0xc00) {
    iVar2 = 9;
    if (param_1 < 0xc43) {
      iVar2 = 7;
    }
    return iVar2;
  }
  if (uVar1 != 0xc80) {
    iVar2 = 0xc;
    if (uVar1 != 0xd00) {
      iVar2 = 9;
    }
    return iVar2;
  }
  iVar2 = 7;
  if (param_1 - 0xcc3 < 0x14) {
    iVar2 = 9;
  }
  return iVar2;
}



// FUNCTION 1452108b0 FUN_1452108b0 body=496 status=ok
// SIG undefined FUN_1452108b0(void)

void FUN_1452108b0(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 uVar9;
  
  iVar1 = *param_1;
  uVar3 = FUN_145489270(iVar1);
  uVar6 = 0;
  uVar8 = uVar3 & 0x7f;
  uVar3 = uVar3 >> 8;
  uVar9 = 7;
  if (iVar1 - 0x953U < 2) {
LAB_1452108ec:
    uVar8 = 8;
  }
  else if ((iVar1 - 0xa72U < 2) || (iVar1 - 0x1cf5U < 2)) {
    uVar8 = 1;
  }
  else if (iVar1 - 0x1ce2U < 7) {
    uVar8 = 10;
  }
  else if (iVar1 == 0x1ced) {
    uVar8 = 10;
  }
  else if (((iVar1 - 0xa8f2U < 6) || (iVar1 - 0x1ce9U < 4)) || (iVar1 - 0x1ceeU < 4)) {
    uVar8 = 0x12;
  }
  else if (iVar1 == 0xa51) {
    uVar3 = 8;
    uVar8 = 7;
  }
  else {
    if ((iVar1 - 0x11301U & 0xfffffffd) == 0) goto LAB_1452108ec;
    if (iVar1 == 0x1133c) {
      uVar8 = 3;
    }
    else if (iVar1 == 0xafb) {
      uVar8 = 3;
    }
    else if (iVar1 == 0x980) {
      uVar8 = 0xb;
    }
    else if (iVar1 == 0x9fc) {
      uVar8 = 0xb;
    }
    else if (iVar1 == 0xc80) {
      uVar8 = 0xb;
    }
    else if (iVar1 - 0x2010U < 2) {
      uVar8 = 0xb;
    }
    else if (iVar1 == 0x25cc) {
      uVar8 = 0xc;
    }
    else if (0x1f < uVar8) {
      uVar4 = 0;
      goto LAB_145210a22;
    }
  }
  uVar4 = 1 << ((byte)uVar8 & 0x1f);
LAB_145210a22:
  uVar2 = (undefined1)uVar3;
  bVar7 = (byte)uVar8;
  if ((uVar4 & 0xb1806) == 0) {
    if (uVar8 == 7) {
      uVar9 = 7;
      uVar2 = FUN_1452106f0(iVar1,uVar3);
    }
    else {
      if (uVar8 < 0x20) {
        uVar6 = 1 << (bVar7 & 0x1f);
      }
      else {
        uVar6 = 0;
      }
      if ((uVar6 & 0x40500) != 0) {
        uVar2 = 0xe;
      }
    }
  }
  else {
    uVar2 = 4;
    piVar5 = &DAT_149c5a7f8;
    do {
      if (iVar1 == *piVar5) {
        bVar7 = 0x10;
        break;
      }
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 < 0xc);
  }
  *(byte *)((longlong)param_1 + 0x12) = bVar7;
  if (iVar1 == 0xb01) {
    uVar2 = uVar9;
  }
  *(undefined1 *)((longlong)param_1 + 0x13) = uVar2;
  return;
}



// FUNCTION 145210aa0 FUN_145210aa0 body=151 status=ok
// SIG undefined FUN_145210aa0(void)

void FUN_145210aa0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  FUN_145210f10(param_3);
  uVar1 = *(uint *)(param_3 + 0x60);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        if (1 < (uint)uVar4 - (int)uVar5) {
          FUN_144b620d0(param_3,uVar5,uVar4);
        }
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0x60) <= uVar2) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
        uVar5 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 145210b40 FUN_145210b40 body=262 status=ok
// SIG undefined FUN_145210b40(void)

void FUN_145210b40(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar4;
  
  FUN_145211620();
  FUN_1452123b0(param_1,param_2,param_3);
  uVar1 = *(uint *)(param_3 + 0x60);
  if (uVar1 != 0) {
    lVar6 = *(longlong *)(param_3 + 0x70);
    uVar4 = 0;
    do {
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(lVar6 + 0xf) == *(char *)(lVar6 + 0xf + uVar4 * 0x14));
    uVar7 = 0;
    if (uVar1 != 0) {
      do {
        uVar5 = uVar4;
        uVar2 = *(byte *)(lVar6 + 0xf + uVar7 * 0x14) & 0xf;
        uVar3 = (uint)uVar5;
        if ((uVar2 < 2) ||
           (((uVar2 - 2 & 0xfffffffd) == 0 &&
            ((*(char *)(*(longlong *)(param_1 + 0x98) + 9) == '\0' ||
             (*(char *)(lVar6 + 0x12 + (ulonglong)(uVar3 - 1) * 0x14) != '\f')))))) {
          FUN_1452116f0(param_1,*(undefined8 *)(param_2 + 0x18),param_3,uVar7,uVar3);
        }
        lVar6 = *(longlong *)(param_3 + 0x70);
        uVar4 = uVar5;
        do {
          uVar2 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0x60) <= uVar2) break;
        } while (*(char *)(lVar6 + 0xf + uVar5 * 0x14) == *(char *)(lVar6 + 0xf + uVar4 * 0x14));
        uVar7 = uVar5;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 145210c50 FUN_145210c50 body=160 status=ok
// SIG undefined FUN_145210c50(void)

void FUN_145210c50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_3 + 0x60);
  if (uVar1 != 0) {
    uVar5 = 0;
    uVar3 = uVar5;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        FUN_145212630(param_1,param_3,uVar5,uVar4);
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0x60) <= uVar2) break;
        } while (*(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar4 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 0x70) + 0xf + uVar3 * 0x14));
        uVar5 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 145210d10 FUN_145210d10 body=123 status=ok
// SIG undefined FUN_145210d10(void)

undefined8 FUN_145210d10(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if ((int)param_1[1] != 0) {
    do {
      iVar1 = FUN_1451e07d0(param_4,*(undefined2 *)(*param_1 + uVar3 * 8),param_2,param_3,
                            *(undefined1 *)((longlong)param_1 + 0xc));
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 1));
  }
  return 0;
}



// FUNCTION 145210d90 FUN_145210d90 body=364 status=ok
// SIG undefined FUN_145210d90(void)

void FUN_145210d90(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  uVar5 = uVar3;
  local_48 = param_3;
  local_44 = param_2;
  local_40 = param_3;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      local_58 = (uint)*(byte *)(param_1 + 0x3c);
      iVar2 = FUN_1451e07d0(param_4,*(undefined2 *)(*(longlong *)(param_1 + 0x30) + uVar5 * 8),
                            &local_48,2);
      if (iVar2 != 0) goto LAB_145210eef;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x38));
  }
  cVar1 = FUN_145210d10(param_1 + 0x30,&local_44,2,param_4);
  if (cVar1 == '\0') {
    uVar5 = uVar3;
    if (*(int *)(param_1 + 0x48) != 0) {
      do {
        local_58 = (uint)*(byte *)(param_1 + 0x4c);
        iVar2 = FUN_1451e07d0(param_4,*(undefined2 *)(*(longlong *)(param_1 + 0x40) + uVar5 * 8),
                              &local_48,2);
        if (iVar2 != 0) goto LAB_145210eef;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0x48));
    }
    cVar1 = FUN_145210d10(param_1 + 0x40,&local_44,2,param_4);
    if (cVar1 == '\0') {
      if (*(int *)(param_1 + 0x28) != 0) {
        do {
          local_58 = (uint)*(byte *)(param_1 + 0x2c);
          iVar2 = FUN_1451e07d0(param_4,*(undefined2 *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8),
                                &local_48,2);
          if (iVar2 != 0) goto LAB_145210eef;
          uVar4 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 0x28));
      }
      FUN_145210d10(param_1 + 0x20,&local_44,2,param_4);
    }
  }
LAB_145210eef:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 145210f10 FUN_145210f10 body=1701 status=ok
// SIG undefined FUN_145210f10(void)

void FUN_145210f10(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  lVar3 = *(longlong *)(param_1 + 0x70);
  uVar13 = 0;
  uVar15 = 0;
  uVar17 = 0;
  iVar18 = 0;
  lVar10 = 0x8a;
  iVar4 = 1;
  if (uVar2 != 0) goto LAB_14521152c;
LAB_145210f67:
  if (*(short *)(&DAT_149c5a460 + (longlong)(int)lVar10 * 2) < 1) {
    return;
  }
  iVar5 = *(short *)(&DAT_149c5a460 + (longlong)(int)lVar10 * 2) + -1;
  do {
    uVar11 = (uint)uVar13;
    lVar10 = (longlong)*(short *)(&DAT_149c59c20 + (longlong)iVar5 * 2);
    uVar14 = (uint)uVar15;
    if ((&DAT_149c59f70)[iVar5] == '\0') goto switchD_145210fba_caseD_9;
    cVar16 = (char)iVar4;
    uVar6 = uVar11;
    switch((&DAT_149c59f70)[iVar5]) {
    case 1:
      uVar6 = uVar17 - 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pcVar8 = (char *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pcVar8 = cVar16 << 4;
          pcVar8 = pcVar8 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 2:
      goto switchD_145210fba_caseD_2;
    case 3:
      uVar6 = uVar17 - 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 1;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 4:
      uVar6 = uVar17 - 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 4;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 5:
      if (iVar18 == 1) {
        uVar6 = uVar17 - 1;
        if (uVar14 < uVar17) {
          uVar13 = (ulonglong)(uVar17 - uVar14);
          pcVar8 = (char *)(lVar3 + 0xf + uVar15 * 0x14);
          do {
            *pcVar8 = cVar16 << 4;
            pcVar8 = pcVar8 + 0x14;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      else if (iVar18 == 5) {
        uVar6 = uVar17 - 1;
        if (uVar14 < uVar17) {
          uVar13 = (ulonglong)(uVar17 - uVar14);
          pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
          do {
            *pbVar7 = cVar16 << 4 | 4;
            pbVar7 = pbVar7 + 0x14;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      else {
        if (iVar18 != 6) goto switchD_145210fba_caseD_9;
        uVar6 = uVar17 - 1;
        if (uVar14 < uVar17) {
          uVar13 = (ulonglong)(uVar17 - uVar14);
          pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
          do {
            *pbVar7 = cVar16 << 4 | 5;
            pbVar7 = pbVar7 + 0x14;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      break;
    case 6:
      iVar18 = 5;
      goto switchD_145210fba_caseD_2;
    case 7:
      uVar6 = uVar17 - 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 2;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 8:
      uVar6 = uVar17 - 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 3;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    default:
      goto switchD_145210fba_caseD_9;
    case 0xb:
      uVar17 = uVar11 + 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 5;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0xc:
      iVar18 = 6;
      goto switchD_145210fba_caseD_2;
    case 0xd:
      uVar17 = uVar11;
      uVar6 = uVar11 - 1;
      if (uVar14 < uVar11) {
        uVar13 = (ulonglong)(uVar11 - uVar14);
        pcVar8 = (char *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pcVar8 = cVar16 << 4;
          pcVar8 = pcVar8 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0xe:
      uVar17 = uVar11 + 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pcVar8 = (char *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pcVar8 = cVar16 << 4;
          pcVar8 = pcVar8 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0xf:
      uVar17 = uVar11;
      uVar6 = uVar11 - 1;
      if (uVar14 < uVar11) {
        uVar13 = (ulonglong)(uVar11 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 1;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0x10:
      uVar17 = uVar11 + 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 1;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0x11:
      uVar17 = uVar11;
      uVar6 = uVar11 - 1;
      if (uVar14 < uVar11) {
        uVar13 = (ulonglong)(uVar11 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 4;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0x12:
      uVar17 = uVar11 + 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 4;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0x13:
      uVar17 = uVar11;
      uVar6 = uVar11 - 1;
      if (uVar14 < uVar11) {
        uVar13 = (ulonglong)(uVar11 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 5;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0x14:
      uVar17 = uVar11;
      uVar6 = uVar11 - 1;
      if (uVar14 < uVar11) {
        uVar13 = (ulonglong)(uVar11 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 2;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0x15:
      uVar17 = uVar11 + 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 2;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0x16:
      iVar18 = 1;
switchD_145210fba_caseD_2:
      uVar17 = uVar11 + 1;
      goto switchD_145210fba_caseD_9;
    case 0x17:
      uVar17 = uVar11;
      uVar6 = uVar11 - 1;
      if (uVar14 < uVar11) {
        uVar13 = (ulonglong)(uVar11 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 3;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      break;
    case 0x18:
      uVar17 = uVar11 + 1;
      if (uVar14 < uVar17) {
        uVar13 = (ulonglong)(uVar17 - uVar14);
        pbVar7 = (byte *)(lVar3 + 0xf + uVar15 * 0x14);
        do {
          *pbVar7 = cVar16 << 4 | 3;
          pbVar7 = pbVar7 + 0x14;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    uVar11 = uVar6;
    iVar4 = iVar4 + 1;
    if (iVar4 == 0x10) {
      iVar4 = 1;
    }
switchD_145210fba_caseD_9:
    uVar6 = 0;
    if ((&DAT_149c5a120)[lVar10] != '\t') {
      uVar6 = uVar14;
    }
    uVar13 = (ulonglong)(uVar11 + 1);
    uVar15 = (ulonglong)uVar6;
    if (uVar11 + 1 == uVar2) goto LAB_145210f67;
LAB_14521152c:
    lVar9 = (longlong)(int)lVar10;
    iVar5 = (int)lVar10 * 2;
    iVar12 = (int)(char)(&DAT_149c57790)[lVar9];
    if ((&DAT_149c5a2c0)[lVar9] == '\n') {
      uVar15 = uVar13;
    }
    if ('\0' < (char)(&DAT_149c57790)[lVar9]) {
      bVar1 = *(byte *)(lVar3 + 0x12 + uVar13 * 0x14);
      if (((byte)(&DAT_149c57460)[iVar5] <= bVar1) && (bVar1 <= (byte)(&DAT_149c57461)[iVar5])) {
        iVar12 = (uint)bVar1 - (uint)(byte)(&DAT_149c57460)[iVar5];
      }
    }
    iVar5 = (int)*(short *)(&DAT_149c57c60 +
                           (longlong)iVar12 * 2 +
                           (longlong)*(short *)(&DAT_149c57930 + lVar9 * 2) * 2);
  } while( true );
}



// FUNCTION 145211620 FUN_145211620 body=197 status=ok
// SIG undefined FUN_145211620(void)

void FUN_145211620(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  int iVar7;
  int local_res8 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (*(int *)(*plVar1 + 0xc) == 1) {
    iVar7 = *(int *)((longlong)plVar1 + 0xc);
    local_res8[0] = iVar7;
    if (iVar7 == -1) {
      iVar4 = *(int *)(*plVar1 + 8);
      iVar7 = 0;
      if (iVar4 != 0) {
        local_res8[0] = 0;
        iVar4 = (**(code **)(*(longlong *)(param_2 + 0x40) + 0x130))
                          (param_2,*(undefined8 *)(param_2 + 0x48),iVar4,local_res8,
                           *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
        if (iVar4 != 0) {
          iVar7 = local_res8[0];
        }
      }
      *(int *)((longlong)plVar1 + 0xc) = iVar7;
    }
    if (iVar7 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      if (*(uint *)(param_3 + 0x60) != 0) {
        pcVar5 = (char *)(*(longlong *)(param_3 + 0x70) + 0x13);
        uVar6 = (ulonglong)*(uint *)(param_3 + 0x60);
        do {
          if (*pcVar5 == '\x04') {
            cVar3 = FUN_145210d90(plVar1,*(undefined4 *)(pcVar5 + -0x13),iVar7,uVar2);
            *pcVar5 = cVar3;
          }
          pcVar5 = pcVar5 + 0x14;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}


