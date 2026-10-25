// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1485eae36 FUN_1485eae36 body=71 status=ok
// SIG undefined FUN_1485eae36(void)

char FUN_1485eae36(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = *(char **)(param_1 + 0x68);
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 1485eae7d FUN_1485eae7d body=621 status=ok
// SIG undefined FUN_1485eae7d(void)

void FUN_1485eae7d(longlong param_1,longlong param_2,char param_3,int param_4,longlong param_5,
                  double param_6)

{
  int iVar1;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined1 local_4a0;
  undefined1 local_498;
  byte local_490;
  undefined1 local_488;
  char local_479;
  undefined1 local_478 [80];
  undefined1 local_428 [80];
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined1 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 local_2f8 [208];
  longlong local_228;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined1 local_1a4;
  char local_1a2;
  undefined4 local_194;
  double local_190;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_479 = param_3;
  FUN_1482b4fcc(local_2f8,param_1);
  local_1c0 = 0;
  if (param_5 != 0) {
    local_228 = param_5;
  }
  local_1bc = 0;
  local_1a4 = *(undefined1 *)(param_2 + 5);
  local_1a2 = *(char *)(param_2 + 1);
  local_490 = 0;
  if (local_1a2 == '\x01') {
    local_1b8 = 0x3ee4f8b588e368f1;
    local_490 = 1;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      FUN_146c196fe(*(longlong *)(param_1 + 0x208),1);
      local_490 = *(byte *)(param_2 + 1);
    }
  }
  local_398 = 0;
  local_390 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_38c = 0xffffffff00000080;
  local_384 = 0;
  local_378 = 0;
  local_370 = 0;
  local_348 = 0;
  local_340 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_33c = 0xffffffff00000080;
  local_334 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_498 = *(undefined1 *)(param_2 + 2);
  local_4a0 = *(undefined1 *)(param_2 + 3);
  local_488 = 1;
  local_490 = local_490 & 1;
  local_4a8 = 0;
  FUN_1482af724(&local_3b8,param_1,1,0);
  FUN_148349f0e(local_478,&local_3b8);
  FUN_14834a01c(local_428,&local_368);
  local_3d8 = local_318;
  local_3d0 = local_310;
  uStack_3c8 = uStack_308;
  local_310 = 0;
  uStack_308 = 0;
  local_3c0 = 1;
  FUN_14831cf9c(local_2f8,local_478);
  if ((param_5 != 0) && (0.0 < param_6)) {
    local_194 = 1;
    local_190 = param_6;
  }
  iVar1 = 1;
  if (1 < param_4) {
    iVar1 = param_4;
  }
  if (local_479 == '\0') {
    FUN_1482b517e(local_2f8,iVar1);
  }
  else {
    FUN_1482b5140(local_2f8,iVar1);
  }
  if (*(char *)(param_2 + 6) == '\x01') {
    FUN_146c09afc(param_1,0);
  }
  FUN_1482f5f8c(&local_3b8);
  FUN_1482feb02(local_2f8);
  if ((local_60 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485eb0eb FUN_1485eb0eb body=621 status=ok
// SIG undefined FUN_1485eb0eb(void)

void FUN_1485eb0eb(longlong param_1,longlong param_2,char param_3,int param_4,longlong param_5,
                  double param_6)

{
  int iVar1;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined1 local_4a0;
  undefined1 local_498;
  byte local_490;
  undefined1 local_488;
  char local_479;
  undefined1 local_478 [80];
  undefined1 local_428 [80];
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined1 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 local_2f8 [208];
  longlong local_228;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined1 local_1a4;
  char local_1a2;
  undefined4 local_194;
  double local_190;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_479 = param_3;
  FUN_1482bc5b8(local_2f8,param_1);
  local_1c0 = 0;
  if (param_5 != 0) {
    local_228 = param_5;
  }
  local_1bc = 0;
  local_1a4 = *(undefined1 *)(param_2 + 5);
  local_1a2 = *(char *)(param_2 + 1);
  local_490 = 0;
  if (local_1a2 == '\x01') {
    local_1b8 = 0x3ee4f8b588e368f1;
    local_490 = 1;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      FUN_146c196fe(*(longlong *)(param_1 + 0x208),1);
      local_490 = *(byte *)(param_2 + 1);
    }
  }
  local_398 = 0;
  local_390 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_38c = 0xffffffff00000080;
  local_384 = 0;
  local_378 = 0;
  local_370 = 0;
  local_348 = 0;
  local_340 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_33c = 0xffffffff00000080;
  local_334 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_498 = *(undefined1 *)(param_2 + 2);
  local_4a0 = *(undefined1 *)(param_2 + 3);
  local_488 = 1;
  local_490 = local_490 & 1;
  local_4a8 = 0;
  FUN_1482af724(&local_3b8,param_1,1,0);
  FUN_148349f0e(local_478,&local_3b8);
  FUN_14834a01c(local_428,&local_368);
  local_3d8 = local_318;
  local_3d0 = local_310;
  uStack_3c8 = uStack_308;
  local_310 = 0;
  uStack_308 = 0;
  local_3c0 = 1;
  FUN_14831cf9c(local_2f8,local_478);
  if ((param_5 != 0) && (0.0 < param_6)) {
    local_194 = 1;
    local_190 = param_6;
  }
  iVar1 = 1;
  if (1 < param_4) {
    iVar1 = param_4;
  }
  if (local_479 == '\0') {
    FUN_1482bc76a(local_2f8,iVar1);
  }
  else {
    FUN_1482bc72c(local_2f8,iVar1);
  }
  if (*(char *)(param_2 + 6) == '\x01') {
    FUN_146c09afc(param_1,0);
  }
  FUN_1482f5f8c(&local_3b8);
  FUN_1482fec66(local_2f8);
  if ((local_60 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485eb359 FUN_1485eb359 body=621 status=ok
// SIG undefined FUN_1485eb359(void)

void FUN_1485eb359(longlong param_1,longlong param_2,char param_3,int param_4,longlong param_5,
                  double param_6)

{
  int iVar1;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined1 local_4a0;
  undefined1 local_498;
  byte local_490;
  undefined1 local_488;
  char local_479;
  undefined1 local_478 [80];
  undefined1 local_428 [80];
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined1 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 local_2f8 [208];
  longlong local_228;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined1 local_1a4;
  char local_1a2;
  undefined4 local_194;
  double local_190;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_479 = param_3;
  FUN_1482c3c14(local_2f8,param_1);
  local_1c0 = 0;
  if (param_5 != 0) {
    local_228 = param_5;
  }
  local_1bc = 0;
  local_1a4 = *(undefined1 *)(param_2 + 5);
  local_1a2 = *(char *)(param_2 + 1);
  local_490 = 0;
  if (local_1a2 == '\x01') {
    local_1b8 = 0x3ee4f8b588e368f1;
    local_490 = 1;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      FUN_146c196fe(*(longlong *)(param_1 + 0x208),1);
      local_490 = *(byte *)(param_2 + 1);
    }
  }
  local_398 = 0;
  local_390 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_38c = 0xffffffff00000080;
  local_384 = 0;
  local_378 = 0;
  local_370 = 0;
  local_348 = 0;
  local_340 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_33c = 0xffffffff00000080;
  local_334 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_498 = *(undefined1 *)(param_2 + 2);
  local_4a0 = *(undefined1 *)(param_2 + 3);
  local_488 = 1;
  local_490 = local_490 & 1;
  local_4a8 = 0;
  FUN_1482af724(&local_3b8,param_1,1,0);
  FUN_148349f0e(local_478,&local_3b8);
  FUN_14834a01c(local_428,&local_368);
  local_3d8 = local_318;
  local_3d0 = local_310;
  uStack_3c8 = uStack_308;
  local_310 = 0;
  uStack_308 = 0;
  local_3c0 = 1;
  FUN_14831cf9c(local_2f8,local_478);
  if ((param_5 != 0) && (0.0 < param_6)) {
    local_194 = 1;
    local_190 = param_6;
  }
  iVar1 = 1;
  if (1 < param_4) {
    iVar1 = param_4;
  }
  if (local_479 == '\0') {
    FUN_1482c3dc6(local_2f8,iVar1);
  }
  else {
    FUN_1482c3d88(local_2f8,iVar1);
  }
  if (*(char *)(param_2 + 6) == '\x01') {
    FUN_146c09afc(param_1,0);
  }
  FUN_1482f5f8c(&local_3b8);
  FUN_1482fed12(local_2f8);
  if ((local_60 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485eb5c8 FUN_1485eb5c8 body=133 status=ok
// SIG undefined FUN_1485eb5c8(void)

undefined8 * FUN_1485eb5c8(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14afa41c0;
  cVar1 = *param_3;
  uVar2 = *param_2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x4000000000000000;
  *(undefined4 *)(param_1 + 0xf) = 2;
  param_1[2] = uVar2;
  if (cVar1 == '\x01') {
    FUN_146bef8a8(param_1 + 2,0x4000000000000001);
  }
  return param_1;
}



// FUNCTION 1485eb64e FUN_1485eb64e body=46 status=ok
// SIG undefined FUN_1485eb64e(void)

void FUN_1485eb64e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_146bddd50(param_1 + 0x18);
  return;
}



// FUNCTION 1485eb67c FUN_1485eb67c body=29 status=ok
// SIG undefined FUN_1485eb67c(void)

undefined8 FUN_1485eb67c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485eb6b2 FUN_1485eb6b2 body=29 status=ok
// SIG undefined FUN_1485eb6b2(void)

undefined8 FUN_1485eb6b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485eb704 FUN_1485eb704 body=29 status=ok
// SIG undefined FUN_1485eb704(void)

undefined8 FUN_1485eb704(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485eb722 FUN_1485eb722 body=285 status=ok
// SIG undefined FUN_1485eb722(void)

void FUN_1485eb722(longlong param_1,longlong *param_2,longlong *param_3,double param_4,
                  double param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  uVar7 = *(int *)(param_1 + 0xa0) * 0x200 + *(int *)(param_1 + 0xa4);
  if (uVar7 != 0) {
    uVar9 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)(uVar9 >> 9) * 8);
      uVar6 = (ulonglong)((uVar9 & 0x1ff) << 6);
      if ((*(char *)(lVar4 + 0x20 + uVar6) == '\x01') &&
         (pdVar2 = (double *)(lVar4 + 8 + uVar6), *pdVar2 <= param_5 && param_5 != *pdVar2)) {
        puVar8 = (undefined4 *)(lVar4 + uVar6);
        if (*(double *)(puVar8 + 4) * *(double *)(puVar8 + 4) +
            *(double *)(puVar8 + 6) * *(double *)(puVar8 + 6) < param_4 * param_4) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1446f48e2(param_2,iVar3);
          }
          *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = *puVar8;
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_14489624a(param_3,iVar3);
          }
          uVar5 = *(undefined8 *)(puVar8 + 6);
          puVar1 = (undefined8 *)(*param_3 + (longlong)iVar3 * 0x10);
          *puVar1 = *(undefined8 *)(puVar8 + 4);
          puVar1[1] = uVar5;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
  }
  return;
}



// FUNCTION 1485eb83f FUN_1485eb83f body=23 status=ok
// SIG undefined FUN_1485eb83f(void)

void FUN_1485eb83f(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 1485eb856 FUN_1485eb856 body=98 status=ok
// SIG undefined FUN_1485eb856(void)

void FUN_1485eb856(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1485eaacb(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1485eb8b8 FUN_1485eb8b8 body=62 status=ok
// SIG undefined FUN_1485eb8b8(void)

void FUN_1485eb8b8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1485eb8f6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1485eb8f6 FUN_1485eb8f6 body=112 status=ok
// SIG undefined FUN_1485eb8f6(void)

ulonglong FUN_1485eb8f6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1485eb930;
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
LAB_1485eb930:
  return param_2 & 0xffffffff;
}



// FUNCTION 1485eb966 FUN_1485eb966 body=73 status=ok
// SIG undefined FUN_1485eb966(void)

void FUN_1485eb966(longlong param_1,int param_2)

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



// FUNCTION 1485eb9b0 FUN_1485eb9b0 body=106 status=ok
// SIG undefined FUN_1485eb9b0(void)

undefined8 FUN_1485eb9b0(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1485eba1a FUN_1485eba1a body=50 status=ok
// SIG undefined FUN_1485eba1a(void)

void FUN_1485eba1a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
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
    *(undefined1 *)(param_1 + 0x10 + lVar2) = *(undefined1 *)(param_2 + 0x10 + lVar2);
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1485eba4c FUN_1485eba4c body=153 status=ok
// SIG undefined FUN_1485eba4c(void)

void FUN_1485eba4c(ulonglong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = (int)param_2[1];
  lVar2 = *param_2;
  lVar4 = (longlong)((param_3 + 1) % iVar1) * 0x10;
  lVar3 = (longlong)((param_3 + iVar1 + -1) % iVar1) * 0x10;
  dVar5 = *(double *)(lVar2 + 8 + lVar4) - *(double *)(lVar2 + 8 + lVar3);
  dVar7 = *(double *)(lVar2 + lVar4) - *(double *)(lVar2 + lVar3);
  dVar8 = SQRT(dVar7 * dVar7 + dVar5 * dVar5);
  dVar6 = 0.0;
  if (0.0 < dVar8) {
    dVar6 = dVar5 * (1.0 / dVar8);
  }
  *param_1 = -(ulonglong)(0.0 < dVar8) & (ulonglong)(dVar7 * (1.0 / dVar8));
  param_1[1] = (ulonglong)dVar6;
  return;
}



// FUNCTION 1485ebae6 FUN_1485ebae6 body=115 status=ok
// SIG undefined FUN_1485ebae6(void)

void FUN_1485ebae6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1485ebb5a FUN_1485ebb5a body=86 status=ok
// SIG undefined FUN_1485ebb5a(void)

void FUN_1485ebb5a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1485ebbb0 FUN_1485ebbb0 body=245 status=ok
// SIG undefined FUN_1485ebbb0(void)

void FUN_1485ebbb0(double *param_1,double *param_2,double *param_3,double param_4,
                  undefined1 *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_1[2] - param_3[2];
  dVar4 = param_1[1] - param_3[1];
  dVar2 = *param_1 - *param_3;
  dVar1 = dVar3 * param_2[2] + dVar2 * *param_2 + dVar4 * param_2[1];
  dVar3 = dVar1 * dVar1 - ((dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4) - param_4 * param_4);
  if (dVar3 <= 0.0) {
    if (0.0 <= dVar3) {
      *param_5 = 1;
      *(undefined4 *)(param_5 + 4) = 1;
      *(double *)(param_5 + 8) = -dVar1;
      *(double *)(param_5 + 0x10) = -dVar1;
    }
    else {
      *param_5 = 0;
      *(undefined4 *)(param_5 + 4) = 0;
    }
  }
  else {
    *param_5 = 1;
    *(undefined4 *)(param_5 + 4) = 2;
    if (dVar3 < 0.0) {
      dVar3 = sqrt(dVar3);
    }
    else {
      dVar3 = SQRT(dVar3);
    }
    *(double *)(param_5 + 8) = -dVar1 - dVar3;
    *(double *)(param_5 + 0x10) = dVar3 - dVar1;
  }
  return;
}



// FUNCTION 1485ebcaa FUN_1485ebcaa body=162 status=ok
// SIG undefined FUN_1485ebcaa(void)

void FUN_1485ebcaa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_1c;
  local_30 = local_24;
  FUN_1485ebd4e(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ebd4e FUN_1485ebd4e body=122 status=ok
// SIG undefined FUN_1485ebd4e(void)

void FUN_1485ebd4e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0xb0) != 0) || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)) &&
     (*(int *)(param_1 + 0x338) != -1)) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
    lVar1 = FUN_1402ad1e0(lVar1);
    if (lVar1 != 0) {
      lVar1 = **(longlong **)(lVar1 + 0x40);
      lVar2 = (longlong)*(int *)(param_1 + 0x338) * 0xd8;
      *(undefined4 *)(lVar1 + 0x44 + lVar2) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(lVar1 + 0x3c + lVar2) = *param_2;
    }
  }
  return;
}



// FUNCTION 1485ebdf2 FUN_1485ebdf2 body=526 status=ok
// SIG undefined FUN_1485ebdf2(void)

void FUN_1485ebdf2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_50;
  uStack_70 = uStack_48;
  local_68 = local_40;
  local_98 = local_30;
  uStack_94 = uStack_2c;
  uStack_90 = uStack_28;
  uStack_8c = uStack_24;
  local_88 = local_20;
  local_a8 = local_54;
  FUN_1485ec002(local_18,&local_98,local_34);
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ec002 FUN_1485ec002 body=173 status=ok
// SIG undefined FUN_1485ec002(void)

void FUN_1485ec002(longlong *param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1402ad1e0(lVar1);
      if (lVar1 != 0) {
        local_38 = param_4[2];
        local_48 = *param_4;
        uStack_40 = param_4[1];
        local_68 = *param_2;
        uStack_64 = param_2[1];
        uStack_60 = param_2[2];
        uStack_5c = param_2[3];
        local_58 = *(undefined8 *)(param_2 + 4);
        local_78 = param_5;
        FUN_140ccfe78(*(undefined8 *)(lVar1 + 0x40),&local_68,param_3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ec0b0 FUN_1485ec0b0 body=156 status=ok
// SIG undefined FUN_1485ec0b0(void)

void FUN_1485ec0b0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145a58a88(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ec152 FUN_1485ec152 body=33 status=ok
// SIG undefined FUN_1485ec152(void)

void FUN_1485ec152(longlong param_1)

{
  FUN_1401b2056();
  FUN_14092e51e(param_1,*(undefined8 *)(param_1 + 0x390));
  return;
}



// FUNCTION 1485ec174 FUN_1485ec174 body=391 status=ok
// SIG undefined FUN_1485ec174(void)

void FUN_1485ec174(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x398);
  if ((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) {
    (**(code **)(*plVar2 + 0x490))(plVar2,*(undefined8 *)(param_1 + 0x390),&DAT_14cadad98,0);
    plVar2 = *(longlong **)(param_1 + 0x398);
    if (plVar2[0xcd] != 0) {
      lVar3 = *(longlong *)(param_1 + 0x390);
      local_38 = *(undefined8 *)(lVar3 + 0x2c8);
      local_48 = *(undefined4 *)(lVar3 + 0x2b8);
      uStack_44 = *(undefined4 *)(lVar3 + 700);
      uStack_40 = *(undefined4 *)(lVar3 + 0x2c0);
      uStack_3c = *(undefined4 *)(lVar3 + 0x2c4);
      FUN_1446f470e(&local_50,L"Extents",1);
      (**(code **)(*plVar2 + 0xa10))(plVar2,local_50,&local_48);
      plVar2 = *(longlong **)(param_1 + 0x398);
      uVar1 = *(undefined4 *)(lVar3 + 0x2a8);
      FUN_1446f470e(&local_58,L"User.ResolutionX",1);
      (**(code **)(*plVar2 + 0xa00))(plVar2,local_58,uVar1);
      plVar2 = *(longlong **)(param_1 + 0x398);
      uVar1 = *(undefined4 *)(lVar3 + 0x2ac);
      FUN_1446f470e(&local_60,L"User.ResolutionY",1);
      (**(code **)(*plVar2 + 0xa00))(plVar2,local_60,uVar1);
      plVar2 = *(longlong **)(param_1 + 0x398);
      uVar1 = *(undefined4 *)(lVar3 + 0x2b0);
      FUN_1446f470e(&local_68,L"User.ResolutionZ",1);
      (**(code **)(*plVar2 + 0xa00))(plVar2,local_68,uVar1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ec2fc FUN_1485ec2fc body=386 status=ok
// SIG undefined FUN_1485ec2fc(void)

void FUN_1485ec2fc(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x310);
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
      lVar3 = *(longlong *)(param_1 + 0x310);
    }
    lVar3 = FUN_1448e494c(lVar2,lVar3);
    if (lVar3 != 0) {
      FUN_144938f46(lVar3,*(undefined8 *)(param_1 + 0x318),&DAT_149e1e318);
      FUN_144938f46(lVar3,*(undefined8 *)(param_1 + 0x328),&DAT_149e1e318);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x330);
  if ((((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) &&
      (*(longlong *)(lVar3 + 0x28) != 0)) &&
     ((*(uint *)(*(longlong *)(lVar3 + 0x28) + 8) >> 0x1e & 1) == 0)) {
    local_38 = DAT_14c8464f0;
    local_48 = (undefined4)DAT_14c8464e0;
    uStack_44 = DAT_14c8464e0._4_4_;
    uStack_40 = (undefined4)DAT_14c8464e8;
    uStack_3c = DAT_14c8464e8._4_4_;
    FUN_1400021e4(param_1 + 0x318,local_58);
    FUN_1402ad4d2(lVar3,local_58,&local_48);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x330);
    local_68 = DAT_14c8464f0;
    local_78 = (undefined4)DAT_14c8464e0;
    uStack_74 = DAT_14c8464e0._4_4_;
    uStack_70 = (undefined4)DAT_14c8464e8;
    uStack_6c = DAT_14c8464e8._4_4_;
    FUN_1400021e4(param_1 + 0x328,local_58);
    FUN_1402ad4d2(uVar1,local_58,&local_78);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1402ada0e(*(undefined8 *)(param_1 + 0x330));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ec480 FUN_1485ec480 body=26 status=ok
// SIG undefined FUN_1485ec480(void)

void FUN_1485ec480(undefined8 param_1)

{
  FUN_1402b6186();
  FUN_145952c00(param_1);
  return;
}



// FUNCTION 1485ec49a FUN_1485ec49a body=42 status=ok
// SIG undefined FUN_1485ec49a(void)

void FUN_1485ec49a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485ec4d0 FUN_1485ec4d0 body=96 status=ok
// SIG undefined FUN_1485ec4d0(void)

undefined8 FUN_1485ec4d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14152e57e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb50ba0,1);
  return uVar3;
}



// FUNCTION 1485ec530 FUN_1485ec530 body=52 status=ok
// SIG undefined FUN_1485ec530(void)

void FUN_1485ec530(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485ec564 FUN_1485ec564 body=42 status=ok
// SIG undefined FUN_1485ec564(void)

void FUN_1485ec564(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485ec59a FUN_1485ec59a body=96 status=ok
// SIG undefined FUN_1485ec59a(void)

undefined8 FUN_1485ec59a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141574d50();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb50c28,1);
  return uVar3;
}



// FUNCTION 1485ec5fa FUN_1485ec5fa body=52 status=ok
// SIG undefined FUN_1485ec5fa(void)

void FUN_1485ec5fa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485ec62e FUN_1485ec62e body=42 status=ok
// SIG undefined FUN_1485ec62e(void)

void FUN_1485ec62e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485ec664 FUN_1485ec664 body=96 status=ok
// SIG undefined FUN_1485ec664(void)

undefined8 FUN_1485ec664(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141593818();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb50cb0,1);
  return uVar3;
}



// FUNCTION 1485ec6c4 FUN_1485ec6c4 body=52 status=ok
// SIG undefined FUN_1485ec6c4(void)

void FUN_1485ec6c4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485ec6f8 FUN_1485ec6f8 body=42 status=ok
// SIG undefined FUN_1485ec6f8(void)

void FUN_1485ec6f8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485ec72e FUN_1485ec72e body=96 status=ok
// SIG undefined FUN_1485ec72e(void)

undefined8 FUN_1485ec72e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9c98a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb50d38,1);
  return uVar3;
}



// FUNCTION 1485ec78e FUN_1485ec78e body=52 status=ok
// SIG undefined FUN_1485ec78e(void)

void FUN_1485ec78e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485ec7c2 FUN_1485ec7c2 body=42 status=ok
// SIG undefined FUN_1485ec7c2(void)

void FUN_1485ec7c2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485ec7f8 FUN_1485ec7f8 body=96 status=ok
// SIG undefined FUN_1485ec7f8(void)

undefined8 FUN_1485ec7f8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141579b64();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb50dc0,1);
  return uVar3;
}



// FUNCTION 1485ec858 FUN_1485ec858 body=52 status=ok
// SIG undefined FUN_1485ec858(void)

void FUN_1485ec858(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485ec88c FUN_1485ec88c body=42 status=ok
// SIG undefined FUN_1485ec88c(void)

void FUN_1485ec88c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485ec8c2 FUN_1485ec8c2 body=96 status=ok
// SIG undefined FUN_1485ec8c2(void)

undefined8 FUN_1485ec8c2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157aeba();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb50e48,1);
  return uVar3;
}



// FUNCTION 1485ec922 FUN_1485ec922 body=52 status=ok
// SIG undefined FUN_1485ec922(void)

void FUN_1485ec922(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485ec960 FUN_1485ec960 body=71 status=ok
// SIG undefined FUN_1485ec960(void)

void FUN_1485ec960(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2 * 0xd8;
  FUN_141510714(*param_1 + lVar1 + 0x98);
  (*(code *)**(undefined8 **)(*param_1 + lVar1))(*param_1 + lVar1,0);
  FUN_1485ee05e(param_1,param_2);
  return;
}



// FUNCTION 1485ec9a7 FUN_1485ec9a7 body=177 status=ok
// SIG undefined FUN_1485ec9a7(void)

void FUN_1485ec9a7(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e9c98a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb50d38,param_4);
  local_78 = &DAT_14cb50d38;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1485edc9c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485eca5a FUN_1485eca5a body=303 status=ok
// SIG undefined FUN_1485eca5a(void)

undefined4 FUN_1485eca5a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
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
  iVar3 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_1[5];
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if ((iStack_44 == iVar3) && (local_50 == plVar1)) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = FUN_1485eccba(*local_80 + (longlong)iStack_64 * 0xd8 + 0xa8,param_2);
      if ((char)uVar2 != '\0') break;
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar3) || (local_70 != plVar1)) || (local_80 != param_1));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1485ecb8a FUN_1485ecb8a body=303 status=ok
// SIG undefined FUN_1485ecb8a(void)

