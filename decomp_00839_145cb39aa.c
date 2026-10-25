// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145cb39aa FUN_145cb39aa body=111 status=ok
// SIG undefined FUN_145cb39aa(void)

void FUN_145cb39aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  FUN_145cb3a1a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b40d220;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x40);
  puVar1[8] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  puVar1[10] = uVar3;
  return;
}



// FUNCTION 145cb3a1a FUN_145cb3a1a body=133 status=ok
// SIG undefined FUN_145cb3a1a(void)

undefined8 * FUN_145cb3a1a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_LAB_14b40d290;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 145cb3aa0 FUN_145cb3aa0 body=103 status=ok
// SIG undefined FUN_145cb3aa0(void)

ulonglong FUN_145cb3aa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145cb3aea:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145cb3aea;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145cb3b26 FUN_145cb3b26 body=111 status=ok
// SIG undefined FUN_145cb3b26(void)

undefined8 * FUN_145cb3b26(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b57c560;
  *(undefined2 *)(param_1 + 5) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1446f8bcc(param_1 + 9,0);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 145cb3b96 FUN_145cb3b96 body=39 status=ok
// SIG undefined FUN_145cb3b96(void)

void FUN_145cb3b96(longlong param_1)

{
  FUN_140f06b82();
                    /* WARNING: Could not recover jumptable at 0x000145cb3bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1068) + 0x70))(param_1 + 0x1068);
  return;
}



// FUNCTION 145cb3bbe FUN_145cb3bbe body=62 status=ok
// SIG undefined FUN_145cb3bbe(void)

undefined8 * FUN_145cb3bbe(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ba3c470;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb3bfc FUN_145cb3bfc body=38 status=ok
// SIG undefined FUN_145cb3bfc(void)

undefined8 FUN_145cb3bfc(undefined8 param_1,int param_2)

{
  FUN_14151f1a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb3c22 FUN_145cb3c22 body=40 status=ok
// SIG undefined FUN_145cb3c22(void)

undefined8 FUN_145cb3c22(undefined8 param_1,int param_2)

{
  FUN_145cb3c4a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb3c4a FUN_145cb3c4a body=150 status=ok
// SIG undefined FUN_145cb3c4a(void)

void FUN_145cb3c4a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba4e5b0;
  plVar3 = (longlong *)param_1[0xf];
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
  plVar3 = (longlong *)param_1[0xd];
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
  FUN_145cb3ce0(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cb3ce0 FUN_145cb3ce0 body=54 status=ok
// SIG undefined FUN_145cb3ce0(void)

void FUN_145cb3ce0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_148fc9ca0(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145cb3d1e FUN_145cb3d1e body=114 status=ok
// SIG undefined FUN_145cb3d1e(void)

undefined8 * FUN_145cb3d1e(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ba57ae0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x101000100000004;
  param_1[8] = 0x33f000000;
  *(undefined4 *)(param_1 + 9) = 0x10;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 6) = 1;
  FUN_1446f84a2(param_1 + 5,0);
  *(undefined8 *)param_1[5] = DAT_14cb8e210;
  return param_1;
}



// FUNCTION 145cb3d90 FUN_145cb3d90 body=40 status=ok
// SIG undefined FUN_145cb3d90(void)

undefined8 FUN_145cb3d90(undefined8 param_1,int param_2)

{
  FUN_145cb3db8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb3db8 FUN_145cb3db8 body=82 status=ok
// SIG undefined FUN_145cb3db8(void)

void FUN_145cb3db8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc6bab0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1457df34e(param_1);
  return;
}



// FUNCTION 145cb3e0a FUN_145cb3e0a body=40 status=ok
// SIG undefined FUN_145cb3e0a(void)

undefined8 FUN_145cb3e0a(undefined8 param_1,int param_2)

{
  FUN_145cb3e32();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb3e32 FUN_145cb3e32 body=82 status=ok
// SIG undefined FUN_145cb3e32(void)

void FUN_145cb3e32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc757f0;
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  FUN_145c1d54e(param_1);
  return;
}



// FUNCTION 145cb3e84 FUN_145cb3e84 body=40 status=ok
// SIG undefined FUN_145cb3e84(void)

undefined8 FUN_145cb3e84(undefined8 param_1,int param_2)

{
  FUN_145cb3eac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb3eac FUN_145cb3eac body=82 status=ok
// SIG undefined FUN_145cb3eac(void)

void FUN_145cb3eac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc7dd00;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145cb3efe FUN_145cb3efe body=40 status=ok
// SIG undefined FUN_145cb3efe(void)

undefined8 FUN_145cb3efe(undefined8 param_1,int param_2)

{
  FUN_145cb3f26();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb3f26 FUN_145cb3f26 body=75 status=ok
// SIG undefined FUN_145cb3f26(void)

void FUN_145cb3f26(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcb4e80;
  FUN_145cb3f72(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145cb3fd2(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cb3f72 FUN_145cb3f72 body=52 status=ok
// SIG undefined FUN_145cb3f72(void)

void FUN_145cb3f72(longlong *param_1)

{
  FUN_1400d7d10(param_1 + 3);
  FUN_145cb3fa6(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb3fa6 FUN_145cb3fa6 body=43 status=ok
// SIG undefined FUN_145cb3fa6(void)

void FUN_145cb3fa6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145838e00(param_1);
    param_1 = param_1 + 0x2c0;
  }
  return;
}



// FUNCTION 145cb3fd2 FUN_145cb3fd2 body=53 status=ok
// SIG undefined FUN_145cb3fd2(void)

void FUN_145cb3fd2(longlong *param_1)

{
  FUN_145cb4008();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb4008 FUN_145cb4008 body=346 status=ok
// SIG undefined FUN_145cb4008(void)

void FUN_145cb4008(longlong *param_1)

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
      FUN_1493d6936(*local_68 + (longlong)iStack_4c * 0x1a0 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1493e0932(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cb4164 FUN_145cb4164 body=43 status=ok
// SIG undefined FUN_145cb4164(void)

undefined8 FUN_145cb4164(undefined8 param_1,int param_2)

{
  FUN_145cb4190();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145cb4190 FUN_145cb4190 body=79 status=ok
// SIG undefined FUN_145cb4190(void)

void FUN_145cb4190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcdd930;
  param_1[1] = &PTR_FUN_14bcdd970;
  if (param_1[3] != 0) {
    FUN_140113f3a();
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    FUN_140113f3a();
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145cb41e0 FUN_145cb41e0 body=103 status=ok
// SIG undefined FUN_145cb41e0(void)

ulonglong FUN_145cb41e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145cb422a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145cb422a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145cb4248 FUN_145cb4248 body=303 status=ok
// SIG undefined FUN_145cb4248(void)

void FUN_145cb4248(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      FUN_140457ffc(param_3 + 0x8868,param_1);
      FUN_140457ffc(param_3 + 0x8890,param_1);
      FUN_140457ffc(param_3 + 35000,param_1);
      local_40 = 0;
      FUN_14485c47a(&local_40,param_3);
      local_38 = &local_40;
      FUN_14141ae68(param_1 + 0x20);
    }
  }
  if (param_4 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      FUN_145cb43fe(param_1,param_4);
      local_38 = (undefined8 *)0x0;
      FUN_14485c47a(&local_38,param_4);
      iVar1 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
        FUN_145cb4378((longlong *)(param_1 + 0x20),iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = local_38;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb4378 FUN_145cb4378 body=132 status=ok
// SIG undefined FUN_145cb4378(void)

void FUN_145cb4378(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cb43fe FUN_145cb43fe body=313 status=ok
// SIG undefined FUN_145cb43fe(void)

void FUN_145cb43fe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    FUN_140457ffc(param_2 + 0x8868,param_1);
    local_60 = FUN_145902512;
    local_58 = 0;
    FUN_145cb4538(local_50,param_1);
    FUN_14490d954(param_2 + 0x8868,&local_60,local_50);
    FUN_1449db362(local_50);
    FUN_140457ffc(param_2 + 0x8890,param_1);
    local_60 = FUN_1459027ae;
    local_58 = 0;
    FUN_145cb4538(local_50,param_1,&local_60);
    FUN_14490d954(param_2 + 0x8890,&local_60,local_50);
    FUN_1449db362(local_50);
    FUN_140457ffc(param_2 + 35000,param_1);
    local_60 = FUN_1459027ae;
    local_58 = 0;
    FUN_145cb4538(local_50,param_1,&local_60);
    FUN_14490d954(param_2 + 35000,&local_60,local_50);
    FUN_1449db362(local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb4538 FUN_145cb4538 body=428 status=ok
// SIG undefined FUN_145cb4538(void)

longlong * FUN_145cb4538(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_145cb4618:
    *puVar5 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9638a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145cb4618;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9638a0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145cb46e4 FUN_145cb46e4 body=509 status=ok
// SIG undefined FUN_145cb46e4(void)

void FUN_145cb46e4(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  
  lVar3 = *(longlong *)param_1[7];
  if (lVar3 != 0) {
    iVar9 = *(int *)(lVar3 + 8);
    lVar4 = param_1[7];
    param_1[7] = lVar3;
    *(undefined4 *)(lVar3 + 8) = 0;
    if (lVar4 != 0) {
      FUN_1400020a8();
    }
    if (iVar9 != -1) {
      puVar6 = (undefined8 *)((longlong)iVar9 * 0x38 + *param_1);
      goto LAB_145cb4721;
    }
  }
  iVar9 = (int)param_1[1];
  puVar6 = (undefined8 *)FUN_145cb48e2(param_1);
LAB_145cb4721:
  uVar1 = *(int *)(param_4 + 0x5c) * 3;
  if ((0 < *(int *)(DAT_14ca1c5d0 + 4)) && (iVar2 = (int)param_1[3], iVar2 != 0)) {
    param_1 = param_1 + 2;
    iVar8 = 0;
    do {
      puVar7 = *(undefined8 **)(*param_1 + (longlong)iVar8 * 8);
      if (((puVar7 != (undefined8 *)0x0) && (uVar1 <= *(uint *)(puVar7 + 4))) &&
         (*(int *)((longlong)puVar7 + 0x24) == -1)) {
        *(int *)((longlong)puVar7 + 0x24) = iVar9;
        *(undefined8 *)(*param_1 + (longlong)iVar8 * 8) =
             *(undefined8 *)(*param_1 + (longlong)(iVar2 + -1) * 8);
        FUN_147270e92(param_1);
        goto LAB_145cb47d5;
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  lVar3 = *(longlong *)(param_4 + 0x18);
  *(undefined4 *)(puVar7 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar7 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar7 + 0xe) = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_14a2ade70;
  puVar7[3] = lVar3;
  *(uint *)(puVar7 + 4) = uVar1;
  *(int *)((longlong)puVar7 + 0x24) = iVar9;
  *(undefined4 *)(puVar7 + 5) = 0;
  puVar7[6] = L"OIT::SortedIndexBuffer";
  puVar7[7] = 0;
  puVar7[8] = 0;
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) &&
     (*(int *)(*(longlong *)(lVar3 + 0x10) + 0x24) != 0)) {
    FUN_14006bf18(puVar7,param_2);
  }
LAB_145cb47d5:
  *(undefined4 *)((longlong)puVar6 + 0x24) = *(undefined4 *)(param_4 + 0x5c);
  *(uint *)(puVar6 + 5) = uVar1;
  *(undefined4 *)((longlong)puVar6 + 0x14) = *(undefined4 *)(param_4 + 0x58);
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_4 + 100);
  *(undefined4 *)((longlong)puVar6 + 0x1c) = *(undefined4 *)(param_4 + 0x68);
  *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_4 + 0x6c);
  *(undefined4 *)(puVar6 + 2) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x2c) = param_3;
  *(undefined4 *)(puVar6 + 6) = 0;
  *puVar6 = *(undefined8 *)(param_4 + 0x18);
  puVar6[1] = puVar7;
  *param_5 = (longlong)puVar7;
  uVar5 = (uint)*(byte *)((longlong)param_5 + 0xb) << 0x18;
  uVar1 = *(uint *)(puVar6 + 2);
  *(uint *)(param_5 + 1) = uVar1 & 0xffffff | uVar5;
  *(uint *)(param_5 + 1) =
       uVar1 & 0xffffff | uVar5 & 0xf8ffffff | (*(uint *)(puVar6 + 6) & 7) << 0x18;
  return;
}



// FUNCTION 145cb48e2 FUN_145cb48e2 body=59 status=ok
// SIG undefined FUN_145cb48e2(void)

longlong FUN_145cb48e2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145cb4934(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_145cb491d(lVar2);
  return lVar2;
}



// FUNCTION 145cb491d FUN_145cb491d body=22 status=ok
// SIG undefined FUN_145cb491d(void)

void FUN_145cb491d(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 145cb4934 FUN_145cb4934 body=143 status=ok
// SIG undefined FUN_145cb4934(void)

void FUN_145cb4934(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cb49ca FUN_145cb49ca body=55 status=ok
// SIG undefined FUN_145cb49ca(void)

void FUN_145cb49ca(longlong *param_1)

{
  FUN_145cb4ac2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb4a02 FUN_145cb4a02 body=67 status=ok
// SIG undefined FUN_145cb4a02(void)

void FUN_145cb4a02(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145cb4b3c(param_1);
    FUN_145cb4a46(param_1,0);
    return;
  }
  FUN_145cb4a46(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14151f792(param_1);
  return;
}



// FUNCTION 145cb4a46 FUN_145cb4a46 body=123 status=ok
// SIG undefined FUN_145cb4a46(void)

void FUN_145cb4a46(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 145cb4ac2 FUN_145cb4ac2 body=121 status=ok
// SIG undefined FUN_145cb4ac2(void)

void FUN_145cb4ac2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 145cb4b3c FUN_145cb4b3c body=327 status=ok
// SIG undefined FUN_145cb4b3c(void)

void FUN_145cb4b3c(longlong *param_1)

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



// FUNCTION 145cb4c84 FUN_145cb4c84 body=533 status=ok
// SIG undefined FUN_145cb4c84(void)

undefined8 * FUN_145cb4c84(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
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
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_145cb5082(param_2,uVar4);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_145cb4e9a(param_2);
    }
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        uVar1 = *(ulonglong *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar3 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar3 = param_3 + 7;
        }
        iVar2 = *(int *)((longlong)plVar3 +
                        (ulonglong)((int)param_3[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar2 != -1) {
          do {
            if (*(ulonglong *)(*param_3 + (longlong)iVar2 * 0x10) == uVar1) goto LAB_145cb4dbb;
            iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_3 + 8);
          } while (iVar2 != -1);
        }
      }
      FUN_145c15ca6(param_2,&local_58,*local_80 + (longlong)iStack_64 * 0x10,0);
LAB_145cb4dbb:
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145cb4e9a FUN_145cb4e9a body=486 status=ok
// SIG undefined FUN_145cb4e9a(void)

void FUN_145cb4e9a(longlong *param_1)

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



// FUNCTION 145cb5082 FUN_145cb5082 body=441 status=ok
// SIG undefined FUN_145cb5082(void)

void FUN_145cb5082(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        uVar3 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 145cb523c FUN_145cb523c body=125 status=ok
// SIG undefined FUN_145cb523c(void)

void FUN_145cb523c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148e76ea8(param_1,iVar1);
    }
    FUN_148e76e7f((longlong)iVar1 * 0x208 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148e76f40(param_1,param_2,iVar1 - param_2);
    FUN_148e76fae(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145cb52ba FUN_145cb52ba body=584 status=ok
// SIG undefined FUN_145cb52ba(void)

void FUN_145cb52ba(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a63f30();
  local_60 = (code *)&LAB_147b8a246;
  local_58 = 0;
  FUN_145cb5504(&DAT_14c867518,&local_70,param_1,&local_60);
  local_60 = (code *)&LAB_147b8a254;
  local_58 = 0;
  FUN_145cb5504(&DAT_14c872bf8,&local_70,param_1,&local_60);
  local_60 = (code *)&LAB_14354fd00;
  local_58 = 0;
  FUN_145cb5504(&DAT_14c872b90,&local_70,param_1,&local_60);
  local_60 = (code *)&LAB_147b8a262;
  local_58 = 0;
  FUN_145cb5504(&DAT_14c872c10,&local_70,param_1,&local_60);
  uVar1 = FUN_145cb55cc();
  local_70 = &LAB_147b8a270;
  local_68 = 0;
  FUN_145cb5728(&local_60,param_1,&local_70);
  FUN_145c73a1e(uVar1,&local_70,&local_60);
  FUN_1401cb1ee(&local_60);
  local_60 = (code *)&LAB_147b8a27e;
  local_58 = 0;
  FUN_145cb5504(&DAT_14c867578,&local_70,param_1,&local_60);
  local_60 = (code *)&LAB_147b8a28c;
  local_58 = 0;
  FUN_145cb5a0a(&local_70,param_1,&local_60);
  local_60 = FUN_147b8a298;
  local_58 = 0;
  FUN_145cb57d0(&local_70,param_1,&local_60);
  local_60 = FUN_147b8a2c6;
  local_58 = 0;
  FUN_145cb5660(&DAT_14c867638,&local_70,param_1,&local_60);
  local_60 = FUN_147b8a30c;
  local_58 = 0;
  FUN_145cb5ace(&local_70,param_1,&local_60);
  local_60 = FUN_147b8a3c6;
  local_58 = 0;
  FUN_145cb588e(&local_70,param_1,&local_60);
  local_60 = FUN_147b8a48e;
  local_58 = 0;
  FUN_145cb594c(&local_70,param_1,&local_60);
  local_60 = FUN_147b8a560;
  local_58 = 0;
  FUN_145cb5660(&DAT_14c867ae8,&local_70,param_1,&local_60);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb5504 FUN_145cb5504 body=199 status=ok
// SIG undefined FUN_145cb5504(void)

undefined8
FUN_145cb5504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a9b1b10;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb55cc FUN_145cb55cc body=147 status=ok
// SIG undefined FUN_145cb55cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cb55cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867570) {
    FUN_144b3d300(&DAT_14c867570);
    if (DAT_14c867570 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c867530);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c867530,4000);
      DAT_14c867558 = 0;
      _DAT_14c867560 = 0;
      _DAT_14c867568 = 2;
      atexit(FUN_14277f6a8);
      _Init_thread_footer(&DAT_14c867570);
    }
  }
  return &DAT_14c867530;
}



// FUNCTION 145cb5660 FUN_145cb5660 body=199 status=ok
// SIG undefined FUN_145cb5660(void)

undefined8
FUN_145cb5660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_149e35290;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a9b1d40;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140feff30(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb5728 FUN_145cb5728 body=168 status=ok
// SIG undefined FUN_145cb5728(void)

LPCRITICAL_SECTION FUN_145cb5728(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,param_1 + 1);
  *puVar3 = &PTR_LAB_149e065d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a9b1b80;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145cb57d0 FUN_145cb57d0 body=188 status=ok
// SIG undefined FUN_145cb57d0(void)

undefined8 FUN_145cb57d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  local_50 = 0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_50);
  *puVar3 = &PTR_LAB_14a9b1cd0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a9b1c60;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145cb5d76(param_1,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb588e FUN_145cb588e body=188 status=ok
// SIG undefined FUN_145cb588e(void)

undefined8 FUN_145cb588e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  local_50 = 0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_50);
  *puVar3 = &PTR_LAB_14a9b1e90;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a9b1e20;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145cb5e84(param_1,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb594c FUN_145cb594c body=188 status=ok
// SIG undefined FUN_145cb594c(void)

undefined8 FUN_145cb594c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  local_50 = 0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_50);
  *puVar3 = &PTR_LAB_14a9b1f70;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a9b1f00;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145cb5f92(param_1,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb5a0a FUN_145cb5a0a body=195 status=ok
// SIG undefined FUN_145cb5a0a(void)

undefined8 FUN_145cb5a0a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  local_50 = 0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_50);
  *puVar3 = &PTR_LAB_149e001f0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a9b1bf0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145cb5b92(&DAT_14c8675a8,param_1,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb5ace FUN_145cb5ace body=195 status=ok
// SIG undefined FUN_145cb5ace(void)

undefined8 FUN_145cb5ace(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  local_50 = 0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_50);
  *puVar3 = &PTR_LAB_14a9b20d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a9b1db0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145cb5c78(&DAT_14c867650,param_1,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb5b92 FUN_145cb5b92 body=216 status=ok
// SIG undefined FUN_145cb5b92(void)

undefined8 * FUN_145cb5b92(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145cb5c78 FUN_145cb5c78 body=216 status=ok
// SIG undefined FUN_145cb5c78(void)

undefined8 * FUN_145cb5c78(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145cb5d5e FUN_145cb5d5e body=24 status=ok
// SIG undefined FUN_145cb5d5e(void)

bool FUN_145cb5d5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145cb5d76 FUN_145cb5d76 body=233 status=ok
// SIG undefined FUN_145cb5d76(void)

undefined8 * FUN_145cb5d76(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c867620,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c867628;
      lVar6 = (longlong)(int)DAT_14c867628;
      DAT_14c867628 = DAT_14c867628 + 1;
      if (DAT_14c86762c < DAT_14c867628) {
        FUN_1447a71f6(&DAT_14c867620,uVar3);
      }
      lVar2 = DAT_14c867620;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c867620 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb5e6c FUN_145cb5e6c body=24 status=ok
// SIG undefined FUN_145cb5e6c(void)

bool FUN_145cb5e6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145cb5e84 FUN_145cb5e84 body=233 status=ok
// SIG undefined FUN_145cb5e84(void)

undefined8 * FUN_145cb5e84(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c867668,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c867670;
      lVar6 = (longlong)(int)DAT_14c867670;
      DAT_14c867670 = DAT_14c867670 + 1;
      if (DAT_14c867674 < DAT_14c867670) {
        FUN_1447a71f6(&DAT_14c867668,uVar3);
      }
      lVar2 = DAT_14c867668;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c867668 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb5f7a FUN_145cb5f7a body=24 status=ok
// SIG undefined FUN_145cb5f7a(void)

bool FUN_145cb5f7a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145cb5f92 FUN_145cb5f92 body=233 status=ok
// SIG undefined FUN_145cb5f92(void)

undefined8 * FUN_145cb5f92(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c867680,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c867688;
      lVar6 = (longlong)(int)DAT_14c867688;
      DAT_14c867688 = DAT_14c867688 + 1;
      if (DAT_14c86768c < DAT_14c867688) {
        FUN_1447a71f6(&DAT_14c867680,uVar3);
      }
      lVar2 = DAT_14c867680;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c867680 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb6088 FUN_145cb6088 body=24 status=ok
// SIG undefined FUN_145cb6088(void)

bool FUN_145cb6088(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145cb60a0 FUN_145cb60a0 body=61 status=ok
// SIG undefined FUN_145cb60a0(void)

void FUN_145cb60a0(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_145cb60de(param_1);
    return;
  }
  FUN_14151fffe(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 145cb60de FUN_145cb60de body=58 status=ok
// SIG undefined FUN_145cb60de(void)

void FUN_145cb60de(undefined8 *param_1,int param_2)

{
  FUN_14151fffe(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145cb6118(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145cb6118 FUN_145cb6118 body=108 status=ok
// SIG undefined FUN_145cb6118(void)

void FUN_145cb6118(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 145cb6184 FUN_145cb6184 body=221 status=ok
// SIG undefined FUN_145cb6184(void)

longlong FUN_145cb6184(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x298);
  *(uint *)(param_1 + 0x298) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x29c) < iVar2 + 1U) {
    FUN_145cb6262((longlong *)(param_1 + 0x290),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x290);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x150);
  *puVar1 = &PTR_FUN_14b4c3b18;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1412c5ebc(puVar1 + 5,param_3);
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  *puVar1 = &PTR_FUN_14ba3d840;
  puVar1[0x23] = param_2;
  *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x124) = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  return lVar3 + (longlong)iVar2 * 0x150;
}



// FUNCTION 145cb6262 FUN_145cb6262 body=146 status=ok
// SIG undefined FUN_145cb6262(void)

void FUN_145cb6262(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x150,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x150,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cb6300 FUN_145cb6300 body=487 status=ok
// SIG undefined FUN_145cb6300(void)

undefined8 * FUN_145cb6300(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a0768c();
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_14ad18e00;
  param_1[5] = &PTR_FUN_14ad190c0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1446f470e(local_38,L"BaseLayer",1);
  local_48 = 1;
  FUN_145cb64e8(&local_30,param_1,param_2,local_38);
  lVar1 = local_30;
  if ((DAT_14c950c29 == '\x01') && (local_30 != 0)) {
    FUN_1456cec3c(local_30);
  }
  param_1[7] = lVar1;
  FUN_1446f470e(local_38,L"MainLayer",1);
  local_48 = 0;
  FUN_145cb64e8(&local_30,param_1,param_2,local_38);
  lVar1 = local_30;
  if ((DAT_14c950c29 == '\x01') && (local_30 != 0)) {
    FUN_1456cec3c(local_30);
  }
  param_1[8] = lVar1;
  FUN_1446f470e(local_38,L"GlobalLayer",1);
  local_48 = 1;
  FUN_145cb64e8(&local_30,param_1,param_2,local_38);
  lVar1 = local_30;
  if ((DAT_14c950c29 == '\x01') && (local_30 != 0)) {
    FUN_1456cec3c(local_30);
  }
  param_1[9] = lVar1;
  FUN_1446f470e(local_38,L"VisualLayer",1);
  local_48 = 1;
  FUN_145cb64e8(&local_30,param_1,param_2,local_38);
  if ((DAT_14c950c29 == '\x01') && (local_30 != 0)) {
    FUN_1456cec3c(local_30);
  }
  param_1[10] = local_30;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb64e8 FUN_145cb64e8 body=113 status=ok
// SIG undefined FUN_145cb64e8(void)

longlong *
FUN_145cb64e8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = *param_4;
  uVar2 = FUN_145869d10();
  lVar3 = FUN_140486aac(param_3,param_2,uVar1,uVar2,uVar2,1,0);
  *param_1 = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(undefined4 *)(lVar3 + 0x38) = param_5;
  return param_1;
}



// FUNCTION 145cb6564 FUN_145cb6564 body=144 status=ok
// SIG undefined FUN_145cb6564(void)

void FUN_145cb6564(longlong *param_1)

{
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_141286eab(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_141165946(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_141165946(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_145878e5e(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145cb65f4 FUN_145cb65f4 body=122 status=ok
// SIG undefined FUN_145cb65f4(void)

longlong FUN_145cb65f4(longlong param_1,longlong param_2)

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
    FUN_145cb666e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145cb666e FUN_145cb666e body=123 status=ok
// SIG undefined FUN_145cb666e(void)

undefined8 * FUN_145cb666e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140dab994(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 145cb66ea FUN_145cb66ea body=40 status=ok
// SIG undefined FUN_145cb66ea(void)

undefined8 FUN_145cb66ea(undefined8 param_1,int param_2)

{
  FUN_145cb6712();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb6712 FUN_145cb6712 body=125 status=ok
// SIG undefined FUN_145cb6712(void)

void FUN_145cb6712(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad1a7a0;
  plVar3 = (longlong *)param_1[0x10];
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
  plVar3 = (longlong *)param_1[0xe];
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
  FUN_145cb6790(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cb6790 FUN_145cb6790 body=80 status=ok
// SIG undefined FUN_145cb6790(void)

void FUN_145cb6790(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb67e0 FUN_145cb67e0 body=233 status=ok
// SIG undefined FUN_145cb67e0(void)

undefined8 * FUN_145cb67e0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb0dd48,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb0dd50;
      lVar6 = (longlong)(int)DAT_14cb0dd50;
      DAT_14cb0dd50 = DAT_14cb0dd50 + 1;
      if (DAT_14cb0dd54 < DAT_14cb0dd50) {
        FUN_1447a71f6(&DAT_14cb0dd48,uVar3);
      }
      lVar2 = DAT_14cb0dd48;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb0dd48 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb68e0 FUN_145cb68e0 body=233 status=ok
// SIG undefined FUN_145cb68e0(void)

undefined8 * FUN_145cb68e0(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b276b80;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_28,L"Spline",1);
  local_48 = FUN_14092ee58();
  local_38 = 0;
  local_40 = 1;
  lVar2 = FUN_140486aac(param_2,param_1,local_28,local_48);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar2;
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
    lVar2 = param_1[0x72];
  }
  param_1[0x39] = lVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb69ca FUN_145cb69ca body=290 status=ok
// SIG undefined FUN_145cb69ca(void)

void FUN_145cb69ca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = &local_48;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145cb6aee(puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb6aee FUN_145cb6aee body=137 status=ok
// SIG undefined FUN_145cb6aee(void)

void FUN_145cb6aee(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uVar1 = param_2[1];
  uVar3 = FUN_144a7891a(uVar1);
  local_40 = *param_1;
  uVar2 = param_1[1];
  uVar4 = FUN_144a7891a(uVar2);
  local_58 = uVar1;
  local_50 = &local_38;
  FUN_144a789b8(uVar4,uVar2,&local_40,uVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb6b78 FUN_145cb6b78 body=55 status=ok
// SIG undefined FUN_145cb6b78(void)

void FUN_145cb6b78(longlong *param_1)

{
  FUN_145cb6bb0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb6bb0 FUN_145cb6bb0 body=128 status=ok
// SIG undefined FUN_145cb6bb0(void)

void FUN_145cb6bb0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
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



// FUNCTION 145cb6c32 FUN_145cb6c32 body=351 status=ok
// SIG undefined FUN_145cb6c32(void)

void FUN_145cb6c32(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = (code *)&LAB_148eae7d0;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145cb6d92(param_1,param_2,&DAT_14cb92c20,param_1);
      local_38 = (code *)&LAB_148eae7d8;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145cb6d92(param_1,param_2,&DAT_14cb92c28,param_1);
      local_38 = FUN_140de0f20;
      local_30 = 0;
      FUN_145cb6eb8(param_1,param_2,param_1,&local_38);
      local_38 = FUN_145fcedcc;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145cb6d92(param_1,param_2,&DAT_14cb92b90,param_1);
      local_38 = (code *)&LAB_148eae764;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145cb6d92(param_1,param_2,&DAT_14cb92ba0,param_1);
      local_38 = (code *)&LAB_148eae798;
      local_30 = 0;
      local_48 = &local_38;
      FUN_145cb6d92(param_1,param_2,&DAT_14cb92ba8,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb6d92 FUN_145cb6d92 body=293 status=ok
// SIG undefined FUN_145cb6d92(void)

void FUN_145cb6d92(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14152008a(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb6eb8 FUN_145cb6eb8 body=349 status=ok
// SIG undefined FUN_145cb6eb8(void)

void FUN_145cb6eb8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_14152010e(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_14152010e(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_14152010e(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb7016 FUN_145cb7016 body=63 status=ok
// SIG undefined FUN_145cb7016(void)

void FUN_145cb7016(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145cb71a8(param_1);
    FUN_145cb7056(param_1);
    return;
  }
  FUN_145cb7056(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_148fb9258(param_1);
  return;
}



// FUNCTION 145cb7056 FUN_145cb7056 body=336 status=ok
// SIG undefined FUN_145cb7056(void)

void FUN_145cb7056(longlong *param_1)

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
      FUN_148fb4a58((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cb71a8 FUN_145cb71a8 body=335 status=ok
// SIG undefined FUN_145cb71a8(void)

void FUN_145cb71a8(longlong *param_1)

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



// FUNCTION 145cb72f8 FUN_145cb72f8 body=40 status=ok
// SIG undefined FUN_145cb72f8(void)

undefined8 FUN_145cb72f8(undefined8 param_1,int param_2)

{
  FUN_145cb7320();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb7320 FUN_145cb7320 body=261 status=ok
// SIG undefined FUN_145cb7320(void)

void FUN_145cb7320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a17b1c0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x1a);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145cb7456(param_1 + 10);
  FUN_145cb7425(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cb7425 FUN_145cb7425 body=49 status=ok
// SIG undefined FUN_145cb7425(void)

void FUN_145cb7425(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cb7456 FUN_145cb7456 body=53 status=ok
// SIG undefined FUN_145cb7456(void)

void FUN_145cb7456(longlong *param_1)

{
  FUN_145cb748c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb748c FUN_145cb748c body=88 status=ok
// SIG undefined FUN_145cb748c(void)

void FUN_145cb748c(longlong param_1)

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



// FUNCTION 145cb74e4 FUN_145cb74e4 body=34 status=ok
// SIG undefined FUN_145cb74e4(void)

void FUN_145cb74e4(undefined8 param_1)

{
  FUN_145cb75e0();
  FUN_145cb7506(param_1);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145cb7506 FUN_145cb7506 body=124 status=ok
// SIG undefined FUN_145cb7506(void)

void FUN_145cb7506(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145cb7582();
  if (*(longlong *)(param_1 + 200) != 0) {
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 200) + 0x80);
    }
    *(undefined8 *)(param_1 + 200) = 0;
    plVar3 = *(longlong **)(param_1 + 0xd0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145cb757e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145cb7582 FUN_145cb7582 body=94 status=ok
// SIG undefined FUN_145cb7582(void)

void FUN_145cb7582(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x1d] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      param_1 = param_1 + 0x1d;
      uVar2 = FUN_144a88394(lVar1);
      lVar1 = FUN_144a61814(uVar2,param_1);
      if (lVar1 != 0) {
        FUN_1405a424c(uVar2,*param_1);
      }
      *param_1 = 0;
    }
  }
  return;
}



// FUNCTION 145cb75e0 FUN_145cb75e0 body=148 status=ok
// SIG undefined FUN_145cb75e0(void)

void FUN_145cb75e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    uVar3 = FUN_144a88394(lVar2);
    plVar1 = param_1 + 0x1c;
    lVar4 = FUN_144a61814(uVar3,plVar1);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar3,*plVar1);
    }
    param_1[0x1c] = 0;
    uVar3 = FUN_144a88394(lVar2);
    lVar2 = FUN_144a61814(uVar3,param_1 + 0x1d);
    if (lVar2 != 0) {
      FUN_1405a424c(uVar3,param_1[0x1d]);
    }
    *plVar1 = 0;
    param_1[0x1d] = 0;
  }
  return;
}



// FUNCTION 145cb7674 FUN_145cb7674 body=91 status=ok
// SIG undefined FUN_145cb7674(void)

longlong FUN_145cb7674(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      lVar1 = FUN_144a7757c();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
        return lVar2;
      }
    }
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 145cb76d0 FUN_145cb76d0 body=234 status=ok
// SIG undefined FUN_145cb76d0(void)

longlong * FUN_145cb76d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97dc80;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b97dca0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145cb77be(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb77be FUN_145cb77be body=162 status=ok
// SIG undefined FUN_145cb77be(void)

void FUN_145cb77be(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145cb77fd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145cb77fd;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145cb77fd:
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
                    /* WARNING: Could not recover jumptable at 0x000145cb785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145cb786a FUN_145cb786a body=297 status=ok
// SIG undefined FUN_145cb786a(void)

void FUN_145cb786a(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x3b0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xd8));
  *(int *)(lVar3 + 0xd0) = *(int *)(lVar3 + 0xd0) + 1;
  plVar4 = (longlong *)CONCAT44(uStack_2c,local_30);
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
  *(undefined4 *)(lVar3 + 0xb0) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  if ((longlong *)(lVar3 + 0xc0) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar3 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar3 + 0xc0) = local_38;
    local_38 = 0;
    *(undefined4 *)(lVar3 + 200) = local_30;
    *(undefined4 *)(lVar3 + 0xcc) = uStack_2c;
  }
  *(undefined8 *)(lVar3 + 0xb8) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xd8));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb7994 FUN_145cb7994 body=40 status=ok
// SIG undefined FUN_145cb7994(void)

undefined8 FUN_145cb7994(undefined8 param_1,int param_2)

{
  FUN_145cb79bc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb79bc FUN_145cb79bc body=114 status=ok
// SIG undefined FUN_145cb79bc(void)

void FUN_145cb79bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afb1d80;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145cb7a60(param_1 + 0x16);
  FUN_145cb7a96(param_1 + 8);
  FUN_145cb7a2e(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cb7a2e FUN_145cb7a2e body=49 status=ok
// SIG undefined FUN_145cb7a2e(void)

void FUN_145cb7a2e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cb7a60 FUN_145cb7a60 body=53 status=ok
// SIG undefined FUN_145cb7a60(void)

void FUN_145cb7a60(longlong *param_1)

{
  FUN_145cb7b14();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb7a96 FUN_145cb7a96 body=70 status=ok
// SIG undefined FUN_145cb7a96(void)

void FUN_145cb7a96(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145cb7adc(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb7adc FUN_145cb7adc body=55 status=ok
// SIG undefined FUN_145cb7adc(void)

void FUN_145cb7adc(longlong *param_1)

{
  FUN_145cb7b6e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb7b14 FUN_145cb7b14 body=90 status=ok
// SIG undefined FUN_145cb7b14(void)

void FUN_145cb7b14(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145cb7b6e FUN_145cb7b6e body=388 status=ok
// SIG undefined FUN_145cb7b6e(void)

void FUN_145cb7b6e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x60) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cb7cf8 FUN_145cb7cf8 body=118 status=ok
// SIG undefined FUN_145cb7cf8(void)

void FUN_145cb7cf8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149e73240;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  return;
}



// FUNCTION 145cb7d6e FUN_145cb7d6e body=71 status=ok
// SIG undefined FUN_145cb7d6e(void)

void FUN_145cb7d6e(void)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14002fa78();
  local_18 = &DAT_14c949ea0;
  FUN_1415201b0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb7dbc FUN_145cb7dbc body=118 status=ok
// SIG undefined FUN_145cb7dbc(void)

void FUN_145cb7dbc(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149e8f040;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  return;
}



// FUNCTION 145cb7e32 FUN_145cb7e32 body=40 status=ok
// SIG undefined FUN_145cb7e32(void)

undefined8 FUN_145cb7e32(undefined8 param_1,int param_2)

{
  FUN_145cb7e5a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb7e5a FUN_145cb7e5a body=83 status=ok
// SIG undefined FUN_145cb7e5a(void)

void FUN_145cb7e5a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f23850;
  FUN_1447a1747(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14148f26f(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cb7eba FUN_145cb7eba body=112 status=ok
// SIG undefined FUN_145cb7eba(void)

undefined8 * FUN_145cb7eba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = IModuleInterface::vftable;
  FUN_14118b488(puVar1 + 1);
  *puVar1 = &PTR_FUN_14a162f50;
  puVar1[1] = &PTR_FUN_14a162fb0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  return puVar1;
}



// FUNCTION 145cb7f2a FUN_145cb7f2a body=126 status=ok
// SIG undefined FUN_145cb7f2a(void)

longlong * FUN_145cb7f2a(longlong *param_1)

{
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_145cb7fa8();
  *(undefined2 *)(*param_1 + 0xec) = 1;
  FUN_145cb7fe0(param_1 + 2);
  *(undefined8 *)(param_1[2] + 0x14) = 0;
  *(undefined1 **)(param_1[2] + 0x34) = &DAT_100000001;
  return param_1;
}



// FUNCTION 145cb7fa8 FUN_145cb7fa8 body=55 status=ok
// SIG undefined FUN_145cb7fa8(void)

void FUN_145cb7fa8(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_14573ff2a(param_1,iVar1);
  }
  FUN_14072e283((longlong)iVar1 * 0xf0 + *param_1);
  return;
}



// FUNCTION 145cb7fe0 FUN_145cb7fe0 body=65 status=ok
// SIG undefined FUN_145cb7fe0(void)

void FUN_145cb7fe0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 2) {
    FUN_140158bf0(param_1,iVar1);
  }
  FUN_140158813((longlong)iVar1 * 0x20 + *param_1,2);
  return;
}



// FUNCTION 145cb8022 FUN_145cb8022 body=122 status=ok
// SIG undefined FUN_145cb8022(void)

void FUN_145cb8022(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14742f3e6(param_1,iVar1);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x18) = param_2, param_3 == '\x01')) {
      FUN_14321b502(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145cb809e FUN_145cb809e body=40 status=ok
// SIG undefined FUN_145cb809e(void)

undefined8 FUN_145cb809e(undefined8 param_1,int param_2)

{
  FUN_145cb80c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb80c6 FUN_145cb80c6 body=83 status=ok
// SIG undefined FUN_145cb80c6(void)

void FUN_145cb80c6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3b5570;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cb8124 FUN_145cb8124 body=417 status=ok
// SIG undefined FUN_145cb8124(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_145cb8124(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48 [2];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140553f06();
  *param_1 = &PTR_FUN_14a4a7ca0;
  FUN_145cb8332(param_1 + 8);
  param_1[0x3a] = 0x10000000000;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  uVar4 = FUN_14009d2a0();
  param_1[0x3b] = uVar4;
  plVar2 = local_48 + 1;
  local_48[1] = 0;
  local_38 = 0;
  puVar5 = (undefined8 *)FUN_144a72ab6(0x28,plVar2);
  *puVar5 = &PTR_LAB_14a4ab7b0;
  uVar4 = FUN_144a3f946();
  puVar5[2] = uVar4;
  *puVar5 = &PTR_FUN_14a4aac70;
  puVar5[3] = 0;
  FUN_14485c47a(puVar5 + 3,param_1);
  puVar5[4] = FUN_1475a603e;
  FUN_144a450dc(param_1 + 0x3c,plVar2);
  FUN_1449db362(plVar2);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_1[0x3b] + 0x13a);
  uVar3 = FUN_145cb82c6();
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | uVar3;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_48[0] = param_1[2];
    uVar1 = *(undefined2 *)(param_1[0x3b] + 0x5a);
    if ((local_48[0] != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(local_48,uVar1);
    local_50 = param_1[2];
    uVar1 = *(undefined2 *)(param_1[0x3b] + 0x140);
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_50,uVar1);
  }
  FUN_140dba9e6(param_1 + 0x36,*(undefined2 *)(param_1[0x3b] + 0x13e));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb82c6 FUN_145cb82c6 body=92 status=ok
// SIG undefined FUN_145cb82c6(void)

undefined4 FUN_145cb82c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab499c) {
    FUN_144b3d300(&DAT_14cab499c);
    if (DAT_14cab499c == -1) {
      DAT_14cab4998 = FUN_145cb8322();
      _Init_thread_footer(&DAT_14cab499c);
    }
  }
  return DAT_14cab4998;
}



// FUNCTION 145cb8322 FUN_145cb8322 body=16 status=ok
// SIG undefined FUN_145cb8322(void)

void FUN_145cb8322(void)

{
  DAT_14c760fe8 = DAT_14c760fe8 * 2;
  return;
}



// FUNCTION 145cb8332 FUN_145cb8332 body=201 status=ok
// SIG undefined FUN_145cb8332(void)

void FUN_145cb8332(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0x8000000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  return;
}



// FUNCTION 145cb8406 FUN_145cb8406 body=112 status=ok
// SIG undefined FUN_145cb8406(void)

undefined8 * FUN_145cb8406(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5a5fc0;
  param_1[5] = &PTR_FUN_14a5a6260;
  param_1[6] = 0;
  FUN_144805afa(param_1 + 7);
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x209) = 0;
  *(undefined8 *)((longlong)param_1 + 0x211) = 0;
  return param_1;
}



// FUNCTION 145cb8476 FUN_145cb8476 body=40 status=ok
// SIG undefined FUN_145cb8476(void)

undefined8 FUN_145cb8476(undefined8 param_1,int param_2)

{
  FUN_145cb849e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb849e FUN_145cb849e body=83 status=ok
// SIG undefined FUN_145cb849e(void)

void FUN_145cb849e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae5fa90;
  param_1[5] = &PTR_FUN_14ae5fdb0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 0x65);
  FUN_14110b6d4(param_1);
  return;
}



// FUNCTION 145cb8506 FUN_145cb8506 body=104 status=ok
// SIG undefined FUN_145cb8506(void)

void FUN_145cb8506(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_1 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_1 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != DAT_14cb77c54) {
    DAT_14cb77c54 = (int)uVar2;
    FUN_1446f8d3c(&DAT_14cb77c48,DAT_14cb77c50,uVar2,0x10,8);
  }
  return;
}



// FUNCTION 145cb857a FUN_145cb857a body=235 status=ok
// SIG undefined FUN_145cb857a(void)

undefined8 * FUN_145cb857a(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_145785904();
  *param_1 = &PTR_FUN_14b7ae990;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((longlong)param_1 + 0x483) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48b) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar2 = FUN_144a5dd5e();
    if (lVar2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar2);
    }
    bVar1 = DAT_14c950c29;
    param_1[0x7b] = lVar2;
    if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
      FUN_1456cec3c(lVar2);
      lVar2 = param_1[0x7b];
    }
    param_1[0x76] = lVar2;
    lVar2 = FUN_144a7b4ca();
    if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x77] = lVar2;
    lVar2 = FUN_140cbc144();
    if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x75] = lVar2;
    *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) | 1;
  }
  return param_1;
}



// FUNCTION 145cb8666 FUN_145cb8666 body=38 status=ok
// SIG undefined FUN_145cb8666(void)

undefined8 FUN_145cb8666(undefined8 param_1,int param_2)

{
  FUN_145cb868c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb868c FUN_145cb868c body=85 status=ok
// SIG undefined FUN_145cb868c(void)

void FUN_145cb868c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a0370;
  if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1c] + 0x10))();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145cb86e2 FUN_145cb86e2 body=53 status=ok
// SIG undefined FUN_145cb86e2(void)

void FUN_145cb86e2(longlong *param_1)

{
  FUN_145cb8718();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb8718 FUN_145cb8718 body=315 status=ok
// SIG undefined FUN_145cb8718(void)

void FUN_145cb8718(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145cb8854 FUN_145cb8854 body=38 status=ok
// SIG undefined FUN_145cb8854(void)

undefined8 FUN_145cb8854(undefined8 param_1,int param_2)

{
  FUN_145cb887a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb887a FUN_145cb887a body=85 status=ok
// SIG undefined FUN_145cb887a(void)

void FUN_145cb887a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba50de0;
  param_1[1] = &PTR_FUN_14ba50e20;
  plVar3 = (longlong *)param_1[3];
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
  FUN_1410c966c(param_1 + 1);
  return;
}



// FUNCTION 145cb88d0 FUN_145cb88d0 body=40 status=ok
// SIG undefined FUN_145cb88d0(void)

undefined8 FUN_145cb88d0(undefined8 param_1,int param_2)

{
  FUN_145cb88f8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cb88f8 FUN_145cb88f8 body=83 status=ok
// SIG undefined FUN_145cb88f8(void)

void FUN_145cb88f8(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba71d40;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x168;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0x28);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cb8950 FUN_145cb8950 body=118 status=ok
// SIG undefined FUN_145cb8950(void)

void FUN_145cb8950(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bccb9e0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  return;
}



// FUNCTION 145cb89ce FUN_145cb89ce body=108 status=ok
// SIG undefined FUN_145cb89ce(void)

undefined8 * FUN_145cb89ce(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bcd1980;
  param_1[5] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = FUN_145df20e5;
  puVar2[1] = 0;
  FUN_145cb8a3a(puVar2 + 2);
  lVar1 = param_1[5];
  param_1[5] = puVar2 + 2;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  return param_1;
}



// FUNCTION 145cb8a3a FUN_145cb8a3a body=130 status=ok
// SIG undefined FUN_145cb8a3a(void)

longlong * FUN_145cb8a3a(longlong *param_1)

{
  longlong lVar1;
  void *_Dst;
  
  *param_1 = 0;
  _Dst = (void *)FUN_14001cc68(0xa8);
  memset(_Dst,0,0xa8);
  *(undefined8 *)((longlong)_Dst + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x50) = 0;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x7c) = 0xffffffff00000080;
  InitializeSRWLock((PSRWLOCK)((longlong)_Dst + 0xa0));
  lVar1 = *param_1;
  *param_1 = (longlong)_Dst;
  if (lVar1 != 0) {
    FUN_145df212e(lVar1);
    FUN_1400020a8(lVar1);
  }
  return param_1;
}



// FUNCTION 145cb8abc FUN_145cb8abc body=247 status=ok
// SIG undefined FUN_145cb8abc(void)

undefined8 FUN_145cb8abc(longlong *param_1,double *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  double *pdVar5;
  double dVar6;
  
  if ((param_1 == (longlong *)0x0) || (lVar1 = param_1[0x7a], lVar1 == 0)) {
    return 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(lVar1 + 0x1c8);
    if (lVar1 == 0) {
      pdVar5 = (double *)&DAT_14c8464e0;
      dVar6 = DAT_14c8464f0;
    }
    else {
      pdVar5 = (double *)(lVar1 + 0x260);
      dVar6 = *(double *)(lVar1 + 0x270);
    }
    if ((double)*(float *)(param_3 + 0x30) <=
        SQRT((dVar6 - param_2[2]) * (dVar6 - param_2[2]) +
             (*pdVar5 - *param_2) * (*pdVar5 - *param_2) +
             (pdVar5[1] - param_2[1]) * (pdVar5[1] - param_2[1]))) {
      return 0;
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if ((char)uVar4 == '\0') {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  else {
    uVar3 = FUN_140128af0(param_1);
  }
  uVar4 = FUN_145cb8bb4(param_4,param_2,uVar3);
  return uVar4;
}



// FUNCTION 145cb8bb4 FUN_145cb8bb4 body=154 status=ok
// SIG undefined FUN_145cb8bb4(void)

undefined8 FUN_145cb8bb4(longlong param_1,undefined4 *param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    uVar2 = FUN_14103c0a0();
    uVar3 = FUN_14011c706(param_1);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_58 = *(undefined8 *)(param_2 + 4);
    local_70 = 1;
    local_78 = param_3;
    cVar1 = FUN_1415201e4(&local_68,&local_48,uVar3,uVar2);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_145cb8c2a;
    }
  }
  uVar2 = 0;
LAB_145cb8c2a:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb8c54 FUN_145cb8c54 body=138 status=ok
// SIG undefined FUN_145cb8c54(void)

code * FUN_145cb8c54(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb7800000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147137cba;
}



// FUNCTION 145cb8cde FUN_145cb8cde body=144 status=ok
// SIG undefined FUN_145cb8cde(void)

code * FUN_145cb8cde(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cb8d6e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BlueNoise";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FBlueNoiseParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe0000000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14713660c;
}



// FUNCTION 145cb8d6e FUN_145cb8d6e body=268 status=ok
// SIG undefined FUN_145cb8d6e(void)

undefined * FUN_145cb8d6e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c0710) {
    FUN_144b3d300(&DAT_14c9c0710);
    if (DAT_14c9c0710 == -1) {
      FUN_145cb8e7c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FBlueNoiseParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0690,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8df7f);
      _Init_thread_footer(&DAT_14c9c0710);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0690;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb8e7c FUN_145cb8e7c body=226 status=ok
// SIG undefined FUN_145cb8e7c(void)

longlong * FUN_145cb8e7c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b6980;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb8f64 FUN_145cb8f64 body=138 status=ok
// SIG undefined FUN_145cb8f64(void)

code * FUN_145cb8f64(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ModuloMasks";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147136696;
}



// FUNCTION 145cb8fee FUN_145cb8fee body=138 status=ok
// SIG undefined FUN_145cb8fee(void)

code * FUN_145cb8fee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScalarTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000000f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cb8f64;
}



// FUNCTION 145cb9078 FUN_145cb9078 body=9 status=ok
// SIG undefined FUN_145cb9078(void)

void FUN_145cb9078(longlong param_1)

{
  FUN_145cb9082(param_1 + 0x10);
  return;
}



// FUNCTION 145cb9082 FUN_145cb9082 body=176 status=ok
// SIG undefined FUN_145cb9082(void)

void FUN_145cb9082(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b4f51f0;
  FUN_1449db362(param_1 + 0x33);
  plVar3 = (longlong *)param_1[0x31];
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
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2d];
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
  plVar3 = (longlong *)param_1[0x29];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_14124efea(param_1 + 3);
  return;
}



// FUNCTION 145cb913e FUN_145cb913e body=173 status=ok
// SIG undefined FUN_145cb913e(void)

void FUN_145cb913e(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145cb91d5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145cb91d5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145cb91ec FUN_145cb91ec body=297 status=ok
// SIG undefined FUN_145cb91ec(void)

void FUN_145cb91ec(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_141520684();
  if ((*(byte *)(param_1 + 0x31) & 0x10) == 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    lVar2 = param_1 + 0x80;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar2;
    if (*(int *)(param_1 + 0x98) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = *(int *)(param_1 + 0x98);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar5 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar4 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar6) || (local_68 = uVar5, uStack_50 != lVar2)) {
      do {
        local_68 = uVar5;
        lVar3 = *local_80;
        if (0 < *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x30)) {
          uVar5 = FUN_14479d2ce();
          FUN_1415206ba(param_1,uVar5,lVar3 + (longlong)iVar4 * 0x30 + 8);
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar5 = local_68;
      } while (((local_68._4_4_ != iVar6) || (CONCAT44(uStack_6c,uStack_70) != lVar2)) ||
              (local_80 != plVar1));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb9316 FUN_145cb9316 body=200 status=ok
// SIG undefined FUN_145cb9316(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cb9316(void)

{
  if ((DAT_14ca13aff & 2) != 0) {
    return;
  }
  DAT_14ca13aff = DAT_14ca13aff | 2;
  _DAT_14ca13aa0 = L"FEmitSceneStencilPS";
  _DAT_14ca13ab8 = FUN_146826540;
  _DAT_14ca13ac0 = FUN_146825d77;
  _DAT_14ca13ac8 = FUN_146825fd6;
  _DAT_14ca13ad0 = FUN_1407e02ea;
  _DAT_14ca13ad8 = FUN_146826273;
  _DAT_14ca13ab0 = FUN_1472511d2;
  _DAT_14ca13af0 = 0xffffffff000000e0;
  _DAT_14ca13af8 = 8;
  DAT_14ca13afc = 0;
  _DAT_14ca13ae0 = &LAB_1472511fe;
  FUN_145cb93de();
  FUN_1407e00cc(&DAT_14ca13a98);
  return;
}



// FUNCTION 145cb93de FUN_145cb93de body=123 status=ok
// SIG undefined FUN_145cb93de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cb93de(void)

{
  _DAT_14ca18cf8 = L"BASE";
  DAT_14ca18d22 = 4;
  _DAT_14ca18d00 = FUN_140b35ae4();
  _DAT_14ca18d08 = DAT_14ca13aa8;
  _DAT_14ca18d10 = &LAB_14682652b;
  DAT_14ca13aa8 = &DAT_14ca18cf8;
  DAT_14ca13afd = DAT_14ca13afd + '\x01';
  _DAT_14ca18d18 = 0x100000000;
  if (*(char *)(_DAT_14ca18d00 + 100) != '\0') {
    DAT_14ca13afe = DAT_14ca13afe + '\x01';
  }
  return;
}



// FUNCTION 145cb945a FUN_145cb945a body=226 status=ok
// SIG undefined FUN_145cb945a(void)

longlong * FUN_145cb945a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462efda0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb953e FUN_145cb953e body=138 status=ok
// SIG undefined FUN_145cb953e(void)

undefined1 * FUN_145cb953e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x83;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472559e6;
}



// FUNCTION 145cb95c8 FUN_145cb95c8 body=138 status=ok
// SIG undefined FUN_145cb95c8(void)

code * FUN_145cb95c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadingMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000008a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cb9652;
}



// FUNCTION 145cb9652 FUN_145cb9652 body=138 status=ok
// SIG undefined FUN_145cb9652(void)

code * FUN_145cb9652(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClusterPageData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462efe28;
}



// FUNCTION 145cb96dc FUN_145cb96dc body=94 status=ok
// SIG undefined FUN_145cb96dc(void)

undefined8 * FUN_145cb96dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0c7bc0;
  FUN_144a2da94(param_1 + 0x75);
  FUN_144a2da94(param_1 + 0x6e);
  FUN_144a2da94(param_1 + 0x67);
  FUN_145cb973a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,1000);
  }
  return param_1;
}



// FUNCTION 145cb973a FUN_145cb973a body=215 status=ok
// SIG undefined FUN_145cb973a(void)

void FUN_145cb973a(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3cb10;
  plVar1 = param_1 + 0x60;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 100) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 99)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 99)) {
    FUN_1400020a8(*plVar1);
  }
  param_1[0x10] = 0;
  FUN_14076ba36(param_1 + 0x11);
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145cb9812 FUN_145cb9812 body=179 status=ok
// SIG undefined FUN_145cb9812(void)

bool FUN_145cb9812(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_38 = lVar2;
    FUN_145cb98c6(param_1 + 0x20,&local_38,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb98c6 FUN_145cb98c6 body=128 status=ok
// SIG undefined FUN_145cb98c6(void)

void FUN_145cb98c6(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar2 = (code *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar3 = *param_2;
  local_48 = *param_4;
  uVar4 = FUN_14477b664(param_4[1]);
  local_40 = FUN_14477b664(uVar4);
  local_38 = param_4[2];
  (*pcVar2)(iVar1 + lVar3,param_3,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb9948 FUN_145cb9948 body=166 status=ok
// SIG undefined FUN_145cb9948(void)

longlong * FUN_145cb9948(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0xb8,0x10);
  FUN_145cb99ee(plVar3);
  uVar4 = FUN_14112c5dc(*(undefined8 *)(param_3 + 8));
  FUN_14485c47a(plVar3 + 0x13,uVar4);
  DAT_14cbd2c98 = DAT_14cbd2c98 + 1;
  plVar3[0x14] = DAT_14cbd2c98 << 0x20 | (ulonglong)DAT_14cbd2c90;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 145cb99ee FUN_145cb99ee body=143 status=ok
// SIG undefined FUN_145cb99ee(void)

undefined8 * FUN_145cb99ee(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99c3a0;
  memset(param_1 + 2,0,0xa8);
  FUN_1413ea01e(param_1 + 2);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[2] = &PTR_FUN_14b63f4f0;
  param_1[0xc] = &PTR_FUN_14b63f550;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) & 0xfe000000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  return param_1;
}



// FUNCTION 145cb9a7e FUN_145cb9a7e body=1141 status=ok
// SIG undefined FUN_145cb9a7e(void)

undefined1 * FUN_145cb9a7e(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_338 [32];
  undefined1 *local_318;
  undefined1 *local_310;
  undefined8 local_308;
  longlong local_300 [2];
  int local_2ec;
  longlong local_2e8;
  ulonglong uStack_2e0;
  undefined8 *local_2d8;
  int local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined2 *local_1b0;
  int local_1a8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  int local_60 [2];
  int *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  *param_2 = 0;
  local_310 = param_2 + 8;
  local_318 = param_2;
  local_308 = param_3;
  FUN_140056680(local_310,&DAT_149dfb77a);
  local_2d8 = (undefined8 *)0x0;
  local_2d0 = 3;
  FUN_1447bda9e(&local_2d8,3,0);
  puVar1 = local_2d8;
  *local_2d8 = 0x3e80000270f;
  *(undefined4 *)(local_2d8 + 1) = 6;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (int *)0x0;
  local_50 = 0;
  lVar11 = (longlong)local_2d0;
  if (lVar11 != 0) {
    lVar14 = 0;
    do {
      uVar10 = *(undefined4 *)((longlong)puVar1 + lVar14);
      iVar4 = (*DAT_14cb52708)(uVar10,local_308);
      local_2ec = iVar4;
      FUN_145cba0ce(&local_98,&local_1b0,&local_2ec);
      iVar15 = (int)uStack_2e0 + -1;
      if ((int)uStack_2e0 == 0) {
        iVar15 = 0;
      }
      if (iVar4 == 0) {
        iVar15 = 0;
      }
      uVar5 = FUN_145cb9ef4(iVar4);
      FUN_144a81018(&local_1b0,uVar5);
      uVar5 = local_a8;
      uVar6 = FUN_145cb9fd3(uVar10);
      FUN_144a81018(&local_2c8,uVar6);
      FUN_140002266(local_300,L"(%s, %s)",local_1c0,uVar5);
      FUN_145cb9f12(&local_2e8,local_300,iVar15);
      if (local_300[0] != 0) {
        FUN_1400020a8();
      }
      if (local_1c8 != 0) {
        FUN_1400020a8();
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      lVar14 = lVar14 + 4;
    } while (lVar11 * 4 != lVar14);
  }
  FUN_144a8b2a0(&local_1b0,&local_2e8,&DAT_149e06196);
  if ((int)uStack_90 != local_64) {
    piVar7 = local_58;
    if (local_58 == (int *)0x0) {
      piVar7 = local_60;
    }
    for (iVar15 = *piVar7; iVar15 != -1; iVar15 = *(int *)(local_98 + (longlong)iVar15 * 0xc + 4)) {
      if (*(int *)(local_98 + (longlong)iVar15 * 0xc) == 0) {
        puVar13 = &DAT_149dfb77a;
        if (local_1a8 != 0) {
          puVar13 = local_1b0;
        }
        FUN_140002266(&local_2c8,
                      L"a supported feature needing a swap chain provider: %s. This can be overriden with -sl{no}swapchainprovider"
                      ,puVar13);
        *local_318 = 1;
        lVar11 = local_2c8;
        uVar10 = (undefined4)local_2c0;
        uVar9 = local_2c0._4_4_;
        goto LAB_145cb9d08;
      }
    }
  }
  puVar13 = local_1b0;
  if (local_1a8 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_2c8,
                L"no supported feature needing a swap chain provider: %s. This can be overriden with -sl{no}swapchainprovider"
                ,puVar13);
  *local_318 = 0;
  lVar11 = local_2c8;
  uVar10 = (undefined4)local_2c0;
  uVar9 = local_2c0._4_4_;
LAB_145cb9d08:
  puVar12 = local_318;
  local_2c0 = 0;
  local_2c8 = 0;
  if (*(longlong *)(local_318 + 8) == 0) {
    *(longlong *)(local_318 + 8) = lVar11;
    *(undefined4 *)(local_318 + 0x10) = uVar10;
    *(undefined4 *)(local_318 + 0x14) = uVar9;
  }
  else {
    FUN_1400020a8();
    *(longlong *)(puVar12 + 8) = lVar11;
    *(undefined4 *)(puVar12 + 0x10) = uVar10;
    *(undefined4 *)(puVar12 + 0x14) = uVar9;
    if (local_2c8 != 0) {
      FUN_1400020a8();
    }
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"slswapchainprovider");
  if (cVar2 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_14054d46e(&DAT_14c846b20,L"slnoswapchainprovider");
    if (cVar2 == '\0') goto LAB_145cb9d6f;
    pwVar8 = L"-slnoswapchainprovider command line";
    uVar3 = 0;
  }
  else {
    pwVar8 = L"-slswapchainprovider command line";
    uVar3 = 1;
  }
  puVar12 = local_318;
  *local_318 = uVar3;
  FUN_14020fad6(local_310,pwVar8);
LAB_145cb9d6f:
  if (local_1b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != (int *)0x0) {
    FUN_1400020a8();
  }
  FUN_145cb9f9e(&local_98);
  FUN_1447a1747(local_2e8,uStack_2e0 & 0xffffffff);
  if (local_2e8 != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cb9ef4 FUN_145cb9ef4 body=30 status=ok
// SIG undefined FUN_145cb9ef4(void)

char * FUN_145cb9ef4(uint param_1)

{
  if (param_1 < 0x28) {
    return &DAT_14afc4520 + *(int *)(&DAT_14afc4520 + (ulonglong)param_1 * 4);
  }
  return "Unknown";
}



// FUNCTION 145cb9f12 FUN_145cb9f12 body=139 status=ok
// SIG undefined FUN_145cb9f12(void)

int FUN_145cb9f12(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar3 + 0x10),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return param_3;
}



// FUNCTION 145cb9f9e FUN_145cb9f9e body=53 status=ok
// SIG undefined FUN_145cb9f9e(void)

void FUN_145cb9f9e(longlong *param_1)

{
  FUN_145cba076();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cb9fd3 FUN_145cb9fd3 body=163 status=ok
// SIG undefined FUN_145cb9fd3(void)

char * FUN_145cb9fd3(int param_1)

{
  switch(param_1) {
  case 0:
    return "kFeatureDLSS";
  case 1:
    goto switchD_145cba00c_caseD_1;
  case 2:
    return "kFeatureNIS";
  case 3:
    return "kFeatureReflex";
  case 4:
    return "kFeaturePCL";
  case 5:
    return "kFeatureDeepDVC";
  case 6:
    return "kFeatureLatewarp";
  case -1:
    return "kFeatureCommon";
  default:
    switch(param_1) {
    case 1000:
      return "kFeatureDLSS_G";
    case 0x3e9:
      return "kFeatureDLSS_RR";
    case 0x3ea:
      return "kFeatureNvPerf";
    case 0x3eb:
      return "kFeatureDirectSR";
    }
    if (param_1 == 9999) {
      return "kFeatureImGUI";
    }
switchD_145cba00c_caseD_1:
    return "Unknown";
  }
}



// FUNCTION 145cba076 FUN_145cba076 body=88 status=ok
// SIG undefined FUN_145cba076(void)

void FUN_145cba076(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
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



// FUNCTION 145cba0ce FUN_145cba0ce body=271 status=ok
// SIG undefined FUN_145cba0ce(void)

undefined4 * FUN_145cba0ce(longlong param_1,undefined4 *param_2,uint *param_3)

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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145cba258(param_1,local_48);
  uVar4 = *param_3;
  *local_40 = uVar4;
  local_40[1] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_145cba1de(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[2] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[1] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145cba3b4(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cba1de FUN_145cba1de body=121 status=ok
// SIG undefined FUN_145cba1de(void)

undefined8 FUN_145cba1de(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xc) == *param_3) {
          FUN_145cba340(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 145cba258 FUN_145cba258 body=231 status=ok
// SIG undefined FUN_145cba258(void)

int * FUN_145cba258(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 145cba340 FUN_145cba340 body=116 status=ok
// SIG undefined FUN_145cba340(void)

void FUN_145cba340(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145cba3b4 FUN_145cba3b4 body=428 status=ok
// SIG undefined FUN_145cba3b4(void)

void FUN_145cba3b4(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0xc);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 8 + lVar6 * 0xc) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 4 + lVar6 * 0xc) =
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



// FUNCTION 145cba562 FUN_145cba562 body=131 status=ok
// SIG undefined FUN_145cba562(void)

void FUN_145cba562(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  FUN_145cba5e6();
  plVar1 = (longlong *)(param_1 + 0x7f0);
  cVar4 = FUN_144a7c5f6(plVar1);
  if (cVar4 == '\0') {
    uVar5 = FUN_1447a1f4a(plVar1);
    FUN_144a787a6(param_1 + 0x7e0,uVar5);
    plVar6 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar6;
    plVar3 = *(longlong **)(param_1 + 0x7f0);
    if (plVar3 != plVar2) {
      *plVar1 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_1 + 0x7f8) = (int)plVar6[1];
  }
  return;
}



// FUNCTION 145cba5e6 FUN_145cba5e6 body=476 status=ok
// SIG undefined FUN_145cba5e6(void)

void FUN_145cba5e6(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145cba7c3(&local_38);
  fVar4 = *(float *)(param_1 + 0x130);
  if ((fVar4 != -3.4028235e+38) || (NAN(fVar4))) {
    *(undefined4 *)(param_1 + 0x130) = 0xff7fffff;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x120);
    if ((fVar4 == 0.0) && (!NAN(fVar4))) goto LAB_145cba642;
  }
  FUN_147572fa9(&local_3c,param_1,local_38,(double)fVar4);
  *(undefined4 *)(param_1 + 0x100) = local_3c;
LAB_145cba642:
  fVar4 = *(float *)(param_1 + 0x134);
  if ((fVar4 != -3.4028235e+38) || (NAN(fVar4))) {
    uVar3 = -(ulonglong)(1e-08 < ABS((double)fVar4));
    *(ulonglong *)(param_1 + 0x110) =
         (ulonglong)(~(uint)(uVar3 >> 0x20) & 0xfff90000) << 0x20 | (ulonglong)(double)fVar4 & uVar3
    ;
    *(undefined4 *)(param_1 + 0x134) = 0xff7fffff;
  }
  fVar4 = *(float *)(param_1 + 0x138);
  if ((fVar4 != -3.4028235e+38) || (NAN(fVar4))) {
    *(float *)(param_1 + 0x124) = fVar4;
    *(undefined4 *)(param_1 + 0x138) = 0xff7fffff;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x124);
  }
  if (0.0 < fVar4) {
    FUN_147572fa9(&local_3c,param_1,local_38,(double)fVar4);
    uVar1 = local_3c;
    cVar2 = FUN_145c40fca(param_1,1);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0xb0) = uVar1;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x128)) {
    FUN_147572fa9(&local_3c,param_1,local_38,(double)*(float *)(param_1 + 0x128));
    cVar2 = FUN_145c40fca(param_1,1);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0xb0) = local_3c;
    }
  }
  FUN_1446e0b6e(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cba7c3 FUN_145cba7c3 body=100 status=ok
// SIG undefined FUN_145cba7c3(void)

undefined8 * FUN_145cba7c3(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab3608) {
    FUN_144b3d300(&DAT_14cab3608);
    if (DAT_14cab3608 == -1) {
      FUN_145cba828();
      _Init_thread_footer(&DAT_14cab3608);
    }
  }
  *param_1 = DAT_14cab3600;
  return param_1;
}



// FUNCTION 145cba828 FUN_145cba828 body=281 status=ok
// SIG undefined FUN_145cba828(void)

void FUN_145cba828(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DAT_14cab3600 = 0x10000ea60;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = DAT_14c8407a8;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14a4901f0;
  local_30[3] = &DAT_14cab3600;
  local_30[4] = FUN_140f5af72;
  (**(code **)(*plVar1 + 0x58))(plVar1,local_38,&local_30);
  FUN_1449db362(&local_30);
  FUN_140f5af72(&DAT_14cab3600);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cba942 FUN_145cba942 body=180 status=ok
// SIG undefined FUN_145cba942(void)

longlong FUN_145cba942(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ad316c(param_2);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined2 *)(param_2 + 0x15) = 0x101;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  *(undefined2 *)(param_2 + 0x11) = 1;
  FUN_141520b9a(param_1,param_2);
  FUN_145cba9f8(param_2,DAT_14cb977f0,param_1 + 0x88,2);
  FUN_1446f470e(&local_28,L"CUSTOMSEARCHINT2",1);
  FUN_145cba9f8(param_2,local_28,param_1 + 0x88,0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cba9f8 FUN_145cba9f8 body=342 status=ok
// SIG undefined FUN_145cba9f8(void)

void FUN_145cba9f8(longlong param_1,longlong param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined4 local_44;
  longlong local_40;
  longlong *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_2;
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x78);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x80) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(lVar3 + (longlong)iVar4 * 0x38) == param_2) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            if (*(int *)(param_3 + 1) == 0) {
              puVar5 = &DAT_149dfb77a;
            }
            else {
              puVar5 = (undefined2 *)*param_3;
            }
            FUN_140c3a228(lVar1 + 8,puVar5);
            *(undefined1 *)(lVar1 + 0x28) = param_4;
            goto LAB_145cbaafb;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x30);
      } while (iVar4 != -1);
    }
  }
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  FUN_140c3a228(local_68,puVar5);
  local_44 = 0xffffffff;
  local_38 = &local_40;
  local_48 = param_4;
  local_30 = local_68;
  FUN_145cbab50((longlong *)(param_1 + 0x38),local_24,&local_38,0);
  FUN_140c3a2ac(local_68);
LAB_145cbaafb:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbab50 FUN_145cbab50 body=403 status=ok
// SIG undefined FUN_145cbab50(void)

undefined4 *
FUN_145cbab50(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145b20af2(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  *(undefined1 *)(local_40 + 1) = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0;
  uVar2 = *(undefined8 *)(puVar1 + 6);
  local_40[3] = *(undefined8 *)(puVar1 + 4);
  local_40[4] = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined1 *)puVar1 = 0;
  FUN_140c3a2ac(puVar1);
  local_40[5] = *(undefined8 *)(puVar1 + 8);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar8 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar8 >> 4);
  local_58 = param_4;
  cVar6 = FUN_145b20a28(param_1,uVar11,local_40);
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x34) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_145b20bd6(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbace4 FUN_145cbace4 body=427 status=ok
// SIG undefined FUN_145cbace4(void)

void FUN_145cbace4(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a7a8f6(local_2c);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  local_30 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38 != 0;
  (**(code **)(*param_1 + 4000))(param_1,local_2c,local_30,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbaeaa FUN_145cbaeaa body=238 status=ok
// SIG undefined FUN_145cbaeaa(void)

void FUN_145cbaeaa(longlong *param_1,int *param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  int local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_2 != 0) {
    local_78 = *(undefined8 *)param_2;
    local_70 = param_2[2];
    FUN_1448075d0(local_68);
    if (DAT_14cb758b8 == 0) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb758b8,local_68);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x48) == '\x01')) {
        uVar2 = (**(code **)(*param_1 + 0x2a8))(param_1);
        local_80 = param_5;
        local_88 = param_4;
        FUN_1414daf92(param_1,param_2,param_3,uVar2);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbaf9a FUN_145cbaf9a body=40 status=ok
// SIG undefined FUN_145cbaf9a(void)

undefined8 FUN_145cbaf9a(undefined8 param_1,int param_2)

{
  FUN_145cbafc2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbafc2 FUN_145cbafc2 body=84 status=ok
// SIG undefined FUN_145cbafc2(void)

void FUN_145cbafc2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4db8d0;
  param_1[8] = &PTR_FUN_14a4dbbb0;
  plVar3 = (longlong *)param_1[10];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbb022 FUN_145cbb022 body=196 status=ok
// SIG undefined FUN_145cbb022(void)

undefined8 * FUN_145cbb022(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a685780;
  memset(param_1 + 0x16,0,0xd1);
  *(undefined1 *)((longlong)param_1 + 0x181) = 1;
  *(undefined4 *)((longlong)param_1 + 0x182) = 0;
  *(undefined1 *)((longlong)param_1 + 0x186) = 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaa68) {
    FUN_144b3d300(&DAT_14caeaa68);
    if (DAT_14caeaa68 == -1) {
      FUN_141521338();
      atexit((_func_5014 *)&LAB_14356d530);
      _Init_thread_footer(&DAT_14caeaa68);
    }
  }
  return param_1;
}



// FUNCTION 145cbb0f2 FUN_145cbb0f2 body=113 status=ok
// SIG undefined FUN_145cbb0f2(void)

undefined8 * FUN_145cbb0f2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6e75e0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 5) = (*(byte *)(param_1 + 5) & 0xfc) + 1;
  return param_1;
}



// FUNCTION 145cbb164 FUN_145cbb164 body=40 status=ok
// SIG undefined FUN_145cbb164(void)

undefined8 FUN_145cbb164(undefined8 param_1,int param_2)

{
  FUN_145cbb18c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbb18c FUN_145cbb18c body=84 status=ok
// SIG undefined FUN_145cbb18c(void)

void FUN_145cbb18c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a845360;
  param_1[5] = &PTR_FUN_14a845950;
  param_1[6] = &PTR_LAB_14a845990;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_145821ae8(param_1 + 0x58);
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145cbb1e8 FUN_145cbb1e8 body=122 status=ok
// SIG undefined FUN_145cbb1e8(void)

undefined8 * FUN_145cbb1e8(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3c23d70a;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14aaaadc0;
  FUN_145cbb262(param_1 + 0x12);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 145cbb262 FUN_145cbb262 body=118 status=ok
// SIG undefined FUN_145cbb262(void)

undefined8 * FUN_145cbb262(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e7b8) {
    FUN_144b3d300(&DAT_14c99e7b8);
    if (DAT_14c99e7b8 == -1) {
      FUN_1446f470e(&DAT_14c99e7b0,L"Default Endpoint",1);
      _Init_thread_footer(&DAT_14c99e7b8);
    }
  }
  *param_1 = DAT_14c99e7b0;
  return param_1;
}



// FUNCTION 145cbb2e4 FUN_145cbb2e4 body=113 status=ok
// SIG undefined FUN_145cbb2e4(void)

undefined8 * FUN_145cbb2e4(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab1a1a0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x6400;
  param_1[9] = 0x40e9000000000000;
  param_1[10] = 0;
  lVar1 = FUN_144a852ea();
  param_1[0xb] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 145cbb360 FUN_145cbb360 body=113 status=ok
// SIG undefined FUN_145cbb360(void)

undefined8 * FUN_145cbb360(undefined8 *param_1)

{
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14abbb0e0;
  FUN_145c45f08(param_1 + 0x79,0x7fffffff);
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cad0f30,1);
  *(undefined1 *)(param_1[0x75] + 0x1fb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0xffc8c8c8;
  *(byte *)((longlong)param_1 + 0x3cb) = *(byte *)((longlong)param_1 + 0x3cb) | 0x80;
  *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) | 1;
  return param_1;
}



// FUNCTION 145cbb3d2 FUN_145cbb3d2 body=40 status=ok
// SIG undefined FUN_145cbb3d2(void)

undefined8 FUN_145cbb3d2(undefined8 param_1,int param_2)

{
  FUN_145cbb3fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbb3fa FUN_145cbb3fa body=84 status=ok
// SIG undefined FUN_145cbb3fa(void)

void FUN_145cbb3fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac1e830;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac1cb30;
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbb44e FUN_145cbb44e body=40 status=ok
// SIG undefined FUN_145cbb44e(void)

undefined8 FUN_145cbb44e(undefined8 param_1,int param_2)

{
  FUN_145cbb476();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbb476 FUN_145cbb476 body=84 status=ok
// SIG undefined FUN_145cbb476(void)

void FUN_145cbb476(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac1f910;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac1cb30;
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbb4ca FUN_145cbb4ca body=40 status=ok
// SIG undefined FUN_145cbb4ca(void)

undefined8 FUN_145cbb4ca(undefined8 param_1,int param_2)

{
  FUN_145cbb4f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbb4f2 FUN_145cbb4f2 body=84 status=ok
// SIG undefined FUN_145cbb4f2(void)

void FUN_145cbb4f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac206c0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac1cb30;
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbb546 FUN_145cbb546 body=40 status=ok
// SIG undefined FUN_145cbb546(void)

undefined8 FUN_145cbb546(undefined8 param_1,int param_2)

{
  FUN_145cbb56e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbb56e FUN_145cbb56e body=84 status=ok
// SIG undefined FUN_145cbb56e(void)

void FUN_145cbb56e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aca96a0;
  param_1[5] = &PTR_FUN_14aca9940;
  plVar3 = (longlong *)param_1[7];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbb5c2 FUN_145cbb5c2 body=40 status=ok
// SIG undefined FUN_145cbb5c2(void)

undefined8 FUN_145cbb5c2(undefined8 param_1,int param_2)

{
  FUN_145cbb5ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbb5ea FUN_145cbb5ea body=208 status=ok
// SIG undefined FUN_145cbb5ea(void)

void FUN_145cbb5ea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aeb3cb0;
  if (param_1[0x16] != 0) {
    plVar3 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar3 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = (longlong *)param_1[0xc];
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



// FUNCTION 145cbb6ba FUN_145cbb6ba body=70 status=ok
// SIG undefined FUN_145cbb6ba(void)

undefined8 FUN_145cbb6ba(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar3 = FUN_1413f862e();
    lVar1 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = FUN_145cbb700(lVar2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 145cbb700 FUN_145cbb700 body=54 status=ok
// SIG undefined FUN_145cbb700(void)

longlong FUN_145cbb700(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0 < (int)*(uint *)(param_1 + 0x1150)) {
    uVar3 = 0;
    do {
      pcVar1 = *(char **)(*(longlong *)(param_1 + 0x1148) + uVar3 * 8);
      if ((*pcVar1 == '\x01') && (lVar2 = *(longlong *)(pcVar1 + 0x360), lVar2 != 0)) {
        return lVar2;
      }
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + 0x1150) != uVar3);
  }
  return 0;
}



// FUNCTION 145cbb736 FUN_145cbb736 body=40 status=ok
// SIG undefined FUN_145cbb736(void)

undefined8 FUN_145cbb736(undefined8 param_1,int param_2)

{
  FUN_145cbb75e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbb75e FUN_145cbb75e body=84 status=ok
// SIG undefined FUN_145cbb75e(void)

void FUN_145cbb75e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4ba360;
  FUN_1449db362(param_1 + 0x2f);
  FUN_14124efea(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbb7b8 FUN_145cbb7b8 body=119 status=ok
// SIG undefined FUN_145cbb7b8(void)

undefined8 * FUN_145cbb7b8(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x308);
  memset(_Dst,0,0x308);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9d00a0;
  *(undefined4 *)(_Dst + 0x56) = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *(undefined4 *)(_Dst + 0x59) = 0;
  _Dst[0x5a] = 0;
  _Dst[0x5b] = 0;
  *(undefined4 *)(_Dst + 0x5c) = 0;
  _Dst[0x5d] = 0;
  _Dst[0x5e] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2f2) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2fa) = 0;
  return _Dst;
}



// FUNCTION 145cbb82f FUN_145cbb82f body=53 status=ok
// SIG undefined FUN_145cbb82f(void)

void FUN_145cbb82f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145cbb864(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bb5e990;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 145cbb864 FUN_145cbb864 body=71 status=ok
// SIG undefined FUN_145cbb864(void)

undefined8 * FUN_145cbb864(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a49c840;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = DAT_14cab401c;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  return param_1;
}



// FUNCTION 145cbb8b6 FUN_145cbb8b6 body=113 status=ok
// SIG undefined FUN_145cbb8b6(void)

undefined8 * FUN_145cbb8b6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bcd1e70;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 145cbb927 FUN_145cbb927 body=30 status=ok
// SIG undefined FUN_145cbb927(void)

void FUN_145cbb927(longlong param_1)

{
  FUN_145cbb946(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145cbb946 FUN_145cbb946 body=135 status=ok
// SIG undefined FUN_145cbb946(void)

void FUN_145cbb946(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_1411ee6a8(param_1 + 0x80);
  FUN_1414dfaf8(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1415213de(param_1 + 0x40);
  return;
}



// FUNCTION 145cbb9ce FUN_145cbb9ce body=106 status=ok
// SIG undefined FUN_145cbb9ce(void)

void FUN_145cbb9ce(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  lVar1 = lVar2 * 3 + 7;
  if (-1 < lVar2 * 3) {
    lVar1 = lVar2 * 3;
  }
  lVar1 = FUN_144a3809e(lVar2 + (lVar1 >> 3) + 0x10,0);
  lVar2 = 0x10000;
  if (0x10000 < lVar1) {
    lVar2 = lVar1;
  }
  param_1[2] = lVar2;
  if (*param_1 == 0) {
    lVar2 = FUN_14001cc68(lVar2,0);
  }
  else {
    lVar2 = FUN_14001fdce(*param_1,lVar2,0);
  }
  *param_1 = lVar2;
  return;
}



// FUNCTION 145cbba38 FUN_145cbba38 body=106 status=ok
// SIG undefined FUN_145cbba38(void)

void FUN_145cbba38(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_145cbbaa2(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_1);
  do {
    *puVar2 = &PTR_FUN_14a544a68;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 7;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 145cbbaa2 FUN_145cbbaa2 body=143 status=ok
// SIG undefined FUN_145cbbaa2(void)

void FUN_145cbbaa2(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cbbb3c FUN_145cbbb3c body=237 status=ok
// SIG undefined FUN_145cbbb3c(void)

undefined8 * FUN_145cbbb3c(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410fb170();
  *param_1 = &PTR_FUN_14b37a5a0;
  FUN_144a63cba(param_1 + 0x68);
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xa56a7a52;
  param_1[0x17] = "avatar_part";
  param_1[0x18] = &PTR_s_option_14c7638b0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"template",0);
  FUN_1404e49fa(param_1 + 0x68,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_58,"Avatar.Parts");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbbc32 FUN_145cbbc32 body=190 status=ok
// SIG undefined FUN_145cbbc32(void)

undefined8 * FUN_145cbbc32(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14585e102(param_1,uVar1);
  *param_1 = &PTR_FUN_14b5318b0;
  param_1[5] = &PTR_FUN_14b531d50;
  param_1[0x2d] = &PTR_FUN_14b531d90;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 2;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  FUN_145cbbcf0(param_1 + 0x66);
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  *(undefined1 *)(param_1 + 0xdd) = 1;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  FUN_1457916ec(param_1,1);
  return param_1;
}



// FUNCTION 145cbbcf0 FUN_145cbbcf0 body=51 status=ok
// SIG undefined FUN_145cbbcf0(void)

undefined4 * FUN_145cbbcf0(undefined4 *param_1)

{
  *param_1 = 0x10001;
  FUN_1457ac51c(param_1 + 2,0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe2) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  return param_1;
}



// FUNCTION 145cbbd2c FUN_145cbbd2c body=241 status=ok
// SIG undefined FUN_145cbbd2c(void)

void FUN_145cbbd2c(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b964ee0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 4;
  *(undefined4 *)(param_1 + 4) = 0x44fa0000;
  *(undefined1 *)(param_1 + 8) = 3;
  *(char *)(param_1 + 9) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xe) = 4;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 3;
  *(char *)(param_1 + 0x10) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x15) = 4;
  *(undefined4 *)(param_1 + 0x12) = 0x3eb33333;
  *(undefined1 *)(param_1 + 0x16) = 3;
  *(char *)(param_1 + 0x17) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x18] = DAT_14cbc62f0;
  *(undefined4 *)(param_1 + 0x19) = 0xc3769d17;
  param_1[0x1a] = 0;
  param_1[0x1b] = DAT_14cbc62f8;
  *(undefined4 *)(param_1 + 0x1c) = 0xc3769d17;
  param_1[0x1d] = 0;
  param_1[0x1e] = DAT_14cbc6300;
  return;
}



// FUNCTION 145cbbe1e FUN_145cbbe1e body=40 status=ok
// SIG undefined FUN_145cbbe1e(void)

undefined8 FUN_145cbbe1e(undefined8 param_1,int param_2)

{
  FUN_145cbbe46();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbbe46 FUN_145cbbe46 body=88 status=ok
// SIG undefined FUN_145cbbe46(void)

void FUN_145cbbe46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b174960;
  param_1[5] = &PTR_FUN_14b174d40;
  param_1[7] = &PTR_FUN_14b174f20;
  FUN_144760e21(param_1[0x82],*(undefined4 *)(param_1 + 0x83));
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbbe9e(param_1);
  return;
}



// FUNCTION 145cbbe9e FUN_145cbbe9e body=101 status=ok
// SIG undefined FUN_145cbbe9e(void)

void FUN_145cbbe9e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae4ce80;
  param_1[5] = &PTR_FUN_14ae4d260;
  param_1[7] = &PTR_FUN_14ae4d440;
  FUN_1449db362(param_1 + 0x80);
  FUN_1449db362(param_1 + 0x7e);
  FUN_1449db362(param_1 + 0x7c);
  FUN_1449db362(param_1 + 0x7a);
  FUN_1415214c2(param_1);
  return;
}



// FUNCTION 145cbbf04 FUN_145cbbf04 body=37 status=ok
// SIG undefined FUN_145cbbf04(void)

void FUN_145cbbf04(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2f8);
  FUN_145cbbf2a(param_2);
  return;
}



// FUNCTION 145cbbf2a FUN_145cbbf2a body=212 status=ok
// SIG undefined FUN_145cbbf2a(void)

undefined8 * FUN_145cbbf2a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b776420;
  *(undefined4 *)(param_1 + 4) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x41f00000;
  *(undefined4 *)(param_1 + 5) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x40a00000;
  param_1[6] = 0x48127c00459c4000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x41200000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3fc00000;
  FUN_1458ba3ce(param_1 + 0x11);
  memset(param_1 + 0x41,0,0xa1);
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x4fc71eb4;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x47435000;
  return param_1;
}



// FUNCTION 145cbc006 FUN_145cbc006 body=241 status=ok
// SIG undefined FUN_145cbc006(void)

undefined8 * FUN_145cbc006(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[3] = 0x3e4ccccd00000000;
  *(undefined4 *)(param_1 + 5) = 0x4fc71eb4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14b951070;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x44e10000;
  *(undefined2 *)(param_1 + 0xf) = 0;
  uVar3 = DAT_14c846500._4_4_;
  uVar2 = (undefined4)DAT_14c846500;
  uVar1 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
  param_1[0x12] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x34001;
  param_1[0x17] = 0;
  param_1[0x18] = 0xbf8000003f800000;
  FUN_1405c5fa2();
  param_1[0x1a] = &DAT_14cb769e8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = &PTR_FUN_14b0394b0;
  *(undefined4 *)(param_1 + 3) = 1;
  return param_1;
}



// FUNCTION 145cbc3f6 FUN_145cbc3f6 body=63 status=ok
// SIG undefined FUN_145cbc3f6(void)

void FUN_145cbc3f6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb929b0) {
                    /* WARNING: Could not recover jumptable at 0x000145cbc41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 400))();
    return;
  }
  if (lVar1 != DAT_14cb929b8) {
    if (lVar1 != DAT_14cb929a8) {
      FUN_145cbc436();
      return;
    }
    FUN_1457467b8(param_1,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145cbc426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))();
  return;
}



// FUNCTION 145cbc436 FUN_145cbc436 body=382 status=ok
// SIG undefined FUN_145cbc436(void)

void FUN_145cbc436(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  if (lVar2 == DAT_14cb92518) {
    if (*(int *)(param_3 + 1) < 2) goto LAB_145cbc47d;
    FUN_140002266(&local_48,L"UI.State.%s",*param_3);
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(local_38,iVar1,local_48,1);
    FUN_1447683ea(local_30,local_38,1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    lVar2 = *param_1;
    uVar3 = 0;
  }
  else {
    if (lVar2 != DAT_14cb92510) {
      if (lVar2 != DAT_14cb92520) {
LAB_145cbc47d:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
      (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
      *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
      goto LAB_145cbc51b;
    }
    if (*(int *)(param_3 + 1) < 2) goto LAB_145cbc47d;
    FUN_140002266(&local_48,L"UI.State.%s",*param_3);
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(local_38,iVar1,local_48,1);
    FUN_1447683ea(local_30,local_38,1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    lVar2 = *param_1;
    uVar3 = 1;
  }
  (**(code **)(lVar2 + 0x108))(param_1,local_30,uVar3);
LAB_145cbc51b:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbc5ce FUN_145cbc5ce body=165 status=ok
// SIG undefined FUN_145cbc5ce(void)

bool FUN_145cbc5ce(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbc674 FUN_145cbc674 body=147 status=ok
// SIG undefined FUN_145cbc674(void)

undefined8
FUN_145cbc674(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (0 < param_4) {
    do {
      cVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_3);
      iVar2 = (**(code **)(*param_3 + 0x38))(param_3);
      if (cVar1 != '\0') {
        if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cbc6c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*param_3 + 0x38))(param_3);
          return uVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x000145cbc700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*param_2 + 0x118))(param_2);
        return uVar3;
      }
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = (**(code **)(*param_3 + 0x38))(param_3);
      (**(code **)(*param_3 + 0x28))(param_3,iVar2 + param_5);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 0;
}



// FUNCTION 145cbc708 FUN_145cbc708 body=98 status=ok
// SIG undefined FUN_145cbc708(void)

undefined2 FUN_145cbc708(longlong *param_1)

{
  undefined2 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_20);
  FUN_1403f35db(local_20,&DAT_14c9908f8);
  uVar1 = Ordinal_15(*(undefined2 *)((longlong)param_1 + 10));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbc776 FUN_145cbc776 body=115 status=ok
// SIG undefined FUN_145cbc776(void)

undefined8 * FUN_145cbc776(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(&local_28,"Windows");
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 4)])(param_1);
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  *(undefined1 *)(param_1 + 4) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cbc7ea FUN_145cbc7ea body=61 status=ok
// SIG undefined FUN_145cbc7ea(void)

void FUN_145cbc7ea(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145cbc828(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1a3590;
  puVar1[5] = &PTR_LAB_14a1a3840;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 145cbc828 FUN_145cbc828 body=64 status=ok
// SIG undefined FUN_145cbc828(void)

undefined8 * FUN_145cbc828(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  *param_1 = &PTR_FUN_14a169c20;
  param_1[5] = &PTR_FUN_14a169ed0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 145cbc868 FUN_145cbc868 body=40 status=ok
// SIG undefined FUN_145cbc868(void)

undefined8 FUN_145cbc868(undefined8 param_1,int param_2)

{
  FUN_145cbc890();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbc890 FUN_145cbc890 body=170 status=ok
// SIG undefined FUN_145cbc890(void)

void FUN_145cbc890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3dfb70;
  FUN_141401b6b(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbc93a(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145836a8c(param_1);
  return;
}



// FUNCTION 145cbc93a FUN_145cbc93a body=40 status=ok
// SIG undefined FUN_145cbc93a(void)

void FUN_145cbc93a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14747d3b8(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 145cbc96a FUN_145cbc96a body=117 status=ok
// SIG undefined FUN_145cbc96a(void)

undefined8 * FUN_145cbc96a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14a3f77b0;
  param_1[5] = &PTR_FUN_14a3f7c40;
  param_1[6] = &PTR_LAB_14a3f7c80;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return param_1;
}



// FUNCTION 145cbc9ea FUN_145cbc9ea body=114 status=ok
// SIG undefined FUN_145cbc9ea(void)

undefined8 * FUN_145cbc9ea(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a682880;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x10;
  return param_1;
}



// FUNCTION 145cbca5c FUN_145cbca5c body=40 status=ok
// SIG undefined FUN_145cbca5c(void)

undefined8 FUN_145cbca5c(undefined8 param_1,int param_2)

{
  FUN_145cbca84();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbca84 FUN_145cbca84 body=85 status=ok
// SIG undefined FUN_145cbca84(void)

void FUN_145cbca84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6cb7b0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbcada FUN_145cbcada body=40 status=ok
// SIG undefined FUN_145cbcada(void)

undefined8 FUN_145cbcada(undefined8 param_1,int param_2)

{
  FUN_145cbcb02();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbcb02 FUN_145cbcb02 body=85 status=ok
// SIG undefined FUN_145cbcb02(void)

void FUN_145cbcb02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6ccbd0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbcb58 FUN_145cbcb58 body=40 status=ok
// SIG undefined FUN_145cbcb58(void)

undefined8 FUN_145cbcb58(undefined8 param_1,int param_2)

{
  FUN_145cbcb80();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbcb80 FUN_145cbcb80 body=85 status=ok
// SIG undefined FUN_145cbcb80(void)

void FUN_145cbcb80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6cdef0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbcbd6 FUN_145cbcbd6 body=40 status=ok
// SIG undefined FUN_145cbcbd6(void)

undefined8 FUN_145cbcbd6(undefined8 param_1,int param_2)

{
  FUN_145cbcbfe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbcbfe FUN_145cbcbfe body=85 status=ok
// SIG undefined FUN_145cbcbfe(void)

void FUN_145cbcbfe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6ce700;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cbcc54 FUN_145cbcc54 body=40 status=ok
// SIG undefined FUN_145cbcc54(void)

undefined8 FUN_145cbcc54(undefined8 param_1,int param_2)

{
  FUN_145cbcc7c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cbcc7c FUN_145cbcc7c body=85 status=ok
// SIG undefined FUN_145cbcc7c(void)

void FUN_145cbcc7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d40e0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}


