// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1473b8ace FUN_1473b8ace body=520 status=ok
// SIG undefined FUN_1473b8ace(void)

void FUN_1473b8ace(longlong param_1)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 auStack_98 [32];
  int local_78;
  uint local_74;
  longlong *local_70;
  longlong local_68;
  int *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x34);
  local_50 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x6b0);
  FUN_1473b88c2();
  local_70 = (longlong *)(param_1 + 0xa8);
  FUN_1473b8cd8(local_70,*(undefined4 *)(param_1 + 0x48));
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar3 + 0x24);
  }
  FUN_1431a7326(&local_50,&local_58,lVar3,0);
  *(undefined8 *)(param_1 + 200) = local_58;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    local_60 = (int *)((longlong)*(int *)(param_1 + 0x48) * 0x28 + *(longlong *)(param_1 + 0x40));
    local_68 = param_1 + 0xb8;
    local_74 = uVar6 & 0xff;
    local_78 = uVar6 * 3;
    piVar7 = (int *)(*(longlong *)(param_1 + 0x40) + 0x18);
    do {
      FUN_1431a7326(&local_50,&local_58,*(undefined8 *)(piVar7 + -6),piVar7[-3]);
      iVar2 = *(int *)(param_1 + 0xc0);
      uVar6 = iVar2 + 1;
      *(uint *)(param_1 + 0xc0) = uVar6;
      if (*(uint *)(param_1 + 0xc4) < uVar6) {
        FUN_14736ff98(local_68);
      }
      uVar5 = local_58;
      *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar2 * 8) = local_58;
      iVar2 = *(int *)(param_1 + 0xb0);
      uVar6 = iVar2 + 1;
      *(uint *)(param_1 + 0xb0) = uVar6;
      if (*(uint *)(param_1 + 0xb4) < uVar6) {
        FUN_1473cc7f2(local_70);
      }
      lVar4 = *local_70;
      lVar8 = (longlong)iVar2 * 0x98;
      _Dst = (void *)(lVar8 + lVar4);
      memset(_Dst,0,0x98);
      *(uint *)(lVar4 + lVar8) = (piVar7[-2] & 0xffU) * 0x100 + local_74;
      *(int *)(lVar4 + 0x14 + lVar8) = (int)uVar5;
      if (iVar1 == 0 && lVar3 != 0) {
        *(undefined4 *)((longlong)_Dst + 0x10) = *(undefined4 *)(param_1 + 200);
        *(int *)((longlong)_Dst + 4) = *piVar7 * local_78 + *(int *)(param_1 + 0x30);
        *(int *)((longlong)_Dst + 8) = *piVar7;
      }
      piVar9 = piVar7 + 4;
      piVar7 = piVar7 + 10;
    } while (piVar9 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473b8cd8 FUN_1473b8cd8 body=41 status=ok
// SIG undefined FUN_1473b8cd8(void)

void FUN_1473b8cd8(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1473cc782();
  return;
}



// FUNCTION 1473b8d02 FUN_1473b8d02 body=41 status=ok
// SIG undefined FUN_1473b8d02(void)

void FUN_1473b8d02(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14736fde0();
  return;
}



// FUNCTION 1473b8d2c FUN_1473b8d2c body=134 status=ok
// SIG undefined FUN_1473b8d2c(void)

void FUN_1473b8d2c(longlong param_1,int param_2,uint *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar4 + 0x24);
    uVar5 = *(undefined8 *)(lVar4 + 0x78);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)param_2 * 0x28);
  lVar4 = *(longlong *)(*plVar1 + 0x78);
  uVar3 = *param_3;
  *param_3 = uVar3 & 0xffffff00 | uVar6 & 0xff;
  *param_3 = uVar3 & 0xffff0000 | uVar6 & 0xff | (*(uint *)(plVar1 + 2) & 0xff) << 8;
  if (uVar6 == 0) {
    uVar5 = 0;
  }
  else {
    param_3[1] = uVar6 * (int)plVar1[3] * 3 + iVar2;
  }
  *(undefined8 *)(param_3 + 2) = uVar5;
  *(ulonglong *)(param_3 + 4) = lVar4 + (ulonglong)*(uint *)((longlong)plVar1 + 0xc);
  return;
}



// FUNCTION 1473b8db2 FUN_1473b8db2 body=1206 status=ok
// SIG undefined FUN_1473b8db2(void)

undefined8 *
FUN_1473b8db2(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  uint local_94 [3];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x22;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a34c300;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[3];
  uVar7 = param_4[4];
  uVar8 = param_4[5];
  uVar9 = param_4[6];
  *(undefined4 *)(param_1 + 2) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 4) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 5) = uVar9;
  param_1[6] = param_3;
  *param_1 = &PTR_FUN_14a361250;
  *(undefined4 *)(param_1 + 7) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_4[1];
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1473a8036(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_1473a8036(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_1473a8036(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_1473a8036(param_1 + 0x31);
  *(undefined1 *)(param_1 + 0x38) = 1;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  iVar10 = *(int *)(param_3 + 0x2488);
  *(int *)(param_1 + 0x3f) = iVar10;
  uVar11 = -*(int *)(param_3 + 0x24a0) & (iVar10 + *(int *)(param_3 + 0x24a0)) - 1U;
  *(uint *)((longlong)param_1 + 0x1fc) = uVar11;
  if ((*(byte *)(param_1 + 7) & 2) != 0) {
    *(undefined4 *)(param_1 + 9) = 1;
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
    param_1[0x12] = (ulonglong)uVar11;
    param_1[0x13] = (ulonglong)uVar11;
    FUN_140393c76(param_1 + 10);
    iVar10 = *(int *)((longlong)param_1 + 0x24);
    *(int *)(param_1 + 0x15) = iVar10;
    *(undefined1 *)((longlong)param_1 + 0xac) = 1;
    uVar11 = DAT_14c760c88;
    if (iVar10 != 0) {
      uVar12 = 0;
      if (iVar10 != 1) {
        uVar12 = (ulonglong)DAT_14c760c88;
      }
      param_1[0x1e] = uVar12;
      param_1[0x1f] = (ulonglong)(uVar11 * iVar10);
      FUN_140393c76(param_1 + 0x16);
    }
    iVar10 = *(int *)(param_1 + 5);
    *(int *)(param_1 + 0x2d) = iVar10;
    *(undefined1 *)((longlong)param_1 + 0x16c) = 1;
    uVar11 = DAT_14c760c88;
    if (iVar10 != 0) {
      uVar12 = 0;
      if (iVar10 != 1) {
        uVar12 = (ulonglong)DAT_14c760c88;
      }
      param_1[0x36] = uVar12;
      param_1[0x37] = (ulonglong)(uVar11 * iVar10);
      FUN_140393c76(param_1 + 0x2e);
    }
    if (*(int *)((longlong)param_1 + 0x3c) == 0) {
      iVar10 = *(int *)((longlong)param_1 + 0x1c) * *(int *)(param_1 + 4);
      *(int *)(param_1 + 0x21) = iVar10;
      *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
      if (iVar10 == 0) goto LAB_1473b8f51;
      uVar12 = 0;
      if (iVar10 != 1) {
        uVar12 = (ulonglong)DAT_14c760c88;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x21) = 1;
      *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
      iVar10 = 1;
      uVar12 = 0;
    }
    uVar11 = DAT_14c760c88 * iVar10;
    param_1[0x2a] = uVar12;
    param_1[0x2b] = (ulonglong)uVar11;
    FUN_140393c76(param_1 + 0x22,(ulonglong)uVar11,CONCAT71((int7)(uVar12 >> 8),1));
  }
LAB_1473b8f51:
  if (((*(byte *)(param_1 + 7) & 1) != 0) && (*(int *)(param_1 + 4) != 0)) {
    uVar11 = *(int *)(param_1 + 4) * 0x18;
    FUN_140393c76(param_1 + 0x39,uVar11,1);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 1;
    local_74 = 0;
    uStack_6c = 0;
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_60 = 0;
    local_5c = 0;
    local_58 = L"RayTracingSceneMetadata";
    local_50 = 0;
    uStack_48 = 0;
    local_94[1] = 0x18;
    local_94[2] = 0x10102;
    local_94[0] = uVar11;
    if (uVar11 == 0) {
      FUN_14570b4be(param_2,&local_88,0x10102,0x18);
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_b0 = &local_88;
      local_b8 = 0x70;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,local_94);
      *(undefined4 *)(local_a0 + 0x18) = 0x70;
      FUN_14002049c(param_2,0);
    }
    else {
      local_b0 = &local_88;
      local_b8 = 0x70;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,local_94);
      *(undefined4 *)(local_a0 + 0x18) = 0x70;
    }
    lVar2 = param_1[0x3b];
    if (lVar2 != local_a0) {
      param_1[0x3b] = local_a0;
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      if (lVar2 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar2 + 8);
        uVar11 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar11 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar11 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1473b926a FUN_1473b926a body=230 status=ok
// SIG undefined FUN_1473b926a(void)

void FUN_1473b926a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a361250;
  FUN_1473b9350();
  FUN_14474ae1f(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x3c] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x3b] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x3b] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1473b9350 FUN_1473b9350 body=77 status=ok
// SIG undefined FUN_1473b9350(void)

void FUN_1473b9350(longlong param_1)

{
  FUN_1473b939e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x48);
  FUN_1473b939e(*(undefined8 *)(param_1 + 0x30),param_1 + 0xa8);
  FUN_1473b939e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x108);
  FUN_1473b939e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x168);
  return;
}



// FUNCTION 1473b939e FUN_1473b939e body=102 status=ok
// SIG undefined FUN_1473b939e(void)

void FUN_1473b939e(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1473a8b5a(param_1 + 0x590,1);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  cVar1 = FUN_1473a7d6e(param_2 + 0x20);
  if (cVar1 != '\0') {
    FUN_1473a73fe(param_1 + 0x3d8,param_2 + 0x20,0);
  }
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



// FUNCTION 1473b9404 FUN_1473b9404 body=248 status=ok
// SIG undefined FUN_1473b9404(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1473b9404(longlong param_1,undefined1 param_2)

{
  undefined *puVar1;
  
  switch(param_2) {
  case 6:
    puVar1 = (undefined *)(param_1 + 0x48);
    break;
  case 7:
    puVar1 = (undefined *)(param_1 + 0xa8);
    break;
  case 8:
    puVar1 = (undefined *)(param_1 + 0x108);
    break;
  case 9:
    puVar1 = (undefined *)(param_1 + 0x168);
    break;
  default:
    puVar1 = &DAT_14ca785b0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca78610) && (FUN_144b3d300(&DAT_14ca78610), DAT_14ca78610 == -1)) {
      _DAT_14ca785b0 = 0;
      DAT_14ca785b4 = 0;
      DAT_14ca785b8 = 0;
      uRam000000014ca785c0 = 0;
      _DAT_14ca785c8 = 0;
      FUN_1473a8036(&DAT_14ca785d0);
      DAT_14ca78608 = 1;
      _DAT_14ca785f0 = 0;
      uRam000000014ca785f8 = 0;
      _DAT_14ca78600 = 0;
      atexit((_func_5014 *)&LAB_1431a7e40);
      _Init_thread_footer(&DAT_14ca78610);
    }
  }
  return puVar1;
}



// FUNCTION 1473b94fc FUN_1473b94fc body=158 status=ok
// SIG undefined FUN_1473b94fc(void)

char FUN_1473b94fc(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  longlong *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  
  LOCK();
  bVar4 = *(char *)(param_1 + 0x40) == '\0';
  if (bVar4) {
    *(char *)(param_1 + 0x40) = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    FUN_1447d2058(param_1 + 0x40);
  }
  lVar1 = *param_5;
  lVar3 = FUN_1473b9404(param_1,param_3);
  memcpy(*(void **)(lVar3 + 8),(void *)((int)(param_4 * *(uint *)(param_1 + 0x1f8)) + lVar1),
         (ulonglong)*(uint *)(param_1 + 0x1f8));
  *(undefined1 *)(lVar3 + 0x58) = 1;
  FUN_1473b959a(param_1,param_2);
  LOCK();
  cVar2 = *(char *)(param_1 + 0x40);
  bVar4 = cVar2 == '\x01';
  if (bVar4) {
    *(char *)(param_1 + 0x40) = '\0';
    cVar2 = '\x01';
  }
  UNLOCK();
  if (bVar4) {
    return cVar2;
  }
  cVar2 = FUN_14008cdb0(param_1 + 0x40);
  return cVar2;
}



// FUNCTION 1473b959a FUN_1473b959a body=358 status=ok
// SIG undefined FUN_1473b959a(void)

void FUN_1473b959a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_2 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  local_a0 = &local_48;
  local_38 = 0x180000018000;
  local_48 = 0x2e;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a8 = 1;
  (*DAT_14ca79290)(*(undefined8 *)(lVar1 + 0x88),0x2000,0x1000,0);
  local_58 = *(undefined8 *)(param_1 + 0x30);
  local_50 = lVar1;
  FUN_1431a7e52(&local_58,param_1 + 0x48);
  FUN_1431a7e52(&local_58,param_1 + 0xa8);
  FUN_1431a7e52(&local_58,param_1 + 0x108);
  FUN_1431a7e52(&local_58,param_1 + 0x168);
  local_a0 = &local_78;
  local_68 = 0x800000001000;
  local_78 = 0x2e;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a8 = 1;
  (*DAT_14ca79290)(*(undefined8 *)(lVar1 + 0x88),0x1000,0x200000,0);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b9706 FUN_1473b9706 body=474 status=ok
// SIG undefined FUN_1473b9706(void)