undefined4 FUN_1485ecb8a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
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
  iVar3 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_1[5];
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if ((iStack_44 == iVar3) && (local_50 == plVar1)) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = FUN_1485eccba(*local_80 + (longlong)iStack_64 * 0xd8 + 0xb0,param_2);
      if ((char)uVar2 != '\0') break;
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar3) || (local_70 != plVar1)) || (local_80 != param_1));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1485eccba FUN_1485eccba body=53 status=ok
// SIG undefined FUN_1485eccba(void)

ulonglong FUN_1485eccba(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1485eccf0 FUN_1485eccf0 body=118 status=ok
// SIG undefined FUN_1485eccf0(void)

undefined8 * FUN_1485eccf0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2b0,0x10);
  FUN_1406ff4f8(puVar1,param_1,0);
  *puVar1 = &PTR_FUN_14afaaf30;
  *(undefined4 *)(puVar1 + 0x53) = *(undefined4 *)(param_1 + 0x620);
  *(undefined4 *)((longlong)puVar1 + 0x29c) = *(undefined4 *)(param_1 + 0x628);
  *(byte *)(puVar1 + 0x54) = *(byte *)(puVar1 + 0x54) & 0xfe | *(byte *)(param_1 + 0x624) & 1;
  *(byte *)((longlong)puVar1 + 0x6f) = *(byte *)((longlong)puVar1 + 0x6f) & 0x7f;
  return puVar1;
}



