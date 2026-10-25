// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1451d9bc0 FUN_1451d9bc0 body=1380 status=ok
// SIG undefined FUN_1451d9bc0(void)

/* WARNING: Removing unreachable block (ram,0x0001451d9ec2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1451d9bc0(uint param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  double *pdVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  
  if (0x122 < param_1) {
    if (param_1 == 0x123) {
      FUN_1451d8bf0(param_2,param_3);
    }
    else if (param_1 == 0x124) {
      FUN_1451d8f30(param_2,param_3);
    }
    else {
      if (param_1 != 0x125) goto switchD_1451d9c16_caseD_2;
      FUN_1451d91d0(param_2,param_3);
    }
    goto LAB_1451d9e85;
  }
  if (param_1 == 0x122) {
    FUN_1451d89c0(param_2,param_3);
    goto LAB_1451d9e85;
  }
  uVar7 = 0;
  switch(param_1) {
  case 1:
  case 0x12:
    FUN_1451da110(param_1,param_2);
    uVar5 = *(uint *)(param_2 + 0x24);
    *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + (uVar5 >> 1);
    goto LAB_1451d9e88;
  default:
switchD_1451d9c16_caseD_2:
    uVar7 = FUN_144e32630(param_1,param_2);
    return uVar7;
  case 3:
  case 0x17:
    FUN_1451da110(param_1,param_2);
    uVar5 = *(uint *)(param_2 + 0x24);
    *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + (uVar5 >> 1);
    goto LAB_1451d9e88;
  case 4:
    FUN_1451da110(param_1,param_2);
    FUN_1451d6d10(param_2,param_3);
    goto LAB_1451da0b0;
  case 5:
    FUN_1451d6d80(param_2,param_3);
    break;
  case 6:
    FUN_1451d6e70(param_2,param_3);
    break;
  case 7:
    FUN_1451d6fd0(param_2,param_3);
    break;
  case 8:
    FUN_1451d7130(param_2,param_3);
    break;
  case 10:
    uVar7 = FUN_1451d6950(param_2,param_2 + 0xa0,2);
    return uVar7;
  case 0xb:
    if (*(char *)(param_2 + 0x1c) != '\0') {
      *(undefined1 *)(param_2 + 0x38) = 1;
    }
    if (*(int *)(param_2 + 0x7c) == 0) {
      *(undefined1 *)(param_2 + 0x78) = 1;
    }
    else {
      uVar5 = *(int *)(param_2 + 0x7c) - 1;
      *(uint *)(param_2 + 0x7c) = uVar5;
      if (uVar5 < *(uint *)(param_2 + 0x80)) {
        puVar9 = (undefined4 *)(*(longlong *)(param_2 + 0x88) + (ulonglong)uVar5 * 0x28);
        goto LAB_1451d6b09;
      }
    }
    puVar9 = &DAT_14c793f60;
    _DAT_14c793f60 = 0;
    _DAT_14c793f68 = 0;
    _DAT_14c793f80 = 0;
    _DAT_14c793f70 = 0;
    _DAT_14c793f78 = 0;
LAB_1451d6b09:
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(puVar9 + 2);
    *(undefined4 *)(param_2 + 0x50) = puVar9[4];
    *(undefined4 *)(param_2 + 0x58) = puVar9[6];
    *(undefined1 *)(param_2 + 0x5c) = *(undefined1 *)(puVar9 + 7);
    *(undefined4 *)(param_2 + 0x60) = puVar9[8];
    *(undefined4 *)(param_2 + 100) = puVar9[9];
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x58);
    *(byte *)(param_2 + 0x1c) = *(byte *)(param_2 + 0x5c);
    return (ulonglong)*(byte *)(param_2 + 0x5c);
  case 0xe:
    FUN_1451da110(param_1,param_2);
    *(undefined1 *)(param_2 + 0x68) = 1;
    break;
  case 0x13:
  case 0x14:
    uVar7 = FUN_1451da110(param_1,param_2);
    if (*(char *)(param_2 + 0x6a) == '\0') {
      uVar5 = *(uint *)(param_2 + 0x24) >> 1;
      uVar7 = (ulonglong)uVar5;
      *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + uVar5;
      *(undefined1 *)(param_2 + 0x6a) = 1;
      *(uint *)(param_2 + 0x74) =
           (uint)(*(int *)(param_2 + 0x70) + 7 + *(int *)(param_2 + 0x6c)) >> 3;
    }
    if (*(char *)(param_2 + 0x1c) != '\0') {
      return uVar7;
    }
    uVar5 = *(int *)(param_2 + 0x74) + *(int *)(param_2 + 0x18);
    if (*(uint *)(param_2 + 0x10) < uVar5) {
      return (ulonglong)uVar5;
    }
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0xc4) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    if (*(char *)(param_2 + 0x1c) == '\0') {
      if ((*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x10)) &&
         (uVar5 = *(uint *)(param_2 + 0x18) + *(int *)(param_2 + 0x74),
         uVar5 <= *(uint *)(param_2 + 0x10))) goto LAB_1451da0a7;
    }
    uVar5 = *(uint *)(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x1c) = 1;
LAB_1451da0a7:
    *(uint *)(param_2 + 0x18) = uVar5;
    return (ulonglong)uVar5;
  case 0x15:
    FUN_1451da110(param_1,param_2);
    FUN_1451d6bf0(param_2,param_3);
    goto LAB_1451da0b0;
  case 0x16:
    FUN_1451da110(param_1,param_2);
    FUN_1451d6ca0(param_2,param_3);
LAB_1451da0b0:
    if (*(char *)(param_2 + 0x69) == '\0') {
      if (*(char *)(param_2 + 0x6a) == '\0') {
        *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + (*(uint *)(param_2 + 0x24) >> 1);
        *(undefined1 *)(param_2 + 0x6a) = 1;
        *(uint *)(param_2 + 0x74) =
             (uint)(*(int *)(param_2 + 0x70) + 7 + *(int *)(param_2 + 0x6c)) >> 3;
      }
      *(undefined1 *)(param_2 + 0x69) = 1;
    }
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0xc4) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    return 0;
  case 0x18:
    FUN_1451d7330(param_2,param_3);
    break;
  case 0x19:
    FUN_1451d75f0(param_2,param_3);
    break;
  case 0x1a:
    FUN_1451d78c0(param_2,param_3);
    break;
  case 0x1b:
    FUN_1451d7aa0(param_2,param_3);
    break;
  case 0x1d:
    uVar7 = FUN_1451d6950(param_2,param_2 + 0x90,1);
    return uVar7;
  case 0x1e:
    FUN_1451d7c70(param_2,param_3);
    break;
  case 0x1f:
    FUN_1451d8320(param_2,param_3);
    break;
  case 0xff:
    if (*(char *)(param_2 + 0x1c) != '\0') {
LAB_1451d61ce:
      return uVar7 & 0xffffffffffffff00;
    }
    uVar5 = *(uint *)(param_2 + 0x18);
    uVar7 = (ulonglong)(uVar5 + 4);
    if (*(uint *)(param_2 + 0x10) < uVar5 + 4) goto LAB_1451d61ce;
    if (uVar5 < *(uint *)(param_2 + 0x10)) {
      pbVar8 = (byte *)((ulonglong)uVar5 + *(longlong *)(param_2 + 8));
    }
    else {
      *(undefined1 *)(param_2 + 0x1c) = 1;
      pbVar8 = &DAT_149a1f1a0;
    }
    bVar1 = pbVar8[1];
    bVar2 = *pbVar8;
    bVar3 = pbVar8[2];
    bVar4 = pbVar8[3];
    uVar5 = *(uint *)(param_2 + 0x24);
    if (uVar5 < *(uint *)(param_2 + 0x28)) {
      *(uint *)(param_2 + 0x24) = uVar5 + 1;
      if (*(uint *)(param_2 + 0x28) <= uVar5) goto LAB_1451d6180;
      pdVar6 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar5 * 8);
    }
    else {
      *(undefined1 *)(param_2 + 0x20) = 1;
LAB_1451d6180:
      _DAT_14c793f60 = 0;
      pdVar6 = (double *)&DAT_14c793f60;
    }
    *pdVar6 = (double)(int)((((uint)bVar2 * 0x100 + (uint)bVar1) * 0x100 + (uint)bVar3) * 0x100 +
                           (uint)bVar4) * 1.52587890625e-05;
    if (*(char *)(param_2 + 0x1c) == '\0') {
      if ((*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x10)) &&
         (uVar5 = *(uint *)(param_2 + 0x18) + 4, uVar5 <= *(uint *)(param_2 + 0x10)))
      goto LAB_1451d61c8;
    }
    uVar5 = *(uint *)(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x1c) = 1;
LAB_1451d61c8:
    *(uint *)(param_2 + 0x18) = uVar5;
    return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
  }
LAB_1451d9e85:
  uVar5 = *(uint *)(param_2 + 0x24);
LAB_1451d9e88:
  if (*(uint *)(param_2 + 0x24) < uVar5) {
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  else {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) - uVar5;
  }
  *(undefined4 *)(param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  return 0;
}



// FUNCTION 1451da110 FUN_1451da110 body=165 status=ok
// SIG undefined FUN_1451da110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451da110(undefined4 param_1,longlong param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  if (*(char *)(param_2 + 0xc0) != '\0') {
    return;
  }
  switch(param_1) {
  case 1:
  case 3:
  case 0xe:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x17:
    bVar1 = (bool)(*(byte *)(param_2 + 0x24) & 1);
    goto LAB_1451da15b;
  default:
    goto switchD_1451da144_caseD_2;
  case 4:
  case 0x16:
    bVar1 = *(int *)(param_2 + 0x24) == 0;
    bVar3 = *(int *)(param_2 + 0x24) == 1;
    break;
  case 0x15:
    bVar1 = *(uint *)(param_2 + 0x24) < 2;
    bVar3 = *(uint *)(param_2 + 0x24) == 2;
  }
  bVar1 = !bVar1 && !bVar3;
LAB_1451da15b:
  if ((*(int *)(param_2 + 0x24) != 0) && (bVar1 != false)) {
    if (*(int *)(param_2 + 0x24) == 0) {
      *(undefined1 *)(param_2 + 0x20) = 1;
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      _DAT_14c793f60 = 0;
      puVar2 = (undefined8 *)&DAT_14c793f60;
    }
    else {
      puVar2 = *(undefined8 **)(param_2 + 0x30);
    }
    *(undefined8 *)(param_2 + 200) = *puVar2;
    *(undefined1 *)(param_2 + 0xc1) = 1;
    *(undefined4 *)(param_2 + 0xc4) = 1;
  }
  *(undefined1 *)(param_2 + 0xc0) = 1;
switchD_1451da144_caseD_2:
  return;
}



// FUNCTION 1451da1e0 FUN_1451da1e0 body=675 status=ok
// SIG undefined FUN_1451da1e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451da1e0(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  double *pdVar5;
  uint uVar6;
  double *pdVar7;
  uint uVar8;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = *(uint *)(param_1 + 0x24);
  uVar6 = uVar8 - 4;
  if (uVar8 <= uVar6) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  pdVar7 = (double *)&DAT_14c793f60;
  if (uVar6 < *(uint *)(param_1 + 0x28)) {
    pdVar5 = (double *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar6 * 8);
  }
  else {
    _DAT_14c793f60 = 0;
    pdVar5 = (double *)&DAT_14c793f60;
  }
  local_98 = *pdVar5;
  uVar6 = uVar8 - 3;
  if (*(uint *)(param_1 + 0x24) <= uVar6) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (uVar6 < *(uint *)(param_1 + 0x28)) {
    pdVar5 = (double *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar6 * 8);
  }
  else {
    _DAT_14c793f60 = 0;
    pdVar5 = (double *)&DAT_14c793f60;
  }
  local_90 = *pdVar5;
  uVar6 = uVar8 - 2;
  if (*(uint *)(param_1 + 0x24) <= uVar6) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (uVar6 < *(uint *)(param_1 + 0x28)) {
    pdVar5 = (double *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar6 * 8);
  }
  else {
    _DAT_14c793f60 = 0;
    pdVar5 = (double *)&DAT_14c793f60;
  }
  uVar6 = (uint)*pdVar5;
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (uVar6 < 0x100) {
    bVar1 = (&DAT_149c55410)[uVar6];
    uVar4 = (uint)bVar1;
    if (bVar1 == 0xffffffff) goto LAB_1451da31b;
    if (*(undefined1 **)(lVar2 + 0x40) == &DAT_149a1f1a0) {
      if ((*(int *)(lVar2 + 0xe4) != 0) || (0xe4 < uVar6)) goto LAB_1451da31b;
    }
    else {
      uVar4 = FUN_1451d62b0(*(undefined1 **)(lVar2 + 0x40),(uint)bVar1,
                            *(undefined4 *)(lVar2 + 0x118));
    }
  }
  else {
LAB_1451da31b:
    uVar4 = 0;
  }
  uVar8 = uVar8 - 1;
  if (*(uint *)(param_1 + 0x24) <= uVar8) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (uVar8 < *(uint *)(param_1 + 0x28)) {
    pdVar7 = (double *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar8 * 8);
  }
  else {
    _DAT_14c793f60 = 0;
  }
  uVar6 = (uint)*pdVar7;
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (uVar6 < 0x100) {
    bVar1 = (&DAT_149c55410)[uVar6];
    uVar8 = (uint)bVar1;
    if (bVar1 == 0xffffffff) goto LAB_1451da398;
    if (*(undefined1 **)(lVar2 + 0x40) == &DAT_149a1f1a0) {
      if ((*(int *)(lVar2 + 0xe4) != 0) || (0xe4 < uVar6)) goto LAB_1451da398;
    }
    else {
      uVar8 = FUN_1451d62b0(*(undefined1 **)(lVar2 + 0x40),(uint)bVar1,
                            *(undefined4 *)(lVar2 + 0x118));
    }
  }
  else {
LAB_1451da398:
    uVar8 = 0;
  }
  if (((*(char *)(param_1 + 0xd0) == '\0') && (uVar4 != 0)) && (uVar8 != 0)) {
    cVar3 = FUN_1451d9860(lVar2,uVar4,local_68,1);
    if (cVar3 != '\0') {
      cVar3 = FUN_1451d9860(*(undefined8 *)(param_2 + 0x28),uVar8,&local_88,1);
      if (cVar3 != '\0') {
        FUN_1451d6b50(param_2 + 8,local_68);
        if (local_88 < local_78) {
          if (local_80 < local_70) {
            local_88 = local_88 + local_98;
            local_80 = local_80 + local_90;
            local_78 = local_78 + local_98;
            local_70 = local_70 + local_90;
          }
        }
        FUN_1451d6b50(param_2 + 8,&local_88);
        goto LAB_1451da46e;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
LAB_1451da46e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1451da490 FUN_1451da490 body=128 status=ok
// SIG undefined FUN_1451da490(void)

/* WARNING: Removing unreachable block (ram,0x0001451da4dc) */

void FUN_1451da490(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1451da510 thunk_FUN_1451da490 body=5 status=ok
// SIG undefined thunk_FUN_1451da490(void)

void thunk_FUN_1451da490(void)

{
  FUN_1451da490();
  return;
}



// FUNCTION 1451da520 FUN_1451da520 body=358 status=ok
// SIG undefined FUN_1451da520(void)

void FUN_1451da520(longlong param_1,undefined4 *param_2,uint param_3,byte *param_4,float *param_5,
                  uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  float fVar8;
  float fVar9;
  ulonglong local_68;
  
  local_68 = (ulonglong)param_6;
  if (param_6 != 0) {
    pbVar7 = (byte *)(param_1 + 6);
    do {
      uVar1 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
      if (uVar1 < (uint)param_4[2] * 0x100 + (uint)param_4[3]) {
        uVar4 = 0;
        fVar9 = 1.0;
        uVar5 = (uint)*param_4 * 0x100 + (uint)param_4[1];
        puVar6 = param_2;
        if (uVar5 != 0) {
          do {
            if ((uint)uVar4 < param_3) {
              uVar2 = *puVar6;
            }
            else {
              uVar2 = 0;
            }
            fVar8 = (float)FUN_144e31b90(param_4 + uVar4 * 6 + 4 + (ulonglong)(uVar5 * uVar1) * 6,
                                         uVar2);
            if (fVar8 == 0.0) {
              fVar9 = 0.0;
              break;
            }
            uVar3 = (uint)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
            fVar9 = fVar9 * fVar8;
            puVar6 = puVar6 + 1;
          } while (uVar3 < uVar5);
        }
      }
      else {
        fVar9 = 0.0;
      }
      pbVar7 = pbVar7 + 2;
      *param_5 = fVar9;
      param_5 = param_5 + 1;
      local_68 = local_68 - 1;
    } while (local_68 != 0);
  }
  return;
}



// FUNCTION 1451da690 FUN_1451da690 body=141 status=ok
// SIG undefined FUN_1451da690(void)

int FUN_1451da690(longlong param_1,uint param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_149a1f1a0;
  if (param_2 < (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7)) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 2) * 4);
  }
  else {
    pbVar1 = &DAT_149a1f1a0;
  }
  if ((uint)*pbVar1 * 0x1000000 + (uint)pbVar1[2] * 0x100 + (uint)pbVar1[1] * 0x10000 +
      (uint)pbVar1[3] != 0) {
    puVar2 = (undefined1 *)
             (((ulonglong)CONCAT11(*pbVar1,pbVar1[1]) * 0x100 + (ulonglong)pbVar1[2]) * 0x100 +
              param_1 + (ulonglong)pbVar1[3]);
  }
  return (uint)(byte)puVar2[4] * 0x100 + (uint)(byte)puVar2[5];
}



// FUNCTION 1451da720 FUN_1451da720 body=243 status=ok
// SIG undefined FUN_1451da720(void)

void FUN_1451da720(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = &DAT_149a1f1a0;
  if ((uint)*(byte *)(param_1 + 2) * 0x1000000 + (uint)*(byte *)(param_1 + 4) * 0x100 +
      (uint)*(byte *)(param_1 + 3) * 0x10000 + (uint)*(byte *)(param_1 + 5) == 0) {
    puVar2 = &DAT_149a1f1a0;
  }
  else {
    puVar2 = (undefined1 *)
             ((((ulonglong)*(byte *)(param_1 + 3) + (ulonglong)*(byte *)(param_1 + 2) * 0x100) *
               0x100 + (ulonglong)*(byte *)(param_1 + 4)) * 0x100 + param_1 +
             (ulonglong)*(byte *)(param_1 + 5));
  }
  if (param_2 < (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7)) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 2) * 4);
  }
  else {
    pbVar1 = &DAT_149a1f1a0;
  }
  if ((uint)*pbVar1 * 0x1000000 + (uint)pbVar1[2] * 0x100 + (uint)pbVar1[1] * 0x10000 +
      (uint)pbVar1[3] != 0) {
    puVar3 = (undefined1 *)
             ((((ulonglong)pbVar1[1] + (ulonglong)*pbVar1 * 0x100) * 0x100 + (ulonglong)pbVar1[2]) *
              0x100 + param_1 + (ulonglong)pbVar1[3]);
  }
  FUN_1451da520(puVar3,param_3,param_4,puVar2);
  return;
}



// FUNCTION 1451da820 FUN_1451da820 body=342 status=ok
// SIG undefined FUN_1451da820(void)

int FUN_1451da820(uint *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bStackX_9;
  byte bStackX_b;
  
  uVar1 = *param_1;
  pbVar2 = &DAT_149a1f1a0;
  bStackX_9 = (byte)(uVar1 >> 8);
  uVar4 = 1;
  bStackX_b = (byte)(uVar1 >> 0x18);
  if (1 < (uint)bStackX_9 * 0x10000 + (uVar1 >> 0x10 & 0xff) * 0x100 + uVar1 * 0x1000000 +
          (uint)bStackX_b) {
    do {
      if (uVar4 < (uint)*(byte *)((longlong)param_1 + 1) * 0x10000 +
                  (uint)*(byte *)((longlong)param_1 + 2) * 0x100 + uVar1 * 0x1000000 +
                  (uint)*(byte *)((longlong)param_1 + 3)) {
        pbVar3 = (byte *)((longlong)param_1 + (ulonglong)uVar4 * 6 + 4);
      }
      else {
        pbVar3 = &DAT_149a1f1a0;
      }
    } while (((uint)pbVar3[1] * 0x10000 + (uint)pbVar3[2] * 0x100 + (uint)*pbVar3 * 0x1000000 +
              (uint)pbVar3[3] <= param_2) &&
            (uVar4 = uVar4 + 1,
            uVar4 < (uVar1 >> 0x10 & 0xff) * 0x100 + (uint)bStackX_b + uVar1 * 0x1000000 +
                    (uint)bStackX_9 * 0x10000));
  }
  if (uVar4 - 1 <
      (uint)*(byte *)((longlong)param_1 + 1) * 0x10000 +
      (uint)*(byte *)((longlong)param_1 + 2) * 0x100 + (uint)(byte)*param_1 * 0x1000000 +
      (uint)*(byte *)((longlong)param_1 + 3)) {
    pbVar2 = (byte *)((longlong)param_1 + (ulonglong)(uVar4 - 1) * 6 + 4);
  }
  return (uint)pbVar2[4] * 0x100 + (uint)pbVar2[5];
}



// FUNCTION 1451da980 FUN_1451da980 body=1253 status=ok
// SIG undefined FUN_1451da980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1451da980(longlong *param_1,ulonglong param_2,uint param_3,int *param_4)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  byte *pbVar5;
  double *pdVar6;
  undefined4 *puVar7;
  uint uVar8;
  char cVar9;
  ulonglong uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_res8 [2];
  undefined1 local_168 [8];
  longlong local_160;
  uint local_158;
  uint local_150;
  char local_14c;
  char local_148;
  int local_144;
  longlong local_140;
  longlong local_138;
  char local_130;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  char local_100;
  char local_f0;
  int local_ec;
  longlong local_e8;
  longlong local_e0;
  uint local_8c;
  undefined8 local_88;
  longlong local_80;
  char local_77;
  char local_76;
  undefined1 local_68 [8];
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  
  if ((*param_1 == 0) || (*(uint *)(param_1 + 0x17) <= param_3)) {
    return param_2 & 0xffffffffffffff00;
  }
  uVar4 = FUN_144b63d20(param_2,local_res8);
  pcVar1 = (char *)param_1[0x11];
  uVar8 = 0;
  if (pcVar1 != "") {
    if (*pcVar1 == '\0') {
      uVar8 = (uint)(byte)pcVar1[(ulonglong)param_3 + 1];
    }
    else if (*pcVar1 == '\x03') {
      uVar8 = FUN_1451d61e0();
    }
    else {
      uVar8 = FUN_1451da820(pcVar1 + 1,param_3);
    }
  }
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_14c = '\0';
  local_140 = 0;
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_10c = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_1451dfc90(param_1[0xf],local_68,param_3);
  FUN_1451dfda0(local_168,local_68,param_1,uVar8,uVar4,local_res8[0]);
  local_60 = 2147483647.0;
  dStack_58 = 2147483647.0;
  local_68[0] = 0;
  local_100 = '\0';
  local_50 = -2147483648.0;
  dStack_48 = -2147483648.0;
  cVar9 = local_14c;
  uVar8 = local_150;
  uVar15 = local_158;
  iVar12 = local_144;
  do {
    cVar11 = '\x01';
    if ((cVar9 == '\0') && (uVar13 = uVar8 + 1, uVar13 <= uVar15)) {
      if (uVar8 < uVar15) {
        pbVar5 = (byte *)((ulonglong)uVar8 + local_160);
      }
      else {
        pbVar5 = &DAT_149a1f1a0;
        local_14c = '\x01';
        cVar9 = cVar11;
      }
      uVar14 = (uint)*pbVar5;
      if (*pbVar5 == 0xc) {
        if (cVar9 != '\0') {
          uVar14 = 0xffff;
          goto LAB_1451dab8c;
        }
        if (uVar13 < uVar15) {
          pbVar5 = (byte *)((ulonglong)uVar13 + local_160);
        }
        else {
          pbVar5 = &DAT_149a1f1a0;
          local_14c = '\x01';
          cVar9 = cVar11;
        }
        uVar14 = *pbVar5 + 0x100;
        if ((cVar9 == '\0') && (uVar8 <= uVar15)) goto LAB_1451dab5b;
      }
      else {
        uVar13 = uVar8;
        if (cVar9 == '\0') {
LAB_1451dab5b:
          if ((uVar13 <= uVar15) && (uVar8 = uVar13 + 1, local_150 = uVar8, uVar8 <= uVar15))
          goto LAB_1451dab8c;
        }
      }
      local_14c = '\x01';
      cVar9 = cVar11;
      uVar8 = uVar15;
      local_150 = uVar15;
    }
    else {
      uVar14 = 0xb;
      if (local_ec == 0) {
        uVar14 = 0xe;
      }
    }
LAB_1451dab8c:
    if (uVar14 == 10) {
LAB_1451dad32:
      if (iVar12 == 0) {
        local_148 = '\x01';
        puVar7 = (undefined4 *)&DAT_149a1f1a0;
      }
      else if (iVar12 - 1U < (uint)local_140) {
        puVar7 = (undefined4 *)((ulonglong)(iVar12 - 1U) * 0x20 + local_138);
      }
      else {
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        puVar7 = &DAT_14c793f60;
        DAT_14c793f70 = 0;
        DAT_14c793f74 = 0;
        DAT_14c793f78 = 0;
        _DAT_14c793f7c = 0;
      }
      if (puVar7[4] == 0) {
LAB_1451dabb2:
        FUN_1451df620(uVar14,local_168,local_68);
        cVar9 = local_14c;
        uVar8 = local_150;
        uVar15 = local_158;
        iVar12 = local_144;
      }
      else {
        local_130 = '\x01';
      }
    }
    else if (uVar14 == 0xf) {
      if (iVar12 == 0) {
        local_148 = '\x01';
        puVar7 = (undefined4 *)&DAT_149a1f1a0;
      }
      else if (iVar12 - 1U < (uint)local_140) {
        puVar7 = (undefined4 *)((ulonglong)(iVar12 - 1U) * 0x20 + local_138);
      }
      else {
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        puVar7 = &DAT_14c793f60;
        DAT_14c793f70 = 0;
        DAT_14c793f74 = 0;
        DAT_14c793f78 = 0;
        _DAT_14c793f7c = 0;
      }
      if (puVar7[4] == 0) {
        if (iVar12 == 0) {
          local_148 = '\x01';
LAB_1451daccd:
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f70 = 0;
          DAT_14c793f74 = 0;
          DAT_14c793f78 = 0;
          _DAT_14c793f7c = 0;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
        }
        else {
          if ((uint)local_140 <= iVar12 - 1U) goto LAB_1451daccd;
          pdVar6 = (double *)((ulonglong)(iVar12 - 1U) * 0x20 + local_138);
        }
        uVar13 = (uint)*pdVar6;
        if ((int)uVar13 < 0) {
          local_148 = '\x01';
        }
        if ((local_77 == '\0') && (local_76 == '\0')) {
          local_77 = '\x01';
          local_144 = 0;
          local_8c = 0;
          iVar12 = 0;
          if (-1 < (int)uVar13) {
            local_8c = uVar13;
          }
        }
        else {
          local_130 = '\x01';
          local_77 = '\x01';
          local_144 = 0;
          iVar12 = 0;
        }
      }
      else {
        local_130 = '\x01';
      }
    }
    else {
      if (uVar14 != 0x10) {
        if (uVar14 == 0x1d) goto LAB_1451dad32;
        goto LAB_1451dabb2;
      }
      FUN_1451dfae0(local_168,local_68);
      cVar9 = local_14c;
      uVar8 = local_150;
      uVar15 = local_158;
      iVar12 = local_144;
    }
    dVar3 = local_50;
    if ((((local_f0 != '\0') || (local_e8 < 0)) || (local_130 != '\0')) ||
       (((cVar9 != '\0' || (local_148 != '\0')) || (local_140 < 0)))) {
      uVar10 = 0;
      goto LAB_1451dadee;
    }
    if (local_100 != '\0') {
      if (local_60 < local_50) {
        dVar2 = floor(local_60);
        *param_4 = (int)dVar2;
        dVar3 = ceil(dVar3);
        param_4[2] = (int)dVar3 - (int)dVar2;
      }
      else {
        param_4[2] = 0;
        *param_4 = 0;
      }
      dVar3 = dStack_58;
      if (dStack_58 < dStack_48) {
        dVar2 = ceil(dStack_48);
        param_4[1] = (int)dVar2;
        dVar3 = floor(dVar3);
        uVar10 = 1;
        param_4[3] = (int)dVar3 - (int)dVar2;
      }
      else {
        uVar10 = 1;
        param_4[3] = 0;
        param_4[1] = 0;
      }
LAB_1451dadee:
      if (local_80 != 0) {
        thunk_FUN_1400020a8();
      }
      local_88 = 0;
      local_80 = 0;
      FUN_1451db000(&local_140);
      if (local_e0 != 0) {
        thunk_FUN_1400020a8();
      }
      local_e8 = 0;
      local_e0 = 0;
      FUN_1451db990(local_168);
      return uVar10;
    }
  } while( true );
}



// FUNCTION 1451dae70 FUN_1451dae70 body=202 status=ok
// SIG undefined FUN_1451dae70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dae70(longlong param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,
                  longlong param_5)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  puVar1 = (uint *)(param_1 + 0x10);
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  uVar9 = (uint)param_4;
  uVar8 = param_4 & 0xffffffff;
  if ((int)uVar9 < 0) {
    uVar8 = uVar7;
  }
  uVar6 = (uint)uVar8;
  cVar3 = FUN_144e32cc0(puVar1);
  if (cVar3 != '\0') {
    uVar2 = *puVar1;
    if (uVar2 < uVar6) {
      memset((void *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 8),0,
             (ulonglong)(uVar6 - uVar2) << 3);
    }
    *puVar1 = uVar6;
  }
  if (uVar9 != 0) {
    do {
      uVar6 = (uint)uVar7;
      if (uVar6 < *(uint *)(param_5 + 0x10)) {
        puVar5 = (undefined8 *)(uVar7 * 0x20 + *(longlong *)(param_5 + 8));
      }
      else {
        puVar5 = (undefined8 *)&DAT_149a1f1a0;
      }
      if (uVar6 < *puVar1) {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar7 * 8);
      }
      else {
        _DAT_14c793f60 = 0;
        puVar4 = (undefined8 *)&DAT_14c793f60;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      *puVar4 = *puVar5;
    } while (uVar6 + 1 < uVar9);
  }
  return;
}



// FUNCTION 1451daf40 FUN_1451daf40 body=178 status=ok
// SIG undefined FUN_1451daf40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451daf40(undefined1 *param_1)

{
  uint *puVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (uint *)(param_1 + 8);
  *param_1 = 0;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  cVar2 = FUN_1451db080(puVar1);
  if (cVar2 != '\0') {
    uVar4 = *puVar1;
    if (uVar4 < 0x201) {
      memset((void *)((ulonglong)uVar4 * 0x20 + *(longlong *)(param_1 + 0x10)),0,
             (ulonglong)(0x201 - uVar4) << 5);
    }
    *puVar1 = 0x201;
  }
  if (*puVar1 != 0) {
    if (*puVar1 != 0) goto LAB_1451dafcc;
    puVar3 = (undefined8 *)&DAT_14c793f60;
    _DAT_14c793f60 = 0;
    _DAT_14c793f68 = 0;
    _DAT_14c793f70 = 0;
    _DAT_14c793f78 = 0;
    while( true ) {
      *puVar3 = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      puVar3[2] = 0;
      puVar3[3] = 0;
      if (*puVar1 <= uVar4) break;
LAB_1451dafcc:
      puVar3 = (undefined8 *)(uVar5 * 0x20 + *(longlong *)(param_1 + 0x10));
    }
  }
  return;
}



// FUNCTION 1451db000 FUN_1451db000 body=120 status=ok
// SIG undefined FUN_1451db000(void)

void FUN_1451db000(uint *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*param_1 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 2) + 0x18);
    uVar2 = (ulonglong)*param_1;
    do {
      if (*plVar1 != 0) {
        thunk_FUN_1400020a8();
      }
      plVar1[-1] = 0;
      *plVar1 = 0;
      plVar1 = plVar1 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    thunk_FUN_1400020a8();
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 1451db080 FUN_1451db080 body=137 status=ok
// SIG undefined FUN_1451db080(void)

undefined8 FUN_1451db080(longlong param_1,uint param_2)

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
    if ((((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x7ffffff)) &&
       (lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),(ulonglong)uVar3 << 5), lVar2 != 0)) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return 0;
  }
  return 1;
}



// FUNCTION 1451db110 FUN_1451db110 body=149 status=ok
// SIG undefined FUN_1451db110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451db110(undefined1 *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  double *pdVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 < *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 4) = uVar1 + 1;
    if (uVar1 < *(uint *)(param_1 + 8)) {
      pdVar3 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x10));
      goto LAB_1451db16b;
    }
  }
  else {
    *param_1 = 1;
  }
  pdVar3 = (double *)&DAT_14c793f60;
  DAT_14c793f70 = 0;
  DAT_14c793f74 = 0;
  DAT_14c793f78 = 0;
  _DAT_14c793f7c = 0;
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
LAB_1451db16b:
  pdVar3[1] = 0.0;
  cVar2 = FUN_144e32cc0(pdVar3 + 2,0);
  if (cVar2 != '\0') {
    *(undefined4 *)(pdVar3 + 2) = 0;
  }
  *pdVar3 = (double)param_2;
  return;
}



// FUNCTION 1451db1b0 FUN_1451db1b0 body=157 status=ok
// SIG undefined FUN_1451db1b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451db1b0(undefined1 *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  double *pdVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 < *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 4) = uVar1 + 1;
    if (uVar1 < *(uint *)(param_1 + 8)) {
      pdVar3 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x10));
      goto LAB_1451db20b;
    }
  }
  else {
    *param_1 = 1;
  }
  pdVar3 = (double *)&DAT_14c793f60;
  DAT_14c793f70 = 0;
  DAT_14c793f74 = 0;
  DAT_14c793f78 = 0;
  _DAT_14c793f7c = 0;
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
LAB_1451db20b:
  pdVar3[1] = 0.0;
  cVar2 = FUN_144e32cc0(pdVar3 + 2,0);
  if (cVar2 != '\0') {
    *(undefined4 *)(pdVar3 + 2) = 0;
  }
  *pdVar3 = (double)param_2 * 1.52587890625e-05;
  return;
}



// FUNCTION 1451db250 FUN_1451db250 body=145 status=ok
// SIG undefined FUN_1451db250(void)

ulonglong FUN_1451db250(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  byte *pbVar2;
  
  if (*(char *)(param_2 + 0x1c) != '\0') {
LAB_1451db2d9:
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  in_RAX = (ulonglong)(uVar1 + 4);
  if (*(uint *)(param_2 + 0x10) < uVar1 + 4) goto LAB_1451db2d9;
  if (uVar1 < *(uint *)(param_2 + 0x10)) {
    pbVar2 = (byte *)((ulonglong)uVar1 + *(longlong *)(param_2 + 8));
  }
  else {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    pbVar2 = &DAT_149a1f1a0;
  }
  FUN_1451db1b0(param_1,(((uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) * 0x100 + (uint)pbVar2[2]) *
                        0x100 + (uint)pbVar2[3]);
  if (*(char *)(param_2 + 0x1c) == '\0') {
    if ((*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x10)) &&
       (uVar1 = *(uint *)(param_2 + 0x18) + 4, uVar1 <= *(uint *)(param_2 + 0x10)))
    goto LAB_1451db2ce;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(undefined1 *)(param_2 + 0x1c) = 1;
LAB_1451db2ce:
  *(uint *)(param_2 + 0x18) = uVar1;
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}



// FUNCTION 1451db2f0 FUN_1451db2f0 body=336 status=ok
// SIG undefined FUN_1451db2f0(void)

void FUN_1451db2f0(longlong param_1,longlong param_2,byte *param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_1451daf40(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x38) = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x69) = 1;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_1451d6630(param_1 + 0x78);
  *(byte **)(param_1 + 0x98) = param_3;
  if ((param_3 == (byte *)0x0) ||
     (uVar3 = (((uint)*param_3 * 0x100 + (uint)param_3[1]) * 0x100 + (uint)param_3[2]) * 0x100 +
              (uint)param_3[3], uVar3 < 0x4d8)) {
    *(undefined4 *)(param_1 + 0x90) = 0x6b;
  }
  else {
    uVar2 = 0x8000;
    if (uVar3 < 0x846c) {
      uVar2 = 0x46b;
    }
    *(undefined4 *)(param_1 + 0x90) = uVar2;
  }
  *(byte **)(param_1 + 0xa8) = param_4;
  if ((param_4 == (byte *)0x0) ||
     (uVar3 = (((uint)*param_4 * 0x100 + (uint)param_4[1]) * 0x100 + (uint)param_4[2]) * 0x100 +
              (uint)param_4[3], uVar3 < 0x4d8)) {
    *(undefined4 *)(param_1 + 0xa0) = 0x6b;
  }
  else {
    uVar2 = 0x8000;
    if (uVar3 < 0x846c) {
      uVar2 = 0x46b;
    }
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
  }
  return;
}



// FUNCTION 1451db440 FUN_1451db440 body=379 status=ok
// SIG undefined FUN_1451db440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451db440(longlong param_1,int *param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  double *pdVar3;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x24) - 1;
    *(uint *)(param_1 + 0x24) = uVar2;
    if (uVar2 < *(uint *)(param_1 + 0x28)) {
      pdVar3 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      goto LAB_1451db4a0;
    }
  }
  pdVar3 = (double *)&DAT_14c793f60;
  DAT_14c793f70 = 0;
  DAT_14c793f74 = 0;
  DAT_14c793f78 = 0;
  _DAT_14c793f7c = 0;
  DAT_14c793f60 = 0;
  _DAT_14c793f64 = 0;
  DAT_14c793f68 = 0;
  DAT_14c793f6c = 0;
