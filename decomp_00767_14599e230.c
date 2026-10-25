// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14599e230 FUN_14599e230 body=49 status=ok
// SIG undefined FUN_14599e230(void)

uint FUN_14599e230(longlong param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x70);
    if (cVar1 == '\x03') {
      bVar3 = *(longlong *)(param_1 + 0x74) == 0;
LAB_14599e247:
      return (uint)!bVar3;
    }
    if (cVar1 == '\x02') {
      uVar2 = *(uint *)(param_1 + 0x7c);
    }
    else if (cVar1 == '\x01') {
      bVar3 = *(int *)(param_1 + 0x7c) == 0;
      goto LAB_14599e247;
    }
  }
  return uVar2;
}



// FUNCTION 14599e262 FUN_14599e262 body=155 status=ok
// SIG undefined FUN_14599e262(void)

undefined8 FUN_14599e262(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  uVar6 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = uVar6;
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_14141a0f6(puVar1 + 4,&local_40);
      *(undefined8 *)(param_2 + 0x10 + lVar7) = local_40;
      uVar6 = (ulonglong)(uint)puVar1[10];
      *(undefined4 *)(param_2 + 0x28 + lVar7) = puVar1[10];
      uVar3 = puVar1[7];
      uVar4 = puVar1[8];
      uVar5 = puVar1[9];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar7);
      *puVar2 = puVar1[6];
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar7 = lVar7 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)(uVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599e2fe FUN_14599e2fe body=132 status=ok
// SIG undefined FUN_14599e2fe(void)

void FUN_14599e2fe(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_18 = DAT_14c8462e8;
    local_28 = DAT_14c8462d8;
    uStack_20 = DAT_14c8462e0;
  }
  else {
    FUN_14141a100(*(longlong *)(param_1 + 0x1c8),&local_28);
  }
  *(undefined8 *)(param_3 + 4) = local_18;
  *param_3 = (undefined4)local_28;
  param_3[1] = local_28._4_4_;
  param_3[2] = (undefined4)uStack_20;
  param_3[3] = uStack_20._4_4_;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599e384 FUN_14599e384 body=40 status=ok
// SIG undefined FUN_14599e384(void)

undefined8 FUN_14599e384(undefined8 param_1,int param_2)

{
  FUN_14599e3ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14599e3ac FUN_14599e3ac body=87 status=ok
// SIG undefined FUN_14599e3ac(void)

void FUN_14599e3ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b719ea0;
  param_1[5] = &PTR_FUN_14b71a1a0;
  param_1[6] = &PTR_FUN_14b71a1d0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14042c3da(param_1);
  return;
}



// FUNCTION 14599e404 FUN_14599e404 body=180 status=ok
// SIG undefined FUN_14599e404(void)

bool FUN_14599e404(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599e4dc FUN_14599e4dc body=399 status=ok
// SIG undefined FUN_14599e4dc(void)

void FUN_14599e4dc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = *(longlong **)(param_1 + 0x428);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x940))(plVar2,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x1a00);
  if (lVar3 == 0) {
    uVar6 = 0xbf800000;
  }
  else {
    uVar6 = *(undefined4 *)(lVar3 + 0x1118);
    lVar3 = FUN_140963a30(lVar3 + 0x1098);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(*(longlong *)(param_1 + 0x4e8) + 0x50))(param_1 + 0x4e8);
      local_68 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_60 = 0x8000000000;
      local_58 = 0xffffffff;
      uVar5 = FUN_140963a30(*(longlong *)(param_1 + 0x1a00) + 0x1098);
      local_a0 = 1;
      local_a8 = &local_88;
      FUN_14096dfee(uVar4,&local_98,uVar5,1);
      uStack_40 = uStack_40 & 0xffffffff00000000;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_88);
      if (local_98 != (longlong *)0x0) {
        uVar6 = (**(code **)(*local_98 + 0x28))();
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_90 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_90 + 0x10))(local_90);
          }
        }
      }
    }
    FUN_14599e66c(param_1,uVar6);
  }
  if (*(longlong *)(param_1 + 0x1700) != 0) {
    FUN_14599e8da(*(longlong *)(param_1 + 0x1700),uVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599e66c FUN_14599e66c body=465 status=ok
// SIG undefined FUN_14599e66c(void)

void FUN_14599e66c(longlong param_1,float param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14599e860();
  if (param_2 <= 0.0) {
    if (*(char *)(param_1 + 0x178) == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
    }
  }
  else {
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar3;
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      puVar3 = local_b0;
      local_a8 = 3;
      *local_b0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_b0[2] = lVar4;
      *local_b0 = &PTR_FUN_14b95e910;
      local_b0[3] = 0;
      FUN_14485c47a(local_b0 + 3,param_1);
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[4] = &LAB_145ada57a;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b0);
      local_58 = 1;
      local_b8 = local_a0;
      local_a0[0] = 0;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar1,param_1 + 0x1a10,&local_98,param_2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_b0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599e860 FUN_14599e860 body=121 status=ok
// SIG undefined FUN_14599e860(void)

void FUN_14599e860(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 == 0) {
    if (*(longlong *)(param_1 + 0x1a10) == 0) {
      return;
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    lVar2 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0x1a10));
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0x1a10));
    }
  }
  *(undefined8 *)(param_1 + 0x1a10) = 0;
  return;
}



// FUNCTION 14599e8da FUN_14599e8da body=592 status=ok
// SIG undefined FUN_14599e8da(void)

void FUN_14599e8da(longlong *param_1,float param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x618))();
  (**(code **)(*param_1 + 0x610))(param_1);
  dVar3 = DAT_14c8464f0;
  dVar2 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dVar4 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_78 = DAT_14c8464f0;
  local_88 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_80 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  if (param_1[0x332] == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1[0x332] + 0x1a00);
  }
  plVar1 = (longlong *)param_1[0x23];
  if (plVar1 == (longlong *)0x0) {
    bVar7 = lVar6 != 0;
  }
  else {
    lVar5 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    bVar7 = lVar6 != 0;
    if ((bVar7) && (lVar5 != 0)) {
      FUN_14141a1f8(lVar5,&local_a0);
      dVar2 = (double)*(float *)(lVar6 + 0x111c);
      dVar3 = local_90 * dVar2;
      dVar4 = local_98 * dVar2;
      dVar2 = dVar2 * local_a0;
      FUN_14141a270(lVar5,&local_a0);
      local_88 = (double)*(float *)(lVar6 + 0x111c);
      local_78 = local_90 * local_88;
      uStack_80 = local_98 * local_88;
      local_88 = local_88 * local_a0;
      bVar7 = true;
    }
  }
  FUN_140acf690(param_1);
  if ((bVar7) && (plVar1 = (longlong *)param_1[0x23], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x878))(plVar1,0);
    local_b8 = dVar2;
    local_b0 = dVar4;
    local_a8 = dVar3;
    (**(code **)(*(longlong *)param_1[0x23] + 0x700))((longlong *)param_1[0x23],&local_b8,0);
    (**(code **)(*(longlong *)param_1[0x23] + 0x850))((longlong *)param_1[0x23],&local_88,0);
    fVar8 = (5.914514 / param_2) * *(float *)(lVar6 + 0x1120);
    (**(code **)(*(longlong *)param_1[0x23] + 0x898))((longlong *)param_1[0x23],fVar8);
    (**(code **)(*(longlong *)param_1[0x23] + 0x8a8))((longlong *)param_1[0x23],fVar8);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599eb64 FUN_14599eb64 body=40 status=ok
// SIG undefined FUN_14599eb64(void)

void FUN_14599eb64(longlong param_1)

{
  FUN_1406f39a0(param_1,0,1);
  *(undefined2 *)(param_1 + 0x19a3) = 0;
  FUN_14599eb8c(param_1);
  return;
}



// FUNCTION 14599eb8c FUN_14599eb8c body=218 status=ok
// SIG undefined FUN_14599eb8c(void)

void FUN_14599eb8c(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  if (param_1[0x130] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1[0x130] + 0x18);
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x5b8))(param_1);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
    if (((cVar1 != '\0') && (param_1[0x130] != 0)) && ((char)param_1[0x137] == '\0')) {
      FUN_148acca94(param_1,*(undefined4 *)((longlong)param_1 + 0x3a4),(int)param_1[0x75],
                    *(undefined4 *)((longlong)param_1 + 0x3ac),
                    *(undefined4 *)((longlong)param_1 + 0x3bc),uVar3,
                    *(undefined4 *)((longlong)param_1 + 0x3b4),(int)param_1[0x76],(int)param_1[0x77]
                   );
    }
  }
  return;
}



// FUNCTION 14599ec66 FUN_14599ec66 body=182 status=ok
// SIG undefined FUN_14599ec66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14599ec66(void)

{
  longlong lVar1;
  undefined1 auStack_478 [40];
  undefined1 local_450 [1056];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_478;
  _DAT_14cb016d0 = 0xffffffff;
  _DAT_14cb016d4 = 0x105;
  DAT_14cb016d6 = 0;
  DAT_14cb016c8 = &PTR_FUN_14aa69dd0;
  DAT_14cb016d8 = 0;
  _DAT_14cb016e0 = 0;
  lVar1 = FUN_14599edca(&DAT_14cb016d8);
  FUN_145c3271e(local_450);
  FUN_14599ee3e(lVar1,local_450);
  FUN_14599ed1e(local_450);
  *(undefined8 *)(lVar1 + 0x420) = 0;
  *(undefined8 *)(lVar1 + 0x428) = 0;
  if ((local_30 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599ed1e FUN_14599ed1e body=172 status=ok
// SIG undefined FUN_14599ed1e(void)

void FUN_14599ed1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined **)(param_1 + 0x390 + lVar1) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x400 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x390 + lVar1) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x398 + lVar1);
    lVar1 = lVar1 + -0x80;
  } while (lVar1 != -0x200);
  lVar1 = 0;
  do {
    *(undefined **)(param_1 + 0x188 + lVar1) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x1f8 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x188 + lVar1) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 400 + lVar1);
    lVar1 = lVar1 + -0x80;
  } while (lVar1 != -0x200);
  return;
}



// FUNCTION 14599edca FUN_14599edca body=62 status=ok
// SIG undefined FUN_14599edca(void)

longlong FUN_14599edca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14599ef64(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x440 + *param_1;
  FUN_14599ee08(lVar2);
  return lVar2;
}



// FUNCTION 14599ee08 FUN_14599ee08 body=54 status=ok
// SIG undefined FUN_14599ee08(void)

void FUN_14599ee08(longlong param_1)

{
  FUN_145c3271e();
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x430) = DAT_14c967818;
  *(undefined8 *)(param_1 + 0x438) = 0;
  return;
}



// FUNCTION 14599ee3e FUN_14599ee3e body=102 status=ok
// SIG undefined FUN_14599ee3e(void)

undefined1 * FUN_14599ee3e(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  FUN_14599eea4(param_1 + 8,param_2 + 8);
  FUN_14599eea4(param_1 + 0x210,param_2 + 0x210);
  lVar1 = *(longlong *)(param_2 + 0x418);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x418);
    }
  }
  *(longlong *)(param_1 + 0x418) = lVar1;
  return param_1;
}



// FUNCTION 14599eea4 FUN_14599eea4 body=98 status=ok
// SIG undefined FUN_14599eea4(void)

longlong FUN_14599eea4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_14599ef06(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x80;
  } while (lVar1 != 0x200);
  lVar1 = *(longlong *)(param_2 + 0x200);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x200);
    }
  }
  *(longlong *)(param_1 + 0x200) = lVar1;
  return param_1;
}



// FUNCTION 14599ef06 FUN_14599ef06 body=93 status=ok
// SIG undefined FUN_14599ef06(void)

longlong FUN_14599ef06(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0x6d) = *(undefined1 *)(param_2 + 0x6d);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  return param_1;
}



// FUNCTION 14599ef64 FUN_14599ef64 body=146 status=ok
// SIG undefined FUN_14599ef64(void)

void FUN_14599ef64(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x440,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x440)) {
      uVar5 = uVar4 / 0x440 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x440,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14599effe FUN_14599effe body=129 status=ok
// SIG undefined FUN_14599effe(void)

undefined8 * FUN_14599effe(undefined8 *param_1)

{
  FUN_140c8816c();
  *param_1 = &PTR_FUN_14b843cd0;
  param_1[6] = &PTR_FUN_14b843f90;
  param_1[7] = &PTR_FUN_14b844020;
  param_1[9] = 0;
  FUN_14485c47a(param_1 + 9,0);
  param_1[10] = 0;
  FUN_14485c47a(param_1 + 10,0);
  param_1[0x14] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x97) = 0;
  return param_1;
}



// FUNCTION 14599f080 FUN_14599f080 body=316 status=ok
// SIG undefined FUN_14599f080(void)

