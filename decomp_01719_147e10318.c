// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e10318 FUN_147e10318 body=142 status=ok
// SIG undefined FUN_147e10318(void)

void FUN_147e10318(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab41bb0;
  FUN_147e10442(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab41b40;
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar4;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e10396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e103a6 FUN_147e103a6 body=74 status=ok
// SIG undefined FUN_147e103a6(void)

void FUN_147e103a6(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(param_1 + 0x30);
  FUN_147e104b6(param_1 + 8,param_1 + 0x38);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e103f2 FUN_147e103f2 body=76 status=ok
// SIG undefined FUN_147e103f2(void)

undefined8 FUN_147e103f2(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(param_1 + 0x30);
  FUN_147e104b6(param_1 + 8,param_1 + 0x38);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e10442 FUN_147e10442 body=115 status=ok
// SIG undefined FUN_147e10442(void)

undefined1 * FUN_147e10442(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  param_1[0x18] = param_2[0x18];
  return param_1;
}



// FUNCTION 147e104b6 FUN_147e104b6 body=172 status=ok
// SIG undefined FUN_147e104b6(void)

void FUN_147e104b6(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar2 = (code *)*param_2;
  uVar3 = *param_3;
  uVar1 = param_1[0x18];
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_1 + 0x10);
  lVar4 = (longlong)local_48;
  _Src = *(void **)(param_1 + 8);
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar4 * 2);
  }
  local_58 = uVar1;
  (*pcVar2)(uVar3,*param_1,param_1[1],&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e10564 FUN_147e10564 body=132 status=ok
// SIG undefined FUN_147e10564(void)

void FUN_147e10564(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e105ea FUN_147e105ea body=98 status=ok
// SIG undefined FUN_147e105ea(void)

void FUN_147e105ea(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147e1064c FUN_147e1064c body=145 status=ok
// SIG undefined FUN_147e1064c(void)

void FUN_147e1064c(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar6[-1] = *(undefined8 *)(param_2 + 4);
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(puVar6 + -3) = *param_2;
      *(undefined4 *)((longlong)puVar6 + -0x14) = uVar2;
      *(undefined4 *)(puVar6 + -2) = uVar3;
      *(undefined4 *)((longlong)puVar6 + -0xc) = uVar4;
      *puVar6 = 0;
      iVar1 = param_2[8];
      _Src = *(void **)(param_2 + 6);
      *(int *)(puVar6 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        FUN_1447a127e(puVar6,iVar1,0);
        memcpy((void *)*puVar6,_Src,(longlong)iVar1);
      }
      *(undefined4 *)(puVar6 + 4) = param_2[0xe];
      uVar5 = *(undefined8 *)(param_2 + 0xc);
      puVar6[2] = *(undefined8 *)(param_2 + 10);
      puVar6[3] = uVar5;
      param_2 = param_2 + 0x10;
      puVar6 = puVar6 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147e106de FUN_147e106de body=48 status=ok
// SIG undefined FUN_147e106de(void)

void FUN_147e106de(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 147e1070e FUN_147e1070e body=261 status=ok
// SIG undefined FUN_147e1070e(void)

undefined8 * FUN_147e1070e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14704169a();
  *param_1 = &PTR_FUN_14ab41c20;
  param_1[1] = &PTR_FUN_14ab41d58;
  param_1[2] = &PTR_FUN_14ab41d70;
  *(undefined2 *)(param_1 + 0x39) = 0;
  FUN_1477b2c98(&local_28);
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1477b2d5a(*local_28);
  }
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  param_1[0x3a] = uVar1;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  FUN_147042096(param_1 + 0x3d);
  param_1[0x46] = 0;
  FUN_140056680(&local_28,L"AudioLink AudioMixer");
  FUN_147e10814(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e10814 FUN_147e10814 body=166 status=ok
// SIG undefined FUN_147e10814(void)

void FUN_147e10814(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  FUN_147042096(param_1 + 0x1e8);
  FUN_144a787a6(param_1 + 0x1e8,param_2);
  FUN_144a787a6(param_1 + 0x1f8,param_2);
  *(undefined8 *)(param_1 + 0x210) = 0x10000bb80;
  *(undefined4 *)(param_1 + 0x208) = 8;
  *(byte *)(param_1 + 0x228) = *(byte *)(param_1 + 0x228) | 1;
  plVar1 = (longlong *)(param_1 + 0x218);
  FUN_147e10e7c(plVar1);
  iVar3 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x220);
    *(uint *)(param_1 + 0x220) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x224) < iVar2 + 1U) {
      FUN_1477b22f8(plVar1,iVar2);
    }
    *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  return;
}



// FUNCTION 147e108ba FUN_147e108ba body=690 status=ok
// SIG undefined FUN_147e108ba(void)

undefined8 FUN_147e108ba(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  longlong *local_90;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar5 = FUN_147041c0a();
  if (cVar5 != '\0') {
    local_78 = 0;
    local_68 = &PTR_LAB_149e01e20;
    local_60 = &DAT_1437d98e2;
    local_88[0] = FUN_140d11fbe;
    FUN_147041b12(param_1,local_88,0x3f800000,1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x48))(*(longlong **)(param_1 + 0x1d0),&local_98);
  plVar3 = local_90;
  if ((undefined8 **)(param_1 + 0x1d8) != &local_98) {
    *(undefined8 **)(param_1 + 0x1d8) = local_98;
    local_98 = (undefined8 *)0x0;
    plVar2 = *(longlong **)(param_1 + 0x1e0);
    if (local_90 != plVar2) {
      local_90 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x1e0) = plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar2 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  plVar3 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_90 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(undefined8 **)(param_1 + 0x1d8);
  if (plVar3 != (longlong *)0x0) {
    local_98 = (undefined8 *)0x0;
    local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar4 = local_98;
    local_90._0_4_ = 3;
    *local_98 = &PTR_LAB_14ab41ea0;
    uVar6 = FUN_144a3f946();
    puVar4[2] = uVar6;
    *puVar4 = &PTR_FUN_14ab41e30;
    puVar4[3] = param_1;
    puVar4[4] = &DAT_147e10b6e;
    *(undefined4 *)(puVar4 + 5) = 0;
    (**(code **)(*plVar3 + 0x48))(plVar3,local_a0,&local_98);
    FUN_1449db362(&local_98);
    plVar3 = *(longlong **)(param_1 + 0x1d8);
    local_98 = (undefined8 *)0x0;
    local_90._0_4_ = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar4 = local_98;
    local_90._0_4_ = 3;
    *local_98 = &PTR_LAB_14ab41ea0;
    uVar6 = FUN_144a3f946();
    puVar4[2] = uVar6;
    *puVar4 = &PTR_FUN_14ab41e30;
    puVar4[3] = param_1;
    puVar4[4] = &LAB_1437d98a8;
    *(undefined4 *)(puVar4 + 5) = 0;
    (**(code **)(*plVar3 + 0x58))(plVar3,local_a0,&local_98);
    FUN_1449db362(&local_98);
    plVar3 = *(longlong **)(param_1 + 0x1d8);
    local_98 = (undefined8 *)0x0;
    local_90._0_4_ = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar4 = local_98;
    local_90 = (longlong *)CONCAT44(local_90._4_4_,3);
    *local_98 = &PTR_LAB_14ab41f80;
    uVar6 = FUN_144a3f946();
    puVar4[2] = uVar6;
    *puVar4 = &PTR_FUN_14ab41f10;
    puVar4[3] = param_1;
    puVar4[4] = FUN_147e10b70;
    *(undefined4 *)(puVar4 + 5) = 0;
    (**(code **)(*plVar3 + 0x28))(plVar3,local_a0,&local_98);
    FUN_1449db362(&local_98);
  }
  *(undefined1 *)(param_1 + 0x1c9) = 1;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e10b70 FUN_147e10b70 body=49 status=ok
// SIG undefined FUN_147e10b70(void)

void FUN_147e10b70(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x18);
  return;
}



// FUNCTION 147e10ba2 FUN_147e10ba2 body=102 status=ok
// SIG undefined FUN_147e10ba2(void)

undefined8 FUN_147e10ba2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*param_1 + 0xa8))();
  (**(code **)(*param_1 + 0x98))(param_1);
  param_1[0x3b] = 0;
  plVar3 = (longlong *)param_1[0x3c];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x3c] = 0;
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
  return 1;
}



// FUNCTION 147e10c1a FUN_147e10c1a body=26 status=ok
// SIG undefined FUN_147e10c1a(void)

undefined1 FUN_147e10c1a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147e10c34(param_3,param_1 + 0x1e8);
  return 1;
}



// FUNCTION 147e10c34 FUN_147e10c34 body=77 status=ok
// SIG undefined FUN_147e10c34(void)

longlong FUN_147e10c34(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_147e10fa2(param_1 + 0x30,param_2 + 0x30);
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfe | *(byte *)(param_2 + 0x40) & 1;
  return param_1;
}



// FUNCTION 147e10c8c FUN_147e10c8c body=165 status=ok
// SIG undefined FUN_147e10c8c(void)

undefined8 FUN_147e10c8c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  
  if (*(char *)((longlong)param_1 + 0x1c9) == '\x01') {
    uVar5 = 0;
    if ((int)param_1[0xd] == 0) {
      *(undefined4 *)(param_1 + 3) = 0;
      FUN_147042096(param_1 + 4);
      *(undefined4 *)(param_1 + 0xd) = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 2;
      cVar4 = (**(code **)(*param_1 + 0x68))(param_1,(int)*param_2,param_1 + 4);
      if (cVar4 != '\0') {
        param_1[0x14] = param_2[4];
        lVar1 = *param_2;
        lVar2 = param_2[1];
        lVar3 = param_2[3];
        param_1[0x12] = param_2[2];
        param_1[0x13] = lVar3;
        param_1[0x10] = lVar1;
        param_1[0x11] = lVar2;
        param_1[0xe] = param_2[2];
        *(int *)(param_1 + 0xf) = (int)param_2[1];
        *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 4);
        *(undefined4 *)(param_1 + 0xd) = 1;
        uVar5 = 1;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 147e10d32 FUN_147e10d32 body=46 status=ok
// SIG undefined FUN_147e10d32(void)

undefined8 FUN_147e10d32(longlong *param_1)

{
  char cVar1;
  
  if (((int)param_1[0xd] != 0) && (cVar1 = (**(code **)(*param_1 + 0xa8))(), cVar1 != '\0')) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 147e10d60 FUN_147e10d60 body=72 status=ok
// SIG undefined FUN_147e10d60(void)

undefined8 FUN_147e10d60(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x1c9) == '\x01') && (*(int *)(param_1 + 0x68) - 1U < 2)) {
    FUN_142af76d4(param_1);
    if (*(longlong *)(param_1 + 0x1d8) == 0) {
      FUN_142af70cc(param_1);
    }
    *(undefined4 *)(param_1 + 0x68) = 4;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 147e10da8 FUN_147e10da8 body=59 status=ok
// SIG undefined FUN_147e10da8(void)

undefined8 FUN_147e10da8(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x68) & 0xfffffffd) != 0) {
    if (*(int *)(param_1 + 0x1b0) != 0) {
      FUN_142af7238(param_1);
    }
    if (*(int *)(param_1 + 0x68) == 4) {
      FUN_142af7820(param_1);
    }
  }
  return 1;
}



// FUNCTION 147e10de4 FUN_147e10de4 body=29 status=ok
// SIG undefined FUN_147e10de4(void)

undefined8 FUN_147e10de4(longlong param_1,undefined8 param_2)

{
  FUN_1477b1d4c(param_2,param_1 + 0x20);
  return param_2;
}



// FUNCTION 147e10e02 FUN_147e10e02 body=89 status=ok
// SIG undefined FUN_147e10e02(void)

undefined8 * FUN_147e10e02(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x1f0);
  _Src = *(void **)(param_1 + 0x1e8);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147e10e5c FUN_147e10e5c body=32 status=ok
// SIG undefined FUN_147e10e5c(void)

undefined8 FUN_147e10e5c(undefined8 param_1,undefined8 param_2)

{
  FUN_147041d92(param_2,L"/Script/WindowsTargetPlatform.WindowsTargetSettings");
  return param_2;
}



// FUNCTION 147e10e7c FUN_147e10e7c body=117 status=ok
// SIG undefined FUN_147e10e7c(void)

void FUN_147e10e7c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 8) {
    *(undefined4 *)(param_1 + 1) = 8;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8U - iVar1) {
      FUN_1477b22f8(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(ulonglong)(8U - iVar1) << 2);
    return;
  }
  if (iVar1 == 8) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 8;
  FUN_147e1138e(param_1);
  return;
}



// FUNCTION 147e10ef2 FUN_147e10ef2 body=43 status=ok
// SIG undefined FUN_147e10ef2(void)

undefined8 FUN_147e10ef2(undefined8 param_1,int param_2)

{
  FUN_147e11656();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 147e10f1e FUN_147e10f1e body=32 status=ok
// SIG undefined FUN_147e10f1e(void)

undefined8 FUN_147e10f1e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"AudioLink");
  return param_2;
}



// FUNCTION 147e10f3e FUN_147e10f3e body=50 status=ok
// SIG undefined FUN_147e10f3e(void)