ulonglong FUN_1473b9706(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  char *pcVar2;
  ulonglong *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pcVar2 = (char *)(param_1 + 0x131);
  LOCK();
  bVar9 = *(char *)(param_1 + 0x131) == '\0';
  if (bVar9) {
    *(char *)(param_1 + 0x131) = '\x01';
  }
  UNLOCK();
  if (!bVar9) {
    FUN_1447d2058(pcVar2);
  }
  local_50 = param_2;
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar6 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x120);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x128) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar8 != -1) {
      do {
        puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar8 * 0x18);
        if (*puVar3 == param_2) {
          if ((puVar3 != (ulonglong *)0x0) && (puVar3 + 1 != (ulonglong *)0x0)) {
            uVar7 = puVar3[1];
            goto LAB_1473b98a9;
          }
          break;
        }
        iVar8 = (int)puVar3[2];
      } while (iVar8 != -1);
    }
  }
  local_64 = 0;
  local_5c = *(undefined4 *)(param_1 + 0x84);
  local_60 = *(undefined4 *)(param_1 + 0x88);
  local_54 = *(undefined4 *)(param_1 + 0x8c);
  local_58 = *(undefined4 *)(param_1 + 0x90);
  local_68 = *(byte *)(param_2 + 0xa0) ^ 1;
  local_6c = 2;
  uVar7 = FUN_14001cc68(0x200,0x10);
  FUN_1473b8db2(uVar7,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x28),&local_6c);
  if (uVar7 != 0) {
    LOCK();
    *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
    UNLOCK();
  }
  local_48 = &local_50;
  local_40 = &local_78;
  local_78 = uVar7;
  FUN_1473cc886((longlong *)(param_1 + 0xe0),local_34);
  if (local_78 != 0) {
    LOCK();
    puVar1 = (uint *)(local_78 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1473b98a9:
  LOCK();
  cVar4 = *pcVar2;
  if (cVar4 == '\x01') {
    *pcVar2 = '\0';
  }
  UNLOCK();
  if (cVar4 != '\x01') {
    FUN_14008cdb0(pcVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1473b98e2 FUN_1473b98e2 body=304 status=ok
// SIG undefined FUN_1473b98e2(void)

undefined8 * FUN_1473b98e2(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  ulonglong local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined4 *puStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = 0x3b9d13f6;
  local_f4 = 0;
  uStack_dc = 0;
  uStack_cc = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_b4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  local_98 = 0x3b9d13f0;
  local_94 = 0;
  uStack_7c = 0;
  local_74 = 0;
  local_64 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_108 = &local_48;
  local_48 = 0x3b9d1404;
  local_44 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_24 = 0;
  local_1c = *(undefined4 *)(param_3 + 0x50);
  uStack_ec = 0x200000000;
  local_e4 = 0x3b9d13f400000000;
  local_d4 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_8c = 0;
  local_84 = (ulonglong)*(uint *)(param_3 + 0x68) & 0xffffffff0000001f | 0x800;
  uStack_6c = 0x100000000;
  puStack_60 = &local_f8;
  (*DAT_14ca793e0)(**(undefined8 **)(param_1 + 0x48),1);
  *param_2 = CONCAT44(uStack_34,uStack_38);
  param_2[1] = CONCAT44(local_24,uStack_28);
  param_2[2] = CONCAT44(uStack_2c,uStack_30);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b9a14 FUN_1473b9a14 body=464 status=ok
// SIG undefined FUN_1473b9a14(void)

ulonglong * FUN_1473b9a14(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  uint local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined1 *local_148;
  longlong local_138;
  undefined4 local_130;
  longlong local_128;
  undefined1 local_120 [96];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_c0 = 0;
  local_b8 = 0x100000000;
  local_a0 = 0;
  local_98 = 0x100000000;
  local_90 = 0x3b9d13f0;
  local_8c = 0;
  uStack_84 = 0;
  local_7c = 0;
  uStack_74 = 0;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_40 = 0x3b9d1404;
  local_3c = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_160 = (uint)*(byte *)((longlong)param_3 + 0x15) +
              (uint)*(byte *)((longlong)param_3 + 0x14) * 4 + 4;
  if ((*(byte *)((longlong)param_3 + 0x14) == 0) && (*(byte *)((longlong)param_3 + 0x15) == 0)) {
    uVar2 = local_160 | 2;
    if (DAT_14c760c80 == 0) {
      uVar2 = local_160;
    }
    if (*(char *)((longlong)param_3 + 0x16) != '\0') {
      local_160 = uVar2;
    }
  }
  local_168 = (undefined4)param_3[1];
  local_128 = *param_3;
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
    UNLOCK();
  }
  local_138 = param_3[3];
  local_130 = (undefined4)param_3[4];
  local_148 = local_120;
  local_150 = 1;
  local_158 = 0;
  FUN_1431a803d(**(undefined8 **)(param_1 + 0x48),&local_138,
                *(undefined4 *)((longlong)param_3 + 0xc),&local_128);
  *param_2 = -(ulonglong)DAT_14ca84f00 &
             (CONCAT44(uStack_2c,uStack_30) + (ulonglong)DAT_14ca84f00) - 1;
  lVar1 = (ulonglong)DAT_14ca84f04 - 1;
  uVar3 = -(ulonglong)DAT_14ca84f04;
  param_2[1] = CONCAT44(local_1c,uStack_20) + lVar1 & uVar3;
  param_2[2] = lVar1 + CONCAT44(uStack_24,uStack_28) & uVar3;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b9be6 FUN_1473b9be6 body=156 status=ok
// SIG undefined FUN_1473b9be6(void)

longlong * FUN_1473b9be6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [120];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_14001cc68(0x138,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  FUN_147372674(local_a8,param_3);
  FUN_1431a73b2(lVar2,local_a8,uVar1);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_147123b8c(param_3);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b9c84 FUN_1473b9c84 body=86 status=ok
// SIG undefined FUN_1473b9c84(void)

longlong * FUN_1473b9c84(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_1431a6cd4(lVar1,param_3,param_4,*(undefined8 *)(param_1 + 0x48));
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473b9cda FUN_1473b9cda body=76 status=ok
// SIG undefined FUN_1473b9cda(void)

longlong * FUN_1473b9cda(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xa8,0x10);
  FUN_1431a85a4(lVar1,*(undefined8 *)(param_1 + 0x48),param_3);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473b9d26 FUN_1473b9d26 body=86 status=ok
// SIG undefined FUN_1473b9d26(void)

longlong * FUN_1473b9d26(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x200,0x10);
  FUN_1473b8db2(lVar1,param_3,*(undefined8 *)(param_1 + 0x48),param_4);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473b9d7c FUN_1473b9d7c body=262 status=ok
// SIG undefined FUN_1473b9d7c(void)

void FUN_1473b9d7c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_2 + 0xe0);
  lVar2 = param_2 + 0xf0;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_2 + 0x108) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_2 + 0x108);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (uStack_40 != lVar2)) {
    do {
      FUN_1473b9350(*(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x18));
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar3));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b9e92 FUN_1473b9e92 body=272 status=ok
// SIG undefined FUN_1473b9e92(void)

void FUN_1473b9e92(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0xe0);
  lVar2 = param_1 + 0xf0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x108) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x108);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      FUN_1473b959a(*(undefined8 *)(*local_78 + 8 + (longlong)iStack_5c * 0x18),param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b9fc8 FUN_1473b9fc8 body=89 status=ok
// SIG undefined FUN_1473b9fc8(void)

longlong FUN_1473b9fc8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x2108);
  *(uint *)(param_1 + 0x2108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x210c) < iVar1 + 1U) {
    FUN_1473cd174(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x2100);
  if (*(longlong *)(param_1 + 0x2100) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x108 + lVar2;
  FUN_1473cd0ff(lVar2);
  return lVar2;
}



// FUNCTION 1473ba022 FUN_1473ba022 body=93 status=ok
// SIG undefined FUN_1473ba022(void)

void FUN_1473ba022(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_1473cda2c((longlong *)(param_1 + 0x30),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001473ba06b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1473ba080 FUN_1473ba080 body=62 status=ok
// SIG undefined FUN_1473ba080(void)

void FUN_1473ba080(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2100);
  if (*(longlong *)(param_1 + 0x2100) == 0) {
    lVar1 = param_1;
  }
  FUN_1473ccdb7(lVar1,*(undefined4 *)(param_1 + 0x2108));
  if (*(longlong *)(param_1 + 0x2100) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473ba0be FUN_1473ba0be body=370 status=ok
// SIG undefined FUN_1473ba0be(void)

void FUN_1473ba0be(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Src;
  int iVar8;
  longlong lVar9;
  
  iVar8 = (int)param_2[8];
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  lVar3 = *param_2;
  lVar4 = param_2[3];
  lVar5 = param_2[5];
  plVar1 = (longlong *)(lVar3 + 0xa8);
  if (*(int *)(lVar3 + 0xb4) < iVar8) {
    FUN_14737c530(plVar1);
    iVar8 = (int)param_2[8];
  }
  if (iVar8 != 0) {
    lVar6 = param_2[7];
    lVar9 = 0;
    do {
      lVar7 = *(longlong *)(lVar6 + lVar9);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      iVar2 = *(int *)(lVar3 + 0xb0);
      *(uint *)(lVar3 + 0xb0) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0xb4) < iVar2 + 1U) {
        FUN_14737c590(plVar1,iVar2);
      }
      *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar7;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar8 * 8 != lVar9);
  }
  iVar8 = (int)param_2[10];
  _Src = (void *)param_2[9];
  *(int *)(lVar3 + 0xc0) = iVar8;
  if (iVar8 == 0 && *(int *)(lVar3 + 0xc4) == 0) {
    *(undefined4 *)(lVar3 + 0xc4) = 0;
  }
  else {
    FUN_1473cd302((undefined8 *)(lVar3 + 0xb8),iVar8);
    if (iVar8 != 0) {
      memcpy(*(void **)(lVar3 + 0xb8),_Src,(longlong)iVar8 << 3);
    }
  }
  FUN_1431a7959(param_1,lVar3,lVar4,(int)param_2[4],lVar5,(int)param_2[6],
                *(undefined4 *)((longlong)param_2 + 0x34),(int)param_2[0xb]);
  return;
}



// FUNCTION 1473ba232 FUN_1473ba232 body=109 status=ok
// SIG undefined FUN_1473ba232(void)

void FUN_1473ba232(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a361290;
  if (param_1[0x13] != 0) {
    (*DAT_14ca79238)(*(undefined8 *)param_1[2],param_1[0x13],0);
    param_1[0x13] = 0;
  }
  FUN_1473ba2a0(param_1 + 0xf);
  FUN_1473ba2a0(param_1 + 0xb);
  FUN_1473ba2a0(param_1 + 7);
  FUN_1473ba2a0(param_1 + 3);
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1473ba2a0 FUN_1473ba2a0 body=58 status=ok
// SIG undefined FUN_1473ba2a0(void)

void FUN_1473ba2a0(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c348a(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473ba2da FUN_1473ba2da body=172 status=ok
// SIG undefined FUN_1473ba2da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1473ba2da(longlong param_1,undefined1 param_2)

{
  undefined *puVar1;
  
  switch(param_2) {
  case 6:
    puVar1 = (undefined *)(param_1 + 0x18);
    break;
  case 7:
    puVar1 = (undefined *)(param_1 + 0x38);
    break;
  case 8:
    puVar1 = (undefined *)(param_1 + 0x58);
    break;
  case 9:
    puVar1 = (undefined *)(param_1 + 0x78);
    break;
  default:
    puVar1 = &DAT_14ca78670;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca78690) && (FUN_144b3d300(&DAT_14ca78690), DAT_14ca78690 == -1)) {
      _DAT_14ca78680 = 0;
      uRam000000014ca78688 = 0;
      _DAT_14ca78670 = 0;
      uRam000000014ca78678 = 0;
      atexit((_func_5014 *)&LAB_1431a9ec9);
      _Init_thread_footer(&DAT_14ca78690);
    }
  }
  return puVar1;
}



// FUNCTION 1473ba386 FUN_1473ba386 body=164 status=ok
// SIG undefined FUN_1473ba386(void)

ulonglong FUN_1473ba386(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  int local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(int *)(param_2 + 0x98);
  local_28 = *(undefined8 *)(param_2 + 0x88);
  uStack_20 = *(undefined8 *)(param_2 + 0x90);
  plVar3 = (longlong *)FUN_1473ba2da(local_28,*(undefined1 *)(param_2 + 0x9c));
  uVar4 = 0xffffffff;
  if (0 < (longlong)(int)plVar3[1]) {
    uVar5 = 0;
    do {
      lVar1 = *(longlong *)(*plVar3 + uVar5 * 8);
      auVar2._8_8_ = uStack_20;
      auVar2._0_8_ = local_28;
      if (*(undefined1 (*) [16])(lVar1 + 0x88) == auVar2 && *(int *)(lVar1 + 0x98) == local_18) {
        uVar4 = uVar5 & 0xffffffff;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)(int)plVar3[1] != uVar5);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1473ba42c FUN_1473ba42c body=101 status=ok
// SIG undefined FUN_1473ba42c(void)

bool FUN_1473ba42c(longlong param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((*(longlong *)(param_1 + 0x38) == 0) ||
     (*(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0xe0) <= *(ulonglong *)(param_1 + 0x40))) {
    bVar2 = false;
  }
  else {
    iVar1 = (*DAT_14ca79278)(**(undefined8 **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0,
                             param_2,(ulonglong)param_2 << 3,*(undefined8 *)(param_1 + 0x28),8,3);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 1473ba492 FUN_1473ba492 body=225 status=ok
// SIG undefined FUN_1473ba492(void)

undefined8 * FUN_1473ba492(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffffffffffff;
  param_1[0xe] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  FUN_1431a614c(puVar1,param_2,0,DAT_14c760c84,0x3b9d13f0,0);
  *puVar1 = &PTR_FUN_14a3634c0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  param_1[0xe] = puVar1;
  if (-1 < DAT_14c760c84) {
    if (*(int *)((longlong)param_1 + 0x5c) < DAT_14c760c84) {
      FUN_1473cd96c(param_1 + 10);
      if (DAT_14c760c84 < 0) goto LAB_1473ba560;
    }
    if (*(int *)((longlong)param_1 + 0x4c) < DAT_14c760c84) {
      FUN_1473cd9cc(param_1 + 8);
    }
    return param_1;
  }
LAB_1473ba560:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14c760c84);
}



// FUNCTION 1473ba574 FUN_1473ba574 body=68 status=ok
// SIG undefined FUN_1473ba574(void)

void FUN_1473ba574(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1473cdb83(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1473cd96c(param_1,param_2);
  return;
}



// FUNCTION 1473ba5ba FUN_1473ba5ba body=66 status=ok
// SIG undefined FUN_1473ba5ba(void)

ulonglong FUN_1473ba5ba(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(longlong *)(param_1 + 0x60) == param_2) {
    bVar1 = true;
  }
  else {
    bVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x38) == param_2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return CONCAT71((int7)((ulonglong)param_1 >> 8),bVar1) & 0xffffffff;
}



// FUNCTION 1473ba5fc FUN_1473ba5fc body=382 status=ok
// SIG undefined FUN_1473ba5fc(void)

void FUN_1473ba5fc(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8 [352];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(undefined4 *)(param_2 + 0xa4) = DAT_14c7590b0;
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  (*DAT_14ca79318)(*(undefined8 *)(lVar1 + 0x88),0x3b9d4e88,*(undefined8 *)(param_2 + 0x98));
  local_1b8 = *(undefined8 *)(param_2 + 0x28);
  local_1b0 = *(undefined4 *)(param_2 + 0x30);
  uVar2 = FUN_1473ba386(param_2,param_3);
  local_1d8 = &local_1b8;
  FUN_1473b94fc(param_4,param_1,*(undefined1 *)(param_3 + 0x9c),uVar2);
  local_1d8 = (undefined8 *)param_4;
  FUN_1431aa5fb(local_1a8,*(undefined8 *)(param_1 + 0x120),lVar1,param_5);
  local_1d8 = (undefined8 *)(param_4 + 0x1a8);
  local_1c8 = param_7;
  local_1d0 = param_6;
  local_1c0 = 1;
  (*DAT_14ca79320)(*(undefined8 *)(lVar1 + 0x88),param_4 + 0x88,param_4 + 0xe8,param_4 + 0x148);
  FUN_147397068(local_1a8,lVar1);
  if (DAT_14ca78598 != 0) {
    FUN_14739a1d0(param_1);
  }
  FUN_1473945b6(local_1a8);
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ba77c FUN_1473ba77c body=366 status=ok
// SIG undefined FUN_1473ba77c(void)

void FUN_1473ba77c(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,uint param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8 [352];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  (*DAT_14ca79318)(*(undefined8 *)(lVar1 + 0x88),0x3b9d4e88,*(undefined8 *)(param_2 + 0x98));
  local_1b8 = *(undefined8 *)(param_2 + 0x28);
  local_1b0 = *(undefined4 *)(param_2 + 0x30);
  uVar2 = FUN_1473ba386(param_2,param_3);
  local_1c8 = &local_1b8;
  FUN_1473b94fc(param_4,param_1,*(undefined1 *)(param_3 + 0x9c),uVar2);
  local_1c8 = (undefined8 *)param_4;
  FUN_1431aa5fb(local_1a8,*(undefined8 *)(param_1 + 0x120),lVar1,param_5);
  local_1c0 = (ulonglong)param_7 + *(longlong *)(param_6 + 0x78);
  local_1c8 = (undefined8 *)(param_4 + 0x1a8);
  (*DAT_14ca79328)(*(undefined8 *)(lVar1 + 0x88),param_4 + 0x88,param_4 + 0xe8,param_4 + 0x148);
  FUN_147397068(local_1a8,lVar1);
  if (DAT_14ca78598 != 0) {
    FUN_14739a1d0(param_1);
  }
  FUN_1473945b6(local_1a8);
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ba8eb FUN_1473ba8eb body=393 status=ok
// SIG undefined FUN_1473ba8eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1473ba8eb(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_9b8 [32];
  undefined1 local_998 [1088];
  undefined4 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined4 local_540;
  undefined4 local_538;
  undefined8 local_534;
  undefined8 uStack_52c;
  undefined4 local_524;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined4 local_500;
  undefined4 local_4f8;
  undefined8 local_4f4;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined8 local_4d4;
  undefined8 uStack_4cc;
  undefined8 local_4c4;
  undefined8 local_4bc;
  undefined8 uStack_4b4;
  undefined8 local_4ac;
  undefined8 uStack_4a4;
  undefined8 uStack_49c;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined8 uStack_488;
  undefined4 local_480;
  undefined8 local_47c;
  undefined8 uStack_474;
  undefined8 local_46c;
  undefined8 uStack_464;
  undefined8 uStack_45c;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined8 uStack_448;
  longlong local_440;
  undefined4 local_430;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_9b8;
  if ((*(byte *)(param_1 + 0x20fb) & 4) == 0) {
    memset(local_998,0,0x440);
    local_558 = 0x3b9c73c9;
    local_550 = 0;
    uStack_548 = 0;
    local_540 = 0;
    local_538 = 0x3b9e3cd0;
    local_534 = 0;
    uStack_52c = 0;
    local_524 = 0;
    local_520 = _DAT_14ca84f40;
    local_518 = 0x3b9c73c9;
    local_510 = 0;
    uStack_508 = 0;
    local_500 = 0;
    local_4f8 = 0x3b9dd359;
    local_4f4 = 0;
    uStack_4ec = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    local_4d8 = 0x3b9e1d92;
    local_4d4 = 0;
    uStack_4cc = 0;
    local_4c4 = 0x3b9b990800000000;
    uStack_48c = 0;
    uStack_488 = 0;
    uStack_49c = 0;
    uStack_494 = 0;
    local_490 = 0;
    local_4ac = 0;
    uStack_4a4 = 0;
    local_4bc = 0;
    uStack_4b4 = 0;
    local_480 = 0x26;
    uStack_44c = 0;
    uStack_448 = 0;
    uStack_45c = 0;
    uStack_454 = 0;
    local_450 = 0;
    local_46c = 0;
    uStack_464 = 0;
    local_47c = 0;
    uStack_474 = 0;
    local_430 = 0;
    local_440 = param_1;
    uVar1 = FUN_1473bad76(local_998,param_2);
    FUN_1473badfc(local_998);
  }
  else {
    FUN_1473baa76(local_998,param_1);
    uVar1 = FUN_1473baca8(local_998,param_2);
    FUN_1473bad2e(local_998);
  }
  if ((local_28 ^ (ulonglong)auStack_9b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473baa76 FUN_1473baa76 body=561 status=ok
// SIG undefined FUN_1473baa76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473baa76(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 4;
  do {
    *(undefined4 *)(param_1 + -4 + lVar2) = 0x3b9c73ca;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x20 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x30 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x40 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(param_1 + 0x50 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x2c4);
  lVar2 = 0x2c4;
  do {
    *(undefined4 *)(param_1 + -4 + lVar2) = 0x3b9c73cb;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x1c + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar2 = lVar2 + 0x30;
  } while (lVar2 != 0x444);
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0x3b9c73c9;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  lVar2 = 0x488;
  do {
    *(undefined4 *)(param_1 + -8 + lVar2) = 0x3b9c73c9;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    *(undefined4 *)(param_1 + 0x10 + lVar2) = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x5a8);
  *(undefined4 *)(param_1 + 0x5a0) = 0x3b9c73c9;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  *(undefined4 *)(param_1 + 0x5c0) = 0x3b9c73c9;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  lVar2 = 0x5f8;
  do {
    *(undefined4 *)(param_1 + -8 + lVar2) = 0x3b9c73c9;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    *(undefined4 *)(param_1 + 0x10 + lVar2) = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x718);
  lVar2 = 0x718;
  do {
    *(undefined4 *)(param_1 + -8 + lVar2) = 0x3b9c73c9;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    *(undefined4 *)(param_1 + 0x10 + lVar2) = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x838);
  *(undefined4 *)(param_1 + 0x830) = 0x3b9c73c9;
  *(undefined8 *)(param_1 + 0x838) = 0;
  *(undefined8 *)(param_1 + 0x840) = 0;
  *(undefined4 *)(param_1 + 0x848) = 0;
  *(undefined4 *)(param_1 + 0x850) = 0x3b9e3cd0;
  *(undefined8 *)(param_1 + 0x854) = 0;
  *(undefined8 *)(param_1 + 0x85c) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined8 *)(param_1 + 0x868) = _DAT_14ca84f40;
  *(undefined4 *)(param_1 + 0x870) = 0x3b9c73c9;
  *(undefined8 *)(param_1 + 0x878) = 0;
  *(undefined8 *)(param_1 + 0x880) = 0;
  *(undefined4 *)(param_1 + 0x888) = 0;
  *(undefined4 *)(param_1 + 0x890) = 0x3b9dd359;
  *(undefined8 *)(param_1 + 0x894) = 0;
  *(undefined8 *)(param_1 + 0x89c) = 0;
  *(undefined8 *)(param_1 + 0x8a0) = 0;
  *(undefined8 *)(param_1 + 0x8a8) = 0;
  *(undefined4 *)(param_1 + 0x8b0) = 0x3b9e1d92;
  *(undefined8 *)(param_1 + 0x8b4) = 0;
  *(undefined8 *)(param_1 + 0x8bc) = 0;
  *(undefined8 *)(param_1 + 0x8c4) = 0x3b9b990800000000;
  *(undefined8 *)(param_1 + 0x8cc) = 0;
  *(undefined8 *)(param_1 + 0x8d4) = 0;
  *(undefined8 *)(param_1 + 0x8dc) = 0;
  *(undefined8 *)(param_1 + 0x8e4) = 0;
  *(undefined8 *)(param_1 + 0x8ec) = 0;
  *(undefined8 *)(param_1 + 0x8f4) = 0;
  *(undefined8 *)(param_1 + 0x8f8) = 0;
  *(undefined8 *)(param_1 + 0x900) = 0;
  *(undefined4 *)(param_1 + 0x908) = 0x3b9c73cc;
  *(undefined8 *)(param_1 + 0x90c) = 0;
  *(undefined8 *)(param_1 + 0x914) = 0;
  *(undefined8 *)(param_1 + 0x91c) = 0;
  *(undefined8 *)(param_1 + 0x924) = 0;
  *(undefined8 *)(param_1 + 0x92c) = 0;
  *(undefined8 *)(param_1 + 0x934) = 0;
  *(undefined8 *)(param_1 + 0x93c) = 0;
  *(undefined8 *)(param_1 + 0x944) = 0;
  *(undefined8 *)(param_1 + 0x948) = 0;
  *(undefined8 *)(param_1 + 0x950) = 0;
  *(undefined8 *)(param_1 + 0x958) = param_2;
  *(undefined4 *)(param_1 + 0x968) = 0;
  return;
}



// FUNCTION 1473baca8 FUN_1473baca8 body=133 status=ok
// SIG undefined FUN_1473baca8(void)

undefined8 FUN_1473baca8(longlong param_1)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1473ce0c0();
  local_18 = 0;
  iVar1 = (*DAT_14ca79430)(**(undefined8 **)(param_1 + 0x958),param_1 + 0x908,0);
  if (iVar1 < 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkCreateRenderPass2KHR(Device.GetInstanceHandle(), this, VULKAN_CPU_ALLOCATOR, &Handle)"
                  ,".\\Runtime/VulkanRHI/Private\\VulkanRenderpass.h",399);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bad2e FUN_1473bad2e body=71 status=ok
// SIG undefined FUN_1473bad2e(void)

void FUN_1473bad2e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473bad76 FUN_1473bad76 body=133 status=ok
// SIG undefined FUN_1473bad76(void)

undefined8 FUN_1473bad76(longlong param_1)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1473cf01a();
  local_18 = 0;
  iVar1 = (*DAT_14ca79438)(**(undefined8 **)(param_1 + 0x558),param_1 + 0x518,0);
  if (iVar1 < 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkCreateRenderPass(Device.GetInstanceHandle(), this, VULKAN_CPU_ALLOCATOR, &Handle)"
                  ,".\\Runtime/VulkanRHI/Private\\VulkanRenderpass.h",0x166);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473badfc FUN_1473badfc body=71 status=ok
// SIG undefined FUN_1473badfc(void)

void FUN_1473badfc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473bae44 FUN_1473bae44 body=709 status=ok
// SIG undefined FUN_1473bae44(void)

void FUN_1473bae44(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
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
  plVar4 = param_1 + 3;
  puVar1 = param_1 + 5;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = puVar1;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 8);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar4;
  if ((iStack_54 != iVar5) || (local_60 != puVar1)) {
    do {
      lVar3 = *(longlong *)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      if (lVar3 != 0) {
        FUN_1473a8b5a(*(longlong *)(lVar3 + 0x3b8) + 0x590,0,*(undefined8 *)(lVar3 + 0x3a8));
        FUN_1400020a8(lVar3);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar4 || (local_80 != puVar1 || iStack_74 != iVar5));
  }
  plVar2 = param_1 + 0xd;
  puVar1 = param_1 + 0xf;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_98 = plVar4;
  local_60 = puVar1;
  if (*(int *)(param_1 + 0x12) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x12);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar2;
  if ((iStack_54 != iVar5) || (local_60 != puVar1)) {
    do {
      plVar4 = *(longlong **)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      if (0 < (longlong)(int)plVar4[1]) {
        uVar6 = (longlong)(int)plVar4[1] + 1;
        do {
          FUN_1431bc18c(*(undefined8 *)(*plVar4 + -0x10 + uVar6 * 8),*param_1);
          lVar3 = *(longlong *)(*plVar4 + -0x10 + uVar6 * 8);
          if (lVar3 != 0) {
            FUN_1473dc964(lVar3);
            FUN_1400020a8(lVar3);
          }
          uVar6 = uVar6 - 1;
        } while (1 < uVar6);
      }
      if (plVar4 != (longlong *)0x0) {
        if (*plVar4 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar4);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar2 || (local_80 != puVar1 || iStack_74 != iVar5));
  }
  plVar4 = local_98;
  FUN_1473cfbbe(local_98);
  FUN_1473cfd46(plVar2);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c3d64(plVar2);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c3df2(plVar4);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473bb10a FUN_1473bb10a body=636 status=ok
// SIG undefined FUN_1473bb10a(void)

longlong FUN_1473bb10a(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  uint local_a4;
  uint *local_a0;
  longlong **local_98;
  undefined1 local_8c [4];
  ulonglong local_88 [9];
  
  local_88[8] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *(undefined4 *)(param_3 + 900);
  puVar7 = (ulonglong *)(param_2 + 8);
  lVar10 = 0;
  do {
    uVar3 = puVar7[3];
    local_88[lVar10] = *puVar7;
    local_88[lVar10 + 1] = uVar3;
    lVar10 = lVar10 + 2;
    puVar7 = puVar7 + 6;
  } while (lVar10 != 8);
  uVar6 = (*(code *)PTR_FUN_14c75b148)(local_88,0x40,uVar4);
  SRWLock = (PSRWLOCK)(param_1 + 2);
  local_b8 = param_2;
  local_b0 = param_3;
  local_a4 = uVar6;
  AcquireSRWLockShared(SRWLock);
  plVar1 = param_1 + 0xd;
  if (*(int *)(param_1 + 0xe) != *(int *)((longlong)param_1 + 0x9c)) {
    puVar8 = param_1 + 0x14;
    if ((undefined8 *)param_1[0x15] != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_1[0x15];
    }
    uVar9 = *(uint *)((longlong)puVar8 + (ulonglong)(*(int *)(param_1 + 0x16) - 1U & uVar6) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar9 * 0x18);
        if (*puVar2 == uVar6) {
          if (puVar2 + 2 != (uint *)0x0 && puVar2 != (uint *)0x0) {
            lVar10 = FUN_1431ab3be(&local_b8,*(undefined8 *)(puVar2 + 2));
            ReleaseSRWLockShared(SRWLock);
            if (lVar10 == 0) goto LAB_1473bb1b2;
            goto LAB_1473bb2bd;
          }
          break;
        }
        uVar9 = puVar2[4];
      } while (uVar9 != 0xffffffff);
    }
  }
  ReleaseSRWLockShared(SRWLock);
LAB_1473bb1b2:
  AcquireSRWLockExclusive(SRWLock);
  if (*(int *)(param_1 + 0xe) != *(int *)((longlong)param_1 + 0x9c)) {
    puVar8 = param_1 + 0x14;
    if ((undefined8 *)param_1[0x15] != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_1[0x15];
    }
    uVar9 = *(uint *)((longlong)puVar8 + (ulonglong)(*(int *)(param_1 + 0x16) - 1U & uVar6) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar9 * 0x18);
        if (*puVar2 == uVar6) {
          if ((puVar2 != (uint *)0x0) && (puVar2 + 2 != (uint *)0x0)) {
            local_c0 = *(longlong **)(puVar2 + 2);
            lVar10 = FUN_1431ab3be(&local_b8);
            if (lVar10 != 0) goto LAB_1473bb2b4;
            goto LAB_1473bb26d;
          }
          break;
        }
        uVar9 = puVar2[4];
      } while (uVar9 != 0xffffffff);
    }
  }
  local_c0 = (longlong *)FUN_14001cc68(0x10,0x10);
  *local_c0 = 0;
  local_c0[1] = 0;
  local_98 = &local_c0;
  local_a0 = &local_a4;
  FUN_1473cfece(plVar1,local_8c);
LAB_1473bb26d:
  lVar10 = FUN_14001cc68(0xf0,0x10);
  local_c8 = param_4;
  FUN_1431bb042(lVar10,*param_1,param_2,param_3);
  plVar1 = local_c0;
  iVar5 = (int)local_c0[1];
  *(uint *)(local_c0 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)local_c0 + 0xc) < iVar5 + 1U) {
    FUN_1473d03ae(local_c0,iVar5);
  }
  *(longlong *)(*plVar1 + (longlong)iVar5 * 8) = lVar10;
LAB_1473bb2b4:
  ReleaseSRWLockExclusive(SRWLock);
LAB_1473bb2bd:
  if ((local_88[8] ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1473bb388 FUN_1473bb388 body=860 status=ok
// SIG undefined FUN_1473bb388(void)

void FUN_1473bb388(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined1 auStack_318 [32];
  undefined4 *local_2f8;
  float local_2f0;
  undefined4 local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [56];
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168 [72];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  iVar5 = *(int *)(param_5 + 0x3b0);
  uVar14 = 0;
  local_2d0 = param_2;
  memset(local_168,0,0x120);
  plVar7 = param_3;
  do {
    if (*plVar7 == 0) goto LAB_1473bb404;
    uVar14 = uVar14 + 1;
    plVar7 = plVar7 + 3;
  } while (uVar14 != 8);
  uVar14 = 8;
LAB_1473bb404:
  uVar15 = 0;
  local_290 = 0;
  local_288 = 0x100000000;
  local_1c0 = 0;
  local_1b8 = 0x200000000;
  local_178 = 0;
  local_170 = 0x200000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  if ((int)uVar14 != 0) {
    lVar17 = 0;
    local_2e0 = param_1;
    local_2d8 = param_4;
    do {
      plVar7 = *(longlong **)((longlong)param_3 + lVar17);
      plVar8 = (longlong *)(**(code **)(*plVar7 + 0x30))(plVar7);
      lVar9 = (**(code **)(*plVar8 + 8))(plVar8);
      bVar4 = *(byte *)(lVar9 + 0x31);
      lVar9 = *(longlong *)((longlong)param_3 + lVar17 + 8);
      if ((*(byte *)((longlong)param_3 + lVar17 + 0x15) & 0xfc) == 4) {
        local_2f8 = (undefined4 *)CONCAT44(local_2f8._4_4_,0x400);
        FUN_14739445e(local_2c8,0x100,0x100,0x400);
      }
      if (iVar5 != 0) {
        lVar10 = (**(code **)(*plVar7 + 8))(plVar7);
        puVar12 = &DAT_149e1e308;
        puVar11 = &DAT_149e1e30c;
        puVar13 = &DAT_149e1e310;
        puVar16 = &DAT_149e1e314;
        if (*(int *)(lVar10 + 8) != 0) {
          lVar10 = (**(code **)(*plVar7 + 8))(plVar7);
          puVar12 = (undefined4 *)(lVar10 + 0xc);
          puVar16 = (undefined4 *)(lVar10 + 0x18);
          puVar13 = (undefined4 *)(lVar10 + 0x14);
          puVar11 = (undefined4 *)(lVar10 + 0x10);
        }
        uVar1 = *puVar16;
        uVar2 = *puVar13;
        uVar3 = *puVar11;
        local_168[uVar15 * 4] = *puVar12;
        local_168[uVar15 * 4 + 1] = uVar3;
        local_168[uVar15 * 4 + 2] = uVar2;
        local_168[uVar15 * 4 + 3] = uVar1;
        uVar15 = (ulonglong)((int)uVar15 + (uint)(1 < bVar4 && lVar9 != 0) + 1);
      }
      lVar17 = lVar17 + 0x18;
      param_4 = local_2d8;
      param_1 = local_2e0;
    } while ((uVar14 & 0xffffffff) * 0x18 != lVar17);
  }
  plVar7 = (longlong *)param_3[0x18];
  if (plVar7 != (longlong *)0x0) {
    if ((*(uint *)((longlong)param_3 + 0xd4) & 0xf) == 1 ||
        (*(uint *)((longlong)param_3 + 0xd4) & 0xf0) == 0x10) {
      local_2f8 = (undefined4 *)CONCAT44(local_2f8._4_4_,0x300);
      FUN_14739445e(local_2c8,0x600,0x600,0x300);
    }
    lVar17 = (**(code **)(*plVar7 + 8))(plVar7);
    if ((iVar5 != 0) && (*(int *)(lVar17 + 8) != 0)) {
      lVar17 = (**(code **)(*plVar7 + 8))(plVar7);
      uVar1 = *(undefined4 *)(lVar17 + 0x10);
      local_168[uVar15 * 4] = *(undefined4 *)(lVar17 + 0xc);
      local_168[uVar15 * 4 + 1] = uVar1;
    }
  }
  uVar6 = local_2d0;
  FUN_147397068(local_2c8,local_2d0);
  local_2f8 = local_168;
  FUN_147398e92(uVar6,param_5,param_5,param_6);
  local_2f0 = (float)*(uint *)(param_4 + 0x39c);
  local_2f8 = (undefined4 *)CONCAT44(local_2f8._4_4_,(float)*(uint *)(param_4 + 0x398));
  local_2e8 = 0x3f800000;
  FUN_1473bb6e6(*(undefined8 *)(param_1 + 0x170),0,0,0);
  FUN_1473945b6(local_2c8);
  if ((local_48 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473bb6e6 FUN_1473bb6e6 body=405 status=ok
// SIG undefined FUN_1473bb6e6(void)

void FUN_1473bb6e6(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  
  pfVar1 = (float *)(param_1 + 8);
  FUN_1473c3e80(pfVar1,1,1);
  pfVar3 = *(float **)(param_1 + 0x38);
  if (*(float **)(param_1 + 0x38) == (float *)0x0) {
    pfVar3 = pfVar1;
  }
  *pfVar3 = param_2;
  pfVar3 = *(float **)(param_1 + 0x38);
  if (*(float **)(param_1 + 0x38) == (float *)0x0) {
    pfVar3 = pfVar1;
  }
  pfVar3[1] = param_3;
  pfVar3 = *(float **)(param_1 + 0x38);
  if (*(float **)(param_1 + 0x38) == (float *)0x0) {
    pfVar3 = pfVar1;
  }
  pfVar3[2] = param_5 - param_2;
  pfVar3 = *(float **)(param_1 + 0x38);
  if (*(float **)(param_1 + 0x38) == (float *)0x0) {
    pfVar3 = pfVar1;
  }
  pfVar3[3] = param_6 - param_3;
  pfVar3 = *(float **)(param_1 + 0x38);
  if (*(float **)(param_1 + 0x38) == (float *)0x0) {
    pfVar3 = pfVar1;
  }
  pfVar3[4] = param_4;
  pfVar3 = *(float **)(param_1 + 0x38);
  if (*(float **)(param_1 + 0x38) == (float *)0x0) {
    pfVar3 = pfVar1;
  }
  pfVar3[5] = (float)(~-(uint)(param_4 == param_7) & (uint)param_7 |
                     (uint)(param_4 + 1.0) & -(uint)(param_4 == param_7));
  puVar2 = (undefined4 *)(param_1 + 0x48);
  FUN_1473c4056(puVar2,1,1);
  puVar4 = *(undefined4 **)(param_1 + 0x68);
  if (*(undefined4 **)(param_1 + 0x68) == (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  *puVar4 = (int)(longlong)param_2;
  puVar4 = *(undefined4 **)(param_1 + 0x68);
  if (*(undefined4 **)(param_1 + 0x68) == (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  puVar4[1] = (int)(longlong)param_3;
  puVar4 = *(undefined4 **)(param_1 + 0x68);
  if (*(undefined4 **)(param_1 + 0x68) == (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  puVar4[2] = (int)(longlong)(param_5 - param_2);
  puVar4 = *(undefined4 **)(param_1 + 0x68);
  if (*(undefined4 **)(param_1 + 0x68) == (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  puVar4[3] = (int)(longlong)(param_6 - param_3);
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1473bb87c FUN_1473bb87c body=567 status=ok
// SIG undefined FUN_1473bb87c(void)

void FUN_1473bb87c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x68);
  local_58 = param_1 + 0x78;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_98 = local_60;
  local_90 = local_58;
  local_68 = 0;
  local_a0 = plVar1;
  local_78 = plVar1;
  local_70 = plVar1;
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      plVar1 = *(longlong **)(*local_a0 + 8 + (longlong)iStack_84 * 0x18);
      iVar7 = (int)plVar1[1];
      uVar8 = (longlong)iVar7;
      if (0 < (longlong)iVar7) {
        do {
          lVar2 = *plVar1;
          lVar3 = *(longlong *)(lVar2 + -8 + uVar8 * 8);
          if ((ulonglong)*(uint *)(lVar3 + 0x44) != 0) {
            uVar6 = 0;
            do {
              if (*(longlong *)(lVar3 + 0x48 + uVar6 * 8) == param_2) goto LAB_1473bb9aa;
              uVar6 = uVar6 + 1;
            } while (*(uint *)(lVar3 + 0x44) != uVar6);
          }
          if (*(longlong *)(lVar3 + 200) == param_2) {
LAB_1473bb9aa:
            uVar5 = *(uint *)(plVar1 + 1);
            if (uVar8 != uVar5) {
              iVar7 = uVar5 - (int)uVar8;
              if (0 < iVar7) {
                iVar7 = 1;
              }
              memmove((void *)(lVar2 + uVar8 * 8 + -8),
                      (void *)(lVar2 + (longlong)(int)(uVar5 - iVar7) * 8),(longlong)iVar7 << 3);
              uVar5 = *(uint *)(plVar1 + 1);
            }
            *(uint *)(plVar1 + 1) = uVar5 - 1;
            FUN_1431bc18c(lVar3);
            if (lVar3 != 0) {
              FUN_1473dc964(lVar3);
              FUN_1400020a8(lVar3);
            }
          }
          bVar4 = 1 < (longlong)uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar4);
        iVar7 = (int)plVar1[1];
      }
      if (iVar7 == 0) {
        if (plVar1 != (longlong *)0x0) {
          if (*plVar1 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar1);
        }
        FUN_1473d0434(local_78);
        local_68 = CONCAT11(local_68._1_1_,1);
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < *(int *)(local_90 + 0x18));
    if (((local_68 & 1) != 0) && (local_68._1_1_ == '\x01')) {
      FUN_1473d01c6(local_70,(int)local_70[1] - *(int *)((longlong)local_70 + 0x34));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bbab4 FUN_1473bbab4 body=489 status=ok
// SIG undefined FUN_1473bbab4(void)

void * FUN_1473bbab4(undefined8 *param_1,void *param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  void *local_68;
  uint local_5c;
  uint *local_58;
  void **local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(uint *)((longlong)param_2 + 0x388);
  SRWLock = (PSRWLOCK)(param_1 + 1);
  local_5c = uVar3;
  AcquireSRWLockShared(SRWLock);
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != *(int *)((longlong)param_1 + 0x4c)) {
    puVar6 = param_1 + 10;
    if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_1[0xb];
    }
    uVar7 = *(uint *)((longlong)puVar6 + (ulonglong)(*(int *)(param_1 + 0xc) - 1U & uVar3) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar7 * 0x18);
        if (*puVar2 == uVar3) {
          if ((puVar2 != (uint *)0x0) && (puVar2 + 2 != (uint *)0x0)) {
            pvVar4 = *(void **)(puVar2 + 2);
            ReleaseSRWLockShared(SRWLock);
            goto LAB_1473bbc2f;
          }
          break;
        }
        uVar7 = puVar2[4];
      } while (uVar7 != 0xffffffff);
    }
  }
  ReleaseSRWLockShared(SRWLock);
  pvVar4 = (void *)FUN_14001cc68(0x3c0,0x10);
  uVar5 = *param_1;
  memcpy(pvVar4,param_2,0x3a8);
  *(uint *)((longlong)pvVar4 + 0x3b0) = (uint)*(byte *)((longlong)param_2 + 0x380);
  *(undefined8 *)((longlong)pvVar4 + 0x3b8) = uVar5;
  uVar5 = FUN_1473ba8eb(uVar5,param_2);
  *(undefined8 *)((longlong)pvVar4 + 0x3a8) = uVar5;
  local_68 = pvVar4;
  AcquireSRWLockExclusive(SRWLock);
  if (*(int *)(param_1 + 4) != *(int *)((longlong)param_1 + 0x4c)) {
    puVar6 = param_1 + 10;
    if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_1[0xb];
    }
    uVar7 = *(uint *)((longlong)puVar6 + (ulonglong)(*(int *)(param_1 + 0xc) - 1U & uVar3) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*plVar1 + (longlong)(int)uVar7 * 0x18);
        if (*puVar2 == uVar3) {
          if ((puVar2 != (uint *)0x0) && (puVar2 + 2 != (uint *)0x0)) {
            if (pvVar4 != (void *)0x0) {
              FUN_1473a8b5a(*(longlong *)((longlong)pvVar4 + 0x3b8) + 0x590,0,
                            *(undefined8 *)((longlong)pvVar4 + 0x3a8));
              FUN_1400020a8(pvVar4);
            }
            pvVar4 = *(void **)(puVar2 + 2);
            ReleaseSRWLockExclusive(SRWLock);
            goto LAB_1473bbc2f;
          }
          break;
        }
        uVar7 = puVar2[4];
      } while (uVar7 != 0xffffffff);
    }
  }
  local_58 = &local_5c;
  local_50 = &local_68;
  FUN_1473c4208(plVar1,local_44);
  ReleaseSRWLockExclusive(SRWLock);
  pvVar4 = local_68;
LAB_1473bbc2f:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return pvVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bbc9e FUN_1473bbc9e body=6385 status=ok
// SIG undefined FUN_1473bbc9e(void)

void FUN_1473bbc9e(longlong param_1,longlong *param_2,int *param_3,undefined8 *param_4,
                  ulonglong param_5)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  void *pvVar16;
  void *pvVar17;
  undefined8 uVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  longlong lVar23;
  uint uVar24;
  float *pfVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  ulonglong uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  ulonglong uVar33;
  int iVar34;
  uint uVar35;
  float fVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined4 uVar56;
  undefined4 uVar59;
  double dVar57;
  undefined1 auVar58 [16];
  double dVar60;
  double dVar61;
  double dVar64;
  double dVar65;
  undefined1 auStack_358 [32];
  undefined4 *local_338;
  undefined8 *local_330;
  uint local_328;
  uint local_324;
  void *local_320;
  ulonglong local_318;
  ulonglong local_310;
  void *local_308;
  longlong *local_300;
  ulonglong local_2f8;
  ulonglong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  ulonglong local_2d0;
  undefined8 local_2c8;
  ulonglong local_2c0;
  ulonglong local_2b8;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  longlong lStack_270;
  undefined4 local_268;
  undefined4 local_264;
  longlong local_258;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  uVar27 = param_3[1];
  iVar34 = param_3[2];
  iVar19 = *param_3;
  uVar35 = param_3[3];
  iVar41 = uVar35 - uVar27;
  local_300 = param_2;
  local_2e0 = param_1;
  FUN_14735b34c(param_4);
  plVar21 = local_300;
  if (DAT_14ca786c0 != 0) {
LAB_1473bbd9a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_358);
  }
  local_310 = CONCAT44(local_310._4_4_,iVar41);
  local_2f8 = param_5;
  local_324 = uVar27;
  local_318 = (ulonglong)(uint)(iVar34 - iVar19);
  lVar20 = (**(code **)(*local_300 + 8))(local_300);
  if (1 < *(byte *)(lVar20 + 0x32)) goto LAB_1473bbd9a;
  plVar21 = (longlong *)(**(code **)(*plVar21 + 0x30))(plVar21);
  lVar23 = local_2e0;
  FUN_1473a4b20(*(undefined8 *)(local_2e0 + 0x48));
  uVar29 = local_2f8;
  iVar6 = *(int *)((longlong)plVar21 + 0xa4);
  local_2f0 = CONCAT44(local_2f0._4_4_,iVar41 * (iVar34 - iVar19));
  if (iVar6 < 0x10) {
    if (iVar6 == 4) goto switchD_1473bbe7b_caseD_46;
    goto switchD_1473bbe7b_caseD_27;
  }
  switch(iVar6) {
  case 0x25:
  case 0x26:
  case 0x29:
  case 0x2c:
  case 0x40:
  case 0x4d:
  case 0x51:
  case 0x53:
  case 0x62:
  case 99:
  case 100:
  case 0x7a:
  case 0x7d:
  case 0x7e:
  case 0x81:
    uVar27 = 4;
    break;
  case 0x46:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x7c:
switchD_1473bbe7b_caseD_46:
    uVar27 = 2;
    break;
  case 0x5b:
  case 0x5c:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x6e:
  case 0x6f:
    uVar27 = 8;
    break;
  case 0x6b:
  case 0x6d:
    uVar27 = 0x10;
    break;
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
    uVar27 = 0;
    break;
  default:
    if (iVar6 == 0x10) goto switchD_1473bbe7b_caseD_46;
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x52:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5d:
  case 0x5e:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6c:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7b:
  case 0x7f:
  case 0x80:
  case 0x82:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
switchD_1473bbe7b_caseD_27:
    uVar27 = 1;
  }
  local_300 = (longlong *)CONCAT44(local_300._4_4_,(uint)*(byte *)(local_2f8 + 0x11));
  iVar34 = *(int *)(lVar20 + 0x24);
  local_2e8 = *(longlong *)(*(longlong *)(lVar23 + 0x48) + 0x20c8);
  local_258 = 0;
  puVar22 = (undefined8 *)(**(code **)(*plVar21 + 8))(plVar21);
  local_2c8 = *puVar22;
  if (((uint)local_2c8 >> 0x13 & 1) == 0) {
    iVar34 = uVar27 * (int)local_2f0;
    local_328 = uVar27;
    lVar20 = FUN_1473984ce(*(undefined8 *)(local_2e8 + 0x150));
    lVar23 = FUN_143192298(*(longlong *)(lVar23 + 0x48) + 0x5d0,iVar34,2,8);
    local_298 = 0;
    uStack_290 = 0;
    _local_288 = CONCAT44(local_300._0_4_,(int)plVar21[0x20]);
    _uStack_280 = CONCAT44(1,*(undefined4 *)(uVar29 + 0x14));
    local_278 = *(undefined8 *)param_3;
    lStack_270 = local_318 << 0x20;
    local_268 = (undefined4)local_310;
    local_264 = 1;
    local_258 = lVar23;
    iVar34 = FUN_1473975a6(lVar20,plVar21,0x80);
    local_338 = (undefined4 *)CONCAT44(local_338._4_4_,1);
    local_330 = &local_298;
    (*DAT_14ca79330)(*(undefined8 *)(lVar20 + 0x88),plVar21[0x13],6,*(undefined8 *)(lVar23 + 0x38));
    local_218 = 0;
    local_210 = 0x100000000;
    local_148 = 0;
    local_140 = 0x200000000;
    local_100 = 0;
    local_f8 = 0x200000000;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    if ((iVar34 == 0) || (iVar34 == 6)) {
      FUN_1473bd608(lVar20 + 0x108,plVar21,6,0);
    }
    else {
      local_2ac = (undefined4)plVar21[0x20];
      local_338 = &local_2ac;
      local_2a8 = 0xffffffff00000000;
      uStack_2a0 = 0xffffffff00000000;
      FUN_147396818(&local_250,plVar21[0x13],6,iVar34);
    }
    local_338 = (undefined4 *)CONCAT44(local_338._4_4_,0x4000);
    FUN_14739445e(&local_250,0x1000);
    local_2d8 = lVar20;
    FUN_147397068(&local_250,lVar20);
    FUN_14739859c(*(undefined8 *)(local_2e8 + 0x150),0);
    FUN_1473945b6(&local_250);
    FUN_1473a4890(*(undefined8 *)(local_2e0 + 0x48));
    lVar20 = local_258 + 0x18;
    FUN_1473a8158(lVar20,*(undefined8 *)(local_258 + 0x10));
    local_320 = (void *)FUN_1473a804a(lVar20);
    iVar19 = (int)local_318;
    uVar27 = local_328;
  }
  else {
    iVar34 = iVar34 >> ((byte)local_300 & 0x1f);
    iVar19 = 1;
    if (1 < iVar34) {
      iVar19 = iVar34;
    }
    FUN_1473a4890(*(undefined8 *)(lVar23 + 0x48));
    lVar20 = FUN_1473d669a(plVar21);
    local_320 = (void *)((ulonglong)((param_3[1] * iVar19 + *param_3) * uVar27) + lVar20);
    local_2d8 = 0;
  }
  local_328 = iVar19 * uVar27;
  local_308 = (void *)*param_4;
  iVar34 = *(int *)((longlong)plVar21 + 0xa4);
  iVar19 = (int)local_318;
  if (iVar34 < 0x46) {
    if (iVar34 < 0x25) {
      if (iVar34 == 9) {
        if (uVar35 != local_324) {
          uVar29 = 0;
          uVar33 = 0;
          uVar45 = 0;
          do {
            if (iVar19 != 0) {
              lVar20 = 0;
              do {
                bVar1 = *(byte *)((longlong)local_320 + lVar20 + uVar29);
                uVar27 = (uint)bVar1;
                *(uint *)((longlong)local_308 + lVar20 * 4 + uVar33 * 4) =
                     uVar27 << 8 | (uint)bVar1 << 0x10 | uVar27 << 0x18 | uVar27;
                lVar20 = lVar20 + 1;
              } while (iVar19 != (int)lVar20);
            }
            uVar45 = uVar45 + 1;
            uVar33 = (ulonglong)(uint)((int)uVar33 + iVar19);
            uVar29 = (ulonglong)((int)uVar29 + local_328);
          } while (uVar45 != (local_310 & 0xffffffff));
        }
      }
      else if ((iVar34 == 0x10) && (uVar35 != local_324)) {
        local_320 = (void *)((longlong)local_320 + 1);
        uVar29 = 0;
        uVar33 = 0;
        uVar45 = 0;
        do {
          if (iVar19 != 0) {
            lVar20 = 0;
            do {
              *(uint *)((longlong)local_308 + lVar20 * 4 + uVar33 * 4) =
                   (uint)*(byte *)((longlong)local_320 + lVar20 * 2 + uVar29) << 8 |
                   (uint)*(byte *)((longlong)local_320 + lVar20 * 2 + (uVar29 - 1)) << 0x10 |
                   0xff000000;
              lVar20 = lVar20 + 1;
            } while (iVar19 != (int)lVar20);
          }
          uVar45 = uVar45 + 1;
          uVar33 = (ulonglong)(uint)((int)uVar33 + iVar19);
          uVar29 = (ulonglong)((int)uVar29 + local_328);
        } while (uVar45 != (local_310 & 0xffffffff));
      }
    }
    else if (iVar34 == 0x25) {
      if (uVar35 != local_324) {
        local_320 = (void *)((longlong)local_320 + 3);
        uVar29 = 0;
        uVar33 = 0;
        uVar45 = 0;
        do {
          if (iVar19 != 0) {
            lVar20 = 0;
            do {
              *(uint *)((longlong)local_308 + lVar20 * 4 + uVar33 * 4) =
                   (uint)*(byte *)((longlong)local_320 + lVar20 * 4 + (uVar29 - 2)) << 8 |
                   (uint)*(byte *)((longlong)local_320 + lVar20 * 4 + uVar29) << 0x18 |
                   (uint)*(byte *)((longlong)local_320 + lVar20 * 4 + (uVar29 - 1)) |
                   (uint)*(byte *)((longlong)local_320 + lVar20 * 4 + (uVar29 - 3)) << 0x10;
              lVar20 = lVar20 + 1;
            } while (iVar19 != (int)lVar20);
          }
          uVar45 = uVar45 + 1;
          uVar33 = (ulonglong)(uint)((int)uVar33 + iVar19);
          uVar29 = (ulonglong)((int)uVar29 + local_328);
        } while (uVar45 != (local_310 & 0xffffffff));
      }
    }
    else if (iVar34 == 0x2c) {
      if (iVar19 * 4 == local_328) {
        memcpy(local_308,local_320,(local_2f0 & 0xffffffff) << 2);
      }
      else if (uVar35 != local_324) {
        uVar33 = local_310 & 0xffffffff;
        uVar45 = 0;
        uVar29 = 0;
        do {
          memcpy((void *)((longlong)local_308 + uVar29 * 4),(void *)(uVar45 + (longlong)local_320),
                 (ulonglong)(uint)(iVar19 * 4));
          uVar29 = (ulonglong)(uint)((int)uVar29 + iVar19);
          uVar45 = (ulonglong)((int)uVar45 + local_328);
          uVar33 = uVar33 - 1;
        } while (uVar33 != 0);
      }
    }
    else if ((iVar34 == 0x40) && (uVar35 != local_324)) {
      local_300 = (longlong *)(local_310 & 0xffffffff);
      uVar29 = 0;
      uVar45 = 0;
      uVar33 = 0;
      do {
        if (iVar19 != 0) {
          lVar20 = 0;
          do {
            uVar27 = *(uint *)((longlong)local_320 + lVar20 * 4 + uVar29);
            iVar34 = (uVar27 >> 0x14 & 0x3ff) * 0xff;
            iVar41 = (uVar27 >> 10 & 0x3ff) * 0xff;
            iVar6 = (uVar27 & 0x3ff) * 0xff;
            *(uint *)((longlong)local_308 + lVar20 * 4 + uVar45 * 4) =
                 (iVar41 + (iVar41 + 0x200U >> 10) + 0x200 >> 2 & 0xff00) +
                 (((iVar6 + 0x200U >> 10) + iVar6 + 0x200 & 0x3fc00) << 6 |
                  (uint)(byte)(&DAT_14a3634c8)[uVar27 >> 0x1e] << 0x18 |
                 (iVar34 + 0x200U >> 10) + iVar34 + 0x200 >> 10);
            lVar20 = lVar20 + 1;
          } while (iVar19 != (int)lVar20);
        }
        uVar33 = uVar33 + 1;
        uVar45 = (ulonglong)(uint)((int)uVar45 + iVar19);
        uVar29 = (ulonglong)((int)uVar29 + local_328);
      } while ((longlong *)uVar33 != local_300);
    }
  }
  else {
    local_300 = (longlong *)CONCAT71(local_300._1_7_,*(undefined1 *)(local_2f8 + 8));
    if (iVar34 < 0x61) {
      if (iVar34 == 0x46) {
        if (uVar35 != local_324) {
          uVar29 = 0;
          uVar33 = 0;
          uVar45 = 0;
          do {
            if (iVar19 != 0) {
              lVar20 = 0;
              do {
                uVar2 = *(ushort *)((longlong)local_320 + lVar20 * 2 + uVar29);
                uVar27 = ((uint)uVar2 * 0x100 - (uint)uVar2) + 0x807f;
                uVar35 = uVar27 >> 0x10;
                *(uint *)((longlong)local_308 + lVar20 * 4 + uVar33 * 4) =
                     uVar35 << 8 | uVar27 & 0xff0000 | uVar35 | 0xff000000;
                lVar20 = lVar20 + 1;
              } while (iVar19 != (int)lVar20);
            }
            uVar45 = uVar45 + 1;
            uVar33 = (ulonglong)(uint)((int)uVar33 + iVar19);
            uVar29 = (ulonglong)((int)uVar29 + local_328);
          } while (uVar45 != (local_310 & 0xffffffff));
        }
      }
      else if (iVar34 == 0x4d) {
        if (uVar35 != local_324) {
          local_320 = (void *)((longlong)local_320 + 2);
          uVar29 = 0;
          uVar33 = 0;
          uVar45 = 0;
          do {
            if (iVar19 != 0) {
              lVar20 = 0;
              do {
                *(uint *)((longlong)local_308 + lVar20 * 4 + uVar33 * 4) =
                     ((uint)*(ushort *)((longlong)local_320 + lVar20 * 4 + (uVar29 - 2)) * 0xff +
                      0x807f & 0xff0000) +
                     ((uint)*(ushort *)((longlong)local_320 + lVar20 * 4 + uVar29) * 0xff + 0x807f
                      >> 8 & 0xff00) + -0x1000000;
                lVar20 = lVar20 + 1;
              } while (iVar19 != (int)lVar20);
            }
            uVar45 = uVar45 + 1;
            uVar33 = (ulonglong)(uint)((int)uVar33 + iVar19);
            uVar29 = (ulonglong)((int)uVar29 + local_328);
          } while (uVar45 != (local_310 & 0xffffffff));
        }
      }
      else if ((iVar34 == 0x5b) && (uVar35 != local_324)) {
        local_2f8 = local_310 & 0xffffffff;
        local_320 = (void *)((longlong)local_320 + 6);
        uVar29 = 0;
        uVar33 = 0;
        uVar45 = 0;
        do {
          pvVar17 = local_308;
          pvVar16 = local_320;
          if ((int)local_318 != 0) {
            lVar20 = 0;
            do {
              uVar18 = local_298;
              local_244 = (float)*(ushort *)((longlong)pvVar16 + lVar20 * 8 + uVar29) *
                          1.5259022e-05;
              auVar53 = ZEXT416((uint)local_244);
              local_248 = (float)*(ushort *)((longlong)pvVar16 + lVar20 * 8 + (uVar29 - 2)) *
                          1.5259022e-05;
              auVar51 = ZEXT416((uint)local_248);
              local_24c = (float)*(ushort *)((longlong)pvVar16 + lVar20 * 8 + (uVar29 - 4)) *
                          1.5259022e-05;
              auVar48 = ZEXT416((uint)local_24c);
              local_250 = (float)*(ushort *)((longlong)pvVar16 + lVar20 * 8 + (uVar29 - 6)) *
                          1.5259022e-05;
              if ((char)local_300 == '\0') {
                if (local_244 <= 0.0) {
                  auVar53._12_4_ = 0;
                  auVar53._0_12_ = ZEXT412(0);
                }
                if (1.0 <= auVar53._0_4_) {
                  auVar53._0_4_ = 0x3f800000;
                }
                if (local_248 <= 0.0) {
                  auVar51._12_4_ = 0;
                  auVar51._0_12_ = ZEXT412(0);
                }
                if (1.0 <= auVar51._0_4_) {
                  auVar51._0_4_ = 0x3f800000;
                }
                if (local_24c <= 0.0) {
                  auVar48._12_4_ = 0;
                  auVar48._0_12_ = ZEXT412(0);
                }
                if (1.0 <= auVar48._0_4_) {
                  auVar48._0_4_ = 0x3f800000;
                }
                fVar28 = local_250;
                if (local_250 <= 0.0) {
                  fVar28 = 0.0;
                }
                if (1.0 <= fVar28) {
                  fVar28 = 1.0;
                }
                local_298._0_2_ =
                     CONCAT11((char)(int)(auVar48._0_4_ * 255.0 + 0.5),
                              (char)(int)(auVar51._0_4_ * 255.0 + 0.5));
                local_298._0_3_ = CONCAT12((char)(int)(fVar28 * 255.0 + 0.5),(undefined2)local_298);
                local_298._4_4_ = SUB84(uVar18,4);
                local_298._0_4_ =
                     CONCAT13((char)(int)(auVar53._0_4_ * 255.0 + 0.5),(uint3)local_298);
              }
              else {
                FUN_1411ab38a(&local_250,&local_298);
              }
              *(uint *)((longlong)pvVar17 + lVar20 * 4 + uVar33 * 4) = (uint)local_298;
              lVar20 = lVar20 + 1;
            } while (iVar19 != (int)lVar20);
          }
          uVar45 = uVar45 + 1;
          uVar33 = (ulonglong)(uint)((int)uVar33 + (int)local_318);
          uVar29 = (ulonglong)((int)uVar29 + local_328);
        } while (uVar45 != local_2f8);
      }
    }
    else if (iVar34 == 0x61) {
      if (uVar35 != local_324) {
        local_2d0 = local_310 & 0xffffffff;
        local_2f8 = local_318 & 0xffffffff;
        auVar63 = ZEXT816(0);
        dVar8 = 1.0;
        dVar65 = 0.0;
        dVar7 = 0.0;
        dVar9 = 0.0;
        uVar29 = 0;
        uVar33 = 0;
        dVar60 = dVar8;
        dVar64 = dVar8;
        dVar10 = dVar8;
        do {
          local_2c0 = uVar33;
          local_2b8 = uVar29;
          if (iVar19 != 0) {
            local_2f0 = local_2b8 + (longlong)local_320;
            lVar20 = 0;
            uVar56 = auVar63._0_4_;
            uVar59 = auVar63._4_4_;
            dVar55 = dVar9;
            dVar57 = dVar65;
            dVar11 = dVar10;
            dVar12 = dVar64;
            dVar13 = dVar60;
            dVar14 = dVar8;
            dVar15 = dVar7;
            do {
              uVar2 = *(ushort *)(local_2f0 + lVar20 * 8);
              uVar27 = (uint)uVar2 << 0xd;
              uVar35 = uVar27 & 0xf800000;
              if (uVar35 == 0xf800000) {
                fVar28 = (float)(uVar27 | 0x70000000);
              }
              else if (uVar35 == 0) {
                fVar28 = (float)(uVar27 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar28 = (float)((uVar27 & 0xfffe000) + 0x38000000);
              }
              uVar3 = *(ushort *)(local_2f0 + 2 + lVar20 * 8);
              local_324 = (uint)uVar3;
              uVar38 = (uint)uVar3 << 0xd;
              uVar37 = uVar38 & 0xf800000;
              if (uVar37 == 0xf800000) {
                fVar40 = (float)(uVar38 | 0x70000000);
              }
              else if (uVar37 == 0) {
                fVar40 = (float)(uVar38 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar40 = (float)((uVar38 & 0xfffe000) + 0x38000000);
              }
              uVar4 = *(ushort *)(local_2f0 + 4 + lVar20 * 8);
              uVar43 = (uint)uVar4 << 0xd;
              uVar24 = uVar43 & 0xf800000;
              if (uVar24 == 0xf800000) {
                fVar26 = (float)(uVar43 | 0x70000000);
              }
              else if (uVar24 == 0) {
                fVar26 = (float)(uVar43 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar26 = (float)((uVar43 & 0xfffe000) + 0x38000000);
              }
              uVar5 = *(ushort *)(local_2f0 + 6 + lVar20 * 8);
              uVar30 = (uint)uVar5 << 0xd;
              uVar42 = uVar30 & 0xf800000;
              if (uVar42 == 0xf800000) {
                fVar36 = (float)(uVar30 | 0x70000000);
              }
              else if (uVar42 == 0) {
                fVar36 = (float)(uVar30 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar36 = (float)((uVar30 & 0xfffe000) + 0x38000000);
              }
              if (uVar35 == 0xf800000) {
                fVar32 = (float)(uVar27 | 0x70000000);
              }
              else if (uVar35 == 0) {
                fVar32 = (float)(uVar27 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar32 = (float)((uVar27 & 0xfffe000) + 0x38000000);
              }
              if (uVar37 == 0xf800000) {
                fVar39 = (float)(uVar38 | 0x70000000);
              }
              else if (uVar37 == 0) {
                fVar39 = (float)(uVar38 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar39 = (float)((uVar38 & 0xfffe000) + 0x38000000);
              }
              if (uVar24 == 0xf800000) {
                fVar44 = (float)(uVar43 | 0x70000000);
              }
              else if (uVar24 == 0) {
                fVar44 = (float)(uVar43 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar44 = (float)((uVar43 & 0xfffe000) + 0x38000000);
              }
              if (uVar42 == 0xf800000) {
                fVar31 = (float)(uVar30 | 0x70000000);
              }
              else if (uVar42 == 0) {
                fVar31 = (float)(uVar30 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar31 = (float)((uVar30 & 0xfffe000) + 0x38000000);
              }
              uVar27 = (int)(short)uVar2 & 0x80000000;
              dVar61 = (double)(float)((uint)fVar28 | uVar27);
              if ((double)CONCAT44(uVar59,uVar56) <= dVar61) {
                dVar61 = (double)CONCAT44(uVar59,uVar56);
              }
              auVar63._8_8_ = 0;
              auVar63._0_8_ = dVar61;
              dVar65 = (double)(float)((uint)fVar40 | (int)(short)uVar3 & 0x80000000U);
              if (dVar57 <= dVar65) {
                dVar65 = dVar57;
              }
              uVar35 = (int)(short)uVar4 & 0x80000000;
              dVar7 = (double)(float)((uint)fVar26 | uVar35);
              if (dVar15 <= dVar7) {
                dVar7 = dVar15;
              }
              uVar37 = (int)(short)uVar5 & 0x80000000;
              dVar9 = (double)(float)((uint)fVar36 | uVar37);
              if (dVar55 <= dVar9) {
                dVar9 = dVar55;
              }
              dVar8 = (double)(float)((uint)fVar32 | uVar27);
              if (dVar8 <= dVar14) {
                dVar8 = dVar14;
              }
              dVar60 = (double)(float)((uint)fVar39 | (int)(short)uVar3 & 0x80000000U);
              if (dVar60 <= dVar13) {
                dVar60 = dVar13;
              }
              dVar64 = (double)(float)((uint)fVar44 | uVar35);
              if (dVar64 <= dVar12) {
                dVar64 = dVar12;
              }
              dVar10 = (double)(float)(uVar37 | (uint)fVar31);
              if (dVar10 <= dVar11) {
                dVar10 = dVar11;
              }
              lVar20 = lVar20 + 1;
              uVar56 = SUB84(dVar61,0);
              uVar59 = (undefined4)((ulonglong)dVar61 >> 0x20);
              dVar55 = dVar9;
              dVar57 = dVar65;
              dVar11 = dVar10;
              dVar12 = dVar64;
              dVar13 = dVar60;
              dVar14 = dVar8;
              dVar15 = dVar7;
            } while (iVar19 != (int)lVar20);
          }
          uVar29 = (ulonglong)((int)local_2b8 + local_328);
          uVar33 = local_2c0 + 1;
        } while (local_2c0 + 1 != local_2d0);
        local_320 = (void *)((longlong)local_320 + 6);
        local_310 = 0;
        uVar29 = 0;
        uVar33 = 0;
        do {
          pvVar17 = local_308;
          uVar45 = local_310;
          pvVar16 = local_320;
          if ((int)local_318 != 0) {
            lVar20 = 0;
            do {
              uVar18 = local_298;
              uVar2 = *(ushort *)((longlong)pvVar16 + lVar20 * 8 + uVar45);
              uVar27 = (uint)uVar2 << 0xd;
              if ((uVar27 & 0xf800000) == 0xf800000) {
                fVar28 = (float)(uVar27 | 0x70000000);
              }
              else if ((uVar27 & 0xf800000) == 0) {
                fVar28 = (float)(uVar27 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar28 = (float)((uVar27 & 0xfffe000) + 0x38000000);
              }
              uVar3 = *(ushort *)((longlong)pvVar16 + lVar20 * 8 + (uVar45 - 2));
              uVar27 = (uint)uVar3 << 0xd;
              if ((uVar27 & 0xf800000) == 0xf800000) {
                fVar40 = (float)(uVar27 | 0x70000000);
              }
              else if ((uVar27 & 0xf800000) == 0) {
                fVar40 = (float)(uVar27 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar40 = (float)((uVar27 & 0xfffe000) + 0x38000000);
              }
              uVar4 = *(ushort *)((longlong)pvVar16 + lVar20 * 8 + (uVar45 - 4));
              uVar27 = (uint)uVar4 << 0xd;
              if ((uVar27 & 0xf800000) == 0xf800000) {
                fVar26 = (float)(uVar27 | 0x70000000);
              }
              else if ((uVar27 & 0xf800000) == 0) {
                fVar26 = (float)(uVar27 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar26 = (float)((uVar27 & 0xfffe000) + 0x38000000);
              }
              uVar5 = *(ushort *)((longlong)pvVar16 + lVar20 * 8 + (uVar45 - 6));
              uVar27 = (uint)uVar5 << 0xd;
              if ((uVar27 & 0xf800000) == 0xf800000) {
                fVar36 = (float)(uVar27 | 0x70000000);
              }
              else if ((uVar27 & 0xf800000) == 0) {
                fVar36 = (float)(uVar27 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar36 = (float)((uVar27 & 0xfffe000) + 0x38000000);
              }
              local_244 = (float)(((double)(float)((uint)fVar28 | (int)(short)uVar2 & 0x80000000U) -
                                  dVar9) / (dVar10 - dVar9));
              local_248 = (float)(((double)(float)((uint)fVar40 | (int)(short)uVar3 & 0x80000000U) -
                                  dVar7) / (dVar64 - dVar7));
              local_24c = (float)(((double)(float)((uint)fVar26 | (int)(short)uVar4 & 0x80000000U) -
                                  dVar65) / (dVar60 - dVar65));
              local_250 = (float)(((double)(float)((int)(short)uVar5 & 0x80000000U | (uint)fVar36) -
                                  auVar63._0_8_) / (dVar8 - auVar63._0_8_));
              if ((char)local_300 == '\0') {
                fVar28 = local_244;
                if (local_244 <= 0.0) {
                  fVar28 = 0.0;
                }
                if (1.0 <= fVar28) {
                  fVar28 = 1.0;
                }
                fVar40 = local_248;
                if (local_248 <= 0.0) {
                  fVar40 = 0.0;
                }
                if (1.0 <= fVar40) {
                  fVar40 = 1.0;
                }
                fVar26 = local_24c;
                if (local_24c <= 0.0) {
                  fVar26 = 0.0;
                }
                if (1.0 <= fVar26) {
                  fVar26 = 1.0;
                }
                fVar36 = local_250;
                if (local_250 <= 0.0) {
                  fVar36 = 0.0;
                }
                if (1.0 <= fVar36) {
                  fVar36 = 1.0;
                }
                local_298._0_2_ =
                     CONCAT11((char)(int)(fVar26 * 255.0 + 0.5),(char)(int)(fVar40 * 255.0 + 0.5));
                local_298._0_3_ = CONCAT12((char)(int)(fVar36 * 255.0 + 0.5),(undefined2)local_298);
                local_298._4_4_ = SUB84(uVar18,4);
                local_298._0_4_ = CONCAT13((char)(int)(fVar28 * 255.0 + 0.5),(uint3)local_298);
              }
              else {
                FUN_1411ab38a(&local_250,&local_298);
              }
              *(uint *)((longlong)pvVar17 + lVar20 * 4 + uVar29 * 4) = (uint)local_298;
              lVar20 = lVar20 + 1;
            } while ((int)local_2f8 != (int)lVar20);
          }
          uVar33 = uVar33 + 1;
          uVar29 = (ulonglong)(uint)((int)uVar29 + (int)local_318);
          local_310 = (ulonglong)((int)local_310 + local_328);
        } while (uVar33 != local_2d0);
      }
    }
    else if (iVar34 == 0x6d) {
      if (uVar35 != local_324) {
        local_2f8 = local_310 & 0xffffffff;
        auVar58 = ZEXT816(0);
        uVar29 = 0;
        fVar28 = 1.0;
        fVar40 = 1.0;
        dVar7 = 0.0;
        fVar26 = 0.0;
        fVar36 = 0.0;
        auVar47 = ZEXT816(0x3ff0000000000000);
        auVar49 = ZEXT816(0x3ff0000000000000);
        do {
          auVar62 = auVar47;
          auVar66 = auVar49;
          if (iVar19 != 0) {
            pfVar25 = (float *)((ulonglong)(local_328 * (int)uVar29) + (longlong)local_320);
            uVar33 = local_318 & 0xffffffff;
            uVar56 = auVar58._0_4_;
            uVar59 = auVar58._4_4_;
            dVar8 = dVar7;
            fVar32 = fVar26;
            fVar39 = fVar28;
            fVar44 = fVar36;
            fVar31 = fVar40;
            do {
              dVar60 = (double)*pfVar25;
              dVar9 = dVar60;
              if ((double)CONCAT44(uVar59,uVar56) <= dVar60) {
                dVar9 = (double)CONCAT44(uVar59,uVar56);
              }
              auVar58._8_8_ = 0;
              auVar58._0_8_ = dVar9;
              dVar64 = (double)pfVar25[1];
              dVar7 = dVar64;
              if (dVar8 <= dVar64) {
                dVar7 = dVar8;
              }
              fVar28 = pfVar25[2];
              fVar26 = fVar28;
              if (fVar32 <= fVar28) {
                fVar26 = fVar32;
              }
              fVar40 = pfVar25[3];
              fVar36 = fVar40;
              if (fVar44 <= fVar40) {
                fVar36 = fVar44;
              }
              if (dVar60 <= auVar47._0_8_) {
                dVar60 = auVar47._0_8_;
              }
              auVar62._8_8_ = 0;
              auVar62._0_8_ = dVar60;
              if (dVar64 <= auVar49._0_8_) {
                dVar64 = auVar49._0_8_;
              }
              auVar66._8_8_ = 0;
              auVar66._0_8_ = dVar64;
              if (fVar28 <= fVar39) {
                fVar28 = fVar39;
              }
              if (fVar40 <= fVar31) {
                fVar40 = fVar31;
              }
              pfVar25 = pfVar25 + 4;
              auVar47._8_8_ = 0;
              auVar47._0_8_ = dVar60;
              auVar49._8_8_ = 0;
              auVar49._0_8_ = dVar64;
              uVar56 = SUB84(dVar9,0);
              uVar59 = (undefined4)((ulonglong)dVar9 >> 0x20);
              uVar27 = (int)uVar33 - 1;
              uVar33 = (ulonglong)uVar27;
              dVar8 = dVar7;
              fVar32 = fVar26;
              fVar39 = fVar28;
              fVar44 = fVar36;
              fVar31 = fVar40;
            } while (uVar27 != 0);
          }
          uVar29 = uVar29 + 1;
          auVar47 = auVar62;
          auVar49 = auVar66;
        } while (uVar29 != local_2f8);
        local_320 = (void *)((longlong)local_320 + 0xc);
        uVar29 = 0;
        uVar33 = 0;
        uVar45 = 0;
        do {
          pvVar16 = local_308;
          if ((int)local_318 != 0) {
            pfVar25 = (float *)(uVar29 + (longlong)local_320);
            lVar20 = 0;
            do {
              uVar18 = local_298;
              local_244 = (*pfVar25 - fVar36) / (fVar40 - fVar36);
              auVar54 = ZEXT416((uint)local_244);
              local_248 = (pfVar25[-1] - fVar26) / (fVar28 - fVar26);
              auVar52 = ZEXT416((uint)local_248);
              local_24c = (float)(((double)pfVar25[-2] - dVar7) / (auVar66._0_8_ - dVar7));
              auVar50 = ZEXT416((uint)local_24c);
              local_250 = (float)(((double)pfVar25[-3] - auVar58._0_8_) /
                                 (auVar62._0_8_ - auVar58._0_8_));
              if ((char)local_300 == '\0') {
                if (local_244 <= 0.0) {
                  auVar54 = ZEXT816(0) << 0x20;
                }
                if (1.0 <= auVar54._0_4_) {
                  auVar54._0_4_ = 0x3f800000;
                }
                if (local_248 <= 0.0) {
                  auVar52 = ZEXT816(0) << 0x20;
                }
                if (1.0 <= auVar52._0_4_) {
                  auVar52._0_4_ = 0x3f800000;
                }
                if (local_24c <= 0.0) {
                  auVar50 = ZEXT816(0) << 0x20;
                }
                if (1.0 <= auVar50._0_4_) {
                  auVar50._0_4_ = 0x3f800000;
                }
                fVar32 = local_250;
                if (local_250 <= 0.0) {
                  fVar32 = 0.0;
                }
                if (1.0 <= fVar32) {
                  fVar32 = 1.0;
                }
                local_298._0_2_ =
                     CONCAT11((char)(int)(auVar50._0_4_ * 255.0 + 0.5),
                              (char)(int)(auVar52._0_4_ * 255.0 + 0.5));
                local_298._0_3_ = CONCAT12((char)(int)(fVar32 * 255.0 + 0.5),(undefined2)local_298);
                local_298._4_4_ = SUB84(uVar18,4);
                local_298._0_4_ =
                     CONCAT13((char)(int)(auVar54._0_4_ * 255.0 + 0.5),(uint3)local_298);
              }
              else {
                FUN_1411ab38a(&local_250,&local_298);
              }
              *(uint *)((longlong)pvVar16 + lVar20 * 4 + uVar33 * 4) = (uint)local_298;
              lVar20 = lVar20 + 1;
              pfVar25 = pfVar25 + 4;
            } while (iVar19 != (int)lVar20);
          }
          uVar45 = uVar45 + 1;
          uVar33 = (ulonglong)(uint)((int)uVar33 + (int)local_318);
          uVar29 = (ulonglong)((int)uVar29 + local_328);
        } while (uVar45 != local_2f8);
      }
    }
    else if ((iVar34 == 0x7a) && (uVar35 != local_324)) {
      uVar33 = local_310 & 0xffffffff;
      uVar45 = 0;
      uVar46 = 0;
      uVar29 = 0;
      do {
        pvVar17 = local_308;
        pvVar16 = local_320;
        if ((int)local_318 != 0) {
          lVar20 = 0;
          do {
            uVar18 = local_298;
            uVar27 = *(uint *)((longlong)pvVar16 + lVar20 * 4 + uVar45);
            uVar35 = uVar27 & 0x3f;
            uVar37 = uVar27 >> 6 & 0x1f;
            if (uVar37 == 0) {
              if (uVar35 == 0) {
                uVar37 = 0xffffff90;
                uVar35 = 0;
              }
              else {
                uVar38 = 0x1f;
                if (uVar35 != 0) {
                  for (; uVar35 >> uVar38 == 0; uVar38 = uVar38 - 1) {
                  }
                }
                uVar37 = (uVar38 ^ 0xffffffe0) + 0x1b;
                uVar35 = uVar27 << (~(byte)uVar38 + 7 & 0x1f) & 0x3e;
              }
LAB_1473bc540:
              local_250 = (float)(uVar35 * 0x20000 + uVar37 * 0x800000 + 0x38000000);
            }
            else {
              if (uVar37 != 0x1f) goto LAB_1473bc540;
              local_250 = (float)(uVar35 << 0x11 | 0x7f800000);
            }
            uVar35 = uVar27 >> 0xb & 0x3f;
            uVar37 = uVar27 >> 0x11 & 0x1f;
            if (uVar37 == 0) {
              if (uVar35 == 0) {
                uVar37 = 0xffffff90;
                uVar35 = 0;
              }
              else {
                uVar38 = 0x1f;
                if (uVar35 != 0) {
                  for (; uVar35 >> uVar38 == 0; uVar38 = uVar38 - 1) {
                  }
                }
                uVar37 = (uVar38 ^ 0xffffffe0) + 0x1b;
                uVar35 = (uVar27 >> 0xb) << (~(byte)uVar38 + 7 & 0x1f) & 0x3e;
              }
LAB_1473bc5a4:
              local_24c = (float)(uVar35 * 0x20000 + uVar37 * 0x800000 + 0x38000000);
            }
            else {
              if (uVar37 != 0x1f) goto LAB_1473bc5a4;
              local_24c = (float)(uVar35 << 0x11 | 0x7f800000);
            }
            uVar35 = uVar27 >> 0x16 & 0x1f;
            uVar37 = uVar27 >> 0x1b;
            if (uVar37 == 0x1f) {
              local_248 = (float)(uVar35 << 0x11 | 0x7f800000);
            }
            else {
              if (uVar27 < 0x8000000) {
                if (uVar35 == 0) {
                  uVar37 = 0xffffff90;
                  uVar35 = 0;
                }
                else {
                  uVar38 = 0x1f;
                  if (uVar35 != 0) {
                    for (; uVar35 >> uVar38 == 0; uVar38 = uVar38 - 1) {
                    }
                  }
                  uVar37 = (uVar38 ^ 0xffffffe0) + 0x1c;
                  uVar35 = (uVar27 >> 0x16) << (~(byte)uVar38 + 6 & 0x1f) & 0x1e;
                }
              }
              local_248 = (float)(uVar35 * 0x40000 + uVar37 * 0x800000 + 0x38000000);
            }
            local_244 = 0.0;
            if ((char)local_300 == '\0') {
              fVar40 = 0.0;
              fVar28 = local_248;
              if (local_248 <= 0.0) {
                fVar28 = fVar40;
              }
              fVar26 = 1.0;
              if (1.0 <= fVar28) {
                fVar28 = fVar26;
              }
              fVar36 = local_24c;
              if (local_24c <= 0.0) {
                fVar36 = fVar40;
              }
              if (1.0 <= fVar36) {
                fVar36 = fVar26;
              }
              fVar32 = local_250;
              if (local_250 <= 0.0) {
                fVar32 = fVar40;
              }
              if (1.0 <= fVar32) {
                fVar32 = fVar26;
              }
              local_298._0_2_ =
                   CONCAT11((char)(int)(fVar36 * 255.0 + 0.5),(char)(int)(fVar28 * 255.0 + 0.5));
              local_298._0_3_ = CONCAT12((char)(int)(fVar32 * 255.0 + 0.5),(undefined2)local_298);
              local_298._4_4_ = SUB84(uVar18,4);
              local_298._0_4_ = (uint)(uint3)local_298;
            }
            else {
              FUN_1411ab38a(&local_250,&local_298);
            }
            *(uint *)((longlong)pvVar17 + lVar20 * 4 + uVar46 * 4) = (uint)local_298;
            lVar20 = lVar20 + 1;
          } while (iVar19 != (int)lVar20);
        }
        uVar29 = uVar29 + 1;
        uVar46 = (ulonglong)(uint)((int)uVar46 + (int)local_318);
        uVar45 = (ulonglong)((int)uVar45 + local_328);
      } while (uVar29 != uVar33);
    }
  }
  if (((uint)local_2c8 >> 0x13 & 1) == 0) {
    FUN_1473a2c42(*(longlong *)(local_2e0 + 0x48) + 0x5d0,local_2d8,&local_258);
  }
  FUN_14739639c(*(undefined8 *)(local_2e8 + 0x150));
  if ((local_f0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bd608 FUN_1473bd608 body=356 status=ok
// SIG undefined FUN_1473bd608(void)

void FUN_1473bd608(longlong *param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  uint local_70;
  undefined4 local_6c;
  int iStack_68;
  undefined4 uStack_64;
  longlong lStack_60;
  undefined8 uStack_58;
  longlong *local_50;
  uint *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = param_2[0x13];
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar6 * 0x30;
        if (*(ulonglong *)(*param_1 + (longlong)iVar6 * 0x30) == uVar2) {
          if ((lVar1 != 0) && (lVar1 + 8 != 0)) {
            if (param_4 == '\0') {
              local_70 = *(uint *)(param_2 + 0x20);
              local_6c = 0;
              iStack_68 = -1;
              uStack_64 = 0;
              lStack_60 = CONCAT44(lStack_60._4_4_,0xffffffff);
              FUN_147395160(lVar1 + 8,param_3);
            }
            goto LAB_1473bd749;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x28);
      } while (iVar6 != -1);
    }
  }
  lVar1 = param_2[0x20];
  uVar3 = FUN_14739b90c(param_2);
  lVar4 = (**(code **)(*param_2 + 8))(param_2);
  local_48 = &local_70;
  local_70 = (uint)*(byte *)(lVar4 + 0x30);
  iStack_68 = ((int)lVar1 == 6) + 1;
  lStack_60 = 0;
  uStack_58 = 0;
  local_6c = uVar3;
  uStack_64 = param_3;
  local_50 = param_2 + 0x13;
  FUN_14739bf6e(param_1,local_3c,&local_50,0);
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
LAB_1473bd749:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bd76e FUN_1473bd76e body=284 status=ok
// SIG undefined FUN_1473bd76e(void)

void FUN_1473bd76e(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  local_48 = *param_5;
  uStack_44 = param_5[1];
  uStack_40 = param_5[2];
  uStack_3c = param_5[3];
  uStack_38 = param_5[4];
  uStack_34 = param_5[5];
  uStack_30 = param_5[6];
  local_68 = &local_48;
  local_58 = *param_3;
  local_50 = param_3[1];
  FUN_1473bbc9e(local_48,uStack_3c,&local_58,&local_28);
  FUN_14735c9c0(param_4,uStack_20 & 0xffffffff,1);
  if (0 < (longlong)(int)uStack_20) {
    lVar5 = 0;
    do {
      uVar1 = (&DAT_14c758c60)[*(byte *)(local_28 + 1 + lVar5)];
      uVar2 = (&DAT_14c758c60)[*(byte *)(local_28 + lVar5)];
      bVar3 = *(byte *)(local_28 + 3 + lVar5);
      lVar4 = *param_4;
      *(undefined4 *)(lVar4 + lVar5 * 4) = (&DAT_14c758c60)[*(byte *)(local_28 + 2 + lVar5)];
      *(undefined4 *)(lVar4 + 4 + lVar5 * 4) = uVar1;
      *(undefined4 *)(lVar4 + 8 + lVar5 * 4) = uVar2;
      *(float *)(lVar4 + 0xc + lVar5 * 4) = (float)bVar3 * 0.003921569;
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)uStack_20 * 4 != lVar5);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bd88c FUN_1473bd88c body=318 status=ok
// SIG undefined FUN_1473bd88c(void)

void FUN_1473bd88c(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  if (param_3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_3 + 0x18))(param_3);
    if (cVar1 == '\0') {
      local_48 = 0;
      local_40 = 0;
      FUN_14007658c(&DAT_14ca850c8,&local_48,5);
      FUN_1473a4ba6(*(undefined8 *)(param_1 + 0x48));
      (**(code **)(*param_3 + 0x20))(param_3,&DAT_14ca85100,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
      goto LAB_1473bd8ec;
    }
  }
  if (DAT_14ca786a8 != 0) {
    local_48 = 0;
    local_40 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_48,5);
    FUN_1473a4890(*(undefined8 *)(param_1 + 0x48));
  }
LAB_1473bd8ec:
  uVar3 = FUN_1473d669a(plVar2);
  *param_4 = uVar3;
  FUN_1473d6686(plVar2);
  lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  *param_5 = *(undefined4 *)(lVar4 + 0x24);
  lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  *param_6 = *(undefined4 *)(lVar4 + 0x28);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bd9ce FUN_1473bd9ce body=478 status=ok
// SIG undefined FUN_1473bd9ce(void)

void FUN_1473bd9ce(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  int param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  if (DAT_14ca786c0 == 1) {
    if ((*(byte *)(lVar3 + 0x32) < 2) || (*(byte *)(lVar3 + 0x32) - 3 < 2)) {
      uVar5 = (*(int *)(lVar3 + 0x28) >> ((byte)param_7 & 0x1f)) *
              (*(int *)(lVar3 + 0x24) >> ((byte)param_7 & 0x1f));
    }
    else {
      uVar5 = 0;
    }
    *(undefined4 *)(param_4 + 8) = 0;
    iVar1 = 0;
    iVar6 = 0;
    if (*(int *)(param_4 + 0xc) != 0) {
      FUN_1471cf4a8(param_4,0);
      iVar6 = *(int *)(param_4 + 8);
      iVar1 = *(int *)(param_4 + 0xc);
    }
    *(uint *)(param_4 + 8) = iVar6 + uVar5;
    if ((uint)(iVar1 - iVar6) < uVar5) {
      FUN_145ee9c2c(param_4,iVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  FUN_1473a4b20(*(undefined8 *)(param_1 + 0x48));
  local_70 = FUN_1473984ce(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20c8) + 0x150));
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  if (*(byte *)(lVar3 + 0x32) < 2) {
    local_68 = *param_3;
    local_80 = &local_68;
    local_60 = param_3[1];
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    local_88 = param_6;
  }
  else {
    if (1 < *(byte *)(lVar3 + 0x32) - 3) goto LAB_1473bdb89;
    local_58 = *param_3;
    local_80 = &local_58;
    local_50 = param_3[1];
    local_88 = param_5 + param_6 * 6;
    uVar4 = *(undefined8 *)(param_1 + 0x48);
  }
  local_78 = param_4;
  FUN_1431ab55c(uVar4,local_70,plVar2,param_7);
LAB_1473bdb89:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_14739639c(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20c8) + 0x150));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1473bdbca FUN_1473bdbca body=1086 status=ok
// SIG undefined FUN_1473bdbca(void)

void FUN_1473bdbca(longlong param_1,longlong *param_2,int *param_3,ulonglong param_4,
                  undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined2 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_268 [32];
  undefined4 *local_248;
  undefined8 *local_240;
  undefined8 *local_230;
  longlong local_228;
  ulonglong local_220;
  int local_218;
  int local_214;
  longlong local_210;
  longlong *local_208;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  undefined8 uStack_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  longlong local_1b0;
  undefined1 local_1a8 [56];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_230 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_228 = param_1;
  local_208 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
  local_210 = (**(code **)(*local_208 + 8))();
  iVar6 = param_3[2];
  iVar15 = param_3[3];
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar11 = (int)param_4;
  iVar14 = (int)(param_4 >> 0x20) - iVar11;
  iVar16 = (iVar15 - iVar2) * (iVar6 - iVar1);
  iVar9 = iVar16 * iVar14 * 8;
  FUN_145ee9bde(local_230,iVar9,1);
  plVar5 = local_208;
  lVar8 = local_228;
  if (DAT_14ca786c0 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_268);
  }
  local_220 = param_4 >> 0x20;
  local_218 = iVar14;
  local_214 = iVar6 - iVar1;
  FUN_1473a4b20(*(undefined8 *)(local_228 + 0x48));
  lVar7 = FUN_1473984ce(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar8 + 0x48) + 0x20c8) + 0x150)
                       );
  lVar8 = FUN_143192298(*(longlong *)(lVar8 + 0x48) + 0x5d0,iVar9,2,8);
  local_170 = 0;
  local_168 = 0x100000000;
  local_a0 = 0;
  local_98 = 0x200000000;
  local_58 = 0;
  local_50 = 0x200000000;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_1b0 = lVar8;
  if (DAT_14ca786c0 == 0) {
    local_1e8 = 0;
    uStack_1e0 = *(undefined8 *)(local_210 + 0x24);
    local_1d8 = (ulonglong)*(uint *)(plVar5 + 0x20);
    uStack_1d0 = 0x100000000;
    local_1c8 = *param_3;
    local_1c4 = param_3[1];
    local_1bc = local_214;
    local_1b4 = local_218;
    local_1c0 = iVar11;
    local_1b8 = iVar15 - iVar2;
    iVar6 = FUN_1473975a6(lVar7,plVar5,0x80);
    local_248 = (undefined4 *)CONCAT44(local_248._4_4_,1);
    local_240 = &local_1e8;
    (*DAT_14ca79330)(*(undefined8 *)(lVar7 + 0x88),plVar5[0x13],6,*(undefined8 *)(lVar8 + 0x38));
    if ((iVar6 == 0) || (iVar6 == 6)) {
      FUN_1473bd608(lVar7 + 0x108,plVar5,6,0);
    }
    else {
      local_1fc = (undefined4)plVar5[0x20];
      local_248 = &local_1fc;
      local_1f8 = 0;
      uStack_1f4 = 0xffffffff;
      uStack_1f0 = 0;
      uStack_1ec = 0xffffffff;
      FUN_147396818(local_1a8,plVar5[0x13],6,iVar6);
    }
  }
  else {
    local_248 = (undefined4 *)CONCAT44(local_248._4_4_,0x3c003c00);
    (*DAT_14ca79338)(*(undefined8 *)(lVar7 + 0x88),*(undefined8 *)(lVar8 + 0x38),0,iVar9);
  }
  uVar4 = local_220;
  lVar8 = local_228;
  puVar3 = local_230;
  local_248 = (undefined4 *)CONCAT44(local_248._4_4_,0x4000);
  FUN_14739445e(local_1a8,0x1000,0x2000,0x1000);
  local_230 = (undefined8 *)lVar7;
  FUN_147397068(local_1a8,lVar7);
  FUN_14739859c(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar8 + 0x48) + 0x20c8) + 0x150),0,0);
  FUN_1473a4890(*(undefined8 *)(lVar8 + 0x48));
  FUN_1473a8158(local_1b0 + 0x18,*(undefined8 *)(local_1b0 + 0x10));
  if (iVar11 < (int)(uint)uVar4) {
    puVar13 = (undefined2 *)*puVar3;
    iVar6 = param_3[3];
    uVar10 = iVar16 * iVar11;
    do {
      iVar15 = param_3[1];
      if (iVar15 < iVar6) {
        do {
          lVar8 = FUN_1473a804a(local_1b0 + 0x18,*(undefined8 *)(local_1b0 + 0x10));
          lVar7 = (longlong)*param_3;
          if (*param_3 < param_3[2]) {
            lVar8 = lVar8 + (ulonglong)uVar10 * 8 +
                    (longlong)(*(int *)(local_210 + 0x24) * iVar15) * 8;
            do {
              *puVar13 = *(undefined2 *)(lVar8 + lVar7 * 8);
              puVar13[1] = *(undefined2 *)(lVar8 + 2 + lVar7 * 8);
              puVar13[2] = *(undefined2 *)(lVar8 + 4 + lVar7 * 8);
              puVar13[3] = *(undefined2 *)(lVar8 + 6 + lVar7 * 8);
              puVar13 = puVar13 + 4;
              lVar7 = lVar7 + 1;
            } while ((int)lVar7 < param_3[2]);
          }
          iVar15 = iVar15 + 1;
          iVar6 = param_3[3];
        } while (iVar15 < iVar6);
      }
      uVar12 = (int)param_4 + 1;
      param_4 = (ulonglong)uVar12;
      uVar10 = uVar10 + iVar16;
    } while (uVar12 != (uint)uVar4);
  }
  lVar8 = local_228;
  FUN_1473a2c42(*(longlong *)(local_228 + 0x48) + 0x5d0,local_230,&local_1b0);
  FUN_14739639c(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar8 + 0x48) + 0x20c8) + 0x150));
  FUN_1473945b6(local_1a8);
  if ((local_48 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473be02a FUN_1473be02a body=220 status=ok
// SIG undefined FUN_1473be02a(void)

void FUN_1473be02a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x104);
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
  if (iVar1 == 0) {
    FUN_147398e72();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x168);
    *(undefined4 *)(lVar3 + 0x38) = 2;
    *(longlong *)(lVar3 + 0x68) = lVar2;
    *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(lVar2 + 0xe0);
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    FUN_147398e72();
    *(undefined8 *)(param_1 + 0x158) = 0;
    lVar2 = DAT_14ca786d8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) != 0x40000002) {
      bVar4 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar4 ^ 1);
    }
    if (*(int *)(lVar2 + uVar5 * 4) != 0) {
      FUN_14739b396(param_1);
      if (*(char *)(param_1 + 0x130) == '\x01') {
        FUN_14739a1d0(param_1);
        *(undefined1 *)(param_1 + 0x130) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1473be106 FUN_1473be106 body=63 status=ok
// SIG undefined FUN_1473be106(void)

void FUN_1473be106(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001473be142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca79340)(*(undefined8 *)(*(longlong *)(lVar1 + 0x78) + 0x88),0);
  return;
}



// FUNCTION 1473be14e FUN_1473be14e body=61 status=ok
// SIG undefined FUN_1473be14e(void)

ulonglong FUN_1473be14e(longlong *param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  
  cVar1 = (**(code **)(*param_1 + 0x48))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (param_2 != 1) {
      cVar1 = FUN_1473a5586();
      if (cVar1 != '\0') {
        uVar2 = FUN_1431aca28(param_2,0);
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1473be18c FUN_1473be18c body=839 status=ok
// SIG undefined FUN_1473be18c(void)

undefined8 *
FUN_1473be18c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  lVar7 = 0x25;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar7 + -0x15) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar7 + -5) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + lVar7 + -1) = 0;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0xe5);
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x107) = 0;
  *param_1 = &PTR_FUN_14a362070;
  param_1[0x22] = param_2;
  param_1[0x23] = param_5;
  param_1[0x24] = param_3;
  param_1[0x25] = param_4;
  *(undefined2 *)(param_1 + 0x26) = 0x100;
  param_1[0x92] = 0;
  memset(param_1 + 0x27,0,0x354);
  FUN_1473da330(param_1 + 0x93,param_1,param_3);
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = param_3;
  *(undefined2 *)(puVar3 + 1) = 0;
  puVar3[2] = 0xffffffffffffffff;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  puVar3[7] = puVar4;
  puVar3[6] = puVar4;
  puVar3[8] = param_1;
  puVar3[9] = 0;
  param_1[0xae] = puVar3;
  uVar5 = FUN_14001cc68(200,0x10);
  FUN_1473996c8(uVar5,param_3,param_1);
  param_1[0x2a] = uVar5;
  FUN_147399882(uVar5,param_1);
  FUN_1473d9c6e(param_1[0xae],8);
  if (param_1[0x23] == 0) {
    lVar7 = param_1[0x2a];
    if (*(longlong *)(lVar7 + 0x80) != 0) {
      FUN_14739859c(lVar7,0,0);
    }
    FUN_1473d9d78(param_1[0xae],*(undefined8 *)(lVar7 + 0x78));
    local_50 = 0;
    local_48 = 0;
    FUN_14318eafa(param_1[0x2a]);
    FUN_14739639c(param_1[0x2a]);
  }
  uVar5 = FUN_14001cc68(0x208,0x10);
  FUN_1473be4d4(uVar5,param_1[0x24],param_1);
  param_1[0x2e] = uVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
  lVar7 = param_1[0x24];
  *plVar6 = lVar7;
  plVar6[7] = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar6 + 0x4c) = 0;
  plVar6[0xb] = 0;
  *(undefined4 *)(plVar6 + 0xc) = 0;
  plVar6[0xd] = (longlong)param_1;
  param_1[0x2f] = plVar6;
  uVar8 = *(uint *)(lVar7 + 0xd58);
  if (uVar8 < 0x11) {
    uVar8 = 0x10;
  }
  uVar1 = *(uint *)(lVar7 + 0x20f8);
  uVar5 = FUN_14001cc68(0x50,0x10);
  local_58 = uVar1 >> 0xd & 0x20000 | 0x11;
  FUN_1473a24f0(uVar5,param_3,DAT_14c760c90,uVar8);
  param_1[0x27] = uVar5;
  lVar7 = FUN_1411d089c();
  uVar8 = *(uint *)(lVar7 + 8);
  iVar2 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar2 + uVar8;
  if ((uint)(*(int *)((longlong)param_1 + 0x584) - iVar2) < uVar8) {
    FUN_1411d0a1e(param_1 + 0xaf);
  }
  memset((void *)((longlong)iVar2 * 8 + param_1[0xaf]),0,(longlong)(int)uVar8 << 3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473be4d4 FUN_1473be4d4 body=225 status=ok
// SIG undefined FUN_1473be4d4(void)

undefined8 * FUN_1473be4d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[7] = 0;
  param_1[8] = 0x200000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x200000000;
  *(undefined4 *)(param_1 + 0xf) = 6;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  lVar1 = 0xf0;
  do {
    *(undefined8 *)((longlong)param_1 + lVar1 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x200);
  param_1[0x40] = param_3;
  FUN_1473c3e80(param_1 + 1,1,1);
  FUN_1473c4056(param_1 + 9,1,1);
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  param_1[0xf] = 6;
  return param_1;
}



// FUNCTION 1473be5b6 FUN_1473be5b6 body=98 status=ok
// SIG undefined FUN_1473be5b6(void)

void FUN_1473be5b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if (lVar1 != 0) {
    FUN_1473b03a0(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    FUN_1473afb00(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}



// FUNCTION 1473be618 FUN_1473be618 body=120 status=ok
// SIG undefined FUN_1473be618(void)

void FUN_1473be618(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a362550;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  if (param_1[0xc] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xc] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_14631aa72(param_1);
  return;
}



// FUNCTION 1473be690 FUN_1473be690 body=686 status=ok
// SIG undefined FUN_1473be690(void)

void FUN_1473be690(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar7 = FUN_14054d46e(&DAT_14c846b20,L"savevulkanpsocacheonexit");
  if (cVar7 != '\0') {
    FUN_1473be940();
  }
  thunk_FUN_1473a4890(*(undefined8 *)(param_1 + 0x48));
  FUN_1474040bc();
  thunk_FUN_1473e26f4();
  if (DAT_14ca84d88 == '\x01') {
    iVar9 = 0;
    DAT_14ca84d88 = '\0';
    DAT_14ca84e2c = 0;
    FUN_145bcc89c();
    lVar5 = *(longlong *)(param_1 + 0x48);
    plVar3 = (longlong *)(lVar5 + 0x2078);
    lVar4 = lVar5 + 0x2088;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = lVar4;
    if (*(int *)(lVar5 + 0x20a0) != 0) {
      FUN_1449c0562(&local_50);
      iVar9 = *(int *)(lVar5 + 0x20a0);
    }
    local_60 = local_40;
    uVar6 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar8 = local_60._4_4_;
    local_78 = plVar3;
    if ((local_60._4_4_ != iVar9) || (local_60 = uVar6, local_48 != lVar4)) {
      do {
        local_60 = uVar6;
        (*DAT_14ca79350)(**(undefined8 **)(param_1 + 0x48),
                         *(undefined8 *)
                          (*(longlong *)(*local_78 + 8 + (longlong)iVar8 * 0x18) + 0x10),0);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar8 = local_60._4_4_;
        uVar6 = local_60;
      } while (local_78 != plVar3 || (local_68 != lVar4 || local_60._4_4_ != iVar9));
    }
    FUN_1473d0606(*(longlong *)(param_1 + 0x48) + 0x2078);
    FUN_1473cd364();
    local_78 = (longlong *)0x0;
    local_70 = local_70 & 0xffffffff00000000;
    FUN_14007658c(&DAT_14ca850c8,&local_78,7);
  }
  FUN_1473a3718(*(undefined8 *)(param_1 + 0x48));
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    FUN_1473a35f2(lVar4);
    FUN_1400020a8(lVar4);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar3 = DAT_14ca77fe0;
  DAT_14ca77fd8 = 0;
  if (DAT_14ca77fe0 != (longlong *)0x0) {
    DAT_14ca77fe0 = (longlong *)0x0;
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
  (*DAT_14ca79358)(*(undefined8 *)(param_1 + 0x20),0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,*(undefined8 *)(param_1 + 0x68),1);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,*(undefined8 *)(param_1 + 0x70),1);
  FUN_1473dd372();
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473be940 FUN_1473be940 body=163 status=ok
// SIG undefined FUN_1473be940(void)

void FUN_1473be940(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  int local_28;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)FUN_14047ac8c();
  local_28 = (*(int *)(puVar2 + 1) == 0) + 0x10;
  local_20[0] = 0;
  FUN_14125bce8(local_20,*puVar2,*(int *)(puVar2 + 1),0);
  FUN_1401aebe8(local_20,L"VulkanPSO.cache",0xf);
  lVar1 = *(longlong *)(*(longlong *)(DAT_14ca79348 + 0x48) + 0x25e8);
  FUN_1431a3798(lVar1,local_20,lVar1 + 0x98);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473be9e4 FUN_1473be9e4 body=71 status=ok
// SIG undefined FUN_1473be9e4(void)

void FUN_1473be9e4(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473aa816();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1473d0966();
      return;
    }
  }
  return;
}



// FUNCTION 1473bea2c FUN_1473bea2c body=50 status=ok
// SIG undefined FUN_1473bea2c(void)

void FUN_1473bea2c(void)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(DAT_14ca79348 + 0x48) + 0x25e8);
  cVar2 = FUN_144a61b4f();
  if (cVar2 != '\0') {
    FUN_14080c2b4();
  }
  FUN_1431a232c(uVar1);
  return;
}



// FUNCTION 1473bea5e FUN_1473bea5e body=487 status=ok
// SIG undefined FUN_1473bea5e(void)

void FUN_1473bea5e(undefined8 param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x69);
  FUN_14002049c(param_2,1);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    local_30 = (undefined8 *)param_2[10];
    local_28 = 0;
    FUN_1431b31ec();
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a369918;
    puVar4[2] = param_1;
    *(undefined1 *)(puVar4 + 3) = 1;
  }
  FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  FUN_14494c7ac(param_2,&local_30,1);
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  FUN_14178cb88(param_1,param_2);
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x69);
  FUN_14002049c(param_2,1);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    uVar3 = param_2[10];
    DAT_14ca77fd0 = DAT_14ca77fd0 + 1;
    FUN_1431ba77a(uVar3 + 0x498);
    if (DAT_14ca84ef4 == '\x01') {
      FUN_1431a9ed6(*(undefined8 *)(*(longlong *)(uVar3 + 0x120) + 0xef0),uVar3);
    }
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x28);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 4;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a369920;
    puVar4[2] = param_1;
    *(undefined1 *)(puVar4 + 3) = 1;
  }
  FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)&local_30 >> 8),uVar2) & 0xffffffff);
  FUN_14494c7ac(param_2,&local_30,1);
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bec48 FUN_1473bec48 body=98 status=ok
// SIG undefined FUN_1473bec48(void)

void FUN_1473bec48(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x60);
  if (lVar3 != param_2) {
    *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x60) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if (*(longlong **)(param_2 + 0x140) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473bec9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x140) + 0x20))();
    return;
  }
  return;
}



// FUNCTION 1473bed26 FUN_1473bed26 body=63 status=ok
// SIG undefined FUN_1473bed26(void)

undefined8 FUN_1473bed26(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20c8) + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  return *(undefined8 *)(*(longlong *)(lVar1 + 0x78) + 0x88);
}



// FUNCTION 1473bed66 FUN_1473bed66 body=147 status=ok
// SIG undefined FUN_1473bed66(void)

undefined8 FUN_1473bed66(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_3c8 [32];
  undefined4 local_3a8;
  undefined8 local_3a4;
  undefined8 uStack_39c;
  undefined8 local_394;
  undefined8 uStack_38c;
  undefined8 local_384;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined1 local_364 [4];
  undefined4 *local_360;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_368 = 0x3b9bb079;
  memset(local_364,0,0x344);
  local_360 = &local_3a8;
  local_3a8 = 0x3b9bdf5c;
  local_3a4 = 0;
  uStack_39c = 0;
  local_394 = 0;
  uStack_38c = 0;
  local_384 = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  (*DAT_14ca79370)(param_2,&local_368);
  if ((local_20 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return CONCAT44(uStack_374,uStack_378);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bee6a FUN_1473bee6a body=111 status=ok
// SIG undefined FUN_1473bee6a(void)

undefined8 * FUN_1473bee6a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  (*DAT_14ca79368)(0,&local_1c,0);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1473beeda(param_2,local_1c);
  (*DAT_14ca79368)(0,&local_1c,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473beeda FUN_1473beeda body=71 status=ok
// SIG undefined FUN_1473beeda(void)

void FUN_1473beeda(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473aa816();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1473d0966();
      return;
    }
  }
  return;
}



// FUNCTION 1473bef22 FUN_1473bef22 body=122 status=ok
// SIG undefined FUN_1473bef22(void)

undefined8 * FUN_1473bef22(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  (*DAT_14ca79388)(param_3,0,&local_24,0);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1473beeda(param_2,local_24);
  (*DAT_14ca79388)(param_3,0,&local_24,*param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bef9e FUN_1473bef9e body=129 status=ok
// SIG undefined FUN_1473bef9e(void)

longlong * FUN_1473bef9e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x25d8);
  if (lVar5 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x25d0);
    lVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1462684a4(param_2,iVar1);
      }
      FUN_140117a62((longlong)iVar1 * 0x10 + *param_2,uVar3);
      lVar4 = lVar4 + 8;
    } while (lVar5 * 8 != lVar4);
  }
  return param_2;
}



