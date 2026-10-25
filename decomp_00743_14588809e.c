// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14588809e FUN_14588809e body=151 status=ok
// SIG undefined FUN_14588809e(void)

void FUN_14588809e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  char cVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x370) == '\x01') {
    *(undefined1 *)(lVar2 + 0x2a0) = 1;
    cVar4 = *(char *)(param_1 + 0x360);
LAB_1458880ea:
    if ((cVar4 != '\0') || (*(char *)(param_1 + 0x3b8) == '\0')) goto LAB_145888101;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x388);
    *(bool *)(lVar2 + 0x2a0) = 0 < iVar1;
    cVar4 = *(char *)(param_1 + 0x360);
    if ((0 < iVar1) || (cVar4 == '\0')) {
      if (iVar1 < 1) goto LAB_145888101;
      goto LAB_1458880ea;
    }
  }
  FUN_145888136(param_1,0);
LAB_145888101:
  if (*(char *)(lVar2 + 0xb2) == '\x01') {
    FUN_14129c92c(param_1);
  }
  puVar3 = *(ushort **)(lVar2 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 145888136 FUN_145888136 body=325 status=ok
// SIG undefined FUN_145888136(void)

void FUN_145888136(longlong param_1,char param_2)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xb4) == '\0')) {
    bVar1 = *(byte *)(param_1 + 0x360);
    *(byte *)(param_1 + 0x360) = bVar1 ^ 1;
    if (bVar1 == 0) {
      FUN_14129c92c(param_1);
      if ((*(char *)(param_1 + 0x370) == '\0') && (*(int *)(param_1 + 0x388) < 1)) {
        FUN_1457f2c12(param_1);
      }
    }
    else {
      if ((*(char *)(param_1 + 0x370) == '\0') && (*(int *)(param_1 + 0x388) < 1)) {
        FUN_14129cb24(param_1);
      }
      FUN_14129c92c(param_1);
      FUN_1412e39f8(param_1);
    }
    if (param_2 != '\0') {
      puVar6 = &DAT_14cbdf428;
      if (*(char *)(param_1 + 0x360) != '\0') {
        puVar6 = &DAT_14cbdf418;
      }
      FUN_140de1078(param_1,puVar6,0,0);
    }
    lVar5 = FUN_140391552(param_1);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x28);
      uVar2 = *(undefined1 *)(param_1 + 0x360);
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR_FUN_14b9cac20;
      *(undefined1 *)(puVar6 + 4) = uVar2;
      FUN_14039144e(lVar5,puVar6);
    }
    puVar4 = *(ushort **)(lVar3 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 14588827c FUN_14588827c body=104 status=ok
// SIG undefined FUN_14588827c(void)

void FUN_14588827c(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x28) == '\x01') {
      FUN_140721fbe(param_1 + 0x380,param_2 + 0x20);
    }
    else {
      local_18 = param_2 + 0x20;
      FUN_1408ff3be(param_1 + 0x380);
    }
    FUN_14588809e(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458882e6 FUN_1458882e6 body=216 status=ok
// SIG undefined FUN_1458882e6(void)

undefined8 * FUN_1458882e6(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1458883d0 FUN_1458883d0 body=29 status=ok
// SIG undefined FUN_1458883d0(void)

void FUN_1458883d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14129cc8e();
  FUN_1458883ee(param_1,uVar1);
  return;
}



// FUNCTION 1458883ee FUN_1458883ee body=350 status=ok
// SIG undefined FUN_1458883ee(void)

void FUN_1458883ee(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != 0) && (lVar2 = *(longlong *)(param_1 + 0x70), lVar2 != 0)) {
    FUN_14588854e(param_1 + 0x20,*(int *)(lVar2 + 0x88) - *(int *)(lVar2 + 0xb4));
    lVar3 = *(longlong *)(param_1 + 0x70);
    plVar1 = (longlong *)(lVar3 + 0x80);
    lVar2 = lVar3 + 0x90;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar6 = 0;
    local_50 = lVar2;
    if (*(int *)(lVar3 + 0xa8) != 0) {
      FUN_1449c0562(&local_58);
      iVar6 = *(int *)(lVar3 + 0xa8);
    }
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar5 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar6) || (local_68 = uVar4, local_50 != lVar2)) {
      do {
        do {
          local_68 = uVar4;
          FUN_148d3a43a(param_1,param_2 + 0x4f48,*(undefined4 *)(*local_80 + (longlong)iVar5 * 0x28)
                       );
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
          FUN_1449c0562(&local_78);
          iVar5 = local_68._4_4_;
          uVar4 = local_68;
        } while (local_68._4_4_ != iVar6);
      } while ((local_70 != lVar2) || (local_80 != plVar1));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14588854e FUN_14588854e body=107 status=ok
// SIG undefined FUN_14588854e(void)

void FUN_14588854e(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_14588859d:
      FUN_1410b06f0(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_148d42502(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14588859d;
  FUN_1458885ba(param_1);
  FUN_1410b06f0(param_1,param_2);
  return;
}



// FUNCTION 1458885ba FUN_1458885ba body=335 status=ok
// SIG undefined FUN_1458885ba(void)

void FUN_1458885ba(longlong *param_1)

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



// FUNCTION 14588870a FUN_14588870a body=72 status=ok
// SIG undefined FUN_14588870a(void)

void FUN_14588870a(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x780))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014588873a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x788))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerEquipInterruptible_Validate");
  return;
}



// FUNCTION 1458887d6 FUN_1458887d6 body=139 status=ok
// SIG undefined FUN_1458887d6(void)

undefined8 * FUN_1458887d6(undefined8 *param_1)

{
  FUN_140e0e104();
  *param_1 = &PTR_FUN_14b65ce90;
  param_1[6] = &PTR_FUN_14b65d180;
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xf00000d0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0x3f800000;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x38c) = 0x201;
  return param_1;
}



// FUNCTION 145888862 FUN_145888862 body=40 status=ok
// SIG undefined FUN_145888862(void)

undefined8 FUN_145888862(undefined8 param_1,int param_2)

{
  FUN_14588888a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588888a FUN_14588888a body=62 status=ok
// SIG undefined FUN_14588888a(void)

void FUN_14588888a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b632160;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_14588898c(param_1 + 0x32);
  FUN_1458888c8(param_1);
  return;
}



// FUNCTION 1458888c8 FUN_1458888c8 body=195 status=ok
// SIG undefined FUN_1458888c8(void)

void FUN_1458888c8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b626eb0;
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
  plVar3 = (longlong *)param_1[0x1e];
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
  plVar3 = (longlong *)param_1[0x1b];
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
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14588898c FUN_14588898c body=156 status=ok
// SIG undefined FUN_14588898c(void)