longlong FUN_147e10f3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_147e11656(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 147e10f70 FUN_147e10f70 body=50 status=ok
// SIG undefined FUN_147e10f70(void)

longlong FUN_147e10f70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_147e11656(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 147e10fa2 FUN_147e10fa2 body=88 status=ok
// SIG undefined FUN_147e10fa2(void)

undefined8 * FUN_147e10fa2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1477b2074(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147e10ffa FUN_147e10ffa body=34 status=ok
// SIG undefined FUN_147e10ffa(void)

undefined8 FUN_147e10ffa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147e11044 FUN_147e11044 body=101 status=ok
// SIG undefined FUN_147e11044(void)

void FUN_147e11044(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab41ea0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab41e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e110aa FUN_147e110aa body=101 status=ok
// SIG undefined FUN_147e110aa(void)

void FUN_147e110aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab41ea0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab41e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e11110 FUN_147e11110 body=133 status=ok
// SIG undefined FUN_147e11110(void)

void FUN_147e11110(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab41ea0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab41e30;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e11186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e111a8 FUN_147e111a8 body=25 status=ok
// SIG undefined FUN_147e111a8(void)

undefined8 FUN_147e111a8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e111c4 FUN_147e111c4 body=34 status=ok
// SIG undefined FUN_147e111c4(void)

undefined8 FUN_147e111c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147e1120e FUN_147e1120e body=101 status=ok
// SIG undefined FUN_147e1120e(void)

void FUN_147e1120e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab41f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab41f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e11274 FUN_147e11274 body=101 status=ok
// SIG undefined FUN_147e11274(void)

void FUN_147e11274(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab41f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab41f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e112da FUN_147e112da body=133 status=ok
// SIG undefined FUN_147e112da(void)

void FUN_147e112da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab41f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab41f10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e11350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e11372 FUN_147e11372 body=25 status=ok
// SIG undefined FUN_147e11372(void)

undefined8 FUN_147e11372(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e1138e FUN_147e1138e body=62 status=ok
// SIG undefined FUN_147e1138e(void)

void FUN_147e1138e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e113cc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 147e113cc FUN_147e113cc body=93 status=ok
// SIG undefined FUN_147e113cc(void)

ulonglong FUN_147e113cc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147e1142a FUN_147e1142a body=29 status=ok
// SIG undefined FUN_147e1142a(void)

void FUN_147e1142a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ab42060;
  return;
}



// FUNCTION 147e11448 FUN_147e11448 body=36 status=ok
// SIG undefined FUN_147e11448(void)

undefined8 FUN_147e11448(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147e11488 FUN_147e11488 body=93 status=ok
// SIG undefined FUN_147e11488(void)

void FUN_147e11488(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab41ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e114e6 FUN_147e114e6 body=125 status=ok
// SIG undefined FUN_147e114e6(void)

void FUN_147e114e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab41ff0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e11554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e11570 FUN_147e11570 body=21 status=ok
// SIG undefined FUN_147e11570(void)

undefined8 FUN_147e11570(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e11586 FUN_147e11586 body=34 status=ok
// SIG undefined FUN_147e11586(void)

undefined8 FUN_147e11586(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147e115a8 FUN_147e115a8 body=95 status=ok
// SIG undefined FUN_147e115a8(void)

void FUN_147e115a8(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_20,L"AudioMixerCore",1);
  FUN_14493e38c(uVar1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1160c FUN_147e1160c body=48 status=ok
// SIG undefined FUN_147e1160c(void)

void FUN_147e1160c(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14494321d(0xe50);
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  FUN_1477ba824(uVar1,uVar2);
  return;
}



// FUNCTION 147e1163c FUN_147e1163c body=26 status=ok
// SIG undefined FUN_147e1163c(void)

void FUN_147e1163c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14494321d(0x238);
  FUN_147e1070e(uVar1);
  return;
}



// FUNCTION 147e11656 FUN_147e11656 body=108 status=ok
// SIG undefined FUN_147e11656(void)

void FUN_147e11656(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab41c20;
  param_1[1] = &PTR_FUN_14ab41d58;
  param_1[2] = &PTR_FUN_14ab41d70;
  FUN_147041ad4(param_1 + 0x3d);
  plVar3 = (longlong *)param_1[0x3c];
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
  FUN_14704184c(param_1);
  return;
}



// FUNCTION 147e116c2 FUN_147e116c2 body=200 status=ok
// SIG undefined FUN_147e116c2(void)

undefined8 * FUN_147e116c2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = param_2[1];
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  if (param_1 != param_2) {
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = param_2[8];
    param_2[8] = 0;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
  }
  return param_1;
}



// FUNCTION 147e1178a FUN_147e1178a body=100 status=ok
// SIG undefined FUN_147e1178a(void)

undefined8 * FUN_147e1178a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  FUN_147e10fa2(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 147e117ee FUN_147e117ee body=123 status=ok
// SIG undefined FUN_147e117ee(void)

undefined8 * FUN_147e117ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(&local_20,iVar1,*param_2,1);
  *param_1 = local_20;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 10));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1186a FUN_147e1186a body=166 status=ok
// SIG undefined FUN_147e1186a(void)

undefined8 * FUN_147e1186a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab42340;
  param_1[1] = &PTR_FUN_14ab423a0;
  param_1[2] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 3));
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  CoCreateInstance((IID *)&DAT_14ab423d0,(LPUNKNOWN)0x0,1,(IID *)&DAT_14ab423c0,
                   (LPVOID *)(param_1 + 2));
  FUN_1437d99d6(param_1);
  FUN_1437d9c6a(param_1);
  return param_1;
}



// FUNCTION 147e11910 FUN_147e11910 body=155 status=ok
// SIG undefined FUN_147e11910(void)

void FUN_147e11910(short *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(int *)(param_2 + 0x4c) != 0) {
    FUN_1470420ee(plVar1,0);
  }
  if (*param_1 == -2) {
    FUN_1437d9e4a(*(undefined4 *)(param_1 + 10),param_2);
    return;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  *(uint *)(param_2 + 0x48) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x4c) < iVar2 + 1U) {
    FUN_1477b22f8(plVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0x40) + (longlong)iVar2 * 4) = 0;
  if (*(int *)(param_2 + 0x2c) == 2) {
    iVar2 = *(int *)(param_2 + 0x48);
    *(uint *)(param_2 + 0x48) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x4c) < iVar2 + 1U) {
      FUN_1477b22f8(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 1;
  }
  return;
}



// FUNCTION 147e119ac FUN_147e119ac body=150 status=ok
// SIG undefined FUN_147e119ac(void)

undefined8 FUN_147e119ac(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  iVar1 = (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,&DAT_14ab42478);
  uVar2 = 0;
  if (-1 < iVar1) {
    local_1c = 0;
    iVar1 = (**(code **)(*local_18 + 0x18))();
    if (-1 < iVar1) {
      if (local_1c == 0) {
        uVar2 = 1;
      }
      else if (local_1c == 1) {
        uVar2 = 2;
      }
    }
  }
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e11a44 FUN_147e11a44 body=62 status=ok
// SIG undefined FUN_147e11a44(void)

void FUN_147e11a44(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
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



// FUNCTION 147e11a82 FUN_147e11a82 body=135 status=ok
// SIG undefined FUN_147e11a82(void)

void FUN_147e11a82(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  if (*(int *)(param_3 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_30,puVar1,1);
  *(undefined8 *)(param_1 + 0x70 + (longlong)param_2 * 8) = local_30;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e11b0a FUN_147e11b0a body=138 status=ok
// SIG undefined FUN_147e11b0a(void)

void FUN_147e11b0a(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  if (*(int *)(param_3 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_30,puVar1,1);
  *(undefined8 *)(param_1 + 0x88 + (longlong)param_2 * 8) = local_30;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e11b96 FUN_147e11b96 body=262 status=ok
// SIG undefined FUN_147e11b96(void)

longlong FUN_147e11b96(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  undefined1 local_80 [88];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    if (*(int *)(param_3 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_3;
    }
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,puVar3,&local_28);
    if (-1 < iVar2) {
      if (*(int *)(param_3 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_3;
      }
      FUN_140056680(local_90,puVar3);
      FUN_147e117ee(local_80,local_90);
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1437d9f78(&local_28,local_80);
      FUN_147e11c9e(param_2,local_80);
      FUN_147e11a44(local_80);
    }
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (-1 < iVar2) goto LAB_147e11c0f;
  }
  *(undefined1 *)(param_2 + 0x58) = 0;
LAB_147e11c0f:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e11c9e FUN_147e11c9e body=72 status=ok
// SIG undefined FUN_147e11c9e(void)

undefined8 * FUN_147e11c9e(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 10));
  FUN_147e116c2(param_1,param_2);
  *(undefined1 *)(param_1 + 0xb) = 1;
  return param_1;
}



// FUNCTION 147e11ce6 FUN_147e11ce6 body=222 status=ok
// SIG undefined FUN_147e11ce6(void)

void FUN_147e11ce6(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147042096(param_3);
  FUN_144a787a6(param_3,param_1 + 1);
  FUN_14029eeae(param_1,&local_38);
  if ((longlong *)(param_3 + 0x10) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 0x10) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 0x18) = local_30;
    *(undefined4 *)(param_3 + 0x1c) = local_2c;
  }
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(int *)(param_3 + 0x28) = (int)param_1[6];
  FUN_147e10fa2(param_3 + 0x30,param_1 + 8);
  *(undefined4 *)(param_3 + 0x2c) = 1;
  *(byte *)(param_3 + 0x40) = *(byte *)(param_3 + 0x40) & 0xfe | *param_1 == param_2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e11dc6 FUN_147e11dc6 body=26 status=ok
// SIG undefined FUN_147e11dc6(void)

undefined8 FUN_147e11dc6(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 8))(param_1,param_2,0);
  return param_2;
}



// FUNCTION 147e11de0 FUN_147e11de0 body=192 status=ok
// SIG undefined FUN_147e11de0(void)

byte FUN_147e11de0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_147e11ea2(param_1,&local_30,&local_40);
  if (local_30 != (longlong *)0x0) {
    uVar1 = FUN_1437daa40(param_1,&local_30);
    _Src = (void *)(ulonglong)uVar1;
    (**(code **)(*local_30 + 0x10))(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_30 != (longlong *)0x0 & (byte)_Src;
}



// FUNCTION 147e11ea2 FUN_147e11ea2 body=152 status=ok
// SIG undefined FUN_147e11ea2(void)

undefined8 * FUN_147e11ea2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
  if ((int)param_3[1] == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                    (*(longlong **)(param_1 + 0x70),puVar2,&local_20);
  if (iVar1 < 0) {
    *param_2 = 0;
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  else {
    *param_2 = local_20;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e11f54 FUN_147e11f54 body=58 status=ok
// SIG undefined FUN_147e11f54(void)

void FUN_147e11f54(longlong param_1,undefined8 param_2)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x68));
  FUN_147e11f8e(param_1 + 0x18,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147e11f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x68));
  return;
}



// FUNCTION 147e11f8e FUN_147e11f8e body=132 status=ok
// SIG undefined FUN_147e11f8e(void)

void FUN_147e11f8e(longlong *param_1,ulonglong param_2)

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
          FUN_147e132ce(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147e12012 FUN_147e12012 body=105 status=ok
// SIG undefined FUN_147e12012(void)

void FUN_147e12012(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x68));
  FUN_147e1339a(param_1 + 0x18,local_2c,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147e1206f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x68));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e12098 FUN_147e12098 body=66 status=ok
// SIG undefined FUN_147e12098(void)

int FUN_147e12098(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (param_1 != 0 && iVar2 + -1 == 0) {
    FUN_147e120da(param_1);
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return iVar2 + -1;
}



// FUNCTION 147e120da FUN_147e120da body=161 status=ok
// SIG undefined FUN_147e120da(void)

void FUN_147e120da(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1437dab28();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  }
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    CoUninitialize();
  }
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_147e13814(param_1 + 0x18);
  return;
}



// FUNCTION 147e1217c FUN_147e1217c body=67 status=ok
// SIG undefined FUN_147e1217c(void)

int FUN_147e1217c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = param_1 + -8;
  if (param_1 != 0 && iVar2 + -1 == 0) {
    FUN_147e120da(param_1);
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return iVar2 + -1;
}



// FUNCTION 147e12232 FUN_147e12232 body=266 status=ok
// SIG undefined FUN_147e12232(void)

ulonglong FUN_147e12232(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  undefined7 uVar3;
  ulonglong uVar2;
  longlong lVar4;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong *local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar4 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar4 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar4 * 2);
  }
  FUN_147e11ea2(param_1,&local_30,&local_40);
  uVar3 = (undefined7)((ulonglong)_Src >> 8);
  if (local_30 == (longlong *)0x0) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    local_48 = (longlong *)0x0;
    iVar1 = (**(code **)*local_30)(local_30,&DAT_14ab42478);
    if (iVar1 < 0) {
      uVar2 = CONCAT71(uVar3,1);
    }
    else {
      local_4c = 0;
      iVar1 = (**(code **)(*local_48 + 0x18))(local_48,&local_4c);
      uVar2 = CONCAT71(uVar3,local_4c == 0 || iVar1 < 0);
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    (**(code **)(*local_30 + 0x10))(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1233e FUN_147e1233e body=334 status=ok
// SIG undefined FUN_147e1233e(void)

undefined8 * FUN_147e1233e(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  HRESULT HVar3;
  int iVar4;
  undefined1 auStackY_78 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStackY_78;
  *param_1 = &PTR_LAB_14ab424b0;
  param_1[1] = &PTR_LAB_14ab424f0;
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xd));
  param_1[0xe] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  *(undefined1 *)((longlong)param_1 + 0xb9) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar2 = FUN_14593c384(0);
  *(undefined1 *)(param_1 + 0x17) = uVar2;
  HVar3 = CoCreateInstance((IID *)&DAT_14ab423d0,(LPUNKNOWN)0x0,1,(IID *)&DAT_14ab423c0,
                           (LPVOID *)(param_1 + 0xe));
  if (HVar3 == 0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],param_1);
  }
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 != (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    iVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0,0);
    if (-1 < iVar4) {
      FUN_1437daa40(param_1,&local_48);
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStackY_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1248e FUN_147e1248e body=43 status=ok
// SIG undefined FUN_147e1248e(void)

undefined8 FUN_147e1248e(undefined8 param_1,int param_2)

{
  FUN_147e138a2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 147e124ba FUN_147e124ba body=50 status=ok
// SIG undefined FUN_147e124ba(void)

longlong FUN_147e124ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_147e138a2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 147e124ec FUN_147e124ec body=93 status=ok
// SIG undefined FUN_147e124ec(void)

longlong FUN_147e124ec(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_147e1254a(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 147e1254a FUN_147e1254a body=386 status=ok
// SIG undefined FUN_147e1254a(void)

longlong * FUN_147e1254a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        FUN_147e11a44(*local_78 + (longlong)iVar6 * 0x68 + 8);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e126ce FUN_147e126ce body=52 status=ok
// SIG undefined FUN_147e126ce(void)

void FUN_147e126ce(longlong *param_1)

{
  FUN_147e12702();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e12702 FUN_147e12702 body=310 status=ok
// SIG undefined FUN_147e12702(void)

void FUN_147e12702(longlong *param_1)

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
      FUN_147e11a44(*local_68 + (longlong)iStack_4c * 0x68 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
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



// FUNCTION 147e1283a FUN_147e1283a body=34 status=ok
// SIG undefined FUN_147e1283a(void)

void FUN_147e1283a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab425f0;
  return;
}



// FUNCTION 147e1285c FUN_147e1285c body=36 status=ok
// SIG undefined FUN_147e1285c(void)

undefined8 FUN_147e1285c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147e1289c FUN_147e1289c body=93 status=ok
// SIG undefined FUN_147e1289c(void)

void FUN_147e1289c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab42580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e128fa FUN_147e128fa body=126 status=ok
// SIG undefined FUN_147e128fa(void)

void FUN_147e128fa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab42580;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e12969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e12984 FUN_147e12984 body=21 status=ok
// SIG undefined FUN_147e12984(void)

undefined8 FUN_147e12984(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e1299a FUN_147e1299a body=34 status=ok
// SIG undefined FUN_147e1299a(void)

undefined8 FUN_147e1299a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147e129c0 FUN_147e129c0 body=333 status=ok
// SIG undefined FUN_147e129c0(void)

undefined4 * FUN_147e129c0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e12b0e(param_1,local_48);
  FUN_147e12c8e(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_147e12bf0(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 100) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147e12d54(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e12b0e FUN_147e12b0e body=226 status=ok
// SIG undefined FUN_147e12b0e(void)

int * FUN_147e12b0e(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 147e12bf0 FUN_147e12bf0 body=158 status=ok
// SIG undefined FUN_147e12bf0(void)

undefined8 FUN_147e12bf0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x68);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x68) == *param_3) {
          FUN_147e11a44((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x60);
          FUN_147e12ce0(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x60);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147e12c8e FUN_147e12c8e body=81 status=ok
// SIG undefined FUN_147e12c8e(void)

undefined8 * FUN_147e12c8e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xb));
  FUN_147e1178a(param_1 + 1,param_3);
  return param_1;
}



// FUNCTION 147e12ce0 FUN_147e12ce0 body=116 status=ok
// SIG undefined FUN_147e12ce0(void)

void FUN_147e12ce0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 147e12d54 FUN_147e12d54 body=473 status=ok
// SIG undefined FUN_147e12d54(void)

void FUN_147e12d54(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x68;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 100 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar7) =
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



// FUNCTION 147e12f2e FUN_147e12f2e body=333 status=ok
// SIG undefined FUN_147e12f2e(void)

undefined4 * FUN_147e12f2e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e12b0e(param_1,local_48);
  FUN_147e1307c(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_147e12bf0(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 100) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147e12d54(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1307c FUN_147e1307c body=81 status=ok
// SIG undefined FUN_147e1307c(void)

undefined8 * FUN_147e1307c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xb));
  FUN_147e116c2(param_1 + 1,param_3);
  return param_1;
}



// FUNCTION 147e130ce FUN_147e130ce body=132 status=ok
// SIG undefined FUN_147e130ce(void)

void FUN_147e130ce(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x68) == param_2) {
          FUN_147e13152(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x68 + *param_1 + 0x60);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147e13152 FUN_147e13152 body=120 status=ok
// SIG undefined FUN_147e13152(void)

void FUN_147e13152(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x68;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 100 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x60 + lVar6 * 0x68);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x68 + 0x60);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x60);
  FUN_147e11a44(*param_1 + lVar2 + 8);
  FUN_147e12ce0(param_1,param_2);
  return;
}



// FUNCTION 147e131ca FUN_147e131ca body=112 status=ok
// SIG undefined FUN_147e131ca(void)

void FUN_147e131ca(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 147e1323a FUN_147e1323a body=147 status=ok
// SIG undefined FUN_147e1323a(void)

void FUN_147e1323a(longlong param_1,int param_2)

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



// FUNCTION 147e132ce FUN_147e132ce body=90 status=ok
// SIG undefined FUN_147e132ce(void)

void FUN_147e132ce(longlong *param_1,int param_2)

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
  FUN_147e13328();
  return;
}



// FUNCTION 147e13328 FUN_147e13328 body=114 status=ok
// SIG undefined FUN_147e13328(void)

void FUN_147e13328(longlong *param_1,int param_2)

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



// FUNCTION 147e1339a FUN_147e1339a body=312 status=ok
// SIG undefined FUN_147e1339a(void)

undefined4 * FUN_147e1339a(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_147e134d4(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147e135ba(param_1,uVar3,local_40,&local_4c);
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
      FUN_147e13636(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e134d4 FUN_147e134d4 body=229 status=ok
// SIG undefined FUN_147e134d4(void)

int * FUN_147e134d4(longlong *param_1,int *param_2)

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



// FUNCTION 147e135ba FUN_147e135ba body=124 status=ok
// SIG undefined FUN_147e135ba(void)

undefined8 FUN_147e135ba(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147e13328(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147e13636 FUN_147e13636 body=477 status=ok
// SIG undefined FUN_147e13636(void)

void FUN_147e13636(longlong *param_1)

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



// FUNCTION 147e13814 FUN_147e13814 body=52 status=ok
// SIG undefined FUN_147e13814(void)

void FUN_147e13814(longlong *param_1)

{
  FUN_147e13848();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e13848 FUN_147e13848 body=89 status=ok
// SIG undefined FUN_147e13848(void)

void FUN_147e13848(longlong param_1)

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



// FUNCTION 147e138a2 FUN_147e138a2 body=93 status=ok
// SIG undefined FUN_147e138a2(void)

void FUN_147e138a2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab42340;
  param_1[1] = &PTR_FUN_14ab423a0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_147e126ce(param_1 + 4);
  if ((longlong *)param_1[2] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e138f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 147e13900 FUN_147e13900 body=355 status=ok
// SIG undefined FUN_147e13900(void)

void FUN_147e13900(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar6 = DAT_14cb12d18;
  if (DAT_14cb12d10 != 0) goto LAB_147e13914;
  lVar7 = FUN_14001cc68(0xc0,0x10);
  FUN_147e1233e(lVar7);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ab43ad0;
  plVar8[2] = lVar7;
  plVar3 = DAT_14cb12d18;
  DAT_14cb12d10 = lVar7;
  if (plVar8 == DAT_14cb12d18) {
    plVar6 = DAT_14cb12d18;
    if (plVar8 == (longlong *)0x0) goto LAB_147e13914;
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar6 = DAT_14cb12d18;
    if ((int)*plVar3 != 0) goto LAB_147e13914;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar3 = plVar8;
  }
  else {
    plVar6 = plVar8;
    if (DAT_14cb12d18 == (longlong *)0x0) goto LAB_147e13914;
    LOCK();
    plVar1 = DAT_14cb12d18 + 1;
    DAT_14cb12d18 = plVar8;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plVar6 = DAT_14cb12d18;
    if ((int)*plVar1 != 0) goto LAB_147e13914;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
  }
  plVar6 = DAT_14cb12d18;
  if (iVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    plVar6 = DAT_14cb12d18;
  }
LAB_147e13914:
  DAT_14cb12d18 = plVar6;
  if (*(longlong *)(param_1 + 0x288) == 0) {
    lVar9 = FUN_14001cc68(0xa0,0x10);
    FUN_147e1186a(lVar9);
    puVar5 = *(undefined8 **)(param_1 + 0x288);
    lVar7 = lVar9 + 8;
    if (lVar9 == 0) {
      lVar7 = 0;
    }
    *(longlong *)(param_1 + 0x288) = lVar7;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
      lVar7 = *(longlong *)(param_1 + 0x288);
    }
    lVar9 = lVar7 + -8;
    if (lVar7 == 0) {
      lVar9 = 0;
    }
    FUN_147e12012(DAT_14cb12d10,lVar9);
  }
  FUN_147e12012(DAT_14cb12d10,param_1);
  return;
}



// FUNCTION 147e13a64 FUN_147e13a64 body=101 status=ok
// SIG undefined FUN_147e13a64(void)

void FUN_147e13a64(longlong param_1)

{
  undefined8 *puVar1;
  
  if (DAT_14cb12d10 != 0) {
    if (*(longlong *)(param_1 + 0x288) != 0) {
      FUN_147e11f54(DAT_14cb12d10,*(longlong *)(param_1 + 0x288) + -8);
      puVar1 = *(undefined8 **)(param_1 + 0x288);
      if (puVar1 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x288) = 0;
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    FUN_147e11f54(DAT_14cb12d10,param_1);
    return;
  }
  return;
}



// FUNCTION 147e13aca FUN_147e13aca body=65 status=ok
// SIG undefined FUN_147e13aca(void)

void FUN_147e13aca(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1477c967c(DAT_14cb0d2b0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e13b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x18))(lVar1 + 0x30,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 147e13b0c FUN_147e13b0c body=74 status=ok
// SIG undefined FUN_147e13b0c(void)

void FUN_147e13b0c(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  
  if (param_4 != '\0') {
    lVar1 = FUN_1477c967c(DAT_14cb0d2b0);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e13b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x38))(lVar1 + 0x30,param_2,param_3,1);
      return;
    }
  }
  return;
}



// FUNCTION 147e13b56 FUN_147e13b56 body=83 status=ok
// SIG undefined FUN_147e13b56(void)

undefined8 * FUN_147e13b56(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147e13ba9 FUN_147e13ba9 body=209 status=ok
// SIG undefined FUN_147e13ba9(void)

void FUN_147e13ba9(void)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb12d30) {
    FUN_144b3d300(&DAT_14cb12d30);
    if (DAT_14cb12d30 == -1) {
      FUN_1401afab0(&local_28);
      FUN_1412cfe60(&DAT_14cb12d20,&local_28,(local_20 == 0) + '>');
      FUN_1401aebe8(&DAT_14cb12d20,L"Binaries/ThirdParty/Windows/XAudio2_9/x64/xaudio2_9redist.dll",
                    0x3d);
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1437dc136);
      _Init_thread_footer(&DAT_14cb12d30);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e13c7c FUN_147e13c7c body=238 status=ok
// SIG undefined FUN_147e13c7c(void)

undefined8 * FUN_147e13c7c(undefined8 *param_1)

{
  FUN_14704169a();
  *param_1 = &PTR_FUN_14ab427f0;
  param_1[1] = &PTR_FUN_14ab42928;
  param_1[2] = &PTR_FUN_14ab42940;
  param_1[0x39] = &PTR_LAB_14ab429a0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = &PTR_LAB_14ab439f0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x46));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x46),4000);
  param_1[0x53] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x285) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28d) = 0;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xf8;
  CoInitializeEx((LPVOID)0x0,2);
  return param_1;
}



// FUNCTION 147e13d6a FUN_147e13d6a body=202 status=ok
// SIG undefined FUN_147e13d6a(void)

void FUN_147e13d6a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ab427f0;
  param_1[1] = &PTR_FUN_14ab42928;
  param_1[2] = &PTR_FUN_14ab42940;
  param_1[0x39] = &PTR_LAB_14ab429a0;
  CoUninitialize();
  puVar3 = (undefined8 *)param_1[0x53];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x46));
  plVar4 = (longlong *)param_1[0x3b];
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
  FUN_14704184c(param_1);
  return;
}