LAB_1451db4a0:
  uVar2 = (int)*pdVar3 + *param_2;
  if (((((int)uVar2 < 0) || (pbVar1 = *(byte **)(param_2 + 2), pbVar1 == (byte *)0x0)) ||
      ((((uint)*pbVar1 * 0x100 + (uint)pbVar1[1]) * 0x100 + (uint)pbVar1[2]) * 0x100 +
       (uint)pbVar1[3] <= uVar2)) || (9 < *(uint *)(param_1 + 0x7c))) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_1 + 0x1c);
    FUN_1451d6700(param_1 + 0x78,param_1 + 0x40);
    pbVar1 = *(byte **)(param_2 + 2);
    if ((pbVar1 == (byte *)0x0) ||
       ((uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)*pbVar1 * 0x1000000 +
        (uint)pbVar1[3] <= uVar2)) {
      local_20 = 0;
      local_18 = 0;
    }
    else {
      FUN_1451dfc90(pbVar1,local_28,uVar2);
    }
    *(undefined8 *)(param_1 + 0x48) = local_20;
    *(undefined4 *)(param_1 + 0x50) = local_18;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = param_3;
    *(uint *)(param_1 + 100) = uVar2;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_1 + 0x5c);
  }
  return;
}



// FUNCTION 1451db670 FUN_1451db670 body=106 status=ok
// SIG undefined FUN_1451db670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1451db670(longlong param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x24) - 1;
    *(uint *)(param_1 + 0x24) = uVar1;
    if (uVar1 < *(uint *)(param_1 + 0x28)) {
      puVar2 = (undefined4 *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
      FUN_1451db7a0(param_1,puVar2);
      return puVar2;
    }
  }
  DAT_14c793f70 = 0;
  DAT_14c793f74 = 0;
  DAT_14c793f78 = 0;
  _DAT_14c793f7c = 0;
  DAT_14c793f60 = 0;
  _DAT_14c793f64 = 0;
  DAT_14c793f68 = 0;
  DAT_14c793f6c = 0;
  FUN_1451db7a0(0,&DAT_14c793f60);
  return &DAT_14c793f60;
}



// FUNCTION 1451db6e0 FUN_1451db6e0 body=184 status=ok
// SIG undefined FUN_1451db6e0(void)

void FUN_1451db6e0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 0xf2) == '\0') {
    uVar1 = FUN_1451da690(*(longlong *)(param_1 + 0xd0) + 2,*(undefined4 *)(param_1 + 0xdc));
    *(undefined4 *)(param_1 + 0xd8) = uVar1;
    if (*(char *)(param_1 + 0xf0) != '\0') {
      FUN_1451db930(param_1 + 0xe0,uVar1);
      if (*(int *)(param_1 + 0xe0) == 0) {
        puVar2 = &DAT_14c793f60;
        DAT_14c793f60 = 0;
      }
      else {
        puVar2 = *(undefined4 **)(param_1 + 0xe8);
      }
      FUN_1451da720(*(longlong *)(param_1 + 0xd0) + 2,*(undefined4 *)(param_1 + 0xdc),
                    *(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200),puVar2,
                    *(undefined4 *)(param_1 + 0xd8));
    }
    *(undefined1 *)(param_1 + 0xf2) = 1;
  }
  return;
}



// FUNCTION 1451db7a0 FUN_1451db7a0 body=248 status=ok
// SIG undefined FUN_1451db7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451db7a0(longlong param_1,double *param_2)

{
  double dVar1;
  char cVar2;
  double *pdVar3;
  ulonglong uVar4;
  uint uVar5;
  float *pfVar6;
  
  if (((*(char *)(param_1 + 0xf0) != '\0') && (*(int *)(param_2 + 2) != 0)) &&
     (*(int *)(param_1 + 0xe0) == *(int *)(param_2 + 2))) {
    uVar4 = 0;
    dVar1 = *param_2;
    if (*(int *)(param_1 + 0xe0) != 0) {
      if (*(int *)(param_1 + 0xe0) != 0) goto LAB_1451db810;
      _DAT_14c793f60 = _DAT_14c793f60 & 0xffffffff00000000;
      pfVar6 = (float *)&DAT_14c793f60;
      while( true ) {
        if ((uint)uVar4 < *(uint *)(param_2 + 2)) {
          pdVar3 = (double *)((longlong)param_2[3] + uVar4 * 8);
        }
        else {
          _DAT_14c793f60 = 0;
          pdVar3 = (double *)&DAT_14c793f60;
        }
        uVar5 = (uint)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
        dVar1 = dVar1 + (double)*pfVar6 * *pdVar3;
        if (*(uint *)(param_1 + 0xe0) <= uVar5) break;
LAB_1451db810:
        pfVar6 = (float *)(*(longlong *)(param_1 + 0xe8) + uVar4 * 4);
      }
    }
    param_2[1] = 0.0;
    cVar2 = FUN_144e32cc0(param_2 + 2,0);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_2 + 2) = 0;
    }
    *param_2 = dVar1;
    cVar2 = FUN_144e32cc0(param_2 + 2,0);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_2 + 2) = 0;
    }
  }
  return;
}



// FUNCTION 1451db8a0 FUN_1451db8a0 body=137 status=ok
// SIG undefined FUN_1451db8a0(void)

undefined8 FUN_1451db8a0(longlong param_1,uint param_2)

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
    if ((((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x3fffffff)) &&
       (lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),(ulonglong)uVar3 << 2), lVar2 != 0)) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return 0;
  }
  return 1;
}



// FUNCTION 1451db930 FUN_1451db930 body=90 status=ok
// SIG undefined FUN_1451db930(void)

undefined1 FUN_1451db930(uint *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  cVar2 = FUN_1451db8a0();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar1 = *param_1;
  if (uVar1 < param_2) {
    memset((void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 4),0,
           (ulonglong)(param_2 - uVar1) << 2);
  }
  *param_1 = param_2;
  return 1;
}



// FUNCTION 1451db990 FUN_1451db990 body=110 status=ok
// SIG undefined FUN_1451db990(void)

void FUN_1451db990(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1451dba00 FUN_1451dba00 body=106 status=ok
// SIG undefined FUN_1451dba00(void)

void FUN_1451dba00(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  
  dVar3 = *(double *)(param_1 + 0xb0);
  dVar6 = *(double *)(param_1 + 0xb8);
  pdVar4 = (double *)FUN_1451db670(param_1,param_2,param_3,param_4,dVar3);
  pdVar5 = (double *)FUN_1451db670(param_1);
  dVar6 = dVar6 + *pdVar4;
  dVar1 = *pdVar5;
  *param_2 = 0;
  auVar2._8_4_ = SUB84(dVar6,0);
  auVar2._0_8_ = dVar3 + dVar1;
  auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xb0) = auVar2;
  return;
}



// FUNCTION 1451dba70 FUN_1451dba70 body=79 status=ok
// SIG undefined FUN_1451dba70(void)

void FUN_1451dba70(longlong param_1,undefined1 *param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double *pdVar4;
  
  dVar2 = *(double *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  pdVar4 = (double *)FUN_1451db670();
  dVar1 = *pdVar4;
  *param_2 = 0;
  *(double *)(param_1 + 0xb0) = dVar2 + dVar1;
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  return;
}



// FUNCTION 1451dbac0 FUN_1451dbac0 body=83 status=ok
// SIG undefined FUN_1451dbac0(void)

void FUN_1451dbac0(longlong param_1,undefined1 *param_2)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double *pdVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  dVar3 = *(double *)(param_1 + 0xb8);
  pdVar4 = (double *)FUN_1451db670();
  dVar1 = *pdVar4;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(double *)(param_1 + 0xb8) = dVar3 + dVar1;
  return;
}



// FUNCTION 1451dbb20 FUN_1451dbb20 body=306 status=ok
// SIG undefined FUN_1451dbb20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dbb20(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  double local_28;
  double dStack_20;
  
  if (1 < *(uint *)(param_1 + 0x24)) {
    uVar2 = 1;
    do {
      local_28 = *(double *)(param_1 + 0xb0);
      dStack_20 = *(double *)(param_1 + 0xb8);
      if (*(uint *)(param_1 + 0x24) <= uVar2) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar2 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      uVar1 = uVar2 - 1;
      if (*(uint *)(param_1 + 0x24) <= uVar1) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar1 < *(uint *)(param_1 + 0x28)) {
        pdVar3 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar3 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar3);
      local_28 = local_28 + *pdVar3;
      dStack_20 = dStack_20 + *pdVar4;
      FUN_1451df1f0(param_1,param_2,&local_28);
      uVar1 = uVar2 + 3;
      uVar2 = uVar2 + 2;
    } while (uVar1 <= *(uint *)(param_1 + 0x24));
  }
  return;
}



// FUNCTION 1451dbc60 FUN_1451dbc60 body=429 status=ok
// SIG undefined FUN_1451dbc60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dbc60(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  double *pdVar2;
  uint uVar3;
  double *pdVar4;
  uint uVar5;
  double local_28;
  double dStack_20;
  
  uVar3 = 0;
  pdVar2 = (double *)&DAT_14c793f60;
  if (1 < *(uint *)(param_1 + 0x24)) {
    uVar5 = 1;
    do {
      local_28 = *(double *)(param_1 + 0xb0);
      dStack_20 = *(double *)(param_1 + 0xb8);
      if (*(uint *)(param_1 + 0x24) <= uVar3) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar3 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      local_28 = local_28 + *pdVar4;
      FUN_1451df1f0(param_1,param_2,&local_28);
      if (*(uint *)(param_1 + 0x24) <= uVar5) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar5 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar5 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      dStack_20 = dStack_20 + *pdVar4;
      FUN_1451df1f0(param_1,param_2,&local_28);
      uVar3 = uVar3 + 2;
      uVar1 = uVar5 + 3;
      uVar5 = uVar5 + 2;
    } while (uVar1 <= *(uint *)(param_1 + 0x24));
  }
  if (uVar3 < *(uint *)(param_1 + 0x24)) {
    local_28 = *(double *)(param_1 + 0xb0);
    dStack_20 = *(double *)(param_1 + 0xb8);
    if (uVar3 < *(uint *)(param_1 + 0x28)) {
      pdVar2 = (double *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x30));
    }
    else {
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    FUN_1451db7a0(param_1,pdVar2);
    local_28 = local_28 + *pdVar2;
    FUN_1451df1f0(param_1,param_2,&local_28);
  }
  return;
}



// FUNCTION 1451dbe10 FUN_1451dbe10 body=429 status=ok
// SIG undefined FUN_1451dbe10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dbe10(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  double *pdVar2;
  uint uVar3;
  double *pdVar4;
  uint uVar5;
  double local_28;
  double dStack_20;
  
  uVar3 = 0;
  pdVar2 = (double *)&DAT_14c793f60;
  if (1 < *(uint *)(param_1 + 0x24)) {
    uVar5 = 1;
    do {
      local_28 = *(double *)(param_1 + 0xb0);
      dStack_20 = *(double *)(param_1 + 0xb8);
      if (*(uint *)(param_1 + 0x24) <= uVar3) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar3 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      dStack_20 = dStack_20 + *pdVar4;
      FUN_1451df1f0(param_1,param_2,&local_28);
      if (*(uint *)(param_1 + 0x24) <= uVar5) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar5 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar5 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      local_28 = local_28 + *pdVar4;
      FUN_1451df1f0(param_1,param_2,&local_28);
      uVar3 = uVar3 + 2;
      uVar1 = uVar5 + 3;
      uVar5 = uVar5 + 2;
    } while (uVar1 <= *(uint *)(param_1 + 0x24));
  }
  if (uVar3 < *(uint *)(param_1 + 0x24)) {
    local_28 = *(double *)(param_1 + 0xb0);
    dStack_20 = *(double *)(param_1 + 0xb8);
    if (uVar3 < *(uint *)(param_1 + 0x28)) {
      pdVar2 = (double *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x30));
    }
    else {
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    FUN_1451db7a0(param_1,pdVar2);
    dStack_20 = dStack_20 + *pdVar2;
    FUN_1451df1f0(param_1,param_2,&local_28);
  }
  return;
}



// FUNCTION 1451dbfc0 FUN_1451dbfc0 body=681 status=ok
// SIG undefined FUN_1451dbfc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dbfc0(longlong param_1,undefined8 param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  if (5 < *(uint *)(param_1 + 0x24)) {
    uVar3 = 3;
    do {
      local_48 = *(undefined1 (*) [16])(param_1 + 0xb0);
      uVar2 = uVar3 - 2;
      if (*(uint *)(param_1 + 0x24) <= uVar2) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar2 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      uVar2 = uVar3 - 3;
      if (*(uint *)(param_1 + 0x24) <= uVar2) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar2 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      dVar1 = (double)local_48._0_8_ + *pdVar4;
      uVar6 = SUB84((double)local_48._8_8_ + *pdVar5,0);
      uVar7 = (undefined4)((ulonglong)((double)local_48._8_8_ + *pdVar5) >> 0x20);
      local_48._8_4_ = uVar6;
      local_48._0_8_ = dVar1;
      local_48._12_4_ = uVar7;
      local_38._8_4_ = uVar6;
      local_38._0_8_ = dVar1;
      local_38._12_4_ = uVar7;
      if (*(uint *)(param_1 + 0x24) <= uVar3) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar3 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      uVar2 = uVar3 - 1;
      if (*(uint *)(param_1 + 0x24) <= uVar2) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar2 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      uVar2 = uVar3 + 2;
      dVar1 = dVar1 + *pdVar4;
      uVar6 = SUB84((double)local_38._8_8_ + *pdVar5,0);
      uVar7 = (undefined4)((ulonglong)((double)local_38._8_8_ + *pdVar5) >> 0x20);
      local_38._8_4_ = uVar6;
      local_38._0_8_ = dVar1;
      local_38._12_4_ = uVar7;
      local_58._8_4_ = uVar6;
      local_58._0_8_ = dVar1;
      local_58._12_4_ = uVar7;
      if (*(uint *)(param_1 + 0x24) <= uVar2) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar2 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      uVar2 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x24) <= uVar2) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar2 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      local_58._8_8_ = (double)local_58._8_8_ + *pdVar5;
      local_58._0_8_ = dVar1 + *pdVar4;
      FUN_1451df2f0(param_1,param_2,local_48,local_38,local_58);
      uVar2 = uVar3 + 9;
      uVar3 = uVar3 + 6;
    } while (uVar2 <= *(uint *)(param_1 + 0x24));
  }
  return;
}



// FUNCTION 1451dc270 FUN_1451dc270 body=933 status=ok
// SIG undefined FUN_1451dc270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dc270(longlong param_1,undefined8 param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  uVar6 = 0;
  if (5 < *(uint *)(param_1 + 0x24)) {
    uVar3 = 3;
    do {
      local_48 = *(undefined1 (*) [16])(param_1 + 0xb0);
      uVar2 = uVar3 - 2;
      if (*(uint *)(param_1 + 0x24) <= uVar2) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar2 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      if (*(uint *)(param_1 + 0x24) <= uVar6) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar6 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar6 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      dVar1 = (double)local_48._0_8_ + *pdVar4;
      uVar7 = SUB84((double)local_48._8_8_ + *pdVar5,0);
      uVar8 = (undefined4)((ulonglong)((double)local_48._8_8_ + *pdVar5) >> 0x20);
      local_48._8_4_ = uVar7;
      local_48._0_8_ = dVar1;
      local_48._12_4_ = uVar8;
      local_38._8_4_ = uVar7;
      local_38._0_8_ = dVar1;
      local_38._12_4_ = uVar8;
      if (*(uint *)(param_1 + 0x24) <= uVar3) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar3 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      uVar2 = uVar3 - 1;
      if (*(uint *)(param_1 + 0x24) <= uVar2) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar2 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      uVar2 = uVar3 + 2;
      dVar1 = dVar1 + *pdVar4;
      uVar7 = SUB84((double)local_38._8_8_ + *pdVar5,0);
      uVar8 = (undefined4)((ulonglong)((double)local_38._8_8_ + *pdVar5) >> 0x20);
      local_38._8_4_ = uVar7;
      local_38._0_8_ = dVar1;
      local_38._12_4_ = uVar8;
      local_58._8_4_ = uVar7;
      local_58._0_8_ = dVar1;
      local_58._12_4_ = uVar8;
      if (*(uint *)(param_1 + 0x24) <= uVar2) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar2 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      uVar2 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x24) <= uVar2) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar2 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      local_58._8_8_ = (double)local_58._8_8_ + *pdVar5;
      local_58._0_8_ = dVar1 + *pdVar4;
      FUN_1451df2f0(param_1,param_2,local_48,local_38,local_58);
      uVar6 = uVar6 + 6;
      uVar2 = uVar3 + 9;
      uVar3 = uVar3 + 6;
    } while (uVar2 <= *(uint *)(param_1 + 0x24));
  }
  if (uVar6 + 2 <= *(uint *)(param_1 + 0x24)) {
    uVar6 = uVar6 + 1;
    do {
      local_58 = *(undefined1 (*) [16])(param_1 + 0xb0);
      if (*(uint *)(param_1 + 0x24) <= uVar6) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar6 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar6 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      uVar3 = uVar6 - 1;
      if (*(uint *)(param_1 + 0x24) <= uVar3) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar3 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      local_58._8_8_ = (double)local_58._8_8_ + *pdVar5;
      local_58._0_8_ = (double)local_58._0_8_ + *pdVar4;
      FUN_1451df1f0(param_1,param_2,local_58);
      uVar3 = uVar6 + 3;
      uVar6 = uVar6 + 2;
    } while (uVar3 <= *(uint *)(param_1 + 0x24));
  }
  return;
}



// FUNCTION 1451dc620 FUN_1451dc620 body=936 status=ok
// SIG undefined FUN_1451dc620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dc620(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  uVar3 = 0;
  uVar7 = *(uint *)(param_1 + 0x24) % 6;
  if (1 < uVar7) {
    uVar6 = 1;
    do {
      local_68 = *(undefined1 (*) [16])(param_1 + 0xb0);
      if (*(uint *)(param_1 + 0x24) <= uVar6) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar6 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar6 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      if (*(uint *)(param_1 + 0x24) <= uVar3) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar3 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      local_68._8_8_ = (double)local_68._8_8_ + *pdVar5;
      local_68._0_8_ = (double)local_68._0_8_ + *pdVar4;
      FUN_1451df1f0(param_1,param_2,local_68);
      uVar3 = uVar3 + 2;
      uVar1 = uVar6 + 3;
      uVar6 = uVar6 + 2;
    } while (uVar1 <= uVar7);
  }
  if (uVar3 + 6 <= *(uint *)(param_1 + 0x24)) {
    uVar3 = uVar3 + 3;
    do {
      local_58 = *(undefined1 (*) [16])(param_1 + 0xb0);
      uVar7 = uVar3 - 2;
      if (*(uint *)(param_1 + 0x24) <= uVar7) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar7 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar7 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      uVar7 = uVar3 - 3;
      if (*(uint *)(param_1 + 0x24) <= uVar7) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar7 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar7 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      dVar2 = (double)local_58._0_8_ + *pdVar4;
      uVar8 = SUB84((double)local_58._8_8_ + *pdVar5,0);
      uVar9 = (undefined4)((ulonglong)((double)local_58._8_8_ + *pdVar5) >> 0x20);
      local_58._8_4_ = uVar8;
      local_58._0_8_ = dVar2;
      local_58._12_4_ = uVar9;
      local_48._8_4_ = uVar8;
      local_48._0_8_ = dVar2;
      local_48._12_4_ = uVar9;
      if (*(uint *)(param_1 + 0x24) <= uVar3) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar3 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      uVar7 = uVar3 - 1;
      if (*(uint *)(param_1 + 0x24) <= uVar7) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar7 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar7 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      uVar7 = uVar3 + 2;
      dVar2 = dVar2 + *pdVar4;
      uVar8 = SUB84((double)local_48._8_8_ + *pdVar5,0);
      uVar9 = (undefined4)((ulonglong)((double)local_48._8_8_ + *pdVar5) >> 0x20);
      local_48._8_4_ = uVar8;
      local_48._0_8_ = dVar2;
      local_48._12_4_ = uVar9;
      local_68._8_4_ = uVar8;
      local_68._0_8_ = dVar2;
      local_68._12_4_ = uVar9;
      if (*(uint *)(param_1 + 0x24) <= uVar7) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar7 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar7 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      uVar7 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x24) <= uVar7) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar7 < *(uint *)(param_1 + 0x28)) {
        pdVar4 = (double *)((ulonglong)uVar7 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar4 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar4);
      local_68._8_8_ = (double)local_68._8_8_ + *pdVar5;
      local_68._0_8_ = dVar2 + *pdVar4;
      FUN_1451df2f0(param_1,param_2,local_58,local_48,local_68);
      uVar7 = uVar3 + 9;
      uVar3 = uVar3 + 6;
    } while (uVar7 <= *(uint *)(param_1 + 0x24));
  }
  return;
}



// FUNCTION 1451dc9d0 FUN_1451dc9d0 body=633 status=ok
// SIG undefined FUN_1451dc9d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dc9d0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  pauVar2 = (undefined1 (*) [16])(param_1 + 0xb0);
  uVar9 = *(undefined4 *)*pauVar2;
  iVar5 = 0;
  local_68 = *pauVar2;
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    local_68._0_8_ = SUB128(*(undefined1 (*) [12])*pauVar2,0);
    dVar4 = (double)local_68._0_8_;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar9 = 0;
      pdVar8 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar8 = *(double **)(param_1 + 0x30);
    }
    FUN_1451db7a0(uVar9,pdVar8);
    iVar5 = 1;
    dVar4 = (double)local_68._0_8_ + *pdVar8;
  }
  if (iVar5 + 4U <= *(uint *)(param_1 + 0x24)) {
    uVar6 = iVar5 + 1;
    while( true ) {
      uVar1 = uVar6 - 1;
      if (*(uint *)(param_1 + 0x24) <= uVar1) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar1 < *(uint *)(param_1 + 0x28)) {
        pdVar8 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar8 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar8);
      uVar1 = uVar6 + 1;
      uVar9 = SUB84((double)local_68._8_8_ + *pdVar8,0);
      uVar10 = (undefined4)((ulonglong)((double)local_68._8_8_ + *pdVar8) >> 0x20);
      local_68._8_4_ = uVar9;
      local_68._0_8_ = dVar4;
      local_68._12_4_ = uVar10;
      local_58._8_4_ = uVar9;
      local_58._0_8_ = dVar4;
      local_58._12_4_ = uVar10;
      if (*(uint *)(param_1 + 0x24) <= uVar1) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar1 < *(uint *)(param_1 + 0x28)) {
        pdVar8 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar8 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar8);
      if (*(uint *)(param_1 + 0x24) <= uVar6) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar6 < *(uint *)(param_1 + 0x28)) {
        pdVar7 = (double *)((ulonglong)uVar6 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar7 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar7);
      uVar1 = uVar6 + 2;
      dVar3 = (double)local_58._8_8_ + *pdVar8;
      uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
      local_58._8_4_ = SUB84(dVar3,0);
      local_58._0_8_ = dVar4 + *pdVar7;
      local_58._12_4_ = uVar9;
      local_48._8_4_ = SUB84(dVar3,0);
      local_48._0_8_ = dVar4 + *pdVar7;
      local_48._12_4_ = uVar9;
      if (*(uint *)(param_1 + 0x24) <= uVar1) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar1 < *(uint *)(param_1 + 0x28)) {
        pdVar8 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar8 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar8);
      local_48._8_8_ = dVar3 + *pdVar8;
      FUN_1451df2f0(param_1,param_2,local_68,local_58,local_48);
      if (*(uint *)(param_1 + 0x24) < uVar6 + 7) break;
      local_68._0_8_ = SUB128(*(undefined1 (*) [12])*(undefined1 (*) [16])(param_1 + 0xb0),0);
      uVar6 = uVar6 + 4;
      dVar4 = (double)local_68._0_8_;
      local_68 = *(undefined1 (*) [16])(param_1 + 0xb0);
    }
  }
  return;
}



// FUNCTION 1451dcc50 FUN_1451dcc50 body=601 status=ok
// SIG undefined FUN_1451dcc50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dcc50(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double local_58;
  undefined8 uStack_50;
  undefined1 local_48 [12];
  undefined4 uStack_3c;
  undefined1 local_38 [2] [16];
  
  uVar7 = *(undefined4 *)(param_1 + 0xb0);
  local_58 = *(double *)(param_1 + 0xb0);
  uStack_50 = *(double *)(param_1 + 0xb8);
  iVar3 = 0;
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar7 = 0;
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = *(double **)(param_1 + 0x30);
    }
    FUN_1451db7a0(uVar7,pdVar6);
    iVar3 = 1;
    uStack_50 = uStack_50 + *pdVar6;
  }
  if (iVar3 + 4U <= *(uint *)(param_1 + 0x24)) {
    uVar4 = iVar3 + 1;
    do {
      uVar1 = uVar4 - 1;
      if (*(uint *)(param_1 + 0x24) <= uVar1) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar1 < *(uint *)(param_1 + 0x28)) {
        pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar6 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar6);
      uVar1 = uVar4 + 1;
      dVar2 = local_58 + *pdVar6;
      local_48._8_4_ = (undefined4)uStack_50;
      local_48._0_8_ = dVar2;
      uStack_3c = uStack_50._4_4_;
      if (*(uint *)(param_1 + 0x24) <= uVar1) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar1 < *(uint *)(param_1 + 0x28)) {
        pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar6 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      local_58 = dVar2;
      FUN_1451db7a0(param_1,pdVar6);
      if (*(uint *)(param_1 + 0x24) <= uVar4) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar4 < *(uint *)(param_1 + 0x28)) {
        pdVar5 = (double *)((ulonglong)uVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar5 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar5);
      uVar1 = uVar4 + 2;
      dVar2 = dVar2 + *pdVar5;
      uVar7 = SUB84(stack0xffffffffffffffc0 + *pdVar6,0);
      uVar8 = (undefined4)((ulonglong)(stack0xffffffffffffffc0 + *pdVar6) >> 0x20);
      local_48._8_4_ = uVar7;
      local_48._0_8_ = dVar2;
      uStack_3c = uVar8;
      local_38[0]._8_4_ = uVar7;
      local_38[0]._0_8_ = dVar2;
      local_38[0]._12_4_ = uVar8;
      if (*(uint *)(param_1 + 0x24) <= uVar1) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar1 < *(uint *)(param_1 + 0x28)) {
        pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar6 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar6);
      local_38[0]._0_8_ = dVar2 + *pdVar6;
      FUN_1451df2f0(param_1,param_2,&local_58,local_48,local_38);
      local_58 = *(double *)(param_1 + 0xb0);
      uStack_50 = *(double *)(param_1 + 0xb8);
      uVar1 = uVar4 + 7;
      uVar4 = uVar4 + 4;
    } while (uVar1 <= *(uint *)(param_1 + 0x24));
  }
  return;
}



// FUNCTION 1451dceb0 FUN_1451dceb0 body=2313 status=ok
// SIG undefined FUN_1451dceb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dceb0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_78 [12];
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  
  if (((byte)*(uint *)(param_1 + 0x24) & 7) < 4) {
    if (7 < *(uint *)(param_1 + 0x24)) {
      uVar8 = 1;
      do {
        _local_58 = *(undefined1 (*) [16])(param_1 + 0xb0);
        uVar9 = uVar8 - 1;
        if (*(uint *)(param_1 + 0x24) <= uVar9) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar9 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar9 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar7);
        uVar1 = uVar8 + 1;
        dVar2 = stack0xffffffffffffffb0 + *pdVar7;
        stack0xffffffffffffffb0 = dVar2;
        auVar4 = _local_58;
        local_58._8_4_ = SUB84(dVar2,0);
        uStack_4c = (undefined4)((ulonglong)dVar2 >> 0x20);
        local_78._8_4_ = local_58._8_4_;
        local_78._0_8_ = local_58._0_8_;
        uStack_6c = uStack_4c;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        _local_58 = auVar4;
        FUN_1451db7a0(param_1,pdVar7);
        if (*(uint *)(param_1 + 0x24) <= uVar8) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar8 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar8 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        uVar1 = uVar8 + 2;
        dVar2 = (double)local_58._0_8_ + *pdVar6;
        uVar11 = SUB84(stack0xffffffffffffff90 + *pdVar7,0);
        uVar12 = (undefined4)((ulonglong)(stack0xffffffffffffff90 + *pdVar7) >> 0x20);
        local_78._8_4_ = uVar11;
        local_78._0_8_ = dVar2;
        uStack_6c = uVar12;
        local_68._8_4_ = uVar11;
        local_68._0_8_ = dVar2;
        local_68._12_4_ = uVar12;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar7);
        dVar3 = *pdVar7;
        local_68._0_8_ = dVar2 + dVar3;
        FUN_1451df2f0(param_1,param_2,local_58,local_78,local_68);
        uVar1 = uVar8 + 3;
        _local_58 = local_68;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar7);
        auVar4 = _local_58;
        dVar2 = dVar2 + dVar3 + *pdVar7;
        uVar1 = uVar8 + 5;
        local_58._0_8_ = dVar2;
        auVar5 = _local_58;
        local_58._8_4_ = auVar4._8_4_;
        uStack_4c = auVar4._12_4_;
        local_78._8_4_ = local_58._8_4_;
        local_78._0_8_ = dVar2;
        uStack_6c = uStack_4c;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        _local_58 = auVar5;
        FUN_1451db7a0(param_1,pdVar7);
        uVar1 = uVar8 + 4;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        uVar1 = uVar8 + 6;
        dVar3 = stack0xffffffffffffff90 + *pdVar7;
        uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_78._8_4_ = SUB84(dVar3,0);
        local_78._0_8_ = dVar2 + *pdVar6;
        uStack_6c = uVar11;
        local_68._8_4_ = SUB84(dVar3,0);
        local_68._0_8_ = dVar2 + *pdVar6;
        local_68._12_4_ = uVar11;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar7);
        uVar1 = *(uint *)(param_1 + 0x24);
        local_68._8_8_ = dVar3 + *pdVar7;
        if ((uVar1 - uVar9 < 0x10) && ((uVar1 & 1) != 0)) {
          uVar9 = uVar8 + 7;
          if (uVar1 <= uVar9) {
            *(undefined1 *)(param_1 + 0x20) = 1;
          }
          if (uVar9 < *(uint *)(param_1 + 0x28)) {
            pdVar7 = (double *)((ulonglong)uVar9 * 0x20 + *(longlong *)(param_1 + 0x30));
          }
          else {
            pdVar7 = (double *)&DAT_14c793f60;
            DAT_14c793f60 = 0;
            _DAT_14c793f64 = 0;
            DAT_14c793f68 = 0;
            DAT_14c793f6c = 0;
            _DAT_14c793f70 = 0;
            _DAT_14c793f78 = 0;
          }
          FUN_1451db7a0(param_1,pdVar7);
          local_68._0_8_ = (double)local_68._0_8_ + *pdVar7;
        }
        FUN_1451df2f0(param_1,param_2,local_58,local_78,local_68);
        uVar9 = uVar8 + 0xf;
        uVar8 = uVar8 + 8;
      } while (uVar9 <= *(uint *)(param_1 + 0x24));
    }
  }
  else {
    _local_78 = *(undefined1 (*) [16])(param_1 + 0xb0);
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    pdVar7 = (double *)&DAT_14c793f60;
    if (*(int *)(param_1 + 0x28) == 0) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = *(double **)(param_1 + 0x30);
    }
    FUN_1451db7a0(param_1,pdVar6);
    dVar2 = stack0xffffffffffffff90 + *pdVar6;
    stack0xffffffffffffff90 = dVar2;
    auVar4 = _local_78;
    local_78._8_4_ = SUB84(dVar2,0);
    uStack_6c = (undefined4)((ulonglong)dVar2 >> 0x20);
    local_58._8_4_ = local_78._8_4_;
    local_58._0_8_ = local_78._0_8_;
    uStack_4c = uStack_6c;
    if (*(uint *)(param_1 + 0x24) < 3) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 3) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0x40);
    }
    _local_78 = auVar4;
    FUN_1451db7a0(param_1,pdVar6);
    if (*(uint *)(param_1 + 0x24) < 2) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 2) {
      pdVar10 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar10 = (double *)(*(longlong *)(param_1 + 0x30) + 0x20);
    }
    FUN_1451db7a0(param_1,pdVar10);
    dVar2 = (double)local_78._0_8_ + *pdVar10;
    uVar11 = SUB84(stack0xffffffffffffffb0 + *pdVar6,0);
    uVar12 = (undefined4)((ulonglong)(stack0xffffffffffffffb0 + *pdVar6) >> 0x20);
    local_58._8_4_ = uVar11;
    local_58._0_8_ = dVar2;
    uStack_4c = uVar12;
    local_68._8_4_ = uVar11;
    local_68._0_8_ = dVar2;
    local_68._12_4_ = uVar12;
    if (*(uint *)(param_1 + 0x24) < 4) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 4) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0x60);
    }
    FUN_1451db7a0(param_1,pdVar6);
    uVar8 = 4;
    local_68._0_8_ = dVar2 + *pdVar6;
    if (0xb < *(uint *)(param_1 + 0x24)) {
      uVar9 = 5;
      do {
        FUN_1451df2f0(param_1,param_2,local_78,local_58,local_68);
        _local_78 = *(undefined1 (*) [16])(param_1 + 0xb0);
        if (*(uint *)(param_1 + 0x24) <= uVar8) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar8 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar8 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        auVar4 = _local_78;
        uVar1 = uVar9 + 1;
        dVar2 = (double)local_78._0_8_ + *pdVar6;
        local_78._0_8_ = dVar2;
        auVar5 = _local_78;
        local_78._8_4_ = auVar4._8_4_;
        uStack_6c = auVar4._12_4_;
        local_58._8_4_ = local_78._8_4_;
        local_58._0_8_ = dVar2;
        uStack_4c = uStack_6c;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        _local_78 = auVar5;
        FUN_1451db7a0(param_1,pdVar6);
        if (*(uint *)(param_1 + 0x24) <= uVar9) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar9 < *(uint *)(param_1 + 0x28)) {
          pdVar10 = (double *)((ulonglong)uVar9 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar10 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar10);
        uVar1 = uVar9 + 2;
        dVar3 = stack0xffffffffffffffb0 + *pdVar6;
        uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_58._8_4_ = SUB84(dVar3,0);
        local_58._0_8_ = dVar2 + *pdVar10;
        uStack_4c = uVar11;
        local_68._8_4_ = SUB84(dVar3,0);
        local_68._0_8_ = dVar2 + *pdVar10;
        local_68._12_4_ = uVar11;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        dVar2 = *pdVar6;
        local_68._8_8_ = dVar3 + dVar2;
        FUN_1451df2f0(param_1,param_2,local_78,local_58,local_68);
        uVar1 = uVar9 + 3;
        _local_78 = local_68;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        dVar2 = dVar3 + dVar2 + *pdVar6;
        uVar1 = uVar9 + 5;
        stack0xffffffffffffff90 = dVar2;
        auVar4 = _local_78;
        local_78._8_4_ = SUB84(dVar2,0);
        uStack_6c = (undefined4)((ulonglong)dVar2 >> 0x20);
        local_58._8_4_ = local_78._8_4_;
        local_58._0_8_ = local_78._0_8_;
        uStack_4c = uStack_6c;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        _local_78 = auVar4;
        FUN_1451db7a0(param_1,pdVar6);
        uVar1 = uVar9 + 4;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar10 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar10 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar10);
        uVar1 = uVar9 + 6;
        dVar2 = (double)local_78._0_8_ + *pdVar10;
        uVar11 = SUB84(stack0xffffffffffffffb0 + *pdVar6,0);
        uVar12 = (undefined4)((ulonglong)(stack0xffffffffffffffb0 + *pdVar6) >> 0x20);
        local_58._8_4_ = uVar11;
        local_58._0_8_ = dVar2;
        uStack_4c = uVar12;
        local_68._8_4_ = uVar11;
        local_68._0_8_ = dVar2;
        local_68._12_4_ = uVar12;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        uVar8 = uVar8 + 8;
        uVar1 = uVar9 + 0xf;
        uVar9 = uVar9 + 8;
        local_68._0_8_ = dVar2 + *pdVar6;
      } while (uVar1 <= *(uint *)(param_1 + 0x24));
    }
    if (uVar8 < *(uint *)(param_1 + 0x24)) {
      if (uVar8 < *(uint *)(param_1 + 0x28)) {
        pdVar7 = (double *)((ulonglong)uVar8 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar7);
      local_68._8_8_ = (double)local_68._8_8_ + *pdVar7;
    }
    FUN_1451df2f0(param_1,param_2,local_78,local_58,local_68);
  }
  return;
}