// FUNCTION 1473bf020 FUN_1473bf020 body=25 status=ok
// SIG undefined FUN_1473bf020(void)

undefined8 FUN_1473bf020(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  return *(undefined8 *)(lVar1 + 0x98);
}



// FUNCTION 1473bf03a FUN_1473bf03a body=24 status=ok
// SIG undefined FUN_1473bf03a(void)

undefined4 FUN_1473bf03a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  return *(undefined4 *)(lVar1 + 0xa8);
}



// FUNCTION 1473bf052 FUN_1473bf052 body=64 status=ok
// SIG undefined FUN_1473bf052(void)

undefined8 * FUN_1473bf052(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_3 + 0x30))(param_3);
  uVar2 = FUN_1473d66ae(lVar1);
  *param_2 = uVar2;
  uVar2 = FUN_1473d66e8(lVar1);
  param_2[1] = uVar2;
  param_2[2] = (ulonglong)*(uint *)(lVar1 + 0xb0);
  return param_2;
}



// FUNCTION 1473bf092 FUN_1473bf092 body=145 status=ok
// SIG undefined FUN_1473bf092(void)

undefined8 * FUN_1473bf092(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (**(code **)(*param_3 + 0x30))(param_3);
  puVar4 = (undefined8 *)(**(code **)(*param_3 + 8))(param_3);
  param_2[6] = 0;
  lVar1 = *(longlong *)(lVar3 + 0x78);
  *param_2 = *(undefined8 *)(lVar1 + 0x10);
  param_2[1] = *(undefined8 *)(lVar1 + 0x18);
  *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(lVar3 + 0xa8);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)((longlong)puVar4 + 0x24);
  *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(puVar4 + 5);
  *(uint *)(param_2 + 6) = (uint)*(ushort *)((longlong)puVar4 + 0x2c);
  param_2[7] = *puVar4;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar3 + 0x100);
  uVar2 = FUN_14739b90c(lVar3);
  *(undefined4 *)(param_2 + 4) = uVar2;
  *(uint *)(param_2 + 3) = (uint)*(byte *)(puVar4 + 6);
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  return param_2;
}



