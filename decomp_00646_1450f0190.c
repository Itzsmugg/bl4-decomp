// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1450f0190 FUN_1450f0190 body=156 status=ok
// SIG undefined FUN_1450f0190(void)

void FUN_1450f0190(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  puVar3 = (undefined8 *)0x0;
  while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
    if (*(int *)(puVar2 + 3) == 1) {
      FUN_144d52ab0(puVar2[4]);
      puVar1 = (undefined8 *)puVar2[2];
      if (puVar2 == *(undefined8 **)(param_1 + 0x18)) {
        *(undefined8 *)(param_1 + 0x18) = puVar2[2];
      }
      else {
        puVar3[2] = puVar2[2];
      }
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        AK::MemoryMgr::Free(0,puVar2);
      }
    }
    else {
      puVar1 = (undefined8 *)puVar2[2];
      puVar3 = puVar2;
    }
  }
  return;
}



// FUNCTION 1450f0230 FUN_1450f0230 body=17 status=ok
// SIG undefined FUN_1450f0230(void)

void FUN_1450f0230(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) | 1;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  return;
}



// FUNCTION 1450f0250 FUN_1450f0250 body=107 status=ok
// SIG undefined FUN_1450f0250(void)

void FUN_1450f0250(longlong param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x40) = param_2;
  if (param_4 < iVar1) {
    dVar3 = ((double)(param_4 - iVar1) * 1000.0) / (double)DAT_14c72f42c;
    if (dVar3 <= 0.0) {
      dVar2 = -0.5;
    }
    else {
      dVar2 = 0.5;
    }
    *(int *)(param_1 + 0x40) = (int)(dVar2 + dVar3) + param_2;
    param_4 = iVar1;
  }
  *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) | 2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(int *)(param_1 + 0x3c) = param_4;
  return;
}



// FUNCTION 1450f02c0 FUN_1450f02c0 body=102 status=ok
// SIG undefined FUN_1450f02c0(void)

void FUN_1450f02c0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x40) == 0)) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80);
    if (param_2 != '\0') {
      iVar2 = FUN_1453a9e50(uVar1);
      iVar3 = FUN_1453a9e30(uVar1);
      *(int *)(param_1 + 0x3c) = iVar2 + iVar3;
      return;
    }
    uVar4 = FUN_1453a9e50(uVar1);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
  }
  return;
}



// FUNCTION 1450f0330 FUN_1450f0330 body=213 status=ok
// SIG undefined FUN_1450f0330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450f0330(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (((*(longlong *)(param_1 + 0x20) != 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x62) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0x48) & 4) == 0)) {
    FUN_1450f0680(param_1,param_2 - *(int *)(param_1 + 8));
    return;
  }
  *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) & 0xfffc;
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  while (puVar3 = puVar1, puVar3 != (undefined8 *)0x0) {
    if (*(int *)(puVar3 + 3) == 1) {
      FUN_144d52ab0(puVar3[4]);
    }
    puVar1 = (undefined8 *)puVar3[2];
    uVar4 = puVar3[2];
    if (puVar3 == *(undefined8 **)(param_1 + 0x18)) {
      *(undefined8 *)(param_1 + 0x18) = puVar3[2];
      uVar4 = _DAT_00000010;
    }
    _DAT_00000010 = uVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      AK::MemoryMgr::Free(0,puVar3);
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x88) = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (lVar2 != 0) {
      FUN_1450ed1a0();
      return;
    }
  }
  return;
}



// FUNCTION 1450f0410 FUN_1450f0410 body=131 status=ok
// SIG undefined FUN_1450f0410(void)

void FUN_1450f0410(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar4 = 0;
  while (lVar3 = lVar2, lVar3 != 0) {
    if ((param_3 < *(longlong *)(lVar3 + 8)) ||
       ((*(int *)(lVar3 + 0x18) == 0 && (*(longlong *)(lVar3 + 8) == param_3)))) {
      plVar1 = (longlong *)(lVar3 + 0x10);
      lVar2 = *plVar1;
      if (lVar3 == *(longlong *)(param_1 + 0x18)) {
        *(longlong *)(param_1 + 0x18) = lVar2;
      }
      else {
        *(longlong *)(lVar4 + 0x10) = lVar2;
      }
      if (*(longlong *)(param_2 + 8) == 0) {
        *(longlong *)(param_2 + 8) = lVar3;
        *plVar1 = 0;
      }
      else {
        *plVar1 = *(longlong *)(param_2 + 8);
        *(longlong *)(param_2 + 8) = lVar3;
      }
    }
    else {
      lVar2 = *(longlong *)(lVar3 + 0x10);
      lVar4 = lVar3;
    }
  }
  return;
}



// FUNCTION 1450f04a0 FUN_1450f04a0 body=470 status=ok
// SIG undefined FUN_1450f04a0(void)

void FUN_1450f04a0(longlong param_1,ulonglong param_2,int param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_res20 [2];
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar5;
  uint local_58;
  uint local_54;
  undefined1 local_50 [40];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (param_4 != 0) {
    FUN_1450efe30(param_1,param_2,local_50,param_6);
    iVar4 = (int)param_2;
    if ((param_4 >> 0xd & 1) != 0) {
      FUN_1453aa270(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80),param_5,local_50,
                    param_2 & 0xffffffff,CONCAT44(uVar5,param_3));
    }
    if ((((param_4 >> 10 & 1) != 0) && (iVar4 < 1)) && (0 < iVar4 + param_3)) {
      FUN_1450b3380(DAT_14c790fc0,param_5,0x400,local_50);
    }
    FUN_1453aa330(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80),param_2 & 0xffffffff,param_3
                  ,local_res20,&local_58,&local_54);
    uVar3 = 0;
    if (((param_4 >> 9 & 1) != 0) && (uVar2 = 0, local_res20[0] != 0)) {
      do {
        FUN_1450b3380(DAT_14c790fc0,param_5,0x200,local_50);
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_res20[0]);
    }
    if (((param_4 >> 8 & 1) != 0) && (uVar2 = 0, local_58 != 0)) {
      do {
        FUN_1450b3380(DAT_14c790fc0,param_5,0x100,local_50);
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_58);
    }
    if (((param_4 >> 0xc & 1) != 0) && (local_54 != 0)) {
      do {
        FUN_1450b3380(DAT_14c790fc0,param_5,0x1000,local_50);
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_54);
    }
    if ((((param_4 >> 0xb & 1) != 0) &&
        (iVar1 = FUN_1453a9e50(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80)),
        iVar4 <= iVar1)) && (iVar1 < iVar4 + param_3)) {
      FUN_1450b3380(DAT_14c790fc0,param_5,0x800,local_50);
    }
  }
  return;
}



// FUNCTION 1450f0680 FUN_1450f0680 body=134 status=ok
// SIG undefined FUN_1450f0680(void)

void FUN_1450f0680(longlong param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int local_res8 [8];
  
  param_2 = param_2 - *(int *)(*(longlong *)(param_1 + 0x20) + 0xa0);
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  dVar3 = ((double)iVar1 * 1000.0) / (double)DAT_14c72f42c;
  if (dVar3 <= 0.0) {
    dVar2 = -0.5;
  }
  else {
    dVar2 = 0.5;
  }
  local_res8[1] = 4;
  local_res8[0] = (int)(dVar2 + dVar3);
  FUN_1450ed780(*(longlong *)(param_1 + 0x20),local_res8,0xffffffff);
  *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) | 4;
  return;
}



// FUNCTION 1450f0710 FUN_1450f0710 body=230 status=ok
// SIG undefined FUN_1450f0710(void)

undefined8 *
FUN_1450f0710(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
             undefined1 param_5)

{
  uint uVar1;
  int *piVar2;
  
  param_1[2] = param_2;
  *param_1 = &PTR_LAB_149c298d0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  FUN_1450ef460(param_1 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_3 + 0x14);
  param_1[4] = param_3[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 2);
  piVar2 = (int *)*param_3;
  if (param_1[3] != 0) {
    FUN_144d4a460();
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  param_1[3] = piVar2;
  *(undefined1 *)(param_1 + 7) = param_5;
  param_1[6] = param_4;
  uVar1 = *(uint *)(param_4 + 0x60);
  if ((uVar1 < 2) && (*(char *)(param_4 + 100) != '\0')) {
    *(uint *)(param_4 + 0x60) = uVar1 + 1;
    if ((1 < uVar1 + 1) || (*(char *)(param_4 + 100) == '\0')) {
      FUN_145355090(param_4);
    }
  }
  else {
    *(uint *)(param_4 + 0x60) = uVar1 + 1;
  }
  FUN_145076720(DAT_14c790ff8,param_1,param_1[6]);
  return param_1;
}



// FUNCTION 1450f0800 FUN_1450f0800 body=182 status=ok
// SIG undefined FUN_1450f0800(void)

void FUN_1450f0800(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  
  *param_1 = &PTR_LAB_149c298d0;
  FUN_1450f1920();
  FUN_1450767c0(DAT_14c790ff8);
  puVar1 = (undefined8 *)param_1[6];
  param_1[9] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar1 + 0xc) < 2) && (*(char *)((longlong)puVar1 + 100) != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar3 = *(uint *)(puVar1 + 0xc) - 1;
    *(uint *)(puVar1 + 0xc) = uVar3;
    if ((uVar3 == 0) || (((bVar2 && (uVar3 < 2)) && (*(char *)((longlong)puVar1 + 100) != '\0')))) {
      FUN_1453550a0(puVar1);
    }
    if (*(int *)(puVar1 + 0xc) == 0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(4,puVar1);
    }
    param_1[6] = 0;
  }
  FUN_1450ef490(param_1 + 0xc);
  if (param_1[3] != 0) {
    FUN_144d4a460();
  }
  return;
}



// FUNCTION 1450f08c0 FUN_1450f08c0 body=517 status=ok
// SIG undefined FUN_1450f08c0(void)

void FUN_1450f08c0(longlong param_1,uint param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x50);
  *piVar1 = *piVar1 + 1;
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x62);
  if (((bVar2 & 3) != 0) && ((bVar2 & 0x10) == 0)) {
    plVar3 = (longlong *)FUN_1450f1000(param_1);
    fVar9 = 0.5;
    if ((*(char *)(param_1 + 0x58) == '\0') && (plVar3 != (longlong *)0x0)) {
      fVar8 = *(float *)(param_1 + 0x54);
      if (*(char *)(param_1 + 0x59) != '\0') {
        FUN_1450edb10(*(undefined8 *)(param_1 + 0x10));
      }
      local_68 = *(undefined8 *)(param_1 + 0x30);
      local_60 = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
      local_58 = 0;
      local_50 = 0xff;
      local_48 = 0xff;
      local_40 = 0;
      (**(code **)(*plVar3 + 0x280))(plVar3,param_1 + 0x54,&local_68);
      fVar7 = *(float *)(param_1 + 0x54);
      fVar6 = 0.25;
      if ((0.25 <= fVar7) && (fVar6 = fVar7, 4.0 <= fVar7)) {
        fVar6 = 4.0;
      }
      fVar6 = (float)param_2 * fVar6;
      if (fVar6 <= 0.0) {
        fVar7 = -0.5;
      }
      else {
        fVar7 = 0.5;
      }
      fVar7 = (float)(uint)(int)(fVar7 + fVar6) / (float)param_2;
      *(float *)(param_1 + 0x54) = fVar7;
      if (fVar7 - fVar8 != 0.0) {
        FUN_1450edb00(*(undefined8 *)(param_1 + 0x10),0x36);
      }
      *(undefined2 *)(param_1 + 0x58) = 1;
    }
    fVar8 = (float)param_2 * *(float *)(param_1 + 0x54);
    if (fVar8 <= 0.0) {
      fVar9 = -0.5;
    }
    local_78 = 0;
    local_70 = 0;
    iVar5 = (int)(fVar9 + fVar8);
    *(int *)(param_1 + 0x50) = iVar5;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),iVar5,&local_78);
    FUN_1450ef5a0(param_1 + 0x60,iVar5,*(undefined4 *)(param_1 + 0x54));
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x50);
    FUN_1450ed5d0(*(undefined8 *)(param_1 + 0x10));
    plVar4 = (longlong *)FUN_1450f1000(param_1);
    if (plVar4 != plVar3) {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
  }
  FUN_1450ed1a0(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1450f0ad0 FUN_1450f0ad0 body=280 status=ok
// SIG undefined FUN_1450f0ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450f0ad0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_2 + 8);
  do {
    puVar6 = puVar5;
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    if (*(int *)(puVar6 + 3) == 0) {
      puVar5 = (undefined8 *)puVar6[4];
      plVar3 = (longlong *)puVar5[1];
      uVar2 = *(undefined4 *)(puVar5 + 2);
      cVar1 = *(char *)((longlong)puVar5 + 0x2c);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 200))
                  (plVar3,*(longlong *)(param_1 + 8) -
                          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70));
      }
      for (puVar4 = *(undefined8 **)(param_1 + 0x48); puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)*puVar4) {
        if (puVar4 == puVar5) {
          *(undefined4 *)(puVar4 + 2) = 0;
          break;
        }
      }
      if (cVar1 != '\0') {
        FUN_1450f1060(param_1,uVar2,1);
      }
    }
    else if (*(int *)(puVar6 + 3) == 1) {
      FUN_144d52b30(puVar6[4]);
    }
    puVar5 = (undefined8 *)puVar6[2];
    puVar4 = puVar5;
    if (puVar6 == *(undefined8 **)(param_2 + 8)) {
      *(undefined8 **)(param_2 + 8) = puVar5;
      puVar4 = _DAT_00000010;
    }
    _DAT_00000010 = puVar4;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,0);
      AK::MemoryMgr::Free(0,puVar6);
    }
  } while( true );
}



// FUNCTION 1450f0bf0 thunk_FUN_1450f1920 body=5 status=ok
// SIG undefined thunk_FUN_1450f1920(void)

void thunk_FUN_1450f1920(void)

{
  FUN_1450f1920();
  return;
}



// FUNCTION 1450f0c00 FUN_1450f0c00 body=279 status=ok
// SIG undefined FUN_1450f0c00(void)

void FUN_1450f0c00(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_138 [264];
  longlong local_30 [3];
  longlong local_18;
  char local_10;
  
  FUN_1450f1360();
  FUN_1453a5380(local_138,*(undefined8 *)(param_1 + 0x10),0);
  if (local_30[0] != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20);
    while (FUN_1453a5530(local_138,param_2,param_3,uVar1 & 0x7f00,*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x54)), local_10 == '\0') {
      lVar2 = FUN_1453a5aa0(local_138,0);
      lVar2 = FUN_1453a4630(local_30,param_2 - lVar2);
      uVar3 = 0;
      if (lVar2 < local_18) {
        uVar3 = local_18 - lVar2;
      }
      if ((param_3 <= uVar3) ||
         ((**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                    (*(longlong **)(param_1 + 0x10),local_138,0), local_30[0] == 0)) break;
    }
  }
  FUN_1453a5440(local_138);
  return;
}



// FUNCTION 1450f0d30 FUN_1450f0d30 body=422 status=ok
// SIG undefined FUN_1450f0d30(void)

longlong FUN_1450f0d30(longlong param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4,
                      longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_158 [264];
  longlong local_50;
  char local_30;
  
  lVar6 = *(longlong *)(param_1 + 8) - *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70);
  FUN_1453a5380(local_158,*(longlong *)(param_1 + 0x10),0);
  lVar4 = 0;
  lVar5 = 0;
  if (local_50 == 0) {
LAB_1450f0d84:
    *param_3 = 0;
    goto LAB_1450f0ea8;
  }
  iVar2 = 3;
  *param_3 = 1;
  lVar1 = *(longlong *)(local_50 + 0x20);
  *param_4 = 0;
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x62) & 1) != 0)) {
    iVar2 = FUN_1450f19c0(param_1,local_158,param_2,param_5);
    if (iVar2 == 2) goto LAB_1450f0ea8;
    if (iVar2 != 0) goto LAB_1450f0dd9;
LAB_1450f0e98:
    lVar4 = *param_5 - lVar6;
    goto LAB_1450f0ea8;
  }
LAB_1450f0dd9:
  if (local_30 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
              (*(longlong **)(param_1 + 0x10),local_158,0);
    if (*(longlong *)(local_50 + 0x20) == 0) {
      *param_3 = iVar2 != 3;
      if (((iVar2 != 1) || (lVar4 = lVar5, lVar1 == 0)) || ((*(byte *)(lVar1 + 0x62) & 1) == 0))
      goto LAB_1450f0ea8;
    }
    else {
      if ((iVar2 == 3) && ((*(byte *)(*(longlong *)(local_50 + 0x20) + 0x62) & 1) == 0))
      goto LAB_1450f0ea0;
      *param_4 = 1;
      iVar3 = FUN_1450f19c0(param_1,local_158,param_2,param_5);
      if ((iVar3 == 3) && (iVar2 == 3)) goto LAB_1450f0d84;
      *param_3 = 1;
      if (iVar3 == 0) goto LAB_1450f0e98;
      lVar4 = lVar5;
      if ((iVar3 == 1) || (((iVar3 != 2 && (iVar3 != 3)) || (iVar2 == 3)))) goto LAB_1450f0ea8;
    }
    lVar4 = FUN_1453a5450(local_158);
    *param_5 = lVar4;
    lVar4 = lVar4 - lVar6;
  }
  else {
LAB_1450f0ea0:
    *param_3 = iVar2 != 3;
    lVar4 = lVar5;
  }
LAB_1450f0ea8:
  FUN_1453a5440(local_158);
  return lVar4;
}



// FUNCTION 1450f0ee0 FUN_1450f0ee0 body=262 status=ok
// SIG undefined FUN_1450f0ee0(void)

undefined8 FUN_1450f0ee0(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_138 [264];
  longlong local_30 [5];
  
  FUN_1453a5380(local_138,*(undefined8 *)(param_1 + 0x10),0);
  if (local_30[0] != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),local_138,0);
    }
    puVar1 = AK::MemoryMgr::Malloc(0,0x28);
    if (puVar1 != (undefined8 *)0x0) {
      uVar4 = 1;
      *(undefined4 *)(puVar1 + 3) = 1;
      *puVar1 = &PTR_FUN_149c298c8;
      lVar2 = FUN_1453a5aa0(local_138,0);
      uVar3 = FUN_1453a4630(local_30,param_4 - lVar2);
      puVar1[1] = uVar3;
      puVar1[4] = param_2;
      if (*(longlong *)(local_30[0] + 0x18) == 0) {
        *(undefined8 **)(local_30[0] + 0x18) = puVar1;
        puVar1[2] = 0;
      }
      else {
        puVar1[2] = *(longlong *)(local_30[0] + 0x18);
        *(undefined8 **)(local_30[0] + 0x18) = puVar1;
      }
      goto LAB_1450f0fc1;
    }
  }
  uVar4 = 2;
LAB_1450f0fc1:
  FUN_1453a5440(local_138);
  return uVar4;
}



// FUNCTION 1450f0ff0 FUN_1450f0ff0 body=13 status=ok
// SIG undefined FUN_1450f0ff0(void)

uint FUN_1450f0ff0(longlong param_1)

{
  return *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20) & 0x7f00;
}



// FUNCTION 1450f1000 FUN_1450f1000 body=96 status=ok
// SIG undefined FUN_1450f1000(void)

longlong FUN_1450f1000(longlong param_1)

{
  longlong lVar1;
  longlong local_res8 [4];
  undefined1 local_138 [264];
  longlong local_30;
  
  FUN_1453a5380(local_138,*(undefined8 *)(param_1 + 0x10),0);
  if (local_30 == 0) {
    local_res8[0] = 0;
  }
  else {
    lVar1 = FUN_1453a55a0(local_138,local_res8);
    if (lVar1 != 0) {
      local_res8[0] = lVar1;
    }
  }
  FUN_1453a5440(local_138);
  return local_res8[0];
}



// FUNCTION 1450f1060 FUN_1450f1060 body=754 status=ok
// SIG undefined FUN_1450f1060(void)

void FUN_1450f1060(longlong param_1,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  uint local_res8 [2];
  int local_res20 [2];
  ulonglong in_stack_fffffffffffffe48;
  uint in_stack_fffffffffffffe50;
  int *local_198;
  ulonglong local_190;
  longlong local_188;
  longlong local_180;
  ulonglong local_178 [2];
  undefined1 local_168 [264];
  longlong local_60;
  char local_40;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  if ((*(byte *)(lVar6 + 0x62) & 0xf) < 2) {
    local_180 = *(longlong *)(param_1 + 8) - *(longlong *)(lVar6 + 0x70);
    FUN_1453a5380(local_168,lVar6,0);
    if (local_60 != 0) {
      bVar1 = false;
      if (param_3 == '\0') {
LAB_1450f10f1:
        iVar2 = 2;
LAB_1450f1110:
        lVar4 = FUN_1453a55a0(local_168,&local_188);
        local_198 = (int *)0x0;
        local_190 = 0;
        lVar6 = local_188;
        if (lVar4 != 0) {
          lVar6 = lVar4;
        }
        FUN_1453a8b70(lVar6,&local_198);
        for (piVar7 = local_198; piVar8 = (int *)0x0,
            piVar7 != local_198 + (local_190 & 0xffffffff) * 6; piVar7 = piVar7 + 6) {
          if (*piVar7 == param_2) {
            plVar5 = *(longlong **)(param_1 + 0x48);
            if (plVar5 == (longlong *)0x0) goto LAB_1450f11ad;
            goto LAB_1450f1190;
          }
        }
        goto LAB_1450f12fb;
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),local_168,0);
      if (local_60 != 0) {
        bVar1 = true;
        goto LAB_1450f10f1;
      }
    }
LAB_1450f1299:
    FUN_1453a5440(local_168);
  }
  return;
  while (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0) {
LAB_1450f1190:
    if (((int)plVar5[2] == param_2) &&
       (*(longlong *)(param_1 + 8) - *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70) <=
        (longlong)((ulonglong)*(uint *)(plVar5 + 4) + plVar5[3]))) {
      if (local_198 == (int *)0x0) goto LAB_1450f1299;
      goto LAB_1450f126f;
    }
  }
LAB_1450f11ad:
  local_res8[0] = 0;
  lVar6 = FUN_1450f1500(param_1,piVar7[1],local_res8);
  if ((lVar6 == 0) && (piVar7[1] != 0)) {
LAB_1450f125d:
    if (local_198 != (int *)0x0) {
LAB_1450f126f:
      local_190 = local_190 & 0xffffffff00000000;
      AK::MemoryMgr::Free(2,local_198);
    }
    goto LAB_1450f1299;
  }
  local_res20[0] = piVar7[3];
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffff00;
  in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffffffffff00;
  iVar2 = FUN_1453a5620(local_168,(int)local_res8[0] + local_180,piVar7[2],local_res20,
                        in_stack_fffffffffffffe48,in_stack_fffffffffffffe50,local_178);
  piVar8 = piVar7;
  if (iVar2 == 1) {
    in_stack_fffffffffffffe48 = local_178[0];
    in_stack_fffffffffffffe50 = local_res8[0];
    iVar3 = FUN_1450f16e0(param_1,local_168,lVar6,piVar7,local_178[0],local_res8[0],!bVar1);
    if (iVar3 != 1) goto LAB_1450f125d;
  }
  else {
    if (lVar6 != 0) {
      FUN_1450ed8c0(lVar6);
    }
    if (((local_40 != '\0') || (piVar7[5] != 1)) || (bVar1)) {
      iVar2 = 1;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                (*(longlong **)(param_1 + 0x10),local_168,0);
      bVar1 = true;
    }
  }
LAB_1450f12fb:
  if (local_198 != (int *)0x0) {
    local_190 = local_190 & 0xffffffff00000000;
    AK::MemoryMgr::Free(2,local_198);
    local_198 = (int *)0x0;
    local_190 = local_190 & 0xffffffff;
  }
  if (((iVar2 == 1) || (piVar8 == (int *)0x0)) || (local_60 == 0)) goto LAB_1450f1299;
  goto LAB_1450f1110;
}



// FUNCTION 1450f1360 FUN_1450f1360 body=412 status=ok
// SIG undefined FUN_1450f1360(void)

void FUN_1450f1360(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_48 [2];
  undefined4 local_40;
  longlong local_38;
  undefined1 local_30;
  
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  puVar7 = (undefined8 *)0x0;
  while (puVar6 = puVar7, puVar5 = puVar4, puVar5 != (undefined8 *)0x0) {
    lVar8 = puVar5[1];
    plVar1 = puVar5 + 1;
    puVar7 = puVar5;
    if (lVar8 == 0) {
      puVar4 = (undefined8 *)*puVar5;
      if ((longlong)((ulonglong)*(uint *)(puVar5 + 4) + puVar5[3]) < param_2) {
        if (puVar5 == *(undefined8 **)(param_1 + 0x48)) {
          *(undefined8 **)(param_1 + 0x48) = puVar4;
        }
        else {
          *puVar6 = puVar4;
        }
        piVar2 = (int *)(puVar5 + 6);
        *piVar2 = *piVar2 + -1;
        puVar7 = puVar6;
        if (*piVar2 == 0) {
          lVar8 = *plVar1;
          *plVar1 = 0;
          if (lVar8 != 0) {
            FUN_1450ed1a0();
          }
          if (*plVar1 != 0) {
            FUN_1450ed1a0();
            *plVar1 = 0;
          }
          AK::MemoryMgr::Free(0,puVar5);
        }
      }
    }
    else {
      lVar9 = puVar5[3] - (longlong)*(int *)((longlong)puVar5 + 0x24);
      if (lVar9 < (longlong)((ulonglong)param_3 + param_2)) {
        if (param_2 <= lVar9) {
          local_40 = 0;
          local_48[0] = 0;
          FUN_1450ed630(lVar8,local_48);
          lVar8 = *plVar1;
        }
        lVar9 = (longlong)*(int *)(puVar5 + 5) + puVar5[3];
        if ((param_2 <= lVar9) && (lVar9 < (longlong)((ulonglong)param_3 + param_2))) {
          local_res8 = 0;
          local_resc = 4;
          FUN_1450ed780(lVar8,&local_res8,(int)lVar9 - (int)param_2);
        }
        plVar3 = (longlong *)*plVar1;
        if (((*(byte *)((longlong)plVar3 + 0x62) & 3) != 0) &&
           ((*(byte *)((longlong)plVar3 + 0x62) & 0x10) == 0)) {
          local_38 = puVar5[3] + 1;
          local_30 = 1;
          (**(code **)(*plVar3 + 0x90))(plVar3,param_2,param_3,&local_38);
          lVar8 = *plVar1;
          if ((1 < (*(byte *)(lVar8 + 0x62) & 0xf)) && (*plVar1 = 0, lVar8 != 0)) {
            FUN_1450ed1a0();
          }
        }
      }
      puVar4 = (undefined8 *)*puVar5;
    }
  }
  return;
}



// FUNCTION 1450f1500 FUN_1450f1500 body=465 status=ok
// SIG undefined FUN_1450f1500(void)

longlong * FUN_1450f1500(longlong param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res20 [8];
  ulonglong in_stack_ffffffffffffff98;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  ushort local_24;
  
  piVar1 = DAT_14c791060;
  do {
    while (iVar3 = *piVar1, iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      if (*piVar1 < 0) goto LAB_1450f1538;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar3 + 1;
    }
    UNLOCK();
  } while (iVar3 != iVar2);
LAB_1450f1538:
  plVar6 = (longlong *)0x0;
  plVar4 = plVar6;
  if (piVar1[0x12] != 0) {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(piVar1 + 0x10) +
                   ((ulonglong)param_2 % (ulonglong)(uint)piVar1[0x12]) * 8);
        (plVar4 = plVar6, plVar5 != (longlong *)0x0 &&
        (plVar4 = plVar5, *(uint *)(plVar5 + 2) != param_2)); plVar5 = (longlong *)plVar5[1]) {
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0x14) = *(int *)((longlong)plVar4 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar3 = *piVar1;
  do {
    if (iVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450f15bd:
      plVar5 = plVar4 + -2;
      if (plVar4 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      if (plVar5 == (longlong *)0x0) {
        *param_3 = 0;
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)
                 (**(code **)(*plVar5 + 0x278))
                           (plVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x30),
                            param_1 + 0x18,in_stack_ffffffffffffff98 & 0xffffffffffffff00);
        if (plVar4 != (longlong *)0x0) {
          local_30 = 0;
          local_24 = local_24 & 0xff47 | 0x40;
          local_38[0] = 0;
          local_28 = 0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          iVar3 = (**(code **)(*plVar4 + 0x98))(plVar4,local_38,0,&local_48,param_3,local_res20,0,0)
          ;
          if (iVar3 == 0) {
            FUN_1450ed8c0(plVar4);
            plVar4 = (longlong *)0x0;
          }
        }
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(plVar5[2] + 0x18))();
        }
      }
      return plVar4;
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar3 + -1;
    }
    UNLOCK();
    if (iVar3 == iVar2) {
      if ((iVar3 + -1 == 0) && (0 < piVar1[0xc])) {
        SetEvent(*(HANDLE *)(piVar1 + 0xe));
      }
      goto LAB_1450f15bd;
    }
    iVar3 = *piVar1;
  } while( true );
}



// FUNCTION 1450f16e0 FUN_1450f16e0 body=562 status=ok
// SIG undefined FUN_1450f16e0(void)

undefined4
FUN_1450f16e0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             longlong param_5,undefined4 param_6,char param_7)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  plVar7 = AK::MemoryMgr::Malloc(0,0x38);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 6) = 1;
    plVar7[1] = 0;
    puVar8 = AK::MemoryMgr::Malloc(0,0x28);
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar8 + 3) = 0;
      *puVar8 = &PTR_FUN_149c298c0;
      puVar8[4] = 0;
      *(undefined4 *)(plVar7 + 2) = *param_4;
      *(undefined4 *)((longlong)plVar7 + 0x14) = param_4[1];
      plVar7[3] = param_5;
      *(int *)(plVar7 + 4) =
           (int)((longlong)((longlong)(int)param_4[4] * (ulonglong)DAT_14c72f42c) / 1000);
      *(undefined4 *)((longlong)plVar7 + 0x24) = param_6;
      if (param_3 != 0) {
        *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
        *(longlong *)(param_3 + 0x70) = param_5;
        lVar9 = plVar7[1];
        plVar7[1] = param_3;
        if (lVar9 != 0) {
          FUN_1450ed1a0();
        }
        lVar9 = FUN_1450ef180(param_3,0);
        if (lVar9 == 0) {
          *(undefined4 *)(plVar7 + 5) = 0;
        }
        else {
          iVar5 = FUN_1453a9e50(lVar9);
          iVar6 = FUN_1453a9e30(lVar9);
          *(int *)(plVar7 + 5) = iVar5 + iVar6;
        }
      }
      if ((param_7 == '\0') || (param_4[5] == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)((longlong)plVar7 + 0x2c) = uVar4;
      if (*(longlong *)(param_1 + 0x48) == 0) {
        *(longlong **)(param_1 + 0x48) = plVar7;
        *plVar7 = 0;
      }
      else {
        *plVar7 = *(longlong *)(param_1 + 0x48);
        *(longlong **)(param_1 + 0x48) = plVar7;
      }
      lVar9 = FUN_1453a5aa0(param_2,0);
      uVar10 = FUN_1453a4630(param_2 + 0x108,param_5 - lVar9);
      puVar8[1] = uVar10;
      *(int *)(plVar7 + 6) = (int)plVar7[6] + 1;
      pvVar3 = (void *)puVar8[4];
      puVar8[4] = plVar7;
      if (pvVar3 != (void *)0x0) {
        piVar1 = (int *)((longlong)pvVar3 + 0x30);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          lVar9 = *(longlong *)((longlong)pvVar3 + 8);
          *(undefined8 *)((longlong)pvVar3 + 8) = 0;
          if (lVar9 != 0) {
            FUN_1450ed1a0();
          }
          if (*(longlong *)((longlong)pvVar3 + 8) != 0) {
            FUN_1450ed1a0();
            *(undefined8 *)((longlong)pvVar3 + 8) = 0;
          }
          AK::MemoryMgr::Free(0,pvVar3);
        }
      }
      lVar9 = *(longlong *)(param_2 + 0x108);
      if (*(longlong *)(lVar9 + 0x18) == 0) {
        *(undefined8 **)(lVar9 + 0x18) = puVar8;
        puVar8[2] = 0;
        return 1;
      }
      puVar8[2] = *(longlong *)(lVar9 + 0x18);
      *(undefined8 **)(lVar9 + 0x18) = puVar8;
      return 1;
    }
    plVar2 = plVar7 + 6;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      lVar9 = plVar7[1];
      plVar7[1] = 0;
      if (lVar9 != 0) {
        FUN_1450ed1a0();
      }
      if (plVar7[1] != 0) {
        FUN_1450ed1a0();
        plVar7[1] = 0;
      }
      AK::MemoryMgr::Free(0,plVar7);
    }
  }
  return 2;
}



// FUNCTION 1450f1920 FUN_1450f1920 body=154 status=ok
// SIG undefined FUN_1450f1920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450f1920(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  puVar5 = puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    puVar6 = puVar3;
    if (puVar5 == puVar2) {
      *(undefined8 **)(param_1 + 0x48) = puVar3;
      puVar6 = (undefined8 *)_DAT_00000000;
    }
    _DAT_00000000 = puVar6;
    piVar1 = (int *)(puVar5 + 6);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      lVar4 = puVar5[1];
      puVar5[1] = 0;
      if (lVar4 != 0) {
        FUN_1450ed1a0();
      }
      if (puVar5[1] != 0) {
        FUN_1450ed1a0();
        puVar5[1] = 0;
      }
      AK::MemoryMgr::Free(0,puVar5);
    }
    puVar5 = puVar3;
    puVar2 = *(undefined8 **)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 1450f19c0 FUN_1450f19c0 body=298 status=ok
// SIG undefined FUN_1450f19c0(void)

int FUN_1450f19c0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_res20 [2];
  longlong local_38;
  int *local_30;
  ulonglong local_28;
  
  *param_4 = 0;
  local_30 = (int *)0x0;
  local_28 = 0;
  uVar2 = FUN_1453a55a0(param_2,0);
  FUN_1453a9f10(uVar2,param_3,&local_30);
  if ((int)local_28 == 0) {
    iVar4 = 3;
  }
  else if (*local_30 == 0) {
    iVar4 = 2;
  }
  else {
    iVar4 = 1;
    piVar3 = local_30;
    if (local_30 != local_30 + (local_28 & 0xffffffff)) {
      do {
        local_res20[0] = 0;
        iVar1 = FUN_1453a5620(param_2,*(longlong *)(param_1 + 8) -
                                      *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70),*piVar3,
                              local_res20,0,0,&local_38);
        if ((iVar1 == 1) && ((iVar4 == 1 || (local_38 < *param_4)))) {
          *param_4 = local_38;
          iVar4 = 0;
        }
        piVar3 = piVar3 + 1;
      } while (piVar3 != local_30 + (local_28 & 0xffffffff));
    }
  }
  if (local_30 != (int *)0x0) {
    local_28 = local_28 & 0xffffffff00000000;
    AK::MemoryMgr::Free(0,local_30);
  }
  return iVar4;
}



// FUNCTION 1450f1ba0 FUN_1450f1ba0 body=774 status=ok
// SIG undefined FUN_1450f1ba0(void)

int FUN_1450f1ba0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  char local_res10 [8];
  undefined8 local_res18;
  ulonglong in_stack_ffffffffffffff98;
  undefined1 local_58 [4];
  undefined4 local_54;
  int *local_48 [2];
  
  local_54 = *(undefined4 *)(param_2 + 1);
  local_res18 = param_3;
  puVar8 = (uint *)FUN_1450b58b0(param_1 + 8);
  piVar2 = DAT_14c791060;
  if (puVar8 == (uint *)0x0) {
    return 0x38;
  }
  uVar4 = *puVar8;
  do {
    while (iVar7 = *piVar2, iVar7 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
      if (*piVar2 < 0) goto LAB_1450f1c15;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
    }
    LOCK();
    iVar3 = *piVar2;
    if (iVar7 == iVar3) {
      *piVar2 = iVar7 + 1;
    }
    UNLOCK();
  } while (iVar7 != iVar3);
LAB_1450f1c15:
  lVar12 = 0;
  lVar10 = lVar12;
  if (piVar2[0x12] != 0) {
    for (lVar9 = *(longlong *)
                  (*(longlong *)(piVar2 + 0x10) +
                  ((ulonglong)uVar4 % (ulonglong)(uint)piVar2[0x12]) * 8);
        (lVar10 = lVar12, lVar9 != 0 && (lVar10 = lVar9, *(uint *)(lVar9 + 0x10) != uVar4));
        lVar9 = *(longlong *)(lVar9 + 8)) {
    }
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar7 = *piVar2;
  while (-1 < iVar7) {
    LOCK();
    iVar3 = *piVar2;
    if (iVar7 == iVar3) {
      *piVar2 = iVar7 + -1;
    }
    UNLOCK();
    if (iVar7 == iVar3) {
      if ((iVar7 + -1 == 0) && (0 < piVar2[0xc])) {
        SetEvent(*(HANDLE *)(piVar2 + 0xe));
      }
      goto LAB_1450f1c8c;
    }
    iVar7 = *piVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
LAB_1450f1c8c:
  uVar11 = local_res18;
  lVar9 = lVar10 + -0x10;
  if (lVar10 == 0) {
    lVar9 = lVar12;
  }
  if (lVar9 != 0) {
    iVar7 = FUN_1450f2720(param_1,lVar9,puVar8,local_54,local_res18);
    goto LAB_1450f1e32;
  }
  FUN_1450719c0(local_58);
  FUN_144d41d30(local_48);
  bVar5 = false;
  local_res10[0] = '\0';
  lVar9 = FUN_1453ac5c0();
  lVar10 = lVar9;
  cVar6 = '\0';
  if (lVar9 == 0) {
LAB_1450f1d5e:
    lVar9 = lVar10;
    if (cVar6 != '\0') {
      if (piVar2[0x12] != 0) {
        for (lVar10 = *(longlong *)
                       (*(longlong *)(piVar2 + 0x10) +
                       ((ulonglong)uVar4 % (ulonglong)(uint)piVar2[0x12]) * 8);
            (lVar9 = lVar12, lVar10 != 0 && (lVar9 = lVar10, *(uint *)(lVar10 + 0x10) != uVar4));
            lVar10 = *(longlong *)(lVar10 + 8)) {
        }
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
          UNLOCK();
          lVar9 = lVar9 + -0x10;
          goto LAB_1450f1da3;
        }
      }
      lVar9 = 0;
    }
  }
  else {
    *(uint *)(lVar9 + 0x20) = uVar4;
    cVar6 = FUN_144d41e40(piVar2 + 0x10,lVar9 + 0x10,local_res10);
    if (cVar6 == '\0') {
      *(undefined4 *)(lVar9 + 0x20) = 0;
      LOCK();
      piVar1 = (int *)(lVar9 + 0x24);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar10 = lVar12;
      cVar6 = local_res10[0];
      if (iVar7 == 1) {
        (**(code **)(*(longlong *)(lVar9 + 0x10) + 0x18))(lVar9 + 0x10);
        cVar6 = local_res10[0];
      }
      goto LAB_1450f1d5e;
    }
    bVar5 = true;
  }
LAB_1450f1da3:
  LOCK();
  *local_48[0] = *local_48[0] + 1;
  UNLOCK();
  if (*local_48[0] == 0) {
    local_48[0][1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_48[0] + 2));
  uVar11 = local_res18;
  if (lVar9 == 0) {
    iVar7 = 0x34;
  }
  else if (bVar5) {
    iVar7 = FUN_1453ac6c0(lVar9,puVar8,local_54,local_res18,
                          in_stack_ffffffffffffff98 & 0xffffffffffffff00);
  }
  else {
    iVar7 = FUN_1450f2720(param_1,lVar9,puVar8,local_54,local_res18);
  }
  FUN_1450719f0(local_58);
LAB_1450f1e32:
  if (iVar7 == 1) {
    lVar10 = lVar9 + 0x10;
    if (lVar9 == 0) {
      lVar10 = lVar12;
    }
    FUN_1450ba3f0(param_1,uVar11,lVar10);
  }
  else {
    if (iVar7 == 0x5b) {
      iVar7 = 1;
    }
    if (lVar9 != 0) {
      LOCK();
      piVar2 = (int *)(lVar9 + 0x24);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)(lVar9 + 0x10) + 0x18))();
      }
    }
  }
  FUN_1450b59a0(param_1 + 8);
  return iVar7;
}



// FUNCTION 1450f1eb0 FUN_1450f1eb0 body=714 status=ok
// SIG undefined FUN_1450f1eb0(void)

int FUN_1450f1eb0(longlong param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  char local_res10 [8];
  undefined8 local_res18;
  undefined1 local_58 [4];
  undefined4 local_54;
  int *local_48;
  uint *local_40;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar9 = 1;
  local_res18 = param_3;
  local_40 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_40 == (uint *)0x0) {
    return 0x38;
  }
  uVar3 = *local_40;
  do {
    while (iVar4 = *param_4, iVar4 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450f1f21;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar2 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar4 + 1;
    }
    UNLOCK();
  } while (iVar4 != iVar2);
LAB_1450f1f21:
  lVar10 = 0;
  lVar8 = lVar10;
  if (param_4[0x12] != 0) {
    for (lVar7 = *(longlong *)
                  (*(longlong *)(param_4 + 0x10) +
                  ((ulonglong)uVar3 % (ulonglong)(uint)param_4[0x12]) * 8);
        (lVar8 = lVar10, lVar7 != 0 && (lVar8 = lVar7, *(uint *)(lVar7 + 0x10) != uVar3));
        lVar7 = *(longlong *)(lVar7 + 8)) {
    }
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar4 = *param_4;
  while (-1 < iVar4) {
    LOCK();
    iVar2 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar4 + -1;
    }
    UNLOCK();
    if (iVar4 == iVar2) {
      if ((iVar4 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450f1f9e;
    }
    iVar4 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450f1f9e:
  lVar7 = lVar8 + -0x10;
  if (lVar8 == 0) {
    lVar7 = lVar10;
  }
  if (lVar7 != 0) goto LAB_1450f2132;
  FUN_1450719c0(local_58);
  FUN_144d41d30(&local_48);
  bVar5 = false;
  local_res10[0] = '\0';
  lVar7 = FUN_1453a9290();
  lVar8 = lVar7;
  cVar6 = '\0';
  if (lVar7 == 0) {
LAB_1450f2059:
    lVar7 = lVar8;
    if (cVar6 != '\0') {
      if (param_4[0x12] != 0) {
        for (lVar8 = *(longlong *)
                      (*(longlong *)(param_4 + 0x10) +
                      ((ulonglong)uVar3 % (ulonglong)(uint)param_4[0x12]) * 8);
            (lVar7 = lVar10, lVar8 != 0 && (lVar7 = lVar8, *(uint *)(lVar8 + 0x10) != uVar3));
            lVar8 = *(longlong *)(lVar8 + 8)) {
        }
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
          UNLOCK();
          lVar7 = lVar7 + -0x10;
          goto LAB_1450f209b;
        }
      }
      lVar7 = 0;
    }
  }
  else {
    *(uint *)(lVar7 + 0x20) = uVar3;
    cVar6 = FUN_144d41e40(param_4 + 0x10,lVar7 + 0x10,local_res10);
    if (cVar6 == '\0') {
      *(undefined4 *)(lVar7 + 0x20) = 0;
      LOCK();
      piVar1 = (int *)(lVar7 + 0x24);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar8 = lVar10;
      cVar6 = local_res10[0];
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))(lVar7 + 0x10);
        cVar6 = local_res10[0];
      }
      goto LAB_1450f2059;
    }
    bVar5 = true;
  }
LAB_1450f209b:
  LOCK();
  *local_48 = *local_48 + 1;
  UNLOCK();
  if (*local_48 == 0) {
    local_48[1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_48 + 2));
  if (lVar7 == 0) {
    iVar9 = 0x34;
  }
  else if ((bVar5) && (iVar9 = FUN_1453a9350(lVar7,local_40,local_54), iVar9 != 1)) {
    LOCK();
    piVar1 = (int *)(lVar7 + 0x24);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))();
    }
  }
  FUN_1450719f0(local_58);
  if (iVar9 != 1) {
    FUN_1450b59a0(param_1 + 8);
    if (iVar9 != 0x5b) {
      return iVar9;
    }
    return 1;
  }
LAB_1450f2132:
  lVar8 = lVar7 + 0x10;
  if (lVar7 == 0) {
    lVar8 = lVar10;
  }
  FUN_1450ba3f0(param_1,local_res18,lVar8);
  FUN_1450b59a0(param_1 + 8);
  return 1;
}



// FUNCTION 1450f2180 FUN_1450f2180 body=714 status=ok
// SIG undefined FUN_1450f2180(void)

int FUN_1450f2180(longlong param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  char local_res10 [8];
  undefined8 local_res18;
  undefined1 local_58 [4];
  undefined4 local_54;
  int *local_48;
  uint *local_40;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar9 = 1;
  local_res18 = param_3;
  local_40 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_40 == (uint *)0x0) {
    return 0x38;
  }
  uVar3 = *local_40;
  do {
    while (iVar4 = *param_4, iVar4 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450f21f1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar2 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar4 + 1;
    }
    UNLOCK();
  } while (iVar4 != iVar2);
LAB_1450f21f1:
  lVar10 = 0;
  lVar8 = lVar10;
  if (param_4[0x12] != 0) {
    for (lVar7 = *(longlong *)
                  (*(longlong *)(param_4 + 0x10) +
                  ((ulonglong)uVar3 % (ulonglong)(uint)param_4[0x12]) * 8);
        (lVar8 = lVar10, lVar7 != 0 && (lVar8 = lVar7, *(uint *)(lVar7 + 0x10) != uVar3));
        lVar7 = *(longlong *)(lVar7 + 8)) {
    }
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar4 = *param_4;
  while (-1 < iVar4) {
    LOCK();
    iVar2 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar4 + -1;
    }
    UNLOCK();
    if (iVar4 == iVar2) {
      if ((iVar4 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450f226e;
    }
    iVar4 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450f226e:
  lVar7 = lVar8 + -0x10;
  if (lVar8 == 0) {
    lVar7 = lVar10;
  }
  if (lVar7 != 0) goto LAB_1450f2402;
  FUN_1450719c0(local_58);
  FUN_144d41d30(&local_48);
  bVar5 = false;
  local_res10[0] = '\0';
  lVar7 = FUN_1453ab390();
  lVar8 = lVar7;
  cVar6 = '\0';
  if (lVar7 == 0) {
LAB_1450f2329:
    lVar7 = lVar8;
    if (cVar6 != '\0') {
      if (param_4[0x12] != 0) {
        for (lVar8 = *(longlong *)
                      (*(longlong *)(param_4 + 0x10) +
                      ((ulonglong)uVar3 % (ulonglong)(uint)param_4[0x12]) * 8);
            (lVar7 = lVar10, lVar8 != 0 && (lVar7 = lVar8, *(uint *)(lVar8 + 0x10) != uVar3));
            lVar8 = *(longlong *)(lVar8 + 8)) {
        }
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
          UNLOCK();
          lVar7 = lVar7 + -0x10;
          goto LAB_1450f236b;
        }
      }
      lVar7 = 0;
    }
  }
  else {
    *(uint *)(lVar7 + 0x20) = uVar3;
    cVar6 = FUN_144d41e40(param_4 + 0x10,lVar7 + 0x10,local_res10);
    if (cVar6 == '\0') {
      *(undefined4 *)(lVar7 + 0x20) = 0;
      LOCK();
      piVar1 = (int *)(lVar7 + 0x24);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar8 = lVar10;
      cVar6 = local_res10[0];
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))(lVar7 + 0x10);
        cVar6 = local_res10[0];
      }
      goto LAB_1450f2329;
    }
    bVar5 = true;
  }
LAB_1450f236b:
  LOCK();
  *local_48 = *local_48 + 1;
  UNLOCK();
  if (*local_48 == 0) {
    local_48[1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_48 + 2));
  if (lVar7 == 0) {
    iVar9 = 0x34;
  }
  else if ((bVar5) && (iVar9 = FUN_1453ab4a0(lVar7,local_40,local_54), iVar9 != 1)) {
    LOCK();
    piVar1 = (int *)(lVar7 + 0x24);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))();
    }
  }
  FUN_1450719f0(local_58);
  if (iVar9 != 1) {
    FUN_1450b59a0(param_1 + 8);
    if (iVar9 != 0x5b) {
      return iVar9;
    }
    return 1;
  }
LAB_1450f2402:
  lVar8 = lVar7 + 0x10;
  if (lVar7 == 0) {
    lVar8 = lVar10;
  }
  FUN_1450ba3f0(param_1,local_res18,lVar8);
  FUN_1450b59a0(param_1 + 8);
  return 1;
}



// FUNCTION 1450f2450 FUN_1450f2450 body=714 status=ok
// SIG undefined FUN_1450f2450(void)

int FUN_1450f2450(longlong param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  char local_res10 [8];
  undefined8 local_res18;
  undefined1 local_58 [4];
  undefined4 local_54;
  int *local_48;
  uint *local_40;
  
  local_54 = *(undefined4 *)(param_2 + 1);
  iVar9 = 1;
  local_res18 = param_3;
  local_40 = (uint *)FUN_1450b58b0(param_1 + 8);
  if (local_40 == (uint *)0x0) {
    return 0x38;
  }
  uVar3 = *local_40;
  do {
    while (iVar4 = *param_4, iVar4 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
      if (*param_4 < 0) goto LAB_1450f24c1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
    }
    LOCK();
    iVar2 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar4 + 1;
    }
    UNLOCK();
  } while (iVar4 != iVar2);
LAB_1450f24c1:
  lVar10 = 0;
  lVar8 = lVar10;
  if (param_4[0x12] != 0) {
    for (lVar7 = *(longlong *)
                  (*(longlong *)(param_4 + 0x10) +
                  ((ulonglong)uVar3 % (ulonglong)(uint)param_4[0x12]) * 8);
        (lVar8 = lVar10, lVar7 != 0 && (lVar8 = lVar7, *(uint *)(lVar7 + 0x10) != uVar3));
        lVar7 = *(longlong *)(lVar7 + 8)) {
    }
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar4 = *param_4;
  while (-1 < iVar4) {
    LOCK();
    iVar2 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar4 + -1;
    }
    UNLOCK();
    if (iVar4 == iVar2) {
      if ((iVar4 + -1 == 0) && (0 < param_4[0xc])) {
        SetEvent(*(HANDLE *)(param_4 + 0xe));
      }
      goto LAB_1450f253e;
    }
    iVar4 = *param_4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_4 + 2));
LAB_1450f253e:
  lVar7 = lVar8 + -0x10;
  if (lVar8 == 0) {
    lVar7 = lVar10;
  }
  if (lVar7 != 0) goto LAB_1450f26d2;
  FUN_1450719c0(local_58);
  FUN_144d41d30(&local_48);
  bVar5 = false;
  local_res10[0] = '\0';
  lVar7 = FUN_1453aa7f0();
  lVar8 = lVar7;
  cVar6 = '\0';
  if (lVar7 == 0) {
LAB_1450f25f9:
    lVar7 = lVar8;
    if (cVar6 != '\0') {
      if (param_4[0x12] != 0) {
        for (lVar8 = *(longlong *)
                      (*(longlong *)(param_4 + 0x10) +
                      ((ulonglong)uVar3 % (ulonglong)(uint)param_4[0x12]) * 8);
            (lVar7 = lVar10, lVar8 != 0 && (lVar7 = lVar8, *(uint *)(lVar8 + 0x10) != uVar3));
            lVar8 = *(longlong *)(lVar8 + 8)) {
        }
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
          UNLOCK();
          lVar7 = lVar7 + -0x10;
          goto LAB_1450f263b;
        }
      }
      lVar7 = 0;
    }
  }
  else {
    *(uint *)(lVar7 + 0x20) = uVar3;
    cVar6 = FUN_144d41e40(param_4 + 0x10,lVar7 + 0x10,local_res10);
    if (cVar6 == '\0') {
      *(undefined4 *)(lVar7 + 0x20) = 0;
      LOCK();
      piVar1 = (int *)(lVar7 + 0x24);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar8 = lVar10;
      cVar6 = local_res10[0];
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))(lVar7 + 0x10);
        cVar6 = local_res10[0];
      }
      goto LAB_1450f25f9;
    }
    bVar5 = true;
  }
LAB_1450f263b:
  LOCK();
  *local_48 = *local_48 + 1;
  UNLOCK();
  if (*local_48 == 0) {
    local_48[1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_48 + 2));
  if (lVar7 == 0) {
    iVar9 = 0x34;
  }
  else if ((bVar5) && (iVar9 = FUN_1453aa900(lVar7,local_40,local_54), iVar9 != 1)) {
    LOCK();
    piVar1 = (int *)(lVar7 + 0x24);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))();
    }
  }
  FUN_1450719f0(local_58);
  if (iVar9 != 1) {
    FUN_1450b59a0(param_1 + 8);
    if (iVar9 != 0x5b) {
      return iVar9;
    }
    return 1;
  }
LAB_1450f26d2:
  lVar8 = lVar7 + 0x10;
  if (lVar7 == 0) {
    lVar8 = lVar10;
  }
  FUN_1450ba3f0(param_1,local_res18,lVar8);
  FUN_1450b59a0(param_1 + 8);
  return 1;
}



// FUNCTION 1450f2720 FUN_1450f2720 body=130 status=ok
// SIG undefined FUN_1450f2720(void)

undefined4
FUN_1450f2720(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_res10 [8];
  
  if (*(int *)(param_2 + 0xf8) != 0) {
    cVar1 = FUN_1453ad550(param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  FUN_1450719c0(local_res10);
  uVar2 = FUN_1453ac6c0(param_2,param_3,param_4,param_5,1);
  FUN_1450719f0(local_res10);
  return uVar2;
}



// FUNCTION 1450f27b0 FUN_1450f27b0 body=168 status=ok
// SIG undefined FUN_1450f27b0(void)

undefined8 FUN_1450f27b0(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 2;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined4 *)((longlong)pvVar2 + uVar4 * 4) = *(undefined4 *)(*param_1 + uVar4 * 4);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1450f2880 FUN_1450f2880 body=82 status=ok
// SIG undefined FUN_1450f2880(void)

undefined8 * FUN_1450f2880(undefined8 *param_1)

{
  FUN_1453a8e30();
  *param_1 = &PTR_FUN_149c29950;
  param_1[1] = &PTR_FUN_149c29be8;
  param_1[2] = &PTR_LAB_149c29bf0;
  param_1[5] = &PTR_LAB_149c29c18;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}



// FUNCTION 1450f28e0 FUN_1450f28e0 body=98 status=ok
// SIG undefined FUN_1450f28e0(void)

void FUN_1450f28e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c29950;
  param_1[1] = &PTR_FUN_149c29be8;
  param_1[2] = &PTR_LAB_149c29bf0;
  param_1[5] = &PTR_LAB_149c29c18;
  FUN_1450f33f0(param_1 + 0x25);
  FUN_1450f33f0(param_1 + 0x25);
  FUN_1453a8eb0(param_1);
  return;
}



// FUNCTION 1450f2950 FUN_1450f2950 body=1273 status=ok
// SIG undefined FUN_1450f2950(void)

undefined8 FUN_1450f2950(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  
  uVar9 = FUN_1453a7dd0();
  if ((int)uVar9 == 1) {
    plVar15 = (longlong *)(param_1 + 0x128);
    FUN_1450f33f0(plVar15);
    uVar4 = *(uint *)*param_2;
    *param_2 = (uint *)*param_2 + 1;
    if (uVar4 != 0) {
      if ((*(uint *)(param_1 + 0x134) < uVar4) &&
         (cVar8 = FUN_1450f34c0(plVar15,uVar4 - *(uint *)(param_1 + 0x134)), cVar8 == '\0')) {
        return 2;
      }
      uVar14 = 0;
      if (uVar4 != 0) {
        do {
          plVar12 = (longlong *)0x0;
          uVar5 = *(uint *)(param_1 + 0x130);
          uVar6 = *(uint *)(param_1 + 0x134);
          if (uVar5 < uVar6) {
LAB_1450f2a13:
            if (uVar5 < *(uint *)(param_1 + 0x134)) {
              uVar5 = *(uint *)(param_1 + 0x130);
              *(uint *)(param_1 + 0x130) = uVar5 + 1;
              plVar12 = (longlong *)((ulonglong)uVar5 * 0x60 + *plVar15);
              if (plVar12 != (longlong *)0x0) {
                *plVar12 = 0;
                plVar12[1] = 0;
                plVar12[2] = 0;
                plVar12[3] = 0;
                plVar12[10] = 0;
              }
            }
          }
          else {
            iVar11 = (uVar6 >> 1) + uVar6;
            if (uVar6 == 0) {
              iVar11 = 1;
            }
            cVar8 = FUN_1450f34c0(plVar15,iVar11);
            if (cVar8 != '\0') goto LAB_1450f2a13;
          }
          uVar5 = *(uint *)*param_2;
          uVar13 = (ulonglong)uVar5;
          *param_2 = (uint *)*param_2 + 1;
          if ((*(uint *)((longlong)plVar12 + 0xc) < uVar5) &&
             (cVar8 = FUN_1450f27b0(plVar12,uVar5 - *(uint *)((longlong)plVar12 + 0xc)),
             cVar8 == '\0')) {
            return 2;
          }
          if (uVar5 != 0) {
            do {
              uVar7 = *(undefined4 *)*param_2;
              *param_2 = (undefined4 *)*param_2 + 1;
              uVar5 = *(uint *)(plVar12 + 1);
              uVar6 = *(uint *)((longlong)plVar12 + 0xc);
              if (uVar5 < uVar6) {
LAB_1450f2abf:
                if (uVar5 < *(uint *)((longlong)plVar12 + 0xc)) {
                  uVar5 = *(uint *)(plVar12 + 1);
                  *(uint *)(plVar12 + 1) = uVar5 + 1;
                  puVar10 = (undefined4 *)(*plVar12 + (ulonglong)uVar5 * 4);
                  if (puVar10 != (undefined4 *)0x0) {
                    *puVar10 = uVar7;
                  }
                }
              }
              else {
                iVar11 = (uVar6 >> 1) + uVar6;
                if (uVar6 == 0) {
                  iVar11 = 1;
                }
                cVar8 = FUN_1450f27b0(plVar12,iVar11);
                if (cVar8 != '\0') goto LAB_1450f2abf;
              }
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          uVar5 = *(uint *)*param_2;
          uVar13 = (ulonglong)uVar5;
          *param_2 = (uint *)*param_2 + 1;
          if ((*(uint *)((longlong)plVar12 + 0x1c) < uVar5) &&
             (cVar8 = FUN_1450f27b0(plVar12 + 2,uVar5 - *(uint *)((longlong)plVar12 + 0x1c)),
             cVar8 == '\0')) {
            return 2;
          }
          if (uVar5 != 0) {
            do {
              uVar7 = *(undefined4 *)*param_2;
              *param_2 = (undefined4 *)*param_2 + 1;
              uVar5 = *(uint *)(plVar12 + 3);
              uVar6 = *(uint *)((longlong)plVar12 + 0x1c);
              if (uVar5 < uVar6) {
LAB_1450f2b50:
                if (uVar5 < *(uint *)((longlong)plVar12 + 0x1c)) {
                  uVar5 = *(uint *)(plVar12 + 3);
                  *(uint *)(plVar12 + 3) = uVar5 + 1;
                  puVar10 = (undefined4 *)(plVar12[2] + (ulonglong)uVar5 * 4);
                  if (puVar10 != (undefined4 *)0x0) {
                    *puVar10 = uVar7;
                  }
                }
              }
              else {
                iVar11 = (uVar6 >> 1) + uVar6;
                if (uVar6 == 0) {
                  iVar11 = 1;
                }
                cVar8 = FUN_1450f27b0(plVar12 + 2,iVar11);
                if (cVar8 != '\0') goto LAB_1450f2b50;
              }
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          uVar7 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)(plVar12 + 4) = uVar7;
          uVar7 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)((longlong)plVar12 + 0x24) = uVar7;
          iVar11 = *(int *)*param_2;
          *param_2 = (int *)*param_2 + 1;
          *(int *)(plVar12 + 5) =
               (int)((longlong)((longlong)iVar11 * (ulonglong)DAT_14c72f42c) / 1000);
          uVar5 = *(uint *)*param_2;
          *param_2 = (uint *)*param_2 + 1;
          *(uint *)(plVar12 + 6) = *(uint *)(plVar12 + 6) ^ (uVar5 ^ *(uint *)(plVar12 + 6)) & 0x1f;
          uVar7 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)((longlong)plVar12 + 0x2c) = uVar7;
          bVar1 = *(byte *)*param_2;
          *param_2 = (byte *)*param_2 + 1;
          *(uint *)(plVar12 + 6) =
               *(uint *)(plVar12 + 6) ^ ((uint)bVar1 << 5 ^ *(uint *)(plVar12 + 6)) & 0x20;
          uVar7 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)((longlong)plVar12 + 0x34) = uVar7;
          uVar7 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)(plVar12 + 7) = uVar7;
          iVar11 = *(int *)*param_2;
          *param_2 = (int *)*param_2 + 1;
          *(int *)((longlong)plVar12 + 0x3c) =
               (int)((longlong)((ulonglong)DAT_14c72f42c * (longlong)iVar11) / 1000);
          uVar7 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)(plVar12 + 8) = uVar7;
          uVar7 = *(undefined4 *)*param_2;
          *param_2 = (undefined4 *)*param_2 + 1;
          *(undefined4 *)((longlong)plVar12 + 0x44) = uVar7;
          uVar2 = *(ushort *)*param_2;
          *param_2 = (ushort *)*param_2 + 1;
          *(ushort *)(plVar12 + 9) =
               *(ushort *)(plVar12 + 9) ^ (uVar2 ^ *(ushort *)(plVar12 + 9)) & 7;
          sVar3 = *(short *)*param_2;
          *param_2 = (short *)*param_2 + 1;
          *(ushort *)(plVar12 + 9) =
               *(ushort *)(plVar12 + 9) ^ (sVar3 << 3 ^ *(ushort *)(plVar12 + 9)) & 0x38;
          bVar1 = *(byte *)*param_2;
          *param_2 = (byte *)*param_2 + 1;
          *(ushort *)(plVar12 + 9) = *(ushort *)(plVar12 + 9) & 0xffbf;
          *(ushort *)(plVar12 + 9) = *(ushort *)(plVar12 + 9) | (ushort)(bVar1 & 1) << 6;
          bVar1 = *(byte *)*param_2;
          *param_2 = (byte *)*param_2 + 1;
          *(ushort *)(plVar12 + 9) = *(ushort *)(plVar12 + 9) & 0xff7f;
          *(ushort *)(plVar12 + 9) = *(ushort *)(plVar12 + 9) | (ushort)(bVar1 & 1) << 7;
          cVar8 = *(char *)*param_2;
          *param_2 = (char *)*param_2 + 1;
          if (cVar8 != '\0') {
            puVar10 = AK::MemoryMgr::Malloc(2,0x20);
            plVar12[10] = (longlong)puVar10;
            if (puVar10 == (undefined4 *)0x0) {
              return 2;
            }
            uVar7 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            *puVar10 = uVar7;
            uVar7 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            puVar10[1] = uVar7;
            uVar7 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            puVar10[2] = uVar7;
            iVar11 = *(int *)*param_2;
            *param_2 = (int *)*param_2 + 1;
            puVar10[3] = (int)((longlong)((longlong)iVar11 * (ulonglong)DAT_14c72f42c) / 1000);
            uVar7 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            puVar10[4] = uVar7;
            uVar7 = *(undefined4 *)*param_2;
            *param_2 = (undefined4 *)*param_2 + 1;
            puVar10[5] = uVar7;
            iVar11 = *(int *)*param_2;
            *param_2 = (int *)*param_2 + 1;
            puVar10[6] = (int)((longlong)((longlong)iVar11 * (ulonglong)DAT_14c72f42c) / 1000);
            bVar1 = *(byte *)*param_2;
            *param_2 = (byte *)*param_2 + 1;
            puVar10[7] = puVar10[7] ^ ((uint)bVar1 ^ puVar10[7]) & 1;
            bVar1 = *(byte *)*param_2;
            *param_2 = (byte *)*param_2 + 1;
            puVar10[7] = puVar10[7] ^ ((uint)bVar1 * 2 ^ puVar10[7]) & 2;
          }
          *(uint *)(plVar12 + 0xb) = uVar14;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar4);
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 1450f2e50 FUN_1450f2e50 body=222 status=ok
// SIG undefined FUN_1450f2e50(void)

undefined8 * FUN_1450f2e50(longlong param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  
  uVar5 = *(int *)(param_1 + 0x130) - 1;
  if (-1 < (int)uVar5) {
    do {
      puVar7 = (undefined8 *)((ulonglong)uVar5 * 0x60 + *(longlong *)(param_1 + 0x128));
      uVar4 = (ulonglong)*(uint *)(puVar7 + 1);
      if (*(uint *)(puVar7 + 1) != 0) {
        piVar6 = (int *)*puVar7;
        if (*piVar6 == -1) {
LAB_1450f2ec8:
          uVar4 = (ulonglong)*(uint *)(puVar7 + 3);
          if (*(uint *)(puVar7 + 3) != 0) {
            piVar6 = (int *)puVar7[2];
            if (*piVar6 == -1) {
              return puVar7;
            }
            piVar1 = piVar6 + uVar4;
            do {
              uVar2 = piVar6[uVar4 >> 1];
              if (param_3 == uVar2) {
                if (piVar6 + (uVar4 >> 1) != piVar1) {
                  return puVar7;
                }
                break;
              }
              if (uVar2 < param_3) {
                piVar6 = piVar6 + (uVar4 >> 1) + 1;
              }
              uVar3 = (uint)uVar4 - 1;
              if (param_3 <= uVar2) {
                uVar3 = (uint)uVar4;
              }
              uVar4 = (ulonglong)(uVar3 >> 1);
            } while (uVar3 >> 1 != 0);
          }
        }
        else {
          piVar1 = piVar6 + uVar4;
          do {
            uVar2 = piVar6[uVar4 >> 1];
            if (param_2 == uVar2) {
              if (piVar6 + (uVar4 >> 1) != piVar1) goto LAB_1450f2ec8;
              break;
            }
            if (uVar2 < param_2) {
              piVar6 = piVar6 + (uVar4 >> 1) + 1;
            }
            uVar3 = (uint)uVar4 - 1;
            if (param_2 <= uVar2) {
              uVar3 = (uint)uVar4;
            }
            uVar4 = (ulonglong)(uVar3 >> 1);
          } while (uVar3 >> 1 != 0);
        }
      }
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return *(undefined8 **)(param_1 + 0x128);
}



// FUNCTION 1450f2f30 FUN_1450f2f30 body=502 status=ok
// SIG undefined FUN_1450f2f30(void)

undefined8 *
FUN_1450f2f30(longlong param_1,longlong param_2,uint param_3,longlong param_4,uint param_5,
             longlong param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  
  uVar14 = *(int *)(param_1 + 0x130) - 1;
  if (-1 < (int)uVar14) {
    do {
      puVar11 = (undefined8 *)((ulonglong)uVar14 * 0x60 + *(longlong *)(param_1 + 0x128));
      uVar2 = *(uint *)(puVar11 + 1);
      uVar9 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        uVar3 = *(uint *)(puVar11 + 3);
        uVar10 = (ulonglong)uVar3;
        if (uVar3 != 0) {
          piVar4 = (int *)*puVar11;
          if (*piVar4 == -1) {
LAB_1450f3060:
            piVar4 = (int *)puVar11[2];
            if (*piVar4 == -1) {
              return puVar11;
            }
            piVar1 = piVar4 + uVar10;
            piVar13 = piVar4;
            do {
              uVar2 = piVar13[uVar10 >> 1];
              lVar5 = param_6;
              if (param_5 == uVar2) {
                if (piVar13 + (uVar10 >> 1) != piVar1) {
                  return puVar11;
                }
                break;
              }
              if (uVar2 < param_5) {
                piVar13 = piVar13 + (uVar10 >> 1) + 1;
              }
              uVar8 = (uint)uVar10 - 1;
              if (param_5 < uVar2) {
                uVar8 = (uint)uVar10;
              }
              uVar10 = (ulonglong)(uVar8 >> 1);
            } while (uVar8 >> 1 != 0);
            for (; (lVar5 != 0 && (lVar5 != param_2)); lVar5 = *(longlong *)(lVar5 + 0x78)) {
              uVar2 = *(uint *)(lVar5 + 0x20);
              piVar13 = piVar4;
              uVar8 = uVar3;
              do {
                uVar12 = piVar13[uVar8 >> 1];
                if (uVar2 == uVar12) {
                  if (piVar13 + (uVar8 >> 1) != piVar1) {
                    return puVar11;
                  }
                  break;
                }
                if (uVar12 < uVar2) {
                  piVar13 = piVar13 + (uVar8 >> 1) + 1;
                }
                uVar7 = uVar8 - 1;
                if (uVar2 < uVar12) {
                  uVar7 = uVar8;
                }
                uVar8 = uVar7 >> 1;
              } while (uVar8 != 0);
            }
          }
          else {
            piVar1 = piVar4 + uVar9;
            piVar13 = piVar4;
            do {
              uVar8 = piVar13[uVar9 >> 1];
              lVar5 = param_4;
              if (param_3 == uVar8) {
                if (piVar13 + (uVar9 >> 1) != piVar1) goto LAB_1450f3060;
                break;
              }
              if (uVar8 < param_3) {
                piVar13 = piVar13 + (uVar9 >> 1) + 1;
              }
              uVar12 = (uint)uVar9 - 1;
              if (param_3 <= uVar8) {
                uVar12 = (uint)uVar9;
              }
              uVar9 = (ulonglong)(uVar12 >> 1);
            } while (uVar12 >> 1 != 0);
            for (; (lVar5 != 0 && (lVar5 != param_2)); lVar5 = *(longlong *)(lVar5 + 0x78)) {
              uVar8 = *(uint *)(lVar5 + 0x20);
              piVar13 = piVar4;
              uVar12 = uVar2;
              do {
                uVar7 = piVar13[uVar12 >> 1];
                if (uVar8 == uVar7) {
                  if (piVar13 + (uVar12 >> 1) != piVar1) goto LAB_1450f3060;
                  break;
                }
                if (uVar7 < uVar8) {
                  piVar13 = piVar13 + (uVar12 >> 1) + 1;
                }
                uVar6 = uVar12 - 1;
                if (uVar8 < uVar7) {
                  uVar6 = uVar12;
                }
                uVar12 = uVar6 >> 1;
              } while (uVar12 != 0);
            }
          }
        }
      }
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  return *(undefined8 **)(param_1 + 0x128);
}



// FUNCTION 1450f3130 FUN_1450f3130 body=302 status=ok
// SIG undefined FUN_1450f3130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450f3130(void)

{
  undefined4 *puVar1;
  char cVar2;
  ulonglong uVar3;
  
  if ((DAT_14c79d198 == 0) &&
     ((DAT_14c79d19c != 0 ||
      ((cVar2 = FUN_1450f27b0(&DAT_14c79d190,1), cVar2 != '\0' && (DAT_14c79d19c != 0)))))) {
    uVar3 = (ulonglong)DAT_14c79d198;
    DAT_14c79d198 = DAT_14c79d198 + 1;
    puVar1 = (undefined4 *)(DAT_14c79d190 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xffffffff;
    }
  }
  DAT_14c79d1c0 = DAT_14c79d1c0 & 0xffffffe7 | 0x27;
  _DAT_14c79d1b0 = 0;
  _DAT_14c79d1b8 = 0;
  if ((DAT_14c79d1a8 == 0) &&
     ((DAT_14c79d1ac != 0 ||
      ((cVar2 = FUN_1450f27b0(&DAT_14c79d1a0,1), cVar2 != '\0' && (DAT_14c79d1ac != 0)))))) {
    uVar3 = (ulonglong)DAT_14c79d1a8;
    DAT_14c79d1a8 = DAT_14c79d1a8 + 1;
    puVar1 = (undefined4 *)(DAT_14c79d1a0 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xffffffff;
    }
  }
  _DAT_14c79d1c4 = 0;
  _DAT_14c79d1d8 = _DAT_14c79d1d8 & 0xff07;
  _DAT_14c79d1cc = 0;
  _DAT_14c79d1d4 = 0;
  DAT_14c79d1e0 = 0;
  _DAT_14c79d1e8 = 0;
  return &DAT_14c79d190;
}



// FUNCTION 1450f3260 FUN_1450f3260 body=90 status=ok
// SIG undefined FUN_1450f3260(void)

void FUN_1450f3260(void)

{
  if (DAT_14c79d190 != (void *)0x0) {
    DAT_14c79d198 = 0;
    AK::MemoryMgr::Free(0,DAT_14c79d190);
    DAT_14c79d190 = (void *)0x0;
    DAT_14c79d19c = 0;
  }
  if (DAT_14c79d1a0 != (void *)0x0) {
    DAT_14c79d1a8 = 0;
    AK::MemoryMgr::Free(0,DAT_14c79d1a0);
    DAT_14c79d1a0 = (void *)0x0;
    DAT_14c79d1ac = 0;
  }
  return;
}



// FUNCTION 1450f32c0 FUN_1450f32c0 body=200 status=ok
// SIG undefined FUN_1450f32c0(void)

ulonglong FUN_1450f32c0(longlong param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = FUN_1453a90c0();
  if (((int)uVar4 == 1) &&
     (uVar5 = 0, uVar6 = uVar5, uVar2 = uVar4 & 0xffffffff, *(int *)(param_1 + 0x130) != 0)) {
    do {
      uVar4 = uVar2;
      puVar1 = *(undefined4 **)(uVar6 * 0x60 + 0x50 + *(longlong *)(param_1 + 0x128));
      if (puVar1 != (undefined4 *)0x0) {
        uVar3 = FUN_1450d5430(*puVar1);
        uVar4 = (ulonglong)uVar3;
        if (uVar3 != 1) {
          if ((int)uVar6 != 0) {
            do {
              puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x128) + 0x50 + uVar5);
              if (puVar1 != (undefined4 *)0x0) {
                FUN_1450d5550(*puVar1);
              }
              uVar5 = uVar5 + 0x60;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          FUN_1453a9180(param_1);
          return uVar4;
        }
      }
      uVar3 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar3;
      uVar2 = uVar4;
    } while (uVar3 < *(uint *)(param_1 + 0x130));
  }
  return uVar4;
}



// FUNCTION 1450f3390 FUN_1450f3390 body=92 status=ok
// SIG undefined FUN_1450f3390(void)

void FUN_1450f3390(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x130) != 0) {
    do {
      puVar1 = *(undefined4 **)(uVar3 * 0x60 + 0x50 + *(longlong *)(param_1 + 0x128));
      if (puVar1 != (undefined4 *)0x0) {
        FUN_1450d5550(*puVar1);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x130));
  }
  FUN_1453a9180(param_1);
  return;
}



// FUNCTION 1450f33f0 FUN_1450f33f0 body=195 status=ok
// SIG undefined FUN_1450f33f0(void)

void FUN_1450f33f0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 0xc;
    if (puVar2 != puVar4) {
      puVar3 = (undefined4 *)((longlong)puVar2 + 0x1c);
      do {
        if (*(void **)(puVar3 + 0xd) != (void *)0x0) {
          AK::MemoryMgr::Free(2,*(void **)(puVar3 + 0xd));
        }
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar3[-5] = 0;
          AK::MemoryMgr::Free(0,pvVar1);
          *puVar2 = 0;
          puVar3[-4] = 0;
        }
        if (*(void **)(puVar3 + -3) != (void *)0x0) {
          puVar3[-1] = 0;
          AK::MemoryMgr::Free(0,*(void **)(puVar3 + -3));
          *(undefined8 *)(puVar3 + -3) = 0;
          *puVar3 = 0;
        }
        puVar2 = puVar2 + 0xc;
        puVar3 = puVar3 + 0x18;
      } while (puVar2 != puVar4);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1450f34c0 FUN_1450f34c0 body=390 status=ok
// SIG undefined FUN_1450f34c0(void)

undefined8 FUN_1450f34c0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  __uint64 _Var5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  uVar9 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var5 = (ulonglong)uVar9 * 0x60;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
      if (uVar7 != 0) {
        lVar6 = (longlong)pvVar4 + 0x1c;
        do {
          puVar8 = (undefined8 *)(lVar6 + -0x1c);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = 0;
            *(undefined8 *)(lVar6 + -0x14) = 0;
            *(undefined8 *)(lVar6 + -0xc) = 0;
            *(undefined8 *)(lVar6 + -4) = 0;
            *(undefined8 *)(lVar6 + 0x34) = 0;
          }
          lVar2 = *param_1;
          lVar1 = (-0x1c - (longlong)pvVar4) + lVar6;
          uVar3 = ((undefined8 *)(lVar1 + lVar2))[1];
          *puVar8 = *(undefined8 *)(lVar1 + lVar2);
          *(undefined8 *)(lVar6 + -0x14) = uVar3;
          puVar8 = (undefined8 *)(lVar1 + 0x10 + lVar2);
          uVar3 = puVar8[1];
          *(undefined8 *)(lVar6 + -0xc) = *puVar8;
          *(undefined8 *)(lVar6 + -4) = uVar3;
          puVar8 = (undefined8 *)(lVar1 + 0x20 + lVar2);
          uVar3 = puVar8[1];
          *(undefined8 *)(lVar6 + 4) = *puVar8;
          *(undefined8 *)(lVar6 + 0xc) = uVar3;
          puVar8 = (undefined8 *)(lVar1 + 0x30 + lVar2);
          uVar3 = puVar8[1];
          *(undefined8 *)(lVar6 + 0x14) = *puVar8;
          *(undefined8 *)(lVar6 + 0x1c) = uVar3;
          puVar8 = (undefined8 *)(lVar1 + 0x40 + lVar2);
          uVar3 = puVar8[1];
          *(undefined8 *)(lVar6 + 0x24) = *puVar8;
          *(undefined8 *)(lVar6 + 0x2c) = uVar3;
          puVar8 = (undefined8 *)(lVar1 + 0x50 + lVar2);
          uVar3 = puVar8[1];
          *(undefined8 *)(lVar6 + 0x34) = *puVar8;
          *(undefined8 *)(lVar6 + 0x3c) = uVar3;
          puVar8 = (undefined8 *)(*param_1 + lVar1);
          if ((void *)puVar8[10] != (void *)0x0) {
            AK::MemoryMgr::Free(2,(void *)puVar8[10]);
          }
          if ((void *)*puVar8 != (void *)0x0) {
            *(undefined4 *)(puVar8 + 1) = 0;
            AK::MemoryMgr::Free(0,(void *)*puVar8);
            *puVar8 = 0;
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          }
          if ((void *)puVar8[2] != (void *)0x0) {
            *(undefined4 *)(puVar8 + 3) = 0;
            AK::MemoryMgr::Free(0,(void *)puVar8[2]);
            puVar8[2] = 0;
            *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
          }
          lVar6 = lVar6 + 0x60;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar4;
  *(uint *)((longlong)param_1 + 0xc) = uVar9;
  return 1;
}



// FUNCTION 1450f3650 FUN_1450f3650 body=133 status=ok
// SIG undefined FUN_1450f3650(void)

undefined8 * FUN_1450f3650(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c29950;
  param_1[1] = &PTR_FUN_149c29be8;
  param_1[2] = &PTR_LAB_149c29bf0;
  param_1[5] = &PTR_LAB_149c29c18;
  FUN_1450f33f0(param_1 + 0x25);
  FUN_1450f33f0(param_1 + 0x25);
  FUN_1453a8eb0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 1450f36f0 FUN_1450f36f0 body=37 status=ok
// SIG undefined FUN_1450f36f0(void)

undefined8 * FUN_1450f36f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return param_1;
}



// FUNCTION 1450f3720 FUN_1450f3720 body=11 status=ok
// SIG undefined FUN_1450f3720(void)

void FUN_1450f3720(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001450f3724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1450f3730 FUN_1450f3730 body=3 status=ok
// SIG undefined FUN_1450f3730(void)

void FUN_1450f3730(void)

{
  return;
}



// FUNCTION 1450f3740 FUN_1450f3740 body=51 status=ok
// SIG undefined FUN_1450f3740(void)

void FUN_1450f3740(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1450f3780 FUN_1450f3780 body=232 status=ok
// SIG undefined FUN_1450f3780(void)

undefined8 FUN_1450f3780(longlong *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int *piVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar3 = (int *)*param_1;
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  piVar7 = piVar3 + uVar5 * 0xe;
  for (; (piVar3 != piVar7 && (*piVar3 != param_2)); piVar3 = piVar3 + 0xe) {
  }
  piVar4 = piVar3 + 2;
  if (piVar3 == piVar7) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 == (int *)0x0) {
    if (((uVar5 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar2 = FUN_1450f3a90(param_1), cVar2 != '\0')) &&
       (uVar5 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar1 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar1 + 1;
      piVar4 = (int *)((ulonglong)uVar1 * 0x38 + *param_1);
      if (piVar4 != (int *)0x0) {
        *piVar4 = param_2;
        piVar4 = piVar4 + 2;
        if (piVar4 != (int *)0x0) goto LAB_1450f3819;
      }
    }
    uVar6 = 2;
  }
  else {
LAB_1450f3819:
    piVar4[0] = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    QueryPerformanceCounter((LARGE_INTEGER *)(piVar4 + 10));
    uVar6 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return uVar6;
}



// FUNCTION 1450f3870 FUN_1450f3870 body=150 status=ok
// SIG undefined FUN_1450f3870(void)

void FUN_1450f3870(undefined8 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar4 = (int *)*param_1;
  piVar5 = piVar4 + (ulonglong)*(uint *)(param_1 + 1) * 0xe;
  for (; (piVar4 != piVar5 && (*piVar4 != param_2)); piVar4 = piVar4 + 0xe) {
  }
  piVar6 = piVar4 + 2;
  if (piVar4 == piVar5) {
    piVar6 = (int *)0x0;
  }
  if (piVar6 != (int *)0x0) {
    iVar1 = param_3[1];
    iVar2 = param_3[2];
    iVar3 = param_3[3];
    *piVar6 = *param_3;
    piVar6[1] = iVar1;
    piVar6[2] = iVar2;
    piVar6[3] = iVar3;
    iVar1 = param_3[5];
    iVar2 = param_3[6];
    iVar3 = param_3[7];
    piVar6[4] = param_3[4];
    piVar6[5] = iVar1;
    piVar6[6] = iVar2;
    piVar6[7] = iVar3;
    piVar6[8] = param_3[8];
    QueryPerformanceCounter((LARGE_INTEGER *)(piVar6 + 10));
  }
                    /* WARNING: Could not recover jumptable at 0x0001450f38ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1450f3910 FUN_1450f3910 body=217 status=ok
// SIG undefined FUN_1450f3910(void)

undefined4 FUN_1450f3910(undefined8 *param_1,int param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  LARGE_INTEGER local_res8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar4 = (int *)*param_1;
  piVar5 = piVar4 + (ulonglong)*(uint *)(param_1 + 1) * 0xe;
  for (; (piVar4 != piVar5 && (*piVar4 != param_2)); piVar4 = piVar4 + 0xe) {
  }
  piVar7 = piVar4 + 2;
  if (piVar4 == piVar5) {
    piVar7 = (int *)0x0;
  }
  if (piVar7 == (int *)0x0) {
    uVar6 = 2;
  }
  else {
    iVar1 = piVar7[1];
    iVar2 = piVar7[2];
    iVar3 = piVar7[3];
    *param_3 = *piVar7;
    param_3[1] = iVar1;
    param_3[2] = iVar2;
    param_3[3] = iVar3;
    iVar1 = piVar7[5];
    iVar2 = piVar7[6];
    iVar3 = piVar7[7];
    param_3[4] = piVar7[4];
    param_3[5] = iVar1;
    param_3[6] = iVar2;
    param_3[7] = iVar3;
    param_3[8] = piVar7[8];
    if ((param_4 != '\0') && (((0 < param_3[2] || (0 < param_3[1])) || (0 < param_3[3])))) {
      QueryPerformanceCounter(&local_res8);
      *param_3 = *param_3 +
                 (int)((float)(local_res8.QuadPart - *(longlong *)(piVar7 + 10)) / DAT_14c79c4d4);
    }
    uVar6 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return uVar6;
}



// FUNCTION 1450f39f0 FUN_1450f39f0 body=152 status=ok
// SIG undefined FUN_1450f39f0(void)

void FUN_1450f39f0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *_Dst;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar1 = (int *)*param_1;
  _Dst = piVar1;
  do {
    if (_Dst == piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 0xe) {
LAB_1450f3a6e:
                    /* WARNING: Could not recover jumptable at 0x0001450f3a81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      return;
    }
    if (*_Dst == param_2) {
      if (_Dst < piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 0xe) {
        memmove(_Dst,_Dst + 0xe,
                (ulonglong)
                (uint)((int)(((longlong)(piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 0xe) -
                             (longlong)_Dst) / 0x38) * 0x38));
      }
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
      goto LAB_1450f3a6e;
    }
    _Dst = _Dst + 0xe;
  } while( true );
}



// FUNCTION 1450f3a90 FUN_1450f3a90 body=222 status=ok
// SIG undefined FUN_1450f3a90(void)

undefined8 FUN_1450f3a90(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  iVar5 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar5 = 1;
  }
  _Var9 = (ulonglong)(iVar5 + uVar3) * 0x38;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,_Var9);
    if (pvVar7 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
        if (uVar10 != 0) {
          lVar8 = 0;
          do {
            lVar4 = *param_1;
            uVar6 = ((undefined8 *)(lVar8 + lVar4))[1];
            *(undefined8 *)(lVar8 + (longlong)pvVar7) = *(undefined8 *)(lVar8 + lVar4);
            ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar6;
            puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar4);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar4);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar8 + 0x20 + (longlong)pvVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            *(undefined8 *)(lVar8 + 0x30 + (longlong)pvVar7) = *(undefined8 *)(lVar8 + 0x30 + lVar4)
            ;
            uVar10 = uVar10 - 1;
            lVar8 = lVar8 + 0x38;
          } while (uVar10 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450f3b51;
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var9);
    if (pvVar7 != (void *)0x0) {
LAB_1450f3b51:
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar5 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450f3b70 FUN_1450f3b70 body=14 status=ok
// SIG undefined FUN_1450f3b70(void)

undefined8 * FUN_1450f3b70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c29c98;
  return param_1;
}



// FUNCTION 1450f3b80 FUN_1450f3b80 body=75 status=ok
// SIG undefined FUN_1450f3b80(void)

void FUN_1450f3b80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x10,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkAudioInput\\Sources\\AudioEngineFX\\AkFXSrcAudioInputParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c29c98;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 1450f3bf0 FUN_1450f3bf0 body=56 status=ok
// SIG undefined FUN_1450f3bf0(void)

undefined8 FUN_1450f3bf0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1450f3c80 FUN_1450f3c80 body=43 status=ok
// SIG undefined FUN_1450f3c80(void)

undefined8 * FUN_1450f3c80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450f3d00 FUN_1450f3d00 body=38 status=ok
// SIG undefined FUN_1450f3d00(void)

undefined8 FUN_1450f3d00(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_2 + 0xa8))(param_2);
  uVar2 = 1;
  if (cVar1 != '\0') {
    uVar2 = 4;
  }
  return uVar2;
}



// FUNCTION 1450f3d60 FUN_1450f3d60 body=28 status=ok
// SIG undefined FUN_1450f3d60(void)

bool FUN_1450f3d60(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xe8))();
  return iVar1 == 1;
}



// FUNCTION 1450f3da0 FUN_1450f3da0 body=43 status=ok
// SIG undefined FUN_1450f3da0(void)

undefined8 * FUN_1450f3da0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c29d60;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450f3e10 FUN_1450f3e10 body=214 status=ok
// SIG undefined FUN_1450f3e10(void)

void FUN_1450f3e10(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x54) == 1) {
    iVar1 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd4) + *(int *)(param_1 + 0xcc);
  }
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(int *)(param_1 + 0xc0) = iVar1 + (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x108));
  FUN_1453af0b0(param_1 + 0x58,*(undefined2 *)(param_1 + 0xdc),*(undefined8 *)(param_1 + 0x108),
                param_1 + 0x118,param_1 + 0x120);
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(param_2 + 0x30) = iVar1;
  if (iVar1 != 2) {
    *(longlong *)(param_1 + 0x108) =
         *(longlong *)(param_1 + 0x108) + (ulonglong)*(uint *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
    FUN_1453ae780(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x58),
                  *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xb8),param_2);
  }
  return;
}



// FUNCTION 1450f3f00 FUN_1450f3f00 body=797 status=ok
// SIG undefined FUN_1450f3f00(void)

ulonglong FUN_1450f3f00(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  void *pvVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 local_res10 [2];
  undefined8 local_68;
  uint local_60;
  undefined1 local_58;
  int local_50 [2];
  undefined8 local_48;
  undefined1 local_40 [8];
  short *local_38;
  
  if (param_2 != 0) {
    uVar15 = 0;
    puVar1 = (uint *)(param_1 + 0x3c);
    local_50[0] = 0;
    local_48 = 0;
    uVar12 = FUN_1450731d0(param_2,param_3,local_40,param_1 + 0x40,(uint *)(param_1 + 0x38),puVar1,
                           (int *)(param_1 + 0x30),(uint *)(param_1 + 0x34),local_50,0,0);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    if (*local_38 != -1) {
      return 7;
    }
    uVar2 = local_38[1];
    uVar3 = *(undefined4 *)(local_38 + 10);
    local_68 = (ushort *)CONCAT44(uVar3,*(undefined4 *)(local_38 + 2));
    lVar14 = *(longlong *)(param_1 + 0x18);
    if (lVar14 != 0) {
      *(ushort **)(lVar14 + 0x2b0) = local_68;
      *(uint *)(lVar14 + 0x2b8) = (uVar2 & 0xff) << 8 | local_60 & 0xfffd0020 | 0x50020;
    }
    if (local_50[0] != 0) {
      *(undefined8 *)(param_1 + 0x10) = local_48;
    }
    uVar4 = *(uint *)(param_1 + 0x34);
    param_2 = (ulonglong)uVar4 + param_2;
    *(longlong *)(param_1 + 0x110) = param_2;
    uVar5 = *(uint *)(local_38 + 0xc);
    *(uint *)(param_1 + 0x28) = uVar5;
    uVar8 = *(undefined8 *)(local_38 + 0x12);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(local_38 + 0xe);
    *(undefined8 *)(param_1 + 0xd0) = uVar8;
    uVar8 = *(undefined8 *)(local_38 + 0x1a);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(local_38 + 0x16);
    *(undefined8 *)(param_1 + 0xe0) = uVar8;
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(local_38 + 0x1e);
    *(short *)(param_1 + 0xec) = local_38[0x20];
    uVar6 = *(undefined4 *)(local_38 + 2);
    *(undefined4 *)(param_1 + 0xb8) = uVar3;
    uVar11 = *puVar1;
    *(undefined4 *)(param_1 + 0xf0) = uVar6;
    if (uVar11 == 0) {
      uVar11 = uVar5 - 1;
      *puVar1 = uVar11;
    }
    if (((*(uint *)(param_1 + 0x38) <= uVar11) && (uVar11 < uVar5)) &&
       (param_3 == *(int *)(param_1 + 0x30) + uVar4)) {
      uVar12 = 1;
      *(longlong *)(param_1 + 0x108) = param_2;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      if (*(longlong *)(param_1 + 0x18) == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x310);
      }
      *(undefined2 *)(param_1 + 0x54) = uVar9;
      if (*(uint *)(param_1 + 0xd4) != 0) {
        pvVar13 = AK::MemoryMgr::Malloc(5,(ulonglong)*(uint *)(param_1 + 0xd4));
        *(void **)(param_1 + 0xf8) = pvVar13;
        if (pvVar13 == (void *)0x0) {
          return 0x34;
        }
      }
      *(undefined4 *)(param_1 + 0x60) = 1;
      if (*(uint *)(param_1 + 0xd4) != 0) {
        memcpy(*(void **)(param_1 + 0xf8),*(void **)(param_1 + 0x108),
               (ulonglong)*(uint *)(param_1 + 0xd4));
        *(longlong *)(param_1 + 0x108) =
             *(longlong *)(param_1 + 0x108) + (ulonglong)*(uint *)(param_1 + 0xd4);
      }
      puVar7 = *(ushort **)(param_1 + 0x108);
      local_68 = puVar7 + 1;
      local_60 = (uint)*puVar7;
      local_58 = 0;
      local_res10[0] = 0;
      *(ulonglong *)(param_1 + 0x108) = (longlong)puVar7 + (ulonglong)local_60 + 2;
      lVar14 = FUN_1453af540(&DAT_14c7fdfa0,param_1 + 0x58,&local_68,local_res10);
      *(longlong *)(param_1 + 0x80) = lVar14;
      if ((lVar14 != 0) &&
         (iVar10 = FUN_1453aeaf0(param_1 + 0x68,*(undefined1 *)(param_1 + 0xb8)), iVar10 == 0)) {
        *(undefined4 *)(param_1 + 0x60) = 3;
        uVar11 = uVar15;
        if ((*(longlong *)(param_1 + 0x18) != 0) &&
           (uVar11 = 0, (*(byte *)(*(longlong *)(param_1 + 0x18) + 0x315) & 0x40) != 0)) {
          uVar11 = FUN_1450f46d0(param_1);
          lVar14 = *(longlong *)(param_1 + 0x18);
          uVar12 = (ulonglong)uVar11;
          if ((*(byte *)(lVar14 + 0x315) & 0x40) == 0) {
            uVar15 = *(uint *)(lVar14 + 0x30c);
          }
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar15;
          *(byte *)(lVar14 + 0x315) = *(byte *)(lVar14 + 0x315) & 0x3f;
          *(byte *)(lVar14 + 0x316) = *(byte *)(lVar14 + 0x316) & 0xfe;
          *(undefined4 *)(lVar14 + 0x30c) = 0;
          uVar11 = uVar15;
        }
        FUN_1450f4740(param_1,uVar11 & 0xffff);
        return uVar12;
      }
      return 2;
    }
  }
  return 2;
}



// FUNCTION 1450f4220 FUN_1450f4220 body=116 status=ok
// SIG undefined FUN_1450f4220(void)

void FUN_1450f4220(longlong *param_1)

{
  FUN_1453aebf0(param_1 + 0xd);
  (**(code **)(*param_1 + 0x10))(param_1);
  if ((void *)param_1[0x1f] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[0x1f]);
    param_1[0x1f] = 0;
  }
  if ((void *)param_1[0x23] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[0x23]);
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN_1453ae430(param_1);
  return;
}



// FUNCTION 1450f42c0 FUN_1450f42c0 body=65 status=ok
// SIG undefined FUN_1450f42c0(void)

void FUN_1450f42c0(longlong param_1,uint param_2)

{
  if (param_2 < 2) {
    FUN_1453aebf0(param_1 + 0x68);
    if (*(void **)(param_1 + 0x118) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x118));
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
  }
  return;
}



// FUNCTION 1450f4310 FUN_1450f4310 body=292 status=ok
// SIG undefined FUN_1450f4310(void)

undefined4 FUN_1450f4310(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if ((param_2 < 2) &&
     (iVar3 = FUN_1453aeaf0(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78)), iVar3 == -1)) {
    return 2;
  }
  uVar5 = 0;
  uVar4 = 1;
  if (param_2 == 1) {
    if (param_3 == '\0') {
      FUN_1450f4620(param_1,param_1 + 0x2c);
    }
    else {
      uVar4 = FUN_1450f46d0();
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    if ((*(byte *)(lVar1 + 0x315) & 0x40) == 0) {
      uVar5 = *(uint *)(lVar1 + 0x30c);
    }
    else {
      uVar5 = 0;
    }
    *(byte *)(lVar1 + 0x316) = *(byte *)(lVar1 + 0x316) & 0xfe;
    *(byte *)(lVar1 + 0x315) = *(byte *)(lVar1 + 0x315) & 0x3f;
    *(undefined4 *)(lVar1 + 0x30c) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar5;
  }
  else {
    if (param_2 != 0) {
      return 1;
    }
    *(ulonglong *)(param_1 + 0x108) =
         (ulonglong)*(uint *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(longlong *)(param_1 + 0x18) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x310);
    }
    *(undefined2 *)(param_1 + 0x54) = uVar2;
  }
  if (*(short *)(param_1 + 0x54) == 1) {
    uVar2 = *(undefined2 *)(param_1 + 0xde);
  }
  else {
    uVar2 = *(undefined2 *)(param_1 + 0xd2);
  }
  FUN_1453aec50(param_1 + 0x68,uVar5 & 0xffff,uVar2);
  *(undefined4 *)(param_1 + 0x60) = 3;
  return uVar4;
}



// FUNCTION 1450f4440 FUN_1450f4440 body=138 status=ok
// SIG undefined FUN_1450f4440(void)

undefined4 FUN_1450f4440(longlong param_1)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = FUN_1450f46d0();
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(byte *)(lVar1 + 0x315) & 0x40) == 0) {
    uVar4 = *(uint *)(lVar1 + 0x30c);
  }
  else {
    uVar4 = 0;
  }
  *(byte *)(lVar1 + 0x316) = *(byte *)(lVar1 + 0x316) & 0xfe;
  *(byte *)(lVar1 + 0x315) = *(byte *)(lVar1 + 0x315) & 0x3f;
  *(undefined4 *)(lVar1 + 0x30c) = 0;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar4;
  if (*(short *)(param_1 + 0x54) == 1) {
    uVar2 = *(undefined2 *)(param_1 + 0xde);
  }
  else {
    uVar2 = *(undefined2 *)(param_1 + 0xd2);
  }
  FUN_1453aec50(param_1 + 0x68,uVar4 & 0xffff,uVar2);
  *(undefined4 *)(param_1 + 0x60) = 3;
  return uVar3;
}



// FUNCTION 1450f4500 FUN_1450f4500 body=122 status=ok
// SIG undefined FUN_1450f4500(void)

undefined4 FUN_1450f4500(longlong param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_res10 [6];
  
  uVar2 = 0;
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    local_res10[0] = param_2;
    FUN_1450f4620(param_1,local_res10);
    uVar2 = param_2 - local_res10[0];
    *(uint *)(param_1 + 0x2c) = local_res10[0];
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar2;
  if (*(short *)(param_1 + 0x54) == 1) {
    uVar1 = *(undefined2 *)(param_1 + 0xde);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0xd2);
  }
  FUN_1453aec50(param_1 + 0x68,uVar2 & 0xffff,uVar1);
  *(undefined4 *)(param_1 + 0x60) = 3;
  return uVar3;
}



// FUNCTION 1450f4580 FUN_1450f4580 body=150 status=ok
// SIG undefined FUN_1450f4580(void)

undefined4 FUN_1450f4580(longlong param_1,char param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_1 + 0x54);
  if (1 < uVar3) {
    uVar3 = uVar3 - 1;
    *(ushort *)(param_1 + 0x54) = uVar3;
  }
  uVar2 = 0x11;
  if (param_2 == '\0') {
    *(ulonglong *)(param_1 + 0x108) =
         (ulonglong)*(uint *)(param_1 + 0xd4) + (ulonglong)*(uint *)(param_1 + 200) +
         *(longlong *)(param_1 + 0x110);
    if (uVar3 == 1) {
      uVar1 = *(undefined2 *)(param_1 + 0xde);
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 0xd2);
    }
    FUN_1453aec50(param_1 + 0x68,*(undefined2 *)(param_1 + 0xd0),uVar1);
    *(undefined4 *)(param_1 + 0x60) = 3;
    *(undefined4 *)(param_1 + 0x5c) = 0x2d;
    uVar2 = 0x2d;
  }
  return uVar2;
}



// FUNCTION 1450f4620 FUN_1450f4620 body=174 status=ok
// SIG undefined FUN_1450f4620(void)

undefined8 FUN_1450f4620(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  
  puVar4 = *(ushort **)(param_1 + 0xf8);
  if (*param_2 == 0) {
    *param_2 = 0;
    uVar1 = *(uint *)(param_1 + 0xd8);
  }
  else {
    iVar6 = 0;
    uVar5 = 0;
    uVar1 = *(uint *)(param_1 + 0xd4);
    uVar3 = 0;
    if (uVar1 >> 2 != 0) {
      do {
        uVar2 = *puVar4 + uVar5;
        if (*param_2 < uVar2) break;
        uVar3 = uVar3 + 1;
        iVar6 = iVar6 + (uint)puVar4[1];
        puVar4 = puVar4 + 2;
        uVar5 = uVar2;
      } while (uVar3 < uVar1 >> 2);
      if (uVar3 != 0) {
        uVar1 = uVar1 + iVar6;
        *param_2 = uVar5;
        goto LAB_1450f46b4;
      }
    }
    uVar1 = *(uint *)(param_1 + 0xd8);
    *param_2 = 0;
  }
LAB_1450f46b4:
  *(ulonglong *)(param_1 + 0x108) = (ulonglong)uVar1 + *(longlong *)(param_1 + 0x110);
  return 1;
}



// FUNCTION 1450f46d0 FUN_1450f46d0 body=107 status=ok
// SIG undefined FUN_1450f46d0(void)

undefined8 FUN_1450f46d0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint local_res8 [2];
  
  uVar2 = FUN_1453ae860();
  if (*(uint *)(param_1 + 0x28) <= uVar2) {
    return 2;
  }
  local_res8[0] = uVar2;
  FUN_1450f4620(param_1,local_res8);
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = local_res8[0];
  *(byte *)(lVar1 + 0x315) = *(byte *)(lVar1 + 0x315) & 0x3f;
  *(byte *)(lVar1 + 0x316) = *(byte *)(lVar1 + 0x316) & 0xfe;
  *(uint *)(lVar1 + 0x30c) = uVar2 - local_res8[0];
  return 1;
}



// FUNCTION 1450f4740 FUN_1450f4740 body=61 status=ok
// SIG undefined FUN_1450f4740(void)

void FUN_1450f4740(longlong param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x54) == 1) {
    uVar1 = *(undefined2 *)(param_1 + 0xde);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0xd2);
  }
  FUN_1453aec50(param_1 + 0x68,param_2,uVar1);
  *(undefined4 *)(param_1 + 0x60) = 3;
  return;
}



// FUNCTION 1450f4780 FUN_1450f4780 body=92 status=ok
// SIG undefined FUN_1450f4780(void)

undefined8 * FUN_1450f4780(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149c29d90;
  if (param_1[0x10] != 0) {
    FUN_1453af780(&DAT_14c7fdfa0,param_1 + 0xb);
  }
  FUN_1453ae400(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 1450f47e0 FUN_1450f47e0 body=112 status=ok
// SIG undefined FUN_1450f47e0(void)

undefined8 * FUN_1450f47e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c29eb0;
  FUN_1453ae390(param_1 + 1);
  param_1[1] = &PTR_FUN_149c29d90;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  memset(param_1 + 0xc,0,0xb0);
  return param_1;
}



// FUNCTION 1450f4850 FUN_1450f4850 body=75 status=ok
// SIG undefined FUN_1450f4850(void)

int FUN_1450f4850(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  iVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))(plVar1);
  if (iVar2 != 1) {
    (**(code **)(*plVar1 + 0x70))();
    return iVar2;
  }
  (**(code **)(*plVar1 + 0x108))(plVar1);
  return 1;
}



// FUNCTION 1450f48a0 FUN_1450f48a0 body=87 status=ok
// SIG undefined FUN_1450f48a0(void)

void FUN_1450f48a0(longlong param_1,undefined8 *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = param_2[6];
  (**(code **)(*(longlong *)(param_1 + 8) + 0x78))(param_1 + 8,&local_48);
  *param_2 = local_48;
  param_2[1] = uStack_40;
  param_2[2] = local_38;
  return;
}



// FUNCTION 1450f4930 FUN_1450f4930 body=114 status=ok
// SIG undefined FUN_1450f4930(void)

undefined8 * FUN_1450f4930(undefined8 *param_1,uint param_2)

{
  param_1[1] = &PTR_FUN_149c29d90;
  if (param_1[0x11] != 0) {
    FUN_1453af780(&DAT_14c7fdfa0,param_1 + 0xc);
  }
  FUN_1453ae400(param_1 + 1);
  *param_1 = &PTR_FUN_149c29d60;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 1450f49b0 FUN_1450f49b0 body=1236 status=ok
// SIG undefined FUN_1450f49b0(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_1450f49b0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                 int param_5,int *param_6)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  ushort *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  float fVar16;
  int local_184;
  void *local_180;
  uint local_178 [4];
  uint local_168;
  longlong local_160;
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  undefined1 local_150 [8];
  short *local_148;
  undefined8 local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  int local_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 local_c4;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined1 local_78 [8];
  short *local_70;
  ushort *local_68;
  uint local_60;
  undefined1 local_58;
  
  local_180 = (void *)0x0;
  bVar2 = false;
  local_d8 = 0;
  *param_6 = 0;
  local_94 = 0;
  local_8c = 0;
  local_88[0] = 0;
  local_80 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d4 = 0;
  iStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  local_c4 = 0;
  iStack_bc = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  uStack_ac = 0;
  local_a4 = 0;
  uStack_9c = 0;
  iVar3 = FUN_1450731d0(param_4,param_5,local_78,0,local_150,local_154,local_158,local_178,local_88,
                        0,0);
  if (iVar3 == 1) {
    local_148 = local_70;
    if (*local_70 == -1) {
      auVar1 = *(undefined1 (*) [16])(local_70 + 0xe);
      iStack_bc = auVar1._12_4_;
      local_d8 = *(undefined4 *)(local_70 + 10);
      uStack_c8 = auVar1._0_4_;
      local_c4 = auVar1._4_8_;
      uStack_b8 = *(undefined4 *)(local_70 + 0x16);
      local_b4 = *(ulonglong *)(local_70 + 0x18);
      uStack_ac = *(undefined8 *)(local_70 + 0x1c);
      local_a4 = CONCAT62(local_a4._2_6_,local_70[0x20]);
      puVar9 = (ushort *)(param_4 + (ulonglong)local_178[0]);
      local_a4 = CONCAT44(*(undefined4 *)(local_70 + 2),(undefined4)local_a4);
      param_5 = param_5 - local_178[0];
      if (iStack_bc != 0) {
        puVar9 = (ushort *)((longlong)puVar9 + (auVar1._8_8_ >> 0x20));
        param_5 = param_5 - iStack_bc;
      }
      local_68 = puVar9 + 1;
      uStack_130 = 1;
      local_60 = (uint)*puVar9;
      local_58 = 0;
      local_184 = 0;
      lVar5 = (ulonglong)*puVar9 + 2 + (longlong)puVar9;
      param_5 = param_5 + (-2 - local_60);
      local_160 = lVar5;
      lStack_110 = FUN_1453af540(&DAT_14c7fdfa0,&local_138,&local_68,&local_184);
      if (lStack_110 == 0) {
        iVar3 = 2;
      }
      else {
        bVar2 = true;
        iVar3 = FUN_1453aeaf0(&local_128,(undefined1)local_d8);
        if (iVar3 == 0) {
          uStack_130 = 3;
          FUN_1453aec50(&local_128,0,local_b4._2_2_);
          local_184 = 0;
          uVar7 = (uint)(ushort)local_70[1];
          local_168 = (uint)(ushort)local_70[1];
          local_178[1] = 0;
          do {
            iVar3 = local_184;
            uStack_cc = CONCAT31(uStack_cc._1_3_,1);
            local_138 = local_138 & 0xffffffff00000000;
            iStack_d0 = param_5;
            FUN_1453af0b0(&local_138,local_b4 & 0xffff,lVar5,&local_180,local_178 + 1);
            if (local_138._4_4_ == 2) {
              iVar3 = 2;
              goto LAB_1450f4dff;
            }
            local_178[2] = uVar7 * (int)local_138;
            uVar12 = 0;
            uVar13 = local_138 & 0xffffffff;
            if ((int)local_138 != 0) {
              uVar15 = (ulonglong)uVar7;
              do {
                uVar4 = 0;
                if (3 < uVar15) {
                  lVar5 = uVar15 * uVar12;
                  lVar11 = 2;
                  puVar14 = (undefined2 *)(param_2 + lVar5 * 2);
                  puVar6 = (undefined2 *)(param_2 + (lVar5 + 3) * 2);
                  puVar10 = (undefined2 *)(param_2 + (lVar5 + 2) * 2);
                  puVar8 = puVar14 + 1;
                  do {
                    fVar16 = *(float *)((longlong)local_180 + (uVar13 * uVar4 + uVar12) * 4) *
                             32767.0;
                    if (32767.0 <= fVar16) {
                      fVar16 = 32767.0;
                    }
                    if (fVar16 <= -32768.0) {
                      fVar16 = -32768.0;
                    }
                    *puVar14 = (short)(int)fVar16;
                    fVar16 = *(float *)((longlong)local_180 + ((lVar11 + -1) * uVar13 + uVar12) * 4)
                             * 32767.0;
                    if (32767.0 <= fVar16) {
                      fVar16 = 32767.0;
                    }
                    if (fVar16 <= -32768.0) {
                      fVar16 = -32768.0;
                    }
                    *puVar8 = (short)(int)fVar16;
                    fVar16 = *(float *)((longlong)local_180 + (uVar13 * lVar11 + uVar12) * 4) *
                             32767.0;
                    if (32767.0 <= fVar16) {
                      fVar16 = 32767.0;
                    }
                    if (fVar16 <= -32768.0) {
                      fVar16 = -32768.0;
                    }
                    *puVar10 = (short)(int)fVar16;
                    fVar16 = *(float *)((longlong)local_180 + ((lVar11 + 1) * uVar13 + uVar12) * 4)
                             * 32767.0;
                    if (32767.0 <= fVar16) {
                      fVar16 = 32767.0;
                    }
                    if (fVar16 <= -32768.0) {
                      fVar16 = -32768.0;
                    }
                    uVar4 = uVar4 + 4;
                    puVar14 = puVar14 + 4;
                    puVar8 = puVar8 + 4;
                    puVar10 = puVar10 + 4;
                    lVar11 = lVar11 + 4;
                    *puVar6 = (short)(int)fVar16;
                    puVar6 = puVar6 + 4;
                  } while (uVar4 < uVar15 - 3);
                }
                if (uVar4 < uVar15) {
                  puVar8 = (undefined2 *)(param_2 + (uVar15 * uVar12 + uVar4) * 2);
                  do {
                    fVar16 = *(float *)((longlong)local_180 + (uVar13 * uVar4 + uVar12) * 4) *
                             32767.0;
                    if (32767.0 <= fVar16) {
                      fVar16 = 32767.0;
                    }
                    if (fVar16 <= -32768.0) {
                      fVar16 = -32768.0;
                    }
                    uVar4 = uVar4 + 1;
                    *puVar8 = (short)(int)fVar16;
                    puVar8 = puVar8 + 1;
                  } while (uVar4 < uVar15);
                }
                uVar12 = uVar12 + 1;
                iVar3 = local_184;
                uVar7 = local_168;
              } while (uVar12 < uVar13);
            }
            local_184 = iVar3 + (int)local_138;
            param_5 = param_5 - uStack_12c;
            lVar5 = local_160 + (ulonglong)uStack_12c;
            local_d4 = (int)local_138;
            param_2 = param_2 + (ulonglong)local_178[2] * 2;
            *param_6 = *param_6 + local_178[2] * 2;
            local_160 = lVar5;
          } while (local_184 != *(int *)(local_148 + 0xc));
          iVar3 = 1;
LAB_1450f4dff:
          bVar2 = true;
        }
        else {
          iVar3 = 2;
        }
      }
    }
    else {
      iVar3 = 7;
    }
  }
  if (local_180 != (void *)0x0) {
    AK::MemoryMgr::Free(5,local_180);
  }
  if (bVar2) {
    FUN_1453aebf0(&local_128);
  }
  if (lStack_110 != 0) {
    FUN_1453af780(&DAT_14c7fdfa0,&local_138);
  }
  return iVar3;
}



// FUNCTION 1450f4ee0 FUN_1450f4ee0 body=155 status=ok
// SIG undefined FUN_1450f4ee0(void)

undefined8 * FUN_1450f4ee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_145389140();
  *param_1 = &PTR_FUN_149c29ee0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_145351c40(param_1 + 0x14);
  *(uint *)((longlong)param_1 + 0xdc) = *(uint *)((longlong)param_1 + 0xdc) & 0xfffffff8;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xe0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x16] = param_3;
  return param_1;
}



// FUNCTION 1450f4f80 FUN_1450f4f80 body=1057 status=ok
// SIG undefined FUN_1450f4f80(void)

ulonglong FUN_1450f4f80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  void *_Dst;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint local_res8 [2];
  void *local_res20;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58 [2];
  void *local_50;
  undefined4 local_48 [4];
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  plVar1 = (longlong *)(lVar2 + 0x18);
  *(byte *)(param_1 + 0x20) =
       *(byte *)(param_1 + 0x20) ^ (*(byte *)(lVar2 + 0x315) >> 4 ^ *(byte *)(param_1 + 0x20)) & 2;
  if ((*(byte *)(lVar2 + 0x220) & 1) == 0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
  }
  else {
    (**(code **)(*plVar1 + 0x70))(plVar1);
    if ((*(byte *)(lVar2 + 0x220) & 0x10) != 0) {
      (**(code **)(*plVar1 + 0x78))(plVar1);
    }
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = *(longlong *)(lVar2 + 0x2a0);
    uStack_70 = (ulonglong)
                CONCAT12((char)(int)*(float *)(lVar2 + 800),*(undefined2 *)(lVar2 + 0x310));
    if ((((byte)*(undefined4 *)(local_78 + 0xc) & 0x7c) == 0xc) ||
       ((*(uint *)(*(longlong *)(lVar2 + 0x2a0) + 0xc) >> 1 & 1) != 0)) {
      local_68 = *(undefined8 *)(lVar2 + 0x348);
      uStack_60 = (ulonglong)*(uint *)(lVar2 + 0x350);
    }
    uVar5 = FUN_1453afa40(param_1 + 0x40,&local_78);
    if ((int)uVar5 != 1) {
      return uVar5;
    }
  }
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar5 = 0;
    local_58[0] = 0;
    local_50 = (void *)0x0;
    local_res20 = (void *)0x0;
    local_res8[0] = 0;
    iVar3 = FUN_1453b0030(param_1 + 0x40,&local_res20,local_res8);
    uVar10 = local_res8[0];
    pvVar6 = local_res20;
    while (iVar3 != 0x2e) {
      if ((iVar3 != 0x2d) && (iVar3 != 0x11)) {
        return 2;
      }
      local_res8[0] = uVar10;
      local_res20 = pvVar6;
      if (*(void **)(param_1 + 200) != (void *)0x0) {
        uVar5 = (ulonglong)*(uint *)(param_1 + 0xc0);
        uVar10 = uVar10 + *(uint *)(param_1 + 0xc0);
        pvVar6 = AK::MemoryMgr::Realloc(5,*(void **)(param_1 + 200),(ulonglong)uVar10);
        *(void **)(param_1 + 200) = pvVar6;
        if (pvVar6 == (void *)0x0) {
          return 0x34;
        }
        memcpy((void *)((longlong)pvVar6 + uVar5),local_res20,(ulonglong)local_res8[0]);
        pvVar6 = *(void **)(param_1 + 200);
        *(uint *)(param_1 + 0xc0) = uVar10;
      }
      local_58[0] = 0;
      local_48[0] = 0;
      uVar7 = FUN_1450731d0(pvVar6,uVar10,&local_78,param_1 + 0xa0,&uStack_60,
                            (longlong)&uStack_60 + 4,&local_68,(longlong)&local_68 + 4,local_58,
                            local_48,0);
      if ((int)uVar7 == 1) {
        if (((*(byte *)(param_1 + 0x82) & 2) == 0) && ((*(byte *)(param_1 + 0x82) & 0x38) == 0)) {
          bVar9 = 0;
        }
        else {
          bVar9 = 1;
        }
        *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfe | bVar9;
        if ((uStack_60._4_4_ != 0) && (uStack_60._4_4_ <= (uint)uStack_60)) {
          return 7;
        }
        *(undefined4 *)(param_1 + 0x88) = 0;
        if (local_58[0] != 0) {
          if (bVar9 == 0) {
            pvVar6 = AK::MemoryMgr::Malloc(5,(ulonglong)local_58[0]);
            *(void **)(param_1 + 0x10) = pvVar6;
            if (pvVar6 == (void *)0x0) {
              return 0x34;
            }
            memcpy(pvVar6,local_50,(ulonglong)local_58[0]);
          }
          else {
            *(void **)(param_1 + 0x10) = local_50;
          }
        }
        uVar7 = FUN_1450f5d20(param_1,&local_78);
        if ((int)uVar7 != 1) {
          return uVar7;
        }
        if (*(void **)(param_1 + 200) != (void *)0x0) {
          AK::MemoryMgr::Free(5,*(void **)(param_1 + 200));
          *(undefined8 *)(param_1 + 200) = 0;
          *(undefined4 *)(param_1 + 0xc0) = 0;
        }
        uVar7 = FUN_1453b00e0(param_1 + 0x40,local_res20,local_res8[0]);
        if ((int)uVar7 != 1) {
          return uVar7;
        }
        uVar10 = local_68._4_4_ - (int)uVar5;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - uVar10;
        *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + (ulonglong)uVar10;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar10;
        goto LAB_1450f5311;
      }
      if ((int)uVar7 != 8) {
        return uVar7;
      }
      if (*(longlong *)(param_1 + 200) == 0) {
        _Dst = AK::MemoryMgr::Malloc(5,(ulonglong)uVar10);
        *(void **)(param_1 + 200) = _Dst;
        if (_Dst == (void *)0x0) {
          return 0x34;
        }
        *(uint *)(param_1 + 0xc0) = uVar10;
        memcpy(_Dst,pvVar6,(ulonglong)uVar10);
      }
      if ((*(byte *)(param_1 + 0x82) & 0x38) == 0x10) {
        *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | 0x18;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x88))();
      }
      FUN_145351d30(param_1 + 0xa0);
      iVar3 = FUN_1453b0030(param_1 + 0x40,&local_res20,local_res8);
      uVar10 = local_res8[0];
      pvVar6 = local_res20;
    }
    uVar5 = 0x3f;
  }
  else {
LAB_1450f5311:
    puVar8 = (uint *)(**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))
                               (*(longlong **)(param_1 + 0xb8),local_res8,param_1 + 0x40);
    uVar5 = (ulonglong)*puVar8;
    if (*puVar8 == 1) {
      FUN_1450f5f40(param_1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x315) & 0x40) == 0) {
        uVar5 = 1;
      }
      else {
        FUN_1450f6020(param_1,&local_res20,local_res8);
        uVar4 = FUN_1450f6150(param_1,(ulonglong)local_res20 & 0xffffffff,(undefined2)local_res8[0])
        ;
        uVar10 = 1;
        if (uVar4 != 1) {
          uVar10 = uVar4;
        }
        uVar5 = (ulonglong)uVar10;
      }
    }
  }
  return uVar5;
}



// FUNCTION 1450f53b0 FUN_1450f53b0 body=181 status=ok
// SIG undefined FUN_1450f53b0(void)

void FUN_1450f53b0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
    puVar1 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if ((*(void **)(param_1 + 0x10) != (void *)0x0) && ((*(byte *)(param_1 + 0xe0) & 1) == 0)) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(void **)(param_1 + 200) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_145351d30(param_1 + 0xa0);
  FUN_1453afc90(param_1 + 0x40);
  return;
}



// FUNCTION 1450f5470 FUN_1450f5470 body=497 status=ok
// SIG undefined FUN_1450f5470(void)

void FUN_1450f5470(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  ushort local_20;
  
  if ((*(byte *)(param_1 + 0xe0) & 8) != 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 2;
    *(undefined2 *)((longlong)param_2 + 0x12) = 0;
    *(undefined4 *)(param_2 + 6) = 2;
    return;
  }
  FUN_1450f5f40();
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(char *)(param_1 + 0x48) = (char)(int)*(float *)(lVar1 + 800);
  local_40 = *(undefined4 *)(lVar1 + 0x2b8);
  local_48 = *(undefined8 *)(lVar1 + 0x2b0);
  local_30 = (undefined4)((ulonglong)local_48 >> 0x20);
  local_2c = 0x2b;
  local_38 = 0;
  local_20 = 0;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))
                     (*(longlong **)(param_1 + 0xb8),local_res8,param_1 + 0x40,
                      *(undefined2 *)(param_2 + 2),&local_38);
  iVar6 = (int)*puVar4;
  if (iVar6 != 2) {
    if (local_2c._6_2_ == 0) {
      *(int *)(param_2 + 6) = iVar6;
      *(undefined2 *)((longlong)param_2 + 0x12) = 0;
      return;
    }
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfd;
    *param_2 = local_38;
    *(ushort *)((longlong)param_2 + 0x12) = local_2c._6_2_;
    *(undefined2 *)(param_2 + 2) = local_2c._4_2_;
    puVar4 = (undefined8 *)
             FUN_1453b02c0(&local_48,param_1 + 0x28,*(undefined4 *)((longlong)param_2 + 0x24));
    uVar8 = (uint)local_20;
    uVar2 = puVar4[1];
    param_2[4] = *puVar4;
    param_2[5] = uVar2;
    if (local_20 == 0) {
      *(int *)(param_2 + 6) = iVar6;
    }
    else {
      if ((*(byte *)(param_1 + 0xd4) & 4) != 0) {
        *(float *)((longlong)param_2 + 0x24) = (float)local_20 / (float)local_2c._6_2_;
      }
      do {
        if (*(short *)(param_1 + 0x3c) == 1) {
          uVar5 = *(uint *)(param_1 + 0x30);
        }
        else {
          uVar5 = *(int *)(param_1 + 0x38) + 1;
        }
        iVar6 = *(int *)(param_1 + 0x2c);
        uVar7 = uVar5 - iVar6;
        if (iVar6 + uVar8 <= uVar5) {
          uVar7 = uVar8;
        }
        if (uVar7 == 0) {
          return;
        }
        FUN_145351e60(param_1 + 0xa0,*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2a8) + 0x108,
                      *(longlong *)(param_1 + 0x18),param_2,iVar6,uVar7);
        local_res8[0] = 0;
        uVar3 = FUN_1453b02e0(param_1 + 0x28,uVar7,local_res8);
        *(undefined4 *)(param_2 + 6) = uVar3;
        uVar8 = uVar8 - uVar7;
      } while (uVar8 != 0);
    }
    return;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 2;
  *(undefined4 *)(param_2 + 6) = 2;
  *(undefined2 *)((longlong)param_2 + 0x12) = 0;
  return;
}



// FUNCTION 1450f5690 FUN_1450f5690 body=155 status=ok
// SIG undefined FUN_1450f5690(void)

void FUN_1450f5690(longlong param_1,undefined1 param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 local_res8;
  int local_resc;
  int local_res18 [4];
  
  bVar1 = *(byte *)(param_1 + 0xe0);
  *(byte *)(param_1 + 0xe0) = bVar1 & 0xef;
  if (((bVar1 & 6) == 0) && (plVar2 = *(longlong **)(param_1 + 0xb8), plVar2 != (longlong *)0x0)) {
    local_res8 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa4);
    local_resc = (*(int *)(*(longlong *)(param_1 + 0x18) + 0x318) << 0x1d) >> 0x1d;
    (**(code **)(*plVar2 + 0x20))
              (plVar2,local_res18,param_1 + 0x40,param_1 + 0x28,&local_res8,param_2);
    if ((local_res18[0] == 2) || (local_res18[0] == 0x34)) {
      *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) | 8;
    }
    else if (local_res18[0] == 0x11) {
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 4;
      return;
    }
  }
  return;
}



// FUNCTION 1450f5730 FUN_1450f5730 body=202 status=ok
// SIG undefined FUN_1450f5730(void)

ulonglong FUN_1450f5730(longlong param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong local_28 [2];
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  puVar3 = (ulonglong *)FUN_1453b0370(&local_18,param_1 + 0x90,*param_2,param_1 + 0x28);
  uVar1 = *puVar3;
  *param_2 = (int)puVar3[1];
  local_28[0] = uVar1;
  FUN_145351f70(param_1 + 0xa0,*(undefined8 *)(param_1 + 0x18),iVar2,(int)(uVar1 >> 0x20) + iVar2);
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + 8) & 0x100000) != 0) {
    lVar4 = FUN_1453b02c0(local_28,param_1 + 0x28,0x3f800000);
    uStack_14 = *(undefined4 *)(lVar4 + 4);
    uStack_10 = *(undefined4 *)(lVar4 + 8);
    uStack_c = *(undefined4 *)(lVar4 + 0xc);
    local_18 = iVar2;
    FUN_1450c8f80(DAT_14c791050,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x280),&local_18,
                  param_1);
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 1450f5800 FUN_1450f5800 body=160 status=ok
// SIG undefined FUN_1450f5800(void)

void FUN_1450f5800(longlong param_1,uint param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x68))();
  if (param_2 < 2) {
    if (*(int *)(param_1 + 0x60) != 0) {
      if ((*(byte *)(param_1 + 0x82) & 0x38) == 0x10) {
        *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | 0x18;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x88))();
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x38))();
    *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) | 2;
  }
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) | 4;
  FUN_1453b0340(param_1 + 0x90,param_1 + 0x28,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x2b0)
               );
  FUN_1450f5f40(param_1);
  return;
}



// FUNCTION 1450f58a0 FUN_1450f58a0 body=246 status=ok
// SIG undefined FUN_1450f58a0(void)

void FUN_1450f58a0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_res8 [2];
  undefined2 local_res10 [8];
  undefined1 local_res20 [8];
  
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfb;
  if (param_2 == 2) {
    *(byte *)(param_1 + 0x20) =
         *(byte *)(param_1 + 0x20) ^
         (*(byte *)(*(longlong *)(param_1 + 0x18) + 0x315) >> 4 ^ *(byte *)(param_1 + 0x20)) & 2;
                    /* WARNING: Could not recover jumptable at 0x0001450f58d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))();
    return;
  }
  local_res8[0] = 0;
  local_res10[0] = 0;
  if (param_2 == 1) {
    if (param_3 == '\0') {
      local_res8[0] = *(undefined4 *)(param_1 + 0x2c);
      local_res10[0] = *(undefined2 *)(param_1 + 0x3c);
    }
    else {
      FUN_1450f6020(param_1,local_res8,local_res10);
    }
  }
  else if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      local_res10[0] = 1;
    }
    else {
      local_res10[0] = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x310);
    }
  }
  piVar2 = (int *)(**(code **)(**(longlong **)(param_1 + 0xb8) + 0x40))
                            (*(longlong **)(param_1 + 0xb8),local_res20);
  if (*piVar2 == 1) {
    *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfd;
    iVar1 = FUN_1450f6150(param_1,local_res8[0],local_res10[0]);
    if ((iVar1 == 1) || (iVar1 = FUN_1450f6150(param_1,0,local_res10[0]), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001450f598c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))();
      return;
    }
  }
  return;
}



// FUNCTION 1450f59c0 FUN_1450f59c0 body=73 status=ok
// SIG undefined FUN_1450f59c0(void)

undefined8 FUN_1450f59c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1453afda0(param_1 + 0x40);
  if ((int)uVar1 == 1) {
    *(ushort *)(param_1 + 0x3c) = ((*(byte *)(param_1 + 0x82) & 4) != 0) + 1;
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x58))
              (*(longlong **)(param_1 + 0xb8),param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1450f5a10 FUN_1450f5a10 body=118 status=ok
// SIG undefined FUN_1450f5a10(void)

ulonglong FUN_1450f5a10(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  uVar1 = FUN_1453890b0();
  local_28 = *(undefined4 *)(param_1 + 0x2c);
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + 8) & 0x100000) != 0) {
    lVar2 = FUN_1453b02c0(local_18,param_1 + 0x28,0);
    uStack_24 = *(undefined4 *)(lVar2 + 4);
    uStack_20 = *(undefined4 *)(lVar2 + 8);
    uStack_1c = *(undefined4 *)(lVar2 + 0xc);
    FUN_1450c8f80(DAT_14c791050,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x280),&local_28,
                  param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1450f5a90 FUN_1450f5a90 body=48 status=ok
// SIG undefined FUN_1450f5a90(void)

void FUN_1450f5a90(undefined8 param_1)

{
  undefined2 local_res10 [4];
  undefined4 local_res18 [4];
  
  FUN_1450f6020(param_1,local_res18,local_res10);
  FUN_1450f6150(param_1,local_res18[0],local_res10[0]);
  return;
}



// FUNCTION 1450f5ba0 FUN_1450f5ba0 body=40 status=ok
// SIG undefined FUN_1450f5ba0(void)

undefined1 FUN_1450f5ba0(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0xd4) & 2) != 0) {
    cVar1 = FUN_1453aff60(param_1 + 0x40);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450f5c40 FUN_1450f5c40 body=209 status=ok
// SIG undefined FUN_1450f5c40(void)

undefined4 FUN_1450f5c40(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined1 local_res10 [8];
  
  if (param_2 == (longlong *)0x0) {
    return 0x1f;
  }
  uVar3 = *(ushort *)(param_1 + 0xd4) & 0xc;
  cVar1 = (**(code **)(*param_2 + 0xa8))(param_2);
  if ((uVar3 == 0xc) == (bool)cVar1) {
    if ((uVar3 != 0xc) || ((*(byte *)(param_1 + 0xe0) & 2) != 0)) {
      return 1;
    }
    if ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2a0) + 0x18) ==
         *(int *)(*(longlong *)(param_2[3] + 0x2a0) + 0x18)) && (param_2[0x17] != 0)) {
      puVar2 = (undefined4 *)
               (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x60))
                         (*(longlong **)(param_1 + 0xb8),local_res10);
      return *puVar2;
    }
  }
  return 4;
}



// FUNCTION 1450f5d20 FUN_1450f5d20 body=537 status=ok
// SIG undefined FUN_1450f5d20(void)

int FUN_1450f5d20(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_58;
  int local_54;
  undefined2 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar3 = (**(code **)(param_1 + 0xb0))(param_2);
  *(longlong *)(param_1 + 0xb8) = lVar3;
  if (lVar3 == 0) {
    iVar2 = 0x34;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x18);
    local_58 = *(undefined4 *)(lVar3 + 0xa4);
    local_54 = (*(int *)(lVar3 + 0x318) << 0x1d) >> 0x1d;
    local_50 = *(undefined2 *)(lVar3 + 0x310);
    local_40 = 0;
    local_18 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_48 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))
              (*(longlong **)(param_1 + 0x40),(longlong)&local_28 + 4);
    piVar4 = (int *)(**(code **)(**(longlong **)(param_1 + 0xb8) + 8))
                              (*(longlong **)(param_1 + 0xb8),local_res8,param_2,&local_40,&local_58
                              );
    iVar2 = *piVar4;
    if (iVar2 == 1) {
      if ((((uStack_30._4_4_ == 0) ||
           (uVar1 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14), uVar1 < (uint)uStack_20))
          || (uVar1 < uStack_20._4_4_)) || ((local_28._4_4_ == 0.0 || ((int)uStack_30 == 0)))) {
        iVar2 = 7;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x18);
        *(undefined8 *)(lVar3 + 0x2b0) = local_40;
        *(undefined4 *)(lVar3 + 0x2b8) = (undefined4)local_38;
        if (*(int *)(param_2 + 0x1c) == 0) {
          *(int *)(param_2 + 0x1c) = uStack_30._4_4_ + -1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))
                  (*(longlong **)(param_1 + 0x40),(longlong)&local_28 + 4);
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))
                  (*(longlong **)(param_1 + 0x40),local_28 & 0xffffffff);
        *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x10);
        *(uint *)(param_1 + 0x78) = (uint)uStack_20;
        *(uint *)(param_1 + 0x7c) = uStack_20._4_4_;
        *(undefined2 *)(param_1 + 0x80) = local_50;
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))
                  (*(longlong **)(param_1 + 0x40),local_68);
        if (*(short *)(param_1 + 0x80) == 1) {
          local_64 = 0;
        }
        else {
          local_64 = *(undefined8 *)(param_1 + 0x78);
        }
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))
                  (*(longlong **)(param_1 + 0x40),local_68);
        FUN_1453b0240(param_1 + 0x28,param_2,&local_40,local_50);
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x14);
        *(undefined2 *)(param_1 + 0xd4) = local_18._4_2_;
        *(uint *)(param_1 + 0xdc) = local_38._4_4_ & 7 | *(uint *)(param_1 + 0xdc) & 0xfffffff8;
        if ((local_18 & 0x1000000000) == 0) {
          *(uint *)(param_1 + 0xd8) = (byte)(local_18 >> 0x20) & 1;
          iVar2 = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0xd8) = 2;
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}



// FUNCTION 1450f5f40 FUN_1450f5f40 body=224 status=ok
// SIG undefined FUN_1450f5f40(void)

void FUN_1450f5f40(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  float local_28 [4];
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + 8) & 0x400000) != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    plVar2 = *(longlong **)(param_1 + 0x40);
    iVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,local_res8);
    local_res10 = 0;
    if (iVar3 == 2) {
      local_res14 = 2;
    }
    else {
      (**(code **)(*plVar2 + 0x20))(plVar2,local_28);
      local_res10 = (undefined4)(longlong)((float)(uint)(local_res8[0] + iVar1) / local_28[0]);
      if ((iVar3 == 0x11) ||
         (uVar4 = (**(code **)(*plVar2 + 0x58))(plVar2), uVar4 <= (uint)(local_res8[0] + iVar1))) {
        local_res14 = 0x11;
      }
      else {
        local_res14 = 1;
      }
    }
    FUN_1450c93d0(DAT_14c791050,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x280),param_1,
                  &local_res10);
    return;
  }
  return;
}



// FUNCTION 1450f6020 FUN_1450f6020 body=291 status=ok
// SIG undefined FUN_1450f6020(void)

void FUN_1450f6020(longlong param_1,undefined4 *param_2,undefined2 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  float fVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar3 + 0x315) < '\0') {
    if (*(short *)(lVar3 + 0x310) == 0) {
      fVar4 = ((float)*(uint *)(param_1 + 0x30) * 1000.0) / (float)*(uint *)(param_1 + 0x28);
    }
    else {
      fVar4 = (float)FUN_1453b0270(param_1 + 0x28);
    }
    lVar3 = *(longlong *)(param_1 + 0x18);
    uVar2 = (undefined4)
            (longlong)(fVar4 * *(float *)(lVar3 + 0x30c) * (float)*(uint *)(param_1 + 0x28) * 0.001)
    ;
  }
  else {
    uVar2 = (undefined4)
            (((ulonglong)*(uint *)(lVar3 + 0x30c) * (ulonglong)*(uint *)(param_1 + 0x28)) /
            (ulonglong)DAT_14c72f42c);
  }
  bVar1 = *(byte *)(lVar3 + 0x316);
  FUN_1453b05a0(uVar2,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                *(undefined2 *)(lVar3 + 0x310),param_2,param_3);
  if ((bVar1 & 1) != 0) {
    lVar3 = FUN_145352000(param_1 + 0xa0,*param_2);
    if (lVar3 != 0) {
      uVar2 = *(undefined4 *)(lVar3 + 4);
      *param_2 = uVar2;
      FUN_1453b05a0(uVar2,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),*param_3,
                    param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1450f6150 FUN_1450f6150 body=378 status=ok
// SIG undefined FUN_1450f6150(void)

undefined8 FUN_1450f6150(longlong param_1,uint param_2,short param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_res8 [8];
  int local_18 [2];
  int local_10;
  
  if ((param_2 < *(uint *)(param_1 + 0x30)) &&
     (piVar2 = (int *)(**(code **)(**(longlong **)(param_1 + 0xb8) + 0x48))
                                (*(longlong **)(param_1 + 0xb8),local_res8,param_2,local_18),
     *piVar2 == 1)) {
    uVar3 = FUN_1453afe30(param_1 + 0x40,local_10 + *(int *)(param_1 + 0xd0),param_3);
    if ((int)uVar3 == 1) {
      if ((*(byte *)(param_1 + 0x82) & 0x38) == 0x10) {
        *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | 0x18;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x88))();
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    else if ((int)uVar3 != 3) {
      return uVar3;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(byte *)(param_1 + 0x20) =
         *(byte *)(param_1 + 0x20) ^ (*(byte *)(lVar1 + 0x315) >> 4 ^ *(byte *)(param_1 + 0x20)) & 2
    ;
    *(byte *)(lVar1 + 0x315) = *(byte *)(lVar1 + 0x315) & 0x3f;
    *(byte *)(lVar1 + 0x316) = *(byte *)(lVar1 + 0x316) & 0xfe;
    *(uint *)(lVar1 + 0x30c) = param_2 - local_18[0];
    *(int *)(param_1 + 0x2c) = local_18[0];
    *(short *)(param_1 + 0x3c) = param_3;
    if ((*(byte *)(param_1 + 0xe0) & 2) == 0) {
      if (param_3 == 1) {
        iVar4 = *(int *)(param_1 + 0x30);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x38) + 1;
      }
      piVar2 = (int *)(**(code **)(**(longlong **)(param_1 + 0xb8) + 0x50))
                                (*(longlong **)(param_1 + 0xb8),local_res8,param_1 + 0x40,local_18,
                                 iVar4 - local_18[0],param_3);
      if (*piVar2 != 1) goto LAB_1450f62b0;
      if ((*(byte *)(param_1 + 0xd4) & 0x11) == 1) {
        *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) | 0x10;
      }
    }
    if ((*(byte *)(param_1 + 0xe0) & 4) != 0) {
      FUN_1453b0340(param_1 + 0x90,param_1 + 0x28,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x2b0));
    }
    uVar3 = 1;
  }
  else {
LAB_1450f62b0:
    uVar3 = 2;
  }
  return uVar3;
}



// FUNCTION 1450f62d0 FUN_1450f62d0 body=69 status=ok
// SIG undefined FUN_1450f62d0(void)

undefined8 * FUN_1450f62d0(undefined8 *param_1,ulonglong param_2)

{
  FUN_145351c50(param_1 + 0x14);
  *param_1 = &PTR_FUN_149c277e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1450f6320 FUN_1450f6320 body=43 status=ok
// SIG undefined FUN_1450f6320(void)

undefined8 * FUN_1450f6320(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c29fe8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450f6350 FUN_1450f6350 body=169 status=ok
// SIG undefined FUN_1450f6350(void)

undefined8 * FUN_1450f6350(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(5,0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2a050;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x94) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x9c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xac) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined1 *)(puVar1 + 0xd) = 0;
    *(uint *)(puVar1 + 0xd) = *(uint *)(puVar1 + 0xd) & 0xff;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 1;
    *(undefined1 *)((longlong)puVar1 + 0xda) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1450f6400 FUN_1450f6400 body=407 status=ok
// SIG undefined FUN_1450f6400(void)

undefined8 *
FUN_1450f6400(longlong param_1,undefined8 *param_2,int *param_3,undefined4 *param_4,longlong param_5
             )

{
  ushort uVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  
  psVar3 = *(short **)(param_3 + 2);
  if ((*psVar3 == -1) && (*param_3 == 0x42)) {
    uVar2 = *(undefined4 *)(psVar3 + 10);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    uVar1 = psVar3[1];
    *param_4 = *(undefined4 *)(psVar3 + 2);
    param_4[1] = uVar2;
    uVar5 = param_4[2] & 0xffffffe0 | 0x20;
    param_4[2] = (((uint)uVar1 << 8 ^ uVar5) & 0xffc0 ^ uVar5) & 0xfffdffff | 0x50000;
    param_4[4] = *(undefined4 *)(psVar3 + 2);
    uVar2 = *(undefined4 *)(psVar3 + 0xc);
    *(undefined4 *)(param_1 + 0xd4) = uVar2;
    param_4[5] = uVar2;
    uVar4 = *(undefined8 *)(psVar3 + 0x12);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(psVar3 + 0xe);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    uVar4 = *(undefined8 *)(psVar3 + 0x1a);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(psVar3 + 0x16);
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(psVar3 + 0x1e);
    *(short *)(param_1 + 0x9c) = psVar3[0x20];
    *(short *)(param_1 + 0x8c) = *(short *)(param_1 + 0x8c) + 8;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(psVar3 + 2);
    *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(param_5 + 8);
    if (*(short *)(param_5 + 8) == 1) {
      param_4[8] = *(int *)(param_1 + 0x88) + param_3[5];
      iVar6 = param_3[4];
    }
    else {
      param_4[8] = param_3[5] + *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x78);
      iVar6 = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x84);
    }
    param_4[9] = iVar6 + param_3[5];
    uVar5 = *(uint *)(psVar3 + 4);
    param_4[6] = 1;
    param_4[7] = (float)uVar5 * 0.001;
    if (*(uint *)(param_1 + 0x84) != 0) {
      pvVar7 = AK::MemoryMgr::Malloc(5,(ulonglong)*(uint *)(param_1 + 0x84));
      *(void **)(param_1 + 0xa8) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        *param_2 = 0x34;
        return param_2;
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
    *param_2 = 1;
    return param_2;
  }
  *param_2 = 7;
  return param_2;
}



// FUNCTION 1450f65a0 FUN_1450f65a0 body=177 status=ok
// SIG undefined FUN_1450f65a0(void)

void FUN_1450f65a0(longlong param_1)

{
  if (2 < *(int *)(param_1 + 0x10)) {
    FUN_1453aebf0(param_1 + 0x18);
  }
  if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if ((*(char *)(param_1 + 0xda) != '\0') && (*(void **)(param_1 + 0xb8) != (void *)0x0)) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0xda) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(void **)(param_1 + 200) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1453af780(&DAT_14c7fdfa0,param_1 + 8);
  }
  return;
}



// FUNCTION 1450f6660 FUN_1450f6660 body=582 status=ok
// SIG undefined FUN_1450f6660(void)

int * FUN_1450f6660(longlong param_1,int *param_2,undefined8 *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int local_res8 [2];
  ushort *local_38;
  uint local_30;
  undefined1 local_28;
  
  iVar5 = *(int *)(param_1 + 0x10);
  while (iVar5 < 3) {
    if (*(int *)(param_3 + 4) == 0) {
      bVar1 = *(byte *)((longlong)param_3 + 0x42);
      if ((bVar1 & 1) != 0) goto LAB_1450f6827;
      if ((bVar1 & 0x38) == 0x10) {
        *(byte *)((longlong)param_3 + 0x42) = bVar1 & 0xdf | 0x18;
      }
      else {
        (**(code **)(*(longlong *)*param_3 + 0x88))();
      }
      iVar5 = FUN_1453afcc0(param_3);
      if (iVar5 == 0x2e) {
LAB_1450f684a:
        param_2[0] = 0x3f;
        param_2[1] = 0;
        return param_2;
      }
      if (iVar5 != 0x2d) {
        *param_2 = iVar5;
        param_2[1] = 0;
        return param_2;
      }
    }
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 < 2) {
      uVar2 = *(uint *)(param_1 + 0xb0);
      if (uVar2 < *(uint *)(param_1 + 0x84)) {
        uVar8 = *(uint *)(param_1 + 0x84) - uVar2;
        uVar3 = *(uint *)(param_3 + 4);
        if (uVar8 <= *(uint *)(param_3 + 4)) {
          uVar3 = uVar8;
        }
        memcpy((void *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0xa8)),(void *)param_3[3],
               (ulonglong)uVar3);
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + uVar3;
        param_3[3] = param_3[3] + (ulonglong)uVar3;
        *(uint *)(param_3 + 4) = *(int *)(param_3 + 4) - uVar3;
        *(uint *)(param_3 + 5) = *(int *)(param_3 + 5) + uVar3;
        iVar5 = *(int *)(param_1 + 0x10);
      }
      if (*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0x84)) {
        *(undefined4 *)(param_1 + 0x10) = 2;
        iVar5 = 2;
      }
    }
    while (iVar5 == 2) {
      uVar6 = FUN_1450f6db0(param_1,param_3);
      if ((uint)uVar6 == 0x2e) goto LAB_1450f684a;
      if (((uint)uVar6 < 0x35) && ((0x10000000020004U >> (uVar6 & 0x3f) & 1) != 0))
      goto LAB_1450f6827;
      local_38 = *(ushort **)(param_1 + 0xb8) + 1;
      local_30 = (uint)**(ushort **)(param_1 + 0xb8);
      local_28 = 0;
      local_res8[0] = 0;
      lVar7 = FUN_1453af540(&DAT_14c7fdfa0,param_1 + 8,&local_38,local_res8);
      *(longlong *)(param_1 + 0x30) = lVar7;
      if (lVar7 == 0) {
        param_2[1] = local_res8[0];
        *param_2 = 2;
        return param_2;
      }
      *(undefined4 *)(param_1 + 0x10) = 3;
      if ((*(char *)(param_1 + 0xda) != '\0') && (*(void **)(param_1 + 0xb8) != (void *)0x0)) {
        AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xb8));
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined1 *)(param_1 + 0xda) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
      iVar5 = *(int *)(param_1 + 0x10);
    }
  }
  iVar5 = FUN_1453aeaf0(param_1 + 0x18,*(undefined1 *)(param_1 + 0x68));
  if (iVar5 == 0) {
    if (*(short *)(param_1 + 0xd8) == 1) {
      uVar4 = *(undefined2 *)(param_1 + 0x8e);
    }
    else {
      uVar4 = *(undefined2 *)(param_1 + 0x82);
    }
    FUN_1453aec50(param_1 + 0x18,0,uVar4);
    *(undefined4 *)(param_1 + 0x10) = 3;
    param_2[0] = 1;
    param_2[1] = 0;
  }
  else {
LAB_1450f6827:
    param_2[0] = 2;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1450f68c0 FUN_1450f68c0 body=630 status=ok
// SIG undefined FUN_1450f68c0(void)

int * FUN_1450f68c0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 local_res10;
  
  do {
    *(undefined4 *)(param_1 + 0xc) = 0x2e;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (((*(byte *)(param_3 + 0x42) & 4) == 0) || (*(int *)(param_3 + 0x20) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar3 = FUN_1450f6db0(param_1,param_3);
    if (iVar3 != 0x2d) {
      *param_2 = iVar3;
      param_2[1] = 0;
      goto LAB_1450f6aae;
    }
    if (bVar1) {
      uVar5 = *(ushort *)(param_1 + 0xd8);
      if (1 < uVar5) {
        uVar5 = uVar5 - 1;
      }
      *(ushort *)(param_1 + 0xd8) = uVar5;
      if (uVar5 == 1) {
        uVar2 = *(undefined2 *)(param_1 + 0x8e);
      }
      else {
        uVar2 = *(undefined2 *)(param_1 + 0x82);
      }
      FUN_1453aec50(param_1 + 0x18,*(undefined2 *)(param_1 + 0x80),uVar2);
      *(undefined4 *)(param_1 + 0x10) = 3;
    }
    iVar3 = **(ushort **)(param_1 + 0xb8) + 2;
    *(int *)(param_1 + 0x70) = iVar3;
    bVar4 = *(byte *)(param_3 + 0x42) & 5;
    *(bool *)(param_1 + 0x74) = bVar4 != 0;
    if (*(char *)(param_1 + 0xda) == '\0') {
      *(int *)(param_1 + 0x70) = *(int *)(param_3 + 0x20) + iVar3;
    }
    else if ((bVar4 == 0) || (*(int *)(param_3 + 0x20) != 0)) {
      *(undefined1 *)(param_1 + 0x74) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x74) = 1;
    }
    FUN_1453af0b0(param_1 + 8,*(undefined2 *)(param_1 + 0x8c),*(ushort **)(param_1 + 0xb8),
                  param_1 + 200,param_1 + 0xd0);
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 2) {
LAB_1450f6a3f:
      if (*(char *)(param_1 + 0xda) != '\0') goto LAB_1450f6a48;
    }
    else {
      if (*(char *)(param_1 + 0xda) == '\0') {
        if (*(int *)(param_1 + 0x14) != 0) {
          uVar6 = (*(int *)(param_1 + 0x14) - (uint)**(ushort **)(param_1 + 0xb8)) - 2;
          *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) - uVar6;
          *(longlong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x18) + (ulonglong)uVar6;
          *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + uVar6;
        }
        goto LAB_1450f6a3f;
      }
LAB_1450f6a48:
      if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
        AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xb8));
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined1 *)(param_1 + 0xda) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
    }
  } while ((*(int *)(param_1 + 0xc) == 0x2b) || (*(int *)(param_1 + 0xc) == 0x2e));
  *param_2 = iVar3;
  param_2[1] = 0;
  if (iVar3 == 0x2d) {
LAB_1450f6aba:
    uVar2 = *(undefined2 *)(param_1 + 8);
    *param_5 = *(undefined8 *)(param_1 + 200);
    *(undefined2 *)(param_5 + 2) = uVar2;
    *(undefined2 *)((longlong)param_5 + 0x12) = uVar2;
    *(undefined2 *)(param_5 + 3) = *(undefined2 *)(param_1 + 8);
    if (iVar3 != 0x2e) {
      return param_2;
    }
    if (*(longlong *)(param_3 + 0x18) == 0) {
      return param_2;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      local_res10 = 0x2d;
      goto LAB_1450f6b0e;
    }
  }
  else {
LAB_1450f6aae:
    if ((iVar3 == 0x2e) || (iVar3 == 0x11)) goto LAB_1450f6aba;
  }
  local_res10 = 0xd00000002;
LAB_1450f6b0e:
  *(undefined8 *)param_2 = local_res10;
  return param_2;
}



// FUNCTION 1450f6b50 FUN_1450f6b50 body=120 status=ok
// SIG undefined FUN_1450f6b50(void)

void FUN_1450f6b50(longlong param_1)

{
  FUN_1453aebf0(param_1 + 0x18);
  if ((*(char *)(param_1 + 0xda) != '\0') && (*(void **)(param_1 + 0xb8) != (void *)0x0)) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0xda) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(void **)(param_1 + 200) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1450f6bd0 FUN_1450f6bd0 body=60 status=ok
// SIG undefined FUN_1450f6bd0(void)

undefined4 * FUN_1450f6bd0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1453aeaf0(param_1 + 0x18,*(undefined4 *)(param_1 + 0x28));
  param_2[1] = 0;
  if (iVar1 == -1) {
    *param_2 = 2;
    return param_2;
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1450f6c10 FUN_1450f6c10 body=180 status=ok
// SIG undefined FUN_1450f6c10(void)

undefined8 * FUN_1450f6c10(longlong param_1,undefined8 *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  
  puVar5 = *(ushort **)(param_1 + 0xa8);
  uVar6 = 0;
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  else {
    iVar4 = 0;
    uVar3 = 0;
    uVar1 = *(uint *)(param_1 + 0x84);
    if (uVar1 >> 2 != 0) {
      do {
        uVar2 = *puVar5 + uVar6;
        if (param_3 < uVar2) break;
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + (uint)puVar5[1];
        puVar5 = puVar5 + 2;
        uVar6 = uVar2;
      } while (uVar3 < uVar1 >> 2);
      if (uVar3 != 0) {
        uVar1 = uVar1 + iVar4;
        goto LAB_1450f6c9e;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x88);
    uVar6 = 0;
  }
LAB_1450f6c9e:
  param_4[2] = uVar1;
  param_4[1] = param_3 - uVar6;
  *param_4 = param_3;
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1450f6cd0 FUN_1450f6cd0 body=169 status=ok
// SIG undefined FUN_1450f6cd0(void)

undefined8 *
FUN_1450f6cd0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,short param_6)

{
  undefined2 uVar1;
  
  if ((*(char *)(param_1 + 0xda) != '\0') && (*(void **)(param_1 + 0xb8) != (void *)0x0)) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0xda) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(short *)(param_1 + 0xd8) = param_6;
  if (param_6 == 1) {
    uVar1 = *(undefined2 *)(param_1 + 0x8e);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0x82);
  }
  FUN_1453aec50(param_1 + 0x18,*(undefined4 *)(param_4 + 4),uVar1);
  *(undefined4 *)(param_1 + 0x10) = 3;
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1450f6db0 FUN_1450f6db0 body=580 status=ok
// SIG undefined FUN_1450f6db0(void)

undefined8 FUN_1450f6db0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
LAB_1450f6dd1:
  do {
    if (*(int *)(param_2 + 4) == 0) {
      bVar1 = *(byte *)((longlong)param_2 + 0x42);
      if ((bVar1 & 1) != 0) {
        return 0x11;
      }
      if ((bVar1 & 0x38) == 0x10) {
        *(byte *)((longlong)param_2 + 0x42) = bVar1 & 0xdf | 0x18;
      }
      else {
        (**(code **)(*(longlong *)*param_2 + 0x88))();
      }
      uVar3 = FUN_1453afcc0(param_2);
      if ((int)uVar3 != 0x2d) {
        return uVar3;
      }
    }
    uVar2 = *(uint *)(param_1 + 0xc4);
    if (uVar2 < 2) {
      uVar6 = *(uint *)(param_2 + 4);
      if (uVar6 != 0) {
        uVar8 = 2 - uVar2;
        if ((ulonglong)uVar6 < 2 - (ulonglong)uVar2) {
          uVar8 = uVar6;
        }
        if (uVar8 == 2) {
          *(undefined8 *)(param_1 + 0xb8) = param_2[3];
          uVar9 = 2;
        }
        else {
          if (*(char *)(param_1 + 0xda) == '\0') {
            pvVar4 = AK::MemoryMgr::Malign(5,(ulonglong)*(ushort *)(param_1 + 0x8c) + 2,8);
            *(void **)(param_1 + 0xb8) = pvVar4;
            if (pvVar4 == (void *)0x0) {
              return 0x34;
            }
            *(undefined1 *)(param_1 + 0xda) = 1;
          }
          uVar9 = (ulonglong)uVar8;
          memcpy((void *)((ulonglong)*(uint *)(param_1 + 0xc4) + *(longlong *)(param_1 + 0xb8)),
                 (void *)param_2[3],(ulonglong)uVar8);
        }
        piVar7 = (int *)(param_1 + 0xc4);
        *piVar7 = *piVar7 + uVar8;
        param_2[3] = param_2[3] + uVar9;
        *(uint *)(param_2 + 4) = *(int *)(param_2 + 4) - uVar8;
        *(uint *)(param_2 + 5) = *(int *)(param_2 + 5) + uVar8;
        if (*piVar7 == 2) goto LAB_1450f6edb;
        goto LAB_1450f6dd1;
      }
    }
    else {
LAB_1450f6edb:
      if (((*(int *)(param_1 + 0xc0) == 0) &&
          (*(uint *)(param_2 + 4) < **(ushort **)(param_1 + 0xb8) + 8)) &&
         (*(char *)(param_1 + 0xda) == '\0')) {
        puVar5 = AK::MemoryMgr::Malign(5,(ulonglong)(**(ushort **)(param_1 + 0xb8) + 10),8);
        if (puVar5 == (undefined2 *)0x0) {
          return 0x34;
        }
        *puVar5 = **(undefined2 **)(param_1 + 0xb8);
        *(undefined2 **)(param_1 + 0xb8) = puVar5;
        *(undefined1 *)(param_1 + 0xda) = 1;
      }
      plVar10 = param_2 + 3;
      uVar2 = *(uint *)(param_1 + 0xc0);
      uVar6 = (uint)**(ushort **)(param_1 + 0xb8);
      if ((uVar2 < uVar6) && (uVar8 = *(uint *)(param_2 + 4), uVar8 != 0)) {
        uVar6 = uVar6 - uVar2;
        if (uVar6 <= uVar8) {
          uVar8 = uVar6;
        }
        if (*(char *)(param_1 + 0xda) != '\0') {
          memcpy((void *)((longlong)*(ushort **)(param_1 + 0xb8) + (ulonglong)uVar2 + 2),
                 (void *)*plVar10,(ulonglong)uVar8);
        }
        *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + uVar8;
        *plVar10 = *plVar10 + (ulonglong)uVar8;
        *(uint *)(param_2 + 4) = *(int *)(param_2 + 4) - uVar8;
        *(uint *)(param_2 + 5) = *(int *)(param_2 + 5) + uVar8;
      }
    }
    if ((*(int *)(param_1 + 0xc4) == 2) &&
       (*(uint *)(param_1 + 0xc0) == (uint)**(ushort **)(param_1 + 0xb8))) {
      *(int *)(param_1 + 0xc4) = 0;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      return 0x2d;
    }
  } while( true );
}



// FUNCTION 1450f7000 FUN_1450f7000 body=43 status=ok
// SIG undefined FUN_1450f7000(void)

undefined8 * FUN_1450f7000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c29fe8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1450f7030 FUN_1450f7030 body=180 status=ok
// SIG undefined FUN_1450f7030(void)

uint FUN_1450f7030(longlong param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    if ((*(byte *)(param_1 + 0x82) & 2) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
    }
    else {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
    }
    if ((*(byte *)(param_1 + 0x82) & 1) != 0) {
      return 0xffffff80;
    }
    iVar1 = FUN_1453b0bf0(param_1);
    if (iVar1 != 0x2d) {
      return 0xffffff80;
    }
  }
  if (*(void **)(param_1 + 0x60) == (void *)0x0) {
    return 0xffffff80;
  }
  uVar2 = *(uint *)(param_1 + 0x68);
  if (param_3 < *(uint *)(param_1 + 0x68)) {
    uVar2 = param_3;
  }
  memcpy(param_2,*(void **)(param_1 + 0x60),(longlong)(int)uVar2);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar2;
  *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (ulonglong)uVar2;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar2;
  return uVar2;
}



// FUNCTION 1450f7110 FUN_1450f7110 body=93 status=ok
// SIG undefined FUN_1450f7110(void)

ulonglong FUN_1450f7110(longlong *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int local_res8 [2];
  
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,local_res8);
  if ((int)uVar2 - 0x2dU < 2) {
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    uVar2 = (ulonglong)(((uint)(local_res8[0] + param_2) < uVar1) + 0x2d);
  }
  else if ((int)uVar2 == 0x11) {
    return 0x2d;
  }
  return uVar2;
}



// FUNCTION 1450f7170 FUN_1450f7170 body=224 status=ok
// SIG undefined FUN_1450f7170(void)

void FUN_1450f7170(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  float local_28 [4];
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + 8) & 0x400000) != 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    plVar2 = *(longlong **)(param_1 + 0x58);
    iVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,local_res8);
    local_res10 = 0;
    if (iVar3 == 2) {
      local_res14 = 2;
    }
    else {
      (**(code **)(*plVar2 + 0x20))(plVar2,local_28);
      local_res10 = (undefined4)(longlong)((float)(uint)(local_res8[0] + iVar1) / local_28[0]);
      if ((iVar3 == 0x11) ||
         (uVar4 = (**(code **)(*plVar2 + 0x58))(plVar2), uVar4 <= (uint)(local_res8[0] + iVar1))) {
        local_res14 = 0x11;
      }
      else {
        local_res14 = 1;
      }
    }
    FUN_1450c93d0(DAT_14c791050,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x280),param_1,
                  &local_res10);
    return;
  }
  return;
}



// FUNCTION 1450f7250 FUN_1450f7250 body=84 status=ok
// SIG undefined FUN_1450f7250(void)

int FUN_1450f7250(longlong param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (((*(byte *)(param_1 + 0x20) & 2) != 0) && (DAT_14c790ff5 == '\0')) {
    iVar1 = FUN_1450f7110(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x68));
    if (iVar1 == 0x2e) {
      iVar1 = 0x3f;
    }
    else if (iVar1 == 0x2d) {
      iVar1 = 1;
    }
  }
  FUN_1450f7170(param_1);
  return iVar1;
}



// FUNCTION 1450f72b0 FUN_1450f72b0 body=78 status=ok
// SIG undefined FUN_1450f72b0(void)

undefined8 * FUN_1450f72b0(undefined8 *param_1)

{
  FUN_1453b0800();
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *param_1 = &PTR_FUN_149c2a0d8;
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  return param_1;
}



// FUNCTION 1450f7300 FUN_1450f7300 body=1490 status=ok
// SIG undefined FUN_1450f7300(void)

void FUN_1450f7300(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined4 *local_48 [2];
  
  iVar5 = 0x2d;
  if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
    if (DAT_14c790ff5 == '\0') {
LAB_1450f7385:
      FUN_1450f7170(param_1);
      if (iVar5 != 0x2d) {
        *(int *)(param_2 + 6) = iVar5;
        return;
      }
      goto LAB_1450f7347;
    }
LAB_1450f737e:
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfd;
  }
  else {
    if (DAT_14c790ff5 != '\0') goto LAB_1450f737e;
    iVar5 = FUN_1450f7110(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x68));
    if (iVar5 != 0x2d) goto LAB_1450f7385;
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfd;
  }
  FUN_1450f7170(param_1);
LAB_1450f7347:
  if (*(int *)(param_1 + 0x90) != -1) {
    iVar5 = FUN_1450f8380(param_1);
    *(int *)(param_2 + 6) = iVar5;
    if ((*(int *)(param_1 + 0x68) == 0) || (iVar5 == 0x2e)) {
      *(undefined4 *)(param_2 + 6) = 0x2e;
      return;
    }
  }
  uVar19 = 0;
  local_48[0] = (undefined4 *)0x0;
  local_res18[0] = 0;
  uVar6 = FUN_1453b2780(*(undefined8 *)(param_1 + 0x88),local_48,local_res18);
  do {
    if (uVar6 == 0xffffff7f) {
LAB_1450f7467:
      *(undefined4 *)(param_2 + 6) = 2;
      return;
    }
    if (uVar6 == 0xffffff80) {
      bVar4 = *(byte *)(param_1 + 0x82);
      if (*(int *)(*(longlong *)(param_1 + 0x88) + 0x200) != 0) {
        *(byte *)(param_1 + 0x82) = bVar4 | 1;
        *(undefined2 *)((longlong)param_2 + 0x12) = 0;
        *(undefined4 *)(param_2 + 6) = 0x11;
        return;
      }
      if ((bVar4 & 2) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
      }
      else {
        *(byte *)(param_1 + 0x82) = bVar4 & 0xfd;
      }
      iVar5 = FUN_1453b0bf0(param_1);
      if (iVar5 != 0x2d) {
        *(int *)(param_2 + 6) = iVar5;
        return;
      }
    }
    else if (uVar6 != 0xfffffffd) {
      if (-1 < (int)uVar6) {
        if (uVar6 == 0) {
          *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) | 1;
          *(undefined2 *)((longlong)param_2 + 0x12) = 0;
          *(undefined4 *)(param_2 + 6) = 0x11;
          return;
        }
        uVar11 = *(uint *)(param_2 + 1) & 0xff;
        *(undefined4 *)(param_2 + 6) = 0x2d;
        if (uVar11 < 2) {
          *param_2 = (longlong)local_48[0];
          *(undefined2 *)(param_2 + 2) = (undefined2)local_res18[0];
          *(short *)((longlong)param_2 + 0x12) = (short)uVar6;
          *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1);
        }
        else {
          pvVar7 = *(void **)(param_1 + 0xa0);
          uVar11 = uVar11 * local_res18[0] * 4;
          if (pvVar7 == (void *)0x0) {
LAB_1450f7502:
            *(uint *)(param_1 + 0xa8) = uVar11;
            pvVar7 = AK::MemoryMgr::Malign(5,(ulonglong)uVar11,0x10);
            *(void **)(param_1 + 0xa0) = pvVar7;
            if (pvVar7 == (void *)0x0) {
              *(undefined4 *)(param_2 + 6) = 2;
              return;
            }
          }
          else if (uVar11 < *(uint *)(param_1 + 0xa8)) {
            AK::MemoryMgr::Free(5,pvVar7);
            goto LAB_1450f7502;
          }
          puVar1 = (uint *)(param_2 + 1);
          uVar11 = *puVar1;
          *param_2 = (longlong)pvVar7;
          *(short *)(param_2 + 2) = (short)local_res18[0];
          *puVar1 = uVar11;
          uVar21 = uVar6 & 0xffff;
          *(short *)((longlong)param_2 + 0x12) = (short)uVar6;
          uVar22 = uVar11 & 0xff;
          uVar16 = (ulonglong)uVar22;
          cVar3 = (char)uVar11;
          local_res20[0] = uVar22;
          if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x30) + 0x48) == 1) {
            if (cVar3 != '\0') {
              puVar14 = local_48[0];
              do {
                local_res20[0] = *puVar1;
                bVar4 = FUN_1450719a0(local_res20,uVar19 & 0xff);
                uVar11 = 0;
                puVar10 = (undefined4 *)
                          (*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)bVar4 * 4);
                puVar8 = puVar14;
                if (3 < uVar21) {
                  uVar11 = (uVar21 - 4 >> 2) + 1;
                  uVar16 = (ulonglong)uVar11;
                  uVar11 = uVar11 * 4;
                  do {
                    puVar12 = puVar8 + uVar22;
                    *puVar10 = *puVar8;
                    puVar13 = puVar12 + uVar22;
                    puVar10[1] = *puVar12;
                    puVar10[2] = *puVar13;
                    puVar8 = puVar13 + uVar22 + uVar22;
                    puVar10[3] = puVar13[uVar22];
                    puVar10 = puVar10 + 4;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                if (uVar11 < uVar21) {
                  uVar16 = (ulonglong)(uVar21 - uVar11);
                  do {
                    uVar2 = *puVar8;
                    puVar8 = puVar8 + uVar22;
                    *puVar10 = uVar2;
                    puVar10 = puVar10 + 1;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                uVar11 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar11;
                puVar14 = puVar14 + 1;
              } while (uVar11 < uVar22);
            }
          }
          else if ((uVar11 & 0xf00) == 0x100) {
            if (cVar3 != '\0') {
              puVar14 = local_48[0];
              do {
                uVar20 = (uint)uVar19;
                if ((uVar11 >> 0xc & 8) != 0) {
                  uVar17 = 0;
                  for (uVar9 = uVar11 >> 0xc & 7; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
                    uVar17 = uVar17 + 1;
                  }
                  if (uVar20 == uVar17) {
                    uVar19 = (ulonglong)((uVar11 & 0xff) - 1);
                  }
                  else if (uVar17 < uVar20) {
                    uVar19 = (ulonglong)(uVar20 - 1);
                  }
                }
                uVar9 = 0;
                puVar10 = (undefined4 *)(*param_2 + *(ushort *)(param_2 + 2) * uVar19 * 4);
                puVar8 = puVar14;
                if (3 < uVar21) {
                  uVar9 = (uVar21 - 4 >> 2) + 1;
                  uVar19 = (ulonglong)uVar9;
                  uVar9 = uVar9 * 4;
                  do {
                    puVar12 = puVar8 + uVar22;
                    *puVar10 = *puVar8;
                    puVar13 = puVar12 + uVar22;
                    puVar10[1] = *puVar12;
                    puVar10[2] = *puVar13;
                    puVar8 = puVar13 + uVar22 + uVar22;
                    puVar10[3] = puVar13[uVar22];
                    puVar10 = puVar10 + 4;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
                if (uVar9 < uVar21) {
                  uVar19 = (ulonglong)(uVar21 - uVar9);
                  do {
                    uVar2 = *puVar8;
                    puVar8 = puVar8 + uVar22;
                    *puVar10 = uVar2;
                    puVar10 = puVar10 + 1;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
                uVar19 = (ulonglong)(uVar20 + 1);
                puVar14 = puVar14 + 1;
              } while (uVar20 + 1 < uVar22);
            }
          }
          else {
            puVar14 = local_48[0];
            uVar15 = uVar16;
            uVar11 = local_res18[0];
            if (cVar3 != '\0') {
              do {
                uVar22 = 0;
                puVar10 = (undefined4 *)((longlong)pvVar7 + (uVar11 & 0xffff) * uVar19 * 4);
                puVar8 = puVar14;
                if (3 < uVar21) {
                  uVar22 = (uVar21 - 4 >> 2) + 1;
                  uVar18 = (ulonglong)uVar22;
                  uVar22 = uVar22 * 4;
                  do {
                    puVar12 = puVar8 + uVar16;
                    *puVar10 = *puVar8;
                    puVar13 = puVar12 + uVar16;
                    puVar10[1] = *puVar12;
                    puVar10[2] = *puVar13;
                    puVar8 = puVar13 + uVar16 + uVar16;
                    puVar10[3] = puVar13[uVar16];
                    puVar10 = puVar10 + 4;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                  uVar11 = (uint)*(ushort *)(param_2 + 2);
                  pvVar7 = (void *)*param_2;
                }
                if (uVar22 < uVar21) {
                  uVar18 = (ulonglong)(uVar21 - uVar22);
                  do {
                    uVar2 = *puVar8;
                    puVar8 = puVar8 + uVar16;
                    *puVar10 = uVar2;
                    puVar10 = puVar10 + 1;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                  uVar11 = (uint)*(ushort *)(param_2 + 2);
                  pvVar7 = (void *)*param_2;
                }
                uVar19 = uVar19 + 1;
                uVar15 = uVar15 - 1;
                puVar14 = puVar14 + 1;
              } while (uVar15 != 0);
            }
          }
        }
        if (*(short *)(param_1 + 0x54) != 1) {
          if (*(uint *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x2c) + uVar6) {
            uVar6 = (*(uint *)(param_1 + 0x3c) - *(int *)(param_1 + 0x2c)) + 1;
          }
        }
        FUN_1453ae780(param_1,*param_2,uVar6 & 0xffff,48000,(int)param_2[1],param_2);
        *(undefined2 *)(param_2 + 2) = (undefined2)local_res18[0];
        *(int *)(param_2 + 1) = (int)param_2[1];
        *(short *)((longlong)param_2 + 0x12) = (short)uVar6;
        return;
      }
      goto LAB_1450f7467;
    }
    local_48[0] = (undefined4 *)0x0;
    local_res18[0] = 0;
    uVar6 = FUN_1453b2780(*(undefined8 *)(param_1 + 0x88),local_48,local_res18);
  } while( true );
}



// FUNCTION 1450f78f0 FUN_1450f78f0 body=351 status=ok
// SIG undefined FUN_1450f78f0(void)

ulonglong FUN_1450f78f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined4 local_18;
  undefined8 local_14;
  
  if ((*(byte *)(param_1 + 0x82) & 4) != 0) {
    uVar6 = 1;
    if (((*(byte *)(param_1 + 0x20) & 2) != 0) && (DAT_14c790ff5 == '\0')) {
      uVar4 = FUN_1450f7110(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x68));
      if (uVar4 == 0x2e) {
        FUN_1450f7170(param_1);
        return 0x3f;
      }
      if (uVar4 == 0x2d) {
        uVar4 = 1;
      }
      uVar6 = (ulonglong)uVar4;
    }
    FUN_1450f7170(param_1);
    return uVar6;
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    local_14 = 0x800;
    local_18 = 0;
    uVar6 = FUN_1453b0de0(param_1,&local_18,0);
    if ((int)uVar6 != 1) {
      return uVar6;
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if ((*(uint *)(*(longlong *)(lVar2 + 0x2a0) + 0xc) >> 1 & 1) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x348);
      *(longlong *)(param_1 + 0x60) = lVar3;
      iVar1 = *(int *)(lVar2 + 0x350);
      *(int *)(param_1 + 0x68) = iVar1;
      if ((lVar3 == 0) || (iVar1 == 0)) {
        bVar5 = 0;
      }
      else {
        bVar5 = 8;
      }
      bVar5 = *(byte *)(param_1 + 0x82) & 0xf7 | bVar5;
      *(byte *)(param_1 + 0x82) = (bVar5 >> 2 ^ bVar5) & 2 ^ bVar5;
    }
  }
  if (((*(byte *)(param_1 + 0x82) & 8) != 0) ||
     (uVar6 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x60))(), (int)uVar6 == 1)) {
    uVar6 = FUN_1450f7f90(param_1);
    if (((int)uVar6 == 1) &&
       (((*(byte *)(param_1 + 0x82) & 8) == 0 ||
        (uVar6 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x60))(), (int)uVar6 == 1)))) {
      uVar6 = FUN_1450f7250(param_1);
    }
  }
  return uVar6;
}



// FUNCTION 1450f7a50 FUN_1450f7a50 body=93 status=ok
// SIG undefined FUN_1450f7a50(void)

void FUN_1450f7a50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1453b2380();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  FUN_1453b08e0(param_1);
  return;
}



// FUNCTION 1450f7ab0 FUN_1450f7ab0 body=108 status=ok
// SIG undefined FUN_1450f7ab0(void)

void FUN_1450f7ab0(longlong param_1,uint param_2)

{
  FUN_1453b09d0();
  if (param_2 < 2) {
    FUN_1453b2b60(*(undefined8 *)(param_1 + 0x88));
    FUN_1453b1610(*(longlong *)(param_1 + 0x88) + 0x58);
    if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xa0));
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}



// FUNCTION 1450f7b20 FUN_1450f7b20 body=39 status=ok
// SIG undefined FUN_1450f7b20(void)

void FUN_1450f7b20(longlong param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x98) = 0;
  iVar1 = FUN_1453b0a40();
  *(bool *)(param_1 + 0x98) = iVar1 != 1;
  return;
}



// FUNCTION 1450f7b60 FUN_1450f7b60 body=134 status=ok
// SIG undefined FUN_1450f7b60(void)

void FUN_1450f7b60(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x70);
  bVar3 = *(byte *)(param_1 + 0x82) & 0xf7 | param_3 << 3;
  uVar4 = *(int *)(param_1 + 0x68) + iVar1;
  *(byte *)(param_1 + 0x82) = bVar3;
  *(uint *)(param_1 + 0x70) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x74);
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar2;
  *(ulonglong *)(param_1 + 0x60) = param_2 + (ulonglong)uVar2;
  *(uint *)(param_1 + 0x6c) = iVar1 + uVar2;
  if ((uint)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30)) <= uVar4) {
    *(byte *)(param_1 + 0x82) = bVar3 | 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



// FUNCTION 1450f7bf0 FUN_1450f7bf0 body=700 status=ok
// SIG undefined FUN_1450f7bf0(void)

ulonglong FUN_1450f7bf0(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_res8 [2];
  float local_68;
  undefined4 uStack_64;
  uint local_60;
  undefined1 local_5b;
  int local_58 [2];
  undefined8 local_50;
  undefined1 local_48 [8];
  short *local_40;
  
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x88) == 0) {
    piVar1 = (int *)(param_1 + 0x3c);
    local_58[0] = 0;
    local_50 = 0;
    uVar9 = FUN_1450731d0(param_2,*(undefined4 *)(param_1 + 0x68),local_48,param_1 + 0x40,
                          (int *)(param_1 + 0x38),piVar1,(uint *)(param_1 + 0x30),
                          (uint *)(param_1 + 0x34),local_58,0,0);
    psVar7 = local_40;
    uVar11 = uVar9 & 0xffffffff;
    if ((int)uVar9 != 1) {
      return uVar9;
    }
    if (*local_40 != 0x3040) {
      return 7;
    }
    uStack_64 = *(undefined4 *)(local_40 + 10);
    uVar2 = local_40[1];
    local_68 = 6.72623e-41;
    lVar10 = *(longlong *)(param_1 + 0x18);
    *(ulonglong *)(lVar10 + 0x2b0) = CONCAT44(uStack_64,48000);
    *(uint *)(lVar10 + 0x2b8) = (uVar2 & 0xff) << 8 | local_60 & 0xfffd0020 | 0x50020;
    if (local_58[0] != 0) {
      FUN_1453b14f0(param_1,local_58);
    }
    iVar8 = *(int *)(psVar7 + 0xc);
    *(int *)(param_1 + 0x28) = iVar8;
    if ((*(int *)(param_1 + 0x38) == 0) && (*piVar1 == 0)) {
      *piVar1 = iVar8 + -1;
    }
    uVar3 = *(uint *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x94) = uVar3;
    uVar4 = *(uint *)(psVar7 + 0xe);
    uVar5 = *(uint *)(psVar7 + 0x10);
    uVar6 = *(uint *)(local_40 + 4);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar3;
    *(ulonglong *)(param_1 + 0x60) = (ulonglong)uVar3 + param_2;
    *(uint *)(param_1 + 0x6c) = uVar3;
    lVar10 = FUN_1453b2a30(param_1,&PTR_FUN_149c2a0b8,0,0,local_res8);
    *(longlong *)(param_1 + 0x88) = lVar10;
    if (lVar10 != 0) {
      *(ulonglong *)(*(longlong *)(lVar10 + 0x30) + 0x10) = (ulonglong)uVar4;
      *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x30) + 0x20) = (ulonglong)uVar5;
      *(ulonglong *)(*(longlong *)(param_1 + 0x88) + 0x50) = (ulonglong)*(uint *)(param_1 + 0x30);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                (*(longlong **)(param_1 + 0x58),&local_68);
      FUN_1453b1120(param_1,*(short *)(param_1 + 0x54) != 1,&local_68);
      local_5b = (undefined1)(int)*(float *)(*(longlong *)(param_1 + 0x18) + 800);
      local_68 = (float)uVar6 * 0.001;
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))(*(longlong **)(param_1 + 0x58),0x10000);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))
                (*(longlong **)(param_1 + 0x58),&local_68);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))(*(longlong **)(param_1 + 0x58),1);
    }
    if (local_res8[0] != -0x80) {
      if ((local_res8[0] == -0x85) || (local_res8[0] == -0x84)) {
        uVar11 = 7;
      }
      else if (local_res8[0] != 0) {
        uVar11 = 2;
      }
      if (*(longlong *)(param_1 + 0x88) != 0) {
        return uVar11;
      }
      return 2;
    }
  }
  else {
    *(longlong *)(param_1 + 0x60) = param_2;
    iVar8 = FUN_1453b2b00();
    if (iVar8 == 0) {
      return 1;
    }
    if (iVar8 != -0x80) {
      *(undefined8 *)(param_1 + 0x88) = 0;
      return 2;
    }
  }
  return 0x3f;
}



// FUNCTION 1450f7ec0 FUN_1450f7ec0 body=85 status=ok
// SIG undefined FUN_1450f7ec0(void)

undefined8 FUN_1450f7ec0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((*(short *)(param_1 + 0x54) != 1) && (param_2 == '\0')) {
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x38);
    FUN_1450f8380();
  }
  if (1 < *(ushort *)(param_1 + 0x54)) {
    *(ushort *)(param_1 + 0x54) = *(ushort *)(param_1 + 0x54) - 1;
  }
  uVar1 = 0x2d;
  if (param_2 != '\0') {
    uVar1 = 0x11;
  }
  return uVar1;
}



// FUNCTION 1450f7f20 FUN_1450f7f20 body=108 status=ok
// SIG undefined FUN_1450f7f20(void)

int FUN_1450f7f20(longlong param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    uVar1 = param_2;
  }
  *param_3 = uVar1;
  if (*(uint *)(param_1 + 0x28) <= param_2) {
    return 0x11;
  }
  *(uint *)(param_1 + 0x90) = uVar1;
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_1 + 0x54);
  if (*(char *)(param_1 + 0x98) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x60))();
    iVar2 = FUN_1450f8380(param_1);
    if (iVar2 == 0x2e) {
      iVar2 = 1;
    }
    return iVar2;
  }
  return 1;
}



// FUNCTION 1450f7f90 FUN_1450f7f90 body=360 status=ok
// SIG undefined FUN_1450f7f90(void)

int FUN_1450f7f90(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1[3] + 0x315);
  bVar2 = *(byte *)((longlong)param_1 + 0x82);
  *(byte *)((longlong)param_1 + 0x82) = bVar2 & 0xfe;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) ^ (bVar1 >> 4 ^ *(byte *)(param_1 + 4)) & 2;
  if ((bVar2 & 8) == 0) {
    do {
      iVar3 = (**(code **)(*(longlong *)param_1[0xb] + 0x80))
                        ((longlong *)param_1[0xb],param_1 + 0xc,param_1 + 0xd,DAT_14c790ff5);
      if (iVar3 == 0x2e) {
        return 0x3f;
      }
      if ((iVar3 != 0x2d) && (iVar3 != 0x11)) {
        return 2;
      }
      iVar3 = (**(code **)(*param_1 + 0x120))(param_1,param_1[0xc]);
      if (param_1[0xc] != 0) {
        (**(code **)(*param_1 + 0x130))(param_1,param_1[0xc],0);
      }
    } while (iVar3 == 0x3f);
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x120))(param_1,param_1[0xc]);
  }
  if (iVar3 == 1) {
    if (param_1[0x11] != 0) {
      *(undefined1 **)(param_1[0x11] + 8) = &LAB_1450f8410;
      *(undefined4 *)(param_1[0x11] + 0x28) = 1;
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
    if (((*(byte *)(param_1[3] + 0x315) & 0x40) == 0) ||
       (iVar4 = FUN_1453ae860(param_1), iVar4 == *(int *)((longlong)param_1 + 0x2c))) {
      if ((*(byte *)((longlong)param_1 + 0x82) & 8) != 0) {
        FUN_1453b1410(param_1,*(undefined4 *)((longlong)param_1 + 0x6c));
      }
    }
    else {
      iVar3 = FUN_1453b1140(param_1);
    }
    (**(code **)(*(longlong *)param_1[0xb] + 0x30))((longlong *)param_1[0xb],1);
    *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 4;
  }
  return iVar3;
}



// FUNCTION 1450f8100 FUN_1450f8100 body=626 status=ok
// SIG undefined FUN_1450f8100(void)

undefined8 FUN_1450f8100(longlong param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 local_res20;
  
  local_res20 = 0;
  iVar3 = (int)param_2;
  if (param_3 == 1) {
    if ((0 < (longlong)param_2) &&
       ((longlong)param_2 < (longlong)(ulonglong)*(uint *)(param_1 + 0x68))) {
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (param_2 & 0xffffffff);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar3;
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) - iVar3;
      return 0;
    }
  }
  else if (param_3 == 0) {
    if (0 < (longlong)param_2) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      param_2 = param_2 + *(uint *)(param_1 + 0x94);
      if ((*(uint *)(*(longlong *)(lVar1 + 0x2a0) + 0xc) >> 1 & 1) != 0) {
        uVar2 = *(ulonglong *)(lVar1 + 0x348);
        uVar4 = *(uint *)(lVar1 + 0x350);
        uVar6 = (ulonglong)uVar4;
        if ((((uVar2 != 0) && ((longlong)param_2 < (longlong)uVar6)) &&
            ((*(ulonglong *)(param_1 + 0x60) < uVar2 ||
             (uVar6 + uVar2 <= *(ulonglong *)(param_1 + 0x60))))) &&
           (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))
                              (*(longlong **)(param_1 + 0x58),uVar6,0,&local_res20), iVar3 == 1)) {
          if ((*(byte *)(param_1 + 0x82) & 2) == 0) {
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
          }
          else {
            *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
          }
          *(ulonglong *)(param_1 + 0x60) = uVar2;
          *(uint *)(param_1 + 0x68) = uVar4;
          *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfe | 10;
          *(uint *)(param_1 + 0x70) = uVar4;
          *(undefined4 *)(param_1 + 0x6c) = 0;
        }
      }
      uVar4 = *(uint *)(param_1 + 0x6c);
      if (((longlong)(ulonglong)uVar4 <= (longlong)param_2) &&
         ((longlong)param_2 < (longlong)(ulonglong)(uVar4 + *(int *)(param_1 + 0x68)))) {
        *(int *)(param_1 + 0x6c) = (int)param_2;
        uVar4 = (int)param_2 - uVar4;
        *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (ulonglong)uVar4;
        *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar4;
        return 0;
      }
    }
  }
  else if (param_3 == 2) {
    uVar4 = *(uint *)(param_1 + 0x6c);
    uVar5 = (*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30)) - iVar3;
    if ((uVar4 <= uVar5) && (uVar5 < uVar4 + *(int *)(param_1 + 0x68))) {
      *(uint *)(param_1 + 0x6c) = uVar5;
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (ulonglong)(uVar5 - uVar4);
      *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - (uVar5 - uVar4);
      return 0;
    }
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))
                    (*(longlong **)(param_1 + 0x58),param_2,param_3,&local_res20);
  if (iVar3 != 1) {
    return 0xffffffff;
  }
  if (param_3 == 0) {
    *(int *)(param_1 + 0x70) = (int)local_res20;
    *(int *)(param_1 + 0x74) = (int)param_2 - (int)local_res20;
  }
  else if (param_3 == 2) {
    *(int *)(param_1 + 0x70) =
         (*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30)) - (int)local_res20;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  else if (param_3 == 1) {
    iVar3 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + (int)local_res20;
    *(int *)(param_1 + 0x74) = (iVar3 - (int)local_res20) + (int)param_2;
  }
  FUN_1453b1470(param_1);
  if ((*(byte *)(param_1 + 0x82) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
    *(undefined8 *)(param_1 + 0x60) = 0;
    return 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 0;
}



// FUNCTION 1450f8380 FUN_1450f8380 body=141 status=ok
// SIG undefined FUN_1450f8380(void)

undefined8 FUN_1450f8380(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  do {
    iVar2 = FUN_1453b23a0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
        return 1;
      }
      return 2;
    }
    bVar1 = *(byte *)(param_1 + 0x82);
    *(byte *)(param_1 + 0x82) = bVar1 & 0xfe;
    if ((bVar1 & 2) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
    }
    else {
      *(byte *)(param_1 + 0x82) = bVar1 & 0xfc;
    }
    uVar3 = FUN_1453b0bf0(param_1);
  } while ((int)uVar3 == 0x2d);
  return uVar3;
}



// FUNCTION 1450f8430 FUN_1450f8430 body=94 status=ok
// SIG undefined FUN_1450f8430(void)

undefined8 * FUN_1450f8430(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c2a0d8;
  if (param_1[0x11] != 0) {
    FUN_1453b2380();
    param_1[0x11] = 0;
  }
  FUN_1453b0850(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1450f8490 FUN_1450f8490 body=998 status=ok
// SIG undefined FUN_1450f8490(void)

undefined8
FUN_1450f8490(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,int param_5,
             int *param_6)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  int local_a4;
  uint local_a0;
  undefined8 local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  longlong local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [8];
  short *local_50;
  uint uVar11;
  
  local_68[0] = 0;
  local_60 = 0;
  *param_6 = 0;
  uVar5 = FUN_1450731d0(param_4,param_5,local_58,0,local_70,local_74,local_78,&local_90,local_68,0,0
                       );
  if ((int)uVar5 == 1) {
    if (*local_50 == 0x3040) {
      local_a4 = 0;
      local_98 = FUN_1453b2290(param_4 + (ulonglong)local_90,param_5 - local_90,&local_a4);
      if (1 < local_a4 + 0x85U) {
        if (local_a4 != 0) {
          return 2;
        }
        bVar1 = *(byte *)(local_50 + 1);
        uVar2 = *(uint *)(local_50 + 10);
        do {
          uVar5 = local_98;
          uVar4 = FUN_1453b2780(local_98,&local_80,local_6c);
          lVar13 = local_80;
          if (uVar4 == 0) {
            uVar8 = 1;
LAB_1450f881b:
            FUN_1453b2380(uVar5);
            return uVar8;
          }
          if ((int)uVar4 < 0) {
            uVar8 = 2;
            goto LAB_1450f881b;
          }
          local_88 = bVar1 * uVar4;
          uVar9 = (ulonglong)local_88;
          uVar4 = uVar4 & 0xffff;
          uVar14 = uVar2 & 0xff;
          local_a0 = uVar4;
          if (bVar1 < 2) {
            uVar15 = 0;
            uVar4 = uVar4 * uVar14;
            if (uVar4 < 4) {
              if (uVar4 != 0) {
                lVar13 = 0;
                goto LAB_1450f87b0;
              }
              *param_6 = *param_6 + local_88 * 2;
              param_2 = param_2 + uVar9 * 2;
            }
            else {
              puVar7 = (undefined2 *)(param_2 + 4);
              uVar15 = (uVar4 - 4 >> 2) + 1;
              pfVar6 = (float *)(local_80 + 8);
              uVar12 = (ulonglong)uVar15;
              lVar13 = (ulonglong)uVar15 * 4;
              uVar15 = uVar15 * 4;
              do {
                fVar16 = pfVar6[-2] * 32767.0;
                if (32767.0 <= fVar16) {
                  fVar16 = 32767.0;
                }
                if (fVar16 <= -32768.0) {
                  fVar16 = -32768.0;
                }
                puVar7[-2] = (short)(int)fVar16;
                fVar16 = pfVar6[-1] * 32767.0;
                if (32767.0 <= fVar16) {
                  fVar16 = 32767.0;
                }
                if (fVar16 <= -32768.0) {
                  fVar16 = -32768.0;
                }
                puVar7[-1] = (short)(int)fVar16;
                fVar16 = *pfVar6 * 32767.0;
                if (32767.0 <= fVar16) {
                  fVar16 = 32767.0;
                }
                if (fVar16 <= -32768.0) {
                  fVar16 = -32768.0;
                }
                *puVar7 = (short)(int)fVar16;
                fVar16 = pfVar6[1] * 32767.0;
                if (32767.0 <= fVar16) {
                  fVar16 = 32767.0;
                }
                if (fVar16 <= -32768.0) {
                  fVar16 = -32768.0;
                }
                pfVar6 = pfVar6 + 4;
                puVar7[1] = (short)(int)fVar16;
                puVar7 = puVar7 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
              if (uVar15 < uVar4) {
LAB_1450f87b0:
                puVar7 = (undefined2 *)(param_2 + lVar13 * 2);
                uVar12 = (ulonglong)(uVar4 - uVar15);
                pfVar6 = (float *)(local_80 + lVar13 * 4);
                do {
                  fVar16 = *pfVar6 * 32767.0;
                  if (32767.0 <= fVar16) {
                    fVar16 = 32767.0;
                  }
                  if (fVar16 <= -32768.0) {
                    fVar16 = -32768.0;
                  }
                  pfVar6 = pfVar6 + 1;
                  *puVar7 = (short)(int)fVar16;
                  puVar7 = puVar7 + 1;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
                *param_6 = *param_6 + local_88 * 2;
                param_2 = param_2 + uVar9 * 2;
              }
              else {
                *param_6 = *param_6 + local_88 * 2;
                param_2 = param_2 + uVar9 * 2;
              }
            }
          }
          else {
            uVar15 = 0;
            if (uVar4 != 0) {
              do {
                uVar11 = 0;
                if ((char)uVar2 != '\0') {
                  do {
                    local_8c = uVar2;
                    bVar3 = FUN_1450719a0(&local_8c,uVar11);
                    fVar16 = *(float *)(lVar13 + (ulonglong)(uVar11 + uVar15 * uVar14) * 4) *
                             32767.0;
                    if (32767.0 <= fVar16) {
                      fVar16 = 32767.0;
                    }
                    if (fVar16 <= -32768.0) {
                      fVar16 = -32768.0;
                    }
                    bVar10 = (char)uVar11 + 1;
                    uVar11 = (uint)bVar10;
                    *(short *)(param_2 + (ulonglong)((uint)bVar3 + uVar15 * uVar14) * 2) =
                         (short)(int)fVar16;
                    uVar4 = local_a0;
                  } while (bVar10 < uVar14);
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar4);
              uVar9 = (ulonglong)local_88;
            }
            *param_6 = *param_6 + (int)uVar9 * 2;
            param_2 = param_2 + uVar9 * 2;
          }
        } while( true );
      }
    }
    uVar5 = 7;
  }
  return uVar5;
}



// FUNCTION 1450f8880 FUN_1450f8880 body=147 status=ok
// SIG undefined FUN_1450f8880(void)

undefined8 * FUN_1450f8880(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xff;
  *param_1 = &PTR_FUN_149c2a218;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 1;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x2b;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



// FUNCTION 1450f8920 FUN_1450f8920 body=507 status=ok
// SIG undefined FUN_1450f8920(void)

int * FUN_1450f8920(longlong param_1,int *param_2,uint *param_3,undefined4 *param_4,longlong param_5
                   )

{
  ushort uVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  psVar2 = *(short **)(param_3 + 2);
  if ((*psVar2 == 0x3041) && (0x23 < *param_3)) {
    cVar3 = FUN_1453b7170(psVar2);
    if (cVar3 == '\0') {
      param_2[0] = 7;
      param_2[1] = 0;
    }
    else {
      uVar1 = psVar2[1];
      uVar6 = *(uint *)(psVar2 + 10);
      *param_4 = 48000;
      uVar5 = param_4[2] & 0xffffffe0 | 0x20;
      param_4[1] = uVar6;
      param_4[2] = (((uint)uVar1 << 8 ^ uVar5) & 0xffc0 ^ uVar5) & 0xfffdffff | 0x50000;
      param_4[4] = 48000;
      param_4[5] = *(undefined4 *)(psVar2 + 0xc);
      uVar5 = *(uint *)(psVar2 + 4);
      param_4[6] = 1;
      *(undefined2 *)(param_4 + 0xb) = 0;
      param_4[7] = (float)uVar5 * 0.001;
      if (*(char *)((longlong)psVar2 + 0x23) == '\x01') {
        param_4[3] = 3;
      }
      else if ((uVar6 & 0xf00) == 0x100) {
        param_4[3] = 2;
      }
      *(short *)(param_1 + 8) = psVar2[9];
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(psVar2 + 2);
      *(short *)(param_1 + 100) = psVar2[0x10];
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(psVar2 + 10);
      *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)((longlong)psVar2 + 0x23);
      *(int *)(param_1 + 0xb0) = (int)psVar2[0x10];
      iVar4 = FUN_1453b0630(param_1 + 0x48,*(undefined4 *)(psVar2 + 0xe),
                            *(undefined8 *)(param_3 + 0xe));
      if (iVar4 == 1) {
        FUN_1453b0240(param_1 + 0x78,param_3,param_4,*(undefined2 *)(param_5 + 8));
        if (*(int *)(param_1 + 0x88) == 0) {
          *(int *)(param_1 + 0x88) = *(int *)(psVar2 + 0xc) + -1;
        }
        FUN_1450f94d0(param_1,param_3[6],param_1 + 0x70,param_1 + 0x74);
        iVar4 = FUN_1453b0700(param_1 + 0x48,*(undefined4 *)(param_1 + 0x70));
        param_4[8] = iVar4 + param_3[5];
        uVar6 = param_3[7];
        if (uVar6 == 0) {
          uVar6 = *(int *)(psVar2 + 0xc) - 1;
        }
        iVar4 = FUN_1453b0700(param_1 + 0x48,
                              (*(ushort *)(param_1 + 100) + uVar6) / (uint)*(ushort *)(param_1 + 8)
                              + 1);
        param_4[9] = iVar4 + param_3[5];
        FUN_1450f9330(param_1,param_2);
      }
      else {
        *param_2 = iVar4;
        param_2[1] = 0;
      }
    }
  }
  else {
    param_2[0] = 0x60;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1450f8b20 FUN_1450f8b20 body=122 status=ok
// SIG undefined FUN_1450f8b20(void)

void FUN_1450f8b20(longlong param_1)

{
  if ((*(char *)(param_1 + 0xa8) != '\0') && (*(void **)(param_1 + 0x98) != (void *)0x0)) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x98));
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1450718b0(param_1 + 0x18);
  }
  FUN_1453b06b0(param_1 + 0x48);
  return;
}



// FUNCTION 1450f8bc0 FUN_1450f8bc0 body=701 status=ok
// SIG undefined FUN_1450f8bc0(void)

ulonglong *
FUN_1450f8bc0(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  uint *puVar1;
  undefined2 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  char local_res8 [8];
  uint local_res10 [2];
  undefined4 uVar9;
  int local_154;
  undefined1 local_150 [8];
  undefined8 local_148 [2];
  undefined1 local_138 [256];
  
  *param_2 = 0;
  do {
    local_148[0] = 0;
    local_res10[0] = 0;
    uVar2 = FUN_1453b06f0(param_1 + 0x48,*(undefined4 *)(param_1 + 0xb4));
    *(undefined2 *)(param_1 + 0x90) = uVar2;
    uVar3 = FUN_1450f9530(param_1 + 0x90,param_3,local_148,local_res10);
    if (uVar3 == 0x2d) {
      puVar1 = (uint *)(param_1 + 0xb0);
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      uVar9 = 1;
      uVar3 = FUN_1453b6940(*(undefined8 *)(param_1 + 0x10),local_148[0],local_res10[0],
                            *(undefined8 *)(param_1 + 0x18),FUN_1450f9b40,
                            *(undefined2 *)(param_1 + 8),0,0,puVar1);
      if ((int)uVar3 < 0) {
        uVar4 = 0x4700000002;
      }
      else {
        if ((*(char *)(param_1 + 0xa8) != '\0') && (*(void **)(param_1 + 0x98) != (void *)0x0)) {
          AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x98));
          *(undefined1 *)(param_1 + 0xa8) = 0;
        }
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        uVar6 = *puVar1;
        uVar5 = uVar6;
        if (uVar3 < uVar6) {
          uVar5 = uVar3;
        }
        *puVar1 = uVar6 - uVar5;
        iVar7 = uVar3 - uVar5;
        if (iVar7 == 0) {
          uVar4 = 0x2b;
        }
        else {
          if (*(short *)(param_1 + 0x8c) == 1) {
            uVar6 = *(uint *)(param_1 + 0x80);
          }
          else {
            uVar6 = *(int *)(param_1 + 0x88) + 1;
          }
          if (uVar6 < (uint)(*(int *)(param_1 + 0x7c) + iVar7)) {
            iVar7 = uVar6 - *(int *)(param_1 + 0x7c);
          }
          *param_5 = *(undefined8 *)(param_1 + 0x18);
          *(short *)(param_5 + 2) = (short)uVar3;
          *(short *)((longlong)param_5 + 0x12) = (short)iVar7;
          *(short *)(param_5 + 3) = (short)iVar7;
          FUN_1453b02e0(param_1 + 0x78,iVar7,local_res8);
          if (local_res8[0] != '\0') {
            *puVar1 = *(uint *)(param_1 + 0x74);
            *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x70);
            local_res10[0] = *(uint *)(param_1 + 0x20);
            FUN_1453b71f0(local_res10,local_150,&local_154);
            iVar7 = (local_res10[0] & 0xff) - local_154;
            if (*(char *)(param_1 + 0x6c) == '\x01') {
              puVar8 = &DAT_14c72f5a0 + (ulonglong)(*(byte *)(param_1 + 0x20) - 1) * 8;
            }
            else {
              puVar8 = (undefined *)0x0;
            }
            FUN_1453b72a0(*(undefined1 *)(param_1 + 0x20),puVar8,local_138);
            iVar7 = FUN_1453b6770(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x60),
                                  *(undefined1 *)(param_1 + 0x20),iVar7,CONCAT44(uVar9,local_154),
                                  local_138);
            if (iVar7 != 0) {
              if (*(void **)(param_1 + 0x10) != (void *)0x0) {
                AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x10));
                *(undefined8 *)(param_1 + 0x10) = 0;
              }
              if (*(longlong *)(param_1 + 0x18) != 0) {
                FUN_1450718b0(param_1 + 0x18);
              }
              uVar4 = 2;
              goto LAB_1450f8e28;
            }
          }
          uVar4 = 0x2d;
        }
      }
    }
    else {
      uVar4 = (ulonglong)uVar3;
    }
LAB_1450f8e28:
    *param_2 = uVar4;
    if ((int)uVar4 != 0x2b) {
      return param_2;
    }
  } while( true );
}



// FUNCTION 1450f8e90 FUN_1450f8e90 body=114 status=ok
// SIG undefined FUN_1450f8e90(void)

void FUN_1450f8e90(longlong param_1)

{
  if ((*(char *)(param_1 + 0xa8) != '\0') && (*(void **)(param_1 + 0x98) != (void *)0x0)) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x98));
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1450718b0(param_1 + 0x18);
  }
  return;
}



// FUNCTION 1450f8f10 FUN_1450f8f10 body=23 status=ok
// SIG undefined FUN_1450f8f10(void)

undefined8 FUN_1450f8f10(undefined8 param_1,undefined8 param_2)

{
  FUN_1450f9330();
  return param_2;
}



// FUNCTION 1450f8f30 FUN_1450f8f30 body=176 status=ok
// SIG undefined FUN_1450f8f30(void)

undefined8 * FUN_1450f8f30(longlong param_1,undefined8 *param_2,int param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  uVar5 = (uint)*(ushort *)(param_1 + 100) + param_3;
  uVar4 = (ulonglong)uVar5 / (ulonglong)uVar1;
  uVar5 = uVar5 - (uint)uVar1 * (int)uVar4;
  while ((iVar3 = (int)uVar4,
         uVar5 < (uint)(longlong)((float)(uint)(*(int *)(param_1 + 0x60) * 0x50) * 0.001) &&
         (iVar3 != 0))) {
    uVar5 = uVar5 + uVar1;
    uVar4 = (ulonglong)(iVar3 - 1);
  }
  *param_4 = param_3;
  iVar2 = FUN_1453b0700(param_1 + 0x48,uVar4);
  param_4[2] = iVar2;
  param_4[1] = uVar5;
  *(int *)(param_1 + 0xb4) = iVar3;
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1450f8fe0 FUN_1450f8fe0 body=179 status=ok
// SIG undefined FUN_1450f8fe0(void)

undefined8
FUN_1450f8fe0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,uint param_6)

{
  int local_18;
  int local_14;
  undefined1 local_10 [8];
  
  if ((*(char *)(param_1 + 0xa8) != '\0') && (*(void **)(param_1 + 0x98) != (void *)0x0)) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x98));
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x7c) = *param_4;
  *(undefined2 *)(param_1 + 0x8c) = (undefined2)param_6;
  *(undefined4 *)(param_1 + 0xb0) = param_4[1];
  param_6 = *(uint *)(param_1 + 0x20);
  FUN_1453b71f0(&param_6,local_10,&local_14);
  local_18 = (param_6 & 0xff) - local_14;
  FUN_1450f9400(param_1,param_2,&local_18);
  return param_2;
}



// FUNCTION 1450f90c0 FUN_1450f90c0 body=620 status=ok
// SIG undefined FUN_1450f90c0(void)

int * FUN_1450f90c0(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  char local_res8 [8];
  undefined4 uVar8;
  undefined8 in_stack_fffffffffffffe90;
  undefined4 uVar9;
  uint local_148 [2];
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [256];
  
  uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffe90 >> 0x20);
  puVar7 = (undefined *)0x0;
  local_140 = 0;
  local_148[0] = 0;
  uVar2 = FUN_1453b06f0(param_1 + 0x48,*(undefined4 *)(param_1 + 0xb4));
  *(undefined2 *)(param_1 + 0x90) = uVar2;
  iVar3 = FUN_1450f9530(param_1 + 0x90,param_3,&local_140,local_148);
  if (iVar3 == 0x2d) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    puVar1 = (uint *)(param_1 + 0xb0);
    uVar8 = 1;
    uVar4 = FUN_1453b6940(*(undefined8 *)(param_1 + 0x10),local_140,local_148[0],
                          *(undefined8 *)(param_1 + 0x18),FUN_1450f9b40,
                          CONCAT44(uVar9,(uint)*(ushort *)(param_1 + 8)),0,0,puVar1);
    if ((int)uVar4 < 0) {
      *param_2 = 2;
      param_2[1] = 0x47;
    }
    else {
      if ((*(char *)(param_1 + 0xa8) != '\0') && (*(void **)(param_1 + 0x98) != (void *)0x0)) {
        AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x98));
        *(undefined1 *)(param_1 + 0xa8) = 0;
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      uVar6 = *puVar1;
      uVar5 = uVar6;
      if (uVar4 < uVar6) {
        uVar5 = uVar4;
      }
      *puVar1 = uVar6 - uVar5;
      iVar3 = uVar4 - uVar5;
      if (iVar3 == 0) {
        param_2[0] = 0x2b;
        param_2[1] = 0;
      }
      else {
        if (*(short *)(param_1 + 0x8c) == 1) {
          uVar6 = *(uint *)(param_1 + 0x80);
        }
        else {
          uVar6 = *(int *)(param_1 + 0x88) + 1;
        }
        if (uVar6 < (uint)(*(int *)(param_1 + 0x7c) + iVar3)) {
          iVar3 = uVar6 - *(int *)(param_1 + 0x7c);
        }
        *param_4 = *(undefined8 *)(param_1 + 0x18);
        *(short *)(param_4 + 2) = (short)uVar4;
        *(short *)((longlong)param_4 + 0x12) = (short)iVar3;
        *(short *)(param_4 + 3) = (short)iVar3;
        FUN_1453b02e0(param_1 + 0x78,iVar3,local_res8);
        if (local_res8[0] != '\0') {
          *puVar1 = *(uint *)(param_1 + 0x74);
          *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x70);
          local_148[0] = *(uint *)(param_1 + 0x20);
          FUN_1453b71f0(local_148,local_138,(longlong)&local_140 + 4);
          local_140 = CONCAT44(local_140._4_4_,(local_148[0] & 0xff) - local_140._4_4_);
          if (*(char *)(param_1 + 0x6c) == '\x01') {
            puVar7 = &DAT_14c72f5a0 + (ulonglong)(*(byte *)(param_1 + 0x20) - 1) * 8;
          }
          FUN_1453b72a0(*(undefined1 *)(param_1 + 0x20),puVar7,local_128);
          iVar3 = FUN_1453b6770(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x60),
                                *(undefined1 *)(param_1 + 0x20),local_140 & 0xffffffff,
                                CONCAT44(uVar8,local_140._4_4_),local_128);
          if (iVar3 != 0) {
            if (*(void **)(param_1 + 0x10) != (void *)0x0) {
              AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x10));
              *(undefined8 *)(param_1 + 0x10) = 0;
            }
            if (*(longlong *)(param_1 + 0x18) != 0) {
              FUN_1450718b0(param_1 + 0x18);
            }
            param_2[0] = 2;
            param_2[1] = 0;
            return param_2;
          }
        }
        param_2[0] = 0x2d;
        param_2[1] = 0;
      }
    }
  }
  else {
    *param_2 = iVar3;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1450f9330 FUN_1450f9330 body=198 status=ok
// SIG undefined FUN_1450f9330(void)

int * FUN_1450f9330(longlong *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint local_res8 [2];
  int local_18;
  int local_14;
  undefined1 local_10 [8];
  
  uVar1 = *(uint *)(param_1 + 0xd);
  *(short *)(param_1 + 5) = (short)param_1[1];
  *(uint *)(param_1 + 4) = uVar1;
  iVar2 = FUN_145071750(param_1 + 3);
  if (iVar2 == 1) {
    local_res8[0] = uVar1;
    FUN_1453b71f0(local_res8,local_10,&local_14);
    local_18 = (local_res8[0] & 0xff) - local_14;
    iVar2 = FUN_1453b6520();
    pvVar3 = AK::MemoryMgr::Malloc(5,(longlong)iVar2);
    param_1[2] = (longlong)pvVar3;
    if (pvVar3 == (void *)0x0) {
      (**(code **)(*param_1 + 0x18))();
      param_2[0] = 0x34;
      param_2[1] = 0;
    }
    else {
      FUN_1450f9400(param_1,param_2,&local_18);
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1);
    *param_2 = iVar2;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1450f9400 FUN_1450f9400 body=194 status=ok
// SIG undefined FUN_1450f9400(void)

undefined8 * FUN_1450f9400(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 local_108 [256];
  
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    puVar2 = &DAT_14c72f5a0 + (ulonglong)(*(byte *)(param_1 + 0x20) - 1) * 8;
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  FUN_1453b72a0(*(undefined1 *)(param_1 + 0x20),puVar2,local_108);
  iVar1 = FUN_1453b6770(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x60),
                        *(undefined1 *)(param_1 + 0x20),*param_3,param_3[1],local_108);
  if (iVar1 == 0) {
    *param_2 = 1;
  }
  else {
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1450718b0(param_1 + 0x18);
    }
    *param_2 = 2;
  }
  return param_2;
}



// FUNCTION 1450f94d0 FUN_1450f94d0 body=86 status=ok
// SIG undefined FUN_1450f94d0(void)

void FUN_1450f94d0(longlong param_1,int param_2,uint *param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar4;
  ulonglong uVar3;
  
  uVar1 = *(ushort *)(param_1 + 8);
  uVar4 = (uint)*(ushort *)(param_1 + 100) + param_2;
  uVar3 = (ulonglong)uVar4 / (ulonglong)uVar1;
  uVar2 = (uint)uVar3;
  uVar4 = uVar4 - uVar1 * uVar2;
  while ((uVar4 < (uint)(longlong)((float)(uint)(*(int *)(param_1 + 0x60) * 0x50) * 0.001) &&
         (uVar2 = (uint)uVar3, uVar2 != 0))) {
    uVar2 = uVar2 - 1;
    uVar4 = uVar4 + uVar1;
    uVar3 = (ulonglong)uVar2;
  }
  *param_3 = uVar2;
  *param_4 = uVar4;
  return;
}



// FUNCTION 1450f9530 FUN_1450f9530 body=335 status=ok
// SIG undefined FUN_1450f9530(void)

undefined8
FUN_1450f9530(ushort *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pvVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  
  do {
    if (*(int *)(param_2 + 4) == 0) {
      bVar1 = *(byte *)((longlong)param_2 + 0x42);
      if ((bVar1 & 1) != 0) {
        return 0x11;
      }
      if ((bVar1 & 0x38) == 0x10) {
        *(byte *)((longlong)param_2 + 0x42) = bVar1 & 0xdf | 0x18;
      }
      else {
        (**(code **)(*(longlong *)*param_2 + 0x88))();
      }
      uVar4 = FUN_1453afcc0(param_2);
      if ((int)uVar4 != 0x2d) {
        return uVar4;
      }
    }
    uVar2 = *param_1;
    cVar7 = (char)param_1[0xc];
    uVar8 = (uint)uVar2;
    if (*(uint *)(param_2 + 4) < (uint)uVar2) {
      if (cVar7 != '\0') {
LAB_1450f95b4:
        if ((uint)uVar2 <= *(uint *)(param_1 + 10)) goto LAB_1450f95fa;
      }
      if ((*(void **)(param_1 + 4) == (void *)0x0) || (cVar7 == '\0')) {
        pvVar5 = AK::MemoryMgr::Malloc(5,(ulonglong)uVar2);
      }
      else {
        pvVar5 = AK::MemoryMgr::Realloc(5,*(void **)(param_1 + 4),(ulonglong)uVar2);
      }
      *(void **)(param_1 + 4) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        return 0x34;
      }
      *(char *)(param_1 + 0xc) = '\x01';
      cVar7 = '\x01';
      *(uint *)(param_1 + 10) = uVar8;
    }
    else if (cVar7 != '\0') goto LAB_1450f95b4;
LAB_1450f95fa:
    uVar6 = uVar8 - *(uint *)(param_1 + 8);
    uVar3 = *(uint *)(param_2 + 4);
    if (uVar6 <= *(uint *)(param_2 + 4)) {
      uVar3 = uVar6;
    }
    if (cVar7 == '\0') {
      *(void **)(param_1 + 4) = (void *)param_2[3];
    }
    else {
      memcpy((void *)((ulonglong)*(uint *)(param_1 + 8) + *(longlong *)(param_1 + 4)),
             (void *)param_2[3],(ulonglong)uVar3);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar3;
    param_2[3] = param_2[3] + (ulonglong)uVar3;
    *(uint *)(param_2 + 4) = *(int *)(param_2 + 4) - uVar3;
    *(uint *)(param_2 + 5) = *(int *)(param_2 + 5) + uVar3;
    if (*(uint *)(param_1 + 8) == uVar8) {
      *param_3 = *(undefined8 *)(param_1 + 4);
      *param_4 = *(undefined4 *)(param_1 + 8);
      return 0x2d;
    }
  } while( true );
}



// FUNCTION 1450f9680 FUN_1450f9680 body=177 status=ok
// SIG undefined FUN_1450f9680(void)

undefined8 * FUN_1450f9680(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149c2a218;
  if ((*(char *)(param_1 + 0x15) != '\0') && ((void *)param_1[0x13] != (void *)0x0)) {
    AK::MemoryMgr::Free(5,(void *)param_1[0x13]);
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if ((void *)param_1[2] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    FUN_1450718b0(param_1 + 3);
  }
  FUN_1453b06b0(param_1 + 9);
  *param_1 = &PTR_FUN_149c29fe8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1450f9740 FUN_1450f9740 body=1024 status=ok
// SIG undefined FUN_1450f9740(void)

ulonglong FUN_1450f9740(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,
                       undefined4 param_5,uint *param_6)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_198 [4];
  undefined8 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_15c;
  longlong *local_148 [3];
  longlong local_130;
  int local_128;
  int local_120;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  short local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  short local_c0;
  undefined1 local_a8 [16];
  int local_98;
  uint local_94;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [12];
  uint local_3c;
  
  local_88[0] = 0;
  local_80 = 0;
  uVar3 = FUN_1450731d0(param_4,param_5,local_a8,0,local_90,local_8c,&local_98,&local_94,local_88,
                        local_78,0);
  if ((int)uVar3 == 1) {
    local_3c = local_3c & 0xffffff8f | 0xc;
    local_68 = local_48;
    local_50 = param_5;
    local_5e = 0x32;
    local_60 = 1;
    local_58 = param_4;
    uVar3 = FUN_1453afa40(local_148,&local_68);
    if ((int)uVar3 == 1) {
      plVar4 = AK::MemoryMgr::Malloc(5,0xb8);
      if (plVar4 == (longlong *)0x0) {
        FUN_1453afc90(local_148);
        uVar3 = 0x34;
      }
      else {
        *(undefined1 *)(plVar4 + 4) = 0;
        *(uint *)(plVar4 + 4) = *(uint *)(plVar4 + 4) & 0xff;
        *plVar4 = (longlong)&PTR_FUN_149c2a218;
        *(undefined2 *)(plVar4 + 1) = 0;
        plVar4[2] = 0;
        *(undefined8 *)((longlong)plVar4 + 0x44) = 1;
        plVar4[10] = 0;
        *(undefined2 *)(plVar4 + 0xb) = 0;
        *(undefined4 *)(plVar4 + 0xc) = 0;
        *(undefined2 *)((longlong)plVar4 + 100) = 0;
        *(undefined4 *)(plVar4 + 0xd) = 0;
        *(undefined1 *)((longlong)plVar4 + 0x6c) = 0;
        plVar4[0xe] = 0;
        plVar4[0xf] = 0;
        plVar4[0x10] = 0;
        plVar4[0x11] = 0;
        plVar4[0x13] = 0;
        plVar4[0x14] = 0;
        *(undefined1 *)(plVar4 + 0x15) = 0;
        plVar4[0x16] = 0;
        plVar4[3] = 0;
        *(undefined8 *)((longlong)plVar4 + 0x24) = 0x2b;
        plVar4[6] = 0;
        *(undefined4 *)(plVar4 + 7) = 0xffffffff;
        *(undefined4 *)((longlong)plVar4 + 0x3c) = 0x3f800000;
        *(undefined4 *)(plVar4 + 8) = 0xffffffff;
        local_c8 = 0x3f800000;
        local_c4 = 1;
        local_c0 = 1;
        local_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_d0 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        (**(code **)(*local_148[0] + 0x20))(local_148[0],(longlong)&local_e0 + 4);
        puVar5 = (uint *)(**(code **)(*plVar4 + 8))(plVar4,local_198,local_a8,&local_f8,&local_c8);
        uVar2 = *puVar5;
        if (uVar2 == 1) {
          (**(code **)(*local_148[0] + 0x28))(local_148[0],(longlong)&local_e0 + 4);
          (**(code **)(*local_148[0] + 0x30))(local_148[0],local_e0 & 0xffffffff);
          local_114 = local_94 + local_98;
          local_110 = (undefined4)uStack_d8;
          local_10c = uStack_d8._4_4_;
          local_108 = local_c0;
          (**(code **)(*local_148[0] + 0x20))(local_148[0],local_198);
          if (local_108 == 1) {
            local_194 = 0;
          }
          else {
            local_194 = CONCAT44(local_10c,local_110);
          }
          (**(code **)(*local_148[0] + 0x28))(local_148[0],local_198);
          uVar3 = FUN_1453b00e0(local_148,param_4,param_5);
          if ((int)uVar3 == 1) {
            local_130 = local_130 + (ulonglong)local_94;
            local_128 = local_128 - local_94;
            lVar1 = param_2 + (ulonglong)param_3;
            local_120 = local_120 + local_94;
            *param_6 = param_3;
            local_160 = local_f8._4_4_;
            local_180 = local_f8._4_4_;
            local_15c = 0x2b;
            local_168 = 0;
            local_17c = 0x2b;
            local_188 = 0;
            puVar5 = (uint *)FUN_1450f90c0(plVar4,local_198,local_148,&local_188);
            uVar2 = *puVar5;
            if (uVar2 != 2) {
              do {
                if (local_17c._6_2_ != 0) {
                  uVar7 = (uint)local_f8._4_1_;
                  uVar2 = local_17c._6_2_ * uVar7;
                  uVar3 = lVar1 - param_2 >> 1;
                  local_15c = CONCAT26(local_17c._6_2_,
                                       CONCAT24(local_17c._6_2_,(undefined4)local_15c));
                  uVar8 = uVar3 & 0xffffffff;
                  if (uVar2 <= (uint)uVar3) {
                    uVar8 = (ulonglong)uVar2;
                  }
                  local_168 = param_2;
                  if (((local_f8._4_4_ & 0xf00) == 0x100) && (1 < uVar7)) {
                    FUN_1450f9c90(&local_188,&local_168);
                  }
                  else {
                    FUN_1450f9e40(&local_188,&local_168);
                  }
                  param_2 = param_2 + uVar8 * 2;
                }
                if (param_2 == lVar1) {
                  uVar2 = 1;
                  goto LAB_1450f9ae7;
                }
                local_180 = local_f8._4_4_;
                local_17c = 0x2b;
                local_188 = 0;
                piVar6 = (int *)FUN_1450f90c0(plVar4,local_198,local_148,&local_188);
              } while (*piVar6 != 2);
              uVar2 = 2;
            }
LAB_1450f9ae7:
            (**(code **)(*plVar4 + 0x18))(plVar4);
            AK::MemoryMgr::Free(5,plVar4);
            FUN_1453afc90(local_148);
            uVar3 = (ulonglong)uVar2;
          }
        }
        else {
          AK::MemoryMgr::Free(5,plVar4);
          FUN_1453afc90(local_148);
          uVar3 = (ulonglong)uVar2;
        }
      }
    }
  }
  return uVar3;
}



// FUNCTION 1450f9b40 FUN_1450f9b40 body=330 status=ok
// SIG undefined FUN_1450f9b40(void)

void FUN_1450f9b40(longlong param_1,undefined8 param_2,int param_3,longlong param_4,int param_5,
                  int param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_7;
  if (param_4 == 0) {
    if (iVar2 < param_6) {
      memset((void *)(param_1 + (ulonglong)(uint)(param_3 * param_6) * 4),0,
             (ulonglong)(uint)(param_6 - iVar2) << 2);
    }
  }
  else if (iVar2 < param_6) {
    iVar6 = iVar2;
    if (3 < param_6 - iVar2) {
      uVar5 = param_3 * param_6 + 2;
      iVar7 = (iVar2 + 2) * param_5;
      uVar3 = ((param_6 - iVar2) - 4U >> 2) + 1;
      uVar8 = (ulonglong)uVar3;
      iVar6 = iVar2 + uVar3 * 4;
      do {
        *(undefined4 *)(param_1 + (ulonglong)(uVar5 - 2) * 4) =
             *(undefined4 *)(param_4 + (longlong)(iVar7 + param_5 * -2) * 4);
        *(undefined4 *)(param_1 + (ulonglong)(uVar5 - 1) * 4) =
             *(undefined4 *)(param_4 + (longlong)(iVar7 - param_5) * 4);
        uVar3 = uVar5 + 1;
        *(undefined4 *)(param_1 + (ulonglong)uVar5 * 4) =
             *(undefined4 *)(param_4 + (longlong)iVar7 * 4);
        iVar1 = param_5 + iVar7;
        uVar5 = uVar5 + 4;
        iVar7 = iVar7 + param_5 * 4;
        *(undefined4 *)(param_1 + (ulonglong)uVar3 * 4) =
             *(undefined4 *)(param_4 + (longlong)iVar1 * 4);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      if (param_6 <= iVar6) {
        return;
      }
    }
    iVar7 = iVar6 * param_5;
    do {
      lVar4 = (longlong)iVar7;
      uVar5 = (param_3 * param_6 - iVar2) + iVar6;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + param_5;
      *(undefined4 *)(param_1 + (ulonglong)uVar5 * 4) = *(undefined4 *)(param_4 + lVar4 * 4);
    } while (iVar6 < param_6);
    return;
  }
  return;
}



// FUNCTION 1450f9c90 FUN_1450f9c90 body=418 status=ok
// SIG undefined FUN_1450f9c90(void)

void FUN_1450f9c90(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  undefined2 *puVar5;
  float *pfVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  undefined4 local_res8 [2];
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar7 = 0;
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  if (bVar1 != 0) {
    lVar9 = 0;
    do {
      local_res8[0] = (undefined4)param_1[1];
      bVar3 = FUN_1450719a0(local_res8,uVar7 & 0xff);
      uVar4 = 0;
      pfVar6 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)bVar3 * 4);
      puVar5 = (undefined2 *)(*param_2 + lVar9);
      if (3 < uVar2) {
        uVar4 = (uVar2 - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar4;
        uVar4 = uVar4 * 4;
        do {
          fVar10 = *pfVar6 * 32767.0;
          if (32767.0 <= fVar10) {
            fVar10 = 32767.0;
          }
          if (fVar10 <= -32768.0) {
            fVar10 = -32768.0;
          }
          *puVar5 = (short)(int)fVar10;
          puVar5 = puVar5 + bVar1;
          fVar10 = pfVar6[1] * 32767.0;
          if (32767.0 <= fVar10) {
            fVar10 = 32767.0;
          }
          if (fVar10 <= -32768.0) {
            fVar10 = -32768.0;
          }
          *puVar5 = (short)(int)fVar10;
          puVar5 = puVar5 + bVar1;
          fVar10 = pfVar6[2] * 32767.0;
          if (32767.0 <= fVar10) {
            fVar10 = 32767.0;
          }
          if (fVar10 <= -32768.0) {
            fVar10 = -32768.0;
          }
          *puVar5 = (short)(int)fVar10;
          fVar10 = pfVar6[3] * 32767.0;
          if (32767.0 <= fVar10) {
            fVar10 = 32767.0;
          }
          if (fVar10 <= -32768.0) {
            fVar10 = -32768.0;
          }
          pfVar6 = pfVar6 + 4;
          puVar5[bVar1] = (short)(int)fVar10;
          puVar5 = puVar5 + bVar1 + bVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar4 < uVar2) {
        uVar8 = (ulonglong)(uVar2 - uVar4);
        do {
          fVar10 = *pfVar6 * 32767.0;
          if (32767.0 <= fVar10) {
            fVar10 = 32767.0;
          }
          if (fVar10 <= -32768.0) {
            fVar10 = -32768.0;
          }
          pfVar6 = pfVar6 + 1;
          *puVar5 = (short)(int)fVar10;
          puVar5 = puVar5 + bVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 2;
    } while (uVar7 < bVar1);
  }
  return;
}



// FUNCTION 1450f9e40 FUN_1450f9e40 body=359 status=ok
// SIG undefined FUN_1450f9e40(void)

void FUN_1450f9e40(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  if (bVar1 != 0) {
    lVar8 = 0;
    uVar6 = (ulonglong)bVar1;
    do {
      uVar3 = 0;
      pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar8 * 4);
      puVar4 = (undefined2 *)(*param_2 + lVar8 * 2);
      if (3 < uVar2) {
        uVar3 = (uVar2 - 4 >> 2) + 1;
        uVar7 = (ulonglong)uVar3;
        uVar3 = uVar3 * 4;
        do {
          fVar9 = *pfVar5 * 32767.0;
          if (32767.0 <= fVar9) {
            fVar9 = 32767.0;
          }
          if (fVar9 <= -32768.0) {
            fVar9 = -32768.0;
          }
          *puVar4 = (short)(int)fVar9;
          puVar4 = puVar4 + bVar1;
          fVar9 = pfVar5[1] * 32767.0;
          if (32767.0 <= fVar9) {
            fVar9 = 32767.0;
          }
          if (fVar9 <= -32768.0) {
            fVar9 = -32768.0;
          }
          *puVar4 = (short)(int)fVar9;
          puVar4 = puVar4 + bVar1;
          fVar9 = pfVar5[2] * 32767.0;
          if (32767.0 <= fVar9) {
            fVar9 = 32767.0;
          }
          if (fVar9 <= -32768.0) {
            fVar9 = -32768.0;
          }
          *puVar4 = (short)(int)fVar9;
          fVar9 = pfVar5[3] * 32767.0;
          if (32767.0 <= fVar9) {
            fVar9 = 32767.0;
          }
          if (fVar9 <= -32768.0) {
            fVar9 = -32768.0;
          }
          pfVar5 = pfVar5 + 4;
          puVar4[bVar1] = (short)(int)fVar9;
          puVar4 = puVar4 + bVar1 + bVar1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar3 < uVar2) {
        uVar7 = (ulonglong)(uVar2 - uVar3);
        do {
          fVar9 = *pfVar5 * 32767.0;
          if (32767.0 <= fVar9) {
            fVar9 = 32767.0;
          }
          if (fVar9 <= -32768.0) {
            fVar9 = -32768.0;
          }
          pfVar5 = pfVar5 + 1;
          *puVar4 = (short)(int)fVar9;
          puVar4 = puVar4 + bVar1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      lVar8 = lVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1450f9fb0 FUN_1450f9fb0 body=19 status=ok
// SIG undefined FUN_1450f9fb0(void)

undefined8 * FUN_1450f9fb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c2a280;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 1450f9fd0 FUN_1450f9fd0 body=82 status=ok
// SIG undefined FUN_1450f9fd0(void)

void FUN_1450f9fd0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkSineTone\\Sources\\AudioEngineFX\\AkFXSrcSineParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2a280;
    *(undefined1 *)(puVar2 + 3) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    *(undefined1 *)(puVar2 + 3) = 0xff;
    return;
  }
  return;
}



// FUNCTION 1450fa070 FUN_1450fa070 body=56 status=ok
// SIG undefined FUN_1450fa070(void)

undefined8 FUN_1450fa070(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1450fa0b0 FUN_1450fa0b0 body=88 status=ok
// SIG undefined FUN_1450fa0b0(void)

undefined8 FUN_1450fa0b0(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  fVar1 = powf(10.0,(float)param_2[1] * 0.05);
  *(float *)(param_1 + 0xc) = fVar1;
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  return 1;
}



// FUNCTION 1450fa110 FUN_1450fa110 body=234 status=ok
// SIG undefined FUN_1450fa110(void)

undefined8 FUN_1450fa110(longlong param_1,short param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_2 == 0) {
    *(float *)(param_1 + 8) = *param_3;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
    return 1;
  }
  if (param_2 == 1) {
    fVar2 = *param_3;
    fVar1 = -96.3;
    if ((-96.3 <= fVar2) && (fVar1 = fVar2, 0.0 <= fVar2)) {
      fVar1 = 0.0;
    }
    fVar2 = powf(10.0,fVar1 * 0.05);
    *(float *)(param_1 + 0xc) = fVar2;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
    return 1;
  }
  if (param_2 == 2) {
    fVar2 = *param_3;
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 3600.0 <= fVar2)) {
      fVar1 = 3600.0;
    }
    *(float *)(param_1 + 0x10) = fVar1;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 4;
    return 1;
  }
  if (param_2 == 3) {
    *(float *)(param_1 + 0x14) = *param_3;
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 8;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1450fa200 FUN_1450fa200 body=43 status=ok
// SIG undefined FUN_1450fa200(void)

undefined8 * FUN_1450fa200(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1450fa230 FUN_1450fa230 body=727 status=ok
// SIG undefined FUN_1450fa230(void)

void FUN_1450fa230(float *param_1,float *param_2,uint param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_7c;
  
  fVar14 = *param_1;
  fVar5 = param_1[1];
  fVar3 = fVar14 + fVar5;
  pfVar1 = param_2 + param_3;
  if (3.1415925 <= fVar3) {
    fVar3 = fVar3 - 6.2831855;
  }
  fVar4 = fVar3 + fVar5;
  if (3.1415925 <= fVar4) {
    fVar4 = fVar4 - 6.2831855;
  }
  fStack_7c = fVar4 + fVar5;
  if (3.1415925 <= fStack_7c) {
    fStack_7c = fStack_7c - 6.2831855;
  }
  fVar5 = fVar5 * 4.0;
  pfVar2 = param_2;
  if (6.2831855 <= fVar5) {
    fVar5 = fVar5 + -6.2831855;
  }
  for (; pfVar2 < pfVar1; pfVar2 = pfVar2 + 4) {
    fVar10 = fVar14 * fVar14;
    fVar11 = fVar3 * fVar3;
    fVar12 = fVar4 * fVar4;
    fVar13 = fStack_7c * fStack_7c;
    fVar6 = fVar10 * fVar14 * fVar10;
    fVar7 = fVar11 * fVar3 * fVar11;
    fVar8 = fVar12 * fVar4 * fVar12;
    fVar9 = fVar13 * fStack_7c * fVar13;
    fVar15 = fVar14 + fVar5;
    fVar16 = fVar3 + fVar5;
    fVar17 = fVar4 + fVar5;
    fVar18 = fStack_7c + fVar5;
    *pfVar2 = fVar10 * fVar14 * -0.16652186 + fVar14 + fVar6 * 0.008199913 +
              fVar6 * fVar10 * -0.00016147594;
    pfVar2[1] = fVar11 * fVar3 * -0.16652186 + fVar3 + fVar7 * 0.008199913 +
                fVar7 * fVar11 * -0.00016147594;
    pfVar2[2] = fVar12 * fVar4 * -0.16652186 + fVar4 + fVar8 * 0.008199913 +
                fVar8 * fVar12 * -0.00016147594;
    pfVar2[3] = fVar13 * fStack_7c * -0.16652186 + fStack_7c + fVar9 * 0.008199913 +
                fVar9 * fVar13 * -0.00016147594;
    fVar14 = (float)((uint)(fVar15 - 6.2831855) & -(uint)(3.1415925 <= fVar15) |
                    ~-(uint)(3.1415925 <= fVar15) & (uint)fVar15);
    fVar3 = (float)((uint)(fVar16 - 6.2831855) & -(uint)(3.1415925 <= fVar16) |
                   ~-(uint)(3.1415925 <= fVar16) & (uint)fVar16);
    fVar4 = (float)((uint)(fVar17 - 6.2831855) & -(uint)(3.1415925 <= fVar17) |
                   ~-(uint)(3.1415925 <= fVar17) & (uint)fVar17);
    fStack_7c = (float)((uint)(fVar18 - 6.2831855) & -(uint)(3.1415925 <= fVar18) |
                       ~-(uint)(3.1415925 <= fVar18) & (uint)fVar18);
  }
  *param_1 = fVar14;
  if (param_5 == param_4) {
    FUN_1450fa510(param_2,param_4);
  }
  else {
    if (3 < param_3) {
      pfVar2 = param_2 + (param_3 & 0xfffffffc);
      fVar3 = (param_5 - param_4) / (float)(param_3 & 0xfffffffc);
      fVar6 = fVar3 * 4.0;
      fVar5 = fVar3 + param_4 + fVar3;
      fVar14 = fVar3 + param_4;
      fVar3 = fVar5 + fVar3;
      fVar4 = param_4;
      for (; param_2 < pfVar2; param_2 = param_2 + 4) {
        *param_2 = *param_2 * fVar4;
        param_2[1] = param_2[1] * fVar14;
        param_2[2] = param_2[2] * fVar5;
        param_2[3] = param_2[3] * fVar3;
        fVar14 = fVar14 + fVar6;
        fVar5 = fVar5 + fVar6;
        fVar3 = fVar3 + fVar6;
        fVar4 = fVar4 + fVar6;
      }
    }
    if (param_2 < pfVar1) {
      fVar14 = (param_5 - param_4) / (float)param_3;
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_2) & 0xfffffffffffffffcU)) {
        do {
          *param_2 = param_4 * *param_2;
          fVar5 = param_4 + fVar14 + fVar14;
          param_2[1] = (param_4 + fVar14) * param_2[1];
          fVar3 = fVar5 + fVar14;
          param_2[2] = fVar5 * param_2[2];
          param_4 = fVar3 + fVar14;
          param_2[3] = fVar3 * param_2[3];
          param_2 = param_2 + 4;
        } while (param_2 < pfVar1 + -3);
        if (pfVar1 <= param_2) {
          return;
        }
      }
      do {
        *param_2 = param_4 * *param_2;
        param_2 = param_2 + 1;
        param_4 = param_4 + fVar14;
      } while (param_2 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1450fa510 FUN_1450fa510 body=309 status=ok
// SIG undefined FUN_1450fa510(void)

void FUN_1450fa510(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1450fa650 FUN_1450fa650 body=14 status=ok
// SIG undefined FUN_1450fa650(void)

undefined8 * FUN_1450fa650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c2a3a0;
  return param_1;
}



// FUNCTION 1450fa660 FUN_1450fa660 body=107 status=ok
// SIG undefined FUN_1450fa660(void)

void FUN_1450fa660(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x50,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkToneGenerator\\Sources\\AudioEngineFX\\AkToneGenParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2a3a0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 1450fa720 FUN_1450fa720 body=56 status=ok
// SIG undefined FUN_1450fa720(void)

undefined8 FUN_1450fa720(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1450fa990 FUN_1450fa990 body=43 status=ok
// SIG undefined FUN_1450fa990(void)

undefined8 * FUN_1450fa990(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1450fa9c0 FUN_1450fa9c0 body=24 status=ok
// SIG undefined FUN_1450fa9c0(void)

undefined8 * FUN_1450fa9c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 1450fa9e0 FUN_1450fa9e0 body=3 status=ok
// SIG undefined FUN_1450fa9e0(void)

void FUN_1450fa9e0(void)

{
  return;
}



// FUNCTION 1450fa9f0 FUN_1450fa9f0 body=141 status=ok
// SIG undefined FUN_1450fa9f0(void)

void FUN_1450fa9f0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = tanf((param_2 * 3.1415927) / param_3);
  fVar1 = 1.0 / fVar1;
  fVar3 = fVar1 * fVar1;
  fVar2 = 1.0 / (fVar1 * 1.4142135 + 1.0 + fVar3);
  *param_1 = fVar2;
  param_1[2] = fVar2;
  param_1[3] = ((1.0 - fVar3) + (1.0 - fVar3)) * fVar2;
  param_1[1] = fVar2 + fVar2;
  param_1[4] = ((1.0 - fVar1 * 1.4142135) + fVar3) * fVar2;
  return;
}



// FUNCTION 1450faa80 FUN_1450faa80 body=11 status=ok
// SIG undefined FUN_1450faa80(void)

void FUN_1450faa80(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 1450faa90 FUN_1450faa90 body=574 status=ok
// SIG undefined FUN_1450faa90(void)

void FUN_1450faa90(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar6;
  
  fVar13 = *(float *)(*(longlong *)(param_1 + 0x148) + 0xc);
  fVar9 = powf(10.0,*(float *)(*(longlong *)(param_1 + 0x148) + 8) * 0.05);
  fVar12 = *(float *)(param_1 + 0x158);
  *(float *)(param_1 + 0x160) = fVar9;
  fVar9 = fVar9 - *(float *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(int *)(param_1 + 0x16c) = (int)(longlong)(ABS(fVar9) / fVar12);
  if (fVar9 <= 0.0) {
    fVar12 = -fVar12;
  }
  *(float *)(param_1 + 0x15c) = fVar12;
  fVar13 = fVar13 + *(float *)(param_1 + 0x2c);
  if (0.001 <= fVar13) {
    if (*(float *)(param_1 + 0x30) <= fVar13) {
      fVar13 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar13 = 0.001;
  }
  fVar13 = (fVar13 * 512.0) / (float)*(uint *)(param_1 + 8);
  *(float *)(param_1 + 0x28) = fVar13;
  iVar8 = param_3;
  while (iVar8 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x90);
    iVar8 = iVar8 + -1;
    fVar12 = *(float *)(param_1 + 0x24);
    uVar7 = *(uint *)(param_1 + 0x20) & 0x1ff;
    fVar9 = *(float *)(lVar3 + (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
    uVar5 = *(uint *)(param_1 + 0x20) + (int)(longlong)fVar13;
    fVar1 = *(float *)(lVar3 + (ulonglong)uVar7 * 4);
    fVar11 = fVar12 + (fVar13 - (float)((longlong)fVar13 & 0xffffffff));
    fVar2 = *(float *)(lVar3 + (ulonglong)uVar7 * 4);
    *(float *)(param_1 + 0x24) = fVar11;
    if (1.0 < fVar11) {
      uVar5 = uVar5 + 1;
      *(float *)(param_1 + 0x24) = fVar11 - 1.0;
    }
    uVar7 = *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x20) = uVar5 & 0x1ff;
    uVar6 = (ulonglong)*(ushort *)(param_1 + 100);
    if (*(uint *)(param_1 + 0x68 + uVar6 * 4) <= uVar7) {
      uVar4 = *(ushort *)(param_1 + 100) + 1;
      uVar6 = (ulonglong)uVar4;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(ushort *)(param_1 + 100) = uVar4;
      uVar7 = 0;
    }
    fVar11 = *(float *)(param_1 + 0x54 + uVar6 * 4) + *(float *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x78) = uVar7 + 1;
    *(float *)(param_1 + 0x7c) = fVar11;
    if (*(uint *)(param_1 + 0x168) < *(uint *)(param_1 + 0x16c)) {
      fVar10 = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x164);
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) + 1;
    }
    else {
      fVar10 = *(float *)(param_1 + 0x160);
    }
    *(float *)(param_1 + 0x164) = fVar10;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar5 = *(uint *)(param_1 + 0x14);
    *param_2 = fVar10 * ((fVar9 - fVar1) * fVar12 + fVar2) * fVar11;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x1c) <= uVar5) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if ((*(int *)(param_1 + 0xbc) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1450facd0 FUN_1450facd0 body=695 status=ok
// SIG undefined FUN_1450facd0(void)

void FUN_1450facd0(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  ushort uVar5;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x148);
  fVar15 = *(float *)(lVar4 + 0xc);
  fVar14 = *(float *)(lVar4 + 0x10);
  fVar9 = powf(10.0,*(float *)(lVar4 + 8) * 0.05);
  fVar13 = *(float *)(param_1 + 0x158);
  *(float *)(param_1 + 0x160) = fVar9;
  fVar9 = fVar9 - *(float *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(int *)(param_1 + 0x16c) = (int)(longlong)(ABS(fVar9) / fVar13);
  if (fVar9 <= 0.0) {
    fVar13 = -fVar13;
  }
  *(float *)(param_1 + 0x15c) = fVar13;
  fVar15 = fVar15 + *(float *)(param_1 + 0x2c);
  fVar14 = fVar14 + *(float *)(param_1 + 0x34);
  if (0.001 <= fVar15) {
    fVar13 = *(float *)(param_1 + 0x30);
    if (fVar13 <= fVar15) {
      fVar15 = fVar13 - 1.0;
    }
  }
  else {
    fVar15 = 0.001;
  }
  if (0.001 <= fVar14) {
    fVar13 = *(float *)(param_1 + 0x30);
    if (fVar13 <= fVar14) {
      fVar14 = fVar13 - 1.0;
    }
  }
  else {
    fVar14 = 0.001;
  }
  uVar3 = *(uint *)(param_1 + 0x1c);
  fVar14 = (fVar14 - fVar15) / (float)uVar3;
  *(float *)(param_1 + 0x38) = fVar14;
  iVar8 = param_3;
  while (iVar8 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    iVar8 = iVar8 + -1;
    uVar7 = *(uint *)(param_1 + 0x20) & 0x1ff;
    fVar11 = (((float)*(uint *)(param_1 + 0x14) * fVar14 + fVar15) * 512.0) /
             (float)*(uint *)(param_1 + 8);
    *(float *)(param_1 + 0x28) = fVar11;
    fVar13 = *(float *)(lVar4 + (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
    fVar9 = *(float *)(lVar4 + (ulonglong)uVar7 * 4);
    fVar1 = *(float *)(param_1 + 0x24);
    fVar2 = *(float *)(lVar4 + (ulonglong)uVar7 * 4);
    uVar7 = *(uint *)(param_1 + 0x20) + (int)(longlong)fVar11;
    fVar12 = (fVar11 - (float)((longlong)fVar11 & 0xffffffff)) + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar12;
    fVar11 = fVar14;
    if (1.0 < fVar12) {
      fVar11 = *(float *)(param_1 + 0x38);
      uVar7 = uVar7 + 1;
      *(float *)(param_1 + 0x24) = fVar12 - 1.0;
    }
    uVar6 = (ulonglong)*(ushort *)(param_1 + 100);
    *(uint *)(param_1 + 0x20) = uVar7 & 0x1ff;
    uVar7 = *(uint *)(param_1 + 0x78);
    if (*(uint *)(param_1 + 0x68 + uVar6 * 4) <= uVar7) {
      uVar5 = *(ushort *)(param_1 + 100) + 1;
      uVar6 = (ulonglong)uVar5;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(ushort *)(param_1 + 100) = uVar5;
      uVar7 = 0;
    }
    fVar12 = *(float *)(param_1 + 0x54 + uVar6 * 4) + *(float *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x78) = uVar7 + 1;
    *(float *)(param_1 + 0x7c) = fVar12;
    if (*(uint *)(param_1 + 0x168) < *(uint *)(param_1 + 0x16c)) {
      fVar10 = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x164);
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) + 1;
    }
    else {
      fVar10 = *(float *)(param_1 + 0x160);
    }
    *(float *)(param_1 + 0x164) = fVar10;
    uVar7 = *(uint *)(param_1 + 0x14) + 1;
    *(uint *)(param_1 + 0x14) = uVar7;
    *param_2 = fVar10 * ((fVar13 - fVar9) * fVar1 + fVar2) * fVar12;
    param_2 = param_2 + 1;
    if (uVar3 <= uVar7) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      fVar14 = fVar11;
      if ((*(int *)(param_1 + 0xbc) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1450faf90 FUN_1450faf90 body=742 status=ok
// SIG undefined FUN_1450faf90(void)

void FUN_1450faf90(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x148);
  fVar14 = *(float *)(lVar3 + 0xc);
  fVar13 = *(float *)(lVar3 + 0x10);
  fVar9 = powf(10.0,*(float *)(lVar3 + 8) * 0.05);
  fVar12 = *(float *)(param_1 + 0x158);
  *(float *)(param_1 + 0x160) = fVar9;
  fVar9 = fVar9 - *(float *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(int *)(param_1 + 0x16c) = (int)(longlong)(ABS(fVar9) / fVar12);
  if (fVar9 <= 0.0) {
    fVar12 = -fVar12;
  }
  *(float *)(param_1 + 0x15c) = fVar12;
  fVar14 = fVar14 + *(float *)(param_1 + 0x2c);
  fVar13 = fVar13 + *(float *)(param_1 + 0x34);
  if (0.001 <= fVar14) {
    fVar12 = *(float *)(param_1 + 0x30);
    if (fVar12 <= fVar14) {
      fVar14 = fVar12 - 1.0;
    }
  }
  else {
    fVar14 = 0.001;
  }
  if (0.001 <= fVar13) {
    fVar12 = *(float *)(param_1 + 0x30);
    if (fVar12 <= fVar13) {
      fVar13 = fVar12 - 1.0;
    }
  }
  else {
    fVar13 = 0.001;
  }
  fVar12 = (float)*(uint *)(param_1 + 0x1c);
  if (fVar14 < fVar13) {
    fVar12 = fVar12 * fVar12;
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  *(float *)(param_1 + 0x38) = (fVar13 - fVar14) / fVar12;
  if (param_3 != 0) {
    uVar7 = *(uint *)(param_1 + 0x14);
    iVar8 = param_3;
    do {
      iVar8 = iVar8 + -1;
      fVar12 = (float)uVar7;
      if (fVar14 < fVar13) {
        fVar12 = fVar12 * fVar12;
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      lVar3 = *(longlong *)(param_1 + 0x90);
      uVar6 = *(uint *)(param_1 + 0x20) & 0x1ff;
      fVar11 = ((fVar12 * *(float *)(param_1 + 0x38) + fVar14) * 512.0) /
               (float)*(uint *)(param_1 + 8);
      *(float *)(param_1 + 0x28) = fVar11;
      fVar12 = *(float *)(lVar3 + (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
      fVar9 = *(float *)(lVar3 + (ulonglong)uVar6 * 4);
      fVar1 = *(float *)(param_1 + 0x24);
      fVar2 = *(float *)(lVar3 + (ulonglong)uVar6 * 4);
      uVar6 = *(uint *)(param_1 + 0x20) + (int)(longlong)fVar11;
      fVar11 = (fVar11 - (float)((longlong)fVar11 & 0xffffffff)) + *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x24) = fVar11;
      if (1.0 < fVar11) {
        uVar6 = uVar6 + 1;
        *(float *)(param_1 + 0x24) = fVar11 - 1.0;
      }
      uVar5 = (ulonglong)*(ushort *)(param_1 + 100);
      *(uint *)(param_1 + 0x20) = uVar6 & 0x1ff;
      uVar6 = *(uint *)(param_1 + 0x78);
      if (*(uint *)(param_1 + 0x68 + uVar5 * 4) <= uVar6) {
        uVar4 = *(ushort *)(param_1 + 100) + 1;
        uVar5 = (ulonglong)uVar4;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(ushort *)(param_1 + 100) = uVar4;
        uVar6 = 0;
      }
      fVar11 = *(float *)(param_1 + 0x54 + uVar5 * 4) + *(float *)(param_1 + 0x7c);
      *(uint *)(param_1 + 0x78) = uVar6 + 1;
      *(float *)(param_1 + 0x7c) = fVar11;
      if (*(uint *)(param_1 + 0x168) < *(uint *)(param_1 + 0x16c)) {
        fVar10 = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x164);
        *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) + 1;
      }
      else {
        fVar10 = *(float *)(param_1 + 0x160);
      }
      *(float *)(param_1 + 0x164) = fVar10;
      uVar7 = uVar7 + 1;
      *(uint *)(param_1 + 0x14) = uVar7;
      *param_2 = fVar10 * ((fVar12 - fVar9) * fVar1 + fVar2) * fVar11;
      param_2 = param_2 + 1;
      if (*(uint *)(param_1 + 0x1c) <= uVar7) {
        uVar7 = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        if ((*(int *)(param_1 + 0xbc) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
        }
      }
    } while (iVar8 != 0);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1450fb280 FUN_1450fb280 body=1702 status=ok
// SIG undefined FUN_1450fb280(void)

void FUN_1450fb280(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar6;
  
  lVar8 = *(longlong *)(param_1 + 0x148);
  fVar18 = *(float *)(lVar8 + 0xc);
  fVar14 = *(float *)(lVar8 + 0x10);
  fVar10 = powf(10.0,*(float *)(lVar8 + 8) * 0.05);
  fVar12 = *(float *)(param_1 + 0x158);
  *(float *)(param_1 + 0x160) = fVar10;
  fVar10 = fVar10 - *(float *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(int *)(param_1 + 0x16c) = (int)(longlong)(ABS(fVar10) / fVar12);
  if (fVar10 <= 0.0) {
    fVar12 = -fVar12;
  }
  *(float *)(param_1 + 0x15c) = fVar12;
  fVar18 = fVar18 + *(float *)(param_1 + 0x2c);
  fVar14 = fVar14 + *(float *)(param_1 + 0x34);
  if (0.001 <= fVar18) {
    fVar12 = *(float *)(param_1 + 0x30);
    if (fVar12 <= fVar18) {
      fVar18 = fVar12 - 1.0;
    }
  }
  else {
    fVar18 = 0.001;
  }
  if (0.001 <= fVar14) {
    fVar12 = *(float *)(param_1 + 0x30);
    if (fVar12 <= fVar14) {
      fVar14 = fVar12 - 1.0;
    }
  }
  else {
    fVar14 = 0.001;
  }
  fVar12 = (float)*(uint *)(param_1 + 0x1c);
  if (fVar18 < fVar14) {
    fVar12 = (0.0625 / (fVar12 * fVar12)) * (fVar14 - fVar18);
  }
  else {
    fVar12 = (fVar14 - fVar18) / SQRT(fVar12 * 4.0);
  }
  *(float *)(param_1 + 0x38) = fVar12;
  iVar9 = param_3;
  while (iVar9 != 0) {
    iVar9 = iVar9 + -1;
    fVar12 = (float)(uint)(*(int *)(param_1 + 0x14) << 2);
    if (fVar18 < fVar14) {
      fVar12 = fVar12 * fVar12;
    }
    else {
      fVar12 = SQRT(fVar12);
    }
    lVar8 = 2;
    fVar12 = ((*(float *)(param_1 + 0x38) * fVar12 + fVar18) * 512.0) / *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x28) = fVar12;
    fVar10 = fVar12 - (float)((longlong)fVar12 & 0xffffffff);
    do {
      lVar2 = *(longlong *)(param_1 + 0x90);
      uVar7 = *(uint *)(param_1 + 0x20) & 0x1ff;
      fVar11 = *(float *)(param_1 + 0x24) + fVar10;
      fVar15 = (*(float *)(lVar2 + (ulonglong)(uVar7 + 1 & 0x1ff) * 4) -
               *(float *)(lVar2 + (ulonglong)uVar7 * 4)) * *(float *)(param_1 + 0x24) +
               *(float *)(lVar2 + (ulonglong)uVar7 * 4);
      iVar3 = (int)(longlong)fVar12;
      uVar7 = *(uint *)(param_1 + 0x20) + iVar3;
      *(float *)(param_1 + 0x24) = fVar11;
      if (1.0 < fVar11) {
        uVar7 = uVar7 + 1;
        *(float *)(param_1 + 0x24) = fVar11 - 1.0;
      }
      fVar11 = *(float *)(param_1 + 0xf0);
      uVar7 = uVar7 & 0x1ff;
      *(uint *)(param_1 + 0x20) = uVar7;
      fVar17 = *(float *)(param_1 + 0xf4);
      *(float *)(param_1 + 0xf0) = fVar15;
      *(float *)(param_1 + 0xf4) = fVar11;
      fVar16 = *(float *)(param_1 + 0x114);
      fVar13 = *(float *)(param_1 + 0xfc);
      *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xf8);
      fVar1 = *(float *)(param_1 + 0x118);
      *(float *)(param_1 + 0x118) = fVar16;
      fVar13 = (fVar11 * *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xdc) * fVar15 +
               *(float *)(param_1 + 0xe4) * fVar17) -
               (*(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xe8) +
               *(float *)(param_1 + 0xec) * fVar13);
      *(float *)(param_1 + 0xf8) = fVar13;
      *(float *)(param_1 + 0x114) = fVar13;
      fVar11 = *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0x120) = *(float *)(param_1 + 0x11c);
      fVar15 = *(float *)(param_1 + 0x138);
      fVar17 = *(float *)(param_1 + 0x13c);
      fVar16 = (fVar16 * *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x100) * fVar13 +
               *(float *)(param_1 + 0x108) * fVar1) -
               (*(float *)(param_1 + 0x11c) * *(float *)(param_1 + 0x10c) +
               *(float *)(param_1 + 0x110) * fVar11);
      *(float *)(param_1 + 0x13c) = fVar15;
      *(float *)(param_1 + 0x11c) = fVar16;
      *(float *)(param_1 + 0x138) = fVar16;
      fVar11 = *(float *)(param_1 + 0x144);
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x140);
      *(float *)(param_1 + 0x140) =
           (fVar16 * *(float *)(param_1 + 0x124) + fVar15 * *(float *)(param_1 + 0x128) +
           *(float *)(param_1 + 300) * fVar17) -
           (*(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x130) +
           *(float *)(param_1 + 0x134) * fVar11);
      lVar2 = *(longlong *)(param_1 + 0x90);
      uVar5 = uVar7 + iVar3;
      fVar11 = *(float *)(param_1 + 0x24) + fVar10;
      fVar15 = (*(float *)(lVar2 + (ulonglong)(uVar7 + 1 & 0x1ff) * 4) -
               *(float *)(lVar2 + (ulonglong)uVar7 * 4)) * *(float *)(param_1 + 0x24) +
               *(float *)(lVar2 + (ulonglong)uVar7 * 4);
      *(float *)(param_1 + 0x24) = fVar11;
      if (1.0 < fVar11) {
        uVar5 = uVar5 + 1;
        *(float *)(param_1 + 0x24) = fVar11 - 1.0;
      }
      *(uint *)(param_1 + 0x20) = uVar5 & 0x1ff;
      fVar11 = *(float *)(param_1 + 0xf0);
      fVar17 = *(float *)(param_1 + 0xf4);
      fVar13 = *(float *)(param_1 + 0xfc);
      *(float *)(param_1 + 0xf4) = fVar11;
      *(float *)(param_1 + 0xf0) = fVar15;
      *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xf8);
      fVar13 = (*(float *)(param_1 + 0xdc) * fVar15 + fVar11 * *(float *)(param_1 + 0xe0) +
               fVar17 * *(float *)(param_1 + 0xe4)) -
               (fVar13 * *(float *)(param_1 + 0xec) +
               *(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xe8));
      *(float *)(param_1 + 0xf8) = fVar13;
      fVar11 = *(float *)(param_1 + 0x114);
      fVar15 = *(float *)(param_1 + 0x118);
      fVar17 = *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0x118) = fVar11;
      *(float *)(param_1 + 0x114) = fVar13;
      *(float *)(param_1 + 0x120) = fVar16;
      fVar17 = (*(float *)(param_1 + 0x100) * fVar13 + fVar11 * *(float *)(param_1 + 0x104) +
               *(float *)(param_1 + 0x108) * fVar15) -
               (fVar16 * *(float *)(param_1 + 0x10c) + *(float *)(param_1 + 0x110) * fVar17);
      *(float *)(param_1 + 0x11c) = fVar17;
      fVar11 = *(float *)(param_1 + 0x13c);
      fVar15 = *(float *)(param_1 + 0x144);
      *(float *)(param_1 + 0x13c) = fVar16;
      *(float *)(param_1 + 0x138) = fVar17;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x140);
      fVar11 = (fVar16 * *(float *)(param_1 + 0x128) + fVar17 * *(float *)(param_1 + 0x124) +
               *(float *)(param_1 + 300) * fVar11) -
               (*(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x130) +
               *(float *)(param_1 + 0x134) * fVar15);
      *(float *)(param_1 + 0x140) = fVar11;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar6 = (ulonglong)*(ushort *)(param_1 + 100);
    uVar7 = *(uint *)(param_1 + 0x78);
    if (*(uint *)(param_1 + 0x68 + uVar6 * 4) <= uVar7) {
      uVar4 = *(ushort *)(param_1 + 100) + 1;
      uVar6 = (ulonglong)uVar4;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(ushort *)(param_1 + 100) = uVar4;
      uVar7 = 0;
    }
    fVar12 = *(float *)(param_1 + 0x54 + uVar6 * 4) + *(float *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x78) = uVar7 + 1;
    *(float *)(param_1 + 0x7c) = fVar12;
    if (*(uint *)(param_1 + 0x168) < *(uint *)(param_1 + 0x16c)) {
      fVar10 = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x164);
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) + 1;
    }
    else {
      fVar10 = *(float *)(param_1 + 0x160);
    }
    *(float *)(param_1 + 0x164) = fVar10;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar7 = *(uint *)(param_1 + 0x14);
    *param_2 = fVar10 * fVar12 * fVar11;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x1c) <= uVar7) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if ((*(int *)(param_1 + 0xbc) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1450fb930 FUN_1450fb930 body=1603 status=ok
// SIG undefined FUN_1450fb930(void)

void FUN_1450fb930(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar6;
  
  lVar8 = *(longlong *)(param_1 + 0x148);
  fVar17 = *(float *)(lVar8 + 0xc);
  fVar14 = *(float *)(lVar8 + 0x10);
  fVar10 = powf(10.0,*(float *)(lVar8 + 8) * 0.05);
  fVar11 = *(float *)(param_1 + 0x158);
  *(float *)(param_1 + 0x160) = fVar10;
  fVar10 = fVar10 - *(float *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(int *)(param_1 + 0x16c) = (int)(longlong)(ABS(fVar10) / fVar11);
  if (fVar10 <= 0.0) {
    fVar11 = -fVar11;
  }
  *(float *)(param_1 + 0x15c) = fVar11;
  fVar17 = fVar17 + *(float *)(param_1 + 0x2c);
  fVar14 = fVar14 + *(float *)(param_1 + 0x34);
  if (0.001 <= fVar17) {
    fVar11 = *(float *)(param_1 + 0x30);
    if (fVar11 <= fVar17) {
      fVar17 = fVar11 - 1.0;
    }
  }
  else {
    fVar17 = 0.001;
  }
  if (0.001 <= fVar14) {
    fVar11 = *(float *)(param_1 + 0x30);
    if (fVar11 <= fVar14) {
      fVar14 = fVar11 - 1.0;
    }
  }
  else {
    fVar14 = 0.001;
  }
  *(float *)(param_1 + 0x38) = (fVar14 - fVar17) / (float)(uint)(*(int *)(param_1 + 0x1c) << 2);
  iVar9 = param_3;
  while (iVar9 != 0) {
    iVar9 = iVar9 + -1;
    lVar8 = 2;
    fVar14 = (((float)(uint)(*(int *)(param_1 + 0x14) << 2) * *(float *)(param_1 + 0x38) + fVar17) *
             512.0) / *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x28) = fVar14;
    fVar11 = fVar14 - (float)((longlong)fVar14 & 0xffffffff);
    do {
      lVar2 = *(longlong *)(param_1 + 0x90);
      uVar7 = *(uint *)(param_1 + 0x20) & 0x1ff;
      fVar10 = *(float *)(param_1 + 0x24) + fVar11;
      fVar15 = (*(float *)(lVar2 + (ulonglong)(uVar7 + 1 & 0x1ff) * 4) -
               *(float *)(lVar2 + (ulonglong)uVar7 * 4)) * *(float *)(param_1 + 0x24) +
               *(float *)(lVar2 + (ulonglong)uVar7 * 4);
      iVar3 = (int)(longlong)fVar14;
      uVar7 = *(uint *)(param_1 + 0x20) + iVar3;
      *(float *)(param_1 + 0x24) = fVar10;
      if (1.0 < fVar10) {
        uVar7 = uVar7 + 1;
        *(float *)(param_1 + 0x24) = fVar10 - 1.0;
      }
      fVar10 = *(float *)(param_1 + 0xf0);
      uVar7 = uVar7 & 0x1ff;
      *(uint *)(param_1 + 0x20) = uVar7;
      fVar13 = *(float *)(param_1 + 0xf4);
      fVar12 = *(float *)(param_1 + 0xfc);
      *(float *)(param_1 + 0xf0) = fVar15;
      *(float *)(param_1 + 0xf4) = fVar10;
      fVar16 = *(float *)(param_1 + 0x114);
      *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xf8);
      fVar1 = *(float *)(param_1 + 0x118);
      *(float *)(param_1 + 0x118) = fVar16;
      fVar12 = (fVar10 * *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xdc) * fVar15 +
               *(float *)(param_1 + 0xe4) * fVar13) -
               (*(float *)(param_1 + 0xec) * fVar12 +
               *(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xe8));
      fVar10 = *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0x120) = *(float *)(param_1 + 0x11c);
      *(float *)(param_1 + 0xf8) = fVar12;
      *(float *)(param_1 + 0x114) = fVar12;
      fVar15 = *(float *)(param_1 + 0x138);
      fVar13 = *(float *)(param_1 + 0x13c);
      fVar12 = (fVar16 * *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x100) * fVar12 +
               *(float *)(param_1 + 0x108) * fVar1) -
               (*(float *)(param_1 + 0x110) * fVar10 +
               *(float *)(param_1 + 0x11c) * *(float *)(param_1 + 0x10c));
      *(float *)(param_1 + 0x13c) = fVar15;
      fVar10 = *(float *)(param_1 + 0x144);
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x140);
      *(float *)(param_1 + 0x11c) = fVar12;
      *(float *)(param_1 + 0x138) = fVar12;
      *(float *)(param_1 + 0x140) =
           (fVar12 * *(float *)(param_1 + 0x124) + fVar15 * *(float *)(param_1 + 0x128) +
           *(float *)(param_1 + 300) * fVar13) -
           (*(float *)(param_1 + 0x134) * fVar10 +
           *(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x130));
      lVar2 = *(longlong *)(param_1 + 0x90);
      uVar5 = uVar7 + iVar3;
      fVar10 = *(float *)(param_1 + 0x24) + fVar11;
      fVar15 = (*(float *)(lVar2 + (ulonglong)(uVar7 + 1 & 0x1ff) * 4) -
               *(float *)(lVar2 + (ulonglong)uVar7 * 4)) * *(float *)(param_1 + 0x24) +
               *(float *)(lVar2 + (ulonglong)uVar7 * 4);
      *(float *)(param_1 + 0x24) = fVar10;
      if (1.0 < fVar10) {
        uVar5 = uVar5 + 1;
        *(float *)(param_1 + 0x24) = fVar10 - 1.0;
      }
      *(uint *)(param_1 + 0x20) = uVar5 & 0x1ff;
      fVar10 = *(float *)(param_1 + 0xf0);
      fVar13 = *(float *)(param_1 + 0xf4);
      fVar16 = *(float *)(param_1 + 0xfc);
      *(float *)(param_1 + 0xf4) = fVar10;
      *(float *)(param_1 + 0xf0) = fVar15;
      *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xf8);
      fVar16 = (*(float *)(param_1 + 0xdc) * fVar15 + fVar10 * *(float *)(param_1 + 0xe0) +
               fVar13 * *(float *)(param_1 + 0xe4)) -
               (fVar16 * *(float *)(param_1 + 0xec) +
               *(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xe8));
      *(float *)(param_1 + 0xf8) = fVar16;
      fVar10 = *(float *)(param_1 + 0x114);
      fVar15 = *(float *)(param_1 + 0x118);
      fVar13 = *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0x118) = fVar10;
      *(float *)(param_1 + 0x114) = fVar16;
      *(float *)(param_1 + 0x120) = fVar12;
      fVar13 = (fVar10 * *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x100) * fVar16 +
               *(float *)(param_1 + 0x108) * fVar15) -
               (*(float *)(param_1 + 0x110) * fVar13 + fVar12 * *(float *)(param_1 + 0x10c));
      *(float *)(param_1 + 0x11c) = fVar13;
      fVar10 = *(float *)(param_1 + 0x13c);
      fVar15 = *(float *)(param_1 + 0x144);
      *(float *)(param_1 + 0x13c) = fVar12;
      *(float *)(param_1 + 0x138) = fVar13;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x140);
      fVar10 = (fVar12 * *(float *)(param_1 + 0x128) + fVar13 * *(float *)(param_1 + 0x124) +
               *(float *)(param_1 + 300) * fVar10) -
               (*(float *)(param_1 + 0x134) * fVar15 +
               *(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x130));
      *(float *)(param_1 + 0x140) = fVar10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar6 = (ulonglong)*(ushort *)(param_1 + 100);
    uVar7 = *(uint *)(param_1 + 0x78);
    if (*(uint *)(param_1 + 0x68 + uVar6 * 4) <= uVar7) {
      uVar4 = *(ushort *)(param_1 + 100) + 1;
      uVar6 = (ulonglong)uVar4;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(ushort *)(param_1 + 100) = uVar4;
      uVar7 = 0;
    }
    fVar14 = *(float *)(param_1 + 0x54 + uVar6 * 4) + *(float *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x78) = uVar7 + 1;
    *(float *)(param_1 + 0x7c) = fVar14;
    if (*(uint *)(param_1 + 0x168) < *(uint *)(param_1 + 0x16c)) {
      fVar11 = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x164);
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) + 1;
    }
    else {
      fVar11 = *(float *)(param_1 + 0x160);
    }
    *(float *)(param_1 + 0x164) = fVar11;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar7 = *(uint *)(param_1 + 0x14);
    *param_2 = fVar11 * fVar14 * fVar10;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x1c) <= uVar7) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if ((*(int *)(param_1 + 0xbc) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1450fbf80 FUN_1450fbf80 body=1477 status=ok
// SIG undefined FUN_1450fbf80(void)

void FUN_1450fbf80(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar6;
  
  fVar16 = *(float *)(*(longlong *)(param_1 + 0x148) + 0xc);
  fVar10 = powf(10.0,*(float *)(*(longlong *)(param_1 + 0x148) + 8) * 0.05);
  fVar11 = *(float *)(param_1 + 0x158);
  *(float *)(param_1 + 0x160) = fVar10;
  fVar10 = fVar10 - *(float *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(int *)(param_1 + 0x16c) = (int)(longlong)(ABS(fVar10) / fVar11);
  if (fVar10 <= 0.0) {
    fVar11 = -fVar11;
  }
  *(float *)(param_1 + 0x15c) = fVar11;
  fVar16 = fVar16 + *(float *)(param_1 + 0x2c);
  if (0.001 <= fVar16) {
    if (*(float *)(param_1 + 0x30) <= fVar16) {
      fVar16 = *(float *)(param_1 + 0x30) - 1.0;
    }
  }
  else {
    fVar16 = 0.001;
  }
  fVar16 = (fVar16 * 512.0) / *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x28) = fVar16;
  fVar11 = fVar16 - (float)((longlong)fVar16 & 0xffffffff);
  iVar9 = param_3;
  while (iVar9 != 0) {
    iVar9 = iVar9 + -1;
    lVar8 = 2;
    do {
      lVar2 = *(longlong *)(param_1 + 0x90);
      uVar7 = *(uint *)(param_1 + 0x20) & 0x1ff;
      fVar10 = *(float *)(param_1 + 0x24) + fVar11;
      fVar14 = (*(float *)(lVar2 + (ulonglong)(uVar7 + 1 & 0x1ff) * 4) -
               *(float *)(lVar2 + (ulonglong)uVar7 * 4)) * *(float *)(param_1 + 0x24) +
               *(float *)(lVar2 + (ulonglong)uVar7 * 4);
      iVar3 = (int)(longlong)fVar16;
      uVar7 = *(uint *)(param_1 + 0x20) + iVar3;
      *(float *)(param_1 + 0x24) = fVar10;
      if (1.0 < fVar10) {
        uVar7 = uVar7 + 1;
        *(float *)(param_1 + 0x24) = fVar10 - 1.0;
      }
      fVar10 = *(float *)(param_1 + 0xf0);
      uVar7 = uVar7 & 0x1ff;
      *(uint *)(param_1 + 0x20) = uVar7;
      fVar13 = *(float *)(param_1 + 0xf4);
      *(float *)(param_1 + 0xf0) = fVar14;
      *(float *)(param_1 + 0xf4) = fVar10;
      fVar15 = *(float *)(param_1 + 0x114);
      fVar12 = *(float *)(param_1 + 0xfc);
      *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xf8);
      fVar1 = *(float *)(param_1 + 0x118);
      fVar12 = (*(float *)(param_1 + 0xdc) * fVar14 + fVar10 * *(float *)(param_1 + 0xe0) +
               *(float *)(param_1 + 0xe4) * fVar13) -
               (*(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xe8) +
               *(float *)(param_1 + 0xec) * fVar12);
      *(float *)(param_1 + 0x118) = fVar15;
      *(float *)(param_1 + 0xf8) = fVar12;
      *(float *)(param_1 + 0x114) = fVar12;
      fVar10 = *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0x120) = *(float *)(param_1 + 0x11c);
      fVar14 = *(float *)(param_1 + 0x138);
      fVar13 = *(float *)(param_1 + 0x13c);
      fVar15 = (*(float *)(param_1 + 0x100) * fVar12 + fVar15 * *(float *)(param_1 + 0x104) +
               *(float *)(param_1 + 0x108) * fVar1) -
               (*(float *)(param_1 + 0x11c) * *(float *)(param_1 + 0x10c) +
               *(float *)(param_1 + 0x110) * fVar10);
      *(float *)(param_1 + 0x13c) = fVar14;
      fVar10 = *(float *)(param_1 + 0x144);
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x140);
      *(float *)(param_1 + 0x11c) = fVar15;
      *(float *)(param_1 + 0x138) = fVar15;
      *(float *)(param_1 + 0x140) =
           (fVar14 * *(float *)(param_1 + 0x128) + fVar15 * *(float *)(param_1 + 0x124) +
           *(float *)(param_1 + 300) * fVar13) -
           (*(float *)(param_1 + 0x134) * fVar10 +
           *(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x130));
      lVar2 = *(longlong *)(param_1 + 0x90);
      uVar5 = uVar7 + iVar3;
      fVar10 = *(float *)(param_1 + 0x24) + fVar11;
      fVar14 = (*(float *)(lVar2 + (ulonglong)(uVar7 + 1 & 0x1ff) * 4) -
               *(float *)(lVar2 + (ulonglong)uVar7 * 4)) * *(float *)(param_1 + 0x24) +
               *(float *)(lVar2 + (ulonglong)uVar7 * 4);
      *(float *)(param_1 + 0x24) = fVar10;
      if (1.0 < fVar10) {
        uVar5 = uVar5 + 1;
        *(float *)(param_1 + 0x24) = fVar10 - 1.0;
      }
      *(uint *)(param_1 + 0x20) = uVar5 & 0x1ff;
      fVar10 = *(float *)(param_1 + 0xf0);
      fVar13 = *(float *)(param_1 + 0xf4);
      fVar12 = *(float *)(param_1 + 0xfc);
      *(float *)(param_1 + 0xf4) = fVar10;
      *(float *)(param_1 + 0xf0) = fVar14;
      *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xf8);
      fVar12 = (fVar10 * *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xdc) * fVar14 +
               fVar13 * *(float *)(param_1 + 0xe4)) -
               (*(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xe8) +
               fVar12 * *(float *)(param_1 + 0xec));
      *(float *)(param_1 + 0xf8) = fVar12;
      fVar10 = *(float *)(param_1 + 0x114);
      fVar14 = *(float *)(param_1 + 0x118);
      fVar13 = *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0x118) = fVar10;
      *(float *)(param_1 + 0x114) = fVar12;
      *(float *)(param_1 + 0x120) = fVar15;
      fVar13 = (fVar10 * *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x100) * fVar12 +
               *(float *)(param_1 + 0x108) * fVar14) -
               (*(float *)(param_1 + 0x110) * fVar13 + fVar15 * *(float *)(param_1 + 0x10c));
      *(float *)(param_1 + 0x11c) = fVar13;
      fVar10 = *(float *)(param_1 + 0x13c);
      fVar14 = *(float *)(param_1 + 0x144);
      *(float *)(param_1 + 0x13c) = fVar15;
      *(float *)(param_1 + 0x138) = fVar13;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x140);
      fVar10 = (fVar15 * *(float *)(param_1 + 0x128) + fVar13 * *(float *)(param_1 + 0x124) +
               *(float *)(param_1 + 300) * fVar10) -
               (*(float *)(param_1 + 0x134) * fVar14 +
               *(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x130));
      *(float *)(param_1 + 0x140) = fVar10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar6 = (ulonglong)*(ushort *)(param_1 + 100);
    uVar7 = *(uint *)(param_1 + 0x78);
    if (*(uint *)(param_1 + 0x68 + uVar6 * 4) <= uVar7) {
      uVar4 = *(ushort *)(param_1 + 100) + 1;
      uVar6 = (ulonglong)uVar4;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(ushort *)(param_1 + 100) = uVar4;
      uVar7 = 0;
    }
    fVar14 = *(float *)(param_1 + 0x54 + uVar6 * 4) + *(float *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x78) = uVar7 + 1;
    *(float *)(param_1 + 0x7c) = fVar14;
    if (*(uint *)(param_1 + 0x168) < *(uint *)(param_1 + 0x16c)) {
      fVar13 = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x164);
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) + 1;
    }
    else {
      fVar13 = *(float *)(param_1 + 0x160);
    }
    *(float *)(param_1 + 0x164) = fVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar7 = *(uint *)(param_1 + 0x14);
    *param_2 = fVar13 * fVar14 * fVar10;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x1c) <= uVar7) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if ((*(int *)(param_1 + 0xbc) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1450fc550 FUN_1450fc550 body=420 status=ok
// SIG undefined FUN_1450fc550(void)

void FUN_1450fc550(longlong param_1,float *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar3;
  
  fVar8 = powf(10.0,*(float *)(*(longlong *)(param_1 + 0x148) + 8) * 0.05);
  fVar10 = *(float *)(param_1 + 0x158);
  *(float *)(param_1 + 0x160) = fVar8;
  fVar8 = fVar8 - *(float *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(int *)(param_1 + 0x16c) = (int)(longlong)(ABS(fVar8) / fVar10);
  if (fVar8 <= 0.0) {
    fVar10 = -fVar10;
  }
  *(float *)(param_1 + 0x15c) = fVar10;
  if (param_3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    uVar6 = *(uint *)(param_1 + 0x1c);
    iVar7 = param_3;
    do {
      iVar7 = iVar7 + -1;
      uVar5 = *(uint *)(param_1 + 0x78);
      iVar2 = *(int *)(param_1 + 0x80) * 0xbb38435 + 0x3619636b;
      *(int *)(param_1 + 0x80) = iVar2;
      uVar3 = (ulonglong)*(ushort *)(param_1 + 100);
      if (*(uint *)(param_1 + 0x68 + uVar3 * 4) <= uVar5) {
        uVar4 = *(uint *)(param_1 + 0x14);
        uVar1 = *(ushort *)(param_1 + 100) + 1;
        uVar3 = (ulonglong)uVar1;
        uVar6 = *(uint *)(param_1 + 0x1c);
        uVar5 = 0;
        *(ushort *)(param_1 + 100) = uVar1;
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      fVar8 = *(float *)(param_1 + 0x54 + uVar3 * 4) + *(float *)(param_1 + 0x7c);
      *(uint *)(param_1 + 0x78) = uVar5 + 1;
      *(float *)(param_1 + 0x7c) = fVar8;
      if (*(uint *)(param_1 + 0x168) < *(uint *)(param_1 + 0x16c)) {
        fVar9 = fVar10 + *(float *)(param_1 + 0x164);
        *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) + 1;
      }
      else {
        fVar9 = *(float *)(param_1 + 0x160);
      }
      *(float *)(param_1 + 0x164) = fVar9;
      *param_2 = (float)iVar2 * fVar8 * fVar9 * 4.656613e-10;
      param_2 = param_2 + 1;
      uVar4 = uVar4 + 1;
      *(uint *)(param_1 + 0x14) = uVar4;
      if (uVar6 <= uVar4) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        if ((*(int *)(param_1 + 0xbc) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
        }
        uVar4 = 0;
      }
    } while (iVar7 != 0);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1450fc700 FUN_1450fc700 body=532 status=ok
// SIG undefined FUN_1450fc700(void)

void FUN_1450fc700(longlong param_1,float *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar4;
  
  fVar7 = powf(10.0,*(float *)(*(longlong *)(param_1 + 0x148) + 8) * 0.05);
  fVar8 = *(float *)(param_1 + 0x158);
  *(float *)(param_1 + 0x160) = fVar7;
  fVar7 = fVar7 - *(float *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(int *)(param_1 + 0x16c) = (int)(longlong)(ABS(fVar7) / fVar8);
  if (fVar7 <= 0.0) {
    fVar8 = -fVar8;
  }
  *(float *)(param_1 + 0x15c) = fVar8;
  iVar6 = param_3;
  while (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    uVar2 = *(int *)(param_1 + 0x44) + 1U & *(uint *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x44) = uVar2;
    if (uVar2 != 0) {
      uVar5 = 0;
      for (; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1) {
        uVar5 = uVar5 + 1;
      }
      iVar3 = *(int *)(param_1 + 0x80) * 0xbb38435 + 0x3619636b;
      fVar8 = *(float *)(*(longlong *)(param_1 + 0x98) + (ulonglong)uVar5 * 4);
      *(int *)(param_1 + 0x80) = iVar3;
      fVar7 = (float)iVar3 * 4.656613e-10;
      *(float *)(param_1 + 0x48) = (*(float *)(param_1 + 0x48) - fVar8) + fVar7;
      *(float *)(*(longlong *)(param_1 + 0x98) + (ulonglong)uVar5 * 4) = fVar7;
    }
    uVar2 = *(uint *)(param_1 + 0x78);
    iVar3 = *(int *)(param_1 + 0x80) * 0xbb38435 + 0x3619636b;
    *(int *)(param_1 + 0x80) = iVar3;
    uVar4 = (ulonglong)*(ushort *)(param_1 + 100);
    if (*(uint *)(param_1 + 0x68 + uVar4 * 4) <= uVar2) {
      uVar1 = *(ushort *)(param_1 + 100) + 1;
      uVar4 = (ulonglong)uVar1;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(ushort *)(param_1 + 100) = uVar1;
      uVar2 = 0;
    }
    fVar8 = *(float *)(param_1 + 0x54 + uVar4 * 4) + *(float *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x78) = uVar2 + 1;
    *(float *)(param_1 + 0x7c) = fVar8;
    if (*(uint *)(param_1 + 0x168) < *(uint *)(param_1 + 0x16c)) {
      fVar7 = *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x164);
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) + 1;
    }
    else {
      fVar7 = *(float *)(param_1 + 0x160);
    }
    *(float *)(param_1 + 0x164) = fVar7;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar2 = *(uint *)(param_1 + 0x14);
    fVar7 = fVar7 * ((float)iVar3 * 4.656613e-10 + *(float *)(param_1 + 0x48)) *
                    *(float *)(param_1 + 0x4c) * fVar8;
    if (fVar7 <= -1.0) {
      fVar7 = -1.0;
    }
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    *param_2 = fVar7;
    param_2 = param_2 + 1;
    if (*(uint *)(param_1 + 0x1c) <= uVar2) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if ((*(int *)(param_1 + 0xbc) == 1) || (*(short *)(param_1 + 0xc) == 1)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      }
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}



// FUNCTION 1450fc920 FUN_1450fc920 body=212 status=ok
// SIG undefined FUN_1450fc920(void)

undefined4
FUN_1450fc920(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,uint *param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(longlong **)(param_1 + 0x18) = param_3;
  *(longlong *)(param_1 + 8) = param_4;
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_4 + 0x24);
    *(float *)(param_1 + 0x30) = (float)*param_5;
    pcVar3 = (char *)(**(code **)(*param_3 + 0x80))(param_3,local_18);
    pcVar1 = (char *)(param_1 + 0x20);
    if (pcVar1 != pcVar3) {
      *(undefined8 *)pcVar1 = *(undefined8 *)pcVar3;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(pcVar3 + 8);
    }
    cVar2 = *pcVar1;
    if ((cVar2 == '\0') ||
       ((((cVar2 != -0x70 || (*(char *)(param_1 + 0x25) == '\0')) && (cVar2 != -0x80)) &&
        ((cVar2 != -0x70 || (*(char *)(param_1 + 0x25) != '\0')))))) {
      *(undefined1 *)(param_1 + 0x20) = 0x80;
      *(undefined1 *)(param_1 + 0x25) = 0;
      *(undefined1 *)(param_1 + 0x24) = 0x30;
    }
    FUN_1453b7420(param_1 + 0x40,*(undefined8 *)(param_1 + 8),param_3,
                  *(undefined4 *)(param_1 + 0x30),param_1 + 0x20);
    return 1;
  }
  return 2;
}



// FUNCTION 1450fca00 FUN_1450fca00 body=56 status=ok
// SIG undefined FUN_1450fca00(void)

undefined8 FUN_1450fca00(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1450fca40 FUN_1450fca40 body=27 status=ok
// SIG undefined FUN_1450fca40(void)

undefined8 FUN_1450fca40(longlong param_1)

{
  FUN_1453b75f0(param_1 + 0x40,*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 1450fca80 FUN_1450fca80 body=207 status=ok
// SIG undefined FUN_1450fca80(void)

void FUN_1450fca80(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_2 + 2);
  uVar3 = (uint)uVar4 * 4;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar3 = (uint)uVar4;
  }
  *(uint *)(param_1 + 0x34) = uVar3 << 4;
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                    (*(longlong **)(param_1 + 0x10),uVar3 << 4,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkSynthOne\\AkSynthOne.cpp"
                     ,0xae);
  *(longlong *)(param_1 + 0x38) = lVar2;
  if (lVar2 == 0) {
    *(undefined2 *)((longlong)param_2 + 0x12) = 0;
  }
  else {
    if (uVar4 != 0) {
      FUN_1453b78a0(param_1 + 0x40,*(undefined8 *)(param_1 + 8),uVar4);
      cVar1 = FUN_1453b7e90(param_1 + 0x40,uVar4,*param_2,*(undefined8 *)(param_1 + 0x38));
      *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
      *(ushort *)((longlong)param_2 + 0x12) = uVar4;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 1450fcb60 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__149c2a468;
  FUN_1453b7410(this + 0x40);
  *(undefined ***)this = &PTR_FUN_1499d16b8;
  if ((param_1 & 1) != 0) {
    thunk_FUN_1400020a8(this,0x3f0);
  }
  return this;
}



// FUNCTION 1450fcbb0 FUN_1450fcbb0 body=100 status=ok
// SIG undefined FUN_1450fcbb0(void)

undefined8 * FUN_1450fcbb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x3f0,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkSynthOne\\AkSynthOne.cpp"
                      ,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar1 + 4) = 0xff00;
    *puVar1 = &PTR__scalar_deleting_destructor__149c2a468;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    FUN_1453b7300(puVar1 + 8);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1450fcc20 FUN_1450fcc20 body=107 status=ok
// SIG undefined FUN_1450fcc20(void)

void FUN_1450fcc20(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x50,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkSynthOne\\AkSynthOneParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2a550;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 1450fcce0 FUN_1450fcce0 body=56 status=ok
// SIG undefined FUN_1450fcce0(void)

undefined8 FUN_1450fcce0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1450fcf90 FUN_1450fcf90 body=43 status=ok
// SIG undefined FUN_1450fcf90(void)

undefined8 * FUN_1450fcf90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1450fcfc0 FUN_1450fcfc0 body=52 status=ok
// SIG undefined FUN_1450fcfc0(void)

void FUN_1450fcfc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x50,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkSynthOne\\AkSynthOneParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2a550;
    return;
  }
  return;
}



// FUNCTION 1450fd030 FUN_1450fd030 body=90 status=ok
// SIG undefined FUN_1450fd030(void)

undefined8 FUN_1450fd030(undefined8 *param_1,longlong *param_2)

{
  if (param_1[9] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (param_1[8] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 1450fd090 FUN_1450fd090 body=126 status=ok
// SIG undefined FUN_1450fd090(void)

undefined8 FUN_1450fd090(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x48),0,
           (ulonglong)*(byte *)(param_1 + 0x28) * (ulonglong)*(uint *)(param_1 + 0x38) * 4);
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) && (uVar2 = 0, *(int *)(param_1 + 0x34) != 0)) {
    do {
      uVar1 = (ulonglong)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 4 + uVar1 * 0x10) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 8 + uVar1 * 0x10) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + uVar1 * 0x10) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0xc + uVar1 * 0x10) = 0;
    } while (uVar2 < *(uint *)(param_1 + 0x34));
  }
  *(undefined1 *)(param_1 + 100) = 1;
  return 1;
}



// FUNCTION 1450fd130 FUN_1450fd130 body=463 status=ok
// SIG undefined FUN_1450fd130(void)

void FUN_1450fd130(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  
  lVar8 = param_1[2];
  if (*(char *)(lVar8 + 0x18) != '\0') {
    fVar10 = expf(-2.2 / ((float)*(uint *)((longlong)param_1 + 0x24) * *(float *)(lVar8 + 0x10)));
    *(float *)((longlong)param_1 + 0x5c) = fVar10;
    *(undefined1 *)(lVar8 + 0x18) = 0;
  }
  if (*(char *)(param_1[2] + 0x22) != '\0') {
    iVar4 = FUN_1450fd310(param_1);
    if (iVar4 != 1) {
      return;
    }
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  uVar5 = *(uint *)(param_1 + 7);
  if (*(int *)((longlong)param_2 + 0xc) == 0x11) {
    uVar9 = *(uint *)((longlong)param_1 + 0x54);
    if (uVar9 == 0) {
      sVar2 = 0;
      if (*(short *)((longlong)param_2 + 0x12) == 0) goto LAB_1450fd2c7;
LAB_1450fd1c2:
      *(uint *)((longlong)param_1 + 0x54) = uVar5;
      uVar9 = uVar5;
LAB_1450fd1cb:
      *(uint *)(param_1 + 0xb) = uVar5;
    }
    else {
      if ((uVar9 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) goto LAB_1450fd1c2;
      if (*(uint *)(param_1 + 0xb) < uVar5) {
        uVar9 = (uVar9 - *(uint *)(param_1 + 0xb)) + uVar5;
        *(uint *)((longlong)param_1 + 0x54) = uVar9;
        goto LAB_1450fd1cb;
      }
    }
    uVar6 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
    uVar5 = uVar9;
    if (uVar6 <= uVar9) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x54) = uVar9 - uVar5;
    uVar1 = *(ushort *)(param_2 + 2);
    uVar3 = *(ushort *)((longlong)param_2 + 0x12);
    if (uVar1 <= uVar3) {
      uVar3 = uVar1;
    }
    iVar4 = (uint)uVar1 - (uint)uVar3;
    if (iVar4 != 0) {
      if (*(byte *)(param_2 + 1) != 0) {
        lVar8 = 0;
        uVar7 = (ulonglong)*(byte *)(param_2 + 1);
        do {
          memset((void *)(*param_2 +
                         ((ulonglong)*(ushort *)(param_2 + 2) * lVar8 + (ulonglong)(uint)uVar3) * 4)
                 ,0,(ulonglong)(uint)(iVar4 * 4));
          lVar8 = lVar8 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      *(short *)((longlong)param_2 + 0x12) = (short)param_2[2];
    }
    if (*(int *)((longlong)param_1 + 0x54) != 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  }
  sVar2 = *(short *)((longlong)param_2 + 0x12);
LAB_1450fd2c7:
  if (sVar2 != 0) {
    (*(code *)param_1[1])(param_1,param_2);
    FUN_1450fec10(param_2,(int)param_1[4],*(undefined4 *)(param_1[2] + 0x14),
                  *(undefined1 *)(param_1[2] + 0x20));
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1[2] + 0x14);
  }
  return;
}



// FUNCTION 1450fd310 FUN_1450fd310 body=429 status=ok
// SIG undefined FUN_1450fd310(void)

undefined8 FUN_1450fd310(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  float fVar7;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0x28) & 0xff;
  uVar6 = (ulonglong)uVar5;
  *(uint *)(param_1 + 0x30) = uVar5;
  if ((*(char *)(lVar1 + 0x20) == '\0') && ((*(uint *)(param_1 + 0x28) & 0x8000) != 0)) {
    uVar5 = uVar5 - 1;
    *(uint *)(param_1 + 0x30) = uVar5;
  }
  if (*(char *)(lVar1 + 0x21) != '\0') {
    uVar5 = 1;
  }
  *(uint *)(param_1 + 0x34) = uVar5;
  uVar4 = (ulonglong)((float)*(uint *)(param_1 + 0x24) * *(float *)(lVar1 + 0x1c));
  *(int *)(param_1 + 0x38) = (int)uVar4;
  fVar7 = expf(-4.4 / (float)(uVar4 & 0xffffffff));
  *(float *)(param_1 + 0x60) = fVar7;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                    (*(longlong **)(param_1 + 0x18),(uVar4 & 0xffffffff) * uVar6 * 4,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkPeakLimiter\\AkPeakLimiterFX.cpp"
                     ,0xf5);
  *(longlong *)(param_1 + 0x48) = lVar1;
  if (lVar1 == 0) {
LAB_1450fd499:
    uVar3 = 0x34;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x21) == '\0') || (*(int *)(param_1 + 0x30) == 1)
       ) {
      pcVar2 = FUN_1450fd4c0;
    }
    else if (((*(uint *)(param_1 + 0x28) & 0x8000) == 0) ||
            (*(char *)(*(longlong *)(param_1 + 0x10) + 0x20) != '\0')) {
      pcVar2 = FUN_1450fdaf0;
    }
    else {
      pcVar2 = FUN_1450fe2b0;
    }
    *(code **)(param_1 + 8) = pcVar2;
    if (*(uint *)(param_1 + 0x34) != 0) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                        (*(longlong **)(param_1 + 0x18),(ulonglong)*(uint *)(param_1 + 0x34) << 4,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkPeakLimiter\\AkPeakLimiterFX.cpp"
                         ,0x10b);
      *(longlong *)(param_1 + 0x40) = lVar1;
      if (lVar1 == 0) goto LAB_1450fd499;
    }
    uVar3 = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x22) = 0;
  }
  return uVar3;
}



// FUNCTION 1450fd4c0 FUN_1450fd4c0 body=1582 status=ok
// SIG undefined FUN_1450fd4c0(void)

void FUN_1450fd4c0(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar22;
  float *pfVar23;
  uint uVar24;
  float *pfVar25;
  float *pfVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  longlong local_res20;
  
  lVar27 = *(longlong *)(param_1 + 0x10);
  uVar9 = *(uint *)(param_1 + 0x30);
  pfVar23 = (float *)0x0;
  uVar10 = *(uint *)(param_1 + 0x38);
  pfVar26 = (float *)0x0;
  uVar11 = *(uint *)(param_1 + 0x50);
  fVar3 = *(float *)(lVar27 + 8);
  fVar4 = *(float *)(param_1 + 0x60);
  fVar5 = *(float *)(param_1 + 0x5c);
  fVar6 = *(float *)(lVar27 + 0xc);
  if ((*(char *)(lVar27 + 0x20) == '\0') && ((*(uint *)(param_2 + 1) & 0x8000) != 0)) {
    pfVar25 = (float *)(*param_2 +
                       (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
                       (ulonglong)*(ushort *)(param_2 + 2) * 4);
    lVar27 = *(longlong *)(param_1 + 0x48);
    uVar22 = (ulonglong)(uVar9 * uVar10);
    pfVar1 = pfVar25 + *(ushort *)((longlong)param_2 + 0x12);
    pfVar2 = (float *)(lVar27 + (uVar22 + uVar10) * 4);
    pfVar26 = (float *)(lVar27 + uVar22 * 4);
    pfVar23 = (float *)(lVar27 + (uVar22 + uVar11) * 4);
    while (pfVar25 < pfVar1) {
      uVar22 = (longlong)pfVar1 - (longlong)pfVar25 >> 2;
      uVar14 = (longlong)pfVar2 - (longlong)pfVar23 >> 2;
      if ((longlong)uVar14 <= (longlong)uVar22) {
        uVar22 = uVar14;
      }
      uVar14 = uVar22 & 0xffffffff;
      uVar17 = (uint)uVar22;
      while (uVar17 != 0) {
        fVar29 = *pfVar23;
        *pfVar23 = *pfVar25;
        pfVar23 = pfVar23 + 1;
        *pfVar25 = fVar29;
        pfVar25 = pfVar25 + 1;
        uVar17 = (int)uVar14 - 1;
        uVar14 = (ulonglong)uVar17;
      }
      if (pfVar23 == pfVar2) {
        pfVar23 = pfVar26;
      }
    }
  }
  uVar17 = 0;
  if (uVar9 != 0) {
    lVar27 = 0;
    local_res20 = 0;
    do {
      uVar8 = *(ushort *)((longlong)param_2 + 0x12);
      pfVar25 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * local_res20 * 4);
      lVar15 = *(longlong *)(param_1 + 0x48);
      pfVar1 = pfVar25 + uVar8;
      uVar13 = uVar17 * uVar10;
      pfVar23 = (float *)(lVar15 + ((ulonglong)uVar13 + (ulonglong)uVar11) * 4);
      pfVar2 = (float *)(lVar15 + ((ulonglong)uVar13 + (ulonglong)uVar10) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      pfVar26 = (float *)(lVar15 + (ulonglong)uVar13 * 4);
      fVar29 = *(float *)(lVar12 + lVar27);
      fVar21 = *(float *)(lVar12 + 4 + lVar27);
      fVar30 = *(float *)(lVar12 + 8 + lVar27);
      uVar13 = *(uint *)(lVar12 + 0xc + lVar27);
      if (*(char *)(param_1 + 100) != '\0') {
        uVar24 = (uint)uVar8;
        if (uVar10 < uVar8) {
          uVar24 = uVar10;
        }
        uVar18 = 0;
        uVar19 = 0;
        if (uVar24 < 4) {
          if (uVar24 != 0) {
            lVar15 = 0;
            goto LAB_1450fd7a3;
          }
        }
        else {
          pfVar16 = pfVar25 + 2;
          lVar15 = (ulonglong)((uVar24 - 4 >> 2) + 1) << 2;
          do {
            if (fVar21 <= ABS(pfVar16[-2])) {
              uVar13 = uVar24 - uVar18;
              fVar21 = ABS(pfVar16[-2]);
            }
            if (fVar21 <= ABS(pfVar16[-1])) {
              uVar13 = (uVar24 - uVar18) - 1;
              fVar21 = ABS(pfVar16[-1]);
            }
            if (fVar21 <= ABS(*pfVar16)) {
              uVar13 = (uVar24 - uVar18) - 2;
              fVar21 = ABS(*pfVar16);
            }
            if (fVar21 <= ABS(pfVar16[1])) {
              uVar13 = (uVar24 - uVar18) - 3;
              fVar21 = ABS(pfVar16[1]);
            }
            pfVar16 = pfVar16 + 4;
            uVar18 = uVar18 + 4;
          } while (uVar18 < uVar24 - 3);
          uVar19 = uVar18;
          if (uVar18 < uVar24) {
LAB_1450fd7a3:
            pfVar16 = pfVar25 + lVar15;
            do {
              if (fVar21 <= ABS(*pfVar16)) {
                uVar13 = uVar24 - uVar19;
                fVar21 = ABS(*pfVar16);
              }
              pfVar16 = pfVar16 + 1;
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar24);
          }
        }
        if (uVar17 == uVar9 - 1) {
          *(undefined1 *)(param_1 + 100) = 0;
        }
      }
      fVar20 = (float)(((uint)fVar21 & 0x7fffff) + 0x3f800000);
      fVar28 = fVar20 + 1.0;
      fVar20 = ((23.162373 / (fVar28 * fVar28 * fVar28)) * (fVar20 * fVar20 * fVar20 - 1.0) +
               ((float)((uint)fVar21 >> 0x17 & 0xff) - 127.0) * 6.0206003) - fVar3;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      while (pfVar25 < pfVar1) {
        uVar22 = (longlong)pfVar1 - (longlong)pfVar25 >> 2;
        uVar14 = (longlong)pfVar2 - (longlong)pfVar23 >> 2;
        if ((longlong)uVar14 <= (longlong)uVar22) {
          uVar22 = uVar14;
        }
        uVar14 = uVar22 & 0xffffffff;
        uVar24 = (uint)uVar22;
        while (uVar24 != 0) {
          fVar28 = *pfVar25;
          uVar24 = (int)uVar14 - 1;
          uVar14 = (ulonglong)uVar24;
          fVar7 = *pfVar23;
          *pfVar23 = fVar28;
          fVar28 = ABS(fVar28);
          if (fVar28 <= fVar30) {
            fVar28 = fVar30;
          }
          pfVar23 = pfVar23 + 1;
          if ((uVar13 == 0) || (fVar21 < fVar28)) {
            fVar30 = 0.0;
            fVar21 = (float)(((uint)fVar28 & 0x7fffff) + 0x3f800000);
            fVar20 = fVar21 + 1.0;
            fVar20 = ((23.162373 / (fVar20 * fVar20 * fVar20)) * (fVar21 * fVar21 * fVar21 - 1.0) +
                     ((float)((uint)fVar28 >> 0x17 & 0xff) - 127.0) * 6.0206003) - fVar3;
            fVar21 = fVar28;
            uVar13 = uVar10;
            if (fVar20 <= 0.0) {
              fVar20 = 0.0;
            }
          }
          else {
            fVar30 = fVar28;
            uVar13 = uVar13 - 1;
          }
          fVar28 = fVar5;
          if (0.0 <= fVar20 - fVar29) {
            fVar28 = fVar4;
          }
          fVar29 = (fVar29 - fVar20) * fVar28 + fVar20;
          fVar28 = fVar29 * (0.05 / fVar6 - 0.05);
          if ((fVar28 < -37.0) || (37.0 < fVar28)) {
            fVar28 = 0.0;
          }
          else {
            uVar19 = (uint)(longlong)(fVar28 * 27866352.0 + 1.0653532e+09);
            fVar28 = (float)((uVar19 & 0x7fffff) + 0x3f800000);
            fVar28 = ((fVar28 * 0.32518977 + 0.020805772) * fVar28 + 0.65304345) *
                     (float)(uVar19 & 0xff800000);
          }
          *pfVar25 = fVar28 * fVar7;
          pfVar25 = pfVar25 + 1;
        }
        if (pfVar23 == pfVar2) {
          pfVar23 = pfVar26;
        }
      }
      local_res20 = local_res20 + 1;
      uVar17 = uVar17 + 1;
      *(float *)(lVar27 + *(longlong *)(param_1 + 0x40)) = fVar29;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4 + lVar27) = fVar21;
      *(float *)(*(longlong *)(param_1 + 0x40) + 8 + lVar27) = fVar30;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0xc + lVar27) = uVar13;
      lVar27 = lVar27 + 0x10;
    } while (uVar17 < uVar9);
  }
  *(int *)(param_1 + 0x50) = (int)((longlong)pfVar23 - (longlong)pfVar26 >> 2);
  return;
}



// FUNCTION 1450fdaf0 FUN_1450fdaf0 body=1974 status=ok
// SIG undefined FUN_1450fdaf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450fdaf0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ushort uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  float *pfVar12;
  uint uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 local_138 [8];
  longlong local_130;
  undefined1 *local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  uVar26 = (ulonglong)bVar1;
  uVar2 = *(ushort *)(param_2 + 2);
  local_130 = *param_2;
  local_114 = 0.05 / *(float *)(*(longlong *)(param_1 + 0x10) + 0xc) - 0.05;
  local_120 = *(float *)(*(longlong *)(param_1 + 0x10) + 8);
  local_11c = *(float *)(param_1 + 0x60);
  local_118 = *(float *)(param_1 + 0x5c);
  lVar23 = *(longlong *)(param_1 + 0x48) + (ulonglong)((uint)bVar1 * *(int *)(param_1 + 0x50)) * 4;
  fVar3 = *(float *)(param_1 + 0x38);
  uVar24 = (uint)bVar1;
  local_100 = *(longlong *)(param_1 + 0x48) + (ulonglong)((int)fVar3 * uVar24) * 4;
  fVar5 = (float)(uint)*(ushort *)((longlong)param_2 + 0x12);
  pfVar7 = *(float **)(param_1 + 0x40);
  fVar29 = *pfVar7;
  fVar10 = pfVar7[1];
  fVar27 = pfVar7[2];
  fVar17 = pfVar7[3];
  uVar11 = uVar26 * 4 + 0xf;
  if (uVar11 <= uVar26 * 4) {
    uVar11 = 0xffffffffffffff0;
  }
  local_128 = local_138 + -(uVar11 & 0xfffffffffffffff0);
  uVar25 = (uint)bVar1;
  if (*(char *)(param_1 + 100) != '\0') {
    fVar9 = fVar3;
    if ((uint)fVar5 <= (uint)fVar3) {
      fVar9 = fVar5;
    }
    if (uVar24 != 0) {
      uVar11 = uVar26;
      lVar15 = local_130;
      do {
        fVar8 = 0.0;
        if ((uint)fVar9 < 4) {
          if (fVar9 != 0.0) {
            lVar19 = 0;
            goto LAB_1450fdd21;
          }
        }
        else {
          pfVar7 = (float *)(lVar15 + 8);
          lVar19 = (ulonglong)(((int)fVar9 - 4U >> 2) + 1) << 2;
          do {
            if (fVar10 < ABS(pfVar7[-2])) {
              fVar17 = (float)((int)fVar9 - (int)fVar8);
              fVar10 = ABS(pfVar7[-2]);
            }
            if (fVar10 < ABS(pfVar7[-1])) {
              fVar17 = (float)(((int)fVar9 - (int)fVar8) - 1);
              fVar10 = ABS(pfVar7[-1]);
            }
            if (fVar10 < ABS(*pfVar7)) {
              fVar17 = (float)(((int)fVar9 - (int)fVar8) - 2);
              fVar10 = ABS(*pfVar7);
            }
            if (fVar10 < ABS(pfVar7[1])) {
              fVar17 = (float)(((int)fVar9 - (int)fVar8) - 3);
              fVar10 = ABS(pfVar7[1]);
            }
            pfVar7 = pfVar7 + 4;
            fVar8 = (float)((int)fVar8 + 4);
          } while ((uint)fVar8 < (int)fVar9 - 3U);
          if ((uint)fVar8 < (uint)fVar9) {
LAB_1450fdd21:
            pfVar7 = (float *)(lVar15 + lVar19 * 4);
            do {
              if (fVar10 < ABS(*pfVar7)) {
                fVar17 = (float)((int)fVar9 - (int)fVar8);
                fVar10 = ABS(*pfVar7);
              }
              pfVar7 = pfVar7 + 1;
              fVar8 = (float)((int)fVar8 + 1);
            } while ((uint)fVar8 < (uint)fVar9);
          }
        }
        lVar15 = lVar15 + (ulonglong)uVar2 * 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    *(undefined1 *)(param_1 + 100) = 0;
  }
  local_108 = (longlong *)(param_1 + 0x48);
  uVar11 = 0;
  fVar9 = (float)(((uint)fVar10 & 0x7fffff) + 0x3f800000);
  fVar8 = fVar9 + 1.0;
  fVar9 = ((23.162373 / (fVar8 * fVar8 * fVar8)) * (fVar9 * fVar9 * fVar9 - 1.0) +
          ((float)((uint)fVar10 >> 0x17 & 0xff) - 127.0) * 6.0206003) - local_120;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (fVar5 != 0.0) {
    local_f8 = uVar26 << 2;
    do {
      uVar22 = (ulonglong)(uint)((int)fVar5 - (int)uVar11);
      lVar15 = local_100 + -lVar23;
      auVar4._8_8_ = lVar15 >> 0x3f;
      auVar4._0_8_ = lVar15 >> 2;
      if (SUB168(auVar4 / SEXT816((longlong)uVar26),0) <= (longlong)uVar22) {
        uVar22 = (ulonglong)SUB164(auVar4 / SEXT816((longlong)uVar26),0);
      }
      if ((int)uVar22 != 0) {
        local_f0 = uVar26 * -4;
        puVar14 = local_128 + -lVar23 + 8;
        lVar15 = local_130;
        fVar8 = fVar27;
        do {
          uVar21 = (int)uVar22 - 1;
          uVar22 = (ulonglong)uVar21;
          uVar13 = 0;
          if (uVar25 < 4) {
            lVar19 = lVar15;
            if (uVar24 != 0) {
              lVar16 = 0;
              goto LAB_1450fdf8a;
            }
          }
          else {
            lVar19 = (ulonglong)uVar2 * 4;
            uVar6 = (bVar1 - 4 >> 2) + 1;
            uVar20 = (ulonglong)uVar6;
            uVar13 = uVar6 * 4;
            lVar16 = (ulonglong)uVar6 * 4;
            pfVar7 = (float *)(lVar23 + 4);
            do {
              *(float *)(puVar14 + -0xc + (longlong)pfVar7) = pfVar7[-1];
              fVar27 = *(float *)(lVar15 + uVar11 * 4);
              pfVar7[-1] = fVar27;
              fVar27 = ABS(fVar27);
              *(float *)(puVar14 + -8 + (longlong)pfVar7) = *pfVar7;
              if (fVar27 <= fVar8) {
                fVar27 = fVar8;
              }
              fVar28 = *(float *)(lVar15 + lVar19 + uVar11 * 4);
              lVar15 = lVar15 + lVar19 + lVar19;
              *pfVar7 = fVar28;
              fVar28 = ABS(fVar28);
              *(float *)(puVar14 + -4 + (longlong)pfVar7) = pfVar7[1];
              if (fVar28 <= fVar27) {
                fVar28 = fVar27;
              }
              fVar27 = *(float *)(lVar15 + uVar11 * 4);
              pfVar7[1] = fVar27;
              lVar15 = lVar15 + lVar19;
              *(float *)(puVar14 + -0x10 + (longlong)(pfVar7 + 4)) = pfVar7[2];
              fVar27 = ABS(fVar27);
              fVar8 = *(float *)(lVar15 + uVar11 * 4);
              if (fVar27 <= fVar28) {
                fVar27 = fVar28;
              }
              pfVar7[2] = fVar8;
              lVar15 = lVar15 + lVar19;
              fVar8 = ABS(fVar8);
              if (fVar8 <= fVar27) {
                fVar8 = fVar27;
              }
              uVar20 = uVar20 - 1;
              pfVar7 = pfVar7 + 4;
            } while (uVar20 != 0);
            lVar19 = local_130;
            if (uVar13 < uVar25) {
LAB_1450fdf8a:
              pfVar7 = (float *)(lVar15 + uVar11 * 4);
              uVar20 = (ulonglong)(uVar25 - uVar13);
              pfVar12 = (float *)(lVar16 * 4 + lVar23);
              fVar27 = fVar8;
              do {
                *(float *)(puVar14 + -8 + (longlong)pfVar12) = *pfVar12;
                fVar8 = *pfVar7;
                pfVar7 = pfVar7 + uVar2;
                *pfVar12 = fVar8;
                fVar8 = ABS(fVar8);
                if (fVar8 <= fVar27) {
                  fVar8 = fVar27;
                }
                uVar20 = uVar20 - 1;
                pfVar12 = pfVar12 + 1;
                lVar19 = local_130;
                fVar27 = fVar8;
              } while (uVar20 != 0);
            }
          }
          lVar23 = lVar23 + local_f8;
          puVar14 = puVar14 + local_f0;
          if ((fVar17 == 0.0) || (fVar10 < fVar8)) {
            fVar27 = 0.0;
            fVar10 = (float)(((uint)fVar8 & 0x7fffff) + 0x3f800000);
            fVar17 = fVar10 + 1.0;
            fVar9 = ((23.162373 / (fVar17 * fVar17 * fVar17)) * (fVar10 * fVar10 * fVar10 - 1.0) +
                    ((float)((uint)fVar8 >> 0x17 & 0xff) - 127.0) * 6.0206003) - local_120;
            fVar10 = fVar8;
            fVar17 = fVar3;
            if (fVar9 <= 0.0) {
              fVar9 = 0.0;
            }
          }
          else {
            fVar27 = fVar8;
            fVar17 = (float)((int)fVar17 - 1);
          }
          fVar8 = local_118;
          if (0.0 <= fVar9 - fVar29) {
            fVar8 = local_11c;
          }
          fVar29 = (fVar29 - fVar9) * fVar8 + fVar9;
          fVar8 = fVar29 * local_114;
          if ((fVar8 < -37.0) || (37.0 < fVar8)) {
            fVar8 = 0.0;
          }
          else {
            uVar13 = (uint)(longlong)(fVar8 * 27866352.0 + 1.0653532e+09);
            fVar8 = (float)((uVar13 & 0x7fffff) + 0x3f800000);
            fVar8 = ((fVar8 * 0.32518977 + 0.020805772) * fVar8 + 0.65304345) *
                    (float)(uVar13 & 0xff800000);
          }
          uVar13 = 0;
          if (uVar25 < 4) {
            lVar15 = lVar19;
            if (uVar25 != 0) {
              lVar16 = 0;
              goto LAB_1450fe18c;
            }
          }
          else {
            lVar15 = (ulonglong)uVar2 * 4;
            uVar6 = (bVar1 - 4 >> 2) + 1;
            uVar20 = (ulonglong)uVar6;
            uVar13 = uVar6 * 4;
            lVar16 = (ulonglong)uVar6 * 4;
            pfVar7 = (float *)(local_128 + 8);
            do {
              *(float *)(lVar19 + uVar11 * 4) = fVar8 * pfVar7[-2];
              *(float *)(lVar19 + lVar15 + uVar11 * 4) = fVar8 * pfVar7[-1];
              lVar19 = lVar19 + lVar15 + lVar15;
              *(float *)(lVar19 + uVar11 * 4) = fVar8 * *pfVar7;
              lVar19 = lVar19 + lVar15;
              *(float *)(lVar19 + uVar11 * 4) = fVar8 * pfVar7[1];
              lVar19 = lVar19 + lVar15;
              uVar20 = uVar20 - 1;
              pfVar7 = pfVar7 + 4;
            } while (uVar20 != 0);
            lVar15 = local_130;
            if (uVar13 < uVar25) {
LAB_1450fe18c:
              pfVar12 = (float *)(lVar19 + uVar11 * 4);
              uVar20 = (ulonglong)(uVar25 - uVar13);
              pfVar7 = (float *)(local_128 + lVar16 * 4);
              do {
                fVar28 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                *pfVar12 = fVar8 * fVar28;
                pfVar12 = pfVar12 + uVar2;
                uVar20 = uVar20 - 1;
                lVar15 = local_130;
              } while (uVar20 != 0);
            }
          }
          uVar11 = (ulonglong)((int)uVar11 + 1);
          fVar8 = fVar27;
        } while (uVar21 != 0);
      }
      if (lVar23 == local_100) {
        lVar23 = *local_108;
      }
    } while ((uint)(float)uVar11 < (uint)fVar5);
  }
  plVar18 = (longlong *)(param_1 + 0x40);
  *(float *)*plVar18 = fVar29;
  *(float *)(*plVar18 + 4) = fVar10;
  *(float *)(*plVar18 + 8) = fVar27;
  *(float *)(*plVar18 + 0xc) = fVar17;
  *(int *)(param_1 + 0x50) =
       (int)((lVar23 - *(longlong *)(param_1 + 0x48) >> 2 & 0xffffffffU) / (ulonglong)uVar25);
  return;
}



// FUNCTION 1450fe2b0 FUN_1450fe2b0 body=2020 status=ok
// SIG undefined FUN_1450fe2b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450fe2b0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  longlong *plVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_148;
  uint local_144;
  longlong local_140;
  longlong local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  
  local_118 = (longlong *)(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x28);
  uVar2 = *(ushort *)(param_2 + 2);
  lVar19 = *param_2;
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar18 = (ulonglong)uVar3;
  local_144 = (uint)bVar1;
  local_130 = *(float *)(*(longlong *)(param_1 + 0x10) + 8);
  local_12c = *(float *)(param_1 + 0x60);
  local_124 = 0.05 / *(float *)(*(longlong *)(param_1 + 0x10) + 0xc) - 0.05;
  local_128 = *(float *)(param_1 + 0x5c);
  lVar25 = *local_118 + (ulonglong)(local_144 * *(int *)(param_1 + 0x50)) * 4;
  fVar4 = *(float *)(param_1 + 0x38);
  local_138 = lVar19;
  local_110 = *local_118 + (ulonglong)((int)fVar4 * (uint)bVar1) * 4;
  fVar6 = (float)(uint)*(ushort *)((longlong)param_2 + 0x12);
  pfVar9 = *(float **)(param_1 + 0x40);
  fVar30 = *pfVar9;
  fVar13 = pfVar9[1];
  fVar29 = pfVar9[2];
  fVar21 = pfVar9[3];
  uVar8 = (ulonglong)(uint)bVar1 * 4;
  uVar14 = uVar8 + 0xf;
  if (uVar14 <= uVar8) {
    uVar14 = 0xffffffffffffff0;
  }
  lVar23 = (longlong)&local_148 - (uVar14 & 0xfffffffffffffff0);
  local_140 = lVar23;
  if (*(char *)(param_1 + 100) != '\0') {
    fVar12 = fVar4;
    if ((uint)fVar6 <= (uint)fVar4) {
      fVar12 = fVar6;
    }
    if (uVar3 != 0) {
      uVar14 = 0;
      do {
        uVar8 = uVar14;
        if ((uint)fVar12 < 4) {
          uVar24 = uVar14;
          if (fVar12 != 0.0) goto LAB_1450fe4ef;
        }
        else {
          pfVar9 = (float *)(lVar19 + 8);
          do {
            iVar10 = (int)uVar8;
            if (fVar13 < ABS(pfVar9[-2])) {
              fVar21 = (float)((int)fVar12 - iVar10);
              fVar13 = ABS(pfVar9[-2]);
            }
            if (fVar13 < ABS(pfVar9[-1])) {
              fVar21 = (float)(((int)fVar12 - iVar10) - 1);
              fVar13 = ABS(pfVar9[-1]);
            }
            if (fVar13 < ABS(*pfVar9)) {
              fVar21 = (float)(((int)fVar12 - iVar10) - 2);
              fVar13 = ABS(*pfVar9);
            }
            if (fVar13 < ABS(pfVar9[1])) {
              fVar21 = (float)(((int)fVar12 - iVar10) - 3);
              fVar13 = ABS(pfVar9[1]);
            }
            pfVar9 = pfVar9 + 4;
            fVar11 = (float)(iVar10 + 4);
            uVar8 = (ulonglong)(uint)fVar11;
          } while ((uint)fVar11 < (int)fVar12 - 3U);
          uVar24 = (ulonglong)(((int)fVar12 - 4U >> 2) + 1) << 2;
          if ((uint)fVar11 < (uint)fVar12) {
LAB_1450fe4ef:
            pfVar9 = (float *)(lVar19 + uVar24 * 4);
            do {
              if (fVar13 < ABS(*pfVar9)) {
                fVar21 = (float)((int)fVar12 - (int)uVar8);
                fVar13 = ABS(*pfVar9);
              }
              pfVar9 = pfVar9 + 1;
              fVar11 = (float)((int)uVar8 + 1);
              uVar8 = (ulonglong)(uint)fVar11;
            } while ((uint)fVar11 < (uint)fVar12);
          }
        }
        lVar19 = lVar19 + (ulonglong)uVar2 * 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      local_118 = (longlong *)(param_1 + 0x48);
    }
    local_118 = (longlong *)(param_1 + 0x48);
    *(undefined1 *)(param_1 + 100) = 0;
  }
  uVar14 = 0;
  local_148 = fVar13;
  fVar12 = (float)(((uint)fVar13 & 0x7fffff) + 0x3f800000);
  fVar11 = fVar12 + 1.0;
  fVar12 = ((23.162373 / (fVar11 * fVar11 * fVar11)) * (fVar12 * fVar12 * fVar12 - 1.0) +
           ((float)((uint)fVar13 >> 0x17 & 0xff) - 127.0) * 6.0206003) - local_130;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar6 != 0.0) {
    uVar8 = (ulonglong)local_144;
    local_108 = (ulonglong)local_144 << 2;
    local_f8 = (ulonglong)local_144;
    do {
      lVar19 = local_110 + -lVar25;
      auVar5._8_8_ = lVar19 >> 0x3f;
      auVar5._0_8_ = lVar19 >> 2;
      uVar18 = (ulonglong)(uint)((int)fVar6 - (int)uVar14);
      if (SUB168(auVar5 / SEXT816((longlong)uVar8),0) <= (longlong)uVar18) {
        uVar18 = (ulonglong)SUB164(auVar5 / SEXT816((longlong)uVar8),0);
      }
      if ((int)uVar18 != 0) {
        local_100 = uVar8 * -4;
        lVar27 = lVar23 + 8 + -lVar25;
        lVar19 = local_138;
        do {
          uVar26 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar26;
          if (uVar3 < 4) {
            lVar20 = 0;
            uVar17 = 0;
            lVar15 = lVar19;
            local_148 = fVar29;
            if (uVar3 != 0) goto LAB_1450fe74d;
          }
          else {
            lVar23 = (ulonglong)uVar2 * 4;
            uVar7 = (uVar3 - 4 >> 2) + 1;
            uVar8 = (ulonglong)uVar7;
            uVar17 = uVar7 * 4;
            lVar20 = (ulonglong)uVar7 * 4;
            pfVar9 = (float *)(lVar25 + 4);
            do {
              *(float *)(lVar27 + -0xc + (longlong)pfVar9) = pfVar9[-1];
              fVar11 = *(float *)(lVar19 + uVar14 * 4);
              pfVar9[-1] = fVar11;
              fVar11 = ABS(fVar11);
              *(float *)(lVar27 + -8 + (longlong)pfVar9) = *pfVar9;
              if (fVar11 <= fVar29) {
                fVar11 = fVar29;
              }
              fVar28 = *(float *)(lVar19 + lVar23 + uVar14 * 4);
              lVar19 = lVar19 + lVar23 + lVar23;
              *pfVar9 = fVar28;
              fVar28 = ABS(fVar28);
              *(float *)(lVar27 + -4 + (longlong)pfVar9) = pfVar9[1];
              if (fVar28 <= fVar11) {
                fVar28 = fVar11;
              }
              fVar11 = *(float *)(lVar19 + uVar14 * 4);
              pfVar9[1] = fVar11;
              lVar19 = lVar19 + lVar23;
              *(float *)(lVar27 + -0x10 + (longlong)(pfVar9 + 4)) = pfVar9[2];
              fVar11 = ABS(fVar11);
              fVar29 = *(float *)(lVar19 + uVar14 * 4);
              if (fVar11 <= fVar28) {
                fVar11 = fVar28;
              }
              pfVar9[2] = fVar29;
              lVar19 = lVar19 + lVar23;
              fVar29 = ABS(fVar29);
              if (fVar29 <= fVar11) {
                fVar29 = fVar11;
              }
              uVar8 = uVar8 - 1;
              pfVar9 = pfVar9 + 4;
            } while (uVar8 != 0);
            lVar15 = local_138;
            lVar23 = local_140;
            local_148 = fVar29;
            if (uVar17 < uVar3) {
LAB_1450fe74d:
              uVar8 = (ulonglong)(uVar3 - uVar17);
              pfVar9 = (float *)(lVar25 + lVar20 * 4);
              do {
                *(float *)(lVar27 + -8 + (longlong)pfVar9) = *pfVar9;
                local_148 = *(float *)(lVar19 + uVar14 * 4);
                lVar19 = lVar19 + (ulonglong)uVar2 * 4;
                *pfVar9 = local_148;
                local_148 = ABS(local_148);
                if (local_148 <= fVar29) {
                  local_148 = fVar29;
                }
                uVar8 = uVar8 - 1;
                pfVar9 = pfVar9 + 1;
                lVar15 = local_138;
                lVar23 = local_140;
                fVar29 = local_148;
                uVar17 = uVar3;
              } while (uVar8 != 0);
            }
          }
          lVar20 = 0;
          lVar27 = lVar27 + local_100;
          uVar8 = (ulonglong)uVar17;
          *(undefined4 *)(lVar23 + uVar8 * 4) = *(undefined4 *)(lVar25 + uVar8 * 4);
          *(undefined4 *)(lVar25 + uVar8 * 4) = *(undefined4 *)(lVar19 + uVar14 * 4);
          lVar25 = lVar25 + local_108;
          *(undefined4 *)(lVar19 + uVar14 * 4) = *(undefined4 *)(lVar23 + uVar8 * 4);
          if ((fVar21 == 0.0) || (fVar13 < local_148)) {
            fVar29 = 0.0;
            fVar13 = (float)(((uint)local_148 & 0x7fffff) + 0x3f800000);
            fVar21 = fVar13 + 1.0;
            fVar12 = ((23.162373 / (fVar21 * fVar21 * fVar21)) * (fVar13 * fVar13 * fVar13 - 1.0) +
                     ((float)((uint)local_148 >> 0x17 & 0xff) - 127.0) * 6.0206003) - local_130;
            fVar13 = local_148;
            fVar21 = fVar4;
            if (fVar12 <= 0.0) {
              fVar12 = 0.0;
            }
          }
          else {
            fVar29 = local_148;
            fVar21 = (float)((int)fVar21 - 1);
          }
          fVar11 = local_128;
          if (0.0 <= fVar12 - fVar30) {
            fVar11 = local_12c;
          }
          fVar30 = (fVar30 - fVar12) * fVar11 + fVar12;
          fVar11 = fVar30 * local_124;
          if ((fVar11 < -37.0) || (37.0 < fVar11)) {
            local_120 = 0.0;
          }
          else {
            uVar17 = (uint)(longlong)(fVar11 * 27866352.0 + 1.0653532e+09);
            local_120 = (float)(uVar17 & 0xff800000);
            local_148 = (float)((uVar17 & 0x7fffff) + 0x3f800000);
            local_120 = ((local_148 * 0.32518977 + 0.020805772) * local_148 + 0.65304345) *
                        local_120;
          }
          uVar17 = 0;
          if (uVar3 < 4) {
            lVar19 = lVar15;
            if (uVar3 != 0) goto LAB_1450fe97c;
          }
          else {
            lVar19 = (ulonglong)uVar2 * 4;
            uVar7 = (uVar3 - 4 >> 2) + 1;
            uVar8 = (ulonglong)uVar7;
            uVar17 = uVar7 * 4;
            lVar20 = (ulonglong)uVar7 * 4;
            pfVar9 = (float *)(lVar23 + 8);
            do {
              *(float *)(lVar15 + uVar14 * 4) = local_120 * pfVar9[-2];
              *(float *)(lVar15 + lVar19 + uVar14 * 4) = local_120 * pfVar9[-1];
              lVar15 = lVar15 + lVar19 + lVar19;
              *(float *)(lVar15 + uVar14 * 4) = local_120 * *pfVar9;
              lVar15 = lVar15 + lVar19;
              *(float *)(lVar15 + uVar14 * 4) = local_120 * pfVar9[1];
              lVar15 = lVar15 + lVar19;
              uVar8 = uVar8 - 1;
              pfVar9 = pfVar9 + 4;
            } while (uVar8 != 0);
            lVar19 = local_138;
            lVar23 = local_140;
            if (uVar17 < uVar3) {
LAB_1450fe97c:
              uVar8 = (ulonglong)(uVar3 - uVar17);
              pfVar16 = (float *)(lVar15 + uVar14 * 4);
              pfVar9 = (float *)(lVar23 + lVar20 * 4);
              do {
                fVar11 = *pfVar9;
                pfVar9 = pfVar9 + 1;
                *pfVar16 = local_120 * fVar11;
                pfVar16 = pfVar16 + uVar2;
                uVar8 = uVar8 - 1;
                lVar19 = local_138;
              } while (uVar8 != 0);
            }
          }
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar8 = local_f8;
        } while (uVar26 != 0);
      }
      if (lVar25 == local_110) {
        lVar25 = *local_118;
      }
    } while ((uint)(float)uVar14 < (uint)fVar6);
  }
  plVar22 = (longlong *)(param_1 + 0x40);
  *(float *)*plVar22 = fVar30;
  *(float *)(*plVar22 + 4) = fVar13;
  *(float *)(*plVar22 + 8) = fVar29;
  *(float *)(*plVar22 + 0xc) = fVar21;
  *(int *)(param_1 + 0x50) =
       (int)((lVar25 - *(longlong *)(param_1 + 0x48) >> 2 & 0xffffffffU) / (ulonglong)local_144);
  return;
}



// FUNCTION 1450feaa0 FUN_1450feaa0 body=43 status=ok
// SIG undefined FUN_1450feaa0(void)

undefined8 * FUN_1450feaa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1450fead0 FUN_1450fead0 body=309 status=ok
// SIG undefined FUN_1450fead0(void)

void FUN_1450fead0(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1450fec10 FUN_1450fec10 body=528 status=ok
// SIG undefined FUN_1450fec10(void)

void FUN_1450fec10(longlong *param_1,float param_2,float param_3,char param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_4 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    if (param_3 == param_2) {
      do {
        FUN_1450fead0(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4,param_2,uVar3);
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    do {
      pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4);
      pfVar1 = pfVar5 + uVar3;
      if (3 < uVar3) {
        uVar4 = uVar3 & 0xfffffffc;
        pfVar2 = pfVar5 + uVar4;
        fVar9 = (param_3 - param_2) / (float)uVar4;
        fVar12 = fVar9 * 4.0;
        fVar8 = fVar9 + param_2 + fVar9;
        fVar11 = fVar9 + param_2;
        fVar9 = fVar8 + fVar9;
        fVar10 = param_2;
        for (; pfVar5 < pfVar2; pfVar5 = pfVar5 + 4) {
          *pfVar5 = *pfVar5 * fVar10;
          pfVar5[1] = pfVar5[1] * fVar11;
          pfVar5[2] = pfVar5[2] * fVar8;
          pfVar5[3] = pfVar5[3] * fVar9;
          fVar11 = fVar11 + fVar12;
          fVar8 = fVar8 + fVar12;
          fVar9 = fVar9 + fVar12;
          fVar10 = fVar10 + fVar12;
        }
      }
      if (pfVar5 < pfVar1) {
        fVar8 = (param_3 - param_2) / (float)uVar3;
        fVar11 = param_2;
        if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = fVar11 * *pfVar5;
            fVar9 = fVar11 + fVar8 + fVar8;
            pfVar5[1] = (fVar11 + fVar8) * pfVar5[1];
            fVar10 = fVar9 + fVar8;
            pfVar5[2] = fVar9 * pfVar5[2];
            fVar11 = fVar10 + fVar8;
            pfVar5[3] = fVar10 * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pfVar5 < pfVar1 + -3);
          if (pfVar1 <= pfVar5) goto LAB_1450fedf8;
        }
        do {
          *pfVar5 = fVar11 * *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar11 = fVar11 + fVar8;
        } while (pfVar5 < pfVar1);
      }
LAB_1450fedf8:
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1450fee20 FUN_1450fee20 body=98 status=ok
// SIG undefined FUN_1450fee20(void)

undefined8 * FUN_1450fee20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x68,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkPeakLimiter\\AkPeakLimiterFX.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0xffffffff;
    *puVar1 = &PTR_FUN_149c2a608;
    *(undefined1 *)(puVar1 + 5) = 0;
    *(uint *)(puVar1 + 5) = *(uint *)(puVar1 + 5) & 0xff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1450fee90 FUN_1450fee90 body=95 status=ok
// SIG undefined FUN_1450fee90(void)

void FUN_1450fee90(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x28,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkPeakLimiter\\AkPeakLimiterFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2a6e8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)(puVar2 + 3) = 1;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined1 *)((longlong)puVar2 + 0x22) = 1;
    return;
  }
  return;
}



// FUNCTION 1450fef40 FUN_1450fef40 body=56 status=ok
// SIG undefined FUN_1450fef40(void)

undefined8 FUN_1450fef40(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1450fef80 FUN_1450fef80 body=124 status=ok
// SIG undefined FUN_1450fef80(void)

undefined8 FUN_1450fef80(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  fVar1 = powf(10.0,(float)param_2[4] * 0.05);
  *(float *)(param_1 + 0x14) = fVar1;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return 1;
}



// FUNCTION 1450ff000 FUN_1450ff000 body=277 status=ok
// SIG undefined FUN_1450ff000(void)

undefined8 FUN_1450ff000(longlong param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  switch(param_2) {
  case 0:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    break;
  case 1:
    *(float *)(param_1 + 0xc) = *param_3;
    *(undefined1 *)(param_1 + 0x18) = 1;
    return 1;
  case 2:
    *(float *)(param_1 + 0x1c) = *param_3;
    *(undefined1 *)(param_1 + 0x22) = 1;
    return 1;
  case 3:
    *(float *)(param_1 + 0x10) = *param_3;
    *(undefined1 *)(param_1 + 0x18) = 1;
    return 1;
  case 4:
    fVar1 = *param_3;
    fVar2 = -24.0;
    if ((-24.0 <= fVar1) && (fVar2 = fVar1, 24.0 <= fVar1)) {
      fVar2 = 24.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x14) = fVar1;
    *(undefined1 *)(param_1 + 0x18) = 1;
    return 1;
  case 5:
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)param_3;
    *(undefined1 *)(param_1 + 0x22) = 1;
    return 1;
  case 6:
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)param_3;
    *(undefined1 *)(param_1 + 0x22) = 1;
    return 1;
  default:
    return 0x1f;
  }
  *(float *)(param_1 + 8) = fVar2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return 1;
}



// FUNCTION 1450ff140 FUN_1450ff140 body=43 status=ok
// SIG undefined FUN_1450ff140(void)

undefined8 * FUN_1450ff140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1450ff170 FUN_1450ff170 body=52 status=ok
// SIG undefined FUN_1450ff170(void)

void FUN_1450ff170(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x28,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkPeakLimiter\\AkPeakLimiterFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2a6e8;
    return;
  }
  return;
}



// FUNCTION 1450ff240 FUN_1450ff240 body=64 status=ok
// SIG undefined FUN_1450ff240(void)

undefined8 FUN_1450ff240(undefined8 *param_1,longlong *param_2)

{
  FUN_1450ffbb0();
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1450ff280 FUN_1450ff280 body=162 status=ok
// SIG undefined FUN_1450ff280(void)

undefined8 FUN_1450ff280(longlong param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x28),0,(ulonglong)(uint)(*(int *)(param_1 + 0x40) << 2));
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0xfffffffc) != 0) {
    do {
      puVar1 = (undefined8 *)(param_1 + (uVar3 + 0x1f) * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      _Dst = *(void **)(param_1 + 0x110 + uVar3 * 8);
      if (_Dst != (void *)0x0) {
        memset(_Dst,0,(ulonglong)
                      (uint)(*(int *)(param_1 + 0x50 + (ulonglong)((int)uVar3 * 4 + 3) * 4) << 4));
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) >> 2);
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  return 1;
}



// FUNCTION 1450ff350 FUN_1450ff350 body=1006 status=ok
// SIG undefined FUN_1450ff350(void)

void FUN_1450ff350(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if (*(char *)(param_1[2] + 0x68) != '\0') {
    iVar6 = FUN_1450ff750(param_1,(int)param_2[1]);
    if (iVar6 != 1) {
      return;
    }
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  if (*(int *)((longlong)param_1 + 0x254) == 0) {
    return;
  }
  uVar10 = 0;
  lVar12 = param_1[2];
  if ((*(float *)(lVar12 + 8) != *(float *)(param_1 + 4)) ||
     (*(float *)((longlong)param_1 + 0x24) != *(float *)(lVar12 + 0xc))) {
    iVar6 = *(int *)(lVar12 + 0x18);
    dVar2 = 1.0 / (double)*(uint *)((longlong)param_1 + 0x24c);
    dVar17 = 1.0 / (double)*(float *)(lVar12 + 0xc);
    dVar17 = 1.0 - 1.0 / (dVar17 * dVar17);
    dVar14 = pow(0.001,((double)*(uint *)((longlong)param_1 + (ulonglong)(iVar6 - 1) * 4 + 0x50) *
                       dVar2) / (double)*(float *)(lVar12 + 8));
    dVar15 = log10(dVar14);
    dVar14 = DAT_14c72f5e0;
    if (1.0 < dVar15 * DAT_14c72f5e0 * dVar17) {
      dVar17 = 1.0 / (dVar15 * DAT_14c72f5e0);
    }
    uVar9 = uVar10;
    if (iVar6 != 0) {
      do {
        dVar15 = pow(0.001,((double)*(uint *)((longlong)param_1 + uVar9 * 4 + 0x50) * dVar2) /
                           (double)*(float *)(lVar12 + 8));
        dVar16 = log10(dVar15);
        uVar8 = (ulonglong)((uint)uVar9 & 3);
        uVar13 = (uint)uVar9 + 1;
        dVar16 = dVar16 * dVar14 * dVar17;
        *(float *)((longlong)param_1 + (uVar8 + (uVar9 >> 2) * 4) * 4 + 0x170) =
             (float)((1.0 - dVar16) * dVar15);
        *(float *)((longlong)param_1 + (uVar8 + (uVar9 >> 2) * 4) * 4 + 0x1b0) = (float)dVar16;
        lVar12 = param_1[2];
        uVar9 = (ulonglong)uVar13;
      } while (uVar13 < *(uint *)(lVar12 + 0x18));
    }
    fVar3 = 1.0 / *(float *)(lVar12 + 0xc);
    fVar3 = (1.0 - fVar3) / (fVar3 + 1.0);
    fVar4 = 1.0 / (1.0 - fVar3);
    *(float *)((longlong)param_1 + 0x44) = fVar4;
    *(float *)(param_1 + 9) = -(fVar4 * fVar3);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar12 + 8);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar12 + 0xc);
    *(int *)(param_1 + 0x4a) =
         (int)(longlong)((float)*(uint *)((longlong)param_1 + 0x24c) * *(float *)(lVar12 + 8));
  }
  uVar13 = *(uint *)(param_1 + 0x4a);
  if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
    *(undefined4 *)((longlong)param_1 + 0x244) = 0xffffffff;
    goto LAB_1450ff6ef;
  }
  uVar11 = *(uint *)((longlong)param_1 + 0x244);
  if (uVar11 == 0) {
    if (*(short *)((longlong)param_2 + 0x12) == 0) goto LAB_1450ff6ef;
LAB_1450ff5fa:
    *(uint *)((longlong)param_1 + 0x244) = uVar13;
    uVar11 = uVar13;
LAB_1450ff606:
    *(uint *)(param_1 + 0x49) = uVar13;
  }
  else {
    if ((uVar11 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) goto LAB_1450ff5fa;
    if (*(uint *)(param_1 + 0x49) < uVar13) {
      uVar11 = (uVar11 - *(uint *)(param_1 + 0x49)) + uVar13;
      *(uint *)((longlong)param_1 + 0x244) = uVar11;
      goto LAB_1450ff606;
    }
  }
  uVar7 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar13 = uVar11;
  if (uVar7 <= uVar11) {
    uVar13 = uVar7;
  }
  *(uint *)((longlong)param_1 + 0x244) = uVar11 - uVar13;
  uVar1 = *(ushort *)(param_2 + 2);
  uVar5 = *(ushort *)((longlong)param_2 + 0x12);
  uVar9 = (ulonglong)*(byte *)(param_2 + 1);
  if (uVar1 <= uVar5) {
    uVar5 = uVar1;
  }
  iVar6 = (uint)uVar1 - (uint)uVar5;
  if (iVar6 != 0) {
    if (*(byte *)(param_2 + 1) != 0) {
      do {
        memset((void *)(*param_2 + (*(ushort *)(param_2 + 2) * uVar10 + (ulonglong)(uint)uVar5) * 4)
               ,0,(ulonglong)(uint)(iVar6 * 4));
        uVar10 = uVar10 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    *(short *)((longlong)param_2 + 0x12) = (short)param_2[2];
  }
  if (*(int *)((longlong)param_1 + 0x244) != 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
LAB_1450ff6ef:
  if (*(short *)((longlong)param_2 + 0x12) != 0) {
    (*(code *)param_1[1])(param_1,param_2);
    *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)(param_1[2] + 0x10);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1[2] + 0x14);
  }
  return;
}



// FUNCTION 1450ff750 FUN_1450ff750 body=1120 status=ok
// SIG undefined FUN_1450ff750(void)

undefined8 FUN_1450ff750(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar9 = param_2 & 0xffffffff;
  FUN_1450ffbb0();
  lVar4 = param_1[2];
  uVar12 = 0;
  if ((*(int *)(lVar4 + 0x24) == 0) && (uVar5 = uVar12, *(int *)(lVar4 + 0x18) != 0)) {
    do {
      uVar7 = (int)uVar5 + 1;
      *(undefined4 *)(lVar4 + 0x28 + uVar5 * 4) = *(undefined4 *)(&DAT_149c2ac00 + uVar5 * 4);
      lVar4 = param_1[2];
      uVar5 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(lVar4 + 0x18));
  }
  if (*(int *)(lVar4 + 0x20) == 0) {
    uVar7 = (uint)(uVar9 >> 0xc);
    uVar8 = uVar7 & 0xffff7;
    uVar9 = (ulonglong)((int)param_2 - (uVar7 - uVar8 >> 3) & 0xff | uVar8 << 0xc);
  }
  iVar2 = (int)(uVar9 >> 0xc);
  *(uint *)((longlong)param_1 + 0x254) = (uint)uVar9 & 0xff;
  iVar11 = *(int *)(lVar4 + 0x18);
  if (iVar2 == 3) {
    if (iVar11 == 4) {
      pcVar3 = FUN_1451018f0;
    }
    else if (iVar11 == 8) {
      pcVar3 = FUN_145101d60;
    }
    else if (iVar11 == 0xc) {
      pcVar3 = FUN_1451023e0;
    }
    else {
      if (iVar11 != 0x10) goto LAB_1450ff940;
      pcVar3 = FUN_145102ca0;
    }
  }
  else if (iVar2 == 4) {
    if (iVar11 == 4) {
      pcVar3 = FUN_1450ffc70;
    }
    else if (iVar11 == 8) {
      pcVar3 = FUN_145100060;
    }
    else if (iVar11 == 0xc) {
      pcVar3 = FUN_145100660;
    }
    else {
      if (iVar11 != 0x10) goto LAB_1450ff940;
      pcVar3 = FUN_145100ea0;
    }
  }
  else if (iVar2 == 0x607) {
    if (iVar11 == 4) {
      pcVar3 = FUN_1451037c0;
    }
    else if (iVar11 == 8) {
      pcVar3 = FUN_145103d80;
    }
    else if (iVar11 == 0xc) {
      pcVar3 = FUN_1451045b0;
    }
    else {
      if (iVar11 != 0x10) goto LAB_1450ff940;
      pcVar3 = FUN_145105090;
    }
  }
  else if (iVar2 == 0x60f) {
    if (iVar11 == 4) {
      pcVar3 = FUN_145105e10;
    }
    else if (iVar11 == 8) {
      pcVar3 = FUN_145106400;
    }
    else if (iVar11 == 0xc) {
      pcVar3 = FUN_145106cd0;
    }
    else {
      if (iVar11 != 0x10) goto LAB_1450ff940;
      pcVar3 = FUN_145107850;
    }
  }
  else if (iVar11 == 4) {
    pcVar3 = FUN_145108660;
  }
  else if (iVar11 == 8) {
    pcVar3 = FUN_145108be0;
  }
  else if (iVar11 == 0xc) {
    pcVar3 = FUN_145109380;
  }
  else {
    if (iVar11 != 0x10) goto LAB_1450ff940;
    pcVar3 = FUN_145109d50;
  }
  param_1[1] = (longlong)pcVar3;
LAB_1450ff940:
  uVar9 = (ulonglong)((float)*(uint *)((longlong)param_1 + 0x24c) * *(float *)(lVar4 + 0x1c));
  iVar11 = (int)uVar9;
  *(int *)(param_1 + 8) = iVar11;
  if (iVar11 != 0) {
    lVar4 = (**(code **)(*(longlong *)param_1[3] + 8))
                      ((longlong *)param_1[3],(uVar9 & 0xffffffff) << 2,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFDNReverb\\AkFDNReverbFX.cpp"
                       ,0x191);
    param_1[5] = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    param_1[6] = lVar4;
    param_1[7] = lVar4 + (ulonglong)*(uint *)(param_1 + 8) * 4;
  }
  lVar4 = param_1[2];
  uVar9 = uVar12;
  if (*(int *)(lVar4 + 0x18) != 0) {
    do {
      fVar13 = *(float *)(lVar4 + 0x28 + uVar9 * 4) * 0.001 *
               (float)*(uint *)((longlong)param_1 + 0x24c);
      uVar5 = (ulonglong)fVar13;
      uVar7 = (uint)uVar5;
      *(uint *)((longlong)param_1 + uVar9 * 4 + 0x50) = uVar7;
      if ((uVar5 & 1) == 0) {
        uVar7 = uVar7 + 1;
        *(uint *)((longlong)param_1 + uVar9 * 4 + 0x50) = uVar7;
      }
      uVar10 = (ulonglong)uVar7;
      uVar5 = 3;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (double)uVar10;
      auVar14 = sqrtpd(ZEXT416((uint)fVar13),auVar14);
      iVar11 = (int)auVar14._0_8_ + 1;
      if (3 < iVar11) {
        do {
          while ((int)(uVar10 % uVar5) == 0) {
            piVar1 = (int *)((longlong)param_1 + uVar9 * 4 + 0x50);
            *piVar1 = *piVar1 + 2;
            uVar5 = 3;
            uVar10 = (ulonglong)*(uint *)((longlong)param_1 + uVar9 * 4 + 0x50);
          }
          uVar7 = (int)uVar5 + 2;
          uVar5 = (ulonglong)uVar7;
        } while ((int)uVar7 < iVar11);
      }
      lVar4 = param_1[2];
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(lVar4 + 0x18));
  }
  qsort(param_1 + 10,(ulonglong)*(uint *)(lVar4 + 0x18),4,(_PtFuncCompare *)&LAB_14510a9b0);
  if ((*(uint *)(param_1[2] + 0x18) & 0xfffffffc) != 0) {
    do {
      uVar7 = (int)uVar12 * 4;
      iVar11 = *(int *)((longlong)param_1 + (ulonglong)(uVar7 + 3) * 4 + 0x50);
      lVar4 = (ulonglong)(uint)(iVar11 * 4) * 4;
      lVar6 = (**(code **)(*(longlong *)param_1[3] + 8))
                        ((longlong *)param_1[3],lVar4,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFDNReverb\\AkFDNReverbFX.cpp"
                         ,0x1bd);
      param_1[uVar12 + 0x22] = lVar6;
      if (lVar6 == 0) {
        return 0x34;
      }
      param_1[uVar12 + 0x26] = lVar6;
      param_1[uVar12 + 0x2a] = lVar4 + lVar6;
      param_1[(ulonglong)uVar7 + 0x12] =
           lVar6 + (ulonglong)
                   (uint)((iVar11 - *(int *)((longlong)param_1 + (ulonglong)uVar7 * 4 + 0x50)) * 4)
                   * 4;
      param_1[(ulonglong)(uVar7 + 1) + 0x12] =
           param_1[uVar12 + 0x22] +
           (ulonglong)
           ((iVar11 - *(int *)((longlong)param_1 + (ulonglong)(uVar7 + 1) * 4 + 0x50)) * 4 + 1) * 4;
      param_1[(ulonglong)(uVar7 + 2) + 0x12] =
           param_1[uVar12 + 0x22] +
           (ulonglong)
           ((iVar11 - *(int *)((longlong)param_1 + (ulonglong)(uVar7 + 2) * 4 + 0x50)) * 4 + 2) * 4;
      lVar4 = uVar12 + 0x22;
      uVar8 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar8;
      param_1[(ulonglong)(uVar7 + 3) + 0x12] = param_1[lVar4] + 0xc;
    } while (uVar8 < *(uint *)(param_1[2] + 0x18) >> 2);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  *(undefined1 *)(param_1[2] + 0x68) = 0;
  return 1;
}



// FUNCTION 1450ffbb0 FUN_1450ffbb0 body=191 status=ok
// SIG undefined FUN_1450ffbb0(void)

void FUN_1450ffbb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    (**(code **)(*(longlong *)*puVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    (**(code **)(*(longlong *)*puVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    (**(code **)(*(longlong *)*puVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    (**(code **)(*(longlong *)*puVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1450ffc70 FUN_1450ffc70 body=995 status=ok
// SIG undefined FUN_1450ffc70(void)

void FUN_1450ffc70(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float *local_res10;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  fVar32 = *(float *)(param_1 + 0x240);
  fVar31 = *(float *)(param_1 + 0x23c);
  uVar23 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar26 = *(float *)(param_1 + 0x4c);
  pfVar7 = *(float **)(param_1 + 0x110);
  pfVar8 = *(float **)(param_1 + 0x150);
  pfVar22 = *(float **)(param_1 + 0x130);
  pfVar17 = *(float **)(param_1 + 0x90);
  pfVar20 = *(float **)(param_1 + 0x98);
  pfVar19 = *(float **)(param_1 + 0xa0);
  pfVar18 = *(float **)(param_1 + 0xa8);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar38 = *(float *)(lVar6 + 0x10) - fVar31;
  fVar3 = *(float *)(param_1 + 0x48);
  fVar4 = *(float *)(param_1 + 0x238);
  fVar30 = *(float *)(param_1 + 0x230);
  fVar11 = *(float *)(param_1 + 0x170);
  fVar12 = *(float *)(param_1 + 0x174);
  fVar13 = *(float *)(param_1 + 0x178);
  fVar14 = *(float *)(param_1 + 0x17c);
  fVar33 = *(float *)(param_1 + 0x1f0);
  fVar34 = *(float *)(param_1 + 500);
  fVar35 = *(float *)(param_1 + 0x1f8);
  fVar36 = *(float *)(param_1 + 0x1fc);
  local_res10 = (float *)*param_2;
  uVar5 = *(ushort *)(param_2 + 2);
  fVar37 = -2.0 / (float)*(uint *)(lVar6 + 0x18);
  pfVar9 = *(float **)(param_1 + 0x28);
  pfVar10 = *(float **)(param_1 + 0x38);
  pfVar21 = *(float **)(param_1 + 0x30);
  fVar24 = *(float *)(lVar6 + 0x14) - fVar32;
  fVar27 = *(float *)(param_1 + 0x234);
  uVar15 = *(undefined8 *)(param_1 + 0x1b0);
  uVar16 = *(undefined8 *)(param_1 + 0x1b8);
  fVar25 = fVar26;
  fVar29 = fVar30;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      local_118 = (float)uVar15;
      fStack_114 = (float)((ulonglong)uVar15 >> 0x20);
      fStack_110 = (float)uVar16;
      fStack_10c = (float)((ulonglong)uVar16 >> 0x20);
      pfVar1 = pfVar17 + 4;
      fVar26 = *pfVar20;
      fVar30 = *pfVar17;
      fVar28 = *pfVar19;
      fVar31 = fVar31 + fVar38 * (1.0 / (float)uVar5);
      fVar32 = fVar32 + fVar24 * (1.0 / (float)uVar5);
      pfVar17 = pfVar7;
      if (pfVar1 < pfVar8) {
        pfVar17 = pfVar1;
      }
      pfVar1 = pfVar20 + 4;
      pfVar20 = pfVar7 + 1;
      if (pfVar1 < pfVar8) {
        pfVar20 = pfVar1;
      }
      pfVar1 = pfVar19 + 4;
      pfVar19 = pfVar7 + 2;
      if (pfVar1 < pfVar8) {
        pfVar19 = pfVar1;
      }
      pfVar1 = pfVar18 + 4;
      fVar33 = fVar30 * fVar11 + fVar33 * local_118;
      fVar34 = fVar26 * fVar12 + fVar34 * fStack_114;
      fVar35 = fVar28 * fVar13 + fVar35 * fStack_110;
      fVar36 = *pfVar18 * fVar14 + fVar36 * fStack_10c;
      pfVar18 = pfVar7 + 3;
      if (pfVar1 < pfVar8) {
        pfVar18 = pfVar1;
      }
      fVar30 = *local_res10;
      fVar28 = fVar36 + fVar34 + fVar35 + fVar33;
      *local_res10 = fVar30 * fVar31 +
                     (fVar34 * -1.0 + fVar36 * -1.0 + fVar33 * 1.0 + fVar35 * 1.0) * fVar32;
      local_res10 = local_res10 + 1;
      fVar27 = (fVar4 * fVar27 + fVar30) - fVar29;
      fVar26 = fVar27;
      if (pfVar9 != (float *)0x0) {
        fVar26 = *pfVar21;
        pfVar1 = pfVar21 + 1;
        *pfVar21 = fVar27;
        pfVar21 = pfVar9;
        if (pfVar1 != pfVar10) {
          pfVar21 = pfVar1;
        }
      }
      pfVar1 = pfVar22 + 4;
      fVar25 = fVar2 * fVar26 + fVar3 * fVar25;
      *pfVar22 = fVar25 + fVar28 * fVar37 + fVar34;
      pfVar22[1] = fVar25 + fVar28 * fVar37 + fVar35;
      pfVar22[2] = fVar25 + fVar28 * fVar37 + fVar36;
      pfVar22[3] = fVar25 + fVar28 * fVar37 + fVar33;
      pfVar22 = pfVar7;
      if (pfVar1 < pfVar8) {
        pfVar22 = pfVar1;
      }
      uVar23 = uVar23 - 1;
      fVar25 = fVar26;
      fVar29 = fVar30;
    } while (uVar23 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar26;
  *(float *)(param_1 + 0x230) = fVar30;
  *(float *)(param_1 + 0x234) = fVar27;
  *(float *)(param_1 + 0x1f0) = fVar33;
  *(float *)(param_1 + 500) = fVar34;
  *(float *)(param_1 + 0x1f8) = fVar35;
  *(float *)(param_1 + 0x1fc) = fVar36;
  *(float **)(param_1 + 0x30) = pfVar21;
  *(float **)(param_1 + 0x130) = pfVar22;
  *(float **)(param_1 + 0x90) = pfVar17;
  *(float **)(param_1 + 0x98) = pfVar20;
  *(float **)(param_1 + 0xa0) = pfVar19;
  *(float **)(param_1 + 0xa8) = pfVar18;
  return;
}



// FUNCTION 145100060 FUN_145100060 body=1525 status=ok
// SIG undefined FUN_145100060(void)

void FUN_145100060(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  float *pfVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_188;
  float *local_180;
  float *local_170;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  fVar44 = *(float *)(param_1 + 0x240);
  pfVar6 = *(float **)(param_1 + 0x38);
  fVar43 = *(float *)(param_1 + 0x23c);
  local_res20 = *(float **)(param_1 + 0xa8);
  pfVar7 = *(float **)(param_1 + 0x28);
  pfVar8 = *(float **)(param_1 + 0x110);
  pfVar9 = *(float **)(param_1 + 0x118);
  pfVar10 = *(float **)(param_1 + 0x150);
  pfVar11 = *(float **)(param_1 + 0x158);
  fVar1 = *(float *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar46 = *(float *)(lVar5 + 0x10) - fVar43;
  fVar3 = *(float *)(param_1 + 0x238);
  fVar39 = *(float *)(param_1 + 0x4c);
  fVar42 = *(float *)(param_1 + 0x230);
  fVar40 = *(float *)(param_1 + 0x234);
  pfVar22 = *(float **)(param_1 + 0x130);
  pfVar23 = *(float **)(param_1 + 0x138);
  pfVar20 = *(float **)(param_1 + 0x90);
  local_170 = (float *)*param_2;
  uVar4 = *(ushort *)(param_2 + 2);
  local_188 = *(float **)(param_1 + 0xb8);
  local_res10 = *(float **)(param_1 + 0xc0);
  fVar45 = -2.0 / (float)*(uint *)(lVar5 + 0x18);
  local_res18 = *(float **)(param_1 + 200);
  pfVar21 = *(float **)(param_1 + 0xb0);
  pfVar24 = *(float **)(param_1 + 0x98);
  pfVar26 = *(float **)(param_1 + 0x30);
  fVar28 = *(float *)(lVar5 + 0x14) - fVar44;
  local_180 = *(float **)(param_1 + 0xa0);
  uVar12 = *(undefined8 *)(param_1 + 0x170);
  uVar13 = *(undefined8 *)(param_1 + 0x178);
  uVar14 = *(undefined8 *)(param_1 + 0x180);
  uVar15 = *(undefined8 *)(param_1 + 0x188);
  uVar16 = *(undefined8 *)(param_1 + 0x1b0);
  uVar17 = *(undefined8 *)(param_1 + 0x1b8);
  uVar18 = *(undefined8 *)(param_1 + 0x1c0);
  uVar19 = *(undefined8 *)(param_1 + 0x1c8);
  uVar25 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar29 = *(float *)(param_1 + 0x1f0);
  fVar32 = *(float *)(param_1 + 500);
  fVar34 = *(float *)(param_1 + 0x1f8);
  fVar36 = *(float *)(param_1 + 0x1fc);
  local_158 = *(undefined8 *)(param_1 + 0x200);
  uStack_150 = *(undefined8 *)(param_1 + 0x208);
  fVar31 = fVar39;
  fVar41 = fVar42;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar39 = *pfVar24;
      fVar42 = *local_180;
      fVar33 = *pfVar20;
      pfVar27 = pfVar20 + 4;
      pfVar20 = pfVar8;
      if (pfVar27 < pfVar10) {
        pfVar20 = pfVar27;
      }
      pfVar27 = pfVar24 + 4;
      fVar30 = *local_res20;
      pfVar24 = pfVar8 + 1;
      if (pfVar27 < pfVar10) {
        pfVar24 = pfVar27;
      }
      local_128 = (float)uVar16;
      fStack_124 = (float)((ulonglong)uVar16 >> 0x20);
      fStack_120 = (float)uVar17;
      fStack_11c = (float)((ulonglong)uVar17 >> 0x20);
      pfVar27 = local_180 + 4;
      local_180 = pfVar8 + 2;
      if (pfVar27 < pfVar10) {
        local_180 = pfVar27;
      }
      local_138 = (float)uVar12;
      fStack_134 = (float)((ulonglong)uVar12 >> 0x20);
      fStack_130 = (float)uVar13;
      fStack_12c = (float)((ulonglong)uVar13 >> 0x20);
      pfVar27 = local_res20 + 4;
      local_res20 = pfVar8 + 3;
      if (pfVar27 < pfVar10) {
        local_res20 = pfVar27;
      }
      fVar35 = *local_res10;
      fVar29 = fVar33 * local_138 + local_128 * fVar29;
      fVar32 = fVar39 * fStack_134 + fStack_124 * fVar32;
      fVar34 = fVar42 * fStack_130 + fStack_120 * fVar34;
      fVar36 = fVar30 * fStack_12c + fStack_11c * fVar36;
      fVar39 = *pfVar21;
      pfVar27 = pfVar21 + 4;
      fVar42 = *local_res18;
      pfVar21 = pfVar9;
      if (pfVar27 < pfVar11) {
        pfVar21 = pfVar27;
      }
      fVar33 = *local_188;
      pfVar27 = local_188 + 4;
      local_108 = (float)uVar18;
      fStack_104 = (float)((ulonglong)uVar18 >> 0x20);
      fStack_100 = (float)uVar19;
      fStack_fc = (float)((ulonglong)uVar19 >> 0x20);
      local_188 = pfVar9 + 1;
      if (pfVar27 < pfVar11) {
        local_188 = pfVar27;
      }
      pfVar27 = local_res10 + 4;
      local_res10 = pfVar9 + 2;
      if (pfVar27 < pfVar11) {
        local_res10 = pfVar27;
      }
      local_118 = (float)uVar14;
      fStack_114 = (float)((ulonglong)uVar14 >> 0x20);
      fStack_110 = (float)uVar15;
      fStack_10c = (float)((ulonglong)uVar15 >> 0x20);
      pfVar27 = local_res18 + 4;
      local_res18 = pfVar9 + 3;
      if (pfVar27 < pfVar11) {
        local_res18 = pfVar27;
      }
      fVar30 = fVar39 * local_118 + local_108 * (float)local_158;
      fVar33 = fVar33 * fStack_114 + fStack_104 * local_158._4_4_;
      fVar35 = fVar35 * fStack_110 + fStack_100 * (float)uStack_150;
      fVar37 = fVar42 * fStack_10c + fStack_fc * uStack_150._4_4_;
      fVar42 = *local_170;
      local_158 = CONCAT44(fVar33,fVar30);
      uStack_150 = CONCAT44(fVar37,fVar35);
      fVar43 = fVar43 + fVar46 * (1.0 / (float)uVar4);
      fVar44 = fVar44 + fVar28 * (1.0 / (float)uVar4);
      fVar38 = fVar37 + fVar36 + fVar33 + fVar32 + fVar35 + fVar34 + fVar30 + fVar29;
      *local_170 = fVar42 * fVar43 +
                   (fVar33 * -1.0 + fVar32 * -1.0 + fVar37 * -1.0 + fVar36 * -1.0 +
                   fVar30 * 1.0 + fVar29 * 1.0 + fVar35 * 1.0 + fVar34 * 1.0) * fVar44;
      local_170 = local_170 + 1;
      fVar40 = (fVar3 * fVar40 + fVar42) - fVar41;
      fVar39 = fVar40;
      if (pfVar7 != (float *)0x0) {
        fVar39 = *pfVar26;
        pfVar27 = pfVar26 + 1;
        *pfVar26 = fVar40;
        pfVar26 = pfVar7;
        if (pfVar27 != pfVar6) {
          pfVar26 = pfVar27;
        }
      }
      fVar31 = fVar1 * fVar39 + fVar2 * fVar31;
      *pfVar22 = fVar31 + fVar38 * fVar45 + fVar32;
      pfVar22[1] = fVar31 + fVar38 * fVar45 + fVar34;
      pfVar22[2] = fVar31 + fVar38 * fVar45 + fVar36;
      pfVar22[3] = fVar31 + fVar30 + fVar38 * fVar45;
      pfVar27 = pfVar22 + 4;
      *pfVar23 = fVar31 + fVar33 + fVar38 * fVar45;
      pfVar23[1] = fVar31 + fVar35 + fVar38 * fVar45;
      pfVar23[2] = fVar31 + fVar37 + fVar38 * fVar45;
      pfVar23[3] = fVar31 + fVar38 * fVar45 + fVar29;
      pfVar22 = pfVar8;
      if (pfVar27 < pfVar10) {
        pfVar22 = pfVar27;
      }
      pfVar27 = pfVar23 + 4;
      pfVar23 = pfVar9;
      if (pfVar27 < pfVar11) {
        pfVar23 = pfVar27;
      }
      uVar25 = uVar25 - 1;
      fVar31 = fVar39;
      fVar41 = fVar42;
    } while (uVar25 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar39;
  *(float *)(param_1 + 0x230) = fVar42;
  *(float *)(param_1 + 0x234) = fVar40;
  *(float **)(param_1 + 0x98) = pfVar24;
  *(float **)(param_1 + 0xa8) = local_res20;
  *(float **)(param_1 + 0xb8) = local_188;
  *(float **)(param_1 + 0xc0) = local_res10;
  *(float **)(param_1 + 0x138) = pfVar23;
  *(float **)(param_1 + 200) = local_res18;
  *(float **)(param_1 + 0x30) = pfVar26;
  *(float *)(param_1 + 0x1f0) = fVar29;
  *(float *)(param_1 + 500) = fVar32;
  *(float *)(param_1 + 0x1f8) = fVar34;
  *(float *)(param_1 + 0x1fc) = fVar36;
  *(undefined8 *)(param_1 + 0x200) = local_158;
  *(undefined8 *)(param_1 + 0x208) = uStack_150;
  *(float **)(param_1 + 0x130) = pfVar22;
  *(float **)(param_1 + 0x90) = pfVar20;
  *(float **)(param_1 + 0xa0) = local_180;
  *(float **)(param_1 + 0xb0) = pfVar21;
  return;
}



// FUNCTION 145100660 FUN_145100660 body=2105 status=ok
// SIG undefined FUN_145100660(void)

void FUN_145100660(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  uint uVar32;
  float *pfVar33;
  float *pfVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1b8;
  float *local_1b0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  fVar54 = *(float *)(param_1 + 0x23c);
  fVar55 = *(float *)(param_1 + 0x240);
  pfVar6 = *(float **)(param_1 + 0x28);
  pfVar7 = *(float **)(param_1 + 0x110);
  pfVar8 = *(float **)(param_1 + 0x118);
  pfVar9 = *(float **)(param_1 + 0x120);
  pfVar10 = *(float **)(param_1 + 0x150);
  pfVar11 = *(float **)(param_1 + 0x158);
  pfVar12 = *(float **)(param_1 + 0x160);
  fVar1 = *(float *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  fVar39 = *(float *)(param_1 + 0x4c);
  fVar53 = *(float *)(param_1 + 0x230);
  fVar51 = *(float *)(param_1 + 0x234);
  pfVar28 = *(float **)(param_1 + 0x130);
  pfVar29 = *(float **)(param_1 + 0x138);
  pfVar30 = *(float **)(param_1 + 0x140);
  local_1b0 = (float *)*param_2;
  uVar4 = *(ushort *)(param_2 + 2);
  fVar56 = -2.0 / (float)*(uint *)(lVar5 + 0x18);
  pfVar13 = *(float **)(param_1 + 0x38);
  pfVar31 = *(float **)(param_1 + 0x90);
  local_res10 = *(float **)(param_1 + 0x98);
  local_1e0 = *(float **)(param_1 + 0xa0);
  local_res18 = *(float **)(param_1 + 0xa8);
  local_1d8 = *(float **)(param_1 + 0xb8);
  local_res20 = *(float **)(param_1 + 0xc0);
  fVar35 = *(float *)(lVar5 + 0x10) - fVar54;
  pfVar33 = *(float **)(param_1 + 0x30);
  fVar36 = *(float *)(lVar5 + 0x14) - fVar55;
  local_1b8 = *(float **)(param_1 + 0xb0);
  uVar18 = *(undefined8 *)(param_1 + 0x180);
  uVar19 = *(undefined8 *)(param_1 + 0x188);
  local_1f8 = *(float **)(param_1 + 200);
  uVar32 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar14 = *(float *)(param_1 + 0x170);
  fVar15 = *(float *)(param_1 + 0x174);
  fVar16 = *(float *)(param_1 + 0x178);
  fVar17 = *(float *)(param_1 + 0x17c);
  local_188 = *(float *)(param_1 + 0x210);
  fStack_184 = *(float *)(param_1 + 0x214);
  fStack_180 = *(float *)(param_1 + 0x218);
  fStack_17c = *(float *)(param_1 + 0x21c);
  fVar37 = *(float *)(param_1 + 0x1f0);
  fVar40 = *(float *)(param_1 + 500);
  fVar42 = *(float *)(param_1 + 0x1f8);
  fVar44 = *(float *)(param_1 + 0x1fc);
  uVar20 = *(undefined8 *)(param_1 + 400);
  uVar21 = *(undefined8 *)(param_1 + 0x198);
  local_1d0 = *(float **)(param_1 + 0xd0);
  uVar22 = *(undefined8 *)(param_1 + 0x1b0);
  uVar23 = *(undefined8 *)(param_1 + 0x1b8);
  local_1c8 = *(float **)(param_1 + 0xd8);
  uVar24 = *(undefined8 *)(param_1 + 0x1c0);
  uVar25 = *(undefined8 *)(param_1 + 0x1c8);
  local_1f0 = *(float **)(param_1 + 0xe0);
  uVar26 = *(undefined8 *)(param_1 + 0x1d0);
  uVar27 = *(undefined8 *)(param_1 + 0x1d8);
  local_1e8 = *(float **)(param_1 + 0xe8);
  local_198 = *(undefined8 *)(param_1 + 0x200);
  uStack_190 = *(undefined8 *)(param_1 + 0x208);
  fVar46 = fVar39;
  fVar52 = fVar53;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar39 = *pfVar31;
      pfVar34 = pfVar31 + 4;
      fVar53 = *local_res10;
      fVar41 = *local_1e0;
      pfVar31 = pfVar7;
      if (pfVar34 < pfVar10) {
        pfVar31 = pfVar34;
      }
      local_168 = (float)uVar22;
      fStack_164 = (float)((ulonglong)uVar22 >> 0x20);
      fStack_160 = (float)uVar23;
      fStack_15c = (float)((ulonglong)uVar23 >> 0x20);
      pfVar34 = local_res10 + 4;
      local_res10 = pfVar7 + 1;
      if (pfVar34 < pfVar10) {
        local_res10 = pfVar34;
      }
      pfVar34 = local_1e0 + 4;
      local_1e0 = pfVar7 + 2;
      if (pfVar34 < pfVar10) {
        local_1e0 = pfVar34;
      }
      pfVar34 = local_res18 + 4;
      fVar37 = fVar39 * fVar14 + local_168 * fVar37;
      fVar40 = fVar53 * fVar15 + fStack_164 * fVar40;
      fVar42 = fVar41 * fVar16 + fStack_160 * fVar42;
      fVar44 = *local_res18 * fVar17 + fStack_15c * fVar44;
      fVar39 = *local_1b8;
      local_res18 = pfVar7 + 3;
      if (pfVar34 < pfVar10) {
        local_res18 = pfVar34;
      }
      pfVar34 = local_1b8 + 4;
      fVar53 = *local_res20;
      fVar41 = *local_1d8;
      fVar45 = *local_1f8;
      local_1b8 = pfVar8;
      if (pfVar34 < pfVar11) {
        local_1b8 = pfVar34;
      }
      local_148 = (float)uVar24;
      fStack_144 = (float)((ulonglong)uVar24 >> 0x20);
      fStack_140 = (float)uVar25;
      fStack_13c = (float)((ulonglong)uVar25 >> 0x20);
      pfVar34 = local_1d8 + 4;
      local_1d8 = pfVar8 + 1;
      if (pfVar34 < pfVar11) {
        local_1d8 = pfVar34;
      }
      local_158 = (float)uVar18;
      fStack_154 = (float)((ulonglong)uVar18 >> 0x20);
      fStack_150 = (float)uVar19;
      fStack_14c = (float)((ulonglong)uVar19 >> 0x20);
      pfVar34 = local_res20 + 4;
      local_res20 = pfVar8 + 2;
      if (pfVar34 < pfVar11) {
        local_res20 = pfVar34;
      }
      pfVar34 = local_1f8 + 4;
      local_1f8 = pfVar8 + 3;
      if (pfVar34 < pfVar11) {
        local_1f8 = pfVar34;
      }
      fVar38 = fVar39 * local_158 + local_148 * (float)local_198;
      fVar41 = fVar41 * fStack_154 + fStack_144 * local_198._4_4_;
      fVar43 = fVar53 * fStack_150 + fStack_140 * (float)uStack_190;
      fVar45 = fVar45 * fStack_14c + fStack_13c * uStack_190._4_4_;
      fVar39 = *local_1d0;
      fVar53 = *local_1c8;
      pfVar34 = local_1d0 + 4;
      fVar54 = fVar54 + fVar35 * (1.0 / (float)uVar4);
      fVar55 = fVar55 + fVar36 * (1.0 / (float)uVar4);
      local_128 = (float)uVar26;
      fStack_124 = (float)((ulonglong)uVar26 >> 0x20);
      fStack_120 = (float)uVar27;
      fStack_11c = (float)((ulonglong)uVar27 >> 0x20);
      local_1d0 = pfVar9;
      if (pfVar34 < pfVar12) {
        local_1d0 = pfVar34;
      }
      pfVar34 = local_1c8 + 4;
      local_198 = CONCAT44(fVar41,fVar38);
      uStack_190 = CONCAT44(fVar45,fVar43);
      local_1c8 = pfVar9 + 1;
      if (pfVar34 < pfVar12) {
        local_1c8 = pfVar34;
      }
      local_138 = (float)uVar20;
      fStack_134 = (float)((ulonglong)uVar20 >> 0x20);
      fStack_130 = (float)uVar21;
      fStack_12c = (float)((ulonglong)uVar21 >> 0x20);
      pfVar34 = local_1f0 + 4;
      local_188 = fVar39 * local_138 + local_128 * local_188;
      fStack_184 = fVar53 * fStack_134 + fStack_124 * fStack_184;
      fStack_180 = *local_1f0 * fStack_130 + fStack_120 * fStack_180;
      fStack_17c = *local_1e8 * fStack_12c + fStack_11c * fStack_17c;
      local_1f0 = pfVar9 + 2;
      if (pfVar34 < pfVar12) {
        local_1f0 = pfVar34;
      }
      pfVar34 = local_1e8 + 4;
      local_1e8 = pfVar9 + 3;
      if (pfVar34 < pfVar12) {
        local_1e8 = pfVar34;
      }
      fVar53 = *local_1b0;
      fVar47 = fStack_17c + fVar45 + fVar44 + fStack_184 + fVar41 + fVar40 +
               fStack_180 + fVar43 + fVar42 + local_188 + fVar38 + fVar37;
      fVar48 = fVar47 * fVar56;
      fVar49 = fVar47 * fVar56;
      fVar50 = fVar47 * fVar56;
      fVar47 = fVar47 * fVar56;
      *local_1b0 = fVar53 * fVar54 +
                   (fStack_184 * -1.0 + fVar40 * -1.0 + fVar41 * -1.0 +
                    fStack_17c * -1.0 + fVar44 * -1.0 + fVar45 * -1.0 +
                   local_188 * 1.0 + fVar37 * 1.0 + fVar38 * 1.0 +
                   fStack_180 * 1.0 + fVar42 * 1.0 + fVar43 * 1.0) * fVar55;
      local_1b0 = local_1b0 + 1;
      fVar51 = (fVar3 * fVar51 + fVar53) - fVar52;
      fVar39 = fVar51;
      if (pfVar6 != (float *)0x0) {
        fVar39 = *pfVar33;
        pfVar34 = pfVar33 + 1;
        *pfVar33 = fVar51;
        pfVar33 = pfVar6;
        if (pfVar34 != pfVar13) {
          pfVar33 = pfVar34;
        }
      }
      fVar46 = fVar1 * fVar39 + fVar2 * fVar46;
      *pfVar28 = fVar46 + fVar49 + fVar40;
      pfVar28[1] = fVar46 + fVar50 + fVar42;
      pfVar28[2] = fVar46 + fVar47 + fVar44;
      pfVar28[3] = fVar46 + fVar38 + fVar48;
      pfVar34 = pfVar28 + 4;
      *pfVar29 = fVar46 + fVar41 + fVar49;
      pfVar29[1] = fVar46 + fVar43 + fVar50;
      pfVar29[2] = fVar46 + fVar45 + fVar47;
      pfVar29[3] = fVar46 + local_188 + fVar48;
      pfVar28 = pfVar7;
      if (pfVar34 < pfVar10) {
        pfVar28 = pfVar34;
      }
      pfVar34 = pfVar29 + 4;
      *pfVar30 = fVar46 + fStack_184 + fVar49;
      pfVar30[1] = fVar46 + fStack_180 + fVar50;
      pfVar30[2] = fVar46 + fStack_17c + fVar47;
      pfVar30[3] = fVar46 + fVar48 + fVar37;
      pfVar29 = pfVar8;
      if (pfVar34 < pfVar11) {
        pfVar29 = pfVar34;
      }
      pfVar34 = pfVar30 + 4;
      pfVar30 = pfVar9;
      if (pfVar34 < pfVar12) {
        pfVar30 = pfVar34;
      }
      uVar32 = uVar32 - 1;
      fVar46 = fVar39;
      fVar52 = fVar53;
    } while (uVar32 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar39;
  *(float *)(param_1 + 0x230) = fVar53;
  *(float *)(param_1 + 0x234) = fVar51;
  *(float **)(param_1 + 0x90) = pfVar31;
  *(float **)(param_1 + 0x98) = local_res10;
  *(float **)(param_1 + 0xa0) = local_1e0;
  *(float **)(param_1 + 0xa8) = local_res18;
  *(float **)(param_1 + 0xb8) = local_1d8;
  *(float **)(param_1 + 0xc0) = local_res20;
  *(float **)(param_1 + 200) = local_1f8;
  *(float **)(param_1 + 0xd0) = local_1d0;
  *(float **)(param_1 + 0xd8) = local_1c8;
  *(float **)(param_1 + 0xe0) = local_1f0;
  *(float **)(param_1 + 0x138) = pfVar29;
  *(float **)(param_1 + 0xe8) = local_1e8;
  *(float **)(param_1 + 0x30) = pfVar33;
  *(float *)(param_1 + 0x1f0) = fVar37;
  *(float *)(param_1 + 500) = fVar40;
  *(float *)(param_1 + 0x1f8) = fVar42;
  *(float *)(param_1 + 0x1fc) = fVar44;
  *(undefined8 *)(param_1 + 0x200) = local_198;
  *(undefined8 *)(param_1 + 0x208) = uStack_190;
  *(float *)(param_1 + 0x210) = local_188;
  *(float *)(param_1 + 0x214) = fStack_184;
  *(float *)(param_1 + 0x218) = fStack_180;
  *(float *)(param_1 + 0x21c) = fStack_17c;
  *(float **)(param_1 + 0x130) = pfVar28;
  *(float **)(param_1 + 0x140) = pfVar30;
  *(float **)(param_1 + 0xb0) = local_1b8;
  return;
}



// FUNCTION 145100ea0 FUN_145100ea0 body=2635 status=ok
// SIG undefined FUN_145100ea0(void)

void FUN_145100ea0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  uint uVar40;
  float *pfVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  float *local_250;
  float *local_230;
  float *local_228;
  float *local_220;
  float *local_218;
  float *local_210;
  float *local_208;
  float *local_200;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  fVar62 = *(float *)(param_1 + 0x23c);
  fVar63 = *(float *)(param_1 + 0x240);
  pfVar6 = *(float **)(param_1 + 0x28);
  pfVar7 = *(float **)(param_1 + 0x110);
  pfVar8 = *(float **)(param_1 + 0x118);
  pfVar9 = *(float **)(param_1 + 0x120);
  pfVar10 = *(float **)(param_1 + 0x128);
  pfVar11 = *(float **)(param_1 + 0x150);
  pfVar35 = *(float **)(param_1 + 0x130);
  fVar1 = *(float *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  fVar45 = *(float *)(param_1 + 0x4c);
  fVar60 = *(float *)(param_1 + 0x230);
  fVar58 = *(float *)(param_1 + 0x234);
  pfVar36 = *(float **)(param_1 + 0x138);
  pfVar37 = *(float **)(param_1 + 0x140);
  pfVar38 = *(float **)(param_1 + 0x148);
  local_200 = (float *)*param_2;
  uVar4 = *(ushort *)(param_2 + 2);
  fVar61 = -2.0 / (float)*(uint *)(lVar5 + 0x18);
  pfVar12 = *(float **)(param_1 + 0x38);
  pfVar13 = *(float **)(param_1 + 0x158);
  pfVar14 = *(float **)(param_1 + 0x160);
  pfVar15 = *(float **)(param_1 + 0x168);
  local_res10 = *(float **)(param_1 + 0x98);
  local_230 = *(float **)(param_1 + 0xa0);
  local_res18 = *(float **)(param_1 + 0xa8);
  local_228 = *(float **)(param_1 + 0xb0);
  fVar42 = *(float *)(lVar5 + 0x10) - fVar62;
  pfVar41 = *(float **)(param_1 + 0x30);
  fVar43 = *(float *)(lVar5 + 0x14) - fVar63;
  pfVar34 = *(float **)(param_1 + 0x90);
  uVar20 = *(undefined8 *)(param_1 + 0x180);
  uVar21 = *(undefined8 *)(param_1 + 0x188);
  uVar40 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar16 = *(float *)(param_1 + 0x170);
  fVar17 = *(float *)(param_1 + 0x174);
  fVar18 = *(float *)(param_1 + 0x178);
  fVar19 = *(float *)(param_1 + 0x17c);
  local_1c8 = *(float *)(param_1 + 0x210);
  fStack_1c4 = *(float *)(param_1 + 0x214);
  fStack_1c0 = *(float *)(param_1 + 0x218);
  fStack_1bc = *(float *)(param_1 + 0x21c);
  local_1b8 = *(float *)(param_1 + 0x220);
  fStack_1b4 = *(float *)(param_1 + 0x224);
  fStack_1b0 = *(float *)(param_1 + 0x228);
  fStack_1ac = *(float *)(param_1 + 0x22c);
  fVar54 = *(float *)(param_1 + 0x1f0);
  fVar55 = *(float *)(param_1 + 500);
  fVar56 = *(float *)(param_1 + 0x1f8);
  fVar57 = *(float *)(param_1 + 0x1fc);
  local_res20 = *(float **)(param_1 + 0xb8);
  local_278 = *(float **)(param_1 + 0xc0);
  local_270 = *(float **)(param_1 + 200);
  local_220 = *(float **)(param_1 + 0xd0);
  local_268 = *(float **)(param_1 + 0xd8);
  uVar22 = *(undefined8 *)(param_1 + 400);
  uVar23 = *(undefined8 *)(param_1 + 0x198);
  local_210 = *(float **)(param_1 + 0xe0);
  uVar24 = *(undefined8 *)(param_1 + 0x1a0);
  uVar25 = *(undefined8 *)(param_1 + 0x1a8);
  local_260 = *(float **)(param_1 + 0xe8);
  uVar26 = *(undefined8 *)(param_1 + 0x1b0);
  uVar27 = *(undefined8 *)(param_1 + 0x1b8);
  local_218 = *(float **)(param_1 + 0xf0);
  uVar28 = *(undefined8 *)(param_1 + 0x1c0);
  uVar29 = *(undefined8 *)(param_1 + 0x1c8);
  local_208 = *(float **)(param_1 + 0xf8);
  uVar30 = *(undefined8 *)(param_1 + 0x1d0);
  uVar31 = *(undefined8 *)(param_1 + 0x1d8);
  local_258 = *(float **)(param_1 + 0x100);
  uVar32 = *(undefined8 *)(param_1 + 0x1e0);
  uVar33 = *(undefined8 *)(param_1 + 0x1e8);
  local_250 = *(float **)(param_1 + 0x108);
  local_1d8 = *(undefined8 *)(param_1 + 0x200);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x208);
  fVar49 = fVar45;
  fVar59 = fVar60;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar45 = *pfVar34;
      pfVar39 = pfVar34 + 4;
      local_198 = (float)uVar26;
      fStack_194 = (float)((ulonglong)uVar26 >> 0x20);
      fStack_190 = (float)uVar27;
      fStack_18c = (float)((ulonglong)uVar27 >> 0x20);
      fVar60 = *local_res10;
      fVar47 = *local_230;
      pfVar34 = pfVar7;
      if (pfVar39 < pfVar11) {
        pfVar34 = pfVar39;
      }
      pfVar39 = local_res10 + 4;
      local_res10 = pfVar7 + 1;
      if (pfVar39 < pfVar11) {
        local_res10 = pfVar39;
      }
      pfVar39 = local_230 + 4;
      local_230 = pfVar7 + 2;
      if (pfVar39 < pfVar11) {
        local_230 = pfVar39;
      }
      fVar54 = fVar45 * fVar16 + fVar54 * local_198;
      fVar55 = fVar60 * fVar17 + fVar55 * fStack_194;
      fVar56 = fVar47 * fVar18 + fVar56 * fStack_190;
      fVar57 = *local_res18 * fVar19 + fVar57 * fStack_18c;
      pfVar39 = local_res18 + 4;
      local_res18 = pfVar7 + 3;
      if (pfVar39 < pfVar11) {
        local_res18 = pfVar39;
      }
      fVar45 = *local_228;
      pfVar39 = local_228 + 4;
      fVar60 = *local_res20;
      fVar47 = *local_278;
      fVar48 = *local_270;
      local_228 = pfVar8;
      if (pfVar39 < pfVar13) {
        local_228 = pfVar39;
      }
      pfVar39 = local_res20 + 4;
      local_188 = (float)uVar20;
      fStack_184 = (float)((ulonglong)uVar20 >> 0x20);
      fStack_180 = (float)uVar21;
      fStack_17c = (float)((ulonglong)uVar21 >> 0x20);
      local_res20 = pfVar8 + 1;
      if (pfVar39 < pfVar13) {
        local_res20 = pfVar39;
      }
      pfVar39 = local_278 + 4;
      local_278 = pfVar8 + 2;
      if (pfVar39 < pfVar13) {
        local_278 = pfVar39;
      }
      pfVar39 = local_270 + 4;
      local_270 = pfVar8 + 3;
      if (pfVar39 < pfVar13) {
        local_270 = pfVar39;
      }
      local_178 = (float)uVar28;
      fStack_174 = (float)((ulonglong)uVar28 >> 0x20);
      fStack_170 = (float)uVar29;
      fStack_16c = (float)((ulonglong)uVar29 >> 0x20);
      fVar50 = *local_268;
      fVar44 = fVar45 * local_188 + (float)local_1d8 * local_178;
      fVar46 = fVar60 * fStack_184 + local_1d8._4_4_ * fStack_174;
      fVar47 = fVar47 * fStack_180 + (float)uStack_1d0 * fStack_170;
      fVar48 = fVar48 * fStack_17c + uStack_1d0._4_4_ * fStack_16c;
      fVar45 = *local_220;
      pfVar39 = local_220 + 4;
      fVar60 = *local_210;
      local_1d8 = CONCAT44(fVar46,fVar44);
      uStack_1d0 = CONCAT44(fVar48,fVar47);
      local_220 = pfVar9;
      if (pfVar39 < pfVar14) {
        local_220 = pfVar39;
      }
      local_158 = (float)uVar30;
      fStack_154 = (float)((ulonglong)uVar30 >> 0x20);
      fStack_150 = (float)uVar31;
      fStack_14c = (float)((ulonglong)uVar31 >> 0x20);
      pfVar39 = local_268 + 4;
      local_168 = (float)uVar22;
      fStack_164 = (float)((ulonglong)uVar22 >> 0x20);
      fStack_160 = (float)uVar23;
      fStack_15c = (float)((ulonglong)uVar23 >> 0x20);
      local_268 = pfVar9 + 1;
      if (pfVar39 < pfVar14) {
        local_268 = pfVar39;
      }
      pfVar39 = local_210 + 4;
      local_210 = pfVar9 + 2;
      if (pfVar39 < pfVar14) {
        local_210 = pfVar39;
      }
      pfVar39 = local_260 + 4;
      local_1c8 = fVar45 * local_168 + local_1c8 * local_158;
      fStack_1c4 = fVar50 * fStack_164 + fStack_1c4 * fStack_154;
      fStack_1c0 = fVar60 * fStack_160 + fStack_1c0 * fStack_150;
      fStack_1bc = *local_260 * fStack_15c + fStack_1bc * fStack_14c;
      fVar45 = *local_218;
      local_260 = pfVar9 + 3;
      if (pfVar39 < pfVar14) {
        local_260 = pfVar39;
      }
      pfVar39 = local_218 + 4;
      fVar50 = *local_258;
      fVar51 = *local_208;
      fVar52 = *local_250;
      local_218 = pfVar10;
      if (pfVar39 < pfVar15) {
        local_218 = pfVar39;
      }
      pfVar39 = local_208 + 4;
      local_208 = pfVar10 + 1;
      if (pfVar39 < pfVar15) {
        local_208 = pfVar39;
      }
      pfVar39 = local_258 + 4;
      local_258 = pfVar10 + 2;
      if (pfVar39 < pfVar15) {
        local_258 = pfVar39;
      }
      pfVar39 = local_250 + 4;
      fVar62 = fVar62 + fVar42 * (1.0 / (float)uVar4);
      fVar63 = fVar63 + fVar43 * (1.0 / (float)uVar4);
      local_250 = pfVar10 + 3;
      if (pfVar39 < pfVar15) {
        local_250 = pfVar39;
      }
      local_138 = (float)uVar32;
      fStack_134 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_130 = (float)uVar33;
      fStack_12c = (float)((ulonglong)uVar33 >> 0x20);
      local_148 = (float)uVar24;
      fStack_144 = (float)((ulonglong)uVar24 >> 0x20);
      fStack_140 = (float)uVar25;
      fStack_13c = (float)((ulonglong)uVar25 >> 0x20);
      fVar60 = *local_200;
      local_1b8 = fVar45 * local_148 + local_1b8 * local_138;
      fStack_1b4 = fVar51 * fStack_144 + fStack_1b4 * fStack_134;
      fStack_1b0 = fVar50 * fStack_140 + fStack_1b0 * fStack_130;
      fStack_1ac = fVar52 * fStack_13c + fStack_1ac * fStack_12c;
      fVar50 = fStack_1ac + fVar48 + fVar57 + fStack_1bc + fStack_1b4 + fVar46 + fVar55 + fStack_1c4
               + fStack_1b0 + fVar47 + fVar56 + fStack_1c0 + local_1b8 + fVar44 + fVar54 + local_1c8
      ;
      fVar51 = fVar50 * fVar61;
      fVar52 = fVar50 * fVar61;
      fVar53 = fVar50 * fVar61;
      fVar50 = fVar50 * fVar61;
      *local_200 = fVar60 * fVar62 +
                   (fStack_1b4 * -1.0 + fVar55 * -1.0 + fVar46 * -1.0 + fStack_1c4 * -1.0 +
                    fStack_1ac * -1.0 + fVar57 * -1.0 + fVar48 * -1.0 + fStack_1bc * -1.0 +
                   local_1b8 * 1.0 + fVar54 * 1.0 + fVar44 * 1.0 + local_1c8 * 1.0 +
                   fStack_1b0 * 1.0 + fVar56 * 1.0 + fVar47 * 1.0 + fStack_1c0 * 1.0) * fVar63;
      local_200 = local_200 + 1;
      fVar58 = (fVar3 * fVar58 + fVar60) - fVar59;
      fVar45 = fVar58;
      if (pfVar6 != (float *)0x0) {
        fVar45 = *pfVar41;
        pfVar39 = pfVar41 + 1;
        *pfVar41 = fVar58;
        pfVar41 = pfVar6;
        if (pfVar39 != pfVar12) {
          pfVar41 = pfVar39;
        }
      }
      fVar49 = fVar1 * fVar45 + fVar2 * fVar49;
      *pfVar35 = fVar49 + fVar52 + fVar55;
      pfVar35[1] = fVar49 + fVar53 + fVar56;
      pfVar35[2] = fVar49 + fVar50 + fVar57;
      pfVar35[3] = fVar49 + fVar44 + fVar51;
      pfVar39 = pfVar35 + 4;
      *pfVar36 = fVar49 + fVar46 + fVar52;
      pfVar36[1] = fVar49 + fVar47 + fVar53;
      pfVar36[2] = fVar49 + fVar48 + fVar50;
      pfVar36[3] = fVar49 + local_1c8 + fVar51;
      pfVar35 = pfVar7;
      if (pfVar39 < pfVar11) {
        pfVar35 = pfVar39;
      }
      pfVar39 = pfVar36 + 4;
      pfVar36 = pfVar8;
      if (pfVar39 < pfVar13) {
        pfVar36 = pfVar39;
      }
      *pfVar37 = fVar49 + fStack_1c4 + fVar52;
      pfVar37[1] = fVar49 + fStack_1c0 + fVar53;
      pfVar37[2] = fVar49 + fStack_1bc + fVar50;
      pfVar37[3] = fVar49 + local_1b8 + fVar51;
      pfVar39 = pfVar37 + 4;
      *pfVar38 = fVar49 + fStack_1b4 + fVar52;
      pfVar38[1] = fVar49 + fStack_1b0 + fVar53;
      pfVar38[2] = fVar49 + fStack_1ac + fVar50;
      pfVar38[3] = fVar49 + fVar51 + fVar54;
      pfVar37 = pfVar9;
      if (pfVar39 < pfVar14) {
        pfVar37 = pfVar39;
      }
      pfVar39 = pfVar38 + 4;
      pfVar38 = pfVar10;
      if (pfVar39 < pfVar15) {
        pfVar38 = pfVar39;
      }
      uVar40 = uVar40 - 1;
      fVar49 = fVar45;
      fVar59 = fVar60;
    } while (uVar40 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar45;
  *(float *)(param_1 + 0x230) = fVar60;
  *(float *)(param_1 + 0x234) = fVar58;
  *(float **)(param_1 + 0xb0) = local_228;
  *(float **)(param_1 + 0xb8) = local_res20;
  *(float **)(param_1 + 0xc0) = local_278;
  *(float **)(param_1 + 200) = local_270;
  *(float **)(param_1 + 0xd8) = local_268;
  *(float **)(param_1 + 0x90) = pfVar34;
  *(float **)(param_1 + 0xe8) = local_260;
  *(float **)(param_1 + 0x98) = local_res10;
  *(float **)(param_1 + 0x100) = local_258;
  *(float **)(param_1 + 0x138) = pfVar36;
  *(float **)(param_1 + 0xa0) = local_230;
  *(float **)(param_1 + 0x108) = local_250;
  *(float **)(param_1 + 0x30) = pfVar41;
  *(float *)(param_1 + 0x1f0) = fVar54;
  *(float *)(param_1 + 500) = fVar55;
  *(float *)(param_1 + 0x1f8) = fVar56;
  *(float *)(param_1 + 0x1fc) = fVar57;
  *(undefined8 *)(param_1 + 0x200) = local_1d8;
  *(undefined8 *)(param_1 + 0x208) = uStack_1d0;
  *(float *)(param_1 + 0x210) = local_1c8;
  *(float *)(param_1 + 0x214) = fStack_1c4;
  *(float *)(param_1 + 0x218) = fStack_1c0;
  *(float *)(param_1 + 0x21c) = fStack_1bc;
  *(float *)(param_1 + 0x220) = local_1b8;
  *(float *)(param_1 + 0x224) = fStack_1b4;
  *(float *)(param_1 + 0x228) = fStack_1b0;
  *(float *)(param_1 + 0x22c) = fStack_1ac;
  *(float **)(param_1 + 0x130) = pfVar35;
  *(float **)(param_1 + 0x140) = pfVar37;
  *(float **)(param_1 + 0x148) = pfVar38;
  *(float **)(param_1 + 0xa8) = local_res18;
  *(float **)(param_1 + 0xd0) = local_220;
  *(float **)(param_1 + 0xe0) = local_210;
  *(float **)(param_1 + 0xf0) = local_218;
  *(float **)(param_1 + 0xf8) = local_208;
  return;
}



// FUNCTION 1451018f0 FUN_1451018f0 body=1135 status=ok
// SIG undefined FUN_1451018f0(void)

void FUN_1451018f0(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float *local_res18;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  fVar36 = *(float *)(param_1 + 0x240);
  fVar35 = *(float *)(param_1 + 0x23c);
  uVar25 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar11 = *(float *)(param_1 + 0x1b0);
  fVar12 = *(float *)(param_1 + 0x1b4);
  fVar13 = *(float *)(param_1 + 0x1b8);
  fVar14 = *(float *)(param_1 + 0x1bc);
  pfVar7 = *(float **)(param_1 + 0x110);
  pfVar8 = *(float **)(param_1 + 0x150);
  pfVar21 = *(float **)(param_1 + 0x90);
  pfVar20 = *(float **)(param_1 + 0x98);
  pfVar23 = *(float **)(param_1 + 0xa0);
  pfVar22 = *(float **)(param_1 + 0xa8);
  fVar32 = *(float *)(param_1 + 0x234);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar4 = *(float *)(param_1 + 0x238);
  fVar30 = *(float *)(param_1 + 0x4c);
  fVar31 = *(float *)(param_1 + 0x230);
  fVar37 = *(float *)(param_1 + 0x1f0);
  fVar38 = *(float *)(param_1 + 500);
  fVar39 = *(float *)(param_1 + 0x1f8);
  fVar40 = *(float *)(param_1 + 0x1fc);
  local_res18 = (float *)*param_2;
  uVar5 = *(ushort *)(param_2 + 2);
  pfVar19 = *(float **)(param_1 + 0x30);
  fVar28 = -2.0 / (float)*(uint *)(lVar6 + 0x18);
  pfVar9 = *(float **)(param_1 + 0x28);
  pfVar10 = *(float **)(param_1 + 0x38);
  fVar26 = *(float *)(lVar6 + 0x10) - fVar35;
  pfVar24 = *(float **)(param_1 + 0x130);
  fVar27 = *(float *)(lVar6 + 0x14) - fVar36;
  fVar15 = *(float *)(param_1 + 0x170);
  fVar16 = *(float *)(param_1 + 0x174);
  fVar17 = *(float *)(param_1 + 0x178);
  fVar18 = *(float *)(param_1 + 0x17c);
  fVar29 = fVar30;
  fVar34 = fVar31;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar30 = *pfVar20;
      pfVar1 = pfVar21 + 4;
      fVar31 = *pfVar21;
      fVar33 = *pfVar23;
      fVar35 = fVar35 + fVar26 * (1.0 / (float)uVar5);
      fVar36 = fVar36 + fVar27 * (1.0 / (float)uVar5);
      pfVar21 = pfVar7;
      if (pfVar1 < pfVar8) {
        pfVar21 = pfVar1;
      }
      pfVar1 = pfVar20 + 4;
      pfVar20 = pfVar7 + 1;
      if (pfVar1 < pfVar8) {
        pfVar20 = pfVar1;
      }
      pfVar1 = pfVar23 + 4;
      pfVar23 = pfVar7 + 2;
      if (pfVar1 < pfVar8) {
        pfVar23 = pfVar1;
      }
      pfVar1 = pfVar22 + 4;
      fVar37 = fVar31 * fVar15 + fVar37 * fVar11;
      fVar38 = fVar30 * fVar16 + fVar38 * fVar12;
      fVar39 = fVar33 * fVar17 + fVar39 * fVar13;
      fVar40 = *pfVar22 * fVar18 + fVar40 * fVar14;
      pfVar22 = pfVar7 + 3;
      if (pfVar1 < pfVar8) {
        pfVar22 = pfVar1;
      }
      fVar30 = local_res18[*(ushort *)(param_2 + 2)];
      fVar33 = fVar40 + fVar38 + fVar39 + fVar37;
      fVar31 = *local_res18 + fVar30;
      *local_res18 = *local_res18 * fVar35 +
                     (fVar38 * -1.0 + fVar40 * -1.0 + fVar37 * 1.0 + fVar39 * 1.0) * fVar36;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar30 * fVar35 + (fVar38 * 1.0 + fVar40 * -1.0 + fVar37 * 1.0 + fVar39 * -1.0) * fVar36;
      local_res18 = local_res18 + 1;
      fVar32 = (fVar4 * fVar32 + fVar31) - fVar34;
      fVar30 = fVar32;
      if (pfVar9 != (float *)0x0) {
        fVar30 = *pfVar19;
        pfVar1 = pfVar19 + 1;
        *pfVar19 = fVar32;
        pfVar19 = pfVar9;
        if (pfVar1 != pfVar10) {
          pfVar19 = pfVar1;
        }
      }
      pfVar1 = pfVar24 + 4;
      fVar29 = fVar2 * fVar30 + fVar3 * fVar29;
      *pfVar24 = fVar29 + fVar33 * fVar28 + fVar38;
      pfVar24[1] = fVar29 + fVar33 * fVar28 + fVar39;
      pfVar24[2] = fVar29 + fVar33 * fVar28 + fVar40;
      pfVar24[3] = fVar29 + fVar33 * fVar28 + fVar37;
      pfVar24 = pfVar7;
      if (pfVar1 < pfVar8) {
        pfVar24 = pfVar1;
      }
      uVar25 = uVar25 - 1;
      fVar29 = fVar30;
      fVar34 = fVar31;
    } while (uVar25 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar30;
  *(float *)(param_1 + 0x230) = fVar31;
  *(float *)(param_1 + 0x234) = fVar32;
  *(float **)(param_1 + 0x90) = pfVar21;
  *(float *)(param_1 + 0x1f0) = fVar37;
  *(float *)(param_1 + 500) = fVar38;
  *(float *)(param_1 + 0x1f8) = fVar39;
  *(float *)(param_1 + 0x1fc) = fVar40;
  *(float **)(param_1 + 0x30) = pfVar19;
  *(float **)(param_1 + 0x130) = pfVar24;
  *(float **)(param_1 + 0x98) = pfVar20;
  *(float **)(param_1 + 0xa0) = pfVar23;
  *(float **)(param_1 + 0xa8) = pfVar22;
  return;
}



// FUNCTION 145101d60 FUN_145101d60 body=1660 status=ok
// SIG undefined FUN_145101d60(void)

void FUN_145101d60(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  uint uVar31;
  float *pfVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float *local_res18;
  float *local_res20;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  float *local_188;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x238);
  fVar50 = *(float *)(param_1 + 0x23c);
  fVar51 = *(float *)(param_1 + 0x240);
  local_1b8 = *(float **)(param_1 + 0xa8);
  pfVar7 = *(float **)(param_1 + 0x38);
  pfVar8 = *(float **)(param_1 + 0x28);
  pfVar30 = *(float **)(param_1 + 0x30);
  pfVar9 = *(float **)(param_1 + 0x110);
  pfVar10 = *(float **)(param_1 + 0x118);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar46 = *(float *)(param_1 + 0x4c);
  fVar47 = *(float *)(param_1 + 0x230);
  fVar48 = *(float *)(param_1 + 0x234);
  pfVar11 = *(float **)(param_1 + 0x150);
  pfVar12 = *(float **)(param_1 + 0x158);
  pfVar25 = *(float **)(param_1 + 0x90);
  fVar13 = *(float *)(param_1 + 0x170);
  fVar14 = *(float *)(param_1 + 0x174);
  fVar15 = *(float *)(param_1 + 0x178);
  fVar16 = *(float *)(param_1 + 0x17c);
  pfVar26 = *(float **)(param_1 + 0xb0);
  local_188 = (float *)*param_2;
  uVar5 = *(ushort *)(param_2 + 2);
  pfVar27 = *(float **)(param_1 + 0x130);
  local_1b0 = *(float **)(param_1 + 0xb8);
  fVar35 = -2.0 / (float)*(uint *)(lVar6 + 0x18);
  local_res18 = *(float **)(param_1 + 0xc0);
  local_res20 = *(float **)(param_1 + 200);
  pfVar29 = *(float **)(param_1 + 0x98);
  fVar33 = *(float *)(lVar6 + 0x10) - fVar50;
  pfVar28 = *(float **)(param_1 + 0x138);
  fVar34 = *(float *)(lVar6 + 0x14) - fVar51;
  local_1a8 = *(float **)(param_1 + 0xa0);
  uVar21 = *(undefined8 *)(param_1 + 0x180);
  uVar22 = *(undefined8 *)(param_1 + 0x188);
  fVar17 = *(float *)(param_1 + 0x1b0);
  fVar18 = *(float *)(param_1 + 0x1b4);
  fVar19 = *(float *)(param_1 + 0x1b8);
  fVar20 = *(float *)(param_1 + 0x1bc);
  fVar36 = *(float *)(param_1 + 0x1f0);
  fVar39 = *(float *)(param_1 + 500);
  fVar41 = *(float *)(param_1 + 0x1f8);
  fVar43 = *(float *)(param_1 + 0x1fc);
  fVar37 = *(float *)(param_1 + 0x200);
  fVar40 = *(float *)(param_1 + 0x204);
  fVar42 = *(float *)(param_1 + 0x208);
  fVar44 = *(float *)(param_1 + 0x20c);
  uVar31 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar23 = *(undefined8 *)(param_1 + 0x1c0);
  uVar24 = *(undefined8 *)(param_1 + 0x1c8);
  fVar38 = fVar46;
  fVar49 = fVar47;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar46 = *pfVar29;
      fVar47 = *local_1a8;
      fVar45 = *pfVar25;
      pfVar32 = pfVar25 + 4;
      pfVar25 = pfVar9;
      if (pfVar32 < pfVar11) {
        pfVar25 = pfVar32;
      }
      pfVar32 = pfVar29 + 4;
      pfVar29 = pfVar9 + 1;
      if (pfVar32 < pfVar11) {
        pfVar29 = pfVar32;
      }
      pfVar32 = local_1a8 + 4;
      local_1a8 = pfVar9 + 2;
      if (pfVar32 < pfVar11) {
        local_1a8 = pfVar32;
      }
      pfVar32 = local_1b8 + 4;
      fVar4 = *pfVar26;
      fVar36 = fVar45 * fVar13 + fVar17 * fVar36;
      fVar39 = fVar46 * fVar14 + fVar18 * fVar39;
      fVar41 = fVar47 * fVar15 + fVar19 * fVar41;
      fVar43 = *local_1b8 * fVar16 + fVar20 * fVar43;
      local_1b8 = pfVar9 + 3;
      if (pfVar32 < pfVar11) {
        local_1b8 = pfVar32;
      }
      pfVar32 = pfVar26 + 4;
      fVar46 = *local_res18;
      fVar47 = *local_res20;
      fVar45 = *local_1b0;
      pfVar26 = pfVar10;
      if (pfVar32 < pfVar12) {
        pfVar26 = pfVar32;
      }
      pfVar32 = local_1b0 + 4;
      local_158 = (float)uVar23;
      fStack_154 = (float)((ulonglong)uVar23 >> 0x20);
      fStack_150 = (float)uVar24;
      fStack_14c = (float)((ulonglong)uVar24 >> 0x20);
      local_1b0 = pfVar10 + 1;
      if (pfVar32 < pfVar12) {
        local_1b0 = pfVar32;
      }
      pfVar32 = local_res18 + 4;
      local_168 = (float)uVar21;
      fStack_164 = (float)((ulonglong)uVar21 >> 0x20);
      fStack_160 = (float)uVar22;
      fStack_15c = (float)((ulonglong)uVar22 >> 0x20);
      local_res18 = pfVar10 + 2;
      if (pfVar32 < pfVar12) {
        local_res18 = pfVar32;
      }
      pfVar32 = local_res20 + 4;
      local_res20 = pfVar10 + 3;
      if (pfVar32 < pfVar12) {
        local_res20 = pfVar32;
      }
      fVar37 = fVar4 * local_168 + local_158 * fVar37;
      fVar40 = fVar45 * fStack_164 + fStack_154 * fVar40;
      fVar42 = fVar46 * fStack_160 + fStack_150 * fVar42;
      fVar44 = fVar47 * fStack_15c + fStack_14c * fVar44;
      fVar50 = fVar50 + fVar33 * (1.0 / (float)uVar5);
      fVar51 = fVar51 + fVar34 * (1.0 / (float)uVar5);
      fVar46 = local_188[*(ushort *)(param_2 + 2)];
      fVar47 = *local_188 + fVar46;
      fVar45 = fVar44 + fVar43 + fVar40 + fVar39 + fVar42 + fVar41 + fVar37 + fVar36;
      *local_188 = *local_188 * fVar50 +
                   (fVar40 * -1.0 + fVar39 * -1.0 + fVar44 * -1.0 + fVar43 * -1.0 +
                   fVar37 * 1.0 + fVar36 * 1.0 + fVar42 * 1.0 + fVar41 * 1.0) * fVar51;
      local_188[*(ushort *)(param_2 + 2)] =
           fVar46 * fVar50 +
           (fVar40 * 1.0 + fVar39 * 1.0 + fVar44 * -1.0 + fVar43 * -1.0 +
           fVar37 * 1.0 + fVar36 * 1.0 + fVar42 * -1.0 + fVar41 * -1.0) * fVar51;
      local_188 = local_188 + 1;
      fVar48 = (fVar1 * fVar48 + fVar47) - fVar49;
      fVar46 = fVar48;
      if (pfVar8 != (float *)0x0) {
        fVar46 = *pfVar30;
        pfVar32 = pfVar30 + 1;
        *pfVar30 = fVar48;
        pfVar30 = pfVar8;
        if (pfVar32 != pfVar7) {
          pfVar30 = pfVar32;
        }
      }
      fVar38 = fVar2 * fVar46 + fVar3 * fVar38;
      *pfVar27 = fVar38 + fVar45 * fVar35 + fVar39;
      pfVar27[1] = fVar38 + fVar45 * fVar35 + fVar41;
      pfVar27[2] = fVar38 + fVar45 * fVar35 + fVar43;
      pfVar27[3] = fVar38 + fVar37 + fVar45 * fVar35;
      pfVar32 = pfVar27 + 4;
      *pfVar28 = fVar38 + fVar40 + fVar45 * fVar35;
      pfVar28[1] = fVar38 + fVar42 + fVar45 * fVar35;
      pfVar28[2] = fVar38 + fVar44 + fVar45 * fVar35;
      pfVar28[3] = fVar38 + fVar45 * fVar35 + fVar36;
      pfVar27 = pfVar9;
      if (pfVar32 < pfVar11) {
        pfVar27 = pfVar32;
      }
      pfVar32 = pfVar28 + 4;
      pfVar28 = pfVar10;
      if (pfVar32 < pfVar12) {
        pfVar28 = pfVar32;
      }
      uVar31 = uVar31 - 1;
      fVar38 = fVar46;
      fVar49 = fVar47;
    } while (uVar31 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar46;
  *(float *)(param_1 + 0x230) = fVar47;
  *(float *)(param_1 + 0x234) = fVar48;
  *(float **)(param_1 + 0x98) = pfVar29;
  *(float **)(param_1 + 0xa8) = local_1b8;
  *(float **)(param_1 + 0xb8) = local_1b0;
  *(float **)(param_1 + 0xc0) = local_res18;
  *(float *)(param_1 + 0x200) = fVar37;
  *(float *)(param_1 + 0x204) = fVar40;
  *(float *)(param_1 + 0x208) = fVar42;
  *(float *)(param_1 + 0x20c) = fVar44;
  *(float **)(param_1 + 200) = local_res20;
  *(float **)(param_1 + 0x30) = pfVar30;
  *(float *)(param_1 + 0x1f0) = fVar36;
  *(float *)(param_1 + 500) = fVar39;
  *(float *)(param_1 + 0x1f8) = fVar41;
  *(float *)(param_1 + 0x1fc) = fVar43;
  *(float **)(param_1 + 0x130) = pfVar27;
  *(float **)(param_1 + 0x138) = pfVar28;
  *(float **)(param_1 + 0x90) = pfVar25;
  *(float **)(param_1 + 0xa0) = local_1a8;
  *(float **)(param_1 + 0xb0) = pfVar26;
  return;
}



// FUNCTION 1451023e0 FUN_1451023e0 body=2230 status=ok
// SIG undefined FUN_1451023e0(void)

void FUN_1451023e0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  uint uVar35;
  float *pfVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float *local_res18;
  float *local_res20;
  float *local_238;
  float *local_230;
  float *local_228;
  float *local_220;
  float *local_218;
  float *local_210;
  float *local_208;
  float *local_200;
  float *local_1f8;
  float *local_1d8;
  float local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x238);
  local_198 = *(float *)(param_1 + 0x240);
  fVar61 = *(float *)(param_1 + 0x23c);
  pfVar6 = *(float **)(param_1 + 0x28);
  pfVar7 = *(float **)(param_1 + 0x110);
  pfVar8 = *(float **)(param_1 + 0x118);
  pfVar9 = *(float **)(param_1 + 0x120);
  pfVar10 = *(float **)(param_1 + 0x150);
  pfVar11 = *(float **)(param_1 + 0x158);
  pfVar12 = *(float **)(param_1 + 0x160);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar42 = *(float *)(param_1 + 0x4c);
  fVar58 = *(float *)(param_1 + 0x230);
  fVar59 = *(float *)(param_1 + 0x234);
  pfVar31 = *(float **)(param_1 + 0x138);
  pfVar32 = *(float **)(param_1 + 0x140);
  local_210 = *(float **)(param_1 + 0xb8);
  local_1d8 = (float *)*param_2;
  uVar4 = *(ushort *)(param_2 + 2);
  pfVar34 = *(float **)(param_1 + 0x30);
  fVar39 = -2.0 / (float)*(uint *)(lVar5 + 0x18);
  pfVar13 = *(float **)(param_1 + 0x38);
  pfVar33 = *(float **)(param_1 + 0x90);
  fVar37 = *(float *)(lVar5 + 0x10) - fVar61;
  pfVar30 = *(float **)(param_1 + 0x130);
  fVar38 = *(float *)(lVar5 + 0x14) - local_198;
  local_res18 = *(float **)(param_1 + 0x98);
  local_218 = *(float **)(param_1 + 0xa0);
  local_res20 = *(float **)(param_1 + 0xa8);
  local_1f8 = *(float **)(param_1 + 0xb0);
  uVar22 = *(undefined8 *)(param_1 + 0x180);
  uVar23 = *(undefined8 *)(param_1 + 0x188);
  fVar14 = *(float *)(param_1 + 0x170);
  fVar15 = *(float *)(param_1 + 0x174);
  fVar16 = *(float *)(param_1 + 0x178);
  fVar17 = *(float *)(param_1 + 0x17c);
  fVar18 = *(float *)(param_1 + 0x1b0);
  fVar19 = *(float *)(param_1 + 0x1b4);
  fVar20 = *(float *)(param_1 + 0x1b8);
  fVar21 = *(float *)(param_1 + 0x1bc);
  fVar54 = *(float *)(param_1 + 0x1f0);
  fVar55 = *(float *)(param_1 + 500);
  fVar56 = *(float *)(param_1 + 0x1f8);
  fVar57 = *(float *)(param_1 + 0x1fc);
  fVar40 = *(float *)(param_1 + 0x200);
  fVar43 = *(float *)(param_1 + 0x204);
  fVar45 = *(float *)(param_1 + 0x208);
  fVar47 = *(float *)(param_1 + 0x20c);
  fVar41 = *(float *)(param_1 + 0x210);
  fVar44 = *(float *)(param_1 + 0x214);
  fVar46 = *(float *)(param_1 + 0x218);
  fVar48 = *(float *)(param_1 + 0x21c);
  local_238 = *(float **)(param_1 + 0xc0);
  local_230 = *(float **)(param_1 + 200);
  local_208 = *(float **)(param_1 + 0xd0);
  local_200 = *(float **)(param_1 + 0xd8);
  local_228 = *(float **)(param_1 + 0xe0);
  local_220 = *(float **)(param_1 + 0xe8);
  uVar24 = *(undefined8 *)(param_1 + 400);
  uVar25 = *(undefined8 *)(param_1 + 0x198);
  uVar26 = *(undefined8 *)(param_1 + 0x1c0);
  uVar27 = *(undefined8 *)(param_1 + 0x1c8);
  uVar35 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar28 = *(undefined8 *)(param_1 + 0x1d0);
  uVar29 = *(undefined8 *)(param_1 + 0x1d8);
  fVar49 = fVar42;
  fVar60 = fVar58;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar42 = *pfVar33;
      pfVar36 = pfVar33 + 4;
      fVar58 = *local_res18;
      pfVar33 = pfVar7;
      if (pfVar36 < pfVar10) {
        pfVar33 = pfVar36;
      }
      pfVar36 = local_res18 + 4;
      local_res18 = pfVar7 + 1;
      if (pfVar36 < pfVar10) {
        local_res18 = pfVar36;
      }
      pfVar36 = local_218 + 4;
      fVar54 = fVar14 * fVar42 + fVar18 * fVar54;
      fVar55 = fVar15 * fVar58 + fVar19 * fVar55;
      fVar56 = fVar16 * *local_218 + fVar20 * fVar56;
      fVar57 = fVar17 * *local_res20 + fVar21 * fVar57;
      local_218 = pfVar7 + 2;
      if (pfVar36 < pfVar10) {
        local_218 = pfVar36;
      }
      pfVar36 = local_res20 + 4;
      local_res20 = pfVar7 + 3;
      if (pfVar36 < pfVar10) {
        local_res20 = pfVar36;
      }
      fVar42 = *local_1f8;
      pfVar36 = local_1f8 + 4;
      fVar58 = *local_238;
      fVar50 = *local_210;
      fVar51 = *local_230;
      local_1f8 = pfVar8;
      if (pfVar36 < pfVar11) {
        local_1f8 = pfVar36;
      }
      local_178 = (float)uVar26;
      fStack_174 = (float)((ulonglong)uVar26 >> 0x20);
      fStack_170 = (float)uVar27;
      fStack_16c = (float)((ulonglong)uVar27 >> 0x20);
      pfVar36 = local_210 + 4;
      local_188 = (float)uVar22;
      fStack_184 = (float)((ulonglong)uVar22 >> 0x20);
      fStack_180 = (float)uVar23;
      fStack_17c = (float)((ulonglong)uVar23 >> 0x20);
      local_210 = pfVar8 + 1;
      if (pfVar36 < pfVar11) {
        local_210 = pfVar36;
      }
      pfVar36 = local_238 + 4;
      local_238 = pfVar8 + 2;
      if (pfVar36 < pfVar11) {
        local_238 = pfVar36;
      }
      pfVar36 = local_230 + 4;
      local_230 = pfVar8 + 3;
      if (pfVar36 < pfVar11) {
        local_230 = pfVar36;
      }
      fVar40 = fVar42 * local_188 + local_178 * fVar40;
      fVar43 = fVar50 * fStack_184 + fStack_174 * fVar43;
      fVar45 = fVar58 * fStack_180 + fStack_170 * fVar45;
      fVar47 = fVar51 * fStack_17c + fStack_16c * fVar47;
      fVar42 = *local_208;
      fVar58 = *local_200;
      pfVar36 = local_208 + 4;
      fVar61 = fVar61 + fVar37 * (1.0 / (float)uVar4);
      local_158 = (float)uVar28;
      fStack_154 = (float)((ulonglong)uVar28 >> 0x20);
      fStack_150 = (float)uVar29;
      fStack_14c = (float)((ulonglong)uVar29 >> 0x20);
      local_208 = pfVar9;
      if (pfVar36 < pfVar12) {
        local_208 = pfVar36;
      }
      pfVar36 = local_200 + 4;
      local_168 = (float)uVar24;
      fStack_164 = (float)((ulonglong)uVar24 >> 0x20);
      fStack_160 = (float)uVar25;
      fStack_15c = (float)((ulonglong)uVar25 >> 0x20);
      local_200 = pfVar9 + 1;
      if (pfVar36 < pfVar12) {
        local_200 = pfVar36;
      }
      pfVar36 = local_228 + 4;
      fVar41 = fVar42 * local_168 + local_158 * fVar41;
      fVar44 = fVar58 * fStack_164 + fStack_154 * fVar44;
      fVar46 = *local_228 * fStack_160 + fStack_150 * fVar46;
      fVar48 = *local_220 * fStack_15c + fStack_14c * fVar48;
      local_228 = pfVar9 + 2;
      if (pfVar36 < pfVar12) {
        local_228 = pfVar36;
      }
      pfVar36 = local_220 + 4;
      local_220 = pfVar9 + 3;
      if (pfVar36 < pfVar12) {
        local_220 = pfVar36;
      }
      fVar42 = local_1d8[*(ushort *)(param_2 + 2)];
      local_198 = local_198 + fVar38 * (1.0 / (float)uVar4);
      fVar50 = fVar48 + fVar47 + fVar57 + fVar44 + fVar43 + fVar55 +
               fVar46 + fVar45 + fVar56 + fVar41 + fVar40 + fVar54;
      fVar58 = *local_1d8 + fVar42;
      fVar51 = fVar50 * fVar39;
      fVar52 = fVar50 * fVar39;
      fVar53 = fVar50 * fVar39;
      fVar50 = fVar50 * fVar39;
      *local_1d8 = *local_1d8 * fVar61 +
                   (fVar44 * -1.0 + fVar55 * -1.0 + fVar43 * -1.0 +
                    fVar48 * -1.0 + fVar57 * -1.0 + fVar47 * -1.0 +
                   fVar41 * 1.0 + fVar54 * 1.0 + fVar40 * 1.0 +
                   fVar46 * 1.0 + fVar56 * 1.0 + fVar45 * 1.0) * local_198;
      local_1d8[*(ushort *)(param_2 + 2)] =
           fVar42 * fVar61 +
           (fVar44 * 1.0 + fVar55 * 1.0 + fVar43 * 1.0 +
            fVar48 * -1.0 + fVar57 * -1.0 + fVar47 * -1.0 +
           fVar41 * 1.0 + fVar54 * 1.0 + fVar40 * 1.0 +
           fVar46 * -1.0 + fVar56 * -1.0 + fVar45 * -1.0) * local_198;
      local_1d8 = local_1d8 + 1;
      fVar59 = (fVar1 * fVar59 + fVar58) - fVar60;
      fVar42 = fVar59;
      if (pfVar6 != (float *)0x0) {
        fVar42 = *pfVar34;
        pfVar36 = pfVar34 + 1;
        *pfVar34 = fVar59;
        pfVar34 = pfVar6;
        if (pfVar36 != pfVar13) {
          pfVar34 = pfVar36;
        }
      }
      fVar49 = fVar2 * fVar42 + fVar3 * fVar49;
      *pfVar30 = fVar49 + fVar52 + fVar55;
      pfVar30[1] = fVar49 + fVar53 + fVar56;
      pfVar30[2] = fVar49 + fVar50 + fVar57;
      pfVar30[3] = fVar49 + fVar40 + fVar51;
      pfVar36 = pfVar30 + 4;
      *pfVar31 = fVar49 + fVar43 + fVar52;
      pfVar31[1] = fVar49 + fVar45 + fVar53;
      pfVar31[2] = fVar49 + fVar47 + fVar50;
      pfVar31[3] = fVar49 + fVar41 + fVar51;
      pfVar30 = pfVar7;
      if (pfVar36 < pfVar10) {
        pfVar30 = pfVar36;
      }
      pfVar36 = pfVar31 + 4;
      *pfVar32 = fVar49 + fVar44 + fVar52;
      pfVar32[1] = fVar49 + fVar46 + fVar53;
      pfVar32[2] = fVar49 + fVar48 + fVar50;
      pfVar32[3] = fVar49 + fVar51 + fVar54;
      pfVar31 = pfVar8;
      if (pfVar36 < pfVar11) {
        pfVar31 = pfVar36;
      }
      pfVar36 = pfVar32 + 4;
      pfVar32 = pfVar9;
      if (pfVar36 < pfVar12) {
        pfVar32 = pfVar36;
      }
      uVar35 = uVar35 - 1;
      fVar49 = fVar42;
      fVar60 = fVar58;
    } while (uVar35 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar42;
  *(float *)(param_1 + 0x230) = fVar58;
  *(float *)(param_1 + 0x234) = fVar59;
  *(float **)(param_1 + 0x90) = pfVar33;
  *(float **)(param_1 + 0x98) = local_res18;
  *(float **)(param_1 + 0xa0) = local_218;
  *(float **)(param_1 + 0xa8) = local_res20;
  *(float **)(param_1 + 0xb8) = local_210;
  *(float **)(param_1 + 0xc0) = local_238;
  *(float **)(param_1 + 200) = local_230;
  *(float **)(param_1 + 0xd0) = local_208;
  *(float **)(param_1 + 0xd8) = local_200;
  *(float **)(param_1 + 0xe0) = local_228;
  *(float **)(param_1 + 0x140) = pfVar32;
  *(float *)(param_1 + 0x1f0) = fVar54;
  *(float *)(param_1 + 500) = fVar55;
  *(float *)(param_1 + 0x1f8) = fVar56;
  *(float *)(param_1 + 0x1fc) = fVar57;
  *(float *)(param_1 + 0x210) = fVar41;
  *(float *)(param_1 + 0x214) = fVar44;
  *(float *)(param_1 + 0x218) = fVar46;
  *(float *)(param_1 + 0x21c) = fVar48;
  *(float **)(param_1 + 0xe8) = local_220;
  *(float **)(param_1 + 0x30) = pfVar34;
  *(float *)(param_1 + 0x200) = fVar40;
  *(float *)(param_1 + 0x204) = fVar43;
  *(float *)(param_1 + 0x208) = fVar45;
  *(float *)(param_1 + 0x20c) = fVar47;
  *(float **)(param_1 + 0x130) = pfVar30;
  *(float **)(param_1 + 0x138) = pfVar31;
  *(float **)(param_1 + 0xb0) = local_1f8;
  return;
}



// FUNCTION 145102ca0 FUN_145102ca0 body=2839 status=ok
// SIG undefined FUN_145102ca0(void)

void FUN_145102ca0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float *local_res18;
  float *local_res20;
  float *local_298;
  float *local_290;
  float *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_248;
  float *local_240;
  float *local_238;
  float *local_230;
  float *local_228;
  float *local_220;
  float *local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x238);
  local_1b8 = *(float *)(param_1 + 0x240);
  fVar68 = *(float *)(param_1 + 0x23c);
  pfVar6 = *(float **)(param_1 + 0x28);
  pfVar7 = *(float **)(param_1 + 0x110);
  pfVar8 = *(float **)(param_1 + 0x118);
  pfVar9 = *(float **)(param_1 + 0x120);
  pfVar10 = *(float **)(param_1 + 0x128);
  pfVar11 = *(float **)(param_1 + 0x150);
  pfVar38 = *(float **)(param_1 + 0x138);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar49 = *(float *)(param_1 + 0x4c);
  fVar65 = *(float *)(param_1 + 0x230);
  fVar66 = *(float *)(param_1 + 0x234);
  pfVar39 = *(float **)(param_1 + 0x140);
  pfVar40 = *(float **)(param_1 + 0x148);
  local_218 = (float *)*param_2;
  uVar4 = *(ushort *)(param_2 + 2);
  pfVar42 = *(float **)(param_1 + 0x30);
  fVar46 = -2.0 / (float)*(uint *)(lVar5 + 0x18);
  pfVar12 = *(float **)(param_1 + 0x38);
  pfVar13 = *(float **)(param_1 + 0x158);
  pfVar14 = *(float **)(param_1 + 0x160);
  pfVar15 = *(float **)(param_1 + 0x168);
  local_res18 = *(float **)(param_1 + 0x98);
  local_248 = *(float **)(param_1 + 0xa0);
  local_res20 = *(float **)(param_1 + 0xa8);
  fVar44 = *(float *)(lVar5 + 0x10) - fVar68;
  pfVar37 = *(float **)(param_1 + 0x130);
  fVar45 = *(float *)(lVar5 + 0x14) - local_1b8;
  pfVar36 = *(float **)(param_1 + 0x90);
  local_298 = *(float **)(param_1 + 0xb8);
  uVar24 = *(undefined8 *)(param_1 + 0x180);
  uVar25 = *(undefined8 *)(param_1 + 0x188);
  fVar16 = *(float *)(param_1 + 0x170);
  fVar17 = *(float *)(param_1 + 0x174);
  fVar18 = *(float *)(param_1 + 0x178);
  fVar19 = *(float *)(param_1 + 0x17c);
  fVar20 = *(float *)(param_1 + 0x1b0);
  fVar21 = *(float *)(param_1 + 0x1b4);
  fVar22 = *(float *)(param_1 + 0x1b8);
  fVar23 = *(float *)(param_1 + 0x1bc);
  local_1f8 = *(float *)(param_1 + 0x220);
  fStack_1f4 = *(float *)(param_1 + 0x224);
  fStack_1f0 = *(float *)(param_1 + 0x228);
  fStack_1ec = *(float *)(param_1 + 0x22c);
  fVar61 = *(float *)(param_1 + 0x1f0);
  fVar62 = *(float *)(param_1 + 500);
  fVar63 = *(float *)(param_1 + 0x1f8);
  fVar64 = *(float *)(param_1 + 0x1fc);
  fVar47 = *(float *)(param_1 + 0x200);
  fVar50 = *(float *)(param_1 + 0x204);
  fVar52 = *(float *)(param_1 + 0x208);
  fVar54 = *(float *)(param_1 + 0x20c);
  local_290 = *(float **)(param_1 + 0xc0);
  local_288 = *(float **)(param_1 + 200);
  local_240 = *(float **)(param_1 + 0xd0);
  local_280 = *(float **)(param_1 + 0xd8);
  local_238 = *(float **)(param_1 + 0xe0);
  local_278 = *(float **)(param_1 + 0xe8);
  local_230 = *(float **)(param_1 + 0xf0);
  uVar26 = *(undefined8 *)(param_1 + 400);
  uVar27 = *(undefined8 *)(param_1 + 0x198);
  local_228 = *(float **)(param_1 + 0xf8);
  uVar28 = *(undefined8 *)(param_1 + 0x1a0);
  uVar29 = *(undefined8 *)(param_1 + 0x1a8);
  local_270 = *(float **)(param_1 + 0x100);
  uVar30 = *(undefined8 *)(param_1 + 0x1c0);
  uVar31 = *(undefined8 *)(param_1 + 0x1c8);
  local_268 = *(float **)(param_1 + 0x108);
  uVar32 = *(undefined8 *)(param_1 + 0x1d0);
  uVar33 = *(undefined8 *)(param_1 + 0x1d8);
  uVar34 = *(undefined8 *)(param_1 + 0x1e0);
  uVar35 = *(undefined8 *)(param_1 + 0x1e8);
  uVar43 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_220 = *(float **)(param_1 + 0xb0);
  local_208 = *(undefined8 *)(param_1 + 0x210);
  uStack_200 = *(undefined8 *)(param_1 + 0x218);
  fVar56 = fVar49;
  fVar67 = fVar65;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar49 = *pfVar36;
      pfVar41 = pfVar36 + 4;
      fVar65 = *local_res18;
      fVar48 = *local_248;
      pfVar36 = pfVar7;
      if (pfVar41 < pfVar11) {
        pfVar36 = pfVar41;
      }
      pfVar41 = local_res18 + 4;
      local_res18 = pfVar7 + 1;
      if (pfVar41 < pfVar11) {
        local_res18 = pfVar41;
      }
      pfVar41 = local_248 + 4;
      local_248 = pfVar7 + 2;
      if (pfVar41 < pfVar11) {
        local_248 = pfVar41;
      }
      fVar61 = fVar49 * fVar16 + fVar61 * fVar20;
      fVar62 = fVar65 * fVar17 + fVar62 * fVar21;
      fVar63 = fVar48 * fVar18 + fVar63 * fVar22;
      fVar64 = *local_res20 * fVar19 + fVar64 * fVar23;
      pfVar41 = local_res20 + 4;
      local_res20 = pfVar7 + 3;
      if (pfVar41 < pfVar11) {
        local_res20 = pfVar41;
      }
      fVar49 = *local_220;
      pfVar41 = local_220 + 4;
      fVar65 = *local_298;
      fVar48 = *local_290;
      fVar51 = *local_288;
      local_220 = pfVar8;
      if (pfVar41 < pfVar13) {
        local_220 = pfVar41;
      }
      pfVar41 = local_298 + 4;
      local_298 = pfVar8 + 1;
      if (pfVar41 < pfVar13) {
        local_298 = pfVar41;
      }
      pfVar41 = local_290 + 4;
      local_290 = pfVar8 + 2;
      if (pfVar41 < pfVar13) {
        local_290 = pfVar41;
      }
      pfVar41 = local_288 + 4;
      local_288 = pfVar8 + 3;
      if (pfVar41 < pfVar13) {
        local_288 = pfVar41;
      }
      local_1a8 = (float)uVar24;
      fStack_1a4 = (float)((ulonglong)uVar24 >> 0x20);
      fStack_1a0 = (float)uVar25;
      fStack_19c = (float)((ulonglong)uVar25 >> 0x20);
      local_198 = (float)uVar30;
      fStack_194 = (float)((ulonglong)uVar30 >> 0x20);
      fStack_190 = (float)uVar31;
      fStack_18c = (float)((ulonglong)uVar31 >> 0x20);
      fVar53 = *local_280;
      fVar55 = *local_240;
      pfVar41 = local_240 + 4;
      fVar57 = *local_238;
      fVar47 = fVar49 * local_1a8 + local_198 * fVar47;
      fVar50 = fVar65 * fStack_1a4 + fStack_194 * fVar50;
      fVar52 = fVar48 * fStack_1a0 + fStack_190 * fVar52;
      fVar54 = fVar51 * fStack_19c + fStack_18c * fVar54;
      local_178 = (float)uVar32;
      fStack_174 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_170 = (float)uVar33;
      fStack_16c = (float)((ulonglong)uVar33 >> 0x20);
      local_240 = pfVar9;
      if (pfVar41 < pfVar14) {
        local_240 = pfVar41;
      }
      pfVar41 = local_280 + 4;
      local_188 = (float)uVar26;
      fStack_184 = (float)((ulonglong)uVar26 >> 0x20);
      fStack_180 = (float)uVar27;
      fStack_17c = (float)((ulonglong)uVar27 >> 0x20);
      local_280 = pfVar9 + 1;
      if (pfVar41 < pfVar14) {
        local_280 = pfVar41;
      }
      pfVar41 = local_238 + 4;
      local_238 = pfVar9 + 2;
      if (pfVar41 < pfVar14) {
        local_238 = pfVar41;
      }
      pfVar41 = local_278 + 4;
      fVar48 = fVar55 * local_188 + local_178 * (float)local_208;
      fVar51 = fVar53 * fStack_184 + fStack_174 * local_208._4_4_;
      fVar53 = fVar57 * fStack_180 + fStack_170 * (float)uStack_200;
      fVar55 = *local_278 * fStack_17c + fStack_16c * uStack_200._4_4_;
      fVar49 = *local_230;
      local_278 = pfVar9 + 3;
      if (pfVar41 < pfVar14) {
        local_278 = pfVar41;
      }
      pfVar41 = local_230 + 4;
      fVar65 = *local_270;
      fVar57 = *local_228;
      local_208 = CONCAT44(fVar51,fVar48);
      uStack_200 = CONCAT44(fVar55,fVar53);
      fVar58 = *local_268;
      local_230 = pfVar10;
      if (pfVar41 < pfVar15) {
        local_230 = pfVar41;
      }
      pfVar41 = local_228 + 4;
      local_228 = pfVar10 + 1;
      if (pfVar41 < pfVar15) {
        local_228 = pfVar41;
      }
      fVar68 = fVar68 + fVar44 * (1.0 / (float)uVar4);
      pfVar41 = local_270 + 4;
      local_158 = (float)uVar34;
      fStack_154 = (float)((ulonglong)uVar34 >> 0x20);
      fStack_150 = (float)uVar35;
      fStack_14c = (float)((ulonglong)uVar35 >> 0x20);
      local_270 = pfVar10 + 2;
      if (pfVar41 < pfVar15) {
        local_270 = pfVar41;
      }
      pfVar41 = local_268 + 4;
      local_168 = (float)uVar28;
      fStack_164 = (float)((ulonglong)uVar28 >> 0x20);
      fStack_160 = (float)uVar29;
      fStack_15c = (float)((ulonglong)uVar29 >> 0x20);
      local_268 = pfVar10 + 3;
      if (pfVar41 < pfVar15) {
        local_268 = pfVar41;
      }
      local_1f8 = fVar49 * local_168 + local_158 * local_1f8;
      fStack_1f4 = fVar57 * fStack_164 + fStack_154 * fStack_1f4;
      fStack_1f0 = fVar65 * fStack_160 + fStack_150 * fStack_1f0;
      fStack_1ec = fVar58 * fStack_15c + fStack_14c * fStack_1ec;
      fVar49 = local_218[*(ushort *)(param_2 + 2)];
      fVar65 = *local_218;
      local_1b8 = local_1b8 + fVar45 * (1.0 / (float)uVar4);
      fVar57 = fStack_1ec + fVar54 + fVar64 + fVar55 + fStack_1f4 + fVar50 + fVar62 + fVar51 +
               fStack_1f0 + fVar52 + fVar63 + fVar53 + local_1f8 + fVar47 + fVar61 + fVar48;
      fVar58 = fVar57 * fVar46;
      fVar59 = fVar57 * fVar46;
      fVar60 = fVar57 * fVar46;
      fVar57 = fVar57 * fVar46;
      *local_218 = fVar65 * fVar68 +
                   (fStack_1f4 * -1.0 + fVar62 * -1.0 + fVar50 * -1.0 + fVar51 * -1.0 +
                    fStack_1ec * -1.0 + fVar64 * -1.0 + fVar54 * -1.0 + fVar55 * -1.0 +
                   local_1f8 * 1.0 + fVar61 * 1.0 + fVar47 * 1.0 + fVar48 * 1.0 +
                   fStack_1f0 * 1.0 + fVar63 * 1.0 + fVar52 * 1.0 + fVar53 * 1.0) * local_1b8;
      local_218[*(ushort *)(param_2 + 2)] =
           fVar49 * fVar68 +
           (fStack_1f4 * 1.0 + fVar62 * 1.0 + fVar50 * 1.0 + fVar51 * 1.0 +
            fStack_1ec * -1.0 + fVar64 * -1.0 + fVar54 * -1.0 + fVar55 * -1.0 +
           local_1f8 * 1.0 + fVar61 * 1.0 + fVar47 * 1.0 + fVar48 * 1.0 +
           fStack_1f0 * -1.0 + fVar63 * -1.0 + fVar52 * -1.0 + fVar53 * -1.0) * local_1b8;
      local_218 = local_218 + 1;
      fVar65 = fVar65 + fVar49;
      fVar66 = (fVar1 * fVar66 + fVar65) - fVar67;
      fVar49 = fVar66;
      if (pfVar6 != (float *)0x0) {
        fVar49 = *pfVar42;
        pfVar41 = pfVar42 + 1;
        *pfVar42 = fVar66;
        pfVar42 = pfVar6;
        if (pfVar41 != pfVar12) {
          pfVar42 = pfVar41;
        }
      }
      fVar56 = fVar2 * fVar49 + fVar3 * fVar56;
      *pfVar37 = fVar56 + fVar59 + fVar62;
      pfVar37[1] = fVar56 + fVar60 + fVar63;
      pfVar37[2] = fVar56 + fVar57 + fVar64;
      pfVar37[3] = fVar56 + fVar47 + fVar58;
      pfVar41 = pfVar37 + 4;
      *pfVar38 = fVar56 + fVar50 + fVar59;
      pfVar38[1] = fVar56 + fVar52 + fVar60;
      pfVar38[2] = fVar56 + fVar54 + fVar57;
      pfVar38[3] = fVar56 + fVar48 + fVar58;
      pfVar37 = pfVar7;
      if (pfVar41 < pfVar11) {
        pfVar37 = pfVar41;
      }
      pfVar41 = pfVar38 + 4;
      pfVar38 = pfVar8;
      if (pfVar41 < pfVar13) {
        pfVar38 = pfVar41;
      }
      *pfVar39 = fVar56 + fVar51 + fVar59;
      pfVar39[1] = fVar56 + fVar53 + fVar60;
      pfVar39[2] = fVar56 + fVar55 + fVar57;
      pfVar39[3] = fVar56 + local_1f8 + fVar58;
      pfVar41 = pfVar39 + 4;
      *pfVar40 = fVar56 + fStack_1f4 + fVar59;
      pfVar40[1] = fVar56 + fStack_1f0 + fVar60;
      pfVar40[2] = fVar56 + fStack_1ec + fVar57;
      pfVar40[3] = fVar56 + fVar58 + fVar61;
      pfVar39 = pfVar9;
      if (pfVar41 < pfVar14) {
        pfVar39 = pfVar41;
      }
      pfVar41 = pfVar40 + 4;
      pfVar40 = pfVar10;
      if (pfVar41 < pfVar15) {
        pfVar40 = pfVar41;
      }
      uVar43 = uVar43 - 1;
      fVar56 = fVar49;
      fVar67 = fVar65;
    } while (uVar43 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar49;
  *(float *)(param_1 + 0x230) = fVar65;
  *(float *)(param_1 + 0x234) = fVar66;
  *(float **)(param_1 + 0xb0) = local_220;
  *(float **)(param_1 + 0xb8) = local_298;
  *(float **)(param_1 + 0xc0) = local_290;
  *(float **)(param_1 + 200) = local_288;
  *(float **)(param_1 + 0xd0) = local_240;
  *(float **)(param_1 + 0xd8) = local_280;
  *(float **)(param_1 + 0xe0) = local_238;
  *(float **)(param_1 + 0xe8) = local_278;
  *(float **)(param_1 + 0xf0) = local_230;
  *(float **)(param_1 + 0x90) = pfVar36;
  *(float **)(param_1 + 0xf8) = local_228;
  *(float **)(param_1 + 0x98) = local_res18;
  *(float **)(param_1 + 0x100) = local_270;
  *(float **)(param_1 + 0x140) = pfVar39;
  *(float **)(param_1 + 0xa0) = local_248;
  *(float *)(param_1 + 0x200) = fVar47;
  *(float *)(param_1 + 0x204) = fVar50;
  *(float *)(param_1 + 0x208) = fVar52;
  *(float *)(param_1 + 0x20c) = fVar54;
  *(float **)(param_1 + 0x108) = local_268;
  *(float **)(param_1 + 0x30) = pfVar42;
  *(float *)(param_1 + 0x1f0) = fVar61;
  *(float *)(param_1 + 500) = fVar62;
  *(float *)(param_1 + 0x1f8) = fVar63;
  *(float *)(param_1 + 0x1fc) = fVar64;
  *(undefined8 *)(param_1 + 0x210) = local_208;
  *(undefined8 *)(param_1 + 0x218) = uStack_200;
  *(float *)(param_1 + 0x220) = local_1f8;
  *(float *)(param_1 + 0x224) = fStack_1f4;
  *(float *)(param_1 + 0x228) = fStack_1f0;
  *(float *)(param_1 + 0x22c) = fStack_1ec;
  *(float **)(param_1 + 0x130) = pfVar37;
  *(float **)(param_1 + 0x138) = pfVar38;
  *(float **)(param_1 + 0x148) = pfVar40;
  *(float **)(param_1 + 0xa8) = local_res20;
  return;
}



// FUNCTION 1451037c0 FUN_1451037c0 body=1468 status=ok
// SIG undefined FUN_1451037c0(void)

void FUN_1451037c0(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float *local_res18;
  float local_198;
  float local_188;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  
  lVar10 = *(longlong *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x238);
  local_198 = *(float *)(param_1 + 0x23c);
  local_188 = *(float *)(param_1 + 0x240);
  uVar29 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_178 = *(float *)(param_1 + 0x1f0);
  fStack_174 = *(float *)(param_1 + 500);
  fStack_170 = *(float *)(param_1 + 0x1f8);
  fStack_16c = *(float *)(param_1 + 0x1fc);
  pfVar11 = *(float **)(param_1 + 0x110);
  pfVar12 = *(float **)(param_1 + 0x150);
  pfVar28 = *(float **)(param_1 + 0x130);
  pfVar26 = *(float **)(param_1 + 0xa0);
  pfVar25 = *(float **)(param_1 + 0xa8);
  fVar15 = *(float *)(param_1 + 0x170);
  fVar16 = *(float *)(param_1 + 0x174);
  fVar17 = *(float *)(param_1 + 0x178);
  fVar18 = *(float *)(param_1 + 0x17c);
  fVar3 = *(float *)(param_1 + 0x44);
  fVar4 = *(float *)(param_1 + 0x48);
  fVar35 = *(float *)(param_1 + 0x4c);
  fVar37 = *(float *)(param_1 + 0x234);
  fVar19 = *(float *)(param_1 + 0x1b0);
  fVar20 = *(float *)(param_1 + 0x1b4);
  fVar21 = *(float *)(param_1 + 0x1b8);
  fVar22 = *(float *)(param_1 + 0x1bc);
  local_res18 = (float *)*param_2;
  uVar8 = *(ushort *)(param_2 + 2);
  pfVar24 = *(float **)(param_1 + 0x98);
  fVar32 = -2.0 / (float)*(uint *)(lVar10 + 0x18);
  pfVar13 = *(float **)(param_1 + 0x28);
  pfVar14 = *(float **)(param_1 + 0x38);
  fVar30 = *(float *)(lVar10 + 0x10) - local_198;
  pfVar27 = *(float **)(param_1 + 0x30);
  fVar31 = *(float *)(lVar10 + 0x14) - local_188;
  fVar36 = *(float *)(param_1 + 0x230);
  pfVar23 = *(float **)(param_1 + 0x90);
  fVar38 = fVar35;
  fVar34 = fVar36;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar35 = *pfVar24;
      pfVar1 = pfVar23 + 4;
      fVar36 = *pfVar26;
      fVar5 = *pfVar23;
      pfVar23 = pfVar11;
      if (pfVar1 < pfVar12) {
        pfVar23 = pfVar1;
      }
      pfVar1 = pfVar24 + 4;
      pfVar24 = pfVar11 + 1;
      if (pfVar1 < pfVar12) {
        pfVar24 = pfVar1;
      }
      pfVar1 = pfVar26 + 4;
      pfVar26 = pfVar11 + 2;
      if (pfVar1 < pfVar12) {
        pfVar26 = pfVar1;
      }
      pfVar1 = pfVar25 + 4;
      uVar9 = *(ushort *)(param_2 + 2);
      local_178 = fVar5 * fVar15 + local_178 * fVar19;
      fStack_174 = fVar35 * fVar16 + fStack_174 * fVar20;
      fStack_170 = fVar36 * fVar17 + fStack_170 * fVar21;
      fStack_16c = *pfVar25 * fVar18 + fStack_16c * fVar22;
      fVar35 = *local_res18;
      pfVar25 = pfVar11 + 3;
      if (pfVar1 < pfVar12) {
        pfVar25 = pfVar1;
      }
      fVar36 = local_res18[uVar9];
      fVar5 = local_res18[(uint)uVar9 + (uint)uVar9];
      fVar6 = local_res18[(uint)uVar9 + (uint)uVar9 * 2];
      fVar7 = local_res18[(uint)uVar9 * 4];
      fVar33 = fStack_16c + fStack_174 + fStack_170 + local_178;
      local_198 = local_198 + fVar30 * (1.0 / (float)uVar8);
      local_188 = local_188 + fVar31 * (1.0 / (float)uVar8);
      *local_res18 = fVar35 * local_198 +
                     (fStack_174 * -1.0 + fStack_16c * -1.0 + local_178 * 1.0 + fStack_170 * 1.0) *
                     local_188;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar36 * local_198 +
           (fStack_174 * 1.0 + fStack_16c * -1.0 + local_178 * 1.0 + fStack_170 * -1.0) * local_188;
      fVar36 = fVar5 + fVar6 + fVar35 + fVar36 + fVar7;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar5 * local_198 +
           (fStack_174 * 1.0 + fStack_16c * -1.0 + local_178 * -1.0 + fStack_170 * 1.0) * local_188;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar6 * local_198 +
           (fStack_174 * -1.0 + fStack_16c * 1.0 + local_178 * -1.0 + fStack_170 * -1.0) * local_188
      ;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar7 * local_198 +
           (fStack_174 * -1.0 + fStack_16c * -1.0 + local_178 * 1.0 + fStack_170 * -1.0) * local_188
      ;
      local_res18 = local_res18 + 1;
      fVar37 = (fVar2 * fVar37 + fVar36) - fVar34;
      fVar35 = fVar37;
      if (pfVar13 != (float *)0x0) {
        fVar35 = *pfVar27;
        pfVar1 = pfVar27 + 1;
        *pfVar27 = fVar37;
        pfVar27 = pfVar13;
        if (pfVar1 != pfVar14) {
          pfVar27 = pfVar1;
        }
      }
      pfVar1 = pfVar28 + 4;
      fVar34 = fVar3 * fVar35 + fVar4 * fVar38;
      *pfVar28 = fVar34 + fVar33 * fVar32 + fStack_174;
      pfVar28[1] = fVar34 + fVar33 * fVar32 + fStack_170;
      pfVar28[2] = fVar34 + fVar33 * fVar32 + fStack_16c;
      pfVar28[3] = fVar34 + fVar33 * fVar32 + local_178;
      pfVar28 = pfVar11;
      if (pfVar1 < pfVar12) {
        pfVar28 = pfVar1;
      }
      uVar29 = uVar29 - 1;
      fVar38 = fVar35;
      fVar34 = fVar36;
    } while (uVar29 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar35;
  *(float *)(param_1 + 0x230) = fVar36;
  *(float *)(param_1 + 0x234) = fVar37;
  *(float **)(param_1 + 0x30) = pfVar27;
  *(float *)(param_1 + 0x1f0) = local_178;
  *(float *)(param_1 + 500) = fStack_174;
  *(float *)(param_1 + 0x1f8) = fStack_170;
  *(float *)(param_1 + 0x1fc) = fStack_16c;
  *(float **)(param_1 + 0x130) = pfVar28;
  *(float **)(param_1 + 0x90) = pfVar23;
  *(float **)(param_1 + 0x98) = pfVar24;
  *(float **)(param_1 + 0xa0) = pfVar26;
  *(float **)(param_1 + 0xa8) = pfVar25;
  return;
}



// FUNCTION 145103d80 FUN_145103d80 body=2095 status=ok
// SIG undefined FUN_145103d80(void)

void FUN_145103d80(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  uint uVar37;
  float *pfVar38;
  float *pfVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float *local_res18;
  float *local_res20;
  float *local_238;
  float *local_230;
  float *local_220;
  float *local_218;
  float local_1f8;
  float local_1e8;
  float local_1d8;
  float local_1b8;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  local_1f8 = *(float *)(param_1 + 0x23c);
  fVar1 = *(float *)(param_1 + 0x44);
  local_1e8 = *(float *)(param_1 + 0x240);
  local_230 = *(float **)(param_1 + 0xb8);
  fVar54 = *(float *)(param_1 + 0x230);
  pfVar10 = *(float **)(param_1 + 0x28);
  pfVar38 = *(float **)(param_1 + 0x30);
  pfVar11 = *(float **)(param_1 + 0x110);
  pfVar12 = *(float **)(param_1 + 0x118);
  pfVar13 = *(float **)(param_1 + 0x150);
  pfVar14 = *(float **)(param_1 + 0x158);
  pfVar35 = *(float **)(param_1 + 0x138);
  pfVar32 = *(float **)(param_1 + 0x90);
  pfVar33 = *(float **)(param_1 + 0xb0);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  local_res18 = (float *)*param_2;
  uVar7 = *(ushort *)(param_2 + 2);
  pfVar36 = *(float **)(param_1 + 0x98);
  local_res20 = *(float **)(param_1 + 0xc0);
  fVar42 = -2.0 / (float)*(uint *)(lVar9 + 0x18);
  local_238 = *(float **)(param_1 + 200);
  pfVar15 = *(float **)(param_1 + 0x38);
  local_220 = *(float **)(param_1 + 0xa0);
  fVar40 = *(float *)(lVar9 + 0x10) - local_1f8;
  local_1d8 = *(float *)(param_1 + 0x234);
  pfVar34 = *(float **)(param_1 + 0x130);
  fVar41 = *(float *)(lVar9 + 0x14) - local_1e8;
  fVar49 = *(float *)(param_1 + 0x4c);
  local_218 = *(float **)(param_1 + 0xa8);
  fVar16 = *(float *)(param_1 + 0x170);
  fVar17 = *(float *)(param_1 + 0x174);
  fVar18 = *(float *)(param_1 + 0x178);
  fVar19 = *(float *)(param_1 + 0x17c);
  fVar20 = *(float *)(param_1 + 0x180);
  fVar21 = *(float *)(param_1 + 0x184);
  fVar22 = *(float *)(param_1 + 0x188);
  fVar23 = *(float *)(param_1 + 0x18c);
  fVar24 = *(float *)(param_1 + 0x1b0);
  fVar25 = *(float *)(param_1 + 0x1b4);
  fVar26 = *(float *)(param_1 + 0x1b8);
  fVar27 = *(float *)(param_1 + 0x1bc);
  fVar28 = *(float *)(param_1 + 0x1c0);
  fVar29 = *(float *)(param_1 + 0x1c4);
  fVar30 = *(float *)(param_1 + 0x1c8);
  fVar31 = *(float *)(param_1 + 0x1cc);
  fVar50 = *(float *)(param_1 + 0x1f0);
  fVar51 = *(float *)(param_1 + 500);
  fVar52 = *(float *)(param_1 + 0x1f8);
  fVar53 = *(float *)(param_1 + 0x1fc);
  fVar43 = *(float *)(param_1 + 0x200);
  fVar45 = *(float *)(param_1 + 0x204);
  fVar46 = *(float *)(param_1 + 0x208);
  fVar47 = *(float *)(param_1 + 0x20c);
  uVar37 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_1b8 = fVar49;
  fVar44 = fVar54;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar54 = *pfVar36;
      fVar49 = *pfVar32;
      pfVar39 = pfVar32 + 4;
      pfVar32 = pfVar11;
      if (pfVar39 < pfVar13) {
        pfVar32 = pfVar39;
      }
      pfVar39 = pfVar36 + 4;
      pfVar36 = pfVar11 + 1;
      if (pfVar39 < pfVar13) {
        pfVar36 = pfVar39;
      }
      pfVar39 = local_220 + 4;
      fVar4 = *pfVar33;
      fVar50 = fVar49 * fVar16 + fVar50 * fVar24;
      fVar51 = fVar54 * fVar17 + fVar51 * fVar25;
      fVar52 = *local_220 * fVar18 + fVar52 * fVar26;
      fVar53 = *local_218 * fVar19 + fVar53 * fVar27;
      local_220 = pfVar11 + 2;
      if (pfVar39 < pfVar13) {
        local_220 = pfVar39;
      }
      pfVar39 = local_218 + 4;
      local_218 = pfVar11 + 3;
      if (pfVar39 < pfVar13) {
        local_218 = pfVar39;
      }
      pfVar39 = pfVar33 + 4;
      fVar54 = *local_res20;
      fVar49 = *local_230;
      fVar5 = *local_238;
      pfVar33 = pfVar12;
      if (pfVar39 < pfVar14) {
        pfVar33 = pfVar39;
      }
      pfVar39 = local_230 + 4;
      local_230 = pfVar12 + 1;
      if (pfVar39 < pfVar14) {
        local_230 = pfVar39;
      }
      pfVar39 = local_res20 + 4;
      local_res20 = pfVar12 + 2;
      if (pfVar39 < pfVar14) {
        local_res20 = pfVar39;
      }
      pfVar39 = local_238 + 4;
      local_238 = pfVar12 + 3;
      if (pfVar39 < pfVar14) {
        local_238 = pfVar39;
      }
      fVar43 = fVar4 * fVar20 + fVar28 * fVar43;
      fVar45 = fVar49 * fVar21 + fVar29 * fVar45;
      fVar46 = fVar54 * fVar22 + fVar30 * fVar46;
      fVar47 = fVar5 * fVar23 + fVar31 * fVar47;
      fVar54 = *local_res18;
      uVar8 = *(ushort *)(param_2 + 2);
      fVar49 = local_res18[uVar8];
      fVar4 = local_res18[(uint)uVar8 + (uint)uVar8];
      fVar5 = local_res18[(uint)uVar8 + (uint)uVar8 * 2];
      fVar6 = local_res18[(uint)uVar8 * 4];
      local_1f8 = local_1f8 + fVar40 * (1.0 / (float)uVar7);
      local_1e8 = local_1e8 + fVar41 * (1.0 / (float)uVar7);
      fVar48 = fVar47 + fVar53 + fVar45 + fVar51 + fVar46 + fVar52 + fVar43 + fVar50;
      *local_res18 = fVar54 * local_1f8 +
                     (fVar45 * -1.0 + fVar51 * -1.0 + fVar47 * -1.0 + fVar53 * -1.0 +
                     fVar43 * 1.0 + fVar50 * 1.0 + fVar46 * 1.0 + fVar52 * 1.0) * local_1e8;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar49 * local_1f8 +
           (fVar45 * 1.0 + fVar51 * 1.0 + fVar47 * -1.0 + fVar53 * -1.0 +
           fVar43 * 1.0 + fVar50 * 1.0 + fVar46 * -1.0 + fVar52 * -1.0) * local_1e8;
      fVar54 = fVar4 + fVar5 + fVar54 + fVar49 + fVar6;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar4 * local_1f8 +
           (fVar45 * 1.0 + fVar51 * 1.0 + fVar47 * -1.0 + fVar53 * -1.0 +
           fVar43 * -1.0 + fVar50 * -1.0 + fVar46 * 1.0 + fVar52 * 1.0) * local_1e8;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar5 * local_1f8 +
           (fVar45 * 1.0 + fVar51 * -1.0 + fVar47 * 1.0 + fVar53 * 1.0 +
           fVar43 * 1.0 + fVar50 * -1.0 + fVar46 * -1.0 + fVar52 * -1.0) * local_1e8;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar6 * local_1f8 +
           (fVar45 * 1.0 + fVar51 * -1.0 + fVar47 * -1.0 + fVar53 * -1.0 +
           fVar43 * 1.0 + fVar50 * 1.0 + fVar46 * 1.0 + fVar52 * -1.0) * local_1e8;
      local_res18 = local_res18 + 1;
      local_1d8 = (fVar3 * local_1d8 + fVar54) - fVar44;
      fVar49 = local_1d8;
      if (pfVar10 != (float *)0x0) {
        fVar49 = *pfVar38;
        pfVar39 = pfVar38 + 1;
        *pfVar38 = local_1d8;
        pfVar38 = pfVar10;
        if (pfVar39 != pfVar15) {
          pfVar38 = pfVar39;
        }
      }
      fVar44 = fVar1 * fVar49 + fVar2 * local_1b8;
      *pfVar34 = fVar44 + fVar48 * fVar42 + fVar51;
      pfVar34[1] = fVar44 + fVar48 * fVar42 + fVar52;
      pfVar34[2] = fVar44 + fVar48 * fVar42 + fVar53;
      pfVar34[3] = fVar44 + fVar43 + fVar48 * fVar42;
      pfVar39 = pfVar34 + 4;
      *pfVar35 = fVar44 + fVar45 + fVar48 * fVar42;
      pfVar35[1] = fVar44 + fVar46 + fVar48 * fVar42;
      pfVar35[2] = fVar44 + fVar47 + fVar48 * fVar42;
      pfVar35[3] = fVar44 + fVar48 * fVar42 + fVar50;
      pfVar34 = pfVar11;
      if (pfVar39 < pfVar13) {
        pfVar34 = pfVar39;
      }
      pfVar39 = pfVar35 + 4;
      pfVar35 = pfVar12;
      if (pfVar39 < pfVar14) {
        pfVar35 = pfVar39;
      }
      uVar37 = uVar37 - 1;
      local_1b8 = fVar49;
      fVar44 = fVar54;
    } while (uVar37 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar49;
  *(float *)(param_1 + 0x230) = fVar54;
  *(float *)(param_1 + 0x234) = local_1d8;
  *(float **)(param_1 + 0xa0) = local_220;
  *(float **)(param_1 + 0xb8) = local_230;
  *(float **)(param_1 + 0xc0) = local_res20;
  *(float **)(param_1 + 0x30) = pfVar38;
  *(float *)(param_1 + 0x1f0) = fVar50;
  *(float *)(param_1 + 500) = fVar51;
  *(float *)(param_1 + 0x1f8) = fVar52;
  *(float *)(param_1 + 0x1fc) = fVar53;
  *(float *)(param_1 + 0x200) = fVar43;
  *(float *)(param_1 + 0x204) = fVar45;
  *(float *)(param_1 + 0x208) = fVar46;
  *(float *)(param_1 + 0x20c) = fVar47;
  *(float **)(param_1 + 200) = local_238;
  *(float **)(param_1 + 0x130) = pfVar34;
  *(float **)(param_1 + 0x138) = pfVar35;
  *(float **)(param_1 + 0x90) = pfVar32;
  *(float **)(param_1 + 0x98) = pfVar36;
  *(float **)(param_1 + 0xa8) = local_218;
  *(float **)(param_1 + 0xb0) = pfVar33;
  return;
}



// FUNCTION 1451045b0 FUN_1451045b0 body=2783 status=ok
// SIG undefined FUN_1451045b0(void)

void FUN_1451045b0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  uint uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float *local_res18;
  float *local_res20;
  float *local_2d8;
  float *local_2d0;
  float *local_2c8;
  float *local_2c0;
  float *local_2b8;
  float *local_2b0;
  float *local_2a8;
  float *local_2a0;
  float *local_298;
  undefined8 local_278;
  undefined8 uStack_270;
  float local_248;
  float local_238;
  float local_228;
  float local_208;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  local_248 = *(float *)(param_1 + 0x23c);
  fVar1 = *(float *)(param_1 + 0x44);
  local_238 = *(float *)(param_1 + 0x240);
  fVar60 = *(float *)(param_1 + 0x230);
  pfVar10 = *(float **)(param_1 + 0x28);
  pfVar40 = *(float **)(param_1 + 0x30);
  pfVar11 = *(float **)(param_1 + 0x110);
  pfVar12 = *(float **)(param_1 + 0x118);
  pfVar13 = *(float **)(param_1 + 0x120);
  pfVar14 = *(float **)(param_1 + 0x150);
  pfVar15 = *(float **)(param_1 + 0x158);
  pfVar37 = *(float **)(param_1 + 0x138);
  pfVar38 = *(float **)(param_1 + 0x140);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  local_res18 = (float *)*param_2;
  uVar7 = *(ushort *)(param_2 + 2);
  pfVar35 = *(float **)(param_1 + 0xb0);
  fVar44 = -2.0 / (float)*(uint *)(lVar9 + 0x18);
  pfVar16 = *(float **)(param_1 + 0x38);
  pfVar17 = *(float **)(param_1 + 0x160);
  local_res20 = *(float **)(param_1 + 0x98);
  local_2b0 = *(float **)(param_1 + 0xa0);
  local_2d8 = *(float **)(param_1 + 0xa8);
  local_2a8 = *(float **)(param_1 + 0xb8);
  fVar42 = *(float *)(lVar9 + 0x10) - local_248;
  local_228 = *(float *)(param_1 + 0x234);
  pfVar36 = *(float **)(param_1 + 0x130);
  fVar43 = *(float *)(lVar9 + 0x14) - local_238;
  fVar47 = *(float *)(param_1 + 0x4c);
  pfVar34 = *(float **)(param_1 + 0x90);
  local_2a0 = *(float **)(param_1 + 0xd8);
  uVar26 = *(undefined8 *)(param_1 + 0x180);
  uVar27 = *(undefined8 *)(param_1 + 0x188);
  local_2d0 = *(float **)(param_1 + 0xc0);
  fVar18 = *(float *)(param_1 + 0x170);
  fVar19 = *(float *)(param_1 + 0x174);
  fVar20 = *(float *)(param_1 + 0x178);
  fVar21 = *(float *)(param_1 + 0x17c);
  fVar22 = *(float *)(param_1 + 0x1b0);
  fVar23 = *(float *)(param_1 + 0x1b4);
  fVar24 = *(float *)(param_1 + 0x1b8);
  fVar25 = *(float *)(param_1 + 0x1bc);
  fVar59 = *(float *)(param_1 + 0x1f0);
  fVar61 = *(float *)(param_1 + 500);
  fVar62 = *(float *)(param_1 + 0x1f8);
  fVar63 = *(float *)(param_1 + 0x1fc);
  fVar45 = *(float *)(param_1 + 0x200);
  fVar48 = *(float *)(param_1 + 0x204);
  fVar50 = *(float *)(param_1 + 0x208);
  fVar52 = *(float *)(param_1 + 0x20c);
  local_2c0 = *(float **)(param_1 + 0xe0);
  uVar28 = *(undefined8 *)(param_1 + 400);
  uVar29 = *(undefined8 *)(param_1 + 0x198);
  local_2b8 = *(float **)(param_1 + 0xe8);
  uVar30 = *(undefined8 *)(param_1 + 0x1c0);
  uVar31 = *(undefined8 *)(param_1 + 0x1c8);
  local_2c8 = *(float **)(param_1 + 200);
  uVar32 = *(undefined8 *)(param_1 + 0x1d0);
  uVar33 = *(undefined8 *)(param_1 + 0x1d8);
  uVar41 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_298 = *(float **)(param_1 + 0xd0);
  local_278 = *(undefined8 *)(param_1 + 0x210);
  uStack_270 = *(undefined8 *)(param_1 + 0x218);
  local_208 = fVar47;
  fVar54 = fVar60;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar60 = *pfVar34;
      pfVar39 = pfVar34 + 4;
      fVar47 = *local_res20;
      fVar4 = *local_2b0;
      pfVar34 = pfVar11;
      if (pfVar39 < pfVar14) {
        pfVar34 = pfVar39;
      }
      pfVar39 = local_res20 + 4;
      local_res20 = pfVar11 + 1;
      if (pfVar39 < pfVar14) {
        local_res20 = pfVar39;
      }
      pfVar39 = local_2b0 + 4;
      local_2b0 = pfVar11 + 2;
      if (pfVar39 < pfVar14) {
        local_2b0 = pfVar39;
      }
      pfVar39 = local_2d8 + 4;
      fVar5 = *pfVar35;
      fVar59 = fVar60 * fVar18 + fVar22 * fVar59;
      fVar61 = fVar47 * fVar19 + fVar23 * fVar61;
      fVar62 = fVar4 * fVar20 + fVar24 * fVar62;
      fVar63 = *local_2d8 * fVar21 + fVar25 * fVar63;
      fVar60 = *local_2d0;
      local_2d8 = pfVar11 + 3;
      if (pfVar39 < pfVar14) {
        local_2d8 = pfVar39;
      }
      pfVar39 = pfVar35 + 4;
      pfVar35 = pfVar12;
      if (pfVar39 < pfVar15) {
        pfVar35 = pfVar39;
      }
      fVar47 = *local_2c8;
      fVar4 = *local_2a8;
      pfVar39 = local_2a8 + 4;
      local_2a8 = pfVar12 + 1;
      if (pfVar39 < pfVar15) {
        local_2a8 = pfVar39;
      }
      pfVar39 = local_2d0 + 4;
      local_2d0 = pfVar12 + 2;
      if (pfVar39 < pfVar15) {
        local_2d0 = pfVar39;
      }
      pfVar39 = local_2c8 + 4;
      local_2c8 = pfVar12 + 3;
      if (pfVar39 < pfVar15) {
        local_2c8 = pfVar39;
      }
      local_1e8 = (float)uVar30;
      fStack_1e4 = (float)((ulonglong)uVar30 >> 0x20);
      fStack_1e0 = (float)uVar31;
      fStack_1dc = (float)((ulonglong)uVar31 >> 0x20);
      fVar6 = *local_2a0;
      fVar51 = *local_2c0;
      local_1f8 = (float)uVar26;
      fStack_1f4 = (float)((ulonglong)uVar26 >> 0x20);
      fStack_1f0 = (float)uVar27;
      fStack_1ec = (float)((ulonglong)uVar27 >> 0x20);
      fVar46 = *local_298;
      fVar45 = fVar5 * local_1f8 + local_1e8 * fVar45;
      fVar48 = fVar4 * fStack_1f4 + fStack_1e4 * fVar48;
      fVar50 = fVar60 * fStack_1f0 + fStack_1e0 * fVar50;
      fVar52 = fVar47 * fStack_1ec + fStack_1dc * fVar52;
      pfVar39 = local_298 + 4;
      fVar60 = *local_2b8;
      local_1c8 = (float)uVar32;
      fStack_1c4 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_1c0 = (float)uVar33;
      fStack_1bc = (float)((ulonglong)uVar33 >> 0x20);
      local_298 = pfVar13;
      if (pfVar39 < pfVar17) {
        local_298 = pfVar39;
      }
      pfVar39 = local_2a0 + 4;
      local_1d8 = (float)uVar28;
      fStack_1d4 = (float)((ulonglong)uVar28 >> 0x20);
      fStack_1d0 = (float)uVar29;
      fStack_1cc = (float)((ulonglong)uVar29 >> 0x20);
      local_2a0 = pfVar13 + 1;
      if (pfVar39 < pfVar17) {
        local_2a0 = pfVar39;
      }
      pfVar39 = local_2c0 + 4;
      local_2c0 = pfVar13 + 2;
      if (pfVar39 < pfVar17) {
        local_2c0 = pfVar39;
      }
      fVar47 = *local_res18;
      pfVar39 = local_2b8 + 4;
      local_2b8 = pfVar13 + 3;
      if (pfVar39 < pfVar17) {
        local_2b8 = pfVar39;
      }
      fVar46 = fVar46 * local_1d8 + local_1c8 * (float)local_278;
      fVar49 = fVar6 * fStack_1d4 + fStack_1c4 * local_278._4_4_;
      fVar51 = fVar51 * fStack_1d0 + fStack_1c0 * (float)uStack_270;
      fVar53 = fVar60 * fStack_1cc + fStack_1bc * uStack_270._4_4_;
      uVar8 = *(ushort *)(param_2 + 2);
      fVar60 = local_res18[uVar8];
      fVar4 = local_res18[(uint)uVar8 + (uint)uVar8];
      fVar5 = local_res18[(uint)uVar8 + (uint)uVar8 * 2];
      fVar6 = local_res18[(uint)uVar8 * 4];
      local_278 = CONCAT44(fVar49,fVar46);
      uStack_270 = CONCAT44(fVar53,fVar51);
      local_248 = local_248 + fVar42 * (1.0 / (float)uVar7);
      local_238 = local_238 + fVar43 * (1.0 / (float)uVar7);
      fVar55 = fVar53 + fVar52 + fVar63 + fVar49 + fVar48 + fVar61 +
               fVar51 + fVar50 + fVar62 + fVar46 + fVar45 + fVar59;
      *local_res18 = fVar47 * local_248 +
                     (fVar49 * -1.0 + fVar61 * -1.0 + fVar48 * -1.0 +
                      fVar53 * -1.0 + fVar63 * -1.0 + fVar52 * -1.0 +
                     fVar46 * 1.0 + fVar59 * 1.0 + fVar45 * 1.0 +
                     fVar51 * 1.0 + fVar62 * 1.0 + fVar50 * 1.0) * local_238;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar60 * local_248 +
           (fVar49 * 1.0 + fVar61 * 1.0 + fVar48 * 1.0 +
            fVar53 * -1.0 + fVar63 * -1.0 + fVar52 * -1.0 +
           fVar46 * 1.0 + fVar59 * 1.0 + fVar45 * 1.0 +
           fVar51 * -1.0 + fVar62 * -1.0 + fVar50 * -1.0) * local_238;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar4 * local_248 +
           (fVar49 * 1.0 + fVar61 * 1.0 + fVar48 * 1.0 +
            fVar53 * -1.0 + fVar63 * -1.0 + fVar52 * -1.0 +
           fVar46 * -1.0 + fVar59 * -1.0 + fVar45 * -1.0 +
           fVar51 * 1.0 + fVar62 * 1.0 + fVar50 * 1.0) * local_238;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar5 * local_248 +
           (fVar49 * -1.0 + fVar61 * -1.0 + fVar48 * 1.0 +
            fVar53 * 1.0 + fVar63 * 1.0 + fVar52 * 1.0 +
           fVar46 * -1.0 + fVar59 * -1.0 + fVar45 * 1.0 +
           fVar51 * 1.0 + fVar62 * -1.0 + fVar50 * -1.0) * local_238;
      fVar56 = fVar55 * fVar44;
      fVar57 = fVar55 * fVar44;
      fVar58 = fVar55 * fVar44;
      fVar55 = fVar55 * fVar44;
      fVar60 = fVar4 + fVar5 + fVar47 + fVar60 + fVar6;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar6 * local_248 +
           (fVar49 * -1.0 + fVar61 * -1.0 + fVar48 * 1.0 +
            fVar53 * 1.0 + fVar63 * -1.0 + fVar52 * -1.0 +
           fVar46 * 1.0 + fVar59 * 1.0 + fVar45 * 1.0 + fVar51 * -1.0 + fVar62 * -1.0 + fVar50 * 1.0
           ) * local_238;
      local_res18 = local_res18 + 1;
      local_228 = (fVar3 * local_228 + fVar60) - fVar54;
      fVar47 = local_228;
      if (pfVar10 != (float *)0x0) {
        fVar47 = *pfVar40;
        pfVar39 = pfVar40 + 1;
        *pfVar40 = local_228;
        pfVar40 = pfVar10;
        if (pfVar39 != pfVar16) {
          pfVar40 = pfVar39;
        }
      }
      fVar54 = fVar1 * fVar47 + fVar2 * local_208;
      *pfVar36 = fVar54 + fVar57 + fVar61;
      pfVar36[1] = fVar54 + fVar58 + fVar62;
      pfVar36[2] = fVar54 + fVar55 + fVar63;
      pfVar36[3] = fVar54 + fVar45 + fVar56;
      pfVar39 = pfVar36 + 4;
      *pfVar37 = fVar54 + fVar48 + fVar57;
      pfVar37[1] = fVar54 + fVar50 + fVar58;
      pfVar37[2] = fVar54 + fVar52 + fVar55;
      pfVar37[3] = fVar54 + fVar46 + fVar56;
      pfVar36 = pfVar11;
      if (pfVar39 < pfVar14) {
        pfVar36 = pfVar39;
      }
      pfVar39 = pfVar37 + 4;
      *pfVar38 = fVar54 + fVar49 + fVar57;
      pfVar38[1] = fVar54 + fVar51 + fVar58;
      pfVar38[2] = fVar54 + fVar53 + fVar55;
      pfVar38[3] = fVar54 + fVar56 + fVar59;
      pfVar37 = pfVar12;
      if (pfVar39 < pfVar15) {
        pfVar37 = pfVar39;
      }
      pfVar39 = pfVar38 + 4;
      pfVar38 = pfVar13;
      if (pfVar39 < pfVar17) {
        pfVar38 = pfVar39;
      }
      uVar41 = uVar41 - 1;
      local_208 = fVar47;
      fVar54 = fVar60;
    } while (uVar41 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar47;
  *(float *)(param_1 + 0x230) = fVar60;
  *(float *)(param_1 + 0x234) = local_228;
  *(float **)(param_1 + 0x90) = pfVar34;
  *(float **)(param_1 + 0x98) = local_res20;
  *(float **)(param_1 + 0xa0) = local_2b0;
  *(float **)(param_1 + 0xa8) = local_2d8;
  *(float **)(param_1 + 0xd0) = local_298;
  *(float **)(param_1 + 0xb8) = local_2a8;
  *(float **)(param_1 + 0xd8) = local_2a0;
  *(float **)(param_1 + 0xc0) = local_2d0;
  *(float **)(param_1 + 0x140) = pfVar38;
  *(float **)(param_1 + 0xe0) = local_2c0;
  *(float *)(param_1 + 0x1f0) = fVar59;
  *(float *)(param_1 + 500) = fVar61;
  *(float *)(param_1 + 0x1f8) = fVar62;
  *(float *)(param_1 + 0x1fc) = fVar63;
  *(float *)(param_1 + 0x200) = fVar45;
  *(float *)(param_1 + 0x204) = fVar48;
  *(float *)(param_1 + 0x208) = fVar50;
  *(float *)(param_1 + 0x20c) = fVar52;
  *(float **)(param_1 + 200) = local_2c8;
  *(float **)(param_1 + 0x30) = pfVar40;
  *(undefined8 *)(param_1 + 0x210) = local_278;
  *(undefined8 *)(param_1 + 0x218) = uStack_270;
  *(float **)(param_1 + 0x130) = pfVar36;
  *(float **)(param_1 + 0x138) = pfVar37;
  *(float **)(param_1 + 0xb0) = pfVar35;
  *(float **)(param_1 + 0xe8) = local_2b8;
  return;
}



// FUNCTION 145105090 FUN_145105090 body=3451 status=ok
// SIG undefined FUN_145105090(void)

void FUN_145105090(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  uint uVar46;
  float *pfVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float *local_res18;
  float *local_res20;
  float *local_358;
  float *local_350;
  float *local_348;
  float *local_340;
  float *local_338;
  float *local_330;
  float *local_328;
  float *local_320;
  float *local_318;
  float *local_310;
  float *local_308;
  float *local_300;
  float *local_2f8;
  float *local_2f0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_268;
  float local_258;
  float local_248;
  float local_228;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  local_268 = *(float *)(param_1 + 0x23c);
  fVar1 = *(float *)(param_1 + 0x44);
  local_258 = *(float *)(param_1 + 0x240);
  fVar65 = *(float *)(param_1 + 0x230);
  pfVar10 = *(float **)(param_1 + 0x28);
  pfVar47 = *(float **)(param_1 + 0x30);
  pfVar11 = *(float **)(param_1 + 0x110);
  pfVar12 = *(float **)(param_1 + 0x118);
  pfVar13 = *(float **)(param_1 + 0x120);
  pfVar14 = *(float **)(param_1 + 0x128);
  pfVar42 = *(float **)(param_1 + 0x138);
  pfVar43 = *(float **)(param_1 + 0x140);
  pfVar44 = *(float **)(param_1 + 0x148);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  local_2f0 = (float *)*param_2;
  uVar7 = *(ushort *)(param_2 + 2);
  pfVar15 = *(float **)(param_1 + 0x158);
  fVar50 = -2.0 / (float)*(uint *)(lVar9 + 0x18);
  pfVar16 = *(float **)(param_1 + 0x38);
  pfVar17 = *(float **)(param_1 + 0x150);
  local_res18 = *(float **)(param_1 + 0x98);
  local_328 = *(float **)(param_1 + 0xa0);
  fVar48 = *(float *)(lVar9 + 0x10) - local_268;
  local_248 = *(float *)(param_1 + 0x234);
  pfVar41 = *(float **)(param_1 + 0x130);
  fVar49 = *(float *)(lVar9 + 0x14) - local_258;
  fVar53 = *(float *)(param_1 + 0x4c);
  pfVar18 = *(float **)(param_1 + 0x160);
  pfVar19 = *(float **)(param_1 + 0x168);
  pfVar40 = *(float **)(param_1 + 0x90);
  local_358 = *(float **)(param_1 + 0xb8);
  uVar28 = *(undefined8 *)(param_1 + 0x180);
  uVar29 = *(undefined8 *)(param_1 + 0x188);
  local_res20 = *(float **)(param_1 + 0xa8);
  fVar20 = *(float *)(param_1 + 0x170);
  fVar21 = *(float *)(param_1 + 0x174);
  fVar22 = *(float *)(param_1 + 0x178);
  fVar23 = *(float *)(param_1 + 0x17c);
  fVar24 = *(float *)(param_1 + 0x1b0);
  fVar25 = *(float *)(param_1 + 0x1b4);
  fVar26 = *(float *)(param_1 + 0x1b8);
  fVar27 = *(float *)(param_1 + 0x1bc);
  local_298 = *(float *)(param_1 + 0x210);
  fStack_294 = *(float *)(param_1 + 0x214);
  fStack_290 = *(float *)(param_1 + 0x218);
  fStack_28c = *(float *)(param_1 + 0x21c);
  local_288 = *(float *)(param_1 + 0x220);
  fStack_284 = *(float *)(param_1 + 0x224);
  fStack_280 = *(float *)(param_1 + 0x228);
  fStack_27c = *(float *)(param_1 + 0x22c);
  fVar51 = *(float *)(param_1 + 0x1f0);
  fVar54 = *(float *)(param_1 + 500);
  fVar56 = *(float *)(param_1 + 0x1f8);
  fVar58 = *(float *)(param_1 + 0x1fc);
  local_320 = *(float **)(param_1 + 0xc0);
  local_350 = *(float **)(param_1 + 200);
  local_300 = *(float **)(param_1 + 0xd0);
  local_318 = *(float **)(param_1 + 0xd8);
  local_348 = *(float **)(param_1 + 0xe0);
  local_340 = *(float **)(param_1 + 0xe8);
  local_310 = *(float **)(param_1 + 0xf0);
  uVar30 = *(undefined8 *)(param_1 + 400);
  uVar31 = *(undefined8 *)(param_1 + 0x198);
  local_308 = *(float **)(param_1 + 0xf8);
  uVar32 = *(undefined8 *)(param_1 + 0x1a0);
  uVar33 = *(undefined8 *)(param_1 + 0x1a8);
  local_338 = *(float **)(param_1 + 0x100);
  uVar34 = *(undefined8 *)(param_1 + 0x1c0);
  uVar35 = *(undefined8 *)(param_1 + 0x1c8);
  local_330 = *(float **)(param_1 + 0x108);
  uVar36 = *(undefined8 *)(param_1 + 0x1d0);
  uVar37 = *(undefined8 *)(param_1 + 0x1d8);
  uVar38 = *(undefined8 *)(param_1 + 0x1e0);
  uVar39 = *(undefined8 *)(param_1 + 0x1e8);
  uVar46 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_2f8 = *(float **)(param_1 + 0xb0);
  local_2a8 = *(undefined8 *)(param_1 + 0x200);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x208);
  local_228 = fVar53;
  fVar60 = fVar65;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar65 = *pfVar40;
      pfVar45 = pfVar40 + 4;
      fVar53 = *local_res18;
      fVar55 = *local_328;
      pfVar40 = pfVar11;
      if (pfVar45 < pfVar17) {
        pfVar40 = pfVar45;
      }
      pfVar45 = local_res18 + 4;
      local_res18 = pfVar11 + 1;
      if (pfVar45 < pfVar17) {
        local_res18 = pfVar45;
      }
      pfVar45 = local_328 + 4;
      local_328 = pfVar11 + 2;
      if (pfVar45 < pfVar17) {
        local_328 = pfVar45;
      }
      fVar51 = fVar65 * fVar20 + fVar24 * fVar51;
      fVar54 = fVar53 * fVar21 + fVar25 * fVar54;
      fVar56 = fVar55 * fVar22 + fVar26 * fVar56;
      fVar58 = *local_res20 * fVar23 + fVar27 * fVar58;
      pfVar45 = local_res20 + 4;
      local_res20 = pfVar11 + 3;
      if (pfVar45 < pfVar17) {
        local_res20 = pfVar45;
      }
      fVar65 = *local_2f8;
      pfVar45 = local_2f8 + 4;
      fVar53 = *local_320;
      fVar55 = *local_358;
      fVar59 = *local_350;
      local_2f8 = pfVar12;
      if (pfVar45 < pfVar15) {
        local_2f8 = pfVar45;
      }
      pfVar45 = local_358 + 4;
      local_358 = pfVar12 + 1;
      if (pfVar45 < pfVar15) {
        local_358 = pfVar45;
      }
      pfVar45 = local_320 + 4;
      local_320 = pfVar12 + 2;
      if (pfVar45 < pfVar15) {
        local_320 = pfVar45;
      }
      pfVar45 = local_350 + 4;
      local_350 = pfVar12 + 3;
      if (pfVar45 < pfVar15) {
        local_350 = pfVar45;
      }
      local_208 = (float)uVar34;
      fStack_204 = (float)((ulonglong)uVar34 >> 0x20);
      fStack_200 = (float)uVar35;
      fStack_1fc = (float)((ulonglong)uVar35 >> 0x20);
      fVar4 = *local_348;
      fVar5 = *local_318;
      local_218 = (float)uVar28;
      fStack_214 = (float)((ulonglong)uVar28 >> 0x20);
      fStack_210 = (float)uVar29;
      fStack_20c = (float)((ulonglong)uVar29 >> 0x20);
      fVar6 = *local_300;
      fVar52 = fVar65 * local_218 + local_208 * (float)local_2a8;
      fVar55 = fVar55 * fStack_214 + fStack_204 * local_2a8._4_4_;
      fVar57 = fVar53 * fStack_210 + fStack_200 * (float)uStack_2a0;
      fVar59 = fVar59 * fStack_20c + fStack_1fc * uStack_2a0._4_4_;
      pfVar45 = local_300 + 4;
      local_2a8 = CONCAT44(fVar55,fVar52);
      uStack_2a0 = CONCAT44(fVar59,fVar57);
      local_1e8 = (float)uVar36;
      fStack_1e4 = (float)((ulonglong)uVar36 >> 0x20);
      fStack_1e0 = (float)uVar37;
      fStack_1dc = (float)((ulonglong)uVar37 >> 0x20);
      local_300 = pfVar13;
      if (pfVar45 < pfVar18) {
        local_300 = pfVar45;
      }
      pfVar45 = local_318 + 4;
      local_1f8 = (float)uVar30;
      fStack_1f4 = (float)((ulonglong)uVar30 >> 0x20);
      fStack_1f0 = (float)uVar31;
      fStack_1ec = (float)((ulonglong)uVar31 >> 0x20);
      local_318 = pfVar13 + 1;
      if (pfVar45 < pfVar18) {
        local_318 = pfVar45;
      }
      pfVar45 = local_348 + 4;
      local_348 = pfVar13 + 2;
      if (pfVar45 < pfVar18) {
        local_348 = pfVar45;
      }
      pfVar45 = local_340 + 4;
      local_298 = fVar6 * local_1f8 + local_1e8 * local_298;
      fStack_294 = fVar5 * fStack_1f4 + fStack_1e4 * fStack_294;
      fStack_290 = fVar4 * fStack_1f0 + fStack_1e0 * fStack_290;
      fStack_28c = *local_340 * fStack_1ec + fStack_1dc * fStack_28c;
      local_340 = pfVar13 + 3;
      if (pfVar45 < pfVar18) {
        local_340 = pfVar45;
      }
      fVar65 = *local_338;
      fVar53 = *local_308;
      fVar4 = *local_310;
      pfVar45 = local_310 + 4;
      local_310 = pfVar14;
      if (pfVar45 < pfVar19) {
        local_310 = pfVar45;
      }
      local_1c8 = (float)uVar38;
      fStack_1c4 = (float)((ulonglong)uVar38 >> 0x20);
      fStack_1c0 = (float)uVar39;
      fStack_1bc = (float)((ulonglong)uVar39 >> 0x20);
      pfVar45 = local_308 + 4;
      local_308 = pfVar14 + 1;
      if (pfVar45 < pfVar19) {
        local_308 = pfVar45;
      }
      local_1d8 = (float)uVar32;
      fStack_1d4 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_1d0 = (float)uVar33;
      fStack_1cc = (float)((ulonglong)uVar33 >> 0x20);
      pfVar45 = local_338 + 4;
      local_338 = pfVar14 + 2;
      if (pfVar45 < pfVar19) {
        local_338 = pfVar45;
      }
      pfVar45 = local_330 + 4;
      local_288 = fVar4 * local_1d8 + local_1c8 * local_288;
      fStack_284 = fVar53 * fStack_1d4 + fStack_1c4 * fStack_284;
      fStack_280 = fVar65 * fStack_1d0 + fStack_1c0 * fStack_280;
      fStack_27c = *local_330 * fStack_1cc + fStack_1bc * fStack_27c;
      local_330 = pfVar14 + 3;
      if (pfVar45 < pfVar19) {
        local_330 = pfVar45;
      }
      uVar8 = *(ushort *)(param_2 + 2);
      fVar65 = local_2f0[(uint)uVar8 + (uint)uVar8];
      fVar53 = *local_2f0;
      fVar4 = local_2f0[(uint)uVar8 + (uint)uVar8 * 2];
      fVar5 = local_2f0[uVar8];
      fVar6 = local_2f0[(uint)uVar8 * 4];
      local_268 = local_268 + fVar48 * (1.0 / (float)uVar7);
      local_258 = local_258 + fVar49 * (1.0 / (float)uVar7);
      fVar61 = fStack_27c + fVar59 + fVar58 + fStack_28c + fStack_284 + fVar55 + fVar54 + fStack_294
               + fStack_280 + fVar57 + fVar56 + fStack_290 + local_288 + fVar52 + fVar51 + local_298
      ;
      fVar62 = fVar61 * fVar50;
      fVar63 = fVar61 * fVar50;
      fVar64 = fVar61 * fVar50;
      fVar61 = fVar61 * fVar50;
      *local_2f0 = fVar53 * local_268 +
                   (fStack_284 * -1.0 + fVar54 * -1.0 + fVar55 * -1.0 + fStack_294 * -1.0 +
                    fStack_27c * -1.0 + fVar58 * -1.0 + fVar59 * -1.0 + fStack_28c * -1.0 +
                   local_288 * 1.0 + fVar51 * 1.0 + fVar52 * 1.0 + local_298 * 1.0 +
                   fStack_280 * 1.0 + fVar56 * 1.0 + fVar57 * 1.0 + fStack_290 * 1.0) * local_258;
      local_2f0[*(ushort *)(param_2 + 2)] =
           fVar5 * local_268 +
           (fStack_284 * 1.0 + fVar54 * 1.0 + fVar55 * 1.0 + fStack_294 * 1.0 +
            fStack_27c * -1.0 + fVar58 * -1.0 + fVar59 * -1.0 + fStack_28c * -1.0 +
           local_288 * 1.0 + fVar51 * 1.0 + fVar52 * 1.0 + local_298 * 1.0 +
           fStack_280 * -1.0 + fVar56 * -1.0 + fVar57 * -1.0 + fStack_290 * -1.0) * local_258;
      local_2f0[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar65 * local_268 +
           (fStack_284 * 1.0 + fVar54 * 1.0 + fVar55 * 1.0 + fStack_294 * 1.0 +
            fStack_27c * -1.0 + fVar58 * -1.0 + fVar59 * -1.0 + fStack_28c * -1.0 +
           local_288 * -1.0 + fVar51 * -1.0 + fVar52 * -1.0 + local_298 * -1.0 +
           fStack_280 * 1.0 + fVar56 * 1.0 + fVar57 * 1.0 + fStack_290 * 1.0) * local_258;
      local_2f0[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar4 * local_268 +
           (fStack_284 * 1.0 + fVar54 * -1.0 + fVar55 * 1.0 + fStack_294 * -1.0 +
            fStack_27c * -1.0 + fVar58 * 1.0 + fVar59 * 1.0 + fStack_28c * 1.0 +
           local_288 * 1.0 + fVar51 * -1.0 + fVar52 * 1.0 + local_298 * -1.0 +
           fStack_280 * -1.0 + fVar56 * -1.0 + fVar57 * -1.0 + fStack_290 * 1.0) * local_258;
      local_2f0[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar6 * local_268 +
           (fStack_284 * 1.0 + fVar54 * -1.0 + fVar55 * 1.0 + fStack_294 * -1.0 +
            fStack_27c * 1.0 + fVar58 * -1.0 + fVar59 * -1.0 + fStack_28c * 1.0 +
           local_288 * -1.0 + fVar51 * 1.0 + fVar52 * 1.0 + local_298 * 1.0 +
           fStack_280 * -1.0 + fVar56 * -1.0 + fVar57 * 1.0 + fStack_290 * -1.0) * local_258;
      local_2f0 = local_2f0 + 1;
      fVar65 = fVar65 + fVar4 + fVar53 + fVar5 + fVar6;
      local_248 = (fVar3 * local_248 + fVar65) - fVar60;
      fVar53 = local_248;
      if (pfVar10 != (float *)0x0) {
        fVar53 = *pfVar47;
        pfVar45 = pfVar47 + 1;
        *pfVar47 = local_248;
        pfVar47 = pfVar10;
        if (pfVar45 != pfVar16) {
          pfVar47 = pfVar45;
        }
      }
      fVar60 = fVar1 * fVar53 + fVar2 * local_228;
      *pfVar41 = fVar60 + fVar63 + fVar54;
      pfVar41[1] = fVar60 + fVar64 + fVar56;
      pfVar41[2] = fVar60 + fVar61 + fVar58;
      pfVar41[3] = fVar60 + fVar52 + fVar62;
      pfVar45 = pfVar41 + 4;
      *pfVar42 = fVar60 + fVar55 + fVar63;
      pfVar42[1] = fVar60 + fVar57 + fVar64;
      pfVar42[2] = fVar60 + fVar59 + fVar61;
      pfVar42[3] = fVar60 + local_298 + fVar62;
      pfVar41 = pfVar11;
      if (pfVar45 < pfVar17) {
        pfVar41 = pfVar45;
      }
      pfVar45 = pfVar42 + 4;
      pfVar42 = pfVar12;
      if (pfVar45 < pfVar15) {
        pfVar42 = pfVar45;
      }
      *pfVar43 = fVar60 + fStack_294 + fVar63;
      pfVar43[1] = fVar60 + fStack_290 + fVar64;
      pfVar43[2] = fVar60 + fStack_28c + fVar61;
      pfVar43[3] = fVar60 + local_288 + fVar62;
      pfVar45 = pfVar43 + 4;
      *pfVar44 = fVar60 + fStack_284 + fVar63;
      pfVar44[1] = fVar60 + fStack_280 + fVar64;
      pfVar44[2] = fVar60 + fStack_27c + fVar61;
      pfVar44[3] = fVar60 + fVar62 + fVar51;
      pfVar43 = pfVar13;
      if (pfVar45 < pfVar18) {
        pfVar43 = pfVar45;
      }
      pfVar45 = pfVar44 + 4;
      pfVar44 = pfVar14;
      if (pfVar45 < pfVar19) {
        pfVar44 = pfVar45;
      }
      uVar46 = uVar46 - 1;
      local_228 = fVar53;
      fVar60 = fVar65;
    } while (uVar46 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar53;
  *(float *)(param_1 + 0x230) = fVar65;
  *(float *)(param_1 + 0x234) = local_248;
  *(float **)(param_1 + 0xb0) = local_2f8;
  *(float **)(param_1 + 0xb8) = local_358;
  *(float **)(param_1 + 0xc0) = local_320;
  *(float **)(param_1 + 200) = local_350;
  *(float **)(param_1 + 0xd8) = local_318;
  *(float **)(param_1 + 0xe0) = local_348;
  *(float **)(param_1 + 0xe8) = local_340;
  *(float **)(param_1 + 0xf0) = local_310;
  *(float **)(param_1 + 0x90) = pfVar40;
  *(float **)(param_1 + 0xf8) = local_308;
  *(float **)(param_1 + 0x98) = local_res18;
  *(float **)(param_1 + 0x100) = local_338;
  *(float **)(param_1 + 0xa0) = local_328;
  *(float *)(param_1 + 0x1f0) = fVar51;
  *(float *)(param_1 + 500) = fVar54;
  *(float *)(param_1 + 0x1f8) = fVar56;
  *(float *)(param_1 + 0x1fc) = fVar58;
  *(float **)(param_1 + 0x108) = local_330;
  *(float **)(param_1 + 0x30) = pfVar47;
  *(undefined8 *)(param_1 + 0x200) = local_2a8;
  *(undefined8 *)(param_1 + 0x208) = uStack_2a0;
  *(float *)(param_1 + 0x210) = local_298;
  *(float *)(param_1 + 0x214) = fStack_294;
  *(float *)(param_1 + 0x218) = fStack_290;
  *(float *)(param_1 + 0x21c) = fStack_28c;
  *(float *)(param_1 + 0x220) = local_288;
  *(float *)(param_1 + 0x224) = fStack_284;
  *(float *)(param_1 + 0x228) = fStack_280;
  *(float *)(param_1 + 0x22c) = fStack_27c;
  *(float **)(param_1 + 0x130) = pfVar41;
  *(float **)(param_1 + 0x138) = pfVar42;
  *(float **)(param_1 + 0x140) = pfVar43;
  *(float **)(param_1 + 0x148) = pfVar44;
  *(float **)(param_1 + 0xa8) = local_res20;
  *(float **)(param_1 + 0xd0) = local_300;
  return;
}



// FUNCTION 145105e10 FUN_145105e10 body=1519 status=ok
// SIG undefined FUN_145105e10(void)

void FUN_145105e10(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  ushort uVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float *local_res18;
  float local_1b8;
  float local_1a8;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  local_1a8 = *(float *)(param_1 + 0x240);
  fVar2 = *(float *)(param_1 + 0x48);
  local_1b8 = *(float *)(param_1 + 0x23c);
  uVar30 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_188 = *(float *)(param_1 + 0x1f0);
  fStack_184 = *(float *)(param_1 + 500);
  fStack_180 = *(float *)(param_1 + 0x1f8);
  fStack_17c = *(float *)(param_1 + 0x1fc);
  pfVar12 = *(float **)(param_1 + 0x110);
  pfVar13 = *(float **)(param_1 + 0x150);
  pfVar29 = *(float **)(param_1 + 0x130);
  pfVar27 = *(float **)(param_1 + 0xa0);
  pfVar26 = *(float **)(param_1 + 0xa8);
  fVar3 = *(float *)(param_1 + 0x238);
  fVar4 = *(float *)(param_1 + 0x44);
  fVar37 = *(float *)(param_1 + 0x4c);
  fVar39 = *(float *)(param_1 + 0x234);
  fVar16 = *(float *)(param_1 + 0x170);
  fVar17 = *(float *)(param_1 + 0x174);
  fVar18 = *(float *)(param_1 + 0x178);
  fVar19 = *(float *)(param_1 + 0x17c);
  fVar20 = *(float *)(param_1 + 0x1b0);
  fVar21 = *(float *)(param_1 + 0x1b4);
  fVar22 = *(float *)(param_1 + 0x1b8);
  fVar23 = *(float *)(param_1 + 0x1bc);
  local_res18 = (float *)*param_2;
  uVar9 = *(ushort *)(param_2 + 2);
  pfVar25 = *(float **)(param_1 + 0x98);
  fVar33 = -2.0 / (float)*(uint *)(lVar11 + 0x18);
  pfVar14 = *(float **)(param_1 + 0x28);
  pfVar15 = *(float **)(param_1 + 0x38);
  fVar31 = *(float *)(lVar11 + 0x10) - local_1b8;
  pfVar28 = *(float **)(param_1 + 0x30);
  fVar32 = *(float *)(lVar11 + 0x14) - local_1a8;
  fVar38 = *(float *)(param_1 + 0x230);
  pfVar24 = *(float **)(param_1 + 0x90);
  fVar40 = fVar37;
  fVar35 = fVar38;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar37 = *pfVar25;
      pfVar1 = pfVar24 + 4;
      fVar38 = *pfVar27;
      fVar5 = *pfVar24;
      pfVar24 = pfVar12;
      if (pfVar1 < pfVar13) {
        pfVar24 = pfVar1;
      }
      pfVar1 = pfVar25 + 4;
      pfVar25 = pfVar12 + 1;
      if (pfVar1 < pfVar13) {
        pfVar25 = pfVar1;
      }
      pfVar1 = pfVar27 + 4;
      pfVar27 = pfVar12 + 2;
      if (pfVar1 < pfVar13) {
        pfVar27 = pfVar1;
      }
      pfVar1 = pfVar26 + 4;
      uVar10 = *(ushort *)(param_2 + 2);
      local_188 = fVar5 * fVar16 + local_188 * fVar20;
      fStack_184 = fVar37 * fVar17 + fStack_184 * fVar21;
      fStack_180 = fVar38 * fVar18 + fStack_180 * fVar22;
      fStack_17c = *pfVar26 * fVar19 + fStack_17c * fVar23;
      fVar37 = *local_res18;
      pfVar26 = pfVar12 + 3;
      if (pfVar1 < pfVar13) {
        pfVar26 = pfVar1;
      }
      fVar38 = local_res18[uVar10];
      fVar5 = local_res18[(uint)uVar10 + (uint)uVar10];
      fVar6 = local_res18[(uint)uVar10 + (uint)uVar10 * 4];
      fVar7 = local_res18[(uint)uVar10 + (uint)uVar10 * 2];
      fVar8 = local_res18[(uint)uVar10 * 4];
      fVar34 = fStack_17c + fStack_184 + fStack_180 + local_188;
      local_1b8 = local_1b8 + fVar31 * (1.0 / (float)uVar9);
      local_1a8 = local_1a8 + fVar32 * (1.0 / (float)uVar9);
      *local_res18 = fVar37 * local_1b8 +
                     (fStack_184 * -1.0 + fStack_17c * -1.0 + local_188 * 1.0 + fStack_180 * 1.0) *
                     local_1a8;
      fVar36 = (fStack_184 * 1.0 + fStack_17c * -1.0 + local_188 * 1.0 + fStack_180 * -1.0) *
               local_1a8;
      local_res18[*(ushort *)(param_2 + 2)] = fVar38 * local_1b8 + fVar36;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar5 * local_1b8 +
           (fStack_184 * 1.0 + fStack_17c * -1.0 + local_188 * -1.0 + fStack_180 * 1.0) * local_1a8;
      fVar38 = fVar5 + fVar6 + fVar8 + fVar37 + fVar38 + fVar7;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 5] = fVar6 * local_1b8 + fVar36;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar7 * local_1b8 +
           (fStack_184 * -1.0 + fStack_17c * 1.0 + local_188 * -1.0 + fStack_180 * -1.0) * local_1a8
      ;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar8 * local_1b8 +
           (fStack_184 * -1.0 + fStack_17c * -1.0 + local_188 * 1.0 + fStack_180 * -1.0) * local_1a8
      ;
      local_res18 = local_res18 + 1;
      fVar39 = (fVar3 * fVar39 + fVar38) - fVar35;
      fVar37 = fVar39;
      if (pfVar14 != (float *)0x0) {
        fVar37 = *pfVar28;
        pfVar1 = pfVar28 + 1;
        *pfVar28 = fVar39;
        pfVar28 = pfVar14;
        if (pfVar1 != pfVar15) {
          pfVar28 = pfVar1;
        }
      }
      pfVar1 = pfVar29 + 4;
      fVar35 = fVar4 * fVar37 + fVar2 * fVar40;
      *pfVar29 = fVar35 + fVar34 * fVar33 + fStack_184;
      pfVar29[1] = fVar35 + fVar34 * fVar33 + fStack_180;
      pfVar29[2] = fVar35 + fVar34 * fVar33 + fStack_17c;
      pfVar29[3] = fVar35 + fVar34 * fVar33 + local_188;
      pfVar29 = pfVar12;
      if (pfVar1 < pfVar13) {
        pfVar29 = pfVar1;
      }
      uVar30 = uVar30 - 1;
      fVar40 = fVar37;
      fVar35 = fVar38;
    } while (uVar30 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar37;
  *(float *)(param_1 + 0x230) = fVar38;
  *(float *)(param_1 + 0x234) = fVar39;
  *(float **)(param_1 + 0x30) = pfVar28;
  *(float *)(param_1 + 0x1f0) = local_188;
  *(float *)(param_1 + 500) = fStack_184;
  *(float *)(param_1 + 0x1f8) = fStack_180;
  *(float *)(param_1 + 0x1fc) = fStack_17c;
  *(float **)(param_1 + 0x130) = pfVar29;
  *(float **)(param_1 + 0x90) = pfVar24;
  *(float **)(param_1 + 0x98) = pfVar25;
  *(float **)(param_1 + 0xa0) = pfVar27;
  *(float **)(param_1 + 0xa8) = pfVar26;
  return;
}



// FUNCTION 145106400 FUN_145106400 body=2244 status=ok
// SIG undefined FUN_145106400(void)

void FUN_145106400(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  uint uVar38;
  float *pfVar39;
  float *pfVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float *local_res18;
  float *local_res20;
  float *local_258;
  float *local_250;
  float *local_240;
  float *local_238;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_208;
  float local_1f8;
  float local_1e8;
  float local_1c8;
  
  lVar10 = *(longlong *)(param_1 + 0x10);
  local_208 = *(float *)(param_1 + 0x23c);
  fVar1 = *(float *)(param_1 + 0x44);
  local_1f8 = *(float *)(param_1 + 0x240);
  local_250 = *(float **)(param_1 + 0xb8);
  fVar51 = *(float *)(param_1 + 0x230);
  pfVar11 = *(float **)(param_1 + 0x28);
  pfVar39 = *(float **)(param_1 + 0x30);
  pfVar12 = *(float **)(param_1 + 0x110);
  pfVar13 = *(float **)(param_1 + 0x118);
  pfVar14 = *(float **)(param_1 + 0x150);
  pfVar15 = *(float **)(param_1 + 0x158);
  pfVar36 = *(float **)(param_1 + 0x138);
  pfVar33 = *(float **)(param_1 + 0x90);
  pfVar34 = *(float **)(param_1 + 0xb0);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  local_res18 = (float *)*param_2;
  uVar8 = *(ushort *)(param_2 + 2);
  pfVar37 = *(float **)(param_1 + 0x98);
  local_res20 = *(float **)(param_1 + 0xc0);
  fVar43 = -2.0 / (float)*(uint *)(lVar10 + 0x18);
  local_258 = *(float **)(param_1 + 200);
  pfVar16 = *(float **)(param_1 + 0x38);
  local_240 = *(float **)(param_1 + 0xa0);
  fVar41 = *(float *)(lVar10 + 0x10) - local_208;
  local_1e8 = *(float *)(param_1 + 0x234);
  pfVar35 = *(float **)(param_1 + 0x130);
  fVar42 = *(float *)(lVar10 + 0x14) - local_1f8;
  fVar49 = *(float *)(param_1 + 0x4c);
  local_238 = *(float **)(param_1 + 0xa8);
  fVar17 = *(float *)(param_1 + 0x170);
  fVar18 = *(float *)(param_1 + 0x174);
  fVar19 = *(float *)(param_1 + 0x178);
  fVar20 = *(float *)(param_1 + 0x17c);
  fVar21 = *(float *)(param_1 + 0x180);
  fVar22 = *(float *)(param_1 + 0x184);
  fVar23 = *(float *)(param_1 + 0x188);
  fVar24 = *(float *)(param_1 + 0x18c);
  fVar25 = *(float *)(param_1 + 0x1b0);
  fVar26 = *(float *)(param_1 + 0x1b4);
  fVar27 = *(float *)(param_1 + 0x1b8);
  fVar28 = *(float *)(param_1 + 0x1bc);
  fVar29 = *(float *)(param_1 + 0x1c0);
  fVar30 = *(float *)(param_1 + 0x1c4);
  fVar31 = *(float *)(param_1 + 0x1c8);
  fVar32 = *(float *)(param_1 + 0x1cc);
  local_228 = *(float *)(param_1 + 0x200);
  fStack_224 = *(float *)(param_1 + 0x204);
  fStack_220 = *(float *)(param_1 + 0x208);
  fStack_21c = *(float *)(param_1 + 0x20c);
  fVar44 = *(float *)(param_1 + 0x1f0);
  fVar46 = *(float *)(param_1 + 500);
  fVar47 = *(float *)(param_1 + 0x1f8);
  fVar48 = *(float *)(param_1 + 0x1fc);
  uVar38 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_1c8 = fVar49;
  fVar45 = fVar51;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar51 = *pfVar37;
      fVar49 = *local_240;
      fVar4 = *pfVar33;
      pfVar40 = pfVar33 + 4;
      pfVar33 = pfVar12;
      if (pfVar40 < pfVar14) {
        pfVar33 = pfVar40;
      }
      pfVar40 = pfVar37 + 4;
      pfVar37 = pfVar12 + 1;
      if (pfVar40 < pfVar14) {
        pfVar37 = pfVar40;
      }
      pfVar40 = local_240 + 4;
      fVar5 = *pfVar34;
      local_240 = pfVar12 + 2;
      if (pfVar40 < pfVar14) {
        local_240 = pfVar40;
      }
      fVar44 = fVar4 * fVar17 + fVar25 * fVar44;
      fVar46 = fVar51 * fVar18 + fVar26 * fVar46;
      fVar47 = fVar49 * fVar19 + fVar27 * fVar47;
      fVar48 = *local_238 * fVar20 + fVar28 * fVar48;
      pfVar40 = local_238 + 4;
      local_238 = pfVar12 + 3;
      if (pfVar40 < pfVar14) {
        local_238 = pfVar40;
      }
      pfVar40 = pfVar34 + 4;
      fVar51 = *local_res20;
      fVar49 = *local_250;
      fVar4 = *local_258;
      pfVar34 = pfVar13;
      if (pfVar40 < pfVar15) {
        pfVar34 = pfVar40;
      }
      pfVar40 = local_250 + 4;
      local_250 = pfVar13 + 1;
      if (pfVar40 < pfVar15) {
        local_250 = pfVar40;
      }
      pfVar40 = local_res20 + 4;
      local_res20 = pfVar13 + 2;
      if (pfVar40 < pfVar15) {
        local_res20 = pfVar40;
      }
      pfVar40 = local_258 + 4;
      local_258 = pfVar13 + 3;
      if (pfVar40 < pfVar15) {
        local_258 = pfVar40;
      }
      local_228 = fVar5 * fVar21 + local_228 * fVar29;
      fStack_224 = fVar49 * fVar22 + fStack_224 * fVar30;
      fStack_220 = fVar51 * fVar23 + fStack_220 * fVar31;
      fStack_21c = fVar4 * fVar24 + fStack_21c * fVar32;
      fVar51 = *local_res18;
      uVar9 = *(ushort *)(param_2 + 2);
      fVar49 = local_res18[uVar9];
      fVar4 = local_res18[(uint)uVar9 + (uint)uVar9];
      fVar5 = local_res18[(uint)uVar9 + (uint)uVar9 * 4];
      fVar6 = local_res18[(uint)uVar9 + (uint)uVar9 * 2];
      fVar7 = local_res18[(uint)uVar9 * 4];
      local_208 = local_208 + fVar41 * (1.0 / (float)uVar8);
      local_1f8 = local_1f8 + fVar42 * (1.0 / (float)uVar8);
      fVar50 = fStack_21c + fVar48 + fStack_224 + fVar46 + fStack_220 + fVar47 + local_228 + fVar44;
      *local_res18 = fVar51 * local_208 +
                     (fStack_224 * -1.0 + fVar46 * -1.0 + fStack_21c * -1.0 + fVar48 * -1.0 +
                     local_228 * 1.0 + fVar44 * 1.0 + fStack_220 * 1.0 + fVar47 * 1.0) * local_1f8;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar49 * local_208 +
           (fStack_224 * 1.0 + fVar46 * 1.0 + fStack_21c * -1.0 + fVar48 * -1.0 +
           local_228 * 1.0 + fVar44 * 1.0 + fStack_220 * -1.0 + fVar47 * -1.0) * local_1f8;
      fVar51 = fVar4 + fVar5 + fVar7 + fVar51 + fVar49 + fVar6;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar4 * local_208 +
           (fStack_224 * 1.0 + fVar46 * 1.0 + fStack_21c * -1.0 + fVar48 * -1.0 +
           local_228 * -1.0 + fVar44 * -1.0 + fStack_220 * 1.0 + fVar47 * 1.0) * local_1f8;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 5] =
           fVar5 * local_208 +
           (fStack_224 * -1.0 + fVar46 * 1.0 + fStack_21c * 1.0 + fVar48 * -1.0 +
           local_228 * -1.0 + fVar44 * 1.0 + fStack_220 * 1.0 + fVar47 * -1.0) * local_1f8;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar6 * local_208 +
           (fStack_224 * 1.0 + fVar46 * -1.0 + fStack_21c * 1.0 + fVar48 * 1.0 +
           local_228 * 1.0 + fVar44 * -1.0 + fStack_220 * -1.0 + fVar47 * -1.0) * local_1f8;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar7 * local_208 +
           (fStack_224 * 1.0 + fVar46 * -1.0 + fStack_21c * -1.0 + fVar48 * -1.0 +
           local_228 * 1.0 + fVar44 * 1.0 + fStack_220 * 1.0 + fVar47 * -1.0) * local_1f8;
      local_res18 = local_res18 + 1;
      local_1e8 = (fVar3 * local_1e8 + fVar51) - fVar45;
      fVar49 = local_1e8;
      if (pfVar11 != (float *)0x0) {
        fVar49 = *pfVar39;
        pfVar40 = pfVar39 + 1;
        *pfVar39 = local_1e8;
        pfVar39 = pfVar11;
        if (pfVar40 != pfVar16) {
          pfVar39 = pfVar40;
        }
      }
      fVar45 = fVar1 * fVar49 + fVar2 * local_1c8;
      *pfVar35 = fVar45 + fVar50 * fVar43 + fVar46;
      pfVar35[1] = fVar45 + fVar50 * fVar43 + fVar47;
      pfVar35[2] = fVar45 + fVar50 * fVar43 + fVar48;
      pfVar35[3] = fVar45 + local_228 + fVar50 * fVar43;
      pfVar40 = pfVar35 + 4;
      *pfVar36 = fVar45 + fStack_224 + fVar50 * fVar43;
      pfVar36[1] = fVar45 + fStack_220 + fVar50 * fVar43;
      pfVar36[2] = fVar45 + fStack_21c + fVar50 * fVar43;
      pfVar36[3] = fVar45 + fVar50 * fVar43 + fVar44;
      pfVar35 = pfVar12;
      if (pfVar40 < pfVar14) {
        pfVar35 = pfVar40;
      }
      pfVar40 = pfVar36 + 4;
      pfVar36 = pfVar13;
      if (pfVar40 < pfVar15) {
        pfVar36 = pfVar40;
      }
      uVar38 = uVar38 - 1;
      local_1c8 = fVar49;
      fVar45 = fVar51;
    } while (uVar38 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar49;
  *(float *)(param_1 + 0x230) = fVar51;
  *(float *)(param_1 + 0x234) = local_1e8;
  *(float **)(param_1 + 0xa0) = local_240;
  *(float **)(param_1 + 0xb8) = local_250;
  *(float **)(param_1 + 0xc0) = local_res20;
  *(float **)(param_1 + 0x30) = pfVar39;
  *(float *)(param_1 + 0x1f0) = fVar44;
  *(float *)(param_1 + 500) = fVar46;
  *(float *)(param_1 + 0x1f8) = fVar47;
  *(float *)(param_1 + 0x1fc) = fVar48;
  *(float *)(param_1 + 0x200) = local_228;
  *(float *)(param_1 + 0x204) = fStack_224;
  *(float *)(param_1 + 0x208) = fStack_220;
  *(float *)(param_1 + 0x20c) = fStack_21c;
  *(float **)(param_1 + 200) = local_258;
  *(float **)(param_1 + 0x130) = pfVar35;
  *(float **)(param_1 + 0x138) = pfVar36;
  *(float **)(param_1 + 0x90) = pfVar33;
  *(float **)(param_1 + 0x98) = pfVar37;
  *(float **)(param_1 + 0xa8) = local_238;
  *(float **)(param_1 + 0xb0) = pfVar34;
  return;
}



// FUNCTION 145106cd0 FUN_145106cd0 body=2931 status=ok
// SIG undefined FUN_145106cd0(void)

void FUN_145106cd0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float *local_res18;
  float *local_res20;
  float *local_2f8;
  float *local_2f0;
  float *local_2e8;
  float *local_2e0;
  float *local_2d8;
  float *local_2d0;
  float *local_2c8;
  float *local_2c0;
  float *local_2b8;
  undefined8 local_298;
  undefined8 uStack_290;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_268;
  float local_248;
  float local_238;
  float local_218;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  
  lVar10 = *(longlong *)(param_1 + 0x10);
  local_248 = *(float *)(param_1 + 0x23c);
  fVar1 = *(float *)(param_1 + 0x44);
  local_268 = *(float *)(param_1 + 0x240);
  fVar60 = *(float *)(param_1 + 0x230);
  pfVar11 = *(float **)(param_1 + 0x28);
  pfVar41 = *(float **)(param_1 + 0x30);
  pfVar12 = *(float **)(param_1 + 0x110);
  pfVar13 = *(float **)(param_1 + 0x118);
  pfVar14 = *(float **)(param_1 + 0x120);
  pfVar15 = *(float **)(param_1 + 0x150);
  pfVar16 = *(float **)(param_1 + 0x158);
  pfVar38 = *(float **)(param_1 + 0x138);
  pfVar39 = *(float **)(param_1 + 0x140);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  local_res18 = (float *)*param_2;
  uVar8 = *(ushort *)(param_2 + 2);
  pfVar36 = *(float **)(param_1 + 0xb0);
  fVar45 = -2.0 / (float)*(uint *)(lVar10 + 0x18);
  pfVar17 = *(float **)(param_1 + 0x38);
  pfVar18 = *(float **)(param_1 + 0x160);
  local_res20 = *(float **)(param_1 + 0x98);
  local_2d0 = *(float **)(param_1 + 0xa0);
  local_2f8 = *(float **)(param_1 + 0xa8);
  local_2c8 = *(float **)(param_1 + 0xb8);
  local_2f0 = *(float **)(param_1 + 0xc0);
  fVar43 = *(float *)(lVar10 + 0x10) - local_248;
  local_238 = *(float *)(param_1 + 0x234);
  pfVar37 = *(float **)(param_1 + 0x130);
  fVar44 = *(float *)(lVar10 + 0x14) - local_268;
  fVar47 = *(float *)(param_1 + 0x4c);
  pfVar35 = *(float **)(param_1 + 0x90);
  local_2c0 = *(float **)(param_1 + 0xd8);
  uVar27 = *(undefined8 *)(param_1 + 0x180);
  uVar28 = *(undefined8 *)(param_1 + 0x188);
  fVar19 = *(float *)(param_1 + 0x170);
  fVar20 = *(float *)(param_1 + 0x174);
  fVar21 = *(float *)(param_1 + 0x178);
  fVar22 = *(float *)(param_1 + 0x17c);
  fVar23 = *(float *)(param_1 + 0x1b0);
  fVar24 = *(float *)(param_1 + 0x1b4);
  fVar25 = *(float *)(param_1 + 0x1b8);
  fVar26 = *(float *)(param_1 + 0x1bc);
  local_288 = *(float *)(param_1 + 0x210);
  fStack_284 = *(float *)(param_1 + 0x214);
  fStack_280 = *(float *)(param_1 + 0x218);
  fStack_27c = *(float *)(param_1 + 0x21c);
  fVar56 = *(float *)(param_1 + 0x1f0);
  fVar57 = *(float *)(param_1 + 500);
  fVar58 = *(float *)(param_1 + 0x1f8);
  fVar59 = *(float *)(param_1 + 0x1fc);
  local_2e0 = *(float **)(param_1 + 0xe0);
  uVar29 = *(undefined8 *)(param_1 + 400);
  uVar30 = *(undefined8 *)(param_1 + 0x198);
  local_2d8 = *(float **)(param_1 + 0xe8);
  uVar31 = *(undefined8 *)(param_1 + 0x1c0);
  uVar32 = *(undefined8 *)(param_1 + 0x1c8);
  local_2e8 = *(float **)(param_1 + 200);
  uVar33 = *(undefined8 *)(param_1 + 0x1d0);
  uVar34 = *(undefined8 *)(param_1 + 0x1d8);
  uVar42 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_2b8 = *(float **)(param_1 + 0xd0);
  local_298 = *(undefined8 *)(param_1 + 0x200);
  uStack_290 = *(undefined8 *)(param_1 + 0x208);
  local_218 = fVar47;
  fVar51 = fVar60;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar60 = *pfVar35;
      pfVar40 = pfVar35 + 4;
      fVar47 = *local_res20;
      pfVar35 = pfVar12;
      if (pfVar40 < pfVar15) {
        pfVar35 = pfVar40;
      }
      pfVar40 = local_res20 + 4;
      local_res20 = pfVar12 + 1;
      if (pfVar40 < pfVar15) {
        local_res20 = pfVar40;
      }
      pfVar40 = local_2d0 + 4;
      fVar46 = *pfVar36;
      fVar56 = fVar60 * fVar19 + fVar56 * fVar23;
      fVar57 = fVar47 * fVar20 + fVar57 * fVar24;
      fVar58 = *local_2d0 * fVar21 + fVar58 * fVar25;
      fVar59 = *local_2f8 * fVar22 + fVar59 * fVar26;
      local_2d0 = pfVar12 + 2;
      if (pfVar40 < pfVar15) {
        local_2d0 = pfVar40;
      }
      pfVar40 = local_2f8 + 4;
      local_2f8 = pfVar12 + 3;
      if (pfVar40 < pfVar15) {
        local_2f8 = pfVar40;
      }
      pfVar40 = pfVar36 + 4;
      fVar60 = *local_2f0;
      pfVar36 = pfVar13;
      if (pfVar40 < pfVar16) {
        pfVar36 = pfVar40;
      }
      fVar47 = *local_2c8;
      pfVar40 = local_2c8 + 4;
      fVar50 = *local_2e8;
      local_2c8 = pfVar13 + 1;
      if (pfVar40 < pfVar16) {
        local_2c8 = pfVar40;
      }
      pfVar40 = local_2f0 + 4;
      local_2f0 = pfVar13 + 2;
      if (pfVar40 < pfVar16) {
        local_2f0 = pfVar40;
      }
      pfVar40 = local_2e8 + 4;
      local_2e8 = pfVar13 + 3;
      if (pfVar40 < pfVar16) {
        local_2e8 = pfVar40;
      }
      local_1e8 = (float)uVar31;
      fStack_1e4 = (float)((ulonglong)uVar31 >> 0x20);
      fStack_1e0 = (float)uVar32;
      fStack_1dc = (float)((ulonglong)uVar32 >> 0x20);
      fVar4 = *local_2c0;
      fVar5 = *local_2e0;
      local_1f8 = (float)uVar27;
      fStack_1f4 = (float)((ulonglong)uVar27 >> 0x20);
      fStack_1f0 = (float)uVar28;
      fStack_1ec = (float)((ulonglong)uVar28 >> 0x20);
      fVar6 = *local_2b8;
      fVar46 = fVar46 * local_1f8 + local_1e8 * (float)local_298;
      fVar48 = fVar47 * fStack_1f4 + fStack_1e4 * local_298._4_4_;
      fVar49 = fVar60 * fStack_1f0 + fStack_1e0 * (float)uStack_290;
      fVar50 = fVar50 * fStack_1ec + fStack_1dc * uStack_290._4_4_;
      pfVar40 = local_2b8 + 4;
      local_298 = CONCAT44(fVar48,fVar46);
      uStack_290 = CONCAT44(fVar50,fVar49);
      fVar60 = *local_2d8;
      local_1c8 = (float)uVar33;
      fStack_1c4 = (float)((ulonglong)uVar33 >> 0x20);
      fStack_1c0 = (float)uVar34;
      fStack_1bc = (float)((ulonglong)uVar34 >> 0x20);
      local_2b8 = pfVar14;
      if (pfVar40 < pfVar18) {
        local_2b8 = pfVar40;
      }
      pfVar40 = local_2c0 + 4;
      local_1d8 = (float)uVar29;
      fStack_1d4 = (float)((ulonglong)uVar29 >> 0x20);
      fStack_1d0 = (float)uVar30;
      fStack_1cc = (float)((ulonglong)uVar30 >> 0x20);
      local_2c0 = pfVar14 + 1;
      if (pfVar40 < pfVar18) {
        local_2c0 = pfVar40;
      }
      pfVar40 = local_2e0 + 4;
      local_2e0 = pfVar14 + 2;
      if (pfVar40 < pfVar18) {
        local_2e0 = pfVar40;
      }
      fVar47 = *local_res18;
      pfVar40 = local_2d8 + 4;
      local_2d8 = pfVar14 + 3;
      if (pfVar40 < pfVar18) {
        local_2d8 = pfVar40;
      }
      local_288 = fVar6 * local_1d8 + local_1c8 * local_288;
      fStack_284 = fVar4 * fStack_1d4 + fStack_1c4 * fStack_284;
      fStack_280 = fVar5 * fStack_1d0 + fStack_1c0 * fStack_280;
      fStack_27c = fVar60 * fStack_1cc + fStack_1bc * fStack_27c;
      uVar9 = *(ushort *)(param_2 + 2);
      fVar60 = local_res18[uVar9];
      fVar4 = local_res18[(uint)uVar9 + (uint)uVar9];
      fVar5 = local_res18[(uint)uVar9 + (uint)uVar9 * 4];
      fVar6 = local_res18[(uint)uVar9 + (uint)uVar9 * 2];
      fVar7 = local_res18[(uint)uVar9 * 4];
      local_248 = local_248 + fVar43 * (1.0 / (float)uVar8);
      local_268 = local_268 + fVar44 * (1.0 / (float)uVar8);
      fVar52 = fStack_27c + fVar50 + fVar59 + fStack_284 + fVar48 + fVar57 +
               fStack_280 + fVar49 + fVar58 + local_288 + fVar46 + fVar56;
      *local_res18 = fVar47 * local_248 +
                     (fStack_284 * -1.0 + fVar57 * -1.0 + fVar48 * -1.0 +
                      fStack_27c * -1.0 + fVar59 * -1.0 + fVar50 * -1.0 +
                     local_288 * 1.0 + fVar56 * 1.0 + fVar46 * 1.0 +
                     fStack_280 * 1.0 + fVar58 * 1.0 + fVar49 * 1.0) * local_268;
      local_res18[*(ushort *)(param_2 + 2)] =
           fVar60 * local_248 +
           (fStack_284 * 1.0 + fVar57 * 1.0 + fVar48 * 1.0 +
            fStack_27c * -1.0 + fVar59 * -1.0 + fVar50 * -1.0 +
           local_288 * 1.0 + fVar56 * 1.0 + fVar46 * 1.0 +
           fStack_280 * -1.0 + fVar58 * -1.0 + fVar49 * -1.0) * local_268;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar4 * local_248 +
           (fStack_284 * 1.0 + fVar57 * 1.0 + fVar48 * 1.0 +
            fStack_27c * -1.0 + fVar59 * -1.0 + fVar50 * -1.0 +
           local_288 * -1.0 + fVar56 * -1.0 + fVar46 * -1.0 +
           fStack_280 * 1.0 + fVar58 * 1.0 + fVar49 * 1.0) * local_268;
      fVar53 = fVar52 * fVar45;
      fVar54 = fVar52 * fVar45;
      fVar55 = fVar52 * fVar45;
      fVar52 = fVar52 * fVar45;
      fVar60 = fVar4 + fVar5 + fVar7 + fVar47 + fVar60 + fVar6;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 5] =
           fVar5 * local_248 +
           (fStack_284 * 1.0 + fVar57 * 1.0 + fVar48 * -1.0 +
            fStack_27c * -1.0 + fVar59 * -1.0 + fVar50 * 1.0 +
           local_288 * 1.0 + fVar56 * 1.0 + fVar46 * -1.0 +
           fStack_280 * -1.0 + fVar58 * -1.0 + fVar49 * 1.0) * local_268;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar6 * local_248 +
           (fStack_284 * -1.0 + fVar57 * -1.0 + fVar48 * 1.0 +
            fStack_27c * 1.0 + fVar59 * 1.0 + fVar50 * 1.0 +
           local_288 * -1.0 + fVar56 * -1.0 + fVar46 * 1.0 +
           fStack_280 * 1.0 + fVar58 * -1.0 + fVar49 * -1.0) * local_268;
      local_res18[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar7 * local_248 +
           (fStack_284 * -1.0 + fVar57 * -1.0 + fVar48 * 1.0 +
            fStack_27c * 1.0 + fVar59 * -1.0 + fVar50 * -1.0 +
           local_288 * 1.0 + fVar56 * 1.0 + fVar46 * 1.0 +
           fStack_280 * -1.0 + fVar58 * -1.0 + fVar49 * 1.0) * local_268;
      local_res18 = local_res18 + 1;
      local_238 = (fVar3 * local_238 + fVar60) - fVar51;
      fVar47 = local_238;
      if (pfVar11 != (float *)0x0) {
        fVar47 = *pfVar41;
        pfVar40 = pfVar41 + 1;
        *pfVar41 = local_238;
        pfVar41 = pfVar11;
        if (pfVar40 != pfVar17) {
          pfVar41 = pfVar40;
        }
      }
      fVar51 = fVar1 * fVar47 + fVar2 * local_218;
      *pfVar37 = fVar51 + fVar54 + fVar57;
      pfVar37[1] = fVar51 + fVar55 + fVar58;
      pfVar37[2] = fVar51 + fVar52 + fVar59;
      pfVar37[3] = fVar51 + fVar46 + fVar53;
      pfVar40 = pfVar37 + 4;
      *pfVar38 = fVar51 + fVar48 + fVar54;
      pfVar38[1] = fVar51 + fVar49 + fVar55;
      pfVar38[2] = fVar51 + fVar50 + fVar52;
      pfVar38[3] = fVar51 + local_288 + fVar53;
      pfVar37 = pfVar12;
      if (pfVar40 < pfVar15) {
        pfVar37 = pfVar40;
      }
      pfVar40 = pfVar38 + 4;
      *pfVar39 = fVar51 + fStack_284 + fVar54;
      pfVar39[1] = fVar51 + fStack_280 + fVar55;
      pfVar39[2] = fVar51 + fStack_27c + fVar52;
      pfVar39[3] = fVar51 + fVar53 + fVar56;
      pfVar38 = pfVar13;
      if (pfVar40 < pfVar16) {
        pfVar38 = pfVar40;
      }
      pfVar40 = pfVar39 + 4;
      pfVar39 = pfVar14;
      if (pfVar40 < pfVar18) {
        pfVar39 = pfVar40;
      }
      uVar42 = uVar42 - 1;
      local_218 = fVar47;
      fVar51 = fVar60;
    } while (uVar42 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar47;
  *(float *)(param_1 + 0x230) = fVar60;
  *(float *)(param_1 + 0x234) = local_238;
  *(float **)(param_1 + 0x90) = pfVar35;
  *(float **)(param_1 + 0x98) = local_res20;
  *(float **)(param_1 + 0xa0) = local_2d0;
  *(float **)(param_1 + 0xa8) = local_2f8;
  *(float **)(param_1 + 0xd0) = local_2b8;
  *(float **)(param_1 + 0xb8) = local_2c8;
  *(float **)(param_1 + 0xd8) = local_2c0;
  *(float **)(param_1 + 0xc0) = local_2f0;
  *(float **)(param_1 + 0x140) = pfVar39;
  *(float **)(param_1 + 0xe0) = local_2e0;
  *(float *)(param_1 + 0x1f0) = fVar56;
  *(float *)(param_1 + 500) = fVar57;
  *(float *)(param_1 + 0x1f8) = fVar58;
  *(float *)(param_1 + 0x1fc) = fVar59;
  *(float **)(param_1 + 200) = local_2e8;
  *(float **)(param_1 + 0x30) = pfVar41;
  *(undefined8 *)(param_1 + 0x200) = local_298;
  *(undefined8 *)(param_1 + 0x208) = uStack_290;
  *(float *)(param_1 + 0x210) = local_288;
  *(float *)(param_1 + 0x214) = fStack_284;
  *(float *)(param_1 + 0x218) = fStack_280;
  *(float *)(param_1 + 0x21c) = fStack_27c;
  *(float **)(param_1 + 0x130) = pfVar37;
  *(float **)(param_1 + 0x138) = pfVar38;
  *(float **)(param_1 + 0xb0) = pfVar36;
  *(float **)(param_1 + 0xe8) = local_2d8;
  return;
}



// FUNCTION 145107850 FUN_145107850 body=3595 status=ok
// SIG undefined FUN_145107850(void)

void FUN_145107850(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  float *pfVar46;
  uint uVar47;
  float *pfVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float *local_res18;
  float *local_res20;
  float *local_368;
  float *local_360;
  float *local_358;
  float *local_350;
  float *local_348;
  float *local_340;
  float *local_338;
  float *local_330;
  float *local_328;
  float *local_320;
  float *local_318;
  float *local_310;
  float *local_308;
  float *local_300;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  float local_288;
  float local_268;
  float local_258;
  float local_238;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  
  lVar10 = *(longlong *)(param_1 + 0x10);
  local_268 = *(float *)(param_1 + 0x23c);
  fVar1 = *(float *)(param_1 + 0x44);
  local_288 = *(float *)(param_1 + 0x240);
  fVar63 = *(float *)(param_1 + 0x230);
  pfVar11 = *(float **)(param_1 + 0x28);
  pfVar48 = *(float **)(param_1 + 0x30);
  pfVar12 = *(float **)(param_1 + 0x110);
  pfVar13 = *(float **)(param_1 + 0x118);
  pfVar14 = *(float **)(param_1 + 0x120);
  pfVar15 = *(float **)(param_1 + 0x128);
  pfVar43 = *(float **)(param_1 + 0x138);
  pfVar44 = *(float **)(param_1 + 0x140);
  pfVar45 = *(float **)(param_1 + 0x148);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x238);
  local_300 = (float *)*param_2;
  uVar8 = *(ushort *)(param_2 + 2);
  pfVar16 = *(float **)(param_1 + 0x158);
  fVar51 = -2.0 / (float)*(uint *)(lVar10 + 0x18);
  pfVar17 = *(float **)(param_1 + 0x38);
  pfVar18 = *(float **)(param_1 + 0x150);
  local_res18 = *(float **)(param_1 + 0x98);
  local_338 = *(float **)(param_1 + 0xa0);
  fVar49 = *(float *)(lVar10 + 0x10) - local_268;
  local_258 = *(float *)(param_1 + 0x234);
  pfVar42 = *(float **)(param_1 + 0x130);
  fVar50 = *(float *)(lVar10 + 0x14) - local_288;
  fVar53 = *(float *)(param_1 + 0x4c);
  pfVar19 = *(float **)(param_1 + 0x160);
  pfVar20 = *(float **)(param_1 + 0x168);
  pfVar41 = *(float **)(param_1 + 0x90);
  local_368 = *(float **)(param_1 + 0xb8);
  uVar29 = *(undefined8 *)(param_1 + 0x180);
  uVar30 = *(undefined8 *)(param_1 + 0x188);
  local_res20 = *(float **)(param_1 + 0xa8);
  fVar21 = *(float *)(param_1 + 0x170);
  fVar22 = *(float *)(param_1 + 0x174);
  fVar23 = *(float *)(param_1 + 0x178);
  fVar24 = *(float *)(param_1 + 0x17c);
  fVar25 = *(float *)(param_1 + 0x1b0);
  fVar26 = *(float *)(param_1 + 0x1b4);
  fVar27 = *(float *)(param_1 + 0x1b8);
  fVar28 = *(float *)(param_1 + 0x1bc);
  local_2b8 = *(float *)(param_1 + 0x210);
  fStack_2b4 = *(float *)(param_1 + 0x214);
  fStack_2b0 = *(float *)(param_1 + 0x218);
  fStack_2ac = *(float *)(param_1 + 0x21c);
  local_2c8 = *(float *)(param_1 + 0x220);
  fStack_2c4 = *(float *)(param_1 + 0x224);
  fStack_2c0 = *(float *)(param_1 + 0x228);
  fStack_2bc = *(float *)(param_1 + 0x22c);
  fVar62 = *(float *)(param_1 + 0x1f0);
  fVar64 = *(float *)(param_1 + 500);
  fVar65 = *(float *)(param_1 + 0x1f8);
  fVar66 = *(float *)(param_1 + 0x1fc);
  local_330 = *(float **)(param_1 + 0xc0);
  local_360 = *(float **)(param_1 + 200);
  local_310 = *(float **)(param_1 + 0xd0);
  local_328 = *(float **)(param_1 + 0xd8);
  local_358 = *(float **)(param_1 + 0xe0);
  local_350 = *(float **)(param_1 + 0xe8);
  local_320 = *(float **)(param_1 + 0xf0);
  uVar31 = *(undefined8 *)(param_1 + 400);
  uVar32 = *(undefined8 *)(param_1 + 0x198);
  local_318 = *(float **)(param_1 + 0xf8);
  uVar33 = *(undefined8 *)(param_1 + 0x1a0);
  uVar34 = *(undefined8 *)(param_1 + 0x1a8);
  local_348 = *(float **)(param_1 + 0x100);
  uVar35 = *(undefined8 *)(param_1 + 0x1c0);
  uVar36 = *(undefined8 *)(param_1 + 0x1c8);
  local_340 = *(float **)(param_1 + 0x108);
  uVar37 = *(undefined8 *)(param_1 + 0x1d0);
  uVar38 = *(undefined8 *)(param_1 + 0x1d8);
  uVar39 = *(undefined8 *)(param_1 + 0x1e0);
  uVar40 = *(undefined8 *)(param_1 + 0x1e8);
  uVar47 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_308 = *(float **)(param_1 + 0xb0);
  local_2a8 = *(undefined8 *)(param_1 + 0x200);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x208);
  local_238 = fVar53;
  fVar57 = fVar63;
  if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
    do {
      fVar63 = *pfVar41;
      pfVar46 = pfVar41 + 4;
      fVar53 = *local_res18;
      fVar54 = *local_338;
      pfVar41 = pfVar12;
      if (pfVar46 < pfVar18) {
        pfVar41 = pfVar46;
      }
      pfVar46 = local_res18 + 4;
      local_res18 = pfVar12 + 1;
      if (pfVar46 < pfVar18) {
        local_res18 = pfVar46;
      }
      pfVar46 = local_338 + 4;
      local_338 = pfVar12 + 2;
      if (pfVar46 < pfVar18) {
        local_338 = pfVar46;
      }
      fVar62 = fVar63 * fVar21 + fVar62 * fVar25;
      fVar64 = fVar53 * fVar22 + fVar64 * fVar26;
      fVar65 = fVar54 * fVar23 + fVar65 * fVar27;
      fVar66 = *local_res20 * fVar24 + fVar66 * fVar28;
      pfVar46 = local_res20 + 4;
      local_res20 = pfVar12 + 3;
      if (pfVar46 < pfVar18) {
        local_res20 = pfVar46;
      }
      fVar63 = *local_308;
      pfVar46 = local_308 + 4;
      fVar53 = *local_330;
      fVar54 = *local_368;
      fVar56 = *local_360;
      local_308 = pfVar13;
      if (pfVar46 < pfVar16) {
        local_308 = pfVar46;
      }
      pfVar46 = local_368 + 4;
      local_368 = pfVar13 + 1;
      if (pfVar46 < pfVar16) {
        local_368 = pfVar46;
      }
      pfVar46 = local_330 + 4;
      local_330 = pfVar13 + 2;
      if (pfVar46 < pfVar16) {
        local_330 = pfVar46;
      }
      pfVar46 = local_360 + 4;
      local_360 = pfVar13 + 3;
      if (pfVar46 < pfVar16) {
        local_360 = pfVar46;
      }
      local_208 = (float)uVar35;
      fStack_204 = (float)((ulonglong)uVar35 >> 0x20);
      fStack_200 = (float)uVar36;
      fStack_1fc = (float)((ulonglong)uVar36 >> 0x20);
      fVar4 = *local_358;
      fVar5 = *local_328;
      local_218 = (float)uVar29;
      fStack_214 = (float)((ulonglong)uVar29 >> 0x20);
      fStack_210 = (float)uVar30;
      fStack_20c = (float)((ulonglong)uVar30 >> 0x20);
      fVar6 = *local_310;
      fVar52 = fVar63 * local_218 + local_208 * (float)local_2a8;
      fVar54 = fVar54 * fStack_214 + fStack_204 * local_2a8._4_4_;
      fVar55 = fVar53 * fStack_210 + fStack_200 * (float)uStack_2a0;
      fVar56 = fVar56 * fStack_20c + fStack_1fc * uStack_2a0._4_4_;
      pfVar46 = local_310 + 4;
      local_2a8 = CONCAT44(fVar54,fVar52);
      uStack_2a0 = CONCAT44(fVar56,fVar55);
      local_1e8 = (float)uVar37;
      fStack_1e4 = (float)((ulonglong)uVar37 >> 0x20);
      fStack_1e0 = (float)uVar38;
      fStack_1dc = (float)((ulonglong)uVar38 >> 0x20);
      local_310 = pfVar14;
      if (pfVar46 < pfVar19) {
        local_310 = pfVar46;
      }
      pfVar46 = local_328 + 4;
      local_1f8 = (float)uVar31;
      fStack_1f4 = (float)((ulonglong)uVar31 >> 0x20);
      fStack_1f0 = (float)uVar32;
      fStack_1ec = (float)((ulonglong)uVar32 >> 0x20);
      local_328 = pfVar14 + 1;
      if (pfVar46 < pfVar19) {
        local_328 = pfVar46;
      }
      pfVar46 = local_358 + 4;
      local_358 = pfVar14 + 2;
      if (pfVar46 < pfVar19) {
        local_358 = pfVar46;
      }
      pfVar46 = local_350 + 4;
      local_2b8 = fVar6 * local_1f8 + local_1e8 * local_2b8;
      fStack_2b4 = fVar5 * fStack_1f4 + fStack_1e4 * fStack_2b4;
      fStack_2b0 = fVar4 * fStack_1f0 + fStack_1e0 * fStack_2b0;
      fStack_2ac = *local_350 * fStack_1ec + fStack_1dc * fStack_2ac;
      local_350 = pfVar14 + 3;
      if (pfVar46 < pfVar19) {
        local_350 = pfVar46;
      }
      fVar63 = *local_348;
      fVar53 = *local_320;
      pfVar46 = local_320 + 4;
      fVar4 = *local_318;
      local_1c8 = (float)uVar39;
      fStack_1c4 = (float)((ulonglong)uVar39 >> 0x20);
      fStack_1c0 = (float)uVar40;
      fStack_1bc = (float)((ulonglong)uVar40 >> 0x20);
      local_320 = pfVar15;
      if (pfVar46 < pfVar20) {
        local_320 = pfVar46;
      }
      pfVar46 = local_318 + 4;
      local_1d8 = (float)uVar33;
      fStack_1d4 = (float)((ulonglong)uVar33 >> 0x20);
      fStack_1d0 = (float)uVar34;
      fStack_1cc = (float)((ulonglong)uVar34 >> 0x20);
      local_318 = pfVar15 + 1;
      if (pfVar46 < pfVar20) {
        local_318 = pfVar46;
      }
      pfVar46 = local_348 + 4;
      local_348 = pfVar15 + 2;
      if (pfVar46 < pfVar20) {
        local_348 = pfVar46;
      }
      pfVar46 = local_340 + 4;
      local_2c8 = fVar53 * local_1d8 + local_1c8 * local_2c8;
      fStack_2c4 = fVar4 * fStack_1d4 + fStack_1c4 * fStack_2c4;
      fStack_2c0 = fVar63 * fStack_1d0 + fStack_1c0 * fStack_2c0;
      fStack_2bc = *local_340 * fStack_1cc + fStack_1bc * fStack_2bc;
      local_340 = pfVar15 + 3;
      if (pfVar46 < pfVar20) {
        local_340 = pfVar46;
      }
      uVar9 = *(ushort *)(param_2 + 2);
      fVar63 = local_300[(uint)uVar9 + (uint)uVar9];
      fVar53 = *local_300;
      fVar4 = local_300[(uint)uVar9 + (uint)uVar9 * 4];
      fVar5 = local_300[uVar9];
      fVar6 = local_300[(uint)uVar9 + (uint)uVar9 * 2];
      fVar7 = local_300[(uint)uVar9 * 4];
      local_268 = local_268 + fVar49 * (1.0 / (float)uVar8);
      local_288 = local_288 + fVar50 * (1.0 / (float)uVar8);
      fVar58 = fStack_2bc + fVar56 + fVar66 + fStack_2ac + fStack_2c4 + fVar54 + fVar64 + fStack_2b4
               + fStack_2c0 + fVar55 + fVar65 + fStack_2b0 + local_2c8 + fVar52 + fVar62 + local_2b8
      ;
      *local_300 = fVar53 * local_268 +
                   (fStack_2c4 * -1.0 + fVar64 * -1.0 + fVar54 * -1.0 + fStack_2b4 * -1.0 +
                    fStack_2bc * -1.0 + fVar66 * -1.0 + fVar56 * -1.0 + fStack_2ac * -1.0 +
                   local_2c8 * 1.0 + fVar62 * 1.0 + fVar52 * 1.0 + local_2b8 * 1.0 +
                   fStack_2c0 * 1.0 + fVar65 * 1.0 + fVar55 * 1.0 + fStack_2b0 * 1.0) * local_288;
      local_300[*(ushort *)(param_2 + 2)] =
           fVar5 * local_268 +
           (fVar64 * 1.0 + fVar54 * 1.0 + fStack_2b4 * 1.0 + fStack_2c4 * 1.0 +
            fVar66 * -1.0 + fVar56 * -1.0 + fStack_2ac * -1.0 + fStack_2bc * -1.0 +
           fVar62 * 1.0 + fVar52 * 1.0 + local_2b8 * 1.0 + local_2c8 * 1.0 +
           fVar65 * -1.0 + fVar55 * -1.0 + fStack_2b0 * -1.0 + fStack_2c0 * -1.0) * local_288;
      local_300[(ulonglong)*(ushort *)(param_2 + 2) * 2] =
           fVar63 * local_268 +
           (fStack_2c4 * 1.0 + fVar64 * 1.0 + fVar54 * 1.0 + fStack_2b4 * 1.0 +
            fStack_2bc * -1.0 + fVar66 * -1.0 + fVar56 * -1.0 + fStack_2ac * -1.0 +
           local_2c8 * -1.0 + fVar62 * -1.0 + fVar52 * -1.0 + local_2b8 * -1.0 +
           fStack_2c0 * 1.0 + fVar65 * 1.0 + fVar55 * 1.0 + fStack_2b0 * 1.0) * local_288;
      local_300[(ulonglong)*(ushort *)(param_2 + 2) * 5] =
           fVar4 * local_268 +
           (fStack_2c4 * -1.0 + fVar64 * 1.0 + fVar54 * -1.0 + fStack_2b4 * 1.0 +
            fStack_2bc * 1.0 + fVar66 * -1.0 + fVar56 * 1.0 + fStack_2ac * -1.0 +
           local_2c8 * -1.0 + fVar62 * 1.0 + fVar52 * -1.0 + local_2b8 * 1.0 +
           fStack_2c0 * 1.0 + fVar65 * -1.0 + fVar55 * 1.0 + fStack_2b0 * -1.0) * local_288;
      local_300[(ulonglong)*(ushort *)(param_2 + 2) * 3] =
           fVar6 * local_268 +
           (fVar64 * -1.0 + fVar54 * 1.0 + fStack_2b4 * -1.0 + fStack_2c4 * 1.0 +
            fVar66 * 1.0 + fVar56 * 1.0 + fStack_2ac * 1.0 + fStack_2bc * -1.0 +
           fVar62 * -1.0 + fVar52 * 1.0 + local_2b8 * -1.0 + local_2c8 * 1.0 +
           fVar65 * -1.0 + fVar55 * -1.0 + fStack_2b0 * 1.0 + fStack_2c0 * -1.0) * local_288;
      fVar59 = fVar58 * fVar51;
      fVar60 = fVar58 * fVar51;
      fVar61 = fVar58 * fVar51;
      fVar58 = fVar58 * fVar51;
      fVar63 = fVar63 + fVar4 + fVar7 + fVar53 + fVar5 + fVar6;
      local_300[(ulonglong)*(ushort *)(param_2 + 2) * 4] =
           fVar7 * local_268 +
           (fStack_2c4 * 1.0 + fVar64 * -1.0 + fVar54 * 1.0 + fStack_2b4 * -1.0 +
            fStack_2bc * 1.0 + fVar66 * -1.0 + fVar56 * -1.0 + fStack_2ac * 1.0 +
           local_2c8 * -1.0 + fVar62 * 1.0 + fVar52 * 1.0 + local_2b8 * 1.0 +
           fStack_2c0 * -1.0 + fVar65 * -1.0 + fVar55 * 1.0 + fStack_2b0 * -1.0) * local_288;
      local_300 = local_300 + 1;
      local_258 = (fVar3 * local_258 + fVar63) - fVar57;
      fVar53 = local_258;
      if (pfVar11 != (float *)0x0) {
        fVar53 = *pfVar48;
        pfVar46 = pfVar48 + 1;
        *pfVar48 = local_258;
        pfVar48 = pfVar11;
        if (pfVar46 != pfVar17) {
          pfVar48 = pfVar46;
        }
      }
      fVar57 = fVar1 * fVar53 + fVar2 * local_238;
      *pfVar42 = fVar57 + fVar60 + fVar64;
      pfVar42[1] = fVar57 + fVar61 + fVar65;
      pfVar42[2] = fVar57 + fVar58 + fVar66;
      pfVar42[3] = fVar57 + fVar52 + fVar59;
      pfVar46 = pfVar42 + 4;
      *pfVar43 = fVar57 + fVar54 + fVar60;
      pfVar43[1] = fVar57 + fVar55 + fVar61;
      pfVar43[2] = fVar57 + fVar56 + fVar58;
      pfVar43[3] = fVar57 + local_2b8 + fVar59;
      pfVar42 = pfVar12;
      if (pfVar46 < pfVar18) {
        pfVar42 = pfVar46;
      }
      pfVar46 = pfVar43 + 4;
      pfVar43 = pfVar13;
      if (pfVar46 < pfVar16) {
        pfVar43 = pfVar46;
      }
      *pfVar44 = fVar57 + fStack_2b4 + fVar60;
      pfVar44[1] = fVar57 + fStack_2b0 + fVar61;
      pfVar44[2] = fVar57 + fStack_2ac + fVar58;
      pfVar44[3] = fVar57 + local_2c8 + fVar59;
      pfVar46 = pfVar44 + 4;
      *pfVar45 = fVar57 + fStack_2c4 + fVar60;
      pfVar45[1] = fVar57 + fStack_2c0 + fVar61;
      pfVar45[2] = fVar57 + fStack_2bc + fVar58;
      pfVar45[3] = fVar57 + fVar59 + fVar62;
      pfVar44 = pfVar14;
      if (pfVar46 < pfVar19) {
        pfVar44 = pfVar46;
      }
      pfVar46 = pfVar45 + 4;
      pfVar45 = pfVar15;
      if (pfVar46 < pfVar20) {
        pfVar45 = pfVar46;
      }
      uVar47 = uVar47 - 1;
      local_238 = fVar53;
      fVar57 = fVar63;
    } while (uVar47 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar53;
  *(float *)(param_1 + 0x230) = fVar63;
  *(float *)(param_1 + 0x234) = local_258;
  *(float **)(param_1 + 0xb0) = local_308;
  *(float **)(param_1 + 0xb8) = local_368;
  *(float **)(param_1 + 0xc0) = local_330;
  *(float **)(param_1 + 200) = local_360;
  *(float **)(param_1 + 0xd8) = local_328;
  *(float **)(param_1 + 0xe0) = local_358;
  *(float **)(param_1 + 0xe8) = local_350;
  *(float **)(param_1 + 0xf0) = local_320;
  *(float **)(param_1 + 0x90) = pfVar41;
  *(float **)(param_1 + 0xf8) = local_318;
  *(float **)(param_1 + 0x98) = local_res18;
  *(float **)(param_1 + 0x100) = local_348;
  *(float **)(param_1 + 0x140) = pfVar44;
  *(float **)(param_1 + 0xa0) = local_338;
  *(float *)(param_1 + 0x1f0) = fVar62;
  *(float *)(param_1 + 500) = fVar64;
  *(float *)(param_1 + 0x1f8) = fVar65;
  *(float *)(param_1 + 0x1fc) = fVar66;
  *(float **)(param_1 + 0x108) = local_340;
  *(float **)(param_1 + 0x30) = pfVar48;
  *(undefined8 *)(param_1 + 0x200) = local_2a8;
  *(undefined8 *)(param_1 + 0x208) = uStack_2a0;
  *(float *)(param_1 + 0x210) = local_2b8;
  *(float *)(param_1 + 0x214) = fStack_2b4;
  *(float *)(param_1 + 0x218) = fStack_2b0;
  *(float *)(param_1 + 0x21c) = fStack_2ac;
  *(float *)(param_1 + 0x220) = local_2c8;
  *(float *)(param_1 + 0x224) = fStack_2c4;
  *(float *)(param_1 + 0x228) = fStack_2c0;
  *(float *)(param_1 + 0x22c) = fStack_2bc;
  *(float **)(param_1 + 0x130) = pfVar42;
  *(float **)(param_1 + 0x138) = pfVar43;
  *(float **)(param_1 + 0x148) = pfVar45;
  *(float **)(param_1 + 0xa8) = local_res20;
  *(float **)(param_1 + 0xd0) = local_310;
  return;
}



// FUNCTION 145108660 FUN_145108660 body=1407 status=ok
// SIG undefined FUN_145108660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145108660(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  ulonglong uVar16;
  float *pfVar17;
  uint uVar18;
  float *pfVar19;
  longlong lVar20;
  uint uVar21;
  float *pfVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint local_res10;
  ulonglong local_res18;
  undefined8 auStack_180 [5];
  undefined8 local_158;
  undefined8 local_150;
  float *local_148;
  float *pfStack_140;
  float *local_138;
  float *pfStack_130;
  float *local_128;
  float *local_120;
  float *local_118;
  float *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  fVar35 = *(float *)(param_1 + 0x240);
  fVar34 = *(float *)(param_1 + 0x23c);
  uVar6 = *(uint *)(param_1 + 0x254);
  fVar33 = *(float *)(param_1 + 0x234);
  lVar20 = *param_2;
  pfVar17 = *(float **)(param_1 + 0x98);
  pfVar23 = *(float **)(param_1 + 0xa0);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar4 = *(float *)(param_1 + 0x238);
  fVar28 = *(float *)(param_1 + 0x4c);
  fVar25 = *(float *)(param_1 + 0x230);
  fVar38 = *(float *)(lVar7 + 0x10) - fVar34;
  pfVar14 = *(float **)(param_1 + 0xa8);
  fVar39 = *(float *)(lVar7 + 0x14) - fVar35;
  fVar29 = *(float *)(param_1 + 0x1f0);
  fVar30 = *(float *)(param_1 + 500);
  fVar31 = *(float *)(param_1 + 0x1f8);
  fVar32 = *(float *)(param_1 + 0x1fc);
  uVar5 = *(ushort *)(param_2 + 2);
  pfVar19 = *(float **)(param_1 + 0x90);
  fVar37 = -2.0 / (float)*(uint *)(lVar7 + 0x18);
  local_118 = *(float **)(param_1 + 0x28);
  local_158 = *(float **)(param_1 + 0x30);
  local_110 = *(float **)(param_1 + 0x38);
  pfStack_140 = *(float **)(param_1 + 0x110);
  pfVar8 = *(float **)(param_1 + 0x150);
  local_150 = *(float **)(param_1 + 0x130);
  local_res10 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar11 = uVar6 - 1;
  local_108 = *(undefined8 *)(param_1 + 0x170);
  uStack_100 = *(undefined8 *)(param_1 + 0x178);
  local_f8 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(int *)(lVar7 + 0x20) == 0) {
    local_148 = (float *)(&DAT_149c2a7c0 + (ulonglong)uVar11 * 0x40);
  }
  else {
    local_148 = (float *)&DAT_149c2abc0;
  }
  local_res18 = (ulonglong)uVar11;
  uVar16 = (ulonglong)uVar6 * 0x10;
  uVar12 = uVar16 + 0xf;
  if (uVar12 <= uVar16) {
    uVar12 = 0xffffffffffffff0;
  }
  lVar7 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = uVar16 + 0xf;
  pfVar1 = (float *)((longlong)&local_158 + lVar7);
  if (uVar12 <= uVar16) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_180 + lVar7) = 0x145108893;
  lVar10 = (lVar7 - (uVar12 & 0xfffffffffffffff0)) + -0x158;
  pfVar22 = local_150;
  local_138 = pfVar23;
  if (local_res10 != 0) {
    pfStack_130 = pfStack_140 + 1;
    local_128 = pfStack_140 + 2;
    local_120 = pfStack_140 + 3;
    local_150 = pfVar14;
    pfVar23 = local_158;
    fVar26 = fVar25;
    fVar36 = fVar28;
    do {
      fVar28 = *pfVar17;
      local_158 = pfStack_140;
      if (pfVar19 + 4 < pfVar8) {
        local_158 = pfVar19 + 4;
      }
      pfVar14 = pfVar17 + 4;
      fVar25 = *local_138;
      pfVar17 = pfStack_130;
      if (pfVar14 < pfVar8) {
        pfVar17 = pfVar14;
      }
      fVar27 = *local_150;
      pfVar14 = local_128;
      if (local_138 + 4 < pfVar8) {
        pfVar14 = local_138 + 4;
      }
      local_138 = pfVar14;
      pfVar14 = local_120;
      if (local_150 + 4 < pfVar8) {
        pfVar14 = local_150 + 4;
      }
      local_150 = pfVar14;
      fVar29 = *pfVar19 * (float)local_108 + fVar29 * (float)local_f8;
      fVar30 = fVar28 * local_108._4_4_ + fVar30 * local_f8._4_4_;
      fVar31 = fVar25 * (float)uStack_100 + fVar31 * (float)uStack_f0;
      fVar32 = fVar27 * uStack_100._4_4_ + fVar32 * uStack_f0._4_4_;
      uVar12 = 0;
      do {
        lVar13 = uVar12 * 0x40;
        uVar18 = (int)uVar12 + 1;
        fVar28 = *(float *)(&UNK_149c2a7c4 + lVar13);
        fVar25 = *(float *)(&UNK_149c2a7c8 + lVar13);
        fVar27 = *(float *)(&UNK_149c2a7cc + lVar13);
        pfVar14 = (float *)((longlong)&local_158 + uVar12 * 0x10 + lVar10 + 0x158);
        *pfVar14 = fVar29 * *(float *)(&DAT_149c2a7c0 + lVar13);
        pfVar14[1] = fVar30 * fVar28;
        pfVar14[2] = fVar31 * fVar25;
        pfVar14[3] = fVar32 * fVar27;
        uVar12 = (ulonglong)uVar18;
      } while (uVar18 < uVar11);
      fVar28 = local_148[1];
      fVar25 = local_148[2];
      fVar27 = local_148[3];
      uVar21 = 0;
      pfVar14 = (float *)((longlong)&local_158 + (ulonglong)uVar18 * 0x10 + lVar10 + 0x158);
      *pfVar14 = fVar29 * *local_148;
      pfVar14[1] = fVar30 * fVar28;
      pfVar14[2] = fVar31 * fVar25;
      pfVar14[3] = fVar32 * fVar27;
      do {
        uVar18 = *(ushort *)(param_2 + 2) * uVar21;
        uVar12 = (ulonglong)uVar21;
        uVar21 = uVar21 + 1;
        *(undefined1 (*) [16])(pfVar1 + uVar12 * 4) =
             ZEXT416(*(uint *)(lVar20 + (ulonglong)uVar18 * 4));
        pfVar14 = (float *)((longlong)&local_158 + uVar12 * 0x10 + lVar10 + 0x158);
        fVar28 = pfVar14[2];
        fVar25 = pfVar14[3];
        fVar27 = pfVar14[1] + fVar25;
        pfVar19 = (float *)((longlong)&local_158 + uVar12 * 0x10 + lVar10 + 0x158);
        *pfVar19 = fVar27 + *pfVar14 + fVar28;
        pfVar19[1] = fVar27 + fVar27;
        pfVar19[2] = fVar27 + fVar28 + fVar28;
        pfVar19[3] = fVar27 + fVar25 + fVar25;
      } while (uVar21 < uVar6);
      fVar34 = fVar34 + fVar38 * (1.0 / (float)uVar5);
      fVar35 = fVar35 + fVar39 * (1.0 / (float)uVar5);
      uVar12 = 0;
      fVar27 = fVar32 + fVar30 + fVar31 + fVar29;
      do {
        iVar15 = (int)uVar12;
        pfVar14 = pfVar1 + uVar12 * 4;
        fVar28 = pfVar14[1];
        fVar25 = pfVar14[2];
        fVar9 = pfVar14[3];
        fVar24 = *pfVar14 * fVar34 +
                 *(float *)((longlong)&local_158 + uVar12 * 0x10 + lVar10 + 0x158) * fVar35;
        pfVar14 = (float *)((longlong)&local_158 + uVar12 * 0x10 + lVar10 + 0x158);
        *pfVar14 = fVar24;
        pfVar14[1] = fVar28;
        pfVar14[2] = fVar25;
        pfVar14[3] = fVar9;
        uVar18 = iVar15 + 1;
        uVar12 = (ulonglong)uVar18;
        *(float *)(lVar20 + (ulonglong)((uint)*(ushort *)(param_2 + 2) * iVar15) * 4) = fVar24;
      } while (uVar18 < uVar6);
      fVar25 = *pfVar1;
      lVar20 = lVar20 + 4;
      if (1 < uVar6) {
        pfVar14 = (float *)((longlong)&local_148 + lVar7);
        uVar12 = local_res18;
        do {
          fVar25 = fVar25 + *pfVar14;
          pfVar14 = pfVar14 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      fVar33 = (fVar4 * fVar33 + fVar25) - fVar26;
      fVar28 = fVar33;
      if (local_118 != (float *)0x0) {
        fVar28 = *pfVar23;
        pfVar14 = pfVar23 + 1;
        *pfVar23 = fVar33;
        pfVar23 = local_118;
        if (pfVar14 != local_110) {
          pfVar23 = pfVar14;
        }
      }
      pfVar14 = pfVar22 + 4;
      fVar26 = fVar2 * fVar28 + fVar3 * fVar36;
      *pfVar22 = fVar26 + fVar27 * fVar37 + fVar30;
      pfVar22[1] = fVar26 + fVar27 * fVar37 + fVar31;
      pfVar22[2] = fVar26 + fVar27 * fVar37 + fVar32;
      pfVar22[3] = fVar26 + fVar27 * fVar37 + fVar29;
      pfVar22 = pfStack_140;
      if (pfVar14 < pfVar8) {
        pfVar22 = pfVar14;
      }
      local_res10 = local_res10 - 1;
      pfVar19 = local_158;
      pfVar14 = local_150;
      fVar26 = fVar25;
      fVar36 = fVar28;
      local_158 = pfVar23;
    } while (local_res10 != 0);
  }
  *(float *)(param_1 + 0x4c) = fVar28;
  *(float *)(param_1 + 0x230) = fVar25;
  *(float *)(param_1 + 0x234) = fVar33;
  *(float **)(param_1 + 0x30) = local_158;
  *(float *)(param_1 + 0x1f0) = fVar29;
  *(float *)(param_1 + 500) = fVar30;
  *(float *)(param_1 + 0x1f8) = fVar31;
  *(float *)(param_1 + 0x1fc) = fVar32;
  *(float **)(param_1 + 0x130) = pfVar22;
  *(float **)(param_1 + 0x90) = pfVar19;
  *(float **)(param_1 + 0x98) = pfVar17;
  *(float **)(param_1 + 0xa0) = local_138;
  *(float **)(param_1 + 0xa8) = pfVar14;
  return;
}



// FUNCTION 145108be0 FUN_145108be0 body=1939 status=ok
// SIG undefined FUN_145108be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145108be0(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  float *pfVar21;
  float *pfVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 auStack_1f0 [5];
  undefined8 local_1c8;
  undefined8 local_1c0;
  float *local_1b8;
  float *pfStack_1b0;
  float *local_1a8;
  float *pfStack_1a0;
  float *local_198;
  float *local_190;
  float *local_180;
  float *local_178;
  float *local_170;
  float *local_168;
  float *local_160;
  float *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  local_108 = *(float *)(param_1 + 0x44);
  fVar45 = *(float *)(param_1 + 0x23c);
  fVar46 = *(float *)(param_1 + 0x240);
  fVar36 = *(float *)(param_1 + 0x234);
  pfVar17 = *(float **)(param_1 + 0x138);
  lVar24 = *param_2;
  pfVar29 = *(float **)(param_1 + 0x30);
  fVar47 = *(float *)(lVar6 + 0x10) - fVar45;
  fVar2 = *(float *)(param_1 + 0x238);
  fVar48 = *(float *)(lVar6 + 0x14) - fVar46;
  fVar32 = *(float *)(param_1 + 0x4c);
  fVar34 = *(float *)(param_1 + 0x230);
  fStack_104 = local_108;
  fStack_100 = local_108;
  fStack_fc = local_108;
  local_f8 = *(float *)(param_1 + 0x48);
  fStack_f4 = local_f8;
  fStack_f0 = local_f8;
  fStack_ec = local_f8;
  uVar4 = *(ushort *)(param_2 + 2);
  pfVar16 = *(float **)(param_1 + 0x130);
  local_178 = pfVar17;
  fVar49 = -2.0 / (float)*(uint *)(lVar6 + 0x18);
  local_160 = *(float **)(param_1 + 0x28);
  local_158 = *(float **)(param_1 + 0x38);
  local_180 = *(float **)(param_1 + 0x110);
  local_1c0 = *(float **)(param_1 + 0x118);
  local_1c8 = *(float **)(param_1 + 0x150);
  local_1b8 = *(float **)(param_1 + 0x158);
  pfStack_1b0 = *(float **)(param_1 + 0x90);
  local_170 = *(float **)(param_1 + 0x98);
  local_168 = *(float **)(param_1 + 0xa0);
  local_1a8 = *(float **)(param_1 + 0xa8);
  pfStack_1a0 = *(float **)(param_1 + 0xb0);
  local_198 = *(float **)(param_1 + 0xb8);
  pfVar21 = *(float **)(param_1 + 0xc0);
  pfVar22 = *(float **)(param_1 + 200);
  uVar5 = *(uint *)(param_1 + 0x254);
  fVar37 = *(float *)(param_1 + 0x1f0);
  fVar38 = *(float *)(param_1 + 500);
  fVar39 = *(float *)(param_1 + 0x1f8);
  fVar40 = *(float *)(param_1 + 0x1fc);
  fVar41 = *(float *)(param_1 + 0x200);
  fVar42 = *(float *)(param_1 + 0x204);
  fVar43 = *(float *)(param_1 + 0x208);
  fVar44 = *(float *)(param_1 + 0x20c);
  local_148 = *(undefined8 *)(param_1 + 0x170);
  uStack_140 = *(undefined8 *)(param_1 + 0x178);
  uVar23 = uVar5 - 1;
  local_128 = *(undefined8 *)(param_1 + 0x180);
  uStack_120 = *(undefined8 *)(param_1 + 0x188);
  local_138 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_130 = *(undefined8 *)(param_1 + 0x1b8);
  uVar13 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_118 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_110 = *(undefined8 *)(param_1 + 0x1c8);
  if (*(int *)(lVar6 + 0x20) == 0) {
    local_190 = (float *)(&DAT_149c2a7c0 + (ulonglong)uVar23 * 0x40);
  }
  else {
    local_190 = (float *)&DAT_149c2abc0;
  }
  uVar19 = (ulonglong)uVar5 * 0x10;
  uVar14 = uVar19 + 0xf;
  if (uVar14 <= uVar19) {
    uVar14 = 0xffffffffffffff0;
  }
  lVar6 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = uVar19 + 0xf;
  pfVar1 = (float *)((longlong)&local_1c8 + lVar6);
  if (uVar14 <= uVar19) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_1f0 + lVar6) = 0x145108e9c;
  lVar8 = (lVar6 - (uVar14 & 0xfffffffffffffff0)) + -0x1c8;
  pfVar27 = local_170;
  pfVar28 = local_168;
  uVar9 = local_148;
  uVar10 = uStack_140;
  uVar11 = local_138;
  uVar12 = uStack_130;
  for (; uVar13 != 0; uVar13 = uVar13 - 1) {
    fVar33 = *pfVar27;
    fVar31 = *pfVar28;
    fVar35 = *pfStack_1b0;
    fVar3 = *local_1a8;
    pfVar17 = local_180;
    if (pfStack_1b0 + 4 < local_1c8) {
      pfVar17 = pfStack_1b0 + 4;
    }
    local_138._0_4_ = (float)uVar11;
    local_138._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
    uStack_130._0_4_ = (float)uVar12;
    uStack_130._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
    pfVar26 = pfVar27 + 4;
    pfVar27 = local_180 + 1;
    if (pfVar26 < local_1c8) {
      pfVar27 = pfVar26;
    }
    pfVar26 = pfVar28 + 4;
    pfStack_1b0 = pfVar17;
    local_148._0_4_ = (float)uVar9;
    local_148._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
    uStack_140._0_4_ = (float)uVar10;
    uStack_140._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    pfVar28 = local_180 + 2;
    if (pfVar26 < local_1c8) {
      pfVar28 = pfVar26;
    }
    pfVar17 = local_180 + 3;
    if (local_1a8 + 4 < local_1c8) {
      pfVar17 = local_1a8 + 4;
    }
    local_1a8 = pfVar17;
    fVar37 = fVar35 * (float)local_148 + (float)local_138 * fVar37;
    fVar38 = fVar33 * local_148._4_4_ + local_138._4_4_ * fVar38;
    fVar39 = fVar31 * (float)uStack_140 + (float)uStack_130 * fVar39;
    fVar40 = fVar3 * uStack_140._4_4_ + uStack_130._4_4_ * fVar40;
    uVar14 = 0;
    local_148 = uVar9;
    uStack_140 = uVar10;
    local_138 = uVar11;
    uStack_130 = uVar12;
    do {
      lVar15 = uVar14 * 0x40;
      uVar20 = (int)uVar14 + 1;
      fVar33 = *(float *)(&UNK_149c2a7c4 + lVar15);
      fVar31 = *(float *)(&UNK_149c2a7c8 + lVar15);
      fVar35 = *(float *)(&UNK_149c2a7cc + lVar15);
      pfVar17 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar8 + 0x1c8);
      *pfVar17 = fVar37 * *(float *)(&DAT_149c2a7c0 + lVar15);
      pfVar17[1] = fVar38 * fVar33;
      pfVar17[2] = fVar39 * fVar31;
      pfVar17[3] = fVar40 * fVar35;
      uVar14 = (ulonglong)uVar20;
    } while (uVar20 < uVar23);
    fVar33 = local_190[1];
    fVar31 = local_190[2];
    fVar35 = local_190[3];
    pfVar17 = (float *)((longlong)&local_1c8 + (ulonglong)uVar20 * 0x10 + lVar8 + 0x1c8);
    *pfVar17 = fVar37 * *local_190;
    pfVar17[1] = fVar38 * fVar33;
    pfVar17[2] = fVar39 * fVar31;
    pfVar17[3] = fVar40 * fVar35;
    fVar33 = *local_198;
    fVar31 = *pfStack_1a0;
    fVar35 = *pfVar21;
    pfVar17 = local_1c0;
    if (pfStack_1a0 + 4 < local_1b8) {
      pfVar17 = pfStack_1a0 + 4;
    }
    pfStack_1a0 = pfVar17;
    pfVar17 = local_1c0 + 1;
    if (local_198 + 4 < local_1b8) {
      pfVar17 = local_198 + 4;
    }
    pfVar26 = pfVar21 + 4;
    local_198 = pfVar17;
    pfVar21 = local_1c0 + 2;
    if (pfVar26 < local_1b8) {
      pfVar21 = pfVar26;
    }
    fVar41 = fVar31 * (float)local_128 + (float)local_118 * fVar41;
    fVar42 = fVar33 * local_128._4_4_ + local_118._4_4_ * fVar42;
    fVar43 = fVar35 * (float)uStack_120 + (float)uStack_110 * fVar43;
    fVar44 = *pfVar22 * uStack_120._4_4_ + uStack_110._4_4_ * fVar44;
    pfVar17 = pfVar22 + 4;
    pfVar22 = local_1c0 + 3;
    if (pfVar17 < local_1b8) {
      pfVar22 = pfVar17;
    }
    uVar14 = 0;
    do {
      lVar15 = uVar14 * 0x40;
      uVar20 = (int)uVar14 + 1;
      fVar33 = *(float *)(&UNK_149c2a7d4 + lVar15);
      fVar31 = *(float *)(&UNK_149c2a7d8 + lVar15);
      fVar35 = *(float *)(&UNK_149c2a7dc + lVar15);
      pfVar17 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar8 + 0x1c8);
      fVar3 = pfVar17[1];
      fVar30 = pfVar17[2];
      fVar7 = pfVar17[3];
      pfVar26 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar8 + 0x1c8);
      *pfVar26 = fVar41 * *(float *)(&DAT_149c2a7d0 + lVar15) + *pfVar17;
      pfVar26[1] = fVar42 * fVar33 + fVar3;
      pfVar26[2] = fVar43 * fVar31 + fVar30;
      pfVar26[3] = fVar44 * fVar35 + fVar7;
      uVar14 = (ulonglong)uVar20;
    } while (uVar20 < uVar23);
    fVar33 = local_190[5];
    fVar31 = local_190[6];
    fVar35 = local_190[7];
    uVar25 = 0;
    pfVar17 = (float *)((longlong)&local_1c8 + (ulonglong)uVar20 * 0x10 + lVar8 + 0x1c8);
    fVar3 = pfVar17[1];
    fVar30 = pfVar17[2];
    fVar7 = pfVar17[3];
    pfVar26 = (float *)((longlong)&local_1c8 + (ulonglong)uVar20 * 0x10 + lVar8 + 0x1c8);
    *pfVar26 = fVar41 * local_190[4] + *pfVar17;
    pfVar26[1] = fVar42 * fVar33 + fVar3;
    pfVar26[2] = fVar43 * fVar31 + fVar30;
    pfVar26[3] = fVar44 * fVar35 + fVar7;
    do {
      uVar20 = *(ushort *)(param_2 + 2) * uVar25;
      uVar14 = (ulonglong)uVar25;
      uVar25 = uVar25 + 1;
      *(undefined1 (*) [16])(pfVar1 + uVar14 * 4) =
           ZEXT416(*(uint *)(lVar24 + (ulonglong)uVar20 * 4));
      pfVar17 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar8 + 0x1c8);
      fVar33 = pfVar17[2];
      fVar31 = pfVar17[3];
      fVar35 = pfVar17[1] + fVar31;
      pfVar26 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar8 + 0x1c8);
      *pfVar26 = fVar35 + *pfVar17 + fVar33;
      pfVar26[1] = fVar35 + fVar35;
      pfVar26[2] = fVar35 + fVar33 + fVar33;
      pfVar26[3] = fVar35 + fVar31 + fVar31;
    } while (uVar25 < uVar5);
    fVar45 = fVar45 + fVar47 * (1.0 / (float)uVar4);
    fVar46 = fVar46 + fVar48 * (1.0 / (float)uVar4);
    uVar14 = 0;
    fVar33 = fVar44 + fVar40 + fVar42 + fVar38 + fVar43 + fVar39 + fVar41 + fVar37;
    do {
      iVar18 = (int)uVar14;
      pfVar17 = pfVar1 + uVar14 * 4;
      fVar31 = pfVar17[1];
      fVar35 = pfVar17[2];
      fVar3 = pfVar17[3];
      fVar30 = *pfVar17 * fVar45 +
               *(float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar8 + 0x1c8) * fVar46;
      pfVar17 = (float *)((longlong)&local_1c8 + uVar14 * 0x10 + lVar8 + 0x1c8);
      *pfVar17 = fVar30;
      pfVar17[1] = fVar31;
      pfVar17[2] = fVar35;
      pfVar17[3] = fVar3;
      uVar20 = iVar18 + 1;
      uVar14 = (ulonglong)uVar20;
      *(float *)(lVar24 + (ulonglong)((uint)*(ushort *)(param_2 + 2) * iVar18) * 4) = fVar30;
    } while (uVar20 < uVar5);
    lVar24 = lVar24 + 4;
    fVar31 = *pfVar1;
    if (1 < uVar5) {
      pfVar17 = (float *)((longlong)&local_1b8 + lVar6);
      uVar14 = (ulonglong)uVar23;
      do {
        fVar31 = fVar31 + *pfVar17;
        pfVar17 = pfVar17 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    fVar36 = (fVar2 * fVar36 + fVar31) - fVar34;
    fVar34 = fVar36;
    if (local_160 != (float *)0x0) {
      fVar34 = *pfVar29;
      pfVar17 = pfVar29 + 1;
      *pfVar29 = fVar36;
      pfVar29 = local_160;
      if (pfVar17 != local_158) {
        pfVar29 = pfVar17;
      }
    }
    fVar32 = local_108 * fVar34 + local_f8 * fVar32;
    *pfVar16 = fVar32 + fVar33 * fVar49 + fVar38;
    pfVar16[1] = fVar32 + fVar33 * fVar49 + fVar39;
    pfVar16[2] = fVar32 + fVar33 * fVar49 + fVar40;
    pfVar16[3] = fVar32 + fVar41 + fVar33 * fVar49;
    pfVar17 = pfVar16 + 4;
    *local_178 = fVar32 + fVar42 + fVar33 * fVar49;
    local_178[1] = fVar32 + fVar43 + fVar33 * fVar49;
    local_178[2] = fVar32 + fVar44 + fVar33 * fVar49;
    local_178[3] = fVar32 + fVar33 * fVar49 + fVar37;
    pfVar16 = local_180;
    if (pfVar17 < local_1c8) {
      pfVar16 = pfVar17;
    }
    pfVar17 = local_1c0;
    if (local_178 + 4 < local_1b8) {
      pfVar17 = local_178 + 4;
    }
    local_178 = pfVar17;
    fVar32 = fVar34;
    fVar34 = fVar31;
    uVar9 = local_148;
    uVar10 = uStack_140;
    uVar11 = local_138;
    uVar12 = uStack_130;
  }
  *(float *)(param_1 + 0x4c) = fVar32;
  *(float *)(param_1 + 0x230) = fVar34;
  *(float *)(param_1 + 0x234) = fVar36;
  *(float **)(param_1 + 0xa8) = local_1a8;
  *(float **)(param_1 + 0xc0) = pfVar21;
  *(float *)(param_1 + 0x1f0) = fVar37;
  *(float *)(param_1 + 500) = fVar38;
  *(float *)(param_1 + 0x1f8) = fVar39;
  *(float *)(param_1 + 0x1fc) = fVar40;
  *(float *)(param_1 + 0x200) = fVar41;
  *(float *)(param_1 + 0x204) = fVar42;
  *(float *)(param_1 + 0x208) = fVar43;
  *(float *)(param_1 + 0x20c) = fVar44;
  *(float **)(param_1 + 200) = pfVar22;
  *(float **)(param_1 + 0x30) = pfVar29;
  *(float **)(param_1 + 0x130) = pfVar16;
  *(float **)(param_1 + 0x138) = pfVar17;
  *(float **)(param_1 + 0x90) = pfStack_1b0;
  *(float **)(param_1 + 0x98) = pfVar27;
  *(float **)(param_1 + 0xa0) = pfVar28;
  *(float **)(param_1 + 0xb0) = pfStack_1a0;
  *(float **)(param_1 + 0xb8) = local_198;
  return;
}



// FUNCTION 145109380 FUN_145109380 body=2507 status=ok
// SIG undefined FUN_145109380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145109380(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  float *pfVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 auStack_260 [5];
  undefined8 local_238;
  undefined8 local_230;
  float *local_228;
  float *pfStack_220;
  float *local_218;
  float *pfStack_210;
  float *local_208;
  float *local_200;
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  local_118 = *(float *)(param_1 + 0x44);
  fVar45 = *(float *)(param_1 + 0x240);
  fVar44 = *(float *)(param_1 + 0x23c);
  pfVar15 = *(float **)(param_1 + 0x138);
  lVar27 = *param_2;
  pfVar26 = *(float **)(param_1 + 0x30);
  fVar35 = *(float *)(param_1 + 0x234);
  fVar2 = *(float *)(param_1 + 0x238);
  fVar50 = *(float *)(lVar7 + 0x10) - fVar44;
  fVar31 = *(float *)(param_1 + 0x4c);
  fVar30 = *(float *)(param_1 + 0x230);
  fStack_114 = local_118;
  fStack_110 = local_118;
  fStack_10c = local_118;
  local_108 = *(float *)(param_1 + 0x48);
  fStack_104 = local_108;
  fStack_100 = local_108;
  fStack_fc = local_108;
  uVar5 = *(ushort *)(param_2 + 2);
  pfVar14 = *(float **)(param_1 + 0x130);
  local_1b0 = pfVar15;
  local_128 = -2.0 / (float)*(uint *)(lVar7 + 0x18);
  fStack_124 = local_128;
  fStack_120 = local_128;
  fStack_11c = local_128;
  local_198 = *(float **)(param_1 + 0x28);
  local_190 = *(float **)(param_1 + 0x38);
  local_1b8 = *(float **)(param_1 + 0x110);
  pfStack_220 = *(float **)(param_1 + 0x118);
  pfStack_210 = *(float **)(param_1 + 0x120);
  local_228 = *(float **)(param_1 + 0x150);
  local_218 = *(float **)(param_1 + 0x158);
  local_208 = *(float **)(param_1 + 0x160);
  local_1c0 = *(float **)(param_1 + 0x140);
  local_200 = *(float **)(param_1 + 0x90);
  local_1a8 = *(float **)(param_1 + 0x98);
  local_138 = (*(float *)(lVar7 + 0x14) - fVar45) * (1.0 / (float)uVar5);
  fStack_134 = local_138;
  fStack_130 = local_138;
  fStack_12c = local_138;
  uVar6 = *(uint *)(param_1 + 0x254);
  fVar33 = *(float *)(param_1 + 0x170);
  fVar29 = *(float *)(param_1 + 0x174);
  fVar32 = *(float *)(param_1 + 0x178);
  fVar34 = *(float *)(param_1 + 0x17c);
  fVar36 = *(float *)(param_1 + 0x1f0);
  fVar37 = *(float *)(param_1 + 500);
  fVar38 = *(float *)(param_1 + 0x1f8);
  fVar39 = *(float *)(param_1 + 0x1fc);
  fVar46 = *(float *)(param_1 + 0x200);
  fVar47 = *(float *)(param_1 + 0x204);
  fVar48 = *(float *)(param_1 + 0x208);
  fVar49 = *(float *)(param_1 + 0x20c);
  fVar40 = *(float *)(param_1 + 0x210);
  fVar41 = *(float *)(param_1 + 0x214);
  fVar42 = *(float *)(param_1 + 0x218);
  fVar43 = *(float *)(param_1 + 0x21c);
  uVar21 = uVar6 - 1;
  local_1a0 = *(float **)(param_1 + 0xa0);
  local_1f0 = *(float **)(param_1 + 0xa8);
  local_1e0 = *(float **)(param_1 + 0xb0);
  local_1e8 = *(float **)(param_1 + 0xb8);
  pfVar19 = *(float **)(param_1 + 0xc0);
  pfVar20 = *(float **)(param_1 + 200);
  local_1d8 = *(float **)(param_1 + 0xd0);
  local_178 = *(undefined8 *)(param_1 + 0x180);
  uStack_170 = *(undefined8 *)(param_1 + 0x188);
  local_1d0 = *(float **)(param_1 + 0xd8);
  local_158 = *(undefined8 *)(param_1 + 400);
  uStack_150 = *(undefined8 *)(param_1 + 0x198);
  local_238 = *(float **)(param_1 + 0xe0);
  local_188 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_180 = *(undefined8 *)(param_1 + 0x1b8);
  local_230 = *(float **)(param_1 + 0xe8);
  local_168 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_160 = *(undefined8 *)(param_1 + 0x1c8);
  uVar11 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_f8 = fVar33;
  fStack_f4 = fVar29;
  fStack_f0 = fVar32;
  fStack_ec = fVar34;
  local_148 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_140 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(int *)(lVar7 + 0x20) == 0) {
    local_1f8 = (float *)(&DAT_149c2a7c0 + (ulonglong)uVar21 * 0x40);
  }
  else {
    local_1f8 = (float *)&DAT_149c2abc0;
  }
  uVar17 = (ulonglong)uVar6 * 0x10;
  uVar12 = uVar17 + 0xf;
  if (uVar12 <= uVar17) {
    uVar12 = 0xffffffffffffff0;
  }
  lVar7 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = uVar17 + 0xf;
  pfVar1 = (float *)((longlong)&local_238 + lVar7);
  if (uVar12 <= uVar17) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_260 + lVar7) = 0x1451096cb;
  lVar8 = (lVar7 - (uVar12 & 0xfffffffffffffff0)) + -0x238;
  pfVar24 = local_1a8;
  pfVar25 = local_1a0;
  uVar9 = local_188;
  uVar10 = uStack_180;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    fVar28 = *pfVar24;
    fVar3 = *pfVar25;
    local_188._0_4_ = (float)uVar9;
    local_188._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
    uStack_180._0_4_ = (float)uVar10;
    uStack_180._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    fVar4 = *local_200;
    pfVar15 = local_1b8;
    if (local_200 + 4 < local_228) {
      pfVar15 = local_200 + 4;
    }
    pfVar23 = pfVar24 + 4;
    pfVar24 = local_1b8 + 1;
    if (pfVar23 < local_228) {
      pfVar24 = pfVar23;
    }
    pfVar23 = pfVar25 + 4;
    local_200 = pfVar15;
    pfVar25 = local_1b8 + 2;
    if (pfVar23 < local_228) {
      pfVar25 = pfVar23;
    }
    pfVar15 = local_1b8 + 3;
    if (local_1f0 + 4 < local_228) {
      pfVar15 = local_1f0 + 4;
    }
    fVar36 = fVar4 * fVar33 + fVar36 * (float)local_188;
    fVar37 = fVar28 * fVar29 + fVar37 * local_188._4_4_;
    fVar38 = fVar3 * fVar32 + fVar38 * (float)uStack_180;
    fVar39 = *local_1f0 * fVar34 + fVar39 * uStack_180._4_4_;
    local_1f0 = pfVar15;
    uVar12 = 0;
    local_188 = uVar9;
    uStack_180 = uVar10;
    do {
      lVar13 = uVar12 * 0x40;
      uVar18 = (int)uVar12 + 1;
      fVar33 = *(float *)(&UNK_149c2a7c4 + lVar13);
      fVar29 = *(float *)(&UNK_149c2a7c8 + lVar13);
      fVar32 = *(float *)(&UNK_149c2a7cc + lVar13);
      pfVar15 = (float *)((longlong)&local_238 + uVar12 * 0x10 + lVar8 + 0x238);
      *pfVar15 = fVar36 * *(float *)(&DAT_149c2a7c0 + lVar13);
      pfVar15[1] = fVar37 * fVar33;
      pfVar15[2] = fVar38 * fVar29;
      pfVar15[3] = fVar39 * fVar32;
      uVar12 = (ulonglong)uVar18;
    } while (uVar18 < uVar21);
    fVar46 = fVar46 * (float)local_168;
    fVar47 = fVar47 * local_168._4_4_;
    fVar48 = fVar48 * (float)uStack_160;
    fVar49 = fVar49 * uStack_160._4_4_;
    fVar33 = local_1f8[1];
    fVar29 = local_1f8[2];
    fVar32 = local_1f8[3];
    pfVar15 = (float *)((longlong)&local_238 + (ulonglong)uVar18 * 0x10 + lVar8 + 0x238);
    *pfVar15 = fVar36 * *local_1f8;
    pfVar15[1] = fVar37 * fVar33;
    pfVar15[2] = fVar38 * fVar29;
    pfVar15[3] = fVar39 * fVar32;
    fVar33 = *local_1e8;
    fVar29 = *local_1e0;
    pfVar15 = pfStack_220;
    if (local_1e0 + 4 < local_218) {
      pfVar15 = local_1e0 + 4;
    }
    local_1e0 = pfVar15;
    pfVar15 = pfStack_220 + 1;
    if (local_1e8 + 4 < local_218) {
      pfVar15 = local_1e8 + 4;
    }
    pfVar23 = pfVar19 + 4;
    local_1e8 = pfVar15;
    fVar46 = fVar29 * (float)local_178 + fVar46;
    fVar47 = fVar33 * local_178._4_4_ + fVar47;
    fVar48 = *pfVar19 * (float)uStack_170 + fVar48;
    fVar49 = *pfVar20 * uStack_170._4_4_ + fVar49;
    pfVar19 = pfStack_220 + 2;
    if (pfVar23 < local_218) {
      pfVar19 = pfVar23;
    }
    pfVar15 = pfVar20 + 4;
    pfVar20 = pfStack_220 + 3;
    if (pfVar15 < local_218) {
      pfVar20 = pfVar15;
    }
    uVar12 = 0;
    do {
      lVar13 = uVar12 * 0x40;
      uVar18 = (int)uVar12 + 1;
      fVar33 = *(float *)(&UNK_149c2a7d4 + lVar13);
      fVar29 = *(float *)(&UNK_149c2a7d8 + lVar13);
      fVar32 = *(float *)(&UNK_149c2a7dc + lVar13);
      pfVar15 = (float *)((longlong)&local_238 + uVar12 * 0x10 + lVar8 + 0x238);
      fVar34 = pfVar15[1];
      fVar28 = pfVar15[2];
      fVar3 = pfVar15[3];
      pfVar23 = (float *)((longlong)&local_238 + uVar12 * 0x10 + lVar8 + 0x238);
      *pfVar23 = fVar46 * *(float *)(&DAT_149c2a7d0 + lVar13) + *pfVar15;
      pfVar23[1] = fVar47 * fVar33 + fVar34;
      pfVar23[2] = fVar48 * fVar29 + fVar28;
      pfVar23[3] = fVar49 * fVar32 + fVar3;
      uVar12 = (ulonglong)uVar18;
    } while (uVar18 < uVar21);
    fVar40 = fVar40 * (float)local_148;
    fVar41 = fVar41 * local_148._4_4_;
    fVar42 = fVar42 * (float)uStack_140;
    fVar43 = fVar43 * uStack_140._4_4_;
    fVar33 = local_1f8[5];
    fVar29 = local_1f8[6];
    fVar32 = local_1f8[7];
    pfVar15 = (float *)((longlong)&local_238 + (ulonglong)uVar18 * 0x10 + lVar8 + 0x238);
    fVar34 = pfVar15[1];
    fVar28 = pfVar15[2];
    fVar3 = pfVar15[3];
    pfVar23 = (float *)((longlong)&local_238 + (ulonglong)uVar18 * 0x10 + lVar8 + 0x238);
    *pfVar23 = fVar46 * local_1f8[4] + *pfVar15;
    pfVar23[1] = fVar47 * fVar33 + fVar34;
    pfVar23[2] = fVar48 * fVar29 + fVar28;
    pfVar23[3] = fVar49 * fVar32 + fVar3;
    fVar33 = *local_1d0;
    fVar29 = *local_1d8;
    pfVar15 = pfStack_210;
    if (local_1d8 + 4 < local_208) {
      pfVar15 = local_1d8 + 4;
    }
    local_1d8 = pfVar15;
    pfVar15 = pfStack_210 + 1;
    if (local_1d0 + 4 < local_208) {
      pfVar15 = local_1d0 + 4;
    }
    local_1d0 = pfVar15;
    fVar40 = fVar29 * (float)local_158 + fVar40;
    fVar41 = fVar33 * local_158._4_4_ + fVar41;
    fVar42 = *local_238 * (float)uStack_150 + fVar42;
    fVar43 = *local_230 * uStack_150._4_4_ + fVar43;
    pfVar15 = pfStack_210 + 2;
    if (local_238 + 4 < local_208) {
      pfVar15 = local_238 + 4;
    }
    local_238 = pfVar15;
    pfVar15 = pfStack_210 + 3;
    if (local_230 + 4 < local_208) {
      pfVar15 = local_230 + 4;
    }
    local_230 = pfVar15;
    uVar12 = 0;
    do {
      lVar13 = uVar12 * 0x40;
      uVar18 = (int)uVar12 + 1;
      fVar33 = *(float *)(&UNK_149c2a7e4 + lVar13);
      fVar29 = *(float *)(&UNK_149c2a7e8 + lVar13);
      fVar32 = *(float *)(&UNK_149c2a7ec + lVar13);
      pfVar15 = (float *)((longlong)&local_238 + uVar12 * 0x10 + lVar8 + 0x238);
      fVar34 = pfVar15[1];
      fVar28 = pfVar15[2];
      fVar3 = pfVar15[3];
      pfVar23 = (float *)((longlong)&local_238 + uVar12 * 0x10 + lVar8 + 0x238);
      *pfVar23 = fVar40 * *(float *)(&DAT_149c2a7e0 + lVar13) + *pfVar15;
      pfVar23[1] = fVar41 * fVar33 + fVar34;
      pfVar23[2] = fVar42 * fVar29 + fVar28;
      pfVar23[3] = fVar43 * fVar32 + fVar3;
      uVar12 = (ulonglong)uVar18;
    } while (uVar18 < uVar21);
    fVar33 = local_1f8[9];
    fVar29 = local_1f8[10];
    fVar32 = local_1f8[0xb];
    uVar22 = 0;
    pfVar15 = (float *)((longlong)&local_238 + (ulonglong)uVar18 * 0x10 + lVar8 + 0x238);
    fVar34 = pfVar15[1];
    fVar28 = pfVar15[2];
    fVar3 = pfVar15[3];
    pfVar23 = (float *)((longlong)&local_238 + (ulonglong)uVar18 * 0x10 + lVar8 + 0x238);
    *pfVar23 = fVar40 * local_1f8[8] + *pfVar15;
    pfVar23[1] = fVar41 * fVar33 + fVar34;
    pfVar23[2] = fVar42 * fVar29 + fVar28;
    pfVar23[3] = fVar43 * fVar32 + fVar3;
    do {
      uVar18 = *(ushort *)(param_2 + 2) * uVar22;
      uVar12 = (ulonglong)uVar22;
      uVar22 = uVar22 + 1;
      *(undefined1 (*) [16])(pfVar1 + uVar12 * 4) =
           ZEXT416(*(uint *)(lVar27 + (ulonglong)uVar18 * 4));
      pfVar15 = (float *)((longlong)&local_238 + uVar12 * 0x10 + lVar8 + 0x238);
      fVar33 = pfVar15[2];
      fVar29 = pfVar15[3];
      fVar32 = pfVar15[1] + fVar29;
      pfVar23 = (float *)((longlong)&local_238 + uVar12 * 0x10 + lVar8 + 0x238);
      *pfVar23 = fVar32 + *pfVar15 + fVar33;
      pfVar23[1] = fVar32 + fVar32;
      pfVar23[2] = fVar32 + fVar33 + fVar33;
      pfVar23[3] = fVar32 + fVar29 + fVar29;
    } while (uVar22 < uVar6);
    fVar45 = fVar45 + local_138;
    fVar44 = fVar44 + fVar50 * (1.0 / (float)uVar5);
    uVar12 = 0;
    fVar33 = fVar49 + fVar39 + fVar43 + fVar47 + fVar37 + fVar41 +
             fVar48 + fVar38 + fVar42 + fVar46 + fVar36 + fVar40;
    do {
      iVar16 = (int)uVar12;
      pfVar15 = pfVar1 + uVar12 * 4;
      fVar29 = pfVar15[1];
      fVar32 = pfVar15[2];
      fVar34 = pfVar15[3];
      fVar28 = *pfVar15 * fVar44 +
               *(float *)((longlong)&local_238 + uVar12 * 0x10 + lVar8 + 0x238) * fVar45;
      pfVar15 = (float *)((longlong)&local_238 + uVar12 * 0x10 + lVar8 + 0x238);
      *pfVar15 = fVar28;
      pfVar15[1] = fVar29;
      pfVar15[2] = fVar32;
      pfVar15[3] = fVar34;
      uVar18 = iVar16 + 1;
      uVar12 = (ulonglong)uVar18;
      *(float *)(lVar27 + (ulonglong)((uint)*(ushort *)(param_2 + 2) * iVar16) * 4) = fVar28;
    } while (uVar18 < uVar6);
    fVar32 = fVar33 * local_128;
    fVar34 = fVar33 * fStack_124;
    fVar28 = fVar33 * fStack_120;
    fVar33 = fVar33 * fStack_11c;
    lVar27 = lVar27 + 4;
    fVar29 = *pfVar1;
    if (1 < uVar6) {
      pfVar15 = (float *)((longlong)&local_228 + lVar7);
      uVar12 = (ulonglong)uVar21;
      do {
        fVar29 = fVar29 + *pfVar15;
        pfVar15 = pfVar15 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    fVar35 = (fVar2 * fVar35 + fVar29) - fVar30;
    fVar30 = fVar35;
    if (local_198 != (float *)0x0) {
      fVar30 = *pfVar26;
      pfVar15 = pfVar26 + 1;
      *pfVar26 = fVar35;
      pfVar26 = local_198;
      if (pfVar15 != local_190) {
        pfVar26 = pfVar15;
      }
    }
    fVar31 = local_118 * fVar30 + local_108 * fVar31;
    *pfVar14 = fVar31 + fVar34 + fVar37;
    pfVar14[1] = fVar31 + fVar28 + fVar38;
    pfVar14[2] = fVar31 + fVar33 + fVar39;
    pfVar14[3] = fVar31 + fVar46 + fVar32;
    pfVar15 = pfVar14 + 4;
    *local_1b0 = fVar31 + fVar47 + fVar34;
    local_1b0[1] = fVar31 + fVar48 + fVar28;
    local_1b0[2] = fVar31 + fVar49 + fVar33;
    local_1b0[3] = fVar31 + fVar40 + fVar32;
    pfVar14 = local_1b8;
    if (pfVar15 < local_228) {
      pfVar14 = pfVar15;
    }
    pfVar15 = pfStack_220;
    if (local_1b0 + 4 < local_218) {
      pfVar15 = local_1b0 + 4;
    }
    *local_1c0 = fVar31 + fVar41 + fVar34;
    local_1c0[1] = fVar31 + fVar42 + fVar28;
    local_1c0[2] = fVar31 + fVar43 + fVar33;
    local_1c0[3] = fVar31 + fVar32 + fVar36;
    pfVar23 = local_1c0 + 4;
    local_1b0 = pfVar15;
    local_1c0 = pfStack_210;
    if (pfVar23 < local_208) {
      local_1c0 = pfVar23;
    }
    fVar31 = fVar30;
    fVar30 = fVar29;
    fVar33 = local_f8;
    fVar29 = fStack_f4;
    fVar32 = fStack_f0;
    fVar34 = fStack_ec;
    uVar9 = local_188;
    uVar10 = uStack_180;
  }
  *(float *)(param_1 + 0x4c) = fVar31;
  *(float *)(param_1 + 0x230) = fVar30;
  *(float *)(param_1 + 0x234) = fVar35;
  *(float **)(param_1 + 0xa8) = local_1f0;
  *(float **)(param_1 + 0xc0) = pfVar19;
  *(float **)(param_1 + 200) = pfVar20;
  *(float **)(param_1 + 0xe0) = local_238;
  *(float **)(param_1 + 0x140) = local_1c0;
  *(float *)(param_1 + 0x1f0) = fVar36;
  *(float *)(param_1 + 500) = fVar37;
  *(float *)(param_1 + 0x1f8) = fVar38;
  *(float *)(param_1 + 0x1fc) = fVar39;
  *(float *)(param_1 + 0x200) = fVar46;
  *(float *)(param_1 + 0x204) = fVar47;
  *(float *)(param_1 + 0x208) = fVar48;
  *(float *)(param_1 + 0x20c) = fVar49;
  *(float *)(param_1 + 0x210) = fVar40;
  *(float *)(param_1 + 0x214) = fVar41;
  *(float *)(param_1 + 0x218) = fVar42;
  *(float *)(param_1 + 0x21c) = fVar43;
  *(float **)(param_1 + 0xe8) = local_230;
  *(float **)(param_1 + 0x30) = pfVar26;
  *(float **)(param_1 + 0x130) = pfVar14;
  *(float **)(param_1 + 0x138) = pfVar15;
  *(float **)(param_1 + 0x90) = local_200;
  *(float **)(param_1 + 0x98) = pfVar24;
  *(float **)(param_1 + 0xa0) = pfVar25;
  *(float **)(param_1 + 0xb0) = local_1e0;
  *(float **)(param_1 + 0xb8) = local_1e8;
  *(float **)(param_1 + 0xd0) = local_1d8;
  *(float **)(param_1 + 0xd8) = local_1d0;
  return;
}



// FUNCTION 145109d50 FUN_145109d50 body=3120 status=ok
// SIG undefined FUN_145109d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145109d50(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  ulonglong uVar17;
  float *pfVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  float *pfVar24;
  float *pfVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 auStack_2e0 [5];
  undefined8 local_2b8;
  undefined8 local_2b0;
  float *local_2a8;
  float *pfStack_2a0;
  float *local_298;
  float *pfStack_290;
  float *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  float *local_250;
  float *local_248;
  float *local_240;
  float *local_238;
  float *local_230;
  float *local_228;
  float *local_220;
  float *local_218;
  float *local_210;
  float *local_208;
  float *local_200;
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  local_128 = *(float *)(param_1 + 0x44);
  fVar36 = *(float *)(param_1 + 0x240);
  fVar35 = *(float *)(param_1 + 0x23c);
  lVar26 = *param_2;
  pfVar25 = *(float **)(param_1 + 0x30);
  fStack_124 = local_128;
  fStack_120 = local_128;
  fStack_11c = local_128;
  local_118 = *(float *)(param_1 + 0x48);
  fVar2 = *(float *)(param_1 + 0x238);
  fVar27 = *(float *)(param_1 + 0x230);
  fVar34 = *(float *)(param_1 + 0x234);
  fStack_114 = local_118;
  fStack_110 = local_118;
  fStack_10c = local_118;
  pfVar13 = *(float **)(param_1 + 0x130);
  local_200 = pfVar13;
  local_138 = -2.0 / (float)*(uint *)(lVar6 + 0x18);
  fStack_134 = local_138;
  fStack_130 = local_138;
  fStack_12c = local_138;
  local_1e0 = *(float **)(param_1 + 0x28);
  local_1d8 = *(float **)(param_1 + 0x38);
  local_2b0 = *(float **)(param_1 + 0x110);
  local_260 = *(float **)(param_1 + 0x118);
  local_258 = *(float **)(param_1 + 0x120);
  local_250 = *(float **)(param_1 + 0x128);
  local_2a8 = *(float **)(param_1 + 0x150);
  pfStack_2a0 = *(float **)(param_1 + 0x158);
  local_298 = *(float **)(param_1 + 0x160);
  pfStack_290 = *(float **)(param_1 + 0x168);
  fVar33 = (*(float *)(lVar6 + 0x10) - fVar35) * (1.0 / (float)*(ushort *)(param_2 + 2));
  local_148 = (*(float *)(lVar6 + 0x14) - fVar36) * (1.0 / (float)*(ushort *)(param_2 + 2));
  local_108 = fVar33;
  fStack_104 = fVar33;
  fStack_100 = fVar33;
  fStack_fc = fVar33;
  fStack_144 = local_148;
  fStack_140 = local_148;
  fStack_13c = local_148;
  fVar29 = *(float *)(param_1 + 0x4c);
  local_1c8 = fVar29;
  fStack_1c4 = fVar29;
  fStack_1c0 = fVar29;
  fStack_1bc = fVar29;
  uVar5 = *(uint *)(param_1 + 0x254);
  pfVar14 = *(float **)(param_1 + 0x138);
  fVar31 = *(float *)(param_1 + 0x170);
  fVar30 = *(float *)(param_1 + 0x174);
  fVar32 = *(float *)(param_1 + 0x178);
  fVar28 = *(float *)(param_1 + 0x17c);
  fVar37 = *(float *)(param_1 + 0x1f0);
  fVar38 = *(float *)(param_1 + 500);
  fVar39 = *(float *)(param_1 + 0x1f8);
  fVar40 = *(float *)(param_1 + 0x1fc);
  fVar45 = *(float *)(param_1 + 0x200);
  fVar46 = *(float *)(param_1 + 0x204);
  fVar47 = *(float *)(param_1 + 0x208);
  fVar48 = *(float *)(param_1 + 0x20c);
  uVar22 = uVar5 - 1;
  fVar49 = *(float *)(param_1 + 0x210);
  fVar50 = *(float *)(param_1 + 0x214);
  fVar51 = *(float *)(param_1 + 0x218);
  fVar52 = *(float *)(param_1 + 0x21c);
  fVar41 = *(float *)(param_1 + 0x220);
  fVar42 = *(float *)(param_1 + 0x224);
  fVar43 = *(float *)(param_1 + 0x228);
  fVar44 = *(float *)(param_1 + 0x22c);
  local_210 = *(float **)(param_1 + 0x140);
  local_1f0 = *(float **)(param_1 + 0x148);
  local_288 = *(float **)(param_1 + 0x90);
  local_1e8 = *(float **)(param_1 + 0x98);
  local_248 = *(float **)(param_1 + 0xa0);
  local_240 = *(float **)(param_1 + 0xa8);
  local_228 = *(float **)(param_1 + 0xb0);
  local_238 = *(float **)(param_1 + 0xb8);
  local_230 = *(float **)(param_1 + 0xc0);
  pfVar20 = *(float **)(param_1 + 200);
  local_220 = *(float **)(param_1 + 0xd0);
  local_218 = *(float **)(param_1 + 0xd8);
  local_280 = *(float **)(param_1 + 0xe0);
  pfVar21 = *(float **)(param_1 + 0xe8);
  local_1a8 = *(undefined8 *)(param_1 + 0x180);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x188);
  local_188 = *(undefined8 *)(param_1 + 400);
  uStack_180 = *(undefined8 *)(param_1 + 0x198);
  local_278 = *(float **)(param_1 + 0xf0);
  local_168 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_160 = *(undefined8 *)(param_1 + 0x1a8);
  local_270 = *(float **)(param_1 + 0xf8);
  local_1b8 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x1b8);
  local_268 = *(float **)(param_1 + 0x100);
  local_198 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_190 = *(undefined8 *)(param_1 + 0x1c8);
  local_2b8 = *(float **)(param_1 + 0x108);
  local_178 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_170 = *(undefined8 *)(param_1 + 0x1d8);
  uVar10 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_1f8 = pfVar14;
  local_f8 = fVar31;
  fStack_f4 = fVar30;
  fStack_f0 = fVar32;
  fStack_ec = fVar28;
  local_158 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_150 = *(undefined8 *)(param_1 + 0x1e8);
  if (*(int *)(lVar6 + 0x20) == 0) {
    local_208 = (float *)(&DAT_149c2a7c0 + (ulonglong)uVar22 * 0x40);
  }
  else {
    local_208 = (float *)&DAT_149c2abc0;
  }
  uVar17 = (ulonglong)uVar5 * 0x10;
  uVar11 = uVar17 + 0xf;
  if (uVar11 <= uVar17) {
    uVar11 = 0xffffffffffffff0;
  }
  lVar6 = -(uVar11 & 0xfffffffffffffff0);
  uVar11 = uVar17 + 0xf;
  pfVar1 = (float *)((longlong)&local_2b8 + lVar6);
  if (uVar11 <= uVar17) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_2e0 + lVar6) = 0x14510a134;
  lVar7 = (lVar6 - (uVar11 & 0xfffffffffffffff0)) + -0x2b8;
  pfVar15 = local_1f0;
  pfVar24 = local_1e8;
  uVar8 = local_1b8;
  uVar9 = uStack_1b0;
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    fVar29 = *pfVar24;
    fVar3 = *local_248;
    fVar4 = *local_288;
    pfVar13 = local_2b0;
    if (local_288 + 4 < local_2a8) {
      pfVar13 = local_288 + 4;
    }
    local_1b8._0_4_ = (float)uVar8;
    local_1b8._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
    uStack_1b0._0_4_ = (float)uVar9;
    uStack_1b0._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
    pfVar14 = pfVar24 + 4;
    local_288 = pfVar13;
    pfVar13 = pfVar24 + 4;
    pfVar24 = local_2b0 + 1;
    if (pfVar13 < local_2a8) {
      pfVar24 = pfVar14;
    }
    pfVar13 = local_2b0 + 2;
    if (local_248 + 4 < local_2a8) {
      pfVar13 = local_248 + 4;
    }
    local_248 = pfVar13;
    fVar37 = fVar4 * fVar31 + (float)local_1b8 * fVar37;
    fVar38 = fVar29 * fVar30 + local_1b8._4_4_ * fVar38;
    fVar39 = fVar3 * fVar32 + (float)uStack_1b0 * fVar39;
    fVar40 = *local_240 * fVar28 + uStack_1b0._4_4_ * fVar40;
    pfVar13 = local_2b0 + 3;
    if (local_240 + 4 < local_2a8) {
      pfVar13 = local_240 + 4;
    }
    local_240 = pfVar13;
    uVar11 = 0;
    local_1b8 = uVar8;
    uStack_1b0 = uVar9;
    do {
      lVar12 = uVar11 * 0x40;
      uVar19 = (int)uVar11 + 1;
      fVar29 = *(float *)(&UNK_149c2a7c4 + lVar12);
      fVar31 = *(float *)(&UNK_149c2a7c8 + lVar12);
      fVar30 = *(float *)(&UNK_149c2a7cc + lVar12);
      pfVar13 = (float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8);
      *pfVar13 = fVar37 * *(float *)(&DAT_149c2a7c0 + lVar12);
      pfVar13[1] = fVar38 * fVar29;
      pfVar13[2] = fVar39 * fVar31;
      pfVar13[3] = fVar40 * fVar30;
      uVar11 = (ulonglong)uVar19;
    } while (uVar19 < uVar22);
    fVar29 = local_208[1];
    fVar31 = local_208[2];
    fVar30 = local_208[3];
    pfVar13 = (float *)((longlong)&local_2b8 + (ulonglong)uVar19 * 0x10 + lVar7 + 0x2b8);
    *pfVar13 = fVar37 * *local_208;
    pfVar13[1] = fVar38 * fVar29;
    pfVar13[2] = fVar39 * fVar31;
    pfVar13[3] = fVar40 * fVar30;
    fVar29 = *local_238;
    fVar31 = *local_228;
    pfVar13 = local_260;
    if (local_228 + 4 < pfStack_2a0) {
      pfVar13 = local_228 + 4;
    }
    local_228 = pfVar13;
    pfVar13 = local_260 + 1;
    if (local_238 + 4 < pfStack_2a0) {
      pfVar13 = local_238 + 4;
    }
    local_238 = pfVar13;
    pfVar13 = local_260 + 2;
    if (local_230 + 4 < pfStack_2a0) {
      pfVar13 = local_230 + 4;
    }
    fVar45 = fVar31 * (float)local_1a8 + (float)local_198 * fVar45;
    fVar46 = fVar29 * local_1a8._4_4_ + local_198._4_4_ * fVar46;
    fVar47 = *local_230 * (float)uStack_1a0 + (float)uStack_190 * fVar47;
    fVar48 = *pfVar20 * uStack_1a0._4_4_ + uStack_190._4_4_ * fVar48;
    pfVar14 = pfVar20 + 4;
    local_230 = pfVar13;
    pfVar20 = local_260 + 3;
    if (pfVar14 < pfStack_2a0) {
      pfVar20 = pfVar14;
    }
    uVar11 = 0;
    do {
      lVar12 = uVar11 * 0x40;
      uVar19 = (int)uVar11 + 1;
      fVar29 = *(float *)(&UNK_149c2a7d4 + lVar12);
      fVar31 = *(float *)(&UNK_149c2a7d8 + lVar12);
      fVar30 = *(float *)(&UNK_149c2a7dc + lVar12);
      pfVar13 = (float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8);
      fVar32 = pfVar13[1];
      fVar28 = pfVar13[2];
      fVar3 = pfVar13[3];
      pfVar14 = (float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8);
      *pfVar14 = fVar45 * *(float *)(&DAT_149c2a7d0 + lVar12) + *pfVar13;
      pfVar14[1] = fVar46 * fVar29 + fVar32;
      pfVar14[2] = fVar47 * fVar31 + fVar28;
      pfVar14[3] = fVar48 * fVar30 + fVar3;
      uVar11 = (ulonglong)uVar19;
    } while (uVar19 < uVar22);
    fVar29 = local_208[5];
    fVar31 = local_208[6];
    fVar30 = local_208[7];
    pfVar13 = (float *)((longlong)&local_2b8 + (ulonglong)uVar19 * 0x10 + lVar7 + 0x2b8);
    fVar32 = pfVar13[1];
    fVar28 = pfVar13[2];
    fVar3 = pfVar13[3];
    pfVar14 = (float *)((longlong)&local_2b8 + (ulonglong)uVar19 * 0x10 + lVar7 + 0x2b8);
    *pfVar14 = fVar45 * local_208[4] + *pfVar13;
    pfVar14[1] = fVar46 * fVar29 + fVar32;
    pfVar14[2] = fVar47 * fVar31 + fVar28;
    pfVar14[3] = fVar48 * fVar30 + fVar3;
    fVar29 = *local_218;
    fVar31 = *local_220;
    pfVar13 = local_258;
    if (local_220 + 4 < local_298) {
      pfVar13 = local_220 + 4;
    }
    local_220 = pfVar13;
    pfVar13 = local_258 + 1;
    if (local_218 + 4 < local_298) {
      pfVar13 = local_218 + 4;
    }
    local_218 = pfVar13;
    pfVar13 = local_258 + 2;
    if (local_280 + 4 < local_298) {
      pfVar13 = local_280 + 4;
    }
    fVar49 = fVar31 * (float)local_188 + (float)local_178 * fVar49;
    fVar50 = fVar29 * local_188._4_4_ + local_178._4_4_ * fVar50;
    fVar51 = *local_280 * (float)uStack_180 + (float)uStack_170 * fVar51;
    fVar52 = *pfVar21 * uStack_180._4_4_ + uStack_170._4_4_ * fVar52;
    pfVar14 = pfVar21 + 4;
    local_280 = pfVar13;
    pfVar21 = local_258 + 3;
    if (pfVar14 < local_298) {
      pfVar21 = pfVar14;
    }
    uVar11 = 0;
    do {
      lVar12 = uVar11 * 0x40;
      uVar19 = (int)uVar11 + 1;
      fVar29 = *(float *)(&UNK_149c2a7e4 + lVar12);
      fVar31 = *(float *)(&UNK_149c2a7e8 + lVar12);
      fVar30 = *(float *)(&UNK_149c2a7ec + lVar12);
      pfVar13 = (float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8);
      fVar32 = pfVar13[1];
      fVar28 = pfVar13[2];
      fVar3 = pfVar13[3];
      pfVar14 = (float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8);
      *pfVar14 = fVar49 * *(float *)(&DAT_149c2a7e0 + lVar12) + *pfVar13;
      pfVar14[1] = fVar50 * fVar29 + fVar32;
      pfVar14[2] = fVar51 * fVar31 + fVar28;
      pfVar14[3] = fVar52 * fVar30 + fVar3;
      uVar11 = (ulonglong)uVar19;
    } while (uVar19 < uVar22);
    fVar29 = local_208[9];
    fVar31 = local_208[10];
    fVar30 = local_208[0xb];
    pfVar13 = (float *)((longlong)&local_2b8 + (ulonglong)uVar19 * 0x10 + lVar7 + 0x2b8);
    fVar32 = pfVar13[1];
    fVar28 = pfVar13[2];
    fVar3 = pfVar13[3];
    pfVar14 = (float *)((longlong)&local_2b8 + (ulonglong)uVar19 * 0x10 + lVar7 + 0x2b8);
    *pfVar14 = fVar49 * local_208[8] + *pfVar13;
    pfVar14[1] = fVar50 * fVar29 + fVar32;
    pfVar14[2] = fVar51 * fVar31 + fVar28;
    pfVar14[3] = fVar52 * fVar30 + fVar3;
    fVar29 = *local_270;
    fVar31 = *local_278;
    pfVar13 = local_250;
    if (local_278 + 4 < pfStack_290) {
      pfVar13 = local_278 + 4;
    }
    local_278 = pfVar13;
    pfVar13 = local_250 + 1;
    if (local_270 + 4 < pfStack_290) {
      pfVar13 = local_270 + 4;
    }
    local_270 = pfVar13;
    pfVar13 = local_250 + 2;
    if (local_268 + 4 < pfStack_290) {
      pfVar13 = local_268 + 4;
    }
    fVar41 = fVar31 * (float)local_168 + (float)local_158 * fVar41;
    fVar42 = fVar29 * local_168._4_4_ + local_158._4_4_ * fVar42;
    fVar43 = *local_268 * (float)uStack_160 + (float)uStack_150 * fVar43;
    fVar44 = *local_2b8 * uStack_160._4_4_ + uStack_150._4_4_ * fVar44;
    local_268 = pfVar13;
    pfVar13 = local_250 + 3;
    if (local_2b8 + 4 < pfStack_290) {
      pfVar13 = local_2b8 + 4;
    }
    local_2b8 = pfVar13;
    uVar11 = 0;
    do {
      lVar12 = uVar11 * 0x40;
      uVar19 = (int)uVar11 + 1;
      fVar29 = *(float *)(&UNK_149c2a7f4 + lVar12);
      fVar31 = *(float *)(&UNK_149c2a7f8 + lVar12);
      fVar30 = *(float *)(&UNK_149c2a7fc + lVar12);
      pfVar13 = (float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8);
      fVar32 = pfVar13[1];
      fVar28 = pfVar13[2];
      fVar3 = pfVar13[3];
      pfVar14 = (float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8);
      *pfVar14 = fVar41 * *(float *)(&DAT_149c2a7f0 + lVar12) + *pfVar13;
      pfVar14[1] = fVar42 * fVar29 + fVar32;
      pfVar14[2] = fVar43 * fVar31 + fVar28;
      pfVar14[3] = fVar44 * fVar30 + fVar3;
      uVar11 = (ulonglong)uVar19;
    } while (uVar19 < uVar22);
    fVar29 = local_208[0xd];
    fVar31 = local_208[0xe];
    fVar30 = local_208[0xf];
    uVar23 = 0;
    pfVar13 = (float *)((longlong)&local_2b8 + (ulonglong)uVar19 * 0x10 + lVar7 + 0x2b8);
    fVar32 = pfVar13[1];
    fVar28 = pfVar13[2];
    fVar3 = pfVar13[3];
    pfVar14 = (float *)((longlong)&local_2b8 + (ulonglong)uVar19 * 0x10 + lVar7 + 0x2b8);
    *pfVar14 = fVar41 * local_208[0xc] + *pfVar13;
    pfVar14[1] = fVar42 * fVar29 + fVar32;
    pfVar14[2] = fVar43 * fVar31 + fVar28;
    pfVar14[3] = fVar44 * fVar30 + fVar3;
    do {
      uVar19 = *(ushort *)(param_2 + 2) * uVar23;
      uVar11 = (ulonglong)uVar23;
      uVar23 = uVar23 + 1;
      *(undefined1 (*) [16])(pfVar1 + uVar11 * 4) =
           ZEXT416(*(uint *)(lVar26 + (ulonglong)uVar19 * 4));
      pfVar13 = (float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8);
      fVar29 = pfVar13[2];
      fVar31 = pfVar13[3];
      fVar30 = pfVar13[1] + fVar31;
      pfVar14 = (float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8);
      *pfVar14 = fVar30 + *pfVar13 + fVar29;
      pfVar14[1] = fVar30 + fVar30;
      pfVar14[2] = fVar30 + fVar29 + fVar29;
      pfVar14[3] = fVar30 + fVar31 + fVar31;
    } while (uVar23 < uVar5);
    fVar36 = fVar36 + local_148;
    fVar35 = fVar35 + fVar33;
    uVar11 = 0;
    fVar31 = fVar48 + fVar40 + fVar52 + fVar44 + fVar46 + fVar38 + fVar50 + fVar42 +
             fVar47 + fVar39 + fVar51 + fVar43 + fVar45 + fVar37 + fVar49 + fVar41;
    do {
      iVar16 = (int)uVar11;
      pfVar13 = pfVar1 + uVar11 * 4;
      fVar29 = pfVar13[1];
      fVar30 = pfVar13[2];
      fVar32 = pfVar13[3];
      fVar28 = *pfVar13 * fVar35 +
               *(float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8) * fVar36;
      pfVar13 = (float *)((longlong)&local_2b8 + uVar11 * 0x10 + lVar7 + 0x2b8);
      *pfVar13 = fVar28;
      pfVar13[1] = fVar29;
      pfVar13[2] = fVar30;
      pfVar13[3] = fVar32;
      uVar19 = iVar16 + 1;
      uVar11 = (ulonglong)uVar19;
      *(float *)(lVar26 + (ulonglong)((uint)*(ushort *)(param_2 + 2) * iVar16) * 4) = fVar28;
    } while (uVar19 < uVar5);
    fVar32 = fVar31 * local_138;
    fVar28 = fVar31 * fStack_134;
    fVar33 = fVar31 * fStack_130;
    fVar31 = fVar31 * fStack_12c;
    lVar26 = lVar26 + 4;
    fVar30 = *pfVar1;
    if (1 < uVar5) {
      pfVar13 = (float *)((longlong)&local_2a8 + lVar6);
      uVar11 = (ulonglong)uVar22;
      do {
        fVar30 = fVar30 + *pfVar13;
        pfVar13 = pfVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    fVar34 = (fVar2 * fVar34 + fVar30) - fVar27;
    fVar29 = fVar34;
    fStack_1c4 = fVar2;
    if (local_1e0 != (float *)0x0) {
      fVar29 = *pfVar25;
      fStack_1c4 = 0.0;
      pfVar13 = pfVar25 + 1;
      *pfVar25 = fVar34;
      pfVar25 = local_1e0;
      if (pfVar13 != local_1d8) {
        pfVar25 = pfVar13;
      }
    }
    fVar27 = local_118 * local_1c8;
    local_1c8 = fVar29;
    fStack_1c0 = fStack_1c4;
    fStack_1bc = fStack_1c4;
    fVar27 = local_128 * fVar29 + fVar27;
    *local_200 = fVar27 + fVar28 + fVar38;
    local_200[1] = fVar27 + fVar33 + fVar39;
    local_200[2] = fVar27 + fVar31 + fVar40;
    local_200[3] = fVar27 + fVar45 + fVar32;
    *local_1f8 = fVar27 + fVar46 + fVar28;
    local_1f8[1] = fVar27 + fVar47 + fVar33;
    local_1f8[2] = fVar27 + fVar48 + fVar31;
    local_1f8[3] = fVar27 + fVar49 + fVar32;
    pfVar13 = local_2b0;
    if (local_200 + 4 < local_2a8) {
      pfVar13 = local_200 + 4;
    }
    local_200 = pfVar13;
    pfVar14 = local_260;
    if (local_1f8 + 4 < pfStack_2a0) {
      pfVar14 = local_1f8 + 4;
    }
    local_1f8 = pfVar14;
    *local_210 = fVar27 + fVar50 + fVar28;
    local_210[1] = fVar27 + fVar51 + fVar33;
    local_210[2] = fVar27 + fVar52 + fVar31;
    local_210[3] = fVar27 + fVar41 + fVar32;
    pfVar18 = local_210 + 4;
    *pfVar15 = fVar27 + fVar42 + fVar28;
    pfVar15[1] = fVar27 + fVar43 + fVar33;
    pfVar15[2] = fVar27 + fVar44 + fVar31;
    pfVar15[3] = fVar27 + fVar32 + fVar37;
    local_210 = local_258;
    if (pfVar18 < local_298) {
      local_210 = pfVar18;
    }
    pfVar18 = pfVar15 + 4;
    pfVar15 = local_250;
    if (pfVar18 < pfStack_290) {
      pfVar15 = pfVar18;
    }
    fVar27 = fVar30;
    fVar33 = local_108;
    fVar31 = local_f8;
    fVar30 = fStack_f4;
    fVar32 = fStack_f0;
    fVar28 = fStack_ec;
    uVar8 = local_1b8;
    uVar9 = uStack_1b0;
  }
  *(float *)(param_1 + 0x4c) = fVar29;
  *(float *)(param_1 + 0x230) = fVar27;
  *(float *)(param_1 + 0x234) = fVar34;
  *(float **)(param_1 + 0xa0) = local_248;
  *(float **)(param_1 + 200) = pfVar20;
  *(float **)(param_1 + 0xe0) = local_280;
  *(float **)(param_1 + 0xe8) = pfVar21;
  *(float **)(param_1 + 0xf0) = local_278;
  *(float **)(param_1 + 0xf8) = local_270;
  *(float **)(param_1 + 0x100) = local_268;
  *(float **)(param_1 + 0x140) = local_210;
  *(float *)(param_1 + 0x1f0) = fVar37;
  *(float *)(param_1 + 500) = fVar38;
  *(float *)(param_1 + 0x1f8) = fVar39;
  *(float *)(param_1 + 0x1fc) = fVar40;
  *(float *)(param_1 + 0x200) = fVar45;
  *(float *)(param_1 + 0x204) = fVar46;
  *(float *)(param_1 + 0x208) = fVar47;
  *(float *)(param_1 + 0x20c) = fVar48;
  *(float *)(param_1 + 0x210) = fVar49;
  *(float *)(param_1 + 0x214) = fVar50;
  *(float *)(param_1 + 0x218) = fVar51;
  *(float *)(param_1 + 0x21c) = fVar52;
  *(float *)(param_1 + 0x220) = fVar41;
  *(float *)(param_1 + 0x224) = fVar42;
  *(float *)(param_1 + 0x228) = fVar43;
  *(float *)(param_1 + 0x22c) = fVar44;
  *(float **)(param_1 + 0x108) = local_2b8;
  *(float **)(param_1 + 0x30) = pfVar25;
  *(float **)(param_1 + 0x130) = pfVar13;
  *(float **)(param_1 + 0x138) = pfVar14;
  *(float **)(param_1 + 0x148) = pfVar15;
  *(float **)(param_1 + 0x90) = local_288;
  *(float **)(param_1 + 0x98) = pfVar24;
  *(float **)(param_1 + 0xa8) = local_240;
  *(float **)(param_1 + 0xb0) = local_228;
  *(float **)(param_1 + 0xb8) = local_238;
  *(float **)(param_1 + 0xc0) = local_230;
  *(float **)(param_1 + 0xd0) = local_220;
  *(float **)(param_1 + 0xd8) = local_218;
  return;
}



// FUNCTION 14510a980 FUN_14510a980 body=43 status=ok
// SIG undefined FUN_14510a980(void)

undefined8 * FUN_14510a980(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 14510a9c0 FUN_14510a9c0 body=350 status=ok
// SIG undefined FUN_14510a9c0(void)

undefined8 * FUN_14510a9c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x260,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFDNReverb\\AkFDNReverbFX.cpp"
                      ,0x72);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x244) = 0xffffffff;
    *puVar1 = &PTR_FUN_149c2acb0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    *(undefined4 *)(puVar1 + 0x48) = 0;
    puVar1[0x49] = 0;
    puVar1[0x4a] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14510ab20 FUN_14510ab20 body=129 status=ok
// SIG undefined FUN_14510ab20(void)

undefined8 * FUN_14510ab20(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x70,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFDNReverb\\AkFDNReverbFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2ad88;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar2[0xc] = uVar1;
    *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(param_1 + 0x68);
    *(undefined1 *)(puVar2 + 0xd) = 1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14510ac00 FUN_14510ac00 body=56 status=ok
// SIG undefined FUN_14510ac00(void)

undefined8 FUN_14510ac00(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14510ac40 FUN_14510ac40 body=206 status=ok
// SIG undefined FUN_14510ac40(void)

undefined8 FUN_14510ac40(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  iVar2 = param_2[2];
  *(int *)(param_1 + 0x18) = iVar2;
  fVar6 = powf(10.0,(float)param_2[3] * 0.05);
  *(float *)(param_1 + 0x10) = fVar6;
  fVar6 = powf(10.0,(float)param_2[4] * 0.05);
  *(float *)(param_1 + 0x14) = fVar6;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  *(uint *)(param_1 + 0x20) = (uint)(*(char *)(param_2 + 6) != '\0');
  iVar3 = *(int *)((longlong)param_2 + 0x19);
  param_2 = (undefined4 *)((longlong)param_2 + 0x1d);
  *(int *)(param_1 + 0x24) = iVar3;
  if ((iVar3 == 1) && (iVar2 != 0)) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *(undefined4 *)(param_1 + 0x28 + uVar5 * 4) = uVar1;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  return 1;
}



// FUNCTION 14510ad10 FUN_14510ad10 body=317 status=ok
// SIG undefined FUN_14510ad10(void)

undefined8 FUN_14510ad10(longlong param_1,short param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 8) = *param_3;
    return 1;
  case 1:
    *(float *)(param_1 + 0xc) = *param_3;
    return 1;
  case 2:
    *(float *)(param_1 + 0x18) = *param_3;
    *(undefined1 *)(param_1 + 0x68) = 1;
    return 1;
  case 3:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    break;
  case 4:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x14) = fVar2;
    return 1;
  case 5:
    *(float *)(param_1 + 0x1c) = *param_3;
    *(undefined1 *)(param_1 + 0x68) = 1;
    return 1;
  case 6:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(uint *)(param_1 + 0x20) = (uint)(cVar1 != '\0');
    return 1;
  case 7:
    *(float *)(param_1 + 0x24) = *param_3;
    *(undefined1 *)(param_1 + 0x68) = 1;
    return 1;
  default:
    *(float *)(param_1 + 8 + (longlong)param_2 * 4) = *param_3;
    *(undefined1 *)(param_1 + 0x68) = 1;
    return 1;
  }
  fVar2 = powf(10.0,fVar3 * 0.05);
  *(float *)(param_1 + 0x10) = fVar2;
  return 1;
}



// FUNCTION 14510ae70 FUN_14510ae70 body=43 status=ok
// SIG undefined FUN_14510ae70(void)

undefined8 * FUN_14510ae70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14510aea0 FUN_14510aea0 body=52 status=ok
// SIG undefined FUN_14510aea0(void)

void FUN_14510aea0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x70,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFDNReverb\\AkFDNReverbFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2ad88;
    return;
  }
  return;
}



// FUNCTION 14510aee0 FUN_14510aee0 body=2326 status=ok
// SIG undefined FUN_14510aee0(void)

void FUN_14510aee0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  int param_6,float param_7,float param_8,float param_9,float param_10)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = 0.0;
  fVar4 = 0.0;
  fVar2 = param_7 * 0.45;
  if (param_8 <= param_7 * 0.45) {
    fVar2 = param_8;
  }
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar11 = 0.0;
  if (param_6 == 3) {
    fVar2 = tanf((fVar2 * 3.1415927) / param_7);
    fVar2 = 1.0 / fVar2;
    fVar11 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 + fVar8;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar9 = fVar8;
  }
  else if (param_6 == 4) {
    fVar2 = tanf((fVar2 * 3.1415927) / param_7);
    fVar11 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 * -2.0;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar9 = fVar8;
  }
  else {
    if (param_6 == 5) {
      uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
      fVar8 = (float)uVar3 * (0.5 / param_10);
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar7 = 1.0 - fVar8;
      fVar9 = -fVar8;
      fVar11 = fVar8;
    }
    else if (param_6 == 6) {
      uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
      fVar8 = 1.0;
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar9 = 1.0;
      fVar11 = (float)uVar3 * (0.5 / param_10);
      fVar7 = 1.0 - fVar11;
      fVar6 = fVar4;
    }
    else {
      if (param_6 == 0) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar11 - 1.0;
        fVar6 = fVar11 + 1.0;
        fVar7 = fVar4 * fVar2;
        fVar5 = (float)uVar3 * SQRT(fVar11) * 1.4142135;
        fVar2 = fVar6 * fVar2;
        fVar9 = fVar6 - fVar7;
        fVar7 = fVar7 + fVar6;
        fVar6 = (fVar11 + fVar11) * (fVar4 - fVar2);
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar8 = (fVar5 + fVar9) * fVar11;
        fVar9 = (fVar9 - fVar5) * fVar11;
        fVar11 = fVar5 + fVar7;
        fVar7 = fVar7 - fVar5;
        goto LAB_14510b770;
      }
      if (param_6 == 7) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar11 - 1.0;
        fVar6 = fVar11 + 1.0;
        fVar5 = (float)uVar3 * (0.5 / param_10) * (SQRT(fVar11) + SQRT(fVar11));
        fVar7 = fVar4 * fVar2;
        fVar9 = fVar6 - fVar7;
        fVar2 = fVar6 * fVar2;
        fVar7 = fVar7 + fVar6;
        fVar6 = (fVar11 + fVar11) * (fVar4 - fVar2);
        fVar8 = (fVar9 + fVar5) * fVar11;
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar9 = (fVar9 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_14510b770;
      }
      if (param_6 == 2) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar7 = fVar11 + 1.0;
        fVar9 = fVar11 - 1.0;
        fVar5 = (float)uVar3 * SQRT(fVar11) * 1.4142135;
        fVar6 = fVar7 * fVar2;
        fVar2 = fVar9 * fVar2;
        fVar4 = fVar9 - fVar6;
        fVar10 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar9) * fVar11 * -2.0;
        fVar8 = (fVar10 + fVar5) * fVar11;
        fVar9 = (fVar10 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_14510b770;
      }
      if (param_6 == 8) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar7 = fVar11 + 1.0;
        fVar9 = fVar11 - 1.0;
        fVar5 = (float)uVar3 * (0.5 / param_10) * (SQRT(fVar11) + SQRT(fVar11));
        fVar6 = fVar7 * fVar2;
        fVar2 = fVar9 * fVar2;
        fVar4 = fVar9 - fVar6;
        fVar10 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar9) * fVar11 * -2.0;
        fVar8 = (fVar10 + fVar5) * fVar11;
        fVar9 = (fVar10 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_14510b770;
      }
      if (param_6 != 1) goto LAB_14510b770;
      param_7 = (fVar2 * 6.2831855) / param_7;
      fVar4 = cosf(param_7);
      param_9 = param_9 * 0.025;
      if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
        uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
        fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar2 * 0.32518977 + 0.020805772) * fVar2 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      fVar11 = sinf(param_7);
      fVar4 = fVar4 * -2.0;
      fVar11 = fVar11 * (0.5 / param_10);
      fVar8 = fVar11 * fVar7;
      fVar11 = fVar11 / fVar7;
      fVar9 = 1.0 - fVar8;
      fVar8 = fVar8 + 1.0;
      fVar7 = 1.0 - fVar11;
      fVar6 = fVar4;
    }
    fVar11 = fVar11 + 1.0;
  }
LAB_14510b770:
  fVar11 = 1.0 / fVar11;
  *param_1 = fVar11 * fVar8;
  *param_2 = fVar11 * fVar6;
  *param_3 = fVar11 * fVar9;
  *param_4 = fVar11 * fVar4;
  *param_5 = fVar11 * fVar7;
  return;
}



// FUNCTION 14510b800 FUN_14510b800 body=189 status=ok
// SIG undefined FUN_14510b800(void)

undefined8 FUN_14510b800(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))();
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  iVar2 = (uVar1 & 1) * 0x80 +
          (-(uint)((uVar1 >> 1 & 1) != 0) & 0x60) + (-(uint)((uVar1 >> 2 & 1) != 0) & 0x14);
  *(int *)(param_1 + 1) = iVar2;
  _Dst = (void *)(**(code **)(*param_2 + 0x18))
                           (param_2,iVar2,0x10,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\BiquadFilterSimd.h"
                            ,0x32c);
  *param_1 = (longlong)_Dst;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,(ulonglong)*(uint *)(param_1 + 1));
    return 1;
  }
  return 0x34;
}



// FUNCTION 14510b8c0 FUN_14510b8c0 body=768 status=ok
// SIG undefined FUN_14510b8c0(void)

void FUN_14510b8c0(longlong *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_5 = -param_5;
  param_6 = -param_6;
  if (((*(byte *)((longlong)param_1 + 0xc) & 1) != 0) &&
     (pfVar3 = (float *)*param_1, pfVar3 != (float *)0x0)) {
    *pfVar3 = param_2;
    pfVar3[1] = param_2;
    pfVar3[2] = param_2;
    pfVar3[3] = param_2;
    pfVar3[4] = 0.0;
    pfVar3[5] = 0.0;
    pfVar3[6] = 0.0;
    fVar7 = param_5 * param_6;
    pfVar3[8] = 0.0;
    pfVar3[9] = 0.0;
    fVar4 = param_2 * param_5 + param_3;
    pfVar3[0xc] = 0.0;
    pfVar3[0x10] = param_3;
    fVar6 = param_3 * param_6;
    pfVar3[7] = fVar4;
    pfVar3[10] = fVar4;
    pfVar3[0xd] = fVar4;
    pfVar3[0x1d] = fVar7;
    pfVar3[0x14] = param_4;
    pfVar3[0x18] = param_5;
    fVar4 = fVar4 * param_5 + param_4 + param_2 * param_6;
    pfVar3[0x1c] = param_6;
    pfVar3[0xb] = fVar4;
    pfVar3[0xe] = fVar4;
    pfVar3[0x15] = param_4 * param_5;
    fVar5 = param_4 * param_5 * param_5;
    pfVar3[0xf] = fVar7 * param_2 + fVar4 * param_5 + fVar6;
    fVar4 = param_3 * param_5 + param_4;
    pfVar3[0x11] = fVar4;
    fVar4 = fVar4 * param_5 + fVar6;
    pfVar3[0x12] = fVar4;
    pfVar3[0x13] = (fVar4 + fVar6) * param_5 + param_4 * param_6;
    pfVar3[0x16] = fVar5 + param_4 * param_6;
    pfVar3[0x17] = ((param_4 + param_4) * param_6 + fVar5) * param_5;
    fVar4 = param_5 * param_5;
    pfVar3[0x19] = fVar4 + param_6;
    pfVar3[0x1a] = (param_6 + param_6 + fVar4) * param_5;
    pfVar3[0x1b] = (param_6 * 3.0 + fVar4) * param_5 * param_5 + param_6 * param_6;
    pfVar3[0x1e] = fVar7 * param_5 + param_6 * param_6;
    pfVar3[0x1f] = ((param_6 + param_6) * param_6 + fVar7 * param_5) * param_5;
  }
  if (((*(uint *)((longlong)param_1 + 0xc) >> 1 & 1) != 0) &&
     (puVar2 = (undefined4 *)((ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 1) * 0x80 + *param_1)
     , puVar2 != (undefined4 *)0x0)) {
    puVar2[1] = param_2;
    *puVar2 = 0;
    puVar2[3] = param_2;
    puVar2[4] = param_2;
    fVar4 = param_2 * param_5 + param_3;
    puVar2[6] = param_2;
    puVar2[8] = param_3;
    puVar2[10] = param_3;
    puVar2[0xc] = param_4;
    puVar2[0xe] = param_4;
    puVar2[5] = fVar4;
    puVar2[7] = fVar4;
    puVar2[2] = 0;
    puVar2[0x10] = param_5;
    puVar2[0x12] = param_5;
    fVar4 = param_3 * param_5 + param_4;
    puVar2[0x14] = param_6;
    puVar2[0x16] = param_6;
    puVar2[9] = fVar4;
    puVar2[0xb] = fVar4;
    puVar2[0xd] = param_4 * param_5;
    puVar2[0xf] = param_4 * param_5;
    fVar4 = param_5 * param_5 + param_6;
    puVar2[0x11] = fVar4;
    puVar2[0x13] = fVar4;
    puVar2[0x15] = param_5 * param_6;
    puVar2[0x17] = param_5 * param_6;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (((uVar1 >> 2 & 1) != 0) &&
     (pfVar3 = (float *)((ulonglong)(uVar1 >> 1 & 1) * 0x60 + (ulonglong)(uVar1 & 1) * 0x80 +
                        *param_1), pfVar3 != (float *)0x0)) {
    *pfVar3 = param_2;
    pfVar3[1] = param_3;
    pfVar3[2] = param_4;
    pfVar3[3] = param_5;
    pfVar3[4] = param_6;
  }
  return;
}



// FUNCTION 14510bbc0 FUN_14510bbc0 body=505 status=ok
// SIG undefined FUN_14510bbc0(void)

undefined8
FUN_14510bbc0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
             undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  float fVar6;
  
  uVar3 = param_5[1] & 0xff;
  *(uint *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = *param_5;
  *(longlong *)(param_1 + 0x68) = param_4;
  if (((param_5[1] & 0x8000) != 0) && (*(char *)(param_4 + 0x48) == '\0')) {
    uVar3 = uVar3 - 1;
    *(uint *)(param_1 + 0x70) = uVar3;
  }
  if (uVar3 != 0) {
    uVar3 = 0;
    puVar5 = (uint *)(param_1 + 0x24);
    do {
      uVar1 = *(uint *)(param_1 + 0x70);
      if (*(longlong *)(puVar5 + -7) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        puVar5[-7] = 0;
        puVar5[-6] = 0;
        puVar5[-5] = 0;
      }
      puVar5[-4] = uVar1;
      uVar4 = ((uVar1 & 1) + ((uVar1 >> 1 & 1) + (uVar1 >> 2)) * 4) * 0x10;
      puVar5[-5] = uVar4;
      _Dst = (void *)(**(code **)(*param_2 + 0x18))
                               (param_2,uVar4,0x10,
                                "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\BiquadFilterSimd.h"
                                ,0x39e);
      *(void **)(puVar5 + -7) = _Dst;
      if (_Dst == (void *)0x0) {
LAB_14510bd7e:
        if (*(longlong *)(puVar5 + -7) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          puVar5[-7] = 0;
          puVar5[-6] = 0;
          puVar5[-5] = 0;
        }
        if (*(longlong *)(puVar5 + -3) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          puVar5[-3] = 0;
          puVar5[-2] = 0;
          puVar5[-1] = 0;
        }
        return 0x34;
      }
      memset(_Dst,0,(ulonglong)puVar5[-5]);
      if ((uVar1 & 1) == 0) {
        uVar4 = *puVar5 & 0xfffffffe;
      }
      else {
        uVar4 = *puVar5 | 1;
      }
      *puVar5 = uVar4;
      if ((uVar1 & 2) == 0) {
        uVar4 = uVar4 & 0xfffffffd;
      }
      else {
        uVar4 = uVar4 | 2;
      }
      *puVar5 = uVar4;
      if (uVar1 < 4) {
        uVar4 = uVar4 & 0xfffffffb;
      }
      else {
        uVar4 = uVar4 | 4;
      }
      *puVar5 = uVar4;
      iVar2 = FUN_14510b800(puVar5 + -3,param_2);
      if (iVar2 != 1) goto LAB_14510bd7e;
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar3 < 3);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x4c) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x4d) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x4e) = 1;
  fVar6 = powf(10.0,*(float *)(*(longlong *)(param_1 + 0x68) + 0x44) * 0.05);
  *(float *)(param_1 + 0x80) = fVar6;
  return 1;
}



// FUNCTION 14510bdc0 FUN_14510bdc0 body=221 status=ok
// SIG undefined FUN_14510bdc0(void)

undefined8 FUN_14510bdc0(undefined8 *param_1,longlong *param_2)

{
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_1[5] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (param_1[7] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (param_1[9] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14510bea0 FUN_14510bea0 body=80 status=ok
// SIG undefined FUN_14510bea0(void)

undefined8 FUN_14510bea0(longlong param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    memset(*(void **)(param_1 + 8),0,(ulonglong)*(uint *)(param_1 + 0x10));
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x28),0,(ulonglong)*(uint *)(param_1 + 0x30));
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x48),0,(ulonglong)*(uint *)(param_1 + 0x50));
  }
  return 1;
}



// FUNCTION 14510bf10 FUN_14510bf10 body=520 status=ok
// SIG undefined FUN_14510bf10(void)

void FUN_14510bf10(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  float fVar6;
  undefined4 local_res8 [4];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_58;
  undefined4 local_54 [7];
  
  if ((*(int *)(param_1 + 0x70) != 0) && (*(short *)((longlong)param_2 + 0x12) != 0)) {
    uVar3 = 0;
    uVar4 = local_res8[0];
    do {
      lVar2 = *(longlong *)(param_1 + 0x68);
      lVar5 = (longlong)(int)uVar3;
      cVar1 = *(char *)(lVar2 + 0x18 + lVar5 * 0x14);
      if (*(char *)(lVar2 + 0x4c + lVar5) != '\0') {
        switch(*(undefined4 *)(lVar2 + 8 + lVar5 * 0x14)) {
        case 0:
          uVar4 = 3;
          break;
        case 1:
          uVar4 = 4;
          break;
        case 2:
          uVar4 = 5;
          break;
        case 3:
          uVar4 = 6;
          break;
        case 4:
          uVar4 = 0;
          break;
        case 5:
          uVar4 = 2;
          break;
        case 6:
          uVar4 = 1;
        }
        FUN_14510aee0(local_54,&local_58,local_res20,local_res18,local_res8,uVar4,
                      (float)*(uint *)(param_1 + 0x74),*(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x14),
                      *(undefined4 *)(lVar2 + 0xc + lVar5 * 0x14),
                      *(undefined4 *)(lVar2 + 0x14 + lVar5 * 0x14));
        FUN_14510b8c0(lVar5 * 0x20 + 0x18 + param_1,local_54[0],local_58,local_res20[0],
                      local_res18[0],local_res8[0]);
        *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x4c + lVar5) = 0;
      }
      if (cVar1 != '\0') {
        FUN_14510c150((ulonglong)uVar3 * 0x20 + 8 + param_1,*param_2,
                      *(undefined2 *)((longlong)param_2 + 0x12),*(undefined2 *)(param_2 + 2));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    lVar2 = *(longlong *)(param_1 + 0x68);
    fVar6 = powf(10.0,*(float *)(lVar2 + 0x44) * 0.05);
    FUN_14510c350(param_2,*(undefined4 *)(param_1 + 0x80),fVar6,*(undefined1 *)(lVar2 + 0x48));
    *(float *)(param_1 + 0x80) = fVar6;
  }
  return;
}



// FUNCTION 14510c150 FUN_14510c150 body=131 status=ok
// SIG undefined FUN_14510c150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14510c150(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 auStack_30 [5];
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc) * 8;
  uVar3 = uVar2 + 0xf;
  if (uVar3 <= uVar2) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_30[0] = 0x14510c191;
  uVar2 = 0;
  if (*(uint *)(param_1 + 0xc) != 0) {
    do {
      *(ulonglong *)(&stack0xfffffffffffffff8 + -(uVar3 & 0xfffffffffffffff0) + uVar2 * 8) =
           param_2 + (ulonglong)(uint)((int)uVar2 * param_4) * 4;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xc));
  }
  *(undefined8 *)((longlong)auStack_30 + -(uVar3 & 0xfffffffffffffff0)) = 0x14510c1c6;
  FUN_14510c5e0(&stack0xfffffffffffffff8 + -(uVar3 & 0xfffffffffffffff0),param_3,param_1 + 0x10,
                param_1);
  return;
}



// FUNCTION 14510c1e0 FUN_14510c1e0 body=43 status=ok
// SIG undefined FUN_14510c1e0(void)

undefined8 * FUN_14510c1e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14510c210 FUN_14510c210 body=309 status=ok
// SIG undefined FUN_14510c210(void)

void FUN_14510c210(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 14510c350 FUN_14510c350 body=528 status=ok
// SIG undefined FUN_14510c350(void)

void FUN_14510c350(longlong *param_1,float param_2,float param_3,char param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_4 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    if (param_3 == param_2) {
      do {
        FUN_14510c210(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4,param_2,uVar3);
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    do {
      pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4);
      pfVar1 = pfVar5 + uVar3;
      if (3 < uVar3) {
        uVar4 = uVar3 & 0xfffffffc;
        pfVar2 = pfVar5 + uVar4;
        fVar9 = (param_3 - param_2) / (float)uVar4;
        fVar12 = fVar9 * 4.0;
        fVar8 = fVar9 + param_2 + fVar9;
        fVar11 = fVar9 + param_2;
        fVar9 = fVar8 + fVar9;
        fVar10 = param_2;
        for (; pfVar5 < pfVar2; pfVar5 = pfVar5 + 4) {
          *pfVar5 = *pfVar5 * fVar10;
          pfVar5[1] = pfVar5[1] * fVar11;
          pfVar5[2] = pfVar5[2] * fVar8;
          pfVar5[3] = pfVar5[3] * fVar9;
          fVar11 = fVar11 + fVar12;
          fVar8 = fVar8 + fVar12;
          fVar9 = fVar9 + fVar12;
          fVar10 = fVar10 + fVar12;
        }
      }
      if (pfVar5 < pfVar1) {
        fVar8 = (param_3 - param_2) / (float)uVar3;
        fVar11 = param_2;
        if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = fVar11 * *pfVar5;
            fVar9 = fVar11 + fVar8 + fVar8;
            pfVar5[1] = (fVar11 + fVar8) * pfVar5[1];
            fVar10 = fVar9 + fVar8;
            pfVar5[2] = fVar9 * pfVar5[2];
            fVar11 = fVar10 + fVar8;
            pfVar5[3] = fVar10 * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pfVar5 < pfVar1 + -3);
          if (pfVar1 <= pfVar5) goto LAB_14510c538;
        }
        do {
          *pfVar5 = fVar11 * *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar11 = fVar11 + fVar8;
        } while (pfVar5 < pfVar1);
      }
LAB_14510c538:
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 14510c560 FUN_14510c560 body=116 status=ok
// SIG undefined FUN_14510c560(void)

undefined8 * FUN_14510c560(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x88,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkParametricEQ\\AkParametricEQFX.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2aed0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xf] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14510c5e0 FUN_14510c5e0 body=1903 status=ok
// SIG undefined FUN_14510c5e0(void)

void FUN_14510c5e0(longlong *param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  uVar19 = *(uint *)((longlong)param_4 + 0xc);
  if ((param_2 & 3) != 0) {
    uVar17 = 4 - (param_2 & 3);
    if (uVar19 != 0) {
      uVar22 = (ulonglong)uVar19;
      plVar23 = param_1;
      do {
        if (uVar17 != 0) {
          memset((void *)(*plVar23 + (ulonglong)param_2 * 4),0,(ulonglong)uVar17 << 2);
        }
        plVar23 = plVar23 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      uVar19 = *(uint *)((longlong)param_4 + 0xc);
    }
    param_2 = param_2 + uVar17;
  }
  uVar17 = *(uint *)((longlong)param_3 + 0xc);
  pfVar11 = (float *)*param_4;
  if (((uVar17 >> 2 & 1) != 0) &&
     ((ulonglong)(uVar17 >> 1 & 1) * 0x60 + (ulonglong)(uVar17 & 1) * 0x80 + *param_3 != 0)) {
    for (; 3 < uVar19; uVar19 = uVar19 - 4) {
      uVar17 = *(uint *)((longlong)param_3 + 0xc);
      fVar24 = pfVar11[4];
      fVar25 = pfVar11[5];
      fVar36 = pfVar11[6];
      fVar37 = pfVar11[7];
      uVar22 = (ulonglong)(*(int *)((longlong)param_4 + 0xc) - uVar19);
      fVar58 = *pfVar11;
      fVar59 = pfVar11[1];
      fVar60 = pfVar11[2];
      fVar61 = pfVar11[3];
      fVar50 = pfVar11[8];
      fVar51 = pfVar11[9];
      fVar52 = pfVar11[10];
      fVar53 = pfVar11[0xb];
      fVar54 = pfVar11[0xc];
      fVar55 = pfVar11[0xd];
      fVar56 = pfVar11[0xe];
      fVar57 = pfVar11[0xf];
      if ((uVar17 >> 2 & 1) == 0) {
        pfVar13 = (float *)0x0;
      }
      else {
        pfVar13 = (float *)((ulonglong)(uVar17 >> 1 & 1) * 0x60 + (ulonglong)(uVar17 & 1) * 0x80 +
                           *param_3);
      }
      fVar1 = *pfVar13;
      fVar2 = pfVar13[1];
      fVar3 = pfVar13[2];
      fVar4 = pfVar13[3];
      fVar5 = pfVar13[4];
      uVar14 = 0;
      lVar16 = param_1[uVar22];
      lVar15 = (param_1 + uVar22)[1];
      lVar7 = param_1[uVar22 + 2];
      lVar8 = (param_1 + uVar22 + 2)[1];
      fVar44 = fVar58;
      fVar46 = fVar59;
      fVar47 = fVar60;
      fVar49 = fVar61;
      local_f8 = fVar24;
      fStack_f4 = fVar25;
      fStack_f0 = fVar36;
      fStack_ec = fVar37;
      if (param_2 != 0) {
        do {
          pfVar13 = (float *)(lVar16 + uVar14 * 4);
          fVar6 = *pfVar13;
          fVar45 = pfVar13[1];
          fVar24 = pfVar13[2];
          fVar58 = pfVar13[3];
          pfVar13 = (float *)(lVar7 + uVar14 * 4);
          fVar48 = *pfVar13;
          fVar41 = pfVar13[1];
          fVar36 = pfVar13[2];
          fVar60 = pfVar13[3];
          pfVar13 = (float *)(lVar15 + uVar14 * 4);
          fVar43 = *pfVar13;
          fVar40 = pfVar13[1];
          fVar25 = pfVar13[2];
          fVar59 = pfVar13[3];
          pfVar13 = (float *)(lVar8 + uVar14 * 4);
          fVar42 = *pfVar13;
          fVar39 = pfVar13[1];
          fVar37 = pfVar13[2];
          fVar61 = pfVar13[3];
          fVar29 = fVar3 * local_f8 + fVar2 * fVar44 + fVar6 * fVar1 + fVar5 * fVar54 +
                   fVar4 * fVar50;
          fVar30 = fVar3 * fStack_f4 + fVar2 * fVar46 + fVar43 * fVar1 + fVar5 * fVar55 +
                   fVar4 * fVar51;
          fVar32 = fVar3 * fStack_f0 + fVar2 * fVar47 + fVar48 * fVar1 + fVar5 * fVar56 +
                   fVar4 * fVar52;
          fVar34 = fVar3 * fStack_ec + fVar2 * fVar49 + fVar42 * fVar1 + fVar5 * fVar57 +
                   fVar4 * fVar53;
          fVar44 = fVar6 * fVar2 + fVar3 * fVar44 + fVar45 * fVar1 + fVar5 * fVar50 + fVar29 * fVar4
          ;
          fVar46 = fVar43 * fVar2 + fVar3 * fVar46 + fVar40 * fVar1 + fVar5 * fVar51 +
                   fVar30 * fVar4;
          fVar47 = fVar48 * fVar2 + fVar3 * fVar47 + fVar41 * fVar1 + fVar5 * fVar52 +
                   fVar32 * fVar4;
          fVar49 = fVar42 * fVar2 + fVar3 * fVar49 + fVar39 * fVar1 + fVar5 * fVar53 +
                   fVar34 * fVar4;
          fVar54 = fVar6 * fVar3 + fVar45 * fVar2 + fVar24 * fVar1 + fVar29 * fVar5 + fVar44 * fVar4
          ;
          fVar55 = fVar43 * fVar3 + fVar40 * fVar2 + fVar25 * fVar1 + fVar30 * fVar5 +
                   fVar46 * fVar4;
          fVar56 = fVar48 * fVar3 + fVar41 * fVar2 + fVar36 * fVar1 + fVar32 * fVar5 +
                   fVar47 * fVar4;
          fVar57 = fVar42 * fVar3 + fVar39 * fVar2 + fVar37 * fVar1 + fVar34 * fVar5 +
                   fVar49 * fVar4;
          fVar50 = fVar45 * fVar3 + fVar24 * fVar2 + fVar58 * fVar1 + fVar44 * fVar5 +
                   fVar54 * fVar4;
          fVar51 = fVar40 * fVar3 + fVar25 * fVar2 + fVar59 * fVar1 + fVar46 * fVar5 +
                   fVar55 * fVar4;
          fVar52 = fVar41 * fVar3 + fVar36 * fVar2 + fVar60 * fVar1 + fVar47 * fVar5 +
                   fVar56 * fVar4;
          fVar53 = fVar39 * fVar3 + fVar37 * fVar2 + fVar61 * fVar1 + fVar49 * fVar5 +
                   fVar57 * fVar4;
          pfVar13 = (float *)(lVar16 + uVar14 * 4);
          *pfVar13 = fVar29;
          pfVar13[1] = fVar44;
          pfVar13[2] = fVar54;
          pfVar13[3] = fVar50;
          pfVar13 = (float *)(lVar15 + uVar14 * 4);
          *pfVar13 = fVar30;
          pfVar13[1] = fVar46;
          pfVar13[2] = fVar55;
          pfVar13[3] = fVar51;
          pfVar13 = (float *)(lVar7 + uVar14 * 4);
          *pfVar13 = fVar32;
          pfVar13[1] = fVar47;
          pfVar13[2] = fVar56;
          pfVar13[3] = fVar52;
          pfVar13 = (float *)(lVar8 + uVar14 * 4);
          *pfVar13 = fVar34;
          pfVar13[1] = fVar49;
          pfVar13[2] = fVar57;
          pfVar13[3] = fVar53;
          uVar17 = (int)uVar14 + 4;
          uVar14 = (ulonglong)uVar17;
          fVar44 = fVar58;
          fVar46 = fVar59;
          fVar47 = fVar60;
          fVar49 = fVar61;
          local_f8 = fVar24;
          fStack_f4 = fVar25;
          fStack_f0 = fVar36;
          fStack_ec = fVar37;
        } while (uVar17 < param_2);
      }
      *pfVar11 = fVar58;
      pfVar11[1] = fVar59;
      pfVar11[2] = fVar60;
      pfVar11[3] = fVar61;
      pfVar11[4] = fVar24;
      pfVar11[5] = fVar25;
      pfVar11[6] = fVar36;
      pfVar11[7] = fVar37;
      pfVar11[8] = fVar50;
      pfVar11[9] = fVar51;
      pfVar11[10] = fVar52;
      pfVar11[0xb] = fVar53;
      pfVar11[0xc] = fVar54;
      pfVar11[0xd] = fVar55;
      pfVar11[0xe] = fVar56;
      pfVar11[0xf] = fVar57;
      pfVar11 = pfVar11 + 0x10;
    }
  }
  if ((((*(uint *)((longlong)param_3 + 0xc) >> 1 & 1) != 0) &&
      (pfVar13 = (float *)(*param_3 + (ulonglong)(*(uint *)((longlong)param_3 + 0xc) & 1) * 0x80),
      pfVar13 != (float *)0x0)) && (1 < uVar19)) {
    uVar22 = 0;
    fVar24 = *pfVar11;
    fVar25 = pfVar11[1];
    fVar36 = *pfVar13;
    fVar37 = pfVar13[1];
    fVar58 = pfVar13[2];
    fVar59 = pfVar13[3];
    fVar60 = pfVar13[4];
    fVar61 = pfVar13[5];
    fVar50 = pfVar13[6];
    fVar51 = pfVar13[7];
    fVar52 = pfVar13[8];
    fVar53 = pfVar13[9];
    fVar54 = pfVar13[10];
    fVar55 = pfVar13[0xb];
    fVar56 = pfVar13[0xc];
    fVar57 = pfVar13[0xd];
    fVar1 = pfVar13[0xe];
    fVar2 = pfVar13[0xf];
    fVar3 = pfVar13[0x10];
    fVar4 = pfVar13[0x11];
    fVar5 = pfVar13[0x12];
    fVar44 = pfVar13[0x13];
    fVar46 = pfVar13[0x14];
    fVar47 = pfVar13[0x15];
    fVar49 = pfVar13[0x16];
    fVar6 = pfVar13[0x17];
    lVar16 = param_1[*(int *)((longlong)param_4 + 0xc) - uVar19];
    lVar15 = (param_1 + (*(int *)((longlong)param_4 + 0xc) - uVar19))[1];
    fVar45 = pfVar11[4];
    fVar48 = pfVar11[5];
    fVar41 = pfVar11[8];
    fVar43 = pfVar11[9];
    fVar40 = pfVar11[0xc];
    fVar42 = pfVar11[0xd];
    fVar39 = fVar24;
    fVar29 = fVar25;
    fVar30 = fVar45;
    fVar32 = fVar48;
    if (param_2 != 0) {
      do {
        pfVar13 = (float *)(lVar16 + uVar22 * 4);
        fVar34 = *pfVar13;
        fVar26 = pfVar13[1];
        fVar45 = pfVar13[2];
        fVar24 = pfVar13[3];
        pfVar13 = (float *)(lVar15 + uVar22 * 4);
        fVar27 = *pfVar13;
        fVar28 = pfVar13[1];
        fVar48 = pfVar13[2];
        fVar25 = pfVar13[3];
        fVar38 = fVar56 * fVar30 + fVar52 * fVar39 + fVar34 * fVar36 + fVar34 * fVar60 +
                 fVar3 * fVar41 + fVar46 * fVar40;
        fVar39 = fVar57 * fVar30 + fVar53 * fVar39 + fVar26 * fVar37 + fVar34 * fVar61 +
                 fVar4 * fVar41 + fVar47 * fVar40;
        fVar30 = fVar1 * fVar32 + fVar54 * fVar29 + fVar27 * fVar58 + fVar27 * fVar50 +
                 fVar5 * fVar43 + fVar49 * fVar42;
        fVar29 = fVar2 * fVar32 + fVar55 * fVar29 + fVar28 * fVar59 + fVar27 * fVar51 +
                 fVar44 * fVar43 + fVar6 * fVar42;
        fVar40 = fVar26 * fVar52 + fVar34 * fVar56 + fVar45 * fVar36 + fVar45 * fVar60 +
                 fVar39 * fVar3 + fVar38 * fVar46;
        fVar41 = fVar26 * fVar53 + fVar34 * fVar57 + fVar24 * fVar37 + fVar45 * fVar61 +
                 fVar39 * fVar4 + fVar38 * fVar47;
        fVar42 = fVar28 * fVar54 + fVar27 * fVar1 + fVar48 * fVar58 + fVar48 * fVar50 +
                 fVar29 * fVar5 + fVar30 * fVar49;
        fVar43 = fVar28 * fVar55 + fVar27 * fVar2 + fVar25 * fVar59 + fVar48 * fVar51 +
                 fVar29 * fVar44 + fVar30 * fVar6;
        pfVar13 = (float *)(lVar16 + uVar22 * 4);
        *pfVar13 = fVar38;
        pfVar13[1] = fVar39;
        pfVar13[2] = fVar40;
        pfVar13[3] = fVar41;
        pfVar13 = (float *)(lVar15 + uVar22 * 4);
        *pfVar13 = fVar30;
        pfVar13[1] = fVar29;
        pfVar13[2] = fVar42;
        pfVar13[3] = fVar43;
        uVar17 = (int)uVar22 + 4;
        uVar22 = (ulonglong)uVar17;
        fVar39 = fVar24;
        fVar29 = fVar25;
        fVar30 = fVar45;
        fVar32 = fVar48;
      } while (uVar17 < param_2);
    }
    *pfVar11 = fVar24;
    uVar19 = uVar19 - 2;
    pfVar11[4] = fVar45;
    pfVar11[8] = fVar41;
    pfVar11[0xc] = fVar40;
    pfVar11[1] = fVar25;
    pfVar11[5] = fVar48;
    pfVar11[9] = fVar43;
    pfVar11[0xd] = fVar42;
  }
  if (((*(byte *)((longlong)param_3 + 0xc) & 1) != 0) && (*param_3 != 0)) {
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar17 = *(uint *)((longlong)param_4 + 0xc);
      uVar20 = uVar17 - uVar19;
      uVar18 = uVar20 >> 2;
      uVar21 = uVar20 & 3;
      if ((uVar17 - 1 == uVar20) && ((uVar17 & 1) != 0)) {
        uVar12 = uVar18;
        if ((uVar17 != 1) && (1 < uVar21)) {
          uVar12 = uVar18 + 1;
        }
        lVar16 = *param_4;
        uVar22 = (ulonglong)(uVar12 << 4);
        fVar24 = *(float *)(lVar16 + uVar22 * 4);
        fVar25 = *(float *)(lVar16 + 4 + uVar22 * 4);
        fVar37 = *(float *)(lVar16 + 8 + uVar22 * 4);
        fVar36 = *(float *)(lVar16 + 0xc + uVar22 * 4);
      }
      else {
        lVar15 = (ulonglong)(uVar18 << 4) + (ulonglong)uVar21;
        lVar16 = *param_4;
        fVar24 = *(float *)(lVar16 + lVar15 * 4);
        fVar25 = *(float *)(lVar16 + 0x10 + lVar15 * 4);
        fVar37 = *(float *)(lVar16 + 0x20 + lVar15 * 4);
        fVar36 = *(float *)(lVar16 + 0x30 + lVar15 * 4);
      }
      if ((*(byte *)((longlong)param_3 + 0xc) & 1) == 0) {
        pfVar11 = (float *)0x0;
      }
      else {
        pfVar11 = (float *)*param_3;
      }
      uVar9 = *(undefined8 *)(pfVar11 + 0x1c);
      uVar10 = *(undefined8 *)(pfVar11 + 0x1e);
      uVar22 = 0;
      fVar58 = *pfVar11;
      fVar59 = pfVar11[1];
      fVar60 = pfVar11[2];
      fVar61 = pfVar11[3];
      fVar50 = pfVar11[4];
      fVar51 = pfVar11[5];
      fVar52 = pfVar11[6];
      fVar53 = pfVar11[7];
      fVar54 = pfVar11[8];
      fVar55 = pfVar11[9];
      fVar56 = pfVar11[10];
      fVar57 = pfVar11[0xb];
      fVar1 = pfVar11[0xc];
      fVar2 = pfVar11[0xd];
      fVar3 = pfVar11[0xe];
      fVar4 = pfVar11[0xf];
      fVar5 = pfVar11[0x10];
      fVar44 = pfVar11[0x11];
      fVar46 = pfVar11[0x12];
      fVar47 = pfVar11[0x13];
      fVar49 = pfVar11[0x14];
      fVar6 = pfVar11[0x15];
      fVar45 = pfVar11[0x16];
      fVar48 = pfVar11[0x17];
      fVar41 = pfVar11[0x18];
      fVar43 = pfVar11[0x19];
      fVar40 = pfVar11[0x1a];
      fVar42 = pfVar11[0x1b];
      if (param_2 != 0) {
        do {
          fVar38 = fVar5 * fVar24;
          fVar31 = fVar44 * fVar24;
          fVar33 = fVar46 * fVar24;
          fVar35 = fVar47 * fVar24;
          fVar34 = fVar49 * fVar25;
          fVar26 = fVar6 * fVar25;
          fVar27 = fVar45 * fVar25;
          fVar28 = fVar48 * fVar25;
          pfVar11 = (float *)(param_1[uVar20] + uVar22 * 4);
          fVar39 = *pfVar11;
          fVar29 = pfVar11[1];
          fVar25 = pfVar11[2];
          fVar24 = pfVar11[3];
          fVar30 = fVar41 * fVar37;
          fVar32 = fVar43 * fVar37;
          local_f8 = (float)uVar9;
          fStack_f4 = (float)((ulonglong)uVar9 >> 0x20);
          fStack_f0 = (float)uVar10;
          fStack_ec = (float)((ulonglong)uVar10 >> 0x20);
          local_f8 = local_f8 * fVar36;
          fStack_f4 = fStack_f4 * fVar36;
          fStack_ec = fStack_ec * fVar36;
          fVar36 = fVar29 * fVar56 + fVar52 * fVar25 + fVar33 + fVar25 * fVar60 + fVar27 +
                   fVar39 * fVar3 + fVar40 * fVar37 + fStack_f0 * fVar36;
          fVar37 = fVar29 * fVar57 + fVar53 * fVar25 + fVar35 + fVar24 * fVar61 + fVar28 +
                   fVar39 * fVar4 + fVar42 * fVar37 + fStack_ec;
          pfVar11 = (float *)(param_1[uVar20] + uVar22 * 4);
          *pfVar11 = fVar29 * fVar54 + fVar50 * fVar25 + fVar38 + fVar39 * fVar58 + fVar34 +
                     fVar39 * fVar1 + fVar30 + local_f8;
          pfVar11[1] = fVar29 * fVar55 + fVar51 * fVar25 + fVar31 + fVar29 * fVar59 + fVar26 +
                       fVar39 * fVar2 + fVar32 + fStack_f4;
          pfVar11[2] = fVar36;
          pfVar11[3] = fVar37;
          uVar17 = (int)uVar22 + 4;
          uVar22 = (ulonglong)uVar17;
        } while (uVar17 < param_2);
      }
      uVar17 = *(uint *)((longlong)param_4 + 0xc);
      if ((uVar17 - 1 == uVar20) && ((uVar17 & 1) != 0)) {
        if ((uVar17 != 1) && (1 < uVar21)) {
          uVar18 = uVar18 + 1;
        }
        uVar22 = (ulonglong)(uVar18 << 4);
        *(float *)(*param_4 + uVar22 * 4) = fVar24;
        *(float *)(*param_4 + 4 + uVar22 * 4) = fVar25;
        *(float *)(*param_4 + 8 + uVar22 * 4) = fVar37;
        *(float *)(*param_4 + 0xc + uVar22 * 4) = fVar36;
      }
      else {
        lVar16 = (ulonglong)(uVar18 << 4) + (ulonglong)uVar21;
        *(float *)(*param_4 + lVar16 * 4) = fVar24;
        *(float *)(*param_4 + 0x10 + lVar16 * 4) = fVar25;
        *(float *)(*param_4 + 0x20 + lVar16 * 4) = fVar37;
        *(float *)(*param_4 + 0x30 + lVar16 * 4) = fVar36;
      }
    }
  }
  return;
}



// FUNCTION 14510cd50 FUN_14510cd50 body=119 status=ok
// SIG undefined FUN_14510cd50(void)

undefined8 * FUN_14510cd50(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x50,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkParametricEQ\\AkParametricEQFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2afb0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_1 + 0x48);
    *(undefined2 *)((longlong)puVar2 + 0x4c) = 0x101;
    *(undefined1 *)((longlong)puVar2 + 0x4e) = 1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14510ce50 FUN_14510ce50 body=56 status=ok
// SIG undefined FUN_14510ce50(void)

undefined8 FUN_14510ce50(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14510d0a0 FUN_14510d0a0 body=43 status=ok
// SIG undefined FUN_14510d0a0(void)

undefined8 * FUN_14510d0a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14510d0d0 FUN_14510d0d0 body=62 status=ok
// SIG undefined FUN_14510d0d0(void)

void FUN_14510d0d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x50,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkParametricEQ\\AkParametricEQFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((longlong)puVar1 + 0x4c) = 0x101;
    *puVar1 = &PTR_FUN_149c2afb0;
    *(undefined1 *)((longlong)puVar1 + 0x4e) = 1;
    return;
  }
  return;
}



// FUNCTION 14510d110 FUN_14510d110 body=14 status=ok
// SIG undefined FUN_14510d110(void)

undefined8 * FUN_14510d110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c2b070;
  return param_1;
}



// FUNCTION 14510d120 FUN_14510d120 body=89 status=ok
// SIG undefined FUN_14510d120(void)

void FUN_14510d120(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\samples\\Plugins\\AkDelay\\Sources\\AudioEngineFX\\AkDelayFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2b070;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    *(undefined1 *)((longlong)puVar2 + 0x15) = 1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)((longlong)puVar2 + 0x1d) = 1;
    return;
  }
  return;
}



// FUNCTION 14510d1c0 FUN_14510d1c0 body=56 status=ok
// SIG undefined FUN_14510d1c0(void)

undefined8 FUN_14510d1c0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14510d200 FUN_14510d200 body=160 status=ok
// SIG undefined FUN_14510d200(void)

undefined8 FUN_14510d200(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  fVar1 = (float)param_2[1];
  *(float *)(param_1 + 8) = fVar1;
  fVar2 = (float)param_2[2];
  *(float *)(param_1 + 0xc) = fVar2;
  fVar3 = powf(10.0,(float)param_2[3] * 0.05);
  *(float *)(param_1 + 0x10) = fVar3;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(float *)(param_1 + 8) = fVar1 * 0.01;
  *(float *)(param_1 + 0xc) = fVar2 * 0.01;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return 1;
}



// FUNCTION 14510d2a0 FUN_14510d2a0 body=313 status=ok
// SIG undefined FUN_14510d2a0(void)

undefined8 FUN_14510d2a0(longlong param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x18) = *param_3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
    return 1;
  case 1:
    fVar1 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar1) && (fVar2 = fVar1, 100.0 <= fVar1)) {
      fVar2 = 100.0;
    }
    *(undefined1 *)(param_1 + 0x15) = 1;
    *(float *)(param_1 + 8) = fVar2 * 0.01;
    return 1;
  case 2:
    fVar1 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar1) && (fVar2 = fVar1, 100.0 <= fVar1)) {
      fVar2 = 100.0;
    }
    *(float *)(param_1 + 0xc) = fVar2 * 0.01;
    return 1;
  case 3:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x10) = fVar1;
    return 1;
  case 4:
    break;
  case 5:
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)param_3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
    return 1;
  default:
    return 0x1f;
  }
  if (*param_3 == 0.0) {
    *(undefined1 *)(param_1 + 0x15) = 1;
    *(undefined1 *)(param_1 + 0x14) = 0;
    return 1;
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = 1;
  return 1;
}



// FUNCTION 14510d400 FUN_14510d400 body=43 status=ok
// SIG undefined FUN_14510d400(void)

undefined8 * FUN_14510d400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14510d430 FUN_14510d430 body=29 status=ok
// SIG undefined FUN_14510d430(void)

undefined8 * FUN_14510d430(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}