// FUNCTION 1451dd7c0 FUN_1451dd7c0 body=2299 status=ok
// SIG undefined FUN_1451dd7c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dd7c0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_78 [12];
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  
  if (((byte)*(uint *)(param_1 + 0x24) & 7) < 4) {
    if (7 < *(uint *)(param_1 + 0x24)) {
      uVar8 = 1;
      do {
        _local_58 = *(undefined1 (*) [16])(param_1 + 0xb0);
        uVar9 = uVar8 - 1;
        if (*(uint *)(param_1 + 0x24) <= uVar9) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar9 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar9 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar7);
        auVar4 = _local_58;
        uVar1 = uVar8 + 1;
        dVar3 = (double)local_58._0_8_ + *pdVar7;
        local_58._0_8_ = dVar3;
        auVar5 = _local_58;
        local_58._8_4_ = auVar4._8_4_;
        uStack_4c = auVar4._12_4_;
        local_78._8_4_ = local_58._8_4_;
        local_78._0_8_ = dVar3;
        uStack_6c = uStack_4c;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        _local_58 = auVar5;
        FUN_1451db7a0(param_1,pdVar7);
        if (*(uint *)(param_1 + 0x24) <= uVar8) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar8 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar8 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        uVar1 = uVar8 + 2;
        dVar2 = stack0xffffffffffffff90 + *pdVar7;
        uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
        local_78._8_4_ = SUB84(dVar2,0);
        local_78._0_8_ = dVar3 + *pdVar6;
        uStack_6c = uVar11;
        local_68._8_4_ = SUB84(dVar2,0);
        local_68._0_8_ = dVar3 + *pdVar6;
        local_68._12_4_ = uVar11;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar7);
        dVar3 = *pdVar7;
        local_68._8_8_ = dVar2 + dVar3;
        FUN_1451df2f0(param_1,param_2,local_58,local_78,local_68);
        uVar1 = uVar8 + 3;
        _local_58 = local_68;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar7);
        dVar3 = dVar2 + dVar3 + *pdVar7;
        uVar1 = uVar8 + 5;
        stack0xffffffffffffffb0 = dVar3;
        auVar4 = _local_58;
        local_58._8_4_ = SUB84(dVar3,0);
        uStack_4c = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_78._8_4_ = local_58._8_4_;
        local_78._0_8_ = local_58._0_8_;
        uStack_6c = uStack_4c;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        _local_58 = auVar4;
        FUN_1451db7a0(param_1,pdVar7);
        uVar1 = uVar8 + 4;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        uVar1 = uVar8 + 6;
        dVar3 = (double)local_58._0_8_ + *pdVar6;
        uVar11 = SUB84(stack0xffffffffffffff90 + *pdVar7,0);
        uVar12 = (undefined4)((ulonglong)(stack0xffffffffffffff90 + *pdVar7) >> 0x20);
        local_78._8_4_ = uVar11;
        local_78._0_8_ = dVar3;
        uStack_6c = uVar12;
        local_68._8_4_ = uVar11;
        local_68._0_8_ = dVar3;
        local_68._12_4_ = uVar12;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar7 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar7 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar7);
        uVar1 = *(uint *)(param_1 + 0x24);
        local_68._0_8_ = dVar3 + *pdVar7;
        if ((uVar1 - uVar9 < 0x10) && ((uVar1 & 1) != 0)) {
          uVar9 = uVar8 + 7;
          if (uVar1 <= uVar9) {
            *(undefined1 *)(param_1 + 0x20) = 1;
          }
          if (uVar9 < *(uint *)(param_1 + 0x28)) {
            pdVar7 = (double *)((ulonglong)uVar9 * 0x20 + *(longlong *)(param_1 + 0x30));
          }
          else {
            pdVar7 = (double *)&DAT_14c793f60;
            DAT_14c793f60 = 0;
            _DAT_14c793f64 = 0;
            DAT_14c793f68 = 0;
            DAT_14c793f6c = 0;
            _DAT_14c793f70 = 0;
            _DAT_14c793f78 = 0;
          }
          FUN_1451db7a0(param_1,pdVar7);
          local_68._8_8_ = (double)local_68._8_8_ + *pdVar7;
        }
        FUN_1451df2f0(param_1,param_2,local_58,local_78,local_68);
        uVar9 = uVar8 + 0xf;
        uVar8 = uVar8 + 8;
      } while (uVar9 <= *(uint *)(param_1 + 0x24));
    }
  }
  else {
    _local_78 = *(undefined1 (*) [16])(param_1 + 0xb0);
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    pdVar7 = (double *)&DAT_14c793f60;
    if (*(int *)(param_1 + 0x28) == 0) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = *(double **)(param_1 + 0x30);
    }
    FUN_1451db7a0(param_1,pdVar6);
    auVar4 = _local_78;
    dVar3 = (double)local_78._0_8_ + *pdVar6;
    local_78._0_8_ = dVar3;
    auVar5 = _local_78;
    local_78._8_4_ = auVar4._8_4_;
    uStack_6c = auVar4._12_4_;
    local_58._8_4_ = local_78._8_4_;
    local_58._0_8_ = dVar3;
    uStack_4c = uStack_6c;
    if (*(uint *)(param_1 + 0x24) < 3) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 3) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0x40);
    }
    _local_78 = auVar5;
    FUN_1451db7a0(param_1,pdVar6);
    if (*(uint *)(param_1 + 0x24) < 2) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 2) {
      pdVar10 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar10 = (double *)(*(longlong *)(param_1 + 0x30) + 0x20);
    }
    FUN_1451db7a0(param_1,pdVar10);
    dVar2 = stack0xffffffffffffffb0 + *pdVar6;
    uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
    local_58._8_4_ = SUB84(dVar2,0);
    local_58._0_8_ = dVar3 + *pdVar10;
    uStack_4c = uVar11;
    local_68._8_4_ = SUB84(dVar2,0);
    local_68._0_8_ = dVar3 + *pdVar10;
    local_68._12_4_ = uVar11;
    if (*(uint *)(param_1 + 0x24) < 4) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 4) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0x60);
    }
    FUN_1451db7a0(param_1,pdVar6);
    uVar8 = 4;
    local_68._8_8_ = dVar2 + *pdVar6;
    if (0xb < *(uint *)(param_1 + 0x24)) {
      uVar9 = 5;
      do {
        FUN_1451df2f0(param_1,param_2,local_78,local_58,local_68);
        _local_78 = *(undefined1 (*) [16])(param_1 + 0xb0);
        if (*(uint *)(param_1 + 0x24) <= uVar8) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar8 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar8 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        uVar1 = uVar9 + 1;
        dVar3 = stack0xffffffffffffff90 + *pdVar6;
        stack0xffffffffffffff90 = dVar3;
        auVar4 = _local_78;
        local_78._8_4_ = SUB84(dVar3,0);
        uStack_6c = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_58._8_4_ = local_78._8_4_;
        local_58._0_8_ = local_78._0_8_;
        uStack_4c = uStack_6c;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        _local_78 = auVar4;
        FUN_1451db7a0(param_1,pdVar6);
        if (*(uint *)(param_1 + 0x24) <= uVar9) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar9 < *(uint *)(param_1 + 0x28)) {
          pdVar10 = (double *)((ulonglong)uVar9 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar10 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar10);
        uVar1 = uVar9 + 2;
        dVar3 = (double)local_78._0_8_ + *pdVar10;
        uVar11 = SUB84(stack0xffffffffffffffb0 + *pdVar6,0);
        uVar12 = (undefined4)((ulonglong)(stack0xffffffffffffffb0 + *pdVar6) >> 0x20);
        local_58._8_4_ = uVar11;
        local_58._0_8_ = dVar3;
        uStack_4c = uVar12;
        local_68._8_4_ = uVar11;
        local_68._0_8_ = dVar3;
        local_68._12_4_ = uVar12;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        dVar2 = *pdVar6;
        local_68._0_8_ = dVar3 + dVar2;
        FUN_1451df2f0(param_1,param_2,local_78,local_58,local_68);
        uVar1 = uVar9 + 3;
        _local_78 = local_68;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        auVar4 = _local_78;
        dVar3 = dVar3 + dVar2 + *pdVar6;
        uVar1 = uVar9 + 5;
        local_78._0_8_ = dVar3;
        auVar5 = _local_78;
        local_78._8_4_ = auVar4._8_4_;
        uStack_6c = auVar4._12_4_;
        local_58._8_4_ = local_78._8_4_;
        local_58._0_8_ = dVar3;
        uStack_4c = uStack_6c;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        _local_78 = auVar5;
        FUN_1451db7a0(param_1,pdVar6);
        uVar1 = uVar9 + 4;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar10 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar10 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar10);
        uVar1 = uVar9 + 6;
        dVar2 = stack0xffffffffffffffb0 + *pdVar6;
        uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
        local_58._8_4_ = SUB84(dVar2,0);
        local_58._0_8_ = dVar3 + *pdVar10;
        uStack_4c = uVar11;
        local_68._8_4_ = SUB84(dVar2,0);
        local_68._0_8_ = dVar3 + *pdVar10;
        local_68._12_4_ = uVar11;
        if (*(uint *)(param_1 + 0x24) <= uVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        if (uVar1 < *(uint *)(param_1 + 0x28)) {
          pdVar6 = (double *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x30));
        }
        else {
          pdVar6 = (double *)&DAT_14c793f60;
          DAT_14c793f60 = 0;
          _DAT_14c793f64 = 0;
          DAT_14c793f68 = 0;
          DAT_14c793f6c = 0;
          _DAT_14c793f70 = 0;
          _DAT_14c793f78 = 0;
        }
        FUN_1451db7a0(param_1,pdVar6);
        uVar8 = uVar8 + 8;
        uVar1 = uVar9 + 0xf;
        uVar9 = uVar9 + 8;
        local_68._8_8_ = dVar2 + *pdVar6;
      } while (uVar1 <= *(uint *)(param_1 + 0x24));
    }
    if (uVar8 < *(uint *)(param_1 + 0x24)) {
      if (uVar8 < *(uint *)(param_1 + 0x28)) {
        pdVar7 = (double *)((ulonglong)uVar8 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar7);
      local_68._0_8_ = (double)local_68._0_8_ + *pdVar7;
    }
    FUN_1451df2f0(param_1,param_2,local_78,local_58,local_68);
  }
  return;
}



// FUNCTION 1451de0c0 FUN_1451de0c0 body=774 status=ok
// SIG undefined FUN_1451de0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451de0c0(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [12];
  undefined4 uStack_5c;
  double local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [2] [16];
  
  if (*(int *)(param_1 + 0x24) == 7) {
    uVar7 = *(undefined4 *)(param_1 + 0xb0);
    local_88 = *(double *)(param_1 + 0xb0);
    uStack_80 = *(undefined4 *)(param_1 + 0xb8);
    uStack_7c = *(undefined4 *)(param_1 + 0xbc);
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    pdVar5 = (double *)&DAT_14c793f60;
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar7 = 0;
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = *(double **)(param_1 + 0x30);
    }
    FUN_1451db7a0(uVar7,pdVar4);
    dVar1 = local_88 + *pdVar4;
    local_68._8_4_ = uStack_80;
    local_68._0_8_ = dVar1;
    uStack_5c = uStack_7c;
    if (*(uint *)(param_1 + 0x24) < 3) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 3) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0x40);
    }
    local_88 = dVar1;
    FUN_1451db7a0(param_1,pdVar4);
    if (*(uint *)(param_1 + 0x24) < 2) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 2) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0x20);
    }
    FUN_1451db7a0(param_1,pdVar6);
    dVar1 = dVar1 + *pdVar6;
    uVar7 = SUB84(stack0xffffffffffffffa0 + *pdVar4,0);
    uVar8 = (undefined4)((ulonglong)(stack0xffffffffffffffa0 + *pdVar4) >> 0x20);
    local_68._8_4_ = uVar7;
    local_68._0_8_ = dVar1;
    uStack_5c = uVar8;
    local_78._8_4_ = uVar7;
    local_78._0_8_ = dVar1;
    local_78._12_4_ = uVar8;
    if (*(uint *)(param_1 + 0x24) < 4) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 4) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0x60);
    }
    FUN_1451db7a0(param_1,pdVar4);
    auVar2 = local_78;
    dVar1 = dVar1 + *pdVar4;
    local_78._0_8_ = dVar1;
    auVar3 = local_78;
    local_78._8_4_ = auVar2._8_4_;
    local_78._12_4_ = auVar2._12_4_;
    uStack_50 = local_78._8_4_;
    uStack_4c = local_78._12_4_;
    if (*(uint *)(param_1 + 0x24) < 5) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 5) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0x80);
    }
    local_78 = auVar3;
    local_58 = dVar1;
    FUN_1451db7a0(param_1,pdVar4);
    dVar1 = dVar1 + *pdVar4;
    local_38[0]._8_4_ = uStack_50;
    local_38[0]._0_8_ = dVar1;
    local_38[0]._12_4_ = uStack_4c;
    if (*(uint *)(param_1 + 0x24) < 6) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 6) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0xa0);
    }
    local_58 = dVar1;
    FUN_1451db7a0(param_1,pdVar4);
    dVar1 = dVar1 + *pdVar4;
    local_38[0]._8_4_ = uStack_80;
    local_38[0]._0_8_ = dVar1;
    local_38[0]._12_4_ = uStack_7c;
    local_48._8_4_ = uStack_80;
    local_48._0_8_ = dVar1;
    local_48._12_4_ = uStack_7c;
    if (*(uint *)(param_1 + 0x24) < 7) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 7) {
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar5 = (double *)(*(longlong *)(param_1 + 0x30) + 0xc0);
    }
    FUN_1451db7a0(param_1,pdVar5);
    local_48._0_8_ = dVar1 + *pdVar5;
    FUN_1451df2f0(param_1,param_2,&local_88,local_68,local_78);
    FUN_1451df2f0(param_1,param_2,&local_58,local_38,local_48);
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// FUNCTION 1451de3d0 FUN_1451de3d0 body=1184 status=ok
// SIG undefined FUN_1451de3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451de3d0(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  if (*(int *)(param_1 + 0x24) == 0xd) {
    uVar5 = *(undefined4 *)*(undefined1 (*) [16])(param_1 + 0xb0);
    local_88 = *(undefined1 (*) [16])(param_1 + 0xb0);
    if (*(uint *)(param_1 + 0x24) < 2) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    pdVar3 = (double *)&DAT_14c793f60;
    if (*(uint *)(param_1 + 0x28) < 2) {
      uVar5 = 0;
      pdVar2 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar2 = (double *)(*(longlong *)(param_1 + 0x30) + 0x20);
    }
    FUN_1451db7a0(uVar5,pdVar2);
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = *(double **)(param_1 + 0x30);
    }
    FUN_1451db7a0(param_1,pdVar4);
    dVar1 = (double)local_88._0_8_ + *pdVar4;
    uVar5 = SUB84((double)local_88._8_8_ + *pdVar2,0);
    uVar6 = (undefined4)((ulonglong)((double)local_88._8_8_ + *pdVar2) >> 0x20);
    local_88._8_4_ = uVar5;
    local_88._0_8_ = dVar1;
    local_88._12_4_ = uVar6;
    local_58._8_4_ = uVar5;
    local_58._0_8_ = dVar1;
    local_58._12_4_ = uVar6;
    if (*(uint *)(param_1 + 0x24) < 4) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 4) {
      pdVar2 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar2 = (double *)(*(longlong *)(param_1 + 0x30) + 0x60);
    }
    FUN_1451db7a0(param_1,pdVar2);
    if (*(uint *)(param_1 + 0x24) < 3) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 3) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0x40);
    }
    FUN_1451db7a0(param_1,pdVar4);
    dVar1 = dVar1 + *pdVar4;
    uVar5 = SUB84((double)local_58._8_8_ + *pdVar2,0);
    uVar6 = (undefined4)((ulonglong)((double)local_58._8_8_ + *pdVar2) >> 0x20);
    local_58._8_4_ = uVar5;
    local_58._0_8_ = dVar1;
    local_58._12_4_ = uVar6;
    local_68._8_4_ = uVar5;
    local_68._0_8_ = dVar1;
    local_68._12_4_ = uVar6;
    if (*(uint *)(param_1 + 0x24) < 6) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 6) {
      pdVar2 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar2 = (double *)(*(longlong *)(param_1 + 0x30) + 0xa0);
    }
    FUN_1451db7a0(param_1,pdVar2);
    if (*(uint *)(param_1 + 0x24) < 5) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 5) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0x80);
    }
    FUN_1451db7a0(param_1,pdVar4);
    dVar1 = dVar1 + *pdVar4;
    uVar5 = SUB84((double)local_68._8_8_ + *pdVar2,0);
    uVar6 = (undefined4)((ulonglong)((double)local_68._8_8_ + *pdVar2) >> 0x20);
    local_68._8_4_ = uVar5;
    local_68._0_8_ = dVar1;
    local_68._12_4_ = uVar6;
    local_38._8_4_ = uVar5;
    local_38._0_8_ = dVar1;
    local_38._12_4_ = uVar6;
    if (*(uint *)(param_1 + 0x24) < 8) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 8) {
      pdVar2 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar2 = (double *)(*(longlong *)(param_1 + 0x30) + 0xe0);
    }
    FUN_1451db7a0(param_1,pdVar2);
    if (*(uint *)(param_1 + 0x24) < 7) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 7) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0xc0);
    }
    FUN_1451db7a0(param_1,pdVar4);
    dVar1 = dVar1 + *pdVar4;
    uVar5 = SUB84((double)local_38._8_8_ + *pdVar2,0);
    uVar6 = (undefined4)((ulonglong)((double)local_38._8_8_ + *pdVar2) >> 0x20);
    local_38._8_4_ = uVar5;
    local_38._0_8_ = dVar1;
    local_38._12_4_ = uVar6;
    local_48._8_4_ = uVar5;
    local_48._0_8_ = dVar1;
    local_48._12_4_ = uVar6;
    if (*(uint *)(param_1 + 0x24) < 10) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 10) {
      pdVar2 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar2 = (double *)(*(longlong *)(param_1 + 0x30) + 0x120);
    }
    FUN_1451db7a0(param_1,pdVar2);
    if (*(uint *)(param_1 + 0x24) < 9) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 9) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0x100);
    }
    FUN_1451db7a0(param_1,pdVar4);
    dVar1 = dVar1 + *pdVar4;
    uVar5 = SUB84((double)local_48._8_8_ + *pdVar2,0);
    uVar6 = (undefined4)((ulonglong)((double)local_48._8_8_ + *pdVar2) >> 0x20);
    local_48._8_4_ = uVar5;
    local_48._0_8_ = dVar1;
    local_48._12_4_ = uVar6;
    local_78._8_4_ = uVar5;
    local_78._0_8_ = dVar1;
    local_78._12_4_ = uVar6;
    if (*(uint *)(param_1 + 0x24) < 0xc) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 0xc) {
      pdVar2 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar2 = (double *)(*(longlong *)(param_1 + 0x30) + 0x160);
    }
    FUN_1451db7a0(param_1,pdVar2);
    if (*(uint *)(param_1 + 0x24) < 0xb) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 0xb) {
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar3 = (double *)(*(longlong *)(param_1 + 0x30) + 0x140);
    }
    FUN_1451db7a0(param_1,pdVar3);
    local_78._8_8_ = (double)local_78._8_8_ + *pdVar2;
    local_78._0_8_ = dVar1 + *pdVar3;
    FUN_1451df2f0(param_1,param_2,local_88,local_58,local_68);
    FUN_1451df2f0(param_1,param_2,local_38,local_48,local_78);
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// FUNCTION 1451de870 FUN_1451de870 body=946 status=ok
// SIG undefined FUN_1451de870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451de870(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [12];
  undefined4 uStack_3c;
  double local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x24) == 9) {
    uVar7 = *(undefined4 *)*(undefined1 (*) [16])(param_1 + 0xb0);
    local_88 = *(undefined1 (*) [16])(param_1 + 0xb0);
    if (*(uint *)(param_1 + 0x24) < 2) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    pdVar5 = (double *)&DAT_14c793f60;
    if (*(uint *)(param_1 + 0x28) < 2) {
      uVar7 = 0;
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0x20);
    }
    FUN_1451db7a0(uVar7,pdVar4);
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = *(double **)(param_1 + 0x30);
    }
    FUN_1451db7a0(param_1,pdVar6);
    dVar1 = (double)local_88._0_8_ + *pdVar6;
    uVar7 = SUB84((double)local_88._8_8_ + *pdVar4,0);
    uVar8 = (undefined4)((ulonglong)((double)local_88._8_8_ + *pdVar4) >> 0x20);
    local_88._8_4_ = uVar7;
    local_88._0_8_ = dVar1;
    local_88._12_4_ = uVar8;
    local_68._8_4_ = uVar7;
    local_68._0_8_ = dVar1;
    local_68._12_4_ = uVar8;
    if (*(uint *)(param_1 + 0x24) < 4) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 4) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0x60);
    }
    FUN_1451db7a0(param_1,pdVar4);
    if (*(uint *)(param_1 + 0x24) < 3) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 3) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0x40);
    }
    FUN_1451db7a0(param_1,pdVar6);
    dVar1 = dVar1 + *pdVar6;
    uVar7 = SUB84((double)local_68._8_8_ + *pdVar4,0);
    uVar8 = (undefined4)((ulonglong)((double)local_68._8_8_ + *pdVar4) >> 0x20);
    local_68._8_4_ = uVar7;
    local_68._0_8_ = dVar1;
    local_68._12_4_ = uVar8;
    local_78._8_4_ = uVar7;
    local_78._0_8_ = dVar1;
    local_78._12_4_ = uVar8;
    if (*(uint *)(param_1 + 0x24) < 5) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 5) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0x80);
    }
    FUN_1451db7a0(param_1,pdVar4);
    auVar2 = local_78;
    dVar1 = dVar1 + *pdVar4;
    local_78._0_8_ = dVar1;
    auVar3 = local_78;
    local_78._8_4_ = auVar2._8_4_;
    local_78._12_4_ = auVar2._12_4_;
    uStack_30 = local_78._8_4_;
    uStack_2c = local_78._12_4_;
    if (*(uint *)(param_1 + 0x24) < 6) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 6) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0xa0);
    }
    local_78 = auVar3;
    local_38 = dVar1;
    FUN_1451db7a0(param_1,pdVar4);
    dVar1 = dVar1 + *pdVar4;
    local_48._8_4_ = uStack_30;
    local_48._0_8_ = dVar1;
    uStack_3c = uStack_2c;
    if (*(uint *)(param_1 + 0x24) < 8) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 8) {
      pdVar4 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar4 = (double *)(*(longlong *)(param_1 + 0x30) + 0xe0);
    }
    local_38 = dVar1;
    FUN_1451db7a0(param_1,pdVar4);
    if (*(uint *)(param_1 + 0x24) < 7) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 7) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0xc0);
    }
    FUN_1451db7a0(param_1,pdVar6);
    dVar1 = dVar1 + *pdVar6;
    uVar7 = SUB84(stack0xffffffffffffffc0 + *pdVar4,0);
    uVar8 = (undefined4)((ulonglong)(stack0xffffffffffffffc0 + *pdVar4) >> 0x20);
    local_48._8_4_ = uVar7;
    local_48._0_8_ = dVar1;
    uStack_3c = uVar8;
    local_58._8_4_ = uVar7;
    local_58._0_8_ = dVar1;
    local_58._12_4_ = uVar8;
    if (*(uint *)(param_1 + 0x24) < 9) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 9) {
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar5 = (double *)(*(longlong *)(param_1 + 0x30) + 0x100);
    }
    FUN_1451db7a0(param_1,pdVar5);
    local_58._8_8_ = *(undefined8 *)(param_1 + 0xb8);
    local_58._0_8_ = dVar1 + *pdVar5;
    FUN_1451df2f0(param_1,param_2,local_88,local_68,local_78);
    FUN_1451df2f0(param_1,param_2,&local_38,local_48,local_58);
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// FUNCTION 1451dec30 FUN_1451dec30 body=1461 status=ok
// SIG undefined FUN_1451dec30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dec30(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [8];
  undefined1 auVar4 [16];
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  double *pdVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  double dStack_50;
  
  if (*(int *)(param_1 + 0x24) == 0xb) {
    uVar8 = 0;
    pdVar9 = (double *)&DAT_14c793f60;
    _local_58 = ZEXT816(0);
    auVar4 = _local_58;
    dStack_50 = 0.0;
    local_58 = (undefined1  [8])0x0;
    auVar3 = local_58;
    dVar2 = dStack_50;
    _local_58 = auVar4;
    do {
      uVar5 = uVar8 + 1;
      if (*(uint *)(param_1 + 0x24) <= uVar5) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar5 < *(uint *)(param_1 + 0x28)) {
        pdVar6 = (double *)((ulonglong)uVar5 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar6 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar6);
      if (*(uint *)(param_1 + 0x24) <= uVar8) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar8 < *(uint *)(param_1 + 0x28)) {
        pdVar7 = (double *)((ulonglong)uVar8 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        pdVar7 = (double *)&DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451db7a0(param_1,pdVar7);
      auVar3 = (undefined1  [8])((double)auVar3 + *pdVar7);
      dVar2 = dVar2 + *pdVar6;
      uVar8 = uVar8 + 2;
    } while (uVar8 < 10);
    local_98 = *(undefined1 (*) [16])(param_1 + 0xb0);
    if (*(uint *)(param_1 + 0x24) < 2) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 2) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0x20);
    }
    FUN_1451db7a0(param_1,pdVar6);
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      pdVar7 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar7 = *(double **)(param_1 + 0x30);
    }
    FUN_1451db7a0(param_1,pdVar7);
    dVar1 = (double)local_98._0_8_ + *pdVar7;
    uVar10 = SUB84((double)local_98._8_8_ + *pdVar6,0);
    uVar11 = (undefined4)((ulonglong)((double)local_98._8_8_ + *pdVar6) >> 0x20);
    local_98._8_4_ = uVar10;
    local_98._0_8_ = dVar1;
    local_98._12_4_ = uVar11;
    local_78._8_4_ = uVar10;
    local_78._0_8_ = dVar1;
    local_78._12_4_ = uVar11;
    if (*(uint *)(param_1 + 0x24) < 4) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 4) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0x60);
    }
    FUN_1451db7a0(param_1,pdVar6);
    if (*(uint *)(param_1 + 0x24) < 3) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 3) {
      pdVar7 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar7 = (double *)(*(longlong *)(param_1 + 0x30) + 0x40);
    }
    FUN_1451db7a0(param_1,pdVar7);
    dVar1 = dVar1 + *pdVar7;
    uVar10 = SUB84((double)local_78._8_8_ + *pdVar6,0);
    uVar11 = (undefined4)((ulonglong)((double)local_78._8_8_ + *pdVar6) >> 0x20);
    local_78._8_4_ = uVar10;
    local_78._0_8_ = dVar1;
    local_78._12_4_ = uVar11;
    local_88._8_4_ = uVar10;
    local_88._0_8_ = dVar1;
    local_88._12_4_ = uVar11;
    if (*(uint *)(param_1 + 0x24) < 6) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 6) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0xa0);
    }
    FUN_1451db7a0(param_1,pdVar6);
    if (*(uint *)(param_1 + 0x24) < 5) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 5) {
      pdVar7 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar7 = (double *)(*(longlong *)(param_1 + 0x30) + 0x80);
    }
    FUN_1451db7a0(param_1,pdVar7);
    dVar1 = dVar1 + *pdVar7;
    uVar10 = SUB84((double)local_88._8_8_ + *pdVar6,0);
    uVar11 = (undefined4)((ulonglong)((double)local_88._8_8_ + *pdVar6) >> 0x20);
    local_88._8_4_ = uVar10;
    local_88._0_8_ = dVar1;
    local_88._12_4_ = uVar11;
    unique0x100005cc = uVar10;
    local_58 = (undefined1  [8])dVar1;
    unique0x100005d0 = uVar11;
    if (*(uint *)(param_1 + 0x24) < 8) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 8) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0xe0);
    }
    FUN_1451db7a0(param_1,pdVar6);
    if (*(uint *)(param_1 + 0x24) < 7) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 7) {
      pdVar7 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar7 = (double *)(*(longlong *)(param_1 + 0x30) + 0xc0);
    }
    FUN_1451db7a0(param_1,pdVar7);
    dVar1 = dVar1 + *pdVar7;
    uVar10 = SUB84(dStack_50 + *pdVar6,0);
    uVar11 = (undefined4)((ulonglong)(dStack_50 + *pdVar6) >> 0x20);
    unique0x10000638 = uVar10;
    local_58 = (undefined1  [8])dVar1;
    unique0x1000063c = uVar11;
    local_68._8_4_ = uVar10;
    local_68._0_8_ = dVar1;
    local_68._12_4_ = uVar11;
    if (*(uint *)(param_1 + 0x24) < 10) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 10) {
      pdVar6 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar6 = (double *)(*(longlong *)(param_1 + 0x30) + 0x120);
    }
    FUN_1451db7a0(param_1,pdVar6);
    if (*(uint *)(param_1 + 0x24) < 9) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (*(uint *)(param_1 + 0x28) < 9) {
      pdVar7 = (double *)&DAT_14c793f60;
      DAT_14c793f60 = 0;
      _DAT_14c793f64 = 0;
      DAT_14c793f68 = 0;
      DAT_14c793f6c = 0;
      _DAT_14c793f70 = 0;
      _DAT_14c793f78 = 0;
    }
    else {
      pdVar7 = (double *)(*(longlong *)(param_1 + 0x30) + 0x100);
    }
    FUN_1451db7a0(param_1,pdVar7);
    dVar1 = dVar1 + *pdVar7;
    uVar10 = SUB84((double)local_68._8_8_ + *pdVar6,0);
    uVar11 = (undefined4)((ulonglong)((double)local_68._8_8_ + *pdVar6) >> 0x20);
    local_68._8_4_ = uVar10;
    local_68._0_8_ = dVar1;
    local_68._12_4_ = uVar11;
    local_a8._8_4_ = uVar10;
    local_a8._0_8_ = dVar1;
    local_a8._12_4_ = uVar11;
    if (ABS((double)auVar3) < ABS(dVar2) || ABS((double)auVar3) == ABS(dVar2)) {
      if (*(uint *)(param_1 + 0x24) < 0xb) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (*(uint *)(param_1 + 0x28) < 0xb) {
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      else {
        pdVar9 = (double *)(*(longlong *)(param_1 + 0x30) + 0x140);
      }
      local_a8._0_8_ = *(undefined8 *)(param_1 + 0xb0);
      FUN_1451db7a0(param_1,pdVar9);
      local_a8._8_8_ = (double)local_a8._8_8_ + *pdVar9;
    }
    else {
      if (*(uint *)(param_1 + 0x24) < 0xb) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (*(uint *)(param_1 + 0x28) < 0xb) {
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      else {
        pdVar9 = (double *)(*(longlong *)(param_1 + 0x30) + 0x140);
      }
      FUN_1451db7a0(param_1,pdVar9);
      local_a8._8_8_ = *(undefined8 *)(param_1 + 0xb8);
      local_a8._0_8_ = dVar1 + *pdVar9;
    }
    FUN_1451df2f0(param_1,param_2,local_98,local_78,local_88);
    FUN_1451df2f0(param_1,param_2,local_58,local_68,local_a8);
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// FUNCTION 1451df1f0 FUN_1451df1f0 body=244 status=ok
// SIG undefined FUN_1451df1f0(void)

void FUN_1451df1f0(longlong param_1,char *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*param_2 == '\0') {
    *param_2 = '\x01';
    if (*(double *)(param_1 + 0xb0) <= *(double *)(param_2 + 8) &&
        *(double *)(param_2 + 8) != *(double *)(param_1 + 0xb0)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0xb0);
    }
    if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0xb0) &&
        *(double *)(param_1 + 0xb0) != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xb0);
    }
    if (*(double *)(param_1 + 0xb8) <= *(double *)(param_2 + 0x10) &&
        *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0xb8)) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0xb8);
    }
    if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0xb8) &&
        *(double *)(param_1 + 0xb8) != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xb8);
    }
  }
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0xb0) = *param_3;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  if (*(double *)(param_1 + 0xb0) <= *(double *)(param_2 + 8) &&
      *(double *)(param_2 + 8) != *(double *)(param_1 + 0xb0)) {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0xb0);
  }
  if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0xb0) &&
      *(double *)(param_1 + 0xb0) != *(double *)(param_2 + 0x18)) {
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xb0);
  }
  if (*(double *)(param_1 + 0xb8) <= *(double *)(param_2 + 0x10) &&
      *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0xb8)) {
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0xb8);
  }
  if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0xb8) &&
      *(double *)(param_1 + 0xb8) != *(double *)(param_2 + 0x20)) {
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xb8);
  }
  return;
}



// FUNCTION 1451df2f0 FUN_1451df2f0 body=424 status=ok
// SIG undefined FUN_1451df2f0(void)

void FUN_1451df2f0(longlong param_1,char *param_2,double *param_3,double *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\0') {
    *param_2 = '\x01';
    if (*(double *)(param_1 + 0xb0) <= *(double *)(param_2 + 8) &&
        *(double *)(param_2 + 8) != *(double *)(param_1 + 0xb0)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0xb0);
    }
    if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0xb0) &&
        *(double *)(param_1 + 0xb0) != *(double *)(param_2 + 0x18)) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xb0);
    }
    if (*(double *)(param_1 + 0xb8) <= *(double *)(param_2 + 0x10) &&
        *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0xb8)) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0xb8);
    }
    if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0xb8) &&
        *(double *)(param_1 + 0xb8) != *(double *)(param_2 + 0x20)) {
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xb8);
    }
  }
  if (*param_3 <= *(double *)(param_2 + 8) && *(double *)(param_2 + 8) != *param_3) {
    *(double *)(param_2 + 8) = *param_3;
  }
  if (*(double *)(param_2 + 0x18) <= *param_3 && *param_3 != *(double *)(param_2 + 0x18)) {
    *(double *)(param_2 + 0x18) = *param_3;
  }
  if (param_3[1] <= *(double *)(param_2 + 0x10) && *(double *)(param_2 + 0x10) != param_3[1]) {
    *(double *)(param_2 + 0x10) = param_3[1];
  }
  if (*(double *)(param_2 + 0x20) <= param_3[1] && param_3[1] != *(double *)(param_2 + 0x20)) {
    *(double *)(param_2 + 0x20) = param_3[1];
  }
  if (*param_4 <= *(double *)(param_2 + 8) && *(double *)(param_2 + 8) != *param_4) {
    *(double *)(param_2 + 8) = *param_4;
  }
  if (*(double *)(param_2 + 0x18) <= *param_4 && *param_4 != *(double *)(param_2 + 0x18)) {
    *(double *)(param_2 + 0x18) = *param_4;
  }
  if (param_4[1] <= *(double *)(param_2 + 0x10) && *(double *)(param_2 + 0x10) != param_4[1]) {
    *(double *)(param_2 + 0x10) = param_4[1];
  }
  if (*(double *)(param_2 + 0x20) <= param_4[1] && param_4[1] != *(double *)(param_2 + 0x20)) {
    *(double *)(param_2 + 0x20) = param_4[1];
  }
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  if (*(double *)(param_1 + 0xb0) <= *(double *)(param_2 + 8) &&
      *(double *)(param_2 + 8) != *(double *)(param_1 + 0xb0)) {
    *(undefined8 *)(param_2 + 8) = uVar1;
  }
  if (*(double *)(param_2 + 0x18) <= *(double *)(param_1 + 0xb0) &&
      *(double *)(param_1 + 0xb0) != *(double *)(param_2 + 0x18)) {
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xb0);
  }
  if (*(double *)(param_1 + 0xb8) <= *(double *)(param_2 + 0x10) &&
      *(double *)(param_2 + 0x10) != *(double *)(param_1 + 0xb8)) {
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0xb8);
  }
  if (*(double *)(param_2 + 0x20) <= *(double *)(param_1 + 0xb8) &&
      *(double *)(param_1 + 0xb8) != *(double *)(param_2 + 0x20)) {
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xb8);
  }
  return;
}



// FUNCTION 1451df4a0 FUN_1451df4a0 body=374 status=ok
// SIG undefined FUN_1451df4a0(void)

