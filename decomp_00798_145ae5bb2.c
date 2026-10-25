// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ae5bb2 FUN_145ae5bb2 body=69 status=ok
// SIG undefined FUN_145ae5bb2(void)

void FUN_145ae5bb2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145ae5bf7(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145ae5ca4(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145ae5bf7 FUN_145ae5bf7 body=38 status=ok
// SIG undefined FUN_145ae5bf7(void)

void FUN_145ae5bf7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145ae5c1e(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 145ae5c1e FUN_145ae5c1e body=133 status=ok
// SIG undefined FUN_145ae5c1e(void)

void FUN_145ae5c1e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x68);
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
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000145ae5c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ae5ca4 FUN_145ae5ca4 body=108 status=ok
// SIG undefined FUN_145ae5ca4(void)

void FUN_145ae5ca4(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,8);
  }
  return;
}



// FUNCTION 145ae5d10 FUN_145ae5d10 body=167 status=ok
// SIG undefined FUN_145ae5d10(void)

void FUN_145ae5d10(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1489b2da8(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x70 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)(puVar2 + 4) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      *(undefined4 *)(puVar2 + 9) = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2 = puVar2 + 0xe;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1489b2e38(param_1,param_2,iVar1 - param_2);
    FUN_1489b2e92(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145ae5db8 FUN_145ae5db8 body=85 status=ok
// SIG undefined FUN_145ae5db8(void)

undefined8 FUN_145ae5db8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 == 0) || ((longlong)*(int *)(param_1 + 0x6f0) == 0)) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x6e8);
    lVar2 = (longlong)*(int *)(param_1 + 0x6f0) * 8;
    do {
      lVar2 = lVar2 + -8;
      uVar1 = FUN_145ae5e0e(lVar3,param_2);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      lVar3 = lVar3 + 8;
    } while (lVar2 != 0);
  }
  return uVar1;
}



// FUNCTION 145ae5e0e FUN_145ae5e0e body=120 status=ok
// SIG undefined FUN_145ae5e0e(void)

ulonglong FUN_145ae5e0e(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if (*param_1 == (int)local_20) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
    if (param_1[1] == local_20._4_4_) goto LAB_145ae5e4e;
  }
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(&local_20);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
LAB_145ae5e4e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 145ae5e96 FUN_145ae5e96 body=40 status=ok
// SIG undefined FUN_145ae5e96(void)

undefined8 FUN_145ae5e96(undefined8 param_1,int param_2)

{
  FUN_145ae5ebe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae5ebe FUN_145ae5ebe body=152 status=ok
// SIG undefined FUN_145ae5ebe(void)

void FUN_145ae5ebe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7539f0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145ae5f56 FUN_145ae5f56 body=25 status=ok
// SIG undefined FUN_145ae5f56(void)

undefined8 FUN_145ae5f56(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145ae5f7c FUN_145ae5f7c body=117 status=ok
// SIG undefined FUN_145ae5f7c(void)

void FUN_145ae5f7c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar3 = FUN_1403ca142();
    lVar2 = *(longlong *)(lVar2 + 0x1f0);
    if (((lVar2 != 0) &&
        (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_145ae5ff2(lVar2,0,param_2,1,0);
    }
  }
  return;
}



// FUNCTION 145ae5ff2 FUN_145ae5ff2 body=125 status=ok
// SIG undefined FUN_145ae5ff2(void)

void FUN_145ae5ff2(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
    }
    param_2 = FUN_140fe13cc(param_1,uVar1);
    if (param_2 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) goto LAB_145ae6007;
    }
    param_2 = 0;
  }
LAB_145ae6007:
  uVar1 = FUN_1414b0848(param_1);
  FUN_1414b098c(uVar1,param_2,*param_3,0);
  return;
}



// FUNCTION 145ae6070 FUN_145ae6070 body=159 status=ok
// SIG undefined FUN_145ae6070(void)