// FUNCTION 1473bf124 FUN_1473bf124 body=55 status=ok
// SIG undefined FUN_1473bf124(void)

undefined8 * FUN_1473bf124(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1473a7d76(param_3 + 0x50,*(undefined8 *)(param_1 + 0x48));
  *param_2 = uVar1;
  param_2[1] = (ulonglong)*(uint *)(param_3 + 0x60);
  param_2[2] = (ulonglong)*(uint *)(param_3 + 0x5c);
  return param_2;
}



// FUNCTION 1473bf15c FUN_1473bf15c body=93 status=ok
// SIG undefined FUN_1473bf15c(void)

void FUN_1473bf15c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20c8) + 0x150);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_14739859c(lVar1,0,0);
  }
  FUN_1473bf1ba(*(undefined8 *)(*(longlong *)(lVar1 + 0x78) + 0x88),param_2,param_3,param_4);
  return;
}



// FUNCTION 1473bf1ba FUN_1473bf1ba body=185 status=ok
// SIG undefined FUN_1473bf1ba(void)

void FUN_1473bf1ba(undefined8 param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_178 [56];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_140 = 0;
  local_138 = 0x100000000;
  local_70 = 0;
  local_68 = 0x200000000;
  local_28 = 0;
  local_20 = 0x200000000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_188 = in_stack_00000028;
  FUN_147396818(local_178);
  FUN_147396ca4(local_178,param_1);
  FUN_1473945b6(local_178);
  if ((local_18 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bf274 FUN_1473bf274 body=67 status=ok
// SIG undefined FUN_1473bf274(void)

void FUN_1473bf274(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1473984ce(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20c8) + 0x150));
  FUN_1473bf1ba(*(undefined8 *)(lVar1 + 0x88),param_2,param_3,param_4);
  return;
}



// FUNCTION 1473bf2b8 FUN_1473bf2b8 body=116 status=ok
// SIG undefined FUN_1473bf2b8(void)

void FUN_1473bf2b8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20c8);
  lVar2 = *(longlong *)(lVar1 + 0x178);
  *(undefined8 *)(lVar2 + 8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar1 = *(longlong *)(lVar1 + 0x170);
  FUN_1473c3e80(lVar1 + 8,1,1);
  FUN_1473c4056(lVar1 + 0x48,1,1);
  *(undefined1 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined1 *)(lVar1 + 0x1f8) = 1;
  *(undefined8 *)(lVar1 + 0x78) = 6;
  return;
}