undefined4 * FUN_14599f080(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint uVar1;
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
  FUN_14599f26e(param_1,local_48);
  lVar8 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_140665542(local_40 + 2,lVar8);
  *(undefined8 *)(local_40 + 6) = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(local_40 + 0xc) = *(undefined8 *)(lVar8 + 0x28);
  uVar5 = *(uint *)(lVar8 + 0x1c);
  uVar4 = *(uint *)(lVar8 + 0x20);
  uVar1 = *(uint *)(lVar8 + 0x24);
  local_40[8] = *(uint *)(lVar8 + 0x18);
  local_40[9] = uVar5;
  local_40[10] = uVar4;
  local_40[0xb] = uVar1;
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_14599f1be(param_1,uVar5,local_40,&local_4c);
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
      local_40[0xf] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0xe] =
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
      FUN_14599f354(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599f1be FUN_14599f1be body=176 status=ok
// SIG undefined FUN_14599f1be(void)

undefined8 FUN_14599f1be(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          piVar1[2] = 0;
          piVar1[3] = 0;
          piVar1[4] = -1;
          piVar1[5] = -1;
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1497d72b4(iVar2,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xe];
      } while (iVar15 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14599f26e FUN_14599f26e body=230 status=ok
// SIG undefined FUN_14599f26e(void)

int * FUN_14599f26e(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14599f354 FUN_14599f354 body=431 status=ok
// SIG undefined FUN_14599f354(void)

void FUN_14599f354(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 14599f510 FUN_14599f510 body=112 status=ok
// SIG undefined FUN_14599f510(void)

undefined8 * FUN_14599f510(undefined8 *param_1)

{
  FUN_14599f580();
  *param_1 = &PTR_FUN_14b1354a0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1447715ec(param_1 + 5,&DAT_14cb786b0);
  FUN_1447715ec(param_1 + 10,&DAT_14cb785d0);
  param_1[0x10] = DAT_14cb785c8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x41980000;
  *(undefined1 *)((longlong)param_1 + 0xe9) = 1;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return param_1;
}



// FUNCTION 14599f580 FUN_14599f580 body=385 status=ok
// SIG undefined FUN_14599f580(void)

undefined8 * FUN_14599f580(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 local_5c [4];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140ecae36();
  *param_1 = &PTR_FUN_14b1e8960;
  puVar1 = param_1 + 0x12;
  local_71 = 0;
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,DAT_14cb8dbd8);
  local_70 = DAT_14cb8dbd0;
  FUN_1448075d0(local_58,&local_70);
  local_70 = local_58;
  local_68 = &local_71;
  FUN_140ecaa46(puVar1,local_5c,&local_70,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_71 = 0;
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,DAT_14cb8dbf0);
  local_70 = DAT_14cb8dbe8;
  FUN_1448075d0(local_58,&local_70);
  local_70 = local_58;
  local_68 = &local_71;
  FUN_140ecaa46(puVar1,local_5c,&local_70,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_71 = 0;
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,DAT_14cb8dc08);
  local_70 = DAT_14cb8dc00;
  FUN_1448075d0(local_58,&local_70);
  local_70 = local_58;
  local_68 = &local_71;
  FUN_140ecaa46(puVar1,local_5c,&local_70,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined4 *)(param_1 + 0x1e) = 2;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599f702 FUN_14599f702 body=335 status=ok
// SIG undefined FUN_14599f702(void)

longlong FUN_14599f702(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar6 + 8);
    lVar3 = FUN_144a83f76();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar7 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar7) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar7 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
    }
    else {
      bVar7 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    lVar5 = 0;
    if (bVar7) {
      lVar5 = lVar6;
    }
    lVar6 = *(longlong *)(param_1 + 0x18);
  }
  if (*(uint *)(lVar6 + 0x30) < 2) {
    (**(code **)(*param_2 + 0x118))(param_2,*(undefined8 *)(param_3 + *(int *)(lVar5 + 0x44)));
  }
  else {
    plVar4 = (longlong *)FUN_1489e83fc(param_1,param_3);
    *plVar4 = param_3;
    plVar4[1] = *(longlong *)(param_1 + 0x18);
    cVar2 = (**(code **)(*param_2 + 0x158))
                      (param_2,plVar4,FUN_143ea0583,FUN_143ea06e3,&LAB_143e9109a,FUN_143ea0461);
    if (cVar2 == '\0') {
      (**(code **)(*param_2 + 0x160))(param_2,(longlong)*(int *)(lVar5 + 0x30));
      if (0 < *(int *)(lVar5 + 0x30)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x44);
        lVar6 = 0;
        do {
          (**(code **)(*param_2 + 0x118))(param_2,*(undefined8 *)(iVar1 + param_3 + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(lVar5 + 0x30));
      }
      (**(code **)(*param_2 + 0x168))(param_2);
    }
  }
  return param_3;
}



// FUNCTION 14599f860 FUN_14599f860 body=45 status=ok
// SIG undefined FUN_14599f860(void)

undefined8 FUN_14599f860(undefined8 param_1,int param_2)

{
  FUN_14599f88e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14599f88e FUN_14599f88e body=90 status=ok
// SIG undefined FUN_14599f88e(void)

void FUN_14599f88e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b182370;
  FUN_14599f8e8(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 14599f8e8 FUN_14599f8e8 body=47 status=ok
// SIG undefined FUN_14599f8e8(void)

void FUN_14599f8e8(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14599f918 FUN_14599f918 body=156 status=ok
// SIG undefined FUN_14599f918(void)

void FUN_14599f918(undefined8 param_1,longlong param_2)

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
  FUN_14599f9b6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599f9b6 FUN_14599f9b6 body=39 status=ok
// SIG undefined FUN_14599f9b6(void)

void FUN_14599f9b6(longlong param_1)

{
  if ((((*(byte *)(param_1 + 0x348) & 2) == 0) && ((*(byte *)(param_1 + 0x65) & 2) == 0)) &&
     ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    FUN_145779a26(param_1 + 0xfe0,0);
    return;
  }
  return;
}



// FUNCTION 14599f9de FUN_14599f9de body=41 status=ok
// SIG undefined FUN_14599f9de(void)

void FUN_14599f9de(longlong param_1)

{
  FUN_14599fa08();
  if ((*(byte *)(param_1 + 0x65) & 0x18) != 0x10) {
    return;
  }
  FUN_145e164e0(param_1);
  return;
}



// FUNCTION 14599fa08 FUN_14599fa08 body=8 status=ok
// SIG undefined FUN_14599fa08(void)

void FUN_14599fa08(longlong param_1)

{
  *(byte *)(param_1 + 0x398) = *(byte *)(param_1 + 0x398) ^ 2;
  return;
}



// FUNCTION 14599fa10 FUN_14599fa10 body=244 status=ok
// SIG undefined FUN_14599fa10(void)

void FUN_14599fa10(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cbcdb88 == param_2) {
    uVar3 = FUN_14599fb58();
    FUN_140005f6c(param_1 + 0x78,uVar3,0,0);
    FUN_14599fbe6(param_1 + 0x78,&local_30);
  }
  else {
    if (DAT_14cbcdb90 != param_2) {
      if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        FUN_14599fc3a(param_1,param_2,param_3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    uVar3 = FUN_14599fb1e();
    FUN_140005f6c(param_1 + 0x78,uVar3,0,0);
    FUN_14599fb92(param_1 + 0x78,&local_30);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  (**(code **)(*local_30 + 8))(local_30);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14599fb1e FUN_14599fb1e body=57 status=ok
// SIG undefined FUN_14599fb1e(void)

void FUN_14599fb1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf720 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf720 = FUN_140002ddd(FUN_146612832,uVar1,L"GbxPickupObjectiveSpawnStrategy_IODrop");
  }
  return;
}



// FUNCTION 14599fb58 FUN_14599fb58 body=57 status=ok
// SIG undefined FUN_14599fb58(void)

void FUN_14599fb58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf738 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf738 =
         FUN_140002ddd(FUN_146612892,uVar1,L"GbxPickupObjectiveSpawnStrategy_EnemyDropOnDeath");
  }
  return;
}



// FUNCTION 14599fb92 FUN_14599fb92 body=83 status=ok
// SIG undefined FUN_14599fb92(void)

longlong * FUN_14599fb92(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14599fb1e();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14599fbe6 FUN_14599fbe6 body=83 status=ok
// SIG undefined FUN_14599fbe6(void)

longlong * FUN_14599fbe6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14599fb58();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14599fc3a FUN_14599fc3a body=389 status=ok
// SIG undefined FUN_14599fc3a(void)

void FUN_14599fc3a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    local_50 = DAT_14cb87220;
    local_58 = DAT_14cb87218;
    FUN_1448075d0(&local_48);
    puVar4 = (undefined8 *)FUN_144a06846(param_3,&local_48);
    if ((byte *)*puVar4 == (byte *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = (*(byte *)*puVar4 & 3) != 0;
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (bVar6) {
      uVar5 = FUN_14599fdc0();
      FUN_140005f6c(param_1 + 0x78,uVar5,0,0);
      FUN_14599fdfa(param_1 + 0x78,&local_48);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      uVar5 = (**(code **)(*local_48 + 8))(local_48);
      FUN_1446e7478(param_3,local_48,uVar5,0);
      local_50 = DAT_14cb871f0;
      local_58 = DAT_14cb871e8;
      FUN_1448075d0(&local_48);
      puVar4 = (undefined8 *)FUN_144a06846(param_3,&local_48);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (((byte *)*puVar4 != (byte *)0x0) && ((*(byte *)*puVar4 & 3) != 0)) {
        uVar3 = FUN_1410c4486(puVar4,0);
        *(undefined1 *)(local_48 + 1) = uVar3;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599fdc0 FUN_14599fdc0 body=57 status=ok
// SIG undefined FUN_14599fdc0(void)

void FUN_14599fdc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6de18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6de18 = FUN_140002ddd(FUN_1465389d4,uVar1,L"GbxPickupObjectiveSpawnStrategy_Placed");
  }
  return;
}



// FUNCTION 14599fdfa FUN_14599fdfa body=83 status=ok
// SIG undefined FUN_14599fdfa(void)

longlong * FUN_14599fdfa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14599fdc0();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14599fe4e FUN_14599fe4e body=398 status=ok
// SIG undefined FUN_14599fe4e(void)

void FUN_14599fe4e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1457c7f9c();
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_70,L"MaterialAsset",1);
  uVar1 = FUN_14141a2e4();
  FUN_14141a2e4();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  local_58 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 1;
  FUN_1446f470e(&local_70,L"MaterialParamsAsset",1);
  uVar1 = FUN_14141a2e4();
  FUN_14141a2e4();
  uVar1 = FUN_140f1fabf(uVar1,local_70);
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"ManufacturerMod",1);
  uVar1 = FUN_14141a2e4();
  FUN_14141a2e4();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  FUN_1446f470e(&local_68,L"ManufacturerHomingMod",1);
  uVar1 = FUN_14141a2e4();
  FUN_14141a2e4();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_68);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14599ffde FUN_14599ffde body=188 status=ok
// SIG undefined FUN_14599ffde(void)

double * FUN_14599ffde(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(*(longlong *)(param_1 + 0x208) + 0x39) == DAT_14c96b1e1) {
    dVar1 = 0.0;
    dVar2 = 0.0;
  }
  else {
    FUN_1414a336c(param_1,&local_38);
    FUN_14141a3ca(param_1,&local_48);
    dVar2 = (double)((float)local_40 + local_34 + local_2c);
    dVar1 = (double)((float)local_48 + local_38 + local_30);
  }
  *param_2 = dVar1;
  param_2[1] = dVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a009c FUN_1459a009c body=40 status=ok
// SIG undefined FUN_1459a009c(void)

undefined8 FUN_1459a009c(undefined8 param_1,int param_2)

{
  FUN_1459a00c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a00c4 FUN_1459a00c4 body=90 status=ok
// SIG undefined FUN_1459a00c4(void)

void FUN_1459a00c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a807060;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a011e(param_1 + 0xb);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459a011e FUN_1459a011e body=53 status=ok
// SIG undefined FUN_1459a011e(void)

void FUN_1459a011e(longlong *param_1)

{
  FUN_1459a0154();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459a0154 FUN_1459a0154 body=346 status=ok
// SIG undefined FUN_1459a0154(void)

void FUN_1459a0154(longlong *param_1)

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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459a02b0 FUN_1459a02b0 body=107 status=ok
// SIG undefined FUN_1459a02b0(void)

void FUN_1459a02b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_141348dd0();
  lVar2 = param_1[0x2d];
  if (lVar2 != 0) {
    lVar1 = FUN_144a75eb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_1459a02f3;
    }
  }
  lVar2 = 0;
LAB_1459a02f3:
  param_1[0x72] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x0001459a0306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x678))(param_1);
  return;
}



// FUNCTION 1459a032c FUN_1459a032c body=45 status=ok
// SIG undefined FUN_1459a032c(void)

undefined8 FUN_1459a032c(undefined8 param_1,int param_2)

{
  FUN_1459a035a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1459a035a FUN_1459a035a body=59 status=ok
// SIG undefined FUN_1459a035a(void)

void FUN_1459a035a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5f8ca0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1459a0396 FUN_1459a0396 body=40 status=ok
// SIG undefined FUN_1459a0396(void)

undefined8 FUN_1459a0396(undefined8 param_1,int param_2)

{
  FUN_1459a03be();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a03be FUN_1459a03be body=73 status=ok
// SIG undefined FUN_1459a03be(void)

void FUN_1459a03be(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd33a60;
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459a0408 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(void)

{
  FUN_144760e82();
  return;
}



// FUNCTION 1459a040e FUN_1459a040e body=242 status=ok
// SIG undefined FUN_1459a040e(void)

int FUN_1459a040e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50 [2];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined1 *)(param_2 + 5);
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_140056680(local_50,puVar5);
  local_58 = uVar1;
  (**(code **)(*param_1 + 0x48))(param_1,&local_40,local_50,param_2 + 3);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_140e92164();
  puVar5 = local_40;
  if (local_38 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  cVar2 = (**(code **)(*plVar4 + 0x78))(plVar4,puVar5);
  if (cVar2 == '\0') {
    iVar6 = 5;
  }
  else {
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    bVar3 = FUN_14141ad6e(param_3,puVar5);
    iVar6 = (uint)(bVar3 ^ 1) + (uint)(bVar3 ^ 1) * 8;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 1459a0502 FUN_1459a0502 body=103 status=ok
// SIG undefined FUN_1459a0502(void)

ulonglong FUN_1459a0502(longlong param_1)

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
LAB_1459a054c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1459a054c;
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



// FUNCTION 1459a056a FUN_1459a056a body=202 status=ok
// SIG undefined FUN_1459a056a(void)

void FUN_1459a056a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = FUN_1447210f0(param_2);
    lVar2 = FUN_14479d2ce(param_1 + 8);
    if (lVar1 == lVar2) {
      lVar1 = FUN_1401b2ade(param_2);
      if (lVar1 != 0) {
        lVar2 = FUN_144a5dd5e();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          FUN_1459a0636(param_1,*(undefined8 *)(lVar1 + 0xf40));
          local_30 = 0;
          FUN_14485c47a(&local_30,*(undefined8 *)(lVar1 + 0xf40));
          local_28 = &local_30;
          FUN_14141ae68(param_1 + 0x20);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a0636 FUN_1459a0636 body=78 status=ok
// SIG undefined FUN_1459a0636(void)

void FUN_1459a0636(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_140457ffc(param_2 + 0x8868,param_1);
  FUN_140457ffc(param_2 + 0x8890,param_1);
  FUN_140457ffc(param_2 + 35000,param_1);
  return;
}



// FUNCTION 1459a0684 FUN_1459a0684 body=315 status=ok
// SIG undefined FUN_1459a0684(void)

void FUN_1459a0684(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar2 = FUN_1447210f0(param_2);
    lVar3 = FUN_14479d2ce(param_1 + 8);
    if (lVar2 == lVar3) {
      lVar2 = FUN_1401b2ade(param_2);
      if (lVar2 != 0) {
        lVar3 = FUN_144a5dd5e();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_38[0] = 0;
          FUN_14485c47a(local_38,*(undefined8 *)(lVar2 + 0xf40));
          iVar1 = *(int *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
            FUN_145cb4378(param_1 + 0x20,iVar1);
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = local_38[0];
          FUN_145cb43fe(param_1,*(undefined8 *)(lVar2 + 0xf40));
          local_48 = FUN_145cb4248;
          local_40 = 0;
          FUN_1461a7876(local_38,param_1);
          FUN_141230466(lVar2 + 0x9c0,&local_48,local_38);
          FUN_1449db362(local_38);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a07c0 FUN_1459a07c0 body=560 status=ok
// SIG undefined FUN_1459a07c0(void)

void FUN_1459a07c0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *param_3;
  plVar3 = (longlong *)param_3[1];
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x318) = lVar5;
    plVar7 = *(longlong **)(param_1 + 800);
    if (plVar7 == (longlong *)0x0) goto LAB_1459a083c;
    *(undefined8 *)(param_1 + 800) = 0;
LAB_1459a0955:
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (plVar3 != (longlong *)0x0) goto LAB_1459a082d;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x318) = lVar5;
    plVar7 = *(longlong **)(param_1 + 800);
    if (plVar3 == plVar7) {
      LOCK();
      plVar7 = plVar3 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      *(longlong **)(param_1 + 800) = plVar3;
      if (plVar7 != (longlong *)0x0) goto LAB_1459a0955;
    }
LAB_1459a082d:
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  lVar5 = *(longlong *)(param_1 + 0x318);
LAB_1459a083c:
  if (lVar5 != 0) {
    FUN_1459a0a08(param_1 + 0x2e8,lVar5 + 0x4d0);
    *(uint *)(param_1 + 0x32c) = -(uint)(*(int *)(*(longlong *)(param_1 + 0x318) + 0x508) < 1);
    FUN_144a84024(param_1 + 0x308,*(undefined4 *)(param_1 + 0x2f0),1);
    if (0 < *(int *)(param_1 + 0x310)) {
      lVar5 = 0x1a;
      lVar6 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x308) + lVar6 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x2e8) + lVar5 * 4);
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x1c;
      } while (lVar6 < *(int *)(param_1 + 0x310));
    }
  }
  *(undefined4 *)(param_1 + 0x328) = 0;
  local_48 = *param_3;
  local_40 = param_3[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_14141b0b0(param_1,param_2,&local_48);
  puVar4 = (undefined8 *)param_3[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459a0a08 FUN_1459a0a08 body=79 status=ok
// SIG undefined FUN_1459a0a08(void)

undefined8 * FUN_1459a0a08(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14141afca(param_1,iVar1);
      FUN_14115008a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1459a0a58 FUN_1459a0a58 body=83 status=ok
// SIG undefined FUN_1459a0a58(void)

longlong * FUN_1459a0a58(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1459a0aac();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1459a0aac FUN_1459a0aac body=57 status=ok
// SIG undefined FUN_1459a0aac(void)

void FUN_1459a0aac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4c20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4c20 = FUN_140002ddd(FUN_1465c00b0,uVar1,L"InventoryAugmentBehaviorDef");
  }
  return;
}



// FUNCTION 1459a0ae6 FUN_1459a0ae6 body=179 status=ok
// SIG undefined FUN_1459a0ae6(void)

void FUN_1459a0ae6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) goto LAB_1459a0b16;
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_1459a0b42:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1459a0b16;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x10) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_1459a0b16;
      goto LAB_1459a0b42;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1459a0b16;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1459a0b16:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001459a0b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1459a0b9a FUN_1459a0b9a body=161 status=ok
// SIG undefined FUN_1459a0b9a(void)

void FUN_1459a0b9a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  FUN_1459a0c3c(puVar2,param_1);
  uVar1 = DAT_14caa7e00;
  uVar3 = FUN_14001cc68(0x88,0x10);
  FUN_1459a0c3c(uVar3,param_1);
  local_30 = uVar3;
  FUN_145bdc0c8(param_1,&local_30,uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a0c3c FUN_1459a0c3c body=32 status=ok
// SIG undefined FUN_1459a0c3c(void)

undefined8 * FUN_1459a0c3c(undefined8 *param_1)

{
  FUN_1459a0c5c();
  *param_1 = &PTR_FUN_14a3e0320;
  return param_1;
}



// FUNCTION 1459a0c5c FUN_1459a0c5c body=147 status=ok
// SIG undefined FUN_1459a0c5c(void)

undefined8 * FUN_1459a0c5c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_LAB_149f9a4a0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1459a0cf0(param_1 + 1,0);
  *(undefined4 *)param_1[1] = 0;
  *param_1 = &PTR_FUN_149f99b50;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_1406089a0(param_1 + 0xf,*(undefined4 *)(param_1 + 2),1);
  return param_1;
}



// FUNCTION 1459a0cf0 FUN_1459a0cf0 body=132 status=ok
// SIG undefined FUN_1459a0cf0(void)

void FUN_1459a0cf0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1459a0d74 FUN_1459a0d74 body=1063 status=ok
// SIG undefined FUN_1459a0d74(void)

ulonglong FUN_1459a0d74(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  undefined7 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  byte local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_1459a0ec0;
  }
  uVar7 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      local_88 = *puVar11;
      uStack_80 = puVar11[1];
      local_78 = puVar11[2];
      local_60 = *(byte *)(puVar11 + 5);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar11 + 3);
      local_58 = *(byte *)(puVar11 + 6);
      FUN_1410d7556(param_1 + 0x18,&local_88);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38 + 0x28)])();
      FUN_1459a119c(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar6 = 0;
      if (0 < (int)uVar3) {
        uVar8 = (ulonglong)uVar3;
        uVar9 = uVar3;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = (uint)uVar8 + (int)uVar6;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
            uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
          }
          bVar4 = 1 < uVar9;
          uVar9 = (uint)uVar8;
        } while (bVar4);
      }
      if (((int)uVar6 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x28) <= param_2)) {
        FUN_1475db2b6(param_1 + 0xa0);
      }
      if ((local_58 & 1) != 0) {
        FUN_1459a1210(&local_88,&local_78);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
LAB_1459a0ebe:
      unaff_RBP = 0;
      goto LAB_1459a0ec0;
    }
    unaff_RBP = CONCAT71(uVar7,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38) & 1) == 0)
    goto LAB_1459a0ec0;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar12 = *(longlong *)(param_1 + 0xa0);
    uVar9 = 0;
    if (0 < (int)uVar3) {
      uVar9 = 0;
      uVar10 = uVar3;
      do {
        uVar1 = (uVar10 >> 1) + uVar9;
        if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x28) < param_2) {
          uVar9 = uVar1 + (uVar10 & 1);
        }
        bVar4 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar4);
    }
    if ((((int)uVar9 < (int)uVar3) && (*(int *)(lVar12 + (ulonglong)uVar9 * 0x28) <= param_2)) &&
       (lVar12 + (ulonglong)uVar9 * 0x28 != -8)) {
      FUN_1459a1210((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar6 = 0;
      if (0 < (int)uVar3) {
        uVar8 = (ulonglong)uVar3;
        uVar9 = uVar3;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = (uint)uVar8 + (int)uVar6;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
            uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
          }
          bVar4 = 1 < uVar9;
          uVar9 = (uint)uVar8;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar7,1);
      if (((int)uVar6 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x28) <= param_2)) {
        FUN_1475db2b6(param_1 + 0xa0);
      }
      goto LAB_1459a0ec0;
    }
    unaff_RBP = CONCAT71(uVar7,1);
    if (param_4 == '\0') {
      lVar12 = (longlong)param_2 * 0x38;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + lVar12);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar12);
      if ((bVar2 & 2) == 0) {
        local_88 = *puVar11;
        uStack_80 = puVar11[1];
        local_78 = puVar11[2];
        local_60 = *(byte *)(puVar11 + 5);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar11 + 3);
        local_58 = *(byte *)(puVar11 + 6);
        FUN_1410d7556(param_1 + 0x18,&local_88);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar12 + 0x28)])();
        FUN_1459a119c(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar6 = 0;
        if (0 < (int)uVar3) {
          uVar6 = 0;
          uVar8 = (ulonglong)uVar3;
          uVar9 = uVar3;
          do {
            uVar8 = uVar8 >> 1;
            uVar10 = (uint)uVar8 + (int)uVar6;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
              uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
            }
            bVar4 = 1 < uVar9;
            uVar9 = (uint)uVar8;
          } while (bVar4);
        }
        if (((int)uVar6 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x28) <= param_2)) {
          FUN_1475db2b6(param_1 + 0xa0);
        }
        if ((local_58 & 1) != 0) {
          FUN_1459a1210(&local_88,&local_78);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
        goto LAB_1459a0ebe;
      }
      if ((bVar2 & 1) == 0) goto LAB_1459a0ec0;
    }
    else {
      if (param_4 != '\x01') goto LAB_1459a0ec0;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      if ((bVar2 & 1) == 0) goto LAB_1459a0ec0;
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      *(byte *)(puVar11 + 6) = bVar2 | 2;
    }
  }
  FUN_1459a1210(puVar11,puVar11 + 2);