void FUN_145ae6070(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_145ae60ad;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_145ae60ad;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ae60ad:
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
                    /* WARNING: Could not recover jumptable at 0x000145ae610b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ae6110 FUN_145ae6110 body=165 status=ok
// SIG undefined FUN_145ae6110(void)

undefined8 * FUN_145ae6110(undefined8 *param_1)

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
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x112) = 0;
  FUN_14485c47a(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x119) = 0;
  return param_1;
}



// FUNCTION 145ae61be FUN_145ae61be body=148 status=ok
// SIG undefined FUN_145ae61be(void)

bool FUN_145ae61be(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae6254 FUN_145ae6254 body=40 status=ok
// SIG undefined FUN_145ae6254(void)

void FUN_145ae6254(longlong param_1)

{
  FUN_1457c6c94(param_1,1);
  FUN_145881b3c(param_1 + 0x30);
  FUN_145881850(param_1 + 0x30);
  return;
}



// FUNCTION 145ae627c FUN_145ae627c body=553 status=ok
// SIG undefined FUN_145ae627c(void)

void FUN_145ae627c(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  undefined8 uVar10;
  double *pdVar11;
  uint uVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1414b167c(param_2,param_2[0x7a]);
  dVar9 = (double)param_2[0x7a];
  if ((dVar9 == 0.0) || (uVar12 = *(uint *)((longlong)dVar9 + 8), (uVar12 >> 0x1e & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
  }
  lVar1 = *(longlong *)((longlong)dVar9 + 0x1c8);
  if (lVar1 == 0) {
    local_98 = DAT_14c846508;
    local_a8 = (undefined4)DAT_14c8464f8;
    uStack_a4 = DAT_14c8464f8._4_4_;
    uStack_a0 = (undefined4)DAT_14c846500;
    uStack_9c = DAT_14c846500._4_4_;
  }
  else {
    dVar4 = *(double *)(lVar1 + 0x240);
    dVar5 = *(double *)(lVar1 + 0x248);
    dVar6 = *(double *)(lVar1 + 0x250);
    dVar7 = *(double *)(lVar1 + 600);
    pdVar11 = *(double **)(lVar1 + 0x228);
    local_88 = dVar4;
    uStack_80 = dVar5;
    local_78 = dVar6;
    uStack_70 = dVar7;
    if (pdVar11 == (double *)0x0) {
      uVar12 = 0x40;
      pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar11 = DAT_14c8463d0;
      pdVar11[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar11[2] = DAT_14c8463e0;
      pdVar11[3] = dVar9;
      dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar11[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar11[5] = dVar9;
      dVar9 = DAT_14c846508;
      pdVar11[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar11;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
    auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
    auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
    uVar12 = movmskpd(uVar12,auVar3);
    if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar11 + 2) = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar11 + 0x14) = local_78._4_4_;
      *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_70._4_4_;
      *(undefined4 *)pdVar11 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar11 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar11[6] = local_58;
      pdVar11[4] = (double)local_68;
      pdVar11[5] = dStack_60;
    }
    local_98 = pdVar11[6];
    local_a8 = *(undefined4 *)(pdVar11 + 4);
    uStack_a4 = *(undefined4 *)((longlong)pdVar11 + 0x24);
    uStack_a0 = *(undefined4 *)(pdVar11 + 5);
    uStack_9c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
  }
  FUN_1414b1610(param_2,&local_a8,1);
  local_88 = (double)*param_3;
  uStack_80 = (double)param_3[1];
  local_78 = 0.0;
  (**(code **)(*param_2 + 0x688))(param_2,&local_88,1);
  (**(code **)(*param_1 + 0x7b8))(param_1,param_2[0x7a]);
  local_68 = param_2;
  uVar10 = FUN_14477b072(param_1,DAT_14cadae68);
  (**(code **)(*param_1 + 0x248))(param_1,uVar10,&local_68);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae64de FUN_145ae64de body=258 status=ok
// SIG undefined FUN_145ae64de(void)

void FUN_145ae64de(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0x110);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *param_2 = &PTR_FUN_14b2e0010;
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0xd) = 0x447a0000;
  param_2[0xf] = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  param_2[0xe] = &PTR_FUN_14a1a0a60;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined2 *)(param_2 + 0x16) = 0;
  *(undefined8 *)((longlong)param_2 + 0x91) = 0;
  *(undefined8 *)((longlong)param_2 + 0x99) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x19] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_2[0x17] = DAT_14c8464f8;
  param_2[0x18] = uVar1;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x1d] = DAT_14c8464e0;
  param_2[0x1e] = uVar1;
  param_2[0x1f] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x21) = 0;
  return;
}



// FUNCTION 145ae65e2 FUN_145ae65e2 body=350 status=ok
// SIG undefined FUN_145ae65e2(void)

undefined4 * FUN_145ae65e2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  
  *param_1 = *param_2;
  FUN_145ae6740(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  FUN_14599ef06(param_1 + 10,param_2 + 10);
  lVar10 = *(longlong *)(param_2 + 0x2a);
  if (DAT_14c950c29 == 1) {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar10 = *(longlong *)(param_2 + 0x2a);
    }
  }
  bVar9 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x2a) = lVar10;
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  lVar10 = *(longlong *)(param_2 + 0x2e);
  if ((bVar9 & 1) != 0) {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar10 = *(longlong *)(param_2 + 0x2e);
    }
  }
  *(longlong *)(param_1 + 0x2e) = lVar10;
  uVar1 = param_2[0x31];
  uVar2 = param_2[0x32];
  uVar3 = param_2[0x33];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar3;
  *(undefined8 *)((longlong)param_1 + 0xcd) = *(undefined8 *)((longlong)param_2 + 0xcd);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x36) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_2 + 0x36) = 0;
    param_1[0x38] = param_2[0x38];
    param_1[0x39] = param_2[0x39];
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  param_1[0x46] = param_2[0x46];
  uVar4 = *(undefined8 *)(param_2 + 0x3a);
  uVar5 = *(undefined8 *)(param_2 + 0x3c);
  uVar6 = *(undefined8 *)(param_2 + 0x3e);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  uVar8 = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x44) = uVar8;
  *(undefined8 *)(param_1 + 0x3e) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x3a) = uVar4;
  *(undefined8 *)(param_1 + 0x3c) = uVar5;
  return param_1;
}



// FUNCTION 145ae6740 FUN_145ae6740 body=80 status=ok
// SIG undefined FUN_145ae6740(void)

longlong * FUN_145ae6740(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1407778c7(*param_1,(int)param_1[1]);
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



// FUNCTION 145ae6790 FUN_145ae6790 body=62 status=ok
// SIG undefined FUN_145ae6790(void)

undefined1 FUN_145ae6790(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_145ae67ce(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 145ae67ce FUN_145ae67ce body=93 status=ok
// SIG undefined FUN_145ae67ce(void)

undefined8 * FUN_145ae67ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457e745a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145ae68bc(param_1,iVar1);
      FUN_145ae682b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145ae682b FUN_145ae682b body=52 status=ok
// SIG undefined FUN_145ae682b(void)

void FUN_145ae682b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145ae6860(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 145ae6860 FUN_145ae6860 body=91 status=ok
// SIG undefined FUN_145ae6860(void)

undefined1 * FUN_145ae6860(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1411ef9e2(param_1 + 8,iVar1,0);
    FUN_1411ef971(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145ae68bc FUN_145ae68bc body=115 status=ok
// SIG undefined FUN_145ae68bc(void)

void FUN_145ae68bc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145ae6938 FUN_145ae6938 body=495 status=ok
// SIG undefined FUN_145ae6938(void)

void FUN_145ae6938(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [44];
  undefined1 local_ec [36];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  undefined1 local_88 [24];
  undefined2 local_70 [2];
  undefined8 local_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    lVar1 = FUN_140363886();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_2 + 0x3a0), lVar1 != 0)) {
      lVar2 = FUN_145ae6b9e(param_1);
      if (lVar2 != 0) {
        FUN_141068c44(param_1,local_70);
        uVar3 = FUN_141068cca(param_1);
        FUN_140f4ea62(lVar2 + 0x18,local_88,uVar3,local_70);
        FUN_1411f1bdc(&local_a0,local_88);
        local_b8 = 0;
        if (local_98 == 0x4000) {
          local_b8 = local_a0;
        }
        local_a8 = 0;
        local_b0 = 0x4000;
        local_70[0] = 0;
        local_6c = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        if (*(int *)(lVar2 + 0x48) != 0) {
          local_70[0] = 0xb;
          FUN_140c25b54(local_70);
          local_c0 = *(undefined4 *)(lVar2 + 0x50);
          local_c8 = *(undefined8 *)(lVar2 + 0x48);
          FUN_144928d62(&local_60,0);
          uVar3 = FUN_141068cca(param_1);
          FUN_141068c44(param_1,local_ec);
          FUN_140d84843(local_70,local_ec,&DAT_14c948618,uVar3);
        }
        FUN_140ac173c(local_ec,local_70);
        FUN_145ae6b28(lVar1,local_ec,&local_b8);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae6b28 FUN_145ae6b28 body=118 status=ok
// SIG undefined FUN_145ae6b28(void)

void FUN_145ae6b28(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  FUN_140cc68fa();
  uVar3 = *(undefined8 *)(param_1 + 0x6a8);
  plVar4 = *(longlong **)(param_1 + 0x6b0);
  if (plVar4 == (longlong *)0x0) {
    FUN_145ae6c26(uVar3,param_2,param_3);
    return;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  FUN_145ae6c26(uVar3,param_2,param_3);
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
                    /* WARNING: Could not recover jumptable at 0x000145ae6b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 145ae6b9e FUN_145ae6b9e body=78 status=ok
// SIG undefined FUN_145ae6b9e(void)

longlong * FUN_145ae6b9e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_145ae6bec();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 145ae6bec FUN_145ae6bec body=57 status=ok
// SIG undefined FUN_145ae6bec(void)

void FUN_145ae6bec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55440 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55440 = FUN_140002ddd(FUN_1464b20a2,uVar1,L"BinderBehaviorMod_OverrideAINodeChainActor")
    ;
  }
  return;
}



// FUNCTION 145ae6c26 FUN_145ae6c26 body=490 status=ok
// SIG undefined FUN_145ae6c26(void)

void FUN_145ae6c26(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar8 = FUN_140ac16b0((undefined4 *)(param_1 + 0x98));
  if (cVar8 == '\0') {
    *(undefined4 *)(param_1 + 0xb8) = param_2[8];
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar11 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0xb0) = uVar11;
    *(undefined4 *)(param_1 + 0x98) = uVar3;
    *(undefined4 *)(param_1 + 0x9c) = uVar4;
    *(undefined4 *)(param_1 + 0xa0) = uVar5;
    *(undefined4 *)(param_1 + 0xa4) = uVar6;
    bVar14 = param_2[6] != 0;
  }
  else {
    bVar14 = false;
  }
  lVar10 = *param_3;
  iVar9 = *(int *)(param_1 + 0x88);
  if (iVar9 == (int)param_3[1] && *(longlong *)(param_1 + 0x80) == lVar10) {
LAB_145ae6cda:
    if (!bVar14) goto LAB_145ae6d16;
  }
  else {
    if (*(longlong *)(param_1 + 0x80) != lVar10 || iVar9 != (int)param_3[1]) {
      *(longlong *)(param_1 + 0x80) = lVar10;
      iVar9 = (int)param_3[1];
      *(int *)(param_1 + 0x88) = iVar9;
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    if (lVar10 == 0) goto LAB_145ae6cda;
    if (!bVar14 && 0xfffffffd < iVar9 - 1U) goto LAB_145ae6d16;
  }
  lVar10 = param_1 + 0x60;
  cVar8 = FUN_144729dda(lVar10);
  if ((((cVar8 != '\0') && (lVar12 = FUN_14479d2ce(lVar10), (*(byte *)(lVar12 + 0x348) & 2) == 0))
      || (*(longlong *)(param_1 + 0x68) != 0)) || (*(longlong *)(param_1 + 0x78) != 0)) {
    FUN_140cd0e64(param_1);
    plVar13 = (longlong *)FUN_14479d2ce(lVar10);
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x5c8))(plVar13,0);
    }
  }
LAB_145ae6d16:
  lVar10 = FUN_14479d2ce(param_1 + 0x48);
  if (lVar10 != 0) {
    uVar11 = FUN_145795626(param_1);
    FUN_140937dea(&local_38,uVar11);
    if (local_30 != (longlong *)0x0) {
      iVar9 = (int)local_30[1];
      do {
        if (iVar9 == 0) {
          plVar13 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar7 = (int)local_30[1];
        bVar14 = iVar9 == iVar7;
        if (bVar14) {
          *(int *)(local_30 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
        plVar13 = local_30;
      } while (!bVar14);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (plVar13 != (longlong *)0x0) {
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x20))(local_38,lVar10);
        }
        LOCK();
        plVar2 = plVar13 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae6e12 FUN_145ae6e12 body=266 status=ok
// SIG undefined FUN_145ae6e12(void)

void FUN_145ae6e12(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  FUN_1407cbe30();
  FUN_140ac6c96(&DAT_14cbdf478,param_1 + 0x298);
  FUN_140ac6c96(&DAT_14cbdf4a0,param_1 + 0x2a8);
  FUN_140ac6c96(&DAT_14cbdf4c8,param_1 + 0x2b8);
  FUN_140ac6c96(&DAT_14cbdf4f0,param_1 + 0x2c8);
  FUN_140ac6c96(&DAT_14cbdf518,param_1 + 0x2d8);
  FUN_140ac6c96(&DAT_14cbdf540,param_1 + 0x2e8);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_145ae6f1c(lVar1 + 0xd0);
    **(undefined8 **)(lVar1 + 0xd0) = DAT_14cbdf3d8;
    *(undefined8 *)(*(longlong *)(lVar1 + 0xd0) + 0x78) = DAT_14cbdf3e0;
    *(undefined1 *)(*(longlong *)(lVar1 + 0xd0) + 0xea) = 1;
    if (*(longlong *)(param_1 + 0x160) == 0) {
      plVar3 = &DAT_14c9a1308;
    }
    else {
      plVar3 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdf568);
    }
    if (*plVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_14000584e(*plVar3,0);
    }
    *(undefined1 *)(lVar1 + 0xb4) = uVar2;
  }
  return;
}



// FUNCTION 145ae6f1c FUN_145ae6f1c body=111 status=ok
// SIG undefined FUN_145ae6f1c(void)

void FUN_145ae6f1c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 2) {
    *(undefined4 *)(param_1 + 1) = 2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 2U - iVar1) {
      FUN_145ae7036(param_1,iVar1);
    }
    FUN_145ae6f8b((longlong)iVar1 * 0x78 + *param_1,2U - iVar1);
    return;
  }
  if (iVar1 == 2) {
    return;
  }
  FUN_148eb696e(param_1,iVar1 + -2);
  FUN_148eb69be(param_1);
  return;
}



// FUNCTION 145ae6f8b FUN_145ae6f8b body=34 status=ok
// SIG undefined FUN_145ae6f8b(void)

void FUN_145ae6f8b(longlong param_1,int param_2)

{
  do {
    FUN_145ae6fae(param_1);
    param_1 = param_1 + 0x78;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 145ae6fae FUN_145ae6fae body=135 status=ok
// SIG undefined FUN_145ae6fae(void)

longlong FUN_145ae6fae(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1446f470e(param_1,&DAT_149dfb77a,1);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x18) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x20) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x28) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x30) = (int)plVar2[1];
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 99) = 0;
  *(undefined8 *)(param_1 + 0x6b) = 0;
  return param_1;
}



// FUNCTION 145ae7036 FUN_145ae7036 body=143 status=ok
// SIG undefined FUN_145ae7036(void)

void FUN_145ae7036(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ae70d0 FUN_145ae70d0 body=665 status=ok
// SIG undefined FUN_145ae70d0(void)

undefined8 * FUN_145ae70d0(undefined8 *param_1)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145ae736a();
  *param_1 = &PTR_FUN_14a4d5a20;
  param_1[0xd] = &PTR_FUN_14a4d5d00;
  param_1[0x1c] = 0x10000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x21] = 0x10000000000;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_1413336e6();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1412217cc();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
    local_38 = param_1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_40 = FUN_1458f0824();
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_40);
    }
    FUN_140909372(&local_40,&local_38);
    local_48 = param_1[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_50 = FUN_145957af6();
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_50);
    }
    FUN_140909372(&local_50,&local_48);
    local_58 = param_1[2];
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_60 = FUN_1458d4322();
    if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_60);
    }
    FUN_140909372(&local_60,&local_58);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae736a FUN_145ae736a body=344 status=ok
// SIG undefined FUN_145ae736a(void)

undefined8 * FUN_145ae736a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a470110;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000;
  *(undefined1 *)((longlong)param_1 + 100) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x66) = 0xffff;
  *(undefined4 *)(param_1 + 7) = 8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  lVar1 = param_1[2];
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
    }
    *(undefined1 *)((longlong)param_1 + 100) = *(undefined1 *)(lVar2 + 100);
    *(undefined2 *)((longlong)param_1 + 0x66) = *(undefined2 *)(lVar2 + 0x66);
  }
  else {
    lVar2 = FUN_1405621bc();
    if (lVar1 != lVar2) {
      *(char *)((longlong)param_1 + 100) = (char)DAT_14cab2680 - (char)DAT_14cab26ac;
      local_28 = param_1[2];
      if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      local_38 = &local_28;
      local_40 = (longlong)param_1 + 100;
      FUN_145ae74c4(local_2c);
      local_28 = param_1[3];
      FUN_1400021e4(&local_28,&local_40);
      FUN_1400abbfa(&DAT_14cab29b8,&local_28,param_3,0);
      *(undefined2 *)((longlong)param_1 + 0x66) = (undefined2)local_28;
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae74c4 FUN_145ae74c4 body=326 status=ok
// SIG undefined FUN_145ae74c4(void)

undefined4 * FUN_145ae74c4(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ae7698(local_40);
  plVar1 = (longlong *)param_2[1];
  bVar4 = *(byte *)*param_2;
  *local_38 = bVar4;
  lVar2 = *plVar1;
  *(longlong *)(local_38 + 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    bVar4 = *local_38;
  }
  local_38[0x10] = 0xff;
  local_38[0x11] = 0xff;
  local_38[0x12] = 0xff;
  local_38[0x13] = 0xff;
  local_44 = local_40[0];
  cVar5 = FUN_145ae760c(bVar4,local_38,&local_44);
  uVar3 = local_44;
  if (cVar5 == '\0') {
    uVar8 = DAT_14cab2680 - DAT_14cab26ac;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar6 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= DAT_14cab26c0)) {
      uVar8 = DAT_14cab26c0 - 1U & (uint)bVar4;
      *(uint *)(local_38 + 0x14) = uVar8;
      puVar7 = DAT_14cab26b8;
      if (DAT_14cab26b8 == (undefined *)0x0) {
        puVar7 = &DAT_14cab26b0;
      }
      *(undefined4 *)(local_38 + 0x10) =
           *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cab26c0 - 1U & uVar8) * 4);
      puVar7 = DAT_14cab26b8;
      if (DAT_14cab26b8 == (undefined *)0x0) {
        puVar7 = &DAT_14cab26b0;
      }
      *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cab26c0 - 1U & uVar8) * 4) = local_44;
    }
    else {
      DAT_14cab26c0 = iVar9;
      FUN_1414b2d34();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae760c FUN_145ae760c body=139 status=ok
// SIG undefined FUN_145ae760c(void)

undefined8 FUN_145ae760c(uint param_1,char *param_2,int *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cab2680 != DAT_14cab26ac) && (DAT_14cab2680 - DAT_14cab26ac != 1)) {
    puVar6 = &DAT_14cab26b0;
    if (DAT_14cab26b8 != (undefined *)0x0) {
      puVar6 = DAT_14cab26b8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cab26c0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        pcVar1 = (char *)(DAT_14cab2678 + (longlong)iVar5 * 0x18);
        if (*pcVar1 == *param_2) {
          uVar2 = *(undefined4 *)(param_2 + 4);
          uVar3 = *(undefined4 *)(param_2 + 8);
          uVar4 = *(undefined4 *)(param_2 + 0xc);
          *(undefined4 *)pcVar1 = *(undefined4 *)param_2;
          *(undefined4 *)(pcVar1 + 4) = uVar2;
          *(undefined4 *)(pcVar1 + 8) = uVar3;
          *(undefined4 *)(pcVar1 + 0xc) = uVar4;
          FUN_14754ed30(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = *(int *)(pcVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 145ae7698 FUN_145ae7698 body=283 status=ok
// SIG undefined FUN_145ae7698(void)

int * FUN_145ae7698(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cab26a8;
  iVar3 = DAT_14cab2680;
  if (DAT_14cab26ac == 0) {
    iVar2 = DAT_14cab2680 + 1;
    bVar7 = DAT_14cab2684 == DAT_14cab2680;
    DAT_14cab2680 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cab2678,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cab2688,1);
    puVar4 = DAT_14cab2698;
    if (DAT_14cab2698 == (undefined *)0x0) {
      puVar4 = &DAT_14cab2688;
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
    lVar6 = (longlong)DAT_14cab26a8;
    DAT_14cab26a8 = *(int *)(DAT_14cab2678 + 4 + lVar6 * 0x18);
    DAT_14cab26ac = DAT_14cab26ac + -1;
    if (DAT_14cab26ac != 0) {
      *(undefined4 *)(DAT_14cab2678 + (longlong)DAT_14cab26a8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cab2688;
  if (DAT_14cab2698 != (undefined *)0x0) {
    puVar4 = DAT_14cab2698;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cab2678;
  return param_1;
}



// FUNCTION 145ae77b4 FUN_145ae77b4 body=127 status=ok
// SIG undefined FUN_145ae77b4(void)

void FUN_145ae77b4(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) | 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) & 0xf0;
  (**(code **)(*param_1 + 0x5d8))();
  cVar1 = FUN_144a884fa(param_1);
  if ((cVar1 == '\0') && ((int)(uint)*(byte *)((longlong)param_1 + 0x1fc) <= DAT_14cb0cbf8)) {
    cVar1 = FUN_140041326(param_1);
    if (cVar1 != '\0') {
      lVar2 = param_1[0x16];
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x000145ae781f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar2 + 0x218) + 0x148))(*(longlong **)(lVar2 + 0x218),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145ae785a FUN_145ae785a body=270 status=ok
// SIG undefined FUN_145ae785a(void)

void FUN_145ae785a(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x2a8);
  if (lVar7 == 0) {
    return;
  }
  dVar1 = *(double *)(param_1 + 0x2d8);
  dVar2 = *(double *)(param_1 + 0x290);
  dVar3 = *(double *)(param_1 + 0x2d0);
  dVar4 = *(double *)(param_1 + 0x288);
  dVar5 = *(double *)(param_1 + 0x2c8);
  dVar6 = *(double *)(param_1 + 0x280);
  FUN_144a62f0c(lVar7,*(undefined8 *)(lVar7 + 0x38),5);
  *(double *)(lVar7 + 0x198) = dVar5 / dVar6;
  *(double *)(lVar7 + 0x1a0) = dVar3 / dVar4;
  *(double *)(lVar7 + 0x1a8) = dVar1 / dVar2;
  if (((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x2c8))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x2d0)))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x2d8)))) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  FUN_14045627c(*(undefined8 *)(param_1 + 0x2a8),uVar8,1);
  return;
}



// FUNCTION 145ae7974 FUN_145ae7974 body=58 status=ok
// SIG undefined FUN_145ae7974(void)

undefined8 * FUN_145ae7974(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14abc9100;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffc0c0c0;
  return param_1;
}



// FUNCTION 145ae79ae FUN_145ae79ae body=40 status=ok
// SIG undefined FUN_145ae79ae(void)

undefined8 FUN_145ae79ae(undefined8 param_1,int param_2)

{
  FUN_145ae79d6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae79d6 FUN_145ae79d6 body=98 status=ok
// SIG undefined FUN_145ae79d6(void)

void FUN_145ae79d6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad23570;
  param_1[5] = &PTR_FUN_14ad23b50;
  param_1[6] = &PTR_LAB_14ad23b90;
  plVar3 = (longlong *)param_1[0x58];
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
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145ae7a38 FUN_145ae7a38 body=30 status=ok
// SIG undefined FUN_145ae7a38(void)

void FUN_145ae7a38(longlong param_1)

{
  FUN_145ae7a56(*(undefined8 *)(param_1 + 0x28));
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145ae7a56 FUN_145ae7a56 body=108 status=ok
// SIG undefined FUN_145ae7a56(void)

void FUN_145ae7a56(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_141092d32(&DAT_14caced90);
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_141092d32(&DAT_14cacedd0);
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (*(char *)(param_1 + 0x110) != '\x01') {
    return;
  }
  FUN_148157944(param_1 + 0x10);
  return;
}



// FUNCTION 145ae7ac2 FUN_145ae7ac2 body=40 status=ok
// SIG undefined FUN_145ae7ac2(void)

undefined8 FUN_145ae7ac2(undefined8 param_1,int param_2)

{
  FUN_1414b2f0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae7af2 FUN_145ae7af2 body=61 status=ok
// SIG undefined FUN_145ae7af2(void)

undefined8 * FUN_145ae7af2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14b366860;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 4;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  return param_1;
}



// FUNCTION 145ae7b30 FUN_145ae7b30 body=38 status=ok
// SIG undefined FUN_145ae7b30(void)

undefined8 FUN_145ae7b30(undefined8 param_1,int param_2)

{
  FUN_145ae7b56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae7b56 FUN_145ae7b56 body=100 status=ok
// SIG undefined FUN_145ae7b56(void)

void FUN_145ae7b56(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3ed780;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_FUN_14a1b6cf0;
  FUN_1449db362(param_1 + 9);
  FUN_144760f98(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ae7bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145ae7bba FUN_145ae7bba body=57 status=ok
// SIG undefined FUN_145ae7bba(void)

void FUN_145ae7bba(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1414b2f6c();
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x60), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145ae7be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))
              (plVar1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x70));
    return;
  }
  return;
}



// FUNCTION 145ae7bfe FUN_145ae7bfe body=127 status=ok
// SIG undefined FUN_145ae7bfe(void)

undefined8 * FUN_145ae7bfe(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b848970;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_144a5dc74(param_1 + 0x13);
  FUN_144a5dc74(param_1 + 0x15);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 145ae7d08 FUN_145ae7d08 body=175 status=ok
// SIG undefined FUN_145ae7d08(void)

void FUN_145ae7d08(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x118) = 0;
  plVar3 = *(longlong **)(param_1 + 0x120);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
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
  *(undefined8 *)(param_1 + 0x128) = 0;
  plVar3 = *(longlong **)(param_1 + 0x130);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x130) = 0;
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
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000145ae7db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(param_1 + 0x30);
  return;
}



// FUNCTION 145ae7db8 FUN_145ae7db8 body=9 status=ok
// SIG undefined FUN_145ae7db8(void)

void FUN_145ae7db8(longlong param_1)

{
  FUN_145ae7dcc(param_1 + 0x10);
  return;
}



// FUNCTION 145ae7dc2 FUN_145ae7dc2 body=9 status=ok
// SIG undefined FUN_145ae7dc2(void)

void FUN_145ae7dc2(longlong param_1)

{
  FUN_145ae7dcc(param_1 + 0x10);
  return;
}



// FUNCTION 145ae7dcc FUN_145ae7dcc body=83 status=ok
// SIG undefined FUN_145ae7dcc(void)

void FUN_145ae7dcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9b52b0;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae7e24 FUN_145ae7e24 body=64 status=ok
// SIG undefined FUN_145ae7e24(void)

void FUN_145ae7e24(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba76b70;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  FUN_1446f8bcc(puVar1 + 10,0);
  return;
}



// FUNCTION 145ae7e64 FUN_145ae7e64 body=40 status=ok
// SIG undefined FUN_145ae7e64(void)

undefined8 FUN_145ae7e64(undefined8 param_1,int param_2)

{
  FUN_145ae7e8c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae7e8c FUN_145ae7e8c body=167 status=ok
// SIG undefined FUN_145ae7e8c(void)

void FUN_145ae7e8c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14be8e3b0;
  lVar4 = 0x1d0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0xa8;
  } while (lVar4 != 0x80);
  FUN_144a76fd2(param_1 + 0x12);
  plVar3 = (longlong *)param_1[0x11];
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
  plVar3 = (longlong *)param_1[0xf];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ae7f3c FUN_145ae7f3c body=61 status=ok
// SIG undefined FUN_145ae7f3c(void)

undefined8 * FUN_145ae7f3c(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14bee1be0;
  lVar1 = FUN_140e3ec56();
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    FUN_140aa6c08(lVar1);
  }
  return param_1;
}



// FUNCTION 145ae7f82 FUN_145ae7f82 body=61 status=ok
// SIG undefined FUN_145ae7f82(void)

undefined8 * FUN_145ae7f82(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14bee3a70;
  lVar1 = FUN_140c81140();
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    FUN_140aa6c08(lVar1);
  }
  return param_1;
}



// FUNCTION 145ae7fc0 FUN_145ae7fc0 body=54 status=ok
// SIG undefined FUN_145ae7fc0(void)

undefined8 FUN_145ae7fc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    cVar1 = (**(code **)(*param_2 + 0x48))(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else if ((*(char *)(param_1 + 0x10) == '\0') &&
          (cVar1 = (**(code **)(*param_2 + 0x48))(param_2), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 145ae800c FUN_145ae800c body=210 status=ok
// SIG undefined FUN_145ae800c(void)

ulonglong FUN_145ae800c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  (**(code **)(*param_2 + 0x28))(param_2);
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    uVar1 = FUN_1414b30ac(param_1 + 0x10,&local_b8);
    uVar3 = (ulonglong)uVar1;
  }
  if (local_58 != 0) {
    plVar2 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar2 = local_38;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae80e0 FUN_145ae80e0 body=447 status=ok
// SIG undefined FUN_145ae80e0(void)

undefined4 FUN_145ae80e0(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 **local_b0 [3];
  ushort local_98;
  byte local_90;
  undefined1 local_88 [40];
  longlong local_60;
  undefined1 local_50 [40];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_50[0] = 0;
  local_28 = 0;
  local_c0 = *(undefined8 *)(param_1 + 0x10);
  local_b8 = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*param_2 + 0x10))(param_2,local_88);
  cVar2 = FUN_1401144ce(local_88);
  if (cVar2 != '\0') {
    uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
    plVar5 = (longlong *)FUN_140ec3c65(uVar4);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x60))(plVar5,local_88);
      if (lVar6 != 0) {
        local_d0 = *(longlong *)(lVar6 + 0x10);
        if (*(longlong *)(lVar6 + 0x10) == 0) {
          local_d0 = lVar6;
        }
        local_c8 = *(undefined4 *)(lVar6 + 0x18);
        uVar4 = FUN_140d7fcdc(&local_d0,local_88);
        FUN_1456bb102(local_50,uVar4);
      }
    }
  }
  cVar2 = FUN_1447f8eee(local_50);
  if (cVar2 != '\0') {
    uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
    FUN_1456bb102(local_50,uVar4);
  }
  FUN_140168de2(param_1 + 0x20,local_b0,local_50);
  uVar3 = FUN_144a7fca4(local_b0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar7 = local_b0;
    if (0x18 < local_98) {
      pppuVar7 = (undefined8 ***)local_b0[0];
    }
    (*pcVar1)(pppuVar7);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_144a5ac3a(local_50);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae82aa FUN_145ae82aa body=714 status=ok
// SIG undefined FUN_145ae82aa(void)

longlong FUN_145ae82aa(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x10);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  uVar6 = FUN_1414b3267(param_2);
  iVar7 = FUN_145ae8576(plVar1,uVar6,param_2);
  plVar9 = plStack_50;
  if (iVar7 == -1) {
    lVar8 = FUN_14001cc68(0x498,0x10);
    FUN_1414b340c(lVar8,param_1,param_2);
    plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14b5272f0;
    plVar9[2] = lVar8;
    if ((lVar8 != 0) &&
       (((*(longlong *)(lVar8 + 0xb0) == 0 || (*(longlong *)(lVar8 + 0xb8) == 0)) ||
        (*(int *)(*(longlong *)(lVar8 + 0xb8) + 8) < 1)))) {
      if (plVar9 == (longlong *)0x0) {
        *(longlong *)(lVar8 + 0xb0) = lVar8;
        plVar10 = *(longlong **)(lVar8 + 0xb8);
        if (plVar10 != (longlong *)0x0) {
LAB_145ae84e2:
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
          *(longlong **)(lVar8 + 0xb8) = plVar9;
          if (plVar9 != (longlong *)0x0) goto LAB_145ae8402;
        }
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        *(longlong *)(lVar8 + 0xb0) = lVar8;
        if (*(longlong **)(lVar8 + 0xb8) != plVar9) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          plVar10 = *(longlong **)(lVar8 + 0xb8);
          if (plVar10 != (longlong *)0x0) goto LAB_145ae84e2;
          *(longlong **)(lVar8 + 0xb8) = plVar9;
        }
LAB_145ae8402:
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    plVar10 = plStack_50;
    local_58 = lVar8;
    if (plVar9 == plStack_50) {
      plVar5 = plStack_50;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
          plVar10 = plVar9;
          goto joined_r0x000145ae8541;
        }
      }
    }
    else {
      plVar5 = plVar9;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          puVar4 = (undefined8 *)*plStack_50;
          plStack_50 = plVar9;
          (*(code *)*puVar4)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
joined_r0x000145ae8541:
          plVar5 = plStack_50;
          if (iVar7 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            plVar5 = plStack_50;
          }
        }
      }
    }
    plStack_50 = plVar5;
    local_40 = &local_58;
    local_48 = param_2;
    FUN_145ae85ee(plVar1,local_34);
    plVar1 = plStack_50;
LAB_145ae844b:
    plStack_50 = plVar1;
    lVar8 = local_58;
    plVar1 = plStack_50;
    if (plStack_50 == (longlong *)0x0) goto LAB_145ae8341;
  }
  else {
    plVar10 = (longlong *)(*plVar1 + (longlong)iVar7 * 0x88 + 0x70);
    if (*plVar1 + (longlong)iVar7 * 0x88 == 0) {
      plVar10 = (longlong *)0x0;
    }
    lVar8 = *plVar10;
    plVar1 = (longlong *)plVar10[1];
    if (plVar1 == (longlong *)0x0) goto LAB_145ae8341;
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    local_58 = lVar8;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_50 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        puVar4 = (undefined8 *)*plStack_50;
        plStack_50 = plVar1;
        (*(code *)*puVar4)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar1 = plStack_50;
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          plVar1 = plStack_50;
        }
      }
      goto LAB_145ae844b;
    }
  }
  plStack_50 = plVar1;
  plVar9 = plStack_50;
  lVar8 = local_58;
  LOCK();
  plVar1 = plStack_50 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plStack_50)(plStack_50);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_145ae8341:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae8576 FUN_145ae8576 body=119 status=ok
// SIG undefined FUN_145ae8576(void)

int FUN_145ae8576(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1414b3116(lVar1 + (longlong)iVar4 * 0x88,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x80 + (longlong)iVar4 * 0x88);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 145ae85ee FUN_145ae85ee body=321 status=ok
// SIG undefined FUN_145ae85ee(void)

undefined4 * FUN_145ae85ee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ae87a0(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  FUN_140d600ee(local_38,*param_3);
  *(undefined8 *)(local_38 + 0x70) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 0x78) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 0x80) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = FUN_1414b3267(local_38);
  cVar3 = FUN_145ae8730(param_1,uVar4,local_38,&local_44);
  uVar2 = local_44;
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
      *(uint *)(local_38 + 0x84) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 0x80) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145ae889c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae8730 FUN_145ae8730 body=112 status=ok
// SIG undefined FUN_145ae8730(void)

undefined8 FUN_145ae8730(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_145ae8576(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x88 + *param_1);
    FUN_145c50106(_Dst);
    memmove(_Dst,param_3,0x80);
    FUN_148aeaf90(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 145ae87a0 FUN_145ae87a0 body=251 status=ok
// SIG undefined FUN_145ae87a0(void)

int * FUN_145ae87a0(longlong *param_1,int *param_2)

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
      FUN_1401600aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x88);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x88) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x88 + *param_1;
  return param_2;
}



// FUNCTION 145ae889c FUN_145ae889c body=463 status=ok
// SIG undefined FUN_145ae889c(void)

void FUN_145ae889c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x88;
        iVar7 = FUN_1414b3267(lVar3 + lVar4);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x84 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x80 + lVar4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae8a6c FUN_145ae8a6c body=172 status=ok
// SIG undefined FUN_145ae8a6c(void)

void FUN_145ae8a6c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ae8c18();
  uVar2 = FUN_1448c2e86();
  FUN_145ae8b1a(&local_48);
  FUN_145ae8b92(uVar2,local_40,local_48);
  if (0 < *(int *)(param_1 + 0x118)) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x110) + lVar3);
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x118));
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae8b1a FUN_145ae8b1a body=120 status=ok
// SIG undefined FUN_145ae8b1a(void)

undefined8 * FUN_145ae8b1a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c967930) {
    FUN_144b3d300(&DAT_14c967930);
    if (DAT_14c967930 == -1) {
      FUN_1446f470e(&DAT_14c967928,L"InputDevice",1);
      _Init_thread_footer(&DAT_14c967930);
    }
  }
  *param_1 = DAT_14c967928;
  return param_1;
}



// FUNCTION 145ae8b92 FUN_145ae8b92 body=133 status=ok
// SIG undefined FUN_145ae8b92(void)

longlong * FUN_145ae8b92(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_145ae8c9e(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 145ae8c18 FUN_145ae8c18 body=80 status=ok
// SIG undefined FUN_145ae8c18(void)

void FUN_145ae8c18(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(longlong *)(param_1 + 0x20) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ae8c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ae8c80 FUN_145ae8c80 body=29 status=ok
// SIG undefined FUN_145ae8c80(void)

undefined8 FUN_145ae8c80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae8c9e FUN_145ae8c9e body=132 status=ok
// SIG undefined FUN_145ae8c9e(void)

void FUN_145ae8c9e(longlong param_1,int param_2)

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



// FUNCTION 145ae8d22 FUN_145ae8d22 body=44 status=ok
// SIG undefined FUN_145ae8d22(void)

void FUN_145ae8d22(undefined8 param_1)

{
  thunk_FUN_1446f1718();
  FUN_1408a750e(param_1,1);
  FUN_1414b36c4(param_1);
  FUN_145ae8d4e(param_1);
  return;
}



// FUNCTION 145ae8d4e FUN_145ae8d4e body=325 status=ok
// SIG undefined FUN_145ae8d4e(void)

void FUN_145ae8d4e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14115695c((longlong *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x280),1);
  if (0 < *(int *)(param_1 + 0x270)) {
    lVar3 = 0x18;
    lVar4 = 0;
    lVar2 = 0;
    do {
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[0] = 0;
      local_78[1] = 0;
      FUN_145814950(*(longlong *)(param_1 + 0x268) + lVar4,local_78);
      if (local_78[2] != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x278) + -0x18 + lVar3);
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x260))) {
        FUN_14581504c(local_78,*(undefined8 *)(*(longlong *)(param_1 + 600) + (longlong)iVar1 * 8),
                      *(longlong *)(param_1 + 0x278) + lVar3);
        FUN_145814950(*(longlong *)(param_1 + 0x268) + lVar4,local_78);
        if (local_78[2] != 0) {
          FUN_1400020a8();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + 0x28;
    } while (lVar2 < *(int *)(param_1 + 0x270));
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae8e94 FUN_145ae8e94 body=49 status=ok
// SIG undefined FUN_145ae8e94(void)

void FUN_145ae8e94(void)

{
  longlong lVar1;
  
  lVar1 = FUN_145ae8ec6(0);
  if (*(longlong *)(lVar1 + 0x98) != 0) {
    FUN_145ae8f4a();
    *(undefined8 *)(lVar1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 145ae8ec6 FUN_145ae8ec6 body=131 status=ok
// SIG undefined FUN_145ae8ec6(void)

undefined * FUN_145ae8ec6(code *param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      if (param_1 == (code *)0x0) {
        puVar1 = (undefined *)0x0;
      }
      else {
        puVar1 = &DAT_14c844b48;
        (*param_1)(&DAT_14c844b48);
      }
      DAT_14c844be0 = puVar1;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  return &DAT_14c844b48;
}



// FUNCTION 145ae8f4a FUN_145ae8f4a body=429 status=ok
// SIG undefined FUN_145ae8f4a(void)

void FUN_145ae8f4a(char *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*param_1 == '\x01') {
    FUN_145ae962a(param_1);
  }
  FUN_145ae980e(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x80);
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
  plVar3 = *(longlong **)(param_1 + 0x70);
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
  plVar3 = *(longlong **)(param_1 + 0x60);
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
  FUN_145ae987e(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    FUN_145ae90f8(lVar4);
    FUN_1400020a8(lVar4);
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ae90f8 FUN_145ae90f8 body=431 status=ok
// SIG undefined FUN_145ae90f8(void)

void FUN_145ae90f8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x248));
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1400020a8();
  }
  FUN_145ae92a8(param_1 + 0x1f8);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  puVar1 = *(undefined8 **)(param_1 + 0x1b8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_145ae92de(param_1 + 0x140);
  lVar2 = *(longlong *)(param_1 + 0x138);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_145ae9314(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 0x38);
  FUN_1406dd150(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae92a8 FUN_145ae92a8 body=53 status=ok
// SIG undefined FUN_145ae92a8(void)

void FUN_145ae92a8(longlong *param_1)

{
  FUN_145ae94cc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae92de FUN_145ae92de body=53 status=ok
// SIG undefined FUN_145ae92de(void)

void FUN_145ae92de(longlong *param_1)

{
  FUN_145ae934c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae9314 FUN_145ae9314 body=55 status=ok
// SIG undefined FUN_145ae9314(void)

void FUN_145ae9314(longlong *param_1)

{
  FUN_1414b3fb6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae934c FUN_145ae934c body=309 status=ok
// SIG undefined FUN_145ae934c(void)

void FUN_145ae934c(longlong *param_1)

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
      FUN_145ae9482((longlong)iStack_4c * 0x28 + *local_68);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae9482 FUN_145ae9482 body=74 status=ok
// SIG undefined FUN_145ae9482(void)

void FUN_145ae9482(longlong *param_1)

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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ae94cc FUN_145ae94cc body=349 status=ok
// SIG undefined FUN_145ae94cc(void)

void FUN_145ae94cc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x18 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae962a FUN_145ae962a body=484 status=ok
// SIG undefined FUN_145ae962a(void)

void FUN_145ae962a(undefined1 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
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
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar4 = *(longlong **)(param_1 + 0x40);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
  iVar3 = *(int *)(param_1 + 0x54);
  FUN_145ae987e(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    FUN_1467d7b50(param_1 + 0x48);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  plVar4 = *(longlong **)(param_1 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
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
  *(undefined8 *)(param_1 + 0x68) = 0;
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
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
  iVar3 = *(int *)(param_1 + 0x94);
  FUN_145ae980e(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x94) != 0)) {
    FUN_1467d7c00(param_1 + 0x88);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar4 = *(longlong **)(param_1 + 0x80);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
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
  FUN_1414b39b0(*(undefined8 *)(param_1 + 0x20));
  *param_1 = 0;
  return;
}



// FUNCTION 145ae980e FUN_145ae980e body=73 status=ok
// SIG undefined FUN_145ae980e(void)

void FUN_145ae980e(longlong param_1,int param_2)

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



// FUNCTION 145ae9858 FUN_145ae9858 body=38 status=ok
// SIG undefined FUN_145ae9858(void)

undefined8 FUN_145ae9858(undefined8 param_1,int param_2)

{
  FUN_1414b3a68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae987e FUN_145ae987e body=75 status=ok
// SIG undefined FUN_145ae987e(void)

void FUN_145ae987e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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



// FUNCTION 145ae98ca FUN_145ae98ca body=9 status=ok
// SIG undefined FUN_145ae98ca(void)

void FUN_145ae98ca(longlong param_1)

{
  FUN_1456e91d4(param_1 + 0x10);
  return;
}



// FUNCTION 145ae98d4 FUN_145ae98d4 body=24 status=ok
// SIG undefined FUN_145ae98d4(void)

void FUN_145ae98d4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ae98e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145ae98ec FUN_145ae98ec body=40 status=ok
// SIG undefined FUN_145ae98ec(void)

undefined8 FUN_145ae98ec(undefined8 param_1,int param_2)

{
  FUN_145ae9914();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae9914 FUN_145ae9914 body=57 status=ok
// SIG undefined FUN_145ae9914(void)

void FUN_145ae9914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0fc130;
  FUN_145ae994d(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ae994d FUN_145ae994d body=38 status=ok
// SIG undefined FUN_145ae994d(void)

void FUN_145ae994d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145ae9974(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145ae9974 FUN_145ae9974 body=73 status=ok
// SIG undefined FUN_145ae9974(void)

void FUN_145ae9974(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ae99be FUN_145ae99be body=40 status=ok
// SIG undefined FUN_145ae99be(void)

undefined8 FUN_145ae99be(undefined8 param_1,int param_2)

{
  FUN_145ae99e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae99e6 FUN_145ae99e6 body=168 status=ok
// SIG undefined FUN_145ae99e6(void)

void FUN_145ae99e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b472fe0;
  param_1[0x1a] = &PTR_FUN_14a1b6cf0;
  FUN_1449db362(param_1 + 0x1f);
  FUN_144760f98(param_1 + 0x1a);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_140113f3a();
    param_1[10] = 0;
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ae9a8e FUN_145ae9a8e body=197 status=ok
// SIG undefined FUN_145ae9a8e(void)

void FUN_145ae9a8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ae9b54();
  lVar1 = FUN_145ae9b56(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_1407fbe78();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = *(longlong *)(lVar1 + 0xfb0);
      uVar3 = FUN_14477b664(*(undefined8 *)(lVar1 + 0xfb8));
      FUN_14477b664(uVar3);
      if (lVar2 != 0) {
        local_38 = lVar2;
        FUN_1400021e4(&local_38,local_30);
        FUN_143da7610(param_3,&DAT_14cbc8e60,local_30);
        if (local_30[0] != 0) {
          FUN_1400020a8();
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



// FUNCTION 145ae9b54 FUN_145ae9b54 body=1 status=ok
// SIG undefined FUN_145ae9b54(void)

void FUN_145ae9b54(void)

{
  return;
}



// FUNCTION 145ae9b56 FUN_145ae9b56 body=9 status=ok
// SIG undefined FUN_145ae9b56(void)

void FUN_145ae9b56(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x48);
  return;
}



// FUNCTION 145ae9b60 FUN_145ae9b60 body=208 status=ok
// SIG undefined FUN_145ae9b60(void)

void FUN_145ae9b60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar2);
  local_40 = local_28;
  uVar1 = FUN_145ae9c32(&local_50);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae9c32 FUN_145ae9c32 body=137 status=ok
// SIG undefined FUN_145ae9c32(void)

ulonglong FUN_145ae9c32(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((DAT_14c83f390 != 0) && (DAT_14c83f388 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*DAT_14c83f388 + 0x30))(), cVar1 != '\0')) {
    FUN_1411f1bdc(local_38,param_1);
    plVar3 = DAT_14c83f388;
    if (DAT_14c83f390 == 0) {
      plVar3 = (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,local_38);
    uVar4 = (ulonglong)uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 145ae9cbc FUN_145ae9cbc body=147 status=ok
// SIG undefined FUN_145ae9cbc(void)

void FUN_145ae9cbc(longlong param_1,int param_2)

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



// FUNCTION 145ae9d50 FUN_145ae9d50 body=112 status=ok
// SIG undefined FUN_145ae9d50(void)

void FUN_145ae9d50(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      iVar5 = 8;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_145ae9dc0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145ae9dc0 FUN_145ae9dc0 body=131 status=ok
// SIG undefined FUN_145ae9dc0(void)

void FUN_145ae9dc0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 145ae9e44 FUN_145ae9e44 body=109 status=ok
// SIG undefined FUN_145ae9e44(void)

undefined8 * FUN_145ae9e44(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 == 0) {
        *param_2 = 0;
      }
      else {
        FUN_145ae9eb2(lVar3,param_2,param_3);
      }
      cVar4 = FUN_144729dda(param_2);
      if (cVar4 != '\0') {
        return param_2;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145ae9eb2 FUN_145ae9eb2 body=220 status=ok
// SIG undefined FUN_145ae9eb2(void)

undefined8 * FUN_145ae9eb2(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    plVar4 = (longlong *)(param_1 + 0x2610);
    local_38 = 0;
    FUN_14485c47a(&local_38,param_3);
    local_30 = local_38;
    iVar1 = FUN_14043631c(plVar4,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
    if (iVar1 != -1) {
      local_40 = 0;
      FUN_14485c47a(&local_40,param_3);
      local_30 = local_40;
      iVar1 = FUN_14043631c(plVar4,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
      if (iVar1 == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)iVar1 * 0x18 + *plVar4;
      }
      uVar2 = *(undefined8 *)(lVar3 + 8);
      goto LAB_145ae9f19;
    }
  }
  uVar2 = 0;
LAB_145ae9f19:
  *param_2 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae9f9a FUN_145ae9f9a body=128 status=ok
// SIG undefined FUN_145ae9f9a(void)

undefined8 * FUN_145ae9f9a(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14a3b1680;
  param_1[5] = &PTR_FUN_14a3b2080;
  param_1[6] = &PTR_LAB_14a3b20c0;
  param_1[0x55] = &PTR_FUN_14a3b2110;
  param_1[0x56] = &PTR_FUN_14a3b2190;
  param_1[0x57] = &PTR_FUN_14a3b21a0;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  FUN_1400ea934(param_1,DAT_14cad0ef8,1);
  return param_1;
}



// FUNCTION 145aea01a FUN_145aea01a body=40 status=ok
// SIG undefined FUN_145aea01a(void)

undefined8 FUN_145aea01a(undefined8 param_1,int param_2)

{
  FUN_145aea042();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aea042 FUN_145aea042 body=59 status=ok
// SIG undefined FUN_145aea042(void)

void FUN_145aea042(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a59e980;
  FUN_145aea07d(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aea07d FUN_145aea07d body=40 status=ok
// SIG undefined FUN_145aea07d(void)

void FUN_145aea07d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1478227b2(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 145aea0b0 FUN_145aea0b0 body=43 status=ok
// SIG undefined FUN_145aea0b0(void)

undefined8 * FUN_145aea0b0(undefined8 *param_1)

{
  FUN_145aea0dc();
  *param_1 = &PTR_FUN_14a5dd800;
  param_1[5] = &PTR_LAB_14a5ddad0;
  return param_1;
}



// FUNCTION 145aea0dc FUN_145aea0dc body=85 status=ok
// SIG undefined FUN_145aea0dc(void)

undefined8 * FUN_145aea0dc(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aa0b270;
  param_1[5] = &PTR_LAB_14aa0b540;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_140810d00(param_1 + 8,0);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 145aea132 FUN_145aea132 body=40 status=ok
// SIG undefined FUN_145aea132(void)

undefined8 FUN_145aea132(undefined8 param_1,int param_2)

{
  FUN_145aea15a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aea15a FUN_145aea15a body=59 status=ok
// SIG undefined FUN_145aea15a(void)

void FUN_145aea15a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6c88d0;
  FUN_145aea195(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aea195 FUN_145aea195 body=40 status=ok
// SIG undefined FUN_145aea195(void)

void FUN_145aea195(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14788714e(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145aea1c8 FUN_145aea1c8 body=128 status=ok
// SIG undefined FUN_145aea1c8(void)

undefined8 * FUN_145aea1c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f4d70;
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
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xad) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  return param_1;
}



// FUNCTION 145aea248 FUN_145aea248 body=40 status=ok
// SIG undefined FUN_145aea248(void)

undefined8 FUN_145aea248(undefined8 param_1,int param_2)

{
  FUN_145aea270();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aea270 FUN_145aea270 body=59 status=ok
// SIG undefined FUN_145aea270(void)

void FUN_145aea270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab55010;
  FUN_145aea2ab(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aea2ab FUN_145aea2ab body=40 status=ok
// SIG undefined FUN_145aea2ab(void)

void FUN_145aea2ab(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144a2da94(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145aea2d4 FUN_145aea2d4 body=75 status=ok
// SIG undefined FUN_145aea2d4(void)

void FUN_145aea2d4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_145aea356(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aea2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_1414b4ac4(&DAT_14cb70a90);
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b081df0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(puVar2 + 5) = 1;
  return;
}



// FUNCTION 145aea320 FUN_145aea320 body=54 status=ok
// SIG undefined FUN_145aea320(void)

void FUN_145aea320(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414b4ac4(&DAT_14cb70a90);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b081df0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 1;
  return;
}



// FUNCTION 145aea356 FUN_145aea356 body=191 status=ok
// SIG undefined FUN_145aea356(void)

longlong FUN_145aea356(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145aea416();
  lVar3 = *param_1;
  if (DAT_14cb70a40 != DAT_14cb70a6c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb70a70;
    if (DAT_14cb70a78 != (undefined *)0x0) {
      puVar7 = DAT_14cb70a78;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb70a80 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb70a38 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb70a30;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145aea416 FUN_145aea416 body=152 status=ok
// SIG undefined FUN_145aea416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145aea416(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb70a88) {
    FUN_144b3d300(&DAT_14cb70a88);
    if (DAT_14cb70a88 == -1) {
      DAT_14cb70a58 = 0;
      DAT_14cb70a60 = 0;
      DAT_14cb70a38 = 0;
      _DAT_14cb70a40 = 0;
      _DAT_14cb70a64 = 0xffffffff00000080;
      DAT_14cb70a6c = 0;
      DAT_14cb70a78 = 0;
      DAT_14cb70a80 = 0;
      atexit(FUN_143c91be3);
      _Init_thread_footer(&DAT_14cb70a88);
      return;
    }
  }
  return;
}



// FUNCTION 145aea4ae FUN_145aea4ae body=40 status=ok
// SIG undefined FUN_145aea4ae(void)

undefined8 FUN_145aea4ae(undefined8 param_1,int param_2)

{
  FUN_145aea4d6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aea4d6 FUN_145aea4d6 body=59 status=ok
// SIG undefined FUN_145aea4d6(void)

void FUN_145aea4d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4bfe10;
  FUN_145aea511(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aea511 FUN_145aea511 body=40 status=ok
// SIG undefined FUN_145aea511(void)

void FUN_145aea511(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a3f8f0(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145aea53a FUN_145aea53a body=26 status=ok
// SIG undefined FUN_145aea53a(void)

void FUN_145aea53a(undefined8 param_1)

{
  FUN_145aea586();
  FUN_145aea554(param_1);
  return;
}



// FUNCTION 145aea554 FUN_145aea554 body=49 status=ok
// SIG undefined FUN_145aea554(void)

void FUN_145aea554(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000145aea581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(param_1 + 0x30);
  return;
}



// FUNCTION 145aea586 FUN_145aea586 body=285 status=ok
// SIG undefined FUN_145aea586(void)

void FUN_145aea586(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = (**(code **)(*param_1 + 0x180))();
  FUN_1401d61d6(&local_30,uVar5);
  puVar4 = (undefined8 *)*local_30;
  AcquireSRWLockExclusive((PSRWLOCK)(puVar4 + 9));
  *(int *)(puVar4 + 8) = *(int *)(puVar4 + 8) + 1;
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
  iVar3 = *(int *)((longlong)puVar4 + 0xc);
  FUN_1457f6ad1(*puVar4,*(undefined4 *)(puVar4 + 1));
  *(undefined4 *)(puVar4 + 1) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)puVar4 + 0xc) != 0)) {
    FUN_148e2c7dc(puVar4);
  }
  *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + 1;
  iVar3 = *(int *)((longlong)puVar4 + 0x24);
  FUN_145aea6a4(puVar4[3],*(undefined4 *)(puVar4 + 4));
  *(undefined4 *)(puVar4 + 4) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)puVar4 + 0x24) != 0)) {
    FUN_148e2c80c(puVar4 + 3);
  }
  *(int *)(puVar4 + 5) = *(int *)(puVar4 + 5) + 1;
  if (*(int *)((longlong)puVar4 + 0x3c) < 0) {
    *(undefined4 *)(puVar4 + 7) = 0;
    FUN_14481578e(puVar4 + 6,0);
  }
  else {
    *(undefined4 *)(puVar4 + 7) = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar4 + 9));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aea6a4 FUN_145aea6a4 body=56 status=ok
// SIG undefined FUN_145aea6a4(void)

void FUN_145aea6a4(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x20);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aea6dc FUN_145aea6dc body=40 status=ok
// SIG undefined FUN_145aea6dc(void)

undefined8 FUN_145aea6dc(undefined8 param_1,int param_2)

{
  FUN_145aea704();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aea704 FUN_145aea704 body=59 status=ok
// SIG undefined FUN_145aea704(void)

void FUN_145aea704(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba389e0;
  FUN_145aea73f(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aea73f FUN_145aea73f body=40 status=ok
// SIG undefined FUN_145aea73f(void)

void FUN_145aea73f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1486132b6(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145aea772 FUN_145aea772 body=83 status=ok
// SIG undefined FUN_145aea772(void)

void FUN_145aea772(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_145aea7c6();
  FUN_14063a6f5(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_14575f1f2(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aea7c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145aea7c6 FUN_145aea7c6 body=82 status=ok
// SIG undefined FUN_145aea7c6(void)

void FUN_145aea7c6(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))
            (*(longlong **)(param_1 + 0x10),*(longlong *)(param_1 + 0x18) + 0x18,0);
  FUN_14063a6f5(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  FUN_146557306(param_1 + 0x38,0);
  return;
}



// FUNCTION 145aea828 FUN_145aea828 body=147 status=ok
// SIG undefined FUN_145aea828(void)

void FUN_145aea828(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145aea8bc FUN_145aea8bc body=40 status=ok
// SIG undefined FUN_145aea8bc(void)

undefined8 FUN_145aea8bc(undefined8 param_1,int param_2)

{
  FUN_145aea8e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aea8e4 FUN_145aea8e4 body=169 status=ok
// SIG undefined FUN_145aea8e4(void)

void FUN_145aea8e4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a532ff0;
  param_1[5] = &PTR_FUN_14a533340;
  param_1[0x52] = &PTR_LAB_14a533380;
  FUN_144760e21(param_1[0x170],*(undefined4 *)(param_1 + 0x171));
  if (param_1[0x170] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x16e);
  if (param_1[0x16c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x169];
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
  FUN_14584ba72(param_1);
  return;
}



// FUNCTION 145aea98e FUN_145aea98e body=24 status=ok
// SIG undefined FUN_145aea98e(void)

void FUN_145aea98e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145aea9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145aea9a6 FUN_145aea9a6 body=38 status=ok
// SIG undefined FUN_145aea9a6(void)

undefined8 FUN_145aea9a6(undefined8 param_1,int param_2)

{
  FUN_145aea9cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aea9cc FUN_145aea9cc body=89 status=ok
// SIG undefined FUN_145aea9cc(void)

void FUN_145aea9cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba4b5f0;
  FUN_1449db362(param_1 + 0x14);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  FUN_145aeaa25(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_145aeaa52(param_1);
  return;
}



// FUNCTION 145aeaa25 FUN_145aeaa25 body=45 status=ok
// SIG undefined FUN_145aeaa25(void)

void FUN_145aeaa25(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 145aeaa52 FUN_145aeaa52 body=83 status=ok
// SIG undefined FUN_145aeaa52(void)

void FUN_145aeaa52(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ba4b680;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aeaaa6 FUN_145aeaaa6 body=30 status=ok
// SIG undefined FUN_145aeaaa6(void)

void FUN_145aeaaa6(longlong param_1)

{
  FUN_145aeaac4();
  FUN_145aeadf4(*(undefined8 *)(param_1 + 0x1f0));
  return;
}



// FUNCTION 145aeaac4 FUN_145aeaac4 body=80 status=ok
// SIG undefined FUN_145aeaac4(void)

void FUN_145aeaac4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aeab09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145aeab2c FUN_145aeab2c body=38 status=ok
// SIG undefined FUN_145aeab2c(void)

undefined8 FUN_145aeab2c(undefined8 param_1,int param_2)

{
  FUN_145aeab52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aeab52 FUN_145aeab52 body=80 status=ok
// SIG undefined FUN_145aeab52(void)

void FUN_145aeab52(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ec5670;
  FUN_145aeac14();
  plVar3 = (longlong *)param_1[5];
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
  FUN_1449db362(param_1 + 2);
  return;
}



// FUNCTION 145aeaba2 FUN_145aeaba2 body=59 status=ok
// SIG undefined FUN_145aeaba2(void)

void FUN_145aeaba2(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ec9568;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_145aeabde(param_1 + 0x18);
  return;
}



// FUNCTION 145aeabde FUN_145aeabde body=53 status=ok
// SIG undefined FUN_145aeabde(void)

void FUN_145aeabde(longlong *param_1)

{
  FUN_145aeac78();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aeac14 FUN_145aeac14 body=67 status=ok
// SIG undefined FUN_145aeac14(void)

void FUN_145aeac14(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x10),0,0,0x10);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}



// FUNCTION 145aeac58 FUN_145aeac58 body=31 status=ok
// SIG undefined FUN_145aeac58(void)

undefined8 FUN_145aeac58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aeac78 FUN_145aeac78 body=345 status=ok
// SIG undefined FUN_145aeac78(void)

void FUN_145aeac78(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeadd2 FUN_145aeadd2 body=34 status=ok
// SIG undefined FUN_145aeadd2(void)

void FUN_145aeadd2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ec9ce0;
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aeadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145aeadf4 FUN_145aeadf4 body=432 status=ok
// SIG undefined FUN_145aeadf4(void)

void FUN_145aeadf4(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x28);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar6 = *(undefined8 *)(lVar4 + 0x20);
  local_38 = (longlong *)FUN_14001cc68(0x30,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_149ec9cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_149ec9ce0;
  *(undefined4 *)(local_38 + 3) = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  FUN_1414b4cc6(uVar6,&local_40);
  plVar2 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_40 = (longlong *)0x0;
  local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = (longlong *)CONCAT44(local_38._4_4_,3);
  *local_40 = (longlong)&PTR_LAB_149ec9d70;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_40[2] = lVar8;
  *local_40 = (longlong)&PTR_FUN_149ec9d00;
  local_40[3] = param_1;
  local_40[4] = (longlong)FUN_14284ebf8;
  FUN_145aeafa6(lVar4 + 0x10,&local_40);
  FUN_1449db362(&local_40);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeafa6 FUN_145aeafa6 body=130 status=ok
// SIG undefined FUN_145aeafa6(void)

void FUN_145aeafa6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeb02a FUN_145aeb02a body=93 status=ok
// SIG undefined FUN_145aeb02a(void)

void FUN_145aeb02a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ec9d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ec9d00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 145aeb088 FUN_145aeb088 body=63 status=ok
// SIG undefined FUN_145aeb088(void)

undefined1 FUN_145aeb088(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145aeb0c8(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 145aeb0c8 FUN_145aeb0c8 body=129 status=ok
// SIG undefined FUN_145aeb0c8(void)

longlong FUN_145aeb0c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_144a787a6();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  puVar2 = (undefined8 *)(param_2 + 0x60);
  puVar3 = (undefined8 *)(param_1 + 0x60);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 145aeb14a FUN_145aeb14a body=197 status=ok
// SIG undefined FUN_145aeb14a(void)

longlong FUN_145aeb14a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_145aeb1e7;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_145aeb210(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_145aeb1e7:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 145aeb210 FUN_145aeb210 body=293 status=ok
// SIG undefined FUN_145aeb210(void)

undefined4 *
FUN_145aeb210(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145aeb528(param_1,local_58);
  FUN_145aeb336(param_4,local_50);
  *(undefined4 *)(local_50 + 0x58) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_145aeb454(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_50 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1414b4d76(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeb336 FUN_145aeb336 body=158 status=ok
// SIG undefined FUN_145aeb336(void)

undefined8 * FUN_145aeb336(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_145aeb3d6(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeb3d6 FUN_145aeb3d6 body=125 status=ok
// SIG undefined FUN_145aeb3d6(void)

undefined8 * FUN_145aeb3d6(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145aeb624();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 145aeb454 FUN_145aeb454 body=212 status=ok
// SIG undefined FUN_145aeb454(void)

void FUN_145aeb454(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  void *_Dst;
  undefined1 uVar1;
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
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1408910a4((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_14680ad26(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_145aeb4cb;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_145aeb4cb:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 145aeb528 FUN_145aeb528 body=251 status=ok
// SIG undefined FUN_145aeb528(void)

int * FUN_145aeb528(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 145aeb624 FUN_145aeb624 body=438 status=ok
// SIG undefined FUN_145aeb624(void)

longlong * FUN_145aeb624(longlong *param_1,longlong *param_2)

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
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + (longlong)iVar6 * 0x18) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145aeb7dc FUN_145aeb7dc body=21 status=ok
// SIG undefined FUN_145aeb7dc(void)

undefined8 FUN_145aeb7dc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145aeb7f2 FUN_145aeb7f2 body=954 status=ok
// SIG undefined FUN_145aeb7f2(void)

void FUN_145aeb7f2(longlong param_1,longlong param_2,int *param_3,char *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  int *local_68;
  uint *local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x60;
  local_68 = param_3;
  cVar5 = FUN_144729dda(lVar1);
  if ((((cVar5 == '\0') && (plVar10 = *(longlong **)(param_2 + 0x10), plVar10 != (longlong *)0x0))
      && ((-1 < *(int *)((longlong)plVar10 + 0xd4) ||
          (lVar8 = (**(code **)(*plVar10 + 0x2f0))(), lVar8 != 0)))) ||
     (((cVar5 = FUN_144729dda(lVar1), cVar5 != '\0' &&
       (lVar8 = FUN_14479d2ce(lVar1), lVar8 != *(longlong *)(param_2 + 0x10))) ||
      (uVar12 = *(uint *)(param_2 + 0x1c), (int)uVar12 < 0)))) goto LAB_145aebab4;
  local_70 = (longlong *)(param_1 + 0x70);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0xa4)) {
LAB_145aebb0b:
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xb0);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xb8) + 0x7fffffffU & uVar12) * 4);
    if (iVar7 == -1) goto LAB_145aebb0b;
    do {
      lVar8 = *local_70 + (longlong)iVar7 * 0x58;
      if (*(uint *)(*local_70 + (longlong)iVar7 * 0x58) == uVar12) break;
      iVar7 = *(int *)(lVar8 + 0x50);
      lVar8 = 0;
    } while (iVar7 != -1);
  }
  lVar13 = lVar8 + 8;
  if (lVar8 != 0) {
    lVar8 = lVar13;
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    uVar9 = FUN_14479d2ce(param_1 + 0x50);
    uVar6 = FUN_1409844f4(uVar9);
    uVar12 = *(uint *)(param_2 + 0x1c);
  }
  bVar14 = uVar6 == uVar12;
  bVar15 = uVar6 == 0xffffffff;
  cVar5 = *param_4;
  if (cVar5 == '\0') {
    if (*local_68 == 0 && (bVar15 || bVar14)) {
      plVar10 = (longlong *)FUN_1403a0144(param_1);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x40))(plVar10,1,0);
      }
      plVar10 = (longlong *)FUN_145781ab4(param_1);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
  }
  else if (cVar5 != '\x01') {
    if ((cVar5 == '\x03') && (lVar8 != 0)) {
      FUN_1414b552a(param_1 + 8,param_2,1);
      plVar10 = *(longlong **)(param_1 + 0x188);
      if (plVar10 == (longlong *)0x0) {
LAB_145aebb9a:
        if (*(longlong *)(lVar8 + 8) != 0) goto LAB_145aeb9a4;
      }
      else {
        iVar7 = (int)plVar10[1];
        do {
          if (iVar7 == 0) goto LAB_145aebb9a;
          LOCK();
          iVar4 = (int)plVar10[1];
          bVar14 = iVar7 == iVar4;
          if (bVar14) {
            *(int *)(plVar10 + 1) = iVar7 + 1;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          UNLOCK();
        } while (!bVar14);
        lVar1 = *(longlong *)(param_1 + 0x180);
        lVar13 = *(longlong *)(lVar8 + 8);
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (lVar1 != lVar13) goto LAB_145aeb9a4;
      }
      plVar10 = *(longlong **)(param_1 + 0x188);
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      FUN_1414ef458(param_1);
LAB_145aeb9a4:
      FUN_145aec256(lVar8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    goto LAB_145aebab4;
  }
  if (lVar8 == 0) {
    local_60 = (uint *)(param_2 + 0x1c);
    FUN_145aebf3c(local_70,&local_4c);
    lVar13 = *(longlong *)(param_1 + 0x70) + (longlong)local_4c * 0x58 + 8;
    uVar9 = FUN_14479d2ce(lVar1);
    uVar11 = FUN_14479d2ce(param_1 + 0x50);
    local_78 = param_2;
    FUN_145aec82c(lVar13,param_1,uVar11,uVar9);
  }
  FUN_145aebc02(lVar13,*local_68,param_2);
  if ((*(longlong *)(param_1 + 0x180) == 0) || (*(longlong *)(param_1 + 0x188) == 0)) {
    if (bVar15 || bVar14) goto LAB_145aebb17;
  }
  else if (*(int *)(*(longlong *)(param_1 + 0x188) + 8) < 1 && (bVar15 || bVar14)) {
LAB_145aebb17:
    local_60 = *(uint **)(lVar13 + 8);
    plVar10 = *(longlong **)(lVar13 + 0x10);
    local_58 = plVar10;
    if (plVar10 == (longlong *)0x0) {
      FUN_145aebe9e(param_1,&local_60);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      FUN_145aebe9e(param_1);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
LAB_145aebab4:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aebbe8 FUN_145aebbe8 body=26 status=ok
// SIG undefined FUN_145aebbe8(void)

void FUN_145aebbe8(undefined8 param_1)

{
  FUN_1410804a2();
  FUN_1457e3046(param_1);
  return;
}



// FUNCTION 145aebc02 FUN_145aebc02 body=97 status=ok
// SIG undefined FUN_145aebc02(void)

void FUN_145aebc02(int *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  lVar1 = *(longlong *)(param_1 + 10);
  if (lVar1 != 0) {
    if (param_2 != 2) {
      lVar3 = 0;
LAB_145aebc1d:
      FUN_145aebc6e(lVar1,lVar3);
      return;
    }
    lVar1 = FUN_145aebc64();
    if ((lVar1 == 0) && (*(longlong *)(param_3 + 0x10) != 0)) {
      uVar2 = FUN_14098d926();
      lVar3 = FUN_1414b6faa(uVar2,param_3);
      if (lVar3 != 0) {
        lVar1 = *(longlong *)(param_1 + 10);
        goto LAB_145aebc1d;
      }
    }
  }
  return;
}



// FUNCTION 145aebc64 FUN_145aebc64 body=9 status=ok
// SIG undefined FUN_145aebc64(void)

void FUN_145aebc64(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x18);
  return;
}



// FUNCTION 145aebc6e FUN_145aebc6e body=61 status=ok
// SIG undefined FUN_145aebc6e(void)

void FUN_145aebc6e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_14883cd1e(lVar1,*(undefined4 *)(param_1 + 0x20));
  }
  FUN_14485c47a(param_1 + 0x18,param_2);
  return;
}



// FUNCTION 145aebd76 FUN_145aebd76 body=181 status=ok
// SIG undefined FUN_145aebd76(void)

void FUN_145aebd76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000145aebe27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145aebe2c FUN_145aebe2c body=114 status=ok
// SIG undefined FUN_145aebe2c(void)

void FUN_145aebe2c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 145aebe9e FUN_145aebe9e body=157 status=ok
// SIG undefined FUN_145aebe9e(void)

void FUN_145aebe9e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *param_2;
    if (lVar3 != 0) {
      lVar4 = param_2[1];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(param_1 + 0x188);
      *(longlong *)(param_1 + 0x180) = lVar3;
      *(longlong *)(param_1 + 0x188) = lVar4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      *(undefined1 *)(lVar3 + 0x150) = 1;
      FUN_1414ef458(param_1);
    }
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aebf37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145aebf3c FUN_145aebf3c body=279 status=ok
// SIG undefined FUN_145aebf3c(void)

undefined4 * FUN_145aebf3c(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_145aec172(param_1,local_48);
  FUN_145aec054(param_3,local_40);
  local_40[0x14] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_145aec0d2(param_1,uVar4,local_40,&local_4c);
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
      local_40[0x15] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x14] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145aec67e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aec054 FUN_145aec054 body=124 status=ok
// SIG undefined FUN_145aec054(void)

undefined4 * FUN_145aec054(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0xffffffff;
  *param_2 = *(undefined4 *)*param_1;
  param_2[2] = 0xffffffff;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  local_50 = 0;
  uStack_48 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  local_40 = 0;
  uStack_38 = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  local_30 = 0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  local_20 = 0;
  uStack_18 = 0;
  FUN_145aebd76(&local_58);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aec0d2 FUN_145aec0d2 body=160 status=ok
// SIG undefined FUN_145aec0d2(void)

undefined8 FUN_145aec0d2(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x58);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x58) == *param_3) {
          FUN_145aebd76((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x50);
          FUN_145aebe2c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x50);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145aec172 FUN_145aec172 body=227 status=ok
// SIG undefined FUN_145aec172(void)

int * FUN_145aec172(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 145aec256 FUN_145aec256 body=325 status=ok
// SIG undefined FUN_145aec256(void)

void FUN_145aec256(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_145aec406();
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_145aec406();
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
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
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_145aec3cc();
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
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
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1414b67e0();
    *(undefined8 *)(param_1 + 0x38) = 0;
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145aec376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145aec39c FUN_145aec39c body=9 status=ok
// SIG undefined FUN_145aec39c(void)

void FUN_145aec39c(longlong param_1)

{
  FUN_1414b5666(param_1 + 0x10);
  return;
}



// FUNCTION 145aec3b0 FUN_145aec3b0 body=28 status=ok
// SIG undefined FUN_145aec3b0(void)

void FUN_145aec3b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145aec3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x148))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145aec3cc FUN_145aec3cc body=57 status=ok
// SIG undefined FUN_145aec3cc(void)

void FUN_145aec3cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_14883cd1e(lVar1,*(undefined4 *)(param_1 + 0x20));
  }
  FUN_1414b55de(param_1);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 145aec406 FUN_145aec406 body=122 status=ok
// SIG undefined FUN_145aec406(void)

void FUN_145aec406(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x2a8,param_1);
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x29);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0x20,param_1);
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,1,0);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return;
}



// FUNCTION 145aec480 FUN_145aec480 body=101 status=ok
// SIG undefined FUN_145aec480(void)

void FUN_145aec480(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b3fd710;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140292ea0(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145aec4e6(param_1 + 1);
  return;
}



// FUNCTION 145aec4e6 FUN_145aec4e6 body=55 status=ok
// SIG undefined FUN_145aec4e6(void)

void FUN_145aec4e6(longlong *param_1)

{
  FUN_145aec51e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aec51e FUN_145aec51e body=349 status=ok
// SIG undefined FUN_145aec51e(void)

void FUN_145aec51e(longlong *param_1,int param_2)

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
      FUN_1414b56fa(*local_70 + (longlong)iStack_54 * 0x80 + 0x10);
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
    FUN_14095c99c(param_1,param_2);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aec67e FUN_145aec67e body=428 status=ok
// SIG undefined FUN_145aec67e(void)

void FUN_145aec67e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 145aec82c FUN_145aec82c body=1036 status=ok
// SIG undefined FUN_145aec82c(void)

void FUN_145aec82c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar4 = (**(code **)(*param_2 + 0x28))(param_2);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b3fd600;
  plVar5[2] = lVar4;
  *(longlong *)(param_1 + 8) = lVar4;
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == plVar6) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x000145aeca80;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x10) = plVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000145aeca80:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  lVar4 = (**(code **)(*param_2 + 0x28))(param_2);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b3fd600;
  plVar5[2] = lVar4;
  *(longlong *)(param_1 + 0x18) = lVar4;
  plVar6 = *(longlong **)(param_1 + 0x20);
  if (plVar5 == plVar6) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x000145aecaaf;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x20) = plVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000145aecaaf:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  plVar6 = (longlong *)FUN_14001cc68(0x118);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b3fd620;
  memset(plVar6 + 6,0,0xe8);
  plVar6[2] = (longlong)&PTR_LAB_14b3fd640;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *(undefined4 *)(plVar6 + 6) = 0xffffffff;
  plVar6[7] = 0;
  plVar6[8] = 0;
  *(undefined8 *)((longlong)plVar6 + 100) = 0xffffffff00000080;
  memset((void *)((longlong)plVar6 + 0x6c),0,0xa5);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
LAB_145aecad3:
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      if (plVar6 != (longlong *)0x0) goto LAB_145aec99c;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x28) = plVar6 + 2;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar6 == plVar5) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x30) = plVar6;
      if (plVar5 != (longlong *)0x0) goto LAB_145aecad3;
    }
LAB_145aec99c:
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar6 = (longlong *)FUN_1414b69f1();
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (plVar5 == (longlong *)0x0) goto LAB_145aec9ea;
    *(undefined8 *)(param_1 + 0x40) = 0;
LAB_145aecb3a:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    if (plVar6 == (longlong *)0x0) goto LAB_145aec9ea;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x38) = plVar6 + 2;
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (plVar6 == plVar5) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x40) = plVar6;
      if (plVar5 != (longlong *)0x0) goto LAB_145aecb3a;
    }
  }
  LOCK();
  plVar5 = plVar6 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_145aec9ea:
  FUN_145aecc38(*(undefined8 *)(param_1 + 8),param_3,param_4);
  FUN_145aecc38(*(undefined8 *)(param_1 + 0x18),param_3,param_4);
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x150) = 4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x158) = *(undefined4 *)(param_5 + 0x1c);
  FUN_145aeceb2(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  FUN_1414b6a84(*(undefined8 *)(param_1 + 0x38),param_3,param_4,*(undefined4 *)(param_5 + 0x1c));
  return;
}



// FUNCTION 145aecc38 FUN_145aecc38 body=172 status=ok
// SIG undefined FUN_145aecc38(void)

void FUN_145aecc38(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14485c47a(param_1 + 0x140);
  FUN_14485c47a(param_1 + 0x148,param_3);
  if (param_2 != 0) {
    FUN_145aecce6(param_2 + 0x2a8,local_28,param_1,&LAB_140f939fe);
  }
  if (param_3 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_3 + 0x2b0))(param_3);
    if (lVar1 != 0) {
      FUN_145aecdcc(lVar1 + 0x20,local_28,param_1,&LAB_1457e18b0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aecce6 FUN_145aecce6 body=228 status=ok
// SIG undefined FUN_145aecce6(void)

undefined8
FUN_145aecce6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14b3e62a0;
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
  *local_40 = &PTR_FUN_14b400540;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_141285884(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aecdcc FUN_145aecdcc body=228 status=ok
// SIG undefined FUN_145aecdcc(void)

undefined8
FUN_145aecdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14a1e1a40;
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
  *local_40 = &PTR_FUN_14b4005b0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_141211c46(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeceb2 FUN_145aeceb2 body=609 status=ok
// SIG undefined FUN_145aeceb2(void)

void FUN_145aeceb2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong *local_a0;
  code *local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14485c47a(param_1 + 1);
  FUN_14485c47a(param_1 + 2,param_3);
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (DAT_14cb7ca88 != 0) {
    local_a8 = &local_78;
    uStack_70 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_28 = 0;
    local_78 = 0xffffffff;
    local_88 = DAT_14c948618;
    local_80 = DAT_14c948620;
    local_90 = &local_a8;
    local_98 = FUN_143d41808;
    local_a0 = param_1;
    FUN_1414b6c54();
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  *puVar3 = &PTR_FUN_14b400390;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = 0x80;
  *(undefined4 *)(puVar3 + 10) = 0xffffffff;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b400830;
  plVar4[2] = (longlong)puVar3;
  if (puVar3 == (undefined8 *)0x0) {
LAB_145aed018:
    param_1[0x1e] = (longlong)puVar3;
    plVar5 = (longlong *)param_1[0x1f];
    if (plVar4 != plVar5) {
      param_1[0x1f] = (longlong)plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_145aed03b;
      goto LAB_145aed096;
    }
    if (plVar4 == (longlong *)0x0) goto LAB_145aed03b;
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_145aed03b;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar4;
  }
  else {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)puVar3[2];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
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
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_145aed018;
    }
    puVar3[1] = puVar3;
    param_1[0x1e] = (longlong)puVar3;
    plVar5 = (longlong *)param_1[0x1f];
    if (plVar5 == (longlong *)0x0) goto LAB_145aed03b;
    param_1[0x1f] = 0;
LAB_145aed096:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145aed03b;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_145aed03b:
  (**(code **)(*param_1 + 0x70))(param_1,param_1[0x1e],param_1[0x1e] + 0x18);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aed114 FUN_145aed114 body=40 status=ok
// SIG undefined FUN_145aed114(void)

undefined8 FUN_145aed114(undefined8 param_1,int param_2)

{
  FUN_145aed13c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aed13c FUN_145aed13c body=858 status=ok
// SIG undefined FUN_145aed13c(void)

void FUN_145aed13c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bc66140;
  *(undefined4 *)(param_1 + 0x75) = 0;
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_145aed4ce(param_1 + 0x6c);
  if (param_1[0x6a] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x6a] = 0;
  }
  *(undefined4 *)(param_1 + 0x69) = 0;
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  FUN_145aed504(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_145aed53a(param_1 + 0x56);
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_145aed570(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_145aed496(param_1 + 0x42);
  plVar3 = (longlong *)param_1[0x41];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x3f];
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
  FUN_145aed68c(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x3b];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_145aed840(param_1 + 0x38);
  FUN_145aed89c(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_145aed5a6(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145aed5dc(param_1 + 0x1f);
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_14141661e(param_1 + 0x14);
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
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



// FUNCTION 145aed496 FUN_145aed496 body=55 status=ok
// SIG undefined FUN_145aed496(void)

void FUN_145aed496(longlong *param_1)

{
  FUN_145aed612(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aed4ce FUN_145aed4ce body=53 status=ok
// SIG undefined FUN_145aed4ce(void)

void FUN_145aed4ce(longlong *param_1)

{
  FUN_145aed8f8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aed504 FUN_145aed504 body=53 status=ok
// SIG undefined FUN_145aed504(void)

void FUN_145aed504(longlong *param_1)

{
  FUN_145aed732();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aed53a FUN_145aed53a body=53 status=ok
// SIG undefined FUN_145aed53a(void)

void FUN_145aed53a(longlong *param_1)

{
  FUN_145aed78c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aed570 FUN_145aed570 body=53 status=ok
// SIG undefined FUN_145aed570(void)

void FUN_145aed570(longlong *param_1)

{
  FUN_145aed6da();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aed5a6 FUN_145aed5a6 body=53 status=ok
// SIG undefined FUN_145aed5a6(void)

void FUN_145aed5a6(longlong *param_1)

{
  FUN_145aeda54();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aed5dc FUN_145aed5dc body=53 status=ok
// SIG undefined FUN_145aed5dc(void)

void FUN_145aed5dc(longlong *param_1)

{
  FUN_145aed7e6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aed612 FUN_145aed612 body=121 status=ok
// SIG undefined FUN_145aed612(void)

void FUN_145aed612(longlong param_1,int param_2)

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



// FUNCTION 145aed68c FUN_145aed68c body=77 status=ok
// SIG undefined FUN_145aed68c(void)

void FUN_145aed68c(longlong param_1,int param_2)

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



// FUNCTION 145aed6da FUN_145aed6da body=88 status=ok
// SIG undefined FUN_145aed6da(void)

void FUN_145aed6da(longlong param_1)

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



// FUNCTION 145aed732 FUN_145aed732 body=90 status=ok
// SIG undefined FUN_145aed732(void)

void FUN_145aed732(longlong param_1)

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



// FUNCTION 145aed78c FUN_145aed78c body=90 status=ok
// SIG undefined FUN_145aed78c(void)

void FUN_145aed78c(longlong param_1)

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



// FUNCTION 145aed7e6 FUN_145aed7e6 body=90 status=ok
// SIG undefined FUN_145aed7e6(void)

void FUN_145aed7e6(longlong param_1)

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



// FUNCTION 145aed840 FUN_145aed840 body=91 status=ok
// SIG undefined FUN_145aed840(void)

void FUN_145aed840(longlong param_1)

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



// FUNCTION 145aed89c FUN_145aed89c body=91 status=ok
// SIG undefined FUN_145aed89c(void)

void FUN_145aed89c(longlong param_1)

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



// FUNCTION 145aed8f8 FUN_145aed8f8 body=346 status=ok
// SIG undefined FUN_145aed8f8(void)

void FUN_145aed8f8(longlong *param_1)

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



// FUNCTION 145aeda54 FUN_145aeda54 body=370 status=ok
// SIG undefined FUN_145aeda54(void)

void FUN_145aeda54(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_14936514a(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aedbd2 FUN_145aedbd2 body=128 status=ok
// SIG undefined FUN_145aedbd2(void)

undefined8 * FUN_145aedbd2(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c6b9f8();
  *param_1 = &PTR_FUN_14a1668b0;
  *(undefined4 *)(param_1 + 0x16) = 0x474c4f42;
  param_1[0x17] = "globals";
  FUN_1400b22c2(local_28,"General.Globals");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aedc5e FUN_145aedc5e body=128 status=ok
// SIG undefined FUN_145aedc5e(void)

undefined8 * FUN_145aedc5e(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14597e6ca();
  *param_1 = &PTR_FUN_14a16cd10;
  *(undefined4 *)(param_1 + 0x16) = 0x367ef166;
  param_1[0x17] = "basicdef";
  FUN_1400b22c2(local_28,"ToolsDev.Testing.BasicDef");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aedcea FUN_145aedcea body=128 status=ok
// SIG undefined FUN_145aedcea(void)

undefined8 * FUN_145aedcea(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14597e6ca();
  *param_1 = &PTR_FUN_14a172140;
  *(undefined4 *)(param_1 + 0x16) = 0x24f0812b;
  param_1[0x17] = "gameplaytagdef";
  FUN_1400b22c2(local_28,"ToolsDev.Testing.GameplayTagDef");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aedd76 FUN_145aedd76 body=128 status=ok
// SIG undefined FUN_145aedd76(void)

undefined8 * FUN_145aedd76(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14597e6ca();
  *param_1 = &PTR_FUN_14a1729d0;
  *(undefined4 *)(param_1 + 0x16) = 0x4957fb18;
  param_1[0x17] = "mapdef";
  FUN_1400b22c2(local_28,"ToolsDev.Testing.MapDef");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aede02 FUN_145aede02 body=128 status=ok
// SIG undefined FUN_145aede02(void)

undefined8 * FUN_145aede02(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14597e6ca();
  *param_1 = &PTR_FUN_14a173810;
  *(undefined4 *)(param_1 + 0x16) = 0x925f81d;
  param_1[0x17] = "setdef";
  FUN_1400b22c2(local_28,"ToolsDev.Testing.SetDef");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aede8e FUN_145aede8e body=128 status=ok
// SIG undefined FUN_145aede8e(void)

undefined8 * FUN_145aede8e(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14a186350;
  *(undefined4 *)(param_1 + 0x16) = 0xb00fbaaf;
  param_1[0x17] = "developersettings";
  FUN_1400b22c2(local_28,"Developer Settings");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aedf10 FUN_145aedf10 body=78 status=ok
// SIG undefined FUN_145aedf10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145aedf10(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14ca09608;
  _DAT_14ca09600 = 0;
  if (DAT_14ca09608 != (longlong *)0x0) {
    DAT_14ca09608 = (longlong *)0x0;
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



// FUNCTION 145aedf5e FUN_145aedf5e body=24 status=ok
// SIG undefined FUN_145aedf5e(void)

void FUN_145aedf5e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145aedf72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145aedf76 FUN_145aedf76 body=38 status=ok
// SIG undefined FUN_145aedf76(void)

undefined8 FUN_145aedf76(undefined8 param_1,int param_2)

{
  FUN_145806982();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aee036 FUN_145aee036 body=129 status=ok
// SIG undefined FUN_145aee036(void)

undefined8 * FUN_145aee036(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14aa2f130;
  param_1[5] = &PTR_FUN_14aa2f710;
  param_1[6] = &PTR_LAB_14aa2f750;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_140396f9a(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  return param_1;
}



// FUNCTION 145aee0b8 FUN_145aee0b8 body=40 status=ok
// SIG undefined FUN_145aee0b8(void)

undefined8 FUN_145aee0b8(undefined8 param_1,int param_2)

{
  FUN_145aee0e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aee0e0 FUN_145aee0e0 body=100 status=ok
// SIG undefined FUN_145aee0e0(void)

void FUN_145aee0e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac14850;
  param_1[5] = &PTR_FUN_14ac14e10;
  param_1[6] = &PTR_LAB_14ac14e50;
  param_1[0x22] = &PTR_FUN_14ac14ea0;
  param_1[0x23] = &PTR_FUN_14ac14ed0;
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  FUN_145a270d4(param_1);
  return;
}



// FUNCTION 145aee144 FUN_145aee144 body=44 status=ok
// SIG undefined FUN_145aee144(void)

void FUN_145aee144(longlong *param_1)

{
  FUN_145aee170();
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145aee169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1);
  return;
}



// FUNCTION 145aee170 FUN_145aee170 body=96 status=ok
// SIG undefined FUN_145aee170(void)

void FUN_145aee170(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_145a57d40();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_145aee197;
    }
  }
  lVar2 = 0;
LAB_145aee197:
  *(longlong *)(param_1 + 0x30) = lVar2;
  return;
}



// FUNCTION 145aee1dc FUN_145aee1dc body=128 status=ok
// SIG undefined FUN_145aee1dc(void)

undefined8 * FUN_145aee1dc(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14aff4190;
  *(undefined4 *)(param_1 + 0x16) = 0xbeef2000;
  param_1[0x17] = "activityrequest";
  FUN_1400b22c2(local_28,"Activities.ActivityRequest");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee268 FUN_145aee268 body=128 status=ok
// SIG undefined FUN_145aee268(void)

undefined8 * FUN_145aee268(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14aff4620;
  *(undefined4 *)(param_1 + 0x16) = 0xbeef2002;
  param_1[0x17] = "ActivityRequestSettingsdata";
  FUN_1400b22c2(local_28,"Activities.ActivityRequestSettings");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee2f4 FUN_145aee2f4 body=128 status=ok
// SIG undefined FUN_145aee2f4(void)

undefined8 * FUN_145aee2f4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b021930;
  *(undefined4 *)(param_1 + 0x16) = 0x7004;
  param_1[0x17] = "climbable_interact";
  FUN_1400b22c2(local_28,"Movement.Climbable Interactions");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee380 FUN_145aee380 body=128 status=ok
// SIG undefined FUN_145aee380(void)

undefined8 * FUN_145aee380(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b04c000;
  *(undefined4 *)(param_1 + 0x16) = 0xd00dad19;
  param_1[0x17] = "dialogparameter";
  FUN_1400b22c2(local_28,"GbxDialog.Parameters");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee40c FUN_145aee40c body=128 status=ok
// SIG undefined FUN_145aee40c(void)

undefined8 * FUN_145aee40c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b073660;
  *(undefined4 *)(param_1 + 0x16) = 0x90212;
  param_1[0x17] = "stamp_context";
  FUN_1400b22c2(local_28,"Activities.StampContexts");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee498 FUN_145aee498 body=128 status=ok
// SIG undefined FUN_145aee498(void)

undefined8 * FUN_145aee498(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b074640;
  *(undefined4 *)(param_1 + 0x16) = 0x90211;
  param_1[0x17] = "stamp_layout";
  FUN_1400b22c2(local_28,"Activities.StampLayouts");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee524 FUN_145aee524 body=128 status=ok
// SIG undefined FUN_145aee524(void)

undefined8 * FUN_145aee524(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b074aa0;
  *(undefined4 *)(param_1 + 0x16) = 0x90213;
  param_1[0x17] = "stamp_layout_group";
  FUN_1400b22c2(local_28,"Activities.StampLayoutGroups");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee5b0 FUN_145aee5b0 body=128 status=ok
// SIG undefined FUN_145aee5b0(void)

undefined8 * FUN_145aee5b0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b0805d0;
  *(undefined4 *)(param_1 + 0x16) = 0x90214;
  param_1[0x17] = "stamp_map_initialization";
  FUN_1400b22c2(local_28,"Activities.StampMapInitialization");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee63c FUN_145aee63c body=128 status=ok
// SIG undefined FUN_145aee63c(void)

undefined8 * FUN_145aee63c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b0f9110;
  *(undefined4 *)(param_1 + 0x16) = 0x7104;
  param_1[0x17] = "sliding";
  FUN_1400b22c2(local_28,"Movement.Sliding");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee6c8 FUN_145aee6c8 body=128 status=ok
// SIG undefined FUN_145aee6c8(void)

undefined8 * FUN_145aee6c8(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b0f1ed0;
  *(undefined4 *)(param_1 + 0x16) = 0x7106;
  param_1[0x17] = "gbx_swimming";
  FUN_1400b22c2(local_28,"Movement.Swimming");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee754 FUN_145aee754 body=128 status=ok
// SIG undefined FUN_145aee754(void)

undefined8 * FUN_145aee754(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b0fe560;
  *(undefined4 *)(param_1 + 0x16) = 0x982aa341;
  param_1[0x17] = "customization";
  FUN_1400b22c2(local_28,"Customization.CustomizationData");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee7e0 FUN_145aee7e0 body=128 status=ok
// SIG undefined FUN_145aee7e0(void)

undefined8 * FUN_145aee7e0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b14be60;
  *(undefined4 *)(param_1 + 0x16) = 0x7012;
  param_1[0x17] = "feedback";
  FUN_1400b22c2(local_28,"Feedback.Feedback Data");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee86c FUN_145aee86c body=128 status=ok
// SIG undefined FUN_145aee86c(void)

undefined8 * FUN_145aee86c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b1de2a0;
  *(undefined4 *)(param_1 + 0x16) = 0x4042;
  param_1[0x17] = "playergroup";
  FUN_1400b22c2(local_28,"PlayerGroup");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee8f8 FUN_145aee8f8 body=128 status=ok
// SIG undefined FUN_145aee8f8(void)

undefined8 * FUN_145aee8f8(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b2073a0;
  *(undefined4 *)(param_1 + 0x16) = 0x7011;
  param_1[0x17] = "rumble";
  FUN_1400b22c2(local_28,"Feedback.Haptic Data");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aee984 FUN_145aee984 body=128 status=ok
// SIG undefined FUN_145aee984(void)

undefined8 * FUN_145aee984(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b337ac0;
  *(undefined4 *)(param_1 + 0x16) = 0x304b452c;
  param_1[0x17] = "managed_actor";
  FUN_1400b22c2(local_28,"Managed Actors");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeea10 FUN_145aeea10 body=128 status=ok
// SIG undefined FUN_145aeea10(void)

undefined8 * FUN_145aeea10(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b339e10;
  *(undefined4 *)(param_1 + 0x16) = 0x7001;
  param_1[0x17] = "mantle";
  FUN_1400b22c2(local_28,"Movement.Mantling");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeea9c FUN_145aeea9c body=128 status=ok
// SIG undefined FUN_145aeea9c(void)

undefined8 * FUN_145aeea9c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b37bf40;
  *(undefined4 *)(param_1 + 0x16) = 0x7201;
  param_1[0x17] = "camera_mode";
  FUN_1400b22c2(local_28,"Camera.Modes");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeeb28 FUN_145aeeb28 body=128 status=ok
// SIG undefined FUN_145aeeb28(void)

undefined8 * FUN_145aeeb28(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b37bae0;
  *(undefined4 *)(param_1 + 0x16) = 0x7202;
  param_1[0x17] = "camera_transition";
  FUN_1400b22c2(local_28,"Camera.Transitions");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeebb4 FUN_145aeebb4 body=128 status=ok
// SIG undefined FUN_145aeebb4(void)

undefined8 * FUN_145aeebb4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b36e010;
  *(undefined4 *)(param_1 + 0x16) = 0xd00dad16;
  param_1[0x17] = "dialogevent";
  FUN_1400b22c2(local_28,"GbxDialog.Events");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aeec40 FUN_145aeec40 body=128 status=ok
// SIG undefined FUN_145aeec40(void)

undefined8 * FUN_145aeec40(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b36ea50;
  *(undefined4 *)(param_1 + 0x16) = 0xd00dad1a;
  param_1[0x17] = "dialogquiettime";
  FUN_1400b22c2(local_28,"GbxDialog.DialogQuietTimes");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