// FUNCTION 147e13e34 FUN_147e13e34 body=865 status=ok
// SIG undefined FUN_147e13e34(void)

undefined8 * FUN_147e13e34(undefined8 *param_1,int param_2)

{
  void *_Src;
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_858 [32];
  void *local_838;
  uint local_830;
  undefined1 local_828 [2056];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_858;
  if (param_2 < -0x7776ffff) {
    if (param_2 < -0x7ffbfeac) {
      if (param_2 == -0x7fffbffe) {
        pwVar2 = L"E_NOINTERFACE";
      }
      else if (param_2 == -0x7fffbffd) {
        pwVar2 = L"E_POINTER";
      }
      else {
        if (param_2 != -0x7ffbfef0) goto switchD_147e13e76_caseD_8889000d;
        pwVar2 = L"CLASS_E_NOAGGREGATION";
      }
    }
    else if (param_2 == -0x7ffbfeac) {
      pwVar2 = L"REGDB_E_CLASSNOTREG";
    }
    else if (param_2 == -0x7ff8fff2) {
      pwVar2 = L"E_OUTOFMEMORY";
    }
    else {
      if (param_2 != -0x7ff8ffa9) goto switchD_147e13e76_caseD_8889000d;
      pwVar2 = L"E_INVALIDARG";
    }
  }
  else {
    switch(param_2) {
    case -0x7776ffff:
      pwVar2 = L"AUDCLNT_E_NOT_INITIALIZED";
      break;
    case -0x7776fffe:
      pwVar2 = L"AUDCLNT_E_ALREADY_INITIALIZED";
      break;
    case -0x7776fffd:
      pwVar2 = L"AUDCLNT_E_WRONG_ENDPOINT_TYPE";
      break;
    case -0x7776fffc:
      pwVar2 = L"AUDCLNT_E_DEVICE_INVALIDATED";
      break;
    case -0x7776fffb:
      pwVar2 = L"AUDCLNT_E_NOT_STOPPED";
      break;
    case -0x7776fffa:
      pwVar2 = L"AUDCLNT_E_BUFFER_TOO_LARGE";
      break;
    case -0x7776fff9:
      pwVar2 = L"AUDCLNT_E_OUT_OF_ORDER";
      break;
    case -0x7776fff8:
      pwVar2 = L"AUDCLNT_E_UNSUPPORTED_FORMAT";
      break;
    case -0x7776fff7:
      pwVar2 = L"AUDCLNT_E_INVALID_SIZE";
      break;
    case -0x7776fff6:
      pwVar2 = L"AUDCLNT_E_DEVICE_IN_USE";
      break;
    case -0x7776fff5:
      pwVar2 = L"AUDCLNT_E_BUFFER_OPERATION_PENDING";
      break;
    case -0x7776fff4:
      pwVar2 = L"AUDCLNT_E_THREAD_NOT_REGISTERED";
      break;
    case -0x7776fff3:
    case -0x7776ffe6:
    case -0x7776ffe5:
    case -0x7776ffe4:
    case -0x7776ffe3:
    case -0x7776ffe2:
    case -0x7776ffe1:
switchD_147e13e76_caseD_8889000d:
      memset(local_828,0,0x800);
      uVar1 = FUN_14682f6b8(local_828,0x400,param_2);
      FUN_140056680(&local_838,uVar1);
      _Src = local_838;
      if ((int)local_830 < 2) {
        FUN_140056680(param_1,L"UNKNOWN");
      }
      else {
        *param_1 = 0;
        *(uint *)(param_1 + 1) = local_830;
        FUN_1446dd670(param_1,(ulonglong)local_830,0);
        memcpy((void *)*param_1,_Src,(ulonglong)local_830 * 2);
      }
      if (local_838 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_20 ^ (ulonglong)auStack_858) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    case -0x7776fff2:
      pwVar2 = L"AUDCLNT_E_EXCLUSIVE_MODE_NOT_ALLOWED";
      break;
    case -0x7776fff1:
      pwVar2 = L"AUDCLNT_E_ENDPOINT_CREATE_FAILED";
      break;
    case -0x7776fff0:
      pwVar2 = L"AUDCLNT_E_SERVICE_NOT_RUNNING";
      break;
    case -0x7776ffef:
      pwVar2 = L"AUDCLNT_E_EVENTHANDLE_NOT_EXPECTED";
      break;
    case -0x7776ffee:
      pwVar2 = L"AUDCLNT_E_EXCLUSIVE_MODE_ONLY";
      break;
    case -0x7776ffed:
      pwVar2 = L"AUDCLNT_E_BUFDURATION_PERIOD_NOT_EQUAL";
      break;
    case -0x7776ffec:
      pwVar2 = L"AUDCLNT_E_EVENTHANDLE_NOT_SET";
      break;
    case -0x7776ffeb:
      pwVar2 = L"AUDCLNT_E_INCORRECT_BUFFER_SIZE";
      break;
    case -0x7776ffea:
      pwVar2 = L"AUDCLNT_E_BUFFER_SIZE_ERROR";
      break;
    case -0x7776ffe9:
      pwVar2 = L"AUDCLNT_E_CPUUSAGE_EXCEEDED";
      break;
    case -0x7776ffe8:
      pwVar2 = L"AUDCLNT_E_BUFFER_ERROR";
      break;
    case -0x7776ffe7:
      pwVar2 = L"AUDCLNT_E_BUFFER_SIZE_NOT_ALIGNED";
      break;
    case -0x7776ffe0:
      pwVar2 = L"AUDCLNT_E_INVALID_DEVICE_PERIOD";
      break;
    case -0x7776ffdf:
      pwVar2 = L"AUDCLNT_E_INVALID_STREAM_FLAG";
      break;
    case -0x7776ffde:
      pwVar2 = L"AUDCLNT_E_ENDPOINT_OFFLOAD_NOT_CAPABLE";
      break;
    case -0x7776ffdd:
      pwVar2 = L"AUDCLNT_E_OUT_OF_OFFLOAD_RESOURCES";
      break;
    case -0x7776ffdc:
      pwVar2 = L"AUDCLNT_E_OFFLOAD_MODE_ONLY";
      break;
    case -0x7776ffdb:
      pwVar2 = L"AUDCLNT_E_NONOFFLOAD_MODE_ONLY";
      break;
    case -0x7776ffda:
      pwVar2 = L"AUDCLNT_E_RESOURCES_INVALIDATED";
      break;
    case -0x7776ffd9:
      pwVar2 = L"AUDCLNT_E_RAW_MODE_UNSUPPORTED";
      break;
    case -0x7776ffd8:
      pwVar2 = L"AUDCLNT_E_ENGINE_PERIODICITY_LOCKED";
      break;
    case -0x7776ffd7:
      pwVar2 = L"AUDCLNT_E_ENGINE_FORMAT_LOCKED";
      break;
    default:
      switch(param_2) {
      case -0x7769ffff:
        pwVar2 = L"XAUDIO2_E_INVALID_CALL";
        break;
      case -0x7769fffe:
        pwVar2 = L"XAUDIO2_E_XMA_DECODER_ERROR";
        break;
      case -0x7769fffd:
        pwVar2 = L"XAUDIO2_E_XAPO_CREATION_FAILED";
        break;
      case -0x7769fffc:
        pwVar2 = L"XAUDIO2_E_DEVICE_INVALIDATED";
        break;
      default:
        if (param_2 != -0x1ffffdf5) goto switchD_147e13e76_caseD_8889000d;
        pwVar2 = L"ERROR_NO_SUCH_DEVINST";
      }
    }
  }
  FUN_140056680(param_1,pwVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_858);
}