// FUNCTION 1473bf3ea FUN_1473bf3ea body=338 status=ok
// SIG undefined FUN_1473bf3ea(void)

longlong *
FUN_1473bf3ea(longlong param_1,longlong *param_2,undefined1 param_3,ulonglong param_4,uint param_5,
             undefined1 param_6,undefined1 param_7,undefined8 param_8,undefined8 param_9,
             undefined4 *param_10,undefined8 param_11)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_8c;
  undefined4 local_88;
  ulonglong local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar2 = (byte)DAT_14c760da4 & 0x1f;
  local_58 = 0;
  uStack_50 = 0;
  uVar1 = *param_10;
  local_9c = param_10[1];
  uStack_98 = param_10[2];
  uStack_94 = param_10[3];
  uStack_90 = param_10[4];
  local_70 = FUN_1431edf91(param_9,0);
  local_76 = 0;
  local_a8 = param_9;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_78 = param_6;
  local_77 = param_7;
  local_88 = 0;
  local_68 = L"VulkanTexture2DFromResource";
  local_60 = 0;
  local_a0 = uVar1;
  local_8c = ~(-1 << bVar2);
  local_84 = param_4 & 0xffffffff | (ulonglong)param_5 << 0x20;
  local_75 = param_3;
  lVar3 = FUN_14001cc68(0x118,0x10);
  local_b8 = param_11;
  FUN_1473d6fe8(lVar3,*(undefined8 *)(param_1 + 0x48),&local_a8,param_8);
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bf53e FUN_1473bf53e body=366 status=ok
// SIG undefined FUN_1473bf53e(void)

longlong *
FUN_1473bf53e(longlong param_1,longlong *param_2,undefined1 param_3,ulonglong param_4,uint param_5,
             undefined2 param_6,undefined1 param_7,undefined1 param_8,undefined8 param_9,
             undefined8 param_10,undefined4 *param_11)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint local_a4;
  undefined4 local_a0;
  ulonglong local_9c;
  undefined2 local_94;
  undefined2 local_92;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined2 local_8c;
  undefined4 local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  bVar2 = (byte)DAT_14c760da4 & 0x1f;
  local_70 = 0;
  uStack_68 = 0;
  uVar1 = *param_11;
  local_b4 = param_11[1];
  uStack_b0 = param_11[2];
  uStack_ac = param_11[3];
  uStack_a8 = param_11[4];
  local_88 = FUN_1431edf91(param_10,0);
  local_8e = 1;
  local_c0 = param_10;
  local_8c = 0xff00;
  local_94 = 1;
  local_92 = param_6;
  local_90 = param_7;
  local_8f = param_8;
  local_a0 = 0;
  local_80 = L"VulkanTextureArrayFromResource";
  local_78 = 0;
  local_b8 = uVar1;
  local_a4 = ~(-1 << bVar2);
  local_9c = param_4 & 0xffffffff | (ulonglong)param_5 << 0x20;
  local_8d = param_3;
  lVar3 = FUN_14001cc68(0x118,0x10);
  local_e8 = &local_d8;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1473d6fe8(lVar3,*(undefined8 *)(param_1 + 0x48),&local_c0,param_9);
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bf6ae FUN_1473bf6ae body=374 status=ok
// SIG undefined FUN_1473bf6ae(void)

void FUN_1473bf6ae(longlong param_1,longlong *param_2,undefined1 param_3,ulonglong param_4,
                  undefined8 param_5,uint param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 *param_10)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  uint local_a4;
  undefined4 local_a0;
  ulonglong local_9c;
  undefined2 local_94;
  undefined2 local_92;
  undefined1 local_90;
  undefined1 local_8f;
  char local_8e;
  undefined1 local_8d;
  undefined2 local_8c;
  undefined4 local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  bVar2 = (byte)DAT_14c760da4 & 0x1f;
  uVar1 = *param_10;
  uVar3 = *(undefined8 *)(param_10 + 1);
  uVar4 = *(undefined8 *)(param_10 + 3);
  local_e8 = param_1;
  local_e0 = param_2;
  local_88 = FUN_1431edf91(param_9,0);
  local_c0 = param_9;
  local_8c = 0xff00;
  local_94 = 1;
  local_92 = (undefined2)param_6;
  local_90 = param_7;
  local_8f = 1;
  local_a0 = 0;
  local_80 = L"VulkanTextureCubeFromResource";
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_b8 = uVar1;
  local_b4 = uVar3;
  uStack_ac = uVar4;
  local_a4 = ~(-1 << bVar2);
  local_9c = param_4 << 0x20 | param_4 & 0xffffffff;
  local_8e = '\x04' - (param_6 < 2);
  local_8d = param_3;
  lVar5 = FUN_14001cc68(0x118,0x10);
  local_f8 = &local_d8;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1473d6fe8(lVar5,*(undefined8 *)(local_e8 + 0x48),&local_c0,param_8);
  *local_e0 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473bf826 FUN_1473bf826 body=51 status=ok
// SIG undefined FUN_1473bf826(void)

void FUN_1473bf826(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  if (((longlong *)*param_2 != (longlong *)0x0) && (*param_3 != 0)) {
    uVar1 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    FUN_1473d772e(uVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 1473bf85a FUN_1473bf85a body=376 status=ok
// SIG undefined FUN_1473bf85a(void)

longlong * FUN_1473bf85a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined2 *local_a0;
  int local_98;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined2 local_62;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined4 local_58;
  undefined2 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = *(undefined8 *)(*param_3 + 0x10);
  FUN_1400021e4(&local_a8,&local_90);
  FUN_144a882a8(&local_a0,&local_90,L"Alias");
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_a0;
  if (local_98 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_3 + 8))();
  local_5e = *(undefined1 *)((longlong)plVar1 + 0x32);
  local_90 = *plVar1;
  local_5d = *(undefined1 *)((longlong)plVar1 + 0x33);
  local_5c = *(undefined1 *)((longlong)plVar1 + 0x34);
  local_6c = *(undefined8 *)((longlong)plVar1 + 0x24);
  local_64 = *(undefined2 *)((longlong)plVar1 + 0x2c);
  local_62 = *(undefined2 *)((longlong)plVar1 + 0x2e);
  local_60 = (undefined1)plVar1[6];
  local_5f = *(undefined1 *)((longlong)plVar1 + 0x31);
  local_78 = (undefined4)plVar1[3];
  local_88 = plVar1[1];
  lStack_80 = plVar1[2];
  local_70 = (undefined4)plVar1[4];
  local_5b = *(undefined1 *)((longlong)plVar1 + 0x35);
  local_74 = *(undefined4 *)((longlong)plVar1 + 0x1c);
  local_58 = 0x70;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_50 = puVar3;
  lVar2 = FUN_14001cc68(0x118,0x10);
  FUN_1473d750e(lVar2,*(undefined8 *)(param_1 + 0x48),&local_90,param_3);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1473bf9d4 FUN_1473bf9d4 body=51 status=ok
// SIG undefined FUN_1473bf9d4(void)

longlong FUN_1473bf9d4(longlong param_1,undefined8 param_2)

{
  FUN_1473b531c();
  *(undefined8 *)(param_1 + 0x130) = param_2;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  return param_1;
}



// FUNCTION 1473bfa08 FUN_1473bfa08 body=89 status=ok
// SIG undefined FUN_1473bfa08(void)

void FUN_1473bfa08(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) < 0) {
    FUN_1473d0d94((longlong *)(param_1 + 0x138),0);
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_1473b5518(param_1);
  return;
}



// FUNCTION 1473bfa62 FUN_1473bfa62 body=429 status=ok
// SIG undefined FUN_1473bfa62(void)

void FUN_1473bfa62(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  short *psVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    uVar3 = param_3[1];
    lVar10 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x100);
    }
    iVar11 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & uVar3) * 4);
    if (iVar11 != -1) {
      lVar10 = *(longlong *)(param_1 + 0xc0);
      iVar12 = iVar11;
      do {
        if (*(uint *)(lVar10 + (longlong)iVar12 * 0x10) == uVar3) goto LAB_1473bfb19;
        iVar12 = *(int *)((longlong)iVar12 * 0x10 + lVar10 + 8);
      } while (iVar12 != -1);
    }
  }
  local_48 = param_3 + 1;
  local_40 = &local_4c;
  local_4c = 1;
  FUN_1473d0a1a((longlong *)(param_1 + 0xc0),local_34);
  goto LAB_1473bfb31;
  while (iVar11 = *(int *)(lVar9 + 8), iVar11 != -1) {
LAB_1473bfb19:
    lVar9 = lVar10 + (longlong)iVar11 * 0x10;
    if (*(uint *)(lVar10 + (longlong)iVar11 * 0x10) == uVar3) goto LAB_1473bfb2e;
  }
  lVar9 = 0;
LAB_1473bfb2e:
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
LAB_1473bfb31:
  if (*(int *)(param_1 + 0x118) <= (int)param_2) {
    FUN_1473bfc10((longlong *)(param_1 + 0x110),param_2 + 1);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x110) + (longlong)(int)param_2 * 0x18);
  iVar11 = (int)plVar1[1];
  *(uint *)(plVar1 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)plVar1 + 0xc) < iVar11 + 1U) {
    FUN_1473a9312(plVar1,iVar11);
  }
  lVar10 = *plVar1;
  *(undefined8 *)(lVar10 + 0x10 + (longlong)iVar11 * 0x18) = *(undefined8 *)(param_3 + 4);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar2 = (undefined4 *)(lVar10 + (longlong)iVar11 * 0x18);
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  uVar7 = (ulonglong)param_2;
  uVar3 = param_3[1];
  if (uVar3 < 0xb) {
    if ((0x40fU >> (uVar3 & 0x1f) & 1) == 0) {
      if ((0x1c0U >> (uVar3 & 0x1f) & 1) == 0) goto LAB_1473bfbdb;
      psVar8 = (short *)(uVar7 * 0x20 + param_1 + 0x1a);
    }
    else {
      psVar8 = (short *)(uVar7 * 0x20 + param_1 + 0x18);
    }
  }
  else {
LAB_1473bfbdb:
    if (uVar3 != 0x3b9d13f0) goto LAB_1473bfba1;
    psVar8 = (short *)(uVar7 * 0x20 + param_1 + 0x1c);
  }
  *psVar8 = *psVar8 + 1;
LAB_1473bfba1:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473bfc10 FUN_1473bfc10 body=114 status=ok
// SIG undefined FUN_1473bfc10(void)

void FUN_1473bfc10(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473d0b4c(param_1,iVar1);
    }
    FUN_1473d0b38((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1473d0be0(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473bfc84 FUN_1473bfc84 body=400 status=ok
// SIG undefined FUN_1473bfc84(void)

void FUN_1473bfc84(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x118);
  uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x124,4,iVar1);
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x110);
      uVar2 = (*(code *)PTR_FUN_14c75b148)
                        (*(undefined8 *)(lVar3 + lVar4),*(int *)(lVar3 + 8 + lVar4) * 0x18,0);
      *(undefined4 *)(lVar3 + 0x10 + lVar4) = uVar2;
      uVar2 = (*(code *)PTR_FUN_14c75b148)(*(longlong *)(param_1 + 0x110) + lVar4 + 0x10,4);
      *(undefined4 *)(param_1 + 0x120) = uVar2;
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  if (param_3 == 0) {
    lVar4 = 5;
  }
  else if (param_3 == 0x3b9d4e88) {
    lVar4 = 4;
  }
  else {
    if (param_3 != 1) goto LAB_1473bfde7;
    lVar4 = 1;
  }
  lVar3 = param_1 + 0x10;
  do {
    uVar2 = (*(code *)PTR_FUN_14c75b148)(lVar3,4,uVar2);
    *(undefined4 *)(param_1 + 0x120) = uVar2;
    uVar2 = (*(code *)PTR_FUN_14c75b148)(lVar3 + 4,4,uVar2);
    *(undefined4 *)(param_1 + 0x120) = uVar2;
    uVar2 = (*(code *)PTR_FUN_14c75b148)(lVar3 + 8,2,uVar2);
    *(undefined4 *)(param_1 + 0x120) = uVar2;
    uVar2 = (*(code *)PTR_FUN_14c75b148)(lVar3 + 10,2,uVar2);
    *(undefined4 *)(param_1 + 0x120) = uVar2;
    uVar2 = (*(code *)PTR_FUN_14c75b148)(lVar3 + 0xc,2,uVar2);
    *(undefined4 *)(param_1 + 0x120) = uVar2;
    uVar2 = (*(code *)PTR_FUN_14c75b148)
                      (*(undefined8 *)(lVar3 + -0x10),*(int *)(lVar3 + -8) << 2,uVar2);
    *(undefined4 *)(param_1 + 0x120) = uVar2;
    lVar3 = lVar3 + 0x20;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
LAB_1473bfde7:
  *(int *)(param_1 + 0x128) = param_3;
  uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x128,4,uVar2);
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  return;
}



// FUNCTION 1473bfe14 FUN_1473bfe14 body=1830 status=ok
// SIG undefined FUN_1473bfe14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473bfe14(longlong param_1)

{
  ulonglong uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint **ppuVar11;
  undefined *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  uint *puVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_398 [32];
  longlong local_378;
  int local_370;
  uint local_36c;
  uint *local_368;
  undefined8 local_360;
  longlong local_358;
  uint local_350;
  int iStack_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca787f0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca78868) && (FUN_144b3d300(&DAT_14ca78868), DAT_14ca78868 == -1)) {
    _DAT_14ca78838 = 0;
    _DAT_14ca78840 = 0;
    DAT_14ca78818 = 0;
    _DAT_14ca78820 = 0;
    _DAT_14ca78844 = 0xffffffff00000080;
    DAT_14ca7884c = 0;
    DAT_14ca78858 = (undefined *)0x0;
    DAT_14ca78860 = 0;
    atexit(FUN_1431af39d);
    _Init_thread_footer(&DAT_14ca78868);
  }
  puVar2 = (uint *)(param_1 + 0xc0);
  local_378 = param_1;
  if (*(int *)(param_1 + 0xf4) < *(int *)(param_1 + 200)) {
    FUN_1473d0c42(puVar2);
    uVar17 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xf4);
    if (1 < (int)uVar17) {
      puVar20 = *(uint **)puVar2;
      memset(&local_358,0,0x2f0);
      local_360 = puVar20 + ((ulonglong)uVar17 * 2 + -2) * 2;
      local_368 = puVar20;
      fVar29 = logf((float)(int)uVar17);
      local_358 = CONCAT44(local_358._4_4_,(int)(longlong)(fVar29 + fVar29));
      ppuVar11 = &local_368;
      do {
        puVar14 = *ppuVar11;
        puVar15 = ppuVar11[1];
        iVar22 = *(int *)(ppuVar11 + 2);
        iVar25 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar14) >> 4);
        uVar17 = iVar25 + 1;
        puVar20 = puVar15;
        puVar16 = puVar14;
        if (iVar22 != 0) {
LAB_1473bff1e:
          if (8 < (int)uVar17) {
            uVar6 = *(undefined8 *)(puVar14 + (ulonglong)(uVar17 >> 1) * 4);
            uVar7 = *(undefined8 *)(puVar14 + (ulonglong)(uVar17 >> 1) * 4 + 2);
            uVar8 = *(undefined8 *)(puVar14 + 2);
            *(undefined8 *)(puVar14 + (ulonglong)(uVar17 >> 1) * 4) = *(undefined8 *)puVar14;
            *(undefined8 *)(puVar14 + (ulonglong)(uVar17 >> 1) * 4 + 2) = uVar8;
            *(undefined8 *)puVar14 = uVar6;
            *(undefined8 *)(puVar14 + 2) = uVar7;
            puVar26 = puVar20 + 4;
            puVar13 = puVar14;
            do {
              puVar9 = puVar13 + 4;
              puVar21 = puVar13 + 4;
              do {
                puVar13 = puVar21;
                puVar27 = puVar9;
                if (puVar20 < puVar13) break;
                puVar9 = puVar27 + 4;
                puVar21 = puVar13 + 4;
              } while (*puVar13 <= *puVar14);
              puVar9 = puVar26 + -8;
              do {
                puVar21 = puVar26;
                puVar18 = puVar9;
                puVar26 = puVar21 + -4;
                if (puVar26 <= puVar14) break;
                puVar9 = puVar18 + -4;
              } while (*puVar14 <= *puVar26);
              if (puVar26 < puVar13) goto LAB_1473bffc8;
              uVar6 = *(undefined8 *)puVar13;
              uVar7 = *(undefined8 *)(puVar13 + 2);
              uVar8 = *(undefined8 *)(puVar21 + -2);
              *(undefined8 *)puVar13 = *(undefined8 *)puVar26;
              *(undefined8 *)(puVar13 + 2) = uVar8;
              *(undefined8 *)puVar26 = uVar6;
              *(undefined8 *)(puVar21 + -2) = uVar7;
            } while( true );
          }
          if (puVar14 < puVar20) {
            do {
              puVar15 = puVar14;
              if (puVar14 + 4 <= puVar20) {
                uVar17 = *puVar14;
                puVar16 = puVar14 + 4;
                do {
                  uVar5 = *puVar16;
                  bVar28 = uVar17 < uVar5;
                  if (uVar17 <= uVar5) {
                    uVar17 = uVar5;
                  }
                  if (bVar28) {
                    puVar15 = puVar16;
                  }
                  puVar16 = puVar16 + 4;
                } while (puVar16 <= puVar20);
              }
              local_68 = *(int **)puVar15;
              uStack_60 = *(longlong *)(puVar15 + 2);
              uVar7 = local_68;
              uVar8 = uStack_60;
              uVar6 = *(undefined8 *)(puVar20 + 2);
              *(undefined8 *)puVar15 = *(undefined8 *)puVar20;
              *(undefined8 *)(puVar15 + 2) = uVar6;
              local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
              *puVar20 = (uint)local_68;
              puVar20[1] = local_68._4_4_;
              puVar20[2] = (uint)uStack_60;
              puVar20[3] = uStack_60._4_4_;
              puVar20 = puVar20 + -4;
              local_68 = (int *)uVar7;
              uStack_60 = uVar8;
            } while (puVar14 < puVar20);
          }
          goto LAB_1473c0287;
        }
LAB_1473c0072:
        if (uVar17 != 0) {
          iVar22 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
          iVar25 = iVar22;
joined_r0x0001473c0099:
          do {
            iVar24 = iVar22 * 2 + 1;
            if (iVar24 < (int)uVar17) {
              iVar23 = iVar22 * 2 + 2;
              if ((iVar23 < (int)uVar17) &&
                 (puVar14[(longlong)iVar24 * 4] <= puVar14[(longlong)iVar23 * 4])) {
                iVar24 = iVar23;
              }
              if (puVar14[(longlong)iVar22 * 4] < puVar14[(longlong)iVar24 * 4]) {
                puVar20 = puVar14 + (longlong)iVar22 * 4;
                puVar15 = puVar14 + (longlong)iVar24 * 4;
                local_68 = *(int **)puVar20;
                uStack_60 = *(longlong *)(puVar20 + 2);
                uVar7 = local_68;
                uVar8 = uStack_60;
                uVar6 = *(undefined8 *)(puVar15 + 2);
                *(undefined8 *)puVar20 = *(undefined8 *)puVar15;
                *(undefined8 *)(puVar20 + 2) = uVar6;
                local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
                uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
                *puVar15 = (uint)local_68;
                puVar15[1] = local_68._4_4_;
                puVar15[2] = (uint)uStack_60;
                puVar15[3] = uStack_60._4_4_;
                iVar22 = iVar24;
                local_68 = (int *)uVar7;
                uStack_60 = uVar8;
                goto joined_r0x0001473c0099;
              }
            }
            bVar28 = iVar25 != 0;
            iVar22 = iVar25 + -1;
            iVar25 = iVar22;
          } while (bVar28);
          if (1 < (int)uVar17) {
            uVar19 = (ulonglong)uVar17 - 1;
            local_68 = *(int **)puVar14;
            uStack_60 = *(longlong *)(puVar14 + 2);
            uVar7 = local_68;
            uVar8 = uStack_60;
            uVar6 = *(undefined8 *)(puVar14 + uVar19 * 4 + 2);
            *(undefined8 *)puVar14 = *(undefined8 *)(puVar14 + uVar19 * 4);
            *(undefined8 *)(puVar14 + 2) = uVar6;
            local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
            puVar20 = puVar14 + uVar19 * 4;
            *puVar20 = (uint)local_68;
            puVar20[1] = local_68._4_4_;
            puVar20[2] = (uint)uStack_60;
            puVar20[3] = uStack_60._4_4_;
            local_68 = (int *)uVar7;
            uStack_60 = uVar8;
            if (uVar17 != 2) {
              do {
                iVar22 = 0;
                iVar24 = 1;
                iVar25 = 0;
                do {
                  iVar22 = iVar22 + 2;
                  iVar23 = iVar24;
                  if (((longlong)iVar22 < (longlong)uVar19) &&
                     (puVar14[(longlong)iVar24 * 4] <= puVar14[(longlong)iVar22 * 4])) {
                    iVar23 = iVar22;
                  }
                  if (puVar14[(longlong)iVar23 * 4] <= puVar14[(longlong)iVar25 * 4]) break;
                  puVar20 = puVar14 + (longlong)iVar25 * 4;
                  puVar15 = puVar14 + (longlong)iVar23 * 4;
                  uVar6 = *(undefined8 *)puVar20;
                  uVar7 = *(undefined8 *)(puVar20 + 2);
                  uVar8 = *(undefined8 *)(puVar15 + 2);
                  *(undefined8 *)puVar20 = *(undefined8 *)puVar15;
                  *(undefined8 *)(puVar20 + 2) = uVar8;
                  *(undefined8 *)puVar15 = uVar6;
                  *(undefined8 *)(puVar15 + 2) = uVar7;
                  iVar22 = iVar23 * 2;
                  iVar24 = iVar23 * 2 + 1;
                  iVar25 = iVar23;
                } while ((longlong)iVar24 < (longlong)uVar19);
                uVar1 = uVar19 - 1;
                local_68 = *(int **)puVar14;
                uStack_60 = *(longlong *)(puVar14 + 2);
                uVar7 = local_68;
                uVar8 = uStack_60;
                uVar6 = *(undefined8 *)(puVar14 + uVar1 * 4 + 2);
                *(undefined8 *)puVar14 = *(undefined8 *)(puVar14 + uVar1 * 4);
                *(undefined8 *)(puVar14 + 2) = uVar6;
                local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
                uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
                puVar20 = puVar14 + uVar1 * 4;
                *puVar20 = (uint)local_68;
                puVar20[1] = local_68._4_4_;
                puVar20[2] = (uint)uStack_60;
                puVar20[3] = uStack_60._4_4_;
                bVar28 = 2 < uVar19;
                uVar19 = uVar1;
                local_68 = (int *)uVar7;
                uStack_60 = uVar8;
              } while (bVar28);
            }
          }
        }
