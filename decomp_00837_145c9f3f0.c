// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c9f3f0 FUN_145c9f3f0 body=678 status=ok
// SIG undefined FUN_145c9f3f0(void)

void FUN_145c9f3f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 **ppuVar8;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined8 *local_80;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1415b561e();
  puVar1 = param_1 + 0x52;
  cVar2 = FUN_144729dda(puVar1);
  if ((cVar2 == '\0') || (param_1[0x6a] == 0)) goto switchD_145c9f4be_caseD_3;
  cVar2 = *(char *)(param_1[0x6a] + 0x4d0);
  if (cVar2 == '\x03') {
    lVar4 = FUN_145c9f698(param_1);
    if (lVar4 == 0) goto switchD_145c9f4be_caseD_3;
    local_98 = 0;
    local_88 = &PTR_LAB_14b976480;
    local_a8 = FUN_144172c0e;
    local_80 = param_1;
    uVar3 = FUN_145c9f740(lVar4);
LAB_145c9f47c:
    *(undefined4 *)(param_1 + 0x60) = uVar3;
  }
  else {
    switch(cVar2) {
    case '\0':
      lVar4 = FUN_145c9f698(param_1);
      if (lVar4 == 0) goto switchD_145c9f4be_caseD_3;
      local_58 = 0;
      local_48 = &PTR_LAB_14b976380;
      local_68 = FUN_14417188a;
      local_40 = param_1;
      uVar3 = FUN_148d0dd2c(lVar4);
      goto LAB_145c9f47c;
    case '\x01':
      if (param_1[0x5d] != 0) goto switchD_145c9f4be_caseD_3;
      lVar6 = FUN_14479d2ce(puVar1);
      uVar5 = FUN_14479d2ce(puVar1);
      local_b8 = (undefined8 *)0x0;
      local_b0 = 0;
      FUN_1446efa72(&local_b8,0,3,0x10);
      puVar1 = local_b8;
      local_b0 = 3;
      *local_b8 = &PTR_LAB_14b3e9ef0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_b8[2] = lVar7;
      *local_b8 = &PTR_FUN_14b9763a0;
      local_b8[3] = 0;
      FUN_14485c47a(local_b8 + 3,uVar5);
      puVar1[4] = param_1;
      ppuVar8 = &local_c0;
      FUN_1403524de(lVar6 + 0x4ad8,ppuVar8,&local_b8);
      FUN_1449db362(&local_b8);
      break;
    case '\x02':
      if ((param_1[0x5d] != 0) || (lVar4 = FUN_145c9f698(param_1), lVar4 == 0))
      goto switchD_145c9f4be_caseD_3;
      local_c0 = param_1;
      uVar5 = FUN_14479d2ce(puVar1);
      ppuVar8 = &local_b8;
      FUN_144168ca0(lVar4 + 0xf8,ppuVar8,uVar5,&local_c0);
      break;
    default:
      goto switchD_145c9f4be_caseD_3;
    case '\x04':
      if ((param_1[0x5d] != 0) || (lVar4 = FUN_145c9f698(param_1), lVar4 == 0))
      goto switchD_145c9f4be_caseD_3;
      local_c0 = param_1;
      uVar5 = FUN_14479d2ce(puVar1);
      ppuVar8 = &local_b8;
      FUN_144168e6e(lVar4 + 0xf8,ppuVar8,uVar5,&local_c0);
    }
    param_1[0x5d] = *ppuVar8;
  }
switchD_145c9f4be_caseD_3:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c9f698 FUN_145c9f698 body=168 status=ok
// SIG undefined FUN_145c9f698(void)

longlong * FUN_145c9f698(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x288);
  if (lVar1 != 0) {
    uVar2 = FUN_144a7b040();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if ((plVar3 != (longlong *)0x0) &&
       (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3), plVar3 != (longlong *)0x0)) {
      lVar1 = (**(code **)(*plVar3 + 8))(plVar3);
      lVar4 = FUN_14069c71e();
      if ((lVar4 != 0) &&
         ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)))) {
        return plVar3;
      }
    }
  }
  lVar1 = FUN_14479d2ce(param_1 + 0x290);
  if (lVar1 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar1 = FUN_14479d2ce(param_1 + 0x290);
    plVar3 = (longlong *)(lVar1 + 0x4128);
  }
  return plVar3;
}



// FUNCTION 145c9f740 FUN_145c9f740 body=181 status=ok
// SIG undefined FUN_145c9f740(void)

undefined4 FUN_145c9f740(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x5e4);
  iVar2 = *(int *)(param_1 + 0x5a8);
  *(uint *)(param_1 + 0x5a8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x5ac) < iVar2 + 1U) {
    FUN_145c9f7f6((longlong *)(param_1 + 0x5a0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x5a0);
  lVar5 = (longlong)iVar2 * 0x50;
  *(char *)(lVar3 + lVar5) = (char)uVar1;
  lVar4 = *param_2;
  *(longlong *)(lVar3 + 0x10 + lVar5) = lVar4;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = 0;
  if (lVar4 != 0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)*plVar6)(plVar6,lVar3 + lVar5 + 0x20);
  }
  *(int *)(param_1 + 0x5e4) = *(int *)(param_1 + 0x5e4) + 1;
  if (*param_2 != 0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return uVar1;
}



// FUNCTION 145c9f7f6 FUN_145c9f7f6 body=147 status=ok
// SIG undefined FUN_145c9f7f6(void)

void FUN_145c9f7f6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c9f88a FUN_145c9f88a body=61 status=ok
// SIG undefined FUN_145c9f88a(void)

void FUN_145c9f88a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_1412823f0(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_145c9f8c8(param_1);
  return;
}



// FUNCTION 145c9f8c8 FUN_145c9f8c8 body=58 status=ok
// SIG undefined FUN_145c9f8c8(void)

void FUN_145c9f8c8(undefined8 *param_1,int param_2)

{
  FUN_1412823f0(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145c9f902(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145c9f902 FUN_145c9f902 body=115 status=ok
// SIG undefined FUN_145c9f902(void)

void FUN_145c9f902(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x88,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x88)) {
      uVar2 = uVar1 / 0x88 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x88,8);
  }
  return;
}



// FUNCTION 145c9f976 FUN_145c9f976 body=61 status=ok
// SIG undefined FUN_145c9f976(void)

void FUN_145c9f976(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    thunk_FUN_1400020a8(plVar1,0x10);
    return;
  }
  return;
}



// FUNCTION 145c9f9b4 FUN_145c9f9b4 body=166 status=ok
// SIG undefined FUN_145c9f9b4(void)

bool FUN_145c9f9b4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar2 = FUN_144a52528();
    FUN_1446ddc76(&local_20,"SteamShared",1);
    cVar1 = FUN_14011feae(uVar2,local_20);
    if (cVar1 != '\0') {
      FUN_1446ddc76(&local_20,"SteamShared",1);
      uVar2 = FUN_144a52528();
      lVar3 = FUN_14493e38c(uVar2,local_20);
      bVar4 = *(longlong *)(lVar3 + 8) != 0;
      goto LAB_145c9fa39;
    }
  }
  bVar4 = false;
LAB_145c9fa39:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c9fa5c FUN_145c9fa5c body=40 status=ok
// SIG undefined FUN_145c9fa5c(void)

undefined8 FUN_145c9fa5c(undefined8 param_1,int param_2)

{
  FUN_145c9fa84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c9fa84 FUN_145c9fa84 body=107 status=ok
// SIG undefined FUN_145c9fa84(void)

void FUN_145c9fa84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9f2a30;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c9faf0 FUN_145c9faf0 body=48 status=ok
// SIG undefined FUN_145c9faf0(void)

void FUN_145c9faf0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xc0);
  FUN_145c9fb20(param_2);
  *param_2 = &PTR_FUN_14b622400;
  return;
}



// FUNCTION 145c9fb20 FUN_145c9fb20 body=99 status=ok
// SIG undefined FUN_145c9fb20(void)

void FUN_145c9fb20(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *param_1 = &PTR_FUN_14b1bf9f0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return;
}



// FUNCTION 145c9fb84 FUN_145c9fb84 body=65 status=ok
// SIG undefined FUN_145c9fb84(void)