void FUN_14588898c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145888a4e(param_1 + 0x90);
  FUN_145888a28(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
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
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x000145888a1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145888a28 FUN_145888a28 body=38 status=ok
// SIG undefined FUN_145888a28(void)

void FUN_145888a28(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145888a4e(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145888a4e FUN_145888a4e body=75 status=ok
// SIG undefined FUN_145888a4e(void)

void FUN_145888a4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000145888a87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145888a9a FUN_145888a9a body=40 status=ok
// SIG undefined FUN_145888a9a(void)

undefined8 FUN_145888a9a(undefined8 param_1,int param_2)

{
  FUN_145888ac2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145888ac2 FUN_145888ac2 body=654 status=ok
// SIG undefined FUN_145888ac2(void)

void FUN_145888ac2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9229a0;
  param_1[0x72] = &PTR_FUN_14b923010;
  param_1[0x73] = &PTR_FUN_14b923030;
  param_1[0x74] = &PTR_FUN_14b923060;
  param_1[0x75] = &PTR_FUN_14b923070;
  param_1[0x76] = &PTR_FUN_14b9230e0;
  param_1[0x77] = &PTR_FUN_14b923110;
  param_1[0x78] = &PTR_FUN_14b923140;
  param_1[0x7f] = &PTR_FUN_14b9231f0;
  param_1[0x80] = &PTR_FUN_14b923260;
  param_1[0x81] = &PTR_FUN_14b9232d0;
  param_1[0x82] = &PTR_FUN_14b923300;
  param_1[0x83] = &PTR_FUN_14b923340;
  param_1[0x84] = &PTR_FUN_14b9233e0;
  param_1[0x85] = &PTR_FUN_14b923400;
  param_1[0x89] = &PTR_FUN_14b923420;
  param_1[0x8a] = &PTR_FUN_14b9234e0;
  param_1[0x8b] = &PTR_FUN_14b923560;
  param_1[0x8c] = &PTR_FUN_14b9235b0;
  param_1[0x8d] = &PTR_FUN_14b9235f0;
  param_1[0x8e] = &PTR_FUN_14b923610;
  param_1[0x8f] = &PTR_FUN_14b923630;
  param_1[0x90] = &PTR_FUN_14b923650;
  param_1[0x91] = &PTR_FUN_14b923670;
  param_1[0x92] = &PTR_FUN_14b923690;
  param_1[0x93] = &PTR_FUN_14b9236b0;
  param_1[0x94] = &PTR_FUN_14b9236d0;
  param_1[0x95] = &PTR_FUN_14b9236f0;
  param_1[0x96] = &PTR_FUN_14b923710;
  param_1[0x34b] = &PTR_FUN_14b923730;
  param_1[0x352] = &PTR_FUN_14b923740;
  param_1[0x353] = &PTR_FUN_14b923780;
  param_1[0x354] = &PTR_FUN_14b9237c0;
  param_1[0x355] = &PTR_FUN_14b923810;
  param_1[0x356] = &PTR_FUN_14b923840;
  param_1[0x359] = &PTR_FUN_14b923880;
  param_1[0x35a] = &PTR_FUN_14b923890;
  param_1[0x35b] = &PTR_FUN_14b9238c0;
  param_1[0x35c] = &PTR_FUN_14b923960;
  plVar3 = (longlong *)param_1[0x516];
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
  if (param_1[0x511] != 0) {
    FUN_1400020a8();
  }
  FUN_14129d1b2(param_1 + 0x4d2);
  if (param_1[0x4ca] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 145888d50 FUN_145888d50 body=362 status=ok
// SIG undefined FUN_145888d50(void)

void FUN_145888d50(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140761b7a(param_3,&local_38);
  if (local_38 != 0) {
    if (*(char *)(param_1 + 0x18) == '\x02') {
      uVar3 = 1;
    }
    else if (*(char *)(param_1 + 0x18) == '\x03') {
      uVar3 = FUN_147acc590(param_3);
    }
    else {
      uVar3 = 0;
    }
    local_48 = local_38;
    local_40 = local_30;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = *(int *)(local_30 + 1) + 1;
      UNLOCK();
    }
    local_58 = *(undefined8 *)(param_1 + 8);
    local_50 = *(longlong *)(param_1 + 0x10);
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_145888ece(param_2,&local_58,uVar3,&local_48);
    plVar2 = *(longlong **)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(uint *)(param_2 + 0xb4) = (*(uint *)(param_2 + 0xb4) & 0xffffffde) + 1;
    if (*(char *)(param_3 + 0x3cc) != *(char *)(param_1 + 0x18)) {
      *(char *)(param_3 + 0x3cc) = *(char *)(param_1 + 0x18);
    }
    *(undefined1 *)(param_3 + 0x3c9) = 0;
    FUN_14129d5ba(param_3,*(undefined1 *)(param_1 + 0x19));
    if (*(char *)(param_3 + 0x3ca) != '\x03') {
      *(undefined1 *)(param_3 + 0x3ca) = 3;
    }
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145888ece FUN_145888ece body=286 status=ok
// SIG undefined FUN_145888ece(void)

void FUN_145888ece(longlong param_1,longlong *param_2,char param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    local_30 = param_2[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    local_38 = lVar3;
    FUN_140592b68(param_1,&local_38,2,0);
  }
  if (param_3 == '\0') {
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 0x10;
    plVar4 = *(longlong **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  else {
    local_48 = *param_4;
    local_40 = param_4[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FUN_1405929ee(param_1,&local_48);
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145888ff8 FUN_145888ff8 body=125 status=ok
// SIG undefined FUN_145888ff8(void)

void FUN_145888ff8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99c9b0;
  param_1[4] = &PTR_FUN_14b99c9f0;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b99ca00;
  param_1[4] = &PTR_LAB_14b99ca40;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 145889084 FUN_145889084 body=40 status=ok
// SIG undefined FUN_145889084(void)

undefined8 FUN_145889084(undefined8 param_1,int param_2)

{
  FUN_1458890ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458890ac FUN_1458890ac body=89 status=ok
// SIG undefined FUN_1458890ac(void)

void FUN_1458890ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8ec600;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_140c85ee4(param_1 + 0x2d);
  FUN_140f71356(param_1);
  return;
}



// FUNCTION 145889106 FUN_145889106 body=459 status=ok
// SIG undefined FUN_145889106(void)

void FUN_145889106(longlong *param_1)

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
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1458892d2 FUN_1458892d2 body=180 status=ok
// SIG undefined FUN_1458892d2(void)

void FUN_1458892d2(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14045ac7c(&local_30,param_1);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_28;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_145889388(local_30,param_2,param_3);
      }
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145889388 FUN_145889388 body=211 status=ok
// SIG undefined FUN_145889388(void)

void FUN_145889388(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x38);
      lVar4 = (longlong)*(int *)(param_1 + 0x40) << 3;
      uVar6 = 0;
      do {
        lVar2 = FUN_14479d2ce(lVar5);
        if (lVar2 == param_2) {
          if (param_3 != '\0') goto LAB_1458893e2;
          if ((-1 < (int)uVar6) && (iVar1 = *(int *)(param_1 + 0x40), (int)uVar6 < iVar1)) {
            if (iVar1 - 1U != uVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar6 & 0x7fffffff) * 8),
                      (void *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar6 & 0x7fffffff) * 8 +
                              8),(longlong)(int)((iVar1 - 1U) - uVar6) << 3);
              iVar1 = *(int *)(param_1 + 0x40);
            }
            *(int *)(param_1 + 0x40) = iVar1 + -1;
            FUN_1458894a0(param_1 + 0x38);
          }
          goto LAB_1458893f5;
        }
        lVar5 = lVar5 + 8;
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    if (param_3 != '\0') {
LAB_1458893e2:
      uVar3 = FUN_14588945c(param_1 + 0x38);
      FUN_14485c47a(uVar3,param_2);
    }
  }
LAB_1458893f5:
  FUN_1411d7036(param_1);
  return;
}



// FUNCTION 14588945c FUN_14588945c body=59 status=ok
// SIG undefined FUN_14588945c(void)

longlong FUN_14588945c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145889538(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_145889497(lVar2);
  return lVar2;
}



// FUNCTION 145889497 FUN_145889497 body=8 status=ok
// SIG undefined FUN_145889497(void)

void FUN_145889497(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 1458894a0 FUN_1458894a0 body=62 status=ok
// SIG undefined FUN_1458894a0(void)

void FUN_1458894a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458894de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1458894de FUN_1458894de body=89 status=ok
// SIG undefined FUN_1458894de(void)

ulonglong FUN_1458894de(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145889538 FUN_145889538 body=132 status=ok
// SIG undefined FUN_145889538(void)

void FUN_145889538(longlong param_1,int param_2)

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



// FUNCTION 1458895bc FUN_1458895bc body=153 status=ok
// SIG undefined FUN_1458895bc(void)

void FUN_1458895bc(longlong param_1,undefined8 param_2,undefined4 param_3,char param_4,
                  undefined8 param_5)

{
  FUN_144a7dcb2(param_1 + 0x88,param_2,param_5);
  FUN_144a7dcdc(param_1,param_2,param_5);
  FUN_14472d638(param_1,param_2,param_5,0xffffffff);
  FUN_140042a1e(param_1,param_2,param_5,param_3);
  if (param_4 == '\0') {
    FUN_144a7dd4a(param_1 + 200,param_2,param_5);
    return;
  }
  FUN_14007f3da(param_2,param_5,0);
  return;
}



// FUNCTION 145889656 FUN_145889656 body=64 status=ok
// SIG undefined FUN_145889656(void)

longlong FUN_145889656(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145889722(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa8 + *param_1;
  thunk_FUN_14588969c(lVar2);
  return lVar2;
}



// FUNCTION 145889696 thunk_FUN_14588969c body=5 status=ok
// SIG undefined thunk_FUN_14588969c(void)

undefined8 * thunk_FUN_14588969c(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[2] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 100;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 14588969c FUN_14588969c body=133 status=ok
// SIG undefined FUN_14588969c(void)

undefined8 * FUN_14588969c(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[2] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 100;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 145889722 FUN_145889722 body=146 status=ok
// SIG undefined FUN_145889722(void)

void FUN_145889722(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458897c4 FUN_1458897c4 body=45 status=ok
// SIG undefined FUN_1458897c4(void)

undefined8 FUN_1458897c4(undefined8 param_1,int param_2)

{
  FUN_1458897f2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1458897f2 FUN_1458897f2 body=71 status=ok
// SIG undefined FUN_1458897f2(void)

void FUN_1458897f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b33e0c0;
  FUN_145889839(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145889839 FUN_145889839 body=49 status=ok
// SIG undefined FUN_145889839(void)

void FUN_145889839(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14588986a FUN_14588986a body=55 status=ok
// SIG undefined FUN_14588986a(void)

void FUN_14588986a(longlong *param_1)

{
  FUN_1458898a2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458898a2 FUN_1458898a2 body=123 status=ok
// SIG undefined FUN_1458898a2(void)

void FUN_1458898a2(longlong param_1,int param_2)

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



// FUNCTION 14588991e FUN_14588991e body=473 status=ok
// SIG undefined FUN_14588991e(void)

void FUN_14588991e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined2 local_1b8;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (**(longlong **)(param_1 + 0x18) != 0) {
    local_218 = 0;
    local_210 = 0x8000000000;
    uStack_208 = 0xffffffff;
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0xf;
    local_1b8 = 1;
    local_1b4 = 0;
    uStack_1ac = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_17c = 0x3ff00000;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_158 = 0;
    uStack_154 = 0x3ff00000;
    uStack_150 = 0;
    uStack_14c = 0x3ff00000;
    local_148 = 0x3ff0000000000000;
    uStack_140 = 0;
    local_130 = (undefined4)DAT_14c8464e0;
    uStack_12c = DAT_14c8464e0._4_4_;
    uStack_128 = (undefined4)DAT_14c8464e8;
    uStack_124 = DAT_14c8464e8._4_4_;
    local_120 = DAT_14c8464f0;
    local_118 = (undefined4)DAT_14c8464e0;
    uStack_114 = DAT_14c8464e0._4_4_;
    uStack_110 = (undefined4)DAT_14c8464e8;
    uStack_10c = DAT_14c8464e8._4_4_;
    local_108 = DAT_14c8464f0;
    local_88 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 2;
    local_20 = 0;
    cVar1 = FUN_145889d50(param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = FUN_144729dda(&uStack_40);
      if (cVar1 != '\0') {
        cVar1 = FUN_144729dda(&local_48);
        if (cVar1 != '\0') {
          uVar2 = FUN_145889af8(&local_278);
          FUN_1400da9ba(&local_38,uVar2);
          if (**(longlong **)(param_1 + 0x18) == 0) {
            *(undefined4 *)(param_1 + 0x20) = 1;
          }
        }
      }
    }
    FUN_14129df96(&local_278);
  }
  if ((local_10 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145889af8 FUN_145889af8 body=320 status=ok
// SIG undefined FUN_145889af8(void)

longlong FUN_145889af8(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  undefined1 local_2c8 [608];
  code *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar5 = param_1 + 0x230;
  cVar1 = FUN_144729dda(lVar5);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(lVar5);
    lVar3 = FUN_1447210f0(uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_14479d2ce(lVar5);
      uVar4 = FUN_144a7ddba();
      lVar5 = FUN_140f63eb4(lVar3,uVar4,param_1 + 0xe0,uVar2);
      if (lVar5 != 0) {
        local_2d8 = lVar5;
        FUN_141290dc2(local_2c8,param_1);
        local_68[0] = (code *)0x0;
        puVar6 = (undefined8 *)FUN_14001cc68(0x280,0x10);
        *puVar6 = &PTR_FUN_14b412930;
        puVar6[2] = local_2d8;
        local_58 = puVar6;
        FUN_145889c3a(puVar6 + 4,local_2c8);
        if (puVar6 != (undefined8 *)&DAT_fffffffffffffff0) {
          local_68[0] = FUN_143daf0e8;
        }
        FUN_140f6405a(lVar5,param_1,local_68);
        FUN_14129df96(local_2c8);
        goto LAB_145889c0b;
      }
    }
  }
  lVar5 = 0;
LAB_145889c0b:
  if ((local_28 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145889c3a FUN_145889c3a body=278 status=ok
// SIG undefined FUN_145889c3a(void)

longlong FUN_145889c3a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_140d8ebf0();
  puVar4 = (undefined8 *)(param_2 + 0xe0);
  puVar5 = (undefined8 *)(param_1 + 0xe0);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)(param_2 + 0x140);
  puVar5 = (undefined8 *)(param_1 + 0x140);
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar1 = *(char *)(param_2 + 0x1f0);
  *(char *)(param_1 + 0x1f0) = cVar1;
  if (cVar1 == '\x01') {
    puVar4 = (undefined8 *)(param_2 + 400);
    puVar5 = (undefined8 *)(param_1 + 400);
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  uVar2 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x210) = uVar2;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_2 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
  *(undefined8 *)(param_2 + 0x220) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = uVar2;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 2;
  FUN_14019d794(param_1 + 0x240,param_2 + 0x240);
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 600);
  return param_1;
}



// FUNCTION 145889d50 FUN_145889d50 body=438 status=ok
// SIG undefined FUN_145889d50(void)

bool FUN_145889d50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [108];
  undefined4 local_22c;
  undefined4 local_228;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_14129dff4(param_2);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    memset(local_298,0,0x230);
    local_22c = 0x80;
    local_228 = 0xffffffff;
    local_218 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0xf;
    local_1d8 = 1;
    local_1d4 = 0;
    uStack_1cc = 0;
    local_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0x3ff00000;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_174 = 0x3ff00000;
    uStack_170 = 0;
    uStack_16c = 0x3ff00000;
    local_168 = 0x3ff0000000000000;
    uStack_160 = 0;
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_128 = DAT_14c8464f0;
    local_138 = (undefined4)DAT_14c8464e0;
    uStack_134 = DAT_14c8464e0._4_4_;
    uStack_130 = (undefined4)DAT_14c8464e8;
    uStack_12c = DAT_14c8464e8._4_4_;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_48 = 2;
    local_40 = 0;
    FUN_14129dff4(lVar1 + 0x10,local_298);
    FUN_14129df96(local_298);
    if (lVar2 != 0) {
      FUN_14129df96(lVar2 + 0x10);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145889f12 FUN_145889f12 body=236 status=ok
// SIG undefined FUN_145889f12(void)

undefined8 * FUN_145889f12(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14588a000();
  *param_1 = &PTR_FUN_14a8b5e20;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_14020fad6(param_1 + 9,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 7,&DAT_149dfb77a);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_140d6ab96(local_40);
  FUN_144a882a8(local_30,local_40,L"Deviceprofiles.ini");
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a000 FUN_14588a000 body=39 status=ok
// SIG undefined FUN_14588a000(void)

undefined8 * FUN_14588a000(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aad6cb0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14588a028 FUN_14588a028 body=21 status=ok
// SIG undefined FUN_14588a028(void)

undefined8 FUN_14588a028(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14588a04e FUN_14588a04e body=228 status=ok
// SIG undefined FUN_14588a04e(void)

longlong FUN_14588a04e(void)

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
  if (DAT_14c952720 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e4743;
    local_40 = FUN_146275b79;
    local_48 = L"Engine";
    local_50 = 0x1000000;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"NumericProperty",&DAT_14c952720,&DAT_1468e4748);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952720;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a13a FUN_14588a13a body=228 status=ok
// SIG undefined FUN_14588a13a(void)

longlong FUN_14588a13a(void)

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
  if (DAT_14cb0ae10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_147d6879f;
    local_40 = FUN_146406e19;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"TickableWorldSubsystem",&DAT_14cb0ae10,&DAT_147d6879e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0ae10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a226 FUN_14588a226 body=228 status=ok
// SIG undefined FUN_14588a226(void)

longlong FUN_14588a226(void)

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
  if (DAT_14cab2be8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_147547c53;
    local_40 = FUN_14179d93e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1b0;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEvalTimeSystem",&DAT_14cab2be8,&DAT_147547c52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2be8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a310 FUN_14588a310 body=228 status=ok
// SIG undefined FUN_14588a310(void)

longlong FUN_14588a310(void)

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
  if (DAT_14cab8898 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145920ed2;
    local_38 = &LAB_147754cce;
    local_40 = &LAB_140ea08c5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x330;
    FUN_14081cfa3(L"/Script/UMG",L"TextBlock",&DAT_14cab8898,FUN_14635836c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8898;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a3fa FUN_14588a3fa body=228 status=ok
// SIG undefined FUN_14588a3fa(void)

longlong FUN_14588a3fa(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabfaf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_146371ddc;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478615fe;
    local_40 = &LAB_146371de1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/Engine",L"DataLayerManager",&DAT_14cabfaf0,FUN_146371db4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabfaf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a4ea FUN_14588a4ea body=43 status=ok
// SIG undefined FUN_14588a4ea(void)

undefined8 * FUN_14588a4ea(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5de900;
  param_1[5] = &PTR_LAB_14a5deba0;
  return param_1;
}



// FUNCTION 14588a520 FUN_14588a520 body=228 status=ok
// SIG undefined FUN_14588a520(void)

longlong FUN_14588a520(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac56b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_14788740f;
    local_40 = &LAB_145acef06;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleLocationBase",&DAT_14cac56b8,&DAT_14788740e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac56b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a60a FUN_14588a60a body=228 status=ok
// SIG undefined FUN_14588a60a(void)

longlong FUN_14588a60a(void)

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
  if (DAT_14cac8410 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146396f60;
    local_38 = &LAB_1478a5c99;
    local_40 = &LAB_14582a1cb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x1d0;
    FUN_14081cfa3(L"/Script/Engine",L"SparseVolumeTextureFrame",&DAT_14cac8410,&DAT_1478a5c98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a6f4 FUN_14588a6f4 body=228 status=ok
// SIG undefined FUN_14588a6f4(void)

longlong FUN_14588a6f4(void)

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
  if (DAT_14cac8920 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1478a9a47;
    local_40 = FUN_146398af7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Engine",L"TextureCollection",&DAT_14cac8920,&DAT_1478a9a46);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a7e8 FUN_14588a7e8 body=228 status=ok
// SIG undefined FUN_14588a7e8(void)

longlong FUN_14588a7e8(void)

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
  if (DAT_14cb08c88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146396d1c;
    local_38 = &LAB_147d3c845;
    local_40 = &LAB_145eda075;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x408;
    FUN_14081cfa3(L"/Script/Engine",L"SoundSourceBus",&DAT_14cb08c88,&DAT_147d3c844);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb08c88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a8d2 FUN_14588a8d2 body=228 status=ok
// SIG undefined FUN_14588a8d2(void)

longlong FUN_14588a8d2(void)

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
  if (DAT_14cb0b678 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580f4ee;
    local_38 = &LAB_147d70df1;
    local_40 = FUN_1464086a5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/Engine",L"TextureLightProfile",&DAT_14cb0b678,&DAT_147d70df0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588a9c2 FUN_14588a9c2 body=228 status=ok
// SIG undefined FUN_14588a9c2(void)

longlong FUN_14588a9c2(void)

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
  if (DAT_14cb1fbd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d626a;
    local_38 = &LAB_147ecedaf;
    local_40 = FUN_14642c34e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryGenerator",&DAT_14cb1fbd8,&DAT_147ecedae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1fbd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588aaa8 FUN_14588aaa8 body=9 status=ok
// SIG undefined FUN_14588aaa8(void)

void FUN_14588aaa8(longlong param_1)

{
  FUN_14588aab2(param_1 + 0x10);
  return;
}



// FUNCTION 14588aab2 FUN_14588aab2 body=68 status=ok
// SIG undefined FUN_14588aab2(void)

void FUN_14588aab2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac9f900;
  FUN_14588aaf6(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  return;
}



// FUNCTION 14588aaf6 FUN_14588aaf6 body=49 status=ok
// SIG undefined FUN_14588aaf6(void)

void FUN_14588aaf6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14588ab28 FUN_14588ab28 body=123 status=ok
// SIG undefined FUN_14588ab28(void)

undefined8 * FUN_14588ab28(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,param_3);
  FUN_14588abe2(param_1,param_2,local_30,0);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ae0ead0;
  FUN_14588aba4(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588aba4 FUN_14588aba4 body=62 status=ok
// SIG undefined FUN_14588aba4(void)

void FUN_14588aba4(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014588abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14588abe2 FUN_14588abe2 body=138 status=ok
// SIG undefined FUN_14588abe2(void)

undefined8 *
FUN_14588abe2(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  void *_Src;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14ae0eb00;
  *(undefined1 *)(param_1 + 2) = param_2;
  param_1[3] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = param_4;
  return param_1;
}



// FUNCTION 14588ac72 FUN_14588ac72 body=228 status=ok
// SIG undefined FUN_14588ac72(void)

longlong FUN_14588ac72(void)

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
  if (DAT_14cb45420 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146480d62;
    local_38 = &LAB_14822ff3c;
    local_40 = &LAB_145a19c85;
    local_48 = L"CommonUI";
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 0x10;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonNumericTextBlock",&DAT_14cb45420,FUN_14648161e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb45420;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588ad5c FUN_14588ad5c body=228 status=ok
// SIG undefined FUN_14588ad5c(void)

longlong FUN_14588ad5c(void)

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
  if (DAT_14cb45490 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e5f7e;
    local_38 = &LAB_148231077;
    local_40 = FUN_146481821;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x7e0;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonRichTextBlock",&DAT_14cb45490,FUN_1464817fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb45490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588ae46 FUN_14588ae46 body=228 status=ok
// SIG undefined FUN_14588ae46(void)

longlong FUN_14588ae46(void)

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
  if (DAT_14cb45f78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146351894;
    local_38 = &LAB_14823a747;
    local_40 = &LAB_145a45136;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1c8;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonWidgetCarousel",&DAT_14cb45f78,FUN_14648389c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb45f78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588af30 FUN_14588af30 body=228 status=ok
// SIG undefined FUN_14588af30(void)

longlong FUN_14588af30(void)

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
  if (DAT_14cb4cb70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_1484e3069;
    local_40 = &LAB_14605fead;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x750;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"TriangleSetComponent",&DAT_14cb4cb70,
                  &DAT_1484e3068);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4cb70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588b01c FUN_14588b01c body=228 status=ok
// SIG undefined FUN_14588b01c(void)

longlong FUN_14588b01c(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5c250 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1464ae552;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486851e2;
    local_40 = &LAB_1459c41d8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCurrencyManager",&DAT_14cb5c250,FUN_1464d49e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c250;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588b12c FUN_14588b12c body=31 status=ok
// SIG undefined FUN_14588b12c(void)

undefined8 FUN_14588b12c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588b150 FUN_14588b150 body=228 status=ok
// SIG undefined FUN_14588b150(void)

longlong FUN_14588b150(void)

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
  if (DAT_14cb69a28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148755c5b;
    local_40 = FUN_14652253e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusActor",&DAT_14cb69a28,&DAT_148755c5a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69a28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588b236 FUN_14588b236 body=40 status=ok
// SIG undefined FUN_14588b236(void)

undefined8 FUN_14588b236(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588b25e thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 14588b264 FUN_14588b264 body=40 status=ok
// SIG undefined FUN_14588b264(void)

undefined8 FUN_14588b264(undefined8 param_1,int param_2)

{
  FUN_14588b28c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588b28c FUN_14588b28c body=57 status=ok
// SIG undefined FUN_14588b28c(void)

void FUN_14588b28c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b903580;
  FUN_14588b2c5(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fa3ec8(param_1);
  return;
}



// FUNCTION 14588b2c5 FUN_14588b2c5 body=68 status=ok
// SIG undefined FUN_14588b2c5(void)

void FUN_14588b2c5(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_14588b30a(puVar1 + -0x12);
      puVar1 = puVar1 + 0x22;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14588b30a FUN_14588b30a body=55 status=ok
// SIG undefined FUN_14588b30a(void)

void FUN_14588b30a(longlong *param_1)

{
  FUN_14588b342(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14588b342 FUN_14588b342 body=121 status=ok
// SIG undefined FUN_14588b342(void)

void FUN_14588b342(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 14588b3c8 FUN_14588b3c8 body=228 status=ok
// SIG undefined FUN_14588b3c8(void)

longlong FUN_14588b3c8(void)

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
  if (DAT_14cbf33f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459ee376;
    local_38 = &LAB_148f485cd;
    local_40 = &LAB_146666169;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/MeshModelingTools",L"AddPrimitiveTool",&DAT_14cbf33f0,&DAT_148f485cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf33f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588b4b2 FUN_14588b4b2 body=228 status=ok
// SIG undefined FUN_14588b4b2(void)

longlong FUN_14588b4b2(void)

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
  if (DAT_14cc10be8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1493bca0f;
    local_40 = FUN_14672cc52;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InterchangeImport",L"InterchangeTexturePayloadInterface",&DAT_14cc10be8,
                  &DAT_1493bca0e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc10be8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588b598 FUN_14588b598 body=156 status=ok
// SIG undefined FUN_14588b598(void)

void FUN_14588b598(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14588b636(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588b636 FUN_14588b636 body=125 status=ok
// SIG undefined FUN_14588b636(void)

void FUN_14588b636(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar3 = 0;
    do {
      FUN_14129f51c(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar3 = 0;
    do {
      FUN_14129f51c(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14588b6b4 FUN_14588b6b4 body=158 status=ok
// SIG undefined FUN_14588b6b4(void)

void FUN_14588b6b4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) goto LAB_14588b722;
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  local_30 = lVar1;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_14588b6f9;
    local_28 = 0;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_14588b6f9:
    uVar2 = FUN_1413dc4e6();
    local_28 = FUN_144718840(lVar1,uVar2);
  }
  local_20 = &local_30;
  FUN_14588b754(param_1 + 0x18);
LAB_14588b722:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588b754 FUN_14588b754 body=386 status=ok
// SIG undefined FUN_14588b754(void)

void FUN_14588b754(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong local_50;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar1;
  if (lVar5 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar4 = 0;
    if (*plVar2 != 0) {
      lVar4 = plVar2[1];
    }
    lVar3 = *(longlong *)*param_2;
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = ((longlong *)*param_2)[1];
    }
    uVar15 = 0;
    bVar6 = *plVar2 == lVar3 && lVar4 == lVar8;
    uVar12 = 0;
    do {
      uVar10 = (ulonglong)uVar12;
      uVar7 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar1) {
        uVar7 = uVar1;
      }
      plVar9 = plVar2 + uVar10 * 2 + 3;
      uVar14 = uVar12;
      uVar11 = uVar10;
      do {
        uVar11 = uVar11 + 1;
        uVar13 = uVar7;
        if (lVar5 <= (longlong)uVar11) break;
        lVar4 = plVar9[-1];
        local_50 = lVar4;
        if (lVar4 != 0) {
          local_50 = *plVar9;
        }
        lVar3 = *(longlong *)*param_2;
        lVar8 = 0;
        if (lVar3 != 0) {
          lVar8 = ((longlong *)*param_2)[1];
        }
        uVar14 = uVar14 + 1;
        plVar9 = plVar9 + 2;
        uVar13 = uVar14;
      } while (bVar6 == (lVar4 == lVar3 && local_50 == lVar8));
      if (bVar6 == false) {
        if (uVar15 != uVar12) {
          memmove(plVar2 + (longlong)(int)uVar15 * 2,plVar2 + uVar10 * 2,
                  (longlong)(int)(uVar13 - uVar12) << 4);
        }
        uVar15 = uVar15 + (uVar13 - uVar12);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      uVar12 = uVar13;
    } while ((longlong)uVar11 < lVar5);
    *(uint *)(param_1 + 1) = uVar15;
  }
  return;
}



// FUNCTION 14588b8d6 FUN_14588b8d6 body=53 status=ok
// SIG undefined FUN_14588b8d6(void)

void FUN_14588b8d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_144717c65(lVar1,*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14588b90c FUN_14588b90c body=8 status=ok
// SIG undefined FUN_14588b90c(void)

undefined8 * FUN_14588b90c(void)

{
  return &DAT_14caa0968;
}



// FUNCTION 14588b914 FUN_14588b914 body=124 status=ok
// SIG undefined FUN_14588b914(void)

longlong * FUN_14588b914(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x380,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b0215a0;
  FUN_14588b990(plVar3 + 2,0);
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



// FUNCTION 14588b990 FUN_14588b990 body=424 status=ok
// SIG undefined FUN_14588b990(void)

undefined8 * FUN_14588b990(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((((param_2 == 0) || (lVar2 = FUN_14129fedc(), lVar2 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    param_2 = FUN_14129fedc();
  }
  FUN_140aed22a(param_1,param_2);
  *param_1 = &PTR_FUN_14b0215d0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0x8000000000;
  param_1[0x50] = 0xffffffff;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0xbf800000bf800000;
  uVar1 = DAT_14c8464e8;
  param_1[0x5a] = DAT_14c8464e0;
  param_1[0x5b] = uVar1;
  param_1[0x5c] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x5e] = DAT_14c8464e0;
  param_1[0x5f] = uVar1;
  param_1[0x60] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x62] = DAT_14c8464e0;
  param_1[99] = uVar1;
  param_1[100] = DAT_14c8464f0;
  param_1[0x65] = 0;
  param_1[0x6c] = 0x43fa000000000000;
  *(undefined4 *)(param_1 + 0x6d) = 3;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x66) = 0x41a00000;
  param_1[0x68] = 0x402e000000000000;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0x41c80000;
  *(byte *)((longlong)param_1 + 0x35c) = *(byte *)((longlong)param_1 + 0x35c) & 0xfc;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xfe;
  return param_1;
}



// FUNCTION 14588bb38 FUN_14588bb38 body=169 status=ok
// SIG undefined FUN_14588bb38(void)

ulonglong FUN_14588bb38(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  plVar1 = param_1 + -0x768;
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_1449d6ade();
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_1449d6ade();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
        uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
        iVar3 = FUN_14486116a(uVar4,plVar1);
        if (iVar3 != 2) {
          return 0;
        }
      }
    }
  }
  cVar2 = FUN_1449ce79a(plVar1);
  if ((cVar2 == '\0') &&
     ((lVar7 = FUN_14010113e(plVar1), lVar7 == 0 || (*(longlong **)(lVar7 + 0x21f0) != plVar1)))) {
    uVar8 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
    return uVar8 ^ 1;
  }
  return 0;
}



// FUNCTION 14588bbe2 FUN_14588bbe2 body=54 status=ok
// SIG undefined FUN_14588bbe2(void)

undefined8 FUN_14588bbe2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x58))();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[0x990];
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != param_2 && lVar1 != 0);
  }
  return uVar3;
}



// FUNCTION 14588bc1c FUN_14588bc1c body=9 status=ok
// SIG undefined FUN_14588bc1c(void)

void FUN_14588bc1c(longlong param_1)

{
  FUN_14588bc26(param_1 + 0x10);
  return;
}



// FUNCTION 14588bc26 FUN_14588bc26 body=160 status=ok
// SIG undefined FUN_14588bc26(void)

void FUN_14588bc26(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d7d60;
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14588bcc6(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014588bcc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14588bcc6 FUN_14588bcc6 body=53 status=ok
// SIG undefined FUN_14588bcc6(void)

void FUN_14588bcc6(longlong *param_1)

{
  FUN_14588bcfc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14588bcfc FUN_14588bcfc body=90 status=ok
// SIG undefined FUN_14588bcfc(void)

void FUN_14588bcfc(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 14588bd56 FUN_14588bd56 body=358 status=ok
// SIG undefined FUN_14588bd56(void)

undefined8 * FUN_14588bd56(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14588bebe();
  *param_1 = &PTR_FUN_14ba0ade0;
  param_1[5] = &PTR_FUN_14ba0b190;
  param_1[0x13] = &PTR_FUN_14ba0b1b0;
  param_1[0x14] = &PTR_FUN_14ba0b1d0;
  param_1[0x15] = &PTR_FUN_14ba0b200;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_140056680(param_1 + 0x1d,L"GeneratedAsset");
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x21) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
  param_1[0x22] = DAT_14c8464f0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3ff0000000000000;
  FUN_1446f470e(&local_38,L"ShapeSettings",1);
  uVar4 = FUN_14118b72e();
  local_40 = 0;
  local_48 = 1;
  lVar5 = FUN_14048696c(param_1,local_38,uVar4,uVar4);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0x18] = lVar5;
  FUN_14472eae2(lVar5,8);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588bebe FUN_14588bebe body=57 status=ok
// SIG undefined FUN_14588bebe(void)

undefined8 * FUN_14588bebe(undefined8 *param_1)

{
  FUN_140fe66fa();
  *param_1 = &PTR_FUN_14aed2f00;
  param_1[5] = &PTR_FUN_14aed3280;
  param_1[0x13] = &PTR_FUN_14aed32a0;
  return param_1;
}



// FUNCTION 14588bef8 FUN_14588bef8 body=24 status=ok
// SIG undefined FUN_14588bef8(void)

bool FUN_14588bef8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14588bf10 FUN_14588bf10 body=254 status=ok
// SIG undefined FUN_14588bf10(void)

undefined8
FUN_14588bf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e01f80;
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
  *local_48 = &PTR_FUN_14b9ba610;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ca2242(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588c010 FUN_14588c010 body=254 status=ok
// SIG undefined FUN_14588c010(void)

undefined8
FUN_14588c010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e06450;
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
  *local_48 = &PTR_FUN_14b9ba680;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588c110 FUN_14588c110 body=326 status=ok
// SIG undefined FUN_14588c110(void)

undefined8
FUN_14588c110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9ba1b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_14588c1e3;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14588c1e3:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588c262 FUN_14588c262 body=152 status=ok
// SIG undefined FUN_14588c262(void)

undefined8 * FUN_14588c262(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140eacc52();
  *param_1 = &PTR_FUN_14a8b1580;
  lVar1 = FUN_144800528();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *(undefined4 *)(param_1 + 0x79) = *(undefined4 *)(lVar2 + 0x3c);
  lVar1 = FUN_144800528();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *(undefined4 *)(param_1 + 0x7a) = *(undefined4 *)(lVar2 + 0x40);
  (**(code **)(*(longlong *)param_1[0x75] + 0x720))((longlong *)param_1[0x75],0);
  return param_1;
}



// FUNCTION 14588c2fa FUN_14588c2fa body=40 status=ok
// SIG undefined FUN_14588c2fa(void)

undefined8 FUN_14588c2fa(undefined8 param_1,int param_2)

{
  FUN_14588c322();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588c322 FUN_14588c322 body=91 status=ok
// SIG undefined FUN_14588c322(void)

void FUN_14588c322(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b830f00;
  param_1[6] = &PTR_FUN_14b8311c0;
  param_1[7] = &PTR_FUN_14b831250;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14588c37e(param_1 + 9);
  FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 14588c37e FUN_14588c37e body=55 status=ok
// SIG undefined FUN_14588c37e(void)

void FUN_14588c37e(longlong *param_1)

{
  FUN_14588c3b6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14588c3b6 FUN_14588c3b6 body=121 status=ok
// SIG undefined FUN_14588c3b6(void)

void FUN_14588c3b6(longlong param_1,int param_2)

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



// FUNCTION 14588c441 FUN_14588c441 body=100 status=ok
// SIG undefined FUN_14588c441(void)

void FUN_14588c441(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14588c4a6(puVar1);
  *puVar1 = &PTR_FUN_14ba15750;
  *(undefined1 *)(puVar1 + 0x23) = 2;
  *(undefined1 *)((longlong)puVar1 + 0x119) = 1;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0x4056800000000000;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  *(undefined2 *)(puVar1 + 0x2a) = 0x101;
  return;
}



// FUNCTION 14588c4a6 FUN_14588c4a6 body=377 status=ok
// SIG undefined FUN_14588c4a6(void)

undefined8 * FUN_14588c4a6(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined8 *local_80;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_14007ca06();
  FUN_140d2f8ee(param_1,uVar2);
  *param_1 = &PTR_FUN_14ba23010;
  param_1[0x15] = 0x4076800000000000;
  param_1[0x16] = 0x4076800000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0x402e000000000000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x18;
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xd7) = 0;
  param_1[0x1c] = 0x3fb999999999999a;
  *(undefined2 *)(param_1 + 0x1d) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xea) = 1;
  param_1[0x1e] = 0x3f847ae147ae147b;
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  param_1[0x20] = 0x3fb999999999999a;
  *(undefined2 *)(param_1 + 0x21) = 0x100;
  local_58 = 0;
  local_48 = &PTR_LAB_14ba25030;
  local_68 = &LAB_148f75df4;
  local_40 = param_1;
  uVar1 = FUN_14588c620(param_1 + 5,param_1 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar1;
  local_98 = 0;
  local_88 = &PTR_LAB_14ba25050;
  local_a8 = &LAB_148f75e20;
  local_80 = param_1;
  uVar1 = FUN_14588c620(param_1 + 5,param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x22) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588c620 FUN_14588c620 body=213 status=ok
// SIG undefined FUN_14588c620(void)

int FUN_14588c620(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xe0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14588c77e(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588c70e FUN_14588c70e body=31 status=ok
// SIG undefined FUN_14588c70e(void)

undefined8 FUN_14588c70e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588c72e FUN_14588c72e body=31 status=ok
// SIG undefined FUN_14588c72e(void)

undefined8 FUN_14588c72e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588c77e FUN_14588c77e body=204 status=ok
// SIG undefined FUN_14588c77e(void)

undefined8 * FUN_14588c77e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14ba26610;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_14ba26630;
  param_1[9] = param_2;
  param_1[4] = &LAB_148f77e48;
  param_1[0xc] = *param_3;
  param_1[0xe] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x12) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(int *)(param_1 + 0x13) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  *(int *)(param_1 + 0x10) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(int *)(param_1 + 0x11) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  if (param_1[0xc] != 0) {
    *param_3 = 0;
  }
  param_1[0x16] = 0;
  param_1[0x18] = &PTR_LAB_14ba26650;
  param_1[0x19] = &LAB_148f77e6e;
  param_1[0x14] = &LAB_148f77e80;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 14588c84a FUN_14588c84a body=132 status=ok
// SIG undefined FUN_14588c84a(void)

void FUN_14588c84a(longlong param_1,int param_2)

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



// FUNCTION 14588c8ce FUN_14588c8ce body=107 status=ok
// SIG undefined FUN_14588c8ce(void)

undefined8 FUN_14588c8ce(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_14588c93a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14588c93a FUN_14588c93a body=100 status=ok
// SIG undefined FUN_14588c93a(void)

void FUN_14588c93a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_14588c99e(param_1,param_2,1);
  return;
}



// FUNCTION 14588c99e FUN_14588c99e body=110 status=ok
// SIG undefined FUN_14588c99e(void)

void FUN_14588c99e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)((longlong)param_2 * 0x60 + *param_1 + 0x50);
    iVar1 = param_3;
    do {
      *puVar2 = 0;
      if (*(longlong *)(puVar2 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_140441eda(puVar2 + -0x12);
      puVar2 = puVar2 + 0x18;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_14588ca0c(param_1,param_2,param_3);
  return;
}



// FUNCTION 14588ca0c FUN_14588ca0c body=146 status=ok
// SIG undefined FUN_14588ca0c(void)

void FUN_14588ca0c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x60 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14588cab4 FUN_14588cab4 body=238 status=ok
// SIG undefined FUN_14588cab4(void)

void FUN_14588cab4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14011be0c(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_1403adc5e(&local_38,lVar4);
      puVar3 = *(undefined8 **)(local_38 + 0x70);
      AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 4));
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      if (0 < *(int *)(puVar3 + 1)) {
        *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
        local_22 = 0x101;
        FUN_1403adb6e(*puVar3,1,DAT_14cbd69f0);
        *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588cbc2 FUN_14588cbc2 body=36 status=ok
// SIG undefined FUN_14588cbc2(void)

undefined8 FUN_14588cbc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14588cbe6 FUN_14588cbe6 body=52 status=ok
// SIG undefined FUN_14588cbe6(void)

void FUN_14588cbe6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_14007ca06();
  FUN_14588cc1a(param_1,uVar1);
  *param_1 = &PTR_FUN_14aeb6bd0;
  FUN_14472eae2(param_1,8);
  return;
}



// FUNCTION 14588cc1a FUN_14588cc1a body=39 status=ok
// SIG undefined FUN_14588cc1a(void)

undefined8 * FUN_14588cc1a(undefined8 *param_1)

{
  FUN_140312256();
  *param_1 = &PTR_FUN_14aea3620;
  *(undefined1 *)(param_1 + 0x72) = 0;
  return param_1;
}



// FUNCTION 14588cc42 FUN_14588cc42 body=172 status=ok
// SIG undefined FUN_14588cc42(void)

undefined8 * FUN_14588cc42(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = 0x4130000000000000;
  param_1[5] = 0x4130000000000000;
  param_1[6] = 0x4130000000000000;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[8] = 0x4121000000000000;
  param_1[9] = 0x411e000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x40808f227be81608;
  FUN_14588ccee(param_1 + 0xc);
  FUN_14588cd2a(param_1 + 0x10);
  return param_1;
}



// FUNCTION 14588ccee FUN_14588ccee body=60 status=ok
// SIG undefined FUN_14588ccee(void)

void FUN_14588ccee(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14573ba8c(param_1,iVar1);
  }
  FUN_1406f851e((longlong)iVar1 * 8 + *param_1,1);
  return;
}



// FUNCTION 14588cd2a FUN_14588cd2a body=60 status=ok
// SIG undefined FUN_14588cd2a(void)

void FUN_14588cd2a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406f85ac(param_1,iVar1);
  }
  FUN_1406f857e((longlong)iVar1 * 0x420 + *param_1,1);
  return;
}



// FUNCTION 14588cd74 FUN_14588cd74 body=42 status=ok
// SIG undefined FUN_14588cd74(void)

void FUN_14588cd74(longlong param_1)

{
  FUN_14588cd9e();
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  *(undefined2 *)(param_1 + 0x2b2) = 1;
  *(undefined1 *)(param_1 + 0x2b4) = 0;
  return;
}



// FUNCTION 14588cd9e FUN_14588cd9e body=637 status=ok
// SIG undefined FUN_14588cd9e(void)

void FUN_14588cd9e(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *_Str;
  size_t sVar6;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 *local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  ulonglong uStack_1a0;
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1410ea50c();
  (**(code **)(*param_1 + 0x88))(param_1);
  plVar1 = param_1 + 6;
  cVar2 = FUN_144729dda(plVar1);
  if (cVar2 != '\0') {
    uVar4 = FUN_14479d2ce(plVar1);
    lVar5 = FUN_1407f492e(uVar4);
    if (lVar5 != 0) {
      local_1e8 = (undefined8 *)CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
      uStack_1e0 = (undefined8 *)CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
      FUN_14588d01c(lVar5,&local_1e8,&uStack_1e0);
      uVar4 = FUN_14479d2ce(plVar1);
      FUN_1412a49e6(uVar4,"Event_Input_Update_MouseLocation",&local_1e8,&uStack_1e0);
    }
    uVar3 = *(ushort *)(param_1 + 0x53);
    if ((uVar3 & 0x40) != 0) {
      uVar4 = FUN_14479d2ce(plVar1);
      local_1e8 = &local_1c8;
      uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
      local_1d8 = local_c8;
      uStack_1e0 = local_1e8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"ManualActivate",&local_1e8);
      local_48 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_40 = 0;
        local_38 = 0;
      }
      else {
        sVar6 = wcslen(_Str);
        FUN_1446fe5a4(local_c8,_Str,sVar6 & 0xffffffff,1);
      }
      FUN_1412a486e(uVar4,local_40);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if ((char)uStack_1d0 == '\x01') {
        FUN_1400020a8(local_1e8);
      }
      uVar3 = *(ushort *)(param_1 + 0x53);
    }
    if ((uVar3 & 0x20) != 0) {
      uVar4 = FUN_14001cc68(0xa0,0x10);
      local_1c8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1d8 = (undefined1 *)0x0;
      uStack_1d0 = 0;
      local_1e8 = (undefined8 *)0x0;
      uStack_1e0 = (undefined8 *)0x0;
      uStack_1c0 = 0x8000000000;
      local_1b8 = 0xffffffff;
      FUN_1446ddc76(local_c8,&DAT_14a491dee,1);
      lVar5 = FUN_14479d2ce(plVar1);
      local_1f0 = 0;
      local_1f8 = &local_1e8;
      FUN_145e14f3c(uVar4,param_1[6],lVar5 + 0x3a0,local_c8);
      FUN_140391314(param_1,uVar4);
      uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
      FUN_14064e7da(&local_1e8);
      uVar3 = *(ushort *)(param_1 + 0x53);
    }
    *(ushort *)(param_1 + 0x53) = uVar3 & 0xffbf;
  }
  if ((local_30 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588d01c FUN_14588d01c body=98 status=ok
// SIG undefined FUN_14588d01c(void)

void FUN_14588d01c(undefined8 param_1,double *param_2,double *param_3)

{
  char cVar1;
  undefined1 auStack_48 [40];
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14588d080(param_1,&local_1c,&local_20);
  if (cVar1 != '\0') {
    *param_2 = (double)local_1c;
    *param_3 = (double)local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588d080 FUN_14588d080 body=189 status=ok
// SIG undefined FUN_14588d080(void)

undefined8 FUN_14588d080(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar4 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if (lVar1 != 0) {
      uVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14588d11b;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30 && (plVar3 = *(longlong **)(lVar1 + 0x78), plVar3 != (longlong *)0x0)))) {
        uVar5 = (**(code **)(*plVar3 + 0x338))(plVar3,&local_30);
        if ((char)uVar5 != '\0') {
          *param_2 = (float)local_30;
          *param_3 = (float)local_28;
        }
        goto LAB_14588d11b;
      }
    }
  }
  uVar5 = 0;
LAB_14588d11b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588d13e FUN_14588d13e body=187 status=ok
// SIG undefined FUN_14588d13e(void)

void FUN_14588d13e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     (FUN_1405fd34a(&local_28,lVar5), local_20 != (longlong *)0x0)) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_14588d1fa(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14588d1fa FUN_14588d1fa body=95 status=ok
// SIG undefined FUN_14588d1fa(void)

void FUN_14588d1fa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      cVar4 = FUN_14069eaf4(lVar3 + 0x68,param_2);
      if (cVar4 != '\0') {
        FUN_14074668c(param_1,lVar3);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 14588d264 FUN_14588d264 body=41 status=ok
// SIG undefined FUN_14588d264(void)

void FUN_14588d264(longlong param_1,undefined8 param_2)

{
  FUN_1412a5136();
  FUN_140aa1618(param_1 + 0x1a0,param_2);
  return;
}



// FUNCTION 14588d28e FUN_14588d28e body=40 status=ok
// SIG undefined FUN_14588d28e(void)

undefined8 FUN_14588d28e(undefined8 param_1,int param_2)

{
  FUN_14588d2b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588d2b6 FUN_14588d2b6 body=257 status=ok
// SIG undefined FUN_14588d2b6(void)

void FUN_14588d2b6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a504d30;
  param_1[5] = &PTR_FUN_14a505030;
  plVar3 = (longlong *)param_1[0x329];
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
  plVar3 = (longlong *)param_1[0x327];
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
  if (param_1[0x324] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x322] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffd8aa(param_1 + 0x24e);
  FUN_1415bbd66(param_1 + 0xe4);
  FUN_14588d3b8(param_1 + 0x30);
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 14588d3b8 FUN_14588d3b8 body=19 status=ok
// SIG undefined FUN_14588d3b8(void)

void FUN_14588d3b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ee32c0;
  FUN_140ffd624(param_1 + 2);
  return;
}



// FUNCTION 14588d3cc FUN_14588d3cc body=864 status=ok
// SIG undefined FUN_14588d3cc(void)

undefined4 FUN_14588d3cc(longlong param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 auStack_158 [32];
  byte *local_138;
  longlong local_130 [2];
  undefined8 local_120;
  undefined4 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [112];
  byte local_78;
  undefined8 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  plVar11 = *(longlong **)(param_1 + 0xb8);
  bVar4 = true;
  local_138 = param_3;
  if (plVar11 == (longlong *)0x0) {
LAB_14588d68c:
    uVar12 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar11[1];
    do {
      if (iVar8 == 0) goto LAB_14588d68c;
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_1 + 0xb0);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    bVar4 = false;
  }
  local_108 = 0;
  local_100 = 0;
  local_110 = param_1;
  FUN_140146ccc(&local_108,param_4);
  if (!bVar4) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_f8 = uVar12;
  plStack_f0 = plVar11;
  FUN_140d600ee(local_e8,param_2);
  local_78 = *local_138;
  if (local_68 != 0xc) {
    FUN_1446efa72(&local_70,0,0xc,0x10);
    local_68 = 0xc;
  }
  puVar5 = local_70;
  *local_70 = &PTR_LAB_14b526cc0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_70[2] = lVar10;
  *local_70 = &PTR_FUN_14b527720;
  local_70[3] = local_110;
  local_70[4] = local_108;
  local_108 = 0;
  *(undefined4 *)(local_70 + 5) = local_100;
  local_100 = 0;
  local_70[6] = local_f8;
  local_70[7] = plStack_f0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  FUN_140d600ee(local_70 + 8,local_e8);
  *(byte *)(puVar5 + 0x16) = local_78;
  FUN_1412a532e(&local_110);
  if (DAT_14cb99c48 == (undefined8 *)0x0) {
    DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *DAT_14cb99c48 = 0;
    DAT_14cb99c48[1] = 0;
    DAT_14cb99c48[2] = 2;
  }
  local_120 = 0;
  local_118 = 0;
  FUN_1412f566c(&local_120,&local_70);
  FUN_14588d72e(param_2,&local_110);
  bVar3 = *local_138;
  FUN_14588d72e(param_1 + 0xc0,local_130);
  uVar9 = FUN_14588d9c0(local_130,bVar3 ^ 1,&local_110,&local_120);
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if (!bVar4) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_1449db362(&local_70);
  FUN_1449db362(param_4);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14588d72e FUN_14588d72e body=654 status=ok
// SIG undefined FUN_14588d72e(void)

undefined8 * FUN_14588d72e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(int *)(param_1 + 0x28) < 2) && (*(int *)(param_1 + 0x18) < 2)) &&
     (*(int *)(param_1 + 8) < 2)) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  FUN_1400b22c2(local_68,&DAT_14b52596d);
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < 2) {
    FUN_1400b22c2(local_88,&DAT_149e02088);
  }
  else {
    FUN_1400b22c2(local_98,L".Preview");
    FUN_144a7dea0(local_88,local_98,param_1 + 0x40);
  }
  FUN_1400b22c2(local_c8,L".Preview");
  FUN_1400b22c2(local_e8,"sip:.");
  FUN_144a7dea0(local_d8,local_e8,param_1 + 0x20);
  FUN_1401c7f3e(local_b8,local_d8,local_c8);
  FUN_144a7dea0(local_a8,local_b8,param_1 + 0x10);
  FUN_1401c7f3e(local_78,local_a8,local_88);
  FUN_1401c7f3e(local_58,local_78,local_68);
  FUN_144a7dea0(param_2,local_58,param_1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((1 < iVar1) && (local_98[0] != 0)) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588d9c0 FUN_14588d9c0 body=171 status=ok
// SIG undefined FUN_14588d9c0(void)

undefined4
FUN_14588d9c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  vx_req_account_control_communications_create(&local_38);
  uVar2 = FUN_14588da6c(param_1);
  *(undefined8 *)(local_38 + 0x30) = uVar2;
  *(undefined4 *)(local_38 + 0x38) = param_2;
  uVar2 = FUN_14588da6c(param_3);
  *(undefined8 *)(local_38 + 0x40) = uVar2;
  *(undefined4 *)(local_38 + 0x48) = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_1412f566c(&local_48,param_4);
  uVar1 = FUN_1412f579e(local_38,&local_48);
  FUN_1449db362(param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588da6c FUN_14588da6c body=195 status=ok
// SIG undefined FUN_14588da6c(void)

undefined8 FUN_14588da6c(undefined8 *param_1)

{
  wchar_t *_Str;
  size_t sVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [128];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 1) < 2) {
    uVar2 = 0;
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_30 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_28 = 0;
      local_20 = 0;
    }
    else {
      sVar1 = wcslen(_Str);
      FUN_1446fe5a4(local_b0,_Str,sVar1 & 0xffffffff,1);
    }
    uVar2 = vx_strdup(local_28);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588db30 FUN_14588db30 body=138 status=ok
// SIG undefined FUN_14588db30(void)

void FUN_14588db30(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14588dbba FUN_14588dbba body=257 status=ok
// SIG undefined FUN_14588dbba(void)

undefined4 FUN_14588dbba(int *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    uVar1 = FUN_1412a5d66();
    FUN_1412a5cfc(uVar1,*param_1,&local_58);
    local_68 = local_58;
    iStack_60 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iStack_60 = 0;
    }
    FUN_1412a5ca6(&local_48,&local_68);
    iStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    FUN_1412a5ca6(&local_48,&local_68);
    local_68._0_4_ = local_48;
    local_68._4_4_ = uStack_44;
    iStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    lVar2 = FUN_14588dcbc();
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = iStack_60;
    uStack_3c = uStack_5c;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 8));
    local_2c = 0xffffffff;
    FUN_1412a5dde(lVar2 + 0x60,&local_48,&local_2c);
    uVar3 = local_2c;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 8));
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588dcbc FUN_14588dcbc body=120 status=ok
// SIG undefined FUN_14588dcbc(void)

undefined * FUN_14588dcbc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845390) {
    FUN_144b3d300(&DAT_14c845390);
    if (DAT_14c845390 == -1) {
      FUN_1456aefde(&DAT_14c845218);
      DAT_14c845388 = &DAT_14c845218;
      atexit(FUN_14276a1e7);
      _Init_thread_footer(&DAT_14c845390);
    }
  }
  return DAT_14c845388;
}



// FUNCTION 14588dd34 FUN_14588dd34 body=63 status=ok
// SIG undefined FUN_14588dd34(void)

undefined1 FUN_14588dd34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14588dd74(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14588dd74 FUN_14588dd74 body=116 status=ok
// SIG undefined FUN_14588dd74(void)

undefined4 * FUN_14588dd74(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if ((*(longlong *)(param_1 + 4) != *(longlong *)(param_2 + 4)) || (param_1[6] != param_2[6])) {
    *(longlong *)(param_1 + 4) = *(longlong *)(param_2 + 4);
    param_1[6] = param_2[6];
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_14118c70e(param_1 + 10,param_2 + 10);
  (**(code **)(*(longlong *)(param_1 + 0x1a) + 0x20))(param_1 + 0x1a,0);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  FUN_1406022fe(param_1 + 0x1e,param_2 + 0x1e);
  return param_1;
}



// FUNCTION 14588dde8 FUN_14588dde8 body=112 status=ok
// SIG undefined FUN_14588dde8(void)

void FUN_14588dde8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14588de5a();
  local_18 = 0;
  local_28 = 0;
  local_20 = 1;
  local_38 = L"ProjectilesPerShot";
  local_30 = &DAT_10000000c;
  FUN_140c2c993(&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588de5a FUN_14588de5a body=615 status=ok
// SIG undefined FUN_14588de5a(void)

void FUN_14588de5a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  switchD_143c3d4dc::caseD_42();
  local_30 = 0;
  local_40 = 0;
  local_38 = 1;
  local_48 = 0;
  local_58 = 3;
  local_50 = 1;
  local_68 = L"FireRate";
  local_60 = (undefined1 *)0x100000000;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"AutomaticBurstCount";
  local_60 = &DAT_100000001;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"BurstFireDelay";
  local_60 = &DAT_100000002;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"BurstFireRateScale";
  local_60 = &DAT_100000003;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"ShotAmmoCost";
  local_60 = &DAT_100000004;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"Damage";
  local_60 = (undefined1 *)0x100000005;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"DamageRadius";
  local_60 = (undefined1 *)0x100000006;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"Spread";
  local_60 = &DAT_100000007;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"AccuracyImpulse";
  local_60 = &DAT_100000008;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"HeatImpulse";
  local_60 = (undefined1 *)0x100000009;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"bFireRateAccelActive";
  local_60 = &DAT_10000000b;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"RecoilScale";
  local_60 = &DAT_10000000a;
  FUN_140c2c993(&local_68,param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588e0d0 FUN_14588e0d0 body=45 status=ok
// SIG undefined FUN_14588e0d0(void)

undefined8 FUN_14588e0d0(undefined8 param_1,int param_2)

{
  FUN_14588e0fe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14588e0fe FUN_14588e0fe body=65 status=ok
// SIG undefined FUN_14588e0fe(void)

void FUN_14588e0fe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2699f0;
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
                    /* WARNING: Could not recover jumptable at 0x00014588e13b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14588e140 FUN_14588e140 body=118 status=ok
// SIG undefined FUN_14588e140(void)

void FUN_14588e140(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_1403ca102();
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar4 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14588e19d;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_14588e19d;
      }
    }
  }
  lVar5 = 0;
LAB_14588e19d:
  FUN_14588e1b6(lVar3,lVar5);
  return;
}



// FUNCTION 14588e1b6 FUN_14588e1b6 body=99 status=ok
// SIG undefined FUN_14588e1b6(void)

void FUN_14588e1b6(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((param_2 != 0) && (param_1[6] != 0)) && (*(longlong *)(param_1[6] + 0x360) != 0)) {
    iVar2 = FUN_14490d72a();
    if (iVar2 != 3) {
      cVar1 = (**(code **)(*param_1 + 0x498))(param_1);
      if ((byte)(cVar1 - 7U) < 2) {
        uVar3 = FUN_140d27a2a(param_1);
        FUN_1412a607c(uVar3,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14588e21a FUN_14588e21a body=42 status=ok
// SIG undefined FUN_14588e21a(void)

void FUN_14588e21a(void)

{
  if (DAT_14cbaee70 == '\0') {
    FUN_14588e244();
    FUN_14588e26a(FUN_145e4771e);
    DAT_14cbaee70 = '\x01';
  }
  return;
}



// FUNCTION 14588e244 FUN_14588e244 body=37 status=ok
// SIG undefined FUN_14588e244(void)

void FUN_14588e244(void)

{
  if (DAT_14cb5ee88 == '\0') {
    FUN_14588e26a(FUN_1486b0df8);
    DAT_14cb5ee88 = '\x01';
  }
  return;
}



// FUNCTION 14588e26a FUN_14588e26a body=13 status=ok
// SIG undefined FUN_14588e26a(void)

void FUN_14588e26a(undefined *param_1)

{
  if (param_1 != (undefined *)0x0) {
    PTR_FUN_14c761fe0 = param_1;
  }
  return;
}



// FUNCTION 14588e278 FUN_14588e278 body=38 status=ok
// SIG undefined FUN_14588e278(void)

undefined8 FUN_14588e278(undefined8 param_1,int param_2)

{
  FUN_1412a6194();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588e29e FUN_14588e29e body=53 status=ok
// SIG undefined FUN_14588e29e(void)

void FUN_14588e29e(longlong *param_1)

{
  FUN_14588e2d4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14588e2d4 FUN_14588e2d4 body=90 status=ok
// SIG undefined FUN_14588e2d4(void)

void FUN_14588e2d4(longlong param_1)

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



// FUNCTION 14588e32e FUN_14588e32e body=129 status=ok
// SIG undefined FUN_14588e32e(void)

void FUN_14588e32e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014588e3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14588e3b0 FUN_14588e3b0 body=58 status=ok
// SIG undefined FUN_14588e3b0(void)

void FUN_14588e3b0(longlong param_1)

{
  longlong lVar1;
  
  FUN_1412a62ac();
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  FUN_140f40f76(lVar1,param_1 + 0x2a8);
  return;
}



// FUNCTION 14588e3f4 FUN_14588e3f4 body=178 status=ok
// SIG undefined FUN_14588e3f4(void)

void FUN_14588e3f4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c7dc0;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_14588e4dd(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e514(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014588e4a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14588e4a6 FUN_14588e4a6 body=55 status=ok
// SIG undefined FUN_14588e4a6(void)

void FUN_14588e4a6(longlong *param_1)

{
  FUN_14588e54c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14588e4dd FUN_14588e4dd body=55 status=ok
// SIG undefined FUN_14588e4dd(void)

void FUN_14588e4dd(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x50;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x68;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14588e514 FUN_14588e514 body=55 status=ok
// SIG undefined FUN_14588e514(void)

void FUN_14588e514(longlong *param_1)

{
  FUN_14588e5c8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14588e54c FUN_14588e54c body=123 status=ok
// SIG undefined FUN_14588e54c(void)

void FUN_14588e54c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
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



// FUNCTION 14588e5c8 FUN_14588e5c8 body=388 status=ok
// SIG undefined FUN_14588e5c8(void)

void FUN_14588e5c8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_78 + (longlong)iStack_5c * 0x78 + 0x68)])();
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1410fd13e(param_1,param_2);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14588e74e FUN_14588e74e body=53 status=ok
// SIG undefined FUN_14588e74e(void)

void FUN_14588e74e(longlong *param_1)

{
  FUN_14588e784();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14588e784 FUN_14588e784 body=90 status=ok
// SIG undefined FUN_14588e784(void)

void FUN_14588e784(longlong param_1)

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



// FUNCTION 14588e7de FUN_14588e7de body=40 status=ok
// SIG undefined FUN_14588e7de(void)

undefined8 FUN_14588e7de(undefined8 param_1,int param_2)

{
  FUN_14588e806();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588e806 FUN_14588e806 body=59 status=ok
// SIG undefined FUN_14588e806(void)

void FUN_14588e806(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5d9b30;
  FUN_1447a1747(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e842(param_1);
  return;
}



// FUNCTION 14588e842 FUN_14588e842 body=59 status=ok
// SIG undefined FUN_14588e842(void)

void FUN_14588e842(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7043a0;
  FUN_14588e87d(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14588e87d FUN_14588e87d body=45 status=ok
// SIG undefined FUN_14588e87d(void)

void FUN_14588e87d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14588e8aa FUN_14588e8aa body=253 status=ok
// SIG undefined FUN_14588e8aa(void)

void FUN_14588e8aa(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"ENABLE_DEFORMER_BONES");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_28,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_28,L"GPUSKIN_BONE_INDEX_UINT16");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_28,L"GPUSKIN_BONE_WEIGHTS_UINT16");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588e9a8 FUN_14588e9a8 body=108 status=ok
// SIG undefined FUN_14588e9a8(void)

void FUN_14588e9a8(longlong param_1,undefined8 *param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined2 *puVar7;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar4,puVar7);
  puVar6 = (uint *)FUN_14588ea14(param_1,uVar5,param_2);
  if (*puVar6 == 0) {
    *puVar6 = param_3 << 0x10 | (uint)*(ushort *)(param_1 + 0x50);
    uVar1 = (ulonglong)(param_3 + -1 + (uint)(param_3 == 0)) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (int)lVar3;
  }
  return;
}



// FUNCTION 14588ea14 FUN_14588ea14 body=133 status=ok
// SIG undefined FUN_14588ea14(void)

longlong FUN_14588ea14(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1412a630a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_14588ea61;
  }
  local_30 = param_3;
  FUN_14588ea9a(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_14588ea61:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x10;
}



// FUNCTION 14588ea9a FUN_14588ea9a body=340 status=ok
// SIG undefined FUN_14588ea9a(void)

undefined4 * FUN_14588ea9a(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14588ec7e(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *local_40 = 0;
  iVar5 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_40 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)local_40 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_40,iVar5,0);
    memcpy((void *)*local_40,_Src,(longlong)iVar5 * 2);
  }
  *(undefined4 *)(local_40 + 2) = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_14588ebf0(param_1,param_3,local_40);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1412a63d0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588ebf0 FUN_14588ebf0 body=142 status=ok
// SIG undefined FUN_14588ebf0(void)

void FUN_14588ebf0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_1412a630a();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_146864a20(param_1,*param_4,1);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_14588ec24;
    }
  }
  uVar6 = 0;
LAB_14588ec24:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14588ec7e FUN_14588ec7e body=230 status=ok
// SIG undefined FUN_14588ec7e(void)

int * FUN_14588ec7e(longlong *param_1,int *param_2)

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



// FUNCTION 14588ed64 FUN_14588ed64 body=111 status=ok
// SIG undefined FUN_14588ed64(void)

void FUN_14588ed64(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14588edd4 FUN_14588edd4 body=121 status=ok
// SIG undefined FUN_14588edd4(void)

void FUN_14588edd4(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (param_2 <= iVar1) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1488dd2a2(param_1);
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  uVar2 = param_2 - iVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
    FUN_14588ee4e(param_1,iVar1);
  }
  if (uVar2 != 0) {
    memset((void *)((longlong)iVar1 * 0xc + *param_1),(int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff)
           ,(ulonglong)uVar2 * 0xc);
    return;
  }
  return;
}



// FUNCTION 14588ee4e FUN_14588ee4e body=147 status=ok
// SIG undefined FUN_14588ee4e(void)

void FUN_14588ee4e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14588eee2 FUN_14588eee2 body=63 status=ok
// SIG undefined FUN_14588eee2(void)

longlong FUN_14588eee2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1412a7732(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x90 + *param_1;
  FUN_14588ef21(lVar2);
  return lVar2;
}



// FUNCTION 14588ef21 FUN_14588ef21 body=49 status=ok
// SIG undefined FUN_14588ef21(void)

void FUN_14588ef21(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
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
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}



// FUNCTION 14588ef52 FUN_14588ef52 body=49 status=ok
// SIG undefined FUN_14588ef52(void)

void FUN_14588ef52(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1412a866a(param_1,param_3);
  FUN_1412a8e58(param_1,param_2);
  FUN_1412a7c20(param_1 + 0x30);
  return;
}



// FUNCTION 14588ef84 FUN_14588ef84 body=19 status=ok
// SIG undefined FUN_14588ef84(void)

undefined8 FUN_14588ef84(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x29c));
  }
  return 0;
}



// FUNCTION 14588ef97 FUN_14588ef97 body=42 status=ok
// SIG undefined FUN_14588ef97(void)

void FUN_14588ef97(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14588efc2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad1aba0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14588efc2 FUN_14588efc2 body=32 status=ok
// SIG undefined FUN_14588efc2(void)

undefined8 * FUN_14588efc2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad0b890;
  return param_1;
}



// FUNCTION 14588efe8 FUN_14588efe8 body=155 status=ok
// SIG undefined FUN_14588efe8(void)

void FUN_14588efe8(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x130);
    lVar4 = (longlong)*(int *)(param_1 + 0x138) * 0x68;
    do {
      cVar1 = FUN_144729dda(lVar3);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FUN_14479d2ce(lVar3);
        (**(code **)(*plVar2 + 0x420))(plVar2,0);
      }
      lVar3 = lVar3 + 0x68;
      lVar4 = lVar4 + -0x68;
    } while (lVar4 != 0);
  }
  FUN_14588f084(param_1 + 0x130);
  lVar3 = FUN_14479d2ce(param_1 + 0x128);
  if (lVar3 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_140aeefbc(lVar3,0,1);
  return;
}



// FUNCTION 14588f084 FUN_14588f084 body=100 status=ok
// SIG undefined FUN_14588f084(void)

void FUN_14588f084(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
      FUN_1481d9c04(param_1,iVar1);
    }
    FUN_14589d650((longlong)iVar1 * 0x68 + *param_1,-iVar1);
    return;
  }
  if (iVar1 != 0) {
    FUN_14588f0e8(param_1,iVar1);
    return;
  }
  return;
}



// FUNCTION 14588f0e8 FUN_14588f0e8 body=73 status=ok
// SIG undefined FUN_14588f0e8(void)

void FUN_14588f0e8(undefined8 *param_1,uint param_2)

{
  void *_Dst;
  uint uVar1;
  
  _Dst = (void *)*param_1;
  FUN_141308248(_Dst);
  uVar1 = param_2;
  if (*(int *)(param_1 + 1) - param_2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x68 + (longlong)_Dst),
            (longlong)(int)(*(int *)(param_1 + 1) - param_2) * 0x68);
    uVar1 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar1 - param_2;
  return;
}



// FUNCTION 14588f132 FUN_14588f132 body=158 status=ok
// SIG undefined FUN_14588f132(void)

bool FUN_14588f132(longlong param_1,undefined8 param_2)

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



// FUNCTION 14588f1ee FUN_14588f1ee body=299 status=ok
// SIG undefined FUN_14588f1ee(void)

void FUN_14588f1ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412aa84a();
  FUN_1446f470e(&local_58,L"ReplicatedChildActor",1);
  uVar1 = FUN_140d37e32();
  FUN_140d37e32();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ChildActorState",1);
  uVar1 = FUN_140d37e32();
  FUN_140d37e32();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ChildActorDefName",1);
  uVar1 = FUN_140d37e32();
  FUN_140d37e32();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588f31a FUN_14588f31a body=96 status=ok
// SIG undefined FUN_14588f31a(void)

undefined1 FUN_14588f31a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14588f37a(param_2,param_3);
    FUN_14588f37a(param_2 + 0x10,param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    FUN_14588f44c(param_2 + 0x28,param_3 + 0x28);
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_3 + 0x38);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 14588f37a FUN_14588f37a body=93 status=ok
// SIG undefined FUN_14588f37a(void)

undefined8 * FUN_14588f37a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410b3ba7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14588f3d8(param_1,iVar1);
      FUN_1412aac38(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14588f3d8 FUN_14588f3d8 body=115 status=ok
// SIG undefined FUN_14588f3d8(void)

void FUN_14588f3d8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14588f44c FUN_14588f44c body=93 status=ok
// SIG undefined FUN_14588f44c(void)

undefined8 * FUN_14588f44c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410b3bd6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14588f4de(param_1,iVar1);
      FUN_14588f4a9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14588f4a9 FUN_14588f4a9 body=52 status=ok
// SIG undefined FUN_14588f4a9(void)

void FUN_14588f4a9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14588f54e(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 14588f4de FUN_14588f4de body=111 status=ok
// SIG undefined FUN_14588f4de(void)

void FUN_14588f4de(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14588f54e FUN_14588f54e body=182 status=ok
// SIG undefined FUN_14588f54e(void)

longlong FUN_14588f54e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  
  FUN_14588f604();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_14588f652((undefined8 *)(param_1 + 0x18),iVar1,0);
    memcpy(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1 << 4);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  pvVar2 = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 0x30) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x28),iVar1,0);
    memcpy(*(void **)(param_1 + 0x28),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14588f604 FUN_14588f604 body=77 status=ok
// SIG undefined FUN_14588f604(void)

undefined8 * FUN_14588f604(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14588f3d8(param_1,iVar1,0);
    FUN_1412aac38(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14588f652 FUN_14588f652 body=98 status=ok
// SIG undefined FUN_14588f652(void)

void FUN_14588f652(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14588f6b4 FUN_14588f6b4 body=29 status=ok
// SIG undefined FUN_14588f6b4(void)

undefined8 FUN_14588f6b4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14588f6d2(*(undefined8 *)(param_1 + 0x20),param_2,param_3,0);
  return param_2;
}



// FUNCTION 14588f6d2 FUN_14588f6d2 body=120 status=ok
// SIG undefined FUN_14588f6d2(void)

undefined8
FUN_14588f6d2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140cd39b6(local_38,param_3,*param_1);
  FUN_14588f74c(param_1,param_2,local_38,param_4);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588f74c FUN_14588f74c body=1493 status=ok
// SIG undefined FUN_14588f74c(void)

longlong * FUN_14588f74c(undefined8 *param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  size_t sVar10;
  undefined2 *puVar11;
  wchar_t *_Str;
  longlong *plVar12;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  int local_e4;
  undefined8 *local_e0;
  longlong *local_d8;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x32);
  EnterCriticalSection(lpCriticalSection);
  plVar3 = param_1 + 0x28;
  iVar6 = *(int *)(param_3 + 1);
  if (iVar6 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*param_3;
  }
  iVar4 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar4 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar4,puVar11);
  iVar6 = FUN_1412ab3d0(plVar3,uVar5,param_3);
  if (iVar6 != -1) {
    lVar8 = *plVar3 + (longlong)iVar6 * 0x28;
    if ((lVar8 != 0) && (*plVar3 + (longlong)iVar6 * 0x28 != -0x10)) {
      *param_2 = *(longlong *)(lVar8 + 0x10);
      lVar8 = *(longlong *)(lVar8 + 0x18);
      param_2[1] = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1412ab498(*param_1,&local_f8,param_3);
  if (local_f8 != 0) {
    if (local_f0 == (longlong *)0x0) {
      *param_2 = local_f8;
      param_2[1] = 0;
    }
    else {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
      plVar9 = (longlong *)param_2[1];
      *param_2 = local_f8;
      param_2[1] = (longlong)local_f0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    goto LAB_14588f94c;
  }
  iVar6 = *(int *)(param_3 + 1);
  if (iVar6 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*param_3;
  }
  iVar4 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar4 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar4,puVar11);
  iVar6 = FUN_144a7df4c(param_1 + 7,uVar5,param_3);
  if (iVar6 != -1) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x2c8,0x10);
    FUN_1412ad1dc(puVar7,param_3);
    local_e0 = puVar7;
    lVar8 = FUN_14001cc68(0xe0,0x10);
    FUN_1412ab562(lVar8,&local_e0);
    plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_149e18e30;
    plVar9[2] = lVar8;
    if (plVar9 == (longlong *)0x0) {
      *param_2 = lVar8;
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      plVar12 = (longlong *)param_2[1];
      *param_2 = lVar8;
      if (plVar9 == plVar12) {
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
          plVar12 = plVar9;
joined_r0x00014588fa84:
          if (iVar6 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      else {
        param_2[1] = (longlong)plVar9;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar12 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
            goto joined_r0x00014588fa84;
          }
        }
      }
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_e0 != (undefined8 *)0x0) {
      (**(code **)*local_e0)(local_e0,1);
    }
    goto LAB_14588f94c;
  }
  local_e4 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  local_60 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar10 = wcslen(_Str);
    FUN_1449b853c(&local_e0,_Str,sVar10 & 0xffffffff,1);
  }
  local_100 = FUN_1424ebfe0(0,local_58,&local_e4);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_100 == 0) goto LAB_14588f94c;
  if ((param_4 == '\x01') || (local_e4 != -0x7f)) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x2c8,0x10);
    FUN_1412ad1dc(puVar7,param_3);
    local_e0 = puVar7;
    lVar8 = FUN_14001cc68(0xe0,0x10);
    FUN_1412ab562(lVar8,&local_e0);
    plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_149e18e30;
    plVar9[2] = lVar8;
    if (plVar9 == (longlong *)0x0) {
      *param_2 = lVar8;
      plVar12 = (longlong *)param_2[1];
      if (plVar12 != (longlong *)0x0) {
        param_2[1] = 0;
LAB_14588fc89:
        LOCK();
        plVar2 = plVar12 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (plVar9 != (longlong *)0x0) goto LAB_14588fcaf;
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      *param_2 = lVar8;
      plVar12 = (longlong *)param_2[1];
      if (plVar9 == plVar12) {
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      else {
        param_2[1] = (longlong)plVar9;
        if (plVar12 != (longlong *)0x0) goto LAB_14588fc89;
      }
LAB_14588fcaf:
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_e0 != (undefined8 *)0x0) {
      (**(code **)*local_e0)(local_e0,1);
    }
  }
  FUN_1424ea9f0(local_100);
LAB_14588f94c:
  plVar9 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_f0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar8 = *param_2;
  if (lVar8 != 0) {
    FUN_1412ab70c(lVar8,param_1 + 0x3d,0);
    EnterCriticalSection(lpCriticalSection);
    local_f0 = (longlong *)param_2[1];
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    local_d8 = &local_f8;
    local_f8 = lVar8;
    local_e0 = param_3;
    FUN_1458903f6(plVar3,&local_e4);
    plVar3 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_f0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14588fd22 FUN_14588fd22 body=23 status=ok
// SIG undefined FUN_14588fd22(void)

bool FUN_14588fd22(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1412ab670(param_1 + 8);
  return cVar1 != '\0';
}



// FUNCTION 14588fd3a FUN_14588fd3a body=29 status=ok
// SIG undefined FUN_14588fd3a(void)

undefined8 FUN_14588fd3a(longlong param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 14588fd58 FUN_14588fd58 body=29 status=ok
// SIG undefined FUN_14588fd58(void)

undefined8 FUN_14588fd58(longlong param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,param_1 + 0x22);
  return param_2;
}



// FUNCTION 14588fd76 FUN_14588fd76 body=29 status=ok
// SIG undefined FUN_14588fd76(void)

undefined8 FUN_14588fd76(longlong param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,param_1 + 0x1c);
  return param_2;
}



// FUNCTION 14588fd94 FUN_14588fd94 body=36 status=ok
// SIG undefined FUN_14588fd94(void)

undefined8 FUN_14588fd94(longlong param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,(longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0xd8));
  return param_2;
}



// FUNCTION 14588fdb8 FUN_14588fdb8 body=37 status=ok
// SIG undefined FUN_14588fdb8(void)

undefined8 FUN_14588fdb8(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412aca20(param_1 + 8);
  FUN_1400b22c2(param_2,uVar1);
  return param_2;
}



// FUNCTION 14588fdde FUN_14588fdde body=80 status=ok
// SIG undefined FUN_14588fdde(void)

longlong * FUN_14588fdde(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  
  FUN_1400b22c2(param_2);
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      sVar4 = *(short *)(lVar1 + lVar3);
      if (sVar4 == 0x5f) {
        sVar4 = 0x2d;
      }
      *(short *)(lVar1 + lVar3) = sVar4;
      lVar3 = lVar3 + 2;
    } while ((longlong)(int)lVar2 * 2 != lVar3);
  }
  return param_2;
}



// FUNCTION 14588fe2e FUN_14588fe2e body=114 status=ok
// SIG undefined FUN_14588fe2e(void)

undefined8 * FUN_14588fe2e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined2 local_50;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_FUN_149e18960;
  local_50 = 2;
  FUN_1412abb00(param_1 + 8,&local_58);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1412abb25(&local_58,param_2);
  FUN_140859a90(&local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588fea2 FUN_14588fea2 body=117 status=ok
// SIG undefined FUN_14588fea2(void)

undefined8 * FUN_14588fea2(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined2 local_50;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &PTR_FUN_149e18960;
  local_50 = 2;
  FUN_1412ac780(param_1 + 8,param_1 + 8,&local_58);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1412abb25(&local_58,param_2);
  FUN_140859a90(&local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588ff18 FUN_14588ff18 body=187 status=ok
// SIG undefined FUN_14588ff18(void)

undefined8 * FUN_14588ff18(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_148 [224];
  undefined **local_68;
  undefined2 local_60;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_68 = &PTR_FUN_149e18960;
  local_60 = 2;
  local_158 = 0;
  FUN_1412ae150(local_148,&DAT_149e178d0,0,0);
  FUN_1412ac780(param_1 + 8,local_148,&local_68);
  FUN_1414b3f60(local_148);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1412abb25(&local_68,param_2);
  FUN_140859a90(&local_68);
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588ffd4 FUN_14588ffd4 body=360 status=ok
// SIG undefined FUN_14588ffd4(void)

longlong * FUN_14588ffd4(longlong param_1,longlong *param_2)

{
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined **local_c0;
  undefined2 local_b8;
  undefined **local_80;
  undefined2 local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  param_1 = param_1 + 8;
  FUN_1412acc70(param_1,param_1,&local_80);
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1412abb25(&local_80);
  local_c0 = &PTR_FUN_149e18960;
  local_b8 = 2;
  FUN_1412aceb0(param_1,param_1,&local_c0);
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1412abb25(&local_c0,&local_e8);
  if ((int)uStack_e0 < 2) {
    *param_2 = local_d8;
    local_d8 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_d0._4_4_;
    uStack_d0 = 0;
  }
  else {
    FUN_1449b8608(local_f8,&local_d8,&DAT_149e19f34);
    FUN_144a7dea0(param_2,local_f8,&local_e8);
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_140859a90(&local_c0);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140859a90(&local_80);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589013e FUN_14589013e body=416 status=ok
// SIG undefined FUN_14589013e(void)

longlong * FUN_14589013e(longlong param_1,longlong *param_2)

{
  undefined1 auStack_128 [32];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined **local_c0;
  undefined2 local_b8;
  undefined **local_80;
  undefined2 local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  param_1 = param_1 + 8;
  FUN_1412aca30(param_1,param_1,&local_80);
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1412abb25(&local_80);
  local_c0 = &PTR_FUN_149e18960;
  local_b8 = 2;
  FUN_1412ac8d0(param_1,param_1,&local_c0);
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1412abb25(&local_c0,&local_e8);
  if ((int)uStack_e0 < 2) {
    *param_2 = local_d8;
    local_d8 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_d0._4_4_;
    uStack_d0 = 0;
  }
  else {
    FUN_1449b8608(local_108,&local_d8,&DAT_149e192ca);
    FUN_144a7dea0(local_f8,local_108,&local_e8);
    FUN_144a882a8(param_2,local_f8,&DAT_149e06144);
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_140859a90(&local_c0);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140859a90(&local_80);
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458902e0 FUN_1458902e0 body=276 status=ok
// SIG undefined FUN_1458902e0(void)

longlong * FUN_1458902e0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1412aca20(param_1 + 8);
  FUN_1400b22c2(param_2,uVar1);
  if ((int)param_2[1] == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  lVar3 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar2 + lVar3);
    uVar5 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)&DAT_149e178ec + lVar3);
    if (uVar4 != uVar6) break;
    if (uVar4 == 0) goto LAB_1458903be;
LAB_145890343:
    lVar3 = lVar3 + 2;
  }
  if ((uVar6 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_145890343;
  }
  if (uVar4 != uVar6) {
    FUN_1400d3e84(param_2,&local_28);
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
    if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
LAB_1458903be:
  FUN_14020fad6(param_2,&DAT_149e01eb4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1458903f6 FUN_1458903f6 body=316 status=ok
// SIG undefined FUN_1458903f6(void)

undefined4 * FUN_1458903f6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145890614(param_1,local_48);
  FUN_1458905a2(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_145890534(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145890708(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145890534 FUN_145890534 body=109 status=ok
// SIG undefined FUN_145890534(void)

undefined8 FUN_145890534(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_1412ab3d0(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_145ae9482(puVar1);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1467d7768(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 1458905a2 FUN_1458905a2 body=113 status=ok
// SIG undefined FUN_1458905a2(void)

undefined8 * FUN_1458905a2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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



// FUNCTION 145890614 FUN_145890614 body=243 status=ok
// SIG undefined FUN_145890614(void)

int * FUN_145890614(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145890708 FUN_145890708 body=485 status=ok
// SIG undefined FUN_145890708(void)

void FUN_145890708(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458908f6 FUN_1458908f6 body=192 status=ok
// SIG undefined FUN_1458908f6(void)

undefined8 * FUN_1458908f6(undefined8 *param_1)

{
  FUN_1458909b6();
  *param_1 = &PTR_FUN_14b1c5110;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3ff00000;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0x3ff0000000000000;
  param_1[0xa9] = 0x3ff0000000000000;
  param_1[0xaa] = 0x3ff0000000000000;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0x3ff00000;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0x3ff0000000000000;
  param_1[0xb5] = 0x3ff0000000000000;
  param_1[0xb6] = 0x3ff0000000000000;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c3) = 0;
  param_1[0xb9] = 0x3f800000;
  return param_1;
}



// FUNCTION 1458909b6 FUN_1458909b6 body=172 status=ok
// SIG undefined FUN_1458909b6(void)

undefined8 * FUN_1458909b6(undefined8 *param_1)

{
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b1c4860;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xd8 | 0x22;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  FUN_1405e47c6(param_1,0);
  FUN_1405bab3a(param_1,1);
  FUN_1405ba932(param_1,0);
  FUN_1403121a6(param_1,0);
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xfe;
  return param_1;
}



// FUNCTION 145890a68 FUN_145890a68 body=180 status=ok
// SIG undefined FUN_145890a68(void)

void FUN_145890a68(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_38 = param_1 + 1;
  FUN_145890b1e(lVar2 + 0x70,&local_2c);
  lVar2 = *(longlong *)(lVar2 + 0x70);
  lVar6 = (longlong)local_2c * 0x40;
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[3];
  lVar3 = param_1[2];
  *(longlong *)(lVar2 + 8 + lVar6) = lVar3;
  *(undefined8 *)(lVar2 + 0x2c + lVar6) = 0xffffffff00000000;
  *(undefined4 *)(lVar2 + 0x34 + lVar6) = 0xffffffff;
  if (cVar1 == '\x01') {
    *(int *)(lVar2 + lVar6 + 0x2c) = (int)lVar4;
    uVar5 = FUN_1481c88ee(lVar3 + 0x38,param_2);
    *(undefined4 *)(lVar2 + lVar6 + 0x34) = uVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145890b1e FUN_145890b1e body=371 status=ok
// SIG undefined FUN_145890b1e(void)

undefined4 * FUN_145890b1e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145890d48(param_1,local_88);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_50 = 0xffffffffffffffff;
  *local_80 = *(undefined8 *)*param_3;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0xffffffffffffffff;
  FUN_1412ae528(&local_78);
  *(undefined4 *)(local_80 + 7) = 0xffffffff;
  local_78 = CONCAT44(local_78._4_4_,local_88[0]);
  uVar7 = (int)((ulonglong)*local_80 >> 0x20) * 0x17 + (int)*local_80;
  cVar2 = FUN_145890c92(param_1,uVar7,local_80,&local_78);
  uVar1 = (undefined4)local_78;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_80 + 0x3c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_80 + 7) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = (undefined4)local_78;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145890e2a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145890c92 FUN_145890c92 body=181 status=ok
// SIG undefined FUN_145890c92(void)

undefined8 FUN_145890c92(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          FUN_1412ae528(puVar1 + 2);
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar12 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar13 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar12;
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar13;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_145829c4e(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145890d48 FUN_145890d48 body=226 status=ok
// SIG undefined FUN_145890d48(void)

int * FUN_145890d48(longlong *param_1,int *param_2)

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



// FUNCTION 145890e2a FUN_145890e2a body=459 status=ok
// SIG undefined FUN_145890e2a(void)

void FUN_145890e2a(longlong *param_1)

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
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145890ff6 FUN_145890ff6 body=147 status=ok
// SIG undefined FUN_145890ff6(void)

void FUN_145890ff6(longlong param_1,int param_2)

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



// FUNCTION 14589108a FUN_14589108a body=335 status=ok
// SIG undefined FUN_14589108a(void)

undefined4 * FUN_14589108a(undefined4 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14589126c(local_40);
  puVar1 = (ulonglong *)param_2[1];
  uVar8 = *(ulonglong *)*param_2;
  *local_38 = uVar8;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_1458911da(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14cb7f9f0 - DAT_14cb7fa1c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7fa30)) {
      uVar5 = DAT_14cb7fa30 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x14) = uVar5;
      puVar7 = DAT_14cb7fa28;
      if (DAT_14cb7fa28 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7fa20;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7fa30 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14cb7fa28;
      if (DAT_14cb7fa28 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7fa20;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7fa30 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14cb7fa30 = iVar9;
      FUN_14589137a();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458911da FUN_1458911da body=145 status=ok
// SIG undefined FUN_1458911da(void)

undefined8 FUN_1458911da(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7f9f0 - DAT_14cb7fa1c != 1) && (DAT_14cb7f9f0 != DAT_14cb7fa1c)) {
    puVar6 = &DAT_14cb7fa20;
    if (DAT_14cb7fa28 != (undefined *)0x0) {
      puVar6 = DAT_14cb7fa28;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7fa30 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7f9e8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1457bb324(*param_3);
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



// FUNCTION 14589126c FUN_14589126c body=270 status=ok
// SIG undefined FUN_14589126c(void)

int * FUN_14589126c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7fa18;
  iVar3 = DAT_14cb7f9f0;
  if (DAT_14cb7fa1c == 0) {
    iVar2 = DAT_14cb7f9f0 + 1;
    bVar7 = DAT_14cb7f9f4 == DAT_14cb7f9f0;
    DAT_14cb7f9f0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7f9e8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7f9f8,1);
    puVar4 = DAT_14cb7fa08;
    if (DAT_14cb7fa08 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7f9f8;
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
    lVar6 = (longlong)DAT_14cb7fa18;
    DAT_14cb7fa18 = *(int *)(DAT_14cb7f9e8 + 4 + lVar6 * 0x18);
    DAT_14cb7fa1c = DAT_14cb7fa1c + -1;
    if (DAT_14cb7fa1c != 0) {
      *(undefined4 *)(DAT_14cb7f9e8 + (longlong)DAT_14cb7fa18 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7f9f8;
  if (DAT_14cb7fa08 != (undefined *)0x0) {
    puVar4 = DAT_14cb7fa08;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7f9e8;
  return param_1;
}



// FUNCTION 14589137a FUN_14589137a body=524 status=ok
// SIG undefined FUN_14589137a(void)

void FUN_14589137a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
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
  if (DAT_14cb7fa28 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7fa28,0,0,4);
  }
  uVar7 = DAT_14cb7fa30;
  uVar2 = local_50;
  if (DAT_14cb7fa30 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cb7fa20,0,DAT_14cb7fa30,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14cb7fa28;
        if (DAT_14cb7fa28 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7fa20;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb7fa30 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7f9f8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7fa10 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7f9e8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14cb7fa30 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar4 * 0x18) = iVar8;
        puVar5 = DAT_14cb7fa28;
        if (DAT_14cb7fa28 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7fa20;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb7fa30 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb7fa28;
        if (DAT_14cb7fa28 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7fa20;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7fa30 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
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



// FUNCTION 145891588 FUN_145891588 body=151 status=ok
// SIG undefined FUN_145891588(void)

void FUN_145891588(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (param_2 <= iVar1) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      FUN_146e05808(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146e05864(param_1);
        return;
      }
    }
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  uVar2 = param_2 - iVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
    FUN_145891680(param_1,iVar1);
  }
  if (uVar2 != 0) {
    memset((void *)((longlong)iVar1 * 0x38 + *param_1),0,(ulonglong)uVar2 * 0x38);
    return;
  }
  return;
}



// FUNCTION 145891620 FUN_145891620 body=96 status=ok
// SIG undefined FUN_145891620(void)

void FUN_145891620(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 145891680 FUN_145891680 body=143 status=ok
// SIG undefined FUN_145891680(void)

void FUN_145891680(longlong param_1,int param_2)

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



// FUNCTION 145891726 FUN_145891726 body=114 status=ok
// SIG undefined FUN_145891726(void)

void FUN_145891726(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  if (((param_2 != 0) && (param_3 != 0)) && (DAT_14c963ff1 == '\x01')) {
    (**(code **)(*param_4 + 8))(param_4);
    (**(code **)(*param_4 + 0x18))(param_4,param_1);
    FUN_1412b22d8(param_2,param_3,param_4);
    (**(code **)(*param_4 + 0x20))(param_4);
                    /* WARNING: Could not recover jumptable at 0x000145891789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 0x10))(param_4);
    return;
  }
  return;
}



// FUNCTION 145891798 FUN_145891798 body=67 status=ok
// SIG undefined FUN_145891798(void)

undefined8 * FUN_145891798(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aaee970;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1458917dc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458917dc FUN_1458917dc body=45 status=ok
// SIG undefined FUN_1458917dc(void)

void FUN_1458917dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ecbd50;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145891818 FUN_145891818 body=40 status=ok
// SIG undefined FUN_145891818(void)

undefined8 FUN_145891818(undefined8 param_1,int param_2)

{
  FUN_145891840();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145891840 FUN_145891840 body=99 status=ok
// SIG undefined FUN_145891840(void)

void FUN_145891840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18d4d0;
  FUN_1458918eb(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1458918a3(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458918a3 FUN_1458918a3 body=72 status=ok
// SIG undefined FUN_1458918a3(void)

void FUN_1458918a3(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      *(undefined ***)(puVar1 + -4) = &PTR_FUN_14b18a090;
      FUN_144a65a1e(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458918eb FUN_1458918eb body=74 status=ok
// SIG undefined FUN_1458918eb(void)

void FUN_1458918eb(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      *(undefined ***)(puVar1 + -4) = &PTR_FUN_14b189ef0;
      FUN_1486ba411(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145891936 FUN_145891936 body=228 status=ok
// SIG undefined FUN_145891936(void)

void FUN_145891936(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145891a3a();
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar2 = FUN_144a7b4ca();
    if ((((*(longlong *)(param_1 + 0x398) != 0) && (lVar2 != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x398) + 0x10), lVar3 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      FUN_145891a1a();
    }
  }
  if (*(longlong **)(param_1 + 0xa80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa80) + 0x2a0))();
  }
  if (*(longlong **)(param_1 + 0x32f0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x32f0) + 0x2a0))();
  }
  if (*(longlong **)(param_1 + 0x3300) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x2a0))();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    lVar3 = FUN_1412016fe();
    lVar2 = *(longlong *)(param_1 + 0x440);
    if (((lVar2 != 0) && (lVar3 != 0)) &&
       ((lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0 &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))))) {
      *(undefined8 *)(lVar2 + 0x408) = 0;
    }
  }
  return;
}



// FUNCTION 145891a1a FUN_145891a1a body=21 status=ok
// SIG undefined FUN_145891a1a(void)

void FUN_145891a1a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1403b0700();
  FUN_145891a30(uVar1);
  return;
}



// FUNCTION 145891a30 FUN_145891a30 body=9 status=ok
// SIG undefined FUN_145891a30(void)

void FUN_145891a30(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_14079241e();
  return;
}



// FUNCTION 145891a3a FUN_145891a3a body=90 status=ok
// SIG undefined FUN_145891a3a(void)

void FUN_145891a3a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x3d8);
  FUN_145891a94(param_1);
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 != lVar2) {
    FUN_140c1abcc(param_1 + 0x9d8,lVar2);
    lVar2 = *(longlong *)(param_1 + 0x3d0);
  }
  FUN_1411a5e52(param_1 + 0x9f0,param_1,lVar2,lVar1);
  return;
}



// FUNCTION 145891a94 FUN_145891a94 body=46 status=ok
// SIG undefined FUN_145891a94(void)

void FUN_145891a94(longlong *param_1)

{
  FUN_145891ac2();
  if ((char)param_1[0x128] != '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145891abb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf08))(param_1);
  return;
}



// FUNCTION 145891ac2 FUN_145891ac2 body=256 status=ok
// SIG undefined FUN_145891ac2(void)

void FUN_145891ac2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x7b);
  if ((((plVar2 != (longlong *)0x0) && ((longlong *)param_1[0x7a] != plVar2)) &&
      ((longlong *)plVar2[0x78] == param_1)) && (plVar2[0x78] = 0, DAT_14c76146c == '\x01')) {
    (**(code **)(*plVar2 + 0x690))(plVar2);
  }
  lVar1 = param_1[0x7a];
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_38 = (longlong *)0x0;
  FUN_14485c47a(&local_38,lVar1);
  param_1[0x7b] = (longlong)local_38;
  (**(code **)(*param_1 + 0x6b0))(param_1,param_1[0x7a]);
  if ((longlong *)param_1[0x7a] != plVar2) {
    local_38 = plVar2;
    local_30 = (longlong *)param_1[0x7a];
    FUN_1447cd2ec(param_1 + 0x77);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145891bce FUN_145891bce body=32 status=ok
// SIG undefined FUN_145891bce(void)

undefined8 * FUN_145891bce(undefined8 *param_1)

{
  FUN_145891bee();
  *param_1 = &PTR_FUN_14a6a55f0;
  return param_1;
}



// FUNCTION 145891bee FUN_145891bee body=182 status=ok
// SIG undefined FUN_145891bee(void)

undefined8 * FUN_145891bee(undefined8 *param_1)

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
  memset(param_1 + 0x18,0,0xf0);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_14a6a4a70;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x20;
  FUN_144a5dc74(param_1 + 0x3c);
  FUN_144a5dc74(param_1 + 0x3e);
  FUN_144a5dc74(param_1 + 0x40);
  FUN_144a5dc74(param_1 + 0x42);
  return param_1;
}