// FUNCTION 147e14196 FUN_147e14196 body=170 status=ok
// SIG undefined FUN_147e14196(void)

void FUN_147e14196(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 != 0) {
    local_68[0] = 0;
    local_58 = (longlong *)0x0;
    FUN_14702925e(*param_1,local_68);
    if (local_68[0] != 0) {
      plVar3 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar3 = local_48;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    *param_1 = 0;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      param_1[1] = 0;
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
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e14256 FUN_147e14256 body=109 status=ok
// SIG undefined FUN_147e14256(void)

undefined8 * FUN_147e14256(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 2;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1477b2074(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(uVar1 * 0x40000000) >> 0x1e & 0xfffffffffffffffc);
    }
  }
  return param_1;
}



// FUNCTION 147e142c4 FUN_147e142c4 body=29 status=ok
// SIG undefined FUN_147e142c4(void)

undefined8 FUN_147e142c4(longlong param_1,undefined8 param_2)

{
  FUN_1477b1d4c(param_2,param_1 + 0x20);
  return param_2;
}



// FUNCTION 147e142e2 FUN_147e142e2 body=83 status=ok
// SIG undefined FUN_147e142e2(void)

undefined8 * FUN_147e142e2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147e14336 FUN_147e14336 body=181 status=ok
// SIG undefined FUN_147e14336(void)

undefined8 FUN_147e14336(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(byte *)(param_1 + 0x54) & 1) == 0) || ((int)param_1[0xd] == 0)) {
LAB_147e1434d:
    uVar2 = 0;
  }
  else {
    FUN_147e14196(param_1 + 0x3a);
    if ((*(byte *)(param_1 + 0x54) & 2) != 0) {
      cVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
      if (cVar1 == '\0') goto LAB_147e1434d;
    }
    if ((longlong *)param_1[0x42] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x42] + 0x48))();
    }
    if ((longlong *)param_1[0x44] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x44] + 0x90))();
      param_1[0x44] = 0;
    }
    if ((longlong *)param_1[0x43] == (longlong *)0x0) {
      FUN_142af7238(param_1);
    }
    else {
      (**(code **)(*(longlong *)param_1[0x43] + 0x90))();
      param_1[0x43] = 0;
    }
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfd;
    *(undefined4 *)(param_1 + 0xd) = 0;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 147e143f6 FUN_147e143f6 body=32 status=ok
// SIG undefined FUN_147e143f6(void)

undefined8 FUN_147e143f6(undefined8 param_1,undefined8 param_2)

{
  FUN_147041d92(param_2,L"/Script/WindowsTargetPlatform.WindowsTargetSettings");
  return param_2;
}



// FUNCTION 147e1442c FUN_147e1442c body=174 status=ok
// SIG undefined FUN_147e1442c(void)

void FUN_147e1442c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    plVar1 = param_1 + -2;
    if (param_2 == 2) {
      (**(code **)(*param_1 + 0x50))(param_1,local_30);
      (**(code **)(param_1[-2] + 0xb8))
                (plVar1,local_30,1,L"FMixerPlatformXAudio2::OnSessionDisconnect() - FormatChanged");
    }
    else {
      FUN_140056680(local_30,&DAT_149dfb77a);
      (**(code **)(*plVar1 + 0xb8))
                (plVar1,local_30,1,L"FMixerPlatformXAudio2::OnSessionDisconnect() - Other");
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e144e6 FUN_147e144e6 body=38 status=ok
// SIG undefined FUN_147e144e6(void)

undefined8 FUN_147e144e6(undefined8 param_1,int param_2)

{
  FUN_147e13d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1450c FUN_147e1450c body=32 status=ok
// SIG undefined FUN_147e1450c(void)

undefined8 FUN_147e1450c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"XAudio2");
  return param_2;
}



// FUNCTION 147e1452c FUN_147e1452c body=45 status=ok
// SIG undefined FUN_147e1452c(void)

longlong FUN_147e1452c(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_147e13d6a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1455a FUN_147e1455a body=45 status=ok
// SIG undefined FUN_147e1455a(void)

longlong FUN_147e1455a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_147e13d6a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e14594 FUN_147e14594 body=96 status=ok
// SIG undefined FUN_147e14594(void)

undefined8 * FUN_147e14594(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 147e145f4 FUN_147e145f4 body=359 status=ok
// SIG undefined FUN_147e145f4(void)

void FUN_147e145f4(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pcVar1 = (code *)*param_2;
  plVar4 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_2[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_98,uVar3);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x90) = local_88;
  *(undefined8 *)(lVar2 + 0x80) = local_98;
  *(undefined8 *)(lVar2 + 0x88) = uStack_90;
  *(undefined8 *)(lVar2 + 0x98) = local_80;
  local_80 = 0;
  *(undefined4 *)(lVar2 + 0xa0) = (undefined4)local_78;
  *(undefined4 *)(lVar2 + 0xa4) = local_78._4_4_;
  local_78 = 0;
  *(undefined8 *)(lVar2 + 0xa8) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar2 + 0xb0) = (undefined4)local_68;
  *(undefined4 *)(lVar2 + 0xb4) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar2 + 0xb8) = local_60;
  *(undefined8 *)(lVar2 + 0xc0) = uStack_58;
  *(undefined8 *)(lVar2 + 200) = local_50;
  local_50 = 0;
  *(undefined4 *)(lVar2 + 0xd0) = (undefined4)local_48;
  *(undefined4 *)(lVar2 + 0xd4) = local_48._4_4_;
  local_48 = 0;
  *(byte *)(lVar2 + 0xd8) = *(byte *)(lVar2 + 0xd8) & 0xfe | local_40 & 1;
  *(longlong *)(lVar2 + 0xe0) = local_38;
  local_38 = 0;
  *(undefined4 *)(lVar2 + 0xe8) = (undefined4)local_30;
  *(undefined4 *)(lVar2 + 0xec) = local_30._4_4_;
  local_30 = 0;
  *(undefined4 *)(lVar2 + 0xf0) = local_28;
  FUN_140b576f0();
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_147041ad4(&local_80);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1475c FUN_147e1475c body=130 status=ok
// SIG undefined FUN_147e1475c(void)

longlong * FUN_147e1475c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ab43b70;
  FUN_1405d89e4(plVar3 + 2,param_2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 147e147de FUN_147e147de body=9 status=ok
// SIG undefined FUN_147e147de(void)

void FUN_147e147de(longlong param_1)

{
  FUN_147e14806(param_1 + 0x10);
  return;
}



// FUNCTION 147e147e8 FUN_147e147e8 body=29 status=ok
// SIG undefined FUN_147e147e8(void)

undefined8 FUN_147e147e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e14806 FUN_147e14806 body=59 status=ok
// SIG undefined FUN_147e14806(void)

void FUN_147e14806(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      FUN_1400020a8();
    }
    FUN_147041ad4(param_1 + 0x98);
  }
  FUN_140788a7e(param_1);
  return;
}



// FUNCTION 147e14842 FUN_147e14842 body=116 status=ok
// SIG undefined FUN_147e14842(void)

void FUN_147e14842(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147e145f4(0xf0,0xb0);
    FUN_147e148b6(0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147e145f4(param_1 + 0x1e,param_1 + 0x16);
  FUN_147e148b6(param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e148ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147e148b6 FUN_147e148b6 body=92 status=ok
// SIG undefined FUN_147e148b6(void)

void FUN_147e148b6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[9];
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
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000147e14906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 147e14912 FUN_147e14912 body=34 status=ok
// SIG undefined FUN_147e14912(void)

void FUN_147e14912(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab43c10;
  return;
}



// FUNCTION 147e14934 FUN_147e14934 body=31 status=ok
// SIG undefined FUN_147e14934(void)

undefined8 FUN_147e14934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e14970 FUN_147e14970 body=93 status=ok
// SIG undefined FUN_147e14970(void)

void FUN_147e14970(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab43ba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e149ce FUN_147e149ce body=126 status=ok
// SIG undefined FUN_147e149ce(void)

void FUN_147e149ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab43ba0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e14a3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e14a58 FUN_147e14a58 body=21 status=ok
// SIG undefined FUN_147e14a58(void)

undefined8 FUN_147e14a58(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e14a6e FUN_147e14a6e body=29 status=ok
// SIG undefined FUN_147e14a6e(void)

undefined8 FUN_147e14a6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e14a8c FUN_147e14a8c body=140 status=ok
// SIG undefined FUN_147e14a8c(void)

void FUN_147e14a8c(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_20,L"AudioMixer",1);
  FUN_14493e38c(uVar1,local_20);
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_28,L"AudioMixerCore",1);
  FUN_14493e38c(uVar1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e14b22 FUN_147e14b22 body=31 status=ok
// SIG undefined FUN_147e14b22(void)

void FUN_147e14b22(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x2a8,0x10);
  FUN_147e13c7c(uVar1);
  return;
}



// FUNCTION 147e14b42 FUN_147e14b42 body=125 status=ok
// SIG undefined FUN_147e14b42(void)

void FUN_147e14b42(undefined2 *param_1,short param_2,int param_3,byte param_4)

{
  ushort uVar1;
  ushort uVar2;
  
  if ((byte)(param_4 - 1) < 7) {
    uVar1 = *(ushort *)(&DAT_14ab43e70 + (ulonglong)(byte)(param_4 - 1) * 2);
    *param_1 = 0xfffe;
    param_1[8] = 0x16;
    param_1[1] = param_2;
    *(int *)(param_1 + 2) = param_3;
    param_1[7] = uVar1;
    uVar2 = (uVar1 >> 3) * param_2;
    param_1[6] = uVar2;
    *(uint *)(param_1 + 4) = (uint)uVar2 * param_3;
    param_1[9] = uVar1;
    if ((~param_4 & 6) == 0) {
      *(undefined8 *)(param_1 + 0xc) = 0x10000000000003;
      *(undefined8 *)(param_1 + 0x10) = 0x719b3800aa000080;
      return;
    }
    *(undefined8 *)(param_1 + 0xc) = 0x10000000000001;
    *(undefined8 *)(param_1 + 0x10) = 0x719b3800aa000080;
    if (param_4 == 4) {
      param_1[9] = 0x18;
    }
  }
  return;
}



// FUNCTION 147e14bc0 FUN_147e14bc0 body=244 status=ok
// SIG undefined FUN_147e14bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_147e14bc0(short *param_1)

{
  short sVar1;
  uint uVar2;
  undefined7 uVar3;
  
  sVar1 = *param_1;
  if (sVar1 == 1) {
    uVar2 = (ushort)param_1[7] - 8 >> 3;
    if (((uint)(ushort)param_1[7] << 0x1d | uVar2) < 4) {
      return (ulonglong)(0x5030201 >> ((byte)(uVar2 << 3) & 0x1f));
    }
  }
  else if (sVar1 == -2) {
    if (0x15 < (ushort)param_1[8]) {
      if (*(undefined1 (*) [16])(param_1 + 0xc) == _DAT_14ab43d40) goto LAB_147e14bdc;
      if (*(undefined1 (*) [16])(param_1 + 0xc) == _DAT_14ab43d50) {
        uVar2 = (uint)(ushort)param_1[9] << 0x1d | (ushort)param_1[9] - 8 >> 3;
        uVar3 = (undefined7)
                ((ulonglong)
                 ((longlong)&switchD_147e14c47::switchdataD_14ab43e80 +
                 (longlong)(int)(&switchD_147e14c47::switchdataD_14ab43e80)[uVar2]) >> 8);
        switch(uVar2) {
        case 0:
          return CONCAT71(uVar3,param_1[7] == 8);
        case 1:
          return CONCAT71(uVar3,(param_1[7] == 0x10) * '\x02');
        case 2:
          if (param_1[7] == 0x20) {
            return 4;
          }
          return (ulonglong)((uint)(param_1[7] == 0x18) * 3);
        case 3:
          return (ulonglong)((uint)(param_1[7] == 0x20) * 5);
        }
      }
    }
  }
  else if (sVar1 == 3) {
LAB_147e14bdc:
    uVar2 = 7;
    if (param_1[7] != 0x40) {
      uVar2 = 0;
    }
    if (param_1[7] == 0x20) {
      return 6;
    }
    return (ulonglong)uVar2;
  }
  return 0;
}



// FUNCTION 147e14cb4 FUN_147e14cb4 body=5 status=ok
// SIG undefined FUN_147e14cb4(void)

undefined2 FUN_147e14cb4(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



// FUNCTION 147e14cba FUN_147e14cba body=29 status=ok
// SIG undefined FUN_147e14cba(void)

void FUN_147e14cba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ab43e30;
  return;
}



// FUNCTION 147e14cd8 FUN_147e14cd8 body=36 status=ok
// SIG undefined FUN_147e14cd8(void)

undefined8 FUN_147e14cd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147e14d18 FUN_147e14d18 body=93 status=ok
// SIG undefined FUN_147e14d18(void)

void FUN_147e14d18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab43dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e14d76 FUN_147e14d76 body=123 status=ok
// SIG undefined FUN_147e14d76(void)

void FUN_147e14d76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab43dc0;
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



// FUNCTION 147e14dfe FUN_147e14dfe body=21 status=ok
// SIG undefined FUN_147e14dfe(void)

undefined8 FUN_147e14dfe(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e14e14 FUN_147e14e14 body=34 status=ok
// SIG undefined FUN_147e14e14(void)

undefined8 FUN_147e14e14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147e14e3a FUN_147e14e3a body=119 status=ok
// SIG undefined FUN_147e14e3a(void)

undefined8 * FUN_147e14e3a(undefined8 *param_1)

{
  FUN_14704169a();
  *param_1 = &PTR_FUN_14ab43e90;
  param_1[1] = &PTR_FUN_14ab43fc8;
  param_1[2] = &PTR_FUN_14ab43fe0;
  param_1[0x39] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3a),4000);
  param_1[0x43] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x201) = 0;
  *(undefined8 *)((longlong)param_1 + 0x209) = 0;
  return param_1;
}



// FUNCTION 147e14eb2 FUN_147e14eb2 body=138 status=ok
// SIG undefined FUN_147e14eb2(void)

void FUN_147e14eb2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ab43e90;
  param_1[1] = &PTR_FUN_14ab43fc8;
  param_1[2] = &PTR_FUN_14ab43fe0;
  FUN_147e1575c(param_1[0x43]);
  puVar1 = (undefined8 *)param_1[0x41];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
  puVar1 = (undefined8 *)param_1[0x39];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14704184c(param_1);
  return;
}



// FUNCTION 147e14f3c FUN_147e14f3c body=189 status=ok
// SIG undefined FUN_147e14f3c(void)

ulonglong FUN_147e14f3c(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = *(char *)(param_1 + 0x210);
  if (cVar1 == '\0') {
    FUN_1400b22c2(local_28,".\\Runtime/Windows/AudioMixerWasapi/Private/AudioMixerWasapi.cpp");
    FUN_140056680(local_38,L"FAudioMixerWasapi::TeardownHardware failed...not initialized.");
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x208) != 0) {
      FUN_1437df6d4();
      puVar2 = *(undefined8 **)(param_1 + 0x208);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x208) = 0;
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined1 *)(param_1 + 0x210) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e15032 FUN_147e15032 body=83 status=ok
// SIG undefined FUN_147e15032(void)