void FUN_145c9fb84(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_145c9fbc6(param_1,0);
  lVar1 = FUN_1411c1a08();
  if (*(longlong *)(param_1 + 0xd80) != 0) {
    FUN_14480f766(lVar1 + 0x90);
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 145c9fbc6 FUN_145c9fbc6 body=82 status=ok
// SIG undefined FUN_145c9fbc6(void)

void FUN_145c9fbc6(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_14011c706(lVar1);
    if (lVar1 != 0) {
      if (param_2 == '\0') {
        FUN_145a00c8a();
        return;
      }
      FUN_14011c8a2(lVar1,param_1 + 0xd00);
      return;
    }
  }
  return;
}



// FUNCTION 145c9fc22 FUN_145c9fc22 body=138 status=ok
// SIG undefined FUN_145c9fc22(void)

void FUN_145c9fc22(longlong *param_1)

{
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140e027f0(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140e027f0(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_140e027f0(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c9fcb8 FUN_145c9fcb8 body=258 status=ok
// SIG undefined FUN_145c9fcb8(void)

undefined8 * FUN_145c9fcb8(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144805d84();
  *param_1 = &PTR_FUN_14a893d30;
  param_1[5] = &PTR_FUN_14a8941b0;
  param_1[6] = &PTR_LAB_14a8941f0;
  param_1[0x22] = &PTR_FUN_14a894240;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_140e70c9e(local_48,param_1[3]);
  local_44 = local_44 * 0xbb38435 + 0x3619636b;
  FUN_145c9fdbc(param_1 + 0x27,(float)(local_44 >> 9 | 0x3f800000) + -1.0);
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0x180;
  *(undefined1 *)((longlong)param_1 + 0x16a) = 1;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c9fdbc FUN_145c9fdbc body=83 status=ok
// SIG undefined FUN_145c9fdbc(void)

void FUN_145c9fdbc(undefined1 *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (1.0 - param_2) + (1.0 - param_2);
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_2 = param_2 + param_2;
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *param_1 = 0;
  param_1[1] = (char)(int)(param_2 * 255.0);
  param_1[2] = (char)(int)(fVar1 * 255.0);
  param_1[3] = 0xff;
  return;
}



// FUNCTION 145c9fe10 FUN_145c9fe10 body=107 status=ok
// SIG undefined FUN_145c9fe10(void)

void FUN_145c9fe10(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined **local_28;
  undefined1 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0xe0) != '\x02') {
    *(undefined1 *)(param_1 + 0xe0) = 2;
    local_28 = &PTR_FUN_14b525ad0;
    local_20 = 2;
    local_18 = param_1;
    FUN_145a9f81e(param_1 + 8);
    FUN_145c9fe7c(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c9fe7c FUN_145c9fe7c body=228 status=ok
// SIG undefined FUN_145c9fe7c(void)

void FUN_145c9fe7c(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined1 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 != '\x01') {
    cVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if (cVar2 != '\x01') {
      plVar5 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
      lVar6 = (**(code **)(*(longlong *)param_1[0x1b] + 0x48))();
      iVar4 = *(int *)(lVar6 + 0x18);
      if (iVar4 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = *(undefined2 **)(lVar6 + 0x10);
      }
      iVar1 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar1 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar1,puVar7);
      iVar4 = FUN_14153787a(plVar5,uVar3,lVar6 + 0x10);
      if (((iVar4 != -1) && ((longlong)iVar4 * 0x20 + *plVar5 != 0)) &&
         (*(char *)((longlong)param_1 + 0xe2) != '\x02')) {
        *(undefined1 *)((longlong)param_1 + 0xe2) = 2;
        local_38 = &PTR_FUN_14b525ad0;
        local_30 = 2;
        local_28 = param_1;
        FUN_145a9f81e(param_1 + 7);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c9ff72 FUN_145c9ff72 body=40 status=ok
// SIG undefined FUN_145c9ff72(void)

undefined8 FUN_145c9ff72(undefined8 param_1,int param_2)

{
  FUN_145c9ff9a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c9ff9a FUN_145c9ff9a body=159 status=ok
// SIG undefined FUN_145c9ff9a(void)

void FUN_145c9ff9a(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd0e3c0;
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_145ca0039(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca0086(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca0039 FUN_145ca0039 body=77 status=ok
// SIG undefined FUN_145ca0039(void)

void FUN_145ca0039(longlong param_1,int param_2)

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



// FUNCTION 145ca0086 FUN_145ca0086 body=77 status=ok
// SIG undefined FUN_145ca0086(void)

void FUN_145ca0086(longlong param_1,int param_2)

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



// FUNCTION 145ca00d4 FUN_145ca00d4 body=363 status=ok
// SIG undefined FUN_145ca00d4(void)

void FUN_145ca00d4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1408bb964(param_1 + 0x14);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_140fb8258(lVar1);
      if (lVar1 != 0) {
        lVar2 = param_1 + -0x30;
        local_58 = FUN_148e5b4ce;
        local_50 = 0;
        FUN_145ca0240(lVar1 + 0x50,&local_48,lVar2,&local_58);
        *(undefined8 *)(param_1 + 0x28) = local_48;
        local_58 = FUN_148e5b7c8;
        local_50 = 0;
        FUN_145ca0240(lVar1 + 0x80,&local_48,lVar2,&local_58);
        *(undefined8 *)(param_1 + 0x30) = local_48;
        local_58 = FUN_148e5b932;
        local_50 = 0;
        FUN_145ca043e(lVar1 + 0x38,&local_48,lVar2,&local_58);
        *(undefined8 *)(param_1 + 0x38) = local_48;
        local_58 = FUN_148e5ba50;
        local_50 = 0;
        FUN_145ca063c(lVar1 + 0x68,&local_48,lVar2,&local_58);
        *(undefined8 *)(param_1 + 0x40) = local_48;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca0240 FUN_145ca0240 body=254 status=ok
// SIG undefined FUN_145ca0240(void)

undefined8
FUN_145ca0240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9b98e0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9870;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ca0340(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca0340 FUN_145ca0340 body=216 status=ok
// SIG undefined FUN_145ca0340(void)

undefined8 * FUN_145ca0340(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca0426 FUN_145ca0426 body=24 status=ok
// SIG undefined FUN_145ca0426(void)

bool FUN_145ca0426(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145ca043e FUN_145ca043e body=254 status=ok
// SIG undefined FUN_145ca043e(void)

undefined8
FUN_145ca043e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9b99c0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9950;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ca053e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca053e FUN_145ca053e body=216 status=ok
// SIG undefined FUN_145ca053e(void)

undefined8 * FUN_145ca053e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca0624 FUN_145ca0624 body=24 status=ok
// SIG undefined FUN_145ca0624(void)

bool FUN_145ca0624(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145ca063c FUN_145ca063c body=254 status=ok
// SIG undefined FUN_145ca063c(void)

undefined8
FUN_145ca063c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9b9aa0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9a30;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ca073c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca073c FUN_145ca073c body=216 status=ok
// SIG undefined FUN_145ca073c(void)

undefined8 * FUN_145ca073c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca0822 FUN_145ca0822 body=24 status=ok
// SIG undefined FUN_145ca0822(void)

bool FUN_145ca0822(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145ca0846 FUN_145ca0846 body=107 status=ok
// SIG undefined FUN_145ca0846(void)

undefined8 * FUN_145ca0846(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14adc1d10;
  param_1[7] = 0;
  param_1[8] = 0x41a0000000000200;
  uVar2 = FUN_14001cc68(0x1a8,0x10);
  FUN_145ca08b2(uVar2);
  puVar1 = (undefined8 *)param_1[5];
  param_1[5] = uVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145ca08b2 FUN_145ca08b2 body=524 status=ok
// SIG undefined FUN_145ca08b2(void)

undefined8 * FUN_145ca08b2(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar4 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14adc21e0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  memset(param_1 + 0xc,0,0xa8);
  FUN_145afe678(param_1 + 0xc);
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x41a0000000000200;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x30),4000);
  FUN_145ca0ac0(local_78,param_1,FUN_1481584a8);
  FUN_145ca0b8c(&DAT_14caced90,&local_80,local_78);
  FUN_1401cb1ee(local_78);
  param_1[0x2e] = local_80;
  FUN_145ca0ac0(local_78,param_1,&LAB_14815867a);
  FUN_145ca0b8c(&DAT_14cacedd0,&local_80,local_78);
  FUN_1401cb1ee(local_78);
  param_1[0x2f] = local_80;
  iVar3 = *(int *)((longlong)param_1 + 0x16c);
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x2d) = 0;
    FUN_1470345fa(param_1 + 0x2c);
    iVar4 = *(int *)(param_1 + 0x2d);
    iVar3 = *(int *)((longlong)param_1 + 0x16c);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x114);
  uVar2 = (uint)((longlong)iVar1 << 3);
  *(uint *)(param_1 + 0x2d) = uVar2 + iVar4;
  if ((uint)(iVar3 - iVar4) < uVar2) {
    FUN_145ca0cd4(param_1 + 0x2c);
  }
  memset((void *)((longlong)iVar4 * 4 + param_1[0x2c]),0,(longlong)iVar1 << 5);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca0ac0 FUN_145ca0ac0 body=204 status=ok
// SIG undefined FUN_145ca0ac0(void)

LPCRITICAL_SECTION FUN_145ca0ac0(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a57d310;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14adcbdd0;
  (p_Var1->ProcessLocksList).Blink = param_2;
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145ca0b8c FUN_145ca0b8c body=315 status=ok
// SIG undefined FUN_145ca0b8c(void)

undefined8 *
FUN_145ca0b8c(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  cVar3 = '\0';
  if ((param_3[1].LockCount != 0) && (param_3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    if ((param_3[1].LockCount == 0) ||
       (p_Var2 = param_3[1].DebugInfo, p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca0cd4 FUN_145ca0cd4 body=122 status=ok
// SIG undefined FUN_145ca0cd4(void)

void FUN_145ca0cd4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7ea90(param_1,param_2,uVar5,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ca0d4e FUN_145ca0d4e body=237 status=ok
// SIG undefined FUN_145ca0d4e(void)

void FUN_145ca0d4e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145ca0e3c(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca0e3c FUN_145ca0e3c body=144 status=ok
// SIG undefined FUN_145ca0e3c(void)

bool FUN_145ca0e3c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        puVar2 = (undefined8 *)(lVar1 + 0x458);
      }
      else {
        puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
      }
      local_18 = param_2;
      lVar1 = FUN_144a61814(*puVar2);
      if (lVar1 != 0) {
        bVar3 = *(char *)(lVar1 + 1) == '\x02';
        goto LAB_145ca0ea1;
      }
    }
  }
  bVar3 = false;
LAB_145ca0ea1:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca0ece FUN_145ca0ece body=420 status=ok
// SIG undefined FUN_145ca0ece(void)

undefined8 * FUN_145ca0ece(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if ((((*(longlong *)(param_1 + 0x398) == 0) || (lVar7 = FUN_1447210f0(), lVar7 == 0)) ||
      (lVar7 = FUN_1400f6f32(lVar7), lVar7 == 0)) ||
     (lVar7 = *(longlong *)(lVar7 + 0x68), lVar7 == 0)) goto LAB_145ca0ffc;
  if (*(longlong *)(param_1 + 0x398) == 0) {
LAB_145ca1020:
    lVar9 = 0;
  }
  else {
    lVar8 = FUN_140082f10();
    lVar4 = *(longlong *)(param_1 + 0x398);
    if (lVar4 == 0) goto LAB_145ca1020;
    lVar9 = 0;
    if ((lVar8 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x10), lVar5 != 0)) {
      if (*(int *)(lVar5 + 0x38) < *(int *)(lVar8 + 0x38)) goto LAB_145ca1020;
      lVar9 = 0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30) {
        lVar9 = lVar4;
      }
    }
  }
  FUN_14042af24(lVar7,local_4c,lVar9);
  FUN_14151aed0(lVar7,&local_48,local_4c);
  if ((&DAT_149fc1b6e)[local_30] == '\x01') {
    if (local_38 == (longlong *)0x0) goto LAB_145ca102a;
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    plVar6 = (longlong *)param_2[1];
    *param_2 = local_40;
    if (local_38 == plVar6) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_38 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar6 = local_38;
          goto joined_r0x000145ca1049;
        }
      }
    }
    else {
      param_2[1] = local_38;
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
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x000145ca1049:
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  else {
    local_40 = 0;
LAB_145ca102a:
    *param_2 = local_40;
  }
  local_48 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])();
LAB_145ca0ffc:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca1074 FUN_145ca1074 body=401 status=ok
// SIG undefined FUN_145ca1074(void)

void FUN_145ca1074(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14131d034(param_1,&local_70,param_2);
  *(undefined1 *)(local_70 + 0x100) = param_3;
  FUN_14131cafa(param_1,&local_80);
  if ((longlong)local_78 == 0) {
    local_78 = 0;
  }
  else {
    plVar6 = local_80 + (longlong)local_78 * 2;
    plVar4 = local_80;
    do {
      if (*(int *)(local_70 + 0x18) != *(int *)(local_70 + 0x44)) {
        uVar2 = *(uint *)(*plVar4 + 0x30);
        lVar3 = local_70 + 0x48;
        if (*(longlong *)(local_70 + 0x50) != 0) {
          lVar3 = *(longlong *)(local_70 + 0x50);
        }
        iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(local_70 + 0x58) - 1U & uVar2) * 4);
        if (iVar5 != -1) {
          lVar3 = *(longlong *)(local_70 + 0x10);
          do {
            if (*(uint *)(lVar3 + (longlong)iVar5 * 0x10) == uVar2) goto LAB_145ca1126;
            iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar3 + 8);
          } while (iVar5 != -1);
        }
      }
      local_60 = *plVar4 + 0x30;
      local_84 = 0;
      local_58 = &local_84;
      FUN_145ca1206((longlong *)(local_70 + 0x10),local_4c,&local_60);
LAB_145ca1126:
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar6);
  }
  FUN_14131cf14(local_80,local_78);
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1458eaba4(param_1);
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ca1206 FUN_145ca1206 body=280 status=ok
// SIG undefined FUN_145ca1206(void)

undefined4 * FUN_145ca1206(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
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
  FUN_145ca1416(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_145ca1320(param_1,uVar5,local_40,&local_4c);
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
      FUN_145ca14fc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca1320 FUN_145ca1320 body=130 status=ok
// SIG undefined FUN_145ca1320(void)

undefined8 FUN_145ca1320(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_145ca13a2(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145ca13a2 FUN_145ca13a2 body=116 status=ok
// SIG undefined FUN_145ca13a2(void)

void FUN_145ca13a2(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145ca1416 FUN_145ca1416 body=230 status=ok
// SIG undefined FUN_145ca1416(void)

int * FUN_145ca1416(longlong *param_1,int *param_2)

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



// FUNCTION 145ca14fc FUN_145ca14fc body=431 status=ok
// SIG undefined FUN_145ca14fc(void)

void FUN_145ca14fc(longlong *param_1)

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



// FUNCTION 145ca16ac FUN_145ca16ac body=103 status=ok
// SIG undefined FUN_145ca16ac(void)

ulonglong FUN_145ca16ac(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_145ca1700;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ca1714(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_145ca1700:
  return uVar4 & 0xffffffff;
}



// FUNCTION 145ca1714 FUN_145ca1714 body=132 status=ok
// SIG undefined FUN_145ca1714(void)

void FUN_145ca1714(longlong param_1,int param_2)

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



// FUNCTION 145ca179a FUN_145ca179a body=61 status=ok
// SIG undefined FUN_145ca179a(void)

void FUN_145ca179a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x158);
  *param_2 = &PTR_FUN_14a1c1450;
  FUN_14151b02a(param_2 + 1);
  *(undefined1 *)(param_2 + 0x2b) = 0;
  return;
}



// FUNCTION 145ca17e2 FUN_145ca17e2 body=107 status=ok
// SIG undefined FUN_145ca17e2(void)

undefined8 * FUN_145ca17e2(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67a4b0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 2;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  return param_1;
}



// FUNCTION 145ca1858 FUN_145ca1858 body=107 status=ok
// SIG undefined FUN_145ca1858(void)

undefined8 * FUN_145ca1858(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f5c40;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = uVar1;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0x11] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xf] = DAT_14c8464e0;
  param_1[0x10] = uVar1;
  param_1[0x12] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  return param_1;
}



// FUNCTION 145ca18cc FUN_145ca18cc body=110 status=ok
// SIG undefined FUN_145ca18cc(void)

undefined8 * FUN_145ca18cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14aa0c7a0;
  param_1[5] = &PTR_LAB_14aa0cc20;
  param_1[6] = &PTR_LAB_14aa0cc60;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  FUN_140b967fa(param_1,1);
  return param_1;
}



// FUNCTION 145ca193a FUN_145ca193a body=40 status=ok
// SIG undefined FUN_145ca193a(void)

undefined8 FUN_145ca193a(undefined8 param_1,int param_2)

{
  FUN_145ca1962();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca1962 FUN_145ca1962 body=78 status=ok
// SIG undefined FUN_145ca1962(void)

void FUN_145ca1962(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa9c310;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_145821914(param_1 + 10);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca19b0 FUN_145ca19b0 body=40 status=ok
// SIG undefined FUN_145ca19b0(void)

undefined8 FUN_145ca19b0(undefined8 param_1,int param_2)

{
  FUN_145ca19d8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca19d8 FUN_145ca19d8 body=78 status=ok
// SIG undefined FUN_145ca19d8(void)

void FUN_145ca19d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad30f90;
  param_1[5] = &PTR_FUN_14ad31250;
  if (param_1[0x11e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10d] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca1a26 FUN_145ca1a26 body=40 status=ok
// SIG undefined FUN_145ca1a26(void)

undefined8 FUN_145ca1a26(undefined8 param_1,int param_2)

{
  FUN_145ca1a4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca1a4e FUN_145ca1a4e body=78 status=ok
// SIG undefined FUN_145ca1a4e(void)

void FUN_145ca1a4e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b23fcb0;
  plVar3 = (longlong *)param_1[0x5a];
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
  FUN_14076ba26(param_1 + 7);
  return;
}



// FUNCTION 145ca1a9c FUN_145ca1a9c body=196 status=ok
// SIG undefined FUN_145ca1a9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca1a9c(void)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_28,"device_profile",1);
  local_38 = (undefined8 *)0x0;
  local_30 = 1;
  FUN_1401b309e(&local_38,1,0);
  *local_38 = local_28;
  FUN_145ca1b62(&DAT_14cb71db0,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb71e08 = 1;
  FUN_140834d1a(&DAT_14cb71db0,L"Tracks state of the running session.");
  _DAT_14cb71e10 = 1;
  FUN_145ca1bb2(&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca1b62 FUN_145ca1b62 body=78 status=ok
// SIG undefined FUN_145ca1b62(void)

void FUN_145ca1b62(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_140ce09a0(param_1 + 0xb8,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca1bb2 FUN_145ca1bb2 body=214 status=ok
// SIG undefined FUN_145ca1bb2(void)

undefined8 FUN_145ca1bb2(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_14b3ec750;
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
  *local_28 = &PTR_FUN_14b3ec6e0;
  local_28[3] = FUN_1410cd259;
  FUN_145ca1c8a(&DAT_14cb71db8,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca1c8a FUN_145ca1c8a body=216 status=ok
// SIG undefined FUN_145ca1c8a(void)

undefined8 * FUN_145ca1c8a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca1d64 FUN_145ca1d64 body=393 status=ok
// SIG undefined FUN_145ca1d64(void)

int FUN_145ca1d64(undefined8 *param_1)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb90f30);
  iVar3 = DAT_14cb90f28;
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_1 + 1);
  lVar4 = (longlong)local_60;
  pvVar1 = (void *)*param_1;
  if (lVar4 == 0) {
    local_5c = 0;
    local_50 = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,pvVar1,lVar4 * 2);
    pvVar1 = local_68;
    lVar4 = (longlong)local_60;
    local_58 = (void *)0x0;
    local_50 = local_60;
    if (lVar4 != 0) {
      FUN_1446dd670(&local_58,local_60,0);
      memcpy(local_58,pvVar1,lVar4 * 2);
      goto LAB_145ca1e16;
    }
  }
  local_58 = (void *)0x0;
  local_4c = 0;
LAB_145ca1e16:
  local_48 = iVar3;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8(local_68);
  }
  FUN_145ca1eee(&local_58,&local_40);
  iVar3 = DAT_14cb90f20;
  lVar4 = (longlong)(int)DAT_14cb90f20;
  DAT_14cb90f20 = DAT_14cb90f20 + 1;
  if (DAT_14cb90f24 < DAT_14cb90f20) {
    FUN_145ca1f8e(iVar3);
  }
  lVar2 = DAT_14cb90f18;
  *(undefined8 *)(DAT_14cb90f18 + lVar4 * 0x18) = local_40;
  *(undefined4 *)(lVar2 + 8 + lVar4 * 0x18) = local_38;
  *(undefined4 *)(lVar2 + 0xc + lVar4 * 0x18) = local_34;
  *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x18) = local_30;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar3 = DAT_14cb90f28;
  DAT_14cb90f28 = DAT_14cb90f28 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb90f30);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca1eee FUN_145ca1eee body=158 status=ok
// SIG undefined FUN_145ca1eee(void)

undefined8 * FUN_145ca1eee(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_1 + 2);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 1);
  lVar3 = (longlong)local_38;
  _Src = (void *)*param_1;
  if (lVar3 == 0) {
    local_34 = 0;
    iVar2 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar3 * 2);
    iVar2 = local_38;
  }
  *param_2 = local_40;
  *(int *)(param_2 + 1) = iVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_34;
  *(undefined4 *)(param_2 + 2) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca1f8e FUN_145ca1f8e body=155 status=ok
// SIG undefined FUN_145ca1f8e(void)

void FUN_145ca1f8e(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14cb90f20;
  if (param_1 <= (int)DAT_14cb90f20) {
    if (DAT_14cb90f24 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb90f20) {
        uVar2 = DAT_14cb90f20;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb90f20 * 3) >> 3) + (longlong)(int)DAT_14cb90f20 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    DAT_14cb90f24 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb90f18,param_1,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ca2032 FUN_145ca2032 body=110 status=ok
// SIG undefined FUN_145ca2032(void)

void FUN_145ca2032(longlong *param_1)

{
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ca2095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145ca20a0 FUN_145ca20a0 body=25 status=ok
// SIG undefined FUN_145ca20a0(void)

undefined8 FUN_145ca20a0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145ca20ba FUN_145ca20ba body=152 status=ok
// SIG undefined FUN_145ca20ba(void)

void FUN_145ca20ba(longlong param_1,longlong *param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (iVar1 == (int)param_2[1]) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x1a0) + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar2 = *(ushort *)(*param_2 + lVar4);
        if (uVar5 != uVar2) break;
        if (uVar5 == 0) {
          return;
        }
LAB_145ca2121:
        lVar4 = lVar4 + 2;
      }
      if ((uVar2 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_145ca2121;
      }
      if (uVar5 != uVar2) goto LAB_145ca20e3;
    }
  }
  else if ((int)param_2[1] + iVar1 != 1) {
LAB_145ca20e3:
    FUN_144a787a6();
    FUN_14583bf3a(param_1);
    return;
  }
  return;
}



// FUNCTION 145ca2152 FUN_145ca2152 body=38 status=ok
// SIG undefined FUN_145ca2152(void)

undefined8 FUN_145ca2152(undefined8 param_1,int param_2)

{
  FUN_145ca2178();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca2178 FUN_145ca2178 body=198 status=ok
// SIG undefined FUN_145ca2178(void)

void FUN_145ca2178(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9bf690;
  FUN_140f7abbb(param_1[0x67],*(undefined4 *)(param_1 + 0x68));
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_1411721ae(param_1[0x65],*(undefined4 *)(param_1 + 0x66));
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_1411721ae(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x53);
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145ca2246 FUN_145ca2246 body=110 status=ok
// SIG undefined FUN_145ca2246(void)

undefined8 * FUN_145ca2246(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14be885d0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0x800000008000;
  *(undefined4 *)(param_1 + 0x11) = 0x8000;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 145ca22bc FUN_145ca22bc body=110 status=ok
// SIG undefined FUN_145ca22bc(void)

undefined8 * FUN_145ca22bc(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bec7ab0;
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_144757f48(param_1,8);
  *param_1 = &PTR_FUN_14bec86a0;
  param_1[6] = 0;
  param_1[7] = &DAT_3f8000003f800000;
  param_1[8] = &DAT_3f8000003f800000;
  param_1[9] = &DAT_3f8000003f800000;
  param_1[10] = &DAT_3f8000003f800000;
  param_1[0xb] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 145ca232a FUN_145ca232a body=73 status=ok
// SIG undefined FUN_145ca232a(void)

void FUN_145ca232a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1401499e8(lVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ca2369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x28))(plVar3,param_4,*(code **)(*plVar3 + 0x28));
      return;
    }
  }
  return;
}



// FUNCTION 145ca2374 FUN_145ca2374 body=1234 status=ok
// SIG undefined FUN_145ca2374(void)

void FUN_145ca2374(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_208 [44];
  int local_1dc;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined4 local_1bc;
  uint local_1b8;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  undefined8 uStack_1a0;
  uint local_198;
  int iStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined8 local_184;
  undefined4 local_178;
  undefined4 *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_117 [3];
  undefined4 local_114;
  undefined8 local_110;
  undefined1 local_104 [12];
  longlong *local_f8;
  uint local_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_cc [12];
  longlong *local_c0;
  uint local_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1458771b0();
  cVar6 = FUN_145877172(param_1);
  if (cVar6 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_208);
  }
  uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,(undefined4)uStack_1a0);
  uStack_b0 = (longlong *)CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
  uStack_e8 = (longlong *)CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8);
  if (((byte *)*param_2 != (byte *)0x0) &&
     (uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,(undefined4)uStack_1a0),
     uStack_b0 = (longlong *)CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0),
     uStack_e8 = (longlong *)CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8),
     (~*(byte *)*param_2 & 3) == 0)) {
    plVar7 = (longlong *)FUN_1412446d2(param_2);
    local_1d8 = plVar7 + 3;
    local_1a8 = 0;
    uStack_1a4 = 1;
    local_198 = 0xffffffff;
    iStack_194 = 0;
    uStack_190 = 0;
    local_1c8 = param_1;
    uStack_1a0 = local_1d8;
    if ((int)plVar7[6] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_1a8);
      iVar10 = (int)plVar7[6];
    }
    local_a8 = CONCAT44(iStack_194,local_198);
    uStack_a0 = CONCAT44(uStack_18c,uStack_190);
    local_b8 = local_1a8;
    uStack_b4 = uStack_1a4;
    iVar9 = iStack_194;
    iVar5 = iVar10;
    plVar4 = plVar7;
    local_c0 = plVar7;
    uStack_b0 = uStack_1a0;
    if ((iStack_194 != iVar10) || (uStack_1a0 != local_1d8)) {
      do {
        local_1d0 = plVar4;
        local_1dc = iVar5;
        if (*(int *)(*local_c0 + 4 + (longlong)iVar9 * 0x40) == 4) {
          lVar8 = *local_c0 + (longlong)iVar9 * 0x40;
          FUN_144928b90(local_98,1);
          if (0 < *(int *)(lVar8 + 4)) {
            iVar9 = 0;
            do {
              FUN_144a659ac(lVar8,local_cc,iVar9);
              iVar9 = iVar9 + 1;
              FUN_145ca286a(local_98,iVar9,local_cc);
            } while (iVar9 < *(int *)(lVar8 + 4));
          }
          cVar6 = FUN_1401144ce(local_98);
          if (cVar6 != '\0') {
            pbVar3 = *(byte **)(lVar8 + 0x28);
            plVar4 = *(longlong **)(lVar8 + 0x30);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            plVar7 = &DAT_14c9a1288;
            if ((pbVar3 != (byte *)0x0) && (plVar7 = &DAT_14c9a1288, (*pbVar3 & 2) != 0)) {
              plVar7 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
            }
            plVar1 = plVar7 + 3;
            local_1a8 = 0;
            uStack_1a4 = 1;
            local_198 = 0xffffffff;
            iStack_194 = 0;
            uStack_190 = 0;
            uStack_1a0 = plVar1;
            if ((int)plVar7[6] == 0) {
              iVar10 = 0;
            }
            else {
              FUN_1449c0562(&local_1a8);
              iVar10 = (int)plVar7[6];
            }
            local_e0 = CONCAT44(iStack_194,local_198);
            uStack_d8 = CONCAT44(uStack_18c,uStack_190);
            local_f0 = local_1a8;
            uStack_ec = uStack_1a4;
            iVar9 = iStack_194;
            local_f8 = plVar7;
            uStack_e8 = uStack_1a0;
            if ((iStack_194 != iVar10) || (uStack_1a0 != plVar1)) {
              do {
                lVar8 = (longlong)iVar9 * 0x40 + *local_f8;
                FUN_144a7c8fe(lVar8,local_104,0,1);
                FUN_144928d62(local_88,5,local_104);
                cVar6 = FUN_1401144ce(local_98);
                if (cVar6 != '\0') {
                  local_1a8 = 0;
                  uStack_1a4 = 0;
                  FUN_1400bc2c2(lVar8 + 0x28,&local_110,&local_1a8);
                  local_1a8 = local_1a8 & 0xffffff00;
                  uStack_1a4 = 0;
                  uStack_1a0._0_4_ = 0;
                  uStack_1a0._4_4_ = 0;
                  local_198 = local_198 & 0xffffff00;
                  local_184 = 0;
                  iStack_194 = 0;
                  uStack_190 = 0;
                  uStack_18c = 0;
                  uStack_188 = 0;
                  local_178 = 0xc69c4000;
                  local_128 = 0;
                  local_120 = 0;
                  local_118 = 0;
                  local_130 = 0;
                  local_140 = 0;
                  uStack_138 = 0;
                  local_150 = 0;
                  uStack_148 = 0;
                  local_160 = 0;
                  uStack_158 = 0;
                  local_170 = (undefined4 *)0x0;
                  uStack_168 = 0;
                  local_117 = (undefined1  [3])0x1;
                  local_114 = 0;
                  local_1b8 = local_1b8 & 0xffffff00;
                  uStack_1b4 = 0;
                  uStack_1ac = 0;
                  FUN_144976b9c(&local_1b8,local_110);
                  local_1a8 = local_1b8;
                  uStack_1a4 = (uint)uStack_1b4;
                  uStack_1a0._0_4_ = uStack_1b4._4_4_;
                  uStack_1a0._4_4_ = uStack_1ac;
                  local_117._1_2_ = 0x101;
                  local_1bc = 0xc61c4000;
                  local_170 = &local_1bc;
                  (**(code **)(*local_1c8 + 0x38))(local_1c8,&local_1b8,local_98,&local_1a8);
                  FUN_1409838b8(&local_1a8);
                }
                local_e0 = CONCAT44(local_e0._4_4_,(uint)local_e0 & ~uStack_ec);
                FUN_1449c0562(&local_f0);
                iVar9 = local_e0._4_4_;
              } while (local_f8 != plVar7 || (uStack_e8 != plVar1 || local_e0._4_4_ != iVar10));
            }
            plVar7 = local_1d0;
            iVar10 = local_1dc;
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
          }
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
        local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~uStack_b4);
        FUN_1449c0562(&local_b8);
        iVar9 = local_a8._4_4_;
        iVar5 = local_1dc;
        plVar4 = local_1d0;
      } while (local_c0 != plVar7 || (uStack_b0 != local_1d8 || local_a8._4_4_ != iVar10));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ca286a FUN_145ca286a body=9 status=ok
// SIG undefined FUN_145ca286a(void)

void FUN_145ca286a(longlong param_1)

{
  FUN_144928d62(param_1 + 0x10);
  return;
}



// FUNCTION 145ca2874 FUN_145ca2874 body=389 status=ok
// SIG undefined FUN_145ca2874(void)

void FUN_145ca2874(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     (((*(longlong *)(param_1 + 0x1d0) == 0 || (*(longlong *)(param_1 + 0x1d8) == 0)) ||
      (*(int *)(*(longlong *)(param_1 + 0x1d8) + 8) < 1)))) {
    uVar4 = FUN_1401cb356();
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,2,0x10);
    local_40 = 2;
    *local_48 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_48[2] = lVar5;
    *local_48 = &PTR_FUN_14b401ba0;
    local_48[3] = param_1;
    local_58 = 0;
    FUN_1405f67fc(uVar4,&local_38,&local_48,
                  L"FWorldStateRegistry.TryLoadPersistentWorldStateNextFrame");
    if ((undefined8 *)(param_1 + 0x1d0) != &local_38) {
      *(undefined8 *)(param_1 + 0x1d0) = local_38;
      local_38 = 0;
      plVar2 = *(longlong **)(param_1 + 0x1d8);
      *(longlong **)(param_1 + 0x1d8) = local_30;
      local_30 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    FUN_1449db362(&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ca29fa FUN_145ca29fa body=85 status=ok
// SIG undefined FUN_145ca29fa(void)

undefined1 * FUN_145ca29fa(longlong param_1,undefined1 *param_2)

{
  if ((*(byte *)(param_1 + 0x39) & 8) == 0) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    FUN_145ca2a50(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 145ca2a50 FUN_145ca2a50 body=414 status=ok
// SIG undefined FUN_145ca2a50(void)

undefined1 * FUN_145ca2a50(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_4 + 0x20);
  local_40 = *(undefined8 *)(param_4 + 0x28);
  local_38 = *(longlong **)(param_4 + 0x30);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_140230656(&local_48);
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
  if (cVar4 == '\0') {
    FUN_145c4e620(param_1,param_4,2);
  }
  else {
    FUN_1489ce796(&DAT_14cb90e48,param_4,0);
  }
  local_48 = *(undefined8 *)(param_4 + 0x20);
  local_40 = *(undefined8 *)(param_4 + 0x28);
  local_38 = *(longlong **)(param_4 + 0x30);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  bVar5 = *(byte *)(param_1 + 0x2c0);
  if ((bVar5 & 2) == 0) {
LAB_145ca2b15:
    if ((bVar5 & 1) != 0) {
      cVar4 = FUN_140230656(&local_48);
      if (cVar4 == '\0') goto LAB_145ca2b27;
    }
    uVar6 = 1;
  }
  else {
    cVar4 = FUN_140230656(&local_48);
    if (cVar4 == '\0') {
      bVar5 = *(byte *)(param_1 + 0x2c0);
      goto LAB_145ca2b15;
    }
LAB_145ca2b27:
    uVar6 = 0;
  }
  *param_2 = uVar6;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  plVar3 = local_38;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca2bf2 FUN_145ca2bf2 body=455 status=ok
// SIG undefined FUN_145ca2bf2(void)

int * FUN_145ca2bf2(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong *param_5
                   )

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Src;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  int *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  undefined1 local_54 [4];
  int *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = param_4;
  FUN_1446ddc76(param_1 + 1,param_2,1);
  ppvVar1 = (void **)(param_1 + 10);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0xe) = param_3;
  *(longlong *)(param_1 + 0x10) = *param_5;
  *(longlong *)(param_1 + 0x14) = param_5[2];
  param_5[2] = 0;
  lVar9 = param_5[4];
  iVar2 = *(int *)((longlong)param_5 + 0x24);
  lVar6 = param_5[5];
  iVar3 = *(int *)((longlong)param_5 + 0x2c);
  iVar4 = *(int *)((longlong)param_5 + 0x34);
  lVar7 = param_5[7];
  iVar5 = *(int *)((longlong)param_5 + 0x3c);
  param_1[0x1c] = (int)param_5[6];
  param_1[0x1d] = iVar4;
  param_1[0x1e] = (int)lVar7;
  param_1[0x1f] = iVar5;
  param_1[0x18] = (int)lVar9;
  param_1[0x19] = iVar2;
  param_1[0x1a] = (int)lVar6;
  param_1[0x1b] = iVar3;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *param_5 = 0;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_50 = (int *)&DAT_149e02088;
  local_48 = (int **)((ulonglong)local_48._4_4_ << 0x20);
  FUN_14475bea4(&local_78);
  _Src = local_68;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = (int)local_78;
  param_1[7] = local_78._4_4_;
  param_1[8] = (int)uStack_70;
  param_1[9] = uStack_70._4_4_;
  if (ppvVar1 != &local_68) {
    iVar2 = (int)uStack_60;
    lVar9 = (longlong)(int)uStack_60;
    param_1[0xc] = (int)uStack_60;
    if ((int)uStack_60 == 0 && param_1[0xd] == 0) {
      param_1[0xd] = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_60 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar9 * 2);
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < *param_1) && ((DAT_14cb7ff80 == (int *)0x0 || (*DAT_14cb7ff80 < *param_1)))) {
    DAT_14cb7ff80 = param_1;
  }
  FUN_145ca2dba();
  local_48 = &local_80;
  local_80 = param_1;
  local_50 = param_1 + 1;
  FUN_145ca2e52(local_54);
  if (*param_5 != 0) {
    plVar8 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145ca2dba FUN_145ca2dba body=152 status=ok
// SIG undefined FUN_145ca2dba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca2dba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7ffd8) {
    FUN_144b3d300(&DAT_14cb7ffd8);
    if (DAT_14cb7ffd8 == -1) {
      DAT_14cb7ffa8 = 0;
      DAT_14cb7ffb0 = 0;
      DAT_14cb7ff88 = 0;
      _DAT_14cb7ff90 = 0;
      _DAT_14cb7ffb4 = 0xffffffff00000080;
      DAT_14cb7ffbc = 0;
      DAT_14cb7ffc8 = 0;
      DAT_14cb7ffd0 = 0;
      atexit(FUN_143d71d30);
      _Init_thread_footer(&DAT_14cb7ffd8);
      return;
    }
  }
  return;
}



// FUNCTION 145ca2e52 FUN_145ca2e52 body=342 status=ok
// SIG undefined FUN_145ca2e52(void)

undefined4 * FUN_145ca2e52(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ca303c(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_145ca2faa(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7ff90 - DAT_14cb7ffbc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7ffd0)) {
      uVar10 = DAT_14cb7ffd0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7ffc8;
      if (DAT_14cb7ffc8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7ffc0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7ffd0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7ffc8;
      if (DAT_14cb7ffc8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7ffc0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7ffd0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7ffd0 = iVar9;
      FUN_145ca314a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca2faa FUN_145ca2faa body=145 status=ok
// SIG undefined FUN_145ca2faa(void)

undefined8 FUN_145ca2faa(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7ff90 - DAT_14cb7ffbc != 1) && (DAT_14cb7ff90 != DAT_14cb7ffbc)) {
    puVar6 = &DAT_14cb7ffc0;
    if (DAT_14cb7ffc8 != (undefined *)0x0) {
      puVar6 = DAT_14cb7ffc8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7ffd0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7ff88 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145a234c4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145ca303c FUN_145ca303c body=270 status=ok
// SIG undefined FUN_145ca303c(void)

int * FUN_145ca303c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7ffb8;
  iVar3 = DAT_14cb7ff90;
  if (DAT_14cb7ffbc == 0) {
    iVar2 = DAT_14cb7ff90 + 1;
    bVar7 = DAT_14cb7ff94 == DAT_14cb7ff90;
    DAT_14cb7ff90 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7ff88,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7ff98,1);
    puVar4 = DAT_14cb7ffa8;
    if (DAT_14cb7ffa8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7ff98;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb7ffb8;
    DAT_14cb7ffb8 = *(int *)(DAT_14cb7ff88 + 4 + lVar6 * 0x18);
    DAT_14cb7ffbc = DAT_14cb7ffbc + -1;
    if (DAT_14cb7ffbc != 0) {
      *(undefined4 *)(DAT_14cb7ff88 + (longlong)DAT_14cb7ffb8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7ff98;
  if (DAT_14cb7ffa8 != (undefined *)0x0) {
    puVar4 = DAT_14cb7ffa8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7ff88;
  return param_1;
}



// FUNCTION 145ca314a FUN_145ca314a body=523 status=ok
// SIG undefined FUN_145ca314a(void)

void FUN_145ca314a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7ffc8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7ffc8,0,0,4);
  }
  uVar3 = DAT_14cb7ffd0;
  uVar2 = local_50;
  if (DAT_14cb7ffd0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7ffc0,0,DAT_14cb7ffd0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7ffc8;
        if (DAT_14cb7ffc8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7ffc0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7ffd0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7ff98;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7ffb0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7ff88;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb7ffd0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7ffc8;
        if (DAT_14cb7ffc8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7ffc0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7ffd0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7ffc8;
        if (DAT_14cb7ffc8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7ffc0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7ffd0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ca3356 thunk_FUN_145ca3388 body=5 status=ok
// SIG undefined thunk_FUN_145ca3388(void)

undefined * thunk_FUN_145ca3388(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacb0a8) {
    FUN_144b3d300(&DAT_14cacb0a8);
    if (DAT_14cacb0a8 == -1) {
      DAT_14cacb0a0 = &DAT_14cacb098;
      atexit((_func_5014 *)&LAB_1433d0aaa);
      _Init_thread_footer(&DAT_14cacb0a8);
    }
  }
  return DAT_14cacb0a0;
}



// FUNCTION 145ca335c FUN_145ca335c body=12 status=ok
// SIG undefined FUN_145ca335c(void)

void FUN_145ca335c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145ca3365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145ca3368 FUN_145ca3368 body=31 status=ok
// SIG undefined FUN_145ca3368(void)

undefined8 FUN_145ca3368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca3388 FUN_145ca3388 body=108 status=ok
// SIG undefined FUN_145ca3388(void)

undefined * FUN_145ca3388(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacb0a8) {
    FUN_144b3d300(&DAT_14cacb0a8);
    if (DAT_14cacb0a8 == -1) {
      DAT_14cacb0a0 = &DAT_14cacb098;
      atexit((_func_5014 *)&LAB_1433d0aaa);
      _Init_thread_footer(&DAT_14cacb0a8);
    }
  }
  return DAT_14cacb0a0;
}



// FUNCTION 145ca33f4 FUN_145ca33f4 body=123 status=ok
// SIG undefined FUN_145ca33f4(void)

void FUN_145ca33f4(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_6;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  plVar2 = (longlong *)*param_3;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  if ((longlong *)*param_6 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ca3460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_6 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145ca3470 FUN_145ca3470 body=97 status=ok
// SIG undefined FUN_145ca3470(void)

void FUN_145ca3470(void)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(local_28,&DAT_14c8c27d7);
  FUN_145ca34d2(local_38);
  FUN_14151b2c4(local_38,local_28,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca34d2 FUN_145ca34d2 body=73 status=ok
// SIG undefined FUN_145ca34d2(void)

undefined8 * FUN_145ca34d2(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  cVar1 = FUN_145ca351c(&DAT_ffffffff80000002,L"System\\HardwareConfig\\Current\\",
                        L"BIOSReleaseDate",param_1);
  if (cVar1 == '\0') {
    FUN_14020fad6(param_1,&DAT_149dfb77a);
  }
  return param_1;
}



// FUNCTION 145ca351c FUN_145ca351c body=754 status=ok
// SIG undefined FUN_145ca351c(void)

bool FUN_145ca351c(HKEY param_1,LPCWSTR param_2,LPCWSTR param_3,longlong *param_4)

{
  LSTATUS LVar1;
  LPBYTE lpData;
  REGSAM samDesired;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStackY_b8 [32];
  BYTE local_70 [8];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  DWORD local_58;
  DWORD local_54;
  HKEY local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_b8;
  samDesired = 0x20219;
  bVar2 = false;
  do {
    local_50 = (HKEY)0x0;
    bVar3 = false;
    LVar1 = RegOpenKeyExW(param_1,param_2,0,samDesired,&local_50);
    if (LVar1 == 0) {
      local_54 = 0;
      local_58 = 0;
      LVar1 = RegQueryValueExW(local_50,param_3,(LPDWORD)0x0,&local_58,(LPBYTE)0x0,&local_54);
      if (local_54 != 0 && LVar1 == 0) {
        if (local_58 - 1 < 2) {
LAB_145ca35da:
          lpData = (LPBYTE)FUN_144a7d36f(local_54);
          LVar1 = RegQueryValueExW(local_50,param_3,(LPDWORD)0x0,(LPDWORD)0x0,lpData,&local_54);
          bVar3 = LVar1 == 0;
          if (bVar3) {
            FUN_14006620a(&local_68,lpData);
            if (&local_68 == param_4) {
              if (local_68 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*param_4 != 0) {
                FUN_1400020a8();
              }
              *param_4 = local_68;
              local_68 = 0;
              *(undefined4 *)(param_4 + 1) = local_60;
              *(undefined4 *)((longlong)param_4 + 0xc) = local_5c;
            }
          }
          if (lpData != (LPBYTE)0x0) {
            thunk_FUN_1400020a8(lpData);
          }
        }
        else if (local_58 == 4) {
          LVar1 = RegQueryValueExW(local_50,param_3,(LPDWORD)0x0,(LPDWORD)0x0,local_70,&local_54);
          bVar3 = LVar1 == 0;
          if (bVar3) {
            FUN_140002266(&local_68,&DAT_149e061aa);
LAB_145ca3729:
            if (&local_68 == param_4) {
              if (local_68 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*param_4 != 0) {
                FUN_1400020a8();
              }
              *param_4 = local_68;
              local_68 = 0;
              *(undefined4 *)(param_4 + 1) = local_60;
              *(undefined4 *)((longlong)param_4 + 0xc) = local_5c;
            }
          }
        }
        else {
          if (local_58 == 7) goto LAB_145ca35da;
          if (local_58 == 0xb) {
            LVar1 = RegQueryValueExW(local_50,param_3,(LPDWORD)0x0,(LPDWORD)0x0,local_70,&local_54);
            bVar3 = LVar1 == 0;
            if (bVar3) {
              FUN_140002266(&local_68,L"%lld");
              goto LAB_145ca3729;
            }
          }
          else {
            bVar3 = false;
          }
        }
      }
      RegCloseKey(local_50);
    }
    samDesired = 0x20119;
    bVar4 = bVar2 || bVar3 != false;
    bVar2 = true;
    if (bVar4) {
      if ((local_48 ^ (ulonglong)auStackY_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return bVar3;
    }
  } while( true );
}



// FUNCTION 145ca3810 FUN_145ca3810 body=105 status=ok
// SIG undefined FUN_145ca3810(void)

void FUN_145ca3810(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145ca387a(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146979754(param_1);
  return;
}



// FUNCTION 145ca387a FUN_145ca387a body=132 status=ok
// SIG undefined FUN_145ca387a(void)

void FUN_145ca387a(longlong param_1,int param_2)

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



// FUNCTION 145ca38fe FUN_145ca38fe body=86 status=ok
// SIG undefined FUN_145ca38fe(void)

void FUN_145ca38fe(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_14151b43e(param_1 + 8,lVar2,uVar1);
    FUN_140c3721a(param_1 + 0x20,lVar2,uVar1);
    FUN_140659abc(param_1 + 0x38,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 145ca3954 FUN_145ca3954 body=40 status=ok
// SIG undefined FUN_145ca3954(void)

undefined8 FUN_145ca3954(undefined8 param_1,int param_2)

{
  FUN_145ca397c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca397c FUN_145ca397c body=295 status=ok
// SIG undefined FUN_145ca397c(void)

void FUN_145ca397c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b71d960;
  param_1[0x72] = &PTR_FUN_14b71dfa0;
  param_1[0x73] = &PTR_FUN_14b71e010;
  param_1[0x74] = &PTR_FUN_14b71e0b0;
  param_1[0x75] = &PTR_FUN_14b71e0e0;
  param_1[0x76] = &PTR_FUN_14b71e110;
  FUN_14028f4a8(param_1 + 0xd1);
  FUN_1403d7b38(param_1 + 0xc3);
  FUN_1403d7bbc(param_1 + 0xb3);
  *(undefined4 *)(param_1 + 0xb2) = 0;
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca3aa4(param_1 + 0xa9);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca3ada(param_1 + 0x9f);
  FUN_145ca3b11(param_1[0x9b],*(undefined4 *)(param_1 + 0x9c));
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7d90(param_1 + 0x78);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145ca3aa4 FUN_145ca3aa4 body=53 status=ok
// SIG undefined FUN_145ca3aa4(void)

void FUN_145ca3aa4(longlong *param_1)

{
  FUN_145ca3b48();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca3ada FUN_145ca3ada body=55 status=ok
// SIG undefined FUN_145ca3ada(void)

void FUN_145ca3ada(longlong *param_1)

{
  FUN_145ca3ba2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca3b11 FUN_145ca3b11 body=55 status=ok
// SIG undefined FUN_145ca3b11(void)

void FUN_145ca3b11(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x88);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ca3b48 FUN_145ca3b48 body=90 status=ok
// SIG undefined FUN_145ca3b48(void)

void FUN_145ca3b48(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145ca3ba2 FUN_145ca3ba2 body=123 status=ok
// SIG undefined FUN_145ca3ba2(void)

void FUN_145ca3ba2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140240048(param_1,param_2);
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



// FUNCTION 145ca3c1e FUN_145ca3c1e body=40 status=ok
// SIG undefined FUN_145ca3c1e(void)

undefined8 FUN_145ca3c1e(undefined8 param_1,int param_2)

{
  FUN_145ca3c46();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca3c46 FUN_145ca3c46 body=290 status=ok
// SIG undefined FUN_145ca3c46(void)

void FUN_145ca3c46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba4fb90;
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x1a);
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca3d68(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca3d90(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca3db8(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca3d68 FUN_145ca3d68 body=40 status=ok
// SIG undefined FUN_145ca3d68(void)

void FUN_145ca3d68(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148fc7426(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 145ca3d90 FUN_145ca3d90 body=40 status=ok
// SIG undefined FUN_145ca3d90(void)

void FUN_145ca3d90(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148fc9ca0(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 145ca3db8 FUN_145ca3db8 body=64 status=ok
// SIG undefined FUN_145ca3db8(void)

void FUN_145ca3db8(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ca3df8 FUN_145ca3df8 body=40 status=ok
// SIG undefined FUN_145ca3df8(void)

undefined8 FUN_145ca3df8(undefined8 param_1,int param_2)

{
  FUN_145ca3e20();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca3e20 FUN_145ca3e20 body=142 status=ok
// SIG undefined FUN_145ca3e20(void)

void FUN_145ca3e20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bccf8c0;
  puVar1 = (undefined8 *)param_1[0x2e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145f7cfa2(param_1 + 0x13);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca3eae(param_1 + 0x10);
  FUN_145d37a3e(param_1 + 0xf);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14596f3b0(param_1);
  return;
}



// FUNCTION 145ca3eae FUN_145ca3eae body=55 status=ok
// SIG undefined FUN_145ca3eae(void)

void FUN_145ca3eae(longlong *param_1)

{
  FUN_1412d55ee(0);
  if (*param_1 != 0) {
    *param_1 = 0;
    FUN_145a1a55a();
  }
  FUN_1412d5698(0);
  FUN_145a1a55a(*param_1);
  return;
}



// FUNCTION 145ca3ee6 FUN_145ca3ee6 body=104 status=ok
// SIG undefined FUN_145ca3ee6(void)

ulonglong FUN_145ca3ee6(longlong param_1)

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
LAB_145ca3f4a:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145ca3f4a;
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



// FUNCTION 145ca3f4e FUN_145ca3f4e body=9 status=ok
// SIG undefined FUN_145ca3f4e(void)

void FUN_145ca3f4e(longlong param_1)

{
  FUN_145ca3f58(param_1 + 0x10);
  return;
}



// FUNCTION 145ca3f58 FUN_145ca3f58 body=88 status=ok
// SIG undefined FUN_145ca3f58(void)

void FUN_145ca3f58(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1449db362(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145ca3fb0(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ca3fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145ca3fb0 FUN_145ca3fb0 body=53 status=ok
// SIG undefined FUN_145ca3fb0(void)

void FUN_145ca3fb0(longlong *param_1)

{
  FUN_14151b4d6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca3fe6 FUN_145ca3fe6 body=132 status=ok
// SIG undefined FUN_145ca3fe6(void)

void FUN_145ca3fe6(longlong param_1,int param_2)

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



// FUNCTION 145ca406c FUN_145ca406c body=178 status=ok
// SIG undefined FUN_145ca406c(void)

undefined8 * FUN_145ca406c(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1;
  if (param_3 == 2) {
    param_1 = param_1 + 0xab0;
  }
  else {
    if (param_3 != 1) {
      *param_2 = 0;
      iVar1 = *(int *)(param_1 + 0x30);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(int *)(param_2 + 1) = iVar1;
      if (iVar1 != 0) {
        FUN_145ca4120(param_2,iVar1,0);
        FUN_145ca4193(*param_2,uVar2,iVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_145ca40ff;
    }
    param_1 = param_1 + 0xa10;
  }
  FUN_143d84568(&local_28,param_2,param_1);
LAB_145ca40ff:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145ca4120 FUN_145ca4120 body=115 status=ok
// SIG undefined FUN_145ca4120(void)

void FUN_145ca4120(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,0x10);
    iVar2 = (int)(uVar1 / 0xc0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145ca4193 FUN_145ca4193 body=158 status=ok
// SIG undefined FUN_145ca4193(void)

void FUN_145ca4193(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x78;
    param_2 = param_2 + 0x78;
    do {
      *(undefined ***)(param_1 + -0x78) = &PTR_FUN_14b27fdf0;
      puVar2 = (undefined8 *)(param_2 + -0x68);
      puVar3 = (undefined8 *)(param_1 + -0x68);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined ***)(param_1 + -0x78) = &PTR_FUN_14b280690;
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_145ca4232(param_1,param_2);
      *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
      FUN_14151bf7c(param_1 + 0x20,param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      param_1 = param_1 + 0xc0;
      param_2 = param_2 + 0xc0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145ca4232 FUN_145ca4232 body=71 status=ok
// SIG undefined FUN_145ca4232(void)

undefined8 * FUN_145ca4232(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145ca427a FUN_145ca427a body=2220 status=ok
// SIG undefined FUN_145ca427a(void)

void FUN_145ca427a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  size_t sVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  longlong lVar14;
  wchar_t *_Str;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined8 *local_198;
  undefined4 local_190;
  code *local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  ulonglong local_168;
  code *pcStack_160;
  code *local_158;
  undefined8 uStack_150;
  longlong local_148;
  ulonglong uStack_140;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong *local_e8;
  longlong lStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 uStack_c8;
  longlong local_b8;
  longlong *plStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_2 != 0) {
    lVar15 = param_1 + 0x18;
    cVar6 = FUN_144729dda(lVar15);
    if (cVar6 != '\0') {
      if (*(longlong *)(param_2 + 0x28) != 0) {
        plVar8 = (longlong *)FUN_14479d2ce(lVar15);
        (**(code **)(*plVar8 + 0x10b8))(plVar8,&local_188);
        if (local_188 == (code *)0x0) {
          bVar7 = 1;
        }
        else {
          plVar8 = (longlong *)FUN_14479d2ce(lVar15);
          (**(code **)(*plVar8 + 0x10b8))(plVar8,&local_b8);
          bVar7 = (**(code **)**(undefined8 **)(param_2 + 0x28))
                            (*(undefined8 **)(param_2 + 0x28),local_b8);
          plVar8 = plStack_b0;
          if (plStack_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_b0)(plStack_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          bVar7 = bVar7 ^ 1;
        }
        plVar8 = uStack_180;
        if (uStack_180 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_180 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*uStack_180)(uStack_180);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (bVar7 == 0) {
          FUN_145ca4b58(param_1 + 0x28);
          plVar8 = (longlong *)FUN_145ca4b27(param_2);
          bVar17 = false;
          local_98 = 0;
          local_90 = 0;
          local_b8 = 0;
          plStack_b0 = (longlong *)0x0;
          local_8c = 0xffffffff00000080;
          local_84 = 0;
          local_78 = (undefined1 *)0x0;
          local_70 = 0;
          if ((longlong)(int)plVar8[1] != 0) {
            lVar18 = *plVar8;
            lVar19 = (longlong)(int)plVar8[1] * 0x58 + lVar18;
            bVar17 = false;
            do {
              if (*(int *)(lVar18 + 0x50) == 0) {
                _Str = L"";
LAB_145ca4400:
                local_108 = 0;
                sVar9 = wcslen(_Str);
                FUN_1449b853c(&local_188,_Str,sVar9 & 0xffffffff,1);
              }
              else {
                _Str = *(wchar_t **)(lVar18 + 0x48);
                local_108 = 0;
                if (_Str != (wchar_t *)0x0) goto LAB_145ca4400;
                local_100 = 0;
                local_f8 = 0;
              }
              local_e8 = (longlong *)0x0;
              lStack_e0 = 0;
              local_d8 = local_d8 & 0xffffffff00000000;
              local_d0 = 0;
              uStack_c8 = 0;
              FUN_1446ddda2(&local_e8,local_100,0);
              if (local_108 != 0) {
                FUN_1400020a8();
              }
              FUN_140128f82(&local_b8,&local_188,&local_e8,0);
              if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
                lVar11 = param_1 + 0xc0;
                if (*(longlong *)(param_1 + 200) != 0) {
                  lVar11 = *(longlong *)(param_1 + 200);
                }
                iVar16 = *(int *)(lVar11 + (ulonglong)
                                           (*(int *)(param_1 + 0xd0) - 1U & (uint)local_e8) * 4);
                if (iVar16 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar16 * 0x38) ==
                        (uint)local_e8) {
                      plVar8 = (longlong *)
                               FUN_148d243d8(param_1 + 0x88,(ulonglong)local_e8 & 0xffffffff,
                                             &local_e8);
                      lVar11 = *plVar8;
                      lVar14 = *(longlong *)(lVar18 + 0x28);
                      if (lVar11 != lVar14) {
                        if (lVar11 < lVar14) {
                          lVar14 = lVar11;
                        }
                        *plVar8 = lVar14;
                        bVar17 = true;
                      }
                      break;
                    }
                    iVar16 = *(int *)((longlong)iVar16 * 0x38 + *(longlong *)(param_1 + 0x88) + 0x30
                                     );
                  } while (iVar16 != -1);
                }
              }
              FUN_145ca4e3a(param_1);
              if (local_d0 != 0) {
                FUN_1400020a8();
              }
              lVar18 = lVar18 + 0x58;
            } while (lVar18 != lVar19);
          }
          pcVar3 = (code *)(param_1 + 0x88);
          lStack_e0 = param_1 + 0x98;
          local_e8 = (longlong *)&DAT_100000000;
          local_d8 = 0xffffffff;
          local_d0 = local_d0 & 0xffffffff00000000;
          if (*(int *)(param_1 + 0xb0) != 0) {
            FUN_1449c0562(&local_e8);
          }
          uStack_170 = local_d8;
          uVar5 = uStack_170;
          local_168 = local_d0;
          uStack_180 = local_e8;
          local_178 = lStack_e0;
          uStack_150 = uStack_150 & 0xffffffffffff0000;
          uStack_170._4_4_ = (int)(local_d8 >> 0x20);
          local_188 = pcVar3;
          pcStack_160 = pcVar3;
          local_158 = pcVar3;
          if (uStack_170._4_4_ < *(int *)(lStack_e0 + 0x18)) {
            iVar16 = uStack_170._4_4_;
            uStack_170 = uVar5;
            do {
              if ((int)plStack_b0 != local_84) {
                uVar4 = *(uint *)(*(longlong *)local_188 + (longlong)iVar16 * 0x38);
                puVar12 = local_78;
                if (local_78 == (undefined1 *)0x0) {
                  puVar12 = local_80;
                }
                for (iVar16 = *(int *)(puVar12 + (ulonglong)(local_70 - 1U & uVar4) * 4);
                    iVar16 != -1; iVar16 = *(int *)((longlong)iVar16 * 0x30 + local_b8 + 0x28)) {
                  if (*(uint *)(local_b8 + (longlong)iVar16 * 0x30) == uVar4) goto LAB_145ca47da;
                }
              }
              FUN_148d24990(pcStack_160);
              uStack_150 = CONCAT71(uStack_150._1_7_,1);
              bVar17 = true;
LAB_145ca47da:
              uStack_170 = CONCAT44(uStack_170._4_4_,(uint)uStack_170 & ~uStack_180._4_4_);
              FUN_1449c0562(&uStack_180);
              iVar16 = uStack_170._4_4_;
            } while (uStack_170._4_4_ < *(int *)(local_178 + 0x18));
            uVar5 = uStack_170;
            if (((uStack_150 & 1) != 0) && (uStack_150._1_1_ == '\x01')) {
              FUN_148d247a8(local_158,*(int *)(local_158 + 8) - *(int *)(local_158 + 0x34));
              uVar5 = uStack_170;
            }
          }
          uStack_170 = uVar5;
          lVar18 = *(longlong *)(param_1 + 0x78);
          iVar16 = *(int *)(param_1 + 0x80);
          uVar13 = 0;
          if ((longlong)iVar16 != 0) {
            lVar19 = 0;
            do {
              if ((*(int *)(lVar18 + 8 + lVar19) != 0) &&
                 (plVar8 = *(longlong **)(lVar18 + lVar19), plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 0x60))(plVar8,param_1 + 0x28);
              }
              lVar19 = lVar19 + 0x10;
            } while ((longlong)iVar16 * 0x10 != lVar19);
            uVar13 = *(undefined4 *)(param_1 + 0x80);
            lVar18 = *(longlong *)(param_1 + 0x78);
          }
          FUN_145ca4b2f(lVar18,uVar13);
          *(undefined4 *)(param_1 + 0x80) = 0;
          if (*(int *)(param_1 + 0x84) != 0) {
            FUN_148d243a8(param_1 + 0x78);
          }
          if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0x90)) {
            uVar10 = FUN_1401cb356();
            local_188 = FUN_148d1b2f2;
            uStack_180 = (longlong *)((ulonglong)uStack_180 & 0xffffffff00000000);
            FUN_148d1b170(&local_e8,param_1);
            local_1a8 = 0;
            FUN_1405f67fc(uVar10,&local_188,&local_e8,
                          L"FOakEntitlementManager.ProcessQueuedConsumes");
            *(code **)(param_1 + 0xf0) = local_188;
            local_188 = (code *)0x0;
            plVar8 = *(longlong **)(param_1 + 0xf8);
            *(longlong **)(param_1 + 0xf8) = uStack_180;
            uStack_180 = (longlong *)0x0;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))();
              }
              if (uStack_180 != (longlong *)0x0) {
                LOCK();
                piVar2 = (int *)((longlong)uStack_180 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*uStack_180 + 0x10))();
                }
              }
            }
            FUN_1449db362(&local_e8);
          }
          if ((bVar17) && (cVar6 = FUN_144729dda(lVar15), cVar6 != '\0')) {
            uVar10 = FUN_14479d2ce(lVar15);
            lVar18 = FUN_1447210f0(uVar10);
            if (((lVar18 != 0) &&
                (((lVar19 = FUN_1400f6f32(lVar18), lVar19 != 0 &&
                  (lVar19 = *(longlong *)(lVar19 + 0x30), lVar19 != 0)) &&
                 (lVar18 = FUN_1400f6f32(lVar18), lVar18 != 0)))) &&
               (lVar18 = *(longlong *)(lVar18 + 0x68), lVar18 != 0)) {
              uVar10 = FUN_14479d2ce(lVar15);
              FUN_140d27df6(lVar18,&local_e8,uVar10);
              local_198 = (undefined8 *)0x0;
              local_190 = 0;
              FUN_1446efa72(&local_198,0,2,0x10);
              local_190 = 2;
              *local_198 = &PTR_LAB_14b96eac0;
              LOCK();
              UNLOCK();
              lVar18 = DAT_14c758608 + 1;
              lVar15 = DAT_14c758608 + 1;
              if (lVar18 == 0) {
                LOCK();
                UNLOCK();
                lVar18 = DAT_14c758608 + 2;
                lVar15 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar15;
              local_198[2] = lVar18;
              *local_198 = &PTR_FUN_14b96c4f0;
              FUN_140ceec8e(lVar19,&local_188,&local_e8,&local_198);
            }
          }
          local_70 = 0;
          if (local_78 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1402d9776(&local_b8);
        }
      }
      goto LAB_145ca45e3;
    }
  }
  lVar15 = *(longlong *)(param_1 + 0x78);
  iVar16 = *(int *)(param_1 + 0x80);
  uVar13 = 0;
  if ((longlong)iVar16 != 0) {
    lVar18 = 0;
    do {
      local_168 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = (code *)0x0;
      uStack_180 = (longlong *)0x0;
      pcStack_160 = (code *)0x8000000000;
      local_158 = (code *)&DAT_ffffffff;
      if ((*(int *)(lVar15 + 8 + lVar18) != 0) &&
         (plVar8 = *(longlong **)(lVar15 + lVar18), plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x60))(plVar8,&local_188);
        uStack_140 = uStack_140 & 0xffffffff00000000;
        if (local_148 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_145c3cdbc(&local_188);
      lVar18 = lVar18 + 0x10;
    } while ((longlong)iVar16 * 0x10 != lVar18);
    uVar13 = *(undefined4 *)(param_1 + 0x80);
    lVar15 = *(longlong *)(param_1 + 0x78);
  }
  FUN_145ca4b2f(lVar15,uVar13);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_148d243a8(param_1 + 0x78);
  }
LAB_145ca45e3:
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca4b27 FUN_145ca4b27 body=8 status=ok
// SIG undefined FUN_145ca4b27(void)

longlong FUN_145ca4b27(longlong param_1)

{
  return param_1 + 0x348;
}



// FUNCTION 145ca4b2f FUN_145ca4b2f body=40 status=ok
// SIG undefined FUN_145ca4b2f(void)

void FUN_145ca4b2f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 145ca4b58 FUN_145ca4b58 body=63 status=ok
// SIG undefined FUN_145ca4b58(void)

void FUN_145ca4b58(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145ca4cf2(param_1);
    FUN_145ca4b98(param_1);
    return;
  }
  FUN_145ca4b98(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145ca5792(param_1);
  return;
}



// FUNCTION 145ca4b98 FUN_145ca4b98 body=345 status=ok
// SIG undefined FUN_145ca4b98(void)

void FUN_145ca4b98(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = *local_70 + (longlong)iStack_54 * 0x78;
      FUN_145ca50aa(lVar2 + 0x28);
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ca4cf2 FUN_145ca4cf2 body=327 status=ok
// SIG undefined FUN_145ca4cf2(void)

void FUN_145ca4cf2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x74 + (longlong)iVar4 * 0x78) * 4) =
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



// FUNCTION 145ca4e3a FUN_145ca4e3a body=623 status=ok
// SIG undefined FUN_145ca4e3a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145ca4e3a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong *local_140;
  undefined1 local_134 [4];
  longlong local_130 [6];
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined8 uStack_f7;
  longlong local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_78 = 0x1010100;
  local_74 = 0xffff;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xf;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  if (*(int *)(param_3 + 0x40) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(param_3 + 0x38);
  }
  local_b0 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_a8 = (char *)0x0;
    local_a0 = 0;
  }
  else {
    sVar4 = wcslen(_Str);
    FUN_1449b853c(local_130,_Str,sVar4 & 0xffffffff,1);
  }
  pcVar3 = local_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  sVar4 = strlen(local_a8);
  FUN_140cd1a74(&local_98,pcVar3,sVar4);
  FUN_145ca514a(&local_148,&local_98,&local_78);
  FUN_1401d9a90(&local_98);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_148 != 0) && (*(longlong *)(local_148 + 0x28) != 0)) {
    uStack_f8 = 0;
    uStack_f7 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_130[3] = 0;
    local_130[4] = 0;
    local_130[1] = 0;
    local_130[2] = 0;
    local_130[5] = *(undefined8 *)(param_3 + 0x28);
    local_130[0] = *(longlong *)(local_148 + 0x28);
    FUN_144a787a6(local_130 + 1,param_3 + 0x48);
    FUN_144a787a6(local_130 + 3,param_3 + 0x38);
    FUN_1446dcc2e(&uStack_100,local_148 + 0x30);
    local_98 = param_2;
    plStack_90 = local_130;
    FUN_145ca51d8(param_1 + 0x28,local_134);
    uVar5 = FUN_14479d2ce(param_1 + 0x18);
    FUN_145ca5104(*(undefined8 *)(local_148 + 0x28),uVar5,local_130);
    FUN_145ca50aa(local_130);
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
      }
    }
  }
  FUN_14151bfc4(&local_78);
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca50aa FUN_145ca50aa body=89 status=ok
// SIG undefined FUN_145ca50aa(void)

void FUN_145ca50aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ca5104 FUN_145ca5104 body=70 status=ok
// SIG undefined FUN_145ca5104(void)

void FUN_145ca5104(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar1 = (longlong *)FUN_1412ba9fc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000145ca513e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_1,param_3);
    return;
  }
  return;
}



// FUNCTION 145ca514a FUN_145ca514a body=140 status=ok
// SIG undefined FUN_145ca514a(void)

undefined8 * FUN_145ca514a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141173dd4(&local_28,param_2,param_3,&DAT_14cb79040);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca51d8 FUN_145ca51d8 body=295 status=ok
// SIG undefined FUN_145ca51d8(void)

undefined4 * FUN_145ca51d8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  FUN_145ca548c(param_1,local_48);
  uVar1 = param_3[1];
  FUN_1447a97f4(local_40,*param_3);
  FUN_145ca53b4(local_40 + 10,uVar1);
  local_40[0x1c] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_145ca5300(param_1,uVar5,local_40,&local_4c);
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
      local_40[0x1d] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x1c] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145ca5792(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca5300 FUN_145ca5300 body=179 status=ok
// SIG undefined FUN_145ca5300(void)

undefined8 FUN_145ca5300(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x78);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x78) == *param_3) {
          FUN_145ca50aa((longlong)_Dst + 0x28);
          if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x70);
          FUN_148d24d82(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x70);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145ca53b4 FUN_145ca53b4 body=215 status=ok
// SIG undefined FUN_145ca53b4(void)

undefined8 * FUN_145ca53b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  lVar3 = param_2[7];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 145ca548c FUN_145ca548c body=227 status=ok
// SIG undefined FUN_145ca548c(void)

int * FUN_145ca548c(longlong *param_1,int *param_2)

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
      FUN_1410fd1ac(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x78);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x78) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x78 + *param_1;
  return param_2;
}



// FUNCTION 145ca5570 FUN_145ca5570 body=536 status=ok
// SIG undefined FUN_145ca5570(void)

void FUN_145ca5570(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
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
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = local_78;
  if (((*(byte **)(param_4 + 0x30) != (byte *)0x0) && ((**(byte **)(param_4 + 0x30) & 0x6b) == 3))
     && (lVar4 = FUN_145ca578a(param_2), uVar2 = local_78, lVar4 != 0)) {
    plVar5 = (longlong *)FUN_1412446d2(param_4 + 0x30);
    plVar1 = plVar5 + 3;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)plVar5[6] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar7 = (int)plVar5[6];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar2 = local_78;
    local_88 = (int)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar5;
    if ((local_78._4_4_ != iVar7) || (uStack_60 != plVar1)) {
      iVar3 = local_78._4_4_;
      local_78 = uVar2;
      do {
        FUN_1447a97f4(&local_68,(longlong)iVar3 * 0x40 + *local_90);
        if ((((int)local_68 != 0) && (local_68._4_4_ != 0)) && ((int)local_68 != DAT_14c948000)) {
          lVar4 = 0xffffffff;
          if (*(longlong *)(param_4 + 0x28) < 0xffffffff) {
            lVar4 = *(longlong *)(param_4 + 0x28);
          }
          lVar8 = 0;
          if (0 < lVar4) {
            lVar8 = lVar4;
          }
          if (((int)local_68._4_4_ < 2) && (local_44 < 1)) {
            puVar6 = &uStack_60;
          }
          else {
            puVar6 = (undefined8 *)CONCAT44(uStack_4c,uStack_50);
          }
          local_a8 = *(undefined1 *)(param_4 + 0x40);
          if ((int)local_68._4_4_ < 1) {
            local_98 = DAT_14c948620;
            local_a0 = DAT_14c948618;
          }
          else {
            local_98 = *(undefined4 *)(puVar6 + 1);
            local_a0 = *puVar6;
          }
          (**(code **)(*(longlong *)(param_2 + 0x9b0) + 0x38))
                    ((longlong *)(param_2 + 0x9b0),&local_a0,lVar8,1);
          uVar2 = local_78;
          if (CONCAT44(uStack_4c,uStack_50) != 0) {
            FUN_1400020a8();
            uVar2 = local_78;
          }
          break;
        }
        if (CONCAT44(uStack_4c,uStack_50) != 0) {
          FUN_1400020a8();
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar3 = local_78._4_4_;
        uVar2 = local_78;
      } while (local_90 != plVar5 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || local_78._4_4_ != iVar7));
    }
  }
  local_78 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ca578a FUN_145ca578a body=8 status=ok
// SIG undefined FUN_145ca578a(void)

undefined8 FUN_145ca578a(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xc30);
}



// FUNCTION 145ca5792 FUN_145ca5792 body=428 status=ok
// SIG undefined FUN_145ca5792(void)

void FUN_145ca5792(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x78;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x74 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar7) =
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



// FUNCTION 145ca5940 FUN_145ca5940 body=660 status=ok
// SIG undefined FUN_145ca5940(void)

void FUN_145ca5940(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  float fVar3;
  undefined1 auStack_88 [32];
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1448729ea(param_1 + 0x48,local_68);
  fVar3 = (float)FUN_144a7b41a(local_68,0);
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  FUN_145ca5bd6(param_1,param_2,DAT_14cbe4c90,fVar3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_68;
    if (0x18 < local_50) {
      pppuVar2 = (undefined8 ***)local_68[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_1448729ea(param_1 + 200,local_68,param_3);
  fVar3 = (float)FUN_144a7b41a(local_68,0);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  FUN_145ca5c86(param_1,param_2,DAT_14cbe4ca8,fVar3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_68;
    if (0x18 < local_50) {
      pppuVar2 = (undefined8 ***)local_68[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_1448729ea(param_1 + 0x168,local_68,param_3);
  fVar3 = (float)FUN_144a7b41a(local_68,0);
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  FUN_145ca5bd6(param_1,param_2,DAT_14cbe4dc8,fVar3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_68;
    if (0x18 < local_50) {
      pppuVar2 = (undefined8 ***)local_68[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_1448729ea(param_1 + 0x1e8,local_68,param_3);
  fVar3 = (float)FUN_144a7b41a(local_68,0);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  FUN_145ca5c86(param_1,param_2,DAT_14cbe4de0,fVar3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_68;
    if (0x18 < local_50) {
      pppuVar2 = (undefined8 ***)local_68[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca5bd6 FUN_145ca5bd6 body=175 status=ok
// SIG undefined FUN_145ca5bd6(void)

void FUN_145ca5bd6(undefined8 param_1,longlong param_2,longlong param_3,float param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_2 + 0x48);
  *(int *)(param_2 + 0x48) = iVar2 + 1;
  if ((longlong)*(int *)(param_2 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
    lVar3 = (longlong)*(int *)(param_2 + 0x40) * 0x2c;
    do {
      if (((int)*plVar1 == (int)param_3) &&
         (*(int *)((longlong)plVar1 + 4) == (int)((ulonglong)param_3 >> 0x20))) {
        if (plVar1 != (longlong *)0x0) goto LAB_145ca5c47;
        break;
      }
      plVar1 = (longlong *)((longlong)plVar1 + 0x2c);
      lVar3 = lVar3 + -0x2c;
    } while (lVar3 != 0);
  }
  *(int *)(param_2 + 0x48) = iVar2 + 2;
  plVar1 = (longlong *)FUN_14044046a(param_2 + 0x38);
  if ((int)plVar1[1] == 0 || *plVar1 != param_3) {
    *plVar1 = param_3;
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  }
LAB_145ca5c47:
  if ((*(float *)((longlong)plVar1 + 0x24) != param_4) ||
     (NAN(*(float *)((longlong)plVar1 + 0x24)) || NAN(param_4))) {
    iVar2 = (int)plVar1[5] + 1;
  }
  else {
    iVar2 = 1;
    if ((int)plVar1[5] != 0) {
      return;
    }
  }
  *(float *)((longlong)plVar1 + 0x24) = param_4;
  *(int *)(plVar1 + 5) = iVar2;
  return;
}



// FUNCTION 145ca5c86 FUN_145ca5c86 body=175 status=ok
// SIG undefined FUN_145ca5c86(void)

void FUN_145ca5c86(undefined8 param_1,longlong param_2,longlong param_3,float param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_2 + 0x48);
  *(int *)(param_2 + 0x48) = iVar2 + 1;
  if ((longlong)*(int *)(param_2 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
    lVar3 = (longlong)*(int *)(param_2 + 0x40) * 0x2c;
    do {
      if (((int)*plVar1 == (int)param_3) &&
         (*(int *)((longlong)plVar1 + 4) == (int)((ulonglong)param_3 >> 0x20))) {
        if (plVar1 != (longlong *)0x0) goto LAB_145ca5cf7;
        break;
      }
      plVar1 = (longlong *)((longlong)plVar1 + 0x2c);
      lVar3 = lVar3 + -0x2c;
    } while (lVar3 != 0);
  }
  *(int *)(param_2 + 0x48) = iVar2 + 2;
  plVar1 = (longlong *)FUN_14044046a(param_2 + 0x38);
  if ((int)plVar1[1] == 0 || *plVar1 != param_3) {
    *plVar1 = param_3;
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  }
LAB_145ca5cf7:
  if ((*(float *)((longlong)plVar1 + 0x14) != param_4) ||
     (NAN(*(float *)((longlong)plVar1 + 0x14)) || NAN(param_4))) {
    iVar2 = (int)plVar1[3] + 1;
  }
  else {
    iVar2 = 1;
    if ((int)plVar1[3] != 0) {
      return;
    }
  }
  *(float *)((longlong)plVar1 + 0x14) = param_4;
  *(int *)(plVar1 + 3) = iVar2;
  return;
}



// FUNCTION 145ca5d36 FUN_145ca5d36 body=40 status=ok
// SIG undefined FUN_145ca5d36(void)

undefined8 FUN_145ca5d36(undefined8 param_1,int param_2)

{
  FUN_145ca5d5e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca5d5e FUN_145ca5d5e body=79 status=ok
// SIG undefined FUN_145ca5d5e(void)

void FUN_145ca5d5e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a496590;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a498260;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1405d1598(param_1);
  return;
}



// FUNCTION 145ca5dae FUN_145ca5dae body=40 status=ok
// SIG undefined FUN_145ca5dae(void)

undefined8 FUN_145ca5dae(undefined8 param_1,int param_2)

{
  FUN_145ca5dd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca5dd6 FUN_145ca5dd6 body=79 status=ok
// SIG undefined FUN_145ca5dd6(void)

void FUN_145ca5dd6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4d9b60;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca5e26 FUN_145ca5e26 body=40 status=ok
// SIG undefined FUN_145ca5e26(void)

undefined8 FUN_145ca5e26(undefined8 param_1,int param_2)

{
  FUN_145ca5e4e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca5e4e FUN_145ca5e4e body=79 status=ok
// SIG undefined FUN_145ca5e4e(void)

void FUN_145ca5e4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5ddf90;
  param_1[5] = &PTR_FUN_14a5de330;
  FUN_1458791db(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145879264(param_1);
  return;
}



// FUNCTION 145ca5ea8 FUN_145ca5ea8 body=107 status=ok
// SIG undefined FUN_145ca5ea8(void)

undefined8 * FUN_145ca5ea8(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c45286();
  *param_1 = &PTR_FUN_14a67a790;
  FUN_1446f470e(&local_20,L"Material Attributes",1);
  param_1[0x16] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca5f14 FUN_145ca5f14 body=40 status=ok
// SIG undefined FUN_145ca5f14(void)

undefined8 FUN_145ca5f14(undefined8 param_1,int param_2)

{
  FUN_145ca5f3c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca5f3c FUN_145ca5f3c body=79 status=ok
// SIG undefined FUN_145ca5f3c(void)

void FUN_145ca5f3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6db600;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a6db140;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1458dfd06(param_1);
  return;
}



// FUNCTION 145ca5f8c FUN_145ca5f8c body=95 status=ok
// SIG undefined FUN_145ca5f8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca5f8c(void)

{
  FUN_145ca6034();
  _DAT_14cad73c0 = 0;
  DAT_14cad73d0 = 0xffffffff;
  _DAT_14cad73d4 = 0x105;
  DAT_14cad73d6 = 0;
  _DAT_14cad6f80 = &PTR_FUN_14a8cab10;
  _DAT_14cad73b8 = &PTR_FUN_14a8cab20;
  DAT_14cad73c8 = &PTR_FUN_14a8cab50;
  FUN_145ca5fec();
  return;
}



// FUNCTION 145ca5fec FUN_145ca5fec body=71 status=ok
// SIG undefined FUN_145ca5fec(void)

void FUN_145ca5fec(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14cad73d5 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000145ca601e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14cad73c8 + 0x18))(&DAT_14cad73c8,uVar1,*(code **)(DAT_14cad73c8 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14cad73c8,0);
  return;
}



// FUNCTION 145ca6034 FUN_145ca6034 body=72 status=ok
// SIG undefined FUN_145ca6034(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca6034(void)

{
  _DAT_14cad6f80 = &PTR_FUN_14a8cab80;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad6f90);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad6f90,4000);
  memset(&DAT_14cad6fb8,0,0x400);
  return;
}



// FUNCTION 145ca607c FUN_145ca607c body=95 status=ok
// SIG undefined FUN_145ca607c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca607c(void)

{
  FUN_145ca6124();
  _DAT_14cad7818 = 0;
  DAT_14cad7828 = 0xffffffff;
  _DAT_14cad782c = 0x105;
  DAT_14cad782e = 0;
  _DAT_14cad73d8 = &PTR_FUN_14a8cab88;
  _DAT_14cad7810 = &PTR_FUN_14a8cab90;
  DAT_14cad7820 = &PTR_FUN_14a8cabc0;
  FUN_145ca60dc();
  return;
}



// FUNCTION 145ca60dc FUN_145ca60dc body=71 status=ok
// SIG undefined FUN_145ca60dc(void)

void FUN_145ca60dc(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14cad782d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000145ca610e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14cad7820 + 0x18))(&DAT_14cad7820,uVar1,*(code **)(DAT_14cad7820 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14cad7820,0);
  return;
}



// FUNCTION 145ca6124 FUN_145ca6124 body=72 status=ok
// SIG undefined FUN_145ca6124(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca6124(void)

{
  _DAT_14cad73d8 = &PTR_FUN_14a8cabf0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cad73e8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cad73e8,4000);
  memset(&DAT_14cad7410,0,0x400);
  return;
}



// FUNCTION 145ca616c FUN_145ca616c body=95 status=ok
// SIG undefined FUN_145ca616c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca616c(void)

{
  FUN_145ca6214();
  _DAT_14cae1348 = 0;
  DAT_14cae1358 = 0xffffffff;
  _DAT_14cae135c = 0x105;
  DAT_14cae135e = 0;
  _DAT_14cae0e88 = &PTR_FUN_14a9154c0;
  _DAT_14cae1340 = &PTR_FUN_14a9154d0;
  DAT_14cae1350 = &PTR_FUN_14a915500;
  FUN_145ca61cc();
  return;
}



// FUNCTION 145ca61cc FUN_145ca61cc body=71 status=ok
// SIG undefined FUN_145ca61cc(void)

void FUN_145ca61cc(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14cae135d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000145ca61fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14cae1350 + 0x18))(&DAT_14cae1350,uVar1,*(code **)(DAT_14cae1350 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14cae1350,0);
  return;
}



// FUNCTION 145ca6214 FUN_145ca6214 body=72 status=ok
// SIG undefined FUN_145ca6214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca6214(void)

{
  _DAT_14cae0e88 = &PTR_FUN_14a9154b0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae0e98);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae0e98,4000);
  memset(&DAT_14cae0ec0,0,0x480);
  return;
}



// FUNCTION 145ca625c FUN_145ca625c body=95 status=ok
// SIG undefined FUN_145ca625c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca625c(void)

{
  FUN_145ca6304();
  _DAT_14cae1ad8 = 0;
  DAT_14cae1ae8 = 0xffffffff;
  _DAT_14cae1aec = 0x105;
  DAT_14cae1aee = 0;
  _DAT_14cae1618 = &PTR_FUN_14a915530;
  _DAT_14cae1ad0 = &PTR_FUN_14a915540;
  DAT_14cae1ae0 = &PTR_FUN_14a915570;
  FUN_145ca62bc();
  return;
}



// FUNCTION 145ca62bc FUN_145ca62bc body=71 status=ok
// SIG undefined FUN_145ca62bc(void)

void FUN_145ca62bc(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14cae1aed = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000145ca62ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14cae1ae0 + 0x18))(&DAT_14cae1ae0,uVar1,*(code **)(DAT_14cae1ae0 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14cae1ae0,0);
  return;
}



// FUNCTION 145ca6304 FUN_145ca6304 body=72 status=ok
// SIG undefined FUN_145ca6304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca6304(void)

{
  _DAT_14cae1618 = &PTR_FUN_14a9154b8;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae1628);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae1628,4000);
  memset(&DAT_14cae1650,0,0x480);
  return;
}



// FUNCTION 145ca634c FUN_145ca634c body=40 status=ok
// SIG undefined FUN_145ca634c(void)

undefined8 FUN_145ca634c(undefined8 param_1,int param_2)

{
  FUN_145ca6374();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca6374 FUN_145ca6374 body=79 status=ok
// SIG undefined FUN_145ca6374(void)

void FUN_145ca6374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adb1380;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca63c4 FUN_145ca63c4 body=40 status=ok
// SIG undefined FUN_145ca63c4(void)

undefined8 FUN_145ca63c4(undefined8 param_1,int param_2)

{
  FUN_145ca63ec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca63ec FUN_145ca63ec body=79 status=ok
// SIG undefined FUN_145ca63ec(void)

void FUN_145ca63ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b116120;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca643c FUN_145ca643c body=40 status=ok
// SIG undefined FUN_145ca643c(void)

undefined8 FUN_145ca643c(undefined8 param_1,int param_2)

{
  FUN_145ca6464();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca6464 FUN_145ca6464 body=79 status=ok
// SIG undefined FUN_145ca6464(void)

void FUN_145ca6464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b43d530;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca64b4 FUN_145ca64b4 body=40 status=ok
// SIG undefined FUN_145ca64b4(void)

undefined8 FUN_145ca64b4(undefined8 param_1,int param_2)

{
  FUN_145ca64dc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca64dc FUN_145ca64dc body=79 status=ok
// SIG undefined FUN_145ca64dc(void)

void FUN_145ca64dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4b0350;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca652c FUN_145ca652c body=40 status=ok
// SIG undefined FUN_145ca652c(void)

undefined8 FUN_145ca652c(undefined8 param_1,int param_2)

{
  FUN_145ca6554();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca6554 FUN_145ca6554 body=79 status=ok
// SIG undefined FUN_145ca6554(void)

void FUN_145ca6554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4b09b0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca65a4 FUN_145ca65a4 body=40 status=ok
// SIG undefined FUN_145ca65a4(void)

undefined8 FUN_145ca65a4(undefined8 param_1,int param_2)

{
  FUN_145ca65cc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca65cc FUN_145ca65cc body=79 status=ok
// SIG undefined FUN_145ca65cc(void)

void FUN_145ca65cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c72c0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca6624 FUN_145ca6624 body=111 status=ok
// SIG undefined FUN_145ca6624(void)

undefined8 * FUN_145ca6624(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14b6d6680;
  FUN_1446f470e(param_1 + 7,L"Spine5",1);
  FUN_1446f470e(param_1 + 8,L"R_Hand_Object",1);
  param_1[9] = 0;
  FUN_140ceb8b5();
  param_1[9] = DAT_14cbc3c98;
  return param_1;
}



// FUNCTION 145ca669c FUN_145ca669c body=111 status=ok
// SIG undefined FUN_145ca669c(void)

undefined8 * FUN_145ca669c(undefined8 *param_1)

{
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc40f10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"SortOrder");
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"DecalSize");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"DecalMaterialPathName");
  return param_1;
}



// FUNCTION 145ca6714 FUN_145ca6714 body=230 status=ok
// SIG undefined FUN_145ca6714(void)

undefined8 * FUN_145ca6714(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14099c692(param_1,uVar1);
  *param_1 = &PTR_FUN_14be7cec0;
  param_1[5] = &PTR_FUN_14be7dbf0;
  param_1[6] = &PTR_LAB_14be7dc30;
  param_1[0x55] = &PTR_FUN_14be7dc80;
  param_1[0x56] = &PTR_FUN_14be7dd00;
  param_1[0x57] = &PTR_FUN_14be7dd10;
  param_1[0xca] = &PTR_FUN_14be7dd40;
  param_1[0x15a] = &PTR_FUN_14be7dda0;
  param_1[0x22f] = 0x3ca3d70a3cf5c28f;
  param_1[0x230] = 0x3f8000003f4ccccd;
  param_1[0x231] = 0x42b400003f800000;
  *(undefined4 *)(param_1 + 0x232) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0x1194) = 0;
  *(undefined4 *)(param_1 + 0x233) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)((longlong)param_1 + 0x89e) = *(byte *)((longlong)param_1 + 0x89e) | 0x80;
  *(undefined2 *)(param_1 + 9) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf8 | 6;
  return param_1;
}



// FUNCTION 145ca67fa FUN_145ca67fa body=95 status=ok
// SIG undefined FUN_145ca67fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca67fa(void)

{
  FUN_145ca68a2();
  _DAT_14cc26ce8 = &PTR_LAB_14a399f40;
  _DAT_14cc26cf0 = 0;
  FUN_144a7f8ec(&DAT_14cc26cf8);
  _DAT_14cc26a30 = &PTR_FUN_14be80580;
  _DAT_14cc26ce8 = &PTR_FUN_14be80590;
  DAT_14cc26cf8 = &PTR_FUN_14be805c0;
  FUN_145ca685a();
  return;
}



// FUNCTION 145ca685a FUN_145ca685a body=71 status=ok
// SIG undefined FUN_145ca685a(void)

void FUN_145ca685a(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14cc26d05 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000145ca688c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14cc26cf8 + 0x18))(&DAT_14cc26cf8,uVar1,*(code **)(DAT_14cc26cf8 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14cc26cf8,0);
  return;
}



// FUNCTION 145ca68a2 FUN_145ca68a2 body=72 status=ok
// SIG undefined FUN_145ca68a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ca68a2(void)

{
  _DAT_14cc26a30 = &PTR_FUN_14be805f0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc26a40);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc26a40,4000);
  memset(&DAT_14cc26a68,0,0x280);
  return;
}



// FUNCTION 145ca68ea FUN_145ca68ea body=72 status=ok
// SIG undefined FUN_145ca68ea(void)

void FUN_145ca68ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145ca6927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ca6932 FUN_145ca6932 body=47 status=ok
// SIG undefined FUN_145ca6932(void)

void FUN_145ca6932(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145806982(lVar1);
    thunk_FUN_1400020a8(lVar1,0x28);
    return;
  }
  return;
}



// FUNCTION 145ca6962 FUN_145ca6962 body=40 status=ok
// SIG undefined FUN_145ca6962(void)

undefined8 FUN_145ca6962(undefined8 param_1,int param_2)

{
  FUN_145ca698a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca698a FUN_145ca698a body=79 status=ok
// SIG undefined FUN_145ca698a(void)

void FUN_145ca698a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bedfad0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ca69da FUN_145ca69da body=649 status=ok
// SIG undefined FUN_145ca69da(void)

void FUN_145ca69da(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aff2090;
  plVar3 = (longlong *)param_1[0x4c];
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
  FUN_145ca6c63(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca6cfc(param_1 + 0x32);
  FUN_145ca6c64(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2c] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (*(int *)((longlong)param_1 + 0x17c) != 0) {
    FUN_140115c12(param_1 + 0x2e,0);
  }
  param_1[0x2d] = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x27] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (*(int *)((longlong)param_1 + 0x154) != 0) {
    FUN_140115c12(param_1 + 0x29,0);
  }
  param_1[0x28] = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  param_1[0x22] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (*(int *)((longlong)param_1 + 300) != 0) {
    FUN_140115c12(param_1 + 0x24,0);
  }
  param_1[0x23] = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1e] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    FUN_140115c12(param_1 + 0x20,0);
  }
  param_1[0x1f] = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca6c8c(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca6cc4(param_1 + 7);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145ca6c63 FUN_145ca6c63 body=1 status=ok
// SIG undefined FUN_145ca6c63(void)

void FUN_145ca6c63(void)

{
  return;
}



// FUNCTION 145ca6c64 FUN_145ca6c64 body=40 status=ok
// SIG undefined FUN_145ca6c64(void)

void FUN_145ca6c64(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148618020(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 145ca6c8c FUN_145ca6c8c body=55 status=ok
// SIG undefined FUN_145ca6c8c(void)

void FUN_145ca6c8c(longlong *param_1)

{
  FUN_145ca6e06(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca6cc4 FUN_145ca6cc4 body=55 status=ok
// SIG undefined FUN_145ca6cc4(void)

void FUN_145ca6cc4(longlong *param_1)

{
  FUN_145ca6e82(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca6cfc FUN_145ca6cfc body=87 status=ok
// SIG undefined FUN_145ca6cfc(void)

void FUN_145ca6cfc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145ca6d54(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14087e9d8(param_1);
  return;
}



// FUNCTION 145ca6d54 FUN_145ca6d54 body=55 status=ok
// SIG undefined FUN_145ca6d54(void)

void FUN_145ca6d54(longlong *param_1)

{
  FUN_145ca6d8c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca6d8c FUN_145ca6d8c body=121 status=ok
// SIG undefined FUN_145ca6d8c(void)

void FUN_145ca6d8c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 145ca6e06 FUN_145ca6e06 body=123 status=ok
// SIG undefined FUN_145ca6e06(void)

void FUN_145ca6e06(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 145ca6e82 FUN_145ca6e82 body=123 status=ok
// SIG undefined FUN_145ca6e82(void)

void FUN_145ca6e82(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 145ca6efe FUN_145ca6efe body=63 status=ok
// SIG undefined FUN_145ca6efe(void)

undefined1 FUN_145ca6efe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145ca6f3e(param_2,param_3);
    param_3 = param_3 + 0x158;
    param_2 = param_2 + 0x158;
  }
  return 1;
}



// FUNCTION 145ca6f3e FUN_145ca6f3e body=170 status=ok
// SIG undefined FUN_145ca6f3e(void)

longlong FUN_145ca6f3e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_2 != param_1) {
    FUN_145ca70e8(param_1,param_2);
  }
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x18);
    }
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x18) = lVar3;
  lVar3 = *(longlong *)(param_2 + 0x20);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x20);
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar3;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  FUN_140b177d4(param_1 + 0x30,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_145ca6fe8(param_1 + 0x58,param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  return param_1;
}



// FUNCTION 145ca6fe8 FUN_145ca6fe8 body=256 status=ok
// SIG undefined FUN_145ca6fe8(void)

longlong FUN_145ca6fe8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong lVar7;
  
  FUN_14009d848();
  FUN_140311eb6(param_1 + 0x10,param_2 + 0x10);
  FUN_14009d848(param_1 + 0x20,param_2 + 0x20);
  FUN_140311eb6(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  lVar7 = *(longlong *)(param_2 + 0x48);
  if (DAT_14c950c29 == 1) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = *(longlong *)(param_2 + 0x48);
    }
  }
  bVar6 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x48) = lVar7;
  lVar7 = *(longlong *)(param_2 + 0x50);
  if ((bVar6 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = *(longlong *)(param_2 + 0x50);
    }
  }
  *(longlong *)(param_1 + 0x50) = lVar7;
  if ((*(longlong *)(param_1 + 0x58) != *(longlong *)(param_2 + 0x58)) ||
     (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60))) {
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  FUN_140d188f2(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 145ca70e8 FUN_145ca70e8 body=314 status=ok
// SIG undefined FUN_145ca70e8(void)

void FUN_145ca70e8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ca7224 FUN_145ca7224 body=54 status=ok
// SIG undefined FUN_145ca7224(void)

undefined8 * FUN_145ca7224(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4990e0;
  FUN_145ca725a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca725a FUN_145ca725a body=95 status=ok
// SIG undefined FUN_145ca725a(void)

void FUN_145ca725a(longlong param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 145ca72ba FUN_145ca72ba body=215 status=ok
// SIG undefined FUN_145ca72ba(void)

undefined8 FUN_145ca72ba(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14be8f770;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14be8f700;
  local_30[3] = &LAB_1402651a2;
  FUN_145ca7392(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca7392 FUN_145ca7392 body=216 status=ok
// SIG undefined FUN_145ca7392(void)

undefined8 * FUN_145ca7392(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca747c FUN_145ca747c body=40 status=ok
// SIG undefined FUN_145ca747c(void)

undefined8 FUN_145ca747c(undefined8 param_1,int param_2)

{
  FUN_14151c000();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ca74a4 FUN_145ca74a4 body=420 status=ok
// SIG undefined FUN_145ca74a4(void)

void FUN_145ca74a4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aab16a0;
  param_1[2] = &PTR_FUN_14aab16d0;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca7648(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca767e(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca76b4(param_1 + 0x2c);
  FUN_14588b8d6(param_1 + 0x21);
  lVar1 = param_1[0x20];
  if (lVar1 != 0) {
    FUN_145ca778c(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_14151c76a(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca76ea(param_1 + 0x14);
  FUN_145ca7720(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca7756(param_1 + 3);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145ca7648 FUN_145ca7648 body=53 status=ok
// SIG undefined FUN_145ca7648(void)

void FUN_145ca7648(longlong *param_1)

{
  FUN_145ca78de();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca767e FUN_145ca767e body=53 status=ok
// SIG undefined FUN_145ca767e(void)

void FUN_145ca767e(longlong *param_1)

{
  FUN_145ca7886();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca76b4 FUN_145ca76b4 body=53 status=ok
// SIG undefined FUN_145ca76b4(void)

void FUN_145ca76b4(longlong *param_1)

{
  FUN_145ca7936();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca76ea FUN_145ca76ea body=53 status=ok
// SIG undefined FUN_145ca76ea(void)

void FUN_145ca76ea(longlong *param_1)

{
  FUN_145ca77d6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca7720 FUN_145ca7720 body=53 status=ok
// SIG undefined FUN_145ca7720(void)

void FUN_145ca7720(longlong *param_1)

{
  FUN_145ca7990();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca7756 FUN_145ca7756 body=53 status=ok
// SIG undefined FUN_145ca7756(void)

void FUN_145ca7756(longlong *param_1)

{
  FUN_145ca782e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca778c FUN_145ca778c body=73 status=ok
// SIG undefined FUN_145ca778c(void)

void FUN_145ca778c(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_1413f5272(param_1[1],(int)param_1[2]);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ca77d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 145ca77d6 FUN_145ca77d6 body=88 status=ok
// SIG undefined FUN_145ca77d6(void)

void FUN_145ca77d6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 145ca782e FUN_145ca782e body=88 status=ok
// SIG undefined FUN_145ca782e(void)

void FUN_145ca782e(longlong param_1)

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



// FUNCTION 145ca7886 FUN_145ca7886 body=88 status=ok
// SIG undefined FUN_145ca7886(void)

void FUN_145ca7886(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 145ca78de FUN_145ca78de body=88 status=ok
// SIG undefined FUN_145ca78de(void)

void FUN_145ca78de(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 145ca7936 FUN_145ca7936 body=90 status=ok
// SIG undefined FUN_145ca7936(void)

void FUN_145ca7936(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 145ca7990 FUN_145ca7990 body=333 status=ok
// SIG undefined FUN_145ca7990(void)

void FUN_145ca7990(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = *(longlong *)(*local_70 + (longlong)iStack_54 * 8);
      if (lVar2 != 0) {
        FUN_1458348a8(lVar2);
        FUN_1400020a8(lVar2);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b584e0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ca7ade FUN_145ca7ade body=72 status=ok
// SIG undefined FUN_145ca7ade(void)

void FUN_145ca7ade(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a499390;
  FUN_145ca7b5c();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca7b26(param_1 + 1);
  return;
}



// FUNCTION 145ca7b26 FUN_145ca7b26 body=53 status=ok
// SIG undefined FUN_145ca7b26(void)

void FUN_145ca7b26(longlong *param_1)

{
  FUN_145ca7c02();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca7b5c FUN_145ca7b5c body=102 status=ok
// SIG undefined FUN_145ca7b5c(void)

void FUN_145ca7b5c(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_145ca7bc2(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 145ca7bc2 FUN_145ca7bc2 body=63 status=ok
// SIG undefined FUN_145ca7bc2(void)

void FUN_145ca7bc2(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145ca7c5c(param_1);
    FUN_145ca7c02(param_1);
    return;
  }
  FUN_145ca7c02(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14758fa76(param_1);
  return;
}



// FUNCTION 145ca7c02 FUN_145ca7c02 body=90 status=ok
// SIG undefined FUN_145ca7c02(void)

void FUN_145ca7c02(longlong param_1)

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



// FUNCTION 145ca7c5c FUN_145ca7c5c body=335 status=ok
// SIG undefined FUN_145ca7c5c(void)

void FUN_145ca7c5c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 145ca7dac FUN_145ca7dac body=73 status=ok
// SIG undefined FUN_145ca7dac(void)

void FUN_145ca7dac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9c4200;
  FUN_145ca7e2c();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca7df6(param_1 + 1);
  return;
}



// FUNCTION 145ca7df6 FUN_145ca7df6 body=53 status=ok
// SIG undefined FUN_145ca7df6(void)

void FUN_145ca7df6(longlong *param_1)

{
  FUN_145ca7ed2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca7e2c FUN_145ca7e2c body=101 status=ok
// SIG undefined FUN_145ca7e2c(void)

void FUN_145ca7e2c(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_145ca7e92(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 145ca7e92 FUN_145ca7e92 body=63 status=ok
// SIG undefined FUN_145ca7e92(void)

void FUN_145ca7e92(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145ca7f2c(param_1);
    FUN_145ca7ed2(param_1);
    return;
  }
  FUN_145ca7ed2(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_147b96f12(param_1);
  return;
}



// FUNCTION 145ca7ed2 FUN_145ca7ed2 body=90 status=ok
// SIG undefined FUN_145ca7ed2(void)

void FUN_145ca7ed2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 145ca7f2c FUN_145ca7f2c body=335 status=ok
// SIG undefined FUN_145ca7f2c(void)

void FUN_145ca7f2c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 145ca807c FUN_145ca807c body=73 status=ok
// SIG undefined FUN_145ca807c(void)

void FUN_145ca807c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9c4220;
  FUN_145ca80fc();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca80c6(param_1 + 1);
  return;
}



// FUNCTION 145ca80c6 FUN_145ca80c6 body=53 status=ok
// SIG undefined FUN_145ca80c6(void)

void FUN_145ca80c6(longlong *param_1)

{
  FUN_145ca81a2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca80fc FUN_145ca80fc body=101 status=ok
// SIG undefined FUN_145ca80fc(void)

void FUN_145ca80fc(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_145ca8162(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 145ca8162 FUN_145ca8162 body=63 status=ok
// SIG undefined FUN_145ca8162(void)

void FUN_145ca8162(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145ca81fc(param_1);
    FUN_145ca81a2(param_1);
    return;
  }
  FUN_145ca81a2(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1479f7ea8(param_1);
  return;
}



// FUNCTION 145ca81a2 FUN_145ca81a2 body=90 status=ok
// SIG undefined FUN_145ca81a2(void)

void FUN_145ca81a2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 145ca81fc FUN_145ca81fc body=335 status=ok
// SIG undefined FUN_145ca81fc(void)

void FUN_145ca81fc(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 145ca834c FUN_145ca834c body=73 status=ok
// SIG undefined FUN_145ca834c(void)

void FUN_145ca834c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9c4240;
  FUN_145ca83cc();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca8396(param_1 + 1);
  return;
}



// FUNCTION 145ca8396 FUN_145ca8396 body=53 status=ok
// SIG undefined FUN_145ca8396(void)

void FUN_145ca8396(longlong *param_1)

{
  FUN_145ca8472();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ca83cc FUN_145ca83cc body=101 status=ok
// SIG undefined FUN_145ca83cc(void)

void FUN_145ca83cc(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_145ca8432(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 145ca8432 FUN_145ca8432 body=63 status=ok
// SIG undefined FUN_145ca8432(void)

void FUN_145ca8432(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145ca84cc(param_1);
    FUN_145ca8472(param_1);
    return;
  }
  FUN_145ca8472(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_147a13810(param_1);
  return;
}



// FUNCTION 145ca8472 FUN_145ca8472 body=90 status=ok
// SIG undefined FUN_145ca8472(void)

void FUN_145ca8472(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 145ca84cc FUN_145ca84cc body=335 status=ok
// SIG undefined FUN_145ca84cc(void)

void FUN_145ca84cc(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 145ca861c FUN_145ca861c body=115 status=ok
// SIG undefined FUN_145ca861c(void)

void FUN_145ca861c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_145ca8690();
  if (param_2 != 0) {
    lVar1 = FUN_144a7b4ca();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0xdac);
      if (*(char *)(param_1 + 0x5f4) != *(char *)(param_2 + 0x711)) {
        *(char *)(param_1 + 0x5f4) = *(char *)(param_2 + 0x711);
        FUN_1447f69b6(param_1 + 0x570);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ca8690 FUN_145ca8690 body=81 status=ok
// SIG undefined FUN_145ca8690(void)

void FUN_145ca8690(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x488) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x488) = param_2;
    FUN_145ca86e2(&DAT_14cb7df38,param_1);
    return;
  }
  return;
}



// FUNCTION 145ca86e2 FUN_145ca86e2 body=162 status=ok
// SIG undefined FUN_145ca86e2(void)

void FUN_145ca86e2(longlong *param_1,undefined8 param_2)

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
        goto LAB_145ca876f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145ca876f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145ca8784 FUN_145ca8784 body=783 status=ok
// SIG undefined FUN_145ca8784(void)

void FUN_145ca8784(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  code **local_f8;
  undefined1 local_f0 [8];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  code *local_c8;
  undefined4 local_c0;
  undefined1 local_98;
  undefined4 local_94;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14110d204();
  lVar2 = FUN_144a126be(param_1);
  FUN_145ca8d8a(param_1 + 200,lVar2);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,3,0x10);
  puVar1 = local_d8;
  local_d0 = 3;
  *local_d8 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_d8[2] = lVar3;
  *local_d8 = &PTR_FUN_14aea06d0;
  local_d8[3] = 0;
  FUN_14485c47a(local_d8 + 3,param_1);
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = &LAB_148408cee;
  (**(code **)(*DAT_14cb496f0 + 200))(DAT_14cb496f0,&local_d8);
  (**(code **)(*DAT_14cb49720 + 200))(DAT_14cb49720,&local_d8);
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar1 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_e8[2] = lVar3;
  *local_e8 = &PTR_FUN_14aea06d0;
  local_e8[3] = 0;
  FUN_14485c47a(local_e8 + 3,param_1);
  puVar1[4] = FUN_148408cfa;
  *(undefined4 *)(puVar1 + 5) = 0;
  (**(code **)(*DAT_14cb49680 + 200))(DAT_14cb49680,&local_e8);
  (**(code **)(*DAT_14cb49558 + 200))(DAT_14cb49558,&local_e8);
  (**(code **)(*DAT_14cb49570 + 200))(DAT_14cb49570,&local_e8);
  lVar3 = FUN_140cc289e();
  lVar5 = *(longlong *)(lVar3 + 0x110);
  if (lVar5 == 0) {
    FUN_140aa6c08(lVar3);
    lVar5 = *(longlong *)(lVar3 + 0x110);
  }
  FUN_145ca8a94(param_1,lVar5);
  local_c8 = FUN_140946d8c;
  local_c0 = 0;
  FUN_145ca8b8c(lVar2 + 0x690,local_f0,param_1,&local_c8);
  FUN_140fed43c(lVar2,param_1 + 0xa8);
  FUN_1411371f6(&local_c8);
  local_98 = 1;
  local_94 = 0x40;
  uVar4 = FUN_1458d53aa();
  local_f8 = &local_c8;
  lVar5 = FUN_141137228(lVar2,uVar4,0,0);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  *(longlong *)(param_1 + 0x40) = lVar5;
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  FUN_1449db362(&local_e8);
  FUN_1449db362(&local_d8);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca8a94 FUN_145ca8a94 body=170 status=ok
// SIG undefined FUN_145ca8a94(void)

void FUN_145ca8a94(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_148 [48];
  undefined1 local_118 [248];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144a126be();
  *(uint *)(param_1 + 0x80) = (uint)*(byte *)(param_2 + 0x38);
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1413e28b0(local_118);
    lVar1 = FUN_145ca8b40(local_118,param_2 + 0x40,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xa0) = lVar1;
    FUN_140f77756(local_118);
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca8b40 FUN_145ca8b40 body=75 status=ok
// SIG undefined FUN_145ca8b40(void)

longlong FUN_145ca8b40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_141498c8a(param_1,param_2 + 8,param_3,param_4,param_5);
  if (lVar1 != 0) {
    lVar2 = FUN_140fb7d76();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145ca8b8c FUN_145ca8b8c body=254 status=ok
// SIG undefined FUN_145ca8b8c(void)

undefined8
FUN_145ca8b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14aea07b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14aea0740;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ca8c8c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca8c8c FUN_145ca8c8c body=216 status=ok
// SIG undefined FUN_145ca8c8c(void)

undefined8 * FUN_145ca8c8c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ca8d72 FUN_145ca8d72 body=24 status=ok
// SIG undefined FUN_145ca8d72(void)

bool FUN_145ca8d72(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}