LAB_1459a0ec0:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1459a119c FUN_1459a119c body=116 status=ok
// SIG undefined FUN_1459a119c(void)

void FUN_1459a119c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1459a1210 FUN_1459a1210 body=183 status=ok
// SIG undefined FUN_1459a1210(void)

void FUN_1459a1210(undefined4 *param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_34 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_38);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 3) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    if (*(char *)(param_2 + 3) == '\x01') {
      *(float *)(lVar1 + (ulonglong)*(ushort *)(param_2 + 1)) = (float)*param_2;
    }
    else if (param_2[1] != 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a1302 FUN_1459a1302 body=342 status=ok
// SIG undefined FUN_1459a1302(void)

byte FUN_1459a1302(longlong *param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  byte unaff_SIL;
  longlong *plVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  lVar3 = DAT_14c9a1ab0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar4 = 0;
  if ((*param_1 != 0) && (uVar2 = *(uint *)(param_1 + 1), uVar2 - 1 < 0xfffffffe)) {
    if (DAT_14c9a1ab0 != 0) {
      if (*(int *)(DAT_14c9a1ab0 + 0x148) != *(int *)(DAT_14c9a1ab0 + 0x174)) {
        lVar6 = DAT_14c9a1ab0 + 0x178;
        if (*(longlong *)(DAT_14c9a1ab0 + 0x180) != 0) {
          lVar6 = *(longlong *)(DAT_14c9a1ab0 + 0x180);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(DAT_14c9a1ab0 + 0x188) - 1U & uVar2) * 4);
        if (iVar5 != -1) {
          do {
            lVar6 = *(longlong *)(DAT_14c9a1ab0 + 0x140) + (longlong)iVar5 * 0x10;
            if (*(uint *)(*(longlong *)(DAT_14c9a1ab0 + 0x140) + (longlong)iVar5 * 0x10) == uVar2) {
              unaff_SIL = 0;
              if (lVar6 != 0) {
                if ((ushort *)(lVar6 + 4) != (ushort *)0x0) {
                  uVar1 = *(ushort *)(lVar6 + 4);
                  if (((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) {
                    plVar7 = (longlong *)0x0;
                  }
                  else {
                    plVar7 = *(longlong **)
                              (*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8);
                  }
                  local_60 = *param_1;
                  FUN_1446dcdd4(local_50);
                  FUN_14141bbdc(local_50,&local_60);
                  if (local_58 < 1) {
                    unaff_SIL = 0;
                  }
                  else {
                    unaff_SIL = (**(code **)(*plVar7 + 0x2b0))(plVar7,local_50);
                  }
                  if (local_38 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
              goto LAB_1459a141e;
            }
            iVar5 = *(int *)(lVar6 + 8);
          } while (iVar5 != -1);
        }
      }
      unaff_SIL = 0;
    }
LAB_1459a141e:
    bVar4 = lVar3 != 0 & unaff_SIL;
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 1459a145a FUN_1459a145a body=294 status=ok
// SIG undefined FUN_1459a145a(void)

bool FUN_1459a145a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_58 [44];
  undefined4 local_2c [2];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_144a62e5c(local_2c,param_2,(int)param_1[0x59],*(undefined4 *)((longlong)param_1 + 0x2cc));
    if (local_24 != 0) {
      FUN_144a78877(local_2c[0],local_24);
    }
    iVar2 = FUN_144b0847a(param_1 + 0x4f);
    if (((iVar2 == -1) ||
        (lVar3 = (longlong)iVar2 * 0x20 + param_1[0x4f], plVar4 = (longlong *)(lVar3 + 0x10),
        plVar4 == (longlong *)0x0 || lVar3 == 0)) || (lVar3 = *plVar4, lVar3 == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (*(longlong *)(lVar3 + 0x58) == 0) {
        bVar5 = (bool)((*(byte *)(lVar3 + 0x2c) & 0x20) >> 5);
      }
    }
  }
  else {
    FUN_144a659ac(param_2,local_2c,0);
    if (local_24 != 0) {
      local_2c[0] = FUN_144a78877(local_2c[0],local_24);
    }
    iVar2 = FUN_144a840a2(param_1 + 0x39,local_2c[0],local_2c);
    bVar5 = iVar2 != -1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a1582 FUN_1459a1582 body=55 status=ok
// SIG undefined FUN_1459a1582(void)

void FUN_1459a1582(longlong *param_1)

{
  FUN_1459a15ba(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459a15ba FUN_1459a15ba body=376 status=ok
// SIG undefined FUN_1459a15ba(void)

void FUN_1459a15ba(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
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
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x20;
      FUN_1459a1734(*(undefined8 *)(lVar2 + 8 + lVar5),*(undefined4 *)(lVar2 + 0x10 + lVar5));
      if (*(longlong *)(lVar2 + 8 + lVar5) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1459a1734 FUN_1459a1734 body=1 status=ok
// SIG undefined FUN_1459a1734(void)

void FUN_1459a1734(void)

{
  return;
}



// FUNCTION 1459a1736 FUN_1459a1736 body=154 status=ok
// SIG undefined FUN_1459a1736(void)

void FUN_1459a1736(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14141bc0c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a17d2 FUN_1459a17d2 body=40 status=ok
// SIG undefined FUN_1459a17d2(void)

undefined8 FUN_1459a17d2(undefined8 param_1,int param_2)

{
  FUN_1459a17fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a17fa FUN_1459a17fa body=319 status=ok
// SIG undefined FUN_1459a17fa(void)

void FUN_1459a17fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3f1300;
  param_1[5] = &PTR_FUN_14a3f1d00;
  param_1[6] = &PTR_LAB_14a3f1d40;
  param_1[0x55] = &PTR_FUN_14a3f1d90;
  param_1[0x56] = &PTR_FUN_14a3f1e10;
  param_1[0x57] = &PTR_FUN_14a3f1e20;
  FUN_1408bc7be(param_1[0xdc],*(undefined4 *)(param_1 + 0xdd));
  if (param_1[0xdc] != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc7be(param_1[0xda],*(undefined4 *)(param_1 + 0xdb));
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc7be(param_1[0xd8],*(undefined4 *)(param_1 + 0xd9));
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc7be(param_1[0xd6],*(undefined4 *)(param_1 + 0xd7));
  if (param_1[0xd6] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a193a(param_1 + 0xce);
  FUN_1459a193a(param_1 + 200);
  FUN_1459a197a(param_1[0xc6],*(undefined4 *)(param_1 + 199));
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 1459a193a FUN_1459a193a body=64 status=ok
// SIG undefined FUN_1459a193a(void)

void FUN_1459a193a(longlong *param_1)

{
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



// FUNCTION 1459a197a FUN_1459a197a body=51 status=ok
// SIG undefined FUN_1459a197a(void)

void FUN_1459a197a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459a19b8 FUN_1459a19b8 body=198 status=ok
// SIG undefined FUN_1459a19b8(void)

undefined8 * FUN_1459a19b8(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1459a1a80();
  *param_1 = &PTR_FUN_14abf2b70;
  param_1[5] = &PTR_FUN_14abf2e90;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffff;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xfe;
  FUN_1400b22c2(&local_28,"BlackboardBase");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a1a80 FUN_1459a1a80 body=106 status=ok
// SIG undefined FUN_1459a1a80(void)

undefined8 * FUN_1459a1a80(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0xff;
  *param_1 = &PTR_FUN_14abe9c80;
  param_1[5] = &PTR_LAB_14abe9fa0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf0 | 0xc;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffff8 | 4;
  param_1[0xc] = 0x3dcccccd3f000000;
  return param_1;
}



// FUNCTION 1459a1af6 FUN_1459a1af6 body=68 status=ok
// SIG undefined FUN_1459a1af6(void)

undefined8 * FUN_1459a1af6(undefined8 *param_1)

{
  FUN_140edf546();
  *param_1 = &PTR_FUN_14b257960;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(byte *)((longlong)param_1 + 0x89) = *(byte *)((longlong)param_1 + 0x89) & 0xfc;
  param_1[8] = DAT_14cb8b4e0;
  return param_1;
}



// FUNCTION 1459a1b3a FUN_1459a1b3a body=55 status=ok
// SIG undefined FUN_1459a1b3a(void)

undefined8 FUN_1459a1b3a(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    plVar1 = (longlong *)FUN_1459a1b72();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459a1b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1459a1b72 FUN_1459a1b72 body=105 status=ok
// SIG undefined FUN_1459a1b72(void)

void FUN_1459a1b72(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458d5a1a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_1459a1bdc(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a1bdc FUN_1459a1bdc body=76 status=ok
// SIG undefined FUN_1459a1bdc(void)

void FUN_1459a1bdc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1458d5a1a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1459a1c19;
    }
  }
  lVar2 = 0;
LAB_1459a1c19:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1459a1c28 FUN_1459a1c28 body=39 status=ok
// SIG undefined FUN_1459a1c28(void)

void FUN_1459a1c28(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459a1c50(puVar1);
  *puVar1 = &PTR_FUN_14b81ff10;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 1459a1c50 FUN_1459a1c50 body=40 status=ok
// SIG undefined FUN_1459a1c50(void)

undefined8 * FUN_1459a1c50(undefined8 *param_1)

{
  FUN_140bf9282();
  *param_1 = &PTR_FUN_14b4695c0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1459a1c86 FUN_1459a1c86 body=65 status=ok
// SIG undefined FUN_1459a1c86(void)

undefined8 * FUN_1459a1c86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b92b230;
  FUN_14129d1b2(param_1 + 0x97);
  FUN_14075380c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a1cc8 FUN_1459a1cc8 body=79 status=ok
// SIG undefined FUN_1459a1cc8(void)

void FUN_1459a1cc8(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if (param_2 == 0) {
      lVar2 = FUN_14571695d();
      cVar3 = *(char *)(lVar2 + 0x38);
    }
    else {
      cVar3 = '\x01';
    }
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x156) = *(byte *)(lVar1 + 0x156) & 0xef | cVar3 << 4;
    }
    return;
  }
  return;
}



// FUNCTION 1459a1d18 FUN_1459a1d18 body=40 status=ok
// SIG undefined FUN_1459a1d18(void)

undefined8 FUN_1459a1d18(undefined8 param_1,int param_2)

{
  FUN_1459a1d40();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a1d40 FUN_1459a1d40 body=118 status=ok
// SIG undefined FUN_1459a1d40(void)

void FUN_1459a1d40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bad77b0;
  FUN_1401f9edd(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9f1c(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_1403dd3e6(param_1);
  return;
}



// FUNCTION 1459a1dbe FUN_1459a1dbe body=130 status=ok
// SIG undefined FUN_1459a1dbe(void)

undefined8 * FUN_1459a1dbe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1459a1e40(param_1,uVar1);
  *param_1 = &PTR_FUN_14a46e2e0;
  param_1[0xc] = &PTR_FUN_14a46e5d0;
  FUN_144757f48(param_1,1);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
  *param_1 = &PTR_FUN_14a46dfb0;
  param_1[0xc] = &PTR_LAB_14a46e2a0;
  FUN_1406ed1bc(param_1 + 0xe);
  param_1[0xe] = &PTR_FUN_14a464530;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 1459a1e40 FUN_1459a1e40 body=40 status=ok
// SIG undefined FUN_1459a1e40(void)

undefined8 * FUN_1459a1e40(undefined8 *param_1)

{
  FUN_1406ed660();
  *param_1 = &PTR_FUN_14a45e9f0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1459a1e68 FUN_1459a1e68 body=158 status=ok
// SIG undefined FUN_1459a1e68(void)

bool FUN_1459a1e68(longlong param_1,undefined8 param_2)

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



// FUNCTION 1459a1f0e FUN_1459a1f0e body=192 status=ok
// SIG undefined FUN_1459a1f0e(void)

void FUN_1459a1f0e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar3 = 0;
    do {
      FUN_148b6a77a(param_1 + 0x50,*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_148b6a81e(param_1 + 0x78);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_148b6a81e(param_1 + 0x88);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_148b6a81e(param_1 + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x0001459a1f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  return;
}



// FUNCTION 1459a1fce FUN_1459a1fce body=682 status=ok
// SIG undefined FUN_1459a1fce(void)

void FUN_1459a1fce(undefined8 param_1)

{
  undefined8 *puVar1;
  void *_Src;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(&local_78,param_1);
  FUN_140aa5ef8(&local_60,&local_78);
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140e4328c(&local_60);
  FUN_145a3c032(&local_60);
  iVar4 = FUN_144a075de(&DAT_14c8c2b80,&local_60);
  uVar2 = DAT_14c8c2b88;
  if (iVar4 == -1) {
    lVar8 = (longlong)(int)DAT_14c8c2b88;
    DAT_14c8c2b88 = DAT_14c8c2b88 + 1;
    if (DAT_14c8c2b8c < DAT_14c8c2b88) {
      FUN_1447a1bd6(&DAT_14c8c2b80,uVar2);
    }
    puVar11 = local_60;
    lVar12 = DAT_14c8c2b80;
    lVar8 = lVar8 * 0x10;
    puVar9 = (undefined8 *)(DAT_14c8c2b80 + lVar8);
    *(undefined8 *)(DAT_14c8c2b80 + lVar8) = 0;
    lVar10 = (longlong)local_58;
    *(int *)(lVar12 + 8 + lVar8) = local_58;
    if (lVar10 == 0) {
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar9,local_58,0);
      memcpy((void *)*puVar9,puVar11,lVar10 * 2);
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_140e92164();
    puVar11 = local_60;
    if (local_58 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    (**(code **)(DAT_14c8c2640 + 0x1c0))(&DAT_14c8c2640,&local_78,puVar11,&DAT_149e3fb72);
    if ((longlong)(int)uStack_70 == 0) {
      uVar6 = 0;
    }
    else {
      puVar7 = local_78 + (longlong)(int)uStack_70 * 2;
      puVar9 = local_78;
      do {
        local_a0 = *puVar9;
        local_98 = *(int *)(puVar9 + 1) + -1;
        if (*(int *)(puVar9 + 1) == 0) {
          local_98 = 0;
        }
        FUN_140115b7a(&local_90,&local_a0);
        FUN_1446f82e2(&local_50,local_88,local_90,1);
        uVar3 = local_50;
        local_80 = local_50;
        iVar4 = FUN_144a788f7();
        plVar5 = (longlong *)FUN_1459a227a((int)((ulonglong)uVar3 >> 0x20) + iVar4,&local_80);
        FUN_140e4328c(puVar9);
        iVar4 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
          FUN_1447a1bd6(plVar5,iVar4);
        }
        lVar8 = *plVar5;
        lVar12 = (longlong)iVar4 * 0x10;
        puVar1 = (undefined8 *)(lVar8 + lVar12);
        *(undefined8 *)(lVar8 + lVar12) = 0;
        iVar4 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(lVar8 + 8 + lVar12) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar4,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar4 * 2);
        }
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar7);
      uVar6 = uStack_70 & 0xffffffff;
    }
    FUN_1447a1747(local_78,uVar6);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459a227a FUN_1459a227a body=196 status=ok
// SIG undefined FUN_1459a227a(void)

longlong FUN_1459a227a(uint param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8c2b98 != DAT_14c8c2bc4) {
    puVar3 = &DAT_14c8c2bc8;
    if (DAT_14c8c2bd0 != (undefined *)0x0) {
      puVar3 = DAT_14c8c2bd0;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14c8c2bd8 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = DAT_14c8c2b90 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(DAT_14c8c2b90 + (longlong)iVar1 * 0x20) == *param_2) {
          if (lVar2 != 0) goto LAB_1459a2317;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_20 = param_2;
  FUN_1459a2340(&local_14,param_1);
  lVar2 = (longlong)local_14 * 0x20 + DAT_14c8c2b90;
LAB_1459a2317:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 1459a2340 FUN_1459a2340 body=346 status=ok
// SIG undefined FUN_1459a2340(void)

undefined4 * FUN_1459a2340(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459a256a(&DAT_14c8c2b90,local_50);
  *local_48 = *(undefined8 *)*param_3;
  local_48[1] = 0;
  local_48[2] = 0;
  FUN_1447a1747(0,0);
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_1459a249c(&DAT_14c8c2b90,param_2,local_48,local_50);
  if (cVar2 == '\0') {
    uVar3 = DAT_14c8c2b98 - DAT_14c8c2bc4;
    if (uVar3 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14c8c2bd8)) {
      param_2 = DAT_14c8c2bd8 - 1U & param_2;
      *(uint *)((longlong)local_48 + 0x1c) = param_2;
      puVar4 = DAT_14c8c2bd0;
      if (DAT_14c8c2bd0 == (undefined *)0x0) {
        puVar4 = &DAT_14c8c2bc8;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14c8c2bd8 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14c8c2bd0;
      if (DAT_14c8c2bd0 == (undefined *)0x0) {
        puVar4 = &DAT_14c8c2bc8;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14c8c2bd8 - 1U & (longlong)(int)param_2) * 4) =
           local_50[0];
    }
    else {
      DAT_14c8c2bd8 = iVar6;
      FUN_14141ce2a(&DAT_14c8c2b90);
    }
  }
  *param_1 = local_50[0];
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a249c FUN_1459a249c body=206 status=ok
// SIG undefined FUN_1459a249c(void)

void FUN_1459a249c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          FUN_1447a1747(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146834628(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1459a250f;
    }
  }
  uVar6 = 0;
LAB_1459a250f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1459a256a FUN_1459a256a body=239 status=ok
// SIG undefined FUN_1459a256a(void)

int * FUN_1459a256a(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1459a265a FUN_1459a265a body=155 status=ok
// SIG undefined FUN_1459a265a(void)

void FUN_1459a265a(longlong *param_1,undefined8 param_2,undefined8 param_3,wchar_t *param_4)

{
  size_t sVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined1 local_60;
  longlong *local_58;
  RTL_SRWLOCK local_50;
  undefined8 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 1;
  local_68 = &PTR_FUN_149e051a0;
  local_58 = param_1;
  InitializeSRWLock(&local_50);
  local_48 = param_2;
  local_40 = param_4;
  if (param_4 == (wchar_t *)0x0) {
    local_38 = 0;
  }
  else {
    sVar1 = wcslen(param_4);
    local_38 = (int)sVar1;
  }
  (**(code **)(*param_1 + 0x130))(param_1,param_3);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a26f6 FUN_1459a26f6 body=323 status=ok
// SIG undefined FUN_1459a26f6(void)

undefined4 *
FUN_1459a26f6(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1459a283a(param_1,local_50);
  uVar5 = *param_3;
  *local_48 = uVar5;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_14141de30(param_1,uVar3,local_48,&local_54);
  uVar1 = local_54;
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
      *(uint *)((longlong)local_48 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14141deba(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a283a FUN_1459a283a body=230 status=ok
// SIG undefined FUN_1459a283a(void)

int * FUN_1459a283a(longlong *param_1,int *param_2)

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



// FUNCTION 1459a2920 FUN_1459a2920 body=322 status=ok
// SIG undefined FUN_1459a2920(void)

void FUN_1459a2920(longlong param_1,undefined8 param_2)

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
  FUN_14101eafe();
  FUN_140002266(&local_78,L"%lld",*(undefined8 *)(param_1 + 0x90));
  FUN_1458433a4(param_2,&local_78);
  plVar1 = (longlong *)(param_1 + 0x98);
  lVar2 = param_1 + 0xa8;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xc0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0xc0);
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
      FUN_1459a2a64(param_2,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x20));
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



// FUNCTION 1459a2a64 FUN_1459a2a64 body=132 status=ok
// SIG undefined FUN_1459a2a64(void)

void FUN_1459a2a64(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (longlong *)*param_3;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  local_30 = (undefined4)param_3[1];
  FUN_140002266(local_48,L"%lld",param_2);
  FUN_14100d696(param_1,local_48,&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a2aea FUN_1459a2aea body=38 status=ok
// SIG undefined FUN_1459a2aea(void)

undefined8 FUN_1459a2aea(undefined8 param_1,int param_2)

{
  FUN_1459a2b10();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a2b10 FUN_1459a2b10 body=81 status=ok
// SIG undefined FUN_1459a2b10(void)

void FUN_1459a2b10(longlong param_1)

{
  FUN_144725486(param_1 + 0x298);
  FUN_1458d1be7(*(undefined8 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4c8));
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FUN_1400020a8();
  }
  FUN_1412b7f2a(param_1 + 0x298);
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 1459a2b62 FUN_1459a2b62 body=23 status=ok
// SIG undefined FUN_1459a2b62(void)

void FUN_1459a2b62(longlong param_1)

{
  FUN_14141e96e();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 1459a2b7a FUN_1459a2b7a body=83 status=ok
// SIG undefined FUN_1459a2b7a(void)

void FUN_1459a2b7a(longlong param_1)

{
  FUN_1459a2bce(*(undefined8 *)(param_1 + 0x1c78));
  FUN_14013f741(*(undefined8 *)(param_1 + 0x1b90),*(undefined4 *)(param_1 + 0x1b98));
  *(undefined4 *)(param_1 + 0x1b98) = 0;
  if (*(int *)(param_1 + 0x1b9c) == 0) {
    return;
  }
  FUN_14013f78c(param_1 + 0x1b90);
  return;
}



// FUNCTION 1459a2bce FUN_1459a2bce body=266 status=ok
// SIG undefined FUN_1459a2bce(void)

void FUN_1459a2bce(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  iVar3 = 0;
  local_40 = lVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x30);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (local_40 != lVar2)) {
    do {
      do {
        FUN_148117076(*(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x18));
        local_58 = local_58 & ~local_68._4_4_;
        FUN_1449c0562(&local_68);
      } while (iStack_54 != iVar3);
    } while ((local_60 != lVar2) || (local_70 != plVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459a2cf0 FUN_1459a2cf0 body=118 status=ok
// SIG undefined FUN_1459a2cf0(void)

void FUN_1459a2cf0(longlong *param_1)

{
  longlong *_Dst;
  
  if ((int)param_1[0x9c] == 0) {
    return;
  }
  _Dst = param_1 + 0x78;
  if ((char)param_1[0x96] == '\0') {
    memcpy(_Dst,param_1 + 0x9c,0xf0);
    *(undefined1 *)(param_1 + 0x96) = 1;
    FUN_140cbebe8(param_1 + 6,1);
  }
  else {
    if ((int)param_1[0x9c] <= (int)*_Dst) {
      return;
    }
    memcpy(_Dst,param_1 + 0x9c,0xf0);
    *(undefined1 *)(param_1 + 0x96) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001459a2d41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x648))(param_1);
  return;
}



// FUNCTION 1459a2d66 FUN_1459a2d66 body=9 status=ok
// SIG undefined FUN_1459a2d66(void)

void FUN_1459a2d66(longlong param_1)

{
  FUN_1459a2d70(param_1 + 0x10);
  return;
}



// FUNCTION 1459a2d70 FUN_1459a2d70 body=57 status=ok
// SIG undefined FUN_1459a2d70(void)

void FUN_1459a2d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b647170;
  FUN_1459a2da9(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 1459a2da9 FUN_1459a2da9 body=73 status=ok
// SIG undefined FUN_1459a2da9(void)

void FUN_1459a2da9(longlong param_1,int param_2)

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



// FUNCTION 1459a2df2 FUN_1459a2df2 body=40 status=ok
// SIG undefined FUN_1459a2df2(void)

undefined8 FUN_1459a2df2(undefined8 param_1,int param_2)

{
  FUN_14141ebb2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a2e1a FUN_1459a2e1a body=63 status=ok
// SIG undefined FUN_1459a2e1a(void)

void FUN_1459a2e1a(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1459a2fda(param_1);
    FUN_1459a2e5a(param_1);
    return;
  }
  FUN_1459a2e5a(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14579da98(param_1);
  return;
}



// FUNCTION 1459a2e5a FUN_1459a2e5a body=383 status=ok
// SIG undefined FUN_1459a2e5a(void)

void FUN_1459a2e5a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar3 = *local_78;
      lVar5 = (longlong)iStack_5c;
      plVar4 = *(longlong **)(lVar3 + 0x30 + lVar5 * 0x40);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      if (*(longlong *)(lVar3 + lVar5 * 0x40 + 0x18) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459a2fda FUN_1459a2fda body=327 status=ok
// SIG undefined FUN_1459a2fda(void)

void FUN_1459a2fda(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 1459a3122 FUN_1459a3122 body=1320 status=ok
// SIG undefined FUN_1459a3122(void)

void FUN_1459a3122(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar9 = FUN_144a3a302();
    lVar14 = *(longlong *)(param_1 + 0x110);
    if (((((lVar14 != 0) && (lVar9 != 0)) && (lVar10 = *(longlong *)(lVar14 + 0x10), lVar10 != 0))
        && ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar10 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
             lVar9 + 0x30)))) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
      FUN_1459a364c(&local_b0);
      FUN_140e7a486(lVar14 + 0x599,param_1,local_b0);
      FUN_1459a370c(&local_b8);
      FUN_140e7a4f4(lVar14 + 0x59a,param_1,local_b8);
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x1990);
  if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
    FUN_140e15cbe(&local_c0);
    FUN_14051c89e(lVar14 + 0x20d,param_1,local_c0);
  }
  lVar14 = param_1;
  FUN_1459a3982(param_1,param_2);
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
LAB_1459a3260:
    lVar15 = 0;
  }
  else {
    lVar10 = FUN_1402095ca();
    lVar9 = *(longlong *)(param_1 + 0x1d8);
    if (lVar9 == 0) goto LAB_1459a3260;
    lVar15 = 0;
    if ((lVar10 != 0) && (lVar14 = *(longlong *)(lVar9 + 0x10), lVar14 != 0)) {
      if ((*(int *)(lVar14 + 0x38) < *(int *)(lVar10 + 0x38)) ||
         (lVar14 = *(longlong *)(lVar14 + 0x30),
         *(longlong *)(lVar14 + (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30))
      goto LAB_1459a3260;
      lVar15 = lVar9;
      if (DAT_14c950c29 == '\x01') {
        lVar14 = lVar9;
        FUN_1456cec3c();
      }
    }
  }
  uVar17 = (undefined4)lVar14;
  *(longlong *)(param_1 + 0x1990) = lVar15;
  lVar14 = *(longlong *)(param_1 + 0x118);
  if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
    FUN_1459a364c(&local_c8);
    FUN_1459a37cc(lVar14 + 0x599,param_1,local_c8);
    lVar14 = *(longlong *)(param_1 + 0x118) + 0x59a;
    FUN_1459a370c(&local_d0);
    FUN_1459a385e(lVar14,param_1,local_d0);
    uVar17 = (undefined4)lVar14;
    lVar15 = *(longlong *)(param_1 + 0x1990);
  }
  if (lVar15 != 0) {
    if ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0) {
      lVar15 = lVar15 + 0x20d;
      FUN_140e15cbe(&local_d8);
      FUN_1459a38f0(lVar15,param_1,local_d8);
      uVar17 = (undefined4)lVar15;
      lVar15 = *(longlong *)(param_1 + 0x1990);
      if (lVar15 == 0) goto LAB_1459a34d3;
    }
    dVar18 = (double)(ulonglong)*(uint *)(lVar15 + 8);
    if ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0) {
      lVar14 = *(longlong *)(lVar15 + 0x1c8);
      if (lVar14 == 0) {
        uVar16 = SUB84(DAT_14c846500,0);
      }
      else {
        dVar4 = *(double *)(lVar14 + 0x240);
        dVar5 = *(double *)(lVar14 + 0x248);
        dVar6 = *(double *)(lVar14 + 0x250);
        dVar7 = *(double *)(lVar14 + 600);
        pdVar11 = *(double **)(lVar14 + 0x228);
        local_a8 = dVar4;
        uStack_a0 = dVar5;
        local_98 = dVar6;
        dStack_90 = dVar7;
        if (pdVar11 == (double *)0x0) {
          uVar17 = 0x40;
          pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
          dVar18 = DAT_14c8463d8;
          *pdVar11 = DAT_14c8463d0;
          pdVar11[1] = dVar18;
          dVar18 = DAT_14c8463e8;
          pdVar11[2] = DAT_14c8463e0;
          pdVar11[3] = dVar18;
          dVar18 = DAT_14c846500;
          pdVar11[4] = DAT_14c8464f8;
          pdVar11[5] = dVar18;
          dVar18 = DAT_14c846508;
          pdVar11[6] = DAT_14c846508;
          *(double **)(lVar14 + 0x228) = pdVar11;
        }
        auVar19._8_8_ = -(ulonglong)(dVar7 != pdVar11[3]);
        auVar19._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
        auVar1._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
        auVar1._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
        auVar1._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
        iVar8 = movmskpd(SUB84(dVar18,0),auVar1);
        uVar12 = movmskpd(uVar17,auVar19);
        uVar17 = 0;
        if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
          puVar13 = &local_a8;
          pdVar11[2] = local_98;
          pdVar11[3] = dStack_90;
          *(undefined4 *)pdVar11 = (undefined4)local_a8;
          *(undefined4 *)((longlong)pdVar11 + 4) = local_a8._4_4_;
          *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_a0._4_4_;
          FUN_1448052ee(puVar13,&local_88);
          uVar17 = SUB84(puVar13,0);
          pdVar11[6] = local_78;
          pdVar11[4] = local_88;
          pdVar11[5] = dStack_80;
        }
        uVar16 = SUB84(pdVar11[5],0);
      }
      dVar18 = (double)FUN_144719204(uVar16,0x4076800000000000);
      dVar18 = (double)(~-(ulonglong)(dVar18 < 0.0) & (ulonglong)dVar18 |
                       (ulonglong)(dVar18 + 360.0) & -(ulonglong)(dVar18 < 0.0));
      *(float *)(param_1 + 0x1998) =
           (float)(double)(~-(ulonglong)(180.0 < dVar18) & (ulonglong)dVar18 |
                          (ulonglong)(dVar18 + -360.0) & -(ulonglong)(180.0 < dVar18));
      dVar18 = *(double *)(param_1 + 0x1990);
      lVar14 = *(longlong *)((longlong)dVar18 + 0x1c8);
      if (lVar14 == 0) {
        uVar17 = SUB84(DAT_14c8464f8,0);
      }
      else {
        dVar4 = *(double *)(lVar14 + 0x240);
        dVar5 = *(double *)(lVar14 + 0x248);
        dVar6 = *(double *)(lVar14 + 0x250);
        dVar7 = *(double *)(lVar14 + 600);
        pdVar11 = *(double **)(lVar14 + 0x228);
        local_a8 = dVar4;
        uStack_a0 = dVar5;
        local_98 = dVar6;
        dStack_90 = dVar7;
        if (pdVar11 == (double *)0x0) {
          uVar17 = 0x40;
          pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
          dVar18 = DAT_14c8463d8;
          *pdVar11 = DAT_14c8463d0;
          pdVar11[1] = dVar18;
          dVar18 = DAT_14c8463e8;
          pdVar11[2] = DAT_14c8463e0;
          pdVar11[3] = dVar18;
          dVar18 = DAT_14c846500;
          pdVar11[4] = DAT_14c8464f8;
          pdVar11[5] = dVar18;
          dVar18 = DAT_14c846508;
          pdVar11[6] = DAT_14c846508;
          *(double **)(lVar14 + 0x228) = pdVar11;
        }
        auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
        auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
        iVar8 = movmskpd(SUB84(dVar18,0),auVar2);
        auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
        auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
        uVar12 = movmskpd(uVar17,auVar3);
        if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
          pdVar11[2] = local_98;
          pdVar11[3] = dStack_90;
          *(undefined4 *)pdVar11 = (undefined4)local_a8;
          *(undefined4 *)((longlong)pdVar11 + 4) = local_a8._4_4_;
          *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_a0._4_4_;
          FUN_1448052ee(&local_a8,&local_88);
          pdVar11[6] = local_78;
          pdVar11[4] = local_88;
          pdVar11[5] = dStack_80;
        }
        uVar17 = SUB84(pdVar11[4],0);
      }
      dVar18 = (double)FUN_144719204(uVar17);
      dVar18 = (double)(~-(ulonglong)(dVar18 < 0.0) & (ulonglong)dVar18 |
                       (ulonglong)(dVar18 + 360.0) & -(ulonglong)(dVar18 < 0.0));
      *(float *)(param_1 + 0x199c) =
           (float)(double)(~-(ulonglong)(180.0 < dVar18) & (ulonglong)dVar18 |
                          (ulonglong)(dVar18 + -360.0) & -(ulonglong)(180.0 < dVar18));
    }
  }
LAB_1459a34d3:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459a364c FUN_1459a364c body=190 status=ok
// SIG undefined FUN_1459a364c(void)

undefined8 * FUN_1459a364c(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe7030) {
    FUN_144b3d300(&DAT_14cbe7030);
    if (DAT_14cbe7030 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"Overlap",8);
      builtin_wcsncpy(local_48 + 8,L"iveBegin",8);
      builtin_wcsncpy(local_48,L"OnPrimit",8);
      FUN_1446f470e(&DAT_14cbe7028,local_48,1);
      _Init_thread_footer(&DAT_14cbe7030);
    }
  }
  *param_1 = DAT_14cbe7028;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a370c FUN_1459a370c body=190 status=ok
// SIG undefined FUN_1459a370c(void)

undefined8 * FUN_1459a370c(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe7040) {
    FUN_144b3d300(&DAT_14cbe7040);
    if (DAT_14cbe7040 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"erlap",6);
      builtin_wcsncpy(local_48 + 8,L"iveEndOv",8);
      builtin_wcsncpy(local_48,L"OnPrimit",8);
      FUN_1446f470e(&DAT_14cbe7038,local_48,1);
      _Init_thread_footer(&DAT_14cbe7040);
    }
  }
  *param_1 = DAT_14cbe7038;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a37cc FUN_1459a37cc body=145 status=ok
// SIG undefined FUN_1459a37cc(void)

void FUN_1459a37cc(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_140838726(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x599,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a385e FUN_1459a385e body=145 status=ok
// SIG undefined FUN_1459a385e(void)

void FUN_1459a385e(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_140852908(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x59a,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a38f0 FUN_1459a38f0 body=145 status=ok
// SIG undefined FUN_1459a38f0(void)

void FUN_1459a38f0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_14067d554(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x20d,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a3982 FUN_1459a3982 body=166 status=ok
// SIG undefined FUN_1459a3982(void)

void FUN_1459a3982(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14048e05c();
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0xa8);
  if (lVar2 != 0) {
    lVar1 = FUN_144a7cbb2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(lVar2);
      }
      *(longlong *)(param_1 + 0x1d8) = lVar2;
      goto LAB_1459a39d5;
    }
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
LAB_1459a39d5:
  lVar2 = FUN_144a74fb4();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    *(byte *)(param_2 + 0xc61) = *(byte *)(param_2 + 0xc61) | 8;
  }
  return;
}



// FUNCTION 1459a3a28 FUN_1459a3a28 body=35 status=ok
// SIG undefined FUN_1459a3a28(void)

void FUN_1459a3a28(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (param_3 == '\0') {
    FUN_1459a3a4c();
    return;
  }
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    lVar1 = 0;
  }
  FUN_146ef17a6(lVar1);
  return;
}



// FUNCTION 1459a3a4c FUN_1459a3a4c body=219 status=ok
// SIG undefined FUN_1459a3a4c(void)

void FUN_1459a3a4c(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1459a3b28(&local_a8,param_1);
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  local_b0 = local_58 * dVar3 + local_68 * dVar1 + local_60 * dVar2;
  local_b8 = local_78 * dVar3 + local_88 * dVar1 + local_80 * dVar2;
  local_c0 = dVar3 * local_98 + dVar1 * local_a8 + dVar2 * local_a0;
  FUN_141347b9c(param_1);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a3b28 FUN_1459a3b28 body=460 status=ok
// SIG undefined FUN_1459a3b28(void)

undefined8 FUN_1459a3b28(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_2 + 0x40);
  bVar6 = lVar1 == 0 || *(byte *)(lVar1 + 0x90) < 2;
  if (bVar6) {
    local_78 = 0.0;
    local_70 = 0.0;
    local_68 = 0.0;
  }
  else {
    local_68 = (double)*(float *)(lVar1 + 0x138);
    local_70 = (double)*(float *)(lVar1 + 0x134);
    local_78 = (double)*(float *)(lVar1 + 0x130);
  }
  if (bVar6) {
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar7 = 0.0;
    dVar8 = 1.0;
  }
  else {
    dVar9 = *(double *)(lVar1 + 0x110);
    dVar10 = *(double *)(lVar1 + 0x118);
    dVar7 = *(double *)(lVar1 + 0x120);
    dVar8 = *(double *)(lVar1 + 0x128);
  }
  dVar11 = (double)*(float *)(lVar1 + 0x48);
  dVar2 = (double)*(float *)(lVar1 + 0x4c);
  dVar12 = (double)*(float *)(lVar1 + 0x40);
  dVar5 = (double)*(float *)(lVar1 + 0x44);
  dVar3 = dVar9 * dVar11 * 1.0 + dVar8 * dVar5 + dVar12 * dVar7 * -1.0 + dVar2 * dVar10;
  dVar4 = dVar7 * dVar11 * -1.0 + ((dVar12 * dVar9 * -1.0 + dVar2 * dVar8) - dVar5 * dVar10);
  local_98._8_4_ = SUB84(dVar3,0);
  local_98._0_8_ = dVar10 * dVar11 * -1.0 + dVar7 * dVar5 + dVar12 * dVar8 * 1.0 + dVar2 * dVar9;
  local_98._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_88._8_4_ = SUB84(dVar4,0);
  local_88._0_8_ = dVar8 * dVar11 * 1.0 + ((dVar12 * dVar10 * 1.0 + dVar2 * dVar7) - dVar5 * dVar9);
  local_88._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  FUN_1409357f8(param_1,local_98,&local_78);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a3cf6 FUN_1459a3cf6 body=342 status=ok
// SIG undefined FUN_1459a3cf6(void)

undefined4 FUN_1459a3cf6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1459a3e4e(&local_58,param_3);
  plVar2 = local_50;
  if (local_50 == (longlong *)0x0) {
    uVar4 = 0;
    iVar6 = 0;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    iVar6 = (int)uStack_40;
    uVar4 = uStack_40._4_4_;
  }
  uStack_40 = CONCAT44(uStack_40._4_4_,iVar6 + 1U);
  if (uVar4 < iVar6 + 1U) {
    FUN_1413eac7e(&local_48,iVar6);
  }
  *(undefined8 *)(local_48 + (longlong)iVar6 * 0x10) = local_58;
  *(longlong **)(local_48 + 8 + (longlong)iVar6 * 0x10) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)local_50 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x398))(param_1,param_2,&local_48,param_4);
  FUN_14127b1cd(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a3e4e FUN_1459a3e4e body=243 status=ok
// SIG undefined FUN_1459a3e4e(void)

longlong * FUN_1459a3e4e(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x20,0x10);
  FUN_1459a3f42(lVar2,param_2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ba3d970;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_1459a3edf;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_1459a3edf;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_1459a3edf:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 1459a3f42 FUN_1459a3f42 body=149 status=ok
// SIG undefined FUN_1459a3f42(void)

undefined8 * FUN_1459a3f42(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ba3d920;
  param_1[3] = 0;
  (**(code **)(*param_2 + 0x10))(param_2,&local_30);
  FUN_1446f470e(&local_38,L"SHIFT",1);
  if (local_30 == local_38) {
    param_1[3] = param_2[3];
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a3fe4 FUN_1459a3fe4 body=188 status=ok
// SIG undefined FUN_1459a3fe4(void)

undefined8 * FUN_1459a3fe4(undefined8 *param_1)

{
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14ae6da70;
  param_1[5] = &PTR_FUN_14ae6dd80;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 2;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3e4ccccd;
  *(undefined2 *)(param_1 + 0x31) = 0x100;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_141266eda(param_1 + 0x35,param_1);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 2;
  FUN_140e2f50a(param_1,1);
  return param_1;
}



// FUNCTION 1459a40ac FUN_1459a40ac body=89 status=ok
// SIG undefined FUN_1459a40ac(void)

undefined8 * FUN_1459a40ac(undefined8 *param_1)

{
  FUN_1459a4106();
  *param_1 = &PTR_FUN_14a6a7590;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  FUN_144a5dc74(param_1 + 0x1e);
  FUN_144a5dc74(param_1 + 0x20);
  FUN_144a5dc74(param_1 + 0x22);
  FUN_144a5dc74(param_1 + 0x24);
  return param_1;
}



// FUNCTION 1459a4106 FUN_1459a4106 body=199 status=ok
// SIG undefined FUN_1459a4106(void)

undefined8 * FUN_1459a4106(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6759f0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x20;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb1e8) {
    FUN_144b3d300(&DAT_14caeb1e8);
    if (DAT_14caeb1e8 == -1) {
      FUN_14141eda4();
      atexit((_func_5014 *)&LAB_14356dd8d);
      _Init_thread_footer(&DAT_14caeb1e8);
    }
  }
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  param_1[0x16] = DAT_14caeb1e0;
  return param_1;
}



// FUNCTION 1459a41ce FUN_1459a41ce body=127 status=ok
// SIG undefined FUN_1459a41ce(void)

void FUN_1459a41ce(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar4 = 8;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_1459a424e(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1459a424e FUN_1459a424e body=142 status=ok
// SIG undefined FUN_1459a424e(void)

void FUN_1459a424e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 1459a42dc FUN_1459a42dc body=507 status=ok
// SIG undefined FUN_1459a42dc(void)

void FUN_1459a42dc(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
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
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_3c != 0;
  local_58 = iVar1 != 0;
  thunk_FUN_1459a44de(param_1,local_28,local_30,local_34);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a44d8 thunk_FUN_1459a44de body=5 status=ok
// SIG undefined thunk_FUN_1459a44de(void)

void thunk_FUN_1459a44de(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                        undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_1c = param_5;
  uStack_1b = param_6;
  uStack_30 = param_2;
  uStack_28 = param_3;
  uStack_20 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbada68);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&uStack_30);
  if ((uStack_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a44de FUN_1459a44de body=124 status=ok
// SIG undefined FUN_1459a44de(void)

void FUN_1459a44de(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = param_5;
  local_1b = param_6;
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbada68);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a4564 FUN_1459a4564 body=397 status=ok
// SIG undefined FUN_1459a4564(void)

undefined8 * FUN_1459a4564(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14007ca06();
  FUN_1459a46f2(param_1,uVar4);
  *param_1 = &PTR_FUN_14b207ec0;
  param_1[0x1f] = &PTR_FUN_14b208230;
  param_1[0x6f] = 0;
  *(undefined2 *)((longlong)param_1 + 0xd9) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar5 + 2;
  FUN_1459a4720(plVar1,param_1 + 0x27);
  local_38 = plVar1;
  local_30 = plVar5;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    param_1[0x1c] = local_38;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_1459a4645;
    param_1[0x1d] = 0;
LAB_1459a4697:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1459a4645;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    param_1[0x1c] = local_38;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_30 != plVar5) {
      param_1[0x1d] = local_30;
      if (plVar5 == (longlong *)0x0) goto LAB_1459a4645;
      goto LAB_1459a4697;
    }
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1459a4645;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1459a4645:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a46f2 FUN_1459a46f2 body=46 status=ok
// SIG undefined FUN_1459a46f2(void)

undefined8 * FUN_1459a46f2(undefined8 *param_1)

{
  FUN_140e7c7e0();
  *param_1 = &PTR_FUN_14a4a0e40;
  param_1[0x1f] = &PTR_FUN_14a4a11b0;
  return param_1;
}



// FUNCTION 1459a4720 FUN_1459a4720 body=197 status=ok
// SIG undefined FUN_1459a4720(void)

undefined8 * FUN_1459a4720(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_140f938fc();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 1459a47e6 FUN_1459a47e6 body=263 status=ok
// SIG undefined FUN_1459a47e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459a47e6(longlong *param_1)

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
  DAT_14cc14a90 = 0;
  DAT_14cc14a98 = 0;
  DAT_14cc14a70 = 0;
  _DAT_14cc14a78 = 0;
  _DAT_14cc14a9c = 0xffffffff00000080;
  DAT_14cc14aa4 = 0;
  DAT_14cc14ab0 = 0;
  DAT_14cc14ab8 = 0;
  uVar5 = (ulonglong)(param_1[1] - *param_1) >> 4;
  uVar4 = (uint)uVar5;
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1459a4be0(uVar5 & 0xffffffff);
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
    if ((DAT_14cc14ab8 == 0) || (DAT_14cc14ab8 < iVar2)) {
      DAT_14cc14ab8 = iVar2;
      FUN_1459a4dc0();
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
      FUN_1459a48ee(local_2c,&local_40);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a48ee FUN_1459a48ee body=330 status=ok
// SIG undefined FUN_1459a48ee(void)

undefined4 * FUN_1459a48ee(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459a4ad2(local_48);
  puVar1 = (undefined4 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  iVar6 = FUN_144a788f7();
  uVar10 = iVar6 + (int)((ulonglong)uVar2 >> 0x20);
  cVar5 = FUN_1459a4a3a(uVar10,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = DAT_14cc14a78 - DAT_14cc14aa4;
    if (uVar7 < 4) {
      iVar6 = 1;
    }
    else {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar6 <= DAT_14cc14ab8)) {
      uVar10 = DAT_14cc14ab8 - 1U & uVar10;
      *(uint *)(local_40 + 2) = uVar10;
      puVar8 = DAT_14cc14ab0;
      if (DAT_14cc14ab0 == (undefined *)0x0) {
        puVar8 = &DAT_14cc14aa8;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)(puVar8 + ((longlong)DAT_14cc14ab8 - 1U & (longlong)(int)uVar10) * 4);
      puVar8 = DAT_14cc14ab0;
      if (DAT_14cc14ab0 == (undefined *)0x0) {
        puVar8 = &DAT_14cc14aa8;
      }
      *(undefined4 *)(puVar8 + ((longlong)DAT_14cc14ab8 - 1U & (longlong)(int)uVar10) * 4) =
           local_4c;
    }
    else {
      DAT_14cc14ab8 = iVar6;
      FUN_1459a4dc0();
    }
  }
  *param_1 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a4a3a FUN_1459a4a3a body=151 status=ok
// SIG undefined FUN_1459a4a3a(void)

undefined8 FUN_1459a4a3a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((DAT_14cc14a78 - DAT_14cc14aa4 != 1) && (DAT_14cc14a78 != DAT_14cc14aa4)) {
    puVar4 = &DAT_14cc14aa8;
    if (DAT_14cc14ab0 != (undefined *)0x0) {
      puVar4 = DAT_14cc14ab0;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14cc14ab8 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cc14a70 + (longlong)iVar3 * 0x14);
        if (*plVar1 == *param_2) {
          lVar2 = *param_2;
          *(int *)(plVar1 + 1) = (int)param_2[1];
          *plVar1 = lVar2;
          FUN_1493e7990(*param_3);
          *param_3 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1459a4ad2 FUN_1459a4ad2 body=270 status=ok
// SIG undefined FUN_1459a4ad2(void)

int * FUN_1459a4ad2(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cc14aa0;
  iVar4 = DAT_14cc14a78;
  if (DAT_14cc14aa4 == 0) {
    iVar2 = DAT_14cc14a78 + 1;
    bVar7 = DAT_14cc14a7c == DAT_14cc14a78;
    DAT_14cc14a78 = iVar2;
    if (bVar7) {
      FUN_140171ad2(&DAT_14cc14a70,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cc14a80,1);
    puVar3 = DAT_14cc14a90;
    if (DAT_14cc14a90 == (undefined *)0x0) {
      puVar3 = &DAT_14cc14a80;
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
    lVar6 = (longlong)DAT_14cc14aa0;
    DAT_14cc14aa0 = *(int *)(DAT_14cc14a70 + 4 + lVar6 * 0x14);
    DAT_14cc14aa4 = DAT_14cc14aa4 + -1;
    iVar4 = iVar2;
    if (DAT_14cc14aa4 != 0) {
      *(undefined4 *)(DAT_14cc14a70 + (longlong)DAT_14cc14aa0 * 0x14) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cc14a80;
  if (DAT_14cc14a90 != (undefined *)0x0) {
    puVar3 = DAT_14cc14a90;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x14 + DAT_14cc14a70;
  return param_1;
}



// FUNCTION 1459a4be0 FUN_1459a4be0 body=479 status=ok
// SIG undefined FUN_1459a4be0(void)

void FUN_1459a4be0(uint param_1)

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
  
  iVar3 = DAT_14cc14a78;
  uVar9 = param_1 - DAT_14cc14a78;
  if (uVar9 != 0 && DAT_14cc14a78 <= (int)param_1) {
    iVar8 = DAT_14cc14a78;
    if (DAT_14cc14a7c < (int)param_1) {
      FUN_1401ad22e(&DAT_14cc14a70);
      iVar8 = DAT_14cc14a78;
    }
    DAT_14cc14a78 = iVar8 + uVar9;
    if ((uint)(DAT_14cc14a7c - iVar8) < uVar9) {
      FUN_140171ad2(&DAT_14cc14a70);
    }
    lVar2 = DAT_14cc14a70;
    if (iVar8 < (int)param_1) {
      piVar7 = (int *)(DAT_14cc14a70 + (ulonglong)param_1 * 0x14 + -0x10);
      uVar12 = (ulonglong)param_1;
      do {
        uVar1 = uVar12 - 1;
        if (DAT_14cc14aa4 == 0) {
          iVar11 = (int)uVar12 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14cc14aa0 * 0x14) = (int)uVar12 + -1;
          iVar11 = (int)uVar1;
        }
        piVar7[-1] = -1;
        iVar13 = -1;
        if (0 < DAT_14cc14aa4) {
          iVar13 = DAT_14cc14aa0;
        }
        *piVar7 = iVar13;
        DAT_14cc14aa4 = DAT_14cc14aa4 + 1;
        piVar7 = piVar7 + -5;
        uVar12 = uVar1;
        DAT_14cc14aa0 = iVar11;
      } while ((longlong)iVar8 < (longlong)uVar1);
    }
    if (iVar3 == 0) {
      uVar10 = uVar9 + 0x1f >> 5;
      DAT_14cc14a98 = uVar9;
      if (DAT_14cc14a9c + 0x1f >> 5 < uVar10) {
        FUN_14499171c(&DAT_14cc14a80,0,uVar10,4);
        DAT_14cc14a9c = uVar9 + 0x1f & 0xffffffe0;
      }
      puVar6 = DAT_14cc14a90;
      if (DAT_14cc14a90 == (undefined *)0x0) {
        puVar6 = &DAT_14cc14a80;
      }
      if (uVar9 < 0x101) {
        uVar10 = uVar10 + (uVar10 == 0);
      }
      memset(puVar6,0,(ulonglong)(uVar10 << 2));
      uVar9 = DAT_14cc14a98 + 0x1f;
      if (-1 < (int)DAT_14cc14a98) {
        uVar9 = DAT_14cc14a98;
      }
      if ((int)DAT_14cc14a98 % 0x20 != 0) {
        puVar6 = &DAT_14cc14a80;
        if (DAT_14cc14a90 != (undefined *)0x0) {
          puVar6 = DAT_14cc14a90;
        }
        bVar5 = -(char)((int)DAT_14cc14a98 % 0x20);
        *(uint *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) =
             (uint)(*(int *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar9) {
      uVar4 = FUN_144a54ea4(&DAT_14cc14a80,uVar9);
      FUN_1447c6044(&DAT_14cc14a80,uVar4,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 1459a4dc0 FUN_1459a4dc0 body=501 status=ok
// SIG undefined FUN_1459a4dc0(void)

void FUN_1459a4dc0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cc14ab0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cc14ab0,0,0,4);
  }
  uVar3 = DAT_14cc14ab8;
  uVar2 = local_68;
  if (DAT_14cc14ab8 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14cc14aa8,0,DAT_14cc14ab8,4);
    if (0 < (int)uVar3) {
      do {
        puVar7 = DAT_14cc14ab0;
        if (DAT_14cc14ab0 == (undefined *)0x0) {
          puVar7 = &DAT_14cc14aa8;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cc14ab8 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_58 = 0x100000000;
    local_50 = &DAT_14cc14a80;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (DAT_14cc14a98 != 0) {
      FUN_1449c0562(&local_58);
    }
    local_80 = &DAT_14cc14a70;
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar2 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    if (local_68._4_4_ < *(int *)(local_50 + 0x18)) {
      iVar4 = local_68._4_4_;
      local_68 = uVar2;
      do {
        lVar1 = *local_80;
        lVar9 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar9 * 0x14);
        iVar5 = FUN_144a788f7();
        uVar6 = (longlong)(iVar5 + (int)((ulonglong)uVar2 >> 0x20)) &
                (longlong)(int)DAT_14cc14ab8 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x10 + lVar9 * 0x14) = iVar5;
        puVar7 = DAT_14cc14ab0;
        if (DAT_14cc14ab0 == (undefined *)0x0) {
          puVar7 = &DAT_14cc14aa8;
        }
        *(undefined4 *)(lVar1 + 0xc + lVar9 * 0x14) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cc14ab8 - 1U & uVar6) * 4);
        puVar7 = DAT_14cc14ab0;
        if (DAT_14cc14ab0 == (undefined *)0x0) {
          puVar7 = &DAT_14cc14aa8;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14cc14ab8 - 1U) * 4) = iVar4;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar2 = local_68;
      } while (local_68._4_4_ < *(int *)(local_70 + 0x18));
    }
  }
  local_68 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459a4fb6 FUN_1459a4fb6 body=361 status=ok
// SIG undefined FUN_1459a4fb6(void)

undefined4 * FUN_1459a4fb6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459a51be(param_1,local_40);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar6 = *puVar1;
  *local_38 = uVar6;
  local_38[1] = puVar1[1];
  lVar9 = puVar1[2];
  local_38[2] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
    uVar6 = *local_38;
  }
  *(undefined1 *)(local_38 + 3) = *(undefined1 *)(puVar1 + 3);
  local_38[4] = *puVar2;
  *(undefined4 *)(local_38 + 5) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar6 >> 0x10);
  uVar5 = (uint)uVar6 & 0xffff;
  uVar10 = *(uint *)(local_38 + 3) & 0xf ^
           ((uint)uVar6 << 0x10 | uVar5) + (int)((ulonglong)uVar6 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1459a5120(param_1,uVar10,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x2c) = uVar10;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 5) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14141feb6(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a5120 FUN_1459a5120 body=158 status=ok
// SIG undefined FUN_1459a5120(void)

undefined8 FUN_1459a5120(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar13 = FUN_14141fe50(), iVar13 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x30);
    plVar4 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar13 * 0x30);
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
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[4];
    uVar10 = param_3[5];
    uVar11 = param_3[6];
    uVar12 = param_3[7];
    *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_3 + 8);
    puVar3[4] = uVar9;
    puVar3[5] = uVar10;
    puVar3[6] = uVar11;
    puVar3[7] = uVar12;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_1469ea550(param_1,*param_4);
    *param_4 = iVar13;
    return 1;
  }
  return 0;
}



// FUNCTION 1459a51be FUN_1459a51be body=239 status=ok
// SIG undefined FUN_1459a51be(void)

int * FUN_1459a51be(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1459a52ae FUN_1459a52ae body=55 status=ok
// SIG undefined FUN_1459a52ae(void)

longlong FUN_1459a52ae(longlong param_1,int param_2)

{
  FUN_1459a52e6(param_1 + 0x250);
  FUN_1403dd3e6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a52e6 FUN_1459a52e6 body=162 status=ok
// SIG undefined FUN_1459a52e6(void)

void FUN_1459a52e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e8ec80;
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a53be(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a54ca(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a5388(param_1 + 0x1a);
  FUN_145ab7db0(param_1);
  return;
}



// FUNCTION 1459a5388 FUN_1459a5388 body=53 status=ok
// SIG undefined FUN_1459a5388(void)

void FUN_1459a5388(longlong *param_1)

{
  FUN_1459a5470();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459a53be FUN_1459a53be body=55 status=ok
// SIG undefined FUN_1459a53be(void)

void FUN_1459a53be(longlong *param_1)

{
  FUN_1459a53f6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459a53f6 FUN_1459a53f6 body=121 status=ok
// SIG undefined FUN_1459a53f6(void)

void FUN_1459a53f6(longlong param_1,int param_2)

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



// FUNCTION 1459a5470 FUN_1459a5470 body=90 status=ok
// SIG undefined FUN_1459a5470(void)

void FUN_1459a5470(longlong param_1)

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



// FUNCTION 1459a54ca FUN_1459a54ca body=53 status=ok
// SIG undefined FUN_1459a54ca(void)

void FUN_1459a54ca(longlong *param_1)

{
  FUN_1459a5500();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459a5500 FUN_1459a5500 body=90 status=ok
// SIG undefined FUN_1459a5500(void)

void FUN_1459a5500(longlong param_1)

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



// FUNCTION 1459a5566 FUN_1459a5566 body=29 status=ok
// SIG undefined FUN_1459a5566(void)

void FUN_1459a5566(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_149f229f0;
  return;
}



// FUNCTION 1459a558c FUN_1459a558c body=32 status=ok
// SIG undefined FUN_1459a558c(void)

undefined8 * FUN_1459a558c(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149f87790;
  return param_1;
}



// FUNCTION 1459a55b8 FUN_1459a55b8 body=29 status=ok
// SIG undefined FUN_1459a55b8(void)

void FUN_1459a55b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14a156510;
  return;
}



// FUNCTION 1459a55e4 FUN_1459a55e4 body=45 status=ok
// SIG undefined FUN_1459a55e4(void)

undefined8 FUN_1459a55e4(undefined8 param_1,int param_2)

{
  FUN_1459a5612();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1459a5612 FUN_1459a5612 body=61 status=ok
// SIG undefined FUN_1459a5612(void)

void FUN_1459a5612(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a18c5f0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1459a5658 FUN_1459a5658 body=32 status=ok
// SIG undefined FUN_1459a5658(void)

undefined8 * FUN_1459a5658(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a1d88b0;
  return param_1;
}



// FUNCTION 1459a5684 FUN_1459a5684 body=69 status=ok
// SIG undefined FUN_1459a5684(void)

undefined8 * FUN_1459a5684(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d5910;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x16 | 0x81;
  return param_1;
}



// FUNCTION 1459a56d4 FUN_1459a56d4 body=69 status=ok
// SIG undefined FUN_1459a56d4(void)

undefined8 * FUN_1459a56d4(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6e50e0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x16 | 0x81;
  return param_1;
}



// FUNCTION 1459a5724 FUN_1459a5724 body=69 status=ok
// SIG undefined FUN_1459a5724(void)

undefined8 * FUN_1459a5724(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6e5ee0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x16 | 0x81;
  return param_1;
}



// FUNCTION 1459a5772 FUN_1459a5772 body=32 status=ok
// SIG undefined FUN_1459a5772(void)

undefined8 * FUN_1459a5772(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a71f6e0;
  return param_1;
}



// FUNCTION 1459a5792 FUN_1459a5792 body=142 status=ok
// SIG undefined FUN_1459a5792(void)

bool FUN_1459a5792(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a5822 FUN_1459a5822 body=192 status=ok
// SIG undefined FUN_1459a5822(void)

void FUN_1459a5822(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_2 + 0x40);
  if (lVar5 == 0) {
    lVar5 = FUN_14475ec7e(param_2);
  }
  uVar2 = FUN_144a7757c();
  lVar3 = FUN_144a78ede(param_2,uVar2);
  if ((lVar5 == lVar3) && ((*(byte *)(param_2 + 0x3c) & 1) == 0)) {
    uVar2 = FUN_144a7757c();
    uVar2 = FUN_144a78ede(param_2,uVar2);
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = uVar2;
    iVar1 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
      FUN_1459a58e2((longlong *)(param_1 + 0x28),iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = puVar4;
    FUN_1414200aa(puVar4);
    FUN_1459a5966(puVar4);
    return;
  }
  return;
}



// FUNCTION 1459a58e2 FUN_1459a58e2 body=132 status=ok
// SIG undefined FUN_1459a58e2(void)

void FUN_1459a58e2(longlong param_1,int param_2)

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



// FUNCTION 1459a5966 FUN_1459a5966 body=173 status=ok
// SIG undefined FUN_1459a5966(void)

void FUN_1459a5966(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1459a5a14();
  }
  FUN_1459a60bc(lVar1 + 0x30,local_20,param_1);
  FUN_1459a5bb0(lVar1 + 0x48,local_20,param_1,FUN_147db37b0);
  FUN_1459a5bb0(lVar1 + 0x60,local_20,param_1,&LAB_147db382a);
  FUN_1459a5bb0(lVar1 + 0x78,local_20,param_1,&LAB_147db3830);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a5a14 FUN_1459a5a14 body=105 status=ok
// SIG undefined FUN_1459a5a14(void)

void FUN_1459a5a14(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1459a5aca();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1459a5a7e(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a5a7e FUN_1459a5a7e body=76 status=ok
// SIG undefined FUN_1459a5a7e(void)

void FUN_1459a5a7e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1459a5aca();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1459a5abb;
    }
  }
  lVar2 = 0;
LAB_1459a5abb:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1459a5aca FUN_1459a5aca body=228 status=ok
// SIG undefined FUN_1459a5aca(void)

longlong FUN_1459a5aca(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb10da8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411791a2;
    local_38 = &LAB_147db38c3;
    local_40 = &LAB_145acc6f3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/Engine",L"ContentBundleEngineSubsystem",&DAT_14cb10da8,&DAT_147db38c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb10da8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a5bb0 FUN_1459a5bb0 body=228 status=ok
// SIG undefined FUN_1459a5bb0(void)

undefined8
FUN_1459a5bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14ab188e0;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14ab18870;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1459a5c96(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a5c96 FUN_1459a5c96 body=216 status=ok
// SIG undefined FUN_1459a5c96(void)

undefined8 * FUN_1459a5c96(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1459a5d80 FUN_1459a5d80 body=203 status=ok
// SIG undefined FUN_1459a5d80(void)

void FUN_1459a5d80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_2 + 0x40);
  if (lVar3 == 0) {
    lVar3 = FUN_14475ec7e(param_2);
  }
  uVar1 = FUN_144a7757c();
  lVar2 = FUN_144a78ede(param_2,uVar1);
  if (lVar3 == lVar2) {
    uVar1 = FUN_144a7757c();
    lVar3 = FUN_144a78ede(param_2,uVar1);
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar2 = (longlong)*(int *)(param_1 + 0x30) << 3;
      uVar4 = 0;
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4 * 8) + 0x10) == lVar3)
        {
          if ((int)uVar4 == -1) {
            return;
          }
          uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (lVar5 >> 0x20) * 8);
          FUN_1459a5ee4(uVar1);
          FUN_1459a5fd4(uVar1);
          FUN_1459a5f3e(param_1 + 0x28,uVar4 & 0xffffffff);
          FUN_1459a5e4c(param_1 + 0x28);
          return;
        }
        lVar5 = lVar5 + 0x100000000;
        uVar4 = uVar4 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
  }
  return;
}



// FUNCTION 1459a5e4c FUN_1459a5e4c body=62 status=ok
// SIG undefined FUN_1459a5e4c(void)

void FUN_1459a5e4c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1459a5e8a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1459a5e8a FUN_1459a5e8a body=89 status=ok
// SIG undefined FUN_1459a5e8a(void)

ulonglong FUN_1459a5e8a(uint param_1,uint param_2)

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



// FUNCTION 1459a5ee4 FUN_1459a5ee4 body=90 status=ok
// SIG undefined FUN_1459a5ee4(void)

void FUN_1459a5ee4(undefined8 param_1)

{
  longlong lVar1;
  
  if (DAT_14cb0d2b0 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1459a5a14();
  }
  FUN_140457ffc(lVar1 + 0x30,param_1);
  FUN_140457ffc(lVar1 + 0x48,param_1);
  FUN_140457ffc(lVar1 + 0x60,param_1);
  FUN_140457ffc(lVar1 + 0x78,param_1);
  return;
}



// FUNCTION 1459a5f3e FUN_1459a5f3e body=91 status=ok
// SIG undefined FUN_1459a5f3e(void)

void FUN_1459a5f3e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  FUN_1459a5f9a(*(undefined8 *)(lVar1 + (longlong)(int)param_2 * 8));
  iVar2 = (int)param_1[1];
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(lVar1 + (longlong)(int)param_2 * 8),
            (void *)(lVar1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1459a5f9a FUN_1459a5f9a body=58 status=ok
// SIG undefined FUN_1459a5f9a(void)

void FUN_1459a5f9a(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
  FUN_1459a6085(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1459a5fd4 FUN_1459a5fd4 body=157 status=ok
// SIG undefined FUN_1459a5fd4(void)

void FUN_1459a5fd4(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  lVar1 = param_1[1];
  uVar2 = 0;
  if ((longlong)(int)lVar1 != 0) {
    lVar4 = 0;
    do {
      local_38 = *(undefined8 *)(lVar3 + lVar4);
      FUN_1437a2214(&local_38);
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar1 * 8 != lVar4);
    uVar2 = (undefined4)param_1[1];
    lVar3 = *param_1;
  }
  FUN_1459a6085(lVar3,uVar2);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1459a6085 FUN_1459a6085 body=54 status=ok
// SIG undefined FUN_1459a6085(void)

void FUN_1459a6085(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1459a60bc FUN_1459a60bc body=228 status=ok
// SIG undefined FUN_1459a60bc(void)

undefined8 FUN_1459a60bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ab18800;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14ab18790;
  local_38[3] = param_3;
  local_38[4] = FUN_147db3792;
  FUN_1459a61a2(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a61a2 FUN_1459a61a2 body=216 status=ok
// SIG undefined FUN_1459a61a2(void)

undefined8 * FUN_1459a61a2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1459a6298 FUN_1459a6298 body=29 status=ok
// SIG undefined FUN_1459a6298(void)

void FUN_1459a6298(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ab2e650;
  return;
}



// FUNCTION 1459a62c2 FUN_1459a62c2 body=29 status=ok
// SIG undefined FUN_1459a62c2(void)

void FUN_1459a62c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ab344e0;
  return;
}



// FUNCTION 1459a62e6 FUN_1459a62e6 body=55 status=ok
// SIG undefined FUN_1459a62e6(void)

void FUN_1459a62e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22620 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22620 = FUN_140002ddd(FUN_1464391fa,uVar1,L"GpsCondition_IsFirstRun");
  }
  return;
}



// FUNCTION 1459a6324 FUN_1459a6324 body=55 status=ok
// SIG undefined FUN_1459a6324(void)

void FUN_1459a6324(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb226d8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb226d8 = FUN_140002ddd(FUN_146439416,uVar1,L"GpsCondition_Timer");
  }
  return;
}



// FUNCTION 1459a6362 FUN_1459a6362 body=55 status=ok
// SIG undefined FUN_1459a6362(void)

void FUN_1459a6362(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22650 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22650 = FUN_140002ddd(FUN_1464392f0,uVar1,L"GpsCondition_Ticket");
  }
  return;
}



// FUNCTION 1459a639a FUN_1459a639a body=40 status=ok
// SIG undefined FUN_1459a639a(void)

undefined8 FUN_1459a639a(undefined8 param_1,int param_2)

{
  FUN_1459a63c2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a63c2 FUN_1459a63c2 body=71 status=ok
// SIG undefined FUN_1459a63c2(void)

void FUN_1459a63c2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae3a700;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a6409(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1458917dc(param_1);
  return;
}



// FUNCTION 1459a6409 FUN_1459a6409 body=49 status=ok
// SIG undefined FUN_1459a6409(void)

void FUN_1459a6409(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459a6446 FUN_1459a6446 body=29 status=ok
// SIG undefined FUN_1459a6446(void)

void FUN_1459a6446(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ae717b0;
  return;
}



// FUNCTION 1459a6470 FUN_1459a6470 body=29 status=ok
// SIG undefined FUN_1459a6470(void)

void FUN_1459a6470(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14afac1b0;
  return;
}



// FUNCTION 1459a6496 FUN_1459a6496 body=32 status=ok
// SIG undefined FUN_1459a6496(void)

undefined8 * FUN_1459a6496(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14afb3940;
  return param_1;
}



// FUNCTION 1459a64c2 FUN_1459a64c2 body=29 status=ok
// SIG undefined FUN_1459a64c2(void)

void FUN_1459a64c2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14afcb740;
  return;
}



// FUNCTION 1459a64ec FUN_1459a64ec body=29 status=ok
// SIG undefined FUN_1459a64ec(void)

void FUN_1459a64ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14afcc2c0;
  return;
}



// FUNCTION 1459a6518 FUN_1459a6518 body=40 status=ok
// SIG undefined FUN_1459a6518(void)

undefined8 FUN_1459a6518(undefined8 param_1,int param_2)

{
  FUN_1459a6540();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a6540 FUN_1459a6540 body=175 status=ok
// SIG undefined FUN_1459a6540(void)

void FUN_1459a6540(undefined8 *param_1)

{
  *param_1 = &DAT_14b127f00;
  FUN_141420108(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1459a65f0 FUN_1459a65f0 body=63 status=ok
// SIG undefined FUN_1459a65f0(void)

undefined8 FUN_1459a65f0(longlong *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1459a6630();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0001459a6623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1459a6630 FUN_1459a6630 body=57 status=ok
// SIG undefined FUN_1459a6630(void)

void FUN_1459a6630(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a330 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a330 = FUN_140002ddd(FUN_14184b05e,uVar1,L"GbxBodyNodeSettings");
  }
  return;
}



// FUNCTION 1459a6670 FUN_1459a6670 body=55 status=ok
// SIG undefined FUN_1459a6670(void)

void FUN_1459a6670(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69368 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69368 = FUN_140002ddd(FUN_1465202d8,uVar1,L"GpsTest_GbxSkillParam");
  }
  return;
}



// FUNCTION 1459a66b4 FUN_1459a66b4 body=29 status=ok
// SIG undefined FUN_1459a66b4(void)

void FUN_1459a66b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14b467720;
  return;
}



// FUNCTION 1459a66de FUN_1459a66de body=29 status=ok
// SIG undefined FUN_1459a66de(void)

void FUN_1459a66de(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14b4db7a0;
  return;
}



// FUNCTION 1459a6708 FUN_1459a6708 body=29 status=ok
// SIG undefined FUN_1459a6708(void)

void FUN_1459a6708(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14b4f88e0;
  return;
}



// FUNCTION 1459a6732 FUN_1459a6732 body=29 status=ok
// SIG undefined FUN_1459a6732(void)

void FUN_1459a6732(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14b52a290;
  return;
}



// FUNCTION 1459a675c FUN_1459a675c body=29 status=ok
// SIG undefined FUN_1459a675c(void)

void FUN_1459a675c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14b54a5b0;
  return;
}



// FUNCTION 1459a679a FUN_1459a679a body=174 status=ok
// SIG undefined FUN_1459a679a(void)

void FUN_1459a679a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
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
  thunk_FUN_1457996ca(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a684a thunk_FUN_1457996ca body=5 status=ok
// SIG undefined thunk_FUN_1457996ca(void)

void thunk_FUN_1457996ca(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  longlong *plStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(param_1 + 0x538);
  FUN_14579a09a(param_1,plVar2);
  puVar3 = (undefined8 *)(param_1 + 0x1b60);
  cVar5 = FUN_1404fa388(puVar3);
  if (cVar5 != '\0') {
    FUN_140bd765a(puVar3,0,0);
  }
  if (*(longlong *)(param_1 + 0x1a00) == 0) goto LAB_1457997db;
  lVar8 = *(longlong *)(param_1 + 0x540);
  if (lVar8 == 0) {
    uVar6 = FUN_140aff5aa();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x540) = lVar8;
  }
  lVar9 = *(longlong *)(param_1 + 0x548);
  if (lVar9 == 0) {
    if ((lVar8 == 0) || (*plVar2 == 0)) goto LAB_1457997db;
    plVar4 = *(longlong **)(lVar8 + 0xb8);
    if (plVar4 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 != '\0') {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar9 = FUN_144aff482(uVar6,plVar2);
        *(longlong *)(param_1 + 0x548) = lVar9;
        if (lVar9 == 0) goto LAB_1457997db;
        lVar8 = *(longlong *)(param_1 + 0x540);
        goto LAB_14579973e;
      }
    }
    *(undefined8 *)(param_1 + 0x548) = 0;
    goto LAB_1457997db;
  }
LAB_14579973e:
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x1a00) + 0x1588);
  if (lVar8 == 0) {
    uVar7 = FUN_140aff5aa();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x540) = lVar8;
    lVar9 = *(longlong *)(param_1 + 0x548);
    if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar2 != 0)) {
      plVar4 = *(longlong **)(lVar8 + 0xb8);
      if (plVar4 == (longlong *)0x0) {
LAB_145799966:
        lVar9 = 0;
      }
      else {
        cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
        if (cVar5 == '\0') goto LAB_145799966;
        uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar9 = FUN_144aff482(uVar7,plVar2);
      }
      *(longlong *)(param_1 + 0x548) = lVar9;
    }
  }
  FUN_1412bd664(auStack_80,lVar9 + 0xb0);
  uStack_88 = 0;
  FUN_140f7fb5b(&uStack_50,param_1,auStack_80,uVar6);
  if (puVar3 != &uStack_50) {
    *(undefined8 *)(param_1 + 0x1b60) = uStack_50;
    uStack_50 = 0;
    plVar2 = *(longlong **)(param_1 + 0x1b68);
    *(longlong **)(param_1 + 0x1b68) = plStack_48;
    plStack_48 = (longlong *)0x0;
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
  *(undefined4 *)(param_1 + 0x1b70) = uStack_40;
  *(undefined4 *)(param_1 + 0x1b74) = uStack_3c;
  *(undefined4 *)(param_1 + 0x1b78) = uStack_38;
  *(undefined4 *)(param_1 + 0x1b7c) = uStack_34;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_48 + 0x10))();
    }
  }
LAB_1457997db:
  if (*(longlong *)(param_1 + 0x1700) != 0) {
    FUN_140d0198e();
  }
  FUN_1447f69b6(param_1 + 0x1ed0);
  if ((uStack_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459a685c FUN_1459a685c body=29 status=ok
// SIG undefined FUN_1459a685c(void)

void FUN_1459a685c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14b9e2af0;
  return;
}



// FUNCTION 1459a6886 FUN_1459a6886 body=29 status=ok
// SIG undefined FUN_1459a6886(void)

void FUN_1459a6886(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba05790;
  return;
}



// FUNCTION 1459a68b0 FUN_1459a68b0 body=29 status=ok
// SIG undefined FUN_1459a68b0(void)

void FUN_1459a68b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba05880;
  return;
}



// FUNCTION 1459a68da FUN_1459a68da body=29 status=ok
// SIG undefined FUN_1459a68da(void)

void FUN_1459a68da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba31a20;
  return;
}



// FUNCTION 1459a6904 FUN_1459a6904 body=29 status=ok
// SIG undefined FUN_1459a6904(void)

void FUN_1459a6904(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba34bc0;
  return;
}



// FUNCTION 1459a692e FUN_1459a692e body=29 status=ok
// SIG undefined FUN_1459a692e(void)

void FUN_1459a692e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba34d20;
  return;
}



// FUNCTION 1459a6958 FUN_1459a6958 body=29 status=ok
// SIG undefined FUN_1459a6958(void)

void FUN_1459a6958(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba34e40;
  return;
}



// FUNCTION 1459a6982 FUN_1459a6982 body=29 status=ok
// SIG undefined FUN_1459a6982(void)

void FUN_1459a6982(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba39d10;
  return;
}



// FUNCTION 1459a69ac FUN_1459a69ac body=29 status=ok
// SIG undefined FUN_1459a69ac(void)

void FUN_1459a69ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba39e30;
  return;
}



// FUNCTION 1459a69d6 FUN_1459a69d6 body=29 status=ok
// SIG undefined FUN_1459a69d6(void)

void FUN_1459a69d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba39fe0;
  return;
}



// FUNCTION 1459a6a00 FUN_1459a6a00 body=29 status=ok
// SIG undefined FUN_1459a6a00(void)

void FUN_1459a6a00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba3a7d0;
  return;
}



// FUNCTION 1459a6a28 FUN_1459a6a28 body=81 status=ok
// SIG undefined FUN_1459a6a28(void)

void FUN_1459a6a28(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba3f2d8;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1449db362(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459a6a7a FUN_1459a6a7a body=29 status=ok
// SIG undefined FUN_1459a6a7a(void)

void FUN_1459a6a7a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1459a6a98 FUN_1459a6a98 body=61 status=ok
// SIG undefined FUN_1459a6a98(void)

undefined8 * FUN_1459a6a98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba3f2f0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a6ad6 FUN_1459a6ad6 body=9 status=ok
// SIG undefined FUN_1459a6ad6(void)

void FUN_1459a6ad6(longlong param_1)

{
  FUN_1459a6ae0(param_1 + 0x10);
  return;
}



// FUNCTION 1459a6ae0 FUN_1459a6ae0 body=81 status=ok
// SIG undefined FUN_1459a6ae0(void)

void FUN_1459a6ae0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba3ffe0;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1449db362(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459a6b32 FUN_1459a6b32 body=29 status=ok
// SIG undefined FUN_1459a6b32(void)

void FUN_1459a6b32(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1459a6b50 FUN_1459a6b50 body=61 status=ok
// SIG undefined FUN_1459a6b50(void)

undefined8 * FUN_1459a6b50(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba3fff0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459a6b9a FUN_1459a6b9a body=29 status=ok
// SIG undefined FUN_1459a6b9a(void)

void FUN_1459a6b9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba76200;
  return;
}



// FUNCTION 1459a6bc4 FUN_1459a6bc4 body=29 status=ok
// SIG undefined FUN_1459a6bc4(void)

void FUN_1459a6bc4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ba76a30;
  return;
}



// FUNCTION 1459a6bee FUN_1459a6bee body=29 status=ok
// SIG undefined FUN_1459a6bee(void)

void FUN_1459a6bee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bc56580;
  return;
}



// FUNCTION 1459a6c18 FUN_1459a6c18 body=29 status=ok
// SIG undefined FUN_1459a6c18(void)

void FUN_1459a6c18(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bc94000;
  return;
}



// FUNCTION 1459a6c42 FUN_1459a6c42 body=29 status=ok
// SIG undefined FUN_1459a6c42(void)

void FUN_1459a6c42(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bc9ded0;
  return;
}



// FUNCTION 1459a6c6c FUN_1459a6c6c body=29 status=ok
// SIG undefined FUN_1459a6c6c(void)

void FUN_1459a6c6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bc9eec0;
  return;
}



// FUNCTION 1459a6c96 FUN_1459a6c96 body=29 status=ok
// SIG undefined FUN_1459a6c96(void)

void FUN_1459a6c96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bcca900;
  return;
}



// FUNCTION 1459a6cc0 FUN_1459a6cc0 body=29 status=ok
// SIG undefined FUN_1459a6cc0(void)

void FUN_1459a6cc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bccee70;
  return;
}



// FUNCTION 1459a6cea FUN_1459a6cea body=29 status=ok
// SIG undefined FUN_1459a6cea(void)

void FUN_1459a6cea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bd25640;
  return;
}



// FUNCTION 1459a6d14 FUN_1459a6d14 body=29 status=ok
// SIG undefined FUN_1459a6d14(void)

void FUN_1459a6d14(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bd3fcd0;
  return;
}



// FUNCTION 1459a6d3e FUN_1459a6d3e body=29 status=ok
// SIG undefined FUN_1459a6d3e(void)

void FUN_1459a6d3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bd4d850;
  return;
}



// FUNCTION 1459a6d68 FUN_1459a6d68 body=29 status=ok
// SIG undefined FUN_1459a6d68(void)

void FUN_1459a6d68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bd4dd10;
  return;
}



// FUNCTION 1459a6d92 FUN_1459a6d92 body=29 status=ok
// SIG undefined FUN_1459a6d92(void)

void FUN_1459a6d92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bde0c50;
  return;
}



// FUNCTION 1459a6dbc FUN_1459a6dbc body=29 status=ok
// SIG undefined FUN_1459a6dbc(void)

void FUN_1459a6dbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bde0d50;
  return;
}



// FUNCTION 1459a6de6 FUN_1459a6de6 body=29 status=ok
// SIG undefined FUN_1459a6de6(void)

void FUN_1459a6de6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14be103d0;
  return;
}



// FUNCTION 1459a6e10 FUN_1459a6e10 body=29 status=ok
// SIG undefined FUN_1459a6e10(void)

void FUN_1459a6e10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14be8f9b0;
  return;
}