undefined8 * FUN_147e15032(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147e15090 FUN_147e15090 body=173 status=ok
// SIG undefined FUN_147e15090(void)

undefined8 * FUN_147e15090(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  lVar1 = DAT_14cb12d58;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb12d58 == 0) {
    *param_1 = 0;
  }
  else {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar2 = (longlong)local_38;
    _Src = (void *)*param_2;
    if (lVar2 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar2 * 2);
    }
    FUN_147e11ea2(lVar1,param_1,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1513e FUN_147e1513e body=78 status=ok
// SIG undefined FUN_147e1513e(void)

longlong * FUN_147e1513e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)*param_2;
  if (plVar1 != plVar2) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      plVar2 = (longlong *)*param_2;
    }
    *param_1 = (longlong)plVar2;
    *param_2 = 0;
  }
  FUN_1477bb642(param_1 + 1,param_2 + 1);
  param_1[10] = param_2[10];
  return param_1;
}



// FUNCTION 147e1518c FUN_147e1518c body=79 status=ok
// SIG undefined FUN_147e1518c(void)

undefined8 FUN_147e1518c(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x58))();
  if ((cVar1 == '\0') || (param_1[0x43] == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_142af76d4(param_1);
    *(undefined4 *)(param_1 + 0xd) = 4;
    FUN_1437dff52(param_1[0x41]);
    FUN_1437dff9e(param_1[0x43]);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 147e151dc FUN_147e151dc body=29 status=ok
// SIG undefined FUN_147e151dc(void)

undefined8 FUN_147e151dc(longlong param_1,undefined8 param_2)

{
  FUN_1477b1d4c(param_2,param_1 + 0x20);
  return param_2;
}



// FUNCTION 147e151fa FUN_147e151fa body=85 status=ok
// SIG undefined FUN_147e151fa(void)

void FUN_147e151fa(longlong param_1,void *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x208);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x84);
    uVar3 = FUN_147e14cb4(lVar2 + 0x28);
    memcpy(*(void **)(lVar2 + 0xc0),param_2,(ulonglong)uVar3 * (ulonglong)uVar1);
    return;
  }
  return;
}



// FUNCTION 147e1525a FUN_147e1525a body=32 status=ok
// SIG undefined FUN_147e1525a(void)

undefined8 FUN_147e1525a(undefined8 param_1,undefined8 param_2)

{
  FUN_147041d92(param_2,L"/Script/WindowsTargetPlatform.WindowsTargetSettings");
  return param_2;
}



// FUNCTION 147e15282 FUN_147e15282 body=355 status=ok
// SIG undefined FUN_147e15282(void)

void FUN_147e15282(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar6 = DAT_14cb12d60;
  if (DAT_14cb12d58 != 0) goto LAB_147e15296;
  lVar7 = FUN_14001cc68(0xc0,0x10);
  FUN_147e1233e(lVar7);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ab44300;
  plVar8[2] = lVar7;
  plVar3 = DAT_14cb12d60;
  DAT_14cb12d58 = lVar7;
  if (plVar8 == DAT_14cb12d60) {
    plVar6 = DAT_14cb12d60;
    if (plVar8 == (longlong *)0x0) goto LAB_147e15296;
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar6 = DAT_14cb12d60;
    if ((int)*plVar3 != 0) goto LAB_147e15296;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar3 = plVar8;
  }
  else {
    plVar6 = plVar8;
    if (DAT_14cb12d60 == (longlong *)0x0) goto LAB_147e15296;
    LOCK();
    plVar1 = DAT_14cb12d60 + 1;
    DAT_14cb12d60 = plVar8;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plVar6 = DAT_14cb12d60;
    if ((int)*plVar1 != 0) goto LAB_147e15296;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
  }
  plVar6 = DAT_14cb12d60;
  if (iVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    plVar6 = DAT_14cb12d60;
  }
LAB_147e15296:
  DAT_14cb12d60 = plVar6;
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    lVar9 = FUN_14001cc68(0xa0,0x10);
    FUN_147e1186a(lVar9);
    puVar5 = *(undefined8 **)(param_1 + 0x1b8);
    lVar7 = lVar9 + 8;
    if (lVar9 == 0) {
      lVar7 = 0;
    }
    *(longlong *)(param_1 + 0x1b8) = lVar7;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
      lVar7 = *(longlong *)(param_1 + 0x1b8);
    }
    lVar9 = lVar7 + -8;
    if (lVar7 == 0) {
      lVar9 = 0;
    }
    FUN_147e12012(DAT_14cb12d58,lVar9);
  }
  FUN_147e12012(DAT_14cb12d58,param_1);
  return;
}



// FUNCTION 147e153e6 FUN_147e153e6 body=101 status=ok
// SIG undefined FUN_147e153e6(void)

void FUN_147e153e6(longlong param_1)

{
  undefined8 *puVar1;
  
  if (DAT_14cb12d58 != 0) {
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      FUN_147e11f54(DAT_14cb12d58,*(longlong *)(param_1 + 0x1b8) + -8);
      puVar1 = *(undefined8 **)(param_1 + 0x1b8);
      if (puVar1 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x1b8) = 0;
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    FUN_147e11f54(DAT_14cb12d58,param_1);
    return;
  }
  return;
}



// FUNCTION 147e1544c FUN_147e1544c body=83 status=ok
// SIG undefined FUN_147e1544c(void)

undefined8 * FUN_147e1544c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147e154a0 FUN_147e154a0 body=129 status=ok
// SIG undefined FUN_147e154a0(void)

undefined8 FUN_147e154a0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  LOCK();
  *(undefined1 *)(param_1 + 8) = 1;
  UNLOCK();
  cVar2 = FUN_14593c384(1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    do {
      DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),1000);
      if (DVar3 == 0) {
        pcVar1 = *(code **)(param_1 + 0x20);
        plVar5 = *(longlong **)(param_1 + 0x30);
        if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
          plVar5 = (longlong *)(param_1 + 0x40);
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar1)(uVar4);
      }
      else if (DVar3 == 0x102) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
    } while ((*(byte *)(param_1 + 8) & 1) != 0);
  }
  if (cVar2 != '\0') {
    CoUninitialize();
  }
  return 0;
}



// FUNCTION 147e15522 FUN_147e15522 body=116 status=ok
// SIG undefined FUN_147e15522(void)

undefined8 * FUN_147e15522(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab44248;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1437df334(param_1 + 5);
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_147042096(param_1 + 0xc);
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 147e15596 FUN_147e15596 body=89 status=ok
// SIG undefined FUN_147e15596(void)

void FUN_147e15596(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab44248;
  FUN_147041ad4(param_1 + 0xc);
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  FUN_1449db362(param_1 + 1);
  return;
}



// FUNCTION 147e155f0 FUN_147e155f0 body=88 status=ok
// SIG undefined FUN_147e155f0(void)

longlong * FUN_147e155f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  plVar1 = (longlong *)*param_2;
  if (plVar2 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      plVar2 = (longlong *)*param_1;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    *param_1 = *param_2;
  }
  FUN_147e10c34(param_1 + 1,param_2 + 1);
  param_1[10] = param_2[10];
  return param_1;
}



// FUNCTION 147e15648 FUN_147e15648 body=38 status=ok
// SIG undefined FUN_147e15648(void)

undefined8 FUN_147e15648(undefined8 param_1,int param_2)

{
  FUN_147e14eb2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1566e FUN_147e1566e body=32 status=ok
// SIG undefined FUN_147e1566e(void)

undefined8 FUN_147e1566e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"WASAPIMixer");
  return param_2;
}



// FUNCTION 147e15692 FUN_147e15692 body=45 status=ok
// SIG undefined FUN_147e15692(void)