// FUNCTION 1485ecdc2 FUN_1485ecdc2 body=45 status=ok
// SIG undefined FUN_1485ecdc2(void)

longlong FUN_1485ecdc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ecdf0 FUN_1485ecdf0 body=45 status=ok
// SIG undefined FUN_1485ecdf0(void)

longlong FUN_1485ecdf0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ece1e FUN_1485ece1e body=48 status=ok
// SIG undefined FUN_1485ece1e(void)

longlong FUN_1485ece1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ece4e FUN_1485ece4e body=48 status=ok
// SIG undefined FUN_1485ece4e(void)

longlong FUN_1485ece4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ece7e FUN_1485ece7e body=48 status=ok
// SIG undefined FUN_1485ece7e(void)

longlong FUN_1485ece7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485eceae FUN_1485eceae body=45 status=ok
// SIG undefined FUN_1485eceae(void)

longlong FUN_1485eceae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ecedc FUN_1485ecedc body=48 status=ok
// SIG undefined FUN_1485ecedc(void)

longlong FUN_1485ecedc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ecf0c FUN_1485ecf0c body=48 status=ok
// SIG undefined FUN_1485ecf0c(void)

longlong FUN_1485ecf0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ecf3c FUN_1485ecf3c body=48 status=ok
// SIG undefined FUN_1485ecf3c(void)

longlong FUN_1485ecf3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ecf72 FUN_1485ecf72 body=45 status=ok
// SIG undefined FUN_1485ecf72(void)

longlong FUN_1485ecf72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c7c838(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ed034 FUN_1485ed034 body=59 status=ok
// SIG undefined FUN_1485ed034(void)

undefined8 FUN_1485ed034(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ed1b2 FUN_1485ed1b2 body=59 status=ok
// SIG undefined FUN_1485ed1b2(void)

undefined8 FUN_1485ed1b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ed254 FUN_1485ed254 body=138 status=ok
// SIG undefined FUN_1485ed254(void)

code * FUN_1485ed254(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DeltaTime";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485ed2de;
}



// FUNCTION 1485ed2de FUN_1485ed2de body=138 status=ok
// SIG undefined FUN_1485ed2de(void)

code * FUN_1485ed2de(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TurbulencePanSpeed";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x740000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485ed368;
}



// FUNCTION 1485ed368 FUN_1485ed368 body=138 status=ok
// SIG undefined FUN_1485ed368(void)

code * FUN_1485ed368(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TurbulenceCurlSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a4648;
}



// FUNCTION 1485ed3f2 FUN_1485ed3f2 body=138 status=ok
// SIG undefined FUN_1485ed3f2(void)

code * FUN_1485ed3f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalWind";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1461c91a2;
}



// FUNCTION 1485ed47c FUN_1485ed47c body=138 status=ok
// SIG undefined FUN_1485ed47c(void)

code * FUN_1485ed47c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485ed506;
}



