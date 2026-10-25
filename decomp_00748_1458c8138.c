// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1458c8138 FUN_1458c8138 body=86 status=ok
// SIG undefined FUN_1458c8138(void)

void FUN_1458c8138(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c818e FUN_1458c818e body=460 status=ok
// SIG undefined FUN_1458c818e(void)

void FUN_1458c818e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 1458c835c FUN_1458c835c body=158 status=ok
// SIG undefined FUN_1458c835c(void)

void FUN_1458c835c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1406f071e(param_2,iVar2);
    }
    lVar3 = *param_2;
    lVar7 = (longlong)iVar2 * 0x20;
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    puVar1 = (undefined4 *)(lVar3 + lVar7);
    *puVar1 = *(undefined4 *)(param_1 + 0x10);
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(undefined8 *)(lVar3 + 0x10 + lVar7) = 0;
    iVar2 = *(int *)(param_1 + 0x28);
    _Src = *(void **)(param_1 + 0x20);
    *(int *)(lVar3 + 0x18 + lVar7) = iVar2;
    if ((longlong)iVar2 != 0) {
      puVar8 = (undefined8 *)(lVar7 + lVar3 + 0x10);
      FUN_1446dd670(puVar8,iVar2,0);
      memcpy((void *)*puVar8,_Src,(longlong)iVar2 * 2);
      return;
    }
    *(undefined4 *)(lVar3 + lVar7 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 1458c83fa FUN_1458c83fa body=38 status=ok
// SIG undefined FUN_1458c83fa(void)

undefined8 FUN_1458c83fa(undefined8 param_1,int param_2)

{
  FUN_1458c8420();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c8420 FUN_1458c8420 body=79 status=ok
// SIG undefined FUN_1458c8420(void)

void FUN_1458c8420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b434010;
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b433f68;
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c8476 FUN_1458c8476 body=228 status=ok
// SIG undefined FUN_1458c8476(void)

longlong FUN_1458c8476(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba3f88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148bc4ee3;
    local_40 = &LAB_1465bc375;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2680;
    FUN_14081cfa3(L"/Script/OakGame",L"GrappleableObject",&DAT_14cba3f88,&DAT_148bc4ee2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba3f88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c855c FUN_1458c855c body=52 status=ok
// SIG undefined FUN_1458c855c(void)

undefined8 * FUN_1458c855c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f80000000000000;
  FUN_14020a6cc(param_1 + 1,1);
  return param_1;
}



// FUNCTION 1458c8590 FUN_1458c8590 body=57 status=ok
// SIG undefined FUN_1458c8590(void)

void FUN_1458c8590(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67940 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67940 = FUN_140002ddd(FUN_1465177dd,uVar1,L"GbxStatusEffectTickGroupDef");
  }
  return;
}



// FUNCTION 1458c85ca FUN_1458c85ca body=466 status=ok
// SIG undefined FUN_1458c85ca(void)

void FUN_1458c85ca(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  local_98 = CONCAT44(local_98._4_4_,iVar1);
  if (iVar1 == 0) {
    local_98 = 0;
  }
  else {
    FUN_1458c879e(&local_a0,iVar1);
    FUN_1412f3031(local_a0,uVar2,iVar1);
  }
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_3 + 1);
  lVar5 = (longlong)local_80;
  pvVar3 = (void *)*param_3;
  local_90 = param_2;
  if (lVar5 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar3,lVar5 * 2);
  }
  local_78[0] = (code *)0x0;
  plVar4 = (longlong *)FUN_14001cc68(0x30,8);
  pvVar3 = local_88;
  *plVar4 = (longlong)&PTR_LAB_149e1c370;
  plVar4[1] = local_a0;
  local_a0 = 0;
  *(undefined4 *)(plVar4 + 2) = (undefined4)local_98;
  *(undefined4 *)((longlong)plVar4 + 0x14) = local_98._4_4_;
  local_98 = 0;
  *(undefined4 *)(plVar4 + 3) = local_90;
  plVar4[4] = 0;
  lVar5 = (longlong)local_80;
  *(int *)(plVar4 + 5) = local_80;
  local_68 = plVar4;
  if (lVar5 == 0) {
    *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(plVar4 + 4,local_80,0);
    memcpy((void *)plVar4[4],pvVar3,lVar5 * 2);
  }
  if (plVar4 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_14276a770;
  }
  FUN_1458c87f6(param_1,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar4 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_1412f305a(&local_a0);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c879e FUN_1458c879e body=88 status=ok
// SIG undefined FUN_1458c879e(void)

void FUN_1458c879e(longlong param_1,int param_2)

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



// FUNCTION 1458c87f6 FUN_1458c87f6 body=421 status=ok
// SIG undefined FUN_1458c87f6(void)

void FUN_1458c87f6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_98 [2];
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = param_2 + 4;
  if ((DAT_14c75876c != '\x01') || (DAT_14c82b500 == 0)) {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 8))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
  }
  ppuVar2 = (undefined8 **)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    local_98[0] = *param_2;
    local_88 = param_2[2];
    param_2[2] = 0;
    local_78 = (undefined4)*plVar4;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_70 = (undefined4)param_2[5];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_68 = (undefined4)param_2[6];
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_60 = (undefined4)param_2[7];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x3c);
    if (local_98[0] != 0) {
      *param_2 = 0;
    }
    local_a8 = 0xff;
    FUN_14014aede(&local_a0,local_98,local_88,0);
  }
  else {
    local_58[0] = *param_2;
    local_48 = param_2[2];
    param_2[2] = 0;
    local_38 = (undefined4)*plVar4;
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_30 = (undefined4)param_2[5];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_28 = (undefined4)param_2[6];
    uStack_24 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_20 = (undefined4)param_2[7];
    uStack_1c = *(undefined4 *)((longlong)param_2 + 0x3c);
    if (local_58[0] != 0) {
      *param_2 = 0;
    }
    local_a8 = 0xff;
    FUN_140e6df44(&local_a0,local_58,local_48,ppuVar2);
  }
  if (ppuVar2 != &local_a0) {
    puVar3 = *ppuVar2;
    *ppuVar2 = local_a0;
    local_a0 = (undefined8 *)0x0;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1458c88f2;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
LAB_1458c88f2:
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c89b8 FUN_1458c89b8 body=257 status=ok
// SIG undefined FUN_1458c89b8(void)

void FUN_1458c89b8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *param_1 = &PTR_LAB_14a8eaf40;
  param_1[1] = &PTR_LAB_14a8eaf70;
  param_1[2] = &PTR_FUN_14a8eaf90;
  plVar2 = (longlong *)param_1[8];
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_1458c8a18;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    plVar3 = (longlong *)param_1[7];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,param_1 + 5);
    }
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
LAB_1458c8a18:
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  FUN_1449db362(param_1 + 0x14);
  FUN_1458c8aba(param_1 + 0x10);
  FUN_1449db362(param_1 + 0xc);
  FUN_1412e3cd5(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[8];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458c8a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458c8aba FUN_1458c8aba body=91 status=ok
// SIG undefined FUN_1458c8aba(void)

void FUN_1458c8aba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    plVar4 = (longlong *)puVar3[2];
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
    FUN_1400020a8(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1458c8b15 FUN_1458c8b15 body=35 status=ok
// SIG undefined FUN_1458c8b15(void)

void FUN_1458c8b15(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458c8b38(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4a34d0;
  return;
}



// FUNCTION 1458c8b38 FUN_1458c8b38 body=32 status=ok
// SIG undefined FUN_1458c8b38(void)

undefined8 * FUN_1458c8b38(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a45f020;
  return param_1;
}



// FUNCTION 1458c8b58 FUN_1458c8b58 body=35 status=ok
// SIG undefined FUN_1458c8b58(void)

void FUN_1458c8b58(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458c8b7c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd6e3c0;
  return;
}



// FUNCTION 1458c8b7c FUN_1458c8b7c body=32 status=ok
// SIG undefined FUN_1458c8b7c(void)

undefined8 * FUN_1458c8b7c(undefined8 *param_1)

{
  FUN_140e6d9f4();
  *param_1 = &PTR_FUN_14aef8920;
  return param_1;
}



// FUNCTION 1458c8b9c FUN_1458c8b9c body=238 status=ok
// SIG undefined FUN_1458c8b9c(void)

void FUN_1458c8b9c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_24 = 0;
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
  (**(code **)(*param_1 + 0x790))(param_1,local_19,&local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458c8ccc FUN_1458c8ccc body=37 status=ok
// SIG undefined FUN_1458c8ccc(void)

void FUN_1458c8ccc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x218);
  FUN_1412f3376(param_2);
  return;
}



// FUNCTION 1458c8cf2 FUN_1458c8cf2 body=40 status=ok
// SIG undefined FUN_1458c8cf2(void)

undefined8 FUN_1458c8cf2(undefined8 param_1,int param_2)

{
  FUN_1458c8d1a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c8d1a FUN_1458c8d1a body=71 status=ok
// SIG undefined FUN_1458c8d1a(void)

void FUN_1458c8d1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afd01d0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c8d61(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458c8d61 FUN_1458c8d61 body=38 status=ok
// SIG undefined FUN_1458c8d61(void)

void FUN_1458c8d61(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458c8d88(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 1458c8d88 FUN_1458c8d88 body=75 status=ok
// SIG undefined FUN_1458c8d88(void)

void FUN_1458c8d88(longlong *param_1)

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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458c8dd4 FUN_1458c8dd4 body=39 status=ok
// SIG undefined FUN_1458c8dd4(void)

void FUN_1458c8dd4(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_145729c5e();
  lVar1 = FUN_1458c8dfc(param_1);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x154) = *(byte *)(lVar1 + 0x154) | 4;
  }
  return;
}



// FUNCTION 1458c8dfc FUN_1458c8dfc body=17 status=ok
// SIG undefined FUN_1458c8dfc(void)

undefined8 FUN_1458c8dfc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x30);
  }
  return 0;
}



// FUNCTION 1458c8e0e FUN_1458c8e0e body=40 status=ok
// SIG undefined FUN_1458c8e0e(void)

undefined8 FUN_1458c8e0e(undefined8 param_1,int param_2)

{
  FUN_1458c8e36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c8e36 FUN_1458c8e36 body=518 status=ok
// SIG undefined FUN_1458c8e36(void)

void FUN_1458c8e36(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b7fcb60;
  param_1[6] = &PTR_FUN_14b7fce20;
  param_1[7] = &PTR_FUN_14b7fceb0;
  FUN_144760e21(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x28];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1412f41f5(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1412f41f5(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1412f41f5(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c90c8(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c905a(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c90f0(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14574f8c4(param_1 + 9);
  FUN_1458c903c(param_1);
  return;
}



// FUNCTION 1458c903c FUN_1458c903c body=30 status=ok
// SIG undefined FUN_1458c903c(void)

void FUN_1458c903c(longlong param_1)

{
  FUN_140af926c(param_1 + 0x38);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458c905a FUN_1458c905a body=38 status=ok
// SIG undefined FUN_1458c905a(void)

void FUN_1458c905a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458c9080(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1458c9080 FUN_1458c9080 body=72 status=ok
// SIG undefined FUN_1458c9080(void)

void FUN_1458c9080(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001458c90c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458c90c8 FUN_1458c90c8 body=40 status=ok
// SIG undefined FUN_1458c90c8(void)

void FUN_1458c90c8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14596c096(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1458c90f0 FUN_1458c90f0 body=55 status=ok
// SIG undefined FUN_1458c90f0(void)

void FUN_1458c90f0(longlong *param_1)

{
  FUN_1458c9128(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458c9128 FUN_1458c9128 body=121 status=ok
// SIG undefined FUN_1458c9128(void)

void FUN_1458c9128(longlong param_1,int param_2)

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



// FUNCTION 1458c91a2 FUN_1458c91a2 body=26 status=ok
// SIG undefined FUN_1458c91a2(void)

void FUN_1458c91a2(undefined8 param_1)

{
  FUN_1446e0b6e();
  FUN_1412f4220(param_1);
  return;
}



// FUNCTION 1458c91bc FUN_1458c91bc body=184 status=ok
// SIG undefined FUN_1458c91bc(void)

undefined8 * FUN_1458c91bc(undefined8 *param_1)

{
  FUN_144a7f8ec();
  *param_1 = &PTR_FUN_14aaafd50;
  param_1[2] = 0;
  param_1[3] = 0x7fffffff00000000;
  param_1[4] = 0x7fffffff7fffffff;
  param_1[5] = 0x8000000080000000;
  param_1[6] = 0x80000000;
  param_1[7] = 0;
  param_1[8] = 0x7fffffff7fffffff;
  param_1[9] = 0x800000007fffffff;
  param_1[10] = 0x8000000080000000;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = DAT_14c9a52a0;
  param_1[0x10] = DAT_14c9a5298;
  *(undefined4 *)((longlong)param_1 + 0x94) = DAT_14c9a52a0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = DAT_14c9a5298;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  return param_1;
}



// FUNCTION 1458c9274 FUN_1458c9274 body=88 status=ok
// SIG undefined FUN_1458c9274(void)

void FUN_1458c9274(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x160 + *param_1);
  FUN_1458c937c(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x160),(longlong)(int)(~param_2 + iVar1) * 0x160);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1458c92cc(param_1);
  return;
}



// FUNCTION 1458c92cc FUN_1458c92cc body=63 status=ok
// SIG undefined FUN_1458c92cc(void)

void FUN_1458c92cc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458c930c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x160,8);
  }
  return;
}



// FUNCTION 1458c930c FUN_1458c930c body=111 status=ok
// SIG undefined FUN_1458c930c(void)

ulonglong FUN_1458c930c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x160) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x160,8);
      uVar1 = uVar1 / 0x160;
    }
  }
  return uVar1;
}



// FUNCTION 1458c937c FUN_1458c937c body=154 status=ok
// SIG undefined FUN_1458c937c(void)

void FUN_1458c937c(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458c9416 FUN_1458c9416 body=40 status=ok
// SIG undefined FUN_1458c9416(void)

undefined8 FUN_1458c9416(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c943e thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9444 FUN_1458c9444 body=40 status=ok
// SIG undefined FUN_1458c9444(void)

undefined8 FUN_1458c9444(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c946c thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9472 FUN_1458c9472 body=40 status=ok
// SIG undefined FUN_1458c9472(void)

undefined8 FUN_1458c9472(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e5d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c949a thunk_FUN_14006e5d0 body=5 status=ok
// SIG undefined thunk_FUN_14006e5d0(void)

void thunk_FUN_14006e5d0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a85ebb0;
  param_1[5] = &PTR_FUN_14a85f5b0;
  param_1[6] = &PTR_LAB_14a85f5f0;
  param_1[0x55] = &PTR_FUN_14a85f640;
  param_1[0x56] = &PTR_FUN_14a85f6c0;
  param_1[0x57] = &PTR_FUN_14a85f6d0;
  FUN_144760e21(param_1[0xc1],*(undefined4 *)(param_1 + 0xc2));
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xbe],*(undefined4 *)(param_1 + 0xbf));
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xba] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0xb6];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760d56(param_1 + 0x82);
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x6f) == '\x01') {
    *(undefined1 *)(param_1 + 0x6f) = 0;
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5e));
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 1458c94a0 FUN_1458c94a0 body=40 status=ok
// SIG undefined FUN_1458c94a0(void)

undefined8 FUN_1458c94a0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c94c8 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c94ce FUN_1458c94ce body=40 status=ok
// SIG undefined FUN_1458c94ce(void)

undefined8 FUN_1458c94ce(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c94f6 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c94fc FUN_1458c94fc body=40 status=ok
// SIG undefined FUN_1458c94fc(void)

undefined8 FUN_1458c94fc(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9524 thunk_FUN_1402ef4ac body=5 status=ok
// SIG undefined thunk_FUN_1402ef4ac(void)

void thunk_FUN_1402ef4ac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_14a77e150;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x56];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x48);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140115fde(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xe) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar6 = *(int *)(param_1 + 0xe) + -1;
      lVar4 = (longlong)iVar6 * 0x88;
      lVar2 = DAT_14c9a3d60 + lVar4;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar4),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar4));
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar6,1);
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  FUN_144760f98(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458c952a FUN_1458c952a body=40 status=ok
// SIG undefined FUN_1458c952a(void)

undefined8 FUN_1458c952a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9552 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9558 FUN_1458c9558 body=40 status=ok
// SIG undefined FUN_1458c9558(void)

undefined8 FUN_1458c9558(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9580 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9586 FUN_1458c9586 body=40 status=ok
// SIG undefined FUN_1458c9586(void)

undefined8 FUN_1458c9586(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e79a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c95ae thunk_FUN_14006e79a body=5 status=ok
// SIG undefined thunk_FUN_14006e79a(void)

void thunk_FUN_14006e79a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a73f970;
  param_1[5] = &PTR_FUN_14a73ff50;
  param_1[6] = &PTR_LAB_14a73ff90;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 1458c95b4 FUN_1458c95b4 body=232 status=ok
// SIG undefined FUN_1458c95b4(void)

void FUN_1458c95b4(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  longlong lVar7;
  
  if (DAT_14caf5fc8 != DAT_14caf5ff4) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar5 = &DAT_14caf5ff8;
    if (DAT_14caf6000 != (undefined *)0x0) {
      puVar5 = DAT_14caf6000;
    }
    for (iVar2 = *(int *)(puVar5 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                   (longlong)DAT_14caf6008 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14caf5fc0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(ulonglong *)(DAT_14caf5fc0 + (longlong)iVar2 * 0x18) == param_1) {
        puVar5 = &DAT_14caf5ff8;
        if (DAT_14caf6000 != (undefined *)0x0) {
          puVar5 = DAT_14caf6000;
        }
        lVar1 = DAT_14caf5fc0 + (longlong)iVar2 * 0x18;
        lVar7 = (longlong)*(int *)(lVar1 + 0x14);
        iVar4 = *(int *)(puVar5 + lVar7 * 4);
        if (iVar4 == iVar2) {
          piVar6 = (int *)(puVar5 + lVar7 * 4);
        }
        else {
          do {
            piVar6 = (int *)(DAT_14caf5fc0 + (longlong)iVar4 * 0x18 + 0x10);
            iVar4 = *piVar6;
          } while (iVar4 != iVar2);
        }
        *piVar6 = *(int *)(lVar1 + 0x10);
        FUN_1458c969c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458c969c FUN_1458c969c body=128 status=ok
// SIG undefined FUN_1458c969c(void)

void FUN_1458c969c(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14caf5fc0;
  if (DAT_14caf5ff4 != 0) {
    *(int *)(DAT_14caf5fc0 + (longlong)DAT_14caf5ff0 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14caf5ff4) {
    iVar4 = DAT_14caf5ff0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14caf5ff4 = DAT_14caf5ff4 + 1;
  puVar3 = &DAT_14caf5fd0;
  if (DAT_14caf5fe0 != (undefined4 *)0x0) {
    puVar3 = DAT_14caf5fe0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14caf5ff0 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1458c971c FUN_1458c971c body=40 status=ok
// SIG undefined FUN_1458c971c(void)

undefined8 FUN_1458c971c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9744 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c974a FUN_1458c974a body=40 status=ok
// SIG undefined FUN_1458c974a(void)

undefined8 FUN_1458c974a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9772 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9778 FUN_1458c9778 body=40 status=ok
// SIG undefined FUN_1458c9778(void)

undefined8 FUN_1458c9778(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c97a0 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c97a6 FUN_1458c97a6 body=40 status=ok
// SIG undefined FUN_1458c97a6(void)

undefined8 FUN_1458c97a6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c97ce thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c97d4 FUN_1458c97d4 body=40 status=ok
// SIG undefined FUN_1458c97d4(void)

undefined8 FUN_1458c97d4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c97fc thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9802 FUN_1458c9802 body=40 status=ok
// SIG undefined FUN_1458c9802(void)

undefined8 FUN_1458c9802(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e248();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c982a thunk_FUN_14006e248 body=5 status=ok
// SIG undefined thunk_FUN_14006e248(void)

void thunk_FUN_14006e248(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a88f240;
  param_1[5] = &PTR_FUN_14a88fd40;
  param_1[6] = &PTR_FUN_14a88fd80;
  param_1[0x55] = &PTR_FUN_14a88fdd0;
  param_1[0x56] = &PTR_FUN_14a88fe50;
  param_1[0x57] = &PTR_FUN_14a88fe60;
  plVar1 = param_1 + 0xdd;
  if (*(int *)(param_1 + 0xde) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14006e2b3;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0xde) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14006e2b3:
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760d2a(param_1[0xd5],*(undefined4 *)(param_1 + 0xd6));
  if (param_1[0xd5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 1458c983e FUN_1458c983e body=31 status=ok
// SIG undefined FUN_1458c983e(void)

undefined8 FUN_1458c983e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c986c FUN_1458c986c body=31 status=ok
// SIG undefined FUN_1458c986c(void)

undefined8 FUN_1458c986c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c989a FUN_1458c989a body=31 status=ok
// SIG undefined FUN_1458c989a(void)

undefined8 FUN_1458c989a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c98ba FUN_1458c98ba body=40 status=ok
// SIG undefined FUN_1458c98ba(void)

undefined8 FUN_1458c98ba(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c98e2 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c98e8 FUN_1458c98e8 body=40 status=ok
// SIG undefined FUN_1458c98e8(void)

undefined8 FUN_1458c98e8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c991e FUN_1458c991e body=31 status=ok
// SIG undefined FUN_1458c991e(void)

undefined8 FUN_1458c991e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c994c FUN_1458c994c body=31 status=ok
// SIG undefined FUN_1458c994c(void)

undefined8 FUN_1458c994c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c997a FUN_1458c997a body=31 status=ok
// SIG undefined FUN_1458c997a(void)

undefined8 FUN_1458c997a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c99b0 FUN_1458c99b0 body=82 status=ok
// SIG undefined FUN_1458c99b0(void)

undefined8 * FUN_1458c99b0(undefined8 *param_1)

{
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2c9c80;
  param_1[6] = &PTR_FUN_14b2c9f70;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0xac) = *(byte *)((longlong)param_1 + 0xac) & 0xf0;
  return param_1;
}



// FUNCTION 1458c9a10 FUN_1458c9a10 body=31 status=ok
// SIG undefined FUN_1458c9a10(void)

undefined8 FUN_1458c9a10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9a3e FUN_1458c9a3e body=31 status=ok
// SIG undefined FUN_1458c9a3e(void)

undefined8 FUN_1458c9a3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9a6c FUN_1458c9a6c body=31 status=ok
// SIG undefined FUN_1458c9a6c(void)

undefined8 FUN_1458c9a6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9a9a FUN_1458c9a9a body=31 status=ok
// SIG undefined FUN_1458c9a9a(void)

undefined8 FUN_1458c9a9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9ac8 FUN_1458c9ac8 body=31 status=ok
// SIG undefined FUN_1458c9ac8(void)

undefined8 FUN_1458c9ac8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9af6 FUN_1458c9af6 body=31 status=ok
// SIG undefined FUN_1458c9af6(void)

undefined8 FUN_1458c9af6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9b24 FUN_1458c9b24 body=31 status=ok
// SIG undefined FUN_1458c9b24(void)

undefined8 FUN_1458c9b24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9b60 FUN_1458c9b60 body=31 status=ok
// SIG undefined FUN_1458c9b60(void)

undefined8 FUN_1458c9b60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9b8e FUN_1458c9b8e body=31 status=ok
// SIG undefined FUN_1458c9b8e(void)

undefined8 FUN_1458c9b8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9bae FUN_1458c9bae body=40 status=ok
// SIG undefined FUN_1458c9bae(void)

undefined8 FUN_1458c9bae(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9bd6 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9bdc FUN_1458c9bdc body=40 status=ok
// SIG undefined FUN_1458c9bdc(void)

undefined8 FUN_1458c9bdc(undefined8 param_1,int param_2)

{
  thunk_FUN_14151c000();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9c04 thunk_FUN_14151c000 body=5 status=ok
// SIG undefined thunk_FUN_14151c000(void)

void thunk_FUN_14151c000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b01f7f0;
  param_1[6] = &PTR_FUN_14b01faf0;
  param_1[0xc2] = &DAT_14a176f00;
  if (param_1[0xd0] != 0) {
    FUN_1400020a8();
  }
  param_1[0xc2] = &PTR_FUN_14a177080;
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(int *)((longlong)param_1 + 0x624) != 0) {
    FUN_14472eb64(param_1 + 0xc3,0);
  }
  param_1[0xc9] = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x644)) {
    *(undefined4 *)((longlong)param_1 + 0x644) = 0x80;
    FUN_1446efbd8(param_1 + 0xc5,0);
  }
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc3] != 0) {
    FUN_1400020a8();
  }
  param_1[0x9a] = &DAT_14a176f00;
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  param_1[0x9a] = &PTR_FUN_14a177080;
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (*(int *)((longlong)param_1 + 0x4e4) != 0) {
    FUN_14472eb64(param_1 + 0x9b,0);
  }
  param_1[0xa1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x504)) {
    *(undefined4 *)((longlong)param_1 + 0x504) = 0x80;
    FUN_1446efbd8(param_1 + 0x9d,0);
  }
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x88] = &DAT_14a176f00;
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  param_1[0x88] = &PTR_FUN_14a177080;
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x92) = 0;
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (*(int *)((longlong)param_1 + 0x454) != 0) {
    FUN_14472eb64(param_1 + 0x89,0);
  }
  param_1[0x8f] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x474)) {
    *(undefined4 *)((longlong)param_1 + 0x474) = 0x80;
    FUN_1446efbd8(param_1 + 0x8b,0);
  }
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  param_1[0x76] = &DAT_14a176f00;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  param_1[0x76] = &PTR_FUN_14a177080;
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)((longlong)param_1 + 0x3c4) != 0) {
    FUN_14472eb64(param_1 + 0x77,0);
  }
  param_1[0x7d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3e4)) {
    *(undefined4 *)((longlong)param_1 + 0x3e4) = 0x80;
    FUN_1446efbd8(param_1 + 0x79,0);
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  param_1[0x65] = &DAT_14a176f00;
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  param_1[0x65] = &PTR_FUN_14a177080;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x67) = 0;
  if (*(int *)((longlong)param_1 + 0x33c) != 0) {
    FUN_14472eb64(param_1 + 0x66,0);
  }
  param_1[0x6c] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x35c)) {
    *(undefined4 *)((longlong)param_1 + 0x35c) = 0x80;
    FUN_1446efbd8(param_1 + 0x68,0);
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  param_1[0x54] = &DAT_14a176f00;
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  param_1[0x54] = &PTR_FUN_14a177080;
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (*(int *)((longlong)param_1 + 0x2b4) != 0) {
    FUN_14472eb64(param_1 + 0x55,0);
  }
  param_1[0x5b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2d4)) {
    *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x80;
    FUN_1446efbd8(param_1 + 0x57,0);
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  param_1[0x38] = &DAT_14a176f00;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  param_1[0x38] = &PTR_FUN_14a177080;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (*(int *)((longlong)param_1 + 0x1d4) != 0) {
    FUN_14472eb64(param_1 + 0x39,0);
  }
  param_1[0x3f] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 500)) {
    *(undefined4 *)((longlong)param_1 + 500) = 0x80;
    FUN_1446efbd8(param_1 + 0x3b,0);
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 1458c9c18 FUN_1458c9c18 body=31 status=ok
// SIG undefined FUN_1458c9c18(void)

undefined8 FUN_1458c9c18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9c38 FUN_1458c9c38 body=40 status=ok
// SIG undefined FUN_1458c9c38(void)

undefined8 FUN_1458c9c38(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9c60 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9c66 FUN_1458c9c66 body=40 status=ok
// SIG undefined FUN_1458c9c66(void)

undefined8 FUN_1458c9c66(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9c8e thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9c94 FUN_1458c9c94 body=40 status=ok
// SIG undefined FUN_1458c9c94(void)

undefined8 FUN_1458c9c94(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9cbc thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9cc2 FUN_1458c9cc2 body=40 status=ok
// SIG undefined FUN_1458c9cc2(void)

undefined8 FUN_1458c9cc2(undefined8 param_1,int param_2)

{
  thunk_FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9cea thunk_FUN_140e36c74 body=5 status=ok
// SIG undefined thunk_FUN_140e36c74(void)

void thunk_FUN_140e36c74(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  uint uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  uint uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14aed7c60;
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 7;
  puVar2 = param_1 + 9;
  uStack_48 = 0x100000000;
  uStack_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  puStack_40 = puVar2;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1449c0562(&uStack_48);
  }
  uStack_68 = uStack_48;
  puStack_60 = puStack_40;
  uStack_58 = uStack_38;
  iStack_54 = iStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  plStack_70 = plVar1;
  if (iStack_34 < *(int *)(puStack_40 + 3)) {
    do {
      if (*(longlong *)(*plStack_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uStack_58 = uStack_58 & ~uStack_68._4_4_;
      FUN_1449c0562(&uStack_68);
    } while (iStack_54 < *(int *)(puStack_60 + 3));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_1446f4a44(plVar1,0);
  }
  param_1[0xd] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 100)) {
    *(undefined4 *)((longlong)param_1 + 100) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_140e36e81(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if ((uStack_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458c9cf0 FUN_1458c9cf0 body=40 status=ok
// SIG undefined FUN_1458c9cf0(void)

undefined8 FUN_1458c9cf0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9d18 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9d1e FUN_1458c9d1e body=40 status=ok
// SIG undefined FUN_1458c9d1e(void)

undefined8 FUN_1458c9d1e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9d46 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458c9d4c FUN_1458c9d4c body=40 status=ok
// SIG undefined FUN_1458c9d4c(void)

undefined8 FUN_1458c9d4c(undefined8 param_1,int param_2)

{
  thunk_FUN_1404db908();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458c9d74 thunk_FUN_1404db908 body=5 status=ok
// SIG undefined thunk_FUN_1404db908(void)

void thunk_FUN_1404db908(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a488de0;
  plVar3 = (longlong *)param_1[0x1d];
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
  FUN_1404db954(param_1);
  return;
}



// FUNCTION 1458c9d7a FUN_1458c9d7a body=95 status=ok
// SIG undefined FUN_1458c9d7a(void)

void FUN_1458c9d7a(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  DAT_14cb863c0 = 0;
  lVar1 = *param_1;
  iVar2 = (int)((ulonglong)(param_1[1] - lVar1) >> 4) * -0x33333333;
  DAT_14cb863c8 = iVar2;
  if (iVar2 != 0) {
    FUN_1458c9dda(iVar2);
    FUN_1458c9e45(DAT_14cb863c0,lVar1,iVar2);
    return;
  }
  DAT_14cb863cc = 0;
  return;
}



// FUNCTION 1458c9dda FUN_1458c9dda body=107 status=ok
// SIG undefined FUN_1458c9dda(void)

undefined8 FUN_1458c9dda(int param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_1 * 0x50,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_1 <= (int)(uVar2 / 0x50)) {
    uVar5 = uVar2 / 0x50 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(&DAT_14cb863c0,0,uVar5,0x50,8);
  }
  DAT_14cb863cc = iVar4;
  return uVar3;
}



// FUNCTION 1458c9e45 FUN_1458c9e45 body=108 status=ok
// SIG undefined FUN_1458c9e45(void)

void FUN_1458c9e45(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    FUN_1412f4f62(param_1,param_2);
    param_1 = param_1 + 10;
    param_2 = param_2 + 0x50;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1458c9eb2 FUN_1458c9eb2 body=37 status=ok
// SIG undefined FUN_1458c9eb2(void)

void FUN_1458c9eb2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x168);
  FUN_1458c9ed8(param_2);
  return;
}



// FUNCTION 1458c9ed8 FUN_1458c9ed8 body=211 status=ok
// SIG undefined FUN_1458c9ed8(void)

undefined8 * FUN_1458c9ed8(undefined8 *param_1)

{
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14b0c6840;
  FUN_140785382(param_1 + 0x10,10);
  *param_1 = &PTR_FUN_14b0d1b50;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 0x40000000;
  *(undefined1 *)(param_1 + 0x1c) = 3;
  *(char *)(param_1 + 0x1d) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x23) = 4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(bool *)(param_1 + 0x25) = (DAT_14c9a8634 & 0x20) == 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 4;
  *(undefined4 *)(param_1 + 0x27) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  *(bool *)(param_1 + 0x2c) = (DAT_14c9a8634 & 0x20) == 0;
  return param_1;
}



// FUNCTION 1458c9fac FUN_1458c9fac body=63 status=ok
// SIG undefined FUN_1458c9fac(void)

void FUN_1458c9fac(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1458c9fec(param_1);
    FUN_1412f5142(param_1);
    return;
  }
  FUN_1412f5142(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14884c9f8(param_1);
  return;
}



// FUNCTION 1458c9fec FUN_1458c9fec body=335 status=ok
// SIG undefined FUN_1458c9fec(void)

void FUN_1458c9fec(longlong *param_1)

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



// FUNCTION 1458ca13c FUN_1458ca13c body=63 status=ok
// SIG undefined FUN_1458ca13c(void)

void FUN_1458ca13c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1458ca17c(param_1);
    FUN_1412f52be(param_1);
    return;
  }
  FUN_1412f52be(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14884cbc4(param_1);
  return;
}



// FUNCTION 1458ca17c FUN_1458ca17c body=335 status=ok
// SIG undefined FUN_1458ca17c(void)

void FUN_1458ca17c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 100 + (longlong)iVar4 * 0x68) * 4) =
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



// FUNCTION 1458ca2cc FUN_1458ca2cc body=109 status=ok
// SIG undefined FUN_1458ca2cc(void)

longlong * FUN_1458ca2cc(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_141498c8a(param_1,param_3 + 8,0,0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
    }
  }
  *param_2 = lVar2;
  return param_2;
}



// FUNCTION 1458ca339 FUN_1458ca339 body=42 status=ok
// SIG undefined FUN_1458ca339(void)

void FUN_1458ca339(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458ca364(puVar1,param_1);
  *puVar1 = &PTR_FUN_14acc6950;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1458ca364 FUN_1458ca364 body=108 status=ok
// SIG undefined FUN_1458ca364(void)

undefined8 * FUN_1458ca364(undefined8 *param_1)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1408d5686();
  *param_1 = &PTR_FUN_14a921ba0;
  cVar1 = FUN_144a792c0(param_1,0x30);
  if (cVar1 != '\0') {
    local_18 = param_1[2];
    FUN_1458ca3d2(local_1c);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ca3d2 FUN_1458ca3d2 body=373 status=ok
// SIG undefined FUN_1458ca3d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1458ca3d2(undefined4 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1407a7ba4(&DAT_14cae4980,local_40);
  uVar4 = *param_2;
  *local_38 = uVar4;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_1407a7b10(&DAT_14cae4980,uVar3,local_38);
  if (cVar2 == '\0') {
    uVar5 = DAT_14cae4988 - _DAT_14cae49b4;
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= DAT_14cae49c8)) {
      uVar3 = DAT_14cae49c8 - 1U & uVar3;
      *(uint *)((longlong)local_38 + 0xc) = uVar3;
      puVar6 = DAT_14cae49c0;
      if (DAT_14cae49c0 == (undefined *)0x0) {
        puVar6 = &DAT_14cae49b8;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14cae49c8 - 1U & (longlong)(int)uVar3) * 4);
      puVar6 = DAT_14cae49c0;
      if (DAT_14cae49c0 == (undefined *)0x0) {
        puVar6 = &DAT_14cae49b8;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cae49c8 - 1U & (longlong)(int)uVar3) * 4) = local_44
      ;
    }
    else {
      DAT_14cae49c8 = iVar7;
      FUN_1407a7d86(&DAT_14cae4980);
    }
  }
  *param_1 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ca548 FUN_1458ca548 body=103 status=ok
// SIG undefined FUN_1458ca548(void)

ulonglong FUN_1458ca548(longlong param_1)

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
LAB_1458ca592:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1458ca592;
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



// FUNCTION 1458ca5ba FUN_1458ca5ba body=175 status=ok
// SIG undefined FUN_1458ca5ba(void)

int FUN_1458ca5ba(longlong param_1,void *param_2)

{
  int iVar1;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [608];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (*(char *)(param_1 + 8) == '\0') {
    memcpy(local_288,param_2,0x260);
    iVar1 = vx_initialize3(local_288,0x260);
    if (iVar1 == 0) {
      FUN_1458ca66a(param_1 + 0x60);
      FUN_1458ca66a(param_1 + 0x270);
      FUN_1458ca84e(param_1 + 0x60);
      FUN_1458ca84e(param_1 + 0x270);
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  else {
    iVar1 = 0x43d;
  }
  if ((local_28 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ca66a FUN_1458ca66a body=255 status=ok
// SIG undefined FUN_1458ca66a(void)

void FUN_1458ca66a(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb99c48 == (undefined8 *)0x0) {
    DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *DAT_14cb99c48 = 0;
    DAT_14cb99c48[1] = 0;
    DAT_14cb99c48[2] = 2;
  }
  puVar1 = DAT_14cb99c48;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14b526be0;
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
  *local_30 = &PTR_FUN_14b526b70;
  local_30[3] = param_1;
  FUN_1458ca76a(puVar1,local_38,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ca76a FUN_1458ca76a body=214 status=ok
// SIG undefined FUN_1458ca76a(void)

undefined8 * FUN_1458ca76a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1458ca84e FUN_1458ca84e body=529 status=ok
// SIG undefined FUN_1458ca84e(void)

void FUN_1458ca84e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x16d) == '\0') {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14b526cc0;
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
    *local_28 = &PTR_FUN_14b526da0;
    local_28[3] = param_1;
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    local_38 = 0;
    local_30 = 0;
    FUN_1412f566c(&local_38,&local_28);
    FUN_1458caa60(&local_38);
  }
  else {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_14b526cc0;
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
    *local_28 = &PTR_FUN_14b526e10;
    local_28[3] = param_1;
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    local_48 = 0;
    local_40 = 0;
    FUN_1412f566c(&local_48,&local_28);
    FUN_1458caad6(&local_48);
  }
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458caa60 FUN_1458caa60 body=117 status=ok
// SIG undefined FUN_1458caa60(void)

void FUN_1458caa60(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  vx_req_aux_get_capture_devices_create(&local_28);
  local_38 = 0;
  local_30 = 0;
  FUN_1412f566c(&local_38,param_1);
  FUN_1412f579e(local_28,&local_38);
  FUN_1449db362(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458caad6 FUN_1458caad6 body=117 status=ok
// SIG undefined FUN_1458caad6(void)

void FUN_1458caad6(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  vx_req_aux_get_render_devices_create(&local_28);
  local_38 = 0;
  local_30 = 0;
  FUN_1412f566c(&local_38,param_1);
  FUN_1412f579e(local_28,&local_38);
  FUN_1449db362(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cab58 FUN_1458cab58 body=228 status=ok
// SIG undefined FUN_1458cab58(void)

undefined8 * FUN_1458cab58(undefined8 *param_1)

{
  FUN_1458cac3c();
  *param_1 = &PTR_FUN_14b0a7950;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 1458cac3c FUN_1458cac3c body=55 status=ok
// SIG undefined FUN_1458cac3c(void)

undefined8 * FUN_1458cac3c(undefined8 *param_1)

{
  FUN_140751bbe();
  *param_1 = &PTR_FUN_14ae30620;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 1458cac74 FUN_1458cac74 body=42 status=ok
// SIG undefined FUN_1458cac74(void)

undefined4 FUN_1458cac74(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1458cac9e();
  puVar2 = &DAT_14cb0d060;
  if (*(longlong *)(lVar1 + 0x2a8) != 0) {
    puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x2a8) + 0x38);
  }
  return *(undefined4 *)(puVar2 + 1);
}



// FUNCTION 1458cac9e FUN_1458cac9e body=138 status=ok
// SIG undefined FUN_1458cac9e(void)

longlong FUN_1458cac9e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1148);
    lVar4 = (longlong)*(int *)(param_1 + 0x1150) * 8;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + lVar5);
      if (*(longlong *)(lVar1 + 0x360) == param_2) {
        if (lVar1 != 0) {
          return lVar1;
        }
        break;
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 != lVar5);
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + lVar5);
      cVar2 = FUN_147dab532(lVar1 + 8,param_2);
      if (cVar2 != '\0') {
        return lVar1;
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 != lVar5);
  }
  lVar3 = FUN_14572ad1a(DAT_14cb0d2b0,0);
  return lVar3;
}



// FUNCTION 1458cad28 FUN_1458cad28 body=48 status=ok
// SIG undefined FUN_1458cad28(void)

void FUN_1458cad28(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1458cad58 FUN_1458cad58 body=132 status=ok
// SIG undefined FUN_1458cad58(void)

void FUN_1458cad58(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458cadde FUN_1458cadde body=124 status=ok
// SIG undefined FUN_1458cadde(void)

longlong * FUN_1458cadde(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x240,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b7380a0;
  FUN_1458cae5a(plVar3 + 2,0);
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



// FUNCTION 1458cae5a FUN_1458cae5a body=91 status=ok
// SIG undefined FUN_1458cae5a(void)

undefined8 * FUN_1458cae5a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_140f7d8c2(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_140f7d8c2();
  }
  FUN_1458caeb6(param_1,param_2);
  *param_1 = &PTR_FUN_14b95ce00;
  return param_1;
}



// FUNCTION 1458caeb6 FUN_1458caeb6 body=102 status=ok
// SIG undefined FUN_1458caeb6(void)

undefined8 * FUN_1458caeb6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140a3aef4();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_1458caee8;
  }
  param_2 = FUN_140a3aef4();
LAB_1458caee8:
  FUN_140aed22a(param_1,param_2);
  *param_1 = &PTR_FUN_14b3e8130;
  param_1[0x45] = 0;
  return param_1;
}



// FUNCTION 1458caf28 FUN_1458caf28 body=455 status=ok
// SIG undefined FUN_1458caf28(void)

undefined8 * FUN_1458caf28(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144805d84();
  *param_1 = &PTR_FUN_14ac18480;
  param_1[5] = &PTR_FUN_14ac18a40;
  param_1[6] = &PTR_LAB_14ac18a80;
  param_1[0x22] = &PTR_FUN_14ac18ad0;
  param_1[0x23] = &PTR_FUN_14ac18b00;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_1458cb102(param_1 + 0x3a);
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  FUN_1458cb0f0(param_1 + 99);
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  uVar1 = DAT_14c8464e8;
  param_1[0x68] = DAT_14c8464e0;
  param_1[0x69] = uVar1;
  param_1[0x6a] = DAT_14c8464f0;
  param_1[0x6b] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0x3f8666663f8ccccd;
  param_1[0x55] = 0x3f00000041200000;
  *(undefined4 *)(param_1 + 0x56) = 10;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5b] = 0x100000000;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(byte *)((longlong)param_1 + 0x2a6) = *(byte *)((longlong)param_1 + 0x2a6) & 0xf6;
  param_1[0x61] = 0x42c80000;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x2a5) = *(byte *)((longlong)param_1 + 0x2a5) & 0x20 | 0x97;
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x49] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x47] = DAT_14c8464e0;
  param_1[0x48] = uVar1;
  return param_1;
}



// FUNCTION 1458cb0f0 FUN_1458cb0f0 body=17 status=ok
// SIG undefined FUN_1458cb0f0(void)

undefined8 * FUN_1458cb0f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 1458cb102 FUN_1458cb102 body=38 status=ok
// SIG undefined FUN_1458cb102(void)

undefined8 * FUN_1458cb102(undefined8 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 1458cb136 FUN_1458cb136 body=67 status=ok
// SIG undefined FUN_1458cb136(void)

undefined8 * FUN_1458cb136(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b358710;
  FUN_140170ace(param_1 + 0xe);
  FUN_1458cb17a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1458cb17a FUN_1458cb17a body=55 status=ok
// SIG undefined FUN_1458cb17a(void)

void FUN_1458cb17a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b357f70;
  FUN_1447cd778(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458cb1bc FUN_1458cb1bc body=57 status=ok
// SIG undefined FUN_1458cb1bc(void)

undefined8 * FUN_1458cb1bc(undefined8 *param_1)

{
  FUN_140e2f36c();
  *param_1 = &PTR_FUN_14b589980;
  param_1[5] = &PTR_FUN_14b589e30;
  param_1[0x2d] = &PTR_FUN_14b589e70;
  return param_1;
}



// FUNCTION 1458cb204 FUN_1458cb204 body=40 status=ok
// SIG undefined FUN_1458cb204(void)

undefined8 FUN_1458cb204(undefined8 param_1,int param_2)

{
  FUN_1458cb22c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458cb22c FUN_1458cb22c body=82 status=ok
// SIG undefined FUN_1458cb22c(void)

void FUN_1458cb22c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5c4a20;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001458cb27a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458cb28c FUN_1458cb28c body=40 status=ok
// SIG undefined FUN_1458cb28c(void)

undefined8 FUN_1458cb28c(undefined8 param_1,int param_2)

{
  FUN_1458cb2b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458cb2b4 FUN_1458cb2b4 body=245 status=ok
// SIG undefined FUN_1458cb2b4(void)

void FUN_1458cb2b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8e3d80;
  if (param_1[0xfa] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f4c4(param_1 + 0xd0);
  FUN_14051f4c4(param_1 + 0xb5);
  FUN_14051f4c4(param_1 + 0x9f);
  FUN_14051f4c4(param_1 + 0x89);
  FUN_14051f4c4(param_1 + 0x73);
  FUN_14051f4c4(param_1 + 0x5c);
  FUN_14051f4c4(param_1 + 0x46);
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1458cb3aa(param_1 + 7);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458cb3aa FUN_1458cb3aa body=55 status=ok
// SIG undefined FUN_1458cb3aa(void)

void FUN_1458cb3aa(longlong *param_1)

{
  FUN_1458cb3e2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458cb3e2 FUN_1458cb3e2 body=121 status=ok
// SIG undefined FUN_1458cb3e2(void)

void FUN_1458cb3e2(longlong param_1,int param_2)

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



// FUNCTION 1458cb468 FUN_1458cb468 body=131 status=ok
// SIG undefined FUN_1458cb468(void)

void FUN_1458cb468(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x6698);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x6690);
    lVar3 = 0;
    do {
      FUN_1458cb4ec(param_1 + 0x3ad8,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)iVar1 * 4 != lVar3);
    *(undefined4 *)(param_1 + 0x6698) = 0;
    if (*(int *)(param_1 + 0x669c) != 0) {
      FUN_14480809c(param_1 + 0x6690,0);
    }
  }
  *(undefined8 *)(param_1 + 0x66a0) = 0;
  return;
}



// FUNCTION 1458cb4ec FUN_1458cb4ec body=150 status=ok
// SIG undefined FUN_1458cb4ec(void)

undefined8 FUN_1458cb4ec(longlong *param_1,int param_2)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  lVar4 = (**(code **)(*param_1 + 0x18))();
  if (lVar4 != 0) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
      bVar3 = (char)plVar6[1] - 1;
      if (-1 < (char)bVar3) {
        uVar7 = 0;
        uVar8 = (ulonglong)bVar3;
        do {
          plVar1 = *(longlong **)(*plVar6 + uVar8 * 8);
          if (*(int *)((longlong)plVar1 + 0x2c4) == param_2) {
            (**(code **)(*plVar1 + 0x20))(plVar1,lVar4);
            FUN_1458cb582(plVar6,uVar8 & 0xffffffff);
            uVar7 = 1;
          }
          bVar2 = 0 < (longlong)uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar2);
        return uVar7;
      }
    }
  }
  return 0;
}



// FUNCTION 1458cb582 FUN_1458cb582 body=95 status=ok
// SIG undefined FUN_1458cb582(void)

void FUN_1458cb582(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + (longlong)(int)param_2 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_1458cb5e2(param_1);
  return;
}



// FUNCTION 1458cb5e2 FUN_1458cb5e2 body=62 status=ok
// SIG undefined FUN_1458cb5e2(void)

void FUN_1458cb5e2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458cb620(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1458cb620 FUN_1458cb620 body=89 status=ok
// SIG undefined FUN_1458cb620(void)

ulonglong FUN_1458cb620(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1458cb680 FUN_1458cb680 body=221 status=ok
// SIG undefined FUN_1458cb680(void)

longlong FUN_1458cb680(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99d3c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146fdde4d;
    local_40 = FUN_146293b9a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/ClothingSystemRuntimeInterface",L"ClothingSimulationInteractor",
                  &DAT_14c99d3c8,FUN_146293b78);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99d3c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cb764 FUN_1458cb764 body=221 status=ok
// SIG undefined FUN_1458cb764(void)

longlong FUN_1458cb764(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ab4a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470f4c43;
    local_40 = FUN_1462b26e6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"DBehaviorInstanceData",&DAT_14c9ab4a0,&DAT_1470f4c42);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab4a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cb848 FUN_1458cb848 body=221 status=ok
// SIG undefined FUN_1458cb848(void)

longlong FUN_1458cb848(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac1780 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147870961;
    local_40 = &LAB_1459be362;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"HapticFeedbackEffect_Base",&DAT_14cac1780,&DAT_147870960);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1780;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cb92c FUN_1458cb92c body=221 status=ok
// SIG undefined FUN_1458cb92c(void)

longlong FUN_1458cb92c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb08868 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d3448b;
    local_40 = FUN_146402905;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"SoundEffectPreset",&DAT_14cb08868,&DAT_147d3448a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb08868;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cba10 FUN_1458cba10 body=221 status=ok
// SIG undefined FUN_1458cba10(void)

longlong FUN_1458cba10(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacb9b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147903633;
    local_40 = FUN_1463a446c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"AnimMetaData",&DAT_14cacb9b8,&DAT_147903632);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacb9b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cbaf4 FUN_1458cbaf4 body=221 status=ok
// SIG undefined FUN_1458cbaf4(void)

longlong FUN_1458cbaf4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad7a68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7defd;
    local_40 = FUN_1463c53f8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Engine",L"EdGraph",&DAT_14cad7a68,&DAT_147a7defc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7a68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cbbd8 FUN_1458cbbd8 body=221 status=ok
// SIG undefined FUN_1458cbbd8(void)

longlong FUN_1458cbbd8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf89d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147c91725;
    local_40 = FUN_1463f79b1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Engine",L"Player",&DAT_14caf89d0,&DAT_147c91724);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf89d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cbcbc FUN_1458cbcbc body=221 status=ok
// SIG undefined FUN_1458cbcbc(void)

longlong FUN_1458cbcbc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb226e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f2d2f9;
    local_40 = FUN_146439476;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GpsContext",&DAT_14cb226e8,&DAT_147f2d2f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb226e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cbda0 FUN_1458cbda0 body=221 status=ok
// SIG undefined FUN_1458cbda0(void)

longlong FUN_1458cbda0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb27670 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fa031f;
    local_40 = &LAB_14644de9a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"PlayerMappableKeySettings",&DAT_14cb27670,
                  &DAT_147fa031e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27670;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cbe84 FUN_1458cbe84 body=221 status=ok
// SIG undefined FUN_1458cbe84(void)

longlong FUN_1458cbe84(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb28ac0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fc0a8d;
    local_40 = &LAB_145d0b64d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xa20;
    FUN_14081cfa3(L"/Script/TemplateSequence",L"CameraAnimationSequenceCameraStandIn",&DAT_14cb28ac0
                  ,&DAT_147fc0a8c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb28ac0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cbf68 FUN_1458cbf68 body=221 status=ok
// SIG undefined FUN_1458cbf68(void)

longlong FUN_1458cbf68(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb361c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14805e3fa;
    local_40 = FUN_1464658d3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataChannelReader",&DAT_14cb361c0,FUN_1464658ac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb361c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc04c FUN_1458cc04c body=221 status=ok
// SIG undefined FUN_1458cc04c(void)

longlong FUN_1458cc04c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb36248 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14805f6f9;
    local_40 = FUN_146465bf3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataChannelWriter",&DAT_14cb36248,FUN_146465bcc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb36248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc130 FUN_1458cc130 body=221 status=ok
// SIG undefined FUN_1458cc130(void)

longlong FUN_1458cc130(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b5d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148443059;
    local_40 = FUN_14648e6a5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InputBehavior",&DAT_14cb4b5d8,
                  &DAT_148443058);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b5d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc214 FUN_1458cc214 body=221 status=ok
// SIG undefined FUN_1458cc214(void)

longlong FUN_1458cc214(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4ba00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148457395;
    local_40 = FUN_14649003d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"ToolTarget",&DAT_14cb4ba00,&DAT_148457394);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ba00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc2f8 FUN_1458cc2f8 body=221 status=ok
// SIG undefined FUN_1458cc2f8(void)

longlong FUN_1458cc2f8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb68c60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14874797f;
    local_40 = FUN_14651d802;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxWorldAudioSystemBase",&DAT_14cb68c60,&DAT_14874797e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68c60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc3dc FUN_1458cc3dc body=221 status=ok
// SIG undefined FUN_1458cc3dc(void)

longlong FUN_1458cc3dc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5e678 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486a7cf3;
    local_40 = FUN_1464e1bd9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameModeModuleConduit",&DAT_14cb5e678,&DAT_1486a7cf2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5e678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc4c0 FUN_1458cc4c0 body=221 status=ok
// SIG undefined FUN_1458cc4c0(void)

longlong FUN_1458cc4c0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb95660 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a32add;
    local_40 = FUN_146578f0f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"InAppPurchaseCallbackProxy2",&DAT_14cb95660,
                  FUN_146578ee8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc5a4 FUN_1458cc5a4 body=221 status=ok
// SIG undefined FUN_1458cc5a4(void)

longlong FUN_1458cc5a4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb95738 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a35447;
    local_40 = FUN_14657934f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"InAppPurchaseReceiptsCallbackProxy",
                  &DAT_14cb95738,FUN_146579328);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95738;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc688 FUN_1458cc688 body=221 status=ok
// SIG undefined FUN_1458cc688(void)

longlong FUN_1458cc688(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf7238 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14906738f;
    local_40 = FUN_1466768d3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GeometryCache",L"GeometryCacheTrack",&DAT_14cbf7238,&DAT_14906738e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf7238;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc76c FUN_1458cc76c body=221 status=ok
// SIG undefined FUN_1458cc76c(void)

longlong FUN_1458cc76c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc16dd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149446d59;
    local_40 = FUN_14672f6d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/LiveLinkAnimationCore",L"LiveLinkRetargetAsset",&DAT_14cc16dd8,
                  &DAT_149446d58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc16dd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc850 FUN_1458cc850 body=221 status=ok
// SIG undefined FUN_1458cc850(void)

longlong FUN_1458cc850(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d3b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1498397ec;
    local_40 = &LAB_145dc3cad;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/ACLPlugin",L"AnimationCompressionLibraryDatabase",&DAT_14cc2d3b0,
                  FUN_146764236);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2d3b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cc934 FUN_1458cc934 body=221 status=ok
// SIG undefined FUN_1458cc934(void)

longlong FUN_1458cc934(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2d800 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149863021;
    local_40 = FUN_146768e78;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/IKRig",L"RetargetOpBase",&DAT_14cc2d800,&DAT_149863020);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2d800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cca12 FUN_1458cca12 body=173 status=ok
// SIG undefined FUN_1458cca12(void)

void FUN_1458cca12(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1412f7d0e();
  local_40 = 0;
  FUN_14485c47a(&local_40,param_3);
  local_38 = param_4;
  iVar2 = FUN_1458ccac0(param_1 + 0x68,&local_40);
  if (iVar2 != 0) {
    cVar1 = FUN_144729dda(param_1 + 0xf8);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0xf8);
      (**(code **)(*plVar3 + 0x420))(plVar3,0);
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ccac0 FUN_1458ccac0 body=235 status=ok
// SIG undefined FUN_1458ccac0(void)

undefined8 FUN_1458ccac0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar6 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x88) << 4;
    iVar3 = 1;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar6 + 8) == *(longlong *)(param_2 + 8)) &&
         (cVar1 = FUN_14038330a(lVar6,param_2), cVar1 != '\0')) {
        if (iVar3 == 0) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x88);
        iVar3 = iVar2 - iVar3;
        if (iVar3 != 0) {
          iVar5 = 1;
          if (iVar3 < 1) {
            iVar5 = iVar3;
          }
          lVar6 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar6 = param_1;
          }
          memmove((void *)((lVar4 >> 0x20) * 0x10 + lVar6),
                  (void *)((longlong)(iVar2 - iVar5) * 0x10 + lVar6),(longlong)iVar5 << 4);
          iVar2 = *(int *)(param_1 + 0x88);
        }
        *(int *)(param_1 + 0x88) = iVar2 + -1;
        FUN_1458ccbac(param_1);
        return 1;
      }
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 1458ccbac FUN_1458ccbac body=73 status=ok
// SIG undefined FUN_1458ccbac(void)

void FUN_1458ccbac(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458ccbf6(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_148bf524c(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x10);
  return;
}



// FUNCTION 1458ccbf6 FUN_1458ccbf6 body=108 status=ok
// SIG undefined FUN_1458ccbf6(void)

ulonglong FUN_1458ccbf6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1458ccc62 FUN_1458ccc62 body=179 status=ok
// SIG undefined FUN_1458ccc62(void)

bool FUN_1458ccc62(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ccd16 FUN_1458ccd16 body=449 status=ok
// SIG undefined FUN_1458ccd16(void)

void FUN_1458ccd16(longlong param_1,longlong *param_2,char param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_94 [4];
  longlong local_90 [2];
  longlong *local_80 [2];
  longlong local_70 [2];
  longlong *local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = FUN_141302540();
  if (((param_2 != (longlong *)0x0) && (iVar3 != -1)) && (iVar3 == param_4)) {
    cVar2 = FUN_1412f7d10(param_2);
    if ((cVar2 != param_3) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
      lVar4 = FUN_144a5dd5e();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        lVar4 = FUN_1407e8892();
        uVar5 = FUN_140e4494e(lVar1);
        local_b0 = FUN_1412f7d10(param_2);
        local_b8 = param_3 + '\x01';
        if (*param_2 == 0) {
          local_50 = 0;
        }
        else {
          local_50 = *(undefined8 *)(*param_2 + 0x3c);
        }
        FUN_1458d35da(param_2,local_70);
        FUN_140233b1a(local_60,local_70);
        FUN_141302464(param_2,local_90);
        FUN_140233b1a(local_80,local_90);
        local_a0 = 2;
        local_a8 = 0x42c80000;
        local_c8 = lVar4 + 0x20;
        local_c0 = &local_50;
        FUN_14130267c(uVar5,local_94,local_80,local_60);
        if (local_80[0] != (longlong *)0x0) {
          (**(code **)(*local_80[0] + 0x10))();
        }
        if (local_90[0] != 0) {
          FUN_1400020a8();
        }
        if (local_60[0] != (longlong *)0x0) {
          (**(code **)(*local_60[0] + 0x10))();
        }
        if (local_70[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cced8 FUN_1458cced8 body=81 status=ok
// SIG undefined FUN_1458cced8(void)

void FUN_1458cced8(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = *(int *)(param_1 + 2) + local_18;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ccf36 FUN_1458ccf36 body=180 status=ok
// SIG undefined FUN_1458ccf36(void)

void FUN_1458ccf36(longlong *param_1,void *param_2,void *param_3)

{
  longlong *plVar1;
  void *_Src;
  
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
    (**(code **)(*plVar1 + 0x160))();
  }
  else {
    memset(param_2,0,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  }
  _Src = (void *)param_1[2];
  if (_Src != param_2) {
    plVar1 = (longlong *)*param_1;
    if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
      (**(code **)(*plVar1 + 0x100))(plVar1,param_2,_Src,1);
    }
    else {
      memcpy(param_2,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
    }
  }
  plVar1 = (longlong *)param_1[1];
  if ((*(byte *)((longlong)plVar1 + 0x39) & 2) != 0) {
    memset(param_3,0,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001458ccfcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x160))(plVar1,param_3);
  return;
}



// FUNCTION 1458ccfea FUN_1458ccfea body=124 status=ok
// SIG undefined FUN_1458ccfea(void)

void FUN_1458ccfea(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 unaff_RBX;
  
  param_1 = param_1 + 0x38;
  cVar5 = FUN_144729dda(param_1);
  if (cVar5 != '\0') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    uVar4 = FUN_14479d2ce(param_1);
    FUN_140545fa2(uVar4);
    uVar4 = FUN_14479d2ce(param_1);
    FUN_1458cd066(uVar4,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                                 9.99999905104687e-09 <=
                                 dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2) & 0xffffffff);
    return;
  }
  return;
}



// FUNCTION 1458cd066 FUN_1458cd066 body=149 status=ok
// SIG undefined FUN_1458cd066(void)

void FUN_1458cd066(longlong param_1,char param_2)

{
  char cVar1;
  
  if (((*(longlong *)(param_1 + 0xf48) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0xf48) + 0x73eb) != '\x02')) &&
     ((*(byte *)(param_1 + 0x5a0) & 2) == 0)) {
    param_1 = param_1 + 0xd98;
    if (param_2 == '\0') {
      FUN_140c125e6(param_1);
    }
    else {
      cVar1 = FUN_140426394(param_1,&DAT_14cbd9698);
      if (cVar1 == '\0') {
        cVar1 = FUN_14030d2b6(param_1,&DAT_14cbd96b8);
        if (cVar1 == '\0') {
          FUN_1403ca8ec(param_1,&DAT_14cbd9698);
        }
      }
    }
    return;
  }
  return;
}



// FUNCTION 1458cd0fc FUN_1458cd0fc body=271 status=ok
// SIG undefined FUN_1458cd0fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458cd0fc(void)

{
  _DAT_14caa0f58 = L"Size_DEPRECATED";
  DAT_14caa0f82 = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14caa0f60 = &DAT_14c87e638;
  _DAT_14caa0f70 = &LAB_14682652b;
  _DAT_14caa0f78 = 0x100000000;
  _DAT_14caa0f80 = 0;
  _DAT_14caa0f68 = DAT_14caa0908;
  DAT_14caa0908 = &DAT_14caa0f58;
  return;
}



// FUNCTION 1458cd20c FUN_1458cd20c body=56 status=ok
// SIG undefined FUN_1458cd20c(void)

void FUN_1458cd20c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar3 = 0;
    do {
      FUN_1412f7df2(*(longlong *)(lVar2 + lVar3) + 0x28);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 1458cd244 FUN_1458cd244 body=90 status=ok
// SIG undefined FUN_1458cd244(void)

undefined4 * FUN_1458cd244(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  uVar2 = *(undefined8 *)(param_2 + 4);
  param_1[6] = iVar1;
  if (iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1458cd37c(param_1 + 4,iVar1);
    FUN_1458cd29e(*(undefined8 *)(param_1 + 4),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1458cd29e FUN_1458cd29e body=47 status=ok
// SIG undefined FUN_1458cd29e(void)

void FUN_1458cd29e(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1458cd2ce(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1458cd2ce FUN_1458cd2ce body=174 status=ok
// SIG undefined FUN_1458cd2ce(void)

undefined8 * FUN_1458cd2ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 1458cd37c FUN_1458cd37c body=105 status=ok
// SIG undefined FUN_1458cd37c(void)

undefined8 FUN_1458cd37c(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x30)) {
    uVar5 = uVar2 / 0x30 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x30,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1458cd3e6 FUN_1458cd3e6 body=220 status=ok
// SIG undefined FUN_1458cd3e6(void)

void FUN_1458cd3e6(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458cd534();
  FUN_1458cd4c4(param_1);
  FUN_1412f7e04(param_1);
  iVar1 = *(int *)(param_1 + 0x2680);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2678);
    lVar5 = 0;
    do {
      local_40 = *(undefined8 *)(lVar2 + lVar5);
      cVar3 = FUN_144729dda(&local_40);
      if (cVar3 != '\0') {
        lVar4 = FUN_14479d2ce(&local_40);
        FUN_140457ffc(lVar4 + 0x26b8,param_1);
        lVar4 = FUN_14479d2ce(&local_40);
        FUN_140457ffc(lVar4 + 0x26e0,param_1);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  FUN_1412f7efc(param_1);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140d6119a(param_1,param_2);
  return;
}



// FUNCTION 1458cd4c4 FUN_1458cd4c4 body=112 status=ok
// SIG undefined FUN_1458cd4c4(void)

void FUN_1458cd4c4(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x26b8) != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(param_1 + 0x26b8);
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar3;
      lVar2 = FUN_144a61814(uVar1,puVar4);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar1,*puVar4);
      }
      *puVar4 = 0;
    }
  }
  return;
}



// FUNCTION 1458cd534 FUN_1458cd534 body=291 status=ok
// SIG undefined FUN_1458cd534(void)

void FUN_1458cd534(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  char local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  char local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x26b0) < 1) goto LAB_1458cd559;
  plVar1 = (longlong *)(param_1 + 0x26a8);
  lVar2 = *plVar1;
  local_50 = *(undefined8 *)(lVar2 + 8);
  local_48 = *(undefined4 *)(lVar2 + 0x10);
  local_40 = 0;
  local_38 = *(undefined1 *)(lVar2 + 0x20);
  local_28 = *(char *)(lVar2 + 0x30);
  if (local_28 == '\x01') {
    local_2c = *(undefined4 *)(lVar2 + 0x2c);
    local_34 = *(undefined8 *)(lVar2 + 0x24);
  }
  local_20 = 1;
  FUN_14597f6f3();
  *(undefined4 *)(param_1 + 0x26b0) = 0;
  if (*(int *)(param_1 + 0x26b4) == 0) {
LAB_1458cd63c:
    local_58 = 0;
  }
  else {
    FUN_148cfb2ae(plVar1);
    if (*(int *)(param_1 + 0x26b0) < 1) goto LAB_1458cd63c;
    lVar2 = *plVar1;
    local_88 = *(undefined8 *)(lVar2 + 8);
    local_80 = *(undefined4 *)(lVar2 + 0x10);
    local_78 = 0;
    local_70 = *(undefined1 *)(lVar2 + 0x20);
    local_60 = *(char *)(lVar2 + 0x30);
    local_58 = 1;
    if (local_60 == '\x01') {
      local_64 = *(undefined4 *)(lVar2 + 0x2c);
      local_6c = *(undefined8 *)(lVar2 + 0x24);
    }
  }
  FUN_148cf7728(param_1,&local_88,&local_50);
LAB_1458cd559:
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cd658 FUN_1458cd658 body=263 status=ok
// SIG undefined FUN_1458cd658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458cd658(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14cb38488 = 0;
  DAT_14cb38490 = 0;
  DAT_14cb38468 = 0;
  _DAT_14cb38470 = 0;
  _DAT_14cb38494 = 0xffffffff00000080;
  DAT_14cb3849c = 0;
  DAT_14cb384a8 = 0;
  DAT_14cb384b0 = 0;
  uVar5 = (ulonglong)(param_1[1] - *param_1) >> 4;
  uVar4 = (uint)uVar5;
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1458cda8e(uVar5 & 0xffffffff);
    if (uVar4 < 4) {
      iVar2 = 1;
    }
    else {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14cb384b0 == 0) || (DAT_14cb384b0 < iVar2)) {
      DAT_14cb384b0 = iVar2;
      FUN_1458cdc70();
    }
  }
  puVar3 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar3 != puVar1) {
    do {
      local_40 = *puVar3;
      uStack_3c = puVar3[1];
      uStack_38 = puVar3[2];
      uStack_34 = puVar3[3];
      FUN_1458cd760(local_2c,&local_40);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cd760 FUN_1458cd760 body=371 status=ok
// SIG undefined FUN_1458cd760(void)

undefined4 * FUN_1458cd760(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458cd980(local_40);
  uVar1 = param_2[1];
  *local_38 = *(undefined8 *)*param_2;
  local_38[1] = 0;
  *(undefined4 *)(local_38 + 2) = 0;
  FUN_1412f8090(local_38 + 1,uVar1);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar9 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  uVar9 = ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1458cd8d4(uVar9,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cb38470 - DAT_14cb3849c;
    if (uVar5 < 4) {
      iVar8 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14cb384b0)) {
      uVar9 = DAT_14cb384b0 - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x1c) = uVar9;
      puVar6 = DAT_14cb384a8;
      if (DAT_14cb384a8 == (undefined *)0x0) {
        puVar6 = &DAT_14cb384a0;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14cb384b0 - 1U & (longlong)(int)uVar9) * 4);
      puVar6 = DAT_14cb384a8;
      if (DAT_14cb384a8 == (undefined *)0x0) {
        puVar6 = &DAT_14cb384a0;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cb384b0 - 1U & (longlong)(int)uVar9) * 4) = local_44
      ;
    }
    else {
      DAT_14cb384b0 = iVar8;
      FUN_1458cdc70();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cd8d4 FUN_1458cd8d4 body=171 status=ok
// SIG undefined FUN_1458cd8d4(void)

undefined8 FUN_1458cd8d4(uint param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  
  if ((DAT_14cb38470 - DAT_14cb3849c != 1) && (DAT_14cb38470 != DAT_14cb3849c)) {
    puVar6 = &DAT_14cb384a0;
    if (DAT_14cb384a8 != (undefined *)0x0) {
      puVar6 = DAT_14cb384a8;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14cb384b0 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(DAT_14cb38468 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(DAT_14cb38468 + (longlong)iVar7 * 0x20) == *param_2) {
          FUN_1449db362(puVar1 + 2);
          lVar4 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar5 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar1 + 4) = param_2[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1480bb7ee(*param_3);
          *param_3 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1458cd980 FUN_1458cd980 body=269 status=ok
// SIG undefined FUN_1458cd980(void)

int * FUN_1458cd980(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb38498;
  iVar4 = DAT_14cb38470;
  if (DAT_14cb3849c == 0) {
    iVar2 = DAT_14cb38470 + 1;
    bVar7 = DAT_14cb38474 == DAT_14cb38470;
    DAT_14cb38470 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb38468,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb38478,1);
    puVar3 = DAT_14cb38488;
    if (DAT_14cb38488 == (undefined *)0x0) {
      puVar3 = &DAT_14cb38478;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb38498;
    DAT_14cb38498 = *(int *)(DAT_14cb38468 + 4 + lVar6 * 0x20);
    DAT_14cb3849c = DAT_14cb3849c + -1;
    iVar4 = iVar2;
    if (DAT_14cb3849c != 0) {
      *(undefined4 *)(DAT_14cb38468 + (longlong)DAT_14cb38498 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb38478;
  if (DAT_14cb38488 != (undefined *)0x0) {
    puVar3 = DAT_14cb38488;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb38468;
  return param_1;
}



// FUNCTION 1458cda8e FUN_1458cda8e body=481 status=ok
// SIG undefined FUN_1458cda8e(void)

void FUN_1458cda8e(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar3 = DAT_14cb38470;
  uVar9 = param_1 - DAT_14cb38470;
  if (uVar9 != 0 && DAT_14cb38470 <= (int)param_1) {
    iVar8 = DAT_14cb38470;
    if (DAT_14cb38474 < (int)param_1) {
      FUN_1446f4a44(&DAT_14cb38468);
      iVar8 = DAT_14cb38470;
    }
    DAT_14cb38470 = iVar8 + uVar9;
    if ((uint)(DAT_14cb38474 - iVar8) < uVar9) {
      FUN_1447711aa(&DAT_14cb38468);
    }
    lVar2 = DAT_14cb38468;
    if (iVar8 < (int)param_1) {
      piVar7 = (int *)((ulonglong)param_1 * 0x20 + DAT_14cb38468 + -0x1c);
      uVar12 = (ulonglong)param_1;
      do {
        uVar1 = uVar12 - 1;
        if (DAT_14cb3849c == 0) {
          iVar11 = (int)uVar12 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14cb38498 * 0x20) = (int)uVar12 + -1;
          iVar11 = (int)uVar1;
        }
        piVar7[-1] = -1;
        iVar13 = -1;
        if (0 < DAT_14cb3849c) {
          iVar13 = DAT_14cb38498;
        }
        *piVar7 = iVar13;
        DAT_14cb3849c = DAT_14cb3849c + 1;
        piVar7 = piVar7 + -8;
        uVar12 = uVar1;
        DAT_14cb38498 = iVar11;
      } while ((longlong)iVar8 < (longlong)uVar1);
    }
    if (iVar3 == 0) {
      uVar10 = uVar9 + 0x1f >> 5;
      DAT_14cb38490 = uVar9;
      if (DAT_14cb38494 + 0x1f >> 5 < uVar10) {
        FUN_14499171c(&DAT_14cb38478,0,uVar10,4);
        DAT_14cb38494 = uVar9 + 0x1f & 0xffffffe0;
      }
      puVar6 = DAT_14cb38488;
      if (DAT_14cb38488 == (undefined *)0x0) {
        puVar6 = &DAT_14cb38478;
      }
      if (uVar9 < 0x101) {
        uVar10 = uVar10 + (uVar10 == 0);
      }
      memset(puVar6,0,(ulonglong)(uVar10 << 2));
      uVar9 = DAT_14cb38490 + 0x1f;
      if (-1 < (int)DAT_14cb38490) {
        uVar9 = DAT_14cb38490;
      }
      if ((int)DAT_14cb38490 % 0x20 != 0) {
        puVar6 = &DAT_14cb38478;
        if (DAT_14cb38488 != (undefined *)0x0) {
          puVar6 = DAT_14cb38488;
        }
        bVar5 = -(char)((int)DAT_14cb38490 % 0x20);
        *(uint *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) =
             (uint)(*(int *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar9) {
      uVar4 = FUN_144a54ea4(&DAT_14cb38478,uVar9);
      FUN_1447c6044(&DAT_14cb38478,uVar4,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 1458cdc70 FUN_1458cdc70 body=527 status=ok
// SIG undefined FUN_1458cdc70(void)

void FUN_1458cdc70(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
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
  if (DAT_14cb384a8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb384a8,0,0,4);
  }
  uVar3 = DAT_14cb384b0;
  uVar2 = local_50;
  if (DAT_14cb384b0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb384a0,0,DAT_14cb384b0,4);
    if (0 < (int)uVar3) {
      do {
        puVar5 = DAT_14cb384a8;
        if (DAT_14cb384a8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb384a0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb384b0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb38478;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb38490 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb38468;
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb384b0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb384a8;
        if (DAT_14cb384a8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb384a0;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb384b0 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb384a8;
        if (DAT_14cb384a8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb384a0;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb384b0 - 1U) * 4) = iVar4;
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



// FUNCTION 1458cde80 FUN_1458cde80 body=63 status=ok
// SIG undefined FUN_1458cde80(void)

void FUN_1458cde80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458cdec0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1458cdec0 FUN_1458cdec0 body=83 status=ok
// SIG undefined FUN_1458cdec0(void)

ulonglong FUN_1458cdec0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1458cdf2a FUN_1458cdf2a body=132 status=ok
// SIG undefined FUN_1458cdf2a(void)

void FUN_1458cdf2a(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400b22c2(&local_18,"AirDash");
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458cdfb6 FUN_1458cdfb6 body=228 status=ok
// SIG undefined FUN_1458cdfb6(void)

longlong FUN_1458cdfb6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb686f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148744b25;
    local_40 = FUN_14651b9ce;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTriggerActor",&DAT_14cb686f8,&DAT_148744b24);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb686f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ce0a2 FUN_1458ce0a2 body=228 status=ok
// SIG undefined FUN_1458ce0a2(void)

longlong FUN_1458ce0a2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaec48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458e0a44;
    local_38 = &LAB_148c407cd;
    local_40 = FUN_1465ecf20;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x250;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSkillNetSpecializationComponent_VHE",&DAT_14cbaec48,
                  &DAT_148c407cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaec48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ce188 FUN_1458ce188 body=62 status=ok
// SIG undefined FUN_1458ce188(void)

undefined8 * FUN_1458ce188(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b003b70;
  FUN_1458ce1c6(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ce1c6 FUN_1458ce1c6 body=68 status=ok
// SIG undefined FUN_1458ce1c6(void)

void FUN_1458ce1c6(longlong *param_1)

{
  if ((char)param_1[0x10] == '\x01') {
    FUN_14031ec32(param_1 + 2);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  FUN_1412f871c(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458ce218 FUN_1458ce218 body=73 status=ok
// SIG undefined FUN_1458ce218(void)

undefined8 * FUN_1458ce218(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6e2428;
  FUN_1458ce261(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ce261 FUN_1458ce261 body=73 status=ok
// SIG undefined FUN_1458ce261(void)

void FUN_1458ce261(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458ce2b8 FUN_1458ce2b8 body=73 status=ok
// SIG undefined FUN_1458ce2b8(void)

undefined8 * FUN_1458ce2b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b888320;
  FUN_1458ce302(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ce302 FUN_1458ce302 body=58 status=ok
// SIG undefined FUN_1458ce302(void)

void FUN_1458ce302(longlong *param_1)

{
  FUN_1458ce33c(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458ce33c FUN_1458ce33c body=38 status=ok
// SIG undefined FUN_1458ce33c(void)

void FUN_1458ce33c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457e766e(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 1458ce362 FUN_1458ce362 body=158 status=ok
// SIG undefined FUN_1458ce362(void)

bool FUN_1458ce362(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ce402 FUN_1458ce402 body=255 status=ok
// SIG undefined FUN_1458ce402(void)

void FUN_1458ce402(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 unaff_RDI;
  bool bVar5;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x3f70) == 0) {
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x3f70) + 0x6a8) != '\x01') {
    return;
  }
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x20))(param_2);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    uVar3 = (undefined4)uVar4;
    if (cVar1 != '\0') goto LAB_1458ce44c;
    if ((longlong)*(int *)(param_1 + 31000) != 0) {
      lVar2 = 0;
      do {
        bVar5 = *(longlong **)(*(longlong *)(param_1 + 0x7910) + lVar2) == param_2;
        uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),bVar5);
        uVar3 = (undefined4)uVar4;
        if (bVar5) break;
        bVar5 = (longlong)*(int *)(param_1 + 31000) * 8 + -8 != lVar2;
        lVar2 = lVar2 + 8;
      } while (bVar5);
      goto LAB_1458ce44c;
    }
  }
  uVar3 = 0;
LAB_1458ce44c:
  lVar2 = *(longlong *)(param_1 + 0x3f70);
  if (*(char *)(lVar2 + 0x708) == '\x01') {
    FUN_140e16d82(param_1 + 0x60e8,DAT_14cbc1eb0,uVar3,*(char *)(param_1 + 0x178) == '\x03',0);
    lVar2 = *(longlong *)(param_1 + 0x3f70);
  }
  if (*(char *)(lVar2 + 0x709) != '\x01') {
    return;
  }
  if ((char)uVar3 != '\0') {
    FUN_1412f8dba();
    return;
  }
  FUN_1413401e6(param_1,0,0);
  return;
}



// FUNCTION 1458ce502 FUN_1458ce502 body=544 status=ok
// SIG undefined FUN_1458ce502(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001458ce718 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1458ce502(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 local_1a0;
  int local_198;
  undefined4 local_194;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_90 = 0;
  FUN_1446e6fe8(local_190,"Event_RequestLoadWidgets",0x18,1);
  FUN_140056680(local_1c8,local_88);
  local_1b8 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  local_1b0 = iVar1;
  if (iVar1 == 0) {
    local_1ac = 0;
  }
  else {
    FUN_1458ce778(&local_1b8,iVar1);
    FUN_1412f953b(local_1b8,uVar2,iVar1);
  }
  local_1a8 = DAT_14c763ad8;
  local_1a0 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_198 = iVar1;
  if (iVar1 == 0) {
    local_194 = 0;
  }
  else {
    FUN_1458ce7da(&local_1a0,iVar1);
    FUN_1412f9427(local_1a0,uVar2,iVar1);
  }
  local_78 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,8);
  *puVar3 = &PTR_FUN_14b478f80;
  FUN_1458ce844(puVar3 + 1,local_1c8);
  if (puVar3 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = &LAB_145b077fc;
    local_78 = &LAB_145b077fc;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = puVar5;
  puVar4[4] = puVar3;
  local_68 = 0;
  *(undefined4 *)(puVar4 + 8) = local_48;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_44;
  *(undefined4 *)(puVar4 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar4 + 6) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_54;
  *(undefined4 *)(puVar4 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_4c;
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    UNLOCK();
    LOCK();
    *puVar3 = puVar4;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  FUN_1458ce724(local_1c8);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458ce724 FUN_1458ce724 body=84 status=ok
// SIG undefined FUN_1458ce724(void)

void FUN_1458ce724(longlong *param_1)

{
  FUN_1412f93dc(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1412f9391(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458ce778 FUN_1458ce778 body=98 status=ok
// SIG undefined FUN_1458ce778(void)

undefined8 FUN_1458ce778(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0x38,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return uVar3;
}



// FUNCTION 1458ce7da FUN_1458ce7da body=105 status=ok
// SIG undefined FUN_1458ce7da(void)

undefined8 FUN_1458ce7da(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x30)) {
    uVar5 = uVar2 / 0x30 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x30,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1458ce844 FUN_1458ce844 body=182 status=ok
// SIG undefined FUN_1458ce844(void)

undefined8 * FUN_1458ce844(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1458ce778(param_1 + 2,iVar1);
    FUN_1412f953b(param_1[2],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar2 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1458ce7da(param_1 + 5,iVar1);
    FUN_1412f9427(param_1[5],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1458ce8fa FUN_1458ce8fa body=322 status=ok
// SIG undefined FUN_1458ce8fa(void)

undefined8 * FUN_1458ce8fa(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1458cee6a();
  *param_1 = &PTR_FUN_14a927fe0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_1446f470e(&local_68,L"AssetRegistry",1);
  uVar2 = FUN_144a52528();
  FUN_14493e38c(uVar2,local_68);
  plVar1 = DAT_14c9485b8;
  uVar2 = (**(code **)(*DAT_14c9485b8 + 0x328))(DAT_14c9485b8);
  FUN_1458cecd6(local_60,param_1,FUN_147b05a14);
  FUN_1458cea3e(uVar2,local_70,local_60);
  FUN_1401cb1ee(local_60);
  uVar2 = (**(code **)(*plVar1 + 0x338))(plVar1);
  FUN_1458cecd6(local_60,param_1,FUN_147b05ad8);
  FUN_1458cea3e(uVar2,local_70,local_60);
  FUN_1401cb1ee(local_60);
  uVar2 = (**(code **)(*plVar1 + 0x348))(plVar1);
  FUN_1458ceda0(local_60,param_1,FUN_147b05b86);
  FUN_1458ceb8a(uVar2,local_70,local_60);
  FUN_1401cb1ee(local_60);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cea3e FUN_1458cea3e body=315 status=ok
// SIG undefined FUN_1458cea3e(void)

undefined8 *
FUN_1458cea3e(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

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



// FUNCTION 1458ceb8a FUN_1458ceb8a body=315 status=ok
// SIG undefined FUN_1458ceb8a(void)

undefined8 *
FUN_1458ceb8a(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

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



// FUNCTION 1458cecd6 FUN_1458cecd6 body=202 status=ok
// SIG undefined FUN_1458cecd6(void)

LPCRITICAL_SECTION FUN_1458cecd6(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 param_3)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a975630;
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
  *(undefined ***)p_Var1 = &PTR_FUN_14a9755c0;
  (p_Var1->ProcessLocksList).Blink = param_2;
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1458ceda0 FUN_1458ceda0 body=202 status=ok
// SIG undefined FUN_1458ceda0(void)

LPCRITICAL_SECTION FUN_1458ceda0(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 param_3)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a975710;
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
  *(undefined ***)p_Var1 = &PTR_FUN_14a9756a0;
  (p_Var1->ProcessLocksList).Blink = param_2;
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1458cee6a FUN_1458cee6a body=613 status=ok
// SIG undefined FUN_1458cee6a(void)

undefined8 * FUN_1458cee6a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_LAB_149e5ef90;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  local_40 = param_1;
  FUN_1412fa43e(&local_40,&DAT_14c872af8);
  FUN_1412fa43e(&local_40,&DAT_14c872ce8);
  *(undefined1 *)(param_1 + 0x16) = 1;
  lVar4 = FUN_140d5712e();
  lVar5 = *(longlong *)(lVar4 + 0x28);
  plVar3 = *(longlong **)(lVar4 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_40 = (undefined8 *)0x0;
  local_38 = *(int *)(lVar5 + 0x30);
  lVar4 = (longlong)local_38;
  _Src = *(void **)(lVar5 + 0x28);
  if (lVar4 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar4 * 2);
  }
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
  FUN_1412fa92c(param_1,&local_50,&local_40);
  plVar1 = local_48;
  param_1[6] = local_50;
  local_50 = 0;
  plVar3 = (longlong *)param_1[7];
  if (local_48 != plVar3) {
    local_48 = (longlong *)0x0;
    param_1[7] = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_1458cefcd;
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
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1458cefcd:
  lVar5 = FUN_140d5712e();
  FUN_1458cf184(lVar5 + 8,&local_50,param_1);
  FUN_1458cf0d0(&DAT_14c9485c0,&local_50,param_1,FUN_14686f2de);
  FUN_1458cf0d0(&DAT_14c9485d8,&local_50,param_1,FUN_14686f346);
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458cf0d0 FUN_1458cf0d0 body=179 status=ok
// SIG undefined FUN_1458cf0d0(void)

undefined8
FUN_1458cf0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_40 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28,&local_48);
  *puVar1 = &PTR_LAB_149e62de0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e625a0;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_1458c6c8c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cf184 FUN_1458cf184 body=174 status=ok
// SIG undefined FUN_1458cf184(void)

undefined8 FUN_1458cf184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28,&local_40);
  *puVar1 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e62530;
  puVar1[3] = param_3;
  puVar1[4] = FUN_14686f04a;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cf234 FUN_1458cf234 body=75 status=ok
// SIG undefined FUN_1458cf234(void)

void FUN_1458cf234(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458cf280 FUN_1458cf280 body=113 status=ok
// SIG undefined FUN_1458cf280(void)

undefined8 * FUN_1458cf280(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1458cf2f2 FUN_1458cf2f2 body=132 status=ok
// SIG undefined FUN_1458cf2f2(void)

void FUN_1458cf2f2(longlong param_1,int param_2)

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



// FUNCTION 1458cf376 FUN_1458cf376 body=683 status=ok
// SIG undefined FUN_1458cf376(void)

LPCRITICAL_SECTION FUN_1458cf376(LPCRITICAL_SECTION param_1,PRTL_CRITICAL_SECTION_DEBUG param_2)

{
  HANDLE *ppvVar1;
  undefined8 *puVar2;
  int iVar3;
  HANDLE pvVar4;
  void *_Src;
  uint uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = param_2;
  param_1[3].LockCount = 0;
  param_1[3].RecursionCount = 0;
  *(undefined4 *)&param_1[3].OwningThread = 0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  param_1[1].LockSemaphore = (HANDLE)0x0;
  param_1[1].SpinCount = 0;
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[2].LockCount = 0;
  param_1[2].RecursionCount = 0;
  param_1[2].OwningThread = (HANDLE)0x0;
  param_1[2].LockSemaphore = (HANDLE)0x0;
  *(undefined8 *)((longlong)&param_1[3].OwningThread + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[3].LockSemaphore + 4) = 0;
  param_1[4].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[4].LockCount = 0;
  param_1[5].LockCount = 0;
  param_1[5].RecursionCount = 0;
  *(undefined4 *)&param_1[5].OwningThread = 0;
  param_1[4].OwningThread = (HANDLE)0x0;
  param_1[4].LockSemaphore = (HANDLE)0x0;
  *(undefined8 *)((longlong)&param_1[5].OwningThread + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[5].LockSemaphore + 4) = 0;
  param_1[6].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[6].LockCount = 0;
  uVar6 = FUN_140d5712e();
  FUN_1406db95e(uVar6,&local_58);
  FUN_1410e5bda(&param_1[1].LockCount,&local_58);
  FUN_1447a1747(local_58,local_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)&param_1[1].OwningThread != 0) {
    ppvVar1 = &param_1[1].LockSemaphore;
    plVar9 = *(longlong **)&param_1[1].LockCount;
    plVar13 = plVar9 + (longlong)*(int *)&param_1[1].OwningThread * 2;
    do {
      FUN_1412ab686(&local_58);
      iVar3 = (int)plVar9[1];
      if (iVar3 == (int)local_50) {
        if (1 < iVar3) {
          lVar10 = 0;
          while( true ) {
            uVar7 = *(ushort *)(*plVar9 + lVar10);
            uVar8 = (ulonglong)uVar7;
            uVar11 = *(ushort *)(local_58 + lVar10);
            if (uVar7 != uVar11) break;
            if (uVar7 == 0) goto LAB_1458cf4f7;
LAB_1458cf4c3:
            lVar10 = lVar10 + 2;
          }
          if ((uVar11 | uVar7) < 0x80) {
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            uVar12 = (ulonglong)uVar11;
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_1458cf4c3;
          }
          if (uVar7 != uVar11) goto LAB_1458cf5ac;
        }
      }
      else if ((int)local_50 + iVar3 != 1) {
LAB_1458cf5ac:
        iVar3 = (int)param_1[1].SpinCount;
        uVar5 = iVar3 + 1;
        *(uint *)&param_1[1].SpinCount = uVar5;
        if (*(uint *)((longlong)&param_1[1].SpinCount + 4) < uVar5) {
          FUN_1447a1bd6(ppvVar1);
        }
        pvVar4 = *ppvVar1;
        lVar10 = (longlong)iVar3 * 0x10;
        *(undefined8 *)((longlong)pvVar4 + lVar10) = 0;
        *(longlong *)((longlong)pvVar4 + lVar10) = local_58;
        local_58 = 0;
        *(int *)((longlong)pvVar4 + lVar10 + 8) = (int)local_50;
        *(undefined4 *)((longlong)pvVar4 + lVar10 + 0xc) = local_50._4_4_;
        local_50 = 0;
      }
LAB_1458cf4f7:
      iVar3 = (int)param_1[1].SpinCount;
      *(uint *)&param_1[1].SpinCount = iVar3 + 1U;
      if (*(uint *)((longlong)&param_1[1].SpinCount + 4) < iVar3 + 1U) {
        FUN_1447a1bd6(ppvVar1,iVar3);
      }
      pvVar4 = *ppvVar1;
      lVar10 = (longlong)iVar3 * 0x10;
      puVar2 = (undefined8 *)((longlong)pvVar4 + lVar10);
      *(undefined8 *)((longlong)pvVar4 + lVar10) = 0;
      iVar3 = (int)plVar9[1];
      _Src = (void *)*plVar9;
      *(int *)((longlong)pvVar4 + lVar10 + 8) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar2,iVar3,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar3 * 2);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458cf622 FUN_1458cf622 body=52 status=ok
// SIG undefined FUN_1458cf622(void)

void FUN_1458cf622(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = param_1;
  }
  FUN_1458cf656(lVar1,*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458cf656 FUN_1458cf656 body=40 status=ok
// SIG undefined FUN_1458cf656(void)

void FUN_1458cf656(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14152e1c8(param_1);
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1458cf6a6 FUN_1458cf6a6 body=93 status=ok
// SIG undefined FUN_1458cf6a6(void)

void FUN_1458cf6a6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,2);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,2);
  }
  return;
}



// FUNCTION 1458cf710 FUN_1458cf710 body=40 status=ok
// SIG undefined FUN_1458cf710(void)

undefined8 FUN_1458cf710(undefined8 param_1,int param_2)

{
  FUN_1458cf738();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458cf738 FUN_1458cf738 body=85 status=ok
// SIG undefined FUN_1458cf738(void)

void FUN_1458cf738(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1b4dc0;
  FUN_1412fb0ed(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1458cf78e FUN_1458cf78e body=26 status=ok
// SIG undefined FUN_1458cf78e(void)

void FUN_1458cf78e(undefined8 param_1)

{
  FUN_1458cf7a8();
  FUN_145be8fde(param_1);
  return;
}



// FUNCTION 1458cf7a8 FUN_1458cf7a8 body=26 status=ok
// SIG undefined FUN_1458cf7a8(void)

void FUN_1458cf7a8(undefined8 param_1)

{
  FUN_1400f7f98();
  FUN_1458cf7c2(param_1);
  return;
}



// FUNCTION 1458cf7c2 FUN_1458cf7c2 body=109 status=ok
// SIG undefined FUN_1458cf7c2(void)

void FUN_1458cf7c2(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x9e) & 0x10) == 0) {
    return;
  }
  if (*(longlong **)(param_1 + 0x8d8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x600))();
    lVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x8d8) + 0x2a8) + 0x88))
                      (*(longlong *)(param_1 + 0x8d8) + 0x2a8);
    if (lVar1 != 0) {
      FUN_143407d4a(lVar1,*(undefined8 *)(param_1 + 0x8d0),0);
    }
  }
  FUN_1402a37f2(param_1,0);
  return;
}



// FUNCTION 1458cf830 FUN_1458cf830 body=104 status=ok
// SIG undefined FUN_1458cf830(void)

void FUN_1458cf830(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1458cf898();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_1458cf849;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1458cf849:
  *(longlong **)(param_1 + 0x21f8) = plVar4;
  FUN_140655f5e(param_1,param_2);
  return;
}



// FUNCTION 1458cf898 FUN_1458cf898 body=57 status=ok
// SIG undefined FUN_1458cf898(void)

void FUN_1458cf898(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5c68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5c68 = FUN_140002ddd(FUN_1465c4fb0,uVar1,L"MissionUsableDef");
  }
  return;
}



// FUNCTION 1458cf8d2 FUN_1458cf8d2 body=25 status=ok
// SIG undefined FUN_1458cf8d2(void)

undefined8 FUN_1458cf8d2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1458cf8ec FUN_1458cf8ec body=132 status=ok
// SIG undefined FUN_1458cf8ec(void)

void FUN_1458cf8ec(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1410c9a0e(param_1,0);
  if ((((byte)param_2 & 0xfe) == 2) && (*(longlong *)(param_1 + 0x178) != 0)) {
    FUN_141269fce(param_1 + 0x178,1,*(undefined8 *)(param_1 + 0x38));
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_1458cf9d2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1458cf970(lVar1,*(undefined8 *)(param_1 + 0x38),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1458cf970 FUN_1458cf970 body=96 status=ok
// SIG undefined FUN_1458cf970(void)

void FUN_1458cf970(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cba3aa0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cf9d2 FUN_1458cf9d2 body=228 status=ok
// SIG undefined FUN_1458cf9d2(void)

longlong FUN_1458cf9d2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba3ab0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14651b24a;
    local_38 = &LAB_148bc1613;
    local_40 = FUN_1418c4c29;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxTrickScript_AITargetLock",&DAT_14cba3ab0,&DAT_148bc1612);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba3ab0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cfab8 FUN_1458cfab8 body=239 status=ok
// SIG undefined FUN_1458cfab8(void)

void FUN_1458cfab8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_140338614();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140338614();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar3 != plVar4) goto LAB_1458cfb1d;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1458cfb1d:
  local_48 = 0;
  uStack_40 = 0;
  cVar1 = FUN_14493c216(&local_48,0);
  if (cVar1 == '\0') {
    uStack_40 = 0;
  }
  *(undefined8 *)(param_1 + 0xc70) = local_48;
  *(undefined8 *)(param_1 + 0xc78) = uStack_40;
  if (plVar4 != (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0xd05) = 1;
    (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 0xb28);
  }
  FUN_1458cfba8(param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458cfba8 FUN_1458cfba8 body=85 status=ok
// SIG undefined FUN_1458cfba8(void)

void FUN_1458cfba8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123d8e(param_1 + 0x9c0,param_2,uVar1);
  uVar1 = FUN_1412c3498(param_3);
  FUN_141123ce0(param_1 + 0xa00,param_2,uVar1);
  return;
}



// FUNCTION 1458cfc08 FUN_1458cfc08 body=88 status=ok
// SIG undefined FUN_1458cfc08(void)

void FUN_1458cfc08(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1f0), lVar1 != 0)) {
      lVar2 = FUN_1403ca142();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        *(undefined1 *)(lVar1 + 0x568) = *(undefined1 *)(param_2 + 0x20);
      }
    }
  }
  return;
}