longlong FUN_147e15692(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_147e14eb2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e156c0 FUN_147e156c0 body=45 status=ok
// SIG undefined FUN_147e156c0(void)

longlong FUN_147e156c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_147e14eb2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e156ee FUN_147e156ee body=71 status=ok
// SIG undefined FUN_147e156ee(void)

undefined8 * FUN_147e156ee(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ab441c0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e15736 FUN_147e15736 body=38 status=ok
// SIG undefined FUN_147e15736(void)

undefined8 FUN_147e15736(undefined8 param_1,int param_2)

{
  FUN_147e15596();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1575c FUN_147e1575c body=72 status=ok
// SIG undefined FUN_147e1575c(void)

void FUN_147e1575c(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 147e157a4 FUN_147e157a4 body=29 status=ok
// SIG undefined FUN_147e157a4(void)

undefined8 FUN_147e157a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e157de FUN_147e157de body=101 status=ok
// SIG undefined FUN_147e157de(void)

void FUN_147e157de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab44270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e15844 FUN_147e15844 body=101 status=ok
// SIG undefined FUN_147e15844(void)

void FUN_147e15844(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab44270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e158aa FUN_147e158aa body=131 status=ok
// SIG undefined FUN_147e158aa(void)

void FUN_147e158aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab44270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e1593e FUN_147e1593e body=25 status=ok
// SIG undefined FUN_147e1593e(void)

undefined8 FUN_147e1593e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e15958 FUN_147e15958 body=34 status=ok
// SIG undefined FUN_147e15958(void)

void FUN_147e15958(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab44390;
  return;
}



// FUNCTION 147e1597a FUN_147e1597a body=31 status=ok
// SIG undefined FUN_147e1597a(void)

undefined8 FUN_147e1597a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e159b6 FUN_147e159b6 body=93 status=ok
// SIG undefined FUN_147e159b6(void)

void FUN_147e159b6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab44320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e15a14 FUN_147e15a14 body=123 status=ok
// SIG undefined FUN_147e15a14(void)

void FUN_147e15a14(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab44320;
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



// FUNCTION 147e15a9c FUN_147e15a9c body=21 status=ok
// SIG undefined FUN_147e15a9c(void)

undefined8 FUN_147e15a9c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e15ab2 FUN_147e15ab2 body=29 status=ok
// SIG undefined FUN_147e15ab2(void)

undefined8 FUN_147e15ab2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e15ad0 FUN_147e15ad0 body=140 status=ok
// SIG undefined FUN_147e15ad0(void)

void FUN_147e15ad0(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_20,L"AudioMixer",1);
  FUN_14493e38c(uVar1,local_20);
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_28,L"AudioMixerCore",1);
  FUN_14493e38c(uVar1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e15b62 FUN_147e15b62 body=31 status=ok
// SIG undefined FUN_147e15b62(void)

void FUN_147e15b62(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x220,0x10);
  FUN_147e14e3a(uVar1);
  return;
}



// FUNCTION 147e15b81 FUN_147e15b81 body=93 status=ok
// SIG undefined FUN_147e15b81(void)

void FUN_147e15b81(void)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_14001cc68(0x18,0x10);
  FUN_147e164c6(lVar1);
  bVar2 = DAT_14cb12ef8 != 0;
  DAT_14cb12ef8 = lVar1;
  if (bVar2) {
    FUN_1400020a8();
  }
  lVar1 = FUN_144a82cde();
  if (DAT_14cb12ef8 != 0) {
    FUN_14154aaea(*(undefined8 *)(lVar1 + 0x10));
    return;
  }
  return;
}



// FUNCTION 147e15bde FUN_147e15bde body=106 status=ok
// SIG undefined FUN_147e15bde(void)

undefined4 FUN_147e15bde(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar3 = FUN_1413f862e();
    lVar1 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar4 = FUN_145cbb700(lVar4);
      goto LAB_147e15c1f;
    }
  }
  lVar4 = DAT_14cb10918;
  if (DAT_14c872a71 != '\x01') {
    return 0;
  }
LAB_147e15c1f:
  if (lVar4 == 0) {
    return 0;
  }
  iVar2 = FUN_14490d72a();
  return CONCAT31((int3)(iVar2 - 1U >> 8),iVar2 - 1U < 2);
}



// FUNCTION 147e15c48 FUN_147e15c48 body=270 status=ok
// SIG undefined FUN_147e15c48(void)

undefined8
FUN_147e15c48(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_14ab46410;
  *(undefined1 *)(local_48 + 1) = *param_2;
  *(undefined1 *)((longlong)local_48 + 9) = *param_3;
  *(undefined1 *)((longlong)local_48 + 10) = *param_4;
  *(undefined1 *)((longlong)local_48 + 0xb) = *param_5;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_14ab463a0;
  local_48[3] = FUN_147e15d57;
  FUN_147deee66(&DAT_14cb127b8,param_1,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e15d57 FUN_147e15d57 body=114 status=ok
// SIG undefined FUN_147e15d57(void)

void FUN_147e15d57(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined1 param_5)

{
  if ((*(char *)(param_1 + 0xc) == '\x01') && (*(int *)(param_1 + 8) == 0)) {
    FUN_1437e4e07(param_5);
    if (param_4 != '\0') {
      FUN_14680df9f();
      FUN_14680e0d8();
    }
    FUN_140457ffc(&DAT_14cb127b8,&DAT_14cb12d70);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e15d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 147e15dc9 FUN_147e15dc9 body=175 status=ok
// SIG undefined FUN_147e15dc9(void)

undefined8 FUN_147e15dc9(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 147e15e7a FUN_147e15e7a body=58 status=ok
// SIG undefined FUN_147e15e7a(void)

void FUN_147e15e7a(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_140bee9ec(param_2,param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000147e15ead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 147e15eb4 FUN_147e15eb4 body=58 status=ok
// SIG undefined FUN_147e15eb4(void)

void FUN_147e15eb4(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_140bee9ec(param_2,param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147e15ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 147e15eee FUN_147e15eee body=190 status=ok
// SIG undefined FUN_147e15eee(void)

void FUN_147e15eee(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1432229a3();
  local_20 = (undefined8 *)0x0;
  local_18 = 0;
  FUN_1446efa72(&local_20,0,2,0x10);
  local_18 = 2;
  *local_20 = &PTR_LAB_14ab465d0;
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
  local_20[2] = lVar2;
  *local_20 = &PTR_FUN_14ab46560;
  local_20[3] = FUN_14051d743;
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e15fae FUN_147e15fae body=78 status=ok
// SIG undefined FUN_147e15fae(void)

longlong * FUN_147e15fae(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1437e649d(*param_1,(int)param_1[1]);
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



// FUNCTION 147e15ffc FUN_147e15ffc body=80 status=ok
// SIG undefined FUN_147e15ffc(void)

void FUN_147e15ffc(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,undefined4 param_4)

{
  wchar_t *pwVar1;
  
  if (param_3 == (wchar_t *)0x0) {
    param_3 = L"Unknown";
  }
  if (param_2 == (wchar_t *)0x0) {
    param_2 = L"Unknown";
  }
  pwVar1 = L"Unknown";
  if (param_1 != (wchar_t *)0x0) {
    pwVar1 = param_1;
  }
  FUN_140033559(".\\Runtime/Launch/Private/Windows/LaunchWindows.cpp",0x57,
                L"SECURE CRT: Invalid parameter detected.\nExpression: %s Function: %s. File: %s Line: %d\n"
                ,pwVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147e1604c FUN_147e1604c body=38 status=ok
// SIG undefined FUN_147e1604c(void)

undefined8 FUN_147e1604c(undefined8 param_1,int param_2)

{
  FUN_145e143c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e16084 FUN_147e16084 body=38 status=ok
// SIG undefined FUN_147e16084(void)

undefined8 FUN_147e16084(undefined8 param_1,int param_2)

{
  FUN_147e16430();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e160b8 FUN_147e160b8 body=98 status=ok
// SIG undefined FUN_147e160b8(void)

void FUN_147e160b8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  if (((ulonglong)param_3 & 7) == 0 && 0x17 < param_5) {
    *param_2 = &PTR_FUN_14ab46080;
    *param_3 = *param_4;
    param_3[1] = param_4[1];
    param_4[1] = 0;
    param_3[2] = param_4[2];
    param_4[2] = 0;
  }
  else {
    FUN_1437e5522(param_2,param_4);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 147e1611a FUN_147e1611a body=24 status=ok
// SIG undefined FUN_147e1611a(void)

undefined8 FUN_147e1611a(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_147e161c6(param_2);
  }
  return 0;
}



// FUNCTION 147e1615c FUN_147e1615c body=24 status=ok
// SIG undefined FUN_147e1615c(void)

undefined8 FUN_147e1615c(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_147e161c6(*param_2);
  }
  return 0;
}



// FUNCTION 147e16174 FUN_147e16174 body=68 status=ok
// SIG undefined FUN_147e16174(void)

undefined8
FUN_147e16174(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_147e161c6(*param_3);
  }
  param_2[5] = &PTR_LAB_14ab460c0;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 147e161c6 FUN_147e161c6 body=206 status=ok
// SIG undefined FUN_147e161c6(void)

void FUN_147e161c6(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined1 *local_40;
  longlong local_38;
  char local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_19;
  local_48 = FUN_140036a08;
  lVar1 = FUN_144a773aa(&local_48,&DAT_14c7585d0);
  local_48 = (code *)(lVar1 + 0x10);
  local_40 = *(undefined1 **)(lVar1 + 0x10);
  local_38 = *(longlong *)(lVar1 + 0x20);
  local_30 = '\0';
  local_28 = *(undefined8 *)(lVar1 + 0x28);
  *(code ***)(lVar1 + 0x28) = &local_48;
  *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
  (*(code *)**(undefined8 **)*param_1)();
  if (local_30 == '\0') {
    local_30 = '\x01';
    *(int *)(local_48 + 0x20) = *(int *)(local_48 + 0x20) + -1;
    if (local_38 != *(longlong *)(local_48 + 0x10)) {
      FUN_14004673c();
    }
    *(undefined1 **)local_48 = local_40;
    *(undefined8 *)(local_48 + 0x18) = local_28;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e16296 FUN_147e16296 body=122 status=ok
// SIG undefined FUN_147e16296(void)

void FUN_147e16296(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1 + 0x80;
  puVar1 = (undefined8 *)FUN_144a75d72(param_1 + 0x100);
  local_30 = puVar1;
  FUN_147e16312(param_1,param_2,&local_38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xffffffffffffffff;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e16312 FUN_147e16312 body=285 status=ok
// SIG undefined FUN_147e16312(void)

void FUN_147e16312(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  bool bVar7;
  
  do {
    while( true ) {
      do {
        plVar3 = (longlong *)param_3[1];
        *plVar3 = *(longlong *)*param_3;
        LOCK();
        UNLOCK();
        lVar4 = *plVar3;
      } while (lVar4 != *(longlong *)*param_3);
      LOCK();
      piVar1 = (int *)(lVar4 + 0x2008);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (iVar2 < 0x400) break;
      if (lVar4 == *(longlong *)(param_1 + 0x80)) {
        if (*(longlong *)(lVar4 + 0x2010) == 0) {
          puVar5 = (undefined4 *)FUN_14001cc68(0x2018);
          *puVar5 = 0;
          memset(puVar5 + 4,0,0x1ff8);
          puVar5[0x802] = 1;
          *(undefined8 *)(puVar5 + 0x804) = 0;
          *(longlong *)(puVar5 + 2) = param_2;
          lVar6 = 2;
          do {
            *(undefined8 *)(puVar5 + lVar6 * 2) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x401);
          LOCK();
          bVar7 = *(longlong *)(lVar4 + 0x2010) == 0;
          if (bVar7) {
            *(longlong *)(lVar4 + 0x2010) = (longlong)puVar5;
          }
          UNLOCK();
          if (bVar7) {
            LOCK();
            if (lVar4 == *(longlong *)(param_1 + 0x80)) {
              *(longlong *)(param_1 + 0x80) = (longlong)puVar5;
            }
            UNLOCK();
            goto LAB_147e16418;
          }
          if (puVar5 != (undefined4 *)0x0) {
            FUN_1400020a8(puVar5);
          }
        }
        else {
          LOCK();
          if (lVar4 == *(longlong *)(param_1 + 0x80)) {
            *(longlong *)(param_1 + 0x80) = *(longlong *)(lVar4 + 0x2010);
          }
          UNLOCK();
        }
      }
    }
    plVar3 = (longlong *)(lVar4 + 8 + (longlong)iVar2 * 8);
    LOCK();
    bVar7 = *plVar3 == 0;
    if (bVar7) {
      *plVar3 = param_2;
    }
    UNLOCK();
  } while (!bVar7);
LAB_147e16418:
  *(undefined8 *)param_3[1] = 0;
  return;
}



// FUNCTION 147e16430 FUN_147e16430 body=95 status=ok
// SIG undefined FUN_147e16430(void)

void FUN_147e16430(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_145c8c246();
  if (*(longlong *)(param_1 + 0x6c90) != 0) {
    plVar1 = (longlong *)(param_1 + 0x6cb0);
    if (*(longlong **)(param_1 + 0x6ca0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x6ca0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  lVar2 = 0x5a80;
  do {
    FUN_147e16490(param_1 + lVar2);
    lVar2 = lVar2 + -0x1200;
  } while (lVar2 != -0x1180);
  return;
}



// FUNCTION 147e16490 FUN_147e16490 body=54 status=ok
// SIG undefined FUN_147e16490(void)

void FUN_147e16490(longlong *param_1)

{
  longlong lVar1;
  
  do {
    lVar1 = FUN_145c8c2f4(param_1);
  } while (lVar1 != 0);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  FUN_140f14648(param_1 + 0x20);
  return;
}



// FUNCTION 147e164c6 FUN_147e164c6 body=475 status=ok
// SIG undefined FUN_147e164c6(void)

undefined8 * FUN_147e164c6(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE hFile;
  longlong lVar5;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a81de8();
  *param_1 = &PTR_FUN_14ab461e0;
  *(undefined2 *)(param_1 + 2) = 4;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  hFile = GetStdHandle(0xfffffff5);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    DVar3 = GetFileType(hFile);
    if (DVar3 == 2) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar1 = FUN_14054d46e(&DAT_14c846b20,L"GenericConsoleOutput");
      bVar1 = bVar1 ^ 1;
      goto LAB_147e1653c;
    }
  }
  bVar1 = 0;
LAB_147e1653c:
  *(byte *)((longlong)param_1 + 0x11) = bVar1;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"JsonStdOut");
  *(char *)((longlong)param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    FUN_1456afa32(&local_28,L"UE_LOG_JSON_TO_STDOUT");
    if (1 < local_20) {
      iVar4 = _wtoi(local_28);
      *(bool *)((longlong)param_1 + 0x12) = iVar4 != 0;
    }
    if (local_28 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"AllowStdOutLogVerbosity");
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 2) = 5;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"FullStdOutLogOutput");
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 2) = 7;
  }
  lVar5 = __acrt_iob_func(1);
  if (lVar5 == 0) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e166a2 FUN_147e166a2 body=29 status=ok
// SIG undefined FUN_147e166a2(void)

undefined8 FUN_147e166a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e166c0 FUN_147e166c0 body=22 status=ok
// SIG undefined FUN_147e166c0(void)

void FUN_147e166c0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  byte bVar1;
  wchar_t *_Str;
  size_t sVar2;
  byte bVar3;
  undefined8 unaff_RBP;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  undefined1 auStack_548 [32];
  byte bStack_528;
  undefined1 uStack_520;
  longlong lStack_510;
  undefined *puStack_508;
  undefined4 uStack_500;
  undefined8 uStack_4f8;
  char *pcStack_4f0;
  int iStack_4e8;
  wchar_t *pwStack_4e0;
  undefined4 uStack_4d8;
  char *pcStack_4d0;
  char *pcStack_4c8;
  undefined1 *puStack_4c0;
  undefined1 uStack_4b8;
  char acStack_4b0 [64];
  undefined1 auStack_470 [1064];
  ulonglong uStack_48;
  
  if (*(byte *)(param_1 + 0x10) < (byte)param_3) {
    return;
  }
  if (*(char *)(param_1 + 0x12) != '\x01') {
    thunk_FUN_147e17138();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_548;
  bVar3 = *param_4 != 0 & DAT_14c75b130;
  bVar7 = (byte)param_3 & 0xf;
  lStack_510 = param_1;
  FUN_146824a02(auStack_470,0x400);
  FUN_146824fca(auStack_470);
  FUN_140212f8e(&uStack_4f8);
  puStack_508 = &DAT_14a17510b;
  uStack_500 = 4;
  FUN_1468253e2(auStack_470,&puStack_508,uStack_4f8);
  bVar1 = bVar7 - 1;
  if (bVar1 < 7) {
    pcVar6 = (&PTR_s_Critical_14ab46838)[bVar1];
    uVar4 = *(undefined4 *)(&DAT_14ab46870 + (ulonglong)bVar1 * 4);
  }
  else {
    uVar4 = 0xb;
    pcVar6 = "Information";
  }
  pcStack_4d0 = "level";
  pcStack_4c8 = (char *)CONCAT44(pcStack_4c8._4_4_,5);
  FUN_146824bae(auStack_470);
  pwStack_4e0 = (wchar_t *)pcVar6;
  uStack_4d8 = uVar4;
  FUN_146824d20(auStack_470);
  bStack_528 = bVar3;
  uStack_520 = bVar7 != 5;
  FUN_147e16ab6(auStack_470,param_2,param_3,param_4);
  if ((bVar7 != 5 | bVar3) == 1) {
    FUN_147e16c5e(auStack_470,param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar3) & 0xffffffff
                  ,bVar7 != 5);
    pcStack_4d0 = "properties";
    pcStack_4c8 = (char *)CONCAT44(pcStack_4c8._4_4_,10);
    FUN_146824bae(auStack_470);
    FUN_146824fca(auStack_470);
    if (bVar3 != 0) {
      pcStack_4d0 = "_channel";
      pcStack_4c8._0_4_ = 8;
      FUN_146824bae(auStack_470,&pcStack_4d0);
      FUN_146824fca(auStack_470);
      pcStack_4d0 = "$type";
      pcStack_4c8 = (char *)CONCAT44(pcStack_4c8._4_4_,5);
      FUN_146824bae(auStack_470,&pcStack_4d0);
      pwStack_4e0 = L"Channel";
      uStack_4d8 = 7;
      FUN_146824d20(auStack_470,&pwStack_4e0);
      pcStack_4d0 = acStack_4b0;
      uStack_4b8 = 0;
      puStack_4c0 = auStack_470;
      pcStack_4c8 = pcStack_4d0;
      FUN_14001b87a(param_4,&pcStack_4d0);
      pcVar6 = pcStack_4d0;
      iVar5 = (int)pcStack_4c8 - (int)pcStack_4d0;
      pwStack_4e0 = L"$text";
      uStack_4d8 = 5;
      FUN_146824bae(auStack_470,&pwStack_4e0);
      pcStack_4f0 = pcVar6;
      iStack_4e8 = iVar5;
      FUN_146824d20(auStack_470);
      FUN_144afef72(&pcStack_4d0);
      FUN_146825026(auStack_470);
    }
    if (bVar7 != 5) {
      pcStack_4d0 = "_severity";
      pcStack_4c8._0_4_ = 9;
      FUN_146824bae(auStack_470,&pcStack_4d0);
      FUN_146824fca(auStack_470);
      pcStack_4d0 = "$type";
      pcStack_4c8 = (char *)CONCAT44(pcStack_4c8._4_4_,5);
      FUN_146824bae(auStack_470,&pcStack_4d0);
      pwStack_4e0 = L"Severity";
      uStack_4d8 = 8;
      FUN_146824d20(auStack_470);
      _Str = (wchar_t *)FUN_1427674c7(param_3);
      uVar4 = 0;
      if (_Str != (wchar_t *)0x0) {
        sVar2 = wcslen(_Str);
        uVar4 = (int)sVar2;
      }
      pcStack_4d0 = "$text";
      pcStack_4c8 = (char *)CONCAT44(pcStack_4c8._4_4_,5);
      FUN_146824bae(auStack_470);
      pwStack_4e0 = _Str;
      uStack_4d8 = uVar4;
      FUN_146825286(auStack_470);
      FUN_146825026(auStack_470);
    }
    FUN_146825026(auStack_470);
  }
  FUN_146825026(auStack_470);
  FUN_147e16dd8(lStack_510,auStack_470);
  FUN_146822556(auStack_470);
  if ((uStack_48 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e166d6 FUN_147e166d6 body=30 status=ok
// SIG undefined FUN_147e166d6(void)

void FUN_147e166d6(void)

{
  FUN_147e166c0();
  return;
}



// FUNCTION 147e16714 FUN_147e16714 body=922 status=ok
// SIG undefined FUN_147e16714(void)

void FUN_147e16714(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  byte bVar1;
  wchar_t *_Str;
  size_t sVar2;
  byte bVar3;
  undefined8 unaff_RBP;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  undefined1 auStack_548 [32];
  byte local_528;
  undefined1 local_520;
  undefined8 local_510;
  undefined *local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  char *local_4f0;
  int local_4e8;
  wchar_t *local_4e0;
  undefined4 local_4d8;
  char *local_4d0;
  char *local_4c8;
  undefined1 *local_4c0;
  undefined1 local_4b8;
  char local_4b0 [64];
  undefined1 local_470 [1064];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_548;
  bVar3 = *param_4 != 0 & DAT_14c75b130;
  bVar7 = (byte)param_3 & 0xf;
  local_510 = param_1;
  FUN_146824a02(local_470,0x400);
  FUN_146824fca(local_470);
  FUN_140212f8e(&local_4f8);
  local_508 = &DAT_14a17510b;
  local_500 = 4;
  FUN_1468253e2(local_470,&local_508,local_4f8);
  bVar1 = bVar7 - 1;
  if (bVar1 < 7) {
    pcVar6 = (&PTR_s_Critical_14ab46838)[bVar1];
    uVar4 = *(undefined4 *)(&DAT_14ab46870 + (ulonglong)bVar1 * 4);
  }
  else {
    uVar4 = 0xb;
    pcVar6 = "Information";
  }
  local_4d0 = "level";
  local_4c8 = (char *)CONCAT44(local_4c8._4_4_,5);
  FUN_146824bae(local_470);
  local_4e0 = (wchar_t *)pcVar6;
  local_4d8 = uVar4;
  FUN_146824d20(local_470);
  local_528 = bVar3;
  local_520 = bVar7 != 5;
  FUN_147e16ab6(local_470,param_2,param_3,param_4);
  if ((bVar7 != 5 | bVar3) == 1) {
    FUN_147e16c5e(local_470,param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar3) & 0xffffffff,
                  bVar7 != 5);
    local_4d0 = "properties";
    local_4c8 = (char *)CONCAT44(local_4c8._4_4_,10);
    FUN_146824bae(local_470);
    FUN_146824fca(local_470);
    if (bVar3 != 0) {
      local_4d0 = "_channel";
      local_4c8._0_4_ = 8;
      FUN_146824bae(local_470,&local_4d0);
      FUN_146824fca(local_470);
      local_4d0 = "$type";
      local_4c8 = (char *)CONCAT44(local_4c8._4_4_,5);
      FUN_146824bae(local_470,&local_4d0);
      local_4e0 = L"Channel";
      local_4d8 = 7;
      FUN_146824d20(local_470,&local_4e0);
      local_4d0 = local_4b0;
      local_4b8 = 0;
      local_4c0 = local_470;
      local_4c8 = local_4d0;
      FUN_14001b87a(param_4,&local_4d0);
      pcVar6 = local_4d0;
      iVar5 = (int)local_4c8 - (int)local_4d0;
      local_4e0 = L"$text";
      local_4d8 = 5;
      FUN_146824bae(local_470,&local_4e0);
      local_4f0 = pcVar6;
      local_4e8 = iVar5;
      FUN_146824d20(local_470);
      FUN_144afef72(&local_4d0);
      FUN_146825026(local_470);
    }
    if (bVar7 != 5) {
      local_4d0 = "_severity";
      local_4c8._0_4_ = 9;
      FUN_146824bae(local_470,&local_4d0);
      FUN_146824fca(local_470);
      local_4d0 = "$type";
      local_4c8 = (char *)CONCAT44(local_4c8._4_4_,5);
      FUN_146824bae(local_470,&local_4d0);
      local_4e0 = L"Severity";
      local_4d8 = 8;
      FUN_146824d20(local_470);
      _Str = (wchar_t *)FUN_1427674c7(param_3);
      uVar4 = 0;
      if (_Str != (wchar_t *)0x0) {
        sVar2 = wcslen(_Str);
        uVar4 = (int)sVar2;
      }
      local_4d0 = "$text";
      local_4c8 = (char *)CONCAT44(local_4c8._4_4_,5);
      FUN_146824bae(local_470);
      local_4e0 = _Str;
      local_4d8 = uVar4;
      FUN_146825286(local_470);
      FUN_146825026(local_470);
    }
    FUN_146825026(local_470);
  }
  FUN_146825026(local_470);
  FUN_147e16dd8(local_510,local_470);
  FUN_146822556(local_470);
  if ((local_48 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e16ab0 thunk_FUN_147e17138 body=5 status=ok
// SIG undefined thunk_FUN_147e17138(void)

void thunk_FUN_147e17138(void)

{
  FUN_147e17138();
  return;
}



// FUNCTION 147e16ab6 FUN_147e16ab6 body=422 status=ok
// SIG undefined FUN_147e16ab6(void)

void FUN_147e16ab6(undefined8 param_1,wchar_t *param_2,undefined4 param_3,undefined8 param_4,
                  char param_5,char param_6)

{
  wchar_t *_Str;
  size_t sVar1;
  longlong lVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_298 [40];
  undefined2 *local_270;
  int local_268;
  char *local_260;
  undefined4 local_258;
  undefined2 *local_250;
  undefined2 *local_248;
  ulonglong *local_240;
  undefined1 local_238;
  undefined2 local_230 [256];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_250 = local_230;
  local_238 = 0;
  local_240 = &local_30;
  local_248 = local_250;
  if (param_5 != '\0') {
    FUN_14001b87a(param_4,&local_250);
    if (local_240 <= local_248 + 1) {
      FUN_1402134d6(&local_250,2);
    }
    *local_248 = 0x203a;
    local_248 = local_248 + 1;
  }
  if (param_6 != '\0') {
    _Str = (wchar_t *)FUN_1427674c7(param_3);
    if (_Str == (wchar_t *)0x0) {
      sVar1 = 0;
    }
    else {
      sVar1 = wcslen(_Str);
    }
    lVar2 = FUN_144aa081e(&local_250,_Str,sVar1);
    puVar3 = *(undefined2 **)(lVar2 + 8);
    if (*(undefined2 **)(lVar2 + 0x10) <= puVar3 + 1) {
      FUN_1402134d6(lVar2,2);
      puVar3 = *(undefined2 **)(lVar2 + 8);
    }
    *puVar3 = 0x203a;
    *(undefined2 **)(lVar2 + 8) = puVar3 + 1;
  }
  if (param_2 == (wchar_t *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = wcslen(param_2);
  }
  FUN_144aa081e(&local_250,param_2,sVar1);
  puVar3 = local_250;
  iVar4 = (int)local_248 - (int)local_250;
  local_260 = "message";
  local_258 = 7;
  FUN_146824bae(param_1);
  local_270 = puVar3;
  local_268 = iVar4;
  FUN_146824d20(param_1);
  FUN_144afef72(&local_250);
  if ((local_30 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e16c5e FUN_147e16c5e body=377 status=ok
// SIG undefined FUN_147e16c5e(void)

void FUN_147e16c5e(undefined8 param_1,ushort *param_2,char param_3,char param_4)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ushort *puVar6;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  int local_270;
  char *local_268;
  undefined4 local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  ulonglong *local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c [62];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_258 = &local_238;
  local_240 = 0;
  local_248 = &local_38;
  local_250 = local_258;
  if (param_3 != '\0') {
    local_238 = 0x656e6e6168635f7b;
    local_230 = 0x203a7d6c;
    local_250 = local_22c;
  }
  if (param_4 != '\0') {
    *(undefined8 *)((longlong)local_250 + 5) = 0x203a7d7974697265;
    *local_250 = 0x6972657665735f7b;
    local_250 = (undefined8 *)((longlong)local_250 + 0xd);
  }
  while( true ) {
    iVar3 = -1;
    puVar2 = param_2;
    do {
      puVar6 = puVar2;
      uVar1 = *puVar6;
      uVar4 = 1L << ((byte)uVar1 & 0x3f);
      uVar5 = uVar4 & 0x2800000000000000;
      if ((uVar1 & 0xffc0) != 0x40) {
        uVar5 = 0;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar6 + 1;
    } while (uVar5 == 0 && ((uint)(uVar1 < 0x40) & (uint)uVar4) == 0);
    FUN_144aa081e(&local_258,param_2,iVar3);
    local_278 = local_258;
    if (*puVar6 == 0) break;
    FUN_147e16ebe(&local_258);
    FUN_147e16ebe(&local_258,*puVar6);
    param_2 = puVar6 + 1;
  }
  iVar3 = (int)local_250 - (int)local_258;
  local_268 = "format";
  local_260 = 6;
  FUN_146824bae(param_1);
  local_270 = iVar3;
  FUN_146824d20(param_1);
  FUN_144afef72(&local_258);
  if ((local_38 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e16dd8 FUN_147e16dd8 body=229 status=ok
// SIG undefined FUN_147e16dd8(void)

void FUN_147e16dd8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_2a8 [40];
  undefined1 *local_280;
  ulonglong local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_240 [512];
  undefined1 *local_40;
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_40 = (undefined1 *)0x0;
  local_30 = 0x200;
  local_38 = FUN_146824a70();
  if (local_38 < 0x201) {
    local_280 = (undefined1 *)0x0;
  }
  else {
    FUN_147e17006(local_240);
    local_280 = local_40;
  }
  if (local_280 == (undefined1 *)0x0) {
    local_280 = local_240;
  }
  local_278 = local_38;
  FUN_146824a76(param_2,&local_270);
  local_258 = local_270;
  uStack_254 = uStack_26c;
  uStack_250 = uStack_268;
  uStack_24c = uStack_264;
  FUN_147e16f44(param_1);
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e16ebe FUN_147e16ebe body=133 status=ok
// SIG undefined FUN_147e16ebe(void)

longlong FUN_147e16ebe(longlong param_1,undefined2 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = param_2;
  iVar1 = FUN_14475aa65(0,&local_1a,1);
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar3 + iVar1)) {
    FUN_1402134d6(param_1);
    lVar3 = *(longlong *)(param_1 + 8);
  }
  uVar2 = FUN_14475a98a(lVar3,iVar1,&local_1a,1);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e16f44 FUN_147e16f44 body=193 status=ok
// SIG undefined FUN_147e16f44(void)

void FUN_147e16f44(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_458 [32];
  undefined2 *local_438;
  undefined2 *local_430;
  ulonglong *local_428;
  char local_420;
  undefined2 local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_438 = local_418;
  local_420 = '\0';
  local_428 = &local_18;
  local_430 = local_438;
  FUN_146824962(param_2,&local_438);
  if (local_428 <= local_430 + 1) {
    FUN_140213274(&local_438,1);
  }
  *local_430 = 10;
  local_430 = local_430 + 1;
  FUN_147e170ba(param_1,&local_438);
  if (local_420 == '\x01') {
    FUN_1400020a8(local_438);
  }
  if ((local_18 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e17006 FUN_147e17006 body=179 status=ok
// SIG undefined FUN_147e17006(void)

void FUN_147e17006(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x208);
  if ((longlong)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  lVar4 = 0x200;
  if (0x200 < uVar1) {
    uVar3 = uVar1;
    if (0x200 < *(longlong *)(param_1 + 0x210)) {
      uVar3 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
    }
    lVar2 = FUN_144a3809e(uVar3,0);
    lVar4 = 0x7fffffffffffffff;
    if ((longlong)uVar1 <= lVar2) {
      lVar4 = lVar2;
    }
  }
  *(longlong *)(param_1 + 0x210) = lVar4;
  if ((lVar4 < 0x201) && (*(longlong *)(param_1 + 0x200) == 0)) {
    return;
  }
  if (lVar4 < 0x201) {
    lVar4 = 0;
  }
  FUN_1467ac634(param_1 + 0x200,0,lVar4,1);
  return;
}



// FUNCTION 147e170ba FUN_147e170ba body=126 status=ok
// SIG undefined FUN_147e170ba(void)

void FUN_147e170ba(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  void *lpBuffer;
  HANDLE hConsoleOutput;
  FILE *_File;
  
  puVar1 = (undefined2 *)param_2[1];
  if (*(char *)(param_1 + 0x11) == '\x01') {
    lVar2 = *param_2;
    *puVar1 = 0;
    lpBuffer = (void *)*param_2;
    hConsoleOutput = GetStdHandle(0xfffffff5);
    WriteConsoleW(hConsoleOutput,lpBuffer,(DWORD)((ulonglong)((longlong)puVar1 - lVar2) >> 1),
                  (LPDWORD)0x0,(LPVOID)0x0);
    return;
  }
  *puVar1 = 0;
  FUN_14049bb83(&DAT_149e0625e,*param_2);
  _File = (FILE *)__acrt_iob_func(1);
                    /* WARNING: Could not recover jumptable at 0x000147e17131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fflush(_File);
  return;
}



// FUNCTION 147e17138 FUN_147e17138 body=236 status=ok
// SIG undefined FUN_147e17138(void)

void FUN_147e17138(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_478 [32];
  undefined4 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined2 *local_438;
  undefined2 *local_430;
  ulonglong *local_428;
  char local_420;
  undefined2 local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_438 = local_418;
  local_420 = '\0';
  local_428 = &local_18;
  local_450 = param_5;
  local_458 = DAT_14c868800;
  local_448 = 0;
  local_430 = local_438;
  FUN_140212aa8(&local_438,param_3,param_4,param_2);
  if (local_428 <= local_430 + 1) {
    FUN_140213274(&local_438,1);
  }
  *local_430 = 10;
  local_430 = local_430 + 1;
  FUN_147e170ba(param_1,&local_438);
  if (local_420 == '\x01') {
    FUN_1400020a8(local_438);
  }
  if ((local_18 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e17226 FUN_147e17226 body=1291 status=ok
// SIG undefined FUN_147e17226(void)

void FUN_147e17226(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  byte bVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  int iVar11;
  uint uVar12;
  byte bVar13;
  char *pcVar14;
  undefined1 auStack_528 [32];
  undefined *local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  char *local_4f0;
  int local_4e8;
  wchar_t *local_4e0;
  uint local_4d8;
  undefined8 local_4d0;
  char *local_4c8;
  longlong *local_4c0;
  undefined1 local_4b8;
  char local_4b0 [64];
  longlong local_470 [133];
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_528;
  bVar9 = *(longlong *)(param_2 + 0x14) != 0 & DAT_14c75b130;
  uVar10 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar9);
  bVar13 = *(byte *)(param_2 + 0x1c) & 0xf;
  FUN_146824a02(local_470,0x400);
  FUN_146824fca(local_470);
  FUN_1467eb13c(param_2 + 0x20,&local_4f8);
  local_508 = &DAT_14a17510b;
  local_500 = 4;
  FUN_1468253e2(local_470,&local_508,local_4f8);
  bVar5 = (*(byte *)(param_2 + 0x1c) & 0xf) - 1;
  if (bVar5 < 7) {
    pcVar14 = (&PTR_s_Critical_14ab46838)[bVar5];
    uVar12 = *(uint *)(&DAT_14ab46870 + (ulonglong)bVar5 * 4);
  }
  else {
    uVar12 = 0xb;
    pcVar14 = "Information";
  }
  local_4d0 = "level";
  local_4c8 = (char *)CONCAT44(local_4c8._4_4_,5);
  FUN_146824bae(local_470);
  local_4e0 = (wchar_t *)pcVar14;
  local_4d8 = uVar12;
  FUN_146824d20(local_470);
  FUN_147e177e6(local_470,param_2,uVar10 & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar13 != 5) & 0xffffffff);
  if (bVar13 == 5 && bVar9 == 0) {
    cVar6 = FUN_1468224f4(param_2 + 0x28);
    if (cVar6 == '\0') goto LAB_147e176e1;
  }
  FUN_147e17966(local_470,param_2,uVar10 & 0xffffffff,bVar13 != 5);
  local_4d0 = "properties";
  local_4c8 = (char *)CONCAT44(local_4c8._4_4_,10);
  FUN_146824bae(local_470);
  FUN_146824fca(local_470);
  if (bVar9 != 0) {
    local_4d0 = "_channel";
    local_4c8._0_4_ = 8;
    FUN_146824bae(local_470,&local_4d0);
    FUN_146824fca(local_470);
    local_4d0 = "$type";
    local_4c8 = (char *)CONCAT44(local_4c8._4_4_,5);
    FUN_146824bae(local_470,&local_4d0);
    local_4e0 = L"Channel";
    local_4d8 = 7;
    FUN_146824d20(local_470,&local_4e0);
    local_4d0 = local_4b0;
    local_4b8 = 0;
    local_4c0 = local_470;
    local_4c8 = local_4d0;
    FUN_14001b87a(param_2 + 0x14,&local_4d0);
    pcVar14 = local_4d0;
    iVar11 = (int)local_4c8 - (int)local_4d0;
    local_4e0 = L"$text";
    local_4d8 = 5;
    FUN_146824bae(local_470,&local_4e0);
    local_4f0 = pcVar14;
    local_4e8 = iVar11;
    FUN_146824d20(local_470);
    FUN_144afef72(&local_4d0);
    FUN_146825026(local_470);
  }
  if (bVar13 != 5) {
    local_4d0 = "_severity";
    local_4c8._0_4_ = 9;
    FUN_146824bae(local_470,&local_4d0);
    FUN_146824fca(local_470);
    local_4d0 = "$type";
    local_4c8 = (char *)CONCAT44(local_4c8._4_4_,5);
    FUN_146824bae(local_470,&local_4d0);
    local_4e0 = L"Severity";
    local_4d8 = 8;
    FUN_146824d20(local_470);
    pwVar7 = (wchar_t *)FUN_1427674c7(*(undefined1 *)(param_2 + 0x1c));
    uVar12 = 0;
    if (pwVar7 != (wchar_t *)0x0) {
      sVar8 = wcslen(pwVar7);
      uVar12 = (uint)sVar8;
    }
    local_4d0 = "$text";
    local_4c8 = (char *)CONCAT44(local_4c8._4_4_,5);
    FUN_146824bae(local_470);
    local_4e0 = pwVar7;
    local_4d8 = uVar12;
    FUN_146825286(local_470);
    FUN_146825026(local_470);
  }
  pwVar7 = *(wchar_t **)(param_2 + 0x48);
  if (pwVar7 != (wchar_t *)0x0) {
    sVar8 = wcslen(pwVar7);
    local_4d0 = "_ns";
    local_4c8 = (char *)CONCAT44(local_4c8._4_4_,3);
    FUN_146824bae(local_470);
    local_4e0 = pwVar7;
    local_4d8 = (uint)sVar8;
    FUN_146825286(local_470);
  }
  pwVar7 = *(wchar_t **)(param_2 + 0x50);
  if (pwVar7 != (wchar_t *)0x0) {
    sVar8 = wcslen(pwVar7);
    local_4d0 = "_key";
    local_4c8 = (char *)CONCAT44(local_4c8._4_4_,4);
    FUN_146824bae(local_470);
    local_4e0 = pwVar7;
    local_4d8 = (uint)sVar8;
    FUN_146825286(local_470);
  }
  FUN_147e17a82(param_2 + 0x28,&local_4d0);
  if (((ulonglong)local_4d0 & 0x1f) != 0) {
    do {
      local_4e0 = (wchar_t *)(local_4c8 + -(ulonglong)local_4d0._4_4_);
      local_4d8 = local_4d0._4_4_;
      FUN_146824bae(local_470,&local_4e0);
      FUN_146824f70(local_470,&local_4d0);
      FUN_14682250e(&local_4d0);
    } while (((ulonglong)local_4d0 & 0x1f) != 0);
  }
  plVar4 = local_4c0;
  if (local_4c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4c0 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_4c0 + 0x10))(local_4c0);
      plVar4[1] = 0;
      plVar4[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar4 + 3);
      uVar10 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar10 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  FUN_146825026(local_470);
LAB_147e176e1:
  FUN_146825026(local_470);
  FUN_147e16dd8(param_1,local_470);
  FUN_146822556(local_470);
  if ((local_48 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e17732 FUN_147e17732 body=179 status=ok
// SIG undefined FUN_147e17732(void)

void FUN_147e17732(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined2 *local_440;
  undefined2 *local_438;
  ulonglong *local_430;
  char local_428;
  undefined2 local_420 [512];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_440 = local_420;
  local_428 = '\0';
  local_430 = &local_20;
  local_438 = local_440;
  FUN_1467eb1ca(param_2,&local_440);
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  *local_438 = 0;
  local_448 = 0xbff0000000000000;
  FUN_147e166c0(param_1,local_440,uVar1,param_2 + 0x14);
  if (local_428 == '\x01') {
    FUN_1400020a8(local_440);
  }
  if ((local_20 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e177e6 FUN_147e177e6 body=383 status=ok
// SIG undefined FUN_147e177e6(void)

void FUN_147e177e6(undefined8 param_1,longlong param_2,char param_3,char param_4)

{
  wchar_t *_Str;
  size_t sVar1;
  longlong lVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_298 [40];
  undefined2 *local_270;
  int local_268;
  char *local_260;
  undefined4 local_258;
  undefined2 *local_250;
  undefined2 *local_248;
  ulonglong *local_240;
  undefined1 local_238;
  undefined2 local_230 [256];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_250 = local_230;
  local_238 = 0;
  local_240 = &local_30;
  local_248 = local_250;
  if (param_3 != '\0') {
    FUN_14001b87a(param_2 + 0x14,&local_250);
    if (local_240 <= local_248 + 1) {
      FUN_1402134d6(&local_250,2);
    }
    *local_248 = 0x203a;
    local_248 = local_248 + 1;
  }
  if (param_4 != '\0') {
    _Str = (wchar_t *)FUN_1427674c7(*(undefined1 *)(param_2 + 0x1c));
    if (_Str == (wchar_t *)0x0) {
      sVar1 = 0;
    }
    else {
      sVar1 = wcslen(_Str);
    }
    lVar2 = FUN_144aa081e(&local_250,_Str,sVar1);
    puVar3 = *(undefined2 **)(lVar2 + 8);
    if (*(undefined2 **)(lVar2 + 0x10) <= puVar3 + 1) {
      FUN_1402134d6(lVar2,2);
      puVar3 = *(undefined2 **)(lVar2 + 8);
    }
    *puVar3 = 0x203a;
    *(undefined2 **)(lVar2 + 8) = puVar3 + 1;
  }
  FUN_1467eb146(param_2,&local_250);
  puVar3 = local_250;
  iVar4 = (int)local_248 - (int)local_250;
  local_260 = "message";
  local_258 = 7;
  FUN_146824bae(param_1);
  local_270 = puVar3;
  local_268 = iVar4;
  FUN_146824d20(param_1);
  FUN_144afef72(&local_250);
  if ((local_30 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e17966 FUN_147e17966 body=283 status=ok
// SIG undefined FUN_147e17966(void)

void FUN_147e17966(undefined8 param_1,undefined8 *param_2,char param_3,char param_4)

{
  wchar_t *_Str;
  undefined8 *puVar1;
  size_t sVar2;
  int iVar3;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  int local_260;
  char *local_258;
  undefined4 local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  ulonglong *local_238;
  undefined1 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c [62];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_248 = &local_228;
  local_230 = 0;
  local_238 = &local_28;
  local_240 = local_248;
  if (param_3 != '\0') {
    local_228 = 0x656e6e6168635f7b;
    local_220 = 0x203a7d6c;
    local_240 = local_21c;
  }
  if (param_4 != '\0') {
    *(undefined8 *)((longlong)local_240 + 5) = 0x203a7d7974697265;
    *local_240 = 0x6972657665735f7b;
    local_240 = (undefined8 *)((longlong)local_240 + 0xd);
  }
  _Str = (wchar_t *)*param_2;
  if (_Str == (wchar_t *)0x0) {
    sVar2 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
  }
  FUN_144aa081e(&local_248,_Str,sVar2);
  puVar1 = local_248;
  iVar3 = (int)local_240 - (int)local_248;
  local_258 = "format";
  local_250 = 6;
  FUN_146824bae(param_1);
  local_268 = puVar1;
  local_260 = iVar3;
  FUN_146824d20(param_1);
  FUN_144afef72(&local_248);
  if ((local_28 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e17a82 FUN_147e17a82 body=147 status=ok
// SIG undefined FUN_147e17a82(void)

uint * FUN_147e17a82(longlong param_1,uint *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146822224(param_1,&local_38);
  if ((local_38 & 0x1f) == 0) {
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (ulonglong *)(lVar3 + 0x18);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    *param_2 = local_38;
    param_2[1] = uStack_34;
    param_2[2] = uStack_30;
    param_2[3] = uStack_2c;
    *(longlong *)(param_2 + 4) = lVar3;
    *(undefined8 *)(param_2 + 6) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e17b16 FUN_147e17b16 body=24 status=ok
// SIG undefined FUN_147e17b16(void)

void FUN_147e17b16(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e17b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147e17b56 FUN_147e17b56 body=29 status=ok
// SIG undefined FUN_147e17b56(void)

undefined8 FUN_147e17b56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e17b96 FUN_147e17b96 body=93 status=ok
// SIG undefined FUN_147e17b96(void)

void FUN_147e17b96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab46410;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab463a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e17bf4 FUN_147e17bf4 body=93 status=ok
// SIG undefined FUN_147e17bf4(void)

void FUN_147e17bf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab46410;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab463a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e17c52 FUN_147e17c52 body=126 status=ok
// SIG undefined FUN_147e17c52(void)

void FUN_147e17c52(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab46410;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar2;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar3;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar4;
  *(undefined ***)p_Var1 = &PTR_FUN_14ab463a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e17cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e17cd0 FUN_147e17cd0 body=208 status=ok
// SIG undefined FUN_147e17cd0(void)

void FUN_147e17cd0(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined7 local_78;
  undefined1 local_71;
  undefined7 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar5 = *(code **)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0xb);
  uVar2 = *(undefined1 *)(param_1 + 10);
  uVar3 = *(undefined1 *)(param_1 + 8);
  uVar4 = *(undefined1 *)(param_1 + 9);
  uStack_70 = (undefined7)((ulonglong)*(undefined8 *)((longlong)param_2 + 7) >> 8);
  local_78 = (undefined7)*param_2;
  local_71 = (undefined1)((ulonglong)*param_2 >> 0x38);
  FUN_14023423e(local_68,param_2 + 2);
  local_58 = param_2[4];
  param_2[4] = 0;
  local_50 = *(undefined4 *)(param_2 + 5);
  local_4c = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  local_88 = uVar1;
  (*pcVar5)(&local_78,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff,
            CONCAT71((int7)((ulonglong)unaff_R14 >> 8),uVar4) & 0xffffffff,
            CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)param_2[2];
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e17da2 FUN_147e17da2 body=210 status=ok
// SIG undefined FUN_147e17da2(void)

undefined8 FUN_147e17da2(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined7 local_78;
  undefined1 local_71;
  undefined7 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar5 = *(code **)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0xb);
  uVar2 = *(undefined1 *)(param_1 + 10);
  uVar3 = *(undefined1 *)(param_1 + 8);
  uVar4 = *(undefined1 *)(param_1 + 9);
  uStack_70 = (undefined7)((ulonglong)*(undefined8 *)((longlong)param_2 + 7) >> 8);
  local_78 = (undefined7)*param_2;
  local_71 = (undefined1)((ulonglong)*param_2 >> 0x38);
  FUN_14023423e(local_68,param_2 + 2);
  local_58 = param_2[4];
  param_2[4] = 0;
  local_50 = *(undefined4 *)(param_2 + 5);
  local_4c = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  local_88 = uVar1;
  (*pcVar5)(&local_78,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff,
            CONCAT71((int7)((ulonglong)unaff_R14 >> 8),uVar4) & 0xffffffff,
            CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)param_2[2];
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e17e96 FUN_147e17e96 body=93 status=ok
// SIG undefined FUN_147e17e96(void)

void FUN_147e17e96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab465d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab46560;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e17ef4 FUN_147e17ef4 body=93 status=ok
// SIG undefined FUN_147e17ef4(void)

void FUN_147e17ef4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab465d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab46560;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e17f52 FUN_147e17f52 body=126 status=ok
// SIG undefined FUN_147e17f52(void)

void FUN_147e17f52(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab465d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab46560;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e17fc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e17fd0 FUN_147e17fd0 body=25 status=ok
// SIG undefined FUN_147e17fd0(void)

undefined8 FUN_147e17fd0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 147e17fec FUN_147e17fec body=104 status=ok
// SIG undefined FUN_147e17fec(void)

longlong * FUN_147e17fec(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 2);
  }
  param_1[8] = param_3;
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 147e18054 FUN_147e18054 body=148 status=ok
// SIG undefined FUN_147e18054(void)

void FUN_147e18054(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  (**(code **)(*(longlong *)param_1[0x1e] + 0x10))();
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e180dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147e180ec FUN_147e180ec body=136 status=ok
// SIG undefined FUN_147e180ec(void)

void FUN_147e180ec(longlong param_1)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ed8b54(local_60);
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0x131) {
    FUN_147e1836a(param_1);
  }
  local_48 = 0;
  local_38 = &PTR_LAB_14ab49fb0;
  local_58 = FUN_1437e71c6;
  local_30 = param_1;
  FUN_1449cc10c();
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e18176 FUN_147e18176 body=260 status=ok
// SIG undefined FUN_147e18176(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147e18176(undefined4 param_1)

{
  undefined1 auStack_88 [40];
  undefined *local_60;
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined **local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1a2e8) {
    FUN_144b3d300(&DAT_14cb1a2e8);
    if (DAT_14cb1a2e8 == -1) {
      _DAT_14cb1a2b8 = 0;
      _DAT_14cb1a2c0 = 0;
      _DAT_14cb1a298 = 0;
      uRam000000014cb1a2a0 = 0;
      _DAT_14cb1a2c4 = 0xffffffff00000080;
      _DAT_14cb1a2cc = 0;
      DAT_14cb1a2d8 = 0;
      _DAT_14cb1a2e0 = 0;
      atexit(FUN_1437e6f9e);
      _Init_thread_footer(&DAT_14cb1a2e8);
    }
  }
  local_30 = &local_60;
  local_60 = &DAT_14cb1a298;
  local_48 = 0;
  local_38 = &PTR_LAB_14ab49fd0;
  local_58 = &LAB_1437e7248;
  local_28 = param_1;
  FUN_1449cc10c();
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1827c FUN_147e1827c body=236 status=ok
// SIG undefined FUN_147e1827c(void)

undefined4 FUN_147e1827c(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_6c;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined4 *local_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = &local_6c;
  local_6c = 0xffffffff;
  local_58 = 0;
  local_48 = &PTR_LAB_14ab4a010;
  local_68 = FUN_1437e7312;
  local_38 = param_1;
  FUN_1449cc10c();
  local_78 = 0;
  FUN_1446f470e(&local_88,param_1,1);
  cVar1 = FUN_14686b02a(&local_88,&local_78);
  uVar2 = local_6c;
  if (cVar1 != '\0') {
    FUN_1400021e4(&local_78,&local_88);
    puVar3 = local_88;
    if (local_80 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar2 = FUN_147e1827c(puVar3);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147e1836a FUN_147e1836a body=147 status=ok
// SIG undefined FUN_147e1836a(void)

void FUN_147e1836a(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x988;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e99];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x988,8);
  }
  uVar2 = 0x7fffffff;
  if (0x130 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147e183fe FUN_147e183fe body=132 status=ok
// SIG undefined FUN_147e183fe(void)

void FUN_147e183fe(longlong param_1,int param_2)

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



// FUNCTION 147e18484 FUN_147e18484 body=31 status=ok
// SIG undefined FUN_147e18484(void)

undefined8 FUN_147e18484(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e184c0 FUN_147e184c0 body=93 status=ok
// SIG undefined FUN_147e184c0(void)

void FUN_147e184c0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab4a030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e1851e FUN_147e1851e body=123 status=ok
// SIG undefined FUN_147e1851e(void)

void FUN_147e1851e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab4a030;
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