LAB_1473c0287:
        ppuVar11 = ppuVar11 + -3;
        param_1 = local_378;
      } while (&local_368 <= ppuVar11);
    }
  }
  FUN_1473c25bc(puVar2);
  uVar17 = 0;
  local_36c = 0;
  lVar3 = param_1 + 0xd0;
  local_68 = (int *)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar22 = 0;
  uStack_60 = lVar3;
  if (*(int *)(param_1 + 0xe8) != 0) {
    FUN_1449c0562(&local_68);
    iVar22 = *(int *)(param_1 + 0xe8);
  }
  local_350 = local_58;
  iStack_34c = iStack_54;
  local_348 = local_50;
  local_344 = local_4c;
  local_360 = (uint *)local_68;
  local_358 = uStack_60;
  local_368 = puVar2;
  if ((iStack_54 != iVar22) || (uStack_60 != lVar3)) {
    uVar17 = 0;
    do {
      uVar17 = (*(code *)PTR_FUN_14c75b148)
                         (*(longlong *)local_368 + (longlong)iStack_34c * 0x10 + 4,4,uVar17);
      local_350 = local_350 & ~local_360._4_4_;
      local_36c = uVar17;
      FUN_1449c0562(&local_360);
    } while (local_368 != puVar2 || (local_358 != lVar3 || iStack_34c != iVar22));
  }
  lVar3 = local_378;
  if (DAT_14ca78820 != DAT_14ca7884c) {
    puVar12 = &DAT_14ca78850;
    if (DAT_14ca78858 != (undefined *)0x0) {
      puVar12 = DAT_14ca78858;
    }
    iVar22 = *(int *)(puVar12 + (ulonglong)(DAT_14ca78860 - 1U & uVar17) * 4);
    while (iVar22 != -1) {
      lVar4 = DAT_14ca78818 + (longlong)iVar22 * 0x10;
      if (*(uint *)(DAT_14ca78818 + (longlong)iVar22 * 0x10) == uVar17) {
        if ((undefined4 *)(lVar4 + 4) != (undefined4 *)0x0 && lVar4 != 0) {
          uVar10 = *(undefined4 *)(lVar4 + 4);
          goto LAB_1473c041c;
        }
        break;
      }
      iVar22 = *(int *)(lVar4 + 8);
    }
  }
  local_360 = (uint *)&local_370;
  local_370 = DAT_14c760c98;
  local_368 = &local_36c;
  DAT_14c760c98 = DAT_14c760c98 + 1;
  FUN_1409a12da(&DAT_14ca78818,&local_68,&local_368,0);
  uVar10 = *(undefined4 *)(DAT_14ca78818 + 4 + (longlong)(int)(uint)local_68 * 0x10);
LAB_1473c041c:
  *(undefined4 *)(lVar3 + 0x124) = uVar10;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca787f0);
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1473bffc8:
  local_68 = *(int **)puVar14;
  uStack_60 = *(longlong *)(puVar14 + 2);
  uVar7 = local_68;
  uVar8 = uStack_60;
  uVar6 = *(undefined8 *)(puVar21 + -2);
  *(undefined8 *)puVar14 = *(undefined8 *)puVar26;
  *(undefined8 *)(puVar14 + 2) = uVar6;
  local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
  *puVar26 = (uint)local_68;
  puVar21[-3] = local_68._4_4_;
  puVar21[-2] = (uint)uStack_60;
  puVar21[-1] = uStack_60._4_4_;
  iVar22 = iVar22 + -1;
  puVar21 = puVar21 + -8;
  local_68 = (int *)uVar7;
  uStack_60 = uVar8;
  if ((longlong)puVar18 - (longlong)puVar16 < (longlong)puVar15 - (longlong)puVar27) {
    if (puVar13 < puVar20) {
      *ppuVar11 = puVar13;
      ppuVar11[1] = puVar20;
      *(int *)(ppuVar11 + 2) = iVar22;
      ppuVar11 = ppuVar11 + 3;
    }
    puVar15 = puVar18;
    puVar27 = puVar14;
    if (puVar26 <= puVar14 + 4) goto LAB_1473c0287;
  }
  else {
    if (puVar14 + 4 < puVar26) {
      *ppuVar11 = puVar14;
      ppuVar11[1] = puVar21;
      *(int *)(ppuVar11 + 2) = iVar22;
      ppuVar11 = ppuVar11 + 3;
    }
    puVar14 = puVar13;
    puVar21 = puVar20;
    puVar15 = puVar20;
    if (puVar20 <= puVar13) goto LAB_1473c0287;
  }
  iVar25 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar27) >> 4);
  uVar17 = iVar25 + 1;
  puVar20 = puVar21;
  puVar16 = puVar27;
  if (iVar22 == 0) goto LAB_1473c0072;
  goto LAB_1473bff1e;
}



// FUNCTION 1473c053c FUN_1473c053c body=740 status=ok
// SIG undefined FUN_1473c053c(void)

void FUN_1473c053c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)(param_1 + 0x118);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  plVar1 = (longlong *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) != iVar2) {
    FUN_1473d0d94(plVar1);
    iVar2 = *(int *)(param_1 + 0x118);
  }
  if (DAT_14c760db4 < 2) {
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
    if (*(int *)(param_1 + 0x154) != iVar2) {
      FUN_14480809c(param_1 + 0x148);
      iVar2 = *(int *)(param_1 + 0x118);
    }
  }
  if (iVar2 != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x110);
    lVar4 = (longlong)iVar2 * 0x18;
    do {
      iVar2 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
        FUN_1473d0df4(plVar1,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 8 + *plVar1);
      if (DAT_14c760db4 < 2) {
        iVar2 = *(int *)(param_1 + 0x150);
        *(uint *)(param_1 + 0x150) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x154) < iVar2 + 1U) {
          FUN_1447808da((longlong *)(param_1 + 0x148),iVar2);
        }
        piVar6 = (int *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x148));
      }
      else {
        piVar6 = (int *)0x0;
      }
      iVar2 = FUN_1473d0e7a(param_2,*(undefined4 *)(puVar7 + 2),puVar7);
      if ((iVar2 == -1) || (lVar3 = (longlong)iVar2 * 0x30 + *param_2, lVar3 == 0)) {
        local_98 = 0x20;
        local_94 = 0;
        uStack_8c = 0;
        local_84 = *(undefined4 *)(puVar7 + 1);
        local_80 = *puVar7;
        iVar2 = (*DAT_14ca79390)(**(undefined8 **)(param_1 + 0x130),&local_98,0,puVar5);
        if (iVar2 != 0) {
          FUN_1431b4552(iVar2,
                        "VulkanRHI::vkCreateDescriptorSetLayout(Device->GetInstanceHandle(), &DescriptorLayoutInfo, VULKAN_CPU_ALLOCATOR, LayoutHandle)"
                        ,".\\Runtime/VulkanRHI/Private/VulkanRHI.cpp",0x7a0);
        }
        if (piVar6 == (int *)0x0) {
          local_a8 = *puVar5;
          local_a0 = 0;
        }
        else {
          LOCK();
          UNLOCK();
          iVar2 = (int)DAT_14ca78758;
          DAT_14ca78758 = DAT_14ca78758 + 1;
          *piVar6 = iVar2 + 1;
          local_a8 = *puVar5;
          local_a0 = *piVar6;
        }
        local_70 = &local_a8;
        local_78 = puVar7;
        FUN_1473d0eea(param_2,local_64,&local_78);
      }
      else {
        *puVar5 = *(undefined8 *)(lVar3 + 0x18);
        if (piVar6 != (int *)0x0) {
          *piVar6 = *(int *)(lVar3 + 0x20);
        }
      }
      puVar7 = puVar7 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  if (*(int *)(param_1 + 0x124) == -1) {
    FUN_1473bfe14(param_1);
  }
  *(undefined4 *)(param_1 + 0x158) = 0x22;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x138);
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473c0822 FUN_1473c0822 body=106 status=ok
// SIG undefined FUN_1473c0822(void)

undefined8 FUN_1473c0822(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (DAT_14c760c8c == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (((*(byte *)(&DAT_14ca814c8 + (ulonglong)DAT_14ca85550 * 0xf) & 4) != 0) &&
       (1 < DAT_14c760db4)) {
      uVar1 = FUN_14001cc68(0x38,0x10);
      uVar2 = FUN_1473a4d4c(*(undefined8 *)(param_1 + 0x48));
      FUN_1473d85b2(uVar1,uVar2);
    }
  }
  return uVar1;
}



// FUNCTION 1473c088c FUN_1473c088c body=499 status=ok
// SIG undefined FUN_1473c088c(void)

void FUN_1473c088c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [34];
  undefined8 local_96;
  undefined4 local_8e;
  undefined2 local_8a;
  undefined2 local_88 [2];
  undefined7 local_84;
  undefined4 uStack_7d;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined2 uStack_4c;
  undefined2 local_4a [29];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_58 = 0;
  uStack_54 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (DAT_14ca84df4 != 0x13b5) {
    if ((longlong *)*param_2 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    local_78 = (ulonglong)uVar3;
  }
  uVar4 = 0;
  uVar7 = 0;
  if (param_2[1] != 0) {
    uVar7 = *(undefined4 *)(param_2[1] + 0x88);
  }
  local_78 = CONCAT44(uVar7,(undefined4)local_78);
  if (param_2[2] != 0) {
    uVar4 = *(undefined4 *)(param_2[2] + 0x88);
  }
  uVar5 = 0;
  uVar7 = 0;
  if (param_2[5] != 0) {
    uVar7 = *(undefined4 *)(param_2[5] + 0x88);
  }
  uStack_70 = CONCAT44(uVar7,uVar4);
  if (param_2[3] != 0) {
    uVar5 = *(undefined4 *)(param_2[3] + 0x88);
  }
  if (param_2[4] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_2[4] + 0x88);
  }
  local_68 = CONCAT44(uVar7,uVar5);
  lVar6 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_54 + lVar6 + 4) = 0x100;
    *(undefined2 *)((longlong)&uStack_4c + lVar6) = 1;
    *(undefined1 *)((longlong)local_4a + lVar6) = 0xf;
    lVar6 = lVar6 + 7;
  } while (lVar6 != 0x3e);
  plVar1 = (longlong *)param_2[6];
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 8))(plVar1,local_4a);
    if (cVar2 != '\0') {
      local_60 = FUN_144a86616(local_4a);
    }
  }
  local_88[0] = 0;
  local_84 = 0;
  uStack_7d = 0;
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 8))(plVar1,local_88);
    if (cVar2 != '\0') {
      local_5c = FUN_144a74281(local_88);
    }
  }
  local_96 = 0x7000101;
  local_8e = 7;
  local_8a = 0xffff;
  plVar1 = (longlong *)param_2[8];
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 8))(plVar1,&local_96);
    if (cVar2 != '\0') {
      uStack_58 = FUN_144a85f5b(&local_96);
    }
  }
  uStack_54 = CONCAT44((uint)*(byte *)(param_2 + 0x19) << 0x11 |
                       (uint)*(byte *)((longlong)param_2 + 0xc5) << 0x10 |
                       (*(uint *)(param_2 + 0xb) & 0xff) << 8 |
                       (uint)*(byte *)((longlong)param_2 + 0xc9),(undefined4)uStack_54);
  FUN_1447addd0(&local_78,0x2c);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c0a80 FUN_1473c0a80 body=313 status=ok
// SIG undefined FUN_1473c0a80(void)