// FUNCTION 1485ed506 FUN_1485ed506 body=138 status=ok
// SIG undefined FUN_1485ed506(void)

code * FUN_1485ed506(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeExtents";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485ed590;
}



// FUNCTION 1485ed590 FUN_1485ed590 body=132 status=ok
// SIG undefined FUN_1485ed590(void)

undefined1 * FUN_1485ed590(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1485ed614;
}



// FUNCTION 1485ed618 FUN_1485ed618 body=138 status=ok
// SIG undefined FUN_1485ed618(void)

code * FUN_1485ed618(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SphereSourceBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FGbxWindSphereSourceData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485ed6a2;
}



// FUNCTION 1485ed6a2 FUN_1485ed6a2 body=138 status=ok
// SIG undefined FUN_1485ed6a2(void)

code * FUN_1485ed6a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutObstacles";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4cb38;
}



// FUNCTION 1485ed72c FUN_1485ed72c body=138 status=ok
// SIG undefined FUN_1485ed72c(void)

code * FUN_1485ed72c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Obstacles";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0f092;
}



// FUNCTION 1485ed7ba FUN_1485ed7ba body=138 status=ok
// SIG undefined FUN_1485ed7ba(void)

code * FUN_1485ed7ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Obstacles";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9cc02;
}



// FUNCTION 1485ed844 FUN_1485ed844 body=138 status=ok
// SIG undefined FUN_1485ed844(void)

code * FUN_1485ed844(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined2 **)(lVar2 + lVar3) = &DAT_149e25cc8;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9cb78;
}



// FUNCTION 1485ed8ce FUN_1485ed8ce body=138 status=ok
// SIG undefined FUN_1485ed8ce(void)

code * FUN_1485ed8ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Iteration";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e68144;
}



// FUNCTION 1485ed958 FUN_1485ed958 body=138 status=ok
// SIG undefined FUN_1485ed958(void)

code * FUN_1485ed958(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Obstacles";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a4bb0;
}



// FUNCTION 1485ed9e2 FUN_1485ed9e2 body=138 status=ok
// SIG undefined FUN_1485ed9e2(void)

code * FUN_1485ed9e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Pressure";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000db;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485eda6c;
}



// FUNCTION 1485eda6c FUN_1485eda6c body=138 status=ok
// SIG undefined FUN_1485eda6c(void)

code * FUN_1485eda6c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Velocity";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a4d4c;
}



// FUNCTION 1485edaf6 FUN_1485edaf6 body=31 status=ok
// SIG undefined FUN_1485edaf6(void)

undefined8 FUN_1485edaf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485edb32 FUN_1485edb32 body=93 status=ok
// SIG undefined FUN_1485edb32(void)

void FUN_1485edb32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afab170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485edb90 FUN_1485edb90 body=126 status=ok
// SIG undefined FUN_1485edb90(void)