void FUN_1451df4a0(uint param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  short sVar4;
  byte *pbVar5;
  
  if (param_1 == 0x1c) {
    uVar3 = *(uint *)(param_2 + 0x18);
    pbVar5 = &DAT_149a1f1a0;
    if (uVar3 < *(uint *)(param_2 + 0x10)) {
      pbVar2 = (byte *)((ulonglong)uVar3 + *(longlong *)(param_2 + 8));
    }
    else {
      *(undefined1 *)(param_2 + 0x1c) = 1;
      pbVar2 = &DAT_149a1f1a0;
    }
    if (uVar3 + 1 < *(uint *)(param_2 + 0x10)) {
      pbVar5 = (byte *)((ulonglong)(uVar3 + 1) + *(longlong *)(param_2 + 8));
    }
    else {
      *(undefined1 *)(param_2 + 0x1c) = 1;
    }
    FUN_1451db110(param_2 + 0x20,(int)(short)((ushort)*pbVar2 << 8) | (uint)*pbVar5);
    if (*(char *)(param_2 + 0x1c) == '\0') {
      uVar3 = *(uint *)(param_2 + 0x10);
      if (*(uint *)(param_2 + 0x18) <= uVar3) {
        uVar1 = *(uint *)(param_2 + 0x18) + 2;
        goto LAB_1451df602;
      }
    }
  }
  else {
    if (param_1 < 0xf7) {
LAB_1451df570:
      if (param_1 - 0x20 < 0xd7) {
        FUN_1451db110(param_2 + 0x20,param_1 - 0x8b);
        return;
      }
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(undefined1 *)(param_2 + 0x38) = 1;
      return;
    }
    if (param_1 < 0xfb) {
      if (*(uint *)(param_2 + 0x18) < *(uint *)(param_2 + 0x10)) {
        pbVar5 = (byte *)((ulonglong)*(uint *)(param_2 + 0x18) + *(longlong *)(param_2 + 8));
      }
      else {
        *(undefined1 *)(param_2 + 0x1c) = 1;
        pbVar5 = &DAT_149a1f1a0;
      }
      sVar4 = (short)param_1 * 0x100 + (ushort)*pbVar5 + 0x96c;
    }
    else {
      if (0xfe < param_1) goto LAB_1451df570;
      if (*(uint *)(param_2 + 0x18) < *(uint *)(param_2 + 0x10)) {
        pbVar5 = (byte *)((ulonglong)*(uint *)(param_2 + 0x18) + *(longlong *)(param_2 + 8));
      }
      else {
        *(undefined1 *)(param_2 + 0x1c) = 1;
        pbVar5 = &DAT_149a1f1a0;
      }
      sVar4 = ((short)param_1 * -0x100 + -0x56c) - (ushort)*pbVar5;
    }
    FUN_1451db110(param_2 + 0x20,(int)sVar4);
    if (*(char *)(param_2 + 0x1c) == '\0') {
      uVar3 = *(uint *)(param_2 + 0x10);
      if (*(uint *)(param_2 + 0x18) <= uVar3) {
        uVar1 = *(uint *)(param_2 + 0x18) + 1;
LAB_1451df602:
        if (uVar1 <= uVar3) goto LAB_1451df60d;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x1c) = 1;
  uVar1 = *(uint *)(param_2 + 0x10);
LAB_1451df60d:
  *(uint *)(param_2 + 0x18) = uVar1;
  return;
}



// FUNCTION 1451df620 FUN_1451df620 body=1025 status=ok
// SIG undefined FUN_1451df620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451df620(uint param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (0x122 < param_1) {
    if (param_1 == 0x123) {
      FUN_1451de3d0(param_2,param_3);
    }
    else if (param_1 == 0x124) {
      FUN_1451de870(param_2,param_3);
    }
    else {
      if (param_1 != 0x125) goto switchD_1451df676_caseD_2;
      FUN_1451dec30(param_2,param_3);
    }
    goto LAB_1451df89c;
  }
  if (param_1 == 0x122) {
    FUN_1451de0c0(param_2,param_3);
    goto LAB_1451df89c;
  }
  switch(param_1) {
  case 1:
  case 0x12:
    uVar1 = *(uint *)(param_2 + 0x24);
    *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + (uVar1 >> 1);
    goto LAB_1451df89f;
  default:
switchD_1451df676_caseD_2:
    FUN_1451df4a0(param_1,param_2);
    return;
  case 3:
  case 0x17:
    uVar1 = *(uint *)(param_2 + 0x24);
    *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + (uVar1 >> 1);
    goto LAB_1451df89f;
  case 4:
    FUN_1451dbac0(param_2,param_3);
    goto LAB_1451dfaa0;
  case 5:
    FUN_1451dbb20(param_2,param_3);
    break;
  case 6:
    FUN_1451dbc60(param_2,param_3);
    break;
  case 7:
    FUN_1451dbe10(param_2,param_3);
    break;
  case 8:
    FUN_1451dbfc0(param_2,param_3);
    break;
  case 10:
    FUN_1451db440(param_2,param_2 + 0xa0,2);
    return;
  case 0xb:
    if (*(char *)(param_2 + 0x1c) != '\0') {
      *(undefined1 *)(param_2 + 0x38) = 1;
    }
    if (*(int *)(param_2 + 0x7c) == 0) {
      *(undefined1 *)(param_2 + 0x78) = 1;
    }
    else {
      uVar1 = *(int *)(param_2 + 0x7c) - 1;
      *(uint *)(param_2 + 0x7c) = uVar1;
      if (uVar1 < *(uint *)(param_2 + 0x80)) {
        puVar2 = (undefined4 *)(*(longlong *)(param_2 + 0x88) + (ulonglong)uVar1 * 0x28);
        goto LAB_1451db629;
      }
    }
    puVar2 = &DAT_14c793f60;
    _DAT_14c793f60 = 0;
    _DAT_14c793f68 = 0;
    _DAT_14c793f80 = 0;
    _DAT_14c793f70 = 0;
    _DAT_14c793f78 = 0;
LAB_1451db629:
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(puVar2 + 2);
    *(undefined4 *)(param_2 + 0x50) = puVar2[4];
    *(undefined4 *)(param_2 + 0x58) = puVar2[6];
    *(undefined1 *)(param_2 + 0x5c) = *(undefined1 *)(puVar2 + 7);
    *(undefined4 *)(param_2 + 0x60) = puVar2[8];
    *(undefined4 *)(param_2 + 100) = puVar2[9];
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x58);
    *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(param_2 + 0x5c);
    return;
  case 0xe:
    *(undefined1 *)(param_2 + 0x68) = 1;
    break;
  case 0x13:
  case 0x14:
    if (*(char *)(param_2 + 0x6a) == '\0') {
      *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + (*(uint *)(param_2 + 0x24) >> 1);
      *(undefined1 *)(param_2 + 0x6a) = 1;
      *(uint *)(param_2 + 0x74) =
           (uint)(*(int *)(param_2 + 0x70) + 7 + *(int *)(param_2 + 0x6c)) >> 3;
    }
    if (*(char *)(param_2 + 0x1c) != '\0') {
      return;
    }
    if (*(uint *)(param_2 + 0x10) < (uint)(*(int *)(param_2 + 0x74) + *(int *)(param_2 + 0x18))) {
      return;
    }
    *(undefined4 *)(param_2 + 0x24) = 0;
    if (*(char *)(param_2 + 0x1c) == '\0') {
      if ((*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x10)) &&
         (uVar1 = *(uint *)(param_2 + 0x18) + *(int *)(param_2 + 0x74),
         uVar1 <= *(uint *)(param_2 + 0x10))) goto LAB_1451dfa93;
    }
    uVar1 = *(uint *)(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x1c) = 1;
LAB_1451dfa93:
    *(uint *)(param_2 + 0x18) = uVar1;
    return;
  case 0x15:
    FUN_1451dba00(param_2,param_3);
    goto LAB_1451dfaa0;
  case 0x16:
    FUN_1451dba70(param_2,param_3);
LAB_1451dfaa0:
    if (*(char *)(param_2 + 0x69) == '\0') {
      if (*(char *)(param_2 + 0x6a) == '\0') {
        *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + (*(uint *)(param_2 + 0x24) >> 1);
        *(undefined1 *)(param_2 + 0x6a) = 1;
        *(uint *)(param_2 + 0x74) =
             (uint)(*(int *)(param_2 + 0x70) + 7 + *(int *)(param_2 + 0x6c)) >> 3;
      }
      *(undefined1 *)(param_2 + 0x69) = 1;
    }
    *(undefined4 *)(param_2 + 0x24) = 0;
    return;
  case 0x18:
    FUN_1451dc270(param_2,param_3);
    break;
  case 0x19:
    FUN_1451dc620(param_2,param_3);
    break;
  case 0x1a:
    FUN_1451dc9d0(param_2,param_3);
    break;
  case 0x1b:
    FUN_1451dcc50(param_2,param_3);
    break;
  case 0x1d:
    FUN_1451db440(param_2,param_2 + 0x90,1);
    return;
  case 0x1e:
    FUN_1451dceb0(param_2,param_3);
    break;
  case 0x1f:
    FUN_1451dd7c0(param_2,param_3);
    break;
  case 0xff:
    FUN_1451db250(param_2 + 0x20,param_2);
    return;
  }
LAB_1451df89c:
  uVar1 = *(uint *)(param_2 + 0x24);
LAB_1451df89f:
  if (*(uint *)(param_2 + 0x24) < uVar1) {
    *(undefined1 *)(param_2 + 0x20) = 1;
    return;
  }
  *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) - uVar1;
  return;
}



// FUNCTION 1451dfae0 FUN_1451dfae0 body=430 status=ok
// SIG undefined FUN_1451dfae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1451dfae0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  double *pdVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_48 [8];
  longlong local_40;
  uint local_38;
  
  FUN_1451db6e0();
  iVar1 = *(int *)(param_1 + 0xd8);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x24) - 1;
    *(uint *)(param_1 + 0x24) = uVar2;
    if (uVar2 < *(uint *)(param_1 + 0x28)) {
      pdVar3 = (double *)((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x30));
      goto LAB_1451dfb41;
    }
  }
  pdVar3 = (double *)&DAT_14c793f60;
  _DAT_14c793f70 = 0;
  _DAT_14c793f78 = 0;
  DAT_14c793f60 = 0;
  _DAT_14c793f64 = 0;
  DAT_14c793f68 = 0;
  DAT_14c793f6c = 0;
LAB_1451dfb41:
  uVar2 = (uint)*pdVar3;
  if ((int)uVar2 < 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  uVar5 = 0;
  if (-1 < (int)uVar2) {
    uVar5 = uVar2;
  }
  uVar2 = *(int *)(param_1 + 0x24) - (iVar1 + 1) * uVar5;
  if (*(uint *)(param_1 + 0x24) < uVar2) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  if (uVar5 != 0) {
    uVar7 = uVar2;
    uVar6 = uVar2 + uVar5;
    do {
      local_40 = *(longlong *)(param_1 + 0x30);
      local_38 = *(uint *)(param_1 + 0x28);
      if (uVar6 != 0) {
        if (local_38 < uVar6) {
          local_38 = 0;
        }
        else {
          local_38 = (((local_38 + uVar2 + uVar5) - uVar6) - uVar2) - uVar5;
        }
        local_40 = local_40 + (ulonglong)uVar6 * 0x20;
      }
      if (*(uint *)(param_1 + 0x24) <= uVar7) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (uVar7 < *(uint *)(param_1 + 0x28)) {
        puVar4 = (undefined4 *)((ulonglong)uVar7 * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      else {
        puVar4 = &DAT_14c793f60;
        DAT_14c793f60 = 0;
        _DAT_14c793f64 = 0;
        DAT_14c793f68 = 0;
        DAT_14c793f6c = 0;
        _DAT_14c793f70 = 0;
        _DAT_14c793f78 = 0;
      }
      FUN_1451dae70(puVar4,uVar5,-uVar2 + uVar7,iVar1,local_48);
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + iVar1;
    } while (-uVar2 + uVar7 < uVar5);
  }
  if (*(uint *)(param_1 + 0x24) < uVar5 * iVar1) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) - uVar5 * iVar1;
  return;
}



// FUNCTION 1451dfc90 FUN_1451dfc90 body=270 status=ok
// SIG undefined FUN_1451dfc90(void)

longlong FUN_1451dfc90(byte *param_1,longlong param_2,uint param_3)

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



// FUNCTION 1451dfda0 FUN_1451dfda0 body=231 status=ok
// SIG undefined FUN_1451dfda0(void)

void FUN_1451dfda0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (param_4 < *(uint *)(param_3 + 0xa8)) {
    puVar3 = (undefined1 *)((ulonglong)param_4 * 0x30 + *(longlong *)(param_3 + 0xb0));
  }
  else {
    puVar3 = &DAT_149a1f1a0;
  }
  FUN_1451db2f0(param_1,param_2,*(undefined8 *)(param_3 + 0x68),*(undefined8 *)(puVar3 + 0x20));
  *(undefined8 *)(param_1 + 0xc0) = param_5;
  *(undefined4 *)(param_1 + 200) = param_6;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_3 + 0x70);
  uVar1 = 0;
  *(undefined2 *)(param_1 + 0xf1) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (((*(longlong *)(param_1 + 0xc0) != 0) && (*(int *)(param_1 + 200) != 0)) &&
     (*(undefined1 **)(param_1 + 0xd0) != &DAT_149a1f1a0)) {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xf0) = uVar1;
  if (param_4 < *(uint *)(param_3 + 0xa8)) {
    uVar2 = *(undefined4 *)((ulonglong)param_4 * 0x30 + *(longlong *)(param_3 + 0xb0) + 0x28);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  return;
}



// FUNCTION 1451dfe90 FUN_1451dfe90 body=80 status=ok
// SIG undefined FUN_1451dfe90(void)

bool FUN_1451dfe90(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined8 *)FUN_1451e0d60(param_1 + 0xb8);
  puVar3 = &DAT_149a1f1a0;
  puVar2 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*puVar1;
  }
  if (0xb < *(uint *)(puVar2 + 0x18)) {
    puVar3 = *(undefined1 **)(puVar2 + 0x10);
  }
  return (ushort)((ushort)(byte)puVar3[4] * 0x100 + (ushort)(byte)puVar3[5]) != 0;
}



// FUNCTION 1451dfee0 FUN_1451dfee0 body=179 status=ok
// SIG undefined FUN_1451dfee0(void)

void FUN_1451dfee0(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_2 == 0x47504f53) {
    puVar1 = (undefined8 *)FUN_1451e0ef0(param_1 + 200);
  }
  else {
    if (param_2 != 0x47535542) {
      puVar2 = &DAT_149a1f1a0;
      goto LAB_1451dff49;
    }
    puVar1 = (undefined8 *)FUN_1451e0e40(param_1 + 0xc0);
  }
  puVar2 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*puVar1;
  }
  if (*(uint *)(puVar2 + 0x18) < 10) {
    puVar2 = &DAT_149a1f1a0;
  }
  else {
    puVar2 = *(undefined1 **)(puVar2 + 0x10);
  }
LAB_1451dff49:
  puVar3 = &DAT_149a1f1a0;
  if ((ushort)((ushort)(byte)puVar2[4] * 0x100 + (ushort)(byte)puVar2[5]) != 0) {
    puVar3 = puVar2 + (ulonglong)(byte)puVar2[5] + (ulonglong)(byte)puVar2[4] * 0x100;
  }
  FUN_1451e97a0(puVar3,param_3,param_4,param_5);
  return;
}



// FUNCTION 1451dffa0 FUN_1451dffa0 body=556 status=ok
// SIG undefined FUN_1451dffa0(void)

undefined8
FUN_1451dffa0(longlong param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
             undefined4 *param_6)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  
  if (param_2 == 0x47504f53) {
    puVar2 = (undefined8 *)FUN_1451e0ef0(param_1 + 200);
  }
  else {
    if (param_2 != 0x47535542) {
      puVar6 = &DAT_149a1f1a0;
      goto LAB_1451e0015;
    }
    puVar2 = (undefined8 *)FUN_1451e0e40(param_1 + 0xc0);
  }
  puVar6 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)*puVar2;
  }
  if (*(uint *)(puVar6 + 0x18) < 10) {
    puVar6 = &DAT_149a1f1a0;
  }
  else {
    puVar6 = *(undefined1 **)(puVar6 + 0x10);
  }
LAB_1451e0015:
  puVar4 = &DAT_149a1f1a0;
  uVar5 = 0;
  puVar7 = param_4;
  if (param_3 != 0) {
    do {
      if ((ushort)((ushort)(byte)puVar6[4] * 0x100 + (ushort)(byte)puVar6[5]) == 0) {
        puVar3 = &DAT_149a1f1a0;
      }
      else {
        puVar3 = puVar6 + (ulonglong)(byte)puVar6[5] + (ulonglong)(byte)puVar6[4] * 0x100;
      }
      cVar1 = FUN_1451e9840(puVar3,*puVar7,param_5);
      if (cVar1 != '\0') {
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = param_4[uVar5];
        }
        return 1;
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 < param_3);
  }
  if ((ushort)((ushort)(byte)puVar6[4] * 0x100 + (ushort)(byte)puVar6[5]) == 0) {
    puVar3 = &DAT_149a1f1a0;
  }
  else {
    puVar3 = puVar6 + (ulonglong)(byte)puVar6[5] + (ulonglong)(byte)puVar6[4] * 0x100;
  }
  cVar1 = FUN_1451e9840(puVar3,0x44464c54,param_5);
  if (cVar1 == '\0') {
    if ((ushort)((ushort)(byte)puVar6[4] * 0x100 + (ushort)(byte)puVar6[5]) == 0) {
      puVar3 = &DAT_149a1f1a0;
    }
    else {
      puVar3 = puVar6 + (ulonglong)(byte)puVar6[5] + (ulonglong)(byte)puVar6[4] * 0x100;
    }
    cVar1 = FUN_1451e9840(puVar3,0x64666c74,param_5);
    if (cVar1 == '\0') {
      if ((ushort)((ushort)(byte)puVar6[4] * 0x100 + (ushort)(byte)puVar6[5]) != 0) {
        puVar4 = puVar6 + (ulonglong)(byte)puVar6[5] + (ulonglong)(byte)puVar6[4] * 0x100;
      }
      cVar1 = FUN_1451e9840(puVar4,0x6c61746e,param_5);
      if (cVar1 == '\0') {
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 0xffff;
        }
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = 0xffff;
        }
      }
      else if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0x6c61746e;
      }
    }
    else if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0x64666c74;
    }
  }
  else if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0x44464c54;
  }
  return 0;
}



// FUNCTION 1451e01d0 FUN_1451e01d0 body=237 status=ok
// SIG undefined FUN_1451e01d0(void)

undefined8
FUN_1451e01d0(longlong param_1,int param_2,undefined4 param_3,uint param_4,undefined4 *param_5,
             undefined4 *param_6)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  if (param_2 == 0x47504f53) {
    puVar3 = (undefined8 *)FUN_1451e0ef0(param_1 + 200);
  }
  else {
    if (param_2 != 0x47535542) {
      puVar2 = &DAT_149a1f1a0;
      goto LAB_1451e0234;
    }
    puVar3 = (undefined8 *)FUN_1451e0e40(param_1 + 0xc0);
  }
  puVar2 = &DAT_149a1f1a0;
  puVar5 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*puVar3;
  }
  if (9 < *(uint *)(puVar5 + 0x18)) {
    puVar2 = *(undefined1 **)(puVar5 + 0x10);
  }
LAB_1451e0234:
  lVar4 = FUN_1451e8cd0(puVar2,param_3);
  uVar6 = 0;
  if (param_4 != 0) {
    do {
      cVar1 = FUN_1451e1b80(lVar4 + 2,*param_5,param_6);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar6 = uVar6 + 1;
      param_5 = param_5 + 1;
    } while (uVar6 < param_4);
  }
  cVar1 = FUN_1451e1b80(lVar4 + 2,0x64666c74,param_6);
  if ((cVar1 == '\0') && (param_6 != (undefined4 *)0x0)) {
    *param_6 = 0xffff;
  }
  return 0;
}



// FUNCTION 1451e02c0 FUN_1451e02c0 body=276 status=ok
// SIG undefined FUN_1451e02c0(void)

bool FUN_1451e02c0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                  undefined4 *param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  
  if (param_2 == 0x47504f53) {
    puVar2 = (undefined8 *)FUN_1451e0ef0(param_1 + 200);
  }
  else {
    if (param_2 != 0x47535542) {
      puVar7 = &DAT_149a1f1a0;
      goto LAB_1451e0331;
    }
    puVar2 = (undefined8 *)FUN_1451e0e40(param_1 + 0xc0);
  }
  puVar7 = &DAT_149a1f1a0;
  puVar3 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*puVar2;
  }
  if (9 < *(uint *)(puVar3 + 0x18)) {
    puVar7 = *(undefined1 **)(puVar3 + 0x10);
  }
LAB_1451e0331:
  uVar4 = FUN_1451e8cd0(puVar7,param_3);
  lVar5 = FUN_1451e17c0(uVar4,param_4);
  if ((ushort)((ushort)*(byte *)(lVar5 + 2) * 0x100 + (ushort)*(byte *)(lVar5 + 3)) == -1) {
    iVar6 = 0xffff;
  }
  else {
    iVar6 = (uint)*(byte *)(lVar5 + 2) * 0x100 + (uint)*(byte *)(lVar5 + 3);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar6;
  }
  if (param_6 != (undefined4 *)0x0) {
    uVar1 = FUN_1451e8d90(puVar7);
    *param_6 = uVar1;
  }
  return (ushort)((ushort)*(byte *)(lVar5 + 2) * 0x100 + (ushort)*(byte *)(lVar5 + 3)) != -1;
}



// FUNCTION 1451e03e0 FUN_1451e03e0 body=451 status=ok
// SIG undefined FUN_1451e03e0(void)

undefined8
FUN_1451e03e0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
             uint *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  if (param_2 == 0x47504f53) {
    puVar1 = (undefined8 *)FUN_1451e0ef0(param_1 + 200);
  }
  else {
    if (param_2 != 0x47535542) {
      puVar8 = &DAT_149a1f1a0;
      goto LAB_1451e044a;
    }
    puVar1 = (undefined8 *)FUN_1451e0e40(param_1 + 0xc0);
  }
  puVar8 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)*puVar1;
  }
  if (*(uint *)(puVar8 + 0x18) < 10) {
    puVar8 = &DAT_149a1f1a0;
  }
  else {
    puVar8 = *(undefined1 **)(puVar8 + 0x10);
  }
LAB_1451e044a:
  uVar2 = FUN_1451e8cd0(puVar8,param_3);
  lVar3 = FUN_1451e17c0(uVar2,param_4);
  uVar9 = 0;
  uVar7 = (uint)*(byte *)(lVar3 + 4) * 0x100 + (uint)*(byte *)(lVar3 + 5);
  if (uVar7 != 0) {
    do {
      if (uVar9 < (uint)*(byte *)(lVar3 + 4) * 0x100 + (uint)*(byte *)(lVar3 + 5)) {
        pbVar4 = (byte *)(lVar3 + 4) + ((ulonglong)uVar9 + 1) * 2;
      }
      else {
        pbVar4 = &DAT_149a1f194;
      }
      uVar6 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
      if (uVar6 == 0xffff) {
        iVar5 = 0;
      }
      else {
        if ((ushort)((ushort)(byte)puVar8[6] * 0x100 + (ushort)(byte)puVar8[7]) == 0) {
          pbVar4 = &DAT_149a1f1a0;
        }
        else {
          pbVar4 = puVar8 + (ulonglong)(byte)puVar8[7] + (ulonglong)(byte)puVar8[6] * 0x100;
        }
        if (uVar6 < (uint)*pbVar4 * 0x100 + (uint)pbVar4[1]) {
          pbVar4 = pbVar4 + (ulonglong)uVar6 * 6 + 2;
        }
        else {
          pbVar4 = &DAT_149a1f1a0;
        }
        iVar5 = (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000 +
                (uint)pbVar4[3];
      }
      if (param_5 == iVar5) {
        if (param_6 != (uint *)0x0) {
          *param_6 = uVar6;
        }
        return 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = 0xffff;
  }
  return 0;
}



// FUNCTION 1451e05b0 FUN_1451e05b0 body=157 status=ok
// SIG undefined FUN_1451e05b0(void)

int FUN_1451e05b0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  
  if (param_2 == 0x47504f53) {
    puVar1 = (undefined8 *)FUN_1451e0ef0(param_1 + 200);
  }
  else {
    if (param_2 != 0x47535542) {
      puVar3 = &DAT_149a1f1a0;
      goto LAB_1451e060e;
    }
    puVar1 = (undefined8 *)FUN_1451e0e40(param_1 + 0xc0);
  }
  puVar3 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*puVar1;
  }
  if (*(uint *)(puVar3 + 0x18) < 10) {
    puVar3 = &DAT_149a1f1a0;
  }
  else {
    puVar3 = *(undefined1 **)(puVar3 + 0x10);
  }
LAB_1451e060e:
  pbVar2 = &DAT_149a1f1a0;
  if ((ushort)((ushort)(byte)puVar3[8] * 0x100 + (ushort)(byte)puVar3[9]) != 0) {
    pbVar2 = puVar3 + (ulonglong)(byte)puVar3[9] + (ulonglong)(byte)puVar3[8] * 0x100;
  }
  return (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
}



// FUNCTION 1451e0650 FUN_1451e0650 body=130 status=ok
// SIG undefined FUN_1451e0650(void)

undefined1
FUN_1451e0650(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if (param_2 == 0x47504f53) {
    puVar3 = (undefined8 *)FUN_1451e0ef0(param_1 + 200);
  }
  else {
    if (param_2 != 0x47535542) {
      puVar2 = &DAT_149a1f1a0;
      goto LAB_1451e06b1;
    }
    puVar3 = (undefined8 *)FUN_1451e0e40(param_1 + 0xc0);
  }
  puVar2 = &DAT_149a1f1a0;
  puVar4 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*puVar3;
  }
  if (9 < *(uint *)(puVar4 + 0x18)) {
    puVar2 = *(undefined1 **)(puVar4 + 0x10);
  }
LAB_1451e06b1:
  uVar1 = FUN_1451e8f80(puVar2,param_3,param_4,param_5);
  return uVar1;
}



// FUNCTION 1451e06e0 FUN_1451e06e0 body=143 status=ok
// SIG undefined FUN_1451e06e0(void)

void FUN_1451e06e0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  if (param_2 == 0x47504f53) {
    puVar2 = (undefined8 *)FUN_1451e0ef0(param_1 + 200);
  }
  else {
    if (param_2 != 0x47535542) {
      puVar1 = &DAT_149a1f1a0;
      goto LAB_1451e0741;
    }
    puVar2 = (undefined8 *)FUN_1451e0e40(param_1 + 0xc0);
  }
  puVar1 = &DAT_149a1f1a0;
  puVar4 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*puVar2;
  }
  if (9 < *(uint *)(puVar4 + 0x18)) {
    puVar1 = *(undefined1 **)(puVar4 + 0x10);
  }
LAB_1451e0741:
  lVar3 = FUN_1451e9040(puVar1,param_3,param_4);
  FUN_1451e16b0(lVar3 + 2,param_5,param_6,param_7);
  return;
}



// FUNCTION 1451e0770 FUN_1451e0770 body=89 status=ok
// SIG undefined FUN_1451e0770(void)

bool FUN_1451e0770(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  
  puVar1 = (undefined8 *)FUN_1451e0e40(param_1 + 0xc0);
  pbVar3 = &DAT_149a1f1a0;
  puVar2 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*puVar1;
  }
  if (9 < *(uint *)(puVar2 + 0x18)) {
    pbVar3 = *(byte **)(puVar2 + 0x10);
  }
  return (((uint)*pbVar3 * 0x100 + (uint)pbVar3[1]) * 0x100 + (uint)pbVar3[2]) * 0x100 +
         (uint)pbVar3[3] != 0;
}



// FUNCTION 1451e07d0 FUN_1451e07d0 body=275 status=ok
// SIG undefined FUN_1451e07d0(void)

undefined1 FUN_1451e07d0(longlong param_1,uint param_2,uint *param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  longlong local_28;
  uint *local_20;
  int local_18;
  undefined1 local_14;
  undefined4 local_10;
  
  lVar7 = param_1 + 0xc0;
  lVar3 = FUN_1451e0e40(lVar7);
  if (param_2 < *(uint *)(lVar3 + 8)) {
    local_14 = param_5 != 0;
    local_10 = 0;
    local_28 = param_1;
    local_20 = param_3;
    local_18 = param_4;
    puVar4 = (undefined8 *)FUN_1451e0e40(lVar7);
    puVar8 = &DAT_149a1f1a0;
    puVar5 = &DAT_149a1f1a0;
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar4;
    }
    if (9 < *(uint *)(puVar5 + 0x18)) {
      puVar8 = *(undefined1 **)(puVar5 + 0x10);
    }
    uVar6 = FUN_1451e8ee0(puVar8,param_2);
    lVar7 = FUN_1451e0e40(lVar7);
    if (local_18 != 0) {
      puVar9 = (uint *)((ulonglong)param_2 * 0x20 + *(longlong *)(lVar7 + 0x10));
      uVar1 = *local_20;
      if ((((*puVar9 >> (uVar1 >> 4 & 0x1f) & 1) != 0) && ((puVar9[1] >> (uVar1 & 0x1f) & 1) != 0))
         && ((puVar9[2] >> (uVar1 >> 9 & 0x1f) & 1) != 0)) {
        uVar2 = FUN_1451f36d0(uVar6,&local_28);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1451e08f0 FUN_1451e08f0 body=89 status=ok
// SIG undefined FUN_1451e08f0(void)

bool FUN_1451e08f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  
  puVar1 = (undefined8 *)FUN_1451e0ef0(param_1 + 200);
  pbVar3 = &DAT_149a1f1a0;
  puVar2 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*puVar1;
  }
  if (9 < *(uint *)(puVar2 + 0x18)) {
    pbVar3 = *(byte **)(puVar2 + 0x10);
  }
  return (((uint)*pbVar3 * 0x100 + (uint)pbVar3[1]) * 0x100 + (uint)pbVar3[2]) * 0x100 +
         (uint)pbVar3[3] != 0;
}



// FUNCTION 1451e0950 FUN_1451e0950 body=3 status=ok
// SIG undefined FUN_1451e0950(void)

void FUN_1451e0950(void)

{
  return;
}



// FUNCTION 1451e0960 FUN_1451e0960 body=26 status=ok
// SIG undefined FUN_1451e0960(void)

void FUN_1451e0960(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x10);
  *(longlong *)(lVar1 + 8) = lVar2;
  *(ulonglong *)(lVar1 + 0x10) = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x28) + 0x18) + lVar2;
  return;
}



// FUNCTION 1451e0980 FUN_1451e0980 body=14 status=ok
// SIG undefined FUN_1451e0980(void)

undefined4 FUN_1451e0980(longlong param_1)

{
  if (*(char *)(param_1 + 0x59) != '\0') {
    return *(undefined4 *)(param_1 + 100);
  }
  return *(undefined4 *)(param_1 + 0x5c);
}



// FUNCTION 1451e0990 FUN_1451e0990 body=125 status=ok
// SIG undefined FUN_1451e0990(void)

void FUN_1451e0990(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  
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
  *(undefined4 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 100) * 0x14) =
       param_2;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  return;
}



// FUNCTION 1451e0a10 FUN_1451e0a10 body=196 status=ok
// SIG undefined FUN_1451e0a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1451e0a10(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  
  cVar6 = FUN_144b62480(param_1,0,1);
  if (cVar6 != '\0') {
    uVar7 = *(uint *)(param_1 + 0x5c);
    if ((uVar7 != *(uint *)(param_1 + 0x60)) || (*(int *)(param_1 + 100) != 0)) {
      if (uVar7 < *(uint *)(param_1 + 0x60)) {
        lVar8 = *(longlong *)(param_1 + 0x70);
      }
      else {
        uVar7 = *(int *)(param_1 + 100) - 1;
        lVar8 = *(longlong *)(param_1 + 0x78);
      }
      puVar1 = (undefined8 *)(lVar8 + (ulonglong)uVar7 * 0x14);
      uVar5 = puVar1[1];
      uVar3 = *(uint *)(param_1 + 100);
      lVar4 = *(longlong *)(param_1 + 0x78);
      puVar2 = (undefined8 *)(lVar4 + (ulonglong)uVar3 * 0x14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined4 *)(lVar4 + (ulonglong)uVar3 * 0x14 + 0x10) =
           *(undefined4 *)(lVar8 + (ulonglong)uVar7 * 0x14 + 0x10);
      *(undefined4 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 100) * 0x14) =
           param_2;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      return (undefined4 *)
             (*(longlong *)(param_1 + 0x78) + (ulonglong)(*(int *)(param_1 + 100) - 1) * 0x14);
    }
  }
  DAT_14c793f70 = 0;
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 1451e0ae0 FUN_1451e0ae0 body=46 status=ok
// SIG undefined FUN_1451e0ae0(void)

undefined1 FUN_1451e0ae0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return 1;
  }
  uVar1 = FUN_144b62710();
  return uVar1;
}



// FUNCTION 1451e0b10 FUN_1451e0b10 body=168 status=ok
// SIG undefined FUN_1451e0b10(void)

void FUN_1451e0b10(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 *local_18;
  undefined8 local_10;
  
  lVar3 = *(longlong *)(param_3 + 0x18);
  puVar1 = (undefined8 *)FUN_1451e0e40(lVar3 + 0xc0);
  puVar2 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*puVar1;
  }
  if (*(uint *)(puVar2 + 0x18) < 10) {
    local_18 = &DAT_149a1f1a0;
  }
  else {
    local_18 = *(undefined1 **)(puVar2 + 0x10);
  }
  lVar3 = FUN_1451e0e40(lVar3 + 0xc0);
  local_10 = *(undefined8 *)(lVar3 + 0x10);
  FUN_1451f2660(param_1,&local_18,param_2,param_3,param_4);
  return;
}



// FUNCTION 1451e0bc0 FUN_1451e0bc0 body=168 status=ok
// SIG undefined FUN_1451e0bc0(void)

void FUN_1451e0bc0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 *local_18;
  undefined8 local_10;
  
  lVar3 = *(longlong *)(param_3 + 0x18);
  puVar1 = (undefined8 *)FUN_1451e0ef0(lVar3 + 200);
  puVar2 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*puVar1;
  }
  if (*(uint *)(puVar2 + 0x18) < 10) {
    local_18 = &DAT_149a1f1a0;
  }
  else {
    local_18 = *(undefined1 **)(puVar2 + 0x10);
  }
  lVar3 = FUN_1451e0ef0(lVar3 + 200);
  local_10 = *(undefined8 *)(lVar3 + 0x10);
  FUN_1451f2a20(param_1,&local_18,param_2,param_3,param_4);
  return;
}



// FUNCTION 1451e0c70 FUN_1451e0c70 body=238 status=ok
// SIG undefined FUN_1451e0c70(void)

longlong FUN_1451e0c70(longlong *param_1)

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
    lVar2 = param_1[-6];
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
    uVar1 = FUN_144e2d200(lVar2,0x6b65726e);
    lVar2 = FUN_1451f43c0(local_48,uVar1);
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



// FUNCTION 1451e0d60 FUN_1451e0d60 body=215 status=ok
// SIG undefined FUN_1451e0d60(void)

undefined8 * FUN_1451e0d60(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined8 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-0xe];
    if (lVar1 == 0) break;
    puVar2 = (undefined8 *)FUN_142864336(1);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1451e4b60(puVar2,lVar1);
    }
    puVar4 = (undefined8 *)&DAT_149a1f1a0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar4;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar4;
    }
    if ((puVar4 != (undefined8 *)0x0) && (puVar4 != (undefined8 *)&DAT_149a1f1a0)) {
      puVar3 = &DAT_149a1f1a0;
      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)*puVar4;
      }
      FUN_144e3f120(puVar3);
      *puVar4 = 0;
      thunk_FUN_1400020a8(puVar4);
    }
    puVar2 = (undefined8 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return (undefined8 *)&DAT_149a1f1a0;
}



// FUNCTION 1451e0e40 FUN_1451e0e40 body=176 status=ok
// SIG undefined FUN_1451e0e40(void)

undefined1 * FUN_1451e0e40(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined1 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-0xf];
    if (lVar1 == 0) break;
    puVar2 = (undefined1 *)FUN_142864336(1);
    if (puVar2 != (undefined1 *)0x0) {
      FUN_1451f1630(puVar2,lVar1);
    }
    puVar3 = &DAT_149a1f1a0;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar3;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar3;
    }
    if ((puVar3 != (undefined1 *)0x0) && (puVar3 != &DAT_149a1f1a0)) {
      FUN_1451d6060(puVar3);
      thunk_FUN_1400020a8(puVar3);
    }
    puVar2 = (undefined1 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 1451e0ef0 FUN_1451e0ef0 body=176 status=ok
// SIG undefined FUN_1451e0ef0(void)

undefined1 * FUN_1451e0ef0(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined1 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-0x10];
    if (lVar1 == 0) break;
    puVar2 = (undefined1 *)FUN_142864336(1);
    if (puVar2 != (undefined1 *)0x0) {
      FUN_1451edbf0(puVar2,lVar1);
    }
    puVar3 = &DAT_149a1f1a0;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar3;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar3;
    }
    if ((puVar3 != (undefined1 *)0x0) && (puVar3 != &DAT_149a1f1a0)) {
      FUN_1451d5fc0(puVar3);
      thunk_FUN_1400020a8(puVar3);
    }
    puVar2 = (undefined1 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 1451e0fa0 FUN_1451e0fa0 body=241 status=ok
// SIG undefined FUN_1451e0fa0(void)

longlong FUN_1451e0fa0(longlong *param_1)

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
    lVar2 = param_1[-0x14];
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
    uVar1 = FUN_144e2d200(lVar2,0x6d6f7278);
    lVar2 = FUN_1451f4250(local_48,uVar1);
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



// FUNCTION 1451e10a0 FUN_1451e10a0 body=88 status=ok
// SIG undefined FUN_1451e10a0(void)

longlong FUN_1451e10a0(longlong param_1,short param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar1 == 0) {
    iVar1 = FUN_144e2c980();
  }
  lVar3 = (longlong)iVar2 * (longlong)param_2;
  iVar2 = iVar1 / 2;
  if (lVar3 < 0) {
    iVar2 = -iVar2;
  }
  return (iVar2 + lVar3) / (longlong)iVar1;
}



// FUNCTION 1451e1100 FUN_1451e1100 body=68 status=ok
// SIG undefined FUN_1451e1100(void)

bool FUN_1451e1100(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  
  lVar1 = FUN_1451e0c70(param_1 + 0x78);
  pbVar2 = &DAT_149a1f1a0;
  if (3 < *(uint *)(lVar1 + 0x18)) {
    pbVar2 = *(byte **)(lVar1 + 0x10);
  }
  return (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 + (uint)*pbVar2 * 0x1000000 +
         (uint)pbVar2[3] != 0;
}



// FUNCTION 1451e1150 FUN_1451e1150 body=143 status=ok
// SIG undefined FUN_1451e1150(void)

ulonglong FUN_1451e1150(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  lVar1 = FUN_1451e0c70(param_1 + 0x78);
  pbVar7 = &DAT_149a1f1a0;
  if (3 < *(uint *)(lVar1 + 0x18)) {
    pbVar7 = *(byte **)(lVar1 + 0x10);
  }
  pbVar3 = (byte *)0x0;
  iVar4 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
  if (iVar4 == 0) {
    pbVar5 = pbVar7 + 4;
    pbVar3 = (byte *)0x0;
    uVar6 = 0;
    uVar8 = (uint)pbVar7[2] * 0x100 + (uint)pbVar7[3];
    if (uVar8 != 0) {
      do {
        if (pbVar5[4] == 1) {
          return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
        }
        uVar6 = uVar6 + 1;
        pbVar3 = pbVar5 + pbVar5[3];
        pbVar5 = pbVar3 + (ulonglong)pbVar5[2] * 0x100;
      } while (uVar6 < uVar8);
    }
  }
  else if (iVar4 == 1) {
    uVar2 = FUN_1451eea20(pbVar7);
    return uVar2;
  }
  return (ulonglong)pbVar3 & 0xffffffffffffff00;
}



// FUNCTION 1451e11e0 FUN_1451e11e0 body=143 status=ok
// SIG undefined FUN_1451e11e0(void)

ulonglong FUN_1451e11e0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  lVar1 = FUN_1451e0c70(param_1 + 0x78);
  pbVar7 = &DAT_149a1f1a0;
  if (3 < *(uint *)(lVar1 + 0x18)) {
    pbVar7 = *(byte **)(lVar1 + 0x10);
  }
  pbVar3 = (byte *)0x0;
  iVar4 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
  if (iVar4 == 0) {
    pbVar5 = pbVar7 + 4;
    pbVar3 = (byte *)0x0;
    uVar6 = 0;
    uVar8 = (uint)pbVar7[2] * 0x100 + (uint)pbVar7[3];
    if (uVar8 != 0) {
      do {
        if ((pbVar5[5] & 4) != 0) {
          return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
        }
        uVar6 = uVar6 + 1;
        pbVar3 = pbVar5 + pbVar5[3];
        pbVar5 = pbVar3 + (ulonglong)pbVar5[2] * 0x100;
      } while (uVar6 < uVar8);
    }
  }
  else if (iVar4 == 1) {
    uVar2 = FUN_1451eea90(pbVar7);
    return uVar2;
  }
  return (ulonglong)pbVar3 & 0xffffffffffffff00;
}