void FUN_1473c0a80(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  uint local_68 [4];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(longlong *)(param_2 + 0xd0);
  if (local_70 == 0) {
    local_70 = FUN_1473c088c(param_1,param_2);
  }
  local_68[3] = 0;
  local_68[0] = *(uint *)(param_2 + 0x5c);
  local_68[1] = (uint)*(undefined8 *)(param_2 + 0x60);
  local_68[2] = (uint)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
  uStack_58 = *(undefined8 *)(param_2 + 0x68);
  uStack_50 = *(undefined8 *)(param_2 + 0x70);
  uStack_48 = *(undefined8 *)(param_2 + 0x78);
  local_40 = *(undefined8 *)(param_2 + 0x80);
  uStack_38 = *(undefined8 *)(param_2 + 0x88);
  local_30 = *(undefined8 *)(param_2 + 0x90);
  uStack_28 = *(undefined8 *)(param_2 + 0x98);
  local_20 = *(undefined8 *)(param_2 + 0xa0);
  uStack_18 = (ulonglong)
              CONCAT16(*(undefined1 *)(param_2 + 0xc4),
                       CONCAT15(*(undefined1 *)(param_2 + 199),
                                CONCAT14(*(undefined1 *)(param_2 + 0xc6),
                                         *(undefined4 *)(param_2 + 0xc0))));
  lVar2 = 3;
  do {
    uVar1 = local_68[lVar2 * 2];
    *(uint *)(&local_70 + lVar2) = *(uint *)(&local_70 + lVar2) & 0x2000010;
    *(undefined4 *)((longlong)&local_70 + lVar2 * 8 + 4) = 0;
    local_68[lVar2 * 2] = uVar1 & 0x2000010;
    local_68[lVar2 * 2 + 1] = 0;
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0xb);
  FUN_1447addd0(&local_70,0x60);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c0bba FUN_1473c0bba body=444 status=ok
// SIG undefined FUN_1473c0bba(void)

undefined8 FUN_1473c0bba(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  bVar2 = true;
  do {
    bVar1 = bVar2;
    if (param_2[lVar5 + 9] != param_3[lVar5 + 9]) {
      return 0;
    }
    lVar5 = 1;
    bVar2 = false;
  } while (bVar1);
  if ((((*(int *)(param_2 + 0xb) == *(int *)(param_3 + 0xb)) &&
       (*(char *)((longlong)param_2 + 0xc5) == *(char *)((longlong)param_3 + 0xc5))) &&
      (*(char *)((longlong)param_2 + 0xc6) == *(char *)((longlong)param_3 + 0xc6))) &&
     (((*(char *)((longlong)param_2 + 0xc9) == *(char *)((longlong)param_3 + 0xc9) &&
       (*(char *)((longlong)param_2 + 199) == *(char *)((longlong)param_3 + 199))) &&
      ((*(char *)(param_2 + 0x19) == *(char *)(param_3 + 0x19) &&
       (*(int *)((longlong)param_2 + 0x5c) == *(int *)((longlong)param_3 + 0x5c))))))) {
    lVar5 = 0x60;
    do {
      if (*(char *)((longlong)param_2 + lVar5) != *(char *)((longlong)param_3 + lVar5)) {
        return 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x68);
    lVar5 = 0xd;
    do {
      if (((*(uint *)(param_3 + lVar5) ^ *(uint *)(param_2 + lVar5)) & 0x2000010) != 0) {
        return 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x15);
    if ((((*(char *)(param_2 + 0x15) == *(char *)(param_3 + 0x15)) &&
         (((*(uint *)(param_2 + 0x16) ^ *(uint *)(param_3 + 0x16)) & 0x2000014) == 0)) &&
        ((((*(short *)(param_2 + 0x18) == *(short *)(param_3 + 0x18) &&
           (((*(char *)((longlong)param_2 + 0xc2) == *(char *)((longlong)param_3 + 0xc2) &&
             (*(char *)((longlong)param_2 + 0xc3) == *(char *)((longlong)param_3 + 0xc3))) &&
            (param_2[0x1a] == param_3[0x1a])))) &&
          (((*(char *)((longlong)param_2 + 0xc4) == *(char *)((longlong)param_3 + 0xc4) &&
            (param_2[1] == param_3[1])) && (param_2[2] == param_3[2])))) &&
         ((param_2[3] == param_3[3] && (param_2[4] == param_3[4])))))) &&
       ((param_2[5] == param_3[5] &&
        (((cVar3 = FUN_1431af3cc(*param_2,*param_3), cVar3 != '\0' &&
          (cVar3 = FUN_1431af47d(param_2[6],param_3[6]), cVar3 != '\0')) &&
         (cVar3 = FUN_1431af535(param_2[7],param_3[7]), cVar3 != '\0')))))) {
      uVar4 = FUN_1431af5fc(param_2[8],param_3[8]);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1473c0d76 FUN_1473c0d76 body=262 status=ok
// SIG undefined FUN_1473c0d76(void)

void FUN_1473c0d76(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_3;
  *param_3 = 0;
  uVar2 = (undefined4)param_3[1];
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_38 = lVar4;
  local_30 = uVar2;
  local_2c = uVar3;
  if (*(char *)((longlong)param_2 + 100) == '\0') {
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar5 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar5 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar5;
    param_2[6] = (ulonglong)(puVar5 + 1);
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14a369928;
    puVar5[2] = lVar4;
    *(undefined4 *)(puVar5 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar3;
  }
  else {
    FUN_1431b3672(&local_38);
    if (lVar4 != 0) {
      FUN_1400020a8(lVar4);
    }
  }
  FUN_14494c7ac(param_2,&local_40,1);
  if (local_40 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_40 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_40)(local_40,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c0e7e FUN_1473c0e7e body=121 status=ok
// SIG undefined FUN_1473c0e7e(void)

longlong *
FUN_1473c0e7e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14001cc68(0x30,0x10);
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  FUN_1431af690(lVar1,param_3);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c0ef8 FUN_1473c0ef8 body=81 status=ok
// SIG undefined FUN_1473c0ef8(void)

undefined8 * FUN_1473c0ef8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3601a0;
  if (param_1[3] != 0) {
    FUN_1473a8b5a(param_1[2] + 0x590,5);
    param_1[3] = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c0f4a FUN_1473c0f4a body=38 status=ok
// SIG undefined FUN_1473c0f4a(void)

undefined8 FUN_1473c0f4a(undefined8 param_1,int param_2)

{
  FUN_1431a20dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c0f70 FUN_1473c0f70 body=45 status=ok
// SIG undefined FUN_1473c0f70(void)

longlong FUN_1473c0f70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1431a20dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c0f9e FUN_1473c0f9e body=38 status=ok
// SIG undefined FUN_1473c0f9e(void)

undefined8 FUN_1473c0f9e(undefined8 param_1,int param_2)

{
  FUN_1431a21d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c0fee FUN_1473c0fee body=38 status=ok
// SIG undefined FUN_1473c0fee(void)

undefined8 FUN_1473c0fee(undefined8 param_1,int param_2)

{
  FUN_1473d1484();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c1014 FUN_1473c1014 body=38 status=ok
// SIG undefined FUN_1473c1014(void)

undefined8 FUN_1473c1014(undefined8 param_1,int param_2)

{
  FUN_1473d14d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c103a FUN_1473c103a body=38 status=ok
// SIG undefined FUN_1473c103a(void)

undefined8 FUN_1473c103a(undefined8 param_1,int param_2)

{
  FUN_1431af886();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c1060 FUN_1473c1060 body=38 status=ok
// SIG undefined FUN_1473c1060(void)

undefined8 FUN_1473c1060(undefined8 param_1,int param_2)

{
  FUN_1431a62da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c1086 FUN_1473c1086 body=38 status=ok
// SIG undefined FUN_1473c1086(void)

undefined8 FUN_1473c1086(undefined8 param_1,int param_2)

{
  FUN_1473b85c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c10ac FUN_1473c10ac body=38 status=ok
// SIG undefined FUN_1473c10ac(void)

undefined8 FUN_1473c10ac(undefined8 param_1,int param_2)

{
  FUN_1431a7164();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c10da FUN_1473c10da body=38 status=ok
// SIG undefined FUN_1473c10da(void)

undefined8 FUN_1473c10da(undefined8 param_1,int param_2)

{
  FUN_1431a74c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c1106 FUN_1473c1106 body=38 status=ok
// SIG undefined FUN_1473c1106(void)

undefined8 FUN_1473c1106(undefined8 param_1,int param_2)

{
  FUN_1473b926a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c112c FUN_1473c112c body=38 status=ok
// SIG undefined FUN_1473c112c(void)

undefined8 FUN_1473c112c(undefined8 param_1,int param_2)

{
  FUN_1473ba232();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c1152 FUN_1473c1152 body=38 status=ok
// SIG undefined FUN_1473c1152(void)

undefined8 FUN_1473c1152(undefined8 param_1,int param_2)

{
  FUN_1473d153a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c1178 FUN_1473c1178 body=38 status=ok
// SIG undefined FUN_1473c1178(void)

undefined8 FUN_1473c1178(undefined8 param_1,int param_2)

{
  FUN_1473d153a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c119e FUN_1473c119e body=38 status=ok
// SIG undefined FUN_1473c119e(void)

undefined8 FUN_1473c119e(undefined8 param_1,int param_2)

{
  FUN_1473be618();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c11d2 FUN_1473c11d2 body=31 status=ok
// SIG undefined FUN_1473c11d2(void)

void FUN_1473c11d2(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_1431b7fee(param_1,0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1473c120a FUN_1473c120a body=62 status=ok
// SIG undefined FUN_1473c120a(void)

void FUN_1473c120a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  FUN_1431b7e72(param_1,param_3,param_4,param_5,param_6,param_7,param_9);
  return;
}



// FUNCTION 1473c1250 FUN_1473c1250 body=52 status=ok
// SIG undefined FUN_1473c1250(void)

void FUN_1473c1250(longlong *param_1)

{
  FUN_1473c1284();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c1284 FUN_1473c1284 body=89 status=ok
// SIG undefined FUN_1473c1284(void)

void FUN_1473c1284(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473c12de FUN_1473c12de body=52 status=ok
// SIG undefined FUN_1473c12de(void)

void FUN_1473c12de(longlong *param_1)

{
  FUN_1473c1312();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c1312 FUN_1473c1312 body=89 status=ok
// SIG undefined FUN_1473c1312(void)

void FUN_1473c1312(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473c136c FUN_1473c136c body=114 status=ok
// SIG undefined FUN_1473c136c(void)

undefined8 FUN_1473c136c(longlong *param_1,ulonglong param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(*param_1 + 0x28 + (param_2 & 0xffffffff) * 0x40);
  if (DAT_14c760db4 < 2) {
    lVar1 = param_1[4] + (param_2 & 0xffffffff) * 0xc;
    if (*(int *)(lVar1 + 4) == (int)param_3[2]) {
      uVar5 = 0;
    }
    else {
      *(int *)(lVar1 + 4) = (int)param_3[2];
      lVar4 = *param_3;
      *(longlong *)(lVar3 + 8) = lVar4;
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
    if (*(int *)(lVar1 + 8) != param_4) {
      *(int *)(lVar1 + 8) = param_4;
      *(int *)(lVar3 + 0x10) = param_4;
      uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | (byte)uVar5;
  }
  else {
    lVar1 = *param_3;
    lVar4 = *(longlong *)(lVar3 + 8);
    *(longlong *)(lVar3 + 8) = lVar1;
    iVar2 = *(int *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x10) = param_4;
    uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),iVar2 != param_4 || lVar4 != lVar1);
  }
  return uVar5;
}



// FUNCTION 1473c13de FUN_1473c13de body=61 status=ok
// SIG undefined FUN_1473c13de(void)

void FUN_1473c13de(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c141b FUN_1473c141b body=43 status=ok
// SIG undefined FUN_1473c141b(void)

void FUN_1473c141b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1473c1446 FUN_1473c1446 body=52 status=ok
// SIG undefined FUN_1473c1446(void)

void FUN_1473c1446(longlong *param_1)

{
  FUN_1473c147a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c147a FUN_1473c147a body=89 status=ok
// SIG undefined FUN_1473c147a(void)

void FUN_1473c147a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473c14d4 FUN_1473c14d4 body=52 status=ok
// SIG undefined FUN_1473c14d4(void)

void FUN_1473c14d4(longlong *param_1)

{
  FUN_1473c1508();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c1508 FUN_1473c1508 body=333 status=ok
// SIG undefined FUN_1473c1508(void)

void FUN_1473c1508(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar2);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c1656 FUN_1473c1656 body=52 status=ok
// SIG undefined FUN_1473c1656(void)

void FUN_1473c1656(longlong *param_1)

{
  FUN_1473c168a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c168a FUN_1473c168a body=316 status=ok
// SIG undefined FUN_1473c168a(void)

void FUN_1473c168a(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 1473c17c8 FUN_1473c17c8 body=52 status=ok
// SIG undefined FUN_1473c17c8(void)

void FUN_1473c17c8(longlong *param_1)

{
  FUN_1473c17fc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c17fc FUN_1473c17fc body=307 status=ok
// SIG undefined FUN_1473c17fc(void)

void FUN_1473c17fc(longlong *param_1)

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
      FUN_1473b5518((longlong)iStack_4c * 0x140 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1473c1930(param_1);
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



// FUNCTION 1473c1930 FUN_1473c1930 body=48 status=ok
// SIG undefined FUN_1473c1930(void)

void FUN_1473c1930(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x140,8);
  }
  return;
}



// FUNCTION 1473c1960 FUN_1473c1960 body=52 status=ok
// SIG undefined FUN_1473c1960(void)

void FUN_1473c1960(longlong *param_1)

{
  FUN_1473c1994();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c1994 FUN_1473c1994 body=89 status=ok
// SIG undefined FUN_1473c1994(void)

void FUN_1473c1994(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473c19ee FUN_1473c19ee body=53 status=ok
// SIG undefined FUN_1473c19ee(void)

longlong FUN_1473c19ee(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1473c1a24(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x10 + *param_1;
}



// FUNCTION 1473c1a24 FUN_1473c1a24 body=132 status=ok
// SIG undefined FUN_1473c1a24(void)

void FUN_1473c1a24(longlong param_1,int param_2)

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



// FUNCTION 1473c1aaa FUN_1473c1aaa body=95 status=ok
// SIG undefined FUN_1473c1aaa(void)

undefined8 * FUN_1473c1aaa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1473c1c7b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1473c1ca6(param_1,iVar1);
      FUN_1473c1d19(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1473c1b0a FUN_1473c1b0a body=122 status=ok
// SIG undefined FUN_1473c1b0a(void)

longlong FUN_1473c1b0a(longlong param_1,longlong param_2)

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
    FUN_1473c1b84(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1473c1b84 FUN_1473c1b84 body=117 status=ok
// SIG undefined FUN_1473c1b84(void)

undefined8 * FUN_1473c1b84(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1473c1bfa(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 1473c1bfa FUN_1473c1bfa body=128 status=ok
// SIG undefined FUN_1473c1bfa(void)

void FUN_1473c1bfa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473c1c7b FUN_1473c1c7b body=43 status=ok
// SIG undefined FUN_1473c1c7b(void)

void FUN_1473c1c7b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1473c1ca6 FUN_1473c1ca6 body=115 status=ok
// SIG undefined FUN_1473c1ca6(void)

void FUN_1473c1ca6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1473c1d19 FUN_1473c1d19 body=123 status=ok
// SIG undefined FUN_1473c1d19(void)

void FUN_1473c1d19(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1473c1d94(param_1,iVar1);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1473c1d94 FUN_1473c1d94 body=106 status=ok
// SIG undefined FUN_1473c1d94(void)

undefined8 FUN_1473c1d94(longlong param_1,int param_2)

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



// FUNCTION 1473c1dfe FUN_1473c1dfe body=88 status=ok
// SIG undefined FUN_1473c1dfe(void)

undefined8 * FUN_1473c1dfe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1473c1e56(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1473c1e56 FUN_1473c1e56 body=98 status=ok
// SIG undefined FUN_1473c1e56(void)

void FUN_1473c1e56(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1473c1eb8 FUN_1473c1eb8 body=304 status=ok
// SIG undefined FUN_1473c1eb8(void)

undefined8 * FUN_1473c1eb8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1473c2216(param_1,iVar1);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 4);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1473c2216(param_1 + 2,iVar1);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 4);
  }
  param_1[8] = param_2[8];
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 5);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar8 = *(undefined4 *)(param_2 + 7);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 7) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1473c226e(param_1 + 9,iVar1);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 << 5);
  }
  param_1[0x11] = param_2[0x11];
  uVar10 = param_2[0xb];
  uVar11 = param_2[0xc];
  uVar12 = param_2[0xd];
  uVar13 = param_2[0xe];
  uVar14 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar14;
  param_1[0xd] = uVar12;
  param_1[0xe] = uVar13;
  param_1[0xb] = uVar10;
  param_1[0xc] = uVar11;
  return param_1;
}



// FUNCTION 1473c1fe8 FUN_1473c1fe8 body=89 status=ok
// SIG undefined FUN_1473c1fe8(void)

void FUN_1473c1fe8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,1);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,1);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1473c2042 FUN_1473c2042 body=88 status=ok
// SIG undefined FUN_1473c2042(void)

void FUN_1473c2042(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1473c209a FUN_1473c209a body=111 status=ok
// SIG undefined FUN_1473c209a(void)

void FUN_1473c209a(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  piVar2 = (int *)(param_2 + 8);
  do {
    *param_1 = 0;
    iVar1 = *piVar2;
    _Src = *(void **)(piVar2 + -2);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1473c210a(param_1,iVar1);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
    }
    param_1 = param_1 + 2;
    piVar2 = piVar2 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1473c210a FUN_1473c210a body=89 status=ok
// SIG undefined FUN_1473c210a(void)

void FUN_1473c210a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1473c2164 FUN_1473c2164 body=89 status=ok
// SIG undefined FUN_1473c2164(void)

void FUN_1473c2164(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1473c21be FUN_1473c21be body=88 status=ok
// SIG undefined FUN_1473c21be(void)

void FUN_1473c21be(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1473c2216 FUN_1473c2216 body=88 status=ok
// SIG undefined FUN_1473c2216(void)

void FUN_1473c2216(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1473c226e FUN_1473c226e body=88 status=ok
// SIG undefined FUN_1473c226e(void)

void FUN_1473c226e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1473c22c6 FUN_1473c22c6 body=285 status=ok
// SIG undefined FUN_1473c22c6(void)

undefined4 * FUN_1473c22c6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1473c23e4(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_1473c24ca(param_1,uVar5,local_40,&local_4c);
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
      FUN_1473c25bc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c23e4 FUN_1473c23e4 body=229 status=ok
// SIG undefined FUN_1473c23e4(void)

int * FUN_1473c23e4(longlong *param_1,int *param_2)

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



// FUNCTION 1473c24ca FUN_1473c24ca body=127 status=ok
// SIG undefined FUN_1473c24ca(void)

undefined8 FUN_1473c24ca(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_1473c254a(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473c254a FUN_1473c254a body=114 status=ok
// SIG undefined FUN_1473c254a(void)

void FUN_1473c254a(longlong *param_1,int param_2)

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



// FUNCTION 1473c25bc FUN_1473c25bc body=422 status=ok
// SIG undefined FUN_1473c25bc(void)

void FUN_1473c25bc(longlong *param_1)

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



// FUNCTION 1473c2764 FUN_1473c2764 body=76 status=ok
// SIG undefined FUN_1473c2764(void)

undefined4 * FUN_1473c2764(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if (param_1 != param_2) {
    plVar1 = *(longlong **)(param_1 + 4);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
  }
  return param_1;
}



// FUNCTION 1473c27b0 FUN_1473c27b0 body=54 status=ok
// SIG undefined FUN_1473c27b0(void)

void FUN_1473c27b0(longlong *param_1)

{
  FUN_1473c1bfa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c27e6 FUN_1473c27e6 body=38 status=ok
// SIG undefined FUN_1473c27e6(void)

undefined8 FUN_1473c27e6(undefined8 param_1,int param_2)

{
  FUN_1473c280c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c280c FUN_1473c280c body=139 status=ok
// SIG undefined FUN_1473c280c(void)

void FUN_1473c280c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a363358;
  plVar1 = (longlong *)param_1[0x1c];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  FUN_1473c290d(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c2898(param_1 + 3);
  return;
}



// FUNCTION 1473c2898 FUN_1473c2898 body=117 status=ok
// SIG undefined FUN_1473c2898(void)

void FUN_1473c2898(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c290d FUN_1473c290d body=65 status=ok
// SIG undefined FUN_1473c290d(void)

void FUN_1473c290d(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x38);
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      plVar2 = plVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1473c294e FUN_1473c294e body=326 status=ok
// SIG undefined FUN_1473c294e(void)

undefined4 * FUN_1473c294e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1473c2a96(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1473c2b7c(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1473c2c46(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c2a96 FUN_1473c2a96 body=230 status=ok
// SIG undefined FUN_1473c2a96(void)

int * FUN_1473c2a96(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1473c2b7c FUN_1473c2b7c body=134 status=ok
// SIG undefined FUN_1473c2b7c(void)

undefined8 FUN_1473c2b7c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1473a9910((int)lVar3,*param_4,1);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473c2c02 FUN_1473c2c02 body=68 status=ok
// SIG undefined FUN_1473c2c02(void)

void FUN_1473c2c02(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1473c2c46(param_1);
  return;
}



// FUNCTION 1473c2c46 FUN_1473c2c46 body=474 status=ok
// SIG undefined FUN_1473c2c46(void)

void FUN_1473c2c46(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1473c2e22 FUN_1473c2e22 body=145 status=ok
// SIG undefined FUN_1473c2e22(void)

undefined8
FUN_1473c2e22(longlong *param_1,ulonglong param_2,ulonglong param_3,int param_4,ulonglong param_5,
             ulonglong param_6)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  param_2 = param_2 & 0xffffffff;
  puVar2 = *(ulonglong **)(*param_1 + 0x30 + param_2 * 0x40);
  if (DAT_14c760db4 < 2) {
    piVar1 = (int *)(param_1[4] + param_2 * 0xc);
    if (*piVar1 == param_4) {
      uVar6 = 0;
    }
    else {
      *piVar1 = param_4;
      *puVar2 = param_3;
      uVar6 = CONCAT71((int7)(param_2 * 3 >> 8),1);
    }
    if (piVar1[1] != (int)param_5) {
      piVar1[1] = (int)param_5;
      puVar2[1] = param_5;
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    if (piVar1[2] != (int)param_6) {
      piVar1[2] = (int)param_6;
      puVar2[2] = param_6;
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | (byte)uVar6;
  }
  else {
    uVar5 = *puVar2;
    *puVar2 = param_3;
    uVar3 = puVar2[1];
    puVar2[1] = param_5;
    uVar4 = puVar2[2];
    puVar2[2] = param_6;
    uVar5 = uVar4 ^ param_6 | uVar3 ^ param_5 | uVar5 ^ param_3;
    uVar6 = CONCAT71((int7)(uVar5 >> 8),uVar5 != 0);
  }
  return uVar6;
}



// FUNCTION 1473c2eb4 FUN_1473c2eb4 body=38 status=ok
// SIG undefined FUN_1473c2eb4(void)

undefined8 FUN_1473c2eb4(undefined8 param_1,int param_2)

{
  FUN_1473c2f60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c2eda FUN_1473c2eda body=132 status=ok
// SIG undefined FUN_1473c2eda(void)

void FUN_1473c2eda(longlong param_1,int param_2)

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



// FUNCTION 1473c2f60 FUN_1473c2f60 body=59 status=ok
// SIG undefined FUN_1473c2f60(void)

void FUN_1473c2f60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a363360;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1431af886(param_1);
  return;
}



// FUNCTION 1473c2f9c FUN_1473c2f9c body=39 status=ok
// SIG undefined FUN_1473c2f9c(void)

undefined8 * FUN_1473c2f9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c2fc4 FUN_1473c2fc4 body=65 status=ok
// SIG undefined FUN_1473c2fc4(void)

undefined8 * FUN_1473c2fc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a369930;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1431af886(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c3006 FUN_1473c3006 body=132 status=ok
// SIG undefined FUN_1473c3006(void)

void FUN_1473c3006(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473c308c FUN_1473c308c body=98 status=ok
// SIG undefined FUN_1473c308c(void)

void FUN_1473c308c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1473c30ee FUN_1473c30ee body=52 status=ok
// SIG undefined FUN_1473c30ee(void)

void FUN_1473c30ee(longlong *param_1)

{
  FUN_1473c3122();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c3122 FUN_1473c3122 body=333 status=ok
// SIG undefined FUN_1473c3122(void)

void FUN_1473c3122(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
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
      lVar4 = *(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1473c3270 FUN_1473c3270 body=139 status=ok
// SIG undefined FUN_1473c3270(void)

void FUN_1473c3270(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x6c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x60,0);
      iVar5 = (int)(uVar4 / 0x60);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x6c) = iVar6;
    FUN_1473c32fc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473c32fc FUN_1473c32fc body=140 status=ok
// SIG undefined FUN_1473c32fc(void)

void FUN_1473c32fc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0x60);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 0x60);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0x60);
  return;
}



// FUNCTION 1473c3388 FUN_1473c3388 body=124 status=ok
// SIG undefined FUN_1473c3388(void)

void FUN_1473c3388(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1473c3406(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473c3406 FUN_1473c3406 body=132 status=ok
// SIG undefined FUN_1473c3406(void)

void FUN_1473c3406(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 1473c348a FUN_1473c348a body=67 status=ok
// SIG undefined FUN_1473c348a(void)

void FUN_1473c348a(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar4 * 8);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  return;
}



// FUNCTION 1473c34ce FUN_1473c34ce body=38 status=ok
// SIG undefined FUN_1473c34ce(void)

undefined8 FUN_1473c34ce(undefined8 param_1,int param_2)

{
  FUN_1431af886();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473c34f4 FUN_1473c34f4 body=132 status=ok
// SIG undefined FUN_1473c34f4(void)

void FUN_1473c34f4(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_1473c3c7c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1473c3578 FUN_1473c3578 body=145 status=ok
// SIG undefined FUN_1473c3578(void)

void FUN_1473c3578(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x80;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e08];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x80,8);
  }
  uVar2 = 0x7fffffff;
  if (0xf < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1473c360a FUN_1473c360a body=147 status=ok
// SIG undefined FUN_1473c360a(void)

void FUN_1473c360a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473c369e FUN_1473c369e body=107 status=ok
// SIG undefined FUN_1473c369e(void)

void FUN_1473c369e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1473c370a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1473c370a FUN_1473c370a body=132 status=ok
// SIG undefined FUN_1473c370a(void)

void FUN_1473c370a(longlong param_1,int param_2)

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



// FUNCTION 1473c3790 FUN_1473c3790 body=312 status=ok
// SIG undefined FUN_1473c3790(void)

undefined4 * FUN_1473c3790(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_1473c38ca(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1473c39b0(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_1473c3a9e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c38ca FUN_1473c38ca body=229 status=ok
// SIG undefined FUN_1473c38ca(void)

int * FUN_1473c38ca(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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



// FUNCTION 1473c39b0 FUN_1473c39b0 body=124 status=ok
// SIG undefined FUN_1473c39b0(void)

undefined8 FUN_1473c39b0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_1473c3a2c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473c3a2c FUN_1473c3a2c body=114 status=ok
// SIG undefined FUN_1473c3a2c(void)

void FUN_1473c3a2c(longlong *param_1,int param_2)

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



// FUNCTION 1473c3a9e FUN_1473c3a9e body=477 status=ok
// SIG undefined FUN_1473c3a9e(void)

void FUN_1473c3a9e(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 1473c3c7c FUN_1473c3c7c body=90 status=ok
// SIG undefined FUN_1473c3c7c(void)

void FUN_1473c3c7c(longlong *param_1,int param_2)

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
  FUN_1473c3a2c();
  return;
}



// FUNCTION 1473c3cd6 FUN_1473c3cd6 body=52 status=ok
// SIG undefined FUN_1473c3cd6(void)

void FUN_1473c3cd6(longlong *param_1)

{
  FUN_1473c3d0a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c3d0a FUN_1473c3d0a body=89 status=ok
// SIG undefined FUN_1473c3d0a(void)

void FUN_1473c3d0a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473c3d64 FUN_1473c3d64 body=52 status=ok
// SIG undefined FUN_1473c3d64(void)

void FUN_1473c3d64(longlong *param_1)

{
  FUN_1473c3d98();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c3d98 FUN_1473c3d98 body=89 status=ok
// SIG undefined FUN_1473c3d98(void)

void FUN_1473c3d98(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473c3df2 FUN_1473c3df2 body=52 status=ok
// SIG undefined FUN_1473c3df2(void)

void FUN_1473c3df2(longlong *param_1)

{
  FUN_1473c3e26();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473c3e26 FUN_1473c3e26 body=89 status=ok
// SIG undefined FUN_1473c3e26(void)

void FUN_1473c3e26(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1473c3e80 FUN_1473c3e80 body=137 status=ok
// SIG undefined FUN_1473c3e80(void)

void FUN_1473c3e80(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473c3f0a(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 0x18),0,(longlong)(param_2 - iVar1) * 0x18);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x38) = param_2, param_3 == '\x01')) {
      FUN_1473c3f9c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473c3f0a FUN_1473c3f0a body=145 status=ok
// SIG undefined FUN_1473c3f0a(void)

void FUN_1473c3f0a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x3c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x3c) = (int)uVar5;
    FUN_1473a02b6(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473c3f9c FUN_1473c3f9c body=59 status=ok
// SIG undefined FUN_1473c3f9c(void)

void FUN_1473c3f9c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473c3fd8(param_1,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  if (iVar1 == *(int *)(param_1 + 0x3c)) {
    return;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  FUN_1473a02b6(param_1,*(undefined4 *)(param_1 + 0x38),iVar1,0x18);
  return;
}



// FUNCTION 1473c3fd8 FUN_1473c3fd8 body=126 status=ok
// SIG undefined FUN_1473c3fd8(void)

ulonglong FUN_1473c3fd8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 2;
  if (2 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 1473c4056 FUN_1473c4056 body=135 status=ok
// SIG undefined FUN_1473c4056(void)

void FUN_1473c4056(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473c40de(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    memset((void *)((longlong)iVar1 * 0x10 + lVar2),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x28) = param_2, param_3 == '\x01')) {
      FUN_1473c4162(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473c40de FUN_1473c40de body=130 status=ok
// SIG undefined FUN_1473c40de(void)

void FUN_1473c40de(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x2c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 4)) {
        uVar5 = uVar3 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar5;
    FUN_1473a0390(param_1,param_2,uVar5,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473c4162 FUN_1473c4162 body=59 status=ok
// SIG undefined FUN_1473c4162(void)

void FUN_1473c4162(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473c419e(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_1473a0390(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,0x10);
  return;
}



// FUNCTION 1473c419e FUN_1473c419e body=105 status=ok
// SIG undefined FUN_1473c419e(void)

ulonglong FUN_1473c419e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 2;
  if (2 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1473c4208 FUN_1473c4208 body=287 status=ok
// SIG undefined FUN_1473c4208(void)

undefined4 * FUN_1473c4208(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_1473c4328(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_1473c440e(param_1,uVar5,local_40,&local_4c);
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
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1473c4500(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c4328 FUN_1473c4328 body=230 status=ok
// SIG undefined FUN_1473c4328(void)

int * FUN_1473c4328(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1473c440e FUN_1473c440e body=128 status=ok
// SIG undefined FUN_1473c440e(void)

undefined8 FUN_1473c440e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1473c448e(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473c448e FUN_1473c448e body=114 status=ok
// SIG undefined FUN_1473c448e(void)

void FUN_1473c448e(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1473c4500 FUN_1473c4500 body=419 status=ok
// SIG undefined FUN_1473c4500(void)

void FUN_1473c4500(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1473c46a4 FUN_1473c46a4 body=1203 status=ok
// SIG undefined FUN_1473c46a4(void)

undefined4 FUN_1473c46a4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1473c4df8();
  if (param_1 == (longlong *)0x0 || param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_148);
  }
  local_128 = param_1[4];
  FUN_1473c594d(&local_60,*(undefined4 *)((longlong)param_1 + 0xc),param_1[2],(int)param_1[3]);
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  uVar3 = *(uint *)(*param_1 + 0x30);
  if ((ulonglong)uVar3 != 0) {
    lVar9 = 0;
    do {
      if (puStack_70 == local_68) {
        FUN_1473c5f1c(&local_78);
      }
      else {
        *puStack_70 = *(undefined8 *)(*(longlong *)(*param_1 + 0x38) + lVar9);
        puStack_70 = puStack_70 + 1;
      }
      lVar9 = lVar9 + 8;
    } while ((ulonglong)uVar3 << 3 != lVar9);
  }
  local_118 = local_60;
  if (local_58 - local_60 == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    puVar8 = (undefined8 *)*param_1;
    puVar7 = (undefined8 *)puVar8[3];
    if (puVar7 != (undefined8 *)0x0) {
LAB_1473c4a27:
      local_a8 = *puVar7;
      uStack_a0 = puVar7[1];
      local_98 = puVar7[2];
      uStack_90 = puVar7[3];
      local_88 = puVar7[4];
      uStack_80._4_4_ = (uint)((ulonglong)puVar7[5] >> 0x20);
      uVar3 = uStack_80._4_4_;
      uStack_80 = puVar7[5];
      goto LAB_1473c4a51;
    }
    local_e8 = *puVar8;
    uStack_e0 = puVar8[1];
    local_d8 = puVar8[2];
    local_c8 = puVar8[4];
    uStack_c0 = puVar8[5];
    local_b8 = puVar8[6];
    puStack_b0 = (undefined8 *)puVar8[7];
  }
  else {
    local_108 = (local_58 - local_60 >> 3) * 0xfc0fc0fc0fc0fc1;
    local_108 = local_108 + (ulonglong)(local_108 == 0);
    lVar9 = 0;
    local_110 = param_2;
    local_100 = param_1;
    do {
      pcVar11 = (char *)(local_118 + lVar9 * 0x208);
      lVar12 = 0;
      while (iVar4 = strncmp("VP_UE_Vulkan_ES3_1_Android" + lVar12,pcVar11,0x100), iVar4 != 0) {
        lVar12 = lVar12 + 0x140;
        if (lVar12 == 0x780) {
          uVar5 = 0xfffffff3;
          goto LAB_1473c4b2a;
        }
      }
      uVar3 = *(uint *)((longlong)&DAT_14a3636f0 + lVar12);
      local_f8 = lVar9;
      if ((ulonglong)uVar3 != 0) {
        lVar12 = *(longlong *)((longlong)&PTR_DAT_14a3636f8 + lVar12);
        pcVar11 = (char *)(local_118 + lVar9 * 0x208 + 0x108);
        uVar10 = 0;
        do {
          uVar6 = (ulonglong)*(uint *)(lVar12 + uVar10 * 0x10);
          if (uVar6 != 0) {
            lVar9 = 0;
            do {
              lVar1 = *(longlong *)(uVar10 * 0x10 + lVar12 + 8);
              if ((*pcVar11 == '\0') ||
                 (iVar4 = strcmp((char *)(lVar1 + lVar9),pcVar11), iVar4 == 0)) {
                FUN_1473c5b1c(*(undefined4 *)(lVar1 + 0x100 + lVar9),
                              *(undefined8 *)(lVar1 + 0x108 + lVar9),&local_78);
              }
              lVar9 = lVar9 + 0x1c0;
            } while (uVar6 * 0x1c0 - lVar9 != 0);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar3);
      }
      plVar2 = local_100;
      param_2 = local_110;
      lVar9 = local_f8 + 1;
    } while (lVar9 != local_108);
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    puVar8 = (undefined8 *)*local_100;
    puVar7 = (undefined8 *)puVar8[3];
    if (puVar7 != (undefined8 *)0x0) goto LAB_1473c4a27;
    uVar3 = FUN_1473c5bd5(local_118);
    uStack_80 = CONCAT44(uVar3,(undefined4)uStack_80);
    puVar8 = (undefined8 *)*plVar2;
LAB_1473c4a51:
    local_e8 = *puVar8;
    uStack_e0 = puVar8[1];
    local_d8 = puVar8[2];
    local_c8 = puVar8[4];
    uStack_c0 = puVar8[5];
    local_b8 = puVar8[6];
    puStack_b0 = (undefined8 *)puVar8[7];
    puStack_d0 = &local_a8;
    puVar8 = puStack_70;
    puVar7 = local_78;
    if (0x400fff < uVar3) goto LAB_1473c4afd;
  }
  puVar8 = puStack_70;
  puVar7 = local_78;
  puStack_d0 = &local_a8;
  if ((longlong)puStack_70 - (longlong)local_78 != 0) {
    lVar9 = (longlong)puStack_70 - (longlong)local_78 >> 3;
    lVar12 = 0;
    do {
      iVar4 = strcmp((char *)puVar7[lVar12],"VK_KHR_get_physical_device_properties2");
      if (iVar4 == 0) goto LAB_1473c4afd;
      lVar12 = lVar12 + 1;
    } while (lVar9 + (ulonglong)(lVar9 == 0) != lVar12);
  }
  local_f0 = "VK_KHR_get_physical_device_properties2";
  if (puVar8 == local_68) {
    FUN_1473c609e(&local_78,puVar8,&local_f0);
    puVar8 = puStack_70;
    puVar7 = local_78;
  }
  else {
    *puVar8 = "VK_KHR_get_physical_device_properties2";
    puVar8 = puStack_70 + 1;
    puVar7 = local_78;
    puStack_70 = puVar8;
  }
LAB_1473c4afd:
  if (puVar7 != puVar8) {
    local_b8 = CONCAT44(local_b8._4_4_,(int)((ulonglong)((longlong)puVar8 - (longlong)puVar7) >> 3))
    ;
    puStack_b0 = puVar7;
  }
  uVar5 = (*DAT_14ca788b8)(&local_e8,0,param_2);
LAB_1473c4b2a:
  FUN_1473c6168(&local_78);
  FUN_1473c58a6(&local_60);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c4b79 FUN_1473c4b79 body=638 status=ok
// SIG undefined FUN_1473c4b79(void)

int FUN_1473c4b79(char *param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  void *_Buf1;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8 [4];
  longlong local_88 [3];
  int local_6c;
  void *local_68;
  longlong lStack_60;
  undefined8 local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1473c4df8();
  local_4c = 0x400000;
  pcVar4 = DAT_14ca78880;
  if (DAT_14ca788c8 == '\x01') {
    pcVar4 = (code *)(*DAT_14ca79380)(0,"vkEnumerateInstanceVersion");
  }
  if ((pcVar4 == (code *)0x0) || (iVar3 = (*pcVar4)(&local_4c), iVar3 == 0)) {
    local_50 = 0;
    iVar3 = (*DAT_14ca78888)(0,&local_50,0);
    if (iVar3 == 0) {
      local_68 = (void *)0x0;
      lStack_60 = 0;
      local_58 = 0;
      if (local_50 != 0) {
        FUN_1473c5410(&local_68);
      }
      iVar3 = (*DAT_14ca78888)(0,&local_50,local_68);
      uVar2 = local_4c;
      if (iVar3 == 0) {
        local_6c = 1;
        if (local_4c < 0x401000) {
          if (lStack_60 - (longlong)local_68 != 0) {
            lVar6 = (lStack_60 - (longlong)local_68 >> 2) * 0xfc0fc0fc0fc0fc1;
            lVar6 = lVar6 + (ulonglong)(lVar6 == 0);
            _Buf1 = local_68;
            do {
              iVar3 = memcmp(_Buf1,"VK_KHR_get_physical_device_properties2",0x27);
              if (iVar3 == 0) goto LAB_1473c4cbd;
              _Buf1 = (void *)((longlong)_Buf1 + 0x104);
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          local_6c = 0;
        }
LAB_1473c4cbd:
        lVar6 = 0;
        do {
          iVar3 = strncmp("VP_UE_Vulkan_ES3_1_Android" + lVar6,param_1,0x100);
          if (iVar3 == 0) {
            iVar3 = -0xd;
            if (lVar6 != -0x14a3635d0) {
              local_88[0] = 0;
              local_88[1] = 0;
              local_88[2] = 0;
              local_a8[2] = 0;
              local_a8[0] = 0;
              local_a8[1] = 0;
              local_b8 = local_88;
              local_b0 = local_a8;
              iVar3 = FUN_1473c4ecd(uVar2,&local_68,param_1,&local_6c);
              if (iVar3 == 0) {
                plVar1 = local_88;
                if (local_6c == 0) {
                  plVar1 = local_a8;
                }
                plVar5 = local_88;
                if (local_6c == 0) {
                  plVar5 = local_a8;
                }
                *param_3 = (int)((ulonglong)(plVar1[1] - *plVar5) >> 3) * -0x3f03f03f;
              }
              *param_2 = local_6c;
              FUN_1473c58a6(local_a8);
              FUN_1473c58a6(local_88);
            }
            goto LAB_1473c4d03;
          }
          lVar6 = lVar6 + 0x140;
        } while (lVar6 != 0x780);
        iVar3 = -0xd;
      }
      else {
        *param_2 = 0;
      }
LAB_1473c4d03:
      FUN_1473c58fa(&local_68);
      goto LAB_1473c4c11;
    }
  }
  *param_2 = 0;
LAB_1473c4c11:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1473c4df8 FUN_1473c4df8 body=212 status=ok
// SIG undefined FUN_1473c4df8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473c4df8(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca788d0) {
    FUN_144b3d300(&DAT_14ca788d0);
    if (DAT_14ca788d0 == -1) {
      DAT_14ca788c8 = 0;
      _DAT_14ca788cc = 0x400000;
      _DAT_14ca78870 = 0;
      _DAT_14ca78878 = 0;
      DAT_14ca78880 = 0;
      DAT_14ca78888 = 0;
      DAT_14ca78890 = 0;
      DAT_14ca78898 = 0;
      _DAT_14ca788a0 = 0;
      _DAT_14ca788a8 = 0;
      DAT_14ca788b0 = 0;
      DAT_14ca788b8 = 0;
      _DAT_14ca788c0 = 0;
      _Init_thread_footer(&DAT_14ca788d0);
    }
  }
  uStack_10 = 0;
  local_18 = 1;
  FUN_1473c52b2();
  DAT_14ca788c8 = 1;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c4ecd FUN_1473c4ecd body=996 status=ok
// SIG undefined FUN_1473c4ecd(void)

undefined1 *
FUN_1473c4ecd(uint param_1,longlong *param_2,char *param_3,undefined4 *param_4,longlong param_5,
             longlong param_6)

{
  uint uVar1;
  void *pvVar2;
  void *_Dst;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_6c8 [32];
  uint local_6a8;
  uint local_6a0;
  uint local_698;
  uint local_690;
  uint local_688;
  undefined4 *local_678;
  longlong local_670;
  ulonglong local_668;
  ulonglong local_660;
  undefined1 local_658 [1032];
  undefined1 local_250 [260];
  uint local_14c;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6c8;
  lVar11 = 0;
  local_678 = param_4;
  do {
    iVar6 = strncmp("VP_UE_Vulkan_ES3_1_Android" + lVar11,param_3,0x100);
    if (iVar6 == 0) {
      if (lVar11 != -0x14a3635d0) {
        memcpy(local_250,param_3,0x104);
        local_14c = param_1;
        memset(local_148,0,0x100);
        if (1 < *(uint *)(param_3 + 0x100)) {
          *local_678 = 0;
          pvVar2 = *(void **)(param_6 + 8);
          if (pvVar2 == *(void **)(param_6 + 0x10)) {
            FUN_1473c56ee(param_6,pvVar2,local_250);
          }
          else {
            memcpy(pvVar2,local_250,0x208);
            *(longlong *)(param_6 + 8) = *(longlong *)(param_6 + 8) + 0x208;
          }
        }
        if (param_1 != 0) {
          uVar1 = *(uint *)((longlong)&DAT_14a3636d4 + lVar11);
          uVar8 = param_1 >> 0x16 & 0x7f;
          uVar13 = uVar1 >> 0x16 & 0x7f;
          if (uVar8 <= uVar13) {
            uVar9 = uVar1 >> 0xc & 0x3ff;
            uVar12 = param_1 >> 0xc & 0x3ff;
            if ((uVar8 != uVar13) || (uVar12 < uVar9)) {
              local_688 = param_1 & 0xfff;
              local_6a0 = uVar1 & 0xfff;
              local_6a8 = uVar9;
              local_698 = uVar8;
              local_690 = uVar12;
              FUN_14626ea25(local_658,0x3ff,
                            "Unsupported Profile API version %u.%u.%u on a Vulkan system with version %u.%u.%u"
                           );
              *local_678 = 0;
              pvVar2 = *(void **)(param_6 + 8);
              if (pvVar2 == *(void **)(param_6 + 0x10)) {
                FUN_1473c56ee(param_6,pvVar2,local_250);
              }
              else {
                memcpy(pvVar2,local_250,0x208);
                *(longlong *)(param_6 + 8) = *(longlong *)(param_6 + 8) + 0x208;
              }
            }
          }
        }
        local_668 = (ulonglong)*(uint *)((longlong)&DAT_14a3636f0 + lVar11);
        if (local_668 == 0) goto LAB_1473c51de;
        local_670 = *(longlong *)((longlong)&PTR_DAT_14a3636f8 + lVar11);
        uVar14 = 0;
        goto LAB_1473c504a;
      }
      break;
    }
    lVar11 = lVar11 + 0x140;
  } while (lVar11 != 0x780);
  *local_678 = 0;
  puVar7 = &DAT_fffffff3;
  goto LAB_1473c4f42;
LAB_1473c504a:
  do {
    if (*(int *)(local_670 + uVar14 * 0x10) == 0) {
LAB_1473c51d3:
      *local_678 = 0;
      break;
    }
    puVar10 = (uint *)(uVar14 * 0x10 + local_670);
    uVar15 = 0;
    bVar4 = false;
    local_660 = uVar14;
    do {
      lVar11 = *(longlong *)(puVar10 + 2);
      pvVar2 = (void *)(lVar11 + uVar15 * 0x1c0);
      if (*(int *)(lVar11 + 0x100 + uVar15 * 0x1c0) == 0) {
LAB_1473c5132:
        memcpy(local_148,pvVar2,0x100);
        pvVar2 = *(void **)(param_5 + 8);
        if (pvVar2 == *(void **)(param_5 + 0x10)) {
          FUN_1473c56ee(param_5,pvVar2,local_250);
        }
        else {
          memcpy(pvVar2,local_250,0x208);
          *(longlong *)(param_5 + 8) = *(longlong *)(param_5 + 8) + 0x208;
        }
        bVar4 = true;
      }
      else {
        bVar3 = true;
        lVar11 = 0;
        uVar14 = 0;
        do {
          cVar5 = FUN_1473c5638(*param_2,(param_2[1] - *param_2 >> 2) * 0xfc0fc0fc0fc0fc1,
                                *(longlong *)((longlong)pvVar2 + 0x108) + lVar11);
          if (cVar5 == '\0') {
            memcpy(local_148,pvVar2,0x100);
            _Dst = *(void **)(param_6 + 8);
            if (_Dst == *(void **)(param_6 + 0x10)) {
              FUN_1473c56ee(param_6,_Dst,local_250);
            }
            else {
              memcpy(_Dst,local_250,0x208);
              *(longlong *)(param_6 + 8) = *(longlong *)(param_6 + 8) + 0x208;
            }
            bVar3 = false;
          }
          uVar14 = uVar14 + 1;
          lVar11 = lVar11 + 0x104;
        } while (uVar14 < *(uint *)((longlong)pvVar2 + 0x100));
        if (bVar3) goto LAB_1473c5132;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *puVar10);
    if (!bVar4) goto LAB_1473c51d3;
    uVar14 = local_660 + 1;
  } while (uVar14 != local_668);
LAB_1473c51de:
  puVar7 = (undefined1 *)0x0;
LAB_1473c4f42:
  if ((local_48 ^ (ulonglong)auStack_6c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 1473c52b2 FUN_1473c52b2 body=350 status=ok
// SIG undefined FUN_1473c52b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473c52b2(byte *param_1)

{
  longlong *plVar1;
  
  if ((*param_1 & 1) != 0) {
    _DAT_14ca78870 = DAT_14ca79380;
    _DAT_14ca78878 = DAT_14ca79378;
    DAT_14ca78880 = 0;
    DAT_14ca78888 = DAT_14ca79368;
    DAT_14ca78890 = DAT_14ca79388;
    DAT_14ca78898 = DAT_14ca79400;
    _DAT_14ca788a0 = DAT_14ca79370;
    _DAT_14ca788a8 = DAT_14ca79408;
    DAT_14ca788b0 = DAT_14ca79410;
    DAT_14ca788b8 = DAT_14ca79360;
    _DAT_14ca788c0 = DAT_14ca79418;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (*plVar1 != 0) {
    _DAT_14ca78870 = *plVar1;
  }
  if (plVar1[1] != 0) {
    _DAT_14ca78878 = plVar1[1];
  }
  if (plVar1[2] != 0) {
    DAT_14ca78880 = plVar1[2];
  }
  if (plVar1[3] != 0) {
    DAT_14ca78888 = plVar1[3];
  }
  if (plVar1[4] != 0) {
    DAT_14ca78890 = plVar1[4];
  }
  if (plVar1[5] != 0) {
    DAT_14ca78898 = plVar1[5];
  }
  if (plVar1[6] != 0) {
    _DAT_14ca788a0 = plVar1[6];
  }
  if (plVar1[7] != 0) {
    _DAT_14ca788a8 = plVar1[7];
  }
  if (plVar1[8] != 0) {
    DAT_14ca788b0 = plVar1[8];
  }
  if (plVar1[9] != 0) {
    DAT_14ca788b8 = plVar1[9];
  }
  if (plVar1[10] != 0) {
    _DAT_14ca788c0 = plVar1[10];
  }
  return;
}



// FUNCTION 1473c5410 FUN_1473c5410 body=148 status=ok
// SIG undefined FUN_1473c5410(void)

void FUN_1473c5410(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  void *_Dst;
  size_t _Size;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  _Dst = (void *)param_1[1];
  uVar2 = ((longlong)_Dst - lVar1 >> 2) * 0xfc0fc0fc0fc0fc1;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    if (uVar2 < param_2) {
      if ((ulonglong)((param_1[2] - lVar1 >> 2) * 0xfc0fc0fc0fc0fc1) < param_2) {
        FUN_1473c54a4(param_1);
        return;
      }
      _Size = param_2 * 0x104 - ((longlong)_Dst - lVar1);
      memset(_Dst,0,_Size);
      param_1[1] = _Size + (longlong)_Dst;
    }
  }
  else {
    param_1[1] = lVar1 + param_2 * 0x104;
  }
  return;
}



// FUNCTION 1473c54a4 FUN_1473c54a4 body=202 status=ok
// SIG undefined FUN_1473c54a4(void)

void FUN_1473c54a4(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (param_1[2] - *param_1 >> 2) * 0xfc0fc0fc0fc0fc1;
  uVar2 = 0xfc0fc0fc0fc0fc - (uVar1 >> 1);
  uVar3 = (uVar1 >> 1) + uVar1;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (uVar2 <= uVar1 && uVar1 - uVar2 != 0) {
    uVar3 = 0xfc0fc0fc0fc0fc;
  }
  _Dst = (void *)FUN_1473c55ec(uVar3);
  lVar4 = (lVar5 >> 2) * -0xfc0fc0fc0fc0fc1 + param_2;
  if (lVar4 != 0) {
    memset((void *)((longlong)_Dst + lVar5),0,lVar4 * 0x104);
  }
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  FUN_1473c556e(param_1,_Dst,param_2,uVar3);
  return;
}



// FUNCTION 1473c556e FUN_1473c556e body=124 status=ok
// SIG undefined FUN_1473c556e(void)

void FUN_1473c556e(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x104 + param_2;
  param_1[2] = param_4 * 0x104 + param_2;
  return;
}



// FUNCTION 1473c55ec FUN_1473c55ec body=75 status=ok
// SIG undefined FUN_1473c55ec(void)

void FUN_1473c55ec(ulonglong param_1)

{
  if (0xfc0fc0fc0fc0fc < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xf < param_1) {
    FUN_140c1ca1d();
    return;
  }
  FUN_14001cc68(param_1 * 0x104 + (ulonglong)(param_1 * 0x104 == 0),0x10);
  return;
}



// FUNCTION 1473c5638 FUN_1473c5638 body=181 status=ok
// SIG undefined FUN_1473c5638(void)

undefined8 FUN_1473c5638(char *param_1,ulonglong param_2,char *param_3)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_458 [32];
  undefined1 local_438 [1032];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_458;
  if (param_2 == 0) {
LAB_1473c56d1:
    FUN_14626ea25(local_438,0x3ff,"Unsupported extension: %s",param_3);
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_1,param_3);
    if (iVar1 == 0) {
      uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
    }
    else {
      uVar3 = 0;
      do {
        param_1 = param_1 + 0x104;
        if (param_2 - 1 == uVar3) goto LAB_1473c56d1;
        iVar1 = strcmp(param_1,param_3);
        uVar3 = uVar3 + 1;
      } while (iVar1 != 0);
      uVar2 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar1) >> 8),uVar3 < param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473c56ee FUN_1473c56ee body=229 status=ok
// SIG undefined FUN_1473c56ee(void)

void FUN_1473c56ee(longlong *param_1,void *param_2,void *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Dst_00;
  ulonglong uVar6;
  
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 3) * 0xfc0fc0fc0fc0fc1 + 1;
  uVar4 = (param_1[2] - lVar1 >> 3) * 0xfc0fc0fc0fc0fc1;
  uVar3 = 0x7e07e07e07e07e - (uVar4 >> 1);
  uVar6 = (uVar4 >> 1) + uVar4;
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    uVar6 = 0x7e07e07e07e07e;
  }
  _Dst = (void *)FUN_1473c5852(uVar6);
  _Dst_00 = (void *)(((longlong)param_2 - lVar1) + (longlong)_Dst);
  memcpy(_Dst_00,param_3,0x208);
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst_00 + 0x208),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_1473c57d4(param_1,_Dst,uVar5,uVar6);
  return;
}



// FUNCTION 1473c57d4 FUN_1473c57d4 body=124 status=ok
// SIG undefined FUN_1473c57d4(void)

void FUN_1473c57d4(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x208 + param_2;
  param_1[2] = param_4 * 0x208 + param_2;
  return;
}



// FUNCTION 1473c5852 FUN_1473c5852 body=82 status=ok
// SIG undefined FUN_1473c5852(void)

undefined8 FUN_1473c5852(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x7e07e07e07e07e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (7 < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0x208);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0x208,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1473c58a6 FUN_1473c58a6 body=82 status=ok
// SIG undefined FUN_1473c58a6(void)

void FUN_1473c58a6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1473c58fa FUN_1473c58fa body=82 status=ok
// SIG undefined FUN_1473c58fa(void)

void FUN_1473c58fa(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1473c594d FUN_1473c594d body=462 status=ok
// SIG undefined FUN_1473c594d(void)

undefined8 *
FUN_1473c594d(undefined8 *param_1,uint param_2,longlong param_3,uint param_4,void *param_5)

{
  void *_Dst;
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 auStack_2c8 [44];
  uint local_29c;
  ulonglong local_298;
  longlong local_290;
  void *local_288;
  longlong lStack_280;
  undefined8 local_278;
  undefined1 local_268 [260];
  undefined1 local_164 [260];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_29c = param_4;
  local_290 = param_3;
  if (param_2 != 0) {
    local_298 = (ulonglong)param_2;
    uVar1 = 0;
    do {
      local_288 = (void *)0x0;
      lStack_280 = 0;
      local_278 = 0;
      FUN_1473c5d1a(&local_288,uVar1 * 0x104 + local_290);
      if (lStack_280 - (longlong)local_288 != 0) {
        lVar3 = (lStack_280 - (longlong)local_288 >> 2) * 0xfc0fc0fc0fc0fc1;
        lVar3 = lVar3 + (ulonglong)(lVar3 == 0);
        pvVar2 = local_288;
        do {
          memcpy(local_268,pvVar2,0x104);
          memset(local_164,0,0x104);
          _Dst = (void *)param_1[1];
          if (_Dst == (void *)param_1[2]) {
            FUN_1473c56ee(param_1,_Dst,local_268);
          }
          else {
            memcpy(_Dst,local_268,0x208);
            param_1[1] = (longlong)_Dst + 0x208;
          }
          pvVar2 = (void *)((longlong)pvVar2 + 0x104);
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      FUN_1473c5ec8(&local_288);
      uVar1 = uVar1 + 1;
    } while (uVar1 != local_298);
  }
  if (local_29c != 0) {
    uVar1 = (ulonglong)local_29c;
    do {
      pvVar2 = (void *)param_1[1];
      if (pvVar2 == (void *)param_1[2]) {
        FUN_1473c56ee(param_1,pvVar2,param_5);
      }
      else {
        memcpy(pvVar2,param_5,0x208);
        param_1[1] = (longlong)pvVar2 + 0x208;
      }
      param_5 = (void *)((longlong)param_5 + 0x208);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1473c5b1c FUN_1473c5b1c body=184 status=ok
// SIG undefined FUN_1473c5b1c(void)

void FUN_1473c5b1c(uint param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  char *_Str2;
  undefined1 auStack_78 [40];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    uVar4 = 0;
    do {
      _Str2 = (char *)(uVar4 * 0x104 + param_2);
      puVar1 = (undefined8 *)param_3[1];
      for (puVar3 = (undefined8 *)*param_3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
        iVar2 = strcmp((char *)*puVar3,_Str2);
        if (iVar2 == 0) goto LAB_1473c5b93;
      }
      local_50 = _Str2;
      if (puVar1 == (undefined8 *)param_3[2]) {
        FUN_1473c609e(param_3,puVar1,&local_50);
      }
      else {
        *puVar1 = _Str2;
        param_3[1] = param_3[1] + 8;
      }
LAB_1473c5b93:
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473c5bd5 FUN_1473c5bd5 body=324 status=ok
// SIG undefined FUN_1473c5bd5(void)

uint FUN_1473c5bd5(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *_Str2;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  FUN_1473c5d1a(&local_68,param_1);
  local_70 = local_68;
  if (lStack_60 - local_68 == 0) {
LAB_1473c5c23:
    uVar6 = 0;
  }
  else {
    local_78 = (lStack_60 - local_68 >> 2) * 0xfc0fc0fc0fc0fc1;
    local_78 = local_78 + (ulonglong)(local_78 == 0);
    lVar7 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    do {
      _Str2 = (char *)(lVar7 * 0x104 + local_70);
      lVar8 = 0;
      while (iVar2 = strncmp("VP_UE_Vulkan_ES3_1_Android" + lVar8,_Str2,0x100), iVar2 != 0) {
        lVar8 = lVar8 + 0x140;
        if (lVar8 == 0x780) goto LAB_1473c5c23;
      }
      uVar1 = *(uint *)((longlong)&DAT_14a3636d4 + lVar8);
      uVar3 = uVar1 >> 0x16 & 0x7f;
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
      }
      uVar3 = uVar1 >> 0xc & 0x3ff;
      if (uVar5 <= uVar3) {
        uVar5 = uVar3;
      }
      if (uVar6 <= (uVar1 & 0xfff)) {
        uVar6 = uVar1 & 0xfff;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != local_78);
    uVar6 = uVar5 << 0xc | uVar4 << 0x16 | uVar6;
  }
  FUN_1473c5ec8(&local_68);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1473c5d1a FUN_1473c5d1a body=219 status=ok
// SIG undefined FUN_1473c5d1a(void)

void FUN_1473c5d1a(longlong *param_1,void *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *param_1;
  uVar6 = (param_1[1] - lVar1 >> 2) * 0xfc0fc0fc0fc0fc1 + 1;
  uVar3 = (param_1[2] - lVar1 >> 2) * 0xfc0fc0fc0fc0fc1;
  uVar4 = 0xfc0fc0fc0fc0fc - (uVar3 >> 1);
  uVar5 = (uVar3 >> 1) + uVar3;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
    uVar5 = 0xfc0fc0fc0fc0fc;
  }
  _Dst = (void *)FUN_1473c5e74(uVar5);
  memcpy((void *)((longlong)_Dst - lVar1),param_2,0x104);
  lVar2 = param_1[1];
  memmove(_Dst,(void *)*param_1,-*param_1);
  if (lVar2 != 0) {
    memmove((void *)(((longlong)_Dst - lVar1) + 0x104),(void *)0x0,param_1[1]);
  }
  FUN_1473c5df6(param_1,_Dst,uVar6,uVar5);
  return;
}



// FUNCTION 1473c5df6 FUN_1473c5df6 body=124 status=ok
// SIG undefined FUN_1473c5df6(void)

void FUN_1473c5df6(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x104 + param_2;
  param_1[2] = param_4 * 0x104 + param_2;
  return;
}



// FUNCTION 1473c5e74 FUN_1473c5e74 body=82 status=ok
// SIG undefined FUN_1473c5e74(void)

undefined8 FUN_1473c5e74(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0xfc0fc0fc0fc0fc < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xf < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0x104);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0x104,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1473c5ec8 FUN_1473c5ec8 body=82 status=ok
// SIG undefined FUN_1473c5ec8(void)

void FUN_1473c5ec8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1473c5f1c FUN_1473c5f1c body=207 status=ok
// SIG undefined FUN_1473c5f1c(void)

longlong FUN_1473c5f1c(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  uVar5 = (param_1[1] - lVar2 >> 3) + 1;
  uVar4 = param_1[2] - lVar2 >> 3;
  uVar6 = (uVar4 >> 1) + uVar4;
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  _Dst = (void *)FUN_1473c6056(param_1,uVar6);
  lVar1 = (longlong)_Dst + ((longlong)param_2 - lVar2);
  *(undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar2)) = *param_3;
  pvVar3 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar3 != param_2) {
    memmove((void *)(lVar1 + 8),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_1473c5fec(param_1,_Dst,uVar5,uVar6);
  return lVar1;
}



// FUNCTION 1473c5fec FUN_1473c5fec body=104 status=ok
// SIG undefined FUN_1473c5fec(void)

void FUN_1473c5fec(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 1473c6056 FUN_1473c6056 body=70 status=ok
// SIG undefined FUN_1473c6056(void)

undefined8 FUN_1473c6056(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_2) {
    uVar1 = FUN_140c1ca1d();
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = FUN_14001cc68(param_2 * 8,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1473c609e FUN_1473c609e body=201 status=ok
// SIG undefined FUN_1473c609e(void)

void FUN_1473c609e(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = (param_1[1] - lVar1 >> 3) + 1;
  uVar3 = param_1[2] - lVar1 >> 3;
  uVar5 = (uVar3 >> 1) + uVar3;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  _Dst = (void *)FUN_1473c6056(param_1,uVar5);
  *(undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 8),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_1473c5fec(param_1,_Dst,uVar4,uVar5);
  return;
}



// FUNCTION 1473c6168 FUN_1473c6168 body=82 status=ok
// SIG undefined FUN_1473c6168(void)

void FUN_1473c6168(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1473c61bb FUN_1473c61bb body=2194 status=ok
// SIG undefined FUN_1473c61bb(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1473c61bb(undefined8 param_1,undefined8 param_2,char *param_3,uint *param_4,int *param_5)

{
  char *_Str2;
  void *pvVar1;
  void *pvVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void **ppvVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_b28 [32];
  uint local_b08;
  uint local_b00;
  uint local_af0;
  uint local_aec;
  longlong local_ae8;
  ulonglong local_ae0;
  longlong local_ad8;
  char *local_ad0;
  uint *local_ac8;
  longlong local_ac0;
  undefined8 local_ab8;
  longlong local_ab0;
  ulonglong local_aa8;
  uint *local_aa0;
  longlong local_a98;
  longlong local_a90;
  undefined4 local_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined8 local_a78;
  undefined8 uStack_a70;
  longlong local_a68;
  longlong lStack_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  longlong *local_a48;
  longlong *local_a40;
  void *local_a38;
  longlong lStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  longlong local_a18;
  int iStack_a10;
  undefined4 uStack_a0c;
  undefined1 uStack_a08;
  undefined8 uStack_a07;
  longlong local_9f8;
  void *pvStack_9f0;
  void *local_9e8;
  longlong local_9d8;
  void *pvStack_9d0;
  void *local_9c8;
  longlong local_9b8;
  longlong lStack_9b0;
  undefined8 local_9a8;
  int local_99c [5];
  uint local_988;
  undefined1 local_650 [260];
  uint local_54c;
  undefined1 local_548 [256];
  undefined4 local_448 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b28;
  FUN_1473c4df8();
  local_99c[0] = 0;
  iVar4 = (*DAT_14ca78890)(param_2,0,local_99c,0);
  if (iVar4 != 0) goto LAB_1473c6214;
  local_9b8 = 0;
  lStack_9b0 = 0;
  local_9a8 = 0;
  if (local_99c[0] != 0) {
    FUN_1473c5410(&local_9b8);
  }
  iVar4 = (*DAT_14ca78890)(param_2,0,local_99c,local_9b8);
  if (iVar4 == 0) {
    if (local_99c[0] != 0) {
      FUN_1473c5410(&local_9b8);
    }
    lVar9 = 0;
LAB_1473c62ba:
    iVar4 = strncmp("VP_UE_Vulkan_ES3_1_Android" + lVar9,param_3,0x100);
    if (iVar4 != 0) goto code_r0x0001473c62d1;
    iVar4 = -0xd;
    if (lVar9 != -0x14a3635d0) {
      local_a48 = &local_9d8;
      local_9d8 = 0;
      pvStack_9d0 = (void *)0x0;
      local_9c8 = (void *)0x0;
      local_a40 = &local_9f8;
      local_9e8 = (void *)0x0;
      local_9f8 = 0;
      pvStack_9f0 = (void *)0x0;
      local_a38 = (void *)0x0;
      lStack_a30 = 0;
      local_a28 = (code *)0x0;
      uStack_a20 = 0;
      local_a18 = 0;
      iStack_a10 = 0;
      uStack_a0c = 0;
      uStack_a08 = 0;
      uStack_a07 = 0;
      local_ac8 = param_4;
      local_a50 = param_2;
      if (DAT_14ca788c8 == '\0') {
        lStack_a30 = DAT_14ca78898;
        local_a28 = (code *)CONCAT44(uRam000000014ca788a4,_DAT_14ca788a0);
        uStack_a20 = CONCAT44(uRam000000014ca788ac,_DAT_14ca788a8);
        local_a18 = DAT_14ca788b0;
        if (DAT_14ca78898 == 0) goto LAB_1473c63a1;
LAB_1473c647a:
        bVar16 = false;
      }
      else {
LAB_1473c63a1:
        lStack_a30 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFeatures2");
        local_a28 = (code *)(*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceProperties2");
        uStack_a20 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFormatProperties2");
        local_a18 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties2");
        if (lStack_a30 != 0) goto LAB_1473c647a;
        lStack_a30 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFeatures2KHR");
        local_a28 = (code *)(*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceProperties2KHR");
        uStack_a20 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceFormatProperties2KHR");
        local_a18 = (*DAT_14ca79380)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties2KHR");
        bVar16 = lStack_a30 == 0;
      }
      iVar4 = -7;
      if ((local_a18 != 0 && uStack_a20 != 0) && (local_a28 != (code *)0x0 && !bVar16)) {
        local_a68 = 0;
        lStack_a60 = 0;
        local_a58 = 0;
        local_ad0 = param_3;
        local_ab8 = param_2;
        FUN_1473c5d1a(&local_a68,param_3);
        local_af0 = (uint)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        local_ad8 = local_a68;
        if (lStack_a60 - local_a68 != 0) {
          local_ac0 = (lStack_a60 - local_a68 >> 2) * 0xfc0fc0fc0fc0fc1;
          local_ac0 = local_ac0 + (ulonglong)(local_ac0 == 0);
          local_a90 = local_9b8;
          local_a98 = (lStack_9b0 - local_9b8 >> 2) * 0xfc0fc0fc0fc0fc1;
          local_af0 = 0xc0fc0f01;
          lVar9 = 0;
          do {
            _Str2 = (char *)(local_ad8 + lVar9 * 0x104);
            lVar12 = 0;
            local_ab0 = lVar9;
            while (iVar4 = strncmp("VP_UE_Vulkan_ES3_1_Android" + lVar12,_Str2,0x100), iVar4 != 0) {
              lVar12 = lVar12 + 0x140;
              if (lVar12 == 0x780) {
                iVar4 = -0xd;
                goto LAB_1473c6549;
              }
            }
            bVar16 = *(uint *)(local_ad8 + 0x100 + lVar9 * 0x104) < 2;
            local_aec = (uint)CONCAT71((int7)((ulonglong)local_ad8 >> 8),bVar16);
            if (!bVar16) {
              local_b00 = *(uint *)(local_ad0 + 0x100);
              local_b08 = 1;
              FUN_14626ea25(local_448,0x3ff,
                            "Unsupported requested %s profile version: %u, profile supported at version %u"
                            ,_Str2);
            }
            memcpy(local_650,_Str2,0x104);
            uVar15 = *(uint *)((longlong)&DAT_14a3636d4 + lVar12);
            local_54c = uVar15;
            memset(local_99c + 1,0,0x348);
            local_99c[1] = 0x3b9bb079;
            (*local_a28)(local_ab8,local_99c + 1);
            uVar7 = local_988 >> 0x16 & 0x7f;
            uVar11 = uVar15 >> 0x16 & 0x7f;
            if ((uVar7 <= uVar11) &&
               ((uVar5 = uVar15 >> 0xc & 0x3ff, uVar7 != uVar11 ||
                ((local_988 >> 0xc & 0x3ff) < uVar5)))) {
              local_b00 = uVar15 & 0xfff;
              local_b08 = uVar5;
              FUN_14626ea25(local_448,0x3ff,"Unsupported API version: %u.%u.%u");
              local_aec = 0;
            }
            local_aa8 = (ulonglong)*(uint *)((longlong)&DAT_14a3636f0 + lVar12);
            if (local_aa8 != 0) {
              lVar9 = *(longlong *)((longlong)&PTR_DAT_14a3636f8 + lVar12);
              uVar10 = 0;
              local_ae8 = lVar9;
              do {
                if (*(int *)(lVar9 + uVar10 * 0x10) == 0) {
                  local_aec = 0;
                }
                else {
                  local_aa0 = (uint *)(uVar10 * 0x10 + lVar9);
                  uVar13 = 0;
                  local_ae0 = uVar10;
                  do {
                    pvVar1 = (void *)(*(longlong *)(local_aa0 + 2) + uVar13 * 0x1c0);
                    if (*(int *)(*(longlong *)(local_aa0 + 2) + 0x110 + uVar13 * 0x1c0) == 0) {
                      bVar14 = 1;
                    }
                    else {
                      bVar14 = 1;
                      lVar9 = 0;
                      uVar10 = 0;
                      do {
                        bVar3 = FUN_1473c5638(local_a90,local_a98,
                                              *(longlong *)((longlong)pvVar1 + 0x118) + lVar9);
                        bVar14 = bVar14 & bVar3;
                        uVar10 = uVar10 + 1;
                        lVar9 = lVar9 + 0x104;
                      } while (uVar10 < *(uint *)((longlong)pvVar1 + 0x110));
                    }
                    local_a38 = pvVar1;
                    memset(local_99c + 1,0,0xf0);
                    local_99c[1] = 0x3b9bb078;
                    (**(code **)((longlong)pvVar1 + 0x1a0))(local_99c + 1,&local_a50,FUN_1473c6a4e);
                    bVar3 = uStack_a07._7_1_;
                    memset(local_448,0,0x348);
                    local_448[0] = 0x3b9bb079;
                    (**(code **)((longlong)local_a38 + 0x1a8))(local_448,&local_a50,FUN_1473c6a8e);
                    bVar14 = bVar3 & uStack_a07._7_1_ & bVar14;
                    if ((*(int *)((longlong)local_a38 + 400) != 0) && (bVar14 != 0)) {
                      uVar15 = 1;
                      do {
                        iStack_a10 = uVar15 - 1;
                        local_a78 = 0;
                        uStack_a70 = 0;
                        local_a88 = 0x3b9bb07a;
                        uStack_a84 = 0;
                        uStack_a80 = 0;
                        uStack_a7c = 0;
                        (**(code **)((longlong)local_a38 + 0x1b8))
                                  (&local_a88,&local_a50,&LAB_1473c6ace);
                        bVar14 = uStack_a07._7_1_;
                        if (*(uint *)((longlong)local_a38 + 400) <= uVar15) break;
                        uVar15 = uVar15 + 1;
                      } while (uStack_a07._7_1_ != 0);
                    }
                    memcpy(local_548,pvVar1,0x100);
                    pvVar2 = pvStack_9d0;
                    pvVar1 = pvStack_9f0;
                    if (bVar14 != 0) {
                      if (pvStack_9d0 == local_9c8) {
                        FUN_1473c56ee(&local_9d8,pvStack_9d0,local_650);
                        lVar9 = local_ae8;
                        uVar10 = local_ae0;
                      }
                      else {
                        memcpy(pvStack_9d0,local_650,0x208);
                        pvStack_9d0 = (void *)((longlong)pvVar2 + 0x208);
                        lVar9 = local_ae8;
                        uVar10 = local_ae0;
                      }
                      goto LAB_1473c6956;
                    }
                    if (pvStack_9f0 == local_9e8) {
                      FUN_1473c56ee(&local_9f8,pvStack_9f0,local_650);
                    }
                    else {
                      memcpy(pvStack_9f0,local_650,0x208);
                      pvStack_9f0 = (void *)((longlong)pvVar1 + 0x208);
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < *local_aa0);
                  local_aec = 0;
                  lVar9 = local_ae8;
                  uVar10 = local_ae0;
                }
LAB_1473c6956:
                uVar10 = uVar10 + 1;
              } while (uVar10 != local_aa8);
            }
            local_af0 = local_af0 & 0xff;
            if ((local_aec & 1) == 0) {
              local_af0 = 0;
            }
            lVar9 = local_ab0 + 1;
          } while (lVar9 != local_ac0);
        }
        bVar16 = (local_af0 & 1) != 0;
        ppvVar6 = &pvStack_9f0;
        if (bVar16) {
          ppvVar6 = &pvStack_9d0;
        }
        plVar8 = &local_9f8;
        if (bVar16) {
          plVar8 = &local_9d8;
        }
        *param_5 = (int)((ulonglong)((longlong)*ppvVar6 - *plVar8) >> 3) * -0x3f03f03f;
        *local_ac8 = (uint)((byte)local_af0 & 1);
        iVar4 = 0;
LAB_1473c6549:
        FUN_1473c5ec8(&local_a68);
      }
      FUN_1473c58a6(&local_9f8);
      FUN_1473c58a6(&local_9d8);
    }
  }
  goto LAB_1473c62e6;
code_r0x0001473c62d1:
  lVar9 = lVar9 + 0x140;
  if (lVar9 == 0x780) goto code_r0x0001473c62e1;
  goto LAB_1473c62ba;
code_r0x0001473c62e1:
  iVar4 = -0xd;
LAB_1473c62e6:
  FUN_1473c58fa(&local_9b8);
LAB_1473c6214:
  if ((local_48 ^ (ulonglong)auStack_b28) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1473c6a4e FUN_1473c6a4e body=64 status=ok
// SIG undefined FUN_1473c6a4e(void)

void FUN_1473c6a4e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  (*(code *)param_2[4])(*param_2,param_1);
  *(undefined1 *)(param_2 + 10) = 1;
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 8)) {
    cVar1 = (**(code **)(param_2[3] + 0x138))(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_2 + 10) = 0;
    }
  }
  return;
}



// FUNCTION 1473c6a8e FUN_1473c6a8e body=64 status=ok
// SIG undefined FUN_1473c6a8e(void)

void FUN_1473c6a8e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  (*(code *)param_2[5])(*param_2,param_1);
  *(undefined1 *)(param_2 + 10) = 1;
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 8)) {
    cVar1 = (**(code **)(param_2[3] + 0x158))(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_2 + 10) = 0;
    }
  }
  return;
}



// FUNCTION 1473c6ad4 FUN_1473c6ad4 body=97 status=ok
// SIG undefined FUN_1473c6ad4(void)

void FUN_1473c6ad4(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  (*(code *)param_2[6])
            (*param_2,*(undefined4 *)
                       (*(longlong *)(param_2[3] + 0x198) + (ulonglong)*(uint *)(param_2 + 8) * 0x18
                       ),param_1);
  *(undefined1 *)(param_2 + 10) = 1;
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 8)) {
    cVar1 = (**(code **)(*(longlong *)(param_2[3] + 0x198) + 0x10 +
                        (ulonglong)*(uint *)(param_2 + 8) * 0x18))(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_2 + 10) = 0;
    }
  }
  return;
}



// FUNCTION 1473c6b36 FUN_1473c6b36 body=125 status=ok
// SIG undefined FUN_1473c6b36(void)

void FUN_1473c6b36(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 3,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 3)) {
    uVar3 = uVar2 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,8,8);
  return;
}



// FUNCTION 1473c6bb4 FUN_1473c6bb4 body=38 status=ok
// SIG undefined FUN_1473c6bb4(void)

undefined8 FUN_1473c6bb4(undefined8 param_1,int param_2)

{
  FUN_1473c6bf6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