void FUN_1485edb90(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afab170;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485edbff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485edc0e FUN_1485edc0e body=21 status=ok
// SIG undefined FUN_1485edc0e(void)

undefined8 FUN_1485edc0e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485edc24 FUN_1485edc24 body=38 status=ok
// SIG undefined FUN_1485edc24(void)

undefined8 FUN_1485edc24(undefined8 param_1,int param_2)

{
  FUN_1464a444c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485edc7e FUN_1485edc7e body=29 status=ok
// SIG undefined FUN_1485edc7e(void)

undefined8 FUN_1485edc7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485edc9c FUN_1485edc9c body=384 status=ok
// SIG undefined FUN_1485edc9c(void)

void FUN_1485edc9c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14cb50d80;
  if (DAT_14cb50d80 != 0) {
    LOCK();
    *(int *)(DAT_14cb50d80 + 8) = *(int *)(DAT_14cb50d80 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb50d38;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14afab370;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ede1e FUN_1485ede1e body=38 status=ok
// SIG undefined FUN_1485ede1e(void)

undefined8 FUN_1485ede1e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ede44 FUN_1485ede44 body=163 status=ok
// SIG undefined FUN_1485ede44(void)

void FUN_1485ede44(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143bf5782();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143bf586a(param_1,param_2);
  return;
}



// FUNCTION 1485edee7 FUN_1485edee7 body=374 status=ok
// SIG undefined FUN_1485edee7(void)

void FUN_1485edee7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485ee05e FUN_1485ee05e body=122 status=ok
// SIG undefined FUN_1485ee05e(void)

void FUN_1485ee05e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xd8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xd8 + 4) = uVar5;
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



// FUNCTION 1485ee0e2 FUN_1485ee0e2 body=36 status=ok
// SIG undefined FUN_1485ee0e2(void)

undefined8 FUN_1485ee0e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485ee122 FUN_1485ee122 body=93 status=ok
// SIG undefined FUN_1485ee122(void)

void FUN_1485ee122(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afac140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485ee180 FUN_1485ee180 body=123 status=ok
// SIG undefined FUN_1485ee180(void)

void FUN_1485ee180(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afac140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485ee1fc FUN_1485ee1fc body=21 status=ok
// SIG undefined FUN_1485ee1fc(void)

undefined8 FUN_1485ee1fc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485ee21a FUN_1485ee21a body=75 status=ok
// SIG undefined FUN_1485ee21a(void)

void FUN_1485ee21a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14081938c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ee26a FUN_1485ee26a body=246 status=ok
// SIG undefined FUN_1485ee26a(void)

void FUN_1485ee26a(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_48,puVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ee36a FUN_1485ee36a body=335 status=ok
// SIG undefined FUN_1485ee36a(void)

void FUN_1485ee36a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_8c;
  undefined4 local_60;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  puVar2 = local_130;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_30,puVar2);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ee4c0 FUN_1485ee4c0 body=340 status=ok
// SIG undefined FUN_1485ee4c0(void)

void FUN_1485ee4c0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,local_28,local_30,local_38);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ee616 FUN_1485ee616 body=42 status=ok
// SIG undefined FUN_1485ee616(void)

void FUN_1485ee616(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485ee65c FUN_1485ee65c body=231 status=ok
// SIG undefined FUN_1485ee65c(void)

void FUN_1485ee65c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_a8 = (undefined4)DAT_14c8464e0;
  uStack_a4 = DAT_14c8464e0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8464e8;
  uStack_9c = DAT_14c8464e8._4_4_;
  local_98 = DAT_14c8464f0;
  local_90 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  puVar3 = &local_c8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485f0c2e(puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ee744 FUN_1485ee744 body=397 status=ok
// SIG undefined FUN_1485ee744(void)

void FUN_1485ee744(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0 [12];
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_38;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143bf7410(local_a0,puVar2,local_39,local_40);
  puVar3 = local_a0;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ee8d2 FUN_1485ee8d2 body=619 status=ok
// SIG undefined FUN_1485ee8d2(void)

void FUN_1485ee8d2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  void *pvStack_60;
  ulonglong local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_68 = 0;
  pvStack_60 = (void *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  FUN_140f4d408();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0x3ff00000;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  _Src = pvStack_60;
  puVar3 = &local_d8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_100 = local_78;
  local_f8 = (undefined4)uStack_70;
  uStack_f4 = uStack_70._4_4_;
  uStack_f0 = (undefined4)local_68;
  uStack_ec = local_68._4_4_;
  local_e8 = (void *)0x0;
  lVar4 = (longlong)(int)local_58;
  local_e0 = (int)local_58;
  if (lVar4 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_58 & 0xffffffff,0);
    memcpy(local_e8,_Src,lVar4 * 2);
  }
  uVar1 = FUN_1485f0c14(puVar2,&local_100,puVar3);
  *param_3 = uVar1;
  if (pvStack_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485eeb3e FUN_1485eeb3e body=232 status=ok
// SIG undefined FUN_1485eeb3e(void)

void FUN_1485eeb3e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_a8 = (undefined4)DAT_14c8464e0;
  uStack_a4 = DAT_14c8464e0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8464e8;
  uStack_9c = DAT_14c8464e8._4_4_;
  local_98 = DAT_14c8464f0;
  local_90 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  puVar3 = &local_c8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485f0c3e(puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485eec28 FUN_1485eec28 body=443 status=ok
// SIG undefined FUN_1485eec28(void)

void FUN_1485eec28(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar2 = &local_38;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485f0c10(puVar2,local_40,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485eedec FUN_1485eedec body=568 status=ok
// SIG undefined FUN_1485eedec(void)

void FUN_1485eedec(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_1a8 [32];
  undefined8 local_188 [13];
  int local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_11c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  puVar4 = &local_118;
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2;
  }
  puVar2 = &local_b8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485f0bd8(local_188,puVar2,puVar4,local_11c != 0);
  puVar3 = local_188;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_50 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ef026 FUN_1485ef026 body=444 status=ok
// SIG undefined FUN_1485ef026(void)

void FUN_1485ef026(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_44;
  FUN_1485f0bb8(&local_60,puVar2,local_39,local_40);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ef1e4 FUN_1485ef1e4 body=551 status=ok
// SIG undefined FUN_1485ef1e4(void)

void FUN_1485ef1e4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar4 = &local_5c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  local_88 = &local_60;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_88 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  FUN_1485f0bca(puVar3,local_39,&local_78,puVar4);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ef40c FUN_1485ef40c body=314 status=ok
// SIG undefined FUN_1485ef40c(void)

void FUN_1485ef40c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong **pplVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  pplVar2 = local_58;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485f0c32(&local_60,puVar1,pplVar2);
  *param_3 = local_60;
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ef54e FUN_1485ef54e body=112 status=ok
// SIG undefined FUN_1485ef54e(void)

void FUN_1485ef54e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485f0c7a(param_1,&local_50);
  *(undefined8 *)(param_3 + 0xc) = local_20;
  param_3[8] = local_30;
  param_3[9] = uStack_2c;
  param_3[10] = uStack_28;
  param_3[0xb] = uStack_24;
  param_3[4] = local_40;
  param_3[5] = uStack_3c;
  param_3[6] = uStack_38;
  param_3[7] = uStack_34;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ef5c0 FUN_1485ef5c0 body=102 status=ok
// SIG undefined FUN_1485ef5c0(void)

void FUN_1485ef5c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485f0c42(param_1,local_78);
  puVar2 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ef66c FUN_1485ef66c body=40 status=ok
// SIG undefined FUN_1485ef66c(void)

void FUN_1485ef66c(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x20))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485ef698 FUN_1485ef698 body=38 status=ok
// SIG undefined FUN_1485ef698(void)

void FUN_1485ef698(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x28))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485ef6d2 FUN_1485ef6d2 body=48 status=ok
// SIG undefined FUN_1485ef6d2(void)

longlong FUN_1485ef6d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd8;
  FUN_1406769f6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef710 FUN_1485ef710 body=48 status=ok
// SIG undefined FUN_1485ef710(void)

longlong FUN_1485ef710(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_1406ff0d8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef74c FUN_1485ef74c body=54 status=ok
// SIG undefined FUN_1485ef74c(void)

undefined8 * FUN_1485ef74c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxSpline\\Source\\GbxSpline/Public/Features/Clutter/GbxSplineClutterConfig.h"
                ,0x44,L"Pure virtual not implemented (%s)",L"EvaluateRule");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1485ef796 FUN_1485ef796 body=45 status=ok
// SIG undefined FUN_1485ef796(void)

longlong FUN_1485ef796(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef7d6 FUN_1485ef7d6 body=45 status=ok
// SIG undefined FUN_1485ef7d6(void)

longlong FUN_1485ef7d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140c72176(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef804 FUN_1485ef804 body=48 status=ok
// SIG undefined FUN_1485ef804(void)

longlong FUN_1485ef804(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140c72176(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef834 FUN_1485ef834 body=48 status=ok
// SIG undefined FUN_1485ef834(void)

longlong FUN_1485ef834(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140c72176(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef864 FUN_1485ef864 body=48 status=ok
// SIG undefined FUN_1485ef864(void)

longlong FUN_1485ef864(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140c72176(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef894 FUN_1485ef894 body=45 status=ok
// SIG undefined FUN_1485ef894(void)

longlong FUN_1485ef894(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef8c8 FUN_1485ef8c8 body=45 status=ok
// SIG undefined FUN_1485ef8c8(void)

longlong FUN_1485ef8c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef8fc FUN_1485ef8fc body=45 status=ok
// SIG undefined FUN_1485ef8fc(void)

longlong FUN_1485ef8fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c792a2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef930 FUN_1485ef930 body=45 status=ok
// SIG undefined FUN_1485ef930(void)

longlong FUN_1485ef930(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef964 FUN_1485ef964 body=45 status=ok
// SIG undefined FUN_1485ef964(void)

longlong FUN_1485ef964(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485ef99c FUN_1485ef99c body=45 status=ok
// SIG undefined FUN_1485ef99c(void)

longlong FUN_1485ef99c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c79310(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485efa18 FUN_1485efa18 body=59 status=ok
// SIG undefined FUN_1485efa18(void)

undefined8 FUN_1485efa18(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485efb82 FUN_1485efb82 body=39 status=ok
// SIG undefined FUN_1485efb82(void)

undefined8 FUN_1485efb82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485efbd2 FUN_1485efbd2 body=59 status=ok
// SIG undefined FUN_1485efbd2(void)

undefined8 FUN_1485efbd2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485efcf8 FUN_1485efcf8 body=59 status=ok
// SIG undefined FUN_1485efcf8(void)

undefined8 FUN_1485efcf8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485efd98 FUN_1485efd98 body=134 status=ok
// SIG undefined FUN_1485efd98(void)

undefined2 * FUN_1485efd98(undefined2 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0x101;
  lVar1 = FUN_145b763c8();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *(float *)(param_1 + 2) = (float)*(double *)(lVar2 + 0x98);
  lVar1 = FUN_145b763c8();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *(float *)(param_1 + 4) = (float)*(double *)(lVar2 + 0x98);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0x42b40000;
  return param_1;
}



// FUNCTION 1485efe9a FUN_1485efe9a body=59 status=ok
// SIG undefined FUN_1485efe9a(void)

undefined8 FUN_1485efe9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485eff3c FUN_1485eff3c body=64 status=ok
// SIG undefined FUN_1485eff3c(void)

void FUN_1485eff3c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[4] = DAT_14c8464e0;
  param_2[5] = uVar1;
  param_2[6] = DAT_14c8464f0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 1485eff7c FUN_1485eff7c body=60 status=ok
// SIG undefined FUN_1485eff7c(void)

void FUN_1485eff7c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[4] = DAT_14c8464e0;
  param_2[5] = uVar1;
  param_2[6] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 7) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 1485effd0 FUN_1485effd0 body=63 status=ok
// SIG undefined FUN_1485effd0(void)

undefined1 FUN_1485effd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485f00e4(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1485f0038 FUN_1485f0038 body=59 status=ok
// SIG undefined FUN_1485f0038(void)

undefined8 FUN_1485f0038(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f00e4 FUN_1485f00e4 body=153 status=ok
// SIG undefined FUN_1485f00e4(void)

longlong * FUN_1485f00e4(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[3];
    }
  }
  param_1[3] = lVar2;
  plVar3 = param_2 + 4;
  plVar4 = param_1 + 4;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  return param_1;
}



// FUNCTION 1485f01a6 FUN_1485f01a6 body=54 status=ok
// SIG undefined FUN_1485f01a6(void)

undefined1 FUN_1485f01a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485f02a4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1485f0204 FUN_1485f0204 body=59 status=ok
// SIG undefined FUN_1485f0204(void)

undefined8 FUN_1485f0204(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f02a4 FUN_1485f02a4 body=91 status=ok
// SIG undefined FUN_1485f02a4(void)

longlong * FUN_1485f02a4(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 1485f0334 FUN_1485f0334 body=54 status=ok
// SIG undefined FUN_1485f0334(void)

undefined1 FUN_1485f0334(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485f044c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1485f0392 FUN_1485f0392 body=59 status=ok
// SIG undefined FUN_1485f0392(void)

undefined8 FUN_1485f0392(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f03d8 FUN_1485f03d8 body=37 status=ok
// SIG undefined FUN_1485f03d8(void)

void FUN_1485f03d8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1485f044c FUN_1485f044c body=79 status=ok
// SIG undefined FUN_1485f044c(void)

undefined8 * FUN_1485f044c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1485f049c(param_1,iVar1);
      FUN_1485f04fe(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1485f049c FUN_1485f049c body=98 status=ok
// SIG undefined FUN_1485f049c(void)

void FUN_1485f049c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1485f04fe FUN_1485f04fe body=78 status=ok
// SIG undefined FUN_1485f04fe(void)

void FUN_1485f04fe(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1485f05c2 FUN_1485f05c2 body=87 status=ok
// SIG undefined FUN_1485f05c2(void)

undefined1 FUN_1485f05c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485f06f8(param_2,param_3);
    FUN_1485f07a6(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1485f0642 FUN_1485f0642 body=59 status=ok
// SIG undefined FUN_1485f0642(void)

undefined8 FUN_1485f0642(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f0688 FUN_1485f0688 body=34 status=ok
// SIG undefined FUN_1485f0688(void)

void FUN_1485f0688(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145cb7a96(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1485f06f8 FUN_1485f06f8 body=84 status=ok
// SIG undefined FUN_1485f06f8(void)

undefined8 * FUN_1485f06f8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1485f074c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1485f074c FUN_1485f074c body=90 status=ok
// SIG undefined FUN_1485f074c(void)

void FUN_1485f074c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1485f07a6 FUN_1485f07a6 body=122 status=ok
// SIG undefined FUN_1485f07a6(void)

longlong FUN_1485f07a6(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1485f0820(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1485f0820 FUN_1485f0820 body=242 status=ok
// SIG undefined FUN_1485f0820(void)

longlong * FUN_1485f0820(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145cb7b6e(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
        if ((uVar2 >> ((uint)uVar6 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          FUN_1485f0912(lVar4 + 8 + lVar7,lVar3 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x58 + lVar7) = *(undefined8 *)(lVar3 + 0x58 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x60;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1485f0912 FUN_1485f0912 body=153 status=ok
// SIG undefined FUN_1485f0912(void)

longlong * FUN_1485f0912(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  param_1[1] = 0;
  iVar1 = (int)param_2[2];
  lVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_140c99534(param_1 + 1,iVar1,0);
    FUN_140c994e3(param_1[1],lVar2,iVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x45) = *(undefined8 *)((longlong)param_2 + 0x45);
  lVar2 = param_2[3];
  lVar3 = param_2[4];
  lVar4 = param_2[5];
  lVar5 = param_2[6];
  lVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = lVar6;
  param_1[5] = lVar4;
  param_1[6] = lVar5;
  param_1[3] = lVar2;
  param_1[4] = lVar3;
  return param_1;
}



// FUNCTION 1485f09f4 FUN_1485f09f4 body=59 status=ok
// SIG undefined FUN_1485f09f4(void)

undefined8 FUN_1485f09f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f0a9a FUN_1485f0a9a body=126 status=ok
// SIG undefined FUN_1485f0a9a(void)

void FUN_1485f0a9a(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,&local_28);
  if (DAT_14c950c29 == '\x01') {
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      FUN_14689c22e();
    }
  }
  *param_3 = local_28;
  param_3[1] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f0b1a FUN_1485f0b1a body=126 status=ok
// SIG undefined FUN_1485f0b1a(void)

void FUN_1485f0b1a(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  if (DAT_14c950c29 == '\x01') {
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      FUN_14689c22e();
    }
  }
  *param_3 = local_28;
  param_3[1] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f0bb8 FUN_1485f0bb8 body=18 status=ok
// SIG undefined FUN_1485f0bb8(void)

undefined8 * FUN_1485f0bb8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1485f0bca FUN_1485f0bca body=13 status=ok
// SIG undefined FUN_1485f0bca(void)

void FUN_1485f0bca(void)

{
  undefined4 *in_R9;
  undefined4 *in_stack_00000028;
  
  *in_R9 = 0;
  *in_stack_00000028 = 0;
  return;
}



// FUNCTION 1485f0bd8 FUN_1485f0bd8 body=55 status=ok
// SIG undefined FUN_1485f0bd8(void)

undefined8 * FUN_1485f0bd8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1485f0c10 FUN_1485f0c10 body=3 status=ok
// SIG undefined FUN_1485f0c10(void)

undefined8 FUN_1485f0c10(void)

{
  return 0;
}



// FUNCTION 1485f0c14 FUN_1485f0c14 body=25 status=ok
// SIG undefined FUN_1485f0c14(void)

undefined8 FUN_1485f0c14(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return 0;
}



// FUNCTION 1485f0c2e FUN_1485f0c2e body=3 status=ok
// SIG undefined FUN_1485f0c2e(void)

undefined8 FUN_1485f0c2e(void)

{
  return 0;
}



// FUNCTION 1485f0c32 FUN_1485f0c32 body=11 status=ok
// SIG undefined FUN_1485f0c32(void)

undefined8 * FUN_1485f0c32(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1485f0c3e FUN_1485f0c3e body=3 status=ok
// SIG undefined FUN_1485f0c3e(void)

undefined8 FUN_1485f0c3e(void)

{
  return 0;
}



// FUNCTION 1485f0c42 FUN_1485f0c42 body=55 status=ok
// SIG undefined FUN_1485f0c42(void)

undefined8 * FUN_1485f0c42(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  return param_2;
}



// FUNCTION 1485f0c7a FUN_1485f0c7a body=26 status=ok
// SIG undefined FUN_1485f0c7a(void)

undefined8 * FUN_1485f0c7a(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  return param_2;
}



// FUNCTION 1485f0ca8 FUN_1485f0ca8 body=139 status=ok
// SIG undefined FUN_1485f0ca8(void)

undefined4 * FUN_1485f0ca8(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1485f0d34(param_1 + -0x28,&local_28);
  if (local_28 == 0) {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  FUN_140703b8c(local_28,param_2,*(undefined4 *)(param_1 + 8),1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1485f0d34 FUN_1485f0d34 body=63 status=ok
// SIG undefined FUN_1485f0d34(void)

longlong * FUN_1485f0d34(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1458e5dc4();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  *param_2 = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  return param_2;
}



// FUNCTION 1485f0d74 FUN_1485f0d74 body=139 status=ok
// SIG undefined FUN_1485f0d74(void)

undefined4 * FUN_1485f0d74(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1485f0d34(param_1 + -0x28,&local_28);
  if (local_28 == 0) {
    *(undefined8 *)(param_2 + 4) = DAT_14c846508;
    uVar3 = DAT_14c846500._4_4_;
    uVar2 = (undefined4)DAT_14c846500;
    uVar1 = DAT_14c8464f8._4_4_;
    *param_2 = (undefined4)DAT_14c8464f8;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  FUN_14099e18c(local_28,param_2,*(undefined4 *)(param_1 + 8),1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1485f0e08 FUN_1485f0e08 body=96 status=ok
// SIG undefined FUN_1485f0e08(void)

longlong * FUN_1485f0e08(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar1);
  }
  if ((lVar1 == 0) || ((DAT_14c950c29 & 1) == 0)) {
    *param_2 = lVar1;
    if (lVar1 == 0) {
      lVar1 = 0;
      goto LAB_1485f0e4e;
    }
  }
  else {
    FUN_14689c22e(lVar1);
    *param_2 = lVar1;
  }
  lVar1 = lVar1 + 0x28;
LAB_1485f0e4e:
  param_2[1] = lVar1;
  return param_2;
}



// FUNCTION 1485f0e68 FUN_1485f0e68 body=96 status=ok
// SIG undefined FUN_1485f0e68(void)

longlong * FUN_1485f0e68(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar1);
  }
  if ((lVar1 == 0) || ((DAT_14c950c29 & 1) == 0)) {
    *param_2 = lVar1;
    if (lVar1 == 0) {
      lVar1 = 0;
      goto LAB_1485f0eae;
    }
  }
  else {
    FUN_14689c22e(lVar1);
    *param_2 = lVar1;
  }
  lVar1 = lVar1 + 0x28;
LAB_1485f0eae:
  param_2[1] = lVar1;
  return param_2;
}



// FUNCTION 1485f0ed8 FUN_1485f0ed8 body=358 status=ok
// SIG undefined FUN_1485f0ed8(void)

void FUN_1485f0ed8(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (((*(uint *)(param_1 + -0xd0) & 0x10) == 0) &&
     (lVar2 = *(longlong *)(param_1 + -0xb8), lVar2 != 0)) {
    dVar10 = *(double *)(param_1 + -0xb0) * *(double *)(lVar2 + 0x280);
    dVar11 = *(double *)(param_1 + -0xa8) * *(double *)(lVar2 + 0x288);
    dVar9 = *(double *)(param_1 + -0xa0) * *(double *)(lVar2 + 0x290);
    dVar5 = *(double *)(lVar2 + 0x240);
    dVar6 = *(double *)(lVar2 + 0x248);
    dVar7 = *(double *)(lVar2 + 0x250);
    dVar1 = *(double *)(lVar2 + 600);
    dVar12 = dVar11 * dVar5 - dVar10 * dVar6;
    dVar13 = dVar9 * dVar6 - dVar11 * dVar7;
    dVar14 = dVar10 * dVar7 - dVar5 * dVar9;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    dVar4 = (dVar7 * dVar13 - dVar5 * dVar12) + *(double *)(lVar2 + 600) * dVar14 + dVar11 +
            *(double *)(lVar2 + 0x268);
    dVar11 = *(double *)(lVar2 + 0x270);
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = (dVar12 * dVar6 - dVar14 * dVar7) + dVar1 * dVar13 + dVar10 +
                   *(double *)(lVar2 + 0x260);
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *param_2 = auVar3;
    *(double *)param_2[1] = dVar12 * dVar1 + dVar9 + (dVar14 * dVar5 - dVar13 * dVar6) + dVar11;
  }
  else {
    *(undefined8 *)param_2[1] = *(undefined8 *)(param_1 + -0xa0);
    uVar8 = *(undefined8 *)(param_1 + -0xa8);
    *(undefined8 *)*param_2 = *(undefined8 *)(param_1 + -0xb0);
    *(undefined8 *)(*param_2 + 8) = uVar8;
  }
  return;
}



// FUNCTION 1485f103e FUN_1485f103e body=660 status=ok
// SIG undefined FUN_1485f103e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1485f103e(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  double *pdVar12;
  undefined1 auVar13 [16];
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
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_60;
  double dVar2;
  double dVar4;
  double dVar6;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(uint *)(param_1 + -0xd0) & 0x10) == 0) &&
     (lVar7 = *(longlong *)(param_1 + -0xb8), lVar7 != 0)) {
    local_88 = *(double *)(lVar7 + 0x240);
    dStack_80 = *(double *)(lVar7 + 0x248);
    pdVar12 = &local_88;
    local_78 = *(double *)(lVar7 + 0x250);
    dStack_70 = *(double *)(lVar7 + 600);
    uVar9 = FUN_1448052ee(pdVar12,&local_a8);
    dVar2 = (double)DAT_1499387d0;
    dVar1 = DAT_1499387d0._8_8_;
    auVar19._8_8_ = dStack_a0 - DAT_14c846500;
    auVar19._0_8_ = local_a8 - DAT_14c8464f8;
    auVar20 = divpd(auVar19,_DAT_1499387d0);
    auVar13._0_8_ = (local_98 - DAT_14c846508) / 360.0;
    auVar13._8_8_ = 0;
    auVar21 = roundpd(auVar20,auVar20,3);
    auVar20 = roundpd(auVar13,auVar13,3);
    auVar27._0_8_ = (local_98 - DAT_14c846508) - auVar20._0_8_ * dVar2;
    auVar27._8_8_ = 0.0 - auVar20._8_8_ * dVar1;
    dVar25 = (local_a8 - DAT_14c8464f8) - auVar21._0_8_ * dVar2;
    dVar26 = (dStack_a0 - DAT_14c846500) - auVar21._8_8_ * dVar1;
    auVar24._0_8_ = dVar25 + dVar2;
    auVar24._8_8_ = dVar26 + dVar1;
    auVar23._0_8_ = dVar2 + auVar27._0_8_;
    auVar23._8_8_ = dVar1 + auVar27._8_8_;
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar26);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar25);
    auVar20._8_8_ = dVar26;
    auVar20._0_8_ = dVar25;
    auVar21 = blendvpd(auVar24,auVar20,auVar14);
    auVar15._8_8_ = -(ulonglong)(0.0 <= auVar27._8_8_);
    auVar15._0_8_ = -(ulonglong)(0.0 <= auVar27._0_8_);
    auVar20 = blendvpd(auVar23,auVar27,auVar15);
    auVar28._0_8_ = auVar21._0_8_ + -360.0;
    auVar28._8_8_ = auVar21._8_8_ + -360.0;
    auVar16._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
    auVar16._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
    auVar13 = blendvpd(auVar21,auVar28,auVar16);
    auVar17._8_8_ = -(ulonglong)(180.0 < auVar20._8_8_);
    auVar17._0_8_ = -(ulonglong)(180.0 < auVar20._0_8_);
    auVar21._8_8_ = auVar20._8_8_ + -360.0;
    auVar21._0_8_ = auVar20._0_8_ + -360.0;
    auVar20 = blendvpd(auVar20,auVar21,auVar17);
    auVar22._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar13._8_8_));
    auVar22._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar13._0_8_));
    iVar10 = movmskpd(uVar9,auVar22);
    auVar18._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar20._8_8_));
    auVar18._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar20._0_8_));
    uVar11 = movmskpd((int)pdVar12,auVar18);
    if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
      FUN_144a7484c(param_1 + -0x98,&local_a8);
      dVar1 = *(double *)(lVar7 + 600);
      dVar2 = *(double *)(lVar7 + 600);
      dVar26 = *(double *)(lVar7 + 0x248);
      dVar25 = *(double *)(lVar7 + 0x248);
      dVar3 = *(double *)(lVar7 + 0x240);
      dVar4 = *(double *)(lVar7 + 0x240);
      dVar5 = *(double *)(lVar7 + 0x250);
      dVar6 = *(double *)(lVar7 + 0x250);
      local_88 = dStack_a0 * dVar5 * -1.0 +
                 local_98 * dVar26 + dVar3 * dStack_90 * 1.0 + dVar1 * local_a8;
      dStack_80 = local_a8 * dVar6 * 1.0 +
                  dStack_90 * dVar25 + dVar4 * local_98 * -1.0 + dVar2 * dStack_a0;
      local_78 = dStack_90 * dVar5 * 1.0 +
                 ((dVar3 * dStack_a0 * 1.0 + dVar1 * local_98) - dVar26 * local_a8);
      dStack_70 = local_98 * dVar6 * -1.0 +
                  ((dVar4 * local_a8 * -1.0 + dVar2 * dStack_90) - dVar25 * dStack_a0);
      FUN_1448052ee(&local_88,param_2);
      goto LAB_1485f1296;
    }
  }
  param_2[2] = *(undefined8 *)(param_1 + -0x88);
  uVar8 = *(undefined8 *)(param_1 + -0x90);
  *param_2 = *(undefined8 *)(param_1 + -0x98);
  param_2[1] = uVar8;
LAB_1485f1296:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f12d8 FUN_1485f12d8 body=100 status=ok
// SIG undefined FUN_1485f12d8(void)

undefined8 FUN_1485f12d8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(longlong *)(param_1 + -0xa0);
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  FUN_1485f133e(param_2,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f133e FUN_1485f133e body=108 status=ok
// SIG undefined FUN_1485f133e(void)

longlong * FUN_1485f133e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    *param_1 = lVar2;
    if (lVar2 == 0) {
      param_1[1] = 0;
    }
  }
  else {
    FUN_14689c22e(lVar2);
    *param_1 = lVar2;
  }
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = FUN_1458f284e();
    lVar2 = FUN_144718840(lVar2,uVar1);
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 1485f13aa FUN_1485f13aa body=100 status=ok
// SIG undefined FUN_1485f13aa(void)

undefined8 FUN_1485f13aa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(longlong *)(param_1 + -0x88);
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  FUN_1485f133e(param_2,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f1458 FUN_1485f1458 body=59 status=ok
// SIG undefined FUN_1485f1458(void)

undefined8 FUN_1485f1458(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f159a FUN_1485f159a body=54 status=ok
// SIG undefined FUN_1485f159a(void)

undefined1 FUN_1485f159a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485f16b2(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1485f15f8 FUN_1485f15f8 body=59 status=ok
// SIG undefined FUN_1485f15f8(void)

undefined8 FUN_1485f15f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f163e FUN_1485f163e body=38 status=ok
// SIG undefined FUN_1485f163e(void)

void FUN_1485f163e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1485f16b2 FUN_1485f16b2 body=99 status=ok
// SIG undefined FUN_1485f16b2(void)

longlong * FUN_1485f16b2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *param_2;
    }
  }
  *param_1 = lVar5;
  FUN_140c99494(param_1 + 1,param_2 + 1);
  lVar5 = param_2[4];
  lVar1 = param_2[5];
  lVar2 = param_2[6];
  lVar3 = param_2[7];
  lVar4 = param_2[8];
  param_1[3] = param_2[3];
  param_1[4] = lVar5;
  param_1[5] = lVar1;
  param_1[6] = lVar2;
  param_1[7] = lVar3;
  param_1[8] = lVar4;
  *(undefined8 *)((longlong)param_1 + 0x45) = *(undefined8 *)((longlong)param_2 + 0x45);
  return param_1;
}



// FUNCTION 1485f1716 FUN_1485f1716 body=36 status=ok
// SIG undefined FUN_1485f1716(void)

undefined8 FUN_1485f1716(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f1756 FUN_1485f1756 body=93 status=ok
// SIG undefined FUN_1485f1756(void)

void FUN_1485f1756(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afb7610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f17b4 FUN_1485f17b4 body=126 status=ok
// SIG undefined FUN_1485f17b4(void)

void FUN_1485f17b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afb7610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f1823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f1832 FUN_1485f1832 body=21 status=ok
// SIG undefined FUN_1485f1832(void)

undefined8 FUN_1485f1832(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f1848 FUN_1485f1848 body=42 status=ok
// SIG undefined FUN_1485f1848(void)

void FUN_1485f1848(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485f18b8 FUN_1485f18b8 body=96 status=ok
// SIG undefined FUN_1485f18b8(void)

undefined8 FUN_1485f18b8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141574f76();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb518d8,1);
  return uVar3;
}



// FUNCTION 1485f1918 FUN_1485f1918 body=52 status=ok
// SIG undefined FUN_1485f1918(void)

void FUN_1485f1918(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485f194e FUN_1485f194e body=42 status=ok
// SIG undefined FUN_1485f194e(void)

void FUN_1485f194e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485f1980 FUN_1485f1980 body=96 status=ok
// SIG undefined FUN_1485f1980(void)

undefined8 FUN_1485f1980(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f5da0c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb51960,1);
  return uVar3;
}



// FUNCTION 1485f19e0 FUN_1485f19e0 body=52 status=ok
// SIG undefined FUN_1485f19e0(void)

void FUN_1485f19e0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485f1a14 FUN_1485f1a14 body=137 status=ok
// SIG undefined FUN_1485f1a14(void)

undefined4 * FUN_1485f1a14(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  bVar4 = param_3[3];
  FUN_145f5d79e();
  FUN_1448e935e(param_2,&local_38,&DAT_14cb516f0,
                (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8);
  FUN_145f5d79e();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f1a9e FUN_1485f1a9e body=42 status=ok
// SIG undefined FUN_1485f1a9e(void)

void FUN_1485f1a9e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1485f1b0e FUN_1485f1b0e body=96 status=ok
// SIG undefined FUN_1485f1b0e(void)

undefined8 FUN_1485f1b0e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14159ea60();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb519e8,1);
  return uVar3;
}



// FUNCTION 1485f1b6e FUN_1485f1b6e body=52 status=ok
// SIG undefined FUN_1485f1b6e(void)

void FUN_1485f1b6e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1485f1ba2 FUN_1485f1ba2 body=138 status=ok
// SIG undefined FUN_1485f1ba2(void)

code * FUN_1485f1ba2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutBiasCurrentColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f1c2c;
}



// FUNCTION 1485f1c2c FUN_1485f1c2c body=138 status=ok
// SIG undefined FUN_1485f1c2c(void)

code * FUN_1485f1c2c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CustomOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4ce76;
}



// FUNCTION 1485f1cb6 FUN_1485f1cb6 body=138 status=ok
// SIG undefined FUN_1485f1cb6(void)

code * FUN_1485f1cb6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PassthroughDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13800000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f1d40;
}



// FUNCTION 1485f1d40 FUN_1485f1d40 body=138 status=ok
// SIG undefined FUN_1485f1d40(void)

code * FUN_1485f1d40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PassthroughNormalRoughness";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a6d72;
}



// FUNCTION 1485f1dca FUN_1485f1dca body=138 status=ok
// SIG undefined FUN_1485f1dca(void)

code * FUN_1485f1dca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreIntegratedGFSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5dc80;
}



// FUNCTION 1485f1e58 FUN_1485f1e58 body=138 status=ok
// SIG undefined FUN_1485f1e58(void)

code * FUN_1485f1e58(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutVelocityCombinedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a714c;
}



// FUNCTION 1485f1ee2 FUN_1485f1ee2 body=138 status=ok
// SIG undefined FUN_1485f1ee2(void)

code * FUN_1485f1ee2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f1f6c;
}



// FUNCTION 1485f1f6c FUN_1485f1f6c body=132 status=ok
// SIG undefined FUN_1485f1f6c(void)

undefined1 * FUN_1485f1f6c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x39;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1485f1ff0;
}



// FUNCTION 1485f1ff4 FUN_1485f1ff4 body=36 status=ok
// SIG undefined FUN_1485f1ff4(void)

undefined8 FUN_1485f1ff4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f2034 FUN_1485f2034 body=93 status=ok
// SIG undefined FUN_1485f2034(void)

void FUN_1485f2034(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afb7cf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f2092 FUN_1485f2092 body=126 status=ok
// SIG undefined FUN_1485f2092(void)

void FUN_1485f2092(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afb7cf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485f2101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f2110 FUN_1485f2110 body=21 status=ok
// SIG undefined FUN_1485f2110(void)

undefined8 FUN_1485f2110(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f2126 FUN_1485f2126 body=154 status=ok
// SIG undefined FUN_1485f2126(void)

void FUN_1485f2126(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  param_1[0x28] = 0;
  lVar1 = 0x150;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x210);
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined1 (*) [16])(param_1 + 0x42) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined2 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x48] = 0;
  return;
}



// FUNCTION 1485f21c0 FUN_1485f21c0 body=34 status=ok
// SIG undefined FUN_1485f21c0(void)

undefined8 FUN_1485f21c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 1485f21e2 FUN_1485f21e2 body=198 status=ok
// SIG undefined FUN_1485f21e2(void)

void FUN_1485f21e2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1485f22a8(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 1485f22a8 FUN_1485f22a8 body=244 status=ok
// SIG undefined FUN_1485f22a8(void)

undefined8 *
FUN_1485f22a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14cb519a8;
  if (DAT_14cb519a8 != 0) {
    LOCK();
    *(int *)(DAT_14cb519a8 + 8) = *(int *)(DAT_14cb519a8 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14cb51960;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14afb7db0;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f239e FUN_1485f239e body=43 status=ok
// SIG undefined FUN_1485f239e(void)

undefined8 FUN_1485f239e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,600);
  }
  return param_1;
}



// FUNCTION 1485f23c9 FUN_1485f23c9 body=253 status=ok
// SIG undefined FUN_1485f23c9(void)

void FUN_1485f23c9(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_143bf9a1a(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1485f24ca FUN_1485f24ca body=215 status=ok
// SIG undefined FUN_1485f24ca(void)

int * FUN_1485f24ca(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  param_2[6] = 0;
  *param_2 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60);
  param_2[1] = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 100);
  param_2[2] = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70);
  param_2[3] = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x74);
  param_2[4] = *(int *)(param_1 + 0x1a4);
  param_2[5] = ((uint)*(byte *)(param_1 + 0x1b0) << 6 |
               (-(uint)(*(float *)(param_1 + 0x194) != 0.0) & 1) << 5 |
               (*(byte *)(param_1 + 400) ^ 1) * 2 + (uint)(*(int *)(param_1 + 0x1bc) == 0) * 8) +
               (uint)*(byte *)(param_1 + 0x1b1) * 0x80 + 1;
  plVar3 = (longlong *)0x0;
  if (*(char *)((longlong)*(longlong **)(param_1 + 0x48) + 0x52) == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x48);
  }
  lVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  iVar1 = *(int *)(lVar2 + 0x28);
  lVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  *(bool *)(param_2 + 6) =
       *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70) != *(int *)(lVar2 + 0x24) ||
       *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x74) != iVar1;
  return param_2;
}



// FUNCTION 1485f25a2 FUN_1485f25a2 body=229 status=ok
// SIG undefined FUN_1485f25a2(void)

undefined8 * FUN_1485f25a2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  param_2[4] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(int *)((longlong)param_2 + 0xc) = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60);
  *(int *)(param_2 + 2) = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 100);
  *(int *)((longlong)param_2 + 0x14) = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70);
  *(int *)(param_2 + 3) = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x74);
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1a4);
  *(uint *)(param_2 + 4) =
       ((uint)*(byte *)(param_1 + 0x1b0) << 6 |
       (-(uint)(*(float *)(param_1 + 0x194) != 0.0) & 1) << 5 |
       (*(byte *)(param_1 + 400) ^ 1) * 2 + (uint)(*(int *)(param_1 + 0x1bc) == 0) * 8) +
       (uint)*(byte *)(param_1 + 0x1b1) * 0x80 + 1;
  plVar3 = (longlong *)0x0;
  if (*(char *)((longlong)*(longlong **)(param_1 + 0x48) + 0x52) == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x48);
  }
  lVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  iVar1 = *(int *)(lVar2 + 0x28);
  lVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  *(bool *)((longlong)param_2 + 0x24) =
       *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70) != *(int *)(lVar2 + 0x24) ||
       *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x74) != iVar1;
  *(undefined4 *)param_2 = 1;
  return param_2;
}



// FUNCTION 1485f268a FUN_1485f268a body=73 status=ok
// SIG undefined FUN_1485f268a(void)

void FUN_1485f268a(longlong param_1,int param_2)

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



// FUNCTION 1485f26d4 FUN_1485f26d4 body=122 status=ok
// SIG undefined FUN_1485f26d4(void)

void FUN_1485f26d4(longlong *param_1,uint param_2)

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



// FUNCTION 1485f274e FUN_1485f274e body=36 status=ok
// SIG undefined FUN_1485f274e(void)

undefined8 FUN_1485f274e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f278e FUN_1485f278e body=93 status=ok
// SIG undefined FUN_1485f278e(void)

void FUN_1485f278e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afb89b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f27ec FUN_1485f27ec body=123 status=ok
// SIG undefined FUN_1485f27ec(void)

void FUN_1485f27ec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afb89b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f2868 FUN_1485f2868 body=21 status=ok
// SIG undefined FUN_1485f2868(void)

undefined8 FUN_1485f2868(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f287e FUN_1485f287e body=127 status=ok
// SIG undefined FUN_1485f287e(void)

undefined8 FUN_1485f287e(undefined8 *param_1)

{
  HRESULT HVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  IID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  HVar1 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_28);
  if (-1 < HVar1) {
    local_30 = (longlong *)0x0;
    iVar2 = (**(code **)*param_1)(param_1,&local_28,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
    uVar3 = 1;
    if (-1 < iVar2) goto LAB_1485f28e0;
  }
  uVar3 = 0;
LAB_1485f28e0:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f2900 FUN_1485f2900 body=56 status=ok
// SIG undefined FUN_1485f2900(void)

undefined8 * FUN_1485f2900(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x128,0x10);
  FUN_143bfc384(uVar1,param_3);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1485f2938 FUN_1485f2938 body=43 status=ok
// SIG undefined FUN_1485f2938(void)

undefined8 FUN_1485f2938(undefined8 param_1,int param_2)

{
  FUN_143bfc9c4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 1485f2968 FUN_1485f2968 body=9 status=ok
// SIG undefined FUN_1485f2968(void)

void FUN_1485f2968(longlong param_1)

{
  FUN_1485f29c0(param_1 + 0x10);
  return;
}



// FUNCTION 1485f2972 FUN_1485f2972 body=34 status=ok
// SIG undefined FUN_1485f2972(void)

undefined8 FUN_1485f2972(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1485f2994 FUN_1485f2994 body=43 status=ok
// SIG undefined FUN_1485f2994(void)

undefined8 FUN_1485f2994(undefined8 param_1,int param_2)

{
  FUN_1485f29c0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1485f29c0 FUN_1485f29c0 body=44 status=ok
// SIG undefined FUN_1485f29c0(void)

void FUN_1485f29c0(longlong param_1)

{
  NVSDK_NGX_D3D11_ReleaseFeature(*(undefined8 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    NVSDK_NGX_D3D11_DestroyParameters();
  }
  FUN_1414118ac(param_1);
  return;
}



// FUNCTION 1485f29ec FUN_1485f29ec body=36 status=ok
// SIG undefined FUN_1485f29ec(void)

undefined8 FUN_1485f29ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f2a2c FUN_1485f2a2c body=93 status=ok
// SIG undefined FUN_1485f2a2c(void)

void FUN_1485f2a2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afb9e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f2a8a FUN_1485f2a8a body=123 status=ok
// SIG undefined FUN_1485f2a8a(void)

void FUN_1485f2a8a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afb9e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f2b06 FUN_1485f2b06 body=21 status=ok
// SIG undefined FUN_1485f2b06(void)

undefined8 FUN_1485f2b06(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f2b1c FUN_1485f2b1c body=131 status=ok
// SIG undefined FUN_1485f2b1c(void)

undefined8 FUN_1485f2b1c(undefined8 *param_1)

{
  HRESULT HVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  IID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  HVar1 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&local_28);
  if (-1 < HVar1) {
    local_30 = (longlong *)0x0;
    iVar2 = (**(code **)*param_1)(param_1,&local_28,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (-1 < iVar2) {
      uVar3 = 1;
      goto LAB_1485f2b76;
    }
  }
  uVar3 = 0;
LAB_1485f2b76:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485f2ba2 FUN_1485f2ba2 body=43 status=ok
// SIG undefined FUN_1485f2ba2(void)

undefined8 FUN_1485f2ba2(undefined8 param_1,int param_2)

{
  FUN_145982c64();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1485f2bce FUN_1485f2bce body=36 status=ok
// SIG undefined FUN_1485f2bce(void)

undefined8 FUN_1485f2bce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f2c0e FUN_1485f2c0e body=93 status=ok
// SIG undefined FUN_1485f2c0e(void)

void FUN_1485f2c0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afb9f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1485f2c6c FUN_1485f2c6c body=123 status=ok
// SIG undefined FUN_1485f2c6c(void)

void FUN_1485f2c6c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afb9f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1485f2ce8 FUN_1485f2ce8 body=21 status=ok
// SIG undefined FUN_1485f2ce8(void)

undefined8 FUN_1485f2ce8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1485f2d00 FUN_1485f2d00 body=56 status=ok
// SIG undefined FUN_1485f2d00(void)

undefined8 * FUN_1485f2d00(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_143c005fc(uVar1,param_3);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1485f2d38 FUN_1485f2d38 body=43 status=ok
// SIG undefined FUN_1485f2d38(void)

undefined8 FUN_1485f2d38(undefined8 param_1,int param_2)

{
  FUN_143c00cb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1485f2d68 FUN_1485f2d68 body=9 status=ok
// SIG undefined FUN_1485f2d68(void)

void FUN_1485f2d68(longlong param_1)

{
  FUN_1485f2dc0(param_1 + 0x10);
  return;
}



// FUNCTION 1485f2d72 FUN_1485f2d72 body=34 status=ok
// SIG undefined FUN_1485f2d72(void)

undefined8 FUN_1485f2d72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1485f2d94 FUN_1485f2d94 body=43 status=ok
// SIG undefined FUN_1485f2d94(void)

undefined8 FUN_1485f2d94(undefined8 param_1,int param_2)

{
  FUN_1485f2dc0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1485f2dc0 FUN_1485f2dc0 body=44 status=ok
// SIG undefined FUN_1485f2dc0(void)

void FUN_1485f2dc0(longlong param_1)

{
  NVSDK_NGX_VULKAN_ReleaseFeature(*(undefined8 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    NVSDK_NGX_VULKAN_DestroyParameters();
  }
  FUN_1414118ac(param_1);
  return;
}



// FUNCTION 1485f2dec FUN_1485f2dec body=36 status=ok
// SIG undefined FUN_1485f2dec(void)

undefined8 FUN_1485f2dec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1485f2e2c FUN_1485f2e2c body=93 status=ok
// SIG undefined FUN_1485f2e2c(void)

void FUN_1485f2e2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afba0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