// FUNCTION 1451e1270 FUN_1451e1270 body=179 status=ok
// SIG undefined FUN_1451e1270(void)

void FUN_1451e1270(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 local_78 [112];
  
  lVar1 = FUN_1451e0c70(*(longlong *)(param_2 + 0x18) + 0x78);
  pbVar3 = &DAT_149a1f1a0;
  if (3 < *(uint *)(lVar1 + 0x18)) {
    pbVar3 = *(byte **)(lVar1 + 0x10);
  }
  FUN_1451fa790(local_78,param_1,param_2,param_3,lVar1);
  iVar2 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar2 == 0) {
    FUN_1451ede20(pbVar3,local_78);
  }
  else if (iVar2 == 1) {
    FUN_1451eeb00(pbVar3,local_78);
  }
  FUN_1451fa8a0(local_78);
  return;
}



// FUNCTION 1451e1330 FUN_1451e1330 body=392 status=ok
// SIG undefined FUN_1451e1330(void)

undefined8 FUN_1451e1330(longlong param_1,int param_2,int param_3,uint *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  if (param_2 == 0x47504f53) {
    puVar1 = (undefined8 *)FUN_1451e0ef0(param_1 + 200);
  }
  else {
    if (param_2 != 0x47535542) {
      puVar6 = &DAT_149a1f1a0;
      goto LAB_1451e13aa;
    }
    puVar1 = (undefined8 *)FUN_1451e0e40(param_1 + 0xc0);
  }
  puVar6 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)*puVar1;
  }
  if (*(uint *)(puVar6 + 0x18) < 10) {
    puVar6 = &DAT_149a1f1a0;
  }
  else {
    puVar6 = *(undefined1 **)(puVar6 + 0x10);
  }
LAB_1451e13aa:
  if ((ushort)((ushort)(byte)puVar6[6] * 0x100 + (ushort)(byte)puVar6[7]) == 0) {
    pbVar3 = &DAT_149a1f1a0;
  }
  else {
    pbVar3 = puVar6 + (ulonglong)(byte)puVar6[7] + (ulonglong)(byte)puVar6[6] * 0x100;
  }
  uVar4 = 0;
  uVar5 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (uVar5 != 0) {
    do {
      if (uVar4 == 0xffff) {
        iVar2 = 0;
      }
      else {
        if ((ushort)((ushort)(byte)puVar6[6] * 0x100 + (ushort)(byte)puVar6[7]) == 0) {
          pbVar3 = &DAT_149a1f1a0;
        }
        else {
          pbVar3 = puVar6 + (ulonglong)(byte)puVar6[7] + (ulonglong)(byte)puVar6[6] * 0x100;
        }
        if (uVar4 < (uint)pbVar3[1] + (uint)*pbVar3 * 0x100) {
          pbVar3 = pbVar3 + (ulonglong)uVar4 * 6 + 2;
        }
        else {
          pbVar3 = &DAT_149a1f1a0;
        }
        iVar2 = (uint)pbVar3[1] * 0x10000 + (uint)pbVar3[2] * 0x100 + (uint)*pbVar3 * 0x1000000 +
                (uint)pbVar3[3];
      }
      if (param_3 == iVar2) {
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar4;
        }
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0xffff;
  }
  return 0;
}



// FUNCTION 1451e14c0 thunk_FUN_1451f2350 body=5 status=ok
// SIG undefined thunk_FUN_1451f2350(void)

void thunk_FUN_1451f2350(longlong param_1,longlong param_2)

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



// FUNCTION 1451e14d0 FUN_1451e14d0 body=330 status=ok
// SIG undefined FUN_1451e14d0(void)

void FUN_1451e14d0(longlong param_1,code *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  char cVar15;
  uint uVar16;
  int iVar18;
  ulonglong uVar19;
  uint *puVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar17;
  
  uVar5 = *(uint *)(param_1 + 0x60);
  uVar19 = 0;
  lVar9 = *(longlong *)(param_1 + 0x80);
  lVar10 = *(longlong *)(param_1 + 0x70);
  if (uVar5 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    return;
  }
  puVar20 = (uint *)(lVar10 + 4);
  uVar17 = uVar19;
  lVar22 = lVar10;
  do {
    cVar15 = (*param_2)(lVar22);
    iVar21 = (int)uVar17;
    iVar18 = (int)uVar19;
    if (cVar15 == '\0') {
      if (iVar18 != iVar21) {
        uVar14 = *(undefined8 *)(puVar20 + 1);
        puVar4 = (undefined8 *)(lVar10 + uVar19 * 0x14);
        *puVar4 = *(undefined8 *)(puVar20 + -1);
        puVar4[1] = uVar14;
        *(uint *)(lVar10 + 0x10 + uVar19 * 0x14) = puVar20[3];
        puVar1 = (undefined4 *)((lVar9 - lVar10) + -4 + (longlong)puVar20);
        uVar11 = puVar1[1];
        uVar12 = puVar1[2];
        uVar13 = puVar1[3];
        puVar2 = (undefined4 *)(lVar9 + uVar19 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar11;
        puVar2[2] = uVar12;
        puVar2[3] = uVar13;
        *(undefined4 *)(lVar9 + 0x10 + uVar19 * 0x14) =
             *(undefined4 *)((lVar9 - lVar10) + 0xc + (longlong)puVar20);
      }
      uVar19 = (ulonglong)(iVar18 + 1);
    }
    else {
      uVar6 = puVar20[1];
      if ((uVar5 <= iVar21 + 1U) || (uVar6 != *(uint *)(lVar22 + 0x1c))) {
        if (iVar18 == 0) {
          if (iVar21 + 1U < uVar5) {
            FUN_144b61d00(param_1,uVar17,iVar21 + 2);
          }
        }
        else {
          uVar7 = *(uint *)(lVar10 + 8 + (ulonglong)(iVar18 - 1) * 0x14);
          if (uVar6 < uVar7) {
            uVar8 = *puVar20;
            uVar17 = uVar19;
            do {
              uVar16 = (int)uVar17 - 1;
              uVar17 = (ulonglong)uVar16;
              if (*(uint *)(lVar10 + 8 + uVar17 * 0x14) != uVar7) break;
              if (*(uint *)(lVar10 + 8 + uVar17 * 0x14) != uVar6) {
                if ((uVar8 & 1) == 0) {
                  puVar3 = (uint *)(lVar10 + 4 + uVar17 * 0x14);
                  *puVar3 = *puVar3 & 0xfffffffe;
                }
                else {
                  puVar3 = (uint *)(lVar10 + 4 + uVar17 * 0x14);
                  *puVar3 = *puVar3 | 1;
                }
              }
              *(uint *)(lVar10 + 8 + uVar17 * 0x14) = uVar6;
            } while (uVar16 != 0);
          }
        }
      }
    }
    uVar17 = (ulonglong)(iVar21 + 1U);
    lVar22 = lVar22 + 0x14;
    puVar20 = puVar20 + 5;
    if (uVar5 <= iVar21 + 1U) {
      *(int *)(param_1 + 0x60) = (int)uVar19;
      return;
    }
  } while( true );
}



// FUNCTION 1451e1620 thunk_FUN_1451f2ef0 body=5 status=ok
// SIG undefined thunk_FUN_1451f2ef0(void)

void thunk_FUN_1451f2ef0(longlong param_1,longlong param_2,undefined8 param_3)

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



// FUNCTION 1451e1630 FUN_1451e1630 body=52 status=ok
// SIG undefined FUN_1451e1630(void)

void FUN_1451e1630(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(uint *)(param_2 + 0x60) != 0) {
    lVar1 = 0;
    uVar2 = (ulonglong)*(uint *)(param_2 + 0x60);
    do {
      lVar1 = lVar1 + 0x14;
      *(undefined1 *)(*(longlong *)(param_2 + 0x80) + -2 + lVar1) = 0;
      *(undefined2 *)(*(longlong *)(param_2 + 0x80) + -4 + lVar1) = 0;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1451e1670 FUN_1451e1670 body=3 status=ok
// SIG undefined FUN_1451e1670(void)

void FUN_1451e1670(void)

{
  return;
}



// FUNCTION 1451e1680 thunk_FUN_1451ed860 body=5 status=ok
// SIG undefined thunk_FUN_1451ed860(void)

void thunk_FUN_1451ed860(undefined8 param_1,longlong param_2)

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
  uint auStackX_10 [2];
  
  lVar5 = FUN_144b61720(param_2,auStackX_10);
  uVar4 = *(uint *)(param_2 + 0x38);
  if (((*(byte *)(param_2 + 0x28) & 8) != 0) && (uVar11 = 0, auStackX_10[0] != 0)) {
    do {
      uVar12 = (ulonglong)uVar11;
      lVar13 = uVar12 * 5;
      sVar3 = *(short *)(lVar5 + 0x10 + uVar12 * 0x14);
      bVar2 = *(byte *)(lVar5 + 0x12 + uVar12 * 0x14);
      if (sVar3 != 0) {
        uVar9 = (int)sVar3 + uVar11;
        uVar10 = (ulonglong)uVar9;
        *(undefined2 *)(lVar5 + 0x10 + uVar12 * 0x14) = 0;
        if (uVar9 < auStackX_10[0]) {
          FUN_1451edac0(lVar5,auStackX_10[0],uVar9,uVar4);
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
    } while (uVar11 < auStackX_10[0]);
  }
  return;
}



// FUNCTION 1451e1690 FUN_1451e1690 body=28 status=ok
// SIG undefined FUN_1451e1690(void)

byte FUN_1451e1690(longlong param_1)

{
  uint uVar1;
  
  do {
    uVar1 = *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = uVar1 + 1;
  } while ((uVar1 & 7) == 0);
  return (byte)uVar1 & 7;
}



// FUNCTION 1451e16b0 FUN_1451e16b0 body=130 status=ok
// SIG undefined FUN_1451e16b0(void)

int FUN_1451e16b0(byte *param_1,uint param_2,uint *param_3,int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (param_3 != (uint *)0x0) {
    uVar6 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    uVar4 = 0;
    if (param_2 <= uVar6) {
      uVar4 = uVar6 - param_2;
    }
    pbVar3 = param_1 + ((ulonglong)param_2 + 1) * 2;
    uVar6 = *param_3;
    if (uVar4 < *param_3) {
      uVar6 = uVar4;
    }
    *param_3 = uVar6;
    if (uVar6 != 0) {
      uVar5 = (ulonglong)uVar6;
      do {
        bVar2 = *pbVar3;
        pbVar1 = pbVar3 + 1;
        pbVar3 = pbVar3 + 2;
        *param_4 = (uint)*pbVar1 + (uint)bVar2 * 0x100;
        uVar5 = uVar5 - 1;
        param_4 = param_4 + 1;
      } while (uVar5 != 0);
    }
  }
  return (uint)*param_1 * 0x100 + (uint)param_1[1];
}



// FUNCTION 1451e1740 FUN_1451e1740 body=120 status=ok
// SIG undefined FUN_1451e1740(void)

undefined8 FUN_1451e1740(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,6);
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



// FUNCTION 1451e17c0 FUN_1451e17c0 body=156 status=ok
// SIG undefined FUN_1451e17c0(void)

byte * FUN_1451e17c0(byte *param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 == 0xffff) {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) {
      return param_1 + (ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100;
    }
  }
  else {
    if (param_2 < (uint)param_1[2] * 0x100 + (uint)param_1[3]) {
      pbVar1 = param_1 + ((ulonglong)param_2 * 3 + 2) * 2;
    }
    else {
      pbVar1 = &DAT_149a1f1a0;
    }
    if ((ushort)((ushort)pbVar1[4] * 0x100 + (ushort)pbVar1[5]) != 0) {
      return param_1 + (ulonglong)pbVar1[5] + (ulonglong)pbVar1[4] * 0x100;
    }
  }
  return &DAT_149a1f170;
}



// FUNCTION 1451e1860 FUN_1451e1860 body=151 status=ok
// SIG undefined FUN_1451e1860(void)

bool FUN_1451e1860(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e1900 FUN_1451e1900 body=152 status=ok
// SIG undefined FUN_1451e1900(void)

undefined8 FUN_1451e1900(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451e1860();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (cVar1 = FUN_1451e1740((ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],param_2,0)
     , cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 1451e19a0 FUN_1451e19a0 body=253 status=ok
// SIG undefined FUN_1451e19a0(void)

undefined8 FUN_1451e19a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,6);
  if ((cVar1 != '\0') && (cVar1 = FUN_1451e1860(param_1 + 4,param_2,param_3), cVar1 != '\0')) {
    if ((ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)) != 0) {
      lVar2 = (ulonglong)*(byte *)(param_1 + 4) * 0x100 + param_3 +
              (ulonglong)*(byte *)(param_1 + 5);
      cVar1 = FUN_144e2c5c0(param_2,lVar2,6);
      if (((cVar1 == '\0') || (cVar1 = FUN_144e2c5c0(param_2,lVar2 + 4,2), cVar1 == '\0')) ||
         (cVar1 = FUN_144e2c5c0(param_2,lVar2 + 6,
                                ((uint)*(byte *)(lVar2 + 4) * 0x100 + (uint)*(byte *)(lVar2 + 5)) *
                                2), cVar1 == '\0')) {
        cVar1 = FUN_144e2d280(param_2,param_1 + 4,2);
        if (cVar1 == '\0') {
          return 0;
        }
        *(undefined2 *)(param_1 + 4) = 0;
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1451e1aa0 FUN_1451e1aa0 body=218 status=ok
// SIG undefined FUN_1451e1aa0(void)

undefined8 FUN_1451e1aa0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 6),
     cVar1 != '\0')) {
    uVar3 = 0;
    uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (uVar4 != 0) {
      do {
        cVar1 = FUN_1451e19a0(param_1 + uVar3 * 6 + 2,param_2,param_3);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < uVar4);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1451e1b80 FUN_1451e1b80 body=175 status=ok
// SIG undefined FUN_1451e1b80(void)

undefined8 FUN_1451e1b80(byte *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar2;
  
  iVar5 = 0;
  iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1] + -1;
  if (-1 < iVar4) {
    do {
      uVar1 = (uint)(iVar5 + iVar4) >> 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = (uint)param_1[uVar2 * 6 + 3] * 0x10000 + (uint)param_1[uVar2 * 6 + 4] * 0x100 +
              (uint)param_1[uVar2 * 6 + 2] * 0x1000000 + (uint)(param_1 + uVar2 * 6 + 2)[3];
      if (param_2 < uVar3) {
        iVar4 = uVar1 - 1;
      }
      else {
        if (param_2 == uVar3) {
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar1;
          }
          return 1;
        }
        iVar5 = uVar1 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0xffff;
  }
  return 0;
}



// FUNCTION 1451e1c30 FUN_1451e1c30 body=265 status=ok
// SIG undefined FUN_1451e1c30(void)

ulonglong FUN_1451e1c30(byte *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,10);
  if ((char)uVar1 != '\0') {
    uVar1 = 0;
    uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if ((uVar2 != 0) &&
       ((((((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 0 &&
           ((ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) == 0)) &&
          ((ushort)((ushort)param_1[6] * 0x100 + (ushort)param_1[7]) == 0)) &&
         (uVar1 = 0, (ushort)((ushort)param_1[8] * 0x100 + (ushort)param_1[9]) == 0)) ||
        (((uVar1 = 0, (ushort)((ushort)param_1[6] * 0x100 + (ushort)param_1[7]) <= uVar2 &&
          (uVar1 = 0, uVar2 <= (ushort)((ushort)param_1[8] * 0x100 + (ushort)param_1[9]))) &&
         ((uVar1 = 0, 0xff < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) &&
          (uVar1 = 0x7fff, (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) < 0x8000)))))))
       ) {
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451e1d40 FUN_1451e1d40 body=194 status=ok
// SIG undefined FUN_1451e1d40(void)

undefined8 FUN_1451e1d40(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x73697a65) {
    uVar2 = FUN_1451e1c30();
    return uVar2;
  }
  if ((param_3 & 0xffff0000) == 0x73730000) {
    uVar2 = FUN_144e2c5c0(param_2,param_1,4);
    return uVar2;
  }
  if ((param_3 & 0xffff0000) != 0x63760000) {
    return 1;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_1,0xe);
  if (((cVar1 != '\0') && (cVar1 = FUN_144e2c5c0(param_2,param_1 + 0xc,2), cVar1 != '\0')) &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 0xe,
                            ((uint)*(byte *)(param_1 + 0xc) * 0x100 + (uint)*(byte *)(param_1 + 0xd)
                            ) * 3), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1451e1e10 FUN_1451e1e10 body=477 status=ok
// SIG undefined FUN_1451e1e10(void)

undefined8 FUN_1451e1e10(byte *param_1,undefined8 param_2,int *param_3)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  byte local_res20;
  byte bStackX_21;
  
  cVar2 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = FUN_144e2c5c0(param_2,param_1 + 2,2);
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = FUN_144e2c5c0(param_2,param_1 + 4,((uint)param_1[2] * 0x100 + (uint)param_1[3]) * 2);
  if (cVar2 == '\0') {
    return 0;
  }
  sVar1 = *(short *)param_1;
  local_res20 = (byte)sVar1;
  bStackX_21 = (byte)((ushort)sVar1 >> 8);
  if (param_3 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *param_3;
  }
  cVar2 = FUN_1451e1ff0(param_1,param_2,param_1);
  if (cVar2 == '\0') {
LAB_1451e1fde:
    uVar4 = 0;
  }
  else {
    if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
       (cVar2 = FUN_1451e1d40(param_1 + (ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100,param_2,
                              iVar6), cVar2 == '\0')) {
      cVar2 = FUN_144e2d280(param_2,param_1,2);
      if (cVar2 == '\0') goto LAB_1451e1fde;
      param_1[0] = 0;
      param_1[1] = 0;
    }
    if ((((((ushort)(sVar1 * 0x100 + (ushort)bStackX_21) != 0) &&
          ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0)) && (param_3 != (int *)0x0)
         ) && ((*param_3 == 0x73697a65 && (*(byte **)(param_3 + 2) != (byte *)0x0)))) &&
       (*(byte **)(param_3 + 2) < param_1)) {
      uVar5 = (((uint)local_res20 * 0x100 + (uint)bStackX_21) - (int)param_1) + param_3[2];
      bVar3 = (byte)(uVar5 >> 8);
      if (((uint)bVar3 * 0x100 + (uVar5 & 0xff) == uVar5) &&
         (cVar2 = FUN_144e2d280(param_2,param_1,2), cVar2 != '\0')) {
        *(ushort *)param_1 = CONCAT11((char)uVar5,bVar3);
        cVar2 = FUN_1451e2090(param_1,param_2,param_1,*param_3);
        if (cVar2 == '\0') goto LAB_1451e1fde;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1451e1ff0 FUN_1451e1ff0 body=151 status=ok
// SIG undefined FUN_1451e1ff0(void)

bool FUN_1451e1ff0(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e2090 FUN_1451e2090 body=151 status=ok
// SIG undefined FUN_1451e2090(void)

undefined8 FUN_1451e2090(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1451e1ff0();
  if (cVar1 == '\0') {
LAB_1451e2110:
    uVar2 = 0;
  }
  else {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) {
      cVar1 = FUN_1451e1d40((ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],param_2,
                            param_4);
      if (cVar1 == '\0') {
        cVar1 = FUN_144e2d280(param_2,param_1,2);
        if (cVar1 == '\0') goto LAB_1451e2110;
        param_1[0] = 0;
        param_1[1] = 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1451e2130 FUN_1451e2130 body=140 status=ok
// SIG undefined FUN_1451e2130(void)

uint FUN_1451e2130(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = (uint)*(byte *)(param_1 + 2) * 0x100 + (*(byte *)(param_1 + 3) - 1);
  if (-1 < iVar3) {
    do {
      uVar1 = (uint)(iVar4 + iVar3) >> 1;
      uVar2 = (uint)(ushort)((ushort)*(byte *)(param_1 + 4 + (ulonglong)uVar1 * 2) * 0x100 +
                            (ushort)*(byte *)(param_1 + 5 + (ulonglong)uVar1 * 2));
      if (param_2 < uVar2) {
        iVar3 = uVar1 - 1;
      }
      else {
        if (param_2 == uVar2) {
          return uVar1;
        }
        iVar4 = uVar1 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  return 0xffffffff;
}



// FUNCTION 1451e21c0 FUN_1451e21c0 body=98 status=ok
// SIG undefined FUN_1451e21c0(void)

undefined8 FUN_1451e21c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,(byte *)(param_1 + 2),2);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,
                          ((uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3)) * 2)
    ;
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451e2230 FUN_1451e2230 body=97 status=ok
// SIG undefined FUN_1451e2230(void)

undefined8 FUN_1451e2230(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451e22a0 FUN_1451e22a0 body=237 status=ok
// SIG undefined FUN_1451e22a0(void)

int FUN_1451e22a0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar4;
  
  lVar1 = param_1 + 4;
  iVar7 = 0;
  iVar6 = (uint)*(byte *)(param_1 + 2) * 0x100 + (*(byte *)(param_1 + 3) - 1);
  if (-1 < iVar6) {
    do {
      uVar3 = (uint)(iVar6 + iVar7) >> 1;
      uVar4 = (ulonglong)uVar3;
      lVar2 = lVar1 + uVar4 * 6;
      if (param_2 < (uint)*(byte *)(lVar1 + uVar4 * 6) * 0x100 +
                    (uint)*(byte *)(param_1 + 5 + uVar4 * 6)) {
        iVar6 = uVar3 - 1;
      }
      else {
        if (param_2 <= (uint)*(byte *)(lVar2 + 2) * 0x100 + (uint)*(byte *)(lVar2 + 3)) {
          pbVar5 = (byte *)(lVar1 + (ulonglong)uVar3 * 6);
          goto LAB_1451e2326;
        }
        iVar7 = uVar3 + 1;
      }
    } while (iVar7 <= iVar6);
  }
  pbVar5 = (byte *)&DAT_149a1f17c;
LAB_1451e2326:
  if ((ushort)((ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1]) <=
      (ushort)((ushort)pbVar5[2] * 0x100 + (ushort)pbVar5[3])) {
    return ((((uint)pbVar5[4] - (uint)*pbVar5) * 0x100 + (uint)pbVar5[5]) - (uint)pbVar5[1]) +
           param_2;
  }
  return -1;
}



// FUNCTION 1451e2390 FUN_1451e2390 body=162 status=ok
// SIG undefined FUN_1451e2390(void)

undefined8 FUN_1451e2390(byte *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar3 == 1) {
      uVar2 = FUN_1451e21c0(param_1,param_2);
      return uVar2;
    }
    if (iVar3 != 2) {
      return 1;
    }
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,2);
    if ((cVar1 != '\0') &&
       (cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,((uint)param_1[2] * 0x100 + (uint)param_1[3]) * 6)
       , cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451e2440 FUN_1451e2440 body=120 status=ok
// SIG undefined FUN_1451e2440(void)

undefined8 FUN_1451e2440(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,6);
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



// FUNCTION 1451e24c0 FUN_1451e24c0 body=182 status=ok
// SIG undefined FUN_1451e24c0(void)

int FUN_1451e24c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar3;
  
  iVar5 = 0;
  iVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3) + -1;
  if (-1 < iVar4) {
    do {
      uVar2 = (uint)(iVar4 + iVar5) >> 1;
      uVar3 = (ulonglong)uVar2;
      lVar1 = param_1 + 4 + uVar3 * 6;
      if (param_2 < (uint)*(byte *)(param_1 + 5 + uVar3 * 6) +
                    (uint)*(byte *)(param_1 + 4 + uVar3 * 6) * 0x100) {
        iVar4 = uVar2 - 1;
      }
      else {
        if (param_2 <= (uint)*(byte *)(lVar1 + 2) * 0x100 + (uint)*(byte *)(lVar1 + 3)) {
          return (uint)*(byte *)(param_1 + 8 + (ulonglong)uVar2 * 6) * 0x100 +
                 (uint)*(byte *)(param_1 + 9 + (ulonglong)uVar2 * 6);
        }
        iVar5 = uVar2 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return 0;
}



// FUNCTION 1451e2580 FUN_1451e2580 body=116 status=ok
// SIG undefined FUN_1451e2580(void)

ulonglong FUN_1451e2580(byte *param_1,int param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar5 == 1) {
    pbVar1 = param_1 + 4;
    uVar4 = (param_2 + (uint)param_1[2] * -0x100) - (uint)param_1[3];
    if ((uint)*pbVar1 * 0x100 + (uint)param_1[5] <= uVar4) {
      return 0;
    }
    lVar3 = (ulonglong)uVar4 + 1;
    return (ulonglong)((uint)pbVar1[lVar3 * 2] * 0x100 + (uint)pbVar1[lVar3 * 2 + 1]);
  }
  if (iVar5 != 2) {
    return 0;
  }
  uVar2 = FUN_1451e24c0();
  return uVar2;
}



// FUNCTION 1451e2600 FUN_1451e2600 body=162 status=ok
// SIG undefined FUN_1451e2600(void)

undefined8 FUN_1451e2600(byte *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar3 == 1) {
      uVar2 = FUN_1451e2440(param_1,param_2);
      return uVar2;
    }
    if (iVar3 != 2) {
      return 1;
    }
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,2);
    if ((cVar1 != '\0') &&
       (cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,((uint)param_1[2] * 0x100 + (uint)param_1[3]) * 6)
       , cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451e26b0 FUN_1451e26b0 body=147 status=ok
// SIG undefined FUN_1451e26b0(void)

int FUN_1451e26b0(byte *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
    iVar1 = 0;
    iVar2 = iVar1;
    if ((uint)param_1[2] * 0x100 + (uint)param_1[3] < param_3) {
      iVar2 = *(int *)(param_2 + (ulonglong)CONCAT11(param_1[2],param_1[3]) * 4);
    }
    if (((short)((ushort)param_1[5] + (ushort)param_1[4] * 0x100) <= iVar2) &&
       (iVar2 <= (short)((ushort)param_1[7] + (ushort)param_1[6] * 0x100))) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 0;
}



// FUNCTION 1451e2750 FUN_1451e2750 body=105 status=ok
// SIG undefined FUN_1451e2750(void)

undefined8 FUN_1451e2750(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
    return 1;
  }
  uVar1 = FUN_144e2c5c0(param_2,param_1,8);
  return uVar1;
}



// FUNCTION 1451e27c0 FUN_1451e27c0 body=216 status=ok
// SIG undefined FUN_1451e27c0(void)

undefined8 FUN_1451e27c0(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  pbVar2 = param_1;
  if (uVar5 != 0) {
    do {
      bVar1 = pbVar2[4];
      if ((uint)pbVar2[2] * 0x1000000 + (uint)pbVar2[3] * 0x10000 + (uint)bVar1 * 0x100 +
          (uint)pbVar2[5] == 0) {
        pbVar4 = &DAT_149a1f1a0;
      }
      else {
        pbVar4 = param_1 + (ulonglong)pbVar2[5] +
                           (((ulonglong)pbVar2[3] + (ulonglong)pbVar2[2] * 0x100) * 0x100 +
                           (ulonglong)bVar1) * 0x100;
      }
      cVar3 = FUN_1451e26b0(pbVar4,param_2,param_3);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar6 = uVar6 + 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar6 < uVar5);
  }
  return 1;
}



// FUNCTION 1451e28a0 FUN_1451e28a0 body=148 status=ok
// SIG undefined FUN_1451e28a0(void)

bool FUN_1451e28a0(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e2940 FUN_1451e2940 body=177 status=ok
// SIG undefined FUN_1451e2940(void)

undefined8 FUN_1451e2940(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451e28a0();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_1451e2750((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 1451e2a00 FUN_1451e2a00 body=211 status=ok
// SIG undefined FUN_1451e2a00(void)

undefined8 FUN_1451e2a00(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 4),
     cVar1 != '\0')) {
    uVar3 = 0;
    uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (uVar4 != 0) {
      do {
        cVar1 = FUN_1451e2940(param_1 + uVar3 * 4 + 2,param_2,param_3);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < uVar4);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1451e2ae0 FUN_1451e2ae0 body=148 status=ok
// SIG undefined FUN_1451e2ae0(void)

bool FUN_1451e2ae0(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e2b80 FUN_1451e2b80 body=184 status=ok
// SIG undefined FUN_1451e2b80(void)

undefined8 FUN_1451e2b80(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451e2ae0();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_1451e1e10((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                            ,0), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 1451e2cf0 FUN_1451e2cf0 body=114 status=ok
// SIG undefined FUN_1451e2cf0(void)

undefined8 FUN_1451e2cf0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
      cVar1 = FUN_1451e2d70(param_1 + 4,param_2,param_1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451e2d70 FUN_1451e2d70 body=421 status=ok
// SIG undefined FUN_1451e2d70(void)

undefined8 FUN_1451e2d70(byte *param_1,int *param_2,undefined8 param_3)

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
     (cVar2 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 6),
     cVar2 == '\0')) {
    return 0;
  }
  uVar6 = 0;
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar4 != 0) {
    do {
      pbVar7 = param_1 + uVar6 * 6 + 2;
      if ((((pbVar7 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < pbVar7)) ||
          ((uint)(param_2[4] - (int)pbVar7) < 6)) ||
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
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",pbVar7,pbVar7 + 6,6,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if ((cVar2 == '\0') || (cVar2 = FUN_1451e2b80(pbVar7 + 2,param_2,param_3), cVar2 == '\0')) {
        return 0;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar4);
  }
  return 1;
}



// FUNCTION 1451e2f20 FUN_1451e2f20 body=148 status=ok
// SIG undefined FUN_1451e2f20(void)

bool FUN_1451e2f20(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e2fc0 FUN_1451e2fc0 body=184 status=ok
// SIG undefined FUN_1451e2fc0(void)

undefined8 FUN_1451e2fc0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1451e2f20();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (lVar2 = (((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 + (ulonglong)param_1[2]
              ) * 0x100 + param_3 + (ulonglong)param_1[3],
     cVar1 = FUN_1451e2a00(lVar2,param_2,lVar2), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 1451e3080 FUN_1451e3080 body=148 status=ok
// SIG undefined FUN_1451e3080(void)

bool FUN_1451e3080(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e3120 FUN_1451e3120 body=177 status=ok
// SIG undefined FUN_1451e3120(void)

undefined8 FUN_1451e3120(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451e3080();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_1451e2cf0((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 1451e31e0 FUN_1451e31e0 body=242 status=ok
// SIG undefined FUN_1451e31e0(void)

undefined8 FUN_1451e31e0(longlong param_1,undefined8 param_2,undefined4 param_3,uint *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
          (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar4 != 0) {
    pbVar3 = (byte *)(param_1 + 10);
    do {
      if ((uint)pbVar3[-2] * 0x1000000 + (uint)pbVar3[-1] * 0x10000 + (uint)*pbVar3 * 0x100 +
          (uint)pbVar3[1] == 0) {
        puVar2 = &DAT_149a1f1a0;
      }
      else {
        puVar2 = (undefined1 *)
                 ((((ulonglong)pbVar3[-1] + (ulonglong)pbVar3[-2] * 0x100) * 0x100 +
                  (ulonglong)*pbVar3) * 0x100 + param_1 + (ulonglong)pbVar3[1]);
      }
      cVar1 = FUN_1451e27c0(puVar2,param_2,param_3);
      if (cVar1 != '\0') {
        *param_4 = uVar5;
        return 1;
      }
      uVar5 = uVar5 + 1;
      pbVar3 = pbVar3 + 8;
    } while (uVar5 < uVar4);
  }
  *param_4 = 0xffffffff;
  return 0;
}



// FUNCTION 1451e32e0 FUN_1451e32e0 body=321 status=ok
// SIG undefined FUN_1451e32e0(void)

byte * FUN_1451e32e0(longlong param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = &DAT_149a1f1a0;
  if (param_2 < (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
                (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7)) {
    puVar2 = (undefined1 *)(param_1 + ((ulonglong)param_2 + 1) * 8);
  }
  else {
    puVar2 = &DAT_149a1f1a0;
  }
  if ((uint)(byte)puVar2[4] * 0x1000000 + (uint)(byte)puVar2[6] * 0x100 +
      (uint)(byte)puVar2[5] * 0x10000 + (uint)(byte)puVar2[7] != 0) {
    pbVar4 = (byte *)((((ulonglong)(byte)puVar2[5] + (ulonglong)(byte)puVar2[4] * 0x100) * 0x100 +
                      (ulonglong)(byte)puVar2[6]) * 0x100 + param_1 + (ulonglong)(byte)puVar2[7]);
  }
  uVar3 = 0;
  uVar5 = (uint)pbVar4[4] * 0x100 + (uint)pbVar4[5];
  pbVar1 = pbVar4;
  if (uVar5 != 0) {
    do {
      if ((uint)pbVar1[7] + (uint)pbVar1[6] * 0x100 == param_3) {
        if ((uint)pbVar1[8] * 0x1000000 + (uint)pbVar1[10] * 0x100 + (uint)pbVar1[9] * 0x10000 +
            (uint)pbVar1[0xb] != 0) {
          return pbVar4 + (ulonglong)pbVar1[0xb] +
                          ((ulonglong)CONCAT11(pbVar1[8],pbVar1[9]) * 0x100 + (ulonglong)pbVar1[10])
                          * 0x100;
        }
        return &DAT_149a1f1a0;
      }
      uVar3 = uVar3 + 1;
      pbVar1 = pbVar1 + 6;
    } while (uVar3 < uVar5);
  }
  return (byte *)0x0;
}



// FUNCTION 1451e3380 FUN_1451e3380 body=114 status=ok
// SIG undefined FUN_1451e3380(void)

undefined8 FUN_1451e3380(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
      cVar1 = FUN_1451e3400(param_1 + 4,param_2,param_1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451e3400 FUN_1451e3400 body=177 status=ok
// SIG undefined FUN_1451e3400(void)

undefined1 FUN_1451e3400(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_1451e34c0();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = 0;
  uVar4 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (uVar4 != 0) {
    do {
      cVar1 = FUN_1451e2fc0(param_1 + uVar3 * 8 + 4,param_2,param_3);
      if ((cVar1 == '\0') ||
         (cVar1 = FUN_1451e3120(param_1 + uVar3 * 8 + 8,param_2,param_3), cVar1 == '\0')) {
        return 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar4);
  }
  return 1;
}



// FUNCTION 1451e34c0 FUN_1451e34c0 body=131 status=ok
// SIG undefined FUN_1451e34c0(void)

undefined8 FUN_1451e34c0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x1fffffff) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 8);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451e3550 FUN_1451e3550 body=145 status=ok
// SIG undefined FUN_1451e3550(void)

int FUN_1451e3550(byte *param_1)

{
  int iVar1;
  
  iVar1 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (iVar1 - 1U < 3) {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) <=
        (ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3])) {
      return ((((uint)param_1[2] - (uint)*param_1) * 0x100 + (uint)param_1[3]) - (uint)param_1[1] >>
             (4U - (char)iVar1 & 0x1f)) * 2 + 8;
    }
  }
  return 6;
}



// FUNCTION 1451e35f0 FUN_1451e35f0 body=89 status=ok
// SIG undefined FUN_1451e35f0(void)

undefined4 FUN_1451e35f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,6);
  if (cVar1 != '\0') {
    uVar2 = FUN_1451e3550(param_1);
    cVar1 = FUN_144e2c5c0(param_2,param_1,uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451e3650 FUN_1451e3650 body=245 status=ok
// SIG undefined FUN_1451e3650(void)

uint FUN_1451e3650(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  iVar3 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (((iVar3 - 1U < 3) && (uVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1], uVar2 <= param_2)) &&
     (param_2 <= (uint)param_1[2] * 0x100 + (uint)param_1[3])) {
    param_2 = param_2 - uVar2;
    param_1 = param_1 + 6;
    bVar1 = (byte)iVar3;
    pbVar5 = &DAT_149a1f1a0;
    if (param_1 <= param_1 + (ulonglong)(param_2 >> (4 - bVar1 & 0x3f)) * 2) {
      pbVar5 = param_1 + (ulonglong)(param_2 >> (4 - bVar1 & 0x3f)) * 2;
    }
    uVar4 = 0xffff >> (0x10U - (char)(1 << (bVar1 & 0x1f)) & 0x1f);
    uVar2 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1] >>
            (0x10U - (char)(((1 << (4 - bVar1 & 0x1f)) - 1U & (ushort)param_2) + 1 << (bVar1 & 0x1f)
                           ) & 0x1f) & uVar4;
    if (uVar4 + 1 >> 1 <= uVar2) {
      uVar2 = uVar2 + (-1 - uVar4);
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 1451e3750 FUN_1451e3750 body=144 status=ok
// SIG undefined FUN_1451e3750(void)

int FUN_1451e3750(byte *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = (float)FUN_144e320c0(param_3,(uint)*param_1 * 0x100 + (uint)param_1[1],
                               (uint)param_1[2] * 0x100 + (uint)param_1[3],
                               *(undefined8 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x34));
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0x2c);
  if (uVar2 == 0) {
    uVar2 = FUN_144e2c980();
  }
  dVar4 = (double)round((double)(((float)iVar1 * fVar3) / (float)uVar2));
  return (int)dVar4;
}



// FUNCTION 1451e37e0 FUN_1451e37e0 body=144 status=ok
// SIG undefined FUN_1451e37e0(void)

int FUN_1451e37e0(byte *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = (float)FUN_144e320c0(param_3,(uint)*param_1 * 0x100 + (uint)param_1[1],
                               (uint)param_1[2] * 0x100 + (uint)param_1[3],
                               *(undefined8 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x34));
  iVar1 = *(int *)(param_2 + 0x24);
  uVar2 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0x2c);
  if (uVar2 == 0) {
    uVar2 = FUN_144e2c980();
  }
  dVar4 = (double)round((double)(((float)iVar1 * fVar3) / (float)uVar2));
  return (int)dVar4;
}



// FUNCTION 1451e3870 FUN_1451e3870 body=103 status=ok
// SIG undefined FUN_1451e3870(void)

longlong FUN_1451e3870(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
  if (uVar3 != 0) {
    if (uVar3 < 4) {
      if (*(int *)(param_2 + 0x28) != 0) {
        iVar1 = FUN_1451e3650(param_1,*(undefined4 *)(param_2 + 0x28));
        if (iVar1 != 0) {
          return ((longlong)*(int *)(param_2 + 0x20) * (longlong)iVar1) /
                 (longlong)(ulonglong)*(uint *)(param_2 + 0x28);
        }
      }
    }
    else if (uVar3 == 0x8000) {
      lVar2 = FUN_1451e3750();
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1451e38e0 FUN_1451e38e0 body=103 status=ok
// SIG undefined FUN_1451e38e0(void)

longlong FUN_1451e38e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
  if (uVar3 != 0) {
    if (uVar3 < 4) {
      if (*(int *)(param_2 + 0x2c) != 0) {
        iVar1 = FUN_1451e3650(param_1,*(undefined4 *)(param_2 + 0x2c));
        if (iVar1 != 0) {
          return ((longlong)*(int *)(param_2 + 0x24) * (longlong)iVar1) /
                 (longlong)(ulonglong)*(uint *)(param_2 + 0x2c);
        }
      }
    }
    else if (uVar3 == 0x8000) {
      lVar2 = FUN_1451e37e0();
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1451e3950 FUN_1451e3950 body=163 status=ok
// SIG undefined FUN_1451e3950(void)

undefined8 FUN_1451e3950(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1 + 4,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar2 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
  if (uVar2 != 0) {
    if (uVar2 < 4) {
      uVar1 = FUN_1451e35f0(param_1,param_2);
      return uVar1;
    }
    if (uVar2 == 0x8000) {
      uVar1 = FUN_144e2c5c0(param_2,param_1,6);
      return uVar1;
    }
  }
  return 1;
}



// FUNCTION 1451e3a00 FUN_1451e3a00 body=151 status=ok
// SIG undefined FUN_1451e3a00(void)

bool FUN_1451e3a00(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e3aa0 FUN_1451e3aa0 body=149 status=ok
// SIG undefined FUN_1451e3aa0(void)

undefined8 FUN_1451e3aa0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451e3a00();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (cVar1 = FUN_1451e2390((ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],param_2),
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



// FUNCTION 1451e3b40 FUN_1451e3b40 body=151 status=ok
// SIG undefined FUN_1451e3b40(void)

bool FUN_1451e3b40(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e3be0 FUN_1451e3be0 body=350 status=ok
// SIG undefined FUN_1451e3be0(void)

undefined8 FUN_1451e3be0(byte *param_1,undefined8 param_2,longlong param_3)

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
          cVar1 = FUN_1451e3b40(pbVar2,param_2,param_3);
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



// FUNCTION 1451e3d40 FUN_1451e3d40 body=151 status=ok
// SIG undefined FUN_1451e3d40(void)

bool FUN_1451e3d40(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e3de0 FUN_1451e3de0 body=149 status=ok
// SIG undefined FUN_1451e3de0(void)

undefined8 FUN_1451e3de0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451e3d40();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (cVar1 = FUN_1451e3950((ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],param_2),
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



// FUNCTION 1451e3e80 FUN_1451e3e80 body=155 status=ok
// SIG undefined FUN_1451e3e80(void)

undefined8 FUN_1451e3e80(byte *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if ((iVar3 == 1) || (iVar3 == 2)) {
      uVar2 = FUN_144e2c5c0(param_2,param_1,4);
      return uVar2;
    }
    if (iVar3 != 3) {
      return 1;
    }
    cVar1 = FUN_144e2c5c0(param_2,param_1,6);
    if ((cVar1 != '\0') && (cVar1 = FUN_1451e3de0(param_1 + 4,param_2,param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451e3f20 FUN_1451e3f20 body=151 status=ok
// SIG undefined FUN_1451e3f20(void)

bool FUN_1451e3f20(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e3fc0 FUN_1451e3fc0 body=300 status=ok
// SIG undefined FUN_1451e3fc0(void)

undefined8 FUN_1451e3fc0(byte *param_1,undefined8 param_2,longlong param_3)

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
          cVar1 = FUN_1451e3f20(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) &&
             (cVar1 = FUN_1451e3e80((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1],
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



// FUNCTION 1451e40f0 FUN_1451e40f0 body=151 status=ok
// SIG undefined FUN_1451e40f0(void)

bool FUN_1451e40f0(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e4190 FUN_1451e4190 body=303 status=ok
// SIG undefined FUN_1451e4190(void)

undefined8 FUN_1451e4190(byte *param_1,undefined8 param_2,longlong param_3)

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
          cVar1 = FUN_1451e40f0(pbVar3,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 0) &&
             (lVar2 = (ulonglong)*pbVar3 * 0x100 + param_3 + (ulonglong)pbVar3[1],
             cVar1 = FUN_1451e3fc0(lVar2,param_2,lVar2), cVar1 == '\0')) {
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



// FUNCTION 1451e42c0 FUN_1451e42c0 body=221 status=ok
// SIG undefined FUN_1451e42c0(void)

bool FUN_1451e42c0(longlong param_1,uint param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = &DAT_149a1f1a0;
  if (param_2 < (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3)) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 1) * 4);
  }
  else {
    pbVar1 = &DAT_149a1f1a0;
  }
  if ((uint)*pbVar1 * 0x1000000 + (uint)pbVar1[2] * 0x100 + (uint)pbVar1[1] * 0x10000 +
      (uint)pbVar1[3] != 0) {
    pbVar3 = (byte *)(((ulonglong)CONCAT11(*pbVar1,pbVar1[1]) * 0x100 + (ulonglong)pbVar1[2]) *
                      0x100 + param_1 + (ulonglong)pbVar1[3]);
  }
  iVar2 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      return false;
    }
    iVar2 = FUN_1451e22a0(pbVar3,param_3);
    return iVar2 != -1;
  }
  iVar2 = FUN_1451e2130(pbVar3,param_3);
  return iVar2 != -1;
}



// FUNCTION 1451e43a0 FUN_1451e43a0 body=148 status=ok
// SIG undefined FUN_1451e43a0(void)

bool FUN_1451e43a0(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e4440 FUN_1451e4440 body=177 status=ok
// SIG undefined FUN_1451e4440(void)

undefined8 FUN_1451e4440(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451e43a0();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_1451e2390((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 1451e4500 FUN_1451e4500 body=211 status=ok
// SIG undefined FUN_1451e4500(void)

undefined8 FUN_1451e4500(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 4),
     cVar1 != '\0')) {
    uVar3 = 0;
    uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (uVar4 != 0) {
      do {
        cVar1 = FUN_1451e4440(param_1 + uVar3 * 4 + 2,param_2,param_3);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < uVar4);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1451e45e0 FUN_1451e45e0 body=103 status=ok
// SIG undefined FUN_1451e45e0(void)

undefined8 FUN_1451e45e0(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
    return 1;
  }
  uVar1 = FUN_1451e4500(param_1 + 2,param_2,param_1);
  return uVar1;
}



// FUNCTION 1451e4650 FUN_1451e4650 body=164 status=ok
// SIG undefined FUN_1451e4650(void)

undefined8 FUN_1451e4650(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (0x10001 < (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
                (uint)param_1[3]) {
    if ((ushort)((ushort)param_1[0xc] * 0x100 + (ushort)param_1[0xd]) == 0) {
      param_1 = &DAT_149a1f1a0;
    }
    else {
      param_1 = param_1 + (ulonglong)param_1[0xd] + (ulonglong)param_1[0xc] * 0x100;
    }
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      cVar1 = FUN_1451e42c0(param_1,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451e4700 FUN_1451e4700 body=136 status=ok
// SIG undefined FUN_1451e4700(void)

byte * FUN_1451e4700(byte *param_1)

{
  if ((((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
      (uint)param_1[3] < 0x10003) {
    return &DAT_149a1f1a0;
  }
  if ((uint)param_1[0xe] * 0x1000000 + (uint)param_1[0x10] * 0x100 + (uint)param_1[0xf] * 0x10000 +
      (uint)param_1[0x11] == 0) {
    return &DAT_149a1f1a0;
  }
  return param_1 + (ulonglong)param_1[0x11] +
                   ((ulonglong)CONCAT11(param_1[0xe],param_1[0xf]) * 0x100 +
                   (ulonglong)param_1[0x10]) * 0x100;
}



// FUNCTION 1451e4790 FUN_1451e4790 body=215 status=ok
// SIG undefined FUN_1451e4790(void)

uint FUN_1451e4790(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar4 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)) == 0) {
    puVar3 = &DAT_149a1f1a0;
  }
  else {
    puVar3 = (undefined1 *)
             ((ulonglong)*(byte *)(param_1 + 4) * 0x100 + param_1 +
             (ulonglong)*(byte *)(param_1 + 5));
  }
  iVar1 = FUN_1451e2580(puVar3,param_2);
  if (iVar1 == 1) {
    uVar2 = 2;
  }
  else if (iVar1 == 2) {
    uVar2 = 4;
  }
  else if (iVar1 == 3) {
    if ((ushort)((ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb)) != 0) {
      puVar4 = (undefined1 *)
               ((ulonglong)*(byte *)(param_1 + 10) * 0x100 + param_1 +
               (ulonglong)*(byte *)(param_1 + 0xb));
    }
    iVar1 = FUN_1451e2580(puVar4,param_2);
    uVar2 = iVar1 << 8 | 8;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1451e4870 FUN_1451e4870 body=740 status=ok
// SIG undefined FUN_1451e4870(void)

undefined8 FUN_1451e4870(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)FUN_1451e0e40(param_3 + 0xc0);
  puVar3 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*puVar2;
  }
  uVar1 = *(uint *)(puVar3 + 0x18);
  puVar2 = (undefined8 *)FUN_1451e0ef0(param_3 + 200);
  puVar3 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*puVar2;
  }
  uVar5 = ((ulonglong)*(uint *)(param_2 + 0x18) << 0x18 | (ulonglong)uVar1) << 0x18 |
          (ulonglong)*(uint *)(puVar3 + 0x18);
  uVar4 = 0x3c4005d1c00eaa8;
  if ((((((uVar5 == 0x3c4005d1c00eaa8) || (uVar4 = 0x1ba000b3a00a436, uVar5 == 0x1ba000b3a00a436))
        || (uVar4 = 0xc0003192001c56, uVar5 == 0xc0003192001c56)) ||
       (((uVar4 = 0xb40032fe001c56, uVar5 == 0xb40032fe001c56 ||
         (uVar4 = 0xbc0000f8000f0c, uVar5 == 0xbc0000f8000f0c)) ||
        ((uVar4 = 0xbc000108000d62, uVar5 == 0xbc000108000d62 ||
         ((uVar4 = 0xc000315e001c56, uVar5 == 0xc000315e001c56 ||
          (uVar4 = 0x1ae000b3a0099ce, uVar5 == 0x1ae000b3a0099ce)))))))) ||
      (uVar4 = 0x1ae000b3a009ed6, uVar5 == 0x1ae000b3a009ed6)) ||
     (((((((uVar4 = 0x1ba000b3a0098cc, uVar5 == 0x1ba000b3a0098cc ||
           (uVar4 = 0x38200310a00b586, uVar5 == 0x38200310a00b586)) ||
          (uVar4 = 0x1de000be600a3ae, uVar5 == 0x1de000be600a3ae)) ||
         ((uVar4 = 0x1ea000be600a2a6, uVar5 == 0x1ea000be600a2a6 ||
          (uVar4 = 0x340001c9c00b83a, uVar5 == 0x340001c9c00b83a)))) ||
        (uVar4 = 0x34c001c8600b1a2, uVar5 == 0x34c001c8600b1a2)) ||
       ((((uVar4 = 0x38e00311600ba74, uVar5 == 0x38e00311600ba74 ||
          (uVar4 = 0x3a0005b0200e7c4, uVar5 == 0x3a0005b0200e7c4)) ||
         (((uVar4 = 0x3ac005b0e00ed3c, uVar5 == 0x3ac005b0e00ed3c ||
           (((uVar4 = 0x41600b7b6003138, uVar5 == 0x41600b7b6003138 ||
             (uVar4 = 0x3ee00600000efa2, uVar5 == 0x3ee00600000efa2)) ||
            (uVar4 = 0x3d0005d1800f010, uVar5 == 0x3d0005d1800f010)))) ||
          (((uVar4 = 0x3e2005f9a00ebb0, uVar5 == 0x3e2005f9a00ebb0 ||
            (uVar4 = 0x3ec00e6d40039f4, uVar5 == 0x3ec00e6d40039f4)) ||
           (uVar4 = 0x3ee005f9600f12c, uVar5 == 0x3ee005f9600f12c)))))) ||
        ((uVar4 = 0x3ee00600000efa8, uVar5 == 0x3ee00600000efa8 ||
         (uVar4 = 0x3fa005ffc00f56c, uVar5 == 0x3fa005ffc00f56c)))))) ||
      (((uVar4 = 0x3fa005ffc00f572, uVar5 == 0x3fa005ffc00f572 ||
        (((uVar4 = 0x42201187200446a, uVar5 == 0x42201187200446a ||
          (uVar4 = 0x41601186c0042d8, uVar5 == 0x41601186c0042d8)) ||
         (uVar4 = 0x41601186e0045c6, uVar5 == 0x41601186e0045c6)))) ||
       (((uVar4 = 0x42200b7b8002e2a, uVar5 == 0x42200b7b8002e2a ||
         (uVar4 = 0x422011874004182, uVar5 == 0x422011874004182)) ||
        ((uVar4 = 0x53201ad5000e252, uVar5 == 0x53201ad5000e252 ||
         (uVar4 = 0x53201ad5000e65c, uVar5 == 0x53201ad5000e65c)))))))))) {
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  else {
    uVar4 = 0x53201ad5000e600;
  }
  return uVar4;
}



// FUNCTION 1451e4b60 FUN_1451e4b60 body=163 status=ok
// SIG undefined FUN_1451e4b60(void)

void FUN_1451e4b60(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
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
  uVar2 = FUN_144e2d200(param_2,0x47444546);
  puVar3 = (undefined1 *)FUN_1451f31b0(local_48,uVar2);
  *param_1 = puVar3;
  puVar4 = &DAT_149a1f1a0;
  puVar5 = &DAT_149a1f1a0;
  if (puVar3 != (undefined1 *)0x0) {
    puVar5 = puVar3;
  }
  if (0xb < *(uint *)(puVar5 + 0x18)) {
    puVar4 = *(undefined1 **)(puVar5 + 0x10);
  }
  cVar1 = FUN_1451e4870(puVar4,puVar3,param_2);
  if (cVar1 != '\0') {
    FUN_144e3f120(*param_1);
    uVar2 = FUN_144e3f0f0();
    *param_1 = uVar2;
  }
  return;
}



// FUNCTION 1451e4c10 FUN_1451e4c10 body=302 status=ok
// SIG undefined FUN_1451e4c10(void)

undefined8 FUN_1451e4c10(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (((((cVar1 == '\0') || ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1)) ||
       (cVar1 = FUN_1451e4de0(param_1 + 4,param_2,param_1), cVar1 == '\0')) ||
      ((cVar1 = FUN_1451e4f20(param_1 + 6,param_2,param_1), cVar1 == '\0' ||
       (cVar1 = FUN_1451e5070(param_1 + 8,param_2,param_1), cVar1 == '\0')))) ||
     (cVar1 = FUN_1451e4de0(param_1 + 10,param_2,param_1), cVar1 == '\0')) {
    return 0;
  }
  if ((0x10001 < (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
                 (uint)param_1[3]) &&
     (cVar1 = FUN_1451e51c0(param_1 + 0xc,param_2,param_1), cVar1 == '\0')) {
    return 0;
  }
  if ((0x10002 < (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
                 (uint)param_1[3]) &&
     (cVar1 = FUN_144e36990(param_1 + 0xe,param_2,param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1451e4d40 FUN_1451e4d40 body=151 status=ok
// SIG undefined FUN_1451e4d40(void)

bool FUN_1451e4d40(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e4de0 FUN_1451e4de0 body=149 status=ok
// SIG undefined FUN_1451e4de0(void)

undefined8 FUN_1451e4de0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451e4d40();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (cVar1 = FUN_1451e2600((ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],param_2),
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



// FUNCTION 1451e4e80 FUN_1451e4e80 body=151 status=ok
// SIG undefined FUN_1451e4e80(void)

bool FUN_1451e4e80(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e4f20 FUN_1451e4f20 body=172 status=ok
// SIG undefined FUN_1451e4f20(void)

undefined8 FUN_1451e4f20(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_1451e4e80();
  if (cVar1 == '\0') {
LAB_1451e4fb4:
    uVar2 = 0;
  }
  else {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) {
      lVar3 = (ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1];
      cVar1 = FUN_1451e3aa0(lVar3,param_2,lVar3);
      if (cVar1 != '\0') {
        cVar1 = FUN_1451e3be0(lVar3 + 2,param_2,lVar3);
        if (cVar1 != '\0') goto LAB_1451e4fb0;
      }
      cVar1 = FUN_144e2d280(param_2,param_1,2);
      if (cVar1 == '\0') goto LAB_1451e4fb4;
      param_1[0] = 0;
      param_1[1] = 0;
    }
LAB_1451e4fb0:
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1451e4fd0 FUN_1451e4fd0 body=151 status=ok
// SIG undefined FUN_1451e4fd0(void)

bool FUN_1451e4fd0(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e5070 FUN_1451e5070 body=172 status=ok
// SIG undefined FUN_1451e5070(void)

undefined8 FUN_1451e5070(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_1451e4fd0();
  if (cVar1 == '\0') {
LAB_1451e5104:
    uVar2 = 0;
  }
  else {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) {
      lVar3 = (ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1];
      cVar1 = FUN_1451e3aa0(lVar3,param_2,lVar3);
      if (cVar1 != '\0') {
        cVar1 = FUN_1451e4190(lVar3 + 2,param_2,lVar3);
        if (cVar1 != '\0') goto LAB_1451e5100;
      }
      cVar1 = FUN_144e2d280(param_2,param_1,2);
      if (cVar1 == '\0') goto LAB_1451e5104;
      param_1[0] = 0;
      param_1[1] = 0;
    }
LAB_1451e5100:
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1451e5120 FUN_1451e5120 body=151 status=ok
// SIG undefined FUN_1451e5120(void)

bool FUN_1451e5120(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e51c0 FUN_1451e51c0 body=149 status=ok
// SIG undefined FUN_1451e51c0(void)

undefined8 FUN_1451e51c0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451e5120();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (cVar1 = FUN_1451e45e0((ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],param_2),
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



// FUNCTION 1451e5260 FUN_1451e5260 body=214 status=ok
// SIG undefined FUN_1451e5260(void)

undefined8 FUN_1451e5260(uint *param_1,longlong param_2,undefined4 *param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)(param_3 + 3);
  uVar2 = *param_1;
  if ((uVar1 & uVar2 & 0xe) != 0) {
    return 1;
  }
  if ((uVar1 & 8) != 0) {
    if ((uVar2 & 0x10) == 0) {
      if ((uVar2 & 0xff00) == 0) goto LAB_1451e52bf;
      cVar3 = (uVar2 & 0xff00) == (uVar1 & 0xff00);
    }
    else {
      cVar3 = FUN_1451e4650(*(undefined8 *)(param_2 + 0xa0),uVar2 >> 0x10,*param_3);
    }
    if (cVar3 == '\0') {
      return 1;
    }
  }
LAB_1451e52bf:
  uVar1 = *(ushort *)(param_3 + 4);
  bVar4 = (byte)uVar1;
  if (((((bVar4 & 0x60) == 0x20) && ((*(byte *)(param_3 + 3) >> 5 & 1) == 0)) &&
      (((char)param_1[1] != '\0' || (((bVar4 & 0x1f) != 1 || ((uVar1 & 0x200) == 0)))))) &&
     ((*(char *)((longlong)param_1 + 5) != '\0' || (((bVar4 & 0x1f) != 1 || ((uVar1 & 0x100) == 0)))
      ))) {
    return 2;
  }
  return 0;
}



// FUNCTION 1451e5340 FUN_1451e5340 body=213 status=ok
// SIG undefined FUN_1451e5340(void)

undefined8 FUN_1451e5340(uint *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  
  if (*param_1 + param_1[0xe] < param_1[0xf]) {
    do {
      *param_1 = *param_1 + 1;
      puVar1 = (undefined4 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x90) + 0x70) +
               (ulonglong)*param_1 * 0x14);
      iVar3 = FUN_1451e5260(param_1 + 4,*(longlong *)(param_1 + 2),puVar1);
      if (iVar3 != 1) {
        if (((puVar1[1] & param_1[6]) != 0) &&
           (((char)param_1[7] == '\0' || ((char)param_1[7] == *(char *)((longlong)puVar1 + 0xf)))))
        {
          if (*(code **)(param_1 + 8) == (code *)0x0) {
            if (iVar3 == 0) goto LAB_1451e53e0;
            goto LAB_1451e53f0;
          }
          cVar2 = (**(code **)(param_1 + 8))
                            (*puVar1,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 10));
          if (cVar2 != '\0') {
LAB_1451e53e0:
            param_1[0xe] = param_1[0xe] - 1;
            *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 2;
            return 1;
          }
        }
        if (iVar3 == 0) {
          return 0;
        }
      }
LAB_1451e53f0:
    } while (*param_1 + param_1[0xe] < param_1[0xf]);
  }
  return 0;
}



// FUNCTION 1451e5420 FUN_1451e5420 body=212 status=ok
// SIG undefined FUN_1451e5420(void)

undefined8 FUN_1451e5420(uint *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  
  if (param_1[0xe] - 1 < *param_1) {
    do {
      *param_1 = *param_1 - 1;
      puVar1 = (undefined4 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x90) + 0x78) +
               (ulonglong)*param_1 * 0x14);
      iVar3 = FUN_1451e5260(param_1 + 4,*(longlong *)(param_1 + 2),puVar1);
      if (iVar3 != 1) {
        if (((puVar1[1] & param_1[6]) != 0) &&
           (((char)param_1[7] == '\0' || ((char)param_1[7] == *(char *)((longlong)puVar1 + 0xf)))))
        {
          if (*(code **)(param_1 + 8) == (code *)0x0) {
            if (iVar3 == 0) goto LAB_1451e54c0;
            goto LAB_1451e54d0;
          }
          cVar2 = (**(code **)(param_1 + 8))
                            (*puVar1,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 10));
          if (cVar2 != '\0') {
LAB_1451e54c0:
            param_1[0xe] = param_1[0xe] - 1;
            *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 2;
            return 1;
          }
        }
        if (iVar3 == 0) {
          return 0;
        }
      }
LAB_1451e54d0:
    } while (param_1[0xe] - 1 < *param_1);
  }
  return 0;
}



// FUNCTION 1451e5500 FUN_1451e5500 body=379 status=ok
// SIG undefined FUN_1451e5500(void)

undefined8 * FUN_1451e5500(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = param_3;
  lVar3 = *(longlong *)(param_3 + 0x18);
  param_1[0x11] = lVar3;
  param_1[0x12] = param_4;
  param_1[0x13] = 0;
  puVar4 = (undefined8 *)FUN_1451e0d60(lVar3 + 0xb8);
  puVar7 = &DAT_149a1f1a0;
  puVar5 = &DAT_149a1f1a0;
  if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*puVar4;
  }
  if (0xb < *(uint *)(puVar5 + 0x18)) {
    puVar7 = *(undefined1 **)(puVar5 + 0x10);
  }
  param_1[0x14] = puVar7;
  uVar6 = FUN_1451e4700(puVar7);
  param_1[0x15] = uVar6;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0xb4) = 1;
  *(undefined4 *)(param_1 + 0x17) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 6;
  bVar1 = puVar7[5];
  bVar2 = puVar7[4];
  *(undefined2 *)((longlong)param_1 + 0xcd) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xcf) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  *(bool *)((longlong)param_1 + 0xcc) = (ushort)((ushort)bVar2 * 0x100 + (ushort)bVar1) != 0;
  FUN_1451e5680(param_1);
  return param_1;
}



// FUNCTION 1451e5680 FUN_1451e5680 body=147 status=ok
// SIG undefined FUN_1451e5680(void)

void FUN_1451e5680(longlong param_1)

{
  longlong lVar1;
  
  *(longlong *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0xc0);
  *(bool *)(param_1 + 0x14) = *(int *)(lVar1 + 0xb8) == 1;
  *(bool *)(param_1 + 0x15) = *(char *)(lVar1 + 0xce) != '\0';
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 0xb4);
  *(longlong *)(param_1 + 0x48) = param_1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar1 + 0xc0);
  if ((*(int *)(lVar1 + 0xb8) != 1) && (*(char *)(lVar1 + 0xcd) == '\0')) {
    *(undefined1 *)(param_1 + 0x55) = 1;
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined1 *)(param_1 + 0x55) = 1;
  return;
}



// FUNCTION 1451e5720 FUN_1451e5720 body=134 status=ok
// SIG undefined FUN_1451e5720(void)

void FUN_1451e5720(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ushort uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x90);
  uVar1 = *(ushort *)(*(longlong *)(lVar3 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14)
  ;
  if (*(char *)(param_1 + 0xcc) != '\0') {
    uVar2 = *(uint *)(lVar3 + 0x5c);
    lVar3 = *(longlong *)(lVar3 + 0x70);
    uVar4 = FUN_1451e4790(*(undefined8 *)(param_1 + 0xa0),param_2);
    *(ushort *)(lVar3 + (ulonglong)uVar2 * 0x14 + 0xc) = uVar4 | uVar1 & 0x60 | 0x10;
  }
  FUN_1451e0990(*(undefined8 *)(param_1 + 0x90),param_2);
  return;
}



// FUNCTION 1451e57b0 FUN_1451e57b0 body=142 status=ok
// SIG undefined FUN_1451e57b0(void)

void FUN_1451e57b0(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ushort uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x90);
  uVar1 = *(ushort *)(*(longlong *)(lVar3 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar3 + 0x5c) * 0x14)
  ;
  if (*(char *)(param_1 + 0xcc) != '\0') {
    uVar2 = *(uint *)(lVar3 + 0x5c);
    lVar3 = *(longlong *)(lVar3 + 0x70);
    uVar4 = FUN_1451e4790(*(undefined8 *)(param_1 + 0xa0));
    *(ushort *)(lVar3 + (ulonglong)uVar2 * 0x14 + 0xc) = uVar4 | uVar1 & 0x60 | 0x10;
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x70) +
   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + 0x5c) * 0x14) = param_2;
  return;
}



// FUNCTION 1451e5840 FUN_1451e5840 body=169 status=ok
// SIG undefined FUN_1451e5840(void)

void FUN_1451e5840(longlong param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (*(char *)(param_1 + 0xcc) == '\0') {
    if (param_3 != 0) {
      *(ushort *)(*(longlong *)(lVar2 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14) =
           (ushort)param_3 | 0x30;
    }
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x5c);
    lVar2 = *(longlong *)(lVar2 + 0x70);
    uVar3 = FUN_1451e4790(*(undefined8 *)(param_1 + 0xa0));
    *(ushort *)(lVar2 + (ulonglong)uVar1 * 0x14 + 0xc) = uVar3 | 0x30;
  }
  FUN_1451e0990(*(undefined8 *)(param_1 + 0x90),param_2);
  return;
}



// FUNCTION 1451e58f0 FUN_1451e58f0 body=163 status=ok
// SIG undefined FUN_1451e58f0(void)

void FUN_1451e58f0(longlong param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x90);
  uVar4 = *(ushort *)(*(longlong *)(lVar2 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14)
          & 0x60 | 0x50;
  if (*(char *)(param_1 + 0xcc) == '\0') {
    if (param_3 != 0) {
      *(ushort *)(*(longlong *)(lVar2 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14) =
           (ushort)param_3 | uVar4;
    }
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x5c);
    lVar2 = *(longlong *)(lVar2 + 0x70);
    uVar3 = FUN_1451e4790(*(undefined8 *)(param_1 + 0xa0));
    *(ushort *)(lVar2 + (ulonglong)uVar1 * 0x14 + 0xc) = uVar3 | uVar4;
  }
  FUN_1451e0a10(*(undefined8 *)(param_1 + 0x90),param_2);
  return;
}



// FUNCTION 1451e59a0 FUN_1451e59a0 body=178 status=ok
// SIG undefined FUN_1451e59a0(void)

undefined8 FUN_1451e59a0(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 - param_2 < 0x1f) {
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    uVar1 = 1 << ((byte)param_3 & 0x1f);
    *param_1 = *param_1 | (uVar1 * 2 - (uint)(uVar1 < uVar2)) - uVar2;
  }
  else {
    *param_1 = 0xffffffff;
  }
  if (0x1e < (param_3 >> 9) - (param_2 >> 9)) {
    param_1[1] = 0xffffffff;
    return 1;
  }
  uVar1 = 1 << ((byte)(param_2 >> 9) & 0x1f);
  uVar2 = 1 << ((byte)(param_3 >> 9) & 0x1f);
  uVar1 = (uVar2 * 2 - (uint)(uVar2 < uVar1)) - uVar1;
  param_1[1] = param_1[1] | uVar1;
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}



// FUNCTION 1451e5a80 FUN_1451e5a80 body=53 status=ok
// SIG undefined FUN_1451e5a80(void)

bool FUN_1451e5a80(undefined4 param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = *param_2;
  bVar2 = param_2[1];
  iVar3 = FUN_1451e2580(param_3,param_1);
  return iVar3 == (uint)bVar1 * 0x100 + (uint)bVar2;
}



// FUNCTION 1451e5ac0 FUN_1451e5ac0 body=143 status=ok
// SIG undefined FUN_1451e5ac0(void)

bool FUN_1451e5ac0(undefined4 param_1,byte *param_2,longlong param_3)

{
  int iVar1;
  byte *pbVar2;
  
  if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*param_2 * 0x100 + param_3 + (ulonglong)param_2[1]);
  }
  iVar1 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return false;
    }
    iVar1 = FUN_1451e22a0(pbVar2,param_1);
    return iVar1 != -1;
  }
  iVar1 = FUN_1451e2130(pbVar2,param_1);
  return iVar1 != -1;
}



// FUNCTION 1451e5b50 FUN_1451e5b50 body=150 status=ok
// SIG undefined FUN_1451e5b50(void)

undefined8
FUN_1451e5b50(longlong param_1,uint param_2,longlong param_3,code *param_4,undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_2 != *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  uVar2 = 1;
  if (1 < param_2) {
    lVar3 = 4;
    do {
      cVar1 = (*param_4)(*(undefined4 *)(*(longlong *)(param_1 + 8) + lVar3),
                         param_3 + (ulonglong)(uVar2 - 1) * 2,param_5);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 4;
    } while (uVar2 < param_2);
  }
  return 1;
}



// FUNCTION 1451e5bf0 FUN_1451e5bf0 body=607 status=ok
// SIG undefined FUN_1451e5bf0(void)

undefined8
FUN_1451e5bf0(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             int *param_6,uint *param_7,uint *param_8)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  
  if (0x40 < param_2) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x24);
  uVar13 = *(uint *)(lVar1 + 0x5c);
  *param_1 = uVar13;
  param_1[0xe] = param_2 - 1;
  param_1[0xf] = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x90) + 0x60);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 2) + 0x90);
  if (uVar13 == *(uint *)(lVar2 + 0x5c)) {
    uVar10 = *(undefined1 *)
              (*(longlong *)(lVar2 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14);
  }
  else {
    uVar10 = 0;
  }
  *(undefined1 *)(param_1 + 7) = uVar10;
  *(undefined8 *)(param_1 + 10) = param_5;
  *(undefined8 *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0xc) = param_3;
  uVar11 = (ulonglong)*(uint *)(lVar1 + 0x5c);
  lVar2 = *(longlong *)(lVar1 + 0x70);
  if (((*(byte *)(lVar2 + 0xc + uVar11 * 0x14) & 4) == 0) ||
     (bVar14 = *(byte *)(lVar2 + 0xe + uVar11 * 0x14), (bVar14 & 0x10) == 0)) {
    uVar13 = 1;
  }
  else {
    uVar13 = bVar14 & 0xf;
  }
  bVar14 = *(byte *)(lVar2 + 0xe + uVar11 * 0x14);
  bVar3 = *(byte *)(lVar2 + 0xe + uVar11 * 0x14) >> 5;
  if ((bVar14 & 0x10) == 0) {
    bVar14 = bVar14 & 0xf;
  }
  else {
    bVar14 = 0;
  }
  iVar8 = 0;
  uVar12 = 1;
  *param_7 = *(uint *)(lVar1 + 0x5c);
  if (1 < param_2) {
    do {
      param_7 = param_7 + 1;
      cVar6 = FUN_1451e5340(param_1);
      if (cVar6 == '\0') {
        return 0;
      }
      *param_7 = *param_1;
      bVar7 = *(byte *)(*(longlong *)(lVar1 + 0x70) + 0xe + (ulonglong)*param_1 * 0x14);
      bVar4 = *(byte *)(*(longlong *)(lVar1 + 0x70) + 0xe + (ulonglong)*param_1 * 0x14) >> 5;
      if ((bVar7 & 0x10) == 0) {
        bVar7 = bVar7 & 0xf;
      }
      else {
        bVar7 = 0;
      }
      if ((bVar3 == 0) || (bVar14 == 0)) {
        if ((bVar4 != 0) && ((bVar7 != 0 && (bVar4 != bVar3)))) {
          return 0;
        }
      }
      else if ((bVar3 != bVar4) || (bVar14 != bVar7)) {
        if (iVar8 == 0) {
          lVar2 = *(longlong *)(lVar1 + 0x78);
          uVar9 = *(uint *)(lVar1 + 100);
          do {
            uVar5 = uVar9;
            if (uVar5 == 0) {
              return 0;
            }
            uVar9 = uVar5 - 1;
            if (*(byte *)(lVar2 + 0xe + (ulonglong)uVar9 * 0x14) >> 5 != bVar3) {
              return 0;
            }
            bVar7 = *(byte *)(lVar2 + 0xe + (ulonglong)uVar9 * 0x14);
          } while (((bVar7 & 0x10) == 0) && ((bVar7 & 0xf) != 0));
          iVar8 = FUN_1451e5260(param_1 + 4,*(undefined8 *)(param_1 + 2),
                                lVar2 + (ulonglong)(uVar5 - 1) * 0x14);
          if (iVar8 != 1) {
            return 0;
          }
          iVar8 = 2;
        }
        else if (iVar8 == 1) {
          return 0;
        }
      }
      if (((*(byte *)(*(longlong *)(lVar1 + 0x70) + 0xc + (ulonglong)*param_1 * 0x14) & 4) == 0) ||
         (bVar7 = *(byte *)(*(longlong *)(lVar1 + 0x70) + 0xe + (ulonglong)*param_1 * 0x14),
         (bVar7 & 0x10) == 0)) {
        uVar9 = 1;
      }
      else {
        uVar9 = bVar7 & 0xf;
      }
      uVar13 = uVar13 + uVar9;
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_2);
  }
  *param_6 = (*param_1 - *(int *)(lVar1 + 0x5c)) + 1;
  if (param_8 != (uint *)0x0) {
    *param_8 = uVar13;
  }
  return 1;
}



// FUNCTION 1451e5e50 FUN_1451e5e50 body=839 status=ok
// SIG undefined FUN_1451e5e50(void)

undefined8
FUN_1451e5e50(longlong param_1,uint param_2,uint *param_3,uint param_4,undefined4 param_5,
             byte param_6)

{
  ushort *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  byte bVar13;
  char cVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  byte bVar21;
  
  lVar7 = *(longlong *)(param_1 + 0x90);
  if (1 < param_4) {
    FUN_144b61d00(lVar7);
  }
  uVar18 = 1;
  bVar15 = (byte)*(undefined2 *)(*(longlong *)(lVar7 + 0x70) + 0xc + (ulonglong)*param_3 * 0x14);
  bVar13 = bVar15 >> 3 & 1;
  if (1 < param_2) {
    do {
      if ((*(byte *)(*(longlong *)(lVar7 + 0x70) + 0xc + (ulonglong)param_3[uVar18] * 0x14) >> 3 & 1
          ) == 0) {
        bVar13 = 0;
        bVar12 = true;
        goto LAB_1451e5efe;
      }
      uVar17 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar17;
    } while (uVar17 < param_2);
  }
  if (((bVar15 >> 1 & 1) == 0) && (bVar13 == 0)) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
LAB_1451e5efe:
  if (bVar12) {
    uVar17 = *(uint *)(lVar7 + 0x88);
    *(uint *)(lVar7 + 0x88) = uVar17 + 1;
    bVar15 = (byte)uVar17 & 7;
    if ((uVar17 & 7) == 0) {
      bVar15 = FUN_1451e1690(lVar7);
    }
  }
  else {
    bVar15 = 0;
  }
  bVar5 = *(byte *)(*(longlong *)(lVar7 + 0x70) + 0xe + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14);
  lVar2 = *(longlong *)(lVar7 + 0x70) + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14;
  if (((*(byte *)(lVar2 + 0xc) & 4) == 0) || ((*(byte *)(lVar2 + 0xe) & 0x10) == 0)) {
    bVar19 = 1;
  }
  else {
    bVar19 = *(byte *)(lVar2 + 0xe) & 0xf;
  }
  if (bVar12) {
    *(byte *)(lVar2 + 0xe) = param_6 & 0xf | bVar15 << 5 | 0x10;
    lVar2 = *(longlong *)(lVar7 + 0x70) + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14;
    if ((*(byte *)(*(longlong *)(lVar7 + 0x70) + 0x10 + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14) &
        0x1f) == 0xc) {
      puVar1 = (ushort *)(lVar2 + 0x10);
      *puVar1 = *puVar1 & 0xe0;
      puVar1 = (ushort *)(lVar2 + 0x10);
      *puVar1 = *puVar1 | 7;
    }
  }
  FUN_1451e5840(param_1,param_5,-bVar12 & 4);
  bVar21 = bVar19;
  if (1 < param_2) {
    uVar18 = (ulonglong)(param_2 - 1);
    do {
      param_3 = param_3 + 1;
      if (*(uint *)(lVar7 + 0x5c) < *param_3) {
        do {
          if (*(char *)(lVar7 + 0x58) == '\0') break;
          if (bVar12) {
            bVar5 = *(byte *)(*(longlong *)(lVar7 + 0x70) + 0xe +
                             (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14);
            if ((((bVar5 & 0x10) != 0) || ((bVar5 & 0xf) == 0)) ||
               (bVar16 = bVar5 & 0xf, bVar19 <= (bVar5 & 0xf))) {
              bVar16 = bVar19;
            }
            *(byte *)(*(longlong *)(lVar7 + 0x70) + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14 + 0xe)
                 = (bVar16 - bVar19) + bVar21 & 0xf | bVar15 << 5;
          }
          if (*(char *)(lVar7 + 0x59) == '\0') {
LAB_1451e60a5:
            *(int *)(lVar7 + 0x5c) = *(int *)(lVar7 + 0x5c) + 1;
          }
          else {
            if ((*(longlong *)(lVar7 + 0x78) == *(longlong *)(lVar7 + 0x70)) &&
               (*(int *)(lVar7 + 100) == *(int *)(lVar7 + 0x5c))) {
LAB_1451e60a2:
              *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
              goto LAB_1451e60a5;
            }
            cVar14 = FUN_144b62480(lVar7,1,1);
            if (cVar14 != '\0') {
              uVar17 = *(uint *)(lVar7 + 0x5c);
              lVar2 = *(longlong *)(lVar7 + 0x70);
              uVar6 = *(uint *)(lVar7 + 100);
              puVar3 = (undefined4 *)(lVar2 + (ulonglong)uVar17 * 0x14);
              uVar9 = puVar3[1];
              uVar10 = puVar3[2];
              uVar11 = puVar3[3];
              lVar8 = *(longlong *)(lVar7 + 0x78);
              puVar4 = (undefined4 *)(lVar8 + (ulonglong)uVar6 * 0x14);
              *puVar4 = *puVar3;
              puVar4[1] = uVar9;
              puVar4[2] = uVar10;
              puVar4[3] = uVar11;
              *(undefined4 *)(lVar8 + (ulonglong)uVar6 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar2 + 0x10 + (ulonglong)uVar17 * 0x14);
              goto LAB_1451e60a2;
            }
          }
        } while (*(uint *)(lVar7 + 0x5c) < *param_3);
      }
      lVar2 = *(longlong *)(lVar7 + 0x70);
      uVar20 = (ulonglong)*(uint *)(lVar7 + 0x5c);
      bVar5 = *(byte *)(lVar2 + 0xe + uVar20 * 0x14);
      if (((*(byte *)(lVar2 + 0xc + uVar20 * 0x14) & 4) == 0) ||
         (bVar19 = *(byte *)(lVar2 + 0xe + uVar20 * 0x14), (bVar19 & 0x10) == 0)) {
        bVar19 = 1;
      }
      else {
        bVar19 = bVar19 & 0xf;
      }
      bVar21 = bVar21 + bVar19;
      *(uint *)(lVar7 + 0x5c) = *(uint *)(lVar7 + 0x5c) + 1;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if (((bVar13 == 0) && (bVar5 >> 5 != 0)) &&
     (uVar17 = *(uint *)(lVar7 + 0x5c), uVar17 < *(uint *)(lVar7 + 0x60))) {
    do {
      lVar2 = *(longlong *)(lVar7 + 0x70) + (ulonglong)uVar17 * 0x14;
      if (bVar5 >> 5 != *(byte *)(*(longlong *)(lVar7 + 0x70) + 0xe + (ulonglong)uVar17 * 0x14) >> 5
         ) {
        return 1;
      }
      bVar13 = *(byte *)(lVar2 + 0xe);
      if ((bVar13 & 0x10) != 0) {
        return 1;
      }
      if ((bVar13 & 0xf) == 0) {
        return 1;
      }
      bVar16 = bVar19;
      if ((bVar13 & 0xf) < bVar19) {
        bVar16 = bVar13 & 0xf;
      }
      uVar17 = uVar17 + 1;
      *(byte *)(lVar2 + 0xe) = (bVar16 - bVar19) + bVar21 & 0xf | bVar15 << 5;
    } while (uVar17 < *(uint *)(lVar7 + 0x60));
  }
  return 1;
}



// FUNCTION 1451e61a0 FUN_1451e61a0 body=193 status=ok
// SIG undefined FUN_1451e61a0(void)

undefined8
FUN_1451e61a0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,int *param_6)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x90);
  piVar1 = (int *)(param_1 + 0x40);
  if (*(char *)(lVar2 + 0x59) == '\0') {
    iVar6 = *(int *)(lVar2 + 0x5c);
  }
  else {
    iVar6 = *(int *)(lVar2 + 100);
  }
  uVar5 = 0;
  *piVar1 = iVar6;
  *(uint *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x7c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x90) + 0x60);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x90);
  if (iVar6 == *(int *)(lVar2 + 0x5c)) {
    uVar4 = *(undefined1 *)
             (*(longlong *)(lVar2 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14);
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x5c) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = param_5;
  *(undefined8 *)(param_1 + 0x60) = param_4;
  *(undefined8 *)(param_1 + 0x70) = param_3;
  if (param_2 != 0) {
    do {
      cVar3 = FUN_1451e5420(piVar1);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_2);
  }
  *param_6 = *piVar1;
  return 1;
}



// FUNCTION 1451e6270 FUN_1451e6270 body=193 status=ok
// SIG undefined FUN_1451e6270(void)

undefined8
FUN_1451e6270(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,int param_6,int *param_7)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = (int *)(param_1 + 0x40);
  uVar5 = 0;
  iVar6 = param_6 + -1 + *(int *)(*(longlong *)(param_1 + 0x90) + 0x5c);
  *piVar1 = iVar6;
  *(uint *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x7c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x90) + 0x60);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x90);
  if (iVar6 == *(int *)(lVar2 + 0x5c)) {
    uVar4 = *(undefined1 *)
             (*(longlong *)(lVar2 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14);
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x5c) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = param_5;
  *(undefined8 *)(param_1 + 0x60) = param_4;
  *(undefined8 *)(param_1 + 0x70) = param_3;
  if (param_2 != 0) {
    do {
      cVar3 = FUN_1451e5340(piVar1);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_2);
  }
  *param_7 = *piVar1 + 1;
  return 1;
}



// FUNCTION 1451e6340 FUN_1451e6340 body=828 status=ok
// SIG undefined FUN_1451e6340(void)

undefined8
FUN_1451e6340(longlong param_1,uint param_2,longlong param_3,uint param_4,longlong param_5,
             int param_6)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  uint local_res10;
  
  lVar5 = *(longlong *)(param_1 + 0x90);
  if (*(char *)(lVar5 + 0x59) == '\0') {
    iVar14 = *(int *)(lVar5 + 0x5c);
  }
  else {
    iVar14 = *(int *)(lVar5 + 100);
  }
  param_6 = param_6 + iVar14;
  uVar13 = 0;
  iVar14 = iVar14 - *(int *)(lVar5 + 0x5c);
  uVar11 = 0;
  local_res10 = 0;
  if (param_2 != 0) {
    if (7 < param_2) {
      do {
        piVar10 = (int *)(param_3 + uVar13 * 4);
        iVar4 = piVar10[1];
        iVar7 = piVar10[2];
        iVar8 = piVar10[3];
        piVar1 = (int *)(param_3 + uVar13 * 4);
        *piVar1 = iVar14 + *piVar10;
        piVar1[1] = iVar14 + iVar4;
        piVar1[2] = iVar14 + iVar7;
        piVar1[3] = iVar14 + iVar8;
        uVar9 = (ulonglong)((int)uVar13 + 4);
        uVar11 = (int)uVar13 + 8;
        uVar13 = (ulonglong)uVar11;
        piVar10 = (int *)(param_3 + uVar9 * 4);
        iVar4 = piVar10[1];
        iVar7 = piVar10[2];
        iVar8 = piVar10[3];
        piVar1 = (int *)(param_3 + uVar9 * 4);
        *piVar1 = *piVar10 + iVar14;
        piVar1[1] = iVar4 + iVar14;
        piVar1[2] = iVar7 + iVar14;
        piVar1[3] = iVar8 + iVar14;
      } while (uVar11 < (param_2 & 0xfffffff8));
    }
    if (uVar11 < param_2) {
      piVar10 = (int *)(param_3 + (ulonglong)uVar11 * 4);
      uVar13 = (ulonglong)(param_2 - uVar11);
      do {
        *piVar10 = *piVar10 + iVar14;
        piVar10 = piVar10 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (param_4 != 0) {
    pbVar15 = (byte *)(param_5 + 3);
    do {
      if (*(char *)(lVar5 + 0x58) == '\0') break;
      uVar11 = (uint)pbVar15[-3] * 0x100 + (uint)pbVar15[-2];
      if ((uVar11 < param_2) &&
         ((uVar11 != 0 || ((uint)pbVar15[-1] * 0x100 + (uint)*pbVar15 != *(int *)(param_1 + 0xbc))))
         ) {
        cVar6 = FUN_144b62270(lVar5,*(undefined4 *)(param_3 + (ulonglong)uVar11 * 4));
        if ((cVar6 == '\0') || (*(int *)(lVar5 + 0x30) < 1)) break;
        iVar7 = FUN_1451e0980(lVar5);
        iVar14 = *(int *)(lVar5 + 0x60);
        iVar4 = *(int *)(lVar5 + 0x5c);
        bVar2 = *pbVar15;
        bVar3 = pbVar15[-1];
        if (((*(int *)(param_1 + 0xc4) != 0) && (*(longlong *)(param_1 + 0x98) != 0)) &&
           (iVar8 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x30),
           *(int *)(*(longlong *)(param_1 + 0x90) + 0x30) = iVar8 + -1, 0 < iVar8)) {
          *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
          cVar6 = (**(code **)(param_1 + 0x98))(param_1,(uint)bVar3 * 0x100 + (uint)bVar2);
          *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
          if (cVar6 != '\0') {
            iVar8 = FUN_1451e0980(lVar5);
            iVar8 = iVar8 + ((*(int *)(lVar5 + 0x60) - *(int *)(lVar5 + 0x5c)) -
                            ((iVar14 - iVar4) + iVar7));
            if (iVar8 != 0) {
              iVar14 = param_6 + iVar8;
              param_6 = *(int *)(param_3 + (ulonglong)uVar11 * 4);
              if (iVar14 <= param_6) break;
              uVar11 = uVar11 + 1;
              uVar13 = (ulonglong)uVar11;
              param_6 = iVar14;
              if (iVar8 < 1) {
                iVar14 = uVar11 - param_2;
                if ((int)(uVar11 - param_2) < iVar8) {
                  iVar14 = iVar8;
                }
                iVar8 = iVar14;
                uVar16 = uVar11 - iVar8;
              }
              else {
                uVar16 = uVar11;
                if (0x40 < iVar8 + param_2) break;
              }
              memmove((void *)(param_3 + ((longlong)iVar8 + (ulonglong)uVar16) * 4),
                      (void *)(param_3 + (ulonglong)uVar16 * 4),(ulonglong)(param_2 - uVar16) << 2);
              uVar16 = uVar16 + iVar8;
              uVar9 = (ulonglong)uVar16;
              param_2 = param_2 + iVar8;
              if (uVar11 < uVar16) {
                piVar10 = (int *)(param_3 + uVar13 * 4);
                do {
                  iVar14 = (int)uVar13;
                  uVar11 = iVar14 + 1;
                  uVar13 = (ulonglong)uVar11;
                  *piVar10 = *(int *)(param_3 + (ulonglong)(iVar14 - 1) * 4) + 1;
                  piVar10 = piVar10 + 1;
                } while (uVar11 < uVar16);
              }
              if (uVar16 < param_2) {
                if (7 < param_2 - uVar16) {
                  uVar11 = uVar16 + 4;
                  do {
                    piVar10 = (int *)(param_3 + uVar9 * 4);
                    iVar14 = piVar10[1];
                    iVar4 = piVar10[2];
                    iVar7 = piVar10[3];
                    piVar1 = (int *)(param_3 + uVar9 * 4);
                    *piVar1 = *piVar10 + iVar8;
                    piVar1[1] = iVar14 + iVar8;
                    piVar1[2] = iVar4 + iVar8;
                    piVar1[3] = iVar7 + iVar8;
                    uVar12 = (int)uVar9 + 8;
                    uVar9 = (ulonglong)uVar12;
                    piVar10 = (int *)(param_3 + (ulonglong)uVar11 * 4);
                    iVar14 = piVar10[1];
                    iVar4 = piVar10[2];
                    iVar7 = piVar10[3];
                    piVar1 = (int *)(param_3 + (ulonglong)uVar11 * 4);
                    *piVar1 = iVar8 + *piVar10;
                    piVar1[1] = iVar8 + iVar14;
                    piVar1[2] = iVar8 + iVar4;
                    piVar1[3] = iVar8 + iVar7;
                    uVar11 = uVar11 + 8;
                  } while (uVar12 < param_2 - (param_2 - uVar16 & 7));
                }
                if ((uint)uVar9 < param_2) {
                  piVar10 = (int *)(param_3 + uVar9 * 4);
                  uVar13 = (ulonglong)(param_2 - (uint)uVar9);
                  do {
                    *piVar10 = *piVar10 + iVar8;
                    piVar10 = piVar10 + 1;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
              }
            }
          }
        }
      }
      local_res10 = local_res10 + 1;
      pbVar15 = pbVar15 + 4;
    } while (local_res10 < param_4);
  }
  FUN_144b62270(lVar5,param_6);
  return 1;
}



// FUNCTION 1451e6680 FUN_1451e6680 body=218 status=ok
// SIG undefined FUN_1451e6680(void)

void FUN_1451e6680(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,longlong param_6)

{
  uint uVar1;
  char cVar2;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  uint *local_150;
  undefined1 *local_148;
  undefined8 local_140;
  uint local_138 [4];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_148 = local_128;
  local_140 = 0;
  local_150 = local_138;
  local_138[0] = 0;
  local_158 = *(undefined8 *)(param_6 + 8);
  cVar2 = FUN_1451e5bf0();
  uVar1 = local_138[0];
  if (cVar2 != '\0') {
    if (1 < local_138[0]) {
      FUN_144b620d0();
    }
    local_150 = (uint *)CONCAT44(local_150._4_4_,uVar1);
    local_158 = param_5;
    FUN_1451e6340(param_1,param_2,local_128,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_178);
}



// FUNCTION 1451e6770 FUN_1451e6770 body=177 status=ok
// SIG undefined FUN_1451e6770(void)

undefined8 FUN_1451e6770(byte *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,2);
    if (cVar1 != '\0') {
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = ((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2 + -2;
      }
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,
                            iVar2 + ((uint)param_1[2] * 0x100 + (uint)param_1[3]) * 4);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1451e6830 FUN_1451e6830 body=236 status=ok
// SIG undefined FUN_1451e6830(void)

undefined8 FUN_1451e6830(byte *param_1,undefined8 param_2,undefined8 *param_3)

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
      cVar1 = FUN_1451e5b50(param_2,(uint)*pbVar2 * 0x100 + (uint)pbVar2[1],pbVar2 + 4,*param_3,
                            param_3[1]);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return 0;
}



// FUNCTION 1451e6920 FUN_1451e6920 body=304 status=ok
// SIG undefined FUN_1451e6920(void)

undefined8 FUN_1451e6920(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  uVar7 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar7 != 0) {
    do {
      if (uVar6 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
        pbVar4 = param_1 + ((ulonglong)uVar6 + 1) * 2;
      }
      else {
        pbVar4 = &DAT_149a1f1a0;
      }
      if ((ushort)((ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1]) == 0) {
        pbVar4 = &DAT_149a1f1a0;
      }
      else {
        pbVar4 = param_1 + (ulonglong)pbVar4[1] + (ulonglong)*pbVar4 * 0x100;
      }
      bVar1 = *pbVar4;
      bVar2 = pbVar4[1];
      if ((ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (bVar2 - 1) + (uint)bVar1 * 0x100;
      }
      cVar3 = FUN_1451e6680(param_2,(uint)bVar1 * 0x100 + (uint)bVar2,pbVar4 + 4,
                            (uint)pbVar4[2] * 0x100 + (uint)pbVar4[3],pbVar4 + 4 + (uint)(iVar5 * 2)
                            ,param_3);
      if (cVar3 != '\0') {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  return 0;
}



// FUNCTION 1451e6a50 FUN_1451e6a50 body=151 status=ok
// SIG undefined FUN_1451e6a50(void)

bool FUN_1451e6a50(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e6af0 FUN_1451e6af0 body=300 status=ok
// SIG undefined FUN_1451e6af0(void)

undefined8 FUN_1451e6af0(byte *param_1,undefined8 param_2,longlong param_3)

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
          cVar1 = FUN_1451e6a50(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) &&
             (cVar1 = FUN_1451e6770((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1],
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



// FUNCTION 1451e6c20 FUN_1451e6c20 body=282 status=ok
// SIG undefined FUN_1451e6c20(void)

void FUN_1451e6c20(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined1 *local_18;
  undefined8 local_10;
  
  puVar3 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar4 = &DAT_149a1f1a0;
  }
  else {
    pbVar4 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  iVar2 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
  if (iVar2 == 1) {
    uVar1 = FUN_1451e2130(pbVar4);
  }
  else if (iVar2 == 2) {
    uVar1 = FUN_1451e22a0(pbVar4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
    pbVar4 = (byte *)(param_1 + ((ulonglong)uVar1 + 3) * 2);
  }
  else {
    pbVar4 = &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1]) != 0) {
    puVar3 = (undefined1 *)((ulonglong)*pbVar4 * 0x100 + param_1 + (ulonglong)pbVar4[1]);
  }
  local_10 = 0;
  local_18 = &LAB_1451e5a60;
  FUN_1451e6830(puVar3,param_2,&local_18);
  return;
}



// FUNCTION 1451e6d40 FUN_1451e6d40 body=299 status=ok
// SIG undefined FUN_1451e6d40(void)

ulonglong FUN_1451e6d40(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *local_18;
  undefined8 local_10;
  
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
    if (iVar4 != 2) goto LAB_1451e6de4;
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
    local_10 = 0;
    local_18 = &LAB_1451e5a60;
    uVar1 = FUN_1451e6920(puVar3,param_2,&local_18);
    return uVar1;
  }
LAB_1451e6de4:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451e6e70 FUN_1451e6e70 body=151 status=ok
// SIG undefined FUN_1451e6e70(void)

bool FUN_1451e6e70(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e6f10 FUN_1451e6f10 body=303 status=ok
// SIG undefined FUN_1451e6f10(void)

undefined8 FUN_1451e6f10(byte *param_1,undefined8 param_2,longlong param_3)

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
          cVar1 = FUN_1451e6e70(pbVar3,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 0) &&
             (lVar2 = (ulonglong)*pbVar3 * 0x100 + param_3 + (ulonglong)pbVar3[1],
             cVar1 = FUN_1451e6af0(lVar2,param_2,lVar2), cVar1 == '\0')) {
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



// FUNCTION 1451e7040 FUN_1451e7040 body=238 status=ok
// SIG undefined FUN_1451e7040(void)

void FUN_1451e7040(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *local_28;
  undefined1 *local_20;
  
  puVar3 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)) == 0) {
    puVar4 = &DAT_149a1f1a0;
  }
  else {
    puVar4 = (undefined1 *)
             ((ulonglong)*(byte *)(param_1 + 4) * 0x100 + param_1 +
             (ulonglong)*(byte *)(param_1 + 5));
  }
  uVar1 = FUN_1451e2580(puVar4,**(undefined4 **)(param_2 + 8));
  if (uVar1 < (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7)) {
    pbVar2 = (byte *)(param_1 + ((ulonglong)uVar1 + 4) * 2);
  }
  else {
    pbVar2 = &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
    puVar3 = (undefined1 *)((ulonglong)*pbVar2 * 0x100 + param_1 + (ulonglong)pbVar2[1]);
  }
  local_28 = FUN_1451e5a80;
  local_20 = puVar4;
  FUN_1451e6830(puVar3,param_2,&local_28);
  return;
}



// FUNCTION 1451e7130 FUN_1451e7130 body=376 status=ok
// SIG undefined FUN_1451e7130(void)

ulonglong FUN_1451e7130(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  code *local_28;
  undefined1 *local_20;
  
  puVar4 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar3 = &DAT_149a1f1a0;
  }
  else {
    pbVar3 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  uVar2 = 0;
  iVar6 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar6 == 1) {
    uVar2 = FUN_1451e2130(pbVar3,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar6 != 2) goto LAB_1451e71cf;
    uVar2 = FUN_1451e22a0();
  }
  if ((int)uVar2 != -1) {
    if ((ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)) == 0) {
      puVar5 = &DAT_149a1f1a0;
    }
    else {
      puVar5 = (undefined1 *)
               ((ulonglong)*(byte *)(param_1 + 4) * 0x100 + param_1 +
               (ulonglong)*(byte *)(param_1 + 5));
    }
    uVar1 = FUN_1451e2580(puVar5,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
    if (uVar1 < (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7)) {
      pbVar3 = (byte *)(param_1 + ((ulonglong)uVar1 + 4) * 2);
    }
    else {
      pbVar3 = &DAT_149a1f1a0;
    }
    if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 0) {
      puVar4 = (undefined1 *)((ulonglong)*pbVar3 * 0x100 + param_1 + (ulonglong)pbVar3[1]);
    }
    local_28 = FUN_1451e5a80;
    local_20 = puVar5;
    uVar2 = FUN_1451e6920(puVar4,param_2,&local_28);
    return uVar2;
  }
LAB_1451e71cf:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1451e72b0 FUN_1451e72b0 body=280 status=ok
// SIG undefined FUN_1451e72b0(void)

ulonglong FUN_1451e72b0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  code *local_18;
  longlong local_10;
  
  pbVar1 = (byte *)(param_1 + 6);
  if ((ushort)((ushort)*(byte *)(param_1 + 7) + (ushort)*pbVar1 * 0x100) == 0) {
    pbVar3 = &DAT_149a1f1a0;
  }
  else {
    pbVar3 = (byte *)((ulonglong)*(byte *)(param_1 + 7) + (ulonglong)*pbVar1 * 0x100 + param_1);
  }
  uVar2 = 0;
  iVar4 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar4 == 1) {
    uVar2 = FUN_1451e2130(pbVar3,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar4 != 2) goto LAB_1451e734b;
    uVar2 = FUN_1451e22a0();
  }
  if ((int)uVar2 != -1) {
    local_18 = FUN_1451e5ac0;
    local_10 = param_1;
    uVar2 = FUN_1451e6680(param_2,(uint)*(byte *)(param_1 + 2) * 0x100 +
                                  (uint)*(byte *)(param_1 + 3),param_1 + 8,
                          (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5),
                          pbVar1 + ((uint)*(byte *)(param_1 + 2) * 0x100 +
                                   (uint)*(byte *)(param_1 + 3)) * 2,&local_18);
    return uVar2;
  }
LAB_1451e734b:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1451e73d0 FUN_1451e73d0 body=289 status=ok
// SIG undefined FUN_1451e73d0(void)

bool FUN_1451e73d0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  
  cVar2 = FUN_144e2c5c0(param_2,param_1,6);
  if (cVar2 == '\0') {
    return false;
  }
  uVar5 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  if (uVar5 != 0) {
    puVar1 = (undefined1 *)(param_1 + 6);
    cVar2 = FUN_144e2c5c0(param_2,puVar1,uVar5 * 2);
    if (cVar2 == '\0') {
      return false;
    }
    uVar4 = 0;
    if (uVar5 != 0) {
      do {
        puVar3 = &DAT_149a1f1a0;
        if (puVar1 <= puVar1 + (ulonglong)uVar4 * 2) {
          puVar3 = puVar1 + (ulonglong)uVar4 * 2;
        }
        cVar2 = FUN_1451e3aa0(puVar3,param_2,param_1);
        if (cVar2 == '\0') {
          return false;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    cVar2 = FUN_144e2c5c0(param_2,puVar1 + ((uint)*(byte *)(param_1 + 2) * 0x100 +
                                           (uint)*(byte *)(param_1 + 3)) * 2,
                          ((uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) * 4)
    ;
    return cVar2 != '\0';
  }
  return false;
}



// FUNCTION 1451e7500 FUN_1451e7500 body=325 status=ok
// SIG undefined FUN_1451e7500(void)

void FUN_1451e7500(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined4 *local_160;
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140 [2];
  undefined4 local_138 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_158 = local_138;
  local_150 = 0;
  local_160 = &local_148;
  local_168 = param_10[2];
  local_140[0] = 0;
  local_148 = 0;
  local_144 = 0;
  cVar2 = FUN_1451e5bf0(param_1,param_4,param_5,*param_10);
  if (cVar2 != '\0') {
    local_160 = local_140;
    local_168 = param_10[1];
    cVar2 = FUN_1451e61a0(param_1,param_2,param_3,*param_10);
    uVar1 = local_148;
    if (cVar2 != '\0') {
      local_158 = &local_144;
      local_168 = param_10[3];
      local_160 = (undefined4 *)CONCAT44(local_160._4_4_,local_148);
      cVar2 = FUN_1451e6270(param_1,param_6,param_7,*param_10);
      if (cVar2 != '\0') {
        FUN_144b62160(*(undefined8 *)(param_1 + 0x90),local_140[0],local_144);
        local_160 = (undefined4 *)CONCAT44(local_160._4_4_,uVar1);
        local_168 = param_9;
        FUN_1451e6340(param_1,param_4,local_138,param_8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_188);
}



// FUNCTION 1451e7670 FUN_1451e7670 body=216 status=ok
// SIG undefined FUN_1451e7670(void)

undefined8 FUN_1451e7670(byte *param_1,longlong param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = (ulonglong)CONCAT11(*param_1,param_1[1]);
  bVar1 = param_1[uVar4 * 2 + 2];
  bVar2 = param_1[uVar4 * 2 + 3];
  if ((ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2) == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = ((uint)bVar1 * 0x100 + (uint)bVar2) * 2;
  }
  if (((*(char *)(param_2 + 0x14) == '\0') ||
      (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0 &&
       ((ushort)((ushort)param_1[(ulonglong)uVar5 + 2 + uVar4 * 2] * 0x100 +
                (ushort)param_1[(ulonglong)uVar5 + 3 + uVar4 * 2]) == 0)))) &&
     (cVar3 = FUN_1451e5b50(param_2,(uint)bVar1 * 0x100 + (uint)bVar2,param_1 + uVar4 * 2 + 4,
                            *param_3,param_3[2]), cVar3 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1451e7750 FUN_1451e7750 body=251 status=ok
// SIG undefined FUN_1451e7750(void)

void FUN_1451e7750(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  
  lVar5 = (ulonglong)*param_1 * 0x100 + 1 + (ulonglong)param_1[1];
  bVar1 = param_1[lVar5 * 2];
  bVar2 = param_1[lVar5 * 2 + 1];
  if ((ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2) == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = (ulonglong)(((uint)bVar1 * 0x100 + (uint)bVar2) * 2);
  }
  pbVar4 = param_1 + uVar3 + lVar5 * 2;
  uVar3 = (ulonglong)CONCAT11(*pbVar4,pbVar4[1]);
  FUN_1451e7500(param_2,CONCAT11(*param_1,param_1[1]),param_1 + 2,(uint)bVar1 * 0x100 + (uint)bVar2,
                param_1 + lVar5 * 2 + 2,(uint)*pbVar4 * 0x100 + (uint)pbVar4[1],pbVar4 + 2,
                (uint)pbVar4[uVar3 * 2 + 2] * 0x100 + (uint)pbVar4[uVar3 * 2 + 3],
                pbVar4 + (uVar3 + 2) * 2,param_3);
  return;
}



// FUNCTION 1451e7850 FUN_1451e7850 body=238 status=ok
// SIG undefined FUN_1451e7850(void)

ulonglong FUN_1451e7850(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  
  uVar4 = 2;
  uVar3 = FUN_144e2c5c0(param_2,param_1,2);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if ((char)uVar3 != '\0') {
      bVar1 = *param_1;
      bVar2 = param_1[1];
      pbVar5 = param_1 + (ulonglong)CONCAT11(bVar1,bVar2) * 2 + 2;
      uVar3 = FUN_1451e7940(pbVar5,param_2);
      if ((char)uVar3 != '\0') {
        if ((ushort)((ushort)*pbVar5 * 0x100 +
                    (ushort)param_1[(ulonglong)CONCAT11(bVar1,bVar2) * 2 + 3]) != 0) {
          uVar4 = (ulonglong)
                  (((uint)*pbVar5 * 0x100 + (uint)param_1[(ulonglong)CONCAT11(bVar1,bVar2) * 2 + 3])
                  * 2);
        }
        pbVar5 = pbVar5 + uVar4;
        uVar3 = FUN_1451e2230(pbVar5,param_2);
        if ((char)uVar3 != '\0') {
          uVar3 = FUN_1451e79d0(pbVar5 + ((ulonglong)*pbVar5 * 0x100 + (ulonglong)pbVar5[1] + 1) * 2
                                ,param_2);
          return uVar3;
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1451e7940 FUN_1451e7940 body=134 status=ok
// SIG undefined FUN_1451e7940(void)

undefined8 FUN_1451e7940(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0) {
      return 1;
    }
    uVar2 = (param_1[1] - 1) + (uint)*param_1 * 0x100;
    if ((uVar2 < 0x7fffffff) &&
       (cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,uVar2 * 2), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451e79d0 FUN_1451e79d0 body=102 status=ok
// SIG undefined FUN_1451e79d0(void)

undefined8 FUN_1451e79d0(byte *param_1,undefined8 param_2)

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



// FUNCTION 1451e7a40 FUN_1451e7a40 body=211 status=ok
// SIG undefined FUN_1451e7a40(void)

undefined8 FUN_1451e7a40(byte *param_1,undefined8 param_2,undefined8 param_3)

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
      cVar1 = FUN_1451e7670(pbVar2,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return 0;
}



// FUNCTION 1451e7b20 FUN_1451e7b20 body=211 status=ok
// SIG undefined FUN_1451e7b20(void)

undefined8 FUN_1451e7b20(byte *param_1,undefined8 param_2,undefined8 param_3)

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
      cVar1 = FUN_1451e7750(pbVar2,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return 0;
}



// FUNCTION 1451e7c00 FUN_1451e7c00 body=151 status=ok
// SIG undefined FUN_1451e7c00(void)

bool FUN_1451e7c00(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e7ca0 FUN_1451e7ca0 body=300 status=ok
// SIG undefined FUN_1451e7ca0(void)

undefined8 FUN_1451e7ca0(byte *param_1,undefined8 param_2,longlong param_3)

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
          cVar1 = FUN_1451e7c00(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) &&
             (cVar1 = FUN_1451e7850((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1],
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



// FUNCTION 1451e7dd0 FUN_1451e7dd0 body=291 status=ok
// SIG undefined FUN_1451e7dd0(void)

void FUN_1451e7dd0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined1 *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  puVar3 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar4 = &DAT_149a1f1a0;
  }
  else {
    pbVar4 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  iVar2 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
  if (iVar2 == 1) {
    uVar1 = FUN_1451e2130(pbVar4);
  }
  else if (iVar2 == 2) {
    uVar1 = FUN_1451e22a0(pbVar4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
    pbVar4 = (byte *)(param_1 + ((ulonglong)uVar1 + 3) * 2);
  }
  else {
    pbVar4 = &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1]) != 0) {
    puVar3 = (undefined1 *)((ulonglong)*pbVar4 * 0x100 + param_1 + (ulonglong)pbVar4[1]);
  }
  local_10 = 0;
  local_28 = &LAB_1451e5a60;
  local_20 = 0;
  uStack_18 = 0;
  FUN_1451e7a40(puVar3,param_2,&local_28);
  return;
}



// FUNCTION 1451e7f00 FUN_1451e7f00 body=308 status=ok
// SIG undefined FUN_1451e7f00(void)

ulonglong FUN_1451e7f00(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
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
    if (iVar4 != 2) goto LAB_1451e7fa4;
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
    local_10 = 0;
    local_28 = &LAB_1451e5a60;
    local_20 = 0;
    uStack_18 = 0;
    uVar1 = FUN_1451e7b20(puVar3,param_2,&local_28);
    return uVar1;
  }
LAB_1451e7fa4:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1451e8040 FUN_1451e8040 body=151 status=ok
// SIG undefined FUN_1451e8040(void)

bool FUN_1451e8040(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e80e0 FUN_1451e80e0 body=303 status=ok
// SIG undefined FUN_1451e80e0(void)

undefined8 FUN_1451e80e0(byte *param_1,undefined8 param_2,longlong param_3)

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
          cVar1 = FUN_1451e8040(pbVar3,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 0) &&
             (lVar2 = (ulonglong)*pbVar3 * 0x100 + param_3 + (ulonglong)pbVar3[1],
             cVar1 = FUN_1451e7ca0(lVar2,param_2,lVar2), cVar1 == '\0')) {
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



// FUNCTION 1451e8210 FUN_1451e8210 body=352 status=ok
// SIG undefined FUN_1451e8210(void)

void FUN_1451e8210(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puVar3 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)) == 0) {
    puVar6 = &DAT_149a1f1a0;
  }
  else {
    puVar6 = (undefined1 *)
             ((ulonglong)*(byte *)(param_1 + 4) * 0x100 + param_1 +
             (ulonglong)*(byte *)(param_1 + 5));
  }
  if ((ushort)((ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7)) == 0) {
    puVar5 = &DAT_149a1f1a0;
  }
  else {
    puVar5 = (undefined1 *)
             ((ulonglong)*(byte *)(param_1 + 6) * 0x100 + param_1 +
             (ulonglong)*(byte *)(param_1 + 7));
  }
  if ((ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) == 0) {
    puVar4 = &DAT_149a1f1a0;
  }
  else {
    puVar4 = (undefined1 *)
             ((ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1 +
             (ulonglong)*(byte *)(param_1 + 9));
  }
  uVar1 = FUN_1451e2580(puVar5,**(undefined4 **)(param_2 + 8));
  if (uVar1 < (uint)*(byte *)(param_1 + 10) * 0x100 + (uint)*(byte *)(param_1 + 0xb)) {
    pbVar2 = (byte *)(param_1 + ((ulonglong)uVar1 + 6) * 2);
  }
  else {
    pbVar2 = &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
    puVar3 = (undefined1 *)((ulonglong)*pbVar2 * 0x100 + param_1 + (ulonglong)pbVar2[1]);
  }
  local_48 = FUN_1451e5a80;
  local_40 = puVar6;
  local_38 = puVar5;
  local_30 = puVar4;
  FUN_1451e7a40(puVar3,param_2,&local_48);
  return;
}



// FUNCTION 1451e8370 FUN_1451e8370 body=501 status=ok
// SIG undefined FUN_1451e8370(void)

ulonglong FUN_1451e8370(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puVar4 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    pbVar3 = &DAT_149a1f1a0;
  }
  else {
    pbVar3 = (byte *)((ulonglong)*(byte *)(param_1 + 2) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 3));
  }
  uVar2 = 0;
  iVar7 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar7 == 1) {
    uVar2 = FUN_1451e2130(pbVar3,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar7 != 2) goto LAB_1451e840a;
    uVar2 = FUN_1451e22a0();
  }
  if ((int)uVar2 != -1) {
    if ((ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)) == 0) {
      puVar8 = &DAT_149a1f1a0;
    }
    else {
      puVar8 = (undefined1 *)
               ((ulonglong)*(byte *)(param_1 + 4) * 0x100 + param_1 +
               (ulonglong)*(byte *)(param_1 + 5));
    }
    if ((ushort)((ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7)) == 0) {
      puVar6 = &DAT_149a1f1a0;
    }
    else {
      puVar6 = (undefined1 *)
               ((ulonglong)*(byte *)(param_1 + 6) * 0x100 + param_1 +
               (ulonglong)*(byte *)(param_1 + 7));
    }
    if ((ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) == 0) {
      puVar5 = &DAT_149a1f1a0;
    }
    else {
      puVar5 = (undefined1 *)
               ((ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1 +
               (ulonglong)*(byte *)(param_1 + 9));
    }
    uVar1 = FUN_1451e2580(puVar6,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
    if (uVar1 < (uint)*(byte *)(param_1 + 10) * 0x100 + (uint)*(byte *)(param_1 + 0xb)) {
      pbVar3 = (byte *)(param_1 + ((ulonglong)uVar1 + 6) * 2);
    }
    else {
      pbVar3 = &DAT_149a1f1a0;
    }
    if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) != 0) {
      puVar4 = (undefined1 *)((ulonglong)*pbVar3 * 0x100 + param_1 + (ulonglong)pbVar3[1]);
    }
    local_48 = FUN_1451e5a80;
    local_40 = puVar8;
    local_38 = puVar6;
    local_30 = puVar5;
    uVar2 = FUN_1451e7b20(puVar4,param_2,&local_48);
    return uVar2;
  }
LAB_1451e840a:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1451e8570 FUN_1451e8570 body=134 status=ok
// SIG undefined FUN_1451e8570(void)

undefined1 FUN_1451e8570(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1451e3aa0(param_1 + 2,param_2,param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_1451e4de0(param_1 + 4,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_1451e4de0(param_1 + 6,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_1451e4de0(param_1 + 8,param_2,param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_1451e80e0(param_1 + 10,param_2,param_1);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1451e8600 FUN_1451e8600 body=188 status=ok
// SIG undefined FUN_1451e8600(void)

undefined8 FUN_1451e8600(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  
  lVar5 = (ulonglong)*(byte *)(param_1 + 2) * 0x100 + (ulonglong)*(byte *)(param_1 + 3) + 2;
  bVar2 = *(byte *)(param_1 + lVar5 * 2);
  lVar1 = param_1 + lVar5 * 2;
  bVar3 = *(byte *)(param_1 + 1 + lVar5 * 2);
  lVar5 = lVar1 + (ulonglong)CONCAT11(bVar2,bVar3) * 2;
  if ((*(char *)(param_2 + 0x14) == '\0') ||
     (((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0 &&
      ((ushort)((ushort)*(byte *)(lVar5 + 2) * 0x100 + (ushort)*(byte *)(lVar5 + 3)) == 0)))) {
    cVar4 = FUN_1451e5b50(param_2,(uint)bVar2 * 0x100 + (uint)bVar3,lVar1 + 4,FUN_1451e5ac0,param_1)
    ;
    if (cVar4 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451e86c0 FUN_1451e86c0 body=110 status=ok
// SIG undefined FUN_1451e86c0(void)

undefined1 * FUN_1451e86c0(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)*(byte *)(param_1 + 2) * 0x100 + (ulonglong)*(byte *)(param_1 + 3) + 2;
  pbVar1 = &DAT_149a1f1a0;
  if ((uint)*(byte *)(param_1 + lVar2 * 2) * 0x100 + (uint)*(byte *)(param_1 + 1 + lVar2 * 2) != 0)
  {
    pbVar1 = (byte *)(param_1 + lVar2 * 2 + 2);
  }
  if ((ushort)((ushort)*pbVar1 * 0x100 + (ushort)pbVar1[1]) == 0) {
    return &DAT_149a1f1a0;
  }
  return (undefined1 *)((ulonglong)*pbVar1 * 0x100 + param_1 + (ulonglong)pbVar1[1]);
}



// FUNCTION 1451e8730 FUN_1451e8730 body=439 status=ok
// SIG undefined FUN_1451e8730(void)

ulonglong FUN_1451e8730(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  code *local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  pbVar6 = &DAT_149a1f1a0;
  pbVar1 = (byte *)(param_1 +
                   ((ulonglong)*(byte *)(param_1 + 2) * 0x100 +
                   (ulonglong)*(byte *)(param_1 + 3) + 2) * 2);
  pbVar2 = &DAT_149a1f1a0;
  if ((uint)*pbVar1 * 0x100 + (uint)pbVar1[1] != 0) {
    pbVar2 = pbVar1 + 2;
  }
  if ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) {
    pbVar6 = (byte *)((ulonglong)*pbVar2 * 0x100 + param_1 + (ulonglong)pbVar2[1]);
  }
  uVar3 = 0;
  iVar5 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
  if (iVar5 == 1) {
    uVar3 = FUN_1451e2130(pbVar6,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar5 != 2) goto LAB_1451e87f2;
    uVar3 = FUN_1451e22a0(pbVar6);
  }
  if ((int)uVar3 != -1) {
    lVar4 = (ulonglong)*pbVar1 * 0x100 + 1 + (ulonglong)pbVar1[1];
    local_28 = FUN_1451e5ac0;
    pbVar2 = pbVar1 + lVar4 * 2;
    uVar3 = (ulonglong)CONCAT11(*pbVar2,pbVar1[lVar4 * 2 + 1]);
    local_20 = param_1;
    local_18 = param_1;
    local_10 = param_1;
    uVar3 = FUN_1451e7500(param_2,(uint)*(byte *)(param_1 + 2) * 0x100 +
                                  (uint)*(byte *)(param_1 + 3),param_1 + 4,
                          (uint)*pbVar1 * 0x100 + (uint)pbVar1[1],pbVar1 + 4,
                          (uint)*pbVar2 * 0x100 + (uint)pbVar1[lVar4 * 2 + 1],pbVar2 + 2,
                          (uint)pbVar2[uVar3 * 2 + 2] * 0x100 + (uint)pbVar2[uVar3 * 2 + 3],
                          pbVar2 + (uVar3 + 2) * 2,&local_28);
    return uVar3;
  }
LAB_1451e87f2:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1451e88f0 FUN_1451e88f0 body=202 status=ok
// SIG undefined FUN_1451e88f0(void)

ulonglong FUN_1451e88f0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar1 = (undefined1 *)(param_1 + 2);
  uVar3 = FUN_1451e89c0(puVar1,param_2,param_1);
  if ((char)uVar3 != '\0') {
    uVar2 = CONCAT11(*puVar1,*(undefined1 *)(param_1 + 3));
    pbVar4 = puVar1 + (ulonglong)uVar2 * 2 + 2;
    uVar3 = FUN_1451e89c0(pbVar4,param_2,param_1);
    if ((char)uVar3 != '\0') {
      uVar3 = 0x100;
      if ((ushort)((ushort)*pbVar4 * 0x100 + (ushort)(byte)puVar1[(ulonglong)uVar2 * 2 + 3]) != 0) {
        uVar2 = CONCAT11(*pbVar4,puVar1[(ulonglong)uVar2 * 2 + 3]);
        pbVar5 = pbVar4 + (ulonglong)uVar2 * 2 + 2;
        uVar3 = FUN_1451e89c0(pbVar5,param_2,param_1);
        if ((char)uVar3 != '\0') {
          uVar3 = FUN_1451e79d0(pbVar5 + ((ulonglong)*pbVar5 * 0x100 +
                                         (ulonglong)pbVar4[(ulonglong)uVar2 * 2 + 3] + 1) * 2,
                                param_2);
          return uVar3;
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1451e89c0 FUN_1451e89c0 body=300 status=ok
// SIG undefined FUN_1451e89c0(void)

undefined8 FUN_1451e89c0(byte *param_1,undefined8 param_2,longlong param_3)

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
          cVar1 = FUN_1451e3a00(pbVar2,param_2,param_3);
          if (cVar1 == '\0') {
            return 0;
          }
          if (((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0) &&
             (cVar1 = FUN_1451e2390((ulonglong)*pbVar2 * 0x100 + param_3 + (ulonglong)pbVar2[1],
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



// FUNCTION 1451e8af0 FUN_1451e8af0 body=178 status=ok
// SIG undefined FUN_1451e8af0(void)

undefined8 FUN_1451e8af0(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_1451e8b22;
    puVar3 = (undefined8 *)&DAT_149a1f1a0;
    while( true ) {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) +
                       (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x90) + 0x5c) * 0x14);
      if (((((*(uint *)(puVar3 + 2) >> (uVar1 >> 4 & 0x1f) & 1) != 0) &&
           ((*(uint *)((longlong)puVar3 + 0x14) >> (uVar1 & 0x1f) & 1) != 0)) &&
          ((*(uint *)(puVar3 + 3) >> (uVar1 >> 9 & 0x1f) & 1) != 0)) &&
         (cVar2 = (*(code *)puVar3[1])(*puVar3,param_2), cVar2 != '\0')) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      if (*(uint *)(param_1 + 0x10) <= uVar4) break;
LAB_1451e8b22:
      puVar3 = (undefined8 *)((ulonglong)uVar4 * 0x20 + *(longlong *)(param_1 + 0x18));
    }
  }
  return 0;
}



// FUNCTION 1451e8bb0 FUN_1451e8bb0 body=138 status=ok
// SIG undefined FUN_1451e8bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1451e8bb0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_1451e8c40();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 2)),0,
             (ulonglong)(uVar2 - uVar1) << 5);
    }
    *param_1 = uVar2;
    return (undefined4 *)((ulonglong)(uVar2 - 1) * 0x20 + *(longlong *)(param_1 + 2));
  }
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  _DAT_14c793f70 = 0;
  _DAT_14c793f78 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 1451e8c40 FUN_1451e8c40 body=137 status=ok
// SIG undefined FUN_1451e8c40(void)

undefined8 FUN_1451e8c40(longlong param_1,uint param_2)

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
    if ((((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x7ffffff)) &&
       (lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),(ulonglong)uVar3 << 5), lVar2 != 0)) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return 0;
  }
  return 1;
}



// FUNCTION 1451e8cd0 FUN_1451e8cd0 body=177 status=ok
// SIG undefined FUN_1451e8cd0(void)

byte * FUN_1451e8cd0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if ((ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 4) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 5));
  }
  if (param_2 < (uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) {
    pbVar1 = pbVar2 + ((ulonglong)param_2 * 3 + 1) * 2;
  }
  else {
    pbVar1 = &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)pbVar1[4] * 0x100 + (ushort)pbVar1[5]) == 0) {
    return &DAT_149a1f1a0;
  }
  return pbVar2 + (ulonglong)pbVar1[5] + (ulonglong)pbVar1[4] * 0x100;
}



// FUNCTION 1451e8d90 FUN_1451e8d90 body=139 status=ok
// SIG undefined FUN_1451e8d90(void)

int FUN_1451e8d90(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (param_2 == 0xffff) {
    return 0;
  }
  pbVar2 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7)) == 0) {
    pbVar1 = &DAT_149a1f1a0;
  }
  else {
    pbVar1 = (byte *)((ulonglong)*(byte *)(param_1 + 6) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 7));
  }
  if (param_2 < (uint)*pbVar1 * 0x100 + (uint)pbVar1[1]) {
    pbVar2 = pbVar1 + (ulonglong)param_2 * 6 + 2;
  }
  return (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 + (uint)*pbVar2 * 0x1000000 +
         (uint)pbVar2[3];
}



// FUNCTION 1451e8e20 FUN_1451e8e20 body=177 status=ok
// SIG undefined FUN_1451e8e20(void)

byte * FUN_1451e8e20(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if ((ushort)((ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7)) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 6) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 7));
  }
  if (param_2 < (uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) {
    pbVar1 = pbVar2 + ((ulonglong)param_2 * 3 + 1) * 2;
  }
  else {
    pbVar1 = &DAT_149a1f1a0;
  }
  if ((ushort)((ushort)pbVar1[4] * 0x100 + (ushort)pbVar1[5]) == 0) {
    return &DAT_149a1f1a0;
  }
  return pbVar2 + (ulonglong)pbVar1[5] + (ulonglong)pbVar1[4] * 0x100;
}



// FUNCTION 1451e8ee0 FUN_1451e8ee0 body=153 status=ok
// SIG undefined FUN_1451e8ee0(void)

byte * FUN_1451e8ee0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = &DAT_149a1f1a0;
  if ((ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) == 0) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1 +
                     (ulonglong)*(byte *)(param_1 + 9));
  }
  if (param_2 < (uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) {
    if ((ushort)((ushort)pbVar2[(ulonglong)param_2 * 2 + 2] * 0x100 +
                (ushort)pbVar2[(ulonglong)param_2 * 2 + 3]) != 0) {
      pbVar1 = pbVar2 + (ulonglong)pbVar2[(ulonglong)param_2 * 2 + 3] +
                        (ulonglong)pbVar2[(ulonglong)param_2 * 2 + 2] * 0x100;
    }
  }
  return pbVar1;
}



// FUNCTION 1451e8f80 FUN_1451e8f80 body=178 status=ok
// SIG undefined FUN_1451e8f80(void)

void FUN_1451e8f80(byte *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  if (0x10000 < (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
                (uint)param_1[3]) {
    if ((uint)param_1[10] * 0x1000000 + (uint)param_1[0xc] * 0x100 + (uint)param_1[0xb] * 0x10000 +
        (uint)param_1[0xd] != 0) {
      param_1 = param_1 + (ulonglong)param_1[0xd] +
                          ((ulonglong)CONCAT11(param_1[10],param_1[0xb]) * 0x100 +
                          (ulonglong)param_1[0xc]) * 0x100;
      goto LAB_1451e9016;
    }
  }
  param_1 = &DAT_149a1f1a0;
LAB_1451e9016:
  FUN_1451e31e0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1451e9040 FUN_1451e9040 body=190 status=ok
// SIG undefined FUN_1451e9040(void)

void FUN_1451e9040(byte *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  byte *pbVar2;
  
  if ((param_3 != -1) &&
     (0x10000 < (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
                (uint)param_1[3])) {
    if ((uint)param_1[10] * 0x1000000 + (uint)param_1[0xc] * 0x100 + (uint)param_1[0xb] * 0x10000 +
        (uint)param_1[0xd] == 0) {
      pbVar2 = &DAT_149a1f1a0;
    }
    else {
      pbVar2 = param_1 + (ulonglong)param_1[0xd] +
                         (((ulonglong)param_1[0xb] + (ulonglong)param_1[10] * 0x100) * 0x100 +
                         (ulonglong)param_1[0xc]) * 0x100;
    }
    lVar1 = FUN_1451e32e0(pbVar2,param_3,param_2);
    if (lVar1 != 0) {
      return;
    }
  }
  FUN_1451e8e20(param_1,param_2);
  return;
}



// FUNCTION 1451e9100 FUN_1451e9100 body=151 status=ok
// SIG undefined FUN_1451e9100(void)

bool FUN_1451e9100(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e91a0 FUN_1451e91a0 body=152 status=ok
// SIG undefined FUN_1451e91a0(void)

undefined8 FUN_1451e91a0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1451e9100();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (lVar2 = (ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],
     cVar1 = FUN_1451e9580(lVar2,param_2,lVar2), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 1451e9240 FUN_1451e9240 body=151 status=ok
// SIG undefined FUN_1451e9240(void)

bool FUN_1451e9240(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e92e0 FUN_1451e92e0 body=152 status=ok
// SIG undefined FUN_1451e92e0(void)

undefined8 FUN_1451e92e0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1451e9240();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (lVar2 = (ulonglong)*param_1 * 0x100 + param_3 + (ulonglong)param_1[1],
     cVar1 = FUN_1451e9a80(lVar2,param_2,lVar2), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 1451e9380 FUN_1451e9380 body=148 status=ok
// SIG undefined FUN_1451e9380(void)

bool FUN_1451e9380(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e9420 FUN_1451e9420 body=177 status=ok
// SIG undefined FUN_1451e9420(void)

undefined8 FUN_1451e9420(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_1451e9380();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_1451e3380((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 1451e94e0 FUN_1451e94e0 body=151 status=ok
// SIG undefined FUN_1451e94e0(void)

bool FUN_1451e94e0(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e9580 FUN_1451e9580 body=534 status=ok
// SIG undefined FUN_1451e9580(void)

undefined8 FUN_1451e9580(byte *param_1,int *param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  
  cVar3 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar3 == '\0') ||
     (cVar3 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 6),
     cVar3 == '\0')) {
    return 0;
  }
  uVar5 = 0;
  uVar8 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar8 != 0) {
    do {
      pbVar7 = param_1 + 6;
      pbVar1 = param_1 + 2;
      if ((((pbVar1 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < pbVar1)) ||
          ((uint)(param_2[4] - (int)pbVar1) < 6)) ||
         (iVar2 = param_2[6], param_2[6] = iVar2 + -1, iVar2 < 1)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      pcVar4 = "OUT-OF-RANGE";
      if (cVar3 != '\0') {
        pcVar4 = "OK";
      }
      FUN_1451e0950("SANITIZE",pbVar1,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",pbVar1,param_1 + 8,6,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
      if ((cVar3 == '\0') || (cVar3 = FUN_1451e94e0(pbVar7,param_2,param_3), cVar3 == '\0')) {
        return 0;
      }
      if ((ushort)((ushort)*pbVar7 * 0x100 + (ushort)param_1[7]) != 0) {
        lVar6 = (ulonglong)*pbVar7 * 0x100 + param_3 + (ulonglong)param_1[7];
        cVar3 = FUN_1451e1900(lVar6,param_2,lVar6);
        if ((cVar3 == '\0') || (cVar3 = FUN_1451e1aa0(lVar6 + 2,param_2,lVar6), cVar3 == '\0')) {
          cVar3 = FUN_144e2d280(param_2,pbVar7,2);
          if (cVar3 == '\0') {
            return 0;
          }
          pbVar7[0] = 0;
          pbVar7[1] = 0;
        }
      }
      uVar5 = uVar5 + 1;
      param_1 = pbVar7;
    } while (uVar5 < uVar8);
  }
  return 1;
}



// FUNCTION 1451e97a0 FUN_1451e97a0 body=149 status=ok
// SIG undefined FUN_1451e97a0(void)

int FUN_1451e97a0(byte *param_1,uint param_2,uint *param_3,int *param_4)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (param_3 != (uint *)0x0) {
    uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    uVar2 = 0;
    if (param_2 <= uVar4) {
      uVar2 = uVar4 - param_2;
    }
    uVar4 = *param_3;
    if (uVar2 < *param_3) {
      uVar4 = uVar2;
    }
    *param_3 = uVar4;
    if (uVar4 != 0) {
      uVar3 = (ulonglong)uVar4;
      pbVar1 = param_1 + (ulonglong)param_2 * 6 + 4;
      do {
        *param_4 = (uint)pbVar1[-2] * 0x1000000 + (uint)pbVar1[-1] * 0x10000 + (uint)*pbVar1 * 0x100
                   + (uint)pbVar1[1];
        uVar3 = uVar3 - 1;
        pbVar1 = pbVar1 + 6;
        param_4 = param_4 + 1;
      } while (uVar3 != 0);
    }
  }
  return (uint)*param_1 * 0x100 + (uint)param_1[1];
}



// FUNCTION 1451e9840 FUN_1451e9840 body=175 status=ok
// SIG undefined FUN_1451e9840(void)

undefined8 FUN_1451e9840(byte *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar2;
  
  iVar5 = 0;
  iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1] + -1;
  if (-1 < iVar4) {
    do {
      uVar1 = (uint)(iVar5 + iVar4) >> 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = (uint)param_1[uVar2 * 6 + 3] * 0x10000 + (uint)param_1[uVar2 * 6 + 4] * 0x100 +
              (uint)param_1[uVar2 * 6 + 2] * 0x1000000 + (uint)(param_1 + uVar2 * 6 + 2)[3];
      if (param_2 < uVar3) {
        iVar4 = uVar1 - 1;
      }
      else {
        if (param_2 == uVar3) {
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar1;
          }
          return 1;
        }
        iVar5 = uVar1 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0xffff;
  }
  return 0;
}



// FUNCTION 1451e98f0 FUN_1451e98f0 body=233 status=ok
// SIG undefined FUN_1451e98f0(void)

undefined8 FUN_1451e98f0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int local_18 [2];
  longlong local_10;
  
  local_18[0] = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
                (uint)param_1[3];
  local_10 = param_3;
  cVar1 = FUN_144e2c5c0(param_2,param_1,6);
  if ((cVar1 != '\0') && (cVar1 = FUN_1451e99e0(param_1 + 4,param_2,param_3), cVar1 != '\0')) {
    if (((ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) != 0) &&
       (cVar1 = FUN_1451e1e10((ulonglong)param_1[4] * 0x100 + param_3 + (ulonglong)param_1[5],
                              param_2,local_18), cVar1 == '\0')) {
      cVar1 = FUN_144e2d280(param_2,param_1 + 4,2);
      if (cVar1 == '\0') {
        return 0;
      }
      param_1[4] = 0;
      param_1[5] = 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1451e99e0 FUN_1451e99e0 body=151 status=ok
// SIG undefined FUN_1451e99e0(void)

bool FUN_1451e99e0(byte *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1451e9a80 FUN_1451e9a80 body=218 status=ok
// SIG undefined FUN_1451e9a80(void)

undefined8 FUN_1451e9a80(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 6),
     cVar1 != '\0')) {
    uVar3 = 0;
    uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (uVar4 != 0) {
      do {
        cVar1 = FUN_1451e98f0(param_1 + uVar3 * 6 + 2,param_2,param_3);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < uVar4);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1451e9b60 FUN_1451e9b60 body=883 status=ok
// SIG undefined FUN_1451e9b60(void)

bool FUN_1451e9b60(byte *param_1,longlong param_2,longlong param_3,byte *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  bool bVar13;
  
  bVar13 = false;
  uVar10 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar10 != 0) {
    uVar11 = *(uint *)(param_2 + 0xb0) & 0xfffffffe;
    lVar3 = *(longlong *)(param_2 + 0x80);
    if ((uVar10 & 1) != 0) {
      bVar13 = (ushort)((ushort)*param_4 * 0x100 + (ushort)param_4[1]) != 0;
      pbVar1 = param_4 + 1;
      bVar2 = *param_4;
      param_4 = param_4 + 2;
      iVar7 = FUN_1451e10a0(lVar3,(int)(short)((ushort)bVar2 * 0x100 + (ushort)*pbVar1));
      param_5[2] = param_5[2] + iVar7;
    }
    if ((uVar10 & 2) != 0) {
      pbVar1 = param_4 + 1;
      bVar2 = *param_4;
      bVar13 = (bool)(bVar13 | (ushort)((ushort)*param_4 * 0x100 + (ushort)param_4[1]) != 0);
      param_4 = param_4 + 2;
      iVar7 = FUN_144e31290(lVar3,(int)(short)((ushort)bVar2 * 0x100 + (ushort)*pbVar1));
      param_5[3] = param_5[3] + iVar7;
    }
    if ((uVar10 & 4) != 0) {
      if (uVar11 == 4) {
        sVar9 = (ushort)*param_4 * 0x100 + (ushort)param_4[1];
        bVar13 = (bool)(bVar13 | sVar9 != 0);
        iVar7 = FUN_1451e10a0(lVar3,(int)sVar9);
        *param_5 = *param_5 + iVar7;
      }
      param_4 = param_4 + 2;
    }
    if ((uVar10 & 8) != 0) {
      if (uVar11 != 4) {
        sVar9 = (ushort)*param_4 * 0x100 + (ushort)param_4[1];
        bVar13 = (bool)(bVar13 | sVar9 != 0);
        iVar7 = FUN_144e31290(lVar3,(int)sVar9);
        param_5[1] = param_5[1] - iVar7;
      }
      param_4 = param_4 + 2;
    }
    if ((param_1[1] & 0xf0) != 0) {
      if ((*(int *)(lVar3 + 0x28) == 0) && (*(int *)(lVar3 + 0x34) == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((*(int *)(lVar3 + 0x2c) == 0) && (*(int *)(lVar3 + 0x34) == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar5) || (bVar6)) {
        puVar12 = &DAT_149a1f1a0;
        uVar4 = *(undefined8 *)(param_2 + 0xa8);
        if ((uVar10 & 0x10) != 0) {
          if (bVar5) {
            sVar9 = (ushort)*param_4 * 0x100 + (ushort)param_4[1];
            bVar13 = (bool)(bVar13 | sVar9 != 0);
            if (sVar9 == 0) {
              puVar8 = &DAT_149a1f1a0;
            }
            else {
              puVar8 = (undefined1 *)((ulonglong)*param_4 * 0x100 + param_3 + (ulonglong)param_4[1])
              ;
            }
            iVar7 = FUN_1451e3870(puVar8,lVar3,uVar4);
            param_5[2] = param_5[2] + iVar7;
          }
          param_4 = param_4 + 2;
        }
        if ((uVar10 & 0x20) != 0) {
          if (bVar6) {
            sVar9 = (ushort)*param_4 * 0x100 + (ushort)param_4[1];
            bVar13 = (bool)(bVar13 | sVar9 != 0);
            if (sVar9 == 0) {
              puVar8 = &DAT_149a1f1a0;
            }
            else {
              puVar8 = (undefined1 *)((ulonglong)*param_4 * 0x100 + param_3 + (ulonglong)param_4[1])
              ;
            }
            iVar7 = FUN_1451e38e0(puVar8,lVar3,uVar4);
            param_5[3] = param_5[3] + iVar7;
          }
          param_4 = param_4 + 2;
        }
        if ((uVar10 & 0x40) != 0) {
          if ((uVar11 == 4) && (bVar5)) {
            sVar9 = (ushort)*param_4 * 0x100 + (ushort)param_4[1];
            bVar13 = (bool)(bVar13 | sVar9 != 0);
            if (sVar9 == 0) {
              puVar8 = &DAT_149a1f1a0;
            }
            else {
              puVar8 = (undefined1 *)((ulonglong)*param_4 * 0x100 + param_3 + (ulonglong)param_4[1])
              ;
            }
            iVar7 = FUN_1451e3870(puVar8,lVar3,uVar4);
            *param_5 = *param_5 + iVar7;
            param_4 = param_4 + 2;
          }
          else {
            param_4 = param_4 + 2;
          }
        }
        if ((((char)uVar10 < '\0') && (uVar11 != 4)) && (bVar6)) {
          sVar9 = (ushort)*param_4 * 0x100 + (ushort)param_4[1];
          bVar13 = (bool)(bVar13 | sVar9 != 0);
          if (sVar9 != 0) {
            puVar12 = (undefined1 *)((ulonglong)*param_4 * 0x100 + param_3 + (ulonglong)param_4[1]);
          }
          iVar7 = FUN_1451e38e0(puVar12,lVar3,uVar4);
          param_5[1] = param_5[1] - iVar7;
        }
      }
    }
    return bVar13;
  }
  return false;
}



// FUNCTION 1451e9ee0 FUN_1451e9ee0 body=214 status=ok
// SIG undefined FUN_1451e9ee0(void)

undefined8 FUN_1451e9ee0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)(param_1 + 1);
  lVar5 = param_4 + 2;
  if ((bVar1 & 1) == 0) {
    lVar5 = param_4;
  }
  lVar4 = lVar5 + 2;
  if ((bVar1 & 2) == 0) {
    lVar4 = lVar5;
  }
  lVar5 = lVar4 + 2;
  if ((bVar1 & 4) == 0) {
    lVar5 = lVar4;
  }
  lVar4 = lVar5 + 2;
  if ((bVar1 & 8) == 0) {
    lVar4 = lVar5;
  }
  lVar5 = lVar4;
  if ((bVar1 & 0x10) == 0) {
LAB_1451e9f50:
    lVar4 = lVar5;
    if ((bVar1 & 0x20) != 0) {
      lVar4 = lVar5 + 2;
      cVar2 = FUN_1451e3de0(lVar5,param_2,param_3);
      if (cVar2 == '\0') goto LAB_1451e9f4c;
    }
    lVar5 = lVar4;
    if ((bVar1 & 0x40) != 0) {
      lVar5 = lVar4 + 2;
      cVar2 = FUN_1451e3de0(lVar4,param_2,param_3);
      if (cVar2 == '\0') goto LAB_1451e9f4c;
    }
    if ((char)bVar1 < '\0') {
      cVar2 = FUN_1451e3de0(lVar5,param_2,param_3);
      if (cVar2 == '\0') goto LAB_1451e9f4c;
    }
    uVar3 = 1;
  }
  else {
    lVar5 = lVar4 + 2;
    cVar2 = FUN_1451e3de0(lVar4);
    if (cVar2 != '\0') goto LAB_1451e9f50;
LAB_1451e9f4c:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1451e9fc0 FUN_1451e9fc0 body=191 status=ok
// SIG undefined FUN_1451e9fc0(void)

undefined8 FUN_1451e9fc0(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  uVar3 = uVar4 >> 1 & 0x5b6db6db;
  uVar3 = (uVar4 - (uVar3 >> 1 & 0x5b6db6db)) - uVar3;
  cVar1 = FUN_144e2c5c0(param_2,param_4,(((uVar3 >> 3) + uVar3 & 0xc71c71c7) % 0x3f) * 2);
  if (cVar1 == '\0') {
LAB_1451ea068:
    uVar2 = 0;
  }
  else {
    if ((param_1[1] & 0xf0) != 0) {
      cVar1 = FUN_1451e9ee0(param_1,param_2,param_3,param_4);
      if (cVar1 == '\0') goto LAB_1451ea068;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1451ea080 FUN_1451ea080 body=343 status=ok
// SIG undefined FUN_1451ea080(void)

undefined8
FUN_1451ea080(byte *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint param_5)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  uVar4 = uVar5 >> 1 & 0x5b6db6db;
  uVar4 = (uVar5 - (uVar4 >> 1 & 0x5b6db6db)) - uVar4;
  uVar3 = uVar5 >> 1 & 0x5b6db6db;
  uVar3 = (uVar5 - (uVar3 >> 1 & 0x5b6db6db)) - uVar3;
  uVar5 = ((uVar3 >> 3) + uVar3 & 0xc71c71c7) % 0x3f;
  uVar3 = uVar5 * 2;
  if (((uVar5 == 0) || (param_5 < (uint)(0xffffffff / (ulonglong)uVar3))) &&
     (cVar1 = FUN_144e2c5c0(param_2,param_4,uVar3 * param_5), cVar1 != '\0')) {
    if ((param_1[1] & 0xf0) == 0) {
      uVar2 = 1;
    }
    else {
      uVar3 = 0;
      if (param_5 != 0) {
        do {
          cVar1 = FUN_1451e9ee0(param_1,param_2,param_3,param_4);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = uVar3 + 1;
          param_4 = param_4 + (ulonglong)(((uVar4 >> 3) + uVar4 & 0xc71c71c7) % 0x3f) * 2;
        } while (uVar3 < param_5);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1451ea1e0 FUN_1451ea1e0 body=151 status=ok
// SIG undefined FUN_1451ea1e0(void)

undefined8
FUN_1451ea1e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint param_5,
             uint param_6)

{
  char cVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 1) & 0xf0) == 0) {
    return 1;
  }
  uVar2 = 0;
  if (param_5 != 0) {
    do {
      cVar1 = FUN_1451e9ee0(param_1,param_2,param_3,param_4);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar2 = uVar2 + 1;
      param_4 = param_4 + (ulonglong)param_6 * 2;
    } while (uVar2 < param_5);
  }
  return 1;
}



// FUNCTION 1451ea280 FUN_1451ea280 body=235 status=ok
// SIG undefined FUN_1451ea280(void)

void FUN_1451ea280(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,
                  float *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = *(longlong *)(param_2 + 0x80);
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_1 + 3);
  iVar3 = *(int *)(lVar4 + 0x20);
  uVar5 = *(uint *)(*(longlong *)(lVar4 + 0x18) + 0x2c);
  if (uVar5 == 0) {
    uVar5 = FUN_144e2c980();
  }
  *param_4 = ((float)iVar3 * (float)(int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2)) /
             (float)uVar5;
  bVar1 = *(byte *)(param_1 + 4);
  bVar2 = *(byte *)(param_1 + 5);
  iVar3 = *(int *)(lVar4 + 0x24);
  uVar5 = *(uint *)(*(longlong *)(lVar4 + 0x18) + 0x2c);
  if (uVar5 == 0) {
    uVar5 = FUN_144e2c980();
  }
  *param_5 = ((float)iVar3 * (float)(int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2)) /
             (float)uVar5;
  return;
}



// FUNCTION 1451ea370 FUN_1451ea370 body=485 status=ok
// SIG undefined FUN_1451ea370(void)

void FUN_1451ea370(longlong param_1,longlong param_2,ulonglong param_3,float *param_4,float *param_5
                  )

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int local_res10 [4];
  int local_res20 [2];
  int local_48;
  int local_44 [3];
  
  lVar5 = *(longlong *)(param_2 + 0x80);
  iVar3 = *(int *)(lVar5 + 0x28);
  iVar4 = *(int *)(lVar5 + 0x2c);
  local_res20[0] = 0;
  local_res10[0] = 0;
  if ((iVar3 == 0) && (iVar4 == 0)) {
LAB_1451ea45a:
    bVar6 = false;
LAB_1451ea45d:
    bVar1 = *(byte *)(param_1 + 2);
    bVar2 = *(byte *)(param_1 + 3);
    iVar3 = *(int *)(lVar5 + 0x20);
    uVar8 = *(uint *)(*(longlong *)(lVar5 + 0x18) + 0x2c);
    if (uVar8 == 0) {
      uVar8 = FUN_144e2c980();
    }
    *param_4 = ((float)iVar3 * (float)(int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2)) /
               (float)uVar8;
    if (!bVar6) goto LAB_1451ea4f0;
  }
  else {
    local_res10[0] = 0;
    local_res20[0] = 0;
    iVar7 = (**(code **)(*(longlong *)(lVar5 + 0x40) + 400))
                      (lVar5,*(undefined8 *)(lVar5 + 0x48),param_3,
                       (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7),
                       local_res20,local_res10,*(undefined8 *)(*(longlong *)(lVar5 + 0x40) + 0x80));
    if (iVar7 == 0) goto LAB_1451ea45a;
    FUN_144b63d80(lVar5,param_3 & 0xffffffff,&local_48,local_44);
    bVar6 = true;
    local_res20[0] = local_res20[0] - local_48;
    local_res10[0] = local_res10[0] - local_44[0];
    if (iVar3 == 0) goto LAB_1451ea45d;
    *param_4 = (float)local_res20[0];
  }
  if (iVar4 != 0) {
    *param_5 = (float)local_res10[0];
    return;
  }
LAB_1451ea4f0:
  bVar1 = *(byte *)(param_1 + 4);
  bVar2 = *(byte *)(param_1 + 5);
  iVar3 = *(int *)(lVar5 + 0x24);
  uVar8 = *(uint *)(*(longlong *)(lVar5 + 0x18) + 0x2c);
  if (uVar8 == 0) {
    uVar8 = FUN_144e2c980();
  }
  *param_5 = ((float)iVar3 * (float)(int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2)) /
             (float)uVar8;
  return;
}



// FUNCTION 1451ea560 FUN_1451ea560 body=593 status=ok
// SIG undefined FUN_1451ea560(void)

void FUN_1451ea560(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,
                  float *param_5)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  
  lVar3 = *(longlong *)(param_2 + 0x80);
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_1 + 3);
  iVar5 = *(int *)(lVar3 + 0x20);
  uVar4 = *(uint *)(*(longlong *)(lVar3 + 0x18) + 0x2c);
  if (uVar4 == 0) {
    uVar4 = FUN_144e2c980();
  }
  *param_4 = ((float)iVar5 * (float)(int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2)) /
             (float)uVar4;
  bVar1 = *(byte *)(param_1 + 4);
  bVar2 = *(byte *)(param_1 + 5);
  iVar5 = *(int *)(lVar3 + 0x24);
  uVar4 = *(uint *)(*(longlong *)(lVar3 + 0x18) + 0x2c);
  if (uVar4 == 0) {
    uVar4 = FUN_144e2c980();
  }
  puVar10 = &DAT_149a1f1a0;
  iVar9 = 0;
  *param_5 = ((float)iVar5 * (float)(int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2)) /
             (float)uVar4;
  uVar4 = *(uint *)(lVar3 + 0x28);
  if ((uVar4 != 0) || (*(int *)(lVar3 + 0x34) != 0)) {
    if ((ushort)((ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7)) == 0) {
      puVar7 = &DAT_149a1f1a0;
    }
    else {
      puVar7 = (undefined1 *)
               ((ulonglong)*(byte *)(param_1 + 6) * 0x100 + param_1 +
               (ulonglong)*(byte *)(param_1 + 7));
    }
    uVar8 = (uint)(byte)puVar7[4] * 0x100 + (uint)(byte)puVar7[5];
    iVar5 = iVar9;
    if (uVar8 != 0) {
      if (uVar8 < 4) {
        if (uVar4 != 0) {
          iVar6 = FUN_1451e3650(puVar7,uVar4);
          if (iVar6 != 0) {
            iVar5 = (int)(((longlong)*(int *)(lVar3 + 0x20) * (longlong)iVar6) /
                         (longlong)(ulonglong)uVar4);
          }
        }
      }
      else if (uVar8 == 0x8000) {
        iVar5 = FUN_1451e3750(puVar7,lVar3,*(undefined8 *)(param_2 + 0xa8));
      }
    }
    *param_4 = (float)iVar5 + *param_4;
  }
  uVar4 = *(uint *)(lVar3 + 0x2c);
  if ((uVar4 != 0) || (*(int *)(lVar3 + 0x34) != 0)) {
    if ((ushort)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) != 0) {
      puVar10 = (undefined1 *)
                ((ulonglong)*(byte *)(param_1 + 8) * 0x100 + param_1 +
                (ulonglong)*(byte *)(param_1 + 9));
    }
    uVar8 = (uint)(byte)puVar10[4] * 0x100 + (uint)(byte)puVar10[5];
    if (uVar8 != 0) {
      if (uVar8 < 4) {
        iVar9 = 0;
        if (uVar4 != 0) {
          iVar5 = FUN_1451e3650(puVar10,uVar4);
          if (iVar5 != 0) {
            iVar9 = (int)(((longlong)*(int *)(lVar3 + 0x24) * (longlong)iVar5) /
                         (longlong)(ulonglong)uVar4);
          }
        }
      }
      else if (uVar8 == 0x8000) {
        iVar9 = FUN_1451e37e0(puVar10,lVar3,*(undefined8 *)(param_2 + 0xa8));
      }
    }
    *param_5 = (float)iVar9 + *param_5;
  }
  return;
}


